#include "platform.h"
#include "prov_tracer.h"

extern "C" {
#include "config.h"
#include "qemu-common.h"
#include "cpu.h"

#include "panda_plugin.h"
#include "panda_plugin_plugin.h"
#include "../osi/osi_types.h"		/**< Introspection data types. */
#include "../osi/osi_ext.h"		/**< Introspection API. */
#include "../osi/os_intro.h"		/**< Introspection callbacks. */
#include "syscalls/syscallents.h"

#include <stdio.h>
#include <glib.h>
#include <dlfcn.h>
#include <ctype.h>
#include <strings.h>
#include <errno.h>
}
#include <iostream>
#include <fstream>
#include <sstream>
#include <unordered_map>
#include "syscalls/syscalls_decode.h"
#include "process_info.h"

/*
 * Functions interfacing with QEMU/PANDA should be linked as C.
 * C++ function name mangling breaks linkage.
 */
extern "C" {
bool init_plugin(void *);
void uninit_plugin(void *);
void on_new_process(CPUState *, OsiProc *);
}

void *syscalls_dl;                      /**< DL handle for syscalls table. */
struct syscall_entry *syscalls;		/**< Syscalls table. */
ProcInfoMap pimap;





// ****************************************************************************
// Unused/debug callbacks
// ****************************************************************************
int vmi_pgd_changed(CPUState *env, target_ulong oldval, target_ulong newval) {
    LOG_INFO("PGD Update (%s): " TARGET_PTR_FMT " " TARGET_PTR_FMT, _CPU_MODE, oldval, newval);
    if (_IN_KERNEL) {	// this check is redundant - PGD only changed in kernel mode
	OsiProc *proc = get_current_process(env);
	LOG_INFO("Current process: %s, PID:" TARGET_PID_FMT ", PPID:" TARGET_PID_FMT,
	    proc->name, (int)proc->pid, (int)proc->ppid
	);
    }
    else { LOG_ERROR("PGD updated in user mode???"); }
    return 0;
}

int before_block_exec_cb(CPUState *env, TranslationBlock *tb) {
	return 0;
}
// ****************************************************************************





bool ins_translate_callback(CPUState *env, TARGET_PTR pc) {
#if defined(TARGET_I386)
    const int nbytes = 32;      // number of bytes to attempt to decode. sysenter/sysexit are 2 bytes long.
    const int ndecode = 1;      // number of instructions to decode
    unsigned int ndecoded;      // number of instructions actually decoded
    _DInst ins_decoded[ndecode];// the decoded instructions
    _DInst *ins;

    // with the DF_STOP_ON_SYS feature, decoding will stop on the first syscall related instruction
    // TODO: add a static buffer to decompose_from_mem() so that we don't need to read memory for every call
    ndecoded = decompose_from_mem(env, pc, nbytes, ins_decoded, ndecode, DF_STOP_ON_SYS);
    CHECK_WARN((ndecoded == 0), "0 instructions decoded. This shouldn't happen.");

    // we requested decoding 1 instruction - no loop needed
    ins = &ins_decoded[0];
    if (ins->flags == FLAG_NOT_DECODABLE) {
        return false;
    }

    // check the decoded instruction class instead of the specific opcode
    switch(META_GET_FC(ins->meta)) {
        case FC_SYS:
            return true;

        default:
	    return false;
    }
#else
    // have the function compiled, although initialization should fail earlier.
    // XXX: ARM
    return false;
#endif
}

int ins_exec_callback(CPUState *env, TARGET_PTR pc) {
#if defined(TARGET_I386)
    const int nbytes = 32;      // number of bytes to attempt to decode. sysenter/sysexit are 2 bytes long.
    const int ndecode = 1;      // number of instructions to decode
    unsigned int ndecoded;      // number of instructions actually decoded
    unsigned int nundecodable = 0;
    _DInst ins_decoded[ndecode];// the decoded instructions
    _DInst *ins;

    // with the DF_STOP_ON_SYS feature, decoding will stop on the first syscall related instruction
    ndecoded = decompose_from_mem(env, pc, nbytes, ins_decoded, ndecode, DF_STOP_ON_SYS);
    CHECK_WARN((ndecoded == 0), "0 instructions decoded. This shouldn't happen.");

    // loop through decoded instructions
    for (unsigned int i=0; i<ndecoded; i++) {
        ins = &ins_decoded[i];
        if (ins->flags == FLAG_NOT_DECODABLE) {
            nundecodable++;
            continue;
        }

	//HHHHHHHEEEEERRRREEE
    //if (! _IN_KERNEL) return 0;

	OsiProc *p = get_current_process(env);

	//auto pi_it = pimap.find(p->asid);
	//EXIT_ON_ERROR(pi_it == pimap.end(), "Unknow asid (" TARGET_PTR_FMT ") for %s (%d).", p->asid, p->name, (int)p->pid);
	//ProcInfo *pi = (*pi_it).second;

        switch(ins->opcode) {
            case distorm::I_SYSENTER:
            {
                // On Windows and Linux, the system call id is in EAX.
                //
                // On Linux, the PC will point to the same location for
                // each syscall: At kernel initialization time the routine
                // sysenter_setup() is called. It sets up a non-writable
                // page and writes code for the sysenter instruction if
                // the CPU supports that, and for the classical int 0x80
                // otherwise. Thus, the C library can use the fastest type
                // of system call by jumping to a fixed address in the
                // vsyscall page.
                // (http://www.win.tue.nl/~aeb/linux/lk/lk-4.html)

                //LOG_INFO("%s " TARGET_PID_FMT "(%s) PGD=" TARGET_PTR_FMT "/" TARGET_PTR_FMT "/" TARGET_PTR_FMT " PC=" TARGET_PTR_FMT " SYS:%s",
                    //_CPU_MODE, (int)p->pid, p->name, _PGD, pimap.at(_PGD)->p.asid, panda_virt_to_phys(env, p->asid), pc, syscall2str(env, pc)
                //);
            }
            break;

            case distorm::I_SYSEXIT:
            {
                //LOG_INFO("%s " TARGET_PID_FMT "(%s) PGD=" TARGET_PTR_FMT "/" TARGET_PTR_FMT " PC=" TARGET_PTR_FMT " SYS:%s",
                    //_CPU_MODE, (int)p->pid, p->name, _PGD, panda_virt_to_phys(env, p->asid), pc, "EXIT"
                //);
            }
            break;

            default:
            {
		LOG_WARN("Unexpected instrumented instruction: %s",
		    GET_MNEMONIC_NAME(ins->opcode)
		);
	    }
            break;
        }
	free_osiproc(p);
    }

    return 0;
#else
    // have the function compiled, although initialization should fail earlier.
    // XXX: ARM
    return 0;
#endif
}

void on_new_process(CPUState *env, OsiProc *p) {
    // asid addresses are in the kernel space - can be translated to physical addresses at any time
    TARGET_PTR asid_ph = panda_virt_to_phys(env, p->asid);

    LOG_INFO("PROV:NEWPROC: %-16s %5d %5d\t" TARGET_PTR_FMT " " TARGET_PTR_FMT,
	p->name, (int)p->pid, (int)p->ppid, p->asid, asid_ph
    );

    // create ProcInfo
    ProcInfo *pi = new ProcInfo(p);

    // insert ProcInfo - use asid_ph as the key
    auto inserted = pimap.insert(std::make_pair(asid_ph, pi));
    EXIT_ON_ERROR(inserted.second == false, "Duplicate key (" TARGET_PTR_FMT ") for new process %s (%d).",
	asid_ph, p->name, (int)p->pid
    );
    //EXIT_ON_ERROR( p->asid_ph != _PGD, "asid - PGD mismatch " TARGET_PTR_FMT " " TARGET_PTR_FMT " " TARGET_PTR_FMT, p->asid, asid_ph, _PGD);
}

void on_finished_process(CPUState *env, OsiProc *p) {
    TARGET_PTR asid_ph = panda_virt_to_phys(env, p->asid);
    LOG_INFO("PROV:EXITPROC: %-16s %5d %5d\t" TARGET_PTR_FMT " " TARGET_PTR_FMT,
	p->name, (int)p->pid, (int)p->ppid, p->asid, asid_ph
    );

    // remove ProcInfo
    auto pi_it = pimap.find(asid_ph);
    EXIT_ON_ERROR(pi_it == pimap.end(), "Unknow key (" TARGET_PTR_FMT ") for terminating process %s (%d).",
	asid_ph, p->name, (int)p->pid
    );
    ProcInfo *pi = (*pi_it).second;
    pimap.erase(pi_it);

    /* compare? */

    delete pi;
}

bool init_plugin(void *self) {
    // retrieve plugin arguments
    panda_arg_list *plugin_args = panda_get_args(PLUGIN_NAME);
    char *guest_os = g_strdup(panda_parse_string(plugin_args, "guest", "linux"));
    if (plugin_args != NULL) panda_free_args(plugin_args);

    // load syscalls table
    char *syscalls_dlname = NULL;
    if (g_strcmp0(guest_os, "linux") == 0) {
	syscalls_dlname = g_strdup_printf("panda_%s_syscallents_%s.so", PLUGIN_NAME, SYSCALLS_LINUX);
	ERRNO_CLEAR;
	if (
	    ((syscalls_dl = dlopen(syscalls_dlname, RTLD_NOW)) == NULL) ||
	    ((syscalls = (struct syscall_entry *)dlsym(syscalls_dl, "syscalls")) == NULL)
	) {
	    LOG_ERROR("%s", dlerror());
	    goto error1;
	}
    }
    else {
	LOG_ERROR("Unsupported OS: %s", guest_os);
	goto error0;
    }

    // initialize osi api
    if (!init_osi_api()) {
	LOG_ERROR("OSI API failed to initialize.");
	goto error1;
    }

#if defined(TARGET_I386)
    // initialize panda stuff
    panda_cb pcb;

    //pcb.before_block_exec = before_block_exec_cb;
    //panda_register_callback(self, PANDA_CB_BEFORE_BLOCK_EXEC, pcb);

    pcb.insn_translate = ins_translate_callback;
    panda_register_callback(self, PANDA_CB_INSN_TRANSLATE, pcb);

    pcb.insn_exec = ins_exec_callback;
    panda_register_callback(self, PANDA_CB_INSN_EXEC, pcb);

    //pcb.after_PGD_write = vmi_pgd_changed;
    //panda_register_callback(self, PANDA_CB_VMI_PGD_CHANGED, pcb);

#ifdef OSI_PROC_EVENTS
    PPP_REG_CB("osi", on_new_process, on_new_process);
    PPP_REG_CB("osi", on_finished_process, on_finished_process);
#else
#error "Process Event Callbacks not enabled!"
#endif

    return true;
#else
    LOG_ERROR("%s does not support target %s.", PLUGIN_NAME, TARGET_ARCH);
#endif


error1:
    g_free(syscalls_dlname);
    if (syscalls_dl != NULL) dlclose(syscalls_dl);

error0:
    g_free(guest_os);
    return false;
}

void uninit_plugin(void *self) {
    ERRNO_CLEAR;
    CHECK_WARN(dlclose(syscalls_dl) != 0, "%s", dlerror());
}


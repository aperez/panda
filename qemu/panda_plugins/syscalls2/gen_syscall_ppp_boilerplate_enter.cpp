#ifdef TARGET_ARM
PPP_CB_BOILERPLATE(on_sys_fallocate_enter)
PPP_CB_BOILERPLATE(on_sys_gettid_enter)
PPP_CB_BOILERPLATE(on_sys_getsid_enter)
PPP_CB_BOILERPLATE(on_sys_getpeername_enter)
PPP_CB_BOILERPLATE(on_arm_mremap_enter)
PPP_CB_BOILERPLATE(on_sys_setgroups_enter)
PPP_CB_BOILERPLATE(on_sys_pause_enter)
PPP_CB_BOILERPLATE(on_sys_fchdir_enter)
PPP_CB_BOILERPLATE(on_sys_sched_getaffinity_enter)
PPP_CB_BOILERPLATE(on_sys_getuid_enter)
PPP_CB_BOILERPLATE(on_sys_getresuid_enter)
PPP_CB_BOILERPLATE(on_sys_sched_setparam_enter)
PPP_CB_BOILERPLATE(on_sys_fchown_enter)
PPP_CB_BOILERPLATE(on_sys_munlockall_enter)
PPP_CB_BOILERPLATE(on_sys_socketpair_enter)
PPP_CB_BOILERPLATE(on_sys_shmat_enter)
PPP_CB_BOILERPLATE(on_sys_io_destroy_enter)
PPP_CB_BOILERPLATE(on_sys_msync_enter)
PPP_CB_BOILERPLATE(on_sys_epoll_create1_enter)
PPP_CB_BOILERPLATE(on_sys_utimes_enter)
PPP_CB_BOILERPLATE(on_sys_mincore_enter)
PPP_CB_BOILERPLATE(on_sys_sched_setscheduler_enter)
PPP_CB_BOILERPLATE(on_sys_exit_group_enter)
PPP_CB_BOILERPLATE(on_sys_getrusage_enter)
PPP_CB_BOILERPLATE(on_sys_futimesat_enter)
PPP_CB_BOILERPLATE(on_sys_vmsplice_enter)
PPP_CB_BOILERPLATE(on_sys_chdir_enter)
PPP_CB_BOILERPLATE(on_sys_kill_enter)
PPP_CB_BOILERPLATE(on_sys_setgid16_enter)
PPP_CB_BOILERPLATE(on_sys_tee_enter)
PPP_CB_BOILERPLATE(on_sys_fdatasync_enter)
PPP_CB_BOILERPLATE(on_sys_ioprio_get_enter)
PPP_CB_BOILERPLATE(on_sys_sendfile64_enter)
PPP_CB_BOILERPLATE(on_sys_writev_enter)
PPP_CB_BOILERPLATE(on_sys_setrlimit_enter)
PPP_CB_BOILERPLATE(on_sys_setregid_enter)
PPP_CB_BOILERPLATE(on_sys_inotify_rm_watch_enter)
PPP_CB_BOILERPLATE(on_sys_poll_enter)
PPP_CB_BOILERPLATE(on_sys_getpgrp_enter)
PPP_CB_BOILERPLATE(on_sys_unlinkat_enter)
PPP_CB_BOILERPLATE(on_sys_clock_settime_enter)
PPP_CB_BOILERPLATE(on_sys_chown16_enter)
PPP_CB_BOILERPLATE(on_sys_uselib_enter)
PPP_CB_BOILERPLATE(on_sys_settimeofday_enter)
PPP_CB_BOILERPLATE(on_sys_setreuid16_enter)
PPP_CB_BOILERPLATE(on_sys_newstat_enter)
PPP_CB_BOILERPLATE(on_sys_rt_sigpending_enter)
PPP_CB_BOILERPLATE(on_sys_connect_enter)
PPP_CB_BOILERPLATE(on_sys_fgetxattr_enter)
PPP_CB_BOILERPLATE(on_sys_tkill_enter)
PPP_CB_BOILERPLATE(on_sys_chown_enter)
PPP_CB_BOILERPLATE(on_sigaction_enter)
PPP_CB_BOILERPLATE(on_sys_getpgid_enter)
PPP_CB_BOILERPLATE(on_sys_get_robust_list_enter)
PPP_CB_BOILERPLATE(on_sys_quotactl_enter)
PPP_CB_BOILERPLATE(on_sys_setgroups16_enter)
PPP_CB_BOILERPLATE(on_sys_bind_enter)
PPP_CB_BOILERPLATE(on_sys_removexattr_enter)
PPP_CB_BOILERPLATE(on_sys_getpid_enter)
PPP_CB_BOILERPLATE(on_sys_mprotect_enter)
PPP_CB_BOILERPLATE(on_sys_faccessat_enter)
PPP_CB_BOILERPLATE(on_sys_getsockopt_enter)
PPP_CB_BOILERPLATE(on_sys_sigpending_enter)
PPP_CB_BOILERPLATE(on_sys_shmctl_enter)
PPP_CB_BOILERPLATE(on_sys_restart_syscall_enter)
PPP_CB_BOILERPLATE(on_sys_epoll_ctl_enter)
PPP_CB_BOILERPLATE(on_sys_fstatfs_enter)
PPP_CB_BOILERPLATE(on_sys_setxattr_enter)
PPP_CB_BOILERPLATE(on_ARM_usr32_mode_enter)
PPP_CB_BOILERPLATE(on_sys_futex_enter)
PPP_CB_BOILERPLATE(on_sys_signalfd_enter)
PPP_CB_BOILERPLATE(on_sys_lsetxattr_enter)
PPP_CB_BOILERPLATE(on_sys_recvfrom_enter)
PPP_CB_BOILERPLATE(on_sys_getgroups16_enter)
PPP_CB_BOILERPLATE(on_sys_capget_enter)
PPP_CB_BOILERPLATE(on_sys_symlink_enter)
PPP_CB_BOILERPLATE(on_sys_bdflush_enter)
PPP_CB_BOILERPLATE(on_sys_newfstat_enter)
PPP_CB_BOILERPLATE(on_sys_setresuid_enter)
PPP_CB_BOILERPLATE(on_sys_arm_fadvise64_64_enter)
PPP_CB_BOILERPLATE(on_sys_semtimedop_enter)
PPP_CB_BOILERPLATE(on_sys_gettimeofday_enter)
PPP_CB_BOILERPLATE(on_sys_mknodat_enter)
PPP_CB_BOILERPLATE(on_sys_mq_unlink_enter)
PPP_CB_BOILERPLATE(on_sys_setresuid16_enter)
PPP_CB_BOILERPLATE(on_sys_getxattr_enter)
PPP_CB_BOILERPLATE(on_fork_enter)
PPP_CB_BOILERPLATE(on_sys_mq_timedsend_enter)
PPP_CB_BOILERPLATE(on_sys_timerfd_settime_enter)
PPP_CB_BOILERPLATE(on_sys_getitimer_enter)
PPP_CB_BOILERPLATE(on_sys_semop_enter)
PPP_CB_BOILERPLATE(on_sys_getresuid16_enter)
PPP_CB_BOILERPLATE(on_sys_epoll_wait_enter)
PPP_CB_BOILERPLATE(on_sys_inotify_init_enter)
PPP_CB_BOILERPLATE(on_sys_shmdt_enter)
PPP_CB_BOILERPLATE(on_sys_setfsuid16_enter)
PPP_CB_BOILERPLATE(on_sys_recv_enter)
PPP_CB_BOILERPLATE(on_sys_pciconfig_iobase_enter)
PPP_CB_BOILERPLATE(on_sys_clock_gettime_enter)
PPP_CB_BOILERPLATE(on_sys_add_key_enter)
PPP_CB_BOILERPLATE(on_ARM_breakpoint_enter)
PPP_CB_BOILERPLATE(on_sys_setfsuid_enter)
PPP_CB_BOILERPLATE(on_sys_msgsnd_enter)
PPP_CB_BOILERPLATE(on_sys_readlinkat_enter)
PPP_CB_BOILERPLATE(on_rt_sigaction_enter)
PPP_CB_BOILERPLATE(on_sys_nfsservctl_enter)
PPP_CB_BOILERPLATE(on_sys_mbind_enter)
PPP_CB_BOILERPLATE(on_sys_lgetxattr_enter)
PPP_CB_BOILERPLATE(on_sys_fchown16_enter)
PPP_CB_BOILERPLATE(on_sys_linkat_enter)
PPP_CB_BOILERPLATE(on_sys_truncate_enter)
PPP_CB_BOILERPLATE(on_sys_ioprio_set_enter)
PPP_CB_BOILERPLATE(on_sys_chroot_enter)
PPP_CB_BOILERPLATE(on_sys_rename_enter)
PPP_CB_BOILERPLATE(on_sys_getpriority_enter)
PPP_CB_BOILERPLATE(on_sys_readv_enter)
PPP_CB_BOILERPLATE(on_sys_waitid_enter)
PPP_CB_BOILERPLATE(on_sys_nanosleep_enter)
PPP_CB_BOILERPLATE(on_sys_io_setup_enter)
PPP_CB_BOILERPLATE(on_do_sigaltstack_enter)
PPP_CB_BOILERPLATE(on_sys_msgctl_enter)
PPP_CB_BOILERPLATE(on_sys_symlinkat_enter)
PPP_CB_BOILERPLATE(on_sys_lseek_enter)
PPP_CB_BOILERPLATE(on_sys_madvise_enter)
PPP_CB_BOILERPLATE(on_sys_fremovexattr_enter)
PPP_CB_BOILERPLATE(on_sys_setfsgid16_enter)
PPP_CB_BOILERPLATE(on_sys_getppid_enter)
PPP_CB_BOILERPLATE(on_sys_mknod_enter)
PPP_CB_BOILERPLATE(on_sys_pipe2_enter)
PPP_CB_BOILERPLATE(on_clone_enter)
PPP_CB_BOILERPLATE(on_sys_sched_get_priority_min_enter)
PPP_CB_BOILERPLATE(on_sys_fcntl_enter)
PPP_CB_BOILERPLATE(on_sys_listen_enter)
PPP_CB_BOILERPLATE(on_sys_fchmodat_enter)
PPP_CB_BOILERPLATE(on_sys_chmod_enter)
PPP_CB_BOILERPLATE(on_sys_getgid_enter)
PPP_CB_BOILERPLATE(on_sys_eventfd2_enter)
PPP_CB_BOILERPLATE(on_sys_sysfs_enter)
PPP_CB_BOILERPLATE(on_sys_mkdir_enter)
PPP_CB_BOILERPLATE(on_sys_getcwd_enter)
PPP_CB_BOILERPLATE(on_sys_fsync_enter)
PPP_CB_BOILERPLATE(on_sys_truncate64_enter)
PPP_CB_BOILERPLATE(on_sys_remap_file_pages_enter)
PPP_CB_BOILERPLATE(on_sys_fsetxattr_enter)
PPP_CB_BOILERPLATE(on_sys_timer_gettime_enter)
PPP_CB_BOILERPLATE(on_sys_unlink_enter)
PPP_CB_BOILERPLATE(on_ARM_cmpxchg_enter)
PPP_CB_BOILERPLATE(on_sys_swapon_enter)
PPP_CB_BOILERPLATE(on_sys_clock_nanosleep_enter)
PPP_CB_BOILERPLATE(on_sys_getresgid16_enter)
PPP_CB_BOILERPLATE(on_sys_newuname_enter)
PPP_CB_BOILERPLATE(on_sys_io_submit_enter)
PPP_CB_BOILERPLATE(on_sys_setpgid_enter)
PPP_CB_BOILERPLATE(on_sys_setuid16_enter)
PPP_CB_BOILERPLATE(on_sys_mq_notify_enter)
PPP_CB_BOILERPLATE(on_sys_select_enter)
PPP_CB_BOILERPLATE(on_sys_rt_sigprocmask_enter)
PPP_CB_BOILERPLATE(on_sys_personality_enter)
PPP_CB_BOILERPLATE(on_sys_eventfd_enter)
PPP_CB_BOILERPLATE(on_sys_kexec_load_enter)
PPP_CB_BOILERPLATE(on_sys_sched_get_priority_max_enter)
PPP_CB_BOILERPLATE(on_sys_socket_enter)
PPP_CB_BOILERPLATE(on_sys_splice_enter)
PPP_CB_BOILERPLATE(on_sys_msgget_enter)
PPP_CB_BOILERPLATE(on_sys_get_mempolicy_enter)
PPP_CB_BOILERPLATE(on_sys_setpriority_enter)
PPP_CB_BOILERPLATE(on_sys_getrlimit_enter)
PPP_CB_BOILERPLATE(on_sys_umount_enter)
PPP_CB_BOILERPLATE(on_sys_newlstat_enter)
PPP_CB_BOILERPLATE(on_sys_init_module_enter)
PPP_CB_BOILERPLATE(on_sys_semctl_enter)
PPP_CB_BOILERPLATE(on_sys_msgrcv_enter)
PPP_CB_BOILERPLATE(on_sys_epoll_create_enter)
PPP_CB_BOILERPLATE(on_sys_llseek_enter)
PPP_CB_BOILERPLATE(on_sys_adjtimex_enter)
PPP_CB_BOILERPLATE(on_sys_prctl_enter)
PPP_CB_BOILERPLATE(on_sys_close_enter)
PPP_CB_BOILERPLATE(on_sys_ioctl_enter)
PPP_CB_BOILERPLATE(on_sys_acct_enter)
PPP_CB_BOILERPLATE(on_sys_inotify_add_watch_enter)
PPP_CB_BOILERPLATE(on_sys_lchown_enter)
PPP_CB_BOILERPLATE(on_sys_fchmod_enter)
PPP_CB_BOILERPLATE(on_sys_flock_enter)
PPP_CB_BOILERPLATE(on_sys_swapoff_enter)
PPP_CB_BOILERPLATE(on_sys_timer_create_enter)
PPP_CB_BOILERPLATE(on_sys_mq_open_enter)
PPP_CB_BOILERPLATE(on_sys_pwrite64_enter)
PPP_CB_BOILERPLATE(on_sys_sched_setaffinity_enter)
PPP_CB_BOILERPLATE(on_sys_sendfile_enter)
PPP_CB_BOILERPLATE(on_sys_set_tid_address_enter)
PPP_CB_BOILERPLATE(on_sys_fstat64_enter)
PPP_CB_BOILERPLATE(on_sys_pciconfig_read_enter)
PPP_CB_BOILERPLATE(on_sys_send_enter)
PPP_CB_BOILERPLATE(on_sys_getsockname_enter)
PPP_CB_BOILERPLATE(on_sys_fstatat64_enter)
PPP_CB_BOILERPLATE(on_sys_keyctl_enter)
PPP_CB_BOILERPLATE(on_sys_sysctl_enter)
PPP_CB_BOILERPLATE(on_sys_lstat64_enter)
PPP_CB_BOILERPLATE(on_sys_ustat_enter)
PPP_CB_BOILERPLATE(on_sys_flistxattr_enter)
PPP_CB_BOILERPLATE(on_sys_move_pages_enter)
PPP_CB_BOILERPLATE(on_sys_geteuid_enter)
PPP_CB_BOILERPLATE(on_sys_munmap_enter)
PPP_CB_BOILERPLATE(on_sys_listxattr_enter)
PPP_CB_BOILERPLATE(on_sys_setresgid16_enter)
PPP_CB_BOILERPLATE(on_sys_sendto_enter)
PPP_CB_BOILERPLATE(on_sys_exit_enter)
PPP_CB_BOILERPLATE(on_sys_clock_getres_enter)
PPP_CB_BOILERPLATE(on_sys_inotify_init1_enter)
PPP_CB_BOILERPLATE(on_sys_readahead_enter)
PPP_CB_BOILERPLATE(on_sys_fstatfs64_enter)
PPP_CB_BOILERPLATE(on_execve_enter)
PPP_CB_BOILERPLATE(on_sys_timer_delete_enter)
PPP_CB_BOILERPLATE(on_sys_request_key_enter)
PPP_CB_BOILERPLATE(on_sys_statfs_enter)
PPP_CB_BOILERPLATE(on_sys_dup_enter)
PPP_CB_BOILERPLATE(on_sys_pipe_enter)
PPP_CB_BOILERPLATE(on_sigreturn_enter)
PPP_CB_BOILERPLATE(on_sys_recvmsg_enter)
PPP_CB_BOILERPLATE(on_sys_sendmsg_enter)
PPP_CB_BOILERPLATE(on_sys_getgid16_enter)
PPP_CB_BOILERPLATE(on_sys_sync_enter)
PPP_CB_BOILERPLATE(on_sys_setdomainname_enter)
PPP_CB_BOILERPLATE(on_sys_access_enter)
PPP_CB_BOILERPLATE(on_sys_getcpu_enter)
PPP_CB_BOILERPLATE(on_sys_nice_enter)
PPP_CB_BOILERPLATE(on_ARM_null_segfault_enter)
PPP_CB_BOILERPLATE(on_ARM_set_tls_enter)
PPP_CB_BOILERPLATE(on_sys_ftruncate64_enter)
PPP_CB_BOILERPLATE(on_sys_mq_timedreceive_enter)
PPP_CB_BOILERPLATE(on_sys_stat64_enter)
PPP_CB_BOILERPLATE(on_sys_unshare_enter)
PPP_CB_BOILERPLATE(on_vfork_enter)
PPP_CB_BOILERPLATE(on_sys_times_enter)
PPP_CB_BOILERPLATE(on_sys_sysinfo_enter)
PPP_CB_BOILERPLATE(on_sys_io_cancel_enter)
PPP_CB_BOILERPLATE(on_sys_pciconfig_write_enter)
PPP_CB_BOILERPLATE(on_sys_dup3_enter)
PPP_CB_BOILERPLATE(on_sys_rt_sigtimedwait_enter)
PPP_CB_BOILERPLATE(on_sys_fchownat_enter)
PPP_CB_BOILERPLATE(on_sys_read_enter)
PPP_CB_BOILERPLATE(on_sys_setsockopt_enter)
PPP_CB_BOILERPLATE(on_sys_accept_enter)
PPP_CB_BOILERPLATE(on_sys_set_robust_list_enter)
PPP_CB_BOILERPLATE(on_sys_sched_getscheduler_enter)
PPP_CB_BOILERPLATE(on_sys_wait4_enter)
PPP_CB_BOILERPLATE(on_sys_delete_module_enter)
PPP_CB_BOILERPLATE(on_sys_mlockall_enter)
PPP_CB_BOILERPLATE(on_sys_setregid16_enter)
PPP_CB_BOILERPLATE(on_sys_geteuid16_enter)
PPP_CB_BOILERPLATE(on_sys_statfs64_enter)
PPP_CB_BOILERPLATE(on_sys_getuid16_enter)
PPP_CB_BOILERPLATE(on_sys_semget_enter)
PPP_CB_BOILERPLATE(on_sys_capset_enter)
PPP_CB_BOILERPLATE(on_sys_dup2_enter)
PPP_CB_BOILERPLATE(on_sys_tgkill_enter)
PPP_CB_BOILERPLATE(on_sys_renameat_enter)
PPP_CB_BOILERPLATE(on_sys_setsid_enter)
PPP_CB_BOILERPLATE(on_sys_setitimer_enter)
PPP_CB_BOILERPLATE(on_sys_lremovexattr_enter)
PPP_CB_BOILERPLATE(on_sys_llistxattr_enter)
PPP_CB_BOILERPLATE(on_sys_reboot_enter)
PPP_CB_BOILERPLATE(on_sys_brk_enter)
PPP_CB_BOILERPLATE(on_sys_setreuid_enter)
PPP_CB_BOILERPLATE(on_ARM_user26_mode_enter)
PPP_CB_BOILERPLATE(on_sys_shutdown_enter)
PPP_CB_BOILERPLATE(on_sys_creat_enter)
PPP_CB_BOILERPLATE(on_sys_sched_rr_get_interval_enter)
PPP_CB_BOILERPLATE(on_sys_ptrace_enter)
PPP_CB_BOILERPLATE(on_sys_sync_file_range2_enter)
PPP_CB_BOILERPLATE(on_sys_setfsgid_enter)
PPP_CB_BOILERPLATE(on_sys_setuid_enter)
PPP_CB_BOILERPLATE(on_sys_getegid16_enter)
PPP_CB_BOILERPLATE(on_sys_sethostname_enter)
PPP_CB_BOILERPLATE(on_sys_timerfd_create_enter)
PPP_CB_BOILERPLATE(on_sys_set_mempolicy_enter)
PPP_CB_BOILERPLATE(on_sys_mkdirat_enter)
PPP_CB_BOILERPLATE(on_sys_timerfd_gettime_enter)
PPP_CB_BOILERPLATE(on_sys_syslog_enter)
PPP_CB_BOILERPLATE(on_sys_getdents_enter)
PPP_CB_BOILERPLATE(on_sys_rt_sigsuspend_enter)
PPP_CB_BOILERPLATE(on_sys_lookup_dcookie_enter)
PPP_CB_BOILERPLATE(on_sys_sched_yield_enter)
PPP_CB_BOILERPLATE(on_sys_timer_settime_enter)
PPP_CB_BOILERPLATE(on_sigsuspend_enter)
PPP_CB_BOILERPLATE(on_sys_sigprocmask_enter)
PPP_CB_BOILERPLATE(on_sys_getegid_enter)
PPP_CB_BOILERPLATE(on_sys_signalfd4_enter)
PPP_CB_BOILERPLATE(on_sys_lchown16_enter)
PPP_CB_BOILERPLATE(on_sys_readlink_enter)
PPP_CB_BOILERPLATE(on_sys_sched_getparam_enter)
PPP_CB_BOILERPLATE(on_sys_ftruncate_enter)
PPP_CB_BOILERPLATE(on_sys_openat_enter)
PPP_CB_BOILERPLATE(on_ARM_cacheflush_enter)
PPP_CB_BOILERPLATE(on_sys_pivot_root_enter)
PPP_CB_BOILERPLATE(on_sys_link_enter)
PPP_CB_BOILERPLATE(on_sys_vhangup_enter)
PPP_CB_BOILERPLATE(on_sys_pread64_enter)
PPP_CB_BOILERPLATE(on_sys_write_enter)
PPP_CB_BOILERPLATE(on_sys_mount_enter)
PPP_CB_BOILERPLATE(on_sys_setgid_enter)
PPP_CB_BOILERPLATE(on_sys_mlock_enter)
PPP_CB_BOILERPLATE(on_sys_shmget_enter)
PPP_CB_BOILERPLATE(on_sys_mq_getsetattr_enter)
PPP_CB_BOILERPLATE(on_sys_setresgid_enter)
PPP_CB_BOILERPLATE(on_sys_getgroups_enter)
PPP_CB_BOILERPLATE(on_sys_getresgid_enter)
PPP_CB_BOILERPLATE(on_sys_getdents64_enter)
PPP_CB_BOILERPLATE(on_sys_io_getevents_enter)
PPP_CB_BOILERPLATE(on_sys_rt_sigqueueinfo_enter)
PPP_CB_BOILERPLATE(on_sys_umask_enter)
PPP_CB_BOILERPLATE(on_sys_open_enter)
PPP_CB_BOILERPLATE(on_sys_timer_getoverrun_enter)
PPP_CB_BOILERPLATE(on_do_mmap2_enter)
PPP_CB_BOILERPLATE(on_sys_fcntl64_enter)
PPP_CB_BOILERPLATE(on_sys_rmdir_enter)
PPP_CB_BOILERPLATE(on_sys_munlock_enter)
PPP_CB_BOILERPLATE(on_sys_utimensat_enter)
#endif
#ifdef TARGET_I386
PPP_CB_BOILERPLATE(on_NtQueryEaFile_enter)
PPP_CB_BOILERPLATE(on_sys_gettid_enter)
PPP_CB_BOILERPLATE(on_sys_getsid_enter)
PPP_CB_BOILERPLATE(on_NtCreateEvent_enter)
PPP_CB_BOILERPLATE(on_NtQueryFullAttributesFile_enter)
PPP_CB_BOILERPLATE(on_NtReadFileScatter_enter)
PPP_CB_BOILERPLATE(on_sys_open_by_handle_at_enter)
PPP_CB_BOILERPLATE(on_sys_pwritev_enter)
PPP_CB_BOILERPLATE(on_sys_sched_setparam_enter)
PPP_CB_BOILERPLATE(on_sys_fchown_enter)
PPP_CB_BOILERPLATE(on_NtAdjustGroupsToken_enter)
PPP_CB_BOILERPLATE(on_sys_old_select_enter)
PPP_CB_BOILERPLATE(on_sys_utimes_enter)
PPP_CB_BOILERPLATE(on_NtOpenEvent_enter)
PPP_CB_BOILERPLATE(on_sys_readahead_enter)
PPP_CB_BOILERPLATE(on_NtMakePermanentObject_enter)
PPP_CB_BOILERPLATE(on_sys_setgid16_enter)
PPP_CB_BOILERPLATE(on_NtAllocateUserPhysicalPages_enter)
PPP_CB_BOILERPLATE(on_NtOpenEventPair_enter)
PPP_CB_BOILERPLATE(on_sys_pipe_enter)
PPP_CB_BOILERPLATE(on_sys_unlinkat_enter)
PPP_CB_BOILERPLATE(on_sys_select_enter)
PPP_CB_BOILERPLATE(on_sys_setreuid16_enter)
PPP_CB_BOILERPLATE(on_sys_fgetxattr_enter)
PPP_CB_BOILERPLATE(on_sys_getpgid_enter)
PPP_CB_BOILERPLATE(on_NtGetWriteWatch_enter)
PPP_CB_BOILERPLATE(on_sys_setgroups16_enter)
PPP_CB_BOILERPLATE(on_NtDeleteValueKey_enter)
PPP_CB_BOILERPLATE(on_NtLoadDriver_enter)
PPP_CB_BOILERPLATE(on_NtDuplicateObject_enter)
PPP_CB_BOILERPLATE(on_sys_timerfd_gettime_enter)
PPP_CB_BOILERPLATE(on_sys_uname_enter)
PPP_CB_BOILERPLATE(on_sys_sigpending_enter)
PPP_CB_BOILERPLATE(on_NtSaveKeyEx_enter)
PPP_CB_BOILERPLATE(on_NtCreateProcessEx_enter)
PPP_CB_BOILERPLATE(on_sys_chown_enter)
PPP_CB_BOILERPLATE(on_sys_setxattr_enter)
PPP_CB_BOILERPLATE(on_NtQueryVirtualMemory_enter)
PPP_CB_BOILERPLATE(on_NtModifyBootEntry_enter)
PPP_CB_BOILERPLATE(on_sys_lsetxattr_enter)
PPP_CB_BOILERPLATE(on_NtSetInformationJobObject_enter)
PPP_CB_BOILERPLATE(on_NtUnlockFile_enter)
PPP_CB_BOILERPLATE(on_sys_linkat_enter)
PPP_CB_BOILERPLATE(on_sys_setns_enter)
PPP_CB_BOILERPLATE(on_NtInitializeRegistry_enter)
PPP_CB_BOILERPLATE(on_sys_stat_enter)
PPP_CB_BOILERPLATE(on_sys_setresuid16_enter)
PPP_CB_BOILERPLATE(on_NtLockProductActivationKeys_enter)
PPP_CB_BOILERPLATE(on_NtQueryIntervalProfile_enter)
PPP_CB_BOILERPLATE(on_sys_timerfd_settime_enter)
PPP_CB_BOILERPLATE(on_sys_getitimer_enter)
PPP_CB_BOILERPLATE(on_NtSetInformationProcess_enter)
PPP_CB_BOILERPLATE(on_sys_ssetmask_enter)
PPP_CB_BOILERPLATE(on_sys_setfsuid16_enter)
PPP_CB_BOILERPLATE(on_NtResumeThread_enter)
PPP_CB_BOILERPLATE(on_NtPrivilegeCheck_enter)
PPP_CB_BOILERPLATE(on_sys_old_mmap_enter)
PPP_CB_BOILERPLATE(on_NtOpenProcessTokenEx_enter)
PPP_CB_BOILERPLATE(on_NtTerminateThread_enter)
PPP_CB_BOILERPLATE(on_NtNotifyChangeKey_enter)
PPP_CB_BOILERPLATE(on_sys_fchown16_enter)
PPP_CB_BOILERPLATE(on_sys_truncate_enter)
PPP_CB_BOILERPLATE(on_sys_ioprio_set_enter)
PPP_CB_BOILERPLATE(on_NtReadVirtualMemory_enter)
PPP_CB_BOILERPLATE(on_NtCancelIoFile_enter)
PPP_CB_BOILERPLATE(on_NtQueryDefaultUILanguage_enter)
PPP_CB_BOILERPLATE(on_sys_nanosleep_enter)
PPP_CB_BOILERPLATE(on_NtTerminateJobObject_enter)
PPP_CB_BOILERPLATE(on_NtOpenThreadTokenEx_enter)
PPP_CB_BOILERPLATE(on_sys_mknod_enter)
PPP_CB_BOILERPLATE(on_NtQueueApcThread_enter)
PPP_CB_BOILERPLATE(on_sys_newuname_enter)
PPP_CB_BOILERPLATE(on_sys_fcntl_enter)
PPP_CB_BOILERPLATE(on_sys_olduname_enter)
PPP_CB_BOILERPLATE(on_sys_epoll_wait_enter)
PPP_CB_BOILERPLATE(on_sys_sysfs_enter)
PPP_CB_BOILERPLATE(on_sys_set_robust_list_enter)
PPP_CB_BOILERPLATE(on_NtTerminateProcess_enter)
PPP_CB_BOILERPLATE(on_NtReplaceKey_enter)
PPP_CB_BOILERPLATE(on_NtImpersonateAnonymousToken_enter)
PPP_CB_BOILERPLATE(on_sys_swapon_enter)
PPP_CB_BOILERPLATE(on_NtSecureConnectPort_enter)
PPP_CB_BOILERPLATE(on_NtSetVolumeInformationFile_enter)
PPP_CB_BOILERPLATE(on_sys_personality_enter)
PPP_CB_BOILERPLATE(on_NtOpenSection_enter)
PPP_CB_BOILERPLATE(on_sys_sched_get_priority_max_enter)
PPP_CB_BOILERPLATE(on_NtOpenJobObject_enter)
PPP_CB_BOILERPLATE(on_sys_getrlimit_enter)
PPP_CB_BOILERPLATE(on_sys_umount_enter)
PPP_CB_BOILERPLATE(on_sys_llseek_enter)
PPP_CB_BOILERPLATE(on_NtUnloadKey_enter)
PPP_CB_BOILERPLATE(on_sys_adjtimex_enter)
PPP_CB_BOILERPLATE(on_sys_fchmod_enter)
PPP_CB_BOILERPLATE(on_sys_timer_create_enter)
PPP_CB_BOILERPLATE(on_sys_fstat64_enter)
PPP_CB_BOILERPLATE(on_NtUnmapViewOfSection_enter)
PPP_CB_BOILERPLATE(on_NtConnectPort_enter)
PPP_CB_BOILERPLATE(on_sys_time_enter)
PPP_CB_BOILERPLATE(on_sys_signal_enter)
PPP_CB_BOILERPLATE(on_sys_inotify_add_watch_enter)
PPP_CB_BOILERPLATE(on_sys_sched_setscheduler_enter)
PPP_CB_BOILERPLATE(on_sys_symlinkat_enter)
PPP_CB_BOILERPLATE(on_NtQueryKey_enter)
PPP_CB_BOILERPLATE(on_NtEnumerateSystemEnvironmentValuesEx_enter)
PPP_CB_BOILERPLATE(on_NtGetContextThread_enter)
PPP_CB_BOILERPLATE(on_sys_nice_enter)
PPP_CB_BOILERPLATE(on_sys_ftruncate64_enter)
PPP_CB_BOILERPLATE(on_sys_epoll_pwait_enter)
PPP_CB_BOILERPLATE(on_sys_getppid_enter)
PPP_CB_BOILERPLATE(on_NtSetHighWaitLowEventPair_enter)
PPP_CB_BOILERPLATE(on_sys_dup3_enter)
PPP_CB_BOILERPLATE(on_NtExtendSection_enter)
PPP_CB_BOILERPLATE(on_NtFindAtom_enter)
PPP_CB_BOILERPLATE(on_sys_sgetmask_enter)
PPP_CB_BOILERPLATE(on_sys_dup2_enter)
PPP_CB_BOILERPLATE(on_NtCreateMutant_enter)
PPP_CB_BOILERPLATE(on_sys_brk_enter)
PPP_CB_BOILERPLATE(on_sys_keyctl_enter)
PPP_CB_BOILERPLATE(on_NtSetHighEventPair_enter)
PPP_CB_BOILERPLATE(on_NtFlushBuffersFile_enter)
PPP_CB_BOILERPLATE(on_NtCreatePagingFile_enter)
PPP_CB_BOILERPLATE(on_sys_ptrace_enter)
PPP_CB_BOILERPLATE(on_NtQuerySystemEnvironmentValue_enter)
PPP_CB_BOILERPLATE(on_NtReadRequestData_enter)
PPP_CB_BOILERPLATE(on_NtSetDefaultUILanguage_enter)
PPP_CB_BOILERPLATE(on_sys_set_mempolicy_enter)
PPP_CB_BOILERPLATE(on_sys_futimesat_enter)
PPP_CB_BOILERPLATE(on_NtQuerySecurityObject_enter)
PPP_CB_BOILERPLATE(on_NtOpenSymbolicLinkObject_enter)
PPP_CB_BOILERPLATE(on_NtQuerySystemTime_enter)
PPP_CB_BOILERPLATE(on_sys_sigprocmask_enter)
PPP_CB_BOILERPLATE(on_sys_getegid_enter)
PPP_CB_BOILERPLATE(on_NtNotifyChangeDirectoryFile_enter)
PPP_CB_BOILERPLATE(on_NtSuspendProcess_enter)
PPP_CB_BOILERPLATE(on_NtQueryValueKey_enter)
PPP_CB_BOILERPLATE(on_NtYieldExecution_enter)
PPP_CB_BOILERPLATE(on_sys_tkill_enter)
PPP_CB_BOILERPLATE(on_NtCreateMailslotFile_enter)
PPP_CB_BOILERPLATE(on_sys_sched_rr_get_interval_enter)
PPP_CB_BOILERPLATE(on_sys_getdents64_enter)
PPP_CB_BOILERPLATE(on_sys_fanotify_init_enter)
PPP_CB_BOILERPLATE(on_NtDeviceIoControlFile_enter)
PPP_CB_BOILERPLATE(on_NtImpersonateClientOfPort_enter)
PPP_CB_BOILERPLATE(on_sys_open_enter)
PPP_CB_BOILERPLATE(on_sys_fcntl64_enter)
PPP_CB_BOILERPLATE(on_sys_fchdir_enter)
PPP_CB_BOILERPLATE(on_NtQueryTimer_enter)
PPP_CB_BOILERPLATE(on_NtCompareTokens_enter)
PPP_CB_BOILERPLATE(on_sys_getresuid_enter)
PPP_CB_BOILERPLATE(on_NtSuspendThread_enter)
PPP_CB_BOILERPLATE(on_NtTestAlert_enter)
PPP_CB_BOILERPLATE(on_sys_munlockall_enter)
PPP_CB_BOILERPLATE(on_NtQueryDirectoryFile_enter)
PPP_CB_BOILERPLATE(on_sys_msync_enter)
PPP_CB_BOILERPLATE(on_NtReleaseKeyedEvent_enter)
PPP_CB_BOILERPLATE(on_sys_exit_group_enter)
PPP_CB_BOILERPLATE(on_NtCompleteConnectPort_enter)
PPP_CB_BOILERPLATE(on_sys_getrusage_enter)
PPP_CB_BOILERPLATE(on_NtWaitLowEventPair_enter)
PPP_CB_BOILERPLATE(on_NtCreateProfile_enter)
PPP_CB_BOILERPLATE(on_NtAdjustPrivilegesToken_enter)
PPP_CB_BOILERPLATE(on_sys_poll_enter)
PPP_CB_BOILERPLATE(on_sys_chown16_enter)
PPP_CB_BOILERPLATE(on_sys_uselib_enter)
PPP_CB_BOILERPLATE(on_sys_creat_enter)
PPP_CB_BOILERPLATE(on_sys_signalfd4_enter)
PPP_CB_BOILERPLATE(on_sigaction_enter)
PPP_CB_BOILERPLATE(on_sys_sendmmsg_enter)
PPP_CB_BOILERPLATE(on_sys_quotactl_enter)
PPP_CB_BOILERPLATE(on_sys_removexattr_enter)
PPP_CB_BOILERPLATE(on_sys_getpid_enter)
PPP_CB_BOILERPLATE(on_sys_faccessat_enter)
PPP_CB_BOILERPLATE(on_NtSetUuidSeed_enter)
PPP_CB_BOILERPLATE(on_NtRaiseException_enter)
PPP_CB_BOILERPLATE(on_sys_fstatfs64_enter)
PPP_CB_BOILERPLATE(on_NtTraceEvent_enter)
PPP_CB_BOILERPLATE(on_sys_signalfd_enter)
PPP_CB_BOILERPLATE(on_NtFreeVirtualMemory_enter)
PPP_CB_BOILERPLATE(on_NtProtectVirtualMemory_enter)
PPP_CB_BOILERPLATE(on_sys_perf_event_open_enter)
PPP_CB_BOILERPLATE(on_NtQueryDebugFilterState_enter)
PPP_CB_BOILERPLATE(on_sys_socketcall_enter)
PPP_CB_BOILERPLATE(on_sys_capget_enter)
PPP_CB_BOILERPLATE(on_sys_bdflush_enter)
PPP_CB_BOILERPLATE(on_NtSetSecurityObject_enter)
PPP_CB_BOILERPLATE(on_sys_rt_tgsigqueueinfo_enter)
PPP_CB_BOILERPLATE(on_sys_getresuid16_enter)
PPP_CB_BOILERPLATE(on_NtQuerySystemInformation_enter)
PPP_CB_BOILERPLATE(on_NtDebugActiveProcess_enter)
PPP_CB_BOILERPLATE(on_NtLoadKey_enter)
PPP_CB_BOILERPLATE(on_NtDeleteKey_enter)
PPP_CB_BOILERPLATE(on_NtQueryVolumeInformationFile_enter)
PPP_CB_BOILERPLATE(on_sys_migrate_pages_enter)
PPP_CB_BOILERPLATE(on_NtOpenIoCompletion_enter)
PPP_CB_BOILERPLATE(on_NtAlertThread_enter)
PPP_CB_BOILERPLATE(on_NtAcceptConnectPort_enter)
PPP_CB_BOILERPLATE(on_NtQueryMultipleValueKey_enter)
PPP_CB_BOILERPLATE(on_sys_chroot_enter)
PPP_CB_BOILERPLATE(on_sys_getpriority_enter)
PPP_CB_BOILERPLATE(on_sys_process_vm_writev_enter)
PPP_CB_BOILERPLATE(on_sys_prctl_enter)
PPP_CB_BOILERPLATE(on_sys_lseek_enter)
PPP_CB_BOILERPLATE(on_sys_setfsgid16_enter)
PPP_CB_BOILERPLATE(on_NtQueryInstallUILanguage_enter)
PPP_CB_BOILERPLATE(on_NtOpenKey_enter)
PPP_CB_BOILERPLATE(on_sys_sched_get_priority_min_enter)
PPP_CB_BOILERPLATE(on_NtSetSystemPowerState_enter)
PPP_CB_BOILERPLATE(on_sys_mkdir_enter)
PPP_CB_BOILERPLATE(on_NtReplyWaitReceivePortEx_enter)
PPP_CB_BOILERPLATE(on_sys_old_getrlimit_enter)
PPP_CB_BOILERPLATE(on_sys_timer_gettime_enter)
PPP_CB_BOILERPLATE(on_sys_unlink_enter)
PPP_CB_BOILERPLATE(on_sys_pivot_root_enter)
PPP_CB_BOILERPLATE(on_sys_pread64_enter)
PPP_CB_BOILERPLATE(on_sys_io_submit_enter)
PPP_CB_BOILERPLATE(on_NtDuplicateToken_enter)
PPP_CB_BOILERPLATE(on_sys_setuid16_enter)
PPP_CB_BOILERPLATE(on_NtWriteFile_enter)
PPP_CB_BOILERPLATE(on_NtCreateJobObject_enter)
PPP_CB_BOILERPLATE(on_NtStopProfile_enter)
PPP_CB_BOILERPLATE(on_sys_eventfd_enter)
PPP_CB_BOILERPLATE(on_sys_name_to_handle_at_enter)
PPP_CB_BOILERPLATE(on_sys_setpriority_enter)
PPP_CB_BOILERPLATE(on_sys_prlimit64_enter)
PPP_CB_BOILERPLATE(on_NtFlushInstructionCache_enter)
PPP_CB_BOILERPLATE(on_sys_close_enter)
PPP_CB_BOILERPLATE(on_sys_remap_file_pages_enter)
PPP_CB_BOILERPLATE(on_NtSetEventBoostPriority_enter)
PPP_CB_BOILERPLATE(on_sys_sched_setaffinity_enter)
PPP_CB_BOILERPLATE(on_sys_sendfile_enter)
PPP_CB_BOILERPLATE(on_NtSetValueKey_enter)
PPP_CB_BOILERPLATE(on_NtSetSystemInformation_enter)
PPP_CB_BOILERPLATE(on_sys_sysctl_enter)
PPP_CB_BOILERPLATE(on_sys_lstat64_enter)
PPP_CB_BOILERPLATE(on_sys_ustat_enter)
PPP_CB_BOILERPLATE(on_sys_mknodat_enter)
PPP_CB_BOILERPLATE(on_sys_link_enter)
PPP_CB_BOILERPLATE(on_NtOpenThread_enter)
PPP_CB_BOILERPLATE(on_NtQueryTimerResolution_enter)
PPP_CB_BOILERPLATE(on_NtClearEvent_enter)
PPP_CB_BOILERPLATE(on_sys_getgid16_enter)
PPP_CB_BOILERPLATE(on_sys_sync_enter)
PPP_CB_BOILERPLATE(on_NtSetInformationToken_enter)
PPP_CB_BOILERPLATE(on_NtFlushKey_enter)
PPP_CB_BOILERPLATE(on_NtRaiseHardError_enter)
PPP_CB_BOILERPLATE(on_NtCreatePort_enter)
PPP_CB_BOILERPLATE(on_sys_sysinfo_enter)
PPP_CB_BOILERPLATE(on_NtQueryInformationThread_enter)
PPP_CB_BOILERPLATE(on_sys_openat_enter)
PPP_CB_BOILERPLATE(on_NtOpenMutant_enter)
PPP_CB_BOILERPLATE(on_sys_read_enter)
PPP_CB_BOILERPLATE(on_NtDelayExecution_enter)
PPP_CB_BOILERPLATE(on_NtSetInformationThread_enter)
PPP_CB_BOILERPLATE(on_sys_wait4_enter)
PPP_CB_BOILERPLATE(on_NtWaitForKeyedEvent_enter)
PPP_CB_BOILERPLATE(on_sys_mlockall_enter)
PPP_CB_BOILERPLATE(on_sys_clock_getres_enter)
PPP_CB_BOILERPLATE(on_sys_statfs64_enter)
PPP_CB_BOILERPLATE(on_sys_getuid16_enter)
PPP_CB_BOILERPLATE(on_sys_kexec_load_enter)
PPP_CB_BOILERPLATE(on_sys_io_cancel_enter)
PPP_CB_BOILERPLATE(on_NtRenameKey_enter)
PPP_CB_BOILERPLATE(on_NtSystemDebugControl_enter)
PPP_CB_BOILERPLATE(on_NtReplyWaitReplyPort_enter)
PPP_CB_BOILERPLATE(on_NtFreeUserPhysicalPages_enter)
PPP_CB_BOILERPLATE(on_sys_lstat_enter)
PPP_CB_BOILERPLATE(on_NtImpersonateThread_enter)
PPP_CB_BOILERPLATE(on_sys_setreuid_enter)
PPP_CB_BOILERPLATE(on_sys_munmap_enter)
PPP_CB_BOILERPLATE(on_NtCreateJobSet_enter)
PPP_CB_BOILERPLATE(on_sys_setfsgid_enter)
PPP_CB_BOILERPLATE(on_sys_setuid_enter)
PPP_CB_BOILERPLATE(on_sys_sethostname_enter)
PPP_CB_BOILERPLATE(on_sys_inotify_init1_enter)
PPP_CB_BOILERPLATE(on_sys_rt_sigsuspend_enter)
PPP_CB_BOILERPLATE(on_NtQueryEvent_enter)
PPP_CB_BOILERPLATE(on_sigsuspend_enter)
PPP_CB_BOILERPLATE(on_NtEnumerateKey_enter)
PPP_CB_BOILERPLATE(on_NtPrivilegeObjectAuditAlarm_enter)
PPP_CB_BOILERPLATE(on_NtCreateSection_enter)
PPP_CB_BOILERPLATE(on_sys_vhangup_enter)
PPP_CB_BOILERPLATE(on_NtRequestPort_enter)
PPP_CB_BOILERPLATE(on_NtQueryIoCompletion_enter)
PPP_CB_BOILERPLATE(on_sys_mount_enter)
PPP_CB_BOILERPLATE(on_sys_setgid_enter)
PPP_CB_BOILERPLATE(on_sys_pwrite64_enter)
PPP_CB_BOILERPLATE(on_NtOpenFile_enter)
PPP_CB_BOILERPLATE(on_NtEnumerateValueKey_enter)
PPP_CB_BOILERPLATE(on_NtPowerInformation_enter)
PPP_CB_BOILERPLATE(on_NtReadFile_enter)
PPP_CB_BOILERPLATE(on_NtCancelTimer_enter)
PPP_CB_BOILERPLATE(on_sys_timer_getoverrun_enter)
PPP_CB_BOILERPLATE(on_sys_setresgid_enter)
PPP_CB_BOILERPLATE(on_sys_io_getevents_enter)
PPP_CB_BOILERPLATE(on_NtLoadKey2_enter)
PPP_CB_BOILERPLATE(on_sys_setgroups_enter)
PPP_CB_BOILERPLATE(on_sys_pause_enter)
PPP_CB_BOILERPLATE(on_sys_sched_getaffinity_enter)
PPP_CB_BOILERPLATE(on_sys_syncfs_enter)
PPP_CB_BOILERPLATE(on_NtQueryOpenSubKeys_enter)
PPP_CB_BOILERPLATE(on_NtSetTimer_enter)
PPP_CB_BOILERPLATE(on_sys_epoll_create1_enter)
PPP_CB_BOILERPLATE(on_NtFlushVirtualMemory_enter)
PPP_CB_BOILERPLATE(on_sys_mincore_enter)
PPP_CB_BOILERPLATE(on_sys_pipe2_enter)
PPP_CB_BOILERPLATE(on_sys_fstat_enter)
PPP_CB_BOILERPLATE(on_sys_getcwd_enter)
PPP_CB_BOILERPLATE(on_NtClose_enter)
PPP_CB_BOILERPLATE(on_sys_newlstat_enter)
PPP_CB_BOILERPLATE(on_sys_mq_open_enter)
PPP_CB_BOILERPLATE(on_NtSetInformationKey_enter)
PPP_CB_BOILERPLATE(on_sys_writev_enter)
PPP_CB_BOILERPLATE(on_sys_geteuid_enter)
PPP_CB_BOILERPLATE(on_sys_inotify_rm_watch_enter)
PPP_CB_BOILERPLATE(on_sys_getpgrp_enter)
PPP_CB_BOILERPLATE(on_NtReplyPort_enter)
PPP_CB_BOILERPLATE(on_sys_rt_sigpending_enter)
PPP_CB_BOILERPLATE(on_NtSignalAndWaitForSingleObject_enter)
PPP_CB_BOILERPLATE(on_NtSetEvent_enter)
PPP_CB_BOILERPLATE(on_NtCreateKey_enter)
PPP_CB_BOILERPLATE(on_sys_mprotect_enter)
PPP_CB_BOILERPLATE(on_NtSetInformationObject_enter)
PPP_CB_BOILERPLATE(on_NtAddAtom_enter)
PPP_CB_BOILERPLATE(on_sys_epoll_ctl_enter)
PPP_CB_BOILERPLATE(on_sys_futex_enter)
PPP_CB_BOILERPLATE(on_NtOpenKeyedEvent_enter)
PPP_CB_BOILERPLATE(on_sys_getgroups16_enter)
PPP_CB_BOILERPLATE(on_sys_symlink_enter)
PPP_CB_BOILERPLATE(on_sys_newfstat_enter)
PPP_CB_BOILERPLATE(on_NtAccessCheckAndAuditAlarm_enter)
PPP_CB_BOILERPLATE(on_NtQueryQuotaInformationFile_enter)
PPP_CB_BOILERPLATE(on_sys_getxattr_enter)
PPP_CB_BOILERPLATE(on_sys_rt_sigprocmask_enter)
PPP_CB_BOILERPLATE(on_sys_waitpid_enter)
PPP_CB_BOILERPLATE(on_sys_mq_timedsend_enter)
PPP_CB_BOILERPLATE(on_NtDebugContinue_enter)
PPP_CB_BOILERPLATE(on_NtQueryMutant_enter)
PPP_CB_BOILERPLATE(on_NtOpenThreadToken_enter)
PPP_CB_BOILERPLATE(on_NtSetDefaultHardErrorPort_enter)
PPP_CB_BOILERPLATE(on_NtOpenProcess_enter)
PPP_CB_BOILERPLATE(on_NtCallbackReturn_enter)
PPP_CB_BOILERPLATE(on_sys_clock_gettime_enter)
PPP_CB_BOILERPLATE(on_sys_setfsuid_enter)
PPP_CB_BOILERPLATE(on_rt_sigaction_enter)
PPP_CB_BOILERPLATE(on_NtWaitForMultipleObjects_enter)
PPP_CB_BOILERPLATE(on_NtRegisterThreadTerminatePort_enter)
PPP_CB_BOILERPLATE(on_sys_mbind_enter)
PPP_CB_BOILERPLATE(on_NtSaveMergedKeys_enter)
PPP_CB_BOILERPLATE(on_sys_lgetxattr_enter)
PPP_CB_BOILERPLATE(on_NtSetSystemEnvironmentValue_enter)
PPP_CB_BOILERPLATE(on_sys_io_setup_enter)
PPP_CB_BOILERPLATE(on_sys_rename_enter)
PPP_CB_BOILERPLATE(on_sys_fremovexattr_enter)
PPP_CB_BOILERPLATE(on_NtCreateProcess_enter)
PPP_CB_BOILERPLATE(on_NtFlushWriteBuffer_enter)
PPP_CB_BOILERPLATE(on_sys_eventfd2_enter)
PPP_CB_BOILERPLATE(on_sys_truncate64_enter)
PPP_CB_BOILERPLATE(on_sys_fsetxattr_enter)
PPP_CB_BOILERPLATE(on_NtReleaseSemaphore_enter)
PPP_CB_BOILERPLATE(on_sys_clock_nanosleep_enter)
PPP_CB_BOILERPLATE(on_sys_setpgid_enter)
PPP_CB_BOILERPLATE(on_NtNotifyChangeMultipleKeys_enter)
PPP_CB_BOILERPLATE(on_NtContinue_enter)
PPP_CB_BOILERPLATE(on_NtStartProfile_enter)
PPP_CB_BOILERPLATE(on_sys_splice_enter)
PPP_CB_BOILERPLATE(on_sys_init_module_enter)
PPP_CB_BOILERPLATE(on_sys_readlinkat_enter)
PPP_CB_BOILERPLATE(on_sys_fadvise64_enter)
PPP_CB_BOILERPLATE(on_NtWaitHighEventPair_enter)
PPP_CB_BOILERPLATE(on_NtCreateWaitablePort_enter)
PPP_CB_BOILERPLATE(on_sys_epoll_create_enter)
PPP_CB_BOILERPLATE(on_NtQueryAttributesFile_enter)
PPP_CB_BOILERPLATE(on_sys_process_vm_readv_enter)
PPP_CB_BOILERPLATE(on_sys_fstatat64_enter)
PPP_CB_BOILERPLATE(on_sys_getcpu_enter)
PPP_CB_BOILERPLATE(on_sys_lookup_dcookie_enter)
PPP_CB_BOILERPLATE(on_sys_setresgid16_enter)
PPP_CB_BOILERPLATE(on_sys_geteuid16_enter)
PPP_CB_BOILERPLATE(on_NtCreateThread_enter)
PPP_CB_BOILERPLATE(on_sys_move_pages_enter)
PPP_CB_BOILERPLATE(on_NtCreateUserProcess_enter)
PPP_CB_BOILERPLATE(on_sys_statfs_enter)
PPP_CB_BOILERPLATE(on_NtQuerySemaphore_enter)
PPP_CB_BOILERPLATE(on_NtSetInformationDebugObject_enter)
PPP_CB_BOILERPLATE(on_NtPrivilegedServiceAuditAlarm_enter)
PPP_CB_BOILERPLATE(on_sys_setdomainname_enter)
PPP_CB_BOILERPLATE(on_sys_access_enter)
PPP_CB_BOILERPLATE(on_sys_fanotify_mark_enter)
PPP_CB_BOILERPLATE(on_NtLockRegistryKey_enter)
PPP_CB_BOILERPLATE(on_sys_mq_timedreceive_enter)
PPP_CB_BOILERPLATE(on_sys_stat64_enter)
PPP_CB_BOILERPLATE(on_NtAccessCheck_enter)
PPP_CB_BOILERPLATE(on_NtAreMappedFilesTheSame_enter)
PPP_CB_BOILERPLATE(on_NtDeleteObjectAuditAlarm_enter)
PPP_CB_BOILERPLATE(on_NtSetContextThread_enter)
PPP_CB_BOILERPLATE(on_NtAllocateVirtualMemory_enter)
PPP_CB_BOILERPLATE(on_NtSetIntervalProfile_enter)
PPP_CB_BOILERPLATE(on_sys_set_tid_address_enter)
PPP_CB_BOILERPLATE(on_sys_delete_module_enter)
PPP_CB_BOILERPLATE(on_sys_flistxattr_enter)
PPP_CB_BOILERPLATE(on_sys_setregid16_enter)
PPP_CB_BOILERPLATE(on_NtReleaseMutant_enter)
PPP_CB_BOILERPLATE(on_sys_capset_enter)
PPP_CB_BOILERPLATE(on_sys_setitimer_enter)
PPP_CB_BOILERPLATE(on_sys_lremovexattr_enter)
PPP_CB_BOILERPLATE(on_sys_vmsplice_enter)
PPP_CB_BOILERPLATE(on_NtUnlockVirtualMemory_enter)
PPP_CB_BOILERPLATE(on_NtRemoveIoCompletion_enter)
PPP_CB_BOILERPLATE(on_NtCompactKeys_enter)
PPP_CB_BOILERPLATE(on_NtOpenSemaphore_enter)
PPP_CB_BOILERPLATE(on_sys_newstat_enter)
PPP_CB_BOILERPLATE(on_NtVdmControl_enter)
PPP_CB_BOILERPLATE(on_sys_mkdirat_enter)
PPP_CB_BOILERPLATE(on_sys_getdents_enter)
PPP_CB_BOILERPLATE(on_sys_clock_settime_enter)
PPP_CB_BOILERPLATE(on_NtResumeProcess_enter)
PPP_CB_BOILERPLATE(on_sys_sched_yield_enter)
PPP_CB_BOILERPLATE(on_NtDisplayString_enter)
PPP_CB_BOILERPLATE(on_sys_reboot_enter)
PPP_CB_BOILERPLATE(on_sys_timer_settime_enter)
PPP_CB_BOILERPLATE(on_NtEnumerateBootEntries_enter)
PPP_CB_BOILERPLATE(on_NtMakeTemporaryObject_enter)
PPP_CB_BOILERPLATE(on_sys_readlink_enter)
PPP_CB_BOILERPLATE(on_sys_ftruncate_enter)
PPP_CB_BOILERPLATE(on_NtUnloadKeyEx_enter)
PPP_CB_BOILERPLATE(on_NtDeleteAtom_enter)
PPP_CB_BOILERPLATE(on_NtCreateSemaphore_enter)
PPP_CB_BOILERPLATE(on_NtAccessCheckByTypeResultList_enter)
PPP_CB_BOILERPLATE(on_NtWaitForSingleObject_enter)
PPP_CB_BOILERPLATE(on_sys_ioperm_enter)
PPP_CB_BOILERPLATE(on_NtCreateDirectoryObject_enter)
PPP_CB_BOILERPLATE(on_sys_utime_enter)
PPP_CB_BOILERPLATE(on_NtQueryInformationToken_enter)
PPP_CB_BOILERPLATE(on_NtSetDefaultLocale_enter)
PPP_CB_BOILERPLATE(on_NtAccessCheckByType_enter)
PPP_CB_BOILERPLATE(on_sys_munlock_enter)
PPP_CB_BOILERPLATE(on_NtCreateFile_enter)
PPP_CB_BOILERPLATE(on_sys_fallocate_enter)
PPP_CB_BOILERPLATE(on_NtWriteFileGather_enter)
PPP_CB_BOILERPLATE(on_NtOpenProcessToken_enter)
PPP_CB_BOILERPLATE(on_sys_getuid_enter)
PPP_CB_BOILERPLATE(on_sys_tgkill_enter)
PPP_CB_BOILERPLATE(on_sys_pselect6_enter)
PPP_CB_BOILERPLATE(on_sys_io_destroy_enter)
PPP_CB_BOILERPLATE(on_NtQueryObject_enter)
PPP_CB_BOILERPLATE(on_NtUnloadDriver_enter)
PPP_CB_BOILERPLATE(on_NtQueryInformationFile_enter)
PPP_CB_BOILERPLATE(on_sys_chdir_enter)
PPP_CB_BOILERPLATE(on_sys_kill_enter)
PPP_CB_BOILERPLATE(on_sys_tee_enter)
PPP_CB_BOILERPLATE(on_sys_fdatasync_enter)
PPP_CB_BOILERPLATE(on_sys_syslog_enter)
PPP_CB_BOILERPLATE(on_sys_timerfd_create_enter)
PPP_CB_BOILERPLATE(on_sys_setrlimit_enter)
PPP_CB_BOILERPLATE(on_sys_setregid_enter)
PPP_CB_BOILERPLATE(on_sys_timer_delete_enter)
PPP_CB_BOILERPLATE(on_sys_stime_enter)
PPP_CB_BOILERPLATE(on_sys_settimeofday_enter)
PPP_CB_BOILERPLATE(on_NtResetEvent_enter)
PPP_CB_BOILERPLATE(on_sys_getegid16_enter)
PPP_CB_BOILERPLATE(on_NtSetIoCompletion_enter)
PPP_CB_BOILERPLATE(on_sys_get_robust_list_enter)
PPP_CB_BOILERPLATE(on_NtSetEaFile_enter)
PPP_CB_BOILERPLATE(on_NtCompressKey_enter)
PPP_CB_BOILERPLATE(on_NtSetDebugFilterState_enter)
PPP_CB_BOILERPLATE(on_sys_restart_syscall_enter)
PPP_CB_BOILERPLATE(on_sys_fstatfs_enter)
PPP_CB_BOILERPLATE(on_NtReplyWaitReceivePort_enter)
PPP_CB_BOILERPLATE(on_sys_mremap_enter)
PPP_CB_BOILERPLATE(on_NtSetLowEventPair_enter)
PPP_CB_BOILERPLATE(on_NtQueryPortInformationProcess_enter)
PPP_CB_BOILERPLATE(on_NtCreateSymbolicLinkObject_enter)
PPP_CB_BOILERPLATE(on_sys_setresuid_enter)
PPP_CB_BOILERPLATE(on_sys_gettimeofday_enter)
PPP_CB_BOILERPLATE(on_NtListenPort_enter)
PPP_CB_BOILERPLATE(on_NtCreateToken_enter)
PPP_CB_BOILERPLATE(on_NtLockVirtualMemory_enter)
PPP_CB_BOILERPLATE(on_NtQueryInformationJobObject_enter)
PPP_CB_BOILERPLATE(on_NtSetLdtEntries_enter)
PPP_CB_BOILERPLATE(on_NtOpenDirectoryObject_enter)
PPP_CB_BOILERPLATE(on_NtCreateNamedPipeFile_enter)
PPP_CB_BOILERPLATE(on_NtAlertResumeThread_enter)
PPP_CB_BOILERPLATE(on_NtQueryInformationAtom_enter)
PPP_CB_BOILERPLATE(on_NtSetInformationFile_enter)
PPP_CB_BOILERPLATE(on_NtMapUserPhysicalPages_enter)
PPP_CB_BOILERPLATE(on_NtQuerySection_enter)
PPP_CB_BOILERPLATE(on_NtWriteVirtualMemory_enter)
PPP_CB_BOILERPLATE(on_NtOpenKeyEx_enter)
PPP_CB_BOILERPLATE(on_sys_readv_enter)
PPP_CB_BOILERPLATE(on_NtQuerySymbolicLinkObject_enter)
PPP_CB_BOILERPLATE(on_NtCreateIoCompletion_enter)
PPP_CB_BOILERPLATE(on_sys_madvise_enter)
PPP_CB_BOILERPLATE(on_NtAllocateLocallyUniqueId_enter)
PPP_CB_BOILERPLATE(on_sys_listxattr_enter)
PPP_CB_BOILERPLATE(on_sys_chmod_enter)
PPP_CB_BOILERPLATE(on_sys_getgid_enter)
PPP_CB_BOILERPLATE(on_sys_request_key_enter)
PPP_CB_BOILERPLATE(on_sys_fsync_enter)
PPP_CB_BOILERPLATE(on_NtQuerySystemEnvironmentValueEx_enter)
PPP_CB_BOILERPLATE(on_sys_old_readdir_enter)
PPP_CB_BOILERPLATE(on_sys_mq_unlink_enter)
PPP_CB_BOILERPLATE(on_sys_getresgid16_enter)
PPP_CB_BOILERPLATE(on_sys_mq_notify_enter)
PPP_CB_BOILERPLATE(on_NtMapViewOfSection_enter)
PPP_CB_BOILERPLATE(on_NtSetLowWaitHighEventPair_enter)
PPP_CB_BOILERPLATE(on_NtRequestWaitReplyPort_enter)
PPP_CB_BOILERPLATE(on_NtCloseObjectAuditAlarm_enter)
PPP_CB_BOILERPLATE(on_NtQueryInformationProcess_enter)
PPP_CB_BOILERPLATE(on_sys_clock_adjtime_enter)
PPP_CB_BOILERPLATE(on_NtSetQuotaInformationFile_enter)
PPP_CB_BOILERPLATE(on_NtRestoreKey_enter)
PPP_CB_BOILERPLATE(on_sys_add_key_enter)
PPP_CB_BOILERPLATE(on_sys_waitid_enter)
PPP_CB_BOILERPLATE(on_sys_ioctl_enter)
PPP_CB_BOILERPLATE(on_sys_acct_enter)
PPP_CB_BOILERPLATE(on_sys_lchown_enter)
PPP_CB_BOILERPLATE(on_sys_flock_enter)
PPP_CB_BOILERPLATE(on_sys_swapoff_enter)
PPP_CB_BOILERPLATE(on_sys_mlock_enter)
PPP_CB_BOILERPLATE(on_NtSaveKey_enter)
PPP_CB_BOILERPLATE(on_sys_oldumount_enter)
PPP_CB_BOILERPLATE(on_sys_sendfile64_enter)
PPP_CB_BOILERPLATE(on_sys_get_mempolicy_enter)
PPP_CB_BOILERPLATE(on_NtIsProcessInJob_enter)
PPP_CB_BOILERPLATE(on_sys_exit_enter)
PPP_CB_BOILERPLATE(on_sys_utimensat_enter)
PPP_CB_BOILERPLATE(on_NtSetSystemTime_enter)
PPP_CB_BOILERPLATE(on_NtAllocateUuids_enter)
PPP_CB_BOILERPLATE(on_sys_dup_enter)
PPP_CB_BOILERPLATE(on_NtCreateTimer_enter)
PPP_CB_BOILERPLATE(on_NtShutdownSystem_enter)
PPP_CB_BOILERPLATE(on_NtOpenObjectAuditAlarm_enter)
PPP_CB_BOILERPLATE(on_sys_alarm_enter)
PPP_CB_BOILERPLATE(on_sys_unshare_enter)
PPP_CB_BOILERPLATE(on_NtGetPlugPlayEvent_enter)
PPP_CB_BOILERPLATE(on_sys_times_enter)
PPP_CB_BOILERPLATE(on_NtOpenTimer_enter)
PPP_CB_BOILERPLATE(on_NtDeleteFile_enter)
PPP_CB_BOILERPLATE(on_NtLockFile_enter)
PPP_CB_BOILERPLATE(on_sys_fchownat_enter)
PPP_CB_BOILERPLATE(on_NtQueryPerformanceCounter_enter)
PPP_CB_BOILERPLATE(on_sys_sched_getscheduler_enter)
PPP_CB_BOILERPLATE(on_NtQueryDefaultLocale_enter)
PPP_CB_BOILERPLATE(on_NtMapUserPhysicalPagesScatter_enter)
PPP_CB_BOILERPLATE(on_sys_rt_sigtimedwait_enter)
PPP_CB_BOILERPLATE(on_sys_renameat_enter)
PPP_CB_BOILERPLATE(on_sys_setsid_enter)
PPP_CB_BOILERPLATE(on_sys_ppoll_enter)
PPP_CB_BOILERPLATE(on_sys_llistxattr_enter)
PPP_CB_BOILERPLATE(on_sys_preadv_enter)
PPP_CB_BOILERPLATE(on_NtInitiatePowerAction_enter)
PPP_CB_BOILERPLATE(on_sys_mq_getsetattr_enter)
PPP_CB_BOILERPLATE(on_NtRemoveProcessDebug_enter)
PPP_CB_BOILERPLATE(on_sys_ioprio_get_enter)
PPP_CB_BOILERPLATE(on_sys_fchmodat_enter)
PPP_CB_BOILERPLATE(on_NtAssignProcessToJobObject_enter)
PPP_CB_BOILERPLATE(on_NtPlugPlayControl_enter)
PPP_CB_BOILERPLATE(on_NtSetTimerResolution_enter)
PPP_CB_BOILERPLATE(on_sys_lchown16_enter)
PPP_CB_BOILERPLATE(on_NtTranslateFilePath_enter)
PPP_CB_BOILERPLATE(on_sys_sched_getparam_enter)
PPP_CB_BOILERPLATE(on_sys_inotify_init_enter)
PPP_CB_BOILERPLATE(on_NtPulseEvent_enter)
PPP_CB_BOILERPLATE(on_NtCreateDebugObject_enter)
PPP_CB_BOILERPLATE(on_NtWriteRequestData_enter)
PPP_CB_BOILERPLATE(on_NtCreateKeyedEvent_enter)
PPP_CB_BOILERPLATE(on_NtFsControlFile_enter)
PPP_CB_BOILERPLATE(on_sys_write_enter)
PPP_CB_BOILERPLATE(on_NtCreateEventPair_enter)
PPP_CB_BOILERPLATE(on_sys_mmap_pgoff_enter)
PPP_CB_BOILERPLATE(on_sys_getgroups_enter)
PPP_CB_BOILERPLATE(on_NtResetWriteWatch_enter)
PPP_CB_BOILERPLATE(on_sys_getresgid_enter)
PPP_CB_BOILERPLATE(on_NtWaitForDebugEvent_enter)
PPP_CB_BOILERPLATE(on_NtQueryDirectoryObject_enter)
PPP_CB_BOILERPLATE(on_sys_rt_sigqueueinfo_enter)
PPP_CB_BOILERPLATE(on_sys_rmdir_enter)
PPP_CB_BOILERPLATE(on_sys_recvmmsg_enter)
PPP_CB_BOILERPLATE(on_sys_umask_enter)
PPP_CB_BOILERPLATE(on_sys_ipc_enter)
PPP_CB_BOILERPLATE(on_NtQueryInformationPort_enter)
#endif
#if 1
PPP_CB_BOILERPLATE(on_unknown_sys_enter)
PPP_CB_BOILERPLATE(on_all_sys_enter)
#endif

#!/bin/sh

python ../scripts/apigen.py

./configure --target-list=x86_64-softmmu,i386-softmmu,arm-softmmu \
--cc=${CC:=gcc-4.7} \
--cxx=${CXX:=g++-4.7} \
--prefix=`pwd`/install \
--disable-pie \
--disable-xen \
--disable-libiscsi \
--enable-llvm \
--with-llvm=../llvm/${PANDA_LLVM_BUILD:=Release} \
--extra-cflags="-O2" \
--extra-cxxflags="-O2" \
--extra-ldflags="-L/usr/local/lib -L/usr/local/lib64" \
&& make -j $(nproc)

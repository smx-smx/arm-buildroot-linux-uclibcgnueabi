cmd_/mnt/ExtData/cross/buildroot/output/host/arm-buildroot-linux-uclibcgnueabi/sysroot/usr/include/xen/.install := perl scripts/headers_install.pl /mnt/ExtData/cross/buildroot/output/build/linux-headers-3.4.110/include/xen /mnt/ExtData/cross/buildroot/output/host/arm-buildroot-linux-uclibcgnueabi/sysroot/usr/include/xen arm evtchn.h privcmd.h; perl scripts/headers_install.pl /mnt/ExtData/cross/buildroot/output/build/linux-headers-3.4.110/include/xen /mnt/ExtData/cross/buildroot/output/host/arm-buildroot-linux-uclibcgnueabi/sysroot/usr/include/xen arm ; perl scripts/headers_install.pl /mnt/ExtData/cross/buildroot/output/build/linux-headers-3.4.110/include/generated/xen /mnt/ExtData/cross/buildroot/output/host/arm-buildroot-linux-uclibcgnueabi/sysroot/usr/include/xen arm ; for F in ; do echo "#include <asm-generic/$$F>" > /mnt/ExtData/cross/buildroot/output/host/arm-buildroot-linux-uclibcgnueabi/sysroot/usr/include/xen/$$F; done; touch /mnt/ExtData/cross/buildroot/output/host/arm-buildroot-linux-uclibcgnueabi/sysroot/usr/include/xen/.install
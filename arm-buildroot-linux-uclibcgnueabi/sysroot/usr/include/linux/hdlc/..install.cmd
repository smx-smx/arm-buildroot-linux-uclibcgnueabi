cmd_/mnt/ExtData/cross/buildroot/output/host/arm-buildroot-linux-uclibcgnueabi/sysroot/usr/include/linux/hdlc/.install := perl scripts/headers_install.pl /mnt/ExtData/cross/buildroot/output/build/linux-headers-3.4.110/include/linux/hdlc /mnt/ExtData/cross/buildroot/output/host/arm-buildroot-linux-uclibcgnueabi/sysroot/usr/include/linux/hdlc arm ioctl.h; perl scripts/headers_install.pl /mnt/ExtData/cross/buildroot/output/build/linux-headers-3.4.110/include/linux/hdlc /mnt/ExtData/cross/buildroot/output/host/arm-buildroot-linux-uclibcgnueabi/sysroot/usr/include/linux/hdlc arm ; perl scripts/headers_install.pl /mnt/ExtData/cross/buildroot/output/build/linux-headers-3.4.110/include/generated/linux/hdlc /mnt/ExtData/cross/buildroot/output/host/arm-buildroot-linux-uclibcgnueabi/sysroot/usr/include/linux/hdlc arm ; for F in ; do echo "#include <asm-generic/$$F>" > /mnt/ExtData/cross/buildroot/output/host/arm-buildroot-linux-uclibcgnueabi/sysroot/usr/include/linux/hdlc/$$F; done; touch /mnt/ExtData/cross/buildroot/output/host/arm-buildroot-linux-uclibcgnueabi/sysroot/usr/include/linux/hdlc/.install
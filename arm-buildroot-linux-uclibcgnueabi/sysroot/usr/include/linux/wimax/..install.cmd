cmd_/mnt/ExtData/cross/buildroot/output/host/arm-buildroot-linux-uclibcgnueabi/sysroot/usr/include/linux/wimax/.install := perl scripts/headers_install.pl /mnt/ExtData/cross/buildroot/output/build/linux-headers-3.4.110/include/linux/wimax /mnt/ExtData/cross/buildroot/output/host/arm-buildroot-linux-uclibcgnueabi/sysroot/usr/include/linux/wimax arm i2400m.h; perl scripts/headers_install.pl /mnt/ExtData/cross/buildroot/output/build/linux-headers-3.4.110/include/linux/wimax /mnt/ExtData/cross/buildroot/output/host/arm-buildroot-linux-uclibcgnueabi/sysroot/usr/include/linux/wimax arm ; perl scripts/headers_install.pl /mnt/ExtData/cross/buildroot/output/build/linux-headers-3.4.110/include/generated/linux/wimax /mnt/ExtData/cross/buildroot/output/host/arm-buildroot-linux-uclibcgnueabi/sysroot/usr/include/linux/wimax arm ; for F in ; do echo "#include <asm-generic/$$F>" > /mnt/ExtData/cross/buildroot/output/host/arm-buildroot-linux-uclibcgnueabi/sysroot/usr/include/linux/wimax/$$F; done; touch /mnt/ExtData/cross/buildroot/output/host/arm-buildroot-linux-uclibcgnueabi/sysroot/usr/include/linux/wimax/.install
cmd_/mnt/ExtData/cross/buildroot/output/host/arm-buildroot-linux-uclibcgnueabi/sysroot/usr/include/linux/spi/.install := perl scripts/headers_install.pl /mnt/ExtData/cross/buildroot/output/build/linux-headers-3.4.110/include/linux/spi /mnt/ExtData/cross/buildroot/output/host/arm-buildroot-linux-uclibcgnueabi/sysroot/usr/include/linux/spi arm spidev.h; perl scripts/headers_install.pl /mnt/ExtData/cross/buildroot/output/build/linux-headers-3.4.110/include/linux/spi /mnt/ExtData/cross/buildroot/output/host/arm-buildroot-linux-uclibcgnueabi/sysroot/usr/include/linux/spi arm ; perl scripts/headers_install.pl /mnt/ExtData/cross/buildroot/output/build/linux-headers-3.4.110/include/generated/linux/spi /mnt/ExtData/cross/buildroot/output/host/arm-buildroot-linux-uclibcgnueabi/sysroot/usr/include/linux/spi arm ; for F in ; do echo "#include <asm-generic/$$F>" > /mnt/ExtData/cross/buildroot/output/host/arm-buildroot-linux-uclibcgnueabi/sysroot/usr/include/linux/spi/$$F; done; touch /mnt/ExtData/cross/buildroot/output/host/arm-buildroot-linux-uclibcgnueabi/sysroot/usr/include/linux/spi/.install

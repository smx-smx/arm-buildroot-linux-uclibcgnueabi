cmd_/mnt/ExtData/cross/buildroot/output/host/arm-buildroot-linux-uclibcgnueabi/sysroot/usr/include/rdma/.install := perl scripts/headers_install.pl /mnt/ExtData/cross/buildroot/output/build/linux-headers-3.4.110/include/rdma /mnt/ExtData/cross/buildroot/output/host/arm-buildroot-linux-uclibcgnueabi/sysroot/usr/include/rdma arm ib_user_cm.h ib_user_mad.h ib_user_sa.h ib_user_verbs.h rdma_netlink.h rdma_user_cm.h; perl scripts/headers_install.pl /mnt/ExtData/cross/buildroot/output/build/linux-headers-3.4.110/include/rdma /mnt/ExtData/cross/buildroot/output/host/arm-buildroot-linux-uclibcgnueabi/sysroot/usr/include/rdma arm ; perl scripts/headers_install.pl /mnt/ExtData/cross/buildroot/output/build/linux-headers-3.4.110/include/generated/rdma /mnt/ExtData/cross/buildroot/output/host/arm-buildroot-linux-uclibcgnueabi/sysroot/usr/include/rdma arm ; for F in ; do echo "#include <asm-generic/$$F>" > /mnt/ExtData/cross/buildroot/output/host/arm-buildroot-linux-uclibcgnueabi/sysroot/usr/include/rdma/$$F; done; touch /mnt/ExtData/cross/buildroot/output/host/arm-buildroot-linux-uclibcgnueabi/sysroot/usr/include/rdma/.install
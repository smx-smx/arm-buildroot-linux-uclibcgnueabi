/*
   +----------------------------------------------------------------------+
   | PHP Version 7                                                        |
   +----------------------------------------------------------------------+
   | Copyright (c) The PHP Group                                          |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
   | Author: Stig Sæther Bakken <ssb@php.net>                             |
   +----------------------------------------------------------------------+
*/

#define CONFIGURE_COMMAND " './configure'  '--target=arm-buildroot-linux-uclibcgnueabi' '--host=arm-buildroot-linux-uclibcgnueabi' '--build=x86_64-pc-linux-gnu' '--prefix=/usr' '--exec-prefix=/usr' '--sysconfdir=/etc' '--localstatedir=/var' '--program-prefix=' '--disable-gtk-doc' '--disable-gtk-doc-html' '--disable-doc' '--disable-docs' '--disable-documentation' '--with-xmlto=no' '--with-fop=no' '--disable-dependency-tracking' '--enable-ipv6' '--disable-nls' '--disable-static' '--enable-shared' '--mandir=/usr/share/man' '--infodir=/usr/share/info' '--with-config-file-scan-dir=/etc/php.d' '--disable-all' '--without-pear' '--with-config-file-path=/etc' '--disable-phpdbg' '--disable-rpath' '--enable-opcache' '--enable-cli' '--enable-cgi' '--enable-fpm' '--enable-sockets' '--enable-posix' '--enable-session' '--enable-dom' '--enable-simplexml' '--enable-xml' '--enable-xmlreader' '--enable-xmlwriter' '--enable-json' '--with-zip' '--enable-calendar' '--enable-fileinfo' '--with-password-argon2=/mnt/ExtData/cross/buildroot/output/host/arm-buildroot-linux-uclibcgnueabi/sysroot/usr' '--with-sodium=/mnt/ExtData/cross/buildroot/output/host/arm-buildroot-linux-uclibcgnueabi/sysroot/usr' '--with-mcrypt=/mnt/ExtData/cross/buildroot/output/host/arm-buildroot-linux-uclibcgnueabi/sysroot/usr' '--with-openssl=/mnt/ExtData/cross/buildroot/output/host/arm-buildroot-linux-uclibcgnueabi/sysroot/usr' '--with-libxml' '--with-zlib=/mnt/ExtData/cross/buildroot/output/host/arm-buildroot-linux-uclibcgnueabi/sysroot/usr' '--with-readline=/mnt/ExtData/cross/buildroot/output/host/arm-buildroot-linux-uclibcgnueabi/sysroot/usr' '--with-pcre-jit' '--with-curl' '--with-ffi' 'build_alias=x86_64-pc-linux-gnu' 'host_alias=arm-buildroot-linux-uclibcgnueabi' 'target_alias=arm-buildroot-linux-uclibcgnueabi' 'PKG_CONFIG=/mnt/ExtData/cross/buildroot/output/host/bin/pkg-config' 'CFLAGS=-D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64 -Os -DHAVE_SHM_IPC -DHAVE_SHM_MMAP_ANON -DHAVE_SHM_MMAP_ZERO -DHAVE_SHM_MMAP_POSIX -DHAVE_SHM_MMAP_FILE' 'LDFLAGS=' 'CPP=/mnt/ExtData/cross/buildroot/output/host/bin/arm-buildroot-linux-uclibcgnueabi-cpp' 'CXXFLAGS=-D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64 -Os '"
#define PHP_ODBC_CFLAGS	""
#define PHP_ODBC_LFLAGS		""
#define PHP_ODBC_LIBS		""
#define PHP_ODBC_TYPE		""
#define PHP_OCI8_DIR			""
#define PHP_OCI8_ORACLE_VERSION		""
#define PHP_PROG_SENDMAIL	"/usr/sbin/sendmail"
#define PEAR_INSTALLDIR         ""
#define PHP_INCLUDE_PATH	".:"
#define PHP_EXTENSION_DIR       "/usr/lib/php/extensions/no-debug-non-zts-20190902"
#define PHP_PREFIX              "/usr"
#define PHP_BINDIR              "/usr/bin"
#define PHP_SBINDIR             "/usr/sbin"
#define PHP_MANDIR              "/usr/share/man"
#define PHP_LIBDIR              "/usr/lib/php"
#define PHP_DATADIR             "/usr/share/php"
#define PHP_SYSCONFDIR          "/etc"
#define PHP_LOCALSTATEDIR       "/var"
#define PHP_CONFIG_FILE_PATH    "/etc"
#define PHP_CONFIG_FILE_SCAN_DIR    "/etc/php.d"
#define PHP_SHLIB_SUFFIX        "so"
#define PHP_SHLIB_EXT_PREFIX    ""

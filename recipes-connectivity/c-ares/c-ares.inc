UMMARY = "C library for asynchronous DNS requests (including name resolves)"
DESCRIPTION = "This is c-ares, an asynchronous resolver library.  It is intended for \
applications which need to perform DNS queries without blocking, or need to \
perform multiple DNS queries in parallel.  The primary examples of such \
applications are servers which communicate with multiple clients and programs \
with graphical user interfaces."
HOMEPAGE = "http://c-ares.haxx.se/"
SECTION = "net/misc"

LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${S}/ares.h;beginline=2;endline=16;md5=f0afa28d6fcfe31822f4a4fd8aa95727 \
                   "

inherit autotools

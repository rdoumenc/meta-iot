require mosquitto.inc

SRC_URI = "http://mosquitto.org/files/source/${PN}-${PV}.tar.gz \
           file://0001-Configure-Makefile-for-integration-to-Yocto.patch \
	   "

SRC_URI[md5sum] = "d859cd474ffa61a6197bdabe007b9027"
SRC_URI[sha256sum] = "d96eb5610e57cc3e273f4527d3f54358ab7711459941a9e64bc4d0a85c2acfda"

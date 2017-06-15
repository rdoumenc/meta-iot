SUMMARY = "Mosquitto is an open source message broker that implements the MQTT"
DESCRIPTION = "Mosquitto is an open source (EPL/EDL licensed) message broker that \
implements the MQTT protocol versions 3.1 and 3.1.1. MQTT provides a lightweight \
method of carrying out messaging using a publish/subscribe model."
HOMEPAGE = "http://mosquitto.org/"
SECTION = "console/network"

LICENSE = "EPL-1.0 & EDL-1.0"
LIC_FILES_CHKSUM = "file://${S}/LICENSE.txt;md5=62ddc846179e908dc0c8efec4a42ef20 \
                   "

DEPENDS = "openssl c-ares util-linux"

FILES_${PN} = "${sbindir}/* \
               ${bindir}/* \
               ${sysconfdir}/* \
               ${libdir}/lib${PN}*so* \
              "

do_install() {
	
  oe_runmake install DESTDIR=${D} prefix=${prefix}
	
  cp ${D}${sysconfdir}/mosquitto/mosquitto.conf.example ${D}${sysconfdir}/mosquitto/mosquitto.conf
  sed 's/#user mosquitto/user root/' -i ${D}${sysconfdir}/mosquitto/mosquitto.conf
}

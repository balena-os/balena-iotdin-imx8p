FILESEXTRAPATHS:prepend := "${THISDIR}/linux-compulab:"

inherit kernel-resin kernel-balena

DEPENDS += "rsync-native"

SRC_URI:append = "file://balena.cfg"

KERNEL_PACKAGE_NAME="kernel"

SCMVERSION="n"

SRCREV = "5df4413189fa9d1f4a08101283401cfc10c80d78"

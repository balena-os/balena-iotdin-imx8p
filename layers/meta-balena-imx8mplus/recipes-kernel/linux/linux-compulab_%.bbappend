FILESEXTRAPATHS:prepend := "${THISDIR}/linux-compulab:"

inherit kernel-resin kernel-balena

DEPENDS += "rsync-native"

SRC_URI:append = "file://balena.cfg"

KERNEL_PACKAGE_NAME="kernel"

SCMVERSION="n"

# BSP layers sets LINUX_VERSION_EXTENSION="${CL_RELEASE}", 
# which triggers the error: "An allarch packagegroup shouldn't depend on packages which are dynamically renamed kernel-modules to kernel-modules-6.6.3-1.0-g284172f37508"
LINUX_VERSION_EXTENSION="${LOCALVERSION}"
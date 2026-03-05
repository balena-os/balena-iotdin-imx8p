SRCREV = "7d585b5c2e77fcebb9abe2fa660d2fdb74e8fa4f"

SRC_URI:append = " \
	file://10000-iotdin-imx8p-Increase-default-ENV-size.patch \ 
	file://10001-integrate-with-balenaOS.patch \ 
	file://10002-Run-CRC32-checks-on-kernel-image-and-fdt.patch \ 
	file://10003-integrate-with-balenaOS-1.patch \ 
	file://20000-balena-Use-pylibfdt-setup.py-from-2021.04.patch \
	file://20001-balena-Fix-env-mmc.c-build-issue.patch \
	file://20002-balena-Disable-BINMAN.patch \
	file://20003-balena-Move-up-the-resin_set_kernel_root-and-set_os.patch \
"

SRCREV = "86b924310f84d7a026ccb6101734385cc917959f"

SRC_URI:append = " \
	file://10000-compulab-imx8m-plus-evnironment-Update-for-the-Bale.patch \
	file://20000-balena-Use-pylibfdt-setup.py-from-2021.04.patch \
	file://20001-balena-Fix-env-mmc.c-build-issue.patch \
	file://20002-balena-Disable-BINMAN.patch \
	file://env_size.cfg \
"

LICENSE = "CLOSED"

PV = "1.0+git${SRCPV}"
PKGV = "1.0+git${GITPKGV}"

SRC_URI = "git://gitlab.openpli.org/openpli/hanssettings.git;protocol=http"
S = "${WORKDIR}/git"

RDEPENDS_${PN} = "xz"

inherit gitpkgv allarch

FILES_${PN} = "${sysconfdir}/enigma2/"

do_install () {
	install -d ${D}${sysconfdir}/enigma2
	if [ -e ${S}/${SETTINGS_FILENAME}/satellites.xml ]; then
		rm -f ${S}/${SETTINGS_FILENAME}/satellites.xml
	fi
	if [ -e ${S}/${SETTINGS_FILENAME}/userbouquet.favourites.tv ]; then
	        rm -f ${S}/${SETTINGS_FILENAME}/userbouquet.favourites.tv
	fi
	if [ -e ${S}/${SETTINGS_FILENAME}/userbouquet.favourites.radio ]; then
		rm -f ${S}/${SETTINGS_FILENAME}/userbouquet.favourites.radio
	fi
	cd ${S}/${SETTINGS_FILENAME}
	for f in *; do
		iconv -f UTF-8 -t UTF-8 -c $f -o ${D}${sysconfdir}/enigma2/$f
	done
}

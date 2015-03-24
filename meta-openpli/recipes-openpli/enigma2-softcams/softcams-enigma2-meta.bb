DESCRIPTION = "meta file for enigma2 softcam packages"

require conf/license/openpli-gplv2.inc

PROVIDES = "softcams"

DEPENDS_mipsel = "\
	enigma2-plugin-softcams-cccam \
	enigma2-plugin-softcams-cccam209 \
	enigma2-plugin-softcams-cccam221 \
	enigma2-plugin-softcams-mgcamd \
	enigma2-plugin-softcams-evocamd \
	enigma2-plugin-softcams-newcs \
	enigma2-plugin-softcams-rqcamd \
	enigma2-plugin-softcams-scam \
	"
DEPENDS += "enigma2-plugin-softcams-oscam"

#! /bin/sh
#
# Copyright (c) 2004,  Theodore A. Roth
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are met:
#
# * Redistributions of source code must retain the above copyright
#   notice, this list of conditions and the following disclaimer.
# * Redistributions in binary form must reproduce the above copyright
#   notice, this list of conditions and the following disclaimer in
#   the documentation and/or other materials provided with the
#   distribution.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
# AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
# IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
# ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
# LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
# CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
# SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
# INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
# CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
# ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
# POSSIBILITY OF SUCH DAMAGE.
#
# $Id$
#

# This is a script to automate the generation of the avr/lib/ tree. Since
# there is a build directory for each device and each of those directories is
# virtually the same, it is easier to maintain a single file instead of an
# ever growing number of small Makefile.am fragments.

# Make sure that we are the top-level of the source tree. We will look for the
# the AUTHORS file in the current dir and the parent. After that, we complain
# and fatal error out.

top_dir="UNKNOWN"

if test -e AUTHORS
then
	top_dir="$PWD"
else
	cd ..
	if test -e AUTHORS
	then
		top_dir="$PWD"
	fi
fi

if test $top_dir = "UNKNOWN"
then
	echo "Can't determine the top level source dir. Aborting."
	exit 1
fi

test -d avr || mkdir avr
test -d avr/lib || mkdir avr/lib

cd avr || exit 1

TMP_COPY_RIGHT_HDR="$PWD/tmp_copy_right_hdr"

cat > ${TMP_COPY_RIGHT_HDR} <<EOF
# Copyright (c) 2004,  Theodore A. Roth
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are met:
#
# * Redistributions of source code must retain the above copyright
#   notice, this list of conditions and the following disclaimer.
# * Redistributions in binary form must reproduce the above copyright
#   notice, this list of conditions and the following disclaimer in
#   the documentation and/or other materials provided with the
#   distribution.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
# AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
# IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
# ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
# LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
# CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
# SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
# INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
# CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
# ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
# POSSIBILITY OF SUCH DAMAGE.
#

##
## NOTE: This file was generated by the gen-avr-lib-tree.sh script found in
## the devtools/ directory of the avr-libc source. If you find that this file
## needs modification, please make the changes in the generator script. To
## propagate the changes, be sure to run the generator script from the top
## level directory of the source tree. (HINT: Your next build will proceed
## much faster if you then re-run the bootstrap script.)
##

EOF

# Create the avr/Makefile.am file.
cat ${TMP_COPY_RIGHT_HDR} > Makefile.am
cat >> Makefile.am << EOF
SUBDIRS = lib
EOF

cd lib || exit 1

SKIP_NEW_DEVS="\
attiny13:crttn13.o::: \
attiny2313:crttn2313.o::: \
atmega168:crtm168.o::: \
atmega48:crtm48.o::: \
atmega88:crtm88.o::: \
"

DEV_INFO="\
${NEW_DEVS} \
at90s1200:crts1200.o::: \
at90s2313:crts2313.o::: \
at90s2323:crts2323.o::: \
at90s2333:crts2333.o::: \
at90s2343:crts2343.o::: \
at90s4433:crts4433.o::: \
at90s4414:crts4414.o::: \
at90s4434:crts4434.o::: \
at90s8515:crts8515.o::: \
at90s8535:crts8535.o::: \
at90c8534:crtc8534.o::: \
attiny11:crttn11.o::: \
attiny12:crttn12.o::: \
attiny15:crttn15.o::: \
attiny22:crttn22.o::: \
attiny26:crttn26.o::: \
attiny28:crttn28.o::: \
atmega103:crtm103.o::: \
atmega128:crtm128.o::: \
atmega16:crtm16.o::: \
atmega161:crtm161.o::: \
atmega162:crtm162.o::: \
atmega163:crtm163.o::: \
atmega169:crtm169.o::: \
atmega8:crtm8.o::: \
atmega8515:crtm8515.o::: \
atmega8535:crtm8535.o::: \
atmega32:crtm32.o::: \
atmega323:crtm323.o::: \
atmega64:crtm64.o::: \
at86rf401:crt86401.o::: \
at43usb320:crt43320.o::: \
at43usb355:crt43355.o::: \
at76c711:crt76711.o::: \
at94k:crtat94k.o::: \
"

cat ${TMP_COPY_RIGHT_HDR} > Makefile.am
cat >> Makefile.am << EOF
SUBDIRS = \\
EOF

#CONF_FRAG="conf.frag"
CONF_FRAG="/dev/null"

echo "Generating source directories:"

> ${CONF_FRAG}

for dev_crt in $DEV_INFO
do
	dev=$(echo $dev_crt | awk -F: '{print $1}')
	crt=$(echo $dev_crt | awk -F: '{print $2}')
	defs=$(echo $dev_crt | awk -F: '{print $3}')
	cflags=$(echo $dev_crt | awk -F: '{print $4}')
	asflags=$(echo $dev_crt | awk -F: '{print $5}')

	echo "  avr/lib/$dev/"

	CONT_CHR="\\"
	if [ $dev = at94k ]
	then
		CONT_CHR=""
	fi

	case $dev in
		at90s1200|attiny11|attiny12|attiny15|attiny22|attiny28)
			# These devices don't support C programming.
			INCLUDE_C_LIB=
			;;
		*)
			INCLUDE_C_LIB="include \$(top_srcdir)/AvrCommonLibC.am"
	esac

	echo "	lib/$dev/Makefile" >> ${CONF_FRAG}

	echo "	$dev $CONT_CHR" >> Makefile.am

	test -d $dev || mkdir $dev

	cat ${TMP_COPY_RIGHT_HDR} > $dev/Makefile.am
	cat >> $dev/Makefile.am <<EOF
AVR_TARGET          = $dev
AVR_TARGET_CRT      = $crt
AVR_TARGET_DEFS     = $defs
AVR_TARGET_CFLAGS   = $cflags
AVR_TARGET_ASFLAGS  = $asflags

# NOTE: Automake will be performing the following include, not GNU Make.
# Automake will also be scanning the included file.

include \$(top_srcdir)/AvrCommon.am
${INCLUDE_C_LIB}

EOF

done

rm -f ${TMP_COPY_RIGHT_HDR}

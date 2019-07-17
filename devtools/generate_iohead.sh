#! /bin/sh


if [ x"$XMLDIR" = x ]
then
    echo 'Please set $XMLDIR in your environment' >&2
    exit 64
fi

for xml in $(find $XMLDIR -name "*.atdf")
do

  name=$(basename $xml)
  vavr=$(echo $name | sed -e 's|ATtiny||g' | cut -d'.' -f1)

  echo "Generating iotn$vavr.h"
  ./gen-ioheader-atdf-avr8x.py $xml > ../include/avr/iotn$vavr.h

done

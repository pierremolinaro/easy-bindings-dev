#!/bin/sh
set -x
set -e
cd `dirname $0`/../galgas_sources &&
galgas -v all_easyBindings.gProject &&
cd `dirname $0`/../makefile_macosx &&
make -f makefile easyBindings_debug --warn-undefined-variables -j `sysctl -n hw.ncpu` &&
cd `dirname $0` &&

for d in `ls`
do
  if [ -d $d ] && [ -e $d/build.command ]
  then
    echo "----- Building in '`dirname $0`/$d' directory"
    $d/build.command || exit
  fi
done

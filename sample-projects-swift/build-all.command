#!/bin/sh
set -x
set -e
cd `dirname $0`/.. &&
galgas -v +easyBindings.galgasProject &&
cd `dirname $0`/../makefile-macosx &&
make -f makefile easyBindings-debug --warn-undefined-variables -j `sysctl -n hw.ncpu` &&
cd `dirname $0` &&

for d in `ls`
do
  if [ -d $d ] && [ -e $d/build.command ]
  then
    echo "----- Building in '`dirname $0`/$d' directory"
    $d/build.command || exit
  fi
done

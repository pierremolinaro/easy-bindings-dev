#!/bin/sh
set -x
set -e
cd `dirname $0`/.. &&
galgas -v +easy-bindings.galgasProject &&
cd `dirname $0`/../makefile-macosx &&
python build.py debug &&
cd `dirname $0` &&

for d in `ls`
do
  if [ -d $d ] && [ -e $d/build.command ]
  then
    echo "----- Building in '`dirname $0`/$d' directory"
    $d/build.command || exit
  fi
done

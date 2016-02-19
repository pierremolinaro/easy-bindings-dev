#!/bin/sh
set -x
DIR=`dirname $0` &&
cd $DIR &&
rm -f easy-bindings.aux easy-bindings.idx easy-bindings.lof easy-bindings.lot easy-bindings.toc &&
rm -f easy-bindings.log easy-bindings.ilg easy-bindings.ind easy-bindings.out easy-bindings.synctex.gz &&
rm -f ref.* temp.eb temp.eb.tex &&
echo "---------------- SUCCES $iteration iterations"

#!/bin/sh
set -x
DIR=`dirname $0` &&
cd $DIR/../makefile-macosx && python build.py release &&
PATH=$DIR/../makefile-macosx:$PATH &&
eb $DIR/binding-reference/binding-ref.eb -b &&
cd $DIR &&
rm -f easy-bindings.pdf ref.* easy-bindings.ilg easy-bindings.ind &&
rm -f easy-bindings.aux easy-bindings.idx easy-bindings.lof easy-bindings.lot easy-bindings.toc &&
rm -f easy-bindings.log easy-bindings.out easy-bindings.synctex.gz &&
#--- First pass
PDF_LATEX=`which pdflatex` &&
MAKE_INDEX=`which makeindex` &&
$PDF_LATEX --file-line-error --shell-escape easy-bindings.tex &&
touch ref.idx &&
touch ref.lof &&
touch ref.lot &&
touch ref.toc &&
iteration=0 &&
while [ `cmp -s ref.lof easy-bindings.lof ; echo $?` -ne 0 ] \
   || [ `cmp -s ref.lot easy-bindings.lot ; echo $?` -ne 0 ] \
   || [ `cmp -s ref.toc easy-bindings.toc ; echo $?` -ne 0 ] \
   || [ `cmp -s ref.idx easy-bindings.idx ; echo $?` -ne 0 ]
do
  cp easy-bindings.idx ref.idx &&
  cp easy-bindings.lof ref.lof &&
  cp easy-bindings.lot ref.lot &&
  cp easy-bindings.toc ref.toc &&
  $MAKE_INDEX -s $DIR/inclusions/style-indexes.ist easy-bindings.idx &&
  $PDF_LATEX --file-line-error --shell-escape easy-bindings.tex &&
  iteration=$((iteration+=1))
done &&
rm -f easy-bindings.aux easy-bindings.idx easy-bindings.lof easy-bindings.lot easy-bindings.toc &&
rm -f easy-bindings.log easy-bindings.ilg easy-bindings.ind easy-bindings.out easy-bindings.synctex.gz &&
rm -f ref.* temp.eb temp.eb.tex &&
echo "---------------- SUCCES $iteration iterations"

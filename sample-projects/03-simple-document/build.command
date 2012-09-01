#!/bin/sh
cd `dirname $0` &&
../../makefile_macosx/easyBindings_debug -v simple-document.easyBindings &&
xcodebuild 

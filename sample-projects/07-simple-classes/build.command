#!/bin/sh
set +e
cd `dirname $0` &&
../../makefile_macosx/easyBindings_debug -v simple-classes.easyBindings &&
/Applications/Xcode.app/Contents/Developer/usr/bin/xcodebuild

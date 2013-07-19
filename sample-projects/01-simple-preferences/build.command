#!/bin/sh
set +e
cd `dirname $0` &&
../../makefile_macosx/easyBindings_debug -c -v simple-preferences.easyBindings &&
/Applications/Xcode.app/Contents/Developer/usr/bin/xcodebuild &&
./test.py

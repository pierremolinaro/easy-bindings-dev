#!/bin/sh
cd `dirname $0` &&
../../makefile_macosx/easyBindings_debug --swift -v simple-document.easyBindings &&
/Applications/Xcode.app/Contents/Developer/usr/bin/xcodebuild &&
./test.py
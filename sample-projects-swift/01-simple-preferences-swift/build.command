#!/bin/sh
set +e
cd `dirname $0` &&
../../makefile-macosx/eb-debug -c -v simple-preferences.eb &&
/Applications/Xcode.app/Contents/Developer/usr/bin/xcodebuild &&
./test.py

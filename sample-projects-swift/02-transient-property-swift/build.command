#!/bin/sh
set +e
cd `dirname $0` &&
../../makefile-macosx/eb-debug -v transient-property.eb &&
/Applications/Xcode.app/Contents/Developer/usr/bin/xcodebuild &&
./test.py

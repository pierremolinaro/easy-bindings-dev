#!/bin/sh
set +e
cd `dirname $0` &&
../../makefile-macosx/easyBindings-debug -v transient-property.easyBindings &&
/Applications/Xcode.app/Contents/Developer/usr/bin/xcodebuild &&
./test.py

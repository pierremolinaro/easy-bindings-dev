#!/bin/sh
cd `dirname $0` &&
../../makefile_macosx/easyBindings_debug --swift -v document-with-relationships.easyBindings &&
/Applications/Xcode.app/Contents/Developer/usr/bin/xcodebuild &&
./test.py

#!/bin/sh
cd `dirname $0` &&
../../makefile-macosx/easyBindings-debug -v simple-document.easyBindings &&
/Applications/Xcode.app/Contents/Developer/usr/bin/xcodebuild &&
./test.py

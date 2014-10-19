#!/bin/sh
cd `dirname $0` &&
../../makefile-macosx/easyBindings-debug -v document-with-relationships.easyBindings &&
/Applications/Xcode.app/Contents/Developer/usr/bin/xcodebuild &&
./test.py

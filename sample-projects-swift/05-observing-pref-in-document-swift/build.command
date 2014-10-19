#!/bin/sh
cd `dirname $0` &&
../../makefile-macosx/easyBindings-debug -v observing-pref-in-documents.easyBindings &&
/Applications/Xcode.app/Contents/Developer/usr/bin/xcodebuild &&
./test.py

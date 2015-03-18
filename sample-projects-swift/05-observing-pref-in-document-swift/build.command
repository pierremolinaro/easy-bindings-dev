#!/bin/sh
cd `dirname $0` &&
../../makefile-macosx/eb-debug -v observing-pref-in-documents.eb &&
/Applications/Xcode.app/Contents/Developer/usr/bin/xcodebuild &&
./test.py

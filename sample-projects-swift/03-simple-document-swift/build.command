#!/bin/sh
cd `dirname $0` &&
../../makefile-macosx/eb-debug -v simple-document.eb &&
/Applications/Xcode.app/Contents/Developer/usr/bin/xcodebuild &&
./test.py

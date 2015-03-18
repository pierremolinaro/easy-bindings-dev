#!/bin/sh
cd `dirname $0` &&
../../makefile-macosx/eb-debug -v document-with-relationships.eb &&
/Applications/Xcode.app/Contents/Developer/usr/bin/xcodebuild &&
./test.py

#!/bin/sh
cd `dirname $0` &&
../../makefile-macosx/eb-debug -v enabled-binding.eb &&
/Applications/Xcode.app/Contents/Developer/usr/bin/xcodebuild 

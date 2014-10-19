#!/bin/sh
cd `dirname $0` &&
../../makefile-macosx/easyBindings-debug -v enabled-binding.easyBindings &&
/Applications/Xcode.app/Contents/Developer/usr/bin/xcodebuild 

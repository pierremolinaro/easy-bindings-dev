#!/bin/sh
cd `dirname $0` &&
../../makefile_macosx/easyBindings_debug -v --swift enabled-binding.easyBindings &&
/Applications/Xcode.app/Contents/Developer/usr/bin/xcodebuild 

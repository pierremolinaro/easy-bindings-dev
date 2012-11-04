#!/bin/sh
cd `dirname $0` &&
../../makefile_macosx/easyBindings_debug -v observing-pref-in-documents.easyBindings &&
/Applications/Xcode.app/Contents/Developer/usr/bin/xcodebuild 

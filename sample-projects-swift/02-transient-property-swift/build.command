#!/bin/sh
set +e
cd `dirname $0` &&
eb -v transient-property.eb &&
/Applications/Xcode.app/Contents/Developer/usr/bin/xcodebuild


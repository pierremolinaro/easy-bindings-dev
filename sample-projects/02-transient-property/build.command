#!/bin/sh
set +e
cd `dirname $0` &&
../../makefile_macosx/easyBindings_debug -v transient-property.easyBindings &&
xcodebuild 

#!/bin/sh
set +e
cd `dirname $0` &&
../../makefile_macosx/easyBindings_debug -v simple-preferences.easyBindings &&
xcodebuild

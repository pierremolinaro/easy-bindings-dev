#!/bin/sh
cd `dirname $0` &&
../../makefile_macosx/easyBindings_debug -v enabled-binding.easyBindings &&
xcodebuild 

#!/bin/sh
cd `dirname $0` &&
../../makefile_macosx/easyBindings64_debug -v enabled-binding.easyBindings &&
xcodebuild 

#!/bin/sh
set +e
cd `dirname $0` &&
../../makefile_macosx/easyBindings64_debug -v document-with-relationships.easyBindings &&
xcodebuild 

#! /usr/bin/env python
# -*- coding: UTF-8 -*-

#------------------------------------------------------------------------------*

import subprocess, os, sys, atexit

#------------------------------------------------------------------------------*

def cleanup () :
  if buildProcess.poll () == None :
    buildProcess.kill ()
    print 'Build process killed'

#------------------------------------------------------------------------------*

#------------------- Register a function for killing build subprocess
atexit.register (cleanup)
#------------------- Get compiler as first argument
compiler = "eb" # Default compiler
if len (sys.argv) > 1 :
  compiler = sys.argv [1]
#------------------- Get script absolute path
scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))
os.chdir (scriptDir)
#------------------- Build
print "+ " + compiler + " -v hidden-binding.eb"
buildProcess = subprocess.Popen ([compiler, "-v", "hidden-binding.eb"])
buildProcess.wait ()
#------------------- Xcode build
if buildProcess.returncode == 0 :
  buildProcess = subprocess.Popen (["/Applications/Xcode.app/Contents/Developer/usr/bin/xcodebuild"])
  buildProcess.wait ()
#-------------------

#------------------------------------------------------------------------------*

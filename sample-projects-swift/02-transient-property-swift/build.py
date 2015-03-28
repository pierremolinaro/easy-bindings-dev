#! /usr/bin/env python
# -*- coding: UTF-8 -*-

#------------------------------------------------------------------------------*

import subprocess, os, sys, atexit

#------------------------------------------------------------------------------*

def cleanup():
  if buildProcess.poll () == None :
    buildProcess.kill ()
    print 'Build process killed'

#------------------------------------------------------------------------------*

#--- Register a function for killing build subprocess
atexit.register (cleanup)
#------------------- Get script absolute path
scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))
os.chdir (scriptDir)
#------------------- Build
buildProcess = subprocess.Popen (["eb", "-v", "transient-property.eb"])
buildProcess.wait ()
#------------------- Xcode build
buildProcess = subprocess.Popen (["/Applications/Xcode.app/Contents/Developer/usr/bin/xcodebuild"])
buildProcess.wait ()
#-------------------

#------------------------------------------------------------------------------*

#! /usr/bin/env python
# -*- coding: UTF-8 -*-

#------------------------------------------------------------------------------*

import subprocess, os, sys

#------------------------------------------------------------------------------*

#------------------- Get script absolute path
scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))
os.chdir (scriptDir)
#------------------- Colors
ENDC = '\033[0m'
BOLD_GREEN = '\033[1m' + '\033[92m'
#------------------- Compile EasyBindings
returncode = subprocess.call ([scriptDir + "/../makefile-macosx/build+debug.py"])
if returncode != 0 :
  sys.exit (returncode)
#------------------- Get subdirs
ebTool = os.path.normpath (scriptDir + "/../makefile-macosx/eb-debug")
#------------------- Get subdirs
for d in os.listdir (scriptDir) :
  buildCommand = scriptDir + "/" + d + "/build.py"
  if os.path.exists (buildCommand) :
    print BOLD_GREEN + d + ENDC
    returncode = subprocess.call ([buildCommand, ebTool])
    if returncode != 0 :
      sys.exit (returncode)
#------------------- Compile appli-accessibility
os.chdir (scriptDir + "/appli-accessibility")
returncode = subprocess.call (["/Applications/Xcode.app/Contents/Developer/usr/bin/xcodebuild"])
if returncode != 0 :
  sys.exit (returncode)
#------------------- Execute appli-accessibility
testCommand = scriptDir + "/appli-accessibility/build/Release/appli-accessibility.app"
returncode = subprocess.call (["/usr/bin/open", "-W", "-n", "-a", testCommand])
if returncode != 0 :
  sys.exit (returncode)

#------------------------------------------------------------------------------*

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
#------------------- Get script absolute path
scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))
os.chdir (scriptDir)
#------------------- Colors
ENDC = '\033[0m'
BOLD_GREEN = '\033[1m' + '\033[92m'
#------------------- Compile EasyBindings
buildProcess = subprocess.Popen ([scriptDir + "/../makefile-macosx/build+debug.py"])
buildProcess.wait ()
if buildProcess.returncode != 0 :
  sys.exit (buildProcess.returncode)
#------------------- Get subdirs
ebTool = os.path.normpath (scriptDir + "/../makefile-macosx/eb-debug")
#------------------- Get subdirs
for d in os.listdir (scriptDir) :
  buildCommand = scriptDir + "/" + d + "/build.py"
  if os.path.exists (buildCommand) :
    print BOLD_GREEN + d + ENDC
    buildProcess = subprocess.Popen ([buildCommand, ebTool])
    buildProcess.wait ()
    if buildProcess.returncode != 0 :
      sys.exit (buildProcess.returncode)
#     testCommand = scriptDir + "/" + d + "/test.py"
#     buildProcess = subprocess.Popen ([testCommand])
#     buildProcess.wait ()
#     if buildProcess.returncode != 0 :
#       sys.exit (buildProcess.returncode)

#------------------------------------------------------------------------------*

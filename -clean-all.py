#! /usr/bin/env python
# -*- coding: UTF-8 -*-

#------------------------------------------------------------------------------*
# https://docs.python.org/2/library/subprocess.html#module-subprocess

import subprocess
import sys
import os
import shutil

#------------------------------------------------------------------------------*

def deleteDir (inDirName) :
  scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))
  #--- Enumerate directories
  for root, dirs, files in os.walk (scriptDir) :
      for aDir in dirs :
        if aDir == inDirName :
          fullname = os.path.join (root, inDirName)
          print "*** Remove " + fullname
          shutil.rmtree (fullname)

#------------------------------------------------------------------------------*

def deleteDotFiles () :
  scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))
  #--- Enumerate directories
  for root, dirs, files in os.walk (scriptDir) :
      for f in files :
        if os.path.splitext (f) [1] [1:] == "dot" :
          fullname = os.path.join (root, f)
          print "*** Remove " + fullname
          os.remove (fullname)

#------------------------------------------------------------------------------*

#--- Get script absolute path
deleteDir ("objects")
deleteDir ("debug_objects")
deleteDir ("DerivedData")
deleteDir ("build")
deleteDir ("xcuserdata")
deleteDir ("project.xcworkspace")
deleteDir ("GALGAS_INDEXES")
deleteDotFiles ()

#------------------------------------------------------------------------------*

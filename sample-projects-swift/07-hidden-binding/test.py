#!/usr/bin/python
# coding=utf-8

# https://pypi.python.org/pypi/atomac
# https://github.com/pyatom/pyatom/blob/master/atomac/AXClasses.py

#--- START OF USER ZONE 1
#--- END OF USER ZONE 1
#------------------------------------------------------------------------------*

import random, string

import subprocess, os, sys, atexit
import atomac, sys, time, inspect

#------------------------------------------------------------------------------*
#   GET SOURCE LINE NUMBER                                                     *
#------------------------------------------------------------------------------*

def lineno():
  return inspect.currentframe().f_back.f_lineno

#------------------------------------------------------------------------------*
#   LAUNCH APPLICATION                                                         *
#------------------------------------------------------------------------------*

def launchApplication ():
  scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))
  atomac.launchAppByBundlePath (scriptDir + "/build/Default/hidden-binding.app")
  time.sleep (0.5)
  application = atomac.getAppRefByBundleId ('fr.irccyn.molinaro.hidden-binding')
  return application

#------------------------------------------------------------------------------*
#   QUIT APPLICATION                                                           *
#------------------------------------------------------------------------------*

def quitApplication ():
  atomac.terminateAppByBundleId ('fr.irccyn.molinaro.hidden-binding')
  time.sleep (0.5)

#------------------------------------------------------------------------------*
#   PREFERENCES WINDOW                                                         *
#------------------------------------------------------------------------------*

def setUpPreferencesWindow (application) :
  time.sleep (0.5)
  window = application.windows ('hidden-binding')[0]
  global myHidden1Switch
  myHidden1Switch = window.findFirst (AXIdentifier='myHidden1Switch')
  global myHidden2Switch
  myHidden2Switch = window.findFirst (AXIdentifier='myHidden2Switch')
  global mButton
  mButton = window.findFirst (AXIdentifier='mButton')

#------------------------------------------------------------------------------*
#   CHECK TEXT FIELD VALUE                                                     *
#------------------------------------------------------------------------------*

def checkTextFieldValue (textField, expectedValue, line):
  if textField.AXValue != expectedValue :
    print '*** Check error at line ' + str (line) + ' ***'
    sys.exit (1)

#------------------------------------------------------------------------------*
#   SET TEXT FIELD                                                             *
#------------------------------------------------------------------------------*

def setTextFieldValue (textField, value):
  textField.AXFocused = True
  textField.AXValue = value
  textField.Confirm ()
  time.sleep (0.5)

#------------------------------------------------------------------------------*
#   MAIN                                                                       *
#------------------------------------------------------------------------------*

application = launchApplication ()
setUpPreferencesWindow (application)


#--- START OF USER ZONE 2
#    ENTER USER CODE HERE
#--- END OF USER ZONE 2

quitApplication ()

#----------------------------------------------------------------------------*

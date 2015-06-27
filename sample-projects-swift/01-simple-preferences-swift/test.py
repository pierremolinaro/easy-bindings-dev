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
  atomac.launchAppByBundlePath (scriptDir + "/build/Default/simple-preferences.app")
  time.sleep (0.5)
  application = atomac.getAppRefByBundleId ('fr.irccyn.molinaro.simple-preferences')
  return application

#------------------------------------------------------------------------------*
#   QUIT APPLICATION                                                           *
#------------------------------------------------------------------------------*

def quitApplication ():
  atomac.terminateAppByBundleId ('fr.irccyn.molinaro.simple-preferences')
  time.sleep (0.5)

#------------------------------------------------------------------------------*
#   PREFERENCES WINDOW                                                         *
#------------------------------------------------------------------------------*

def setUpPreferencesWindow (application) :
  time.sleep (0.5)
  window = application.windows ('simple-preferences')[0]
  global myTextField
  myTextField = window.findFirst (AXIdentifier='myTextField')
  global myOtherTextField
  myOtherTextField = window.findFirst (AXIdentifier='myOtherTextField')
  global myObserverTextField
  myObserverTextField = window.findFirst (AXIdentifier='myObserverTextField')
  global mColorWell
  mColorWell = window.findFirst (AXIdentifier='mColorWell')
  global mContinousColorWell
  mContinousColorWell = window.findFirst (AXIdentifier='mContinousColorWell')
  global mObserverColorWell
  mObserverColorWell = window.findFirst (AXIdentifier='mObserverColorWell')
  global mDatePicker
  mDatePicker = window.findFirst (AXIdentifier='mDatePicker')
  global mInteger32TextField
  mInteger32TextField = window.findFirst (AXIdentifier='mInteger32TextField')
  global mInteger32ObserverTextField
  mInteger32ObserverTextField = window.findFirst (AXIdentifier='mInteger32ObserverTextField')

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

#--- Text field
testValue = ''.join (random.choice (string.ascii_uppercase + string.digits) for x in range (16))
setTextFieldValue (myTextField, testValue)
checkTextFieldValue (myOtherTextField, testValue, lineno ())
checkTextFieldValue (myObserverTextField, testValue, lineno ())

#--- Color
mColorWell.Press ()
time.sleep(.5)
colorPicker = application.windows ('Colors')[0]
toolbar = colorPicker.findFirst (AXRole='AXToolbar')
toolbar.findAll ()[2].Press () # Selects RGB
time.sleep(.5)
colorRows = colorPicker.rowsR ()
selectedRowIndex = random.randrange (0, len (colorRows) - 1)
colorRows [selectedRowIndex].AXSelected = True ;
time.sleep(.5)

#--- Quit and relaunch
quitApplication ()
application = launchApplication ()
setUpPreferencesWindow (application)

#--- Check text fields
checkTextFieldValue (myTextField, testValue, lineno ())
checkTextFieldValue (myOtherTextField, testValue, lineno ())
checkTextFieldValue (myObserverTextField, testValue, lineno ())

#--- Check color wells
mContinousColorWell.Press ()
time.sleep(.5)
colorPicker = application.windows ('Colors')[0]
toolbar = colorPicker.findFirst (AXRole='AXToolbar')
toolbar.findAll ()[2].Press () # Selects RGB
time.sleep(.5)
colorRows = colorPicker.rowsR ()
time.sleep(.5)

if not colorRows [selectedRowIndex].AXSelected:
    print '*** Erreur 13 ***'
    sys.exit (1)

#--- END OF USER ZONE 2


quitApplication ()

#----------------------------------------------------------------------------*

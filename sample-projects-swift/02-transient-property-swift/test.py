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
  atomac.launchAppByBundlePath (scriptDir + "/build/Default/transient-property.app")
  time.sleep (0.5)
  application = atomac.getAppRefByBundleId ('fr.irccyn.molinaro.transient-property')
  return application

#------------------------------------------------------------------------------*
#   QUIT APPLICATION                                                           *
#------------------------------------------------------------------------------*

def quitApplication ():
  atomac.terminateAppByBundleId ('fr.irccyn.molinaro.transient-property')
  time.sleep (0.5)

#------------------------------------------------------------------------------*
#   PREFERENCES WINDOW                                                         *
#------------------------------------------------------------------------------*

def setUpPreferencesWindow (application) :
  time.sleep (0.5)
  window = application.windows ('transient-property')[0]
  global mFirstNameTextField
  mFirstNameTextField = window.findFirst (AXIdentifier='mFirstNameTextField')
  global mLastNameTextField
  mLastNameTextField = window.findFirst (AXIdentifier='mLastNameTextField')
  global mFullNameTextField
  mFullNameTextField = window.findFirst (AXIdentifier='mFullNameTextField')
  global mUpperCaseFullNameTextField
  mUpperCaseFullNameTextField = window.findFirst (AXIdentifier='mUpperCaseFullNameTextField')
  global myButton
  myButton = window.findFirst (AXIdentifier='myButton')

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

application = launchApplication ()
setUpPreferencesWindow (application)

myButton.Press () ;

checkTextFieldValue (mFirstNameTextField, u'Amédée', lineno())
checkTextFieldValue (mLastNameTextField, 'Schmurtz', lineno())

response = u"Amédée" + " " + "Schmurtz"
checkTextFieldValue (mFullNameTextField, response, lineno())
checkTextFieldValue (mUpperCaseFullNameTextField, response.upper (), lineno())

#--- Enter firstNameValue via 'firstName'
firstNameValue = ''.join (random.choice (string.ascii_lowercase + string.digits) for x in range(8))
lastNameValue = ''.join (random.choice (string.ascii_lowercase + string.digits) for x in range(8))

setTextFieldValue (mFirstNameTextField, firstNameValue)
checkTextFieldValue (mFirstNameTextField, firstNameValue, lineno())

#--- Enter lastNameValue via 'lastName'
setTextFieldValue (mLastNameTextField, lastNameValue)
checkTextFieldValue (mLastNameTextField, lastNameValue, lineno())

#--- check 'firstLastName'
response = firstNameValue + ' ' + lastNameValue
checkTextFieldValue (mFullNameTextField, response, lineno())

#--- check 'mUpperCaseFullNameTextField'
checkTextFieldValue (mUpperCaseFullNameTextField, response.upper (), lineno())

#--- Quit
quitApplication ()

#--- Relaunch application to check preferences have recorded the new value
application = launchApplication ()
setUpPreferencesWindow (application)

checkTextFieldValue (mFirstNameTextField, firstNameValue, lineno())
checkTextFieldValue (mLastNameTextField, lastNameValue, lineno())
checkTextFieldValue (mFullNameTextField, response, lineno())
checkTextFieldValue (mUpperCaseFullNameTextField, response.upper (), lineno())

quitApplication ()

print 'Success !'

#--- END OF USER ZONE 2


quitApplication ()

#----------------------------------------------------------------------------*

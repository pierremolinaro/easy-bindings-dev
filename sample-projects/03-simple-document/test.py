#!/usr/bin/python
# coding=utf-8

# https://pypi.python.org/pypi/atomac
# https://github.com/pyatom/pyatom/blob/master/atomac/AXClasses.py

import atomac, sys, time
import AppKit, os

# http://stackoverflow.com/questions/2257441/python-random-string-generation-with-upper-case-letters-and-digits

import random, string

#print os.path.dirname(__file__)

sourceFilePath = os.path.dirname(__file__) + '/z.03-simple-document'
ok = AppKit.NSWorkspace.sharedWorkspace().openFile_ (sourceFilePath) 
if not ok:
    print '*** Erreur 1 ***'
    sys.exit (1)

bundleName = 'fr.free.pcmolinaro.-3-simple-document'
monAppli = atomac.getAppRefByBundleId (bundleName)
time.sleep(.5)

window = monAppli.windows()[0]

docString = window.findFirst (AXDescription='docString')
lowerResult = window.findFirst (AXDescription='lowerResult')
upperResult = window.findFirst (AXDescription='upperResult')
upperLowerResult = window.findFirst (AXDescription='upperLowerResult')


#--- Enter value via 'docString'
newValue = ''.join (random.choice (string.ascii_lowercase + string.ascii_uppercase + string.digits) for x in range(8))
docString.AXFocused = True
docString.AXValue = newValue
docString.Confirm ()
time.sleep(0.5)
if docString.AXValue != newValue:
    print '*** Erreur 11 ***'
    sys.exit (1)

#--- check 'lowerResult'
if lowerResult.AXValue != newValue.lower ():
    print '*** Erreur 12 ***'
    sys.exit (1)

#--- check 'upperResult'
if upperResult.AXValue !=  newValue.upper ():
    print '*** Erreur 13 ***'
    sys.exit (1)


#--- check 'upperLowerResult'
if upperLowerResult.AXValue !=  newValue.upper () + ' ' + newValue.lower () :
    print '*** Erreur 14 ***'
    sys.exit (1)

#--- Save
monAppli.menuItem ('File', 'Save').Press()
time.sleep(.5)

#--- Quit
atomac.terminateAppByBundleId (bundleName)
time.sleep(.5)

#--- Relaunch application to check preferences have recorded the new value
ok = AppKit.NSWorkspace.sharedWorkspace().openFile_ (sourceFilePath) 
if not ok:
    print '*** Erreur 10 ***'
    sys.exit (1)

bundleName = 'fr.free.pcmolinaro.-3-simple-document'
monAppli = atomac.getAppRefByBundleId (bundleName)
time.sleep(.5)

window = monAppli.windows()[0]

docString = window.findFirst (AXDescription='docString')
lowerResult = window.findFirst (AXDescription='lowerResult')
upperResult = window.findFirst (AXDescription='upperResult')
upperLowerResult = window.findFirst (AXDescription='upperLowerResult')

if docString.AXValue != newValue:
    print '*** Erreur 11 ***'
    sys.exit (1)

#--- check 'lowerResult'
if lowerResult.AXValue != newValue.lower ():
    print '*** Erreur 12 ***'
    sys.exit (1)

#--- check 'upperResult'
if upperResult.AXValue !=  newValue.upper ():
    print '*** Erreur 13 ***'
    sys.exit (1)


#--- check 'upperLowerResult'
if upperLowerResult.AXValue !=  newValue.upper () + ' ' + newValue.lower () :
    print '*** Erreur 14 ***'
    sys.exit (1)

atomac.terminateAppByBundleId (bundleName)

print 'Success !'
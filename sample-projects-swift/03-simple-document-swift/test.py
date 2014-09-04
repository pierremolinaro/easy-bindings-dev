#!/usr/bin/python
# coding=utf-8

# https://pypi.python.org/pypi/atomac
# https://github.com/pyatom/pyatom/blob/master/atomac/AXClasses.py

import atomac, sys, time
import AppKit, os

# http://stackoverflow.com/questions/2257441/python-random-string-generation-with-upper-case-letters-and-digits

import random, string

#print os.path.dirname(__file__)

scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))
bundlePath = scriptDir + "/build/Release/03-simple-document-swift.app"
atomac.launchAppByBundlePath (bundlePath)

sourceFilePath = os.path.dirname (__file__) + '/z.03-simple-document-swift'
ok = AppKit.NSWorkspace.sharedWorkspace().openFile_ (sourceFilePath) 
if not ok:
    print '*** Erreur 1 ***'
    sys.exit (1)

bundleName = 'fr.free.pcmolinaro.-3-simple-document-swift'
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

#----------------------- Enter color
ColorWell = window.findFirst (AXDescription='ColorWell')
ColorWell.Press ()
time.sleep(.5)
colorPicker = monAppli.windows ('Colors')[0]
toolbar = colorPicker.findFirst (AXRole='AXToolbar')
toolbar.findAll ()[2].Press () # Selects RGB
time.sleep(.5)
colorRows = colorPicker.rowsR ()
selectedRowIndex = random.randrange (0, len (colorRows) - 1)
colorRows [selectedRowIndex].AXSelected = True ;
time.sleep(.5)

#--- Select matrix
matrix = window.findFirst (AXDescription='matrix')
matrixSelectedRowIndex = random.randrange (0, 2, 1)
matrix.AXChildren [matrixSelectedRowIndex].Press ()

#--- Save
monAppli.menuItem ('File', 'Save').Press()
time.sleep(.5)

#--- Quit
atomac.terminateAppByBundleId (bundleName)
time.sleep(.5)

#--- Relaunch application to check preferences have recorded the new value
atomac.launchAppByBundlePath (bundlePath)
ok = AppKit.NSWorkspace.sharedWorkspace().openFile_ (sourceFilePath) 
if not ok:
    print '*** Erreur 10 ***'
    sys.exit (1)

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

#--- check 'color'
ColorWell = window.findFirst (AXDescription='ColorWell')
ColorWell.Press ()
time.sleep(.5)
colorPicker = monAppli.windows ('Colors')[0]
toolbar = colorPicker.findFirst (AXRole='AXToolbar')
toolbar.findAll ()[2].Press () # Selects RGB
time.sleep(.5)
colorRows = colorPicker.rowsR ()
time.sleep(.5)

if not colorRows [selectedRowIndex].AXSelected:
    print '*** Erreur 15 ***'
    sys.exit (1)

#--- Undo (selecting a colorWell makes changes)
monAppli.menuItem ('Edit', 'Undo').Press()
time.sleep(.5)

#--- Check matrix
matrix = window.findFirst (AXDescription='matrix')
# print matrix.AXChildren [matrixSelectedRowIndex].AXValue
if matrix.AXChildren [matrixSelectedRowIndex].AXValue != 1:
    print '*** Erreur 16 ***'
    sys.exit (1)

atomac.terminateAppByBundleId (bundleName)

print 'Success !'

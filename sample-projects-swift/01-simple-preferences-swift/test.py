#!/usr/bin/python
# https://pypi.python.org/pypi/atomac
# https://github.com/pyatom/pyatom/blob/master/atomac/AXClasses.py

import atomac, sys, time, os

# http://stackoverflow.com/questions/2257441/python-random-string-generation-with-upper-case-letters-and-digits

import random, string

scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))
atomac.launchAppByBundlePath (scriptDir + "/build/Release/01-simple-preferences-swift.app")

bundleName = 'fr.free.pcmolinaro.-1-simple-preferences-swift'
monAppli = atomac.getAppRefByBundleId (bundleName)
time.sleep(.5)

window = monAppli.windows('01-simple-preferences')[0]

text1 = window.findFirst (AXDescription='texte1')
text2 = window.findFirst (AXDescription='texte2')

testValue = ''.join (random.choice (string.ascii_uppercase + string.digits) for x in range(16))
#--- Enter text via 'text1'
text1.AXValue = testValue
monAppli.sendKey ('\n')
time.sleep(.5)
if text2.AXValue != testValue:
    print '*** Erreur 1 ***'
    sys.exit (1)

#----------------------- Enter color
color1 = window.findFirst (AXDescription='color1')
color1.Press ()
time.sleep(.5)
colorPicker = monAppli.windows ('Colors')[0]
toolbar = colorPicker.findFirst (AXRole='AXToolbar')
toolbar.findAll ()[2].Press () # Selects RGB
time.sleep(.5)
colorRows = colorPicker.rowsR ()
selectedRowIndex = random.randrange (0, len (colorRows) - 1)
colorRows [selectedRowIndex].AXSelected = True ;
time.sleep(.5)

#--- Quit
atomac.terminateAppByBundleId (bundleName)
time.sleep(.5)

#--- Relaunch application to check preferences have recorded the new value
atomac.launchAppByBundlePath (scriptDir + "/build/Release/01-simple-preferences-swift.app")
monAppli = atomac.getAppRefByBundleId (bundleName)
time.sleep(.5)

window = monAppli.windows()[0]
text1 = window.findFirst (AXDescription='texte1')
text2 = window.findFirst (AXDescription='texte2')

if text1.AXValue != testValue:
    print '*** Erreur 11 ***'
    sys.exit (1)

if text2.AXValue != testValue:
    print '*** Erreur 12 ***'
    sys.exit (1)

color1 = window.findFirst (AXDescription='color1')
color1.Press ()
time.sleep(.5)
colorPicker = monAppli.windows ('Colors')[0]
toolbar = colorPicker.findFirst (AXRole='AXToolbar')
toolbar.findAll ()[2].Press () # Selects RGB
time.sleep(.5)
colorRows = colorPicker.rowsR ()
colorRows [selectedRowIndex].AXSelected = True ;
time.sleep(.5)

if not colorRows [selectedRowIndex].AXSelected:
    print '*** Erreur 13 ***'
    sys.exit (1)

atomac.terminateAppByBundleId (bundleName)

print 'Success !'

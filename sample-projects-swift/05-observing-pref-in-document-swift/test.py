#!/usr/bin/python
# https://pypi.python.org/pypi/atomac
# https://github.com/pyatom/pyatom/blob/master/atomac/AXClasses.py

import atomac, sys, time, random, string
import AppKit, os

sourceFilePath = os.path.dirname(__file__) + '/z.observingPrefsInDocument-swift'
ok = AppKit.NSWorkspace.sharedWorkspace().openFile_ (sourceFilePath) 
if not ok:
    print '*** Erreur 0 ***'
    sys.exit (1)

bundleName = 'fr.irccyn.molinaro.observingPrefsInDocument'
#atomac.launchAppByBundleId (bundleName)
monAppli = atomac.getAppRefByBundleId (bundleName)
time.sleep (0.5)

#print monAppli
#print monAppli.windows ()

documentWindow = monAppli.windows () [0]
documentString = documentWindow.findFirst (AXDescription='documentString')
transientPrefsString = documentWindow.findFirst (AXDescription='transientPrefsString')
resultingString = documentWindow.findFirst (AXDescription='resultingString')

#--- Change document string
newDocumentValue = ''.join (random.choice (string.ascii_lowercase + string.ascii_uppercase + string.digits) for x in range(8))
documentString.AXFocused = True
documentString.AXValue = newDocumentValue
documentString.Confirm ()
time.sleep(0.5)
if documentString.AXValue != newDocumentValue:
    print '*** Erreur 1 ***'
    sys.exit (1)

#--- Save
monAppli.menuItem ('File', 'Save').Press()
time.sleep(.5)

#--- Activate Preferences Window
monAppli.menuItem ('05-observing-pref-in-document-swift', 'Preferences').Press()
preferencesWindow = monAppli.windows()[0]
prefsString = preferencesWindow.findFirst (AXDescription='prefsString')

#--- Change preferences string
newPrefsValue = ''.join (random.choice (string.ascii_lowercase + string.ascii_uppercase + string.digits) for x in range(8))
prefsString.AXFocused = True
prefsString.AXValue = newPrefsValue
prefsString.Confirm ()
time.sleep(0.5)
if prefsString.AXValue != newPrefsValue:
    print '*** Erreur 2 ***'
    sys.exit (1)

#--- Check transient prefs string
expectedValue = '<' + newPrefsValue + '>'
if transientPrefsString.AXValue != expectedValue:
    print '*** Erreur 3 ***'
    sys.exit (1)

#--- Check resulting string
expectedValue = 'Doc \'' + newDocumentValue + '\' Prefs \'' + newPrefsValue + '\' Pref Transient \'<' + newPrefsValue + '>\''
if resultingString.AXValue != expectedValue:
    print '*** Erreur 4 ***'
    sys.exit (1)

#--- Quit
atomac.terminateAppByBundleId (bundleName)
time.sleep(.5)

#--- Lauch again application
ok = AppKit.NSWorkspace.sharedWorkspace().openFile_ (sourceFilePath) 
if not ok:
    print '*** Erreur 10 ***'
    sys.exit (1)

monAppli = atomac.getAppRefByBundleId (bundleName)
time.sleep (0.5)

documentWindow = monAppli.windows () [0]
documentString = documentWindow.findFirst (AXDescription='documentString')
transientPrefsString = documentWindow.findFirst (AXDescription='transientPrefsString')
resultingString = documentWindow.findFirst (AXDescription='resultingString')

#--- Check document string
documentString.AXFocused = True
documentString.AXValue = newDocumentValue
documentString.Confirm ()
if documentString.AXValue != newDocumentValue:
    print '*** Erreur 11 ***'
    sys.exit (1)

#--- Check transient prefs string
expectedValue = '<' + newPrefsValue + '>'
if transientPrefsString.AXValue != expectedValue:
    print '*** Erreur 13 ***'
    sys.exit (1)

#--- Check resulting string
expectedValue = 'Doc \'' + newDocumentValue + '\' Prefs \'' + newPrefsValue + '\' Pref Transient \'<' + newPrefsValue + '>\''
if resultingString.AXValue != expectedValue:
    print '*** Erreur 14 ***'
    sys.exit (1)

#--- Quit
atomac.terminateAppByBundleId (bundleName)

print 'Success !'

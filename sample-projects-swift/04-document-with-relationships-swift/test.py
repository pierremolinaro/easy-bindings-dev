#!/usr/bin/python
# https://pypi.python.org/pypi/atomac
# https://github.com/pyatom/pyatom/blob/master/atomac/AXClasses.py

import atomac, sys, time, os, AppKit

scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))
bundlePath = scriptDir + "/build/Release/04-document-with-relationships-swift.app"
atomac.launchAppByBundlePath (bundlePath)

sourceFilePath = os.path.dirname (__file__) + '/z.04-document-with-relationships-swift'
ok = AppKit.NSWorkspace.sharedWorkspace().openFile_ (sourceFilePath) 

bundleName = 'fr.free.pcmolinaro.-4-document-with-relationships-swift'
monAppli = atomac.getAppRefByBundleId (bundleName)
time.sleep(.8)

window = monAppli.windows()[0]
addEntryButton = window.findFirst (AXDescription='addEntry')
removeEntryButton = window.findFirst (AXDescription='removeEntry')
entryCountTextField = window.findFirst (AXDescription='entryCount')
entryCountStringTextField = window.findFirst (AXDescription='entryCountString')
canRemoveEntryTextField = window.findFirst (AXDescription='canRemoveEntry')

#--- Add Entry
addEntryButton.Press ()
time.sleep(.5)
if entryCountTextField.AXValue != '1':
    print '*** Erreur 1 ***'
    sys.exit (1)
if entryCountStringTextField.AXValue != '1 Item':
    print '*** Erreur 2 ***'
    sys.exit (1)
if canRemoveEntryTextField.AXValue != 'Can remove: yes':
    print '*** Erreur 3 ***'
    sys.exit (1)

#--- Remove Entry
removeEntryButton.Press ()
time.sleep(.5)
if entryCountTextField.AXValue != '0':
    print '*** Erreur 11 ***'
    sys.exit (1)
if entryCountStringTextField.AXValue != 'No Item':
    print '*** Erreur 12 ***'
    sys.exit (1)
if canRemoveEntryTextField.AXValue != 'Can remove: no':
    print '*** Erreur 13 ***'
    sys.exit (1)

#--- First Undo
monAppli.menuItem ('Edit', 'Undo').Press()
time.sleep(.5)
if entryCountTextField.AXValue != '1':
    print '*** Erreur 21 ***'
    sys.exit (1)
if entryCountStringTextField.AXValue != '1 Item':
    print '*** Erreur 22 ***'
    sys.exit (1)
if canRemoveEntryTextField.AXValue != 'Can remove: yes':
    print '*** Erreur 23 ***'
    sys.exit (1)

#--- Second Undo
monAppli.menuItem ('Edit', 'Undo').Press()
time.sleep(.5)
if entryCountTextField.AXValue != '0':
    print '*** Erreur 31 ***'
    sys.exit (1)
if entryCountStringTextField.AXValue != 'No Item':
    print '*** Erreur 32 ***'
    sys.exit (1)
if canRemoveEntryTextField.AXValue != 'Can remove: no':
    print '*** Erreur 33 ***'
    sys.exit (1)

#--- Quit
atomac.terminateAppByBundleId (bundleName)

print 'Success !'

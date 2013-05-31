#!/usr/bin/python
# https://pypi.python.org/pypi/atomac
# https://github.com/pyatom/pyatom/blob/master/atomac/AXClasses.py

import atomac, sys, time

bundleName = 'fr.free.molinaro.-7-simple-classes'
atomac.launchAppByBundleId (bundleName)
monAppli = atomac.getAppRefByBundleId (bundleName)
time.sleep(.5)

window = monAppli.windows()[0]
incrementButton = window.findFirst (AXDescription='increment')
countTextField = window.findFirst (AXDescription='result')

#--- Click 'increment'
incrementButton.Press ()
time.sleep(.5)
if countTextField.AXValue != 'azerty myInteger32:1':
    print '*** Erreur 1 ***'
    sys.exit (1)

#--- Click 'increment'
incrementButton.Press ()
time.sleep(.5)
if countTextField.AXValue != 'azerty myInteger32:2':
    print '*** Erreur 1 ***'
    sys.exit (1)

#--- Quit
atomac.terminateAppByBundleId (bundleName)

print 'Success !'
#!/usr/bin/python
# coding=utf-8

# https://pypi.python.org/pypi/atomac
# https://github.com/pyatom/pyatom/blob/master/atomac/AXClasses.py

import atomac, sys, time

# http://stackoverflow.com/questions/2257441/python-random-string-generation-with-upper-case-letters-and-digits

import random, string

bundleName = 'fr.free.pcmolinaro.-2-transient-property-swift'
atomac.launchAppByBundleId (bundleName)
monAppli = atomac.getAppRefByBundleId (bundleName)
time.sleep(.5)

window = monAppli.windows('02-transient-property')[0]

firstName = window.findFirst (AXDescription='firstName')
lastName = window.findFirst (AXDescription='lastName')
firstLastName = window.findFirst (AXDescription='firstLastName')
uppercaseFirstLastName = window.findFirst (AXDescription='uppercaseFirstLastName')
amedeeSchmurtzButton = window.findFirst (AXDescription='amedeeSchmurtz')

#--- Enter names via 'firstName'
amedeeSchmurtzButton.Press () ;
time.sleep(0.5)
if firstName.AXValue != u'Amédée' :
    print '*** Erreur 1 ***'
    sys.exit (1)

#--- Enter lastNameValue via 'lastName'
if lastName.AXValue != "Schmurtz":
    print '*** Erreur 2 ***'
    sys.exit (1)

#--- check 'firstLastName'
response = u"Amédée" + " " + "Schmurtz"
if firstLastName.AXValue != response:
    print '*** Erreur 3 ***'
    sys.exit (1)

#--- check 'uppercaseFirstLastName'
if uppercaseFirstLastName.AXValue !=  response.upper ():
    print '*** Erreur 4 ***'
    sys.exit (1)



#--- Enter firstNameValue via 'firstName'
firstNameValue = ''.join (random.choice (string.ascii_lowercase + string.digits) for x in range(8))
lastNameValue = ''.join (random.choice (string.ascii_lowercase + string.digits) for x in range(8))
#print firstName.getActions ()
#print firstName.getAttributes ()
firstName.AXFocused = True
firstName.AXValue = firstNameValue
firstName.Confirm ()
time.sleep(0.5)
if firstName.AXValue != firstNameValue:
    print '*** Erreur 11 ***'
    sys.exit (1)

#--- Enter lastNameValue via 'lastName'
lastName.AXFocused = True
lastName.AXValue = lastNameValue
lastName.Confirm ()
time.sleep(0.5)
if lastName.AXValue != lastNameValue:
    print '*** Erreur 12 ***'
    sys.exit (1)

#--- check 'firstLastName'
response = firstNameValue + ' ' + lastNameValue
if firstLastName.AXValue != response:
    print '*** Erreur 13 ***'
    sys.exit (1)

#--- check 'uppercaseFirstLastName'
if uppercaseFirstLastName.AXValue !=  response.upper ():
    print '*** Erreur 14 ***'
    sys.exit (1)



#--- Quit
atomac.terminateAppByBundleId (bundleName)
time.sleep(.5)

#--- Relaunch application to check preferences have recorded the new value
atomac.launchAppByBundleId (bundleName)
monAppli = atomac.getAppRefByBundleId (bundleName)
time.sleep(.5)

window = monAppli.windows ('02-transient-property')[0]
firstName = window.findFirst (AXDescription='firstName')
lastName = window.findFirst (AXDescription='lastName')
firstLastName = window.findFirst (AXDescription='firstLastName')
uppercaseFirstLastName = window.findFirst (AXDescription='uppercaseFirstLastName')

if firstName.AXValue != firstNameValue:
    print '*** Erreur 21 ***'
    sys.exit (1)

if lastName.AXValue != lastNameValue:
    print '*** Erreur 22 ***'
    sys.exit (1)

#--- check 'firstLastName'
if firstLastName.AXValue != response:
    print '*** Erreur 23 ***'
    sys.exit (1)

#--- check 'uppercaseFirstLastName'
if uppercaseFirstLastName.AXValue !=  response.upper ():
    print '*** Erreur 24 ***'
    sys.exit (1)

atomac.terminateAppByBundleId (bundleName)

print 'Success !'

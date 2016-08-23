//
//  AppDelegate.swift
//  appli-accessibility
//
//  Created by Pierre Molinaro on 21/08/2016.
//  Copyright © 2016 Pierre Molinaro. All rights reserved.
//
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

import Cocoa

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

func test_01_simple_preferences (_ testLog: TestLog) throws {
  let appPath = "/Volumes/dev-svn/easy-bindings/sample-projects-swift/01-simple-preferences-swift/build/Default/simple-preferences.app"
//--- Launch app
  var app = try TestApplication (bundlePath: appPath, testLog:testLog)
//--- Preferences window
  var window = try app.preferenceWindow ()
//--- Read text fields
  var myTextField = try app.textFieldValue (window: window, identifier: "myTextField")
  var myOtherTextField = try app.textFieldValue (window: window, identifier: "myOtherTextField")
  var myObserverTextField = try app.textFieldValue (window: window, identifier: "myObserverTextField")
  if myTextField != myOtherTextField {
    try app.raiseError (1)
  }
  if myTextField != myObserverTextField {
    try app.raiseError (2)
  }
//--- Read color wells
  var mColorWell = try app.colorWellValue (window: window, identifier: "mColorWell")
  var mContinuousColorWell = try app.colorWellValue (window: window, identifier: "mContinuousColorWell")
  var mObserverColorWell = try app.colorWellValue (window: window, identifier: "mObserverColorWell")
  if "\(mColorWell)" != "\(mContinuousColorWell)" {
    try app.raiseError (3)
  }
  if "\(mColorWell)" != "\(mObserverColorWell)" {
    try app.raiseError (4)
  }
//--- Change text fields and check
  let newString = randomString ()
  try app.setTextFieldValue (window: window, identifier: "myOtherTextField", value:newString)
  myTextField = try app.textFieldValue (window: window, identifier: "myTextField")
  myOtherTextField = try app.textFieldValue (window: window, identifier: "myOtherTextField")
  myObserverTextField = try app.textFieldValue (window: window, identifier: "myObserverTextField")
  if newString != myTextField {
    try app.raiseError (5)
  }
  if newString != myOtherTextField {
    try app.raiseError (6)
  }
  if newString != myObserverTextField {
    try app.raiseError (7)
  }
//--- Change color wells and check
  let newColor = randomColor ()
  try app.setColorWellValue (window: window, identifier: "mColorWell", value:newColor)
  mColorWell = try app.colorWellValue (window: window, identifier: "mColorWell")
  mContinuousColorWell = try app.colorWellValue (window: window, identifier: "mContinuousColorWell")
  mObserverColorWell = try app.colorWellValue (window: window, identifier: "mObserverColorWell")
  if "\(mColorWell)" != "\(newColor)" {
    try app.raiseError (8)
  }
  if "\(mContinuousColorWell)" != "\(newColor)" {
    try app.raiseError (9)
  }
  if "\(mObserverColorWell)" != "\(newColor)" {
    try app.raiseError (10)
  }
//--- Terminate app
  app.terminate ()
//--- Relaunch app
  app = try TestApplication (bundlePath: appPath, testLog:testLog)
//--- Preferences window
  window = try app.preferenceWindow ()
//--- Check text fields has new value
  myTextField = try app.textFieldValue (window: window, identifier: "myTextField")
  myOtherTextField = try app.textFieldValue (window: window, identifier: "myOtherTextField")
  myObserverTextField = try app.textFieldValue (window: window, identifier: "myObserverTextField")
  if newString != myTextField {
    try app.raiseError (6)
  }
  if newString != myOtherTextField {
    try app.raiseError (7)
  }
  if newString != myObserverTextField {
    try app.raiseError (8)
  }
//--- Terminate app
  app.terminate ()
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————


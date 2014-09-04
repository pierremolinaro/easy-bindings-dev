//
//  main.swift
//  performance-en-swift
//
//  Created by Pierre Molinaro on 04/09/2014.
//  Copyright (c) 2014 Pierre Molinaro. All rights reserved.
//
//---------------------------------------------------------------------------------------------------------------------*

let COUNT = 1_000_000

//---------------------------------------------------------------------------------------------------------------------*

import Foundation

//---------------------------------------------------------------------------------------------------------------------*

func allocBoolInNativeArray () {
  print ("Append Bool in native Swift array... ")
  var start = NSDate ()
  var array : [Bool] = []
  for i in 0..<COUNT {
    array.append (true)
  }
  var duration : Int = Int (NSDate ().timeIntervalSinceDate (start) * 1000.0)
  print ("\(duration) ms, \(array.count) elements, enumeration... ")
  var sum = 0
  start = NSDate ()
  for b in array {
    sum += Int (b)
  }
  duration = Int (NSDate ().timeIntervalSinceDate (start) * 1000.0)
  println ("\(duration) ms")
}

//---------------------------------------------------------------------------------------------------------------------*

func alloNSNumberInNativeArray () {
  print ("Append NSNumber in native Swift array... ")
  var start = NSDate ()
  var array : [NSNumber] = []
  for i in 0..<COUNT {
    array.append (NSNumber.numberWithBool (true))
  }
  var duration : Int = Int (NSDate ().timeIntervalSinceDate (start) * 1000.0)
  print ("\(duration) ms, \(array.count) elements, enumeration... ")
  var sum = 0
  start = NSDate ()
  for b in array {
    sum += Int (b.boolValue)
  }
  duration = Int (NSDate ().timeIntervalSinceDate (start) * 1000.0)
  println ("\(duration) ms")
}

//---------------------------------------------------------------------------------------------------------------------*

func allocNSNumberInNSMutableArray () {
  print ("Append NSNumber in NSMutableArray... ")
  var start = NSDate ()
  var array = NSMutableArray ()
  for i in 0..<COUNT {
    array.addObject (NSNumber.numberWithBool (true))
  }
  var duration : Int = Int (NSDate ().timeIntervalSinceDate (start) * 1000.0)
  print ("\(duration) ms, \(array.count) elements, enumeration... ")
  var sum = 0
  start = NSDate ()
  for b in array {
    sum += Int (b.boolValue)
  }
  duration = Int (NSDate ().timeIntervalSinceDate (start) * 1000.0)
  println ("\(duration) ms")
}

//---------------------------------------------------------------------------------------------------------------------*

allocBoolInNativeArray ()
alloNSNumberInNativeArray ()
allocNSNumberInNSMutableArray ()

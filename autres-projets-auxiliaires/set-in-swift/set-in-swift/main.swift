//
//  main.swift
//  set-in-swift
//
//  Created by Pierre Molinaro on 04/08/2014.
//  Copyright (c) 2014 Pierre Molinaro. All rights reserved.
//
//http://stackoverflow.com/questions/24044190/how-to-create-array-of-unique-object-list-in-swift
//---------------------------------------------------------------------------*

import Foundation

//---------------------------------------------------------------------------*

let COUNT = 1_000_000

//---------------------------------------------------------------------------*

var unCompteurSansImportance = 0

//---------------------------------------------------------------------------*

@objc(MonProtocole) protocol MonProtocole : NSObjectProtocol {
  func doSomething ()
}

//---------------------------------------------------------------------------*

@objc(MaClasse) class MaClasse : NSObject, MonProtocole {
  func doSomething () {
    unCompteurSansImportance += 1
  }
}


//---------------------------------------------------------------------------*

func allocInNativeArray () {
  print ("Append in native Swift array... ")
  var start = NSDate ()
  var array : [MaClasse] = []
  for i in 0..<COUNT {
    array.append (MaClasse ())
  }
  var duration : Int = Int (NSDate ().timeIntervalSinceDate (start) * 1000.0)
  print ("\(duration) ms, \(array.count) elements, enumeration... ")
  start = NSDate ()
  for object in array {
    object.doSomething ()
  }
  duration = Int (NSDate ().timeIntervalSinceDate (start) * 1000.0)
  println ("\(duration) ms")
}

//---------------------------------------------------------------------------*
// https://github.com/evilpenguin/Swift-Stuff/blob/master/Set.swift
// https://gist.github.com/JaviSoto/1243db46afe5132034e2

struct PMArray <T : AnyObject> {
  var mArray = NSMutableArray ()

  init () {
  }
  
  mutating func add (item : T) {
    mArray.addObject (item)
  }

  var count : Int {
    return mArray.count
  }

  subscript (index: Int) -> T {
    get {
      return mArray.objectAtIndex (index) as T
    }
    set (newValue) {
      mArray.replaceObjectAtIndex (index, withObject:newValue)
    }
  }
}

//---------------------------------------------------------------------------*

func allocInNSArray () {
  print ("Append in NSArray... ")
  var start = NSDate ()
  var array : PMArray<MonProtocole> = PMArray<MonProtocole> ()
  for i in 0..<COUNT {
    array.add (MaClasse ())
  }
  var duration : Int = Int (NSDate ().timeIntervalSinceDate (start) * 1000.0)
  print ("\(duration) ms, \(array.count) elements, enumeration... ")
  start = NSDate ()
  for i in 0..<array.count {
    let object : MonProtocole = array [i]
    object.doSomething ()
  }
  duration = Int (NSDate ().timeIntervalSinceDate (start) * 1000.0)
  println ("\(duration) ms")
}

//---------------------------------------------------------------------------*

struct PMSequentialSet <T : AnyObject> {
  var items : [T] = []

  mutating func add1 (item : T) {
    if !contains (items, {$0 === item}) {
      items.append (item)
    }
  }
  
  mutating func add2 (item : T) {
    for object : T in items {
      if item === object {
        break
      }
    }
    items.append (item)
  }
  
  var count : Int {
    return items.count
  }

  func allObjects () -> [T] {
    return items ;
  }
}

//---------------------------------------------------------------------------*

func allocInSequentialSet1 () {
  print ("Append in sequential set (by add1)... ")
  var start = NSDate ()
  var array : PMSequentialSet<MonProtocole> = PMSequentialSet<MonProtocole> ()
  for i in 0..<COUNT {
    array.add1 (MaClasse ())
  }
  var duration : Int = Int (NSDate ().timeIntervalSinceDate (start) * 1000.0)
  print ("\(duration) ms, \(array.count) elements, enumeration... ")
  start = NSDate ()
  for object in array.allObjects () {
    object.doSomething ()
  }
  duration = Int (NSDate ().timeIntervalSinceDate (start) * 1000.0)
  println ("\(duration) ms")
}

//---------------------------------------------------------------------------*

func allocInSequentialSet2 () {
  print ("Append in sequential set (by add2)... ")
  var start = NSDate ()
  var array : PMSequentialSet<MaClasse> = PMSequentialSet ()
  for i in 0..<COUNT {
    array.add2 (MaClasse ())
  }
  var duration : Int = Int (NSDate ().timeIntervalSinceDate (start) * 1000.0)
  print ("\(duration) ms, \(array.count) elements, enumeration... ")
  start = NSDate ()
  for object in array.allObjects () {
    object.doSomething ()
  }
  duration = Int (NSDate ().timeIntervalSinceDate (start) * 1000.0)
  println ("\(duration) ms")
}

//---------------------------------------------------------------------------*
// https://github.com/evilpenguin/Swift-Stuff/blob/master/Set.swift
// https://gist.github.com/JaviSoto/1243db46afe5132034e2
// http://natashatherobot.com/swift-conform-to-sequence-protocol/

struct PMSetWithNSMutableSet <T : AnyObject> : Sequence {
  var mSet = NSMutableSet ()

  mutating func add (item : T) {
    mSet.addObject (item)
  }

  mutating func remove (item : T) {
    mSet.removeObject (item)
  }

  var count : Int {
    return mSet.count 
  }
  
  var allObjects : NSSet {
    return mSet.copy () as NSSet
  }
  
  func generate () -> PMSetWithNSMutableSetGenerator<T> {
    return PMSetWithNSMutableSetGenerator<T> (valueSet:mSet)
  }
}

//---------------------------------------------------------------------------*

/*struct PMSetWithNSMutableSetGenerator <T : AnyObject> : Generator {
  let valueArray : NSArray
  var index = 0
  
  init (valueSet : NSSet) {
    valueArray = valueSet.allObjects ()
  }
  
  mutating func next () -> AnyObject? {
    var result : AnyObject? = nil
    if index < valueArray.count () {
      result = valueArray.objectAtIndex (index)
      index += 1
    }
    return result
  }
}*/

//---------------------------------------------------------------------------*

struct PMSetWithNSMutableSetGenerator <T : AnyObject> : Generator {
  let mSet : NSSet
  var mEnumerator : NSEnumerator
  
  init (valueSet : NSSet) {
    mSet = valueSet.copy () as NSSet
    mEnumerator = mSet.objectEnumerator ()
  }
  
  mutating func next () -> T? {
    return mEnumerator.nextObject () as? T
  }
}

//---------------------------------------------------------------------------*

func allocInNSMutableSet () {
  print ("Append in NSMutableSet... ")
  var start = NSDate ()
  var array : PMSetWithNSMutableSet<MonProtocole> = PMSetWithNSMutableSet ()
  for i in 0..<COUNT {
    array.add (MaClasse ())
  }
  var duration : Int = Int (NSDate ().timeIntervalSinceDate (start) * 1000.0)
  print ("\(duration) ms, \(array.count) elements, enumeration... ")
  start = NSDate ()
  for object : MonProtocole in array {
    object.doSomething ()
  }
  duration = Int (NSDate ().timeIntervalSinceDate (start) * 1000.0)
  println ("\(duration) ms")
}

//---------------------------------------------------------------------------*
//   M A I N                                                                 *
//---------------------------------------------------------------------------*

allocInNativeArray ()
allocInNSArray ()
allocInNSMutableSet ()
//allocInSequentialSet1 ()
//allocInSequentialSet2 ()
println ("END")

//---------------------------------------------------------------------------*

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
  var start = Date ()
  var array : [Bool] = []
  for _ in 0..<COUNT {
    array.append (true)
  }
  var duration : Int = Int (Date ().timeIntervalSince (start) * 1000.0)
  print ("\(duration) ms, \(array.count) elements, enumeration... ")
  var sum = 0
  start = Date ()
  for b in array {
    sum += Int (b)
  }
  duration = Int (Date ().timeIntervalSince (start) * 1000.0)
  print ("\(duration) ms")
}

//---------------------------------------------------------------------------------------------------------------------*

func alloNSNumberInNativeArray () {
  print ("Append NSNumber in native Swift array... ")
  var start = Date ()
  var array : [NSNumber] = []
  for _ in 0..<COUNT {
    array.append (NSNumber (value:true))
  }
  var duration : Int = Int (Date ().timeIntervalSince (start) * 1000.0)
  print ("\(duration) ms, \(array.count) elements, enumeration... ")
  var sum = 0
  start = Date ()
  for b in array {
    sum += Int (b.boolValue)
  }
  duration = Int (Date ().timeIntervalSince (start) * 1000.0)
  print ("\(duration) ms")
}

//---------------------------------------------------------------------------------------------------------------------*

func allocNSNumberInNSMutableArray () {
  print ("Append NSNumber in NSMutableArray... ")
  var start = Date ()
  let array = NSMutableArray ()
  for _ in 0..<COUNT {
    array.add (NSNumber (value:true))
  }
  var duration : Int = Int (Date ().timeIntervalSince (start) * 1000.0)
  print ("\(duration) ms, \(array.count) elements, enumeration... ")
  var sum = 0
  start = Date ()
  for b in array {
    sum += Int (b.boolValue)
  }
  duration = Int (Date ().timeIntervalSince (start) * 1000.0)
  print ("\(duration) ms")
}

//---------------------------------------------------------------------------------------------------------------------*

var unCompteurSansImportance = 0

//---------------------------------------------------------------------------------------------------------------------*

@objc(MonProtocole) protocol MonProtocole : NSObjectProtocol {
  func doSomething ()
}

//---------------------------------------------------------------------------------------------------------------------*

@objc(MaObjcClasse) class MaObjcClasse : NSObject, MonProtocole {
  func doSomething () {
    unCompteurSansImportance += 1
  }
}

//---------------------------------------------------------------------------------------------------------------------*

func allocObjcClassInNativeArray () {
  print ("Append Objc class in native Swift array... ")
  var start = Date ()
  var array : [MonProtocole] = [] // Ok en beta 6
  for _ in 0..<COUNT {
    array.append (MaObjcClasse ())
  }
  var duration : Int = Int (Date ().timeIntervalSince (start) * 1000.0)
  print ("\(duration) ms, \(array.count) elements, enumeration... ")
  start = Date ()
  for object in array {
    object.doSomething ()
  }
  duration = Int (Date ().timeIntervalSince (start) * 1000.0)
  print ("\(duration) ms")
}

//---------------------------------------------------------------------------------------------------------------------*
// https://github.com/evilpenguin/Swift-Stuff/blob/master/Set.swift
// https://gist.github.com/JaviSoto/1243db46afe5132034e2

struct PMArray <T : AnyObject> {
  var mArray = NSMutableArray ()

  init () {
  }
  
  mutating func add (_ item : T) {
    mArray.add (item)
  }

  var count : Int {
    return mArray.count
  }

  subscript (index: Int) -> T {
    get {
      return mArray.object (at: index) as! T
    }
    set (newValue) {
      mArray.replaceObject (at: index, with:newValue)
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

func allocInNSArray () {
  print ("Append Objc class in NSArray... ")
  var start = Date ()
  var array : PMArray<MaObjcClasse> = PMArray<MaObjcClasse> ()
  for _ in 0..<COUNT {
    array.add (MaObjcClasse ())
  }
  var duration : Int = Int (Date ().timeIntervalSince (start) * 1000.0)
  print ("\(duration) ms, \(array.count) elements, enumeration... ")
  start = Date ()
  for i in 0..<array.count {
    let object : MaObjcClasse = array [i]
    object.doSomething ()
  }
  duration = Int (Date ().timeIntervalSince (start) * 1000.0)
  print ("\(duration) ms")
}

//---------------------------------------------------------------------------------------------------------------------*

struct PMSequentialSet <T : AnyObject> {
  var items : [T] = []

  mutating func add1 (_ item : T) {
    if !items.contains ({$0 === item}) {
      items.append (item)
    }
  }
  
  mutating func add2 (_ item : T) {
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

//---------------------------------------------------------------------------------------------------------------------*

func allocInSequentialSet1 () {
  print ("Append in sequential set (by add1)... ")
  var start = Date ()
  var array : PMSequentialSet<MaObjcClasse> = PMSequentialSet<MaObjcClasse> ()
  for _ in 0..<COUNT {
    array.add1 (MaObjcClasse ())
  }
  var duration : Int = Int (Date ().timeIntervalSince (start) * 1000.0)
  print ("\(duration) ms, \(array.count) elements, enumeration... ")
  start = Date ()
  for object in array.allObjects () {
    object.doSomething ()
  }
  duration = Int (Date ().timeIntervalSince (start) * 1000.0)
  print ("\(duration) ms")
}

//---------------------------------------------------------------------------------------------------------------------*

func allocInSequentialSet2 () {
  print ("Append in sequential set (by add2)... ")
  var start = Date ()
  var array : PMSequentialSet<MaObjcClasse> = PMSequentialSet ()
  for _ in 0..<COUNT {
    array.add2 (MaObjcClasse ())
  }
  var duration : Int = Int (Date ().timeIntervalSince (start) * 1000.0)
  print ("\(duration) ms, \(array.count) elements, enumeration... ")
  start = Date ()
  for object in array.allObjects () {
    object.doSomething ()
  }
  duration = Int (Date ().timeIntervalSince (start) * 1000.0)
  print ("\(duration) ms")
}

//---------------------------------------------------------------------------------------------------------------------*
// https://github.com/evilpenguin/Swift-Stuff/blob/master/Set.swift
// https://gist.github.com/JaviSoto/1243db46afe5132034e2
// http://natashatherobot.com/swift-conform-to-sequence-protocol/

struct PMSetWithNSMutableSet <T : AnyObject> : Sequence {
  var mSet = NSMutableSet ()

  mutating func add (_ item : T) {
    mSet.add (item)
  }

  mutating func remove (_ item : T) {
    mSet.remove (item)
  }

  var count : Int {
    return mSet.count 
  }
  
  var allObjects : NSSet {
    return mSet.copy () as! NSSet
  }
  
  func makeIterator () -> PMSetWithNSMutableSetGenerator<T> {
    return PMSetWithNSMutableSetGenerator<T> (valueSet:mSet)
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

struct PMSetWithNSMutableSetGenerator <T : AnyObject> : IteratorProtocol {
  let mSet : NSSet
  var mEnumerator : NSEnumerator
  
  init (valueSet : NSSet) {
    mSet = valueSet.copy () as! NSSet
    mEnumerator = mSet.objectEnumerator ()
  }
  
  mutating func next () -> T? {
    return mEnumerator.nextObject () as? T
  }
}

//---------------------------------------------------------------------------------------------------------------------*

func allocInNSMutableSet () {
  print ("Append Objc class in NSMutableSet... ")
  var start = Date ()
  var array : PMSetWithNSMutableSet<MaObjcClasse> = PMSetWithNSMutableSet ()
  for _ in 0..<COUNT {
    array.add (MaObjcClasse ())
  }
  var duration : Int = Int (Date ().timeIntervalSince (start) * 1000.0)
  print ("\(duration) ms, \(array.count) elements, enumeration... ")
  start = Date ()
  for object : MaObjcClasse in array {
    object.doSomething ()
  }
  duration = Int (Date ().timeIntervalSince (start) * 1000.0)
  print ("\(duration) ms")
}

//---------------------------------------------------------------------------------------------------------------------*
//   allocSwiftClassInNativeArray                                                                                      *
//---------------------------------------------------------------------------------------------------------------------*

protocol MonProtocoleSwift {
  func doSomething ()
}

//---------------------------------------------------------------------------------------------------------------------*

class MaClasseSwift : MonProtocoleSwift {
  func doSomething () {
    unCompteurSansImportance += 1
  }
}

//---------------------------------------------------------------------------------------------------------------------*

func allocSwiftClassInNativeArray () {
  print ("Append Swift class in native Swift array... ")
  var start = Date ()
  var array : [MonProtocoleSwift] = []
  for _ in 0..<COUNT {
    array.append (MaClasseSwift ())
  }
  var duration : Int = Int (Date ().timeIntervalSince (start) * 1000.0)
  print ("\(duration) ms, \(array.count) elements, enumeration... ")
  start = Date ()
  for object in array {
    object.doSomething ()
  }
  duration = Int (Date ().timeIntervalSince (start) * 1000.0)
  print ("\(duration) ms")
}

//---------------------------------------------------------------------------------------------------------------------*
//   allocSwiftClassInNativeArray                                                                                      *
//---------------------------------------------------------------------------------------------------------------------*

private var gAllocationCounter = 0

//---------------------------------------------------------------------------------------------------------------------*

class MaClasseSwiftPourDictionnaire : MonProtocoleSwift {
  private var mAllocationIndex : Int
  
  func allocationIndex () -> Int { return mAllocationIndex }
  
  init () {
    mAllocationIndex = gAllocationCounter
    gAllocationCounter += 1
  }

  func doSomething () {
    unCompteurSansImportance += 1
  }
}

//---------------------------------------------------------------------------------------------------------------------*

func allocSwiftClassInNativeDictionary () {
  print ("Append Swift class in native Swift dictionary... ")
  var start = Date ()
  var dictionary : [Int : MaClasseSwiftPourDictionnaire] = [:]
  for _ in 0..<COUNT {
    let object = MaClasseSwiftPourDictionnaire ()
    dictionary [object.allocationIndex ()] = object
  }
  var duration : Int = Int (Date ().timeIntervalSince (start) * 1000.0)
  print ("\(duration) ms, \(dictionary.count) elements, enumeration... ")
  start = Date ()
  for object in dictionary.values {
    object.doSomething ()
  }
  duration = Int (Date ().timeIntervalSince (start) * 1000.0)
  print ("\(duration) ms")
}

//---------------------------------------------------------------------------------------------------------------------*

allocBoolInNativeArray ()
alloNSNumberInNativeArray ()
allocNSNumberInNSMutableArray ()
allocObjcClassInNativeArray ()
allocSwiftClassInNativeArray ()
allocInNSArray ()
allocInNSMutableSet ()
allocSwiftClassInNativeDictionary ()
print ("END")

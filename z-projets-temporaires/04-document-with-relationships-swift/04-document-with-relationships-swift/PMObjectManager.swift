//
//  PMObjectManager.swift
//  essai
//
//  Created by Pierre Molinaro on 28/06/13.
//  Copyright (c) 2013 ECN / IRCCyN. All rights reserved.
//
//-----------------------------------------------------------------------------*

import Cocoa

//-----------------------------------------------------------------------------*

@objc(PMObjectManager) class PMObjectManager : NSObject {
  var mUndoManager : PMUndoManager
  var mManagedObjectSet = NSMutableSet ()

  //-----------------------------------------------------------------------------*
  //  init                                                                       *
  //-----------------------------------------------------------------------------*

   override init () {
    mUndoManager = PMUndoManager ()
    super.init ()
    noteObjectAllocation (self)
  }

  //-----------------------------------------------------------------------------*
  //  deinit                                                                     *
  //-----------------------------------------------------------------------------*

  deinit {
    noteObjectDeallocation (self)
  }

  //-----------------------------------------------------------------------------*
  //  undoManager                                                                *
  //-----------------------------------------------------------------------------*

  var undoManager : PMUndoManager {
    return mUndoManager
  }

  //-----------------------------------------------------------------------------*
  //  managedObjectCount                                                         *
  //-----------------------------------------------------------------------------*

  func managedObjectCount () -> Int {
    return mManagedObjectSet.count
  }

  //-----------------------------------------------------------------------------*
  //  addEntity                                                                  *
  //-----------------------------------------------------------------------------*

  func addEntity (inEntity : PMManagedObject) {
    mManagedObjectSet.addObject (inEntity)
    mUndoManager.registerUndoWithTarget (self,
      selector:"deleteEntity:",
      object:inEntity
    )
  }

  //-----------------------------------------------------------------------------*
  //  deleteEntity                                                               *
  //-----------------------------------------------------------------------------*

  func deleteEntity (inEntity : PMManagedObject) {
    mManagedObjectSet.removeObject (inEntity)
    mUndoManager.registerUndoWithTarget (self,
      selector:"addEntity:",
      object:inEntity
    )
  }

  //-----------------------------------------------------------------------------*
  //  deleteEntities                                                             *
  //-----------------------------------------------------------------------------*

  func deleteEntities (inObjectArray : [PMManagedObject]) {
    for object in inObjectArray {
      deleteEntity (object)
    }
  }

  //-----------------------------------------------------------------------------*
  //  allEntitiesKindOfClass                                                     *
  //-----------------------------------------------------------------------------*

  func allEntitiesKindOfClass (inClassName : String) -> NSArray {
    var result : NSMutableArray = NSMutableArray ()
    for object : AnyObject in mManagedObjectSet {
      let managedObject = object as PMManagedObject
      if managedObject.className == inClassName {
        result.addObject (managedObject)
      }
    }
    return result ;
  }

  //---------------------------------------------------------------------------*
  //  S A V I N G    A N D    R E A D I N G                                    *
  //---------------------------------------------------------------------------*

  func dataForSavingFromRootObject (inRootObject : PMManagedObject) -> NSData {
    let objectsToSaveArray : NSArray = reachableObjectsFromObject (inRootObject)
    NSLog ("%d object to save", objectsToSaveArray.count)
  //--- Set savingIndex for each object
    var idx = 0 ;
    for anyObject in objectsToSaveArray {
      let object = anyObject as PMManagedObject
      object.savingIndex = idx
      idx += 1
    }
  //---
    var saveDataArray = NSMutableArray ()
    for anyObject in objectsToSaveArray {
      let object = anyObject as PMManagedObject
      var d : NSMutableDictionary = [
        "--entity" : object.className
      ]
      object.saveIntoDictionary (d)
      saveDataArray.addObject (d)
    }
    return NSPropertyListSerialization.dataWithPropertyList (saveDataArray,
      format:NSPropertyListFormat.BinaryFormat_v1_0,
      options:0,
      error:nil
    )
  }

  //-----------------------------------------------------------------------------*

  func readFromData (inData : NSData,
                     rootEntityClassName : String) -> PMManagedObject {
    let v : AnyObject = NSPropertyListSerialization.propertyListWithData (inData,
      options:0, // NSPropertyListReadOptions.Immutable,
      format:nil,
      error:nil
    )
    let dictionaryArray : NSArray = v as NSArray
    var objectArray = NSMutableArray  ()
    for d in dictionaryArray {
      let className = d.objectForKey ("--entity") as String
      let object = newInstanceOfEntityNamed (className)
      objectArray.addObject (object!)
    }
    var idx = 0
    for anyObject : AnyObject in dictionaryArray {
      let d = anyObject as NSDictionary
      var object : PMManagedObject = objectArray [idx] as PMManagedObject
      object.setUpWithDictionary (d, managedObjectArray:objectArray)
      idx += 1
    }
  //--- Return root object
    return objectArray [0] as PMManagedObject
  }

  //---------------------------------------------------------------------------*
  //  R E A C H A B L E   O B J E C T S    F R O M    O B J E C T              *
  //---------------------------------------------------------------------------*

  func reachableObjectsFromObject (inRootObject : PMManagedObject) -> NSArray {
    var reachables : [Bool] = []
    var idx = 0
    for object : AnyObject in mManagedObjectSet {
      let managedObject = object as PMManagedObject
      managedObject.savingIndex = idx
      reachables.append (false)
      idx += 1
    }
    var objectsToExploreArray = NSMutableArray ()
    objectsToExploreArray.addObject (inRootObject)
    var reachableObjectArray = NSMutableArray ()
    reachableObjectArray.addObject (inRootObject)
 // let start = NSDate()
 //   NSLog ("start")
    reachables [inRootObject.savingIndex] = true
    while (objectsToExploreArray.count > 0) {
      let objectToExplore : PMManagedObject = objectsToExploreArray.lastObject as PMManagedObject
      objectsToExploreArray.removeLastObject ()
      var accessible = NSMutableArray ()
      objectToExplore.accessibleObjects (&accessible)
      for object : AnyObject in accessible {
        let managedObject = object as PMManagedObject
        if !reachables [managedObject.savingIndex] {
          reachables [managedObject.savingIndex] = true
          reachableObjectArray.addObject (managedObject)
          objectsToExploreArray.addObject (managedObject)
        }
      }
    }
// let timeTaken = NSDate().timeIntervalSinceDate(start) * 1000
// NSLog ("%f ms", timeTaken)
    return reachableObjectArray ;
  }

  //---------------------------------------------------------------------------*
  //  R E A C H A B L E   O B J E C T S    F R O M    O B J E C T              *
  //---------------------------------------------------------------------------*

  func unreachableObjectsFromObject (inRootObject : PMManagedObject) -> NSSet {
    let reachableObjects = reachableObjectsFromObject (inRootObject)
    var s = NSMutableSet ()
    s.setSet (mManagedObjectSet)
    s.minusSet (NSSet (array:reachableObjects))
    return s
  }

}

//-----------------------------------------------------------------------------*


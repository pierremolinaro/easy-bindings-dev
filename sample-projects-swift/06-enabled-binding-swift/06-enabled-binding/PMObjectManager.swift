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

  init () {
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
  //  entityCount                                                                *
  //-----------------------------------------------------------------------------*

  func entityCount () -> Int {
    return mManagedObjectSet.count () ;
  }

  //-----------------------------------------------------------------------------*
  //  addEntity                                                                  *
  //-----------------------------------------------------------------------------*

  func addEntity (inEntity : PMManagedObject) {
 //   willChangeValueForKey ("entityCount")
    mManagedObjectSet.addObject (inEntity)
//    didChangeValueForKey ("entityCount")
    mUndoManager.registerUndoWithTarget (self,
      selector:"private_removeEntity:",
      object:inEntity
    )
  }

  //-----------------------------------------------------------------------------*

  func private_removeEntity (inEntity : PMManagedObject) {
    willChangeValueForKey ("entityCount")
    mManagedObjectSet.removeObject (inEntity)
    didChangeValueForKey ("entityCount")
    mUndoManager.registerUndoWithTarget (self,
      selector:"addEntity:",
      object:inEntity
    )
  }

  //-----------------------------------------------------------------------------*
  //  deleteEntity                                                               *
  //-----------------------------------------------------------------------------*

  func deleteEntity (inObject : PMManagedObject) {
    private_removeEntity (inObject)
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

  func allEntitiesKindOfClass (inClassName : String) -> [PMManagedObject] {
    var result : [PMManagedObject] = []
    for object : AnyObject in mManagedObjectSet {
      let managedObject = object as PMManagedObject
      if managedObject.className () == inClassName {
        result += managedObject
      }
    }
    return result ;
  }

  //---------------------------------------------------------------------------*
  //  S A V I N G    A N D    R E A D I N G                                    *
  //---------------------------------------------------------------------------*

  func dataForSavingFromRootObject (inRootObject : PMManagedObject) -> NSData {
    let objectsToSaveArray = reachableObjectsFromObject (inRootObject)
  //--- Set savingIndex for each object
    var idx = 0 ;
    for object in objectsToSaveArray {
      object.savingIndex = idx
      idx = idx + 1
    }
  //---
    var saveDataArray : [NSDictionary] = []
    for object in objectsToSaveArray {
      var d : NSMutableDictionary = [
        "--entity" : object.className ()
      ]
      object.saveIntoDictionary (d)
      saveDataArray += d
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
    let dictionaryArray : [NSDictionary] = v as [NSDictionary]
    var objectArray : [PMManagedObject] = []
    for d in dictionaryArray {
      let className = d.objectForKey ("--entity") as String
      let object = newInstanceOfEntityNamed (className)
      objectArray += object!
    }
    var idx = 0
    for d in dictionaryArray {
      var object : PMManagedObject = objectArray [idx]
      object.setUpWithDictionary (d, managedObjectArray:objectArray)
      idx += 1
    }
  //--- Return root object
    return objectArray [0]
  }

  //---------------------------------------------------------------------------*
  //  R E A C H A B L E   O B J E C T S    F R O M    O B J E C T              *
  //---------------------------------------------------------------------------*

  func reachableObjectsFromObject (inRootObject : PMManagedObject) -> [PMManagedObject] {
    var reachables : [Bool] = []
    var idx = 0
    for object : AnyObject in mManagedObjectSet {
      let managedObject = object as PMManagedObject
      managedObject.savingIndex = idx
      reachables += false
      idx += 1
    }
    var objectsToExploreArray : [PMManagedObject] = [inRootObject]
    var reachableObjectArray : [PMManagedObject] = [inRootObject]
 //let start = NSDate()
 //   NSLog ("start")
    reachables [inRootObject.savingIndex] = true
    while (objectsToExploreArray.count > 0) {
      let objectToExplore : PMManagedObject = objectsToExploreArray [objectsToExploreArray.count - 1]
      objectsToExploreArray.removeAtIndex (objectsToExploreArray.count - 1)
     var accessible : [PMManagedObject] = []
     objectToExplore.accessibleObjects (&accessible)
      for managedObject : PMManagedObject in accessible {
        if !reachables [managedObject.savingIndex] {
          reachables [managedObject.savingIndex] = true
          reachableObjectArray += managedObject
          objectsToExploreArray += managedObject
        }
      }
    }
// let end = NSDate()
// let timeTaken = end.timeIntervalSinceDate(start) * 1000
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


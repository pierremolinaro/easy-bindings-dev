//
//  PMEntityManager.swift
//  essai
//
//  Created by Pierre Molinaro on 28/06/13.
//  Copyright (c) 2013 ECN / IRCCyN. All rights reserved.
//
//-----------------------------------------------------------------------------*

import Cocoa

//-----------------------------------------------------------------------------*

@objc(PMEntityManager) class PMEntityManager : NSObject {
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

  func addEntity (inEntity : PMManagedEntity) {
 //   willChangeValueForKey ("entityCount")
    mManagedObjectSet.addObject (inEntity)
//    didChangeValueForKey ("entityCount")
    mUndoManager.registerUndoWithTarget (self,
      selector:"private_removeEntity:",
      object:inEntity
    )
  }

  //-----------------------------------------------------------------------------*

  func private_removeEntity (inEntity : PMManagedEntity) {
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

  func deleteEntity (inObject : PMManagedEntity) {
    private_removeEntity (inObject)
  }

  //-----------------------------------------------------------------------------*
  //  deleteEntities                                                             *
  //-----------------------------------------------------------------------------*

  func deleteEntities (inObjectArray : PMManagedEntity []) {
    for object in inObjectArray {
      deleteEntity (object)
    }
  }

  //-----------------------------------------------------------------------------*
  //  allEntitiesKindOfClass                                                     *
  //-----------------------------------------------------------------------------*

  func allEntitiesKindOfClass (inClassName : String) -> PMManagedEntity [] {
    var result : PMManagedEntity [] = []
    for object : AnyObject in mManagedObjectSet {
      let managedObject = object as PMManagedEntity
      if managedObject.className () == inClassName {
        result += managedObject
      }
    }
    return result ;
  }

  //---------------------------------------------------------------------------*
  //  S A V I N G    A N D    R E A D I N G                                    *
  //---------------------------------------------------------------------------*

  func dataForSavingFromRootObject (inRootObject : PMManagedEntity) -> NSData {
    let objectsToSaveArray = reachableObjectsFromObject (inRootObject)
  //--- Set savingIndex for each object
    var idx = 0 ;
    for object in objectsToSaveArray {
      object.savingIndex = idx
      idx = idx + 1
    }
  //---
    var saveDataArray : NSDictionary [] = []
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
                     rootEntityClassName : String) -> PMManagedEntity {
    let v : AnyObject = NSPropertyListSerialization.propertyListWithData (inData,
      options:0, // NSPropertyListReadOptions.Immutable,
      format:nil,
      error:nil
    )
    let dictionaryArray : NSDictionary [] = v as NSDictionary []
    var objectArray : PMManagedEntity [] = []
    for d in dictionaryArray {
      let className = d.objectForKey ("--entity") as String
      let object = newInstanceOfEntityNamed (className)
      objectArray += object!
    }
    var idx = 0
    for d in dictionaryArray {
      var object : PMManagedEntity = objectArray [idx]
      object.setUpWithDictionary (d, managedObjectArray:objectArray)
      idx += 1
    }
  //--- Return root object
    return objectArray [0]
  }

  //---------------------------------------------------------------------------*
  //  R E A C H A B L E   O B J E C T S    F R O M    O B J E C T              *
  //---------------------------------------------------------------------------*

  func reachableObjectsFromObject (inRootObject : PMManagedEntity) -> PMManagedEntity [] {
    var reachables : Bool [] = []
    var idx = 0
    for object : AnyObject in mManagedObjectSet {
      let managedObject = object as PMManagedEntity
      managedObject.savingIndex = idx
      reachables += false
      idx += 1
    }
    var objectsToExploreArray : PMManagedEntity [] = [inRootObject]
    var reachableObjectArray : PMManagedEntity [] = [inRootObject]
    reachables [inRootObject.savingIndex] = true
    while (objectsToExploreArray.count > 0) {
      let objectToExplore = objectsToExploreArray [objectsToExploreArray.count - 1]
      objectsToExploreArray.removeAtIndex (objectsToExploreArray.count - 1)
 //   let start = NSDate()
      let accessible : PMManagedEntity [] = objectToExplore.accessibleObjects ()
      for managedObject : PMManagedEntity in accessible {
        if !reachables [managedObject.savingIndex] {
          reachables [managedObject.savingIndex] = true
          reachableObjectArray += managedObject
          objectsToExploreArray += managedObject
        }
      }
//    let end = NSDate()
//    let timeTaken = end.timeIntervalSinceDate(start) * 1000
//    NSLog ("%f ms", timeTaken)
    }
    return reachableObjectArray ;
  }

  //---------------------------------------------------------------------------*
  //  R E A C H A B L E   O B J E C T S    F R O M    O B J E C T              *
  //---------------------------------------------------------------------------*

  func unreachableObjectsFromObject (inRootObject : PMManagedEntity) -> NSSet {
    let reachableObjects = reachableObjectsFromObject (inRootObject)
    var s = NSMutableSet ()
    s.setSet (mManagedObjectSet)
    s.minusSet (NSSet (array:reachableObjects))
    return s
  }

}

//-----------------------------------------------------------------------------*


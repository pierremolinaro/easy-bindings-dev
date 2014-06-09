//
//  PMEntityManager.m
//  essai
//
//  Created by Pierre Molinaro on 28/06/13.
//  Copyright (c) 2013 ECN / IRCCyN. All rights reserved.
//
//-----------------------------------------------------------------------------*

import Cocoa

//-----------------------------------------------------------------------------*

enum PMEntityFactory {
  case kMyRootEntity
  
  func create (inEntityManager : PMEntityManager) -> PMManagedEntity {
    switch self {
      case kMyRootEntity : return MyRootEntity (entityManager:inEntityManager)
    }
  }
}

//-----------------------------------------------------------------------------*

func factoryWithClassName (entityName : String) -> PMEntityFactory? {
  var result : PMEntityFactory?
  if entityName == "MyRootEntity" {
    result = PMEntityFactory.kMyRootEntity
  }
  return result
}

//-----------------------------------------------------------------------------*

class PMEntityManager : NSObject {
  var mUndoManager : NSUndoManager
  var mManagedObjectSet = NSMutableSet ()

  init (inUndoManager : NSUndoManager) {
    super.init ()
    noteObjectAllocation (self)
    mUndoManager = inUndoManager
  }

  deinit {
    noteObjectDeallocation (self)
  }

  var undoManager : NSUndoManager {
    return mUndoManager
  }

  func entityCount () -> Int {
    return mManagedObjectSet.count () ;
  }

  func addEntity (inEntity : PMManagedEntity) {
    self.willChangeValueForKey ("entityCount")
    mManagedObjectSet.addObject (inEntity)
    self.didChangeValueForKey ("entityCount")
    mUndoManager.registerUndoWithTarget (self,
      selector:"private_removeEntity:",
      object:inEntity
    )
  }

  func private_removeEntity (inEntity : PMManagedEntity) {
    self.willChangeValueForKey ("entityCount")
    mManagedObjectSet.removeObject (inEntity)
    self.didChangeValueForKey ("entityCount")
    mUndoManager.registerUndoWithTarget (self,
      selector:"addEntity:",
      object:inEntity
    )
  }

  func newInstanceOfEntity (inEntityType : PMEntityFactory) -> PMManagedEntity {
    let result : PMManagedEntity = inEntityType.create (self)
    addEntity (result)
    return result
  }

  func deleteEntity (inObject : PMManagedEntity) {
    inObject.resetBeforeDeletion ()
    private_removeEntity (inObject)
  }

  func deleteEntities (inObjectArray : PMManagedEntity []) {
    for object in inObjectArray {
      deleteEntity (object)
    }
  }

  func resetBeforeDeletion () {
    for object : AnyObject in mManagedObjectSet {
      object.resetBeforeDeletion ()
    }
/*    willChangeValueForKey ("entityCount")
  macroReleaseSetToNil (mManagedObjectSet) ;
  [self didChangeValueForKey:@"entityCount"] ;
  macroReleaseSetToNil (mUndoManager) ;*/
}

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
                     rootEntityClass : AnyClass) -> PMManagedEntity {
    let v : AnyObject = NSPropertyListSerialization.propertyListWithData (inData,
      options:0, // NSPropertyListReadOptions.Immutable,
      format:nil,
      error:nil
    )
    let dictionaryArray : NSDictionary [] = v as NSDictionary []
    var objectArray : PMManagedEntity [] = []
    for d in dictionaryArray {
      let className = d.objectForKey ("--entity") as String
      let factory = factoryWithClassName (className)
      var object : PMManagedEntity? = factory?.create (self)
      objectArray += object!
    }
    var idx = 0
    for d in dictionaryArray {
      var object : PMManagedEntity = objectArray [idx]
      object.setUpWithDictionary (d, managedObjectArray:objectArray)
      idx = idx + 1
    }
  //--- Return root object
    return objectArray [0]
  }

  //---------------------------------------------------------------------------*
  //  R E A C H A B L E   O B J E C T S    F R O M    O B J E C T              *
  //---------------------------------------------------------------------------*

  func reachableObjectsFromObject (inRootObject : PMManagedEntity) -> PMManagedEntity [] {
    var reachableObjectArray : PMManagedEntity [] = [inRootObject]
    var objectsToExploreArray : PMManagedEntity [] = []
    var handledObjectSet = NSMutableSet ()
    handledObjectSet.addObject (inRootObject)
  //---
    while (objectsToExploreArray.count > 0) {
      let objectToExplore = objectsToExploreArray [0]
      objectsToExploreArray.removeAtIndex (0)
    //--- To one relation ships
      let toOneRelationshipNameArray = objectToExplore.toOneRelationshipDescriptionArray ()
      for description in toOneRelationshipNameArray {
        let value : AnyObject = objectToExplore.valueForKey (description.relationshipName)
        if (nil != value) && !handledObjectSet.containsObject (value) {
          handledObjectSet.addObject (value)
          reachableObjectArray += value as PMManagedEntity
          objectsToExploreArray == value as PMManagedEntity
        }
      }
    //--- To many relation ships
      let toManyRelationshipNameArray = objectToExplore.toManyRelationshipDescriptionArray ()
      for description in toManyRelationshipNameArray {
        let value : AnyObject = objectToExplore.valueForKey (description.relationshipName)
        for managedObject in value as PMManagedEntity [] {
          if !handledObjectSet.containsObject (managedObject) {
            handledObjectSet.addObject (managedObject)
            reachableObjectArray += managedObject
            objectsToExploreArray += managedObject
          }
        }
      }
    }
    return reachableObjectArray ;
  }

  //---------------------------------------------------------------------------*
  //  R E A C H A B L E   O B J E C T S    F R O M    O B J E C T              *
  //---------------------------------------------------------------------------*

  func uneachableObjectsFromObject (inRootObject : PMManagedEntity) -> NSSet {
    let reachableObjects = reachableObjectsFromObject (inRootObject)
    var s = NSMutableSet ()
    s.setSet (mManagedObjectSet)
    s.minusSet (NSSet (array:reachableObjects))
    return s
  }


}

//-----------------------------------------------------------------------------*

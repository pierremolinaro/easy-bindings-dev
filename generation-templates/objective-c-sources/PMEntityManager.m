//
//  PMEntityManager.m
//  essai
//
//  Created by Pierre Molinaro on 28/06/13.
//  Copyright (c) 2013 ECN / IRCCyN. All rights reserved.
//
//-----------------------------------------------------------------------------*

#import "PMAllocationDebug.h"
#import "PMEntityManager.h"
#import "PMManagedEntity.h"
#import "PMRelationshipDescription.h"
#import "easy-bindings-utilities.h"

//-----------------------------------------------------------------------------*

#import <objc/runtime.h>

//-----------------------------------------------------------------------------*

@implementation PMEntityManager

//-----------------------------------------------------------------------------*

- (instancetype) initWithUndoManager: (NSUndoManager *) inUndoManager {
  self = [self init] ;
  if (self) {
    mManagedObjectSet = [NSMutableSet new] ;
    macroAssign (mUndoManager, inUndoManager) ;
    macroNoteObjectAllocation ;
  }
  return self ;
}

//----------------------------------------------------------------------------*
//    Dealloc                                                                 *
//----------------------------------------------------------------------------*

- (void) dealloc {
  macroReleaseSetToNil (mManagedObjectSet) ;
  macroReleaseSetToNil (mUndoManager) ;
  macroNoteObjectDeallocation ;
  macroSuperDealloc ;
}

//-----------------------------------------------------------------------------*

- (NSUndoManager *) undoManager {
  return mUndoManager ;
}

//-----------------------------------------------------------------------------*

- (NSUInteger) entityCount {
  return mManagedObjectSet.count ;
}

//-----------------------------------------------------------------------------*

- (void) addEntity: (PMManagedEntity *) inEntity {
  [self willChangeValueForKey:@"entityCount"] ;
  [mManagedObjectSet addObject:inEntity] ;
  [self didChangeValueForKey:@"entityCount"] ;
  [mUndoManager
    registerUndoWithTarget:self
    selector:@selector (removeEntity:)
    object:inEntity
  ] ;
}

//-----------------------------------------------------------------------------*

- (void) removeEntity: (PMManagedEntity *) inEntity {
  [self willChangeValueForKey:@"entityCount"] ;
  [mManagedObjectSet removeObject:inEntity] ;
  [self didChangeValueForKey:@"entityCount"] ;
  [mUndoManager
    registerUndoWithTarget:self
    selector:@selector (addEntity:)
    object:inEntity
  ] ;
}

//-----------------------------------------------------------------------------*

- (id) newInstanceOfEntity: (Class) inEntityClass {
  PMManagedEntity * result = [inEntityClass alloc] ;
  result = [result initWithEntityManager:self] ;
  [self addEntity:result] ;
  return result ;
}

//-----------------------------------------------------------------------------*

- (void) deleteEntity: (PMManagedEntity *) inObject {
  [inObject resetBeforeDeletion] ;
  [self removeEntity:inObject] ;
}

//-----------------------------------------------------------------------------*

- (void) deleteEntities: (NSArray *) inObjectArray {
  for (PMManagedEntity * object in inObjectArray) {
    [self deleteEntity:object] ;
  }
}

//-----------------------------------------------------------------------------*

- (void) resetBeforeDeletion {
  for (PMManagedEntity * object in mManagedObjectSet) {
    [object resetBeforeDeletion] ;
  }
  [self willChangeValueForKey:@"entityCount"] ;
  macroReleaseSetToNil (mManagedObjectSet) ;
  [self didChangeValueForKey:@"entityCount"] ;
  macroReleaseSetToNil (mUndoManager) ;
}

//-----------------------------------------------------------------------------*

- (NSArray *) allEntitiesKindOfClass: (Class) inClass {
  NSMutableArray * result = [NSMutableArray new] ;
  for (PMManagedEntity * object in mManagedObjectSet) {
    if ([object isKindOfClass:inClass]) {
      [result addObject:object] ;
    }
  }
  macroAutorelease (result) ;
  return result ;
}

//---------------------------------------------------------------------------*
//  R E A C H A B L E   O B J E C T S    F R O M    O B J E C T              *
//---------------------------------------------------------------------------*

- (NSArray *) reachableObjectsFromObject: (PMManagedEntity *) inRootObject {
  NSMutableArray * reachableObjectArray = [NSMutableArray new] ;
  [reachableObjectArray addObject:inRootObject] ;
  NSMutableArray * objectsToExploreArray = [NSMutableArray new] ;
  [objectsToExploreArray addObject:inRootObject] ;
  NSMutableSet * handledObjectSet = [NSMutableSet new] ;
  [handledObjectSet addObject:inRootObject] ;
//---
  while (objectsToExploreArray.count > 0) {
    PMManagedEntity * objectToExplore = [objectsToExploreArray objectAtIndex:0] ;
    [objectsToExploreArray removeObjectAtIndex:0] ;
  //--- To one relation ships
    NSArray * toOneRelationshipNameArray = [objectToExplore toOneRelationshipDescriptionArray] ;
    for (PMRelationshipDescription * description in toOneRelationshipNameArray) {
      id value = [objectToExplore valueForKey:description.relationshipName] ;
      if ((nil != value) && ! [handledObjectSet containsObject:value]) {
        [handledObjectSet addObject:value] ;
        [reachableObjectArray addObject:value] ;
        [objectsToExploreArray addObject:value] ;
      }
    }
  //--- To many relation ships
    NSArray * toManyRelationshipNameArray = [objectToExplore toManyRelationshipDescriptionArray] ;
    for (PMRelationshipDescription * description in toManyRelationshipNameArray) {
      id value = [objectToExplore valueForKey:description.relationshipName] ;
      for (PMManagedEntity * object in value) {
        if (! [handledObjectSet containsObject:object]) {
          [handledObjectSet addObject:object] ;
          [reachableObjectArray addObject:object] ;
          [objectsToExploreArray addObject:object] ;
        }
      }
    }
  }
  macroReleaseSetToNil (handledObjectSet) ;
  macroReleaseSetToNil (objectsToExploreArray) ;
  macroAutorelease
  (reachableObjectArray) ;
  return reachableObjectArray ;
}

//---------------------------------------------------------------------------*
//  R E A C H A B L E   O B J E C T S    F R O M    O B J E C T              *
//---------------------------------------------------------------------------*

- (NSSet *) uneachableObjectsFromObject: (PMManagedEntity *) inRootObject {
  NSArray * reachableObjects = [self reachableObjectsFromObject:inRootObject] ;
  NSMutableSet * s = [NSMutableSet new] ;
  [s setSet:mManagedObjectSet] ;
  [s minusSet:[NSSet setWithArray:reachableObjects]] ;
  macroAutorelease (s) ;
  return s ;
}

//---------------------------------------------------------------------------*
//  S A V I N G    A N D    R E A D I N G                                    *
//---------------------------------------------------------------------------*

- (NSData *) dataForSavingFromRootObject: (PMManagedEntity *) inRootObject {
  NSArray * objectsToSaveArray = [self reachableObjectsFromObject:inRootObject] ;
//--- Set savingIndex for each object
  NSUInteger idx = 0 ;
  for (PMManagedEntity * object in objectsToSaveArray) {
    object.savingIndex = idx ;
    idx ++ ;
  }
//---
  NSMutableArray * saveDataArray = [NSMutableArray new] ;
  for (PMManagedEntity * object in objectsToSaveArray) {
    NSMutableDictionary * d = [NSMutableDictionary new] ; 
    [d setValue:object.className forKey:@"--entity"] ;
    [object saveIntoDictionary:d] ;
    [saveDataArray addObject:d] ;
    macroReleaseSetToNil (d) ;
  }
  macroAutorelease (saveDataArray) ;
  return [NSPropertyListSerialization
    dataFromPropertyList:saveDataArray
    format:NSPropertyListBinaryFormat_v1_0
    errorDescription:nil
  ] ;
}

//-----------------------------------------------------------------------------*

- (id) readFromData: (NSData *) inData
       withRootEntityClass: (Class) inRootEntityClass {
  NSArray * dictionaryArray = [NSPropertyListSerialization
    propertyListFromData:inData
    mutabilityOption:NSPropertyListImmutable 
    format:NULL
    errorDescription:NULL
  ] ;
  NSMutableArray * objectArray = [NSMutableArray new] ;
  for (NSDictionary * d in dictionaryArray) {
    NSString * className = [d objectForKey:@"--entity"] ;
    Class c = objc_getClass ([className cStringUsingEncoding:NSASCIIStringEncoding]) ;
    PMManagedEntity * object = [self newInstanceOfEntity:c] ;
    [objectArray addObject:object] ;
    macroReleaseSetToNil (object) ;
  }
  NSUInteger idx = 0 ;
  for (NSDictionary * d in dictionaryArray) {
    PMManagedEntity * object = [objectArray objectAtIndex:idx] ;
    [object setUpWithDictionary:d withManagedEntityArray:objectArray] ;
    idx ++ ;
  }
  macroAutorelease (objectArray) ;
//--- Return root object
  return [objectArray objectAtIndex:0] ;
}

//-----------------------------------------------------------------------------*

@end

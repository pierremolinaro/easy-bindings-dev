//
//  PMEntityArrayController.swift
//
//  Created by Pierre Molinaro on 29/06/14.
//  Copyright (c) 2013 ECN / IRCCyN. All rights reserved.
//
//-----------------------------------------------------------------------------*

import Cocoa

//-----------------------------------------------------------------------------*

class PMEntityArrayController : NSArrayController {
  var mFilteringKey : String = ""
  var mObjectClassName = ""
  var mObservedObjects = NSSet ()
  var deleteEntityOnRemove = false
  var mEntityManager : PMEntityManager

  //---------------------------------------------------------------------------*
  //    init                                                                   *
  //---------------------------------------------------------------------------*

  init (entityManager : PMEntityManager,
        inClassName : String) {
    mEntityManager = entityManager
    super.init ()
    mObjectClassName = inClassName
    noteObjectAllocation (self)
  }

  //---------------------------------------------------------------------------*
  //    deinit                                                                 *
  //---------------------------------------------------------------------------*

  deinit {
    noteObjectDeallocation (self)
  }

  //---------------------------------------------------------------------------*
  //    add                                                                    *
  //---------------------------------------------------------------------------*

  override func add (inSender : AnyObject!) {
 //   if (nil == self.entityManager) {
//      [super add:inSender] ;
 //   }else{
   var newObject : PMManagedEntity = mEntityManager.newInstanceOfEntityNamed (mObjectClassName)!
   addObject (newObject)
  }

  //---------------------------------------------------------------------------*
  //    remove                                                                 *
  //---------------------------------------------------------------------------*

  override func remove (inSender : AnyObject!) {
    if deleteEntityOnRemove {
      let selectedObjectIndexes : NSIndexSet = selectionIndexes ()
      let selectedObjects : NSArray = self.arrangedObjects ().objectsAtIndexes (selectedObjectIndexes)
      for object : AnyObject in selectedObjects {
        let managedObject : PMManagedEntity = object as PMManagedEntity
        mEntityManager.deleteEntity (managedObject)
      }
    }else{
      super.remove (inSender)
    }
  }

  //---------------------------------------------------------------------------*
  //  A U T O M A T I C     F I L T E R I N G                                  *
  //---------------------------------------------------------------------------*

  func automaticallyFilterWithKey (inKey : String) {
    if countElements (mFilteringKey) > 0 {
      let allObjects : NSArray = mObservedObjects.allObjects () as NSArray
      allObjects.removeObserver (self,
        fromObjectsAtIndexes:NSIndexSet (indexesInRange:NSRange (location:0, length:allObjects.count ())),
        forKeyPath:mFilteringKey
      )
    }
  //---
    mFilteringKey = inKey ;
    didChangeArrangementCriteria ()
  }


  //---------------------------------------------------------------------------*
  //  arrangeObjects                                                           *
  //---------------------------------------------------------------------------*

  override func arrangeObjects (inObjects : AnyObject[]!) -> AnyObject[]! {
    // NSLog (@"%s", __PRETTY_FUNCTION__) ;

    var result = inObjects
    if countElements(mFilteringKey) > 0 {
    //---
      let objectSet : NSSet = NSSet (array:inObjects)
    //--- Add observer to new objects
      var newObjects = NSMutableSet ()
      newObjects.setSet (objectSet)
      newObjects.minusSet (mObservedObjects)
      let newObjectArray = newObjects.allObjects () as NSArray
      newObjectArray.addObserver (self,
        toObjectsAtIndexes:NSIndexSet (indexesInRange:NSRange (location:0, length:newObjectArray.count ())),
        forKeyPath:mFilteringKey,
        options:NSKeyValueObservingOptions (0),
        context:nil
      )
    //--- Remove observer to removed objects
      var removedObjects = NSMutableSet ()
      removedObjects.setSet (mObservedObjects)
      removedObjects.minusSet (objectSet)
      let removedObjectArray : NSArray = removedObjects.allObjects () as NSArray
      removedObjectArray.removeObserver (self,
        fromObjectsAtIndexes:NSIndexSet (indexesInRange:NSRange (location:0, length:removedObjectArray.count ())),
        forKeyPath:mFilteringKey
      )
    //--- Assign new object set
      mObservedObjects = objectSet
    //---
      var filteredObjects = NSMutableArray ()
      for object : AnyObject in inObjects {
        if object.valueForKey (mFilteringKey).boolValue () {
          filteredObjects.addObject (object)
        }
      }
      result = filteredObjects ;
    }
    // NSLog (@"selectedObjects %lu", [[self selectedObjects] count]) ;
    return super.arrangeObjects (result)
  }

  //---------------------------------------------------------------------------*
  //  unbind                                                                   *
  //---------------------------------------------------------------------------*

  override func unbind (inBinding : String) {
    if inBinding == "contentArray" && (countElements (mFilteringKey) > 0) {
      let objectArray : NSArray = mObservedObjects.allObjects () as NSArray
      objectArray.removeObserver (self,
        fromObjectsAtIndexes:NSIndexSet (indexesInRange:NSRange (location:0, length:objectArray.count ())),
        forKeyPath:mFilteringKey
      )
    }
    super.unbind (inBinding)
  }


}



/*

#import "easy-bindings-utilities.h"
#import "PMEntityArrayController.h"
#import "PMManagedEntity.h"
#import "PMEntityManager.h"
#import "PMAllocationDebug.h"

//-----------------------------------------------------------------------------*

@implementation PMEntityArrayController

//-----------------------------------------------------------------------------*

@synthesize deleteEntityOnRemove ;
@synthesize entityManager ;

//-----------------------------------------------------------------------------*

- (instancetype) init {
  self = [super init] ;
  if (self) {
    macroNoteObjectAllocation ;
  }
  return self ;
}

//----------------------------------------------------------------------------*
//    Dealloc                                                                 *
//----------------------------------------------------------------------------*

- (void) dealloc {
  macroReleaseSetToNil (mFilteringKey) ;
  macroReleaseSetToNil (mObservedObjects) ;
  macroReleaseSetToNil (entityManager) ;
  macroNoteObjectDeallocation ;
  macroSuperDealloc ;
}

//-----------------------------------------------------------------------------*

- (void) add: (id) inSender {
  if (nil == self.entityManager) {
    [super add:inSender] ;
  }else{
    id newObject = [self.entityManager newInstanceOfEntity:self.objectClass] ;
    [self addObject:newObject] ;
    macroAutorelease (newObject) ;
  }
}

//-----------------------------------------------------------------------------*

- (void) remove: (id) inSender {
  if (self.deleteEntityOnRemove && (nil != self.entityManager)) {
    NSIndexSet * selectedObjectIndexes = self.selectionIndexes ;
    NSArray * selectedObjects = [self.arrangedObjects objectsAtIndexes:selectedObjectIndexes] ;
    for (PMManagedEntity * object in selectedObjects) {
      [self.entityManager deleteEntity:object] ;
    }
  }else{
    [super remove:inSender] ;
  }
}

//---------------------------------------------------------------------------*
//                                                                           *
//  A U T O M A T I C     F I L T E R I N G                                  *
//                                                                           *
//---------------------------------------------------------------------------*

- (void) automaticallyFilterWithKey: (NSString *) inKey {
  if (mFilteringKey.length > 0) {
    [mObservedObjects.allObjects
      removeObserver:self
      fromObjectsAtIndexes:[NSIndexSet indexSetWithIndexesInRange:NSMakeRange (0, mObservedObjects.allObjects.count)]
      forKeyPath:mFilteringKey
    ] ;
  }
//---
  mFilteringKey = inKey.copy ;
  macroReleaseSetToNil (mObservedObjects) ;
  [self didChangeArrangementCriteria] ;
}

//---------------------------------------------------------------------------*

- (NSArray *) arrangeObjects: (NSArray *) inObjects {
  // NSLog (@"%s", __PRETTY_FUNCTION__) ;
  NSArray * result = inObjects ;
  if ([mFilteringKey length] > 0) {
  //---
    NSSet * objectSet = [NSSet setWithArray:inObjects] ;
  //--- Add observer to new objects
    NSMutableSet * newObjects = [NSMutableSet new] ;
    [newObjects setSet:objectSet] ;
    [newObjects minusSet:mObservedObjects] ;
    [newObjects.allObjects
      addObserver:self
      toObjectsAtIndexes:[NSIndexSet indexSetWithIndexesInRange:NSMakeRange (0, newObjects.allObjects.count)]
      forKeyPath:mFilteringKey
      options:0
      context:NULL
    ] ;
    macroReleaseSetToNil (newObjects) ;
  //--- Remove observer to removed objects
    NSMutableSet * removedObjects = [NSMutableSet new] ;
    [removedObjects setSet:mObservedObjects] ;
    [removedObjects minusSet:objectSet] ;
    [removedObjects.allObjects
      removeObserver:self
      fromObjectsAtIndexes:[NSIndexSet indexSetWithIndexesInRange:NSMakeRange (0, removedObjects.allObjects.count)]
      forKeyPath:mFilteringKey
    ] ;
    macroReleaseSetToNil (removedObjects) ;
  //--- Assign new object set
    macroAssign (mObservedObjects, objectSet) ;
  //---
    NSMutableArray * filteredObjects = [NSMutableArray new] ;
    for (NSObject * object in inObjects) {
      if ([[object valueForKey:mFilteringKey] boolValue]) {
        [filteredObjects addObject:object] ;
      }
    }
    result = filteredObjects ;
    macroAutorelease (filteredObjects) ;
  }
  // NSLog (@"selectedObjects %lu", [[self selectedObjects] count]) ;
  return [super arrangeObjects:result] ;
}

//---------------------------------------------------------------------------*

- (void) observeValueForKeyPath:(NSString *) inKeyPath
         ofObject:(id)object
         change:(NSDictionary *)change
         context:(void *) inContext {
  // NSLog (@"%s, keyPath '%@'", __PRETTY_FUNCTION__, inKeyPath) ;
  if ([inKeyPath isEqualToString:mFilteringKey]) {
    const NSUInteger selectionIndex = [self selectionIndex] ;
    [self rearrangeObjects] ;
    // NSLog (@"selectedObjects %lu", [[self selectedObjects] count]) ;
    const NSUInteger count = [[self arrangedObjects] count] ;
    if ([self avoidsEmptySelection]) {
      if ((selectionIndex != NSNotFound) && (selectionIndex < count)) {
        [self setSelectionIndex:selectionIndex] ;
      }else if ((selectionIndex == NSNotFound) && (count > 0)) {
        [self setSelectionIndex:0] ;
      }else if ((selectionIndex >= count) && (count > 0)) {
        [self setSelectionIndex:count - 1] ;
      }
    }
  }else{
    [super
      observeValueForKeyPath:inKeyPath
      ofObject:object
      change:change
      context:inContext
    ] ;
  }
}

//-----------------------------------------------------------------------------*

@end

*/

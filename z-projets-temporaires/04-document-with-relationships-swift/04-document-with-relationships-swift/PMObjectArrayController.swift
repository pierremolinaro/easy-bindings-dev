//
//  PMObjectArrayController.swift
//
//  Created by Pierre Molinaro on 29/06/14.
//  Copyright (c) 2013 ECN / IRCCyN. All rights reserved.
//
//---------------------------------------------------------------------------------------------------------------------*

import Cocoa

//---------------------------------------------------------------------------------------------------------------------*

@objc(PMTrigger_updateTableView)
class PMTrigger_updateTableView : NSObject, PMTriggerProtocol {
  weak var mTriggerObject : PMObjectArrayController? = nil
  
  var mTransientIndex : Int {
    get {
      return kOutletShouldDisplay
    }
  }
  
  init (object : PMObjectArrayController) {
    mTriggerObject = object
    super.init ()
    noteObjectAllocation (self) ;
  }
  
  deinit {
    noteObjectDeallocation (self) ;
  }

  func noteTransientChanged () {
  }
  
  func trigger () {
    mTriggerObject?.refreshDisplay ()
  }
}

//---------------------------------------------------------------------------------------------------------------------*

@objc(PMObjectArrayController) class PMObjectArrayController : NSObject, PMTriggerProtocol, NSTableViewDataSource {
  var mEntityManager : PMObjectManager
  var mObject : MyRootEntity
  var mTableView : NSTableView?

  //-------------------------------------------------------------------------------------------------------------------*
  //    init                                                                                                           *
  //-------------------------------------------------------------------------------------------------------------------*

  init (object : MyRootEntity, tableView:NSTableView?) {
    mObject = object
    mTableView = tableView
    mEntityManager = object.entityManager ()
    super.init ()
    mTableView?.setDataSource (self)
    noteObjectAllocation (self)
    object.addObserverOf_mNames (self)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    unbind                                                                                                         *
  //-------------------------------------------------------------------------------------------------------------------*

  func unbind () {
    mObject.removeObserverOf_mNames (self)
    for object : AnyObject in mCurrentObjectSet {
      let managedObject = object as NameEntity
      managedObject.removeObserverOf_aValue (triggerObjectForModelChange)
      managedObject.removeObserverOf_name (triggerObjectForModelChange)
    }
    mCurrentObjectSet = NSMutableSet ()
  }
  
  //-------------------------------------------------------------------------------------------------------------------*
  //    deinit                                                                                                         *
  //-------------------------------------------------------------------------------------------------------------------*

  deinit {
    noteObjectDeallocation (self)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    For PMTriggerProtocol                                                                                          *
  //-------------------------------------------------------------------------------------------------------------------*

  var mTransientIndex = kOutletShouldDisplay

  //-------------------------------------------------------------------------------------------------------------------*

  func noteTransientChanged () {
  }

  //-------------------------------------------------------------------------------------------------------------------*

  var mCurrentObjectSet = NSMutableSet ()
  
  func trigger () {
  //--- Update observers for handling model change
    let oldObjectSet = mCurrentObjectSet
    mCurrentObjectSet = NSMutableSet ()
    mCurrentObjectSet.addObjectsFromArray (mObject.mNames)
  //--- Removed object set
    var removedObjectSet = NSMutableSet ()
    removedObjectSet.setSet (oldObjectSet)
    removedObjectSet.minusSet (mCurrentObjectSet)
    for object : AnyObject in removedObjectSet {
      let managedObject = object as NameEntity
      managedObject.removeObserverOf_aValue (triggerObjectForModelChange)
      managedObject.removeObserverOf_name (triggerObjectForModelChange)
    }
  //--- Added object set
    var addedObjectSet = NSMutableSet ()
    addedObjectSet.setSet (mCurrentObjectSet)
    addedObjectSet.minusSet (oldObjectSet)
    for object : AnyObject in addedObjectSet {
      let managedObject = object as NameEntity
      managedObject.addObserverOf_aValue (triggerObjectForModelChange)
      managedObject.addObserverOf_name (triggerObjectForModelChange)
    }
  //---
    refreshDisplay ()
    updateCanRemoveProperty ()
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    Observing model change                                                                                         *
  //-------------------------------------------------------------------------------------------------------------------*

  func refreshDisplay () {
    mTableView?.reloadData ()
  }

  var triggerObjectForModelChange : PMTrigger_updateTableView {
    if triggerObjectForModelChange__cache == nil {
      triggerObjectForModelChange__cache = PMTrigger_updateTableView (object:self)
    }
    return triggerObjectForModelChange__cache!
  }
  var triggerObjectForModelChange__cache : PMTrigger_updateTableView? = nil

  //-------------------------------------------------------------------------------------------------------------------*
  //    T A B L E V I E W    D A T A S O U R C E                                                                       *
  //-------------------------------------------------------------------------------------------------------------------*

  func numberOfRowsInTableView (NSTableView!) -> Int {
    return mObject.mNames.count
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func tableView (NSTableView,
                  objectValueForTableColumn: NSTableColumn,
                  row:NSInteger) -> AnyObject! {
    let columnIdentifier = objectValueForTableColumn.identifier as String
    var result : AnyObject! = columnIdentifier
    if columnIdentifier == "name" {
      let object = mObject.mNames.objectAtIndex (row) as NameEntity
      result = object.name
    }else if columnIdentifier == "int" {
      let object = mObject.mNames.objectAtIndex (row) as NameEntity
      result = NSNumber.numberWithLongLong (object.aValue)
    }
    return result
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func tableView (NSTableView!,
                  setObjectValue inObject: AnyObject!,
                  forTableColumn aTableColumn: NSTableColumn!,
                  row inRowIndex: Int) {
    let columnIdentifier = aTableColumn.identifier as String
    let object = mObject.mNames.objectAtIndex (inRowIndex) as NameEntity
    if columnIdentifier == "name" {
      if let str = inObject as? String {
        object.name = str
      }
    }else if columnIdentifier == "int" {
      if let nbr = inObject as? NSString {
        object.aValue = nbr.longLongValue
      }else{
        NSBeep ()
      }
    }
  }
  
  //-------------------------------------------------------------------------------------------------------------------*
  //    add                                                                                                            *
  //-------------------------------------------------------------------------------------------------------------------*

  func add (inSender : AnyObject!) {
   var newObject : PMManagedObject = NameEntity (entityManager:mEntityManager)
   var array : NSMutableArray = mObject.mNames.mutableCopy () as NSMutableArray
   array.addObject (newObject)
   mObject.mNames = array
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    remove                                                                                                         *
  //-------------------------------------------------------------------------------------------------------------------*

  func remove (inSender : AnyObject!) {
    if let tableView = mTableView {
      let selectedRow = tableView.selectedRow ;
      if selectedRow >= 0 {
        let object = mObject.mNames.objectAtIndex (selectedRow) as NameEntity
        var array : NSMutableArray = mObject.mNames.mutableCopy () as NSMutableArray
        array.removeObjectAtIndex (selectedRow)
        mObject.mNames = array
        mEntityManager.deleteEntity (object)
      }
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //  A U T O M A T I C     F I L T E R I N G                                                                          *
  //-------------------------------------------------------------------------------------------------------------------*

/*  func automaticallyFilterWithKey (inKey : String) {
    if countElements (mFilteringKey) > 0 {
      let allObjects : NSArray = mObservedObjects.allObjects as NSArray
      allObjects.removeObserver (self,
        fromObjectsAtIndexes:NSIndexSet (indexesInRange:NSRange (location:0, length:allObjects.count)),
        forKeyPath:mFilteringKey
      )
    }
  //---
    mFilteringKey = inKey ;
//    didChangeArrangementCriteria ()
  } */


  //-------------------------------------------------------------------------------------------------------------------*
  //  arrangeObjects                                                                                                   *
  //-------------------------------------------------------------------------------------------------------------------*

/*  override func arrangeObjects (inObjects : [AnyObject]!) -> [AnyObject]! {
    // NSLog (@"%s", __PRETTY_FUNCTION__) ;

    var result = inObjects
    if countElements(mFilteringKey) > 0 {
    //---
      let objectSet : NSSet = NSSet (array:inObjects)
    //--- Add observer to new objects
      var newObjects = NSMutableSet ()
      newObjects.setSet (objectSet)
      newObjects.minusSet (mObservedObjects)
      let newObjectArray = newObjects.allObjects as NSArray
      newObjectArray.addObserver (self,
        toObjectsAtIndexes:NSIndexSet (indexesInRange:NSRange (location:0, length:newObjectArray.count)),
        forKeyPath:mFilteringKey,
        options:NSKeyValueObservingOptions (0),
        context:nil
      )
    //--- Remove observer to removed objects
      var removedObjects = NSMutableSet ()
      removedObjects.setSet (mObservedObjects)
      removedObjects.minusSet (objectSet)
      let removedObjectArray : NSArray = removedObjects.allObjects as NSArray
      removedObjectArray.removeObserver (self,
        fromObjectsAtIndexes:NSIndexSet (indexesInRange:NSRange (location:0, length:removedObjectArray.count)),
        forKeyPath:mFilteringKey
      )
    //--- Assign new object set
      mObservedObjects = objectSet
    //---
      var filteredObjects = NSMutableArray ()
      for object : AnyObject in inObjects {
        if (object.valueForKey (mFilteringKey).boolValue != nil) {
          filteredObjects.addObject (object)
        }
      }
      result = filteredObjects ;
    }
    // NSLog (@"selectedObjects %lu", [[self selectedObjects] count]) ;
    return super.arrangeObjects (result)
  }*/

  //-------------------------------------------------------------------------------------------------------------------*
  //  Transient: canRemove                                                                                             *
  //-------------------------------------------------------------------------------------------------------------------*

  var previousValueOfCanRemove = false // As array is empty initially
  
  func updateCanRemoveProperty () {
    let newValue = mObject.mNames.count > 0
    if previousValueOfCanRemove != newValue {
      previousValueOfCanRemove = newValue
      for anyObject in canRemove_observers {
        let object = anyObject as PMTriggerProtocol
        enterTriggerWithObject (object)
      }
    }
  }
  
  var canRemove_observers = NSMutableSet ()
  
  func addObserverOf_canRemove (inObserver : PMTriggerProtocol) {
    canRemove_observers.addObject (inObserver)
    enterTriggerWithObject (inObserver)
  }
 
  func removeObserverOf_canRemove (inObserver : PMTriggerProtocol) {
    canRemove_observers.removeObject (inObserver)
    enterTriggerWithObject (inObserver)
  }

}

//---------------------------------------------------------------------------------------------------------------------*


/*

#import "easy-bindings-utilities.h"
#import "PMEntityArrayController.h"
#import "PMManagedObject.h"
#import "PMObjectManager.h"
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
    for (PMManagedObject * object in selectedObjects) {
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

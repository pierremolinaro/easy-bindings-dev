//---------------------------------------------------------------------------*
//                                                                           *
//  File 'PMAbstractPersistentDocument.m'                                    *
//  Created by Pierre Molinaro on january 23, 2008.                          *
//                                                                           *
//---------------------------------------------------------------------------*

#import "PMAllocationDebug.h"
#import "PMAbstractPersistentDocument.h"
#import "easy-bindings-utilities.h"
#import "PMManagedObject.h"
#import "managed-object-model.h"
#import "PMAllocationDebug.h"

//---------------------------------------------------------------------------*

//#define EASY_BINDINGS_DEBUG

//---------------------------------------------------------------------------*

#ifdef PM_COCOA_DEBUG
  static BOOL gDebugMenuItemsAdded ;
#endif

//---------------------------------------------------------------------------*

@implementation PMAbstractPersistentDocument

//---------------------------------------------------------------------------*

#pragma mark Init

//---------------------------------------------------------------------------*
//                                                                           *
//                           initWithType:error:                             *
//                                                                           *
//---------------------------------------------------------------------------*

- (id) initWithType: (NSString *) typeName error: (NSError **) outError {
  #ifdef EASY_BINDINGS_DEBUG
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  self = [super initWithType:typeName error:outError ] ;
  if (self) {
  //---
    macroNoteObjectAllocation ;
  //--- Make Managed Object Context
    NSManagedObjectContext * moc = self.managedObjectContext ;
  //---
    [moc processPendingChanges] ;
    [moc.undoManager disableUndoRegistration] ;
  //--- Fetch root object
    [self fetchRootObject] ;
  //--- User initialization
    [self hookOfInitWithType:typeName] ;
  //---
    [moc processPendingChanges] ;
    [moc.undoManager enableUndoRegistration] ;
  }
  return self ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//                   initWithContentsOfURL:ofType:error:                     *
//                                                                           *
//---------------------------------------------------------------------------*

- (id) initForURL:(NSURL *) inAbsoluteDocumentURL
       withContentsOfURL:(NSURL *) inAbsoluteDocumentContentsURL
       ofType:(NSString *) inTypeName
       error:(NSError **) outError {
  #ifdef EASY_BINDINGS_DEBUG
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  self = [super
    initForURL:inAbsoluteDocumentURL
    withContentsOfURL:inAbsoluteDocumentContentsURL
    ofType:inTypeName
    error:outError
  ] ;
  if (self) {
    macroNoteObjectAllocation ;
  //--- User initialization
    [self hookOfInitWithContentsOfURL:inAbsoluteDocumentURL ofType:inTypeName] ;
  //--- Make Managed Object Context
    NSManagedObjectContext * moc = self.managedObjectContext ;
  //---
    [moc.undoManager disableUndoRegistration] ;
  //--- Fetch root object
    [self fetchRootObject] ;
  //--- User initialization
    [self hookOfDidReadDocumentOfType:inTypeName] ;
  //---
    [moc processPendingChanges] ;
    [moc.undoManager enableUndoRegistration] ;
  }
  return self ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//                   initWithContentsOfURL:ofType:error:                     *
//                                                                           *
//---------------------------------------------------------------------------*

- (id) initWithContentsOfURL:(NSURL *) inAbsoluteURL
       ofType: (NSString *) inTypeName
       error: (NSError **) outError {
  #ifdef EASY_BINDINGS_DEBUG
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  self = [super initWithContentsOfURL:inAbsoluteURL ofType:inTypeName error:outError] ;
  if (self) {
    macroNoteObjectAllocation ;
  //--- User initialization
    [self hookOfInitWithContentsOfURL:inAbsoluteURL ofType:inTypeName] ;
  //--- Make Managed Object Context
    NSManagedObjectContext * moc = self.managedObjectContext ;
  //---
    [moc.undoManager disableUndoRegistration] ;
  //--- Fetch root object
    [self fetchRootObject] ;
  //--- User initialization
    [self hookOfDidReadDocumentOfType:inTypeName] ;
  //---
    [moc processPendingChanges] ;
    [moc.undoManager enableUndoRegistration] ;
  }
  return self ;
}

//----------------------------------------------------------------------------*
//    hookOfInitWithType                                                      *
//----------------------------------------------------------------------------*

- (void) hookOfInitWithType: (NSString *) inTypeName {
}

//----------------------------------------------------------------------------*
//    hookOfInitWithContentsOfURL:ofType:                                     *
//----------------------------------------------------------------------------*

- (void) hookOfInitWithContentsOfURL: (NSURL *) inAbsoluteDocumentURL
         ofType: (NSString *) inTypeName {
}

//----------------------------------------------------------------------------*
//    hookOfDidReadDocumentOfType:                                            *
//----------------------------------------------------------------------------*

- (void) hookOfDidReadDocumentOfType: (NSString *) inTypeName {
}

//----------------------------------------------------------------------------*
//    fetchRootObject                                                         *
//----------------------------------------------------------------------------*

- (void) fetchRootObject {
  NSLog (@"%s is an abstract method; it must be overriden", __PRETTY_FUNCTION__) ;
}

//----------------------------------------------------------------------------*
//    hookOfRootObjectDidCreate                                               *
//----------------------------------------------------------------------------*

- (void) hookOfRootObjectDidCreate {
}

//----------------------------------------------------------------------------*
//    Dealloc                                                                 *
//----------------------------------------------------------------------------*

- (void) dealloc {
  [mManagedObjectContext processPendingChanges] ;
  [mManagedObjectContext save:NULL] ;
  [mManagedObjectContext reset] ;
  // macroReleaseSetToNil (mManagedObjectContext) ;
  macroNoteObjectDeallocation ;
  macroSuperDealloc ;
}

//---------------------------------------------------------------------------*

#pragma mark Undo Manager

//---------------------------------------------------------------------------*
//                                                                           *
//  undoManager                                                              *
//                                                                           *
//  Returns the undo manager of the document managed object context.         *
//                                                                           *
//---------------------------------------------------------------------------*

- (NSUndoManager *) undoManager {
  return self.managedObjectContext.undoManager ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//  hasUndoManager                                                           *
//                                                                           *
//  Returns always YES: a persistent document has always an undo manager     *
//  (the managed object context undo manager).                               *
//                                                                           *
//---------------------------------------------------------------------------*

- (BOOL) hasUndoManager {
  return YES ;
}

//---------------------------------------------------------------------------*

#pragma mark Managed Object Model, Context

//----------------------------------------------------------------------------*
//    managedObjectModel                                                      *
//----------------------------------------------------------------------------*

- (NSManagedObjectModel *) managedObjectModel {
  return managedObjectModel () ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//  managedObjectContext                                                     *
//                                                                           *
//  Returns the document managed object context; if it does not exist,       *
//  create it.                                                               *
//                                                                           *
//---------------------------------------------------------------------------*

- (NSManagedObjectContext *) managedObjectContext {
  if (mManagedObjectContext == nil) {
    NSManagedObjectModel * model = self.managedObjectModel ;
    NSPersistentStoreCoordinator * psc = [[NSPersistentStoreCoordinator alloc] initWithManagedObjectModel:model];
    mManagedObjectContext = [NSManagedObjectContext new] ;
    [mManagedObjectContext setPersistentStoreCoordinator:psc] ;
    NSDictionary * readOptions = [NSDictionary
      dictionaryWithObject:[NSNumber numberWithBool:YES]
      forKey:NSIgnorePersistentStoreVersioningOption
    ] ;
    [psc 
      addPersistentStoreWithType:NSInMemoryStoreType
      configuration:nil
      URL:nil
      options:readOptions
      error:nil
    ] ;
    macroReleaseSetToNil (psc) ;

    NSNotificationCenter * nc = [NSNotificationCenter defaultCenter] ;
    [nc
      addObserver:self
      selector:@selector (updateDocumentEdition:)
      name:NSManagedObjectContextObjectsDidChangeNotification
      object:mManagedObjectContext
    ] ;
/*    [nc
      addObserver:self
      selector:@selector (updateDocumentEdition:)
      name:NSManagedObjectContextDidSaveNotification
      object:mManagedObjectContext
    ] ;*/
  }
  return mManagedObjectContext ;
}

//----------------------------------------------------------------------------*

#pragma mark Open, Close User Interface

//----------------------------------------------------------------------------*
//    windowControllerDidLoadNib:                                             *
//----------------------------------------------------------------------------*

- (void) windowControllerDidLoadNib: (NSWindowController *) inWindowController {
  [super windowControllerDidLoadNib:inWindowController] ;
//--- Add Debug menu items ?
  #ifdef PM_COCOA_DEBUG
    if (! gDebugMenuItemsAdded) {
      gDebugMenuItemsAdded = YES ;
      NSMenuItem * menuItem = [[NSMenuItem alloc]
        initWithTitle:@"Explore document"
        action:@selector (showObjectExplorerWindow:)
        keyEquivalent:@""
      ] ;
      macroAddItemToDebugMenu (menuItem) ;
      macroReleaseSetToNil (menuItem) ;
    }
  #endif
}

//----------------------------------------------------------------------------*
//    removeWindowController:                                                 *
//----------------------------------------------------------------------------*

- (void) removeWindowController: (NSWindowController *) inWindowController {
  #ifdef EASY_BINDINGS_DEBUG
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
//---
  NSNotificationCenter * nc = [NSNotificationCenter defaultCenter] ;
  [nc
    removeObserver:self
    name:NSManagedObjectContextObjectsDidChangeNotification
    object:mManagedObjectContext
  ] ;
/*  [nc
    removeObserver:self
    name:NSManagedObjectContextDidSaveNotification
    object:mManagedObjectContext
  ] ;*/
//---
  mFetchingAllObjectsDone = NO ;
//--- Invoke super method
  [super removeWindowController:inWindowController] ;
}

//---------------------------------------------------------------------------*

#pragma mark Document edition

//---------------------------------------------------------------------------*
//                                                                           *
//  isDocumentEdited                                                         *
//                                                                           *
//  Returns YES if managed object context has changes, and NO otherwise.     *
//                                                                           *
//---------------------------------------------------------------------------*

- (BOOL) isDocumentEdited {
  #ifdef EASY_BINDINGS_DEBUG
    NSLog (@" <isDocumentEdited> returns %@",
           self.undoManager.canUndo ? @"YES" : @"NO") ;
  #endif
  return self.undoManager.canUndo ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//  updateDocumentEdition:                                                   *
//                                                                           *
//  This method is invoked by the notification center when the managed object*
//  context notifies NSManagedObjectContextObjectsDidChangeNotification or   *
//  NSManagedObjectContextDidSaveNotification notification. It updates the   *
//  "edited" state of document window.                                       *
//                                                                           *
//---------------------------------------------------------------------------*

- (void) updateDocumentEdition: (id) inUnusedArgument {
  const BOOL isEdited = self.isDocumentEdited ;
  #ifdef EASY_BINDINGS_DEBUG
    NSManagedObjectContext * moc = self.managedObjectContext ;
    NSLog (@" <updateDocumentEdition> %@, %u updated, %u deleted, %u inserted",
           isEdited ? @"YES" : @"NO",
           [[moc updatedObjects] count],
           [[moc deletedObjects] count],
           [[moc insertedObjects] count]) ;
  #endif
  [self.windowForSheet setDocumentEdited:isEdited] ;
}

//---------------------------------------------------------------------------*

#pragma mark Object Graph Checking

//---------------------------------------------------------------------------*
//                                                                           *
//                          Object Graph Checking                            *
//                                                                           *
//---------------------------------------------------------------------------*

- (void) recursiveSearch:(NSMutableSet *) inReachableObjects
         withObject:(NSManagedObject *) inObject {
  if (! [inReachableObjects containsObject:inObject]) {
    [inReachableObjects addObject:inObject] ;
    NSEntityDescription * entity = [inObject entity] ;
    NSArray * allRelationshipsNames = [[entity relationshipsByName] allKeys] ;
    for (NSUInteger i=0 ; i<[allRelationshipsNames count] ; i++) {
      NSString * relationshipName = [allRelationshipsNames objectAtIndex:i] ;
      id v = [inObject valueForKey:relationshipName] ;
      if ([v isKindOfClass:[NSManagedObject class]]) { // To-one relationship
        [self recursiveSearch:inReachableObjects withObject:v] ;
      }else if ([v isKindOfClass:[NSSet class]]) { // To-many relationship
        NSArray * objects = [v allObjects] ;
        for (NSUInteger j=0 ; j<[objects count] ; j++) {
          [self recursiveSearch:inReachableObjects withObject:[objects objectAtIndex:j]] ;
        }
      }
    }
  }
}

//---------------------------------------------------------------------------*

- (void) unreachableObjectCount: (NSUInteger *) outUnreachableObjectCount
         registeredObjectCount: (NSUInteger *) outRegisteredObjectCount
         deletedObjectsCount: (NSUInteger *) outDeletedObjectCount {
  NSManagedObjectContext * moc = self.managedObjectContext ;
//--- Fetch all objects
  if (! mFetchingAllObjectsDone) {
    mFetchingAllObjectsDone = YES ;
    NSFetchRequest * fr = [NSFetchRequest new] ;
    NSManagedObjectModel * mom = self.managedObjectModel ;
    NSArray * entityNameArray = [[mom entitiesByName] allKeys] ;
    for (NSUInteger i=0 ; i<[entityNameArray count] ; i++) {
      NSString * entityName = [entityNameArray objectAtIndex:i] ;
      [fr setEntity:[NSEntityDescription entityForName:entityName inManagedObjectContext:moc]] ;
      [moc executeFetchRequest:fr error:nil] ;
    }
    macroReleaseSetToNil (fr) ;
  }
//--- Find reachable objects from root entity
  NSMutableSet * reachableObjects = [NSMutableSet new] ;
  [self recursiveSearch:reachableObjects withObject:self.rootObject] ;
//--- Get Registered Objects
  NSSet * registeredObjects = [moc registeredObjects] ;
  * outRegisteredObjectCount = [registeredObjects count] ;
//--- Compute the set of unreachable objects to delete
  NSMutableSet * s = [NSMutableSet setWithCapacity:* outRegisteredObjectCount] ;
  [s unionSet:registeredObjects] ;
  [s minusSet:reachableObjects] ;
  macroReleaseSetToNil (reachableObjects) ;
  NSSet * deletedObjects = moc.deletedObjects ;
  * outDeletedObjectCount = deletedObjects.count ;
  [s minusSet:deletedObjects] ;
  * outUnreachableObjectCount = s.count ;
}

//---------------------------------------------------------------------------*

- (IBAction) checkObjectGraph: (id) inUnusedSender {
//--- Fetch all instances of root entity (normally only one !)
  NSManagedObjectContext * moc = self.managedObjectContext ;
  NSEntityDescription * rootEntity = [self.rootObject entity] ;
  NSFetchRequest * fr = [[NSFetchRequest alloc] init] ;
  [fr setEntity:rootEntity] ;
  NSError * error = nil ;
  NSArray * allInstancesOfRootEntity = [moc executeFetchRequest:fr error:& error] ;
  macroReleaseSetToNil (fr) ;
  const NSUInteger n = [allInstancesOfRootEntity count] ;
  BOOL ok = error == nil ;
  if (! ok) {
    NSAlert * alert = [NSAlert alertWithError:error] ;
    [alert
      beginSheetModalForWindow:self.windowForSheet
      modalDelegate:nil
      didEndSelector:NULL
      contextInfo:NULL
    ] ;
  }else if (n != 1) {
    ok = NO ;
    NSAlert * alert = [NSAlert
      alertWithMessageText:@"Object Graph Error"
      defaultButton:@"Ok"
      alternateButton:nil
      otherButton:nil
      informativeTextWithFormat:@"There %s %lu instance%s of root entity. Normally, there is exactly one instance of root entity.",
        (n > 1) ? "are" : "is", n, (n > 1) ? "s" : ""
    ] ;
    [alert
      beginSheetModalForWindow:self.windowForSheet
      modalDelegate:nil
      didEndSelector:NULL
      contextInfo:NULL
    ] ;
  }else{
  //--- Fetch all objects
    NSManagedObjectModel * mom = [NSManagedObjectModel mergedModelFromBundles:nil] ;
    NSArray * entityNameArray = [[mom entitiesByName] allKeys] ;
    for (NSUInteger i=0 ; (i<[entityNameArray count]) && (error == nil) ; i++) {
      NSString * entityName = [entityNameArray objectAtIndex:i] ;
      [fr setEntity:[NSEntityDescription entityForName:entityName inManagedObjectContext:moc]] ;
      [moc executeFetchRequest:fr error:& error] ;
      if (error != nil) {
        [NSApp presentError:error] ;
      }
    }
    ok = error == nil ;
  }
  if (ok) {
  //--- Find reachable objects from root entity
    NSMutableSet * reachableObjects = [NSMutableSet setWithCapacity:1000] ;
    [self recursiveSearch:reachableObjects withObject:self.rootObject] ;
  //--- Get Registered Objects
    NSSet * registeredObjects = [moc registeredObjects] ;
  //--- Compute the set of unreachable objects to delete
    NSMutableSet * s = [NSMutableSet setWithCapacity:0] ;
    [s unionSet:registeredObjects] ;
    [s minusSet:reachableObjects] ;
    [s minusSet:[moc deletedObjects]] ;
    NSEnumerator * e = [s objectEnumerator] ;
    NSManagedObject * object ;
    mUnreachableObjectsForCheckObjectGraph = [NSMutableArray arrayWithCapacity:[s count]] ;
    while ((object = [e nextObject])) {
      if (! [object isDeleted]) {
        [mUnreachableObjectsForCheckObjectGraph addObject:object] ;
      }
    }
    const NSUInteger rn = [registeredObjects count] ;
    const NSUInteger reachableCount = [reachableObjects count] ;
    const NSUInteger deletedCount = [[moc deletedObjects] count] ;
    const NSUInteger unreachableObjectCount = [mUnreachableObjectsForCheckObjectGraph count] ;
    if (unreachableObjectCount == 0) {
      NSAlert * alert = [NSAlert
        alertWithMessageText:@"Object graph presents no error"
        defaultButton:@"Ok"
        alternateButton:nil
        otherButton:nil
        informativeTextWithFormat:@"There %s %lu registered object%s, "
          " %lu reachable object%s from root object, "
          " %lu marked to be deleted.",
          (rn > 1) ? "are" : "is", rn, (rn > 1) ? "s" : "",
          reachableCount, (reachableCount > 1) ? "s" : "",
          deletedCount
      ] ;
      [alert
        beginSheetModalForWindow:self.windowForSheet
        modalDelegate:nil
        didEndSelector:NULL
        contextInfo:NULL
      ] ;
    }else{
      NSAlert * alert = [NSAlert
        alertWithMessageText:@"Object Graph Warning"
        defaultButton:@"Do not Delete"
        alternateButton:[NSString stringWithFormat:@"Delete %lu unreachable Object%s", unreachableObjectCount, (unreachableObjectCount > 1) ? "s" : ""]
        #ifdef PM_COCOA_DEBUG
        otherButton:@"Show unreachable Objects"
        #else
        otherButton:nil
        #endif
        informativeTextWithFormat:@"There %s %lu registered object%s, "
          " %lu reachable object%s from root object, "
          " %lu marked to be deleted.",
          (rn > 1) ? "are" : "is", rn, (rn > 1) ? "s" : "",
          reachableCount, (reachableCount > 1) ? "s" : "",
          deletedCount
      ] ;
      [alert
        beginSheetModalForWindow:self.windowForSheet
        modalDelegate:self
        didEndSelector:@selector (deleteUnreachableObjects:returnCode:contextInfo:)
        contextInfo:NULL
      ] ;
    }
  }
}

//---------------------------------------------------------------------------*

- (void) deleteUnreachableObjects:(NSAlert *) inAlert
         returnCode:(NSInteger) inReturnCode
         contextInfo:(void *) inUnusedContextInfo {
  if (NSAlertAlternateReturn == inReturnCode) {
    NSManagedObjectContext * moc = self.managedObjectContext ;
    for (NSUInteger i=0 ; i<[mUnreachableObjectsForCheckObjectGraph count] ; i++) {
      [moc deleteObject:[mUnreachableObjectsForCheckObjectGraph objectAtIndex:i]] ;
    }
  #ifdef PM_COCOA_DEBUG
  }else if (NSAlertOtherReturn == inReturnCode) {
    for (PMManagedObject * object in mUnreachableObjectsForCheckObjectGraph) {
      [object showExplorerWindow] ;
    }
  #endif
  }
  mUnreachableObjectsForCheckObjectGraph = nil ;
}

//---------------------------------------------------------------------------*

#pragma mark Object Graph Relationship Correction

//---------------------------------------------------------------------------*
//                                                                           *
//                   Object Graph Relationship Correction                    *
//                                                                           *
//---------------------------------------------------------------------------*

- (void) correctTarget: (NSManagedObject *) inTargetObject
         ofManagedObject:(NSManagedObject *) inManagedObject
         withInverseRelationship: (NSRelationshipDescription *) inInverseRelationship
         correctedError: (NSUInteger *) ioCorrectedErrorsPtr
         fatalErrors: (NSUInteger *) ioFatalErrorsPtr {
  #ifdef EASY_BINDINGS_DEBUG
    NSLog (@"%s, object %p, target object %p, inverse relationship %@", __PRETTY_FUNCTION__, inManagedObject, inTargetObject, [inInverseRelationship name]) ;
  #endif
  NSString * inverseRelationShipName = [inInverseRelationship name] ;
  const BOOL inverseIsToMany = [inInverseRelationship isToMany] ;
  if (inverseIsToMany) {
    NSSet * setOfTargetOfTargetObjects = [inTargetObject valueForKey:inverseRelationShipName] ;
    if (! [setOfTargetOfTargetObjects containsObject:inManagedObject]) {
      NSMutableSet * newSet = [NSMutableSet setWithCapacity:[setOfTargetOfTargetObjects count] + 1] ;
      [newSet setSet:setOfTargetOfTargetObjects] ;
      [newSet addObject:inManagedObject] ;
      [inTargetObject setValue:newSet forKey:inverseRelationShipName] ;
      ( * ioCorrectedErrorsPtr) ++ ;
    }
  }else{
    NSManagedObject * targetOfTargetObject = [inTargetObject valueForKey:inverseRelationShipName] ;
    if (targetOfTargetObject == NULL) {
      [inTargetObject setValue:inManagedObject forKey:inverseRelationShipName] ;
      ( * ioCorrectedErrorsPtr) ++ ;
    }else if (targetOfTargetObject != inManagedObject) {
      (* ioFatalErrorsPtr) ++ ;
    }
  }
}

//---------------------------------------------------------------------------*

- (void) checkToManyRelationship: (NSRelationshipDescription *) inRelationshipDescription
         forObject:(NSManagedObject *) inManagedObject
         correctedError: (NSUInteger *) ioCorrectedErrorsPtr
         fatalErrors: (NSUInteger *) ioFatalErrorsPtr {
  #ifdef EASY_BINDINGS_DEBUG
    NSLog (@"%s, object %p, to-many relationship %@", __PRETTY_FUNCTION__, inManagedObject, [inRelationshipDescription name]) ;
  #endif
  NSString * name = [inRelationshipDescription name] ;
  NSSet * targetSet = [inManagedObject valueForKey:name] ;
  NSRelationshipDescription * inverseRelationship = [inRelationshipDescription inverseRelationship] ;
  if ((targetSet.count != 0) && (inverseRelationship != nil)) {
    for (NSManagedObject * targetObject in targetSet) {
      [self
        correctTarget:targetObject
        ofManagedObject:inManagedObject
        withInverseRelationship:inverseRelationship
        correctedError:ioCorrectedErrorsPtr
        fatalErrors:ioFatalErrorsPtr
      ] ;
    }
  }
}

//---------------------------------------------------------------------------*

- (void) checkToOneRelationship: (NSRelationshipDescription *) inRelationshipDescription
         forObject:(NSManagedObject *) inManagedObject
         correctedError: (NSUInteger *) ioCorrectedErrorsPtr
         fatalErrors: (NSUInteger *) ioFatalErrorsPtr {
  #ifdef EASY_BINDINGS_DEBUG
    NSLog (@"%s, object %p, to-one relationship %@", __PRETTY_FUNCTION__, inManagedObject, [inRelationshipDescription name]) ;
  #endif
  NSString * name = [inRelationshipDescription name] ;
  NSManagedObject * targetObject = [inManagedObject valueForKey:name] ;
  NSRelationshipDescription * inverseRelationship = [inRelationshipDescription inverseRelationship] ;
  if ((targetObject != nil) && (inverseRelationship != nil)) {
    [self
      correctTarget:targetObject
      ofManagedObject:inManagedObject
      withInverseRelationship:inverseRelationship
      correctedError:ioCorrectedErrorsPtr
      fatalErrors:ioFatalErrorsPtr
    ] ;
  }
}

//---------------------------------------------------------------------------*

- (void) checkObjectRelationShips:(NSManagedObject *) inManagedObject
         correctedError: (NSUInteger *) ioCorrectedErrorsPtr
         fatalErrors: (NSUInteger *) ioFatalErrorsPtr {
  NSEntityDescription * entity = [inManagedObject entity] ;
  #ifdef EASY_BINDINGS_DEBUG
    NSLog (@"%s, object %p (%@)", __PRETTY_FUNCTION__, inManagedObject, [entity name]) ;
  #endif
  NSDictionary * relationshipsByName = [entity relationshipsByName] ;
  NSEnumerator * enumerator = [relationshipsByName objectEnumerator] ;
  NSRelationshipDescription * rsd ;
  while ((rsd = enumerator.nextObject)) {
    const BOOL isToMany = [rsd isToMany] ;
    if (isToMany) {
     [self
        checkToManyRelationship:rsd
        forObject:inManagedObject
        correctedError:ioCorrectedErrorsPtr
        fatalErrors:ioFatalErrorsPtr
      ] ;
    }else{
      [self
        checkToOneRelationship:rsd
        forObject:inManagedObject
        correctedError:ioCorrectedErrorsPtr
        fatalErrors:ioFatalErrorsPtr
      ] ;
    }
  }
}

//---------------------------------------------------------------------------*

- (IBAction) checkRelationships: (id) inSender {
  #ifdef EASY_BINDINGS_DEBUG
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
//--- Build and show Panel
  const NSRect panelRect = {{0.0, 0.0}, {295.0, 107.0}} ;
  NSPanel * panel = [[NSPanel alloc] initWithContentRect:panelRect styleMask:NSTitledWindowMask backing:NSBackingStoreBuffered defer:NO] ;
  const NSRect textRect = {{17.0, 45.0}, {261.0, 17.0}} ;
  NSTextField * tf = [[NSTextField alloc] initWithFrame:textRect] ;
  [tf setStringValue:@"Checking Document Relationships..."] ;
  [tf setBezeled:NO] ;
  [tf setBordered:NO] ;
  [tf setDrawsBackground:NO] ;
  [tf setEditable:NO] ;
  [tf setFont:[NSFont boldSystemFontOfSize:0.0]] ;
  [[panel contentView] addSubview:tf] ;
  macroReleaseSetToNil (tf) ;
  [NSApp
    beginSheet:panel
    modalForWindow:self.windowForSheet
    modalDelegate:nil
    didEndSelector:NULL
    contextInfo:NULL
  ] ;
  [panel display] ;
//--- Fetch all instances of root entity (normally only one !)
  NSManagedObjectContext * moc = self.managedObjectContext ;
  NSEntityDescription * rootEntity = self.rootObject.entity ;
  NSFetchRequest * fr = [[NSFetchRequest alloc] init] ;
  [fr setEntity:rootEntity] ;
  NSError * error = nil ;
  NSArray * allInstancesOfRootEntity = [moc executeFetchRequest:fr error:& error] ;
  macroReleaseSetToNil (fr) ;
  const NSUInteger n = [allInstancesOfRootEntity count] ;
  BOOL ok = YES ;
  if (error != nil) {
    ok = NO ;
    [panel orderOut:nil] ; [NSApp endSheet:panel] ; panel = nil ;
    [self.managedObjectContext processPendingChanges] ;
    NSAlert * alert = [NSAlert alertWithError:error] ;
    [alert runModal] ;
  }else if (n != 1) {
    ok = NO ;
    [panel orderOut:nil] ; [NSApp endSheet:panel] ; panel = nil ;
    [self.managedObjectContext processPendingChanges] ;
    NSAlert * alert = [NSAlert
      alertWithMessageText:@"Object Graph Error"
      defaultButton:@"Ok"
      alternateButton:nil
      otherButton:nil
      informativeTextWithFormat:@"There %s %lu instance%s of root entity. Normally, there is exactly one instance of root entity.",
        (n > 1) ? "are" : "is", n, (n > 1) ? "s" : ""
    ] ;
    [alert beginSheetModalForWindow:self.windowForSheet modalDelegate:nil didEndSelector:NULL contextInfo:NULL] ;
  }
  if (ok) {
  //--- Get Registered Objects
    NSSet * registeredObjects = [moc registeredObjects] ;
  //--- Find reachable objects from root entity
    NSMutableSet * reachableObjects = [NSMutableSet setWithCapacity:[registeredObjects count]] ;
    [self recursiveSearch:reachableObjects withObject:[allInstancesOfRootEntity objectAtIndex:0]] ;
    NSEnumerator * enumerator = [reachableObjects objectEnumerator] ;
    NSManagedObject * object ;
    NSUInteger correctedErrors = 0 ;
    NSUInteger fatalErrors = 0 ;
    while ((object = enumerator.nextObject)) {
      [self checkObjectRelationShips:object correctedError: & correctedErrors fatalErrors: & fatalErrors] ;
    }
    if ((correctedErrors != 0) || (fatalErrors != 0)) {
      [panel orderOut:nil] ; [NSApp endSheet:panel] ; panel = nil ;
      [self.managedObjectContext processPendingChanges] ;
      NSAlert * alert = [NSAlert
        alertWithMessageText:@"Object Graph Relationship Error"
        defaultButton:@"Ok"
        alternateButton:nil
        otherButton:nil
        informativeTextWithFormat:@"%lu object relationship%s been corrected, "
          "%lu object relationship%s cannot be corrected.",
          correctedErrors,
          (correctedErrors > 1) ? "s have" : " has",
          fatalErrors,
          (fatalErrors > 1) ? "s" : ""
      ] ;
      [alert
        beginSheetModalForWindow:self.windowForSheet
        modalDelegate:nil
        didEndSelector:NULL
        contextInfo:NULL
      ] ;
    }
  }
  if (ok) {
    if (panel != nil) {
      [panel orderOut:nil] ; [NSApp endSheet:panel] ;
    }
    [self.managedObjectContext processPendingChanges] ;
  }
}

//---------------------------------------------------------------------------*

#pragma mark Object Explorer Window

//---------------------------------------------------------------------------*
//                                                                           *
//                        showObjectExplorerWindow:                          *
//                                                                           *
//---------------------------------------------------------------------------*

- (void) showObjectExplorerWindow: (id) inUnusedSender {
  #ifdef PM_COCOA_DEBUG
    [self.rootObject showExplorerWindow] ;
  #endif
}

//---------------------------------------------------------------------------*

#pragma mark Toolbar

//---------------------------------------------------------------------------*

- (IBAction) setToolbarDisplaySizeAction: (id) inSender {
  NSToolbar * toolbar = [self.windowForSheet toolbar] ;
  NSToolbarSizeMode sizeMode = [toolbar sizeMode] ;
  [toolbar setSizeMode: (sizeMode == NSToolbarSizeModeRegular)
    ? NSToolbarSizeModeSmall
    : NSToolbarSizeModeRegular
  ] ;
}

//---------------------------------------------------------------------------*

- (IBAction) setToolbarDisplayModeAction: (id) inSender {
  NSToolbar * toolbar = [self.windowForSheet toolbar] ;
  NSToolbarDisplayMode displayMode = [toolbar displayMode] ;
  [toolbar setDisplayMode: (displayMode == NSToolbarDisplayModeIconOnly)
    ? NSToolbarDisplayModeIconAndLabel
    : NSToolbarDisplayModeIconOnly
  ] ;
}

//---------------------------------------------------------------------------*

- (BOOL) validateMenuItem: (NSMenuItem *) inMenuItem {
  NSToolbar * toolbar = [self.windowForSheet toolbar] ;
  BOOL validates = NO ;
  SEL sel = [inMenuItem action] ;
  if (sel == @selector (setToolbarDisplaySizeAction:)) {
    validates = toolbar != nil ;
    if (toolbar == nil) {
      [inMenuItem setState:NSOffState] ;
    }else if ([toolbar sizeMode] == NSToolbarSizeModeSmall) {
      [inMenuItem setState:NSOnState] ;
    }else{
      [inMenuItem setState:NSOffState] ;
    }
  }else if (sel == @selector (setToolbarDisplayModeAction:)) {
    validates = toolbar != nil ;
    if (toolbar == nil) {
      [inMenuItem setState:NSOffState] ;
    }else if ([toolbar displayMode] == NSToolbarDisplayModeIconAndLabel) {
      [inMenuItem setState:NSOnState] ;
    }else{
      [inMenuItem setState:NSOffState] ;
    }
  }else{
    validates = [super validateMenuItem:inMenuItem] ;
  }
  return validates ;
}

//---------------------------------------------------------------------------*

#pragma mark Get Root Object (abstract method)

//---------------------------------------------------------------------------*

- (NSManagedObject *) rootObject {
  NSLog (@"%s is an abstract method; it must be overriden", __PRETTY_FUNCTION__) ;
  return nil ;
}

//---------------------------------------------------------------------------*

@end

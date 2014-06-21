//
//  PMManagedDocument.m
//  essai
//
//  Created by Pierre Molinaro on 28/06/13.
//  Copyright (c) 2013 ECN / IRCCyN. All rights reserved.
//
//-----------------------------------------------------------------------------*

import Cocoa

//---------------------------------------------------------------------------*


enum PMDocumentCompressionEnum : UInt {
  case PMDocumentNoCompression
  case PMDocumentBZ2Compression
  case PMDocumentZLIBCompression
}

//---------------------------------------------------------------------------*

class PMManagedDocument : NSDocument {
  var mEntityManager : PMEntityManager ;
  var mRootObject : PMManagedEntity? ;
//  var mReadMetadataStatus : UInt8 ;
//  var mReadMetadataDictionary : NSDictionary ;

  //-----------------------------------------------------------------------------*
  //    init                                                                     *
  //-----------------------------------------------------------------------------*

  init () {
    var um = PMUndoManager ()
    mEntityManager = PMEntityManager (undoManager:um)
    super.init ()
    noteObjectAllocation (self)
    setUndoManager (um)
    hookOfInit () ;
    um.disableUndoRegistration ()
    mRootObject = mEntityManager.newInstanceOfEntity (rootEntityClass ())
    hookOfNewDocumentCreation ()
    um.enableUndoRegistration ()
  }

  //-----------------------------------------------------------------------------*
  //    deinit                                                                   *
  //-----------------------------------------------------------------------------*

  deinit {
    noteObjectDeallocation (self)
  }

  //-----------------------------------------------------------------------------*
  //    hookOfInit                                                               *
  //-----------------------------------------------------------------------------*

  func hookOfInit () {
  }

  //-----------------------------------------------------------------------------*
  //    hookOfNewDocumentCreation                                                *
  //-----------------------------------------------------------------------------*

  func hookOfNewDocumentCreation () {
  }

  //-----------------------------------------------------------------------------*
  //    rootEntityClass                                                          *
  //-----------------------------------------------------------------------------*

  func rootEntityClass () -> PMEntityFactory {
    return PMEntityFactory.kMyRootEntity
  }

  //-----------------------------------------------------------------------------*
  //    entityManager                                                            *
  //-----------------------------------------------------------------------------*

  func entityManager () -> PMEntityManager {
    return mEntityManager
  }

  //-----------------------------------------------------------------------------*
  //    windowControllerDidLoadNib:                                              *
  //-----------------------------------------------------------------------------*

/*  - (void) windowControllerDidLoadNib: (NSWindowController *) inWindowController {
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
        menuItem = [[NSMenuItem alloc]
          initWithTitle:@"Check Relationships"
          action:@selector (checkRelationships:)
          keyEquivalent:@""
        ] ;
        macroAddItemToDebugMenu (menuItem) ;
        macroReleaseSetToNil (menuItem) ;
        menuItem = [[NSMenuItem alloc]
          initWithTitle:@"Check All Objects are Reachable"
          action:@selector (checkEntityReachability:)
          keyEquivalent:@""
        ] ;
        macroAddItemToDebugMenu (menuItem) ;
        macroReleaseSetToNil (menuItem) ;
      }
    //-------------- Check relationships
      NSUserDefaultsController * sudc = [NSUserDefaultsController sharedUserDefaultsController] ;
      const BOOL check = [[[sudc values] value_for_key:@"checkDocumentRelationships"] boolValue] ;
      if (check) {
        [self.windowForSheet makeKeyAndOrderFront:nil] ;
        [self checkRelationships:nil] ;
      }
    #endif
  } */

  //-----------------------------------------------------------------------------*
  //   removeWindowController:                                                   *
  //-----------------------------------------------------------------------------*

/*  - (void) removeWindowController: (NSWindowController *) inWindowController {
    [self.undoManager disableUndoRegistration] ;
    [mEntityManager resetBeforeDeletion] ;
    [self.undoManager enableUndoRegistration] ;
    [self.undoManager removeAllActions] ;
    [super removeWindowController:inWindowController] ;
  } */




}

//---------------------------------------------------------------------------*

/*

#import <Cocoa/Cocoa.h>

//---------------------------------------------------------------------------*

@class PMManagedEntity ;
@class PMEntityManager ;

//---------------------------------------------------------------------------*

typedef enum : NSUInteger {
  PMDocumentNoCompression,
  PMDocumentBZ2Compression,
  PMDocumentZLIBCompression
} PMDocumentCompressionEnum ;

//---------------------------------------------------------------------------*

@interface PMManagedDocument : NSDocument {
  @private PMEntityManager * mEntityManager ;
  @protected PMManagedEntity * mRootObject ;
  @private UInt8 mReadMetadataStatus ;
  @private NSDictionary * mReadMetadataDictionary ;
}

- (void) hookOfInit ;

- (Class) rootEntityClass ;

- (PMEntityManager *) entityManager ;

- (void) hookOfNewDocumentCreation ;

//--- Methods called during a save operation
- (void) hookOfWillSave ;

- (UInt8) metadataStatusForSaving ; // Returns 0 by default

- (NSDictionary *) metadataDictionaryForSaving ; // Returns an empty dictionary by default

- (PMDocumentCompressionEnum) compressDataOnSaving ; // Default: PMDocumentBZ2Compression

//--- Legacy format helper
@property (atomic)
   PMManagedEntity * (* legacyFormatLoader) (NSData * inData,
                                             PMEntityManager * inManager,
                                             Class inRootEntityClass,
                                             NSError ** outError) ;

//--- Methods that can be called during document's life
- (UInt8) metadataStatusReadFromFile ; // 0 if document has been never saved

- (NSDictionary *) metadataDictionaryReadFromFile ; // nil if document has been never saved

//--- Metadata access
+ (UInt8) statusForFileAtPath: (NSString *) inFilePath
          error: (NSError **) outError ;

+ (NSDictionary *) metadataForFileAtPath: (NSString *) inFilePath
                   status: (UInt8 *) outStatus
                   error: (NSError **) outError ;

@end

*/
//---------------------------------------------------------------------------*


/*
#import "easy-bindings-utilities.h"
#import "PMManagedDocument.h"
#import "PMAllocationDebug.h"
#import "PMEntityManager.h"
#import "PMManagedEntity.h"
#import "NSMutableData+PMWrites.h"
#import "NSData+PMGZcompression.h"
#import "NSData+BZ2compression.h"
#import "PMDataScanner.h"
#import "PMRelationshipDescription.h"
#import "PMUndoManager.h"

//-----------------------------------------------------------------------------*

#ifdef PM_COCOA_DEBUG
  static BOOL gDebugMenuItemsAdded ;
#endif

//-----------------------------------------------------------------------------*

@implementation PMManagedDocument

//-----------------------------------------------------------------------------*

@synthesize legacyFormatLoader ;

//-----------------------------------------------------------------------------*
//    init                                                                     *
//-----------------------------------------------------------------------------*

- (instancetype) init {
  #ifdef EASY_BINDINGS_DEBUG
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  self = [super init] ;
  if (self) {
    PMUndoManager * um = [PMUndoManager new] ;
    self.undoManager = um ;
    macroReleaseSetToNil (um) ;
    mEntityManager = [[PMEntityManager alloc] initWithUndoManager:self.undoManager] ;
    [self hookOfInit] ;
    macroNoteObjectAllocation ;
  }
  return self ;
}

//-----------------------------------------------------------------------------*
//    hookOfInit                                                               *
//-----------------------------------------------------------------------------*

- (void) hookOfInit {
}

//-----------------------------------------------------------------------------*
//    Dealloc                                                                  *
//-----------------------------------------------------------------------------*

- (void) dealloc {
  [mEntityManager resetBeforeDeletion] ;
  macroReleaseSetToNil (mReadMetadataDictionary) ;
  macroReleaseSetToNil (mRootObject) ;
  macroReleaseSetToNil (mEntityManager) ;
  macroNoteObjectDeallocation ;
  macroSuperDealloc ;
}

//-----------------------------------------------------------------------------*

- (instancetype) initWithType: (NSString *) typeName error: (NSError **) outError {
  #ifdef EASY_BINDINGS_DEBUG
    NSLog (@"%s", __PRETTY_FUNCTION__) ;
  #endif
  self = [super initWithType:typeName error:outError] ;
  if (self) {
    [self.undoManager disableUndoRegistration] ;
    mRootObject = [mEntityManager newInstanceOfEntity:self.rootEntityClass] ;
    [self hookOfNewDocumentCreation] ;
    [self.undoManager enableUndoRegistration] ;
  }
  return self ;
}

//-----------------------------------------------------------------------------*

- (void) hookOfNewDocumentCreation {
}

//-----------------------------------------------------------------------------*

- (Class) rootEntityClass {
  return NULL ;
}

//-----------------------------------------------------------------------------*

- (PMEntityManager *) entityManager {
  return mEntityManager ;
}

//-----------------------------------------------------------------------------*
//    windowControllerDidLoadNib:                                              *
//-----------------------------------------------------------------------------*

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
      menuItem = [[NSMenuItem alloc]
        initWithTitle:@"Check Relationships"
        action:@selector (checkRelationships:)
        keyEquivalent:@""
      ] ;
      macroAddItemToDebugMenu (menuItem) ;
      macroReleaseSetToNil (menuItem) ;
      menuItem = [[NSMenuItem alloc]
        initWithTitle:@"Check All Objects are Reachable"
        action:@selector (checkEntityReachability:)
        keyEquivalent:@""
      ] ;
      macroAddItemToDebugMenu (menuItem) ;
      macroReleaseSetToNil (menuItem) ;
    }
  //-------------- Check relationships
    NSUserDefaultsController * sudc = [NSUserDefaultsController sharedUserDefaultsController] ;
    const BOOL check = [[[sudc values] value_for_key:@"checkDocumentRelationships"] boolValue] ;
    if (check) {
      [self.windowForSheet makeKeyAndOrderFront:nil] ;
      [self checkRelationships:nil] ;
    }
  #endif
}

//-----------------------------------------------------------------------------*
//   removeWindowController:                                                   *
//-----------------------------------------------------------------------------*

- (void) removeWindowController: (NSWindowController *) inWindowController {
  [self.undoManager disableUndoRegistration] ;
  [mEntityManager resetBeforeDeletion] ;
  [self.undoManager enableUndoRegistration] ;
  [self.undoManager removeAllActions] ;
  [super removeWindowController:inWindowController] ;
}

//-----------------------------------------------------------------------------*

#pragma mark Check Entity Reachability

//-----------------------------------------------------------------------------*
//                                                                             *
//   C H E C K    E N T I T Y   R E A C H A B I L I T Y                        *
//                                                                             *
//-----------------------------------------------------------------------------*

- (IBAction) checkEntityReachability: (id) inSender {
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
  [panel.contentView addSubview:tf] ;
  macroReleaseSetToNil (tf) ;
  [NSApp
    beginSheet:panel
    modalForWindow:self.windowForSheet
    modalDelegate:nil
    didEndSelector:NULL
    contextInfo:NULL
  ] ;
  [panel display] ;
//--- 
  NSSet * unreachableObjects = [mEntityManager uneachableObjectsFromObject:mRootObject] ;
//---
  [panel orderOut:nil] ; [NSApp endSheet:panel] ; panel = nil ;
//---
  const NSUInteger n = unreachableObjects.count ;
  if (n > 0) {
    const NSUInteger rn = mEntityManager.entityCount ;
    const NSUInteger reachableCount = rn - n ;
    NSAlert * alert = [NSAlert
      alertWithMessageText:@"Object Graph Warning"
      defaultButton:@"Do not Delete"
      alternateButton:[NSString stringWithFormat:@"Delete %lu unreachable Object%s", n, (n > 1) ? "s" : ""]
      otherButton:nil
      informativeTextWithFormat:@"There %s %lu registered object%s, "
        " %lu reachable object%s from root object.",
        (rn > 1) ? "are" : "is", rn, (rn > 1) ? "s" : "",
        reachableCount, (reachableCount > 1) ? "s" : ""
    ] ;
    [alert
      beginSheetModalForWindow:self.windowForSheet
      modalDelegate:self
      didEndSelector:@selector (deleteUnreachableObjects:returnCode:contextInfo:)
      contextInfo:ARC_BRIDGE_RETAINED_VOID (unreachableObjects)
    ] ;
  }
}

//-----------------------------------------------------------------------------*

- (void) deleteUnreachableObjects:(NSAlert *) inAlert
         returnCode:(NSInteger) inReturnCode
         contextInfo:(void *) inContextInfo {
  NSSet * objectsToDelete = (ARC_BRIDGE_TRANSFER NSSet *) inContextInfo ;
  macroCheckObject (objectsToDelete, NSSet) ;
  if (inReturnCode == 0) {
    for (PMManagedEntity * object in objectsToDelete) {
      [mEntityManager deleteEntity:object] ;
    }
  }
  macroReleaseSetToNil (objectsToDelete) ;
}

//-----------------------------------------------------------------------------*

#pragma mark Check Relationships

//-----------------------------------------------------------------------------*
//                                                                             *
//   C H E C K    R E L A T I O N S H I P S                                    *
//                                                                             *
//-----------------------------------------------------------------------------*

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
  [panel.contentView addSubview:tf] ;
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
  NSArray * allInstancesOfRootEntity = [mEntityManager allEntitiesKindOfClass:self.rootEntityClass] ;
  const NSUInteger n = allInstancesOfRootEntity.count ;
  BOOL ok = n == 1 ;
  if (! ok) {
    [panel orderOut:nil] ; [NSApp endSheet:panel] ; panel = nil ;
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
  //--- Find reachable objects from root entity
    NSArray * reachableObjects = [mEntityManager reachableObjectsFromObject:mRootObject] ;
    NSUInteger correctedErrors = 0 ;
    NSUInteger fatalErrors = 0 ;
    for (PMManagedEntity * object in reachableObjects) {
      [self
        checkObjectRelationShips:object
        correctedError: & correctedErrors
        fatalErrors: & fatalErrors
      ] ;
    }
    if ((correctedErrors != 0) || (fatalErrors != 0)) {
      [panel orderOut:nil] ; [NSApp endSheet:panel] ; panel = nil ;
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
  if (ok && (panel != nil)) {
    [panel orderOut:nil] ; [NSApp endSheet:panel] ; panel = nil ;
  }
}

//-----------------------------------------------------------------------------*

- (void) checkObjectRelationShips: (PMManagedEntity *) inManagedObject
         correctedError: (NSUInteger *) ioCorrectedErrorsPtr
         fatalErrors: (NSUInteger *) ioFatalErrorsPtr {
  #ifdef EASY_BINDINGS_DEBUG
    NSLog (@"%s, object %p (%@)", __PRETTY_FUNCTION__, inManagedObject, inManagedObject.className) ;
  #endif
//--- Check to one relationships
  NSArray * toOneRelationshipNameArray = [inManagedObject toOneRelationshipDescriptionArray] ;
  for (PMRelationshipDescription * description in [toOneRelationshipNameArray sortedArrayUsingSelector:@selector (compareByRelationshipName:)]) {
    NSString * relationshipName = description.relationshipName ;
    PMManagedEntity * attribute = [inManagedObject valueForKey:relationshipName] ;
    if (description.oppositeRelationshipIsToMany) {  // Opposite is to many
      NSArray * oppositeOfOpposite = [attribute valueForKey:description.oppositeRelationshipName] ;
      if (! [oppositeOfOpposite containsObject:inManagedObject]) {
        (* ioFatalErrorsPtr) ++ ;
      }
    }else{ // Opposite is to one
      PMManagedEntity * oppositeOfOpposite = [attribute valueForKey:description.oppositeRelationshipName] ;
      if (nil == oppositeOfOpposite) {
        [oppositeOfOpposite setValue:attribute forKey:description.oppositeRelationshipName] ;
        (* ioCorrectedErrorsPtr) ++ ;
      }else if (oppositeOfOpposite != inManagedObject) {
        (* ioFatalErrorsPtr) ++ ;
      }    
    }
  }
//--- Check to many relationships
  NSArray * toManyRelationshipNameArray = [inManagedObject toManyRelationshipDescriptionArray] ;
  for (PMRelationshipDescription * description in toManyRelationshipNameArray) {
    NSString * relationshipName = description.relationshipName ;
    NSArray * attribute = [inManagedObject valueForKey:relationshipName] ;
    for (PMManagedEntity * object in attribute) {
      if (description.oppositeRelationshipIsToMany) {  // Opposite is to many
        NSArray * oppositeOfOpposite = [object valueForKey:description.oppositeRelationshipName] ;
        if (! [oppositeOfOpposite containsObject:inManagedObject]) {
          (* ioFatalErrorsPtr) ++ ;
        }
      }else{ // Opposite is to one
        PMManagedEntity * oppositeOfOpposite = [object valueForKey:description.oppositeRelationshipName] ;
        if (nil == oppositeOfOpposite) {
          [object setValue:inManagedObject forKey:description.oppositeRelationshipName] ;
          (* ioCorrectedErrorsPtr) ++ ;
        }else if (oppositeOfOpposite != inManagedObject) {
          (* ioFatalErrorsPtr) ++ ;
        }      
      }    
    }
  }
}

//-----------------------------------------------------------------------------*

#pragma mark Object Explorer Window

//-----------------------------------------------------------------------------*
//                                                                             *
//   showObjectExplorerWindow:                                                 *
//                                                                             *
//-----------------------------------------------------------------------------*

- (void) showObjectExplorerWindow: (id) inUnusedSender {
  #ifdef PM_COCOA_DEBUG
    [mRootObject showExplorerWindow] ;
  #endif
}

//-----------------------------------------------------------------------------*
//  S A V E    T O    D A T A                                                  *
//-----------------------------------------------------------------------------*

#pragma mark Document Saving

//-----------------------------------------------------------------------------*

static const char * kFormatSignature = "PM-BINARY-FORMAT" ;

//-----------------------------------------------------------------------------*

- (NSDictionary *) metadataDictionaryForSaving {
  return [NSDictionary dictionary] ;
}

//-----------------------------------------------------------------------------*

- (UInt8) metadataStatusForSaving {
  return 0 ;
}

//-----------------------------------------------------------------------------*

- (PMDocumentCompressionEnum) compressDataOnSaving {
  return PMDocumentBZ2Compression ;
}

//-----------------------------------------------------------------------------*

- (void) hookOfWillSave {
}

//-----------------------------------------------------------------------------*

- (NSData *) dataOfType: (NSString *) inTypeName
             error:(NSError **) outError {
//---
  [self hookOfWillSave] ;
//--- Add to metadata dictionary the witdth and the height of main window
  NSMutableDictionary * metadataDictionary = self.metadataDictionaryForSaving.mutableCopy ;
  if (nil == metadataDictionary) {
    metadataDictionary = [NSMutableDictionary new] ;
  }
  if (nil != self.windowForSheet) { // Document has been opened in the user interface
    if ((self.windowForSheet.styleMask & NSResizableWindowMask) != 0) { // Only if window is resizable
      const NSSize windowSize = self.windowForSheet.frame.size ;
      [metadataDictionary setObject:[NSNumber numberWithDouble:windowSize.width] forKey:@"PMWindowWidth"] ;
      [metadataDictionary setObject:[NSNumber numberWithDouble:windowSize.height] forKey:@"PMWindowHeight"] ;
    }
  }else{ // Document has not been opened in the user interface, use values read from file, if they exist
    NSDictionary * metadataDictionaryReadFromFile = self.metadataDictionaryReadFromFile ;
    NSNumber * v = [metadataDictionaryReadFromFile objectForKey:@"PMWindowWidth"] ;
    if (nil != v) {
      [metadataDictionary setObject:v forKey:@"PMWindowWidth"] ;
    }
    v = [metadataDictionaryReadFromFile objectForKey:@"PMWindowHeight"] ;
    if (nil != v) {
      [metadataDictionary setObject:v forKey:@"PMWindowHeight"] ;
    }
  }
//---
  NSMutableData * fileData = [NSMutableData new] ;
//--- Append signature
  [fileData appendBytes:kFormatSignature length:strlen (kFormatSignature)] ;
//--- Write status
  [fileData writeByte:[self metadataStatusForSaving] trace:nil] ;
//--- Append metadata dictionary
  NSData * data = [NSPropertyListSerialization
    dataFromPropertyList:metadataDictionary
    format:NSPropertyListBinaryFormat_v1_0
    errorDescription:nil
  ] ;
  macroReleaseSetToNil (metadataDictionary) ;
  [fileData writeByte:1 trace:nil] ;
  [fileData writeAutosizedData:data trace:nil] ;
//--- Append document data
  data = [mEntityManager dataForSavingFromRootObject:mRootObject] ;
  switch ([self compressDataOnSaving]) {
  case PMDocumentBZ2Compression:
    data = [data bz2CompressedDataWithCompressionFactor:9 returnedErrorCode:nil] ;
    [fileData writeByte:5 trace:nil] ;
    [fileData writeAutosizedData:data trace:nil] ;
    break ;
  case PMDocumentZLIBCompression:
    data = [data zlibCompressedDataWithCompressionFactor:9 returnedErrorCode:nil] ;
    [fileData writeByte:7 trace:nil] ;
    [fileData writeAutosizedData:data trace:nil] ;
    break ;
  default:
    [fileData writeByte:6 trace:nil] ;
    [fileData writeAutosizedData:data trace:nil] ;
    break ;
  }
//--- Append final byte
  [fileData writeByte:0 trace:nil] ;
//---
  macroAutorelease (fileData) ;
  return fileData ;
}

//-----------------------------------------------------------------------------*

- (void) showWindows {
  if ((self.windowForSheet.styleMask & NSResizableWindowMask) != 0) { // Only if window is resizable
    NSDictionary * metadataDictionaryReadFromFile = self.metadataDictionaryReadFromFile ;
    NSNumber * windowWidthNumber = [metadataDictionaryReadFromFile objectForKey:@"PMWindowWidth"] ;
    NSNumber * windowHeightNumber = [metadataDictionaryReadFromFile objectForKey:@"PMWindowHeight"] ;
    if ((nil != windowWidthNumber) && (nil != windowHeightNumber)) {
      const NSSize newSize = {windowWidthNumber.doubleValue, windowHeightNumber.doubleValue} ;
      NSRect windowFrame = self.windowForSheet.frame ;
      windowFrame.size = newSize ;
      [self.windowForSheet setFrame:windowFrame display:YES] ;
    }
  }
//---
  [super showWindows] ;
}

//-----------------------------------------------------------------------------*
//  R E A D    F R O M    D A T A                                              *
//-----------------------------------------------------------------------------*

#pragma mark Document loading

//-----------------------------------------------------------------------------*

- (NSDictionary *) metadataDictionaryReadFromFile { // nil if document has been never saved
  NSDictionary * result = mReadMetadataDictionary.copy ;
  macroAutorelease (result) ;
  return result ;
}

//-----------------------------------------------------------------------------*

- (UInt8) metadataStatusReadFromFile {
  return mReadMetadataStatus ;
}

//-----------------------------------------------------------------------------*

- (BOOL) readFromData: (NSData *) inData
         ofType:(NSString *) inTypeName
         error:(NSError **) outError {
  #ifdef EASY_BINDINGS_DEBUG
    NSLog (@"%s '%lu' ofType:'%@'", __PRETTY_FUNCTION__, inData.length, inTypeName) ;
  #endif
  [self.undoManager disableUndoRegistration] ;
//---- Define input data scanner
  PMDataScanner * dataScanner = [PMDataScanner
    scannerWithData:inData
    displayProgressWindowTitle:(inData.length > 30000) ? self.lastComponentOfFileName.stringByDeletingPathExtension : nil
  ] ;
//--- Check Signature
  for (NSUInteger i=0 ; i<strlen (kFormatSignature) ; i++) {
    [dataScanner acceptRequiredByte: (UInt8) kFormatSignature [i] sourceFile:__PRETTY_FUNCTION__] ;
  }
//--- Read Status
  mReadMetadataStatus = [dataScanner parseByte] ;
//--- if ok, check byte is 1
  [dataScanner acceptRequiredByte:1 sourceFile:__PRETTY_FUNCTION__] ;
//--- Read dictionary
  NSError * error = nil ;
  NSData * dictionaryData = [dataScanner parseAutosizedData] ;
  if (nil != dictionaryData) {
    mReadMetadataDictionary = [NSPropertyListSerialization
      propertyListWithData:dictionaryData
      options:NSPropertyListImmutable
      format:NULL
      error:& error
    ] ;
    macroRetain (mReadMetadataDictionary) ;
   //  NSLog (@"mReadMetadataDictionary %@", mReadMetadataDictionary) ;
  }
//--- Read dictionary
  BOOL legacyDataWithoutConverterError = NO ;
  if ([dataScanner testAcceptByte:3]) { // Legacy data, not compressed
    NSData * data = [dataScanner parseAutosizedData] ;
    if (NULL == legacyFormatLoader) {
      data = nil ;
      legacyDataWithoutConverterError = YES ;
    }else if (nil != data) {
      mRootObject = legacyFormatLoader (data, self.entityManager, self.rootEntityClass, & error) ;
    }
  }else if ([dataScanner testAcceptByte:4]) { // Legacy data, ZLIB Compressed
    NSData * compressedData = [dataScanner parseAutosizedData] ;
    NSData * data = nil ;
    if (nil != compressedData) {
       data = [compressedData zlibDecompressedDataWithEstimedExpansion:10 returnedErrorCode:nil] ;
    }
    if (NULL == legacyFormatLoader) {
      legacyDataWithoutConverterError = YES ;
      data = nil ;
    }else if (nil != data) {
      mRootObject = legacyFormatLoader (data, self.entityManager, self.rootEntityClass, & error) ;
    }
  }else if ([dataScanner testAcceptByte:2]) { // Legacy data, BZ2 compressed
    NSData * compressedData = [dataScanner parseAutosizedData] ;
    NSData * data = nil ;
    if (nil != compressedData) {
      data = [compressedData bz2DecompressedDataWithEstimedExpansion:10 returnedErrorCode:nil] ;
    }
    if (NULL == legacyFormatLoader) {
      legacyDataWithoutConverterError = YES ;
      data = nil ;
    }else if (nil != data) {
      mRootObject = legacyFormatLoader (data, self.entityManager, self.rootEntityClass, & error) ;
    }
  }else if ([dataScanner testAcceptByte:6]) { // Not compressed
    NSData * data = [dataScanner parseAutosizedData] ;
    if (nil != data) {
      mRootObject = [mEntityManager readFromData:data withRootEntityClass:self.rootEntityClass] ;
      macroRetain (mRootObject) ;
    }
  }else if ([dataScanner testAcceptByte:7]) { // ZLIB Compressed
    NSData * compressedData = [dataScanner parseAutosizedData] ;
    if (nil != compressedData) {
      NSData * data = [compressedData zlibDecompressedDataWithEstimedExpansion:10 returnedErrorCode:nil] ;
      mRootObject = [mEntityManager readFromData:data withRootEntityClass:self.rootEntityClass] ;
      macroRetain (mRootObject) ;
    }
  }else{
    [dataScanner acceptRequiredByte:5 sourceFile:__PRETTY_FUNCTION__] ; // BZ2 compressed
    NSData * compressedData = [dataScanner parseAutosizedData] ;
    if (nil != compressedData) {
      NSData * data = [compressedData bz2DecompressedDataWithEstimedExpansion:10 returnedErrorCode:nil] ;
      mRootObject = [mEntityManager readFromData:data withRootEntityClass:self.rootEntityClass] ;
      macroRetain (mRootObject) ;
    }
  }
//--- if ok, check final byte (0)
  [dataScanner acceptRequiredByte:0 sourceFile:__PRETTY_FUNCTION__] ;
//--- Scanner error ?
  if (! [dataScanner ok]) {
    NSDictionary * dictionary = [NSDictionary dictionaryWithObjectsAndKeys:
      @"Cannot Open Document",  NSLocalizedDescriptionKey,
      @"The file has an invalid format",  NSLocalizedRecoverySuggestionErrorKey,
      nil
    ] ;
    error = [[NSError alloc]
      initWithDomain:[NSBundle mainBundle].bundleIdentifier
      code:1
      userInfo:dictionary
    ] ;
  }
//---
  [dataScanner orderOutProgressWindow] ;
  dataScanner = nil ;
//---
  if (legacyDataWithoutConverterError) {
    NSDictionary * dictionary = [NSDictionary dictionaryWithObjectsAndKeys:
      @"Cannot Open Document",  NSLocalizedDescriptionKey,
      @"Legacy data, no helper function",  NSLocalizedRecoverySuggestionErrorKey,
      nil
    ] ;
    macroReleaseSetToNil (error) ;
    error = [[NSError alloc]
      initWithDomain:[NSBundle mainBundle].bundleIdentifier
      code:1
      userInfo:dictionary
    ] ;
  }
//---
  if ((error == nil) && (mRootObject == nil)) {
    NSDictionary * dictionary = [NSDictionary dictionaryWithObjectsAndKeys:
      @"Cannot Open Document",  NSLocalizedDescriptionKey,
      @"Root object cannot be read",  NSLocalizedRecoverySuggestionErrorKey,
      nil
    ] ;
    macroReleaseSetToNil (error) ;
    error = [[NSError alloc]
      initWithDomain:[NSBundle mainBundle].bundleIdentifier
      code:1
      userInfo:dictionary
    ] ;
  }
//---
  if (NULL != outError) {
    * outError = error ;
  }
  [self.undoManager enableUndoRegistration] ;
//---
  const BOOL result = nil == error  ;
  macroReleaseSetToNil (error) ;
  return result;
}

//-----------------------------------------------------------------------------*
//  M E T A D A T A    A C C E S S                                             *
//-----------------------------------------------------------------------------*

#pragma mark Metadata access

//-----------------------------------------------------------------------------*

+ (BOOL) badFormatErrorForFileAtPath: (NSString *) inFilePath
         error: (NSError **) outError {
  NSDictionary * dictionary = [NSDictionary dictionaryWithObjectsAndKeys:
    [NSString stringWithFormat:@"Cannot read '%@' file", inFilePath],  NSLocalizedDescriptionKey,
    @"File does have the required format",  NSLocalizedRecoverySuggestionErrorKey,
    nil
  ] ;
  NSError * error = [[NSError alloc]
    initWithDomain:[NSBundle mainBundle].bundleIdentifier
    code:1
    userInfo:dictionary
  ] ;
  if (nil != outError) {
    * outError = error ;
  }
  macroReleaseSetToNil (error) ;
  return NO ;
}

//-----------------------------------------------------------------------------*

+ (UInt8) statusForFileAtPath: (NSString *) inFilePath
          error: (NSError **) outError {
//--- Open file
  NSError * error = nil ;
  NSFileHandle * f = [NSFileHandle
    fileHandleForReadingFromURL:[NSURL fileURLWithPath:inFilePath]
    error: & error
  ] ;
//--- Read format string
  if (nil == error) {
    NSData * formatStringData = [f readDataOfLength:strlen (kFormatSignature)] ;
    if ([formatStringData length] != strlen (kFormatSignature)) {
      [self badFormatErrorForFileAtPath:inFilePath error: & error] ;
    }else{
      UInt8 * bytes = (UInt8 *) [formatStringData bytes] ;
      if (memcmp (bytes, kFormatSignature, strlen (kFormatSignature)) != 0) {
        [self badFormatErrorForFileAtPath:inFilePath error: & error] ;
      }
    }
  }
//--- Read status
  UInt8 status = 0 ;
  if (nil == error) {
    NSData * statusData = [f readDataOfLength:1] ;
    if ([statusData length] != 1) {
      [self badFormatErrorForFileAtPath:inFilePath error: & error] ;
    }else{
      [statusData getBytes: & status length:1] ;
    }
  }
//---  
  [f closeFile] ;
//---
  if (NULL != outError) {
    * outError = error ;
  }
//---
  return status ;
}

//-----------------------------------------------------------------------------*

static UInt8 readByte (NSFileHandle * inFileHandle, NSString * inFilePath, NSError ** outError) {
  UInt8 byte = 0 ;
  NSError * error = nil ;
  NSData * byteData = [inFileHandle readDataOfLength:1] ;
  if ([byteData length] != 1) {
    [PMManagedDocument badFormatErrorForFileAtPath:inFilePath error: & error] ;
  }else{
    [byteData getBytes: & byte length:1] ;
  }
//---
  if (NULL != outError) {
    * outError = error ;
  }
  return byte ;
}

//-----------------------------------------------------------------------------*

static NSUInteger readAutosizedUnsignedIntegerAtIndex (NSFileHandle * inFileHandle, NSString * inFilePath, NSError ** outError) {
  NSUInteger result = 0 ;
  NSUInteger shift = 0 ;
  NSError * error = nil ;
  BOOL done = NO ;
  do{
    const UInt8 byte = readByte (inFileHandle, inFilePath, & error) ;
    const NSUInteger w = byte & 0x7FU ;
    result |= w << shift ;
    shift += 7 ;
    done = (byte & 0x80) == 0 ;
  }while ((nil == error) && ! done) ;
//---
  if (NULL != outError) {
    * outError = error ;
  }
  return result ;
}

//-----------------------------------------------------------------------------*

static NSData * readAutosizedDataAtIndex (NSFileHandle * inFileHandle, NSString * inFilePath, NSError ** outError) {
  NSError * error = nil ;
  const NSUInteger dataLength = readAutosizedUnsignedIntegerAtIndex (inFileHandle, inFilePath, & error) ;
//---
  NSData * result = nil ;
  if (nil == error) {
    result = [inFileHandle readDataOfLength:dataLength] ;
  }
//---
  if (NULL != outError) {
    * outError = error ;
  }
//---
  return result ;
}

//-----------------------------------------------------------------------------*

+ (NSDictionary *) metadataForFileAtPath: (NSString *) inFilePath
                   status: (UInt8 *) outStatus
                   error: (NSError **) outError {
//--- Open file
  NSError * error = nil ;
  NSFileHandle * f = [NSFileHandle
    fileHandleForReadingFromURL:[NSURL fileURLWithPath:inFilePath]
    error: & error
  ] ;
//--- Read format string
  if (nil == error) {
    NSData * formatStringData = [f readDataOfLength:strlen (kFormatSignature)] ;
    if ([formatStringData length] != strlen (kFormatSignature)) {
      [self badFormatErrorForFileAtPath:inFilePath error: & error] ;
    }else{
      UInt8 * bytes = (UInt8 *) [formatStringData bytes] ;
      if (memcmp (bytes, kFormatSignature, strlen (kFormatSignature)) != 0) {
        [self badFormatErrorForFileAtPath:inFilePath error: & error] ;
      }
    }
  }
//--- Read status
  if (nil == error) {
    const UInt8 status = readByte (f, inFilePath, & error) ;
    if (NULL != outStatus) {
      * outStatus = status ;
    }
  }
//--- Check byte is 1
  if (nil == error) {
    const UInt8 byte = readByte (f, inFilePath, & error) ;
    if ((nil == error) && (1 != byte)) {
      [self badFormatErrorForFileAtPath:inFilePath error: & error] ;
    }
  }
//--- Read metadata dictionary
  NSData * dictionaryData = nil ;
  if (nil == error) {
    dictionaryData = readAutosizedDataAtIndex (f, inFilePath, & error) ;
  }
  NSDictionary * metadataDictionaryForSaving  = nil ;
  if (nil == error) {
    metadataDictionaryForSaving = [NSPropertyListSerialization
      propertyListWithData:dictionaryData
      options:NSPropertyListImmutable
      format:NULL
      error:nil
    ] ;
  }
//---  
  [f closeFile] ;
//---
  if (NULL != outError) {
    * outError = error ;
  }
//---
  return metadataDictionaryForSaving ;
}

//-----------------------------------------------------------------------------*

@end


*/

//
//  PMManagedObject.m
//
//  Created by Pierre Molinaro on 02/11/07.
//  Copyright 2007 __MyCompanyName__. All rights reserved.
//

#import "PMManagedObject.h"
#import "PMAllocationDebug.h"
#import "easy-bindings-utilities.h"

//#define EASY_BINDINGS_DEBUG

//---------------------------------------------------------------------------*
//   Signature routines                                                      *
//---------------------------------------------------------------------------*

NSInteger computeIntSignature (const NSInteger inSignature,
                               const NSInteger inValue) {
  NSInteger result = inSignature ;
  NSInteger negative = inSignature < 0 ;
  result <<= 1 ;
  result |= negative ;
  result ^= inValue ;
  return result ;  
}

//---------------------------------------------------------------------------*

NSInteger computeStringSignature (const NSInteger inSignature,
                                  NSString * inValue) {
  NSInteger result = inSignature ;
  for (NSUInteger i=0 ; i<inValue.length ; i++) {
    result = computeIntSignature (result, [inValue characterAtIndex:i]) ;
  }
  return result ;  
}

//---------------------------------------------------------------------------*

NSInteger computeToOnePropertySignature (const NSInteger inSignature,
                                         PMManagedObject * inToOnePropertyValue) {
  return computeIntSignature (inSignature, inToOnePropertyValue.computeSignature) ;
}

//---------------------------------------------------------------------------*

NSInteger computeToManyPropertySignature (const NSInteger inSignature,
                                          NSSet * inToManyPropertyValue) {
  NSInteger result = inSignature ;
  for (PMManagedObject * object in [inToManyPropertyValue.allObjects sortedArrayUsingSelector:@selector(compareByCreationIndex:)]) {
    result = computeIntSignature (result, object.computeSignature) ;
  }
  return result ;
}

//---------------------------------------------------------------------------*
//   PMManagedObject                                                         *
//---------------------------------------------------------------------------*

#ifdef PM_COCOA_DEBUG
  static NSUInteger gExplorerNextObjectIndex ;
#endif
static NSUInteger gObjectCreationIndex ;

//---------------------------------------------------------------------------*

@implementation PMManagedObject

//----------------------------------------------------------------------------*

@synthesize mObjectCreationIndex ;

//----------------------------------------------------------------------------*
//    initWithEntity:insertIntoManagedObjectContext:                          *
//----------------------------------------------------------------------------*

- (id) initWithEntity:(NSEntityDescription *) inEntity
       insertIntoManagedObjectContext:(NSManagedObjectContext *) inManagedObjectContext {
  self = [super 
    initWithEntity:inEntity
    insertIntoManagedObjectContext:inManagedObjectContext
  ] ;
  if (self) {
    mObjectCreationIndex = gObjectCreationIndex ;
    gObjectCreationIndex ++ ;
    macroNoteObjectAllocation ;
  //--- Add Transient observers
  }
  return self ;
}

//----------------------------------------------------------------------------*
//    Dealloc                                                                 *
//----------------------------------------------------------------------------*

- (void) dealloc {
  macroNoteObjectDeallocation ;
  macroSuperDealloc ;
}

//----------------------------------------------------------------------------*
//    compareByCreationIndex:                                                 *
//----------------------------------------------------------------------------*

- (NSComparisonResult) compareByCreationIndex: (PMManagedObject *) inOtherObject {
  NSComparisonResult result = NSOrderedSame ;
  if (mObjectCreationIndex < inOtherObject.mObjectCreationIndex) {
    result = NSOrderedAscending ;
  }else if (mObjectCreationIndex > inOtherObject.mObjectCreationIndex) {
    result = NSOrderedDescending ;
  }
  return result ;
}

//----------------------------------------------------------------------------*
//    computeSignature                                                        *
//----------------------------------------------------------------------------*

- (NSInteger) computeSignature {
  return 0 ;
}

//---------------------------------------------------------------------------*

#pragma mark Explorer Window

//---------------------------------------------------------------------------*

#ifdef PM_COCOA_DEBUG
  - (NSUInteger) explorerObjectIndex {
    if (0 == mExplorerObjectIndex) {
      gExplorerNextObjectIndex ++ ;
      mExplorerObjectIndex = gExplorerNextObjectIndex ;
    }
    return mExplorerObjectIndex ;
  }
#endif

//---------------------------------------------------------------------------*

#ifdef PM_COCOA_DEBUG
  + (void) appendObject: (PMManagedObject *) inObject
           toButton: (NSPopUpButton *) inButton
           forContext: (NSManagedObjectContext *) inManagedObjectContext {
    const NSUInteger objectIndex = inObject.explorerObjectIndex ;
    NSManagedObjectContext * objectMOC = [inObject managedObjectContext] ;
    NSString * outsideString = (objectMOC == inManagedObjectContext) ? @"" : @" [OUTSIDE MOC]" ;
    NSString * stringValue = [NSString stringWithFormat:@"#%ld (%@)%@ %p", objectIndex, [[inObject entity] name], outsideString, inObject] ;
    [inButton addItemWithTitle:stringValue] ;
    NSMenuItem * item = [inButton lastItem] ;
    [item setTarget:inObject] ;
    [item setAction:@selector (showObjectWindowFromSenderTagAction:)] ;
  }
#endif

//---------------------------------------------------------------------------*

#ifdef PM_COCOA_DEBUG
- (void) updateChangedProperties {
  NSArray * changedProperties = [[self changedValues] allKeys] ;
  [mChangedPropertyTextField setEnabled:NO] ;
  NSString * title = @"No changed property" ;
  if ([changedProperties count] == 1) {
    title = @"1 changed property" ;
  }else if ([changedProperties count] > 1) {
    title = [NSString stringWithFormat:@"%lu changed properties", [changedProperties count]] ;
  }
  [mChangedPropertyTextField setStringValue:title] ;
  [mChangedPropertyTextField setToolTip:[changedProperties componentsJoinedByString:@" "]] ;
}
#endif

//---------------------------------------------------------------------------*

#ifdef PM_COCOA_DEBUG
- (void) didSave {
  [super didSave] ;
  [self updateChangedProperties] ;
}
#endif

//---------------------------------------------------------------------------*

#ifdef PM_COCOA_DEBUG
- (void) didTurnIntoFault {
  [super didTurnIntoFault] ;
  [self clearContextExplorer] ;
}
#endif

//---------------------------------------------------------------------------*

#ifdef PM_COCOA_DEBUG
  - (void) updateDisplayForKey: (NSString *) inKey {
    [self updateChangedProperties] ;
    NSPropertyDescription * property = [self.entity.propertiesByName valueForKey:inKey] ;
    if ([property isKindOfClass:[NSAttributeDescription class]]) {
      NSString * stringValue = [[self valueForKey:inKey] description] ;
      NSTextField * tf = [mAttributeViewDictionary objectForKey:inKey] ;
      [tf setStringValue:(stringValue == nil) ? @"" : stringValue] ;
      [tf setToolTip:(stringValue == nil) ? @"" : stringValue] ;
    }else if ([property isKindOfClass:[NSRelationshipDescription class]]) {
      NSRelationshipDescription * rsd = (NSRelationshipDescription *) property ;
      const BOOL isToMany = [rsd isToMany] ;
      if (isToMany) {
        NSSet * objectSet = [self valueForKey:inKey] ;
        NSString * title ;
        if ([objectSet count] == 0) {
          title = @"No Object" ;
        }else if ([objectSet count] == 1) {
          title = @"1 Object" ;
        }else{
          title = [NSString stringWithFormat:@"%lu objects", [objectSet count]] ;
        }
        NSPopUpButton * bt = [mAttributeViewDictionary objectForKey:inKey] ;
        [bt removeAllItems] ;
        [bt addItemWithTitle:title] ;
        [bt setEnabled:[objectSet count] > 0] ;
        NSEnumerator * enumerator = [objectSet objectEnumerator] ;
        PMManagedObject * object ;
        while ((object = enumerator.nextObject)) {
          [PMManagedObject appendObject:object toButton:bt forContext:self.managedObjectContext] ;
        }
      }else{
        PMManagedObject * object = [self valueForKey:inKey] ;
        NSManagedObjectContext * objectMOC = [object managedObjectContext] ;
        NSString * outsideString = (objectMOC == self.managedObjectContext) ? @"" : @" [OUTSIDE MOC]" ;
        NSString * stringValue = @"nil" ;
        if (nil != object) {
          const NSUInteger objectIndex = object.explorerObjectIndex ;
          stringValue = [NSString stringWithFormat:@"#%ld (%@)%@ %p", objectIndex, object.entity.name, outsideString, object] ;
        }
        NSButton * bt = [mAttributeViewDictionary objectForKey:inKey] ;
        [bt setEnabled:object != nil] ;
        [bt setTitle:stringValue] ;
        [bt setToolTip:stringValue] ;
        [bt setTarget:object] ;
        [bt setAction:@selector (showObjectWindowFromSenderTagAction:)] ;
      }
    }
  }
#endif

//---------------------------------------------------------------------------*

#ifdef PM_COCOA_DEBUG
  static NSRect secondColumn (NSRect inRect) {
    NSRect r = inRect ;
    r.origin.x += inRect.size.width + 2.0 ;
    return r ;
  }
#endif

//---------------------------------------------------------------------------*

#ifdef PM_COCOA_DEBUG
- (void) createAndPopulateObjectExplorerWindow {
//-------------------------------------------------- Create Window
  const NSRect r = {{20.0, 20.0}, {10.0, 10.0}} ;
  mExplorerWindow = [[NSWindow alloc]
    initWithContentRect:r
    styleMask:NSTitledWindowMask | NSClosableWindowMask
    backing:NSBackingStoreBuffered
    defer:YES
    screen:nil
  ] ;
//-------------------------------------------------- Adding properties
  mAttributeViewDictionary = [NSMutableDictionary new] ;
  NSRect nameRect = {{0.0, 0.0}, {200.0, 22.0}} ;
  NSFont * font = [NSFont boldSystemFontOfSize:[NSFont smallSystemFontSize]] ;
  NSView * view = [[NSView alloc] initWithFrame:nameRect] ;
  for (NSPropertyDescription * property  in self.entity.properties) {
    NSString * propertyName = property.name ;
    NSTextField * tf = [[NSTextField alloc] initWithFrame:nameRect] ;
    [tf setEnabled:NO] ;
    [tf setStringValue:propertyName] ;
    [tf setFont:font] ;
    [view addSubview:tf] ;
    macroReleaseSetToNil (tf) ;
    if ([property isKindOfClass:[NSAttributeDescription class]]) {
      NSTextField * tff = [[NSTextField alloc] initWithFrame:secondColumn (nameRect)] ;
      [tff setEnabled:NO] ;
      [tff setFont:font] ;
      [view addSubview:tff] ;
      [mAttributeViewDictionary setObject:tff forKey:propertyName] ;
      macroReleaseSetToNil (tff) ;
    }else if ([property isKindOfClass:[NSRelationshipDescription class]]) {
      NSRelationshipDescription * rsd = (NSRelationshipDescription *) property ;
      const BOOL isToMany = [rsd isToMany] ;
      if (isToMany) {
        NSPopUpButton * bt = [[NSPopUpButton alloc] initWithFrame:secondColumn (nameRect) pullsDown:YES] ;
        [bt setFont:font] ;
        [view addSubview:bt] ;
        [mAttributeViewDictionary setObject:bt forKey:propertyName] ;
        macroReleaseSetToNil (bt) ;
      }else{
        NSButton * bt = [[NSButton alloc] initWithFrame:secondColumn (nameRect)] ;
        [bt setFont:font] ;
        [view addSubview:bt] ;
        [mAttributeViewDictionary setObject:bt forKey:propertyName] ;
        macroReleaseSetToNil (bt) ;
      }
    }
    [self updateDisplayForKey:propertyName] ;
    nameRect.origin.y += nameRect.size.height ;
  }
//-------------------------------------------------- Object does not validate for insert ?
  NSError * error = nil ;
  BOOL validate = [self validateForInsert:& error] ;
  NSString * faultMessage = validate ? @"Validates for insert" : @"Does not validate for insert" ;
  NSTextField * tf = [[NSTextField alloc] initWithFrame:nameRect] ;
  [tf setEnabled:NO] ;
  [tf setStringValue:faultMessage] ;
  [tf setFont:font] ;
  if (! validate) {
    [tf setTextColor:[NSColor redColor]] ;
    NSString * errorMessage = [error localizedDescription] ;
    NSArray * multipleErrorMessage = [[error userInfo] valueForKey:NSDetailedErrorsKey] ;
    for (NSUInteger i=0 ; i<[multipleErrorMessage count] ; i++) {
      NSError * err = [multipleErrorMessage objectAtIndex:i] ;
      errorMessage = [NSString stringWithFormat:@"%@\n%@", errorMessage, [err localizedDescription]] ;
    }
    [tf setToolTip:errorMessage] ;
  }
  [view addSubview:tf] ;
  macroReleaseSetToNil (tf) ;
//-------------------------------------------------- Object does not validate for delete ?
  validate = [self validateForDelete:& error] ;
  faultMessage = validate ? @"Validates for delete" : @"Does not validate for delete" ;
  tf = [[NSTextField alloc] initWithFrame:secondColumn (nameRect)] ;
  [tf setEnabled:NO] ;
  [tf setStringValue:faultMessage] ;
  [tf setFont:font] ;
  if (! validate) {
    [tf setTextColor:[NSColor redColor]] ;
    NSString * errorMessage = [error localizedDescription] ;
    for (NSError * err in [error.userInfo valueForKey:NSDetailedErrorsKey]) {
      errorMessage = [NSString stringWithFormat:@"%@\n%@", errorMessage, err.localizedDescription] ;
    }
    [tf setToolTip:errorMessage] ;
  }
  [view addSubview:tf] ;
  macroReleaseSetToNil (tf) ;
//-------------------------------------------------- Object does not validate for update ?
  nameRect.origin.y += nameRect.size.height ;
  validate = [self validateForUpdate:& error] ;
  faultMessage = validate ? @"Validates for update" : @"Does not validate for update" ;
  tf = [[NSTextField alloc] initWithFrame:nameRect] ;
  [tf setEnabled:NO] ;
  [tf setStringValue:faultMessage] ;
  [tf setFont:font] ;
  if (! validate) {
    [tf setTextColor:[NSColor redColor]] ;
    NSString * errorMessage = [error localizedDescription] ;
    NSArray * multipleErrorMessage = [[error userInfo] valueForKey:NSDetailedErrorsKey] ;
    for (NSUInteger i=0 ; i<[multipleErrorMessage count] ; i++) {
      NSError * err = [multipleErrorMessage objectAtIndex:i] ;
      errorMessage = [NSString stringWithFormat:@"%@\n%@", errorMessage, [err localizedDescription]] ;
    }
    [tf setToolTip:errorMessage] ;
  }
  [view addSubview:tf] ;
  macroReleaseSetToNil (tf) ;
//-------------------------------------------------- Changed properties
  mChangedPropertyTextField = [[NSTextField alloc] initWithFrame:secondColumn (nameRect)] ;
  [mChangedPropertyTextField setFont:font] ;
  [view addSubview:mChangedPropertyTextField] ;
  [self updateChangedProperties] ;
//-------------------------------------------------- Finish Window construction
//--- Resize View
  const NSRect rr = secondColumn (nameRect) ;
  [view setFrame:NSMakeRect (0.0, 0.0, NSMaxX (rr), NSMaxY (rr))] ;
//--- Set content size
  [mExplorerWindow setContentSize:NSMakeSize (NSMaxX (nameRect) * 2.0 + 4.0 + 16.0, fmin (600.0, NSMaxY (nameRect)))] ;
//--- Set close button as 'remove window' button
  NSButton * closeButton = [mExplorerWindow standardWindowButton:NSWindowCloseButton] ;
  [closeButton setTarget:self] ;
  [closeButton setAction:@selector (deleteWindowAction:)] ;
//--- Set window title
  const NSUInteger objectIndex = self.explorerObjectIndex ;
  NSString * windowTitle = [NSString stringWithFormat:@"#%ld (%@) at 0x%llX", objectIndex, [[self entity] name], (UInt64) self] ;
  [mExplorerWindow setTitle:windowTitle] ;
//--- Add Scroll view
  const NSRect frame = {{0.0, 0.0}, {NSMaxX (nameRect) * 2.0 + 4.0, NSMaxY (nameRect)}} ;
  NSScrollView * sw = [[NSScrollView alloc] initWithFrame:frame] ;
  [sw setHasVerticalScroller:YES] ;
  [sw setDocumentView:view] ;
  macroReleaseSetToNil (view) ;
  [mExplorerWindow setContentView:sw] ;
  macroReleaseSetToNil (sw) ;
}
#endif

//---------------------------------------------------------------------------*

#ifdef PM_COCOA_DEBUG
  - (void) deleteWindowAction: (id) inSender {
    [self clearContextExplorer] ;
  }
#endif

//---------------------------------------------------------------------------*

#ifdef PM_COCOA_DEBUG
  - (void) showExplorerWindow {
    if (mExplorerWindow == nil) {
      [self createAndPopulateObjectExplorerWindow] ;
    }
    [mExplorerWindow makeKeyAndOrderFront:nil] ;
  }
#endif

//---------------------------------------------------------------------------*

#ifdef PM_COCOA_DEBUG
  - (void) showObjectWindowFromSenderTagAction: (id) inSender {
    [self showExplorerWindow] ;
  }
#endif

//---------------------------------------------------------------------------*

#pragma mark Clear Context Explorer

//---------------------------------------------------------------------------*

#ifdef PM_COCOA_DEBUG
  - (void) clearContextExplorer {
    mAttributeViewDictionary = nil ;

    NSButton * closeButton = [mExplorerWindow standardWindowButton:NSWindowCloseButton] ;
    [closeButton setTarget:nil] ;

    [mExplorerWindow orderOut:nil] ;
    mExplorerWindow = nil ;
  }
#endif

//---------------------------------------------------------------------------*

#pragma mark Attribute did change

//---------------------------------------------------------------------------*

#ifdef PM_COCOA_DEBUG
  - (void) didChangeValueForKey:(NSString *) inKey {
    [super didChangeValueForKey:inKey] ;
    [self updateDisplayForKey:inKey] ;
  }
#endif

//---------------------------------------------------------------------------*

#ifdef PM_COCOA_DEBUG
  - (void) didChangeValueForKey:(NSString *) inKey
           withSetMutation:(NSKeyValueSetMutationKind) inMutationKind
           usingObjects:(NSSet *) inObjects {
    [super
      didChangeValueForKey:inKey
      withSetMutation:inMutationKind
      usingObjects:inObjects
    ] ;
    [self updateDisplayForKey:inKey] ;
  }
#endif

//---------------------------------------------------------------------------*

@end

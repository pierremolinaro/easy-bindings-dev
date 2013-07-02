//
//  PMManagedEntity.m
//  essai
//
//  Created by Pierre Molinaro on 28/06/13.
//  Copyright (c) 2013 ECN / IRCCyN. All rights reserved.
//
//-----------------------------------------------------------------------------*

#import "easy-bindings-utilities.h"
#import "PMAllocationDebug.h"
#import "PMManagedEntity.h"
#import "PMEntityManager.h"
#import "PMRelationshipDescription.h"
#import "PMAttributeDescription.h"

//-----------------------------------------------------------------------------*

NSString * convertBOOLValueToString (NSNumber * inValue) {
  return [inValue boolValue] ? @"YES" : @"NO" ;
}

//-----------------------------------------------------------------------------*

#ifdef PM_COCOA_DEBUG
  static NSUInteger gExplorerObjectIndex ;
#endif

//-----------------------------------------------------------------------------*

@implementation PMManagedEntity

//-----------------------------------------------------------------------------*

@synthesize savingIndex ;

//-----------------------------------------------------------------------------*

- (instancetype) initWithEntityManager: (PMEntityManager *) inEntityManager {
  self = [self init] ;
  if (self) {
    macroAssign (mEntityManager, inEntityManager) ;
    mUndoManager = inEntityManager.undoManager ;
    macroRetain (mUndoManager) ;
    macroNoteObjectAllocation ;
    #ifdef PM_COCOA_DEBUG
      mExplorerObjectIndex = gExplorerObjectIndex ;
      gExplorerObjectIndex ++ ;
    #endif
  }
  return self ;
}

//----------------------------------------------------------------------------*
//    Dealloc                                                                 *
//----------------------------------------------------------------------------*

- (void) dealloc {
  macroReleaseSetToNil (mEntityManager) ;
  macroReleaseSetToNil (mUndoManager) ;
  macroNoteObjectDeallocation ;
  macroSuperDealloc ;
}

//-----------------------------------------------------------------------------*

#ifdef PM_COCOA_DEBUG
  - (NSUInteger) explorerObjectIndex {
    return mExplorerObjectIndex ;
  }
#endif

//-----------------------------------------------------------------------------*

- (PMEntityManager *) entityManager {
  return mEntityManager ;
}

//-----------------------------------------------------------------------------*

- (NSUndoManager *) undoManager {
  return mUndoManager ;
}

//-----------------------------------------------------------------------------*

- (void) setUpWithDefaultValues {
}

//-----------------------------------------------------------------------------*

- (void) buildAttributeDescriptionArray: (NSMutableArray *) ioDescriptionArray {
}

//-----------------------------------------------------------------------------*

- (NSArray *) attributeDescriptionArray {
  NSMutableArray * descriptionArray = [NSMutableArray new] ;
  [self buildAttributeDescriptionArray:descriptionArray] ;
  macroAutorelease (descriptionArray) ;
  return [descriptionArray sortedArrayUsingSelector:@selector (reverseCompareByAttributeName:)] ;
}

//-----------------------------------------------------------------------------*

- (void) buildToOneRelationshipDescriptionArray: (NSMutableArray *) ioDescriptionArray {
}

//-----------------------------------------------------------------------------*

- (NSArray *) toOneRelationshipDescriptionArray {
  NSMutableArray * descriptionArray = [NSMutableArray new] ;
  [self buildToOneRelationshipDescriptionArray:descriptionArray] ;
  macroAutorelease (descriptionArray) ;
  return [descriptionArray sortedArrayUsingSelector:@selector(compareByRelationshipName:)] ;
}

//-----------------------------------------------------------------------------*

- (void) buildToManyRelationshipDescriptionArray: (NSMutableArray *) ioDescriptionArray {
}

//-----------------------------------------------------------------------------*

- (NSArray *) toManyRelationshipDescriptionArray {
  NSMutableArray * descriptionArray = [NSMutableArray new] ;
  [self buildToManyRelationshipDescriptionArray:descriptionArray] ;
  macroAutorelease (descriptionArray) ;
  return [descriptionArray sortedArrayUsingSelector:@selector(compareByRelationshipName:)] ;
}

//-----------------------------------------------------------------------------*

- (void) setUpWithDictionary: (NSDictionary *) inDictionary
         withManagedEntityArray: (NSArray *) inObjectArray {
}

//-----------------------------------------------------------------------------*

- (void) saveIntoDictionary: (NSMutableDictionary *) ioDictionary {
}

//-----------------------------------------------------------------------------*

- (void) setEntityManager: (PMEntityManager *) inManager {
  [mUndoManager
    registerUndoWithTarget:self
    selector: @selector (setEntityManager:)
    object:mEntityManager
  ] ;
  macroAssign (mEntityManager, inManager) ;
}

//-----------------------------------------------------------------------------*

- (void) resetBeforeDeletion {
  [self setEntityManager:nil] ;
  #ifdef PM_COCOA_DEBUG
    [self clearContextExplorer] ;
  #endif
}

//---------------------------------------------------------------------------*
//  S I G N A T U R E                                                        *
//---------------------------------------------------------------------------*

#pragma mark Object Explorer


- (void) addSignatureObserver: (NSObject <PMSignatureObserverProtocol> *) inObserver {
  if (nil == mSignatureObserverSet) {
    mSignatureObserverSet = [NSMutableSet new] ;
  }
  [mSignatureObserverSet addObject:inObserver] ;
  [inObserver triggerSignatureComputing] ;
}

//---------------------------------------------------------------------------*

- (void) removeSignatureObserver: (NSObject <PMSignatureObserverProtocol> *) inObserver {
  [inObserver triggerSignatureComputing] ;
  [mSignatureObserverSet removeObject:inObserver] ;
}

//---------------------------------------------------------------------------*

- (void) triggerSignatureComputing {
  if (mSignatureHasBeenComputed) {
    mSignatureHasBeenComputed = NO ;
    [mSignatureObserverSet makeObjectsPerformSelector:@selector (triggerSignatureComputing)] ;
  }
}

//---------------------------------------------------------------------------*

- (NSInteger) signature {
  if (! mSignatureHasBeenComputed) {
    mSignatureHasBeenComputed = YES ;
    mSignatureCache = self.computeSignature ;
  }
  return mSignatureCache ;
}

//---------------------------------------------------------------------------*

- (NSInteger) computeSignature {
  return 0 ;
}

//---------------------------------------------------------------------------*
//   Signature routines                                                      *
//---------------------------------------------------------------------------*

NSInteger computeIntegerSignature (const NSInteger inSignature,
                                   const NSInteger inValue) {
  NSInteger result = inSignature ;
  NSInteger negative = inSignature < 0 ;
  result <<= 1 ;
  result |= negative ;
  result ^= inValue ;
  return result ;  
}

//---------------------------------------------------------------------------*

NSInteger computeNSStringSignature (const NSInteger inSignature,
                                    NSString * inValue) {
  NSInteger result = inSignature ;
  for (NSUInteger i=0 ; i<inValue.length ; i++) {
    result = computeIntegerSignature (result, [inValue characterAtIndex:i]) ;
  }
  return result ;  
}

//---------------------------------------------------------------------------*

NSInteger computeToOneEntitySignature (const NSInteger inSignature,
                                       PMManagedEntity * inToOnePropertyValue) {
  return computeIntegerSignature (inSignature, inToOnePropertyValue.signature) ;
}

//---------------------------------------------------------------------------*

NSInteger computeToManyEntitySignature (const NSInteger inSignature,
                                        NSArray * inToManyPropertyValue) {
  NSInteger result = inSignature ;
  for (PMManagedEntity * object in inToManyPropertyValue) {
    result = computeIntegerSignature (result, object.signature) ;
  }
  return result ;
}

//---------------------------------------------------------------------------*
//  O B J E C T    E X P L O R E R                                           *
//---------------------------------------------------------------------------*

#pragma mark Object Explorer

//---------------------------------------------------------------------------*

#ifdef PM_COCOA_DEBUG
  - (void) updateAttributeDisplayForDescription: (PMAttributeDescription *) inDescription {
    id value = [self valueForKey:inDescription.attributeName] ;
    NSString * stringValue = nil ;
    if (NULL == inDescription.conversionFunction) {
      stringValue = [value description] ;
    }else{
      stringValue = inDescription.conversionFunction (value) ;
    }
    NSTextField * tf = [mAttributeViewDictionary objectForKey:inDescription.attributeName] ;
    [tf setStringValue:(stringValue == nil) ? @"" : stringValue] ;
    [tf setToolTip:(stringValue == nil) ? @"" : stringValue] ;
  }
#endif

//---------------------------------------------------------------------------*

#ifdef PM_COCOA_DEBUG
  - (void) updateEntityDisplayForKey: (NSString *) inKey {
    PMManagedEntity * object = [self valueForKey:inKey] ;
    NSString * stringValue = @"nil" ;
    if (nil != object) {
      const NSUInteger objectIndex = object.explorerObjectIndex ;
      stringValue = [NSString stringWithFormat:@"#%ld (%@) %p", objectIndex, object.className, object] ;
    }
    NSButton * bt = [mAttributeViewDictionary objectForKey:inKey] ;
    [bt setEnabled:object != nil] ;
    [bt setTitle:stringValue] ;
    [bt setToolTip:stringValue] ;
    [bt setTarget:object] ;
    [bt setAction:@selector (showObjectWindowFromSenderTagAction:)] ;
  }
#endif

//---------------------------------------------------------------------------*

#ifdef PM_COCOA_DEBUG
  - (void) updateEntityArrayDisplayForKey: (NSString *) inKey {
    NSArray * objectArray = [self valueForKey:inKey] ;
    NSString * title = @"No Object" ;
    if (objectArray.count == 1) {
      title = @"1 Object" ;
    }else if (objectArray.count > 1) {
      title = [NSString stringWithFormat:@"%lu objects", objectArray.count] ;
    }
    NSPopUpButton * bt = [mAttributeViewDictionary objectForKey:inKey] ;
    [bt removeAllItems] ;
    [bt addItemWithTitle:title] ;
    [bt setEnabled:objectArray.count > 0] ;
    for (PMManagedEntity * object in objectArray) {
      const NSUInteger objectIndex = object.explorerObjectIndex ;
      NSString * stringValue = [NSString stringWithFormat:@"#%ld (%@) %p", objectIndex, object.className, object] ;
      [bt addItemWithTitle:stringValue] ;
      NSMenuItem * item = [bt lastItem] ;
      [item setTarget:object] ;
      [item setAction:@selector (showObjectWindowFromSenderTagAction:)] ;
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
  NSRect nameRect = {{0.0, 0.0}, {300.0, 22.0}} ;
  NSFont * font = [NSFont boldSystemFontOfSize:[NSFont smallSystemFontSize]] ;
  NSView * view = [[NSView alloc] initWithFrame:nameRect] ;
//-------------------------------------------------- Adding To many relation ships
  NSArray * toManyRelationshipNameArray = [self toManyRelationshipDescriptionArray] ;
  NSMutableArray * relationshipNameArray = [NSMutableArray new] ;
  for (PMRelationshipDescription * description in toManyRelationshipNameArray) {
    [relationshipNameArray addObject:description.relationshipName] ;
    NSTextField * tf = [[NSTextField alloc] initWithFrame:nameRect] ;
    [tf setEnabled:NO] ;
    [tf setStringValue:description.relationshipName] ;
    [tf setFont:font] ;
    [view addSubview:tf] ;
    macroReleaseSetToNil (tf) ;
    NSPopUpButton * bt = [[NSPopUpButton alloc] initWithFrame:secondColumn (nameRect) pullsDown:YES] ;
    [bt setFont:font] ;
    [view addSubview:bt] ;
    [mAttributeViewDictionary setObject:bt forKey:description.relationshipName] ;
    macroReleaseSetToNil (bt) ;
    [self updateEntityArrayDisplayForKey:description.relationshipName] ;
    nameRect.origin.y += nameRect.size.height ;
  }
  mToManyRelationshipSet = [NSSet setWithArray:relationshipNameArray] ;
  macroReleaseSetToNil (relationshipNameArray) ;
  macroRetain (mToManyRelationshipSet) ;
//-------------------------------------------------- Adding To one relation ships
  NSArray * toOneRelationshipNameArray = [self toOneRelationshipDescriptionArray] ;
  relationshipNameArray = [NSMutableArray new] ;
  for (PMRelationshipDescription * description in toOneRelationshipNameArray) {
    [relationshipNameArray addObject:description.relationshipName] ;
    NSTextField * tf = [[NSTextField alloc] initWithFrame:nameRect] ;
    [tf setEnabled:NO] ;
    [tf setStringValue:description.relationshipName] ;
    [tf setFont:font] ;
    [view addSubview:tf] ;
    macroReleaseSetToNil (tf) ;
    NSButton * bt = [[NSButton alloc] initWithFrame:secondColumn (nameRect)] ;
    [bt setFont:font] ;
    [view addSubview:bt] ;
    [mAttributeViewDictionary setObject:bt forKey:description.relationshipName] ;
    macroReleaseSetToNil (bt) ;
    [self updateEntityDisplayForKey:description.relationshipName] ;
    nameRect.origin.y += nameRect.size.height ;
  }
  mToOneRelationshipSet = [NSSet setWithArray:relationshipNameArray] ;
  macroReleaseSetToNil (relationshipNameArray) ;
  macroRetain (mToOneRelationshipSet) ;
//-------------------------------------------------- Adding attributes
  NSArray * attributeDescriptionArray = [self attributeDescriptionArray] ;
  for (PMAttributeDescription * description in attributeDescriptionArray) {
    NSTextField * tf = [[NSTextField alloc] initWithFrame:nameRect] ;
    [tf setEnabled:NO] ;
    [tf setStringValue:description.attributeName] ;
    [tf setFont:font] ;
    [view addSubview:tf] ;
    macroReleaseSetToNil (tf) ;
    NSTextField * tff = [[NSTextField alloc] initWithFrame:secondColumn (nameRect)] ;
    [tff setEnabled:NO] ;
    [tff setFont:font] ;
    [view addSubview:tff] ;
    [mAttributeViewDictionary setObject:tff forKey:description.attributeName] ;
    macroReleaseSetToNil (tff) ;
    [self updateAttributeDisplayForDescription:description] ;
    nameRect.origin.y += nameRect.size.height ;
  }
  macroAssign (mAttributeDescriptionArray, attributeDescriptionArray) ;
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
  NSString * windowTitle = [NSString stringWithFormat:@"#%ld (%@) at 0x%llX", mExplorerObjectIndex, self.className, (UInt64) self] ;
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
    macroReleaseSetToNil (mAttributeViewDictionary) ;
    macroReleaseSetToNil (mToOneRelationshipSet) ;
    macroReleaseSetToNil (mToManyRelationshipSet) ;
    macroReleaseSetToNil (mAttributeDescriptionArray) ;

    NSButton * closeButton = [mExplorerWindow standardWindowButton:NSWindowCloseButton] ;
    [closeButton setTarget:nil] ;

    [mExplorerWindow orderOut:nil] ;
    macroReleaseSetToNil (mExplorerWindow) ;
  }
#endif

//---------------------------------------------------------------------------*

#pragma mark Attribute did change

//---------------------------------------------------------------------------*

#ifdef PM_COCOA_DEBUG
  - (void) didChangeValueForKey:(NSString *) inKey {
    [super didChangeValueForKey:inKey] ;
    if ([mToManyRelationshipSet containsObject:inKey]) {
      [self updateEntityArrayDisplayForKey:inKey] ;
    }else if ([mToOneRelationshipSet containsObject:inKey]) {
      [self updateEntityDisplayForKey:inKey] ;
    }else{
      for (PMAttributeDescription * description in mAttributeDescriptionArray) {
        if ([inKey isEqualToString:description.attributeName]) {
          [self updateAttributeDisplayForDescription:description] ;
          break ;
        }
      }
    }
  }
#endif

//---------------------------------------------------------------------------*

#ifdef PM_COCOA_DEBUG
  - (void) didChange: (NSKeyValueChange) inChange
           valuesAtIndexes:(NSIndexSet *) inIndexes
           forKey:(NSString *) inKey {
    [super
      didChange:inChange
      valuesAtIndexes:inIndexes
      forKey:inKey
    ] ;
    [self updateEntityArrayDisplayForKey:inKey] ;
  }
#endif

//-----------------------------------------------------------------------------*

@end

//-----------------------------------------------------------------------------*



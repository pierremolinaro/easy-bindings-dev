//
//  PMManagedEntity.m
//  essai
//
//  Created by Pierre Molinaro on 28/06/13.
//  Copyright (c) 2013 ECN / IRCCyN. All rights reserved.
//
//-----------------------------------------------------------------------------*

import Cocoa

//-----------------------------------------------------------------------------*
//   PMSignatureObserverProtocol                                               *
//-----------------------------------------------------------------------------*

protocol PMSignatureObserverProtocol {
  func triggerSignatureComputing ()
}

//-----------------------------------------------------------------------------*

var gExplorerObjectIndex = 0
var gAllocatedEntityCount = 0

//-----------------------------------------------------------------------------*
//  PMManagedEntity                                                            *
//-----------------------------------------------------------------------------*

class PMManagedEntity : NSObject, PMSignatureObserverProtocol {
  var savingIndex = 0
  weak var mEntityManager : PMEntityManager?
//--- Signature
  var mSignatureCache = 0
  var mSignatureObserverSet = NSMutableSet () // : Array<PMSignatureObserverProtocol> = []
  var mSignatureHasBeenComputed = false

 // #ifdef PM_COCOA_DEBUG
    var mExplorerObjectIndex : Int
    var mExplorerWindow : NSWindow?
//  #endif

  //-----------------------------------------------------------------------------*
  //  init                                                                       *
  //-----------------------------------------------------------------------------*

  init (entityManager : PMEntityManager) {
    mEntityManager = entityManager
    gAllocatedEntityCount = gAllocatedEntityCount + 1
 //   #ifdef PM_COCOA_DEBUG
      mExplorerObjectIndex = gExplorerObjectIndex
      gExplorerObjectIndex = gExplorerObjectIndex + 1
 //   #endif
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
  //  setup and save                                                             *
  //-----------------------------------------------------------------------------*

  func setUpWithDictionary (inDictionary : NSDictionary,
                            managedObjectArray : PMManagedEntity []) {
  }

  //-----------------------------------------------------------------------------*

  func saveIntoDictionary (ioDictionary : NSMutableDictionary) {
  }

  //-----------------------------------------------------------------------------*
  //  Signature                                                                  *
  //-----------------------------------------------------------------------------*

  func addSignatureObserver (inObserver : PMSignatureObserverProtocol) {
//    mSignatureObserverSet.addObject (inObserver)
    inObserver.triggerSignatureComputing ()
  }

  //---------------------------------------------------------------------------*

  func removeSignatureObserver (inObserver : PMSignatureObserverProtocol) {
    inObserver.triggerSignatureComputing ()
//    mSignatureObserverSet.removeObject (inObserver)
  }

  //---------------------------------------------------------------------------*

  func triggerSignatureComputing () {
    if mSignatureHasBeenComputed {
      mSignatureHasBeenComputed = false ;
      mSignatureObserverSet.makeObjectsPerformSelector ("triggerSignatureComputing")
    }
  }

  //---------------------------------------------------------------------------*

  func signature () -> Int {
    if !mSignatureHasBeenComputed {
      mSignatureHasBeenComputed = true
      mSignatureCache = computeSignature ()
    }
    return mSignatureCache ;
  }

  //---------------------------------------------------------------------------*

  func computeSignature () -> Int {
    return 0
  }

  //-----------------------------------------------------------------------------*
  //  Getters                                                                    *
  //-----------------------------------------------------------------------------*

  func entityManager () -> PMEntityManager {
    return mEntityManager!
  }

  func undoManager () -> PMUndoManager {
    return mEntityManager!.mUndoManager
  }

  func explorerObjectIndex () -> Int {
    return mExplorerObjectIndex
  }

  //---------------------------------------------------------------------------*
  //   showExplorerWindow                                                      *
  //---------------------------------------------------------------------------*

  func showExplorerWindow () {
    if mExplorerWindow == nil {
      createAndPopulateObjectExplorerWindow ()
    }
    mExplorerWindow?.makeKeyAndOrderFront (nil)
  }


  //---------------------------------------------------------------------------*
  //   accessibleObjects                                                       *
  //---------------------------------------------------------------------------*

  func accessibleObjects () -> NSSet {
    return NSSet ()
  }

  //---------------------------------------------------------------------------*
  //   secondColumn                                                            *
  //---------------------------------------------------------------------------*

  func secondColumn (inRect : NSRect) -> NSRect {
    var r = inRect
    r.origin.x += inRect.size.width + 2.0 ;
    return r
  }

  //-----------------------------------------------------------------------------*
  //    populateExplorerWindow                                                   *
  //-----------------------------------------------------------------------------*

  func populateExplorerWindowWithRect (inout ioRect : NSRect, view : NSView) {
  }

  //-----------------------------------------------------------------------------*
  //    createEntryForAttributeNamed                                             *
  //-----------------------------------------------------------------------------*

  func createEntryForAttributeNamed (attributeName : String,
                                     inout ioRect : NSRect,
                                     view : NSView) -> NSTextField {
    let font = NSFont.boldSystemFontOfSize (NSFont.smallSystemFontSize ())
    var tf = NSTextField (frame:ioRect)
    tf.setEnabled (false)
    tf.setStringValue (attributeName)
    tf.setFont (font)
    view.addSubview (tf)
    var tff = NSTextField (frame:secondColumn (ioRect))
    tff.setEnabled (false)
    tff.setFont (font)
    view.addSubview (tff)
    ioRect.origin.y += ioRect.size.height
    return tff
  }

  //-----------------------------------------------------------------------------*
  //    createEntryForToOneRelationshipNamed                                     *
  //-----------------------------------------------------------------------------*

  func createEntryForToOneRelationshipNamed (relationshipName : String,
                                             inout ioRect : NSRect,
                                             view : NSView) -> NSButton {
    let font = NSFont.boldSystemFontOfSize (NSFont.smallSystemFontSize ())
    var tf = NSTextField (frame:ioRect)
    tf.setEnabled (false)
    tf.setStringValue (relationshipName)
    tf.setFont (font)
    view.addSubview (tf)
    var bt = NSButton (frame:secondColumn (ioRect))
    bt.setFont (font)
    view.addSubview (bt)
    ioRect.origin.y += ioRect.size.height
    return bt
  }

  //-----------------------------------------------------------------------------*
  //    createEntryForToManyRelationshipNamed                                    *
  //-----------------------------------------------------------------------------*

  func createEntryForToManyRelationshipNamed (relationshipName : String,
                                              inout ioRect : NSRect,
                                              view : NSView) -> NSPopUpButton {
    let font = NSFont.boldSystemFontOfSize (NSFont.smallSystemFontSize ())
    var tf = NSTextField (frame:ioRect)
    tf.setEnabled (false)
    tf.setStringValue (relationshipName)
    tf.setFont (font)
    view.addSubview (tf)
    var bt = NSPopUpButton (frame:secondColumn (ioRect), pullsDown:true)
    bt.setFont (font)
    view.addSubview (bt)
    ioRect.origin.y += ioRect.size.height ;
    return bt
  }

  //---------------------------------------------------------------------------*
  //   createAndPopulateObjectExplorerWindow                                   *
  //---------------------------------------------------------------------------*

  func createAndPopulateObjectExplorerWindow () {
  //-------------------------------------------------- Create Window
    let r = NSRect (x:20.0, y:20.0, width:10.0, height:10.0)
    mExplorerWindow = NSWindow (
      contentRect:r,
      styleMask:NSTitledWindowMask | NSClosableWindowMask,
      backing:NSBackingStoreBuffered,
      defer:true,
      screen:nil
    )
  //-------------------------------------------------- Adding properties
    var nameRect = NSRect (x:0.0, y:0.0, width:300.0, height:22.0)
    let font = NSFont.boldSystemFontOfSize (NSFont.smallSystemFontSize ())
    var view = NSView (frame:nameRect)
    populateExplorerWindowWithRect (&nameRect, view:view)
  //-------------------------------------------------- Finish Window construction
  //--- Resize View
    let rr = secondColumn (nameRect)
    view.setFrame (NSRect (x:0.0, y:0.0, width:NSMaxX (rr), height:NSMaxY (rr)))
  //--- Set content size
    mExplorerWindow?.setContentSize (NSSize (width:NSMaxX (nameRect) * 2.0 + 4.0 + 16.0, height:fmin (600.0, NSMaxY (nameRect))))
  //--- Set close button as 'remove window' button
    var closeButton = mExplorerWindow?.standardWindowButton (NSWindowCloseButton)
    closeButton?.setTarget (self)
    closeButton?.setAction ("deleteWindowAction:")
  //--- Set window title
    let windowTitle = NSString (format:"#%ld (%@) at %p", mExplorerObjectIndex, className (), self)
    mExplorerWindow?.setTitle (windowTitle)
  //--- Add Scroll view
    let frame = NSRect (x:0.0, y:0.0, width:NSMaxX (nameRect) * 2.0 + 4.0, height:NSMaxY (nameRect))
    var sw = NSScrollView (frame:frame)
    sw.setHasVerticalScroller (true)
    sw.setDocumentView (view)
    mExplorerWindow?.setContentView (sw)
  }

  //---------------------------------------------------------------------------*
  //   updateEntityArrayDisplayForKey                                          *
  //---------------------------------------------------------------------------*

/*  func updateEntityArrayDisplayForKey (inKey : NSString) {
    var objectArray : NSArray = valueForKey (inKey) as NSArray
    var title = "No Object" ;
    if objectArray.count () == 1 {
      title = "1 Object" ;
    }else if objectArray.count () > 1 {
      title = NSString (format:"%lu objects", objectArray.count ())
    }
    var bt = mAttributeViewDictionary.objectForKey (inKey) as NSPopUpButton
    bt.removeAllItems ()
    bt.addItemWithTitle (title)
    bt.setEnabled (objectArray.count () > 0)
    for obj : AnyObject in objectArray {
      let object = obj as PMManagedEntity
      let objectIndex = object.explorerObjectIndex ()
      let stringValue = NSString (format:"#%d (%@) %p", objectIndex, object.className (), object)
      bt.addItemWithTitle (stringValue)
      var item = bt.lastItem ()
      item.setTarget (object)
      item.setAction ("showObjectWindowFromSenderTagAction:")
    }
  }*/

  //---------------------------------------------------------------------------*
  //   updateEntityDisplayForKey                                               *
  //---------------------------------------------------------------------------*

/*  func updateEntityDisplayForKey (inKey : NSString) {
    var object = valueForKey (inKey) as PMManagedEntity
    var stringValue = "nil"
    if nil != object {
      let objectIndex = object.explorerObjectIndex ()
      stringValue = NSString (format:"#%d (%s) %p", objectIndex, object.className (), object)
    }
    var bt = mAttributeViewDictionary.objectForKey (inKey) as NSButton
    bt.setEnabled (object != nil)
    bt.setTitle (stringValue)
    bt.setToolTip (stringValue)
    bt.setTarget (object)
    bt.setAction ("showObjectWindowFromSenderTagAction:")
  }*/

  //---------------------------------------------------------------------------*
  //   deleteWindowAction                                                      *
  //---------------------------------------------------------------------------*

  func deleteWindowAction (AnyObject) {
    clearContextExplorer ()
  }

  //---------------------------------------------------------------------------*
  //   clearContextExplorer                                                    *
  //---------------------------------------------------------------------------*

  func clearContextExplorer () {
    var closeButton = mExplorerWindow?.standardWindowButton (NSWindowCloseButton)
    closeButton?.setTarget (nil)
    mExplorerWindow?.orderOut (nil)
    mExplorerWindow = nil
  }



}

/*
//---------------------------------------------------------------------------*
//   Signature routines                                                      *
//---------------------------------------------------------------------------*

NSInteger computeIntegerSignature (const NSInteger inSignature,
                                   const NSInteger inValue) ;

//---------------------------------------------------------------------------*

NSInteger computeNSStringSignature (const NSInteger inSignature,
                                    NSString * inValue) ;

//---------------------------------------------------------------------------*

NSInteger computeToOneEntitySignature (const NSInteger inSignature,
                                       PMManagedEntity * inToOnePropertyValue) ;

//---------------------------------------------------------------------------*

NSInteger computeToManyEntitySignature (const NSInteger inSignature,
                                        NSArray * inToManyPropertyValue) ;

//-----------------------------------------------------------------------------*
*/





/*
#import "easy-bindings-utilities.h"
#import "PMAllocationDebug.h"
#import "PMManagedEntity.h"
#import "PMEntityManager.h"
#import "PMRelationshipDescription.h"
#import "PMAttributeDescription.h"

//-----------------------------------------------------------------------------*
//  Function used for object explorer                                          *
//-----------------------------------------------------------------------------*

NSString * convertBOOLValueToString (NSNumber * inValue) {
  return [inValue boolValue] ? @"YES" : @"NO" ;
}

//-----------------------------------------------------------------------------*

#ifdef PM_COCOA_DEBUG
  static NSUInteger gExplorerObjectIndex ;
#endif

//-----------------------------------------------------------------------------*
//  Attribute and relationship description caches                              *
//-----------------------------------------------------------------------------*

static NSMutableDictionary * gAttributeDescriptionDictionary ;
static NSMutableDictionary * gToOneRelationshipDescriptionDictionary ;
static NSMutableDictionary * gToManyRelationshipDescriptionDictionary ;
static NSUInteger gAllocatedEntityCount = 0 ;

//----------------------------------------------------------------------------*
//    Dealloc                                                                 *
//----------------------------------------------------------------------------*

- (void) dealloc {
  gAllocatedEntityCount -- ;
  if (0 == gAllocatedEntityCount) {
    macroReleaseSetToNil (gAttributeDescriptionDictionary) ;
    macroReleaseSetToNil (gToOneRelationshipDescriptionDictionary) ;
    macroReleaseSetToNil (gToManyRelationshipDescriptionDictionary) ;
  }
  macroReleaseSetToNil (mEntityManager) ;
  macroReleaseSetToNil (mUndoManager) ;
  macroNoteObjectDeallocation ;
  macroSuperDealloc ;
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

//---------------------------------------------------------------------------*

#ifdef PM_COCOA_DEBUG
  - (void) showObjectWindowFromSenderTagAction: (id) inSender {
    [self showExplorerWindow] ;
  }
#endif

//---------------------------------------------------------------------------*

#pragma mark Clear Context Explorer

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

*/
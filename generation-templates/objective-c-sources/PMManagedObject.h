//
//  PMManagedObject.h
//  essai
//
//  Created by Pierre Molinaro on 28/06/13.
//  Copyright (c) 2013 ECN / IRCCyN. All rights reserved.
//
//-----------------------------------------------------------------------------*

#import <Foundation/Foundation.h>

//-----------------------------------------------------------------------------*

@class PMObjectManager ;

//-----------------------------------------------------------------------------*

NSString * convertBOOLValueToString (NSNumber * inValue) ;

//-----------------------------------------------------------------------------*
//   PMSignatureObserverProtocol                                               *
//-----------------------------------------------------------------------------*

@protocol PMSignatureObserverProtocol <NSObject>

- (void) triggerSignatureComputing ;

@end

//-----------------------------------------------------------------------------*
//  PMManagedObject                                                            *
//-----------------------------------------------------------------------------*

@interface PMManagedObject : NSObject <PMSignatureObserverProtocol> {
  @private PMObjectManager * mEntityManager ;
  @private NSUndoManager * mUndoManager ;
//--- Signature
  @private NSInteger mSignatureCache ;
  @private NSMutableSet * mSignatureObserverSet ;
  @private BOOL mSignatureHasBeenComputed ;

  #ifdef PM_COCOA_DEBUG
    @private NSUInteger mExplorerObjectIndex ;
    @private NSWindow * mExplorerWindow ;
    @private NSMutableDictionary * mAttributeViewDictionary ;
    @private NSSet * mToOneRelationshipSet ;
    @private NSSet * mToManyRelationshipSet ;
    @private NSArray * mAttributeDescriptionArray ; // Of PMAttributeDescription
  #endif
}

- (instancetype) initWithEntityManager: (PMObjectManager *) inEntityManager ;

- (PMObjectManager *) entityManager ;

- (NSUndoManager *) undoManager ;

- (NSArray *) attributeDescriptionArray ;

- (BOOL) hasAttributeNamed: (NSString *) inName ;

- (NSArray *) toOneRelationshipDescriptionArray ;

- (BOOL) hasToOneRelationshipNamed: (NSString *) inName ;

- (NSArray *) toManyRelationshipDescriptionArray ;

- (BOOL) hasToManyRelationshipNamed: (NSString *) inName ;

- (void) buildAttributeDescriptionArray: (NSMutableArray *) ioDescriptionArray ;

- (void) buildToOneRelationshipDescriptionArray: (NSMutableArray *) ioDescriptionArray ; // Of PMRelationshipDescription

- (void) buildToManyRelationshipDescriptionArray: (NSMutableArray *) ioDescriptionArray ; // Of PMRelationshipDescription

- (void) setUpWithDictionary: (NSDictionary *) inDictionary
         withManagedEntityArray: (NSArray *) inObjectArray ;

- (void) resetBeforeDeletion ;

- (void) saveIntoDictionary: (NSMutableDictionary *) ioDictionary ;

//--- Signature
- (NSInteger) computeSignature ;
- (void) addSignatureObserver: (NSObject <PMSignatureObserverProtocol> *) inObserver ;
- (void) removeSignatureObserver: (NSObject <PMSignatureObserverProtocol> *) inObserver ;
- (void) triggerSignatureComputing ;
- (NSInteger) signature ;

#ifdef PM_COCOA_DEBUG
  - (void) showExplorerWindow ;
  - (NSUInteger) explorerObjectIndex ;
#endif

@property (atomic) NSUInteger savingIndex ;
@end

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
                                       PMManagedObject * inToOnePropertyValue) ;

//---------------------------------------------------------------------------*

NSInteger computeToManyEntitySignature (const NSInteger inSignature,
                                        NSArray * inToManyPropertyValue) ;

//-----------------------------------------------------------------------------*
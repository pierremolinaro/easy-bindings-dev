//
//  PMManagedEntity.h
//  essai
//
//  Created by Pierre Molinaro on 28/06/13.
//  Copyright (c) 2013 ECN / IRCCyN. All rights reserved.
//
//-----------------------------------------------------------------------------*

#import <Foundation/Foundation.h>

//-----------------------------------------------------------------------------*

@class PMEntityManager ;

//-----------------------------------------------------------------------------*

NSString * convertBOOLValueToString (NSNumber * inValue) ;

//-----------------------------------------------------------------------------*
//   PMSignatureObserverProtocol                                               *
//-----------------------------------------------------------------------------*

@protocol PMSignatureObserverProtocol <NSObject>

- (void) triggerSignatureComputing ;

@end

//-----------------------------------------------------------------------------*
//  PMManagedEntity                                                            *
//-----------------------------------------------------------------------------*

@interface PMManagedEntity : NSObject {
  @private PMEntityManager * mEntityManager ;
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

- (instancetype) initWithEntityManager: (PMEntityManager *) inEntityManager ;

- (PMEntityManager *) entityManager ;

- (NSUndoManager *) undoManager ;

- (NSArray *) attributeDescriptionArray ;

- (NSArray *) toOneRelationshipDescriptionArray ;

- (NSArray *) toManyRelationshipDescriptionArray ;

- (void) buildAttributeDescriptionArray: (NSMutableArray *) ioDescriptionArray ;

- (void) buildToOneRelationshipDescriptionArray: (NSMutableArray *) ioDescriptionArray ; // Of PMRelationshipDescription

- (void) buildToManyRelationshipDescriptionArray: (NSMutableArray *) ioDescriptionArray ; // Of PMRelationshipDescription

- (void) setUpWithDefaultValues ;

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

NSInteger computeIntSignature (const NSInteger inSignature,
                               const NSInteger inValue) ;

//---------------------------------------------------------------------------*

NSInteger computeStringSignature (const NSInteger inSignature,
                                  NSString * inValue) ;

//---------------------------------------------------------------------------*

NSInteger computeToOnePropertySignature (const NSInteger inSignature,
                                         PMManagedEntity * inToOnePropertyValue) ;

//---------------------------------------------------------------------------*

NSInteger computeToManyPropertySignature (const NSInteger inSignature,
                                          NSArray * inToManyPropertyValue) ;

//-----------------------------------------------------------------------------*

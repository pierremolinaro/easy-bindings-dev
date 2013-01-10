//
//  PMManagedObject.h
//  canari
//
//  Created by Pierre Molinaro on 02/11/07.
//  Copyright 2007 __MyCompanyName__. All rights reserved.
//
//---------------------------------------------------------------------------*

#import "PMWillDeallocProtocol.h"

//---------------------------------------------------------------------------*

@class PMManagedObject ;

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
                                         PMManagedObject * inToOnePropertyValue) ;

//---------------------------------------------------------------------------*

NSInteger computeToManyPropertySignature (const NSInteger inSignature,
                                          NSSet * inToManyPropertyValue) ;

//-----------------------------------------------------------------------------*

@protocol PMSignatureObserverProtocol <NSObject>

- (void) triggerSignatureComputing ;

@end

//---------------------------------------------------------------------------*

@interface PMManagedObject : NSManagedObject <PMWillDeallocProtocol, PMSignatureObserverProtocol> {
  #ifdef PM_COCOA_DEBUG
    @private NSUInteger mExplorerObjectIndex ;
    @private NSWindow * mExplorerWindow ;
    @private NSMutableDictionary * mAttributeViewDictionary ;
    @private NSTextField * mChangedPropertyTextField ;
  #endif 

//--- Signature
  @private NSInteger mSignatureCache ;
  @private BOOL mSignatureHasBeenComputed ;
  @private NSMutableSet * mSignatureObserverSet ;
}

#ifdef PM_COCOA_DEBUG
  - (void) showExplorerWindow ;
#endif

@property NSUInteger mObjectCreationIndex ;

- (NSInteger) computeSignature ;
- (void) triggerSignatureComputing ;
- (void) addSignatureObserver: (NSObject <PMSignatureObserverProtocol> *) inObserver ;
- (void) removeSignatureObserver: (NSObject <PMSignatureObserverProtocol> *) inObserver ;
- (NSInteger) signature ;

@end

//---------------------------------------------------------------------------*

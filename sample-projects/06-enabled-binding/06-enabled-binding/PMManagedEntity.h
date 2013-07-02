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
//  PMManagedEntity                                                            *
//-----------------------------------------------------------------------------*

@interface PMManagedEntity : NSObject {
  @private PMEntityManager * mEntityManager ;
  @private NSUndoManager * mUndoManager ;

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

#ifdef PM_COCOA_DEBUG
  - (void) showExplorerWindow ;
  - (NSUInteger) explorerObjectIndex ;
#endif

@property (atomic) NSUInteger savingIndex ;
@end

//-----------------------------------------------------------------------------*

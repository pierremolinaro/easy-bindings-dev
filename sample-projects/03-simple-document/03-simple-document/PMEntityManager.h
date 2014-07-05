//
//  PMEntityManager.h
//  essai
//
//  Created by Pierre Molinaro on 28/06/13.
//  Copyright (c) 2013 ECN / IRCCyN. All rights reserved.
//
//-----------------------------------------------------------------------------*

#import <Foundation/Foundation.h>

//-----------------------------------------------------------------------------*

@class PMManagedObject ;

//-----------------------------------------------------------------------------*

@interface PMEntityManager : NSObject {
  @private NSUndoManager * mUndoManager ;
  @private NSMutableSet * mManagedObjectSet ;
}

- (instancetype) initWithUndoManager: (NSUndoManager *) inUndoManager ;

- (NSUndoManager *) undoManager ;

- (id) newInstanceOfEntity: (Class) inEntityClass ;

- (void) deleteEntity: (PMManagedObject *) inObject ;

- (void) deleteEntities: (NSArray *) inObjects ;

- (NSArray *) allEntitiesKindOfClass: (Class) inClass ;

- (NSArray *) reachableObjectsFromObject: (PMManagedObject *) inRootObject ;

- (NSSet *) uneachableObjectsFromObject: (PMManagedObject *) inRootObject ;

- (id) readFromData: (NSData *) inData withRootEntityClass: (Class) inRootEntityClass ;

- (void) resetBeforeDeletion ;

- (NSData *) dataForSavingFromRootObject: (PMManagedObject *) inRootObject ;

- (NSUInteger) entityCount ;
@end

//-----------------------------------------------------------------------------*

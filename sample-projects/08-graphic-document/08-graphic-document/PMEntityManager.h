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

@class PMManagedEntity ;

//-----------------------------------------------------------------------------*

@interface PMEntityManager : NSObject {
  @private NSUndoManager * mUndoManager ;
  @private NSMutableSet * mManagedObjectSet ;
}

- (instancetype) initWithUndoManager: (NSUndoManager *) inUndoManager ;

- (NSUndoManager *) undoManager ;

- (id) newInstanceOfEntity: (Class) inEntityClass ;

- (void) deleteEntity: (PMManagedEntity *) inObject ;

- (void) deleteEntities: (NSArray *) inObjects ;

- (NSArray *) allEntitiesKindOfClass: (Class) inClass ;

- (NSArray *) reachableObjectsFromObject: (PMManagedEntity *) inRootObject ;

- (NSSet *) uneachableObjectsFromObject: (PMManagedEntity *) inRootObject ;

- (id) readFromData: (NSData *) inData withRootEntityClass: (Class) inRootEntityClass ;

- (void) resetBeforeDeletion ;

- (NSData *) dataForSavingFromRootObject: (PMManagedEntity *) inRootObject ;

- (NSUInteger) entityCount ;
@end

//-----------------------------------------------------------------------------*

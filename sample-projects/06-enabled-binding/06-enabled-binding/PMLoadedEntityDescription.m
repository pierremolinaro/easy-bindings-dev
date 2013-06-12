//
//  PMLoadedEntityDescription.m
//  canari
//
//  Created by Pierre Molinaro on 09/11/07.
//  Copyright 2007 __MyCompanyName__. All rights reserved.
//
//---------------------------------------------------------------------------*

#import "PMLoadedEntityDescription.h"
#import "PMEmbeddedEntityDatabase.h"
#import "PMAllocationDebug.h"
#import "easy-bindings-utilities.h"

//#define EASY_BINDINGS_DEBUG

//---------------------------------------------------------------------------*

@implementation PMLoadedEntityDescription

//---------------------------------------------------------------------------*

- (id) initWithCoreDataEntity: (NSEntityDescription *) inCoreDataEntity
       withLoadedSuperEntity: (PMLoadedEntityDescription *) inLoadedSuperEntity
       withLoadedAttributes: (NSArray *) inEntityAttributeArray
       withLoadedRelationships: (NSArray *) inEntityRelationshipArray {
  self = [super init] ;
  if (self) {
    macroNoteObjectAllocation ;
    mCoreDataEntity = inCoreDataEntity ;
    mLoadedSuperEntity = inLoadedSuperEntity.copy ;
    mEntityAttributeArray = inEntityAttributeArray.copy ;
    mEntityRelationshipArray = inEntityRelationshipArray.copy ;
  }
  return self ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//                           dealloc                             *
//                                                                           *
//---------------------------------------------------------------------------*

#ifdef PM_COCOA_DEBUG
  - (void) dealloc {
    macroNoteObjectDeallocation ;
    macroSuperDealloc ;
  }
#endif

//---------------------------------------------------------------------------*

- (NSEntityDescription *) coreDataEntity {
  return mCoreDataEntity ;
}

//---------------------------------------------------------------------------*

- (NSArray *) sortedAttributeNames {
  return mEntityAttributeArray ;
}

//---------------------------------------------------------------------------*

- (NSArray *) sortedRelationshipNames {
  return mEntityRelationshipArray ;
}

//---------------------------------------------------------------------------*

@end

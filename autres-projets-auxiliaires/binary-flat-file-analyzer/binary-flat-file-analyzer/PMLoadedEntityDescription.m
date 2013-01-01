//
//  PMLoadedEntityDescription.m
//  canari
//
//  Created by Pierre Molinaro on 09/11/07.
//  Copyright 2007 __MyCompanyName__. All rights reserved.
//
//---------------------------------------------------------------------------*

#import "PMLoadedEntityDescription.h"

//#define EASY_BINDINGS_DEBUG

//---------------------------------------------------------------------------*

@implementation PMLoadedEntityDescription

//---------------------------------------------------------------------------*

- (id) initWithCoreDataEntityName: (NSString *) inCoreDataEntityName
       withLoadedSuperEntity: (PMLoadedEntityDescription *) inLoadedSuperEntity
       withLoadedAttributes: (NSArray *) inEntityAttributeArray
       withLoadedRelationships: (NSArray *) inEntityRelationshipArray {
  self = [super init] ;
  if (self) {
    mCoreDataEntityName = inCoreDataEntityName ;
    mLoadedSuperEntity = inLoadedSuperEntity ;
    mEntityAttributeArray = inEntityAttributeArray ;
    mEntityRelationshipArray = inEntityRelationshipArray ;
  }
  return self ;
}

//---------------------------------------------------------------------------*

- (NSString *) coreDataEntityName {
  return mCoreDataEntityName ;
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

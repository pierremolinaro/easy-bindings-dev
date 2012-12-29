//
//  PMLoadedEntityDescription.h
//  canari
//
//  Created by Pierre Molinaro on 09/11/07.
//  Copyright 2007 __MyCompanyName__. All rights reserved.
//
//---------------------------------------------------------------------------*

#import <Cocoa/Cocoa.h>

//---------------------------------------------------------------------------*

@class PMEmbeddedEntityDatabase ;

//---------------------------------------------------------------------------*

@interface PMLoadedEntityDescription : NSObject {
  @private NSEntityDescription * mCoreDataEntity ;
  @private PMLoadedEntityDescription * mLoadedSuperEntity ;
  @private NSArray * mEntityAttributeArray ;
  @private NSArray * mEntityRelationshipArray ;
}

- (id) initWithCoreDataEntity: (NSEntityDescription *) inCoreDataEntity
       withLoadedSuperEntity: (PMLoadedEntityDescription *) inLoadedSuperEntity
       withLoadedAttributes: (NSArray *) inEntityAttributeArray
       withLoadedRelationships: (NSArray *) inEntityRelationshipArray ;

- (NSEntityDescription *) coreDataEntity ;

- (NSArray *) sortedAttributeNames ;

- (NSArray *) sortedRelationshipNames ;
@end

//---------------------------------------------------------------------------*

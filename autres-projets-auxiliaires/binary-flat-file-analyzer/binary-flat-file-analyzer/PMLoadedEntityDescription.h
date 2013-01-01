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
  @private NSString * mCoreDataEntityName ;
  @private PMLoadedEntityDescription * mLoadedSuperEntity ;
  @private NSArray * mEntityAttributeArray ;
  @private NSArray * mEntityRelationshipArray ;
}

- (id) initWithCoreDataEntityName: (NSString *) inCoreDataEntityName
       withLoadedSuperEntity: (PMLoadedEntityDescription *) inLoadedSuperEntity
       withLoadedAttributes: (NSArray *) inEntityAttributeArray
       withLoadedRelationships: (NSArray *) inEntityRelationshipArray ;

- (NSString *) coreDataEntityName ;

- (NSArray *) sortedAttributeNames ;

- (NSArray *) sortedRelationshipNames ;
@end

//---------------------------------------------------------------------------*

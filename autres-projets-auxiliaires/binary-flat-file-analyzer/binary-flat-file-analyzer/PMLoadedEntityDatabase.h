//
//  PMLoadedEntityDatabase.h
//  canari
//
//  Created by Pierre Molinaro on 09/11/07.
//  Copyright 2007 __MyCompanyName__. All rights reserved.
//
//---------------------------------------------------------------------------*

#import <Cocoa/Cocoa.h>

//---------------------------------------------------------------------------*

@class PMDataScanner ;

//---------------------------------------------------------------------------*

@interface PMLoadedEntityDatabase : NSObject {
  @private NSMutableArray * mLoadedEntityArray ; // Object PMLoadedEntityDescription
}

- (id) initWithDataScanner: (PMDataScanner *) inDataScanner ;

- (NSArray *) sortedAttributeNamesForEntityOfIndex: (NSUInteger) inEntityIndex ;

- (NSArray *) sortedRelationshipNamesForEntityOfIndex: (NSUInteger) inEntityIndex ;

- (NSString *) entityNameForIndex: (NSUInteger) inEntityIndex ;

@end

//---------------------------------------------------------------------------*

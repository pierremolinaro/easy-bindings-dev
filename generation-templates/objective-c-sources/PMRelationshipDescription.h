//
//  PMRelationshipDescription.h
//  essai
//
//  Created by Pierre Molinaro on 30/06/13.
//  Copyright (c) 2013 ECN / IRCCyN. All rights reserved.
//
//---------------------------------------------------------------------------*

#import <Foundation/Foundation.h>

//---------------------------------------------------------------------------*

@interface PMRelationshipDescription : NSObject

+ (PMRelationshipDescription *) descriptionWithRelationshipName: (NSString *) inRelationshipName
                                withOppositionRelationshipName: (NSString *) inOppositeRelationshipName
                                withIsToManyOppositionRelationship: (BOOL) inIsToMany ;

@property (copy, readonly, atomic) NSString * relationshipName ;
@property (copy, readonly, atomic) NSString * oppositeRelationshipName ;
@property (readonly, atomic) BOOL oppositeRelationshipIsToMany ;

- (NSComparisonResult) compareByRelationshipName: (PMRelationshipDescription *) inOtherDescription ;

- (NSComparisonResult) reverseCompareByRelationshipName: (PMRelationshipDescription *) inOtherDescription ;

@end

//---------------------------------------------------------------------------*

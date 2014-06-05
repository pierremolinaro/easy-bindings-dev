//
//  PMRelationshipDescription.m
//  essai
//
//  Created by Pierre Molinaro on 30/06/13.
//  Copyright (c) 2013 ECN / IRCCyN. All rights reserved.
//
//---------------------------------------------------------------------------*

#import "easy-bindings-utilities.h"
#import "PMRelationshipDescription.h"
#import "PMAllocationDebug.h"

//---------------------------------------------------------------------------*

@implementation PMRelationshipDescription

//---------------------------------------------------------------------------*

@synthesize relationshipName ;
@synthesize oppositeRelationshipName ;
@synthesize oppositeRelationshipIsToMany ;

//---------------------------------------------------------------------------*

- (instancetype) initWithRelationshipName: (NSString *) inRelationshipName
                 withOppositionRelationshipName: (NSString *) inOppositeRelationshipName
                 withIsToManyOppositionRelationship: (BOOL) inIsToMany {
  self = [self init] ;
  if (self) {
    relationshipName = inRelationshipName ;
    oppositeRelationshipName = inOppositeRelationshipName ;
    oppositeRelationshipIsToMany = inIsToMany ;
    macroNoteObjectAllocation ;
  }
  return self ;
}

//----------------------------------------------------------------------------*
//    Dealloc                                                                 *
//----------------------------------------------------------------------------*

- (void) dealloc {
  macroNoteObjectDeallocation ;
  macroSuperDealloc ;
}

//---------------------------------------------------------------------------*

+ (PMRelationshipDescription *) descriptionWithRelationshipName: (NSString *) inRelationshipName
                                withOppositionRelationshipName: (NSString *) inOppositeRelationshipName
                                withIsToManyOppositionRelationship: (BOOL) inIsToMany {
  PMRelationshipDescription * result = [[PMRelationshipDescription alloc]
    initWithRelationshipName:inRelationshipName
    withOppositionRelationshipName:inOppositeRelationshipName
    withIsToManyOppositionRelationship:inIsToMany
  ] ;
  macroAutorelease (result) ;
  return result ;
}

//---------------------------------------------------------------------------*

- (NSComparisonResult) compareByRelationshipName: (PMRelationshipDescription *) inOtherDescription {
  return [self.relationshipName compare:inOtherDescription.relationshipName] ;
}

//---------------------------------------------------------------------------*

- (NSComparisonResult) reverseCompareByRelationshipName: (PMRelationshipDescription *) inOtherDescription {
  return [inOtherDescription.relationshipName compare:self.relationshipName] ;
}

//---------------------------------------------------------------------------*

@end

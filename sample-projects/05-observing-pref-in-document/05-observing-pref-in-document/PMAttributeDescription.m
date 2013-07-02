//
//  PMAttributeDescription.m
//  essai
//
//  Created by Pierre Molinaro on 30/06/13.
//  Copyright (c) 2013 ECN / IRCCyN. All rights reserved.
//
//---------------------------------------------------------------------------*

#import "easy-bindings-utilities.h"
#import "PMAttributeDescription.h"
#import "PMAllocationDebug.h"

//---------------------------------------------------------------------------*

@implementation PMAttributeDescription

//---------------------------------------------------------------------------*

@synthesize attributeName ;
@synthesize conversionFunction ;

//---------------------------------------------------------------------------*

- (instancetype) initWithDescriptionWithAttributeName: (NSString *) inAttributeName
                 withConversionFunction: (NSString * (*) (NSValue * inValue)) inConversionFunction {
  self = [self init] ;
  if (self) {
    attributeName = inAttributeName ;
    conversionFunction = inConversionFunction ;
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

//----------------------------------------------------------------------------*
//   descriptionWithAttributeName:withConversionFunction:                     *
//----------------------------------------------------------------------------*

+ (PMAttributeDescription *) descriptionWithAttributeName: (NSString *) inAttributeName
                             withConversionFunction: (NSString * (*) (NSValue * inValue)) inConversionFunction {
  PMAttributeDescription * result = [[PMAttributeDescription alloc]
    initWithDescriptionWithAttributeName:inAttributeName
    withConversionFunction:inConversionFunction
  ] ;
  macroAutorelease (result) ;
  return result ;
}

//----------------------------------------------------------------------------*
//   descriptionWithAttributeName:                                            *
//----------------------------------------------------------------------------*

+ (PMAttributeDescription *) descriptionWithAttributeName: (NSString *) inAttributeName {
  PMAttributeDescription * result = [[PMAttributeDescription alloc]
    initWithDescriptionWithAttributeName:inAttributeName
    withConversionFunction:NULL
  ] ;
  macroAutorelease (result) ;
  return result ;
}

//---------------------------------------------------------------------------*

- (NSComparisonResult) compareByAttributeName: (PMAttributeDescription *) inOtherDescription {
  return [self.attributeName compare:inOtherDescription.attributeName] ;
}

//---------------------------------------------------------------------------*

- (NSComparisonResult) reverseCompareByAttributeName: (PMAttributeDescription *) inOtherDescription {
  return [inOtherDescription.attributeName compare:self.attributeName] ;
}

//---------------------------------------------------------------------------*

@end

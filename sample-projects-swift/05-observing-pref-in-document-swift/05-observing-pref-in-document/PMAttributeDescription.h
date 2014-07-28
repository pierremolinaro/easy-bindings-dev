//
//  PMAttributeDescription.h
//  essai
//
//  Created by Pierre Molinaro on 30/06/13.
//  Copyright (c) 2013 ECN / IRCCyN. All rights reserved.
//
//---------------------------------------------------------------------------*

#import <Foundation/Foundation.h>

//---------------------------------------------------------------------------*

@interface PMAttributeDescription : NSObject

+ (PMAttributeDescription *) descriptionWithAttributeName: (NSString *) inAttributeName ;

+ (PMAttributeDescription *) descriptionWithAttributeName: (NSString *) inAttributeName
                             withConversionFunction: (NSString * (*) (NSValue * inValue)) inConversionFunction ;

@property (copy, readonly, atomic) NSString * attributeName ;
@property (readonly, atomic) NSString * (* conversionFunction) (NSValue * inValue) ;

- (NSComparisonResult) compareByAttributeName: (PMAttributeDescription *) inOtherDescription ;

- (NSComparisonResult) reverseCompareByAttributeName: (PMAttributeDescription *) inOtherDescription ;

//---------------------------------------------------------------------------*

@end

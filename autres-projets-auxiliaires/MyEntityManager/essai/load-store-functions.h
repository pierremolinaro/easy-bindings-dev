//
//  NSMutableDictionary+PMSetters.h
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
//  STORE ROUTINES                                                             *
//-----------------------------------------------------------------------------*

void storeBOOLInDictionary (const BOOL inBool, NSString * inKey, NSMutableDictionary * ioDictionary) ;

void storeNSIntegerInDictionary (const NSInteger inValue, NSString * inKey, NSMutableDictionary * ioDictionary) ;

void storeNSStringInDictionary (NSString * inString, NSString * inKey, NSMutableDictionary * ioDictionary) ;

void storeNSColorInDictionary (NSColor * inColor, NSString * inKey, NSMutableDictionary * ioDictionary) ;

void storeEntityInDictionary (PMManagedEntity * inObject, NSString * inKey, NSMutableDictionary * ioDictionary) ;

void storeEntityArrayInDictionary (NSArray * inObjectArray, NSString * inKey, NSMutableDictionary * ioDictionary) ;

//-----------------------------------------------------------------------------*
//  LOAD ROUTINES                                                              *
//-----------------------------------------------------------------------------*

BOOL readBOOLFromDictionary (NSString * inKey, NSDictionary * inDictionary) ;

NSInteger readNSIntegerFromDictionary (NSString * inKey, NSDictionary * inDictionary) ;

NSString * readNSStringFromDictionary (NSString * inKey, NSDictionary * inDictionary) ;

NSColor * readNSColorFromDictionary (NSString * inKey, NSDictionary * inDictionary) ;

id readEntityFromDictionary (NSString * inKey,
                             NSDictionary * inDictionary,
                             NSArray * inManagedEntityArray) ;

NSMutableArray * readEntityArrayFromDictionary (NSString * inKey,
                                                NSDictionary * inDictionary,
                                                NSArray * inManagedEntityArray) ;

//---------------------------------------------------------------------------*

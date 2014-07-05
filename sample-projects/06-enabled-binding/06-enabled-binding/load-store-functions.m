//
//  NSMutableDictionary+PMSetters.m
//  essai
//
//  Created by Pierre Molinaro on 28/06/13.
//  Copyright (c) 2013 ECN / IRCCyN. All rights reserved.
//
//---------------------------------------------------------------------------*

#import "load-store-functions.h"
#import "PMManagedObject.h"
#import "easy-bindings-utilities.h"

//-----------------------------------------------------------------------------*
//  STORE ROUTINES                                                             *
//-----------------------------------------------------------------------------*

void storeBOOLInDictionary (const BOOL inBool,
                            NSString * inKey,
                            NSMutableDictionary * ioDictionary) {
  [ioDictionary setObject:[NSNumber numberWithBool:inBool] forKey:inKey] ;
}

//-----------------------------------------------------------------------------*

void storeNSIntegerInDictionary (const NSInteger inValue,
                                 NSString * inKey,
                                 NSMutableDictionary * ioDictionary) {
  [ioDictionary setObject:[NSNumber numberWithInteger:inValue] forKey:inKey] ;
}

//---------------------------------------------------------------------------*

void storeNSStringInDictionary (NSString * inString,
                                NSString * inKey,
                                NSMutableDictionary * ioDictionary) {
  if (inString.length > 0) {
    [ioDictionary setObject:inString forKey:inKey] ;
  }
}

//---------------------------------------------------------------------------*

void storeNSColorInDictionary (NSColor * inColor,
                               NSString * inKey,
                               NSMutableDictionary * ioDictionary) {
  if (inColor != nil) {
    [ioDictionary setObject:[NSArchiver archivedDataWithRootObject:inColor] forKey:inKey] ;
  }
}

//-----------------------------------------------------------------------------*

void storeEntityInDictionary (PMManagedObject * inObject,
                              NSString * inKey,
                              NSMutableDictionary * ioDictionary) {
  if (nil != inObject) {
    [ioDictionary
      setObject:[NSNumber numberWithUnsignedInteger:inObject.savingIndex]
      forKey:inKey
    ] ;
  }
}

//-----------------------------------------------------------------------------*

void storeEntityArrayInDictionary (NSArray * inEntityArray,
                                   NSString * inKey,
                                   NSMutableDictionary * ioDictionary) {
  if (inEntityArray.count > 0) {
    NSMutableArray * indexArray = [NSMutableArray new] ;
    for (PMManagedObject * object in inEntityArray) {
      [indexArray addObject:[NSNumber numberWithUnsignedInteger:object.savingIndex]] ;
    }
    [ioDictionary setObject:indexArray forKey:inKey] ;
    macroReleaseSetToNil (indexArray) ;
  }
}

//-----------------------------------------------------------------------------*
//  LOAD ROUTINES                                                              *
//-----------------------------------------------------------------------------*

BOOL readBOOLFromDictionary (NSString * inKey, NSDictionary * inDictionary) {
  return [[inDictionary valueForKey:inKey] boolValue] ;
}

//---------------------------------------------------------------------------*

NSString * readNSStringFromDictionary (NSString * inKey, NSDictionary * inDictionary) {
  return [inDictionary valueForKey:inKey] ;
}

//---------------------------------------------------------------------------*

NSInteger readNSIntegerFromDictionary (NSString * inKey, NSDictionary * inDictionary) {
  return [[inDictionary valueForKey:inKey] integerValue] ;
}

//---------------------------------------------------------------------------*

NSColor * readNSColorFromDictionary (NSString * inKey, NSDictionary * inDictionary) {
  NSData * data = [inDictionary valueForKey:inKey] ;
  return (nil == data) ? nil : [NSUnarchiver unarchiveObjectWithData:data] ;
}

//---------------------------------------------------------------------------*

id readEntityFromDictionary (NSString * inKey,
                             NSDictionary * inDictionary,
                             NSArray * inManagedEntityArray) {
  NSNumber * value = [inDictionary valueForKey:inKey] ;
  id result = nil ;
  if (nil != value) {
    result = [inManagedEntityArray objectAtIndex:value.unsignedIntegerValue] ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

NSMutableArray * readEntityArrayFromDictionary (NSString * inKey,
                                                NSDictionary * inDictionary,
                                                NSArray * inManagedEntityArray) {
  NSMutableArray * result = [NSMutableArray new] ;
  NSArray * indexArray = [inDictionary valueForKey:inKey] ;
  for (NSNumber * number in indexArray) {
    id object = [inManagedEntityArray objectAtIndex:number.unsignedIntegerValue] ;
    [result addObject:object] ;
  }
  macroAutorelease (result) ;
  return result ;
}

//---------------------------------------------------------------------------*

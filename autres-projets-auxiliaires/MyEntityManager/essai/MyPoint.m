//
//  MyPoint.c
//  essai
//
//  Created by Pierre Molinaro on 30/06/13.
//  Copyright (c) 2013 ECN / IRCCyN. All rights reserved.
//
//-----------------------------------------------------------------------------*

#import "MyPoint.h"
#import "easy-bindings-utilities.h"
#import "load-store-functions.h"

//-----------------------------------------------------------------------------*

BOOL equalMyPoints (const MyPoint inPoint1, const MyPoint inPoint2) {
  return (inPoint1.x == inPoint2.x) && (inPoint1.y == inPoint2.y) ;
}

//-----------------------------------------------------------------------------*

NSString * convertMyPointValueToString (NSValue * inValue) {
  macroCheckObject (inValue, NSValue) ;
  MyPoint p ;
  [inValue getValue: & p] ;
  return [NSString stringWithFormat:@"[%ld, %ld]", p.x, p.y] ;
}

//-----------------------------------------------------------------------------*

void storeMyPointInDictionary (const MyPoint inPoint, NSString * inKey, NSMutableDictionary * ioDictionary) {
  storeNSIntegerInDictionary (inPoint.x, [inKey stringByAppendingString:@".x"], ioDictionary) ;
  storeNSIntegerInDictionary (inPoint.y, [inKey stringByAppendingString:@".y"], ioDictionary) ;
}

//-----------------------------------------------------------------------------*

MyPoint readMyPointFromDictionary (NSString * inKey, NSDictionary * inDictionary) {
  const MyPoint p = {
    readNSIntegerFromDictionary ([inKey stringByAppendingString:@".x"], inDictionary),
    readNSIntegerFromDictionary ([inKey stringByAppendingString:@".y"], inDictionary)
  } ;
  return p ;
}

//-----------------------------------------------------------------------------*

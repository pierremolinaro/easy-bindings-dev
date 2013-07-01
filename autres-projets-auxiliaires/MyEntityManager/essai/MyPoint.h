//
//  MyPoint.h
//  essai
//
//  Created by Pierre Molinaro on 30/06/13.
//  Copyright (c) 2013 ECN / IRCCyN. All rights reserved.
//
//-----------------------------------------------------------------------------*

typedef struct {
  NSInteger x ;
  NSInteger y ;
} MyPoint ;

//-----------------------------------------------------------------------------*

NSString * convertMyPointValueToString (NSValue * inValue) ;

//-----------------------------------------------------------------------------*

void storeMyPointInDictionary (const MyPoint inPoint, NSString * inKey, NSMutableDictionary * ioDictionary) ;

//-----------------------------------------------------------------------------*

MyPoint readMyPointFromDictionary (NSString * inKey, NSDictionary * inDictionary) ;

//-----------------------------------------------------------------------------*

BOOL equalMyPoints (const MyPoint inPoint1, const MyPoint inPoint2) ;

//-----------------------------------------------------------------------------*

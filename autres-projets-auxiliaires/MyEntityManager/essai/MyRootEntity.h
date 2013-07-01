//
//  MyRootEntity.h
//  essai
//
//  Created by Pierre Molinaro on 28/06/13.
//  Copyright (c) 2013 ECN / IRCCyN. All rights reserved.
//
//-----------------------------------------------------------------------------*

#import "PMManagedEntity.h"
#import "MyPoint.h"

//-----------------------------------------------------------------------------*

@class MyOtherEntity ;
@class MyElementEntity ;

//-----------------------------------------------------------------------------*

@interface MyRootEntity : PMManagedEntity {


}

@property (copy, atomic) NSString * mString ;
@property (copy, atomic) NSColor * mColor ;
@property (atomic) BOOL mBool;
@property (atomic) MyPoint mPoint ;
@property (retain, atomic) MyOtherEntity * mOtherEntity ;

@property (retain, atomic) NSMutableArray * mElementArray ; // Of MyElementEntity
- (NSUInteger) countOfMElementArray ;
//- (void) insertMElementArray: (NSArray *) inObjectArray atIndexes: (NSIndexSet *) inIndexes ;
//- (void) removeMElementArrayAtIndexes: (NSIndexSet *) inIndexes ;

- (void) insertObject: (MyElementEntity *) inObject inMElementArrayAtIndex: (NSUInteger) inIndex ;
- (void) removeObjectFromMElementArray: (MyElementEntity *) inObject ;

- (void) removeObjectFromMElementArrayAtIndex: (NSUInteger) inIndex ;
- (void) appendToMElementArray: (MyElementEntity *) inObject ;

@end

//-----------------------------------------------------------------------------*

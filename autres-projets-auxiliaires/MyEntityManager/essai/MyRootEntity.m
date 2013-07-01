//
//  MyRootEntity.m
//  essai
//
//  Created by Pierre Molinaro on 28/06/13.
//  Copyright (c) 2013 ECN / IRCCyN. All rights reserved.
//
//-----------------------------------------------------------------------------*

#import "easy-bindings-utilities.h"
#import "PMAllocationDebug.h"
#import "MyRootEntity.h"
#import "PMEntityManager.h"
#import "load-store-functions.h"
#import "MyOtherEntity.h"
#import "MyElementEntity.h"
#import "PMRelationshipDescription.h"
#import "PMAttributeDescription.h"

//-----------------------------------------------------------------------------*

#import <objc/runtime.h>

//-----------------------------------------------------------------------------*

@implementation MyRootEntity

//-----------------------------------------------------------------------------*

@synthesize mString ;
@synthesize mBool ;
@synthesize mColor ;
@synthesize mPoint ;
@synthesize mOtherEntity ;
@synthesize mElementArray ;

//-----------------------------------------------------------------------------*

+ (void) load {    
  Method original = class_getInstanceMethod (self, @selector (setMString:));
  Method swizzled = class_getInstanceMethod (self, @selector (setMString_swizzling:));
  method_exchangeImplementations (original, swizzled) ;
  original = class_getInstanceMethod (self, @selector (setMBool:));
  swizzled = class_getInstanceMethod (self, @selector (setMBool_swizzling:));
  method_exchangeImplementations (original, swizzled) ;
  original = class_getInstanceMethod (self, @selector (setMColor:));
  swizzled = class_getInstanceMethod (self, @selector (setMColor_swizzling:));
  method_exchangeImplementations (original, swizzled) ;
  original = class_getInstanceMethod (self, @selector (setMOtherEntity:));
  swizzled = class_getInstanceMethod (self, @selector (setMOtherEntity_swizzling:));
  method_exchangeImplementations (original, swizzled) ;
//  NSLog (@"original %p swizzled %p", original, swizzled) ;
  original = class_getInstanceMethod (self, @selector (setMElementArray:));
  swizzled = class_getInstanceMethod (self, @selector (setMElementArray_swizzling:));
  method_exchangeImplementations (original, swizzled) ;
  original = class_getInstanceMethod (self, @selector (setMPoint:));
  swizzled = class_getInstanceMethod (self, @selector (setMPoint_swizzling:));
  method_exchangeImplementations (original, swizzled) ;
}

//-----------------------------------------------------------------------------*

- (instancetype) init {
  self = [super init] ;
  if (self) {
    self.mElementArray = [NSMutableArray arrayWithCapacity:0] ;
  }
  return self ;
}

//-----------------------------------------------------------------------------*

- (void) buildAttributeDescriptionArray: (NSMutableArray *) ioDescriptionArray {
  [super buildAttributeDescriptionArray:ioDescriptionArray] ;
  [ioDescriptionArray addObject:[PMAttributeDescription descriptionWithAttributeName:@"mBool" withConversionFunction:convertBOOLValueToString]] ;
  [ioDescriptionArray addObject:[PMAttributeDescription descriptionWithAttributeName:@"mString"]] ;
  [ioDescriptionArray addObject:[PMAttributeDescription descriptionWithAttributeName:@"mColor"]] ;
  [ioDescriptionArray addObject:[PMAttributeDescription descriptionWithAttributeName:@"mPoint" withConversionFunction:convertMyPointValueToString]] ;
}

//-----------------------------------------------------------------------------*

- (void) buildToOneRelationshipDescriptionArray: (NSMutableArray *) ioDescriptionArray {
  [super buildToOneRelationshipDescriptionArray:ioDescriptionArray] ;
  [ioDescriptionArray addObject:[PMRelationshipDescription
    descriptionWithRelationshipName:@"mOtherEntity" 
    withOppositionRelationshipName:@"mRoot" 
    withIsToManyOppositionRelationship:NO
  ]] ;
}

//-----------------------------------------------------------------------------*

- (void) buildToManyRelationshipDescriptionArray: (NSMutableArray *) ioDescriptionArray {
  [super buildToManyRelationshipDescriptionArray:ioDescriptionArray] ;
  [ioDescriptionArray addObject:[PMRelationshipDescription
    descriptionWithRelationshipName:@"mElementArray" 
    withOppositionRelationshipName:@"mRoot" 
    withIsToManyOppositionRelationship:NO
  ]] ;
}

//-----------------------------------------------------------------------------*

- (void) resetBeforeDeletion {
  self.mOtherEntity = nil ;
  self.mElementArray = nil ;
  [super resetBeforeDeletion] ;
}

//-----------------------------------------------------------------------------*

- (void) setUpWithDefaultValues {
  [super setUpWithDefaultValues] ;
  self.mColor = [NSColor magentaColor] ;
  self.mString = @"Hello" ;
  self.mBool = YES ;
  const MyPoint p = {9, 67} ;
  //self.mPoint = p ;
  [self setValue:[NSValue valueWithBytes:& p objCType:@encode(MyPoint)] forKey:@"mPoint"] ;

  { MyOtherEntity * object = [self.entityManager
      newInstanceOfEntity:[MyOtherEntity class]
      withDefaultValues:YES
    ] ;
    self.mOtherEntity = object ;
    macroAutorelease (object) ;
  }
  { MyElementEntity * object = [MyElementEntity
      newInstanceWithManager:self.entityManager
      withDefaultValues:YES
    ] ;
    macroAutorelease (object) ;
    object.mRoot = self ;
  }
}

//-----------------------------------------------------------------------------*

- (void) saveIntoDictionary: (NSMutableDictionary *) ioDictionary {
  [super saveIntoDictionary:ioDictionary] ;
  storeMyPointInDictionary (self.mPoint, @"mPoint", ioDictionary) ;
  storeNSStringInDictionary (self.mString, @"mString", ioDictionary) ;
  storeBOOLInDictionary (self.mBool, @"mBool", ioDictionary) ;
  storeNSColorInDictionary (self.mColor, @"mColor", ioDictionary) ;
  storeEntityInDictionary (self.mOtherEntity, @"mOtherEntity", ioDictionary) ;
  storeEntityArrayInDictionary (self.mElementArray, @"mElementArray", ioDictionary) ;
}

//-----------------------------------------------------------------------------*

- (void) setUpWithDictionary: (NSDictionary *) inDictionary
         withManagedEntityArray: (NSArray *) inManagedEntityArray {
  [super
    setUpWithDictionary:inDictionary
    withManagedEntityArray:inManagedEntityArray
  ] ;
  self.mPoint = readMyPointFromDictionary (@"mPoint", inDictionary) ;
  self.mString = readNSStringFromDictionary (@"mString", inDictionary) ;
  self.mBool = readBOOLFromDictionary (@"mBool", inDictionary) ;
  self.mColor = readNSColorFromDictionary (@"mColor", inDictionary) ;
  self.mOtherEntity = readEntityFromDictionary (@"mOtherEntity", inDictionary, inManagedEntityArray) ;
  self.mElementArray = readEntityArrayFromDictionary (@"mElementArray", inDictionary, inManagedEntityArray) ;
}

//-----------------------------------------------------------------------------*
//  mElementArray                                                              *
//-----------------------------------------------------------------------------*

- (void) setMElementArray_swizzling: (NSMutableArray *) inNewArray {
  NSMutableArray * currentArray = self.mElementArray ;
  if (inNewArray != currentArray) {
  //--- Register previous value in undo manager
    [self.undoManager
      registerUndoWithTarget:self
      selector:@selector (setMElementArray:)
      object:currentArray
    ] ;
  //--- Set new value
    [self setMElementArray_swizzling:inNewArray] ;
  //--- Removed object set
    NSMutableSet * removedObjectSet = [NSMutableSet new] ;
    [removedObjectSet addObjectsFromArray:currentArray] ;
    [removedObjectSet minusSet:[NSSet setWithArray:inNewArray]] ;
    for (MyElementEntity * object in removedObjectSet) {
      object.mRoot = nil ;
    }
    macroReleaseSetToNil (removedObjectSet) ;
  //--- Added object set
    NSMutableSet * addedObjectSet = [NSMutableSet new] ;
    [addedObjectSet addObjectsFromArray:inNewArray] ;
    [addedObjectSet minusSet:[NSSet setWithArray:currentArray]] ;
    for (MyElementEntity * object in addedObjectSet) {
      object.mRoot = self ;
    }
    macroReleaseSetToNil (addedObjectSet) ;
  }
}

//-----------------------------------------------------------------------------*

- (void) insertObject: (MyElementEntity *) inObject
         inMElementArrayAtIndex: (NSUInteger) inIndex {
  const NSUInteger idx = [mElementArray indexOfObject:inObject] ;
  if (idx == NSNotFound) {
  //---
    [mElementArray insertObject:inObject atIndex:inIndex] ;
  //---
    [self.undoManager
      registerUndoWithTarget:self
      selector:@selector (removeObjectFromMElementArray:)
      object:inObject
    ] ;
  //---
    inObject.mRoot = self ;
  }else if (idx != inIndex) {
  
  }
}

//-----------------------------------------------------------------------------*

- (void) removeObjectFromMElementArrayAtIndex: (NSUInteger) inIndex {
  MyElementEntity * removedObject = [mElementArray objectAtIndex:inIndex] ;
//---
  [mElementArray removeObjectAtIndex:inIndex] ;
//---
  [[self.undoManager prepareWithInvocationTarget:self]
    insertObject:removedObject
    inMElementArrayAtIndex:inIndex
  ] ;
//---
  removedObject.mRoot = nil ;
}

//-----------------------------------------------------------------------------*

- (void) appendToMElementArray: (MyElementEntity *) inObject {
  if (! [self.mElementArray containsObject:inObject]) {
    [self
      insertObject:inObject
      inMElementArrayAtIndex:self.mElementArray.count
    ] ;
  }
}

//-----------------------------------------------------------------------------*

- (void) removeObjectFromMElementArray: (MyElementEntity *) inObject {
  const NSUInteger idx = [self.mElementArray indexOfObject:inObject] ;
  if (NSNotFound != idx) {
    [self removeObjectFromMElementArrayAtIndex:idx] ;
  }
}

//-----------------------------------------------------------------------------*

- (NSUInteger) countOfMElementArray {
  return self.mElementArray.count ;
}

//-----------------------------------------------------------------------------*
//  mOtherEntity                                                               *
//-----------------------------------------------------------------------------*

- (void) setMOtherEntity_swizzling: (MyOtherEntity *) inObject {
  MyOtherEntity * currentObject = self.mOtherEntity ;
  if (inObject != currentObject) {
    // NSLog (@"Enter setMOtherEntity_swizzling") ;
    [self.undoManager
      registerUndoWithTarget:self
      selector:@selector (setMOtherEntity:)
      object:currentObject
    ] ;
    [self setMOtherEntity_swizzling:inObject] ;
    // NSLog (@"Exit setMOtherEntity_swizzling") ;
    currentObject.mRoot = nil ;
    self.mOtherEntity.mRoot = self ;
  }
}

//-----------------------------------------------------------------------------*

- (void) setMString_swizzling: (NSString *) inString {
  if (! [inString isEqualToString:self.mString]) {
    // NSLog (@"Enter setMString_swizzling") ;
    [self.undoManager
      registerUndoWithTarget:self
      selector:@selector (setMString:)
      object:self.mString
    ] ;
    [self setMString_swizzling:inString] ;
    // NSLog (@"Exit setMString_swizzling") ;
  }
}

//-----------------------------------------------------------------------------*

- (void) setMBool_swizzling: (BOOL) inBool {
  if (self.mBool != inBool) {
    // NSLog (@"Enter setMBool_swizzling") ;
    [[self.undoManager prepareWithInvocationTarget:self]
      setMBool:self.mBool
    ] ;
    [self setMBool_swizzling:inBool] ;
    // NSLog (@"Exit setMBool_swizzling") ;
  }
}

//-----------------------------------------------------------------------------*

- (void) setMPoint_swizzling: (MyPoint) inPoint {
  if (! equalMyPoints (self.mPoint, inPoint)) {
    NSLog (@"Enter setMPoint_swizzling [%ld, %ld]", inPoint.x, inPoint.y) ;
    [[self.undoManager prepareWithInvocationTarget:self]
      setMPoint:self.mPoint
    ] ;
    [self setMPoint_swizzling:inPoint] ;
    //NSLog (@"Exit setMPoint_swizzling") ;
  }
}

//-----------------------------------------------------------------------------*

- (void) setMColor_swizzling: (NSColor *) inColor {
  if (! [inColor isEqualTo:self.mColor]) {
    // NSLog (@"Enter setMColor_swizzling") ;
    [self.undoManager
      registerUndoWithTarget:self
      selector:@selector (setMColor:)
      object:self.mColor
    ] ;
    [self setMColor_swizzling:inColor] ;
    // NSLog (@"Exit setMColor_swizzling") ;
  }
}

//-----------------------------------------------------------------------------*

@end

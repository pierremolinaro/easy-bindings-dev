//
//  MyElementEntity.m
//  essai
//
//  Created by Pierre Molinaro on 28/06/13.
//  Copyright (c) 2013 ECN / IRCCyN. All rights reserved.
//

#import "MyElementEntity.h"
#import "MyRootEntity.h"
#import "PMEntityManager.h"
#import "load-store-functions.h"
#import "PMRelationshipDescription.h"
#import "PMAttributeDescription.h"

//-----------------------------------------------------------------------------*

#import <objc/runtime.h>

//-----------------------------------------------------------------------------*

static NSUInteger gCounter ;

//-----------------------------------------------------------------------------*

@implementation MyElementEntity

//-----------------------------------------------------------------------------*

@synthesize mOtherString ;
@synthesize mRoot ;
@synthesize mFlag ;

//-----------------------------------------------------------------------------*

+ (void) load {    
  Method original = class_getInstanceMethod (self, @selector (setMOtherString:));
  Method swizzled = class_getInstanceMethod (self, @selector (setMOtherString_swizzling:));
  method_exchangeImplementations (original, swizzled) ;
  original = class_getInstanceMethod (self, @selector (setMRoot:));
  swizzled = class_getInstanceMethod (self, @selector (setMRoot_swizzling:));
  method_exchangeImplementations (original, swizzled) ;
  original = class_getInstanceMethod (self, @selector (setMFlag:));
  swizzled = class_getInstanceMethod (self, @selector (setMFlag_swizzling:));
  method_exchangeImplementations (original, swizzled) ;
}

//-----------------------------------------------------------------------------*

+ (MyElementEntity *) newInstanceWithManager: (PMEntityManager *) inManager
                      withDefaultValues: (BOOL) inFlag {
  return [inManager newInstanceOfEntity:[MyElementEntity class] withDefaultValues:inFlag] ;
}

//-----------------------------------------------------------------------------*

- (void) buildAttributeDescriptionArray: (NSMutableArray *) ioDescriptionArray {
  [super buildAttributeDescriptionArray:ioDescriptionArray] ;
  [ioDescriptionArray addObject:[PMAttributeDescription descriptionWithAttributeName:@"mOtherString"]] ;
  [ioDescriptionArray addObject:[PMAttributeDescription descriptionWithAttributeName:@"mFlag"]] ;
}

//-----------------------------------------------------------------------------*

- (void) buildToOneRelationshipDescriptionArray: (NSMutableArray *) ioDescriptionArray {
  [super buildToOneRelationshipDescriptionArray:ioDescriptionArray] ;
  [ioDescriptionArray addObject:[PMRelationshipDescription
    descriptionWithRelationshipName:@"mRoot" 
    withOppositionRelationshipName:@"mElementArray" 
    withIsToManyOppositionRelationship:YES
  ]] ;
}

//-----------------------------------------------------------------------------*

- (void) setUpWithDefaultValues {
  [super setUpWithDefaultValues] ;
  self.mFlag = YES ;
  self.mOtherString = [NSString stringWithFormat:@"Element %lu", gCounter] ;
  gCounter ++ ;
}

//-----------------------------------------------------------------------------*

- (void) resetBeforeDeletion {
  self.mRoot = nil ;
  [super resetBeforeDeletion] ;
}

//-----------------------------------------------------------------------------*

- (void) saveIntoDictionary: (NSMutableDictionary *) ioDictionary {
  [super saveIntoDictionary:ioDictionary] ;
  storeBOOLInDictionary (self.mFlag, @"mFlag", ioDictionary) ;
  storeNSStringInDictionary (self.mOtherString, @"mOtherString", ioDictionary) ;
  storeEntityInDictionary (self.mRoot, @"mRoot", ioDictionary) ;
}

//-----------------------------------------------------------------------------*

- (void) setUpWithDictionary: (NSDictionary *) inDictionary
         withManagedEntityArray: (NSArray *) inManagedEntityArray {
  [super 
    setUpWithDictionary:inDictionary
    withManagedEntityArray:inManagedEntityArray
  ] ;
  self.mFlag = readBOOLFromDictionary (@"mFlag", inDictionary) ;
  self.mOtherString = readNSStringFromDictionary (@"mOtherString", inDictionary) ;
  self.mRoot = readEntityFromDictionary (@"mRoot", inDictionary, inManagedEntityArray) ;
}

//-----------------------------------------------------------------------------*

- (void) setMFlag_swizzling: (BOOL) inFlag {
  if (inFlag != self.mFlag) {
    [[self.undoManager prepareWithInvocationTarget:self]
      setValue:[NSNumber numberWithBool:self.mFlag]
      forKeyPath:@"mFlag"
    ] ;
    [self setMFlag_swizzling:inFlag] ;
  }
}

//-----------------------------------------------------------------------------*

- (void) setMOtherString_swizzling:(NSString *) inString {
  if (! [inString isEqualToString:self.mOtherString]) {
    // NSLog (@"Enter setMOtherString_swizzling") ;
    [self.undoManager
      registerUndoWithTarget:self
      selector:@selector (setMOtherString:)
      object:self.mOtherString
    ] ;
    [self setMOtherString_swizzling:inString] ;
    // NSLog (@"Exit setMOtherString_swizzling") ;
  }
}

//-----------------------------------------------------------------------------*

- (void) setMRoot_swizzling: (MyRootEntity *) inObject {
  MyRootEntity * currentObject = self.mRoot ;
  if (inObject != currentObject) {
    // NSLog (@"Enter setMRoot_swizzling") ;
    [self.undoManager
      registerUndoWithTarget:self
      selector:@selector (setMRoot:)
      object:currentObject
    ] ;
    [self setMRoot_swizzling:inObject] ;
    // NSLog (@"Exit setMRoot_swizzling") ;
    [currentObject removeObjectFromMElementArray:self] ;
    [inObject appendToMElementArray:self] ;
  }
}

//-----------------------------------------------------------------------------*

@end

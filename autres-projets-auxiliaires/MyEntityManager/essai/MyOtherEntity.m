//
//  MyOtherEntity.m
//  essai
//
//  Created by Pierre Molinaro on 28/06/13.
//  Copyright (c) 2013 ECN / IRCCyN. All rights reserved.
//
//-----------------------------------------------------------------------------*

#import "MyOtherEntity.h"
#import "MyRootEntity.h"
#import "PMEntityManager.h"
#import "load-store-functions.h"
#import "PMRelationshipDescription.h"
#import "PMAttributeDescription.h"

//-----------------------------------------------------------------------------*

#import <objc/runtime.h>

//-----------------------------------------------------------------------------*

@implementation MyOtherEntity

//-----------------------------------------------------------------------------*

@synthesize mOtherString ;
@synthesize mRoot ;

//-----------------------------------------------------------------------------*

+ (void) load {    
  Method original = class_getInstanceMethod (self, @selector (setMOtherString:));
  Method swizzled = class_getInstanceMethod (self, @selector (setMOtherString_swizzling:));
  method_exchangeImplementations (original, swizzled) ;
  original = class_getInstanceMethod (self, @selector (setMRoot:));
  swizzled = class_getInstanceMethod (self, @selector (setMRoot_swizzling:));
  method_exchangeImplementations (original, swizzled) ;
}

//-----------------------------------------------------------------------------*

- (void) buildAttributeDescriptionArray: (NSMutableArray *) ioDescriptionArray {
  [super buildAttributeDescriptionArray:ioDescriptionArray] ;
  [ioDescriptionArray addObject:[PMAttributeDescription descriptionWithAttributeName:@"mOtherString"]] ;
}

//-----------------------------------------------------------------------------*

- (void) buildToOneRelationshipDescriptionArray: (NSMutableArray *) ioDescriptionArray {
  [super buildToOneRelationshipDescriptionArray:ioDescriptionArray] ;
  [ioDescriptionArray addObject:[PMRelationshipDescription
    descriptionWithRelationshipName:@"mRoot" 
    withOppositionRelationshipName:@"mOtherEntity" 
    withIsToManyOppositionRelationship:NO
  ]] ;
}

//-----------------------------------------------------------------------------*

+ (MyOtherEntity *) newInstanceWithManager: (PMEntityManager *) inManager
                    withDefaultValues: (BOOL) inFlag {
  return [inManager newInstanceOfEntity:[MyOtherEntity class] withDefaultValues:inFlag] ;
}

//-----------------------------------------------------------------------------*

- (void) setUpWithDefaultValues {
  [super setUpWithDefaultValues] ;
  self.mOtherString = @"World" ;
}

//-----------------------------------------------------------------------------*

- (void) resetBeforeDeletion {
  self.mRoot = nil ;
  [super resetBeforeDeletion] ;
}

//-----------------------------------------------------------------------------*

- (void) saveIntoDictionary: (NSMutableDictionary *) ioDictionary {
  [super saveIntoDictionary:ioDictionary] ;
  storeNSStringInDictionary (self.mOtherString, @"mOtherString", ioDictionary) ;
}

//-----------------------------------------------------------------------------*

- (void) setUpWithDictionary: (NSDictionary *) inDictionary
         withManagedEntityArray: (NSArray *) inManagedEntityArray {
  [super 
    setUpWithDictionary:inDictionary
    withManagedEntityArray:inManagedEntityArray
  ] ;
  self.mOtherString = readNSStringFromDictionary (@"mOtherString", inDictionary) ;
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
    currentObject.mOtherEntity = nil ;
    inObject.mOtherEntity = self ;
  }
}

//-----------------------------------------------------------------------------*

@end

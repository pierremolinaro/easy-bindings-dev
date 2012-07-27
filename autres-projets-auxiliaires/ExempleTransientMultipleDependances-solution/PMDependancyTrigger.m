//
//  PMDependancyTrigger.m
//  ExempleTransientMultipleDependances
//
//  Created by Pierre Molinaro on 27/07/12.
//  Copyright (c) 2012 ECN / IRCCyN. All rights reserved.
//
//-----------------------------------------------------------------------------*

#import "PMDependancyTrigger.h"

//-----------------------------------------------------------------------------*

static PMDependancyTrigger * gDependancyTrigger ;

static NSString * kTriggeredPropertyArray [OBSERVER_ARRAY_SIZE] = {
  @"mNomComplet",
  @"mTexteDependant"
} ;

//-----------------------------------------------------------------------------*

@implementation PMDependancyTrigger

//-----------------------------------------------------------------------------*

+ (void) enterTriggerForObject: (NSObject *) inObject
         transientIndex: (const NSUInteger) inIndex {
  if (nil == gDependancyTrigger) {
    gDependancyTrigger = [PMDependancyTrigger new] ;
  }
  [gDependancyTrigger
    enterTriggerForObject:inObject
    transientIndex:inIndex
  ] ;
}

//-----------------------------------------------------------------------------*

- (id) init {
  self = [super init] ;
  if (self) {
    for (NSUInteger i=0 ; i<OBSERVER_ARRAY_SIZE ; i++) {
      mObserverObjectArray [i] = [NSMutableSet new] ;
    }
  }
  return self ;
}

//-----------------------------------------------------------------------------*

- (void) enterTriggerForObject: (NSObject *) inObject
         transientIndex: (const NSUInteger) inIndex {
  [mObserverObjectArray [inIndex] addObject:inObject] ;
  if (! mDeferredMessageSent) {
    mDeferredMessageSent = YES ;
    [[NSRunLoop currentRunLoop]
      performSelector:@selector (triggerChange)
      target:self
      argument:nil
      order:NSUIntegerMax
      modes:[NSArray arrayWithObject:NSDefaultRunLoopMode]
    ] ;
  }
}

//-----------------------------------------------------------------------------*

- (void) triggerChange {
  for (NSUInteger i=0 ; i<OBSERVER_ARRAY_SIZE ; i++) {
    NSMutableSet * s = mObserverObjectArray [i] ;
    mObserverObjectArray [i] = [NSMutableSet new] ;
    for (NSObject * object in s) {
      [object willChangeValueForKey:kTriggeredPropertyArray [i]] ;
      [object  didChangeValueForKey:kTriggeredPropertyArray [i]] ;
    }
  }
  mDeferredMessageSent = NO ;
}

//-----------------------------------------------------------------------------*

@end

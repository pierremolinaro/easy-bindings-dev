//
//  PMAppDelegate.m
//  07-simple-classes
//
//  Created by Pierre Molinaro on 13/11/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//
//----------------------------------------------------------------------------*

#import "PMAppDelegate.h"
#import "MyOtherClass.h"

//----------------------------------------------------------------------------*

@implementation PMAppDelegate

@synthesize window = _window;

//----------------------------------------------------------------------------*

- (void) applicationDidFinishLaunching:(NSNotification *)aNotification {
}

//----------------------------------------------------------------------------*

- (void) awakeFromNib {
  mObject = [[MyOtherClass alloc]
    initWithMyBool:YES
    withMyInteger:0
    withMyString:@"azerty"
    withChose:NO
  ] ;
//---
  [mSchmurtzTextField
    bind:@"value"
    toObject:mObject
    withKeyPath:@"schmurtz"
    options:nil
  ] ;
}

//----------------------------------------------------------------------------*

- (IBAction) incrementMyInteger32: (id) inSender {
  mObject.myInteger ++ ;
  mObject.chose = YES ;
}

//----------------------------------------------------------------------------*

@end

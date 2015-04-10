//
//  PMBackgroudView.m
//  reservationEncarts
//
//  Created by Pierre Molinaro on 20/09/2014.
//  Copyright (c) 2014 Pierre Molinaro. All rights reserved.
//
//---------------------------------------------------------------------------------------------------------------------*

#import "PMBackgroundView.h"
#import "AppDelegate.h"

//---------------------------------------------------------------------------------------------------------------------*

@implementation PMBackgroundView

//---------------------------------------------------------------------------------------------------------------------*

- (void) drawRect: (NSRect) inDirtyRect {
  if ([gAppDelegate enProduction]) {
    [[NSColor windowBackgroundColor] setFill] ;
  }else{
    [[NSColor yellowColor] setFill] ;
  }
  NSRectFill (inDirtyRect) ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (BOOL) isOpaque {
  return YES ; // ! [gAppDelegate enProduction] ;
}

//---------------------------------------------------------------------------------------------------------------------*

@end

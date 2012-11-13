//
//  PMAppDelegate.h
//  07-simple-classes
//
//  Created by Pierre Molinaro on 13/11/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class MyOtherClass ;

@interface PMAppDelegate : NSObject <NSApplicationDelegate> {
  @private MyOtherClass * mObject ;
  @private IBOutlet NSTextField * mSchmurtzTextField ;
}

@property (assign) IBOutlet NSWindow *window;

- (IBAction) incrementMyInteger32: (id) inSender ;

@end

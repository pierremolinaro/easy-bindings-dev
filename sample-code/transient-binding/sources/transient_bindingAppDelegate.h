//
//  transient_bindingAppDelegate.h
//  transient-binding
//
//  Created by Pierre Molinaro on 24/06/11.
//  Copyright 2011 ECN / IRCCyN. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface transient_bindingAppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow *window;
}

@property (assign) IBOutlet NSWindow *window;

@end

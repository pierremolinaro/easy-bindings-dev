//
//  color_bindingAppDelegate.h
//  color-binding
//
//  Created by Pierre Molinaro on 24/06/11.
//  Copyright 2011 ECN / IRCCyN. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface color_bindingAppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow *window;
}

@property (assign) IBOutlet NSWindow *window;

@end

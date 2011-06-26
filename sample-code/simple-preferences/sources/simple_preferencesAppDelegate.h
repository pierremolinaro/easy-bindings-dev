//
//  simple_preferencesAppDelegate.h
//  simple-preferences
//
//  Created by Pierre Molinaro on 23/06/11.
//  Copyright 2011 ECN / IRCCyN. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface simple_preferencesAppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow *window;
}

@property (assign) IBOutlet NSWindow *window;

@end

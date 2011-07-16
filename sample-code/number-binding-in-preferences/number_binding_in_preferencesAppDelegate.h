//
//  number_binding_in_preferencesAppDelegate.h
//  number-binding-in-preferences
//
//  Created by Pierre Molinaro on 16/07/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface number_binding_in_preferencesAppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow *window;
}

@property (assign) IBOutlet NSWindow *window;

@end

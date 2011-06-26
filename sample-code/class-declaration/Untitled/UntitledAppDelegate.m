//
//  UntitledAppDelegate.m
//  Untitled
//
//  Created by Pierre Molinaro on 19/06/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "UntitledAppDelegate.h"
#import "MyClass.h"
#import "managed-object-model.h"
#import "MyOtherEntityClass.h"
#import "PMPrefs.h"

@implementation UntitledAppDelegate

@synthesize window;

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification {
  /* [mTextField
    bind:@"value"
    toObject:[g_PMPrefs rootObjectController]
    withKeyPath:@"selection.myString"
    options:nil
  ] ; */
  /* [mIntTextField
    bind:@"value"
    toObject:[g_PMPrefs rootObjectController]
    withKeyPath:@"selection.myInteger"
    options:nil
  ] ;
   */}


- (void) observeValueForKeyPath: (NSString *) inKeyPath
         ofObject: (id) inObject
         change: (NSDictionary *) inChange
         context:(void *) inContext {
  NSLog (@"inKeyPath '%@'", inKeyPath) ;
}
@end

//
//  binding_introspectionAppDelegate.h
//  binding-introspection
//
//  Created by Pierre Molinaro on 20/06/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface binding_introspectionAppDelegate : NSObject <NSApplicationDelegate> {
  NSWindow *window;
  @private NSObject * mBindingObject ;
  @private NSSet * mOptionsToIgnoreSet ;
  @private NSSet * mPlaceHolders ;
  @private NSSet * mSilentlyIgnoredOptions ;
  @private NSMutableString * mGeneratedCode ;
  @private NSDictionary * mBindingOptionTypes ;
  @private NSDictionary * mBindingPlaceholderTypes ;
}

@property (assign) IBOutlet NSWindow *window;

@end

//----------------------------------------------------------------------------*

#import "PMAppDelegate.h"
#import "PMDebug.h"
#import "easy-bindings-utilities.h"

//----------------------------------------------------------------------------*

@implementation PMAppDelegate

//----------------------------------------------------------------------------*

- (void) applicationDidFinishLaunching: (NSNotification *) aNotification {
  mDebugObject = [PMDebug new] ;
  const BOOL ok = [NSBundle loadNibNamed:@"PMDebug" owner:mDebugObject] ;
  if (! ok) {
    presentErrorWindow (__FILE__, __LINE__, @"Cannot load 'PMDebug' nib file") ;
  }
}

//----------------------------------------------------------------------------*

@end

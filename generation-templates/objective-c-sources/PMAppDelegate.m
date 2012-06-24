//----------------------------------------------------------------------------*

#import "PMAppDelegate.h"
#import "PMDebug.h"
#import "easy-bindings-utilities.h"

//----------------------------------------------------------------------------*

@implementation PMAppDelegate

//----------------------------------------------------------------------------*

- (id) init {
  self = [super init] ;
  if (self) {
    mDebugObject = [PMDebug new] ;
  }
  return self ;
}

//----------------------------------------------------------------------------*

- (void) applicationDidFinishLaunching: (NSNotification *) aNotification {
  const BOOL ok = [NSBundle loadNibNamed:@"PMDebug" owner:mDebugObject] ;
  if (! ok) {
    presentErrorWindow (__FILE__, __LINE__, @"Cannot load 'PMDebug' nib file") ;
  }
}

//----------------------------------------------------------------------------*

@end

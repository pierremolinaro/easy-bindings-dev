//----------------------------------------------------------------------------*

#import "PMAbstractPreferences.h"
#import "PMDebug.h"

//----------------------------------------------------------------------------*

@implementation PMAbstractPreferences

//----------------------------------------------------------------------------*

- (PMAbstractPreferences *) init {
  self = [super init] ;
  if (self) {
    macroNoteObjectAllocation (self) ;
  }
  return self ;
}

//----------------------------------------------------------------------------*

- (void) dealloc {
  macroNoteObjectDeallocation (self) ;
}

//----------------------------------------------------------------------------*

- (void) pmInstallObserversForTransients {
}

//----------------------------------------------------------------------------*

- (void) pmUninstallObserversForTransients {
}

//----------------------------------------------------------------------------*

@end

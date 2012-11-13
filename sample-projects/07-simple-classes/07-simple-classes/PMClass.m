//---------------------------------------------------------------------------*

#import "PMClass.h"
#import "PMDebug.h"

//---------------------------------------------------------------------------*

@implementation PMClass

//---------------------------------------------------------------------------*

- (id) init {
  self = [super init] ;
  if (self) {
    macroNoteObjectAllocation (self) ;
    [[NSRunLoop mainRunLoop]
      performSelector:@selector (pmInstallObserversForTransients)
      target:self
      argument:nil
      order:NSUIntegerMax
      modes:[NSArray arrayWithObject:NSDefaultRunLoopMode]
    ] ;
  }
  return self ;
}

//---------------------------------------------------------------------------*

- (void) pmInstallObserversForTransients {
}

//---------------------------------------------------------------------------*

- (void) dealloc {
  [self pmUninstallObserversForTransients] ;
  macroNoteObjectDeallocation (self) ;
}

//---------------------------------------------------------------------------*

- (void) pmUninstallObserversForTransients {
}

//---------------------------------------------------------------------------*

@end

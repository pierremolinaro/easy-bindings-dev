//----------------------------------------------------------------------------*

#import "PMAbstractPersistentDocument.h"
#import "PMDebug.h"

//----------------------------------------------------------------------------*

@implementation PMAbstractPersistentDocument

//----------------------------------------------------------------------------*

- (PMAbstractPersistentDocument *) init {
  self = [super init] ;
  if (self) {
    macroNoteObjectAllocation (self) ;
    mTriggeredTransientSet = [NSMutableSet new] ;
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

- (void) pmNotifyChangeForTransientProperty: (NSString *) inPropertyName {
  // NSLog (@"%s, %@", __PRETTY_FUNCTION__, inPropertyName) ;
  [mTriggeredTransientSet addObject:inPropertyName] ;
  if (! mActionPosted) {
    mActionPosted = YES ;
    [[NSRunLoop currentRunLoop]
      performSelector:@selector (triggerTransient)
      target:self
      argument:nil
      order:NSUIntegerMax
      modes:[NSArray arrayWithObject:NSDefaultRunLoopMode]
    ] ;
  }
}

//----------------------------------------------------------------------------*

- (void) triggerTransient {
  // NSLog (@"%s", __PRETTY_FUNCTION__) ;
  mActionPosted = NO ;
  NSSet * triggeredTransientSet = mTriggeredTransientSet.copy ;
  [mTriggeredTransientSet removeAllObjects] ;
  for (NSString * key in triggeredTransientSet) {
    [self willChangeValueForKey:key] ;
    [self  didChangeValueForKey:key] ;
  }
}

//----------------------------------------------------------------------------*

@end

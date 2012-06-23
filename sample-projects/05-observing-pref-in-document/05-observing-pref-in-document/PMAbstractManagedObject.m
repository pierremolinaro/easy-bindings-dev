//----------------------------------------------------------------------------*

#import "PMAbstractManagedObject.h"
#import "PMDebug.h"

//----------------------------------------------------------------------------*

@implementation PMAbstractManagedObject

//----------------------------------------------------------------------------*

- (id) initWithEntity:(NSEntityDescription *) inEntity
       insertIntoManagedObjectContext:(NSManagedObjectContext *) inMangedObjectContext {
  self = [super 
    initWithEntity:inEntity
    insertIntoManagedObjectContext:inMangedObjectContext
  ] ;
  if (self) {
    macroNoteObjectAllocation (self) ;
    mTriggeredTransientSet = [NSMutableSet new] ;
    [self pmInstallObserversForTransients] ;
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

//----------------------------------------------------------------------------*

#import "PMDebug.h"
#import "easy-bindings-utilities.h"

//----------------------------------------------------------------------------*

static PMDebug * gDebugObject ;

//----------------------------------------------------------------------------*

void macroNoteObjectAllocation (NSObject * inObject) {
  if (nil == gDebugObject) {
    gDebugObject = [PMDebug new] ;
    const BOOL ok = [NSBundle loadNibNamed:@"PMDebug" owner:gDebugObject] ;
    if (! ok) {
      presentErrorWindow (__FILE__, __LINE__, @"Cannot load 'PMDebug' nib file") ;
    }
  }
  [gDebugObject pmNoteObjectAllocation:inObject] ;
}

//----------------------------------------------------------------------------*

void macroNoteObjectDeallocation (NSObject * inObject) {
  [gDebugObject pmNoteObjectDeallocation:inObject] ;
}

//----------------------------------------------------------------------------*


@implementation PMDebug

//----------------------------------------------------------------------------*

@synthesize mAllocationStatsWindowVisible ;
@synthesize mAllocatedObjectCount ;

//----------------------------------------------------------------------------*

- (id) init {
//  NSLog (@"%s %p", __PRETTY_FUNCTION__, self) ;
  self = [super init] ;
  if (self) {
    mAllocatedObjectCountByClass = [NSCountedSet new] ;
    mTotalAllocatedObjectCountByClass = [NSCountedSet new] ;
  //---
    [[NSNotificationCenter defaultCenter]
      addObserver:self
      selector:@selector(applicationWillTerminateAction:)
      name:NSApplicationWillTerminateNotification
      object:nil
    ] ;
  }
  return self ;
}

//----------------------------------------------------------------------------*

- (void) setAllocationStatsWindowVisibility {
  if (self.mAllocationStatsWindowVisible) {
    [mAllocationStatsWindow makeKeyAndOrderFront:nil] ;
  }else{
    [mAllocationStatsWindow orderOut:nil] ;
  }
}

//----------------------------------------------------------------------------*

- (void) awakeFromNib {
  // NSLog (@"%s %p %p %p", __PRETTY_FUNCTION__, self, mDebugMenu, [NSApp mainMenu]) ;
  NSMenuItem * item = [[NSMenuItem alloc]
    initWithTitle:@"Schmutrz"
    action:NULL
    keyEquivalent:@""
  ] ;
  [item setSubmenu:mDebugMenu] ;
  [[NSApp mainMenu] addItem:item] ;
//--- Allocation Window visibility
  self.mAllocationStatsWindowVisible = [[NSUserDefaults standardUserDefaults]
    boolForKey:@"PMDebug:allocationStatsWindowVisible"
  ] ;
  [self setAllocationStatsWindowVisibility] ;
//--- Allocation count text field
  [mAllocatedObjectCountTextField
    bind:@"value"
    toObject:self
    withKeyPath:@"mAllocatedObjectCount"
    options:nil
  ] ;
}

//----------------------------------------------------------------------------*

- (IBAction) allocationStatsAction:(id)sender {
  self.mAllocationStatsWindowVisible = ! self.mAllocationStatsWindowVisible ;
  [self setAllocationStatsWindowVisibility] ;
}

//----------------------------------------------------------------------------*
//    applicationWillTerminateAction:                                         *
//----------------------------------------------------------------------------*

- (void) applicationWillTerminateAction: (NSNotification *) inNotification {
  NSUserDefaults * ud = [NSUserDefaults standardUserDefaults] ;
  [ud
    setBool:self.mAllocationStatsWindowVisible
    forKey:@"PMDebug:allocationStatsWindowVisible"
  ] ;
}

//----------------------------------------------------------------------------*
//    triggerRefreshAllocationStatsDisplay                                    *
//----------------------------------------------------------------------------*

- (void) triggerRefreshAllocationStatsDisplay {
  if (! mRefreshStatsHasTriggered) {
    mRefreshStatsHasTriggered = YES ;
    [[NSRunLoop currentRunLoop]
      performSelector:@selector (refreshAllocationStats)
      target:self
      argument:nil
      order:NSUIntegerMax
      modes:[NSArray arrayWithObject:NSDefaultRunLoopMode]
    ] ;
  }
}

//----------------------------------------------------------------------------*
//    pmNoteObjectAllocation:                                                 *
//----------------------------------------------------------------------------*

- (void) pmNoteObjectAllocation: (NSObject *) inObject {
  mLiveAllocatedObjectCount ++ ;
  NSString * objectClassName = inObject.className ;
  //NSLog (@"objectClassName %@", objectClassName) ;
  [mAllocatedObjectCountByClass addObject:objectClassName] ;
  [mTotalAllocatedObjectCountByClass addObject:objectClassName] ;
  [self triggerRefreshAllocationStatsDisplay] ;
}

//----------------------------------------------------------------------------*
//    pmNoteObjectDeallocation:                                               *
//----------------------------------------------------------------------------*

- (void) pmNoteObjectDeallocation: (NSObject *) inObject {
  mLiveAllocatedObjectCount -- ;
  NSString * objectClassName = inObject.className ;
  // NSLog (@"DEALLOC objectClassName %@", objectClassName) ;
  [mAllocatedObjectCountByClass removeObject:objectClassName] ;
  [self triggerRefreshAllocationStatsDisplay] ;
}

//----------------------------------------------------------------------------*
//    refreshAllocationStats                                                  *
//----------------------------------------------------------------------------*

- (void) refreshAllocationStats {
  mRefreshStatsHasTriggered = NO ;
//---
  self.mAllocatedObjectCount = mLiveAllocatedObjectCount ;
//---
  NSMutableArray * array = [NSMutableArray new] ;
  for (NSString * className in [mTotalAllocatedObjectCountByClass.allObjects sortedArrayUsingSelector:@selector(compare:)]) {
    [array addObject: [NSDictionary
      dictionaryWithObjectsAndKeys:
        className, @"classname",
        [NSNumber numberWithUnsignedInteger:[mTotalAllocatedObjectCountByClass countForObject:className]], @"live",
        [NSNumber numberWithUnsignedInteger:[mAllocatedObjectCountByClass countForObject:className]], @"allCount",
        nil
      ]
    ] ;
  }
//---
  mAllocationStatsDataSource = array ;
  [mStatsTableView setDataSource:self] ;
  [mStatsTableView reloadData] ;
}

//----------------------------------------------------------------------------*
//    T A B L E   V I E W    D A T A    S O U R C E                           *
//----------------------------------------------------------------------------*

- (id) tableView: (NSTableView *) aTableView
       objectValueForTableColumn: (NSTableColumn *) aTableColumn
       row: (NSInteger) rowIndex {
  NSDictionary * theRecord = [mAllocationStatsDataSource objectAtIndex:(NSUInteger) rowIndex];
  return [theRecord valueForKey:aTableColumn.identifier] ;
}

//---------------------------------------------------------------------------*

- (NSInteger) numberOfRowsInTableView: (NSTableView *) aTableView {
  return (NSInteger) [mAllocationStatsDataSource count] ;
}

//----------------------------------------------------------------------------*

@end


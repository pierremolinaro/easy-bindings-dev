#ifdef PM_COCOA_DEBUG

//----------------------------------------------------------------------------*

#import "PMAllocationDebug.h"
#import "easy-bindings-utilities.h"

//----------------------------------------------------------------------------*

static PMAllocationDebug * gDebugObject ;

//----------------------------------------------------------------------------*

@implementation PMAllocationDebug

//----------------------------------------------------------------------------*

@synthesize mAllocationStatsWindowVisibleAtLaunch ;
@synthesize mAllocatedObjectCount ;
@synthesize mTotalAllocatedObjectCount ;
@synthesize mDisplayFilter ;

//----------------------------------------------------------------------------*
//    init                                                                    *
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
  //---
    [[NSRunLoop mainRunLoop]
      performSelector:@selector (pmInstallDebugMenu)
      target:self
      argument:nil
      order:NSUIntegerMax
      modes:[NSArray arrayWithObject:NSDefaultRunLoopMode]
    ] ;
  }
  return self ;
}

//----------------------------------------------------------------------------*
//    pmInstallDebugMenu                                                      *
//----------------------------------------------------------------------------*

- (void) pmInstallDebugMenu {
  NSMenuItem * item = [[NSMenuItem alloc]
    initWithTitle:@""
    action:NULL
    keyEquivalent:@""
  ] ;
  [item setSubmenu:mDebugMenu] ;
  [[NSApp mainMenu] addItem:item] ;
  macroReleaseSetToNil (item) ;
}

//----------------------------------------------------------------------------*
//    addDebugMenuItem:                                                       *
//----------------------------------------------------------------------------*

- (void) addDebugMenuItem: (NSMenuItem *) inMenuItem {
  [mDebugMenu addItem:inMenuItem] ;
}

//----------------------------------------------------------------------------*
//    awakeFromNib                                                            *
//----------------------------------------------------------------------------*

- (void) awakeFromNib {
  // NSLog (@"%s %p %p", __PRETTY_FUNCTION__, self, mDebugMenu) ;
//--- Allocation Window visibility
  self.mAllocationStatsWindowVisibleAtLaunch = [[NSUserDefaults standardUserDefaults]
    boolForKey:@"PMAllocationDebug:allocationStatsWindowVisible"
  ] ;
  self.mDisplayFilter = [[NSUserDefaults standardUserDefaults]
    integerForKey:@"PMAllocationDebug:allocationStatsDisplayFilter"
  ] ;
//--- Allocation stats window visibility at Launch
  if (self.mAllocationStatsWindowVisibleAtLaunch) {
    [mAllocationStatsWindow makeKeyAndOrderFront:nil] ;
  }
//--- Bindings
  [mAllocationStatsWindowVisibleAtLaunchCheckbox
    bind:@"value"
    toObject:self
    withKeyPath:@"mAllocationStatsWindowVisibleAtLaunch"
    options:nil
  ] ;
  [mCurrentlyAllocatedObjectCountTextField
    bind:@"value"
    toObject:self
    withKeyPath:@"mAllocatedObjectCount"
    options:nil
  ] ;
  [mTotalAllocatedObjectCountTextField
    bind:@"value"
    toObject:self
    withKeyPath:@"mTotalAllocatedObjectCount"
    options:nil
  ] ;
  [mDisplayFilterPopUpButton
    bind:@"selectedIndex"
    toObject:self
    withKeyPath:@"mDisplayFilter"
    options:nil
  ] ;
}

//----------------------------------------------------------------------------*
//    applicationWillTerminateAction:                                         *
//----------------------------------------------------------------------------*

- (void) applicationWillTerminateAction: (NSNotification *) inNotification {
  // NSLog (@"%s", __PRETTY_FUNCTION__) ;
  // NSLog (@"%d", self.mAllocationStatsWindowVisibleAtLaunch) ;
  NSUserDefaults * ud = [NSUserDefaults standardUserDefaults] ;
  [ud
    setBool:self.mAllocationStatsWindowVisibleAtLaunch
    forKey:@"PMAllocationDebug:allocationStatsWindowVisible"
  ] ;
  [ud
    setInteger:self.mDisplayFilter
    forKey:@"PMAllocationDebug:allocationStatsDisplayFilter"
  ] ;
}

//----------------------------------------------------------------------------*
//    triggerRefreshAllocationStatsDisplay                                    *
//----------------------------------------------------------------------------*

- (void) triggerRefreshAllocationStatsDisplay {
  if (! mRefreshStatsHasTriggered) {
    mRefreshStatsHasTriggered = YES ;
    [[NSRunLoop mainRunLoop]
      performSelector:@selector (refreshAllocationStats)
      target:self
      argument:nil
      order:NSUIntegerMax
      modes:[NSArray arrayWithObject:NSDefaultRunLoopMode]
    ] ;
  }
}


//----------------------------------------------------------------------------*
//    didChangeValueForKey:                                                   *
//----------------------------------------------------------------------------*

- (void) didChangeValueForKey: (NSString *) inKey {
  [super didChangeValueForKey:inKey] ;
  if ([inKey isEqualToString:@"mDisplayFilter"]) {
    [self triggerRefreshAllocationStatsDisplay] ;
  }
}

//----------------------------------------------------------------------------*
//    pmNoteObjectAllocation:                                                 *
//----------------------------------------------------------------------------*

- (void) pmNoteObjectAllocation: (NSString *) inObjectClassName {
  //NSLog (@"objectClassName %@", inObjectClassName) ;
  [mAllocatedObjectCountByClass addObject:inObjectClassName] ;
  [mTotalAllocatedObjectCountByClass addObject:inObjectClassName] ;
  [self triggerRefreshAllocationStatsDisplay] ;
}

//----------------------------------------------------------------------------*
//    pmNoteObjectDeallocation:                                               *
//----------------------------------------------------------------------------*

- (void) pmNoteObjectDeallocation: (NSString *) inObjectClassName {
  // NSLog (@"DEALLOC objectClassName %@", inObjectClassName) ;
  [mAllocatedObjectCountByClass removeObject:inObjectClassName] ;
  [self triggerRefreshAllocationStatsDisplay] ;
}

//----------------------------------------------------------------------------*
//    refreshAllocationStats                                                  *
//----------------------------------------------------------------------------*

- (void) refreshAllocationStats {
  mRefreshStatsHasTriggered = NO ;
//---
  NSUInteger liveObjectCount = 0 ;
  NSUInteger totalObjectCount = 0 ;
//---
  NSMutableArray * array = [NSMutableArray new] ;
  for (NSString * className in [mTotalAllocatedObjectCountByClass.allObjects sortedArrayUsingSelector:@selector(compare:)]) {
    const NSUInteger liveByClass = [mAllocatedObjectCountByClass countForObject:className] ;
    const NSUInteger totalByClass = [mTotalAllocatedObjectCountByClass countForObject:className] ;
    liveObjectCount += liveByClass ;
    totalObjectCount += totalByClass ;
    if ((totalByClass != 0) || (self.mDisplayFilter == 0)) {
      [array addObject: [NSDictionary
        dictionaryWithObjectsAndKeys:
          className, @"classname",
          [NSNumber numberWithUnsignedInteger:totalByClass], @"allCount",
          [NSNumber numberWithUnsignedInteger:liveByClass], @"live",
          nil
        ]
      ] ;
    }
  }
//---
  self.mAllocatedObjectCount = liveObjectCount ;
  self.mTotalAllocatedObjectCount = totalObjectCount ;
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
//    S H O W     A L L O C A T I O N    S T A T S    W I N D O W             *
//----------------------------------------------------------------------------*

- (void) pmShowAllocationStatsWindow {
  [mStatsTableView.window makeKeyAndOrderFront:nil] ;
}

//----------------------------------------------------------------------------*

@end

//----------------------------------------------------------------------------*
//    R O U T I N E S                                                         *
//----------------------------------------------------------------------------*

void routineNoteObjectAllocation (NSObject * inObject) {
  if (nil == gDebugObject) {
    gDebugObject = [PMAllocationDebug new] ;
    const BOOL ok = [NSBundle loadNibNamed:@"PMAllocationDebug" owner:gDebugObject] ;
    if (! ok) {
      presentErrorWindow (__FILE__, __LINE__, @"Cannot load 'PMAllocationDebug' nib file") ;
    }
  }
  [[NSRunLoop mainRunLoop]
    performSelector:@selector (pmNoteObjectAllocation:)
    target:gDebugObject
    argument:inObject.className
    order:NSUIntegerMax
    modes:[NSArray arrayWithObject:NSRunLoopCommonModes]
  ] ;
}

//----------------------------------------------------------------------------*

void routineNoteObjectDeallocation (NSObject * inObject) {
  [[NSRunLoop mainRunLoop]
    performSelector:@selector (pmNoteObjectDeallocation:)
    target:gDebugObject
    argument:inObject.className
    order:NSUIntegerMax
    modes:[NSArray arrayWithObject:NSRunLoopCommonModes]
  ] ;
}

//----------------------------------------------------------------------------*

void routineShowAllocationStatsWindow (void) {
  [gDebugObject pmShowAllocationStatsWindow] ;
}

//----------------------------------------------------------------------------*

#ifdef PM_COCOA_DEBUG
  void addItemToDebugMenu (NSMenuItem * inMenuItem) {
    if (nil == gDebugObject) {
      gDebugObject = [PMAllocationDebug new] ;
      const BOOL ok = [NSBundle loadNibNamed:@"PMAllocationDebug" owner:gDebugObject] ;
      if (! ok) {
        presentErrorWindow (__FILE__, __LINE__, @"Cannot load 'PMAllocationDebug' nib file") ;
      }
    }
    [[NSRunLoop mainRunLoop]
      performSelector:@selector (addDebugMenuItem:)
      target:gDebugObject
      argument:inMenuItem
      order:NSUIntegerMax
      modes:[NSArray arrayWithObject:NSDefaultRunLoopMode]
    ] ;

  }
#endif

//----------------------------------------------------------------------------*

#endif


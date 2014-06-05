import Cocoa

var gDebugObject : PMAllocationDebug! = nil

//----------------------------------------------------------------------------*

@objc(PMAllocationDebug) class PMAllocationDebug : NSObject {
  @IBOutlet var mPerformSnapShotButton  : NSButton
  @IBOutlet var mAllocationStatsWindowVisibleAtLaunchCheckbox : NSButton
  @IBOutlet var mDisplayFilterPopUpButton : NSPopUpButton
  @IBOutlet var mDebugMenu : NSMenu
  @IBOutlet var mAllocationStatsWindow : NSWindow
  @IBOutlet var mCurrentlyAllocatedObjectCountTextField : NSTextField
  @IBOutlet var mTotalAllocatedObjectCountTextField : NSTextField
  @IBOutlet var mStatsTableView : NSTableView

  var mAllocationStatsWindowVisibleAtLaunch = true
  var mAllocatedObjectCount = 0
  var mTotalAllocatedObjectCount = 0
  var mDisplayFilter : Int = 0 {
    didSet {
      self.triggerRefreshAllocationStatsDisplay ()
    }
  }
  var mAllocatedObjectCountByClass = NSCountedSet ()
  var mTotalAllocatedObjectCountByClass = NSCountedSet ()
  var mSnapShotDictionary = NSMutableDictionary ()
  var mRefreshStatsHasTriggered = false
  var mAllocationStatsDataSource : NSDictionary [] = []

  //----------------------------------------------------------------------------*
  //    init                                                                    *
  //----------------------------------------------------------------------------*
    
  init () {
      //  NSLog (@"%s %p", __PRETTY_FUNCTION__, self) ;
    super.init ()
  //  assert
    assert (gDebugObject == nil, "PMAllocationDebug already exists", file:__FILE__, line:__LINE__)
    gDebugObject = self
    var df = NSNotificationCenter.defaultCenter ()
    df.addObserver (self,
      selector:"applicationWillTerminateAction",
      name:NSApplicationWillTerminateNotification,
      object:nil
    )
    self.pmInstallDebugMenu ()
        //---
/*        [[NSRunLoop mainRunLoop]
        performSelector:@selector (pmInstallDebugMenu)
        target:self
        argument:nil
        order:NSUIntegerMax
        modes:[NSArray arrayWithObject:NSDefaultRunLoopMode]
        ] ;*/
  }
  
  //----------------------------------------------------------------------------*
  //    pmInstallDebugMenu                                                      *
  //----------------------------------------------------------------------------*

  func pmInstallDebugMenu () {
    var item = NSMenuItem (
      title:"",
      action:"",
      keyEquivalent:""
    )
    item.setSubmenu (mDebugMenu)
    NSApp.mainMenu ().addItem (item)
  }

  //----------------------------------------------------------------------------*
  //    addDebugMenuItem:                                                       *
  //----------------------------------------------------------------------------*
  
  func addDebugMenuItem (inMenuItem : NSMenuItem) {
    mDebugMenu.addItem (inMenuItem)
  }

  //----------------------------------------------------------------------------*
  //    awakeFromNib                                                            *
  //----------------------------------------------------------------------------*
  
  override func awakeFromNib () {
  // NSLog (@"%s %p %p", __PRETTY_FUNCTION__, self, mDebugMenu) ;
    mPerformSnapShotButton.setAction ("performSnapShotAction:")
    mPerformSnapShotButton.setTarget (self)
  //--- Allocation Window visibility
    var df = NSUserDefaults.standardUserDefaults ()
    mAllocationStatsWindowVisibleAtLaunch = df.boolForKey ("PMAllocationDebug:allocationStatsWindowVisible")
    mDisplayFilter = df.integerForKey ("PMAllocationDebug:allocationStatsDisplayFilter")
  //--- Allocation stats window visibility at Launch
    if mAllocationStatsWindowVisibleAtLaunch {
      mAllocationStatsWindow.makeKeyAndOrderFront (nil)
    }
  //--- Bindings
    mAllocationStatsWindowVisibleAtLaunchCheckbox.bind ("value",
      toObject:self,
      withKeyPath:"mAllocationStatsWindowVisibleAtLaunch",
      options:nil
    )
    mCurrentlyAllocatedObjectCountTextField.bind ("value",
      toObject:self,
      withKeyPath:"mAllocatedObjectCount",
      options:nil
    )
    mTotalAllocatedObjectCountTextField.bind ("value",
      toObject:self,
      withKeyPath:"mTotalAllocatedObjectCount",
      options:nil
    )
    mDisplayFilterPopUpButton.bind ("selectedIndex",
      toObject:self,
      withKeyPath:"mDisplayFilter",
      options:nil
    )
  }

  //----------------------------------------------------------------------------*
  //    applicationWillTerminateAction:                                         *
  //----------------------------------------------------------------------------*
  
  func applicationWillTerminateAction (NSNotification) {
  // NSLog (@"%s", __PRETTY_FUNCTION__) ;
  // NSLog (@"%d", self.mAllocationStatsWindowVisibleAtLaunch) ;
    var ud = NSUserDefaults.standardUserDefaults ()
    ud.setBool (mAllocationStatsWindowVisibleAtLaunch,
      forKey:"PMAllocationDebug:allocationStatsWindowVisible"
    )
    ud.setInteger (mDisplayFilter,
      forKey:"PMAllocationDebug:allocationStatsDisplayFilter"
    )
  }

  //----------------------------------------------------------------------------*
  //    performSnapShotAction:                                                  *
  //----------------------------------------------------------------------------*
  
  func performSnapShotAction (AnyObject) {
    mSnapShotDictionary = NSMutableDictionary ()
    for c : AnyObject in mAllocatedObjectCountByClass.allObjects () {
      let className = c as String
      let liveByClass = mAllocatedObjectCountByClass.countForObject (className)
      mSnapShotDictionary.setObject (liveByClass, forKey:className)
    }
    self.triggerRefreshAllocationStatsDisplay ()
  }

  //----------------------------------------------------------------------------*
  //    triggerRefreshAllocationStatsDisplay                                    *
  //----------------------------------------------------------------------------*
  
  func triggerRefreshAllocationStatsDisplay () {
    if !mRefreshStatsHasTriggered {
      mRefreshStatsHasTriggered = true ;
/*  [[NSRunLoop mainRunLoop]
  performSelector:@selector (refreshAllocationStats)
  target:self
  argument:nil
  order:NSUIntegerMax
  modes:[NSArray arrayWithObject:NSRunLoopCommonModes]
  ] ;*/
    }
  }

  //----------------------------------------------------------------------------*
  //    pmNoteObjectAllocation:                                                 *
  //----------------------------------------------------------------------------*
  
  func pmNoteObjectAllocation (inObjectClassName : NSString) {
  //NSLog (@"objectClassName %@", inObjectClassName) ;
    mAllocatedObjectCountByClass.addObject (inObjectClassName)
    mTotalAllocatedObjectCountByClass.addObject (inObjectClassName)
    self.triggerRefreshAllocationStatsDisplay ()
  }

  //----------------------------------------------------------------------------*
  //    pmNoteObjectDeallocation:                                               *
  //----------------------------------------------------------------------------*
  
  func pmNoteObjectDeallocation (inObjectClassName : NSString) {
  // NSLog (@"DEALLOC objectClassName %@", inObjectClassName) ;
    mAllocatedObjectCountByClass.removeObject (inObjectClassName)
    self.triggerRefreshAllocationStatsDisplay ()
  }

  //----------------------------------------------------------------------------*
  //    refreshAllocationStats                                                  *
  //----------------------------------------------------------------------------*
  
/*  func refreshAllocationStats () {
    mRefreshStatsHasTriggered = false
  //---
    var liveObjectCount : UInt = 0
    var totalObjectCount : UInt = 0
  //---
    var array : NSDictionary [] = []
    for (NSString * className in [mTotalAllocatedObjectCountByClass.allObjects sortedArrayUsingSelector:@selector(compare:)]) {
  const NSUInteger liveByClass = [mAllocatedObjectCountByClass countForObject:className] ;
  const NSUInteger totalByClass = [mTotalAllocatedObjectCountByClass countForObject:className] ;
  const NSUInteger snapShotByClass = [[mSnapShotDictionary objectForKey:className] unsignedIntegerValue] ;
  liveObjectCount += liveByClass ;
  totalObjectCount += totalByClass ;
  BOOL display = YES ;
  if (1 == self.mDisplayFilter) {
  display = liveByClass != 0 ;
  }else if (2 == self.mDisplayFilter) {
  display = liveByClass != snapShotByClass ;
  }
  if (display) {
  [array addObject: [NSDictionary
  dictionaryWithObjectsAndKeys:
  className, @"classname",
  [NSNumber numberWithUnsignedInteger:totalByClass], @"allCount",
  [NSNumber numberWithUnsignedInteger:liveByClass], @"live",
  [NSNumber numberWithUnsignedInteger:snapShotByClass], @"snapshot",
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
*/

  //----------------------------------------------------------------------------*
  //    T A B L E   V I E W    D A T A    S O U R C E                           *
  //----------------------------------------------------------------------------*
  
  func tableView (aTableView : NSTableView,
                  objectValueForTableColumn: NSTableColumn,
                  row:NSInteger) {
    var theRecord : NSDictionary = mAllocationStatsDataSource [row]
    return theRecord.valueForKey (objectValueForTableColumn.identifier ())
  }
  
  //---------------------------------------------------------------------------*
  
  func numberOfRowsInTableView (NSTableView) -> Int {
    return mAllocationStatsDataSource.count
  }
  
  //----------------------------------------------------------------------------*
  //    S H O W     A L L O C A T I O N    S T A T S    W I N D O W             *
  //----------------------------------------------------------------------------*
  
  func pmShowAllocationStatsWindow () {
    mStatsTableView.window ().makeKeyAndOrderFront (nil)
  }
  
  //----------------------------------------------------------------------------*
/*
  @end
  
  //----------------------------------------------------------------------------*
  //    R O U T I N E S                                                         *
  //----------------------------------------------------------------------------*
  
  void routineNoteObjectAllocation (NSString * inObjectClassName) {
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
  argument:inObjectClassName
  order:NSUIntegerMax
  modes:[NSArray arrayWithObject:NSRunLoopCommonModes]
  ] ;
  }
  
  //----------------------------------------------------------------------------*
  
  void routineNoteObjectDeallocation (NSString * inObjectClassName) {
  [[NSRunLoop mainRunLoop]
  performSelector:@selector (pmNoteObjectDeallocation:)
  target:gDebugObject
  argument:inObjectClassName
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
*/
  
}

//----------------------------------------------------------------------------*
/*
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

- (instancetype) init {
  //  NSLog (@"%s %p", __PRETTY_FUNCTION__, self) ;
  self = [super init] ;
  if (self) {
    mAllocatedObjectCountByClass = [NSCountedSet new] ;
    mTotalAllocatedObjectCountByClass = [NSCountedSet new] ;
  //---
    NSNotificationCenter * df = [NSNotificationCenter defaultCenter] ;
    [df
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
  mPerformSnapShotButton.action = @selector (performSnapShotAction:) ;
  mPerformSnapShotButton.target = self ;
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
//    performSnapShotAction:                                                  *
//----------------------------------------------------------------------------*

- (void) performSnapShotAction: (id) inSender {
  mSnapShotDictionary = [NSMutableDictionary new] ;
  for (NSString * className in mAllocatedObjectCountByClass.allObjects) {
    const NSUInteger liveByClass = [mAllocatedObjectCountByClass countForObject:className] ;
    [mSnapShotDictionary
      setObject:[NSNumber numberWithUnsignedInteger:liveByClass]
      forKey:className
    ] ;
  }
  [self triggerRefreshAllocationStatsDisplay] ;
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
      modes:[NSArray arrayWithObject:NSRunLoopCommonModes]
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
    const NSUInteger snapShotByClass = [[mSnapShotDictionary objectForKey:className] unsignedIntegerValue] ;
    liveObjectCount += liveByClass ;
    totalObjectCount += totalByClass ;
    BOOL display = YES ;
    if (1 == self.mDisplayFilter) {
      display = liveByClass != 0 ;
    }else if (2 == self.mDisplayFilter) {
      display = liveByClass != snapShotByClass ;
    }
    if (display) {
      [array addObject: [NSDictionary
        dictionaryWithObjectsAndKeys:
          className, @"classname",
          [NSNumber numberWithUnsignedInteger:totalByClass], @"allCount",
          [NSNumber numberWithUnsignedInteger:liveByClass], @"live",
          [NSNumber numberWithUnsignedInteger:snapShotByClass], @"snapshot",
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

void routineNoteObjectAllocation (NSString * inObjectClassName) {
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
    argument:inObjectClassName
    order:NSUIntegerMax
    modes:[NSArray arrayWithObject:NSRunLoopCommonModes]
  ] ;
}

//----------------------------------------------------------------------------*

void routineNoteObjectDeallocation (NSString * inObjectClassName) {
  [[NSRunLoop mainRunLoop]
    performSelector:@selector (pmNoteObjectDeallocation:)
    target:gDebugObject
    argument:inObjectClassName
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
*/

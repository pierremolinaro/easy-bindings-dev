//----------------------------------------------------------------------------*

#import <Foundation/Foundation.h>

//----------------------------------------------------------------------------*

#ifdef PM_COCOA_DEBUG
  #define macroNoteObjectAllocation routineNoteObjectAllocation (self.className)
  void routineNoteObjectAllocation (NSString * inObjectClassName) ;
#else
  #define macroNoteObjectAllocation
#endif

//----------------------------------------------------------------------------*

#ifdef PM_COCOA_DEBUG
  #define macroNoteObjectDeallocation routineNoteObjectDeallocation (self.className)
  void routineNoteObjectDeallocation (NSString * inObjectClassName) ;
#else
  #define macroNoteObjectDeallocation
#endif

//----------------------------------------------------------------------------*

#ifdef PM_COCOA_DEBUG
  #define macroShowAllocationStatsWindow routineShowAllocationStatsWindow ()
  void routineShowAllocationStatsWindow (void) ;
#else
  #define macroShowAllocationStatsWindow
#endif

//----------------------------------------------------------------------------*

#ifdef PM_COCOA_DEBUG
  #define macroAddItemToDebugMenu(ITEM) addItemToDebugMenu (ITEM)
  void addItemToDebugMenu (NSMenuItem * inMenuItem) ;
#else
  #define macroAddItemToDebugMenu(ITEM)
#endif

//----------------------------------------------------------------------------*

#ifdef PM_COCOA_DEBUG
  @interface PMAllocationDebug : NSObject <NSTableViewDataSource> {
    @private IBOutlet NSButton * mPerformSnapShotButton ;
    @private IBOutlet NSButton * mAllocationStatsWindowVisibleAtLaunchCheckbox ;
    @private IBOutlet NSPopUpButton * mDisplayFilterPopUpButton ;
    @private IBOutlet NSMenu * mDebugMenu ;
    @private IBOutlet NSWindow * mAllocationStatsWindow ;
    @private IBOutlet NSTextField * mCurrentlyAllocatedObjectCountTextField ;
    @private IBOutlet NSTextField * mTotalAllocatedObjectCountTextField ;
    @private IBOutlet NSTableView * mStatsTableView ;
    
    @private NSCountedSet * mAllocatedObjectCountByClass ;
    @private NSCountedSet * mTotalAllocatedObjectCountByClass ;
    @private NSMutableDictionary * mSnapShotDictionary ;
    @private BOOL mRefreshStatsHasTriggered ;
    @private NSArray * mAllocationStatsDataSource ;
  }

  @property BOOL mAllocationStatsWindowVisibleAtLaunch ;
  @property NSUInteger mAllocatedObjectCount ;
  @property NSUInteger mTotalAllocatedObjectCount ;
  @property NSInteger mDisplayFilter ;
  
  @end
#endif

//----------------------------------------------------------------------------*

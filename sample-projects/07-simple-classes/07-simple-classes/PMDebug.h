//----------------------------------------------------------------------------*

#import <Foundation/Foundation.h>

//----------------------------------------------------------------------------*

void macroNoteObjectAllocation (NSObject * inObject) ;
void macroNoteObjectDeallocation (NSObject * inObject) ;

//----------------------------------------------------------------------------*

@interface PMDebug : NSObject <NSTableViewDataSource> {
  @private IBOutlet NSButton * mAllocationStatsWindowVisibleAtLaunchCheckbox ;
  @private IBOutlet NSPopUpButton * mDisplayFilterPopUpButton ;
  @private IBOutlet NSMenu * mDebugMenu ;
  @private IBOutlet NSWindow * mAllocationStatsWindow ;
  @private IBOutlet NSTextField * mCurrentlyAllocatedObjectCountTextField ;
  @private IBOutlet NSTextField * mTotalAllocatedObjectCountTextField ;
  @private IBOutlet NSTableView * mStatsTableView ;
  
  @private NSCountedSet * mAllocatedObjectCountByClass ;
  @private NSCountedSet * mTotalAllocatedObjectCountByClass ;
  @private BOOL mRefreshStatsHasTriggered ;
  @private NSUInteger mLiveAllocatedObjectCount ;
  @private NSUInteger mLiveTotalObjectCount ;
  @private NSArray * mAllocationStatsDataSource ;
}

@property BOOL mAllocationStatsWindowVisibleAtLaunch ;
@property NSUInteger mAllocatedObjectCount ;
@property NSUInteger mTotalAllocatedObjectCount ;
@property NSInteger mDisplayFilter ;

- (void) pmNoteObjectAllocation: (NSObject *) inObject ;
- (void) pmNoteObjectDeallocation: (NSObject *) inObject ;

@end

//----------------------------------------------------------------------------*

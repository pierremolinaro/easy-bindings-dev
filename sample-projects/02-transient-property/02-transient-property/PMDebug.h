//----------------------------------------------------------------------------*

#import <Foundation/Foundation.h>

//----------------------------------------------------------------------------*

void macroNoteObjectAllocation (NSObject * inObject) ;
void macroNoteObjectDeallocation (NSObject * inObject) ;

//----------------------------------------------------------------------------*

@interface PMDebug : NSObject <NSTableViewDataSource> {
  @private IBOutlet NSMenu * mDebugMenu ;
  @private IBOutlet NSWindow * mAllocationStatsWindow ;
  @private IBOutlet NSTextField * mAllocatedObjectCountTextField ;
  @private IBOutlet NSTableView * mStatsTableView ;
  
  @private NSCountedSet * mAllocatedObjectCountByClass ;
  @private NSCountedSet * mTotalAllocatedObjectCountByClass ;
  @private BOOL mRefreshStatsHasTriggered ;
  @private NSUInteger mLiveAllocatedObjectCount ;
  @private NSArray * mAllocationStatsDataSource ;
}

@property BOOL mAllocationStatsWindowVisible ;
@property NSUInteger mAllocatedObjectCount ;

- (IBAction) allocationStatsAction:(id)sender ;
- (void) pmNoteObjectAllocation: (NSObject *) inObject ;
- (void) pmNoteObjectDeallocation: (NSObject *) inObject ;

@end

//----------------------------------------------------------------------------*

//
//  MyDocument.h
//  essai
//
//  Created by Pierre Molinaro on 27/06/13.
//  Copyright (c) 2013 ECN / IRCCyN. All rights reserved.
//

#import "PMManagedDocument.h"

@class MyRootEntity ;
@class PMEntityArrayController ;

@interface MyDocument : PMManagedDocument {
  
  @private IBOutlet NSTextField * mEntityCountTextField ;

  @private IBOutlet NSTextField * mTextField ;
  @private IBOutlet NSButton * mCheckbox ;
  @private IBOutlet NSColorWell * mColorWell ;
  @private IBOutlet NSButton * mAddElementButton ;
  @private IBOutlet NSButton * mAddElementViaControllerButton ;
  @private IBOutlet NSButton * mRemoveElementButton ;
  
  @private NSObjectController * mOtherEntityController ;

  @private IBOutlet NSTableView * mTableView ;
  @private PMEntityArrayController * mElementEntityArrayController ;

  @private IBOutlet NSTableView * mSubTableView ;
  @private PMEntityArrayController * mSubElementEntityArrayController ;

  @private IBOutlet NSTextField * mOtherTextField ;
  @private IBOutlet NSButton * mCreateOtherEntity ;
  @private IBOutlet NSButton * mDeleteOtherEntity ;
}

@end

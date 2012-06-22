//
//  PMAbstractPersistentDocument.h
//
//  Created by Pierre Molinaro on 22/06/12.
//  Copyright (c) 2012 ECN / IRCCyN. All rights reserved.
//

//----------------------------------------------------------------------------*

#import <Cocoa/Cocoa.h>

//----------------------------------------------------------------------------*

@interface PMAbstractPersistentDocument : NSPersistentDocument {
//--- Handle transient properties
  @private NSMutableSet * mTriggeredTransientSet ;
  @private BOOL mActionPosted ;
}

- (void) pmNotifyChangeForTransientProperty: (NSString *) inPropertyName ;
- (void) pmInstallObserversForTransients ;
@end

//----------------------------------------------------------------------------*


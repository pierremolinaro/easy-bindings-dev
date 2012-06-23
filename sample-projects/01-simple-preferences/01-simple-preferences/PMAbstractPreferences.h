//----------------------------------------------------------------------------*

#import <Cocoa/Cocoa.h>

//----------------------------------------------------------------------------*

@interface PMAbstractPreferences : NSObject {
//--- Handle transient properties
  @private NSMutableSet * mTriggeredTransientSet ;
  @private BOOL mActionPosted ;
}

- (void) pmNotifyChangeForTransientProperty: (NSString *) inPropertyName ;
- (void) pmInstallObserversForTransients ;
@end

//----------------------------------------------------------------------------*


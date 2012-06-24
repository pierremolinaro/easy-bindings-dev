//----------------------------------------------------------------------------*

#import <Cocoa/Cocoa.h>

//----------------------------------------------------------------------------*

@interface PMAbstractManagedObject : NSManagedObject {
//--- Handle transient properties
  @private NSMutableSet * mTriggeredTransientSet ;
  @private BOOL mActionPosted ;
}

- (void) pmNotifyChangeForTransientProperty: (NSString *) inPropertyName ;
- (void) pmInstallObserversForTransients ;
@end

//----------------------------------------------------------------------------*


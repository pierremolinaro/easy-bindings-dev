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
- (void) pmUninstallObserversForTransients ;
@end

//----------------------------------------------------------------------------*


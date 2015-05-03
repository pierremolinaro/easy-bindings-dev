//
//  AppDelegate.m
//  reservationEncarts
//
//  Created by Pierre Molinaro on 26/08/2014.
//  Copyright (c) 2014 Pierre Molinaro. All rights reserved.
//
//---------------------------------------------------------------------------------------------------------------------*

#import "AppDelegate.h"
#import "PMGestionEncarts.h"
#import "PMGestionParutions.h"

//---------------------------------------------------------------------------------------------------------------------*

AppDelegate * gAppDelegate ;

//---------------------------------------------------------------------------------------------------------------------*

@interface AppDelegate ()
  @property (weak) IBOutlet NSWindow * window ;
@end

//---------------------------------------------------------------------------------------------------------------------*

@implementation AppDelegate

//---------------------------------------------------------------------------------------------------------------------*

- (instancetype) init {
  self = [super init] ;
  if (self) {
    gAppDelegate = self ;
    mModeProduction = YES ;
    mConnection = [[MySQLConnection alloc]
      initWithServer:@"www.m2mimpressions.fr"
      dataBase:@"mmimpres_reservationEncarts"
      user:@"mmimpres_userRes"
      password:@"Ne2Uopec9Ruqe2"
    ] ;
  }
  return self ;
}

//---------------------------------------------------------------------------------------------------------------------*

+ (MySQLConnection *) connection {
  return [gAppDelegate connection] ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (MySQLConnection *) connection {
  return mConnection ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (void) applicationDidFinishLaunching: (NSNotification *) aNotification {
}

//---------------------------------------------------------------------------------------------------------------------*

- (void) awakeFromNib {
  [mConnection
    addObserver:self
    forKeyPath:@"mConnected"
    options:NSKeyValueObservingOptionNew
    context:NULL
  ] ;
  [mConnection setActivityTextField:mActivityTextField] ;
  mBoutonBacASable.action = @selector(permuterModeProductionBacASable:) ;
  mBoutonBacASable.target = self ;
  [self updateConnectionImageView] ;
  [self connectUserView:mListeDesParutionsView] ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (void) observeValueForKeyPath:(NSString *) inKeyPath
         ofObject:(id) inObject
         change:(NSDictionary *) inChange
         context:(void *) inContext {
  if ((inObject == mConnection) && [inKeyPath isEqualToString:@"mConnected"]) {
    [self updateConnectionImageView] ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

- (void) updateConnectionImageView {
  [mConnectionImageView setImage:[NSImage imageNamed:mConnection.mConnected ? @"green20" : @"red20"]] ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (void)applicationWillTerminate:(NSNotification *) aNotification {
  // Insert code here to tear down your application
}

//---------------------------------------------------------------------------------------------------------------------*

- (void) afficherListeParutions: (id) inSender {
  [self rafraichirDonnees:nil] ;
  [self connectUserView:mListeDesParutionsView] ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (void) afficherListeEncarts: (id) inSender {
  [self connectUserView:mListeDesEncartsView] ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (void) connectUserView: (NSView *) inUserView {
  for (NSView * subView in [[mUserDataView subviews] copy]) {
    [subView removeFromSuperview] ;
  }
  if (nil != inUserView) {
    [inUserView setFrame:[mUserDataView bounds]] ;
    [inUserView setAutoresizingMask:NSViewWidthSizable | NSViewHeightSizable] ;
    [mUserDataView addSubview:inUserView] ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

- (IBAction) closeSegmentViewAction:(id)sender {
  [self connectUserView:nil] ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (IBAction) rafraichirDonnees:(id)sender {
  [gGestionnaireEncarts rafraichirEncarts] ;
  [gGestionParutions rafraichirParutions] ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Bac à sable                                                                                                       *
//---------------------------------------------------------------------------------------------------------------------*

- (IBAction) permuterModeProductionBacASable: (id) inSender {
  mModeProduction = ! mModeProduction ;
  mBoutonBacASable.title = mModeProduction ? @"Passer en mode Bac à sable" : @"Passer en mode Production" ;
  [mBackgroundView setNeedsDisplay:YES] ;
  [self rafraichirDonnees:nil] ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (BOOL) enProduction {
  return mModeProduction ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (NSString *) nomTableParutions {
  return mModeProduction ? @"parutions" : @"parutions_bacasable" ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (NSString *) nomTableEncarts {
  return mModeProduction ? @"encarts" : @"encarts_bacasable" ;
}

//---------------------------------------------------------------------------------------------------------------------*

@end

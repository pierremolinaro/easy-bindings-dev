//
//  AppDelegate.h
//  reservationEncarts
//
//  Created by Pierre Molinaro on 26/08/2014.
//  Copyright (c) 2014 Pierre Molinaro. All rights reserved.
//
//---------------------------------------------------------------------------------------------------------------------*

#import <Cocoa/Cocoa.h>
#import "MySQLConnection.h"

//---------------------------------------------------------------------------------------------------------------------*

@interface AppDelegate : NSObject <NSApplicationDelegate> {
  MySQLConnection * mConnection ;
  IBOutlet NSImageView * mConnectionImageView ;
  IBOutlet NSView * mUserDataView ;

  IBOutlet NSView * mListeDesEncartsView ;
  IBOutlet NSView * mListeDesParutionsView ;

  IBOutlet NSTextField * mActivityTextField ;

//--- Bac à sable
  IBOutlet NSButton * mBoutonBacASable ;
  IBOutlet NSView * mBackgroundView ;
  BOOL mModeProduction ;

}

- (IBAction) afficherListeParutions: (id) inSender ;
- (IBAction) afficherListeEncarts: (id) inSender ;

- (void) connectUserView: (NSView *) inUserView ;

+ (MySQLConnection *) connection ;

- (BOOL) enProduction ;
- (NSString *) nomTableParutions ;
- (NSString *) nomTableEncarts ;

@end

//---------------------------------------------------------------------------------------------------------------------*

extern AppDelegate * gAppDelegate ;

//---------------------------------------------------------------------------------------------------------------------*

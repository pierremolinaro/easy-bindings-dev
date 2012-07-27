//
//  PMAppDelegate.h
//  ExempleTransientMultipleDependances
//
//  Created by Pierre Molinaro on 03/07/12.
//  Copyright (c) 2012 ECN / IRCCyN. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface PMAppDelegate : NSObject <NSApplicationDelegate> {
  @private IBOutlet NSTextField * mPrenomTextField ;
  @private IBOutlet NSTextField * mNomTextField ;
  @private IBOutlet NSTextField * mNomCompletTextField ;
  @private IBOutlet NSTextField * mAutreNomCompletTextField ;
  @private IBOutlet NSTextField * mTexteDependantTextField ;
  
  @private NSString * mCacheCalculNomComplet ;
  @private BOOL mNomComplet_Computed ;
  @private NSString * mCacheCalculTexteDependant ;
  @private BOOL mTexteDependant_Computed ;
}

@property (assign) IBOutlet NSWindow *window;

@property (copy) NSString * mPrenom ;
@property (copy) NSString * mNom ;
@property (copy, readonly) NSString * mNomComplet ;
@property (copy, readonly) NSString * mTexteDependant ;

@end

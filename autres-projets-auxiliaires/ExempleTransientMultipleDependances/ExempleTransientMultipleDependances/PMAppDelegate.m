//
//  PMAppDelegate.m
//  ExempleTransientMultipleDependances
//
//  Created by Pierre Molinaro on 03/07/12.
//  Copyright (c) 2012 ECN / IRCCyN. All rights reserved.
//
//----------------------------------------------------------------------------*

#import "PMAppDelegate.h"

//----------------------------------------------------------------------------*

@implementation PMAppDelegate

//----------------------------------------------------------------------------*

@synthesize window = _window;
@synthesize mPrenom;
@synthesize mNom;
@synthesize mNomComplet;

//----------------------------------------------------------------------------*

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification
{
  // Insert code here to initialize your application
}

//----------------------------------------------------------------------------*

- (void) awakeFromNib {
  [mNomTextField
    bind:@"value"
    toObject:self
    withKeyPath:@"mNom"
    options:nil
  ] ;
  [mPrenomTextField
    bind:@"value"
    toObject:self
    withKeyPath:@"mPrenom"
    options:nil
  ] ;
  [mNomCompletTextField
    bind:@"value"
    toObject:self
    withKeyPath:@"mNomComplet"
    options:nil
  ] ;
  [mAutreNomCompletTextField
    bind:@"value"
    toObject:self
    withKeyPath:@"mNomComplet"
    options:nil
  ] ;
}

//----------------------------------------------------------------------------*

+ (NSSet *) keyPathsForValuesAffectingMNomComplet {
  return [NSSet setWithObjects:@"mNom", @"mPrenom", nil] ;
}

//----------------------------------------------------------------------------*

- (NSString *) mNomComplet {
  NSLog (@"%s", __PRETTY_FUNCTION__) ;
  return [NSString stringWithFormat:@"%@ %@", self.mPrenom, self.mNom] ;
}

//----------------------------------------------------------------------------*

- (IBAction) definirNom:(id)sender {
  NSLog (@"%s START", __PRETTY_FUNCTION__) ;
  self.mPrenom = @"Amédé" ;
  NSLog (@"%s BETWEEN", __PRETTY_FUNCTION__) ;
  self.mNom = @"Schmurtz" ;
  NSLog (@"%s END", __PRETTY_FUNCTION__) ;
}

//----------------------------------------------------------------------------*

@end

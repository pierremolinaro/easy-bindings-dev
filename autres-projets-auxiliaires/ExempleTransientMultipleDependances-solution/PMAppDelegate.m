//
//  PMAppDelegate.m
//  ExempleTransientMultipleDependances
//
//  Created by Pierre Molinaro on 03/07/12.
//  Copyright (c) 2012 ECN / IRCCyN. All rights reserved.
//
//----------------------------------------------------------------------------*

#import "PMAppDelegate.h"
#import "PMDependancyTrigger.h"

//----------------------------------------------------------------------------*

@implementation PMAppDelegate

//----------------------------------------------------------------------------*

@synthesize window = _window;
@synthesize mPrenom;
@synthesize mNom;
@synthesize mNomComplet;
@synthesize mTexteDependant ;

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
  [mTexteDependantTextField
    bind:@"value"
    toObject:self
    withKeyPath:@"mTexteDependant"
    options:nil
  ] ;
}

//----------------------------------------------------------------------------*

- (void) didChangeValueForKey: (NSString *) inKey {
  NSLog (@"%s, key: %@", __PRETTY_FUNCTION__, inKey) ;
  [super didChangeValueForKey:inKey] ;
  if ([inKey isEqualToString:@"mNom"]) {
    mNomComplet_Computed = NO ;
    [PMDependancyTrigger
      enterTriggerForObject:self
      transientIndex:TRIGGER_NOM_COMPLET_INDEX
    ] ;
  }else if ([inKey isEqualToString:@"mPrenom"]) {
    mNomComplet_Computed = NO ;
    [PMDependancyTrigger
      enterTriggerForObject:self
      transientIndex:TRIGGER_NOM_COMPLET_INDEX
    ] ;
  }else if ([inKey isEqualToString:@"mNomComplet"]) {
    mTexteDependant_Computed = NO ;
    [PMDependancyTrigger
      enterTriggerForObject:self
      transientIndex:TRIGGER_TEXTE_DEPENDANT_INDEX
    ] ;
  }
}

//----------------------------------------------------------------------------*

- (NSString *) mNomComplet {
  NSLog (@"%s, cached: %@", __PRETTY_FUNCTION__, mNomComplet_Computed ? @"yes" : @"no") ;
  if (! mNomComplet_Computed) {
    mCacheCalculNomComplet = [NSString stringWithFormat:@"%@ %@", self.mPrenom, self.mNom] ;
    mNomComplet_Computed = YES ;
  }
  return mCacheCalculNomComplet.copy ;
}

//----------------------------------------------------------------------------*

- (NSString *) mTexteDependant {
  NSLog (@"%s, cached: %@", __PRETTY_FUNCTION__, mTexteDependant_Computed ? @"yes" : @"no") ;
  if (! mTexteDependant_Computed) {
    mCacheCalculTexteDependant = [NSString stringWithFormat:@"« %@ »", self.mNomComplet] ;
    mTexteDependant_Computed = YES ;
  }
  return mCacheCalculTexteDependant.copy ;
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

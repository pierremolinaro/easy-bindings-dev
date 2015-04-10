//
//  PMParution.m
//  reservationEncarts
//
//  Created by Pierre Molinaro on 26/08/2014.
//  Copyright (c) 2014 Pierre Molinaro. All rights reserved.
//
//---------------------------------------------------------------------------------------------------------------------*

#import "AppDelegate.h"
#import "PMParution.h"
#import <objc/runtime.h>
#import "PMGestionEncarts.h"

//---------------------------------------------------------------------------------------------------------------------*

@implementation PMParution

//---------------------------------------------------------------------------------------------------------------------*
//   Method swizzling                                                                                                  *
//---------------------------------------------------------------------------------------------------------------------*

+ (void) load {    
  Method original = class_getInstanceMethod (self, @selector (setMDateParution:));
  Method swizzled = class_getInstanceMethod (self, @selector (setMDateParution_swizzling:));
  method_exchangeImplementations (original, swizzled) ;
  original = class_getInstanceMethod (self, @selector (setMEdition:));
  swizzled = class_getInstanceMethod (self, @selector (setMEdition_swizzling:));
  method_exchangeImplementations (original, swizzled) ;
  original = class_getInstanceMethod (self, @selector (setMGroupe:));
  swizzled = class_getInstanceMethod (self, @selector (setMGroupe_swizzling:));
  method_exchangeImplementations (original, swizzled) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   initWithDate:numero:connection:                                                                                   *
//---------------------------------------------------------------------------------------------------------------------*

- (instancetype) initWithDate: (NSDate *) inDate
                 edition: (NSString *) inEdition
                 groupe: (NSString *) inGroupe
                 remplissage: (NSUInteger) inRemplissage
                 connection: (MySQLConnection *) inConnection {
  self = [self init] ;
  if (self) {
  //--- ID
    self.mColorForIDDisplay = [NSColor blueColor] ;
    self.mStringForIDTooltip = @"Non enregistré" ;
  //--- Date
    self.mDateParution = inDate.copy ;
    self.mColorForDateParutionDisplay = [NSColor blackColor] ;
    self.mStringForDateParutionTooltip = @"Ok" ;
  //--- Edition
    self.mEdition = inEdition;
    self.mColorForEditionDisplay = [NSColor blackColor] ;
    self.mStringForEditionTooltip = @"Ok" ;
  //--- Edition
    self.mGroupe = inGroupe;
    self.mColorForGroupeDisplay = [NSColor blackColor] ;
    self.mStringForGroupeTooltip = @"Ok" ;
  //--- Remplissage
    self.mRemplissage = inRemplissage ;
  //--- Connexion
    mConnection = inConnection ;
    [self insererDansBaseDeDonnees] ;
  }
  return self ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (void) insererDansBaseDeDonnees {
  [mConnection
    insertInTable:[gAppDelegate nomTableParutions]
    values:[NSDictionary dictionaryWithObjectsAndKeys:
      [self.mDateParution descriptionWithCalendarFormat:@"%Y-%m-%d" timeZone:nil locale:nil], @"date",
      self.mEdition, @"edition",
      self.mGroupe, @"groupe",
      nil
    ]
    client:self
    responseSelector:@selector (insertionInDataBaseResult:)
  ] ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (void) insertionInDataBaseResult: (id) inResponse {
  if ([inResponse isKindOfClass:[NSNumber class]]) { // Ok
    self.mID = ((NSNumber *) inResponse).unsignedIntegerValue ;
    self.mStringForIDTooltip = @"Ok" ;
    self.mColorForIDDisplay = [NSColor blackColor] ;
  }else if ([inResponse isKindOfClass:[NSString class]]) { // Message d'erreur
    self.mStringForIDTooltip = ((NSString *) inResponse).copy ;
    self.mColorForIDDisplay = [NSColor redColor] ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//   initWithDictionary                                                                                                *
//---------------------------------------------------------------------------------------------------------------------*

- (instancetype) initWithDictionary: (NSDictionary *) inDictionary
                 connection: (MySQLConnection *) inConnection {
  self = [self init] ;
  if (self) {
  //--- ID
    self.mID = (NSUInteger) [[inDictionary objectForKey:@"id"] intValue] ;
    self.mColorForIDDisplay = [NSColor blackColor] ;
  //--- Initialiser les champs
    [self updateWithDictionary:inDictionary] ;
  //--- Terminer par le champ connexion, de façon qu'aucun message de mise à jour ne soit envoyé
    mConnection = inConnection ;
  }
  return self ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   updateWithDictionary:                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

- (void) updateWithDictionary: (NSDictionary *) inDictionary  {
  // NSLog (@"inDictionary %@", inDictionary) ;
//--- Supprimer temporairement la connexion vers la base pour que le rafraîchissement ne lance pas de requête
  MySQLConnection * connection = mConnection ;
  mConnection = nil ;
//--- Date
  NSDateFormatter * f = [NSDateFormatter new] ;
  f.dateFormat = @"yyyy-MM-dd" ;
  self.mDateParution = [f dateFromString:[inDictionary objectForKey:@"date"]] ;
  self.mColorForDateParutionDisplay = [NSColor blackColor] ;
  self.mStringForDateParutionTooltip = @"Ok" ;
//--- Edition
  self.mEdition = [inDictionary objectForKey:@"edition"] ;
  self.mColorForEditionDisplay = [NSColor blackColor] ;
  self.mStringForEditionTooltip = @"Ok" ;
//--- Groupe
  self.mGroupe = [inDictionary objectForKey:@"groupe"] ;
  self.mColorForGroupeDisplay = [NSColor blackColor] ;
  self.mStringForGroupeTooltip = @"Ok" ;
//--- Remplissage
  self.mRemplissage = (NSUInteger) [[inDictionary objectForKey:@"COUNT(DISTINCT encarts1.emplacement)"] integerValue] ;
  self.mConflit = [[inDictionary objectForKey:@"COUNT(encarts1.idParution)<>COUNT(DISTINCT encarts1.emplacement)"] integerValue] != 0 ;
//--- Rétablir la connexion
  mConnection = connection ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (NSColor *) remplissageBackgroundColor {
  return self.mConflit ? [NSColor redColor] : [NSColor blackColor] ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   mDateParution                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

- (void) setMDateParution_swizzling: (NSDate *) inNewDate {
  NSDate * oldValue = self.mDateParution ;
  // NSLog (@"Enter setMDateParution_swizzling") ;
  [self setMDateParution_swizzling:inNewDate] ;
 // NSLog (@"Exit setMDateParution_swizzling") ;
  if (![oldValue isEqualToDate:inNewDate]) {
    if (self.mID == 0) {
      [self insererDansBaseDeDonnees] ;
    }else{
      [mConnection
        updateTableNamed:[gAppDelegate nomTableParutions]
        values:[NSDictionary dictionaryWithObjectsAndKeys:
         [self.mDateParution descriptionWithCalendarFormat:@"%Y-%m-%d" timeZone:nil locale:nil], @"date",
         nil
        ]
        idFieldName:@"id"
        idFieldValue:self.mID
        client:self
        responseSelector:@selector (mDateParutionHasBeenUpdatedInDataBase:)
      ] ;
      self.mColorForDateParutionDisplay = [NSColor blueColor] ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

- (void) mDateParutionHasBeenUpdatedInDataBase: (NSString *) inString {
//  NSLog (@"%s : '%@'", __FUNCTION__, inString) ;
  if (nil == inString) { // No connection
    self.mStringForDateParutionTooltip = @"No connection" ;
    self.mColorForDateParutionDisplay = [NSColor blueColor] ;
  }else if ([inString length] == 0) { // Ok
    self.mStringForDateParutionTooltip = @"Ok" ;
    self.mColorForDateParutionDisplay = [NSColor blackColor] ;
  }else{
    self.mColorForDateParutionDisplay = [NSColor redColor] ;
    self.mStringForDateParutionTooltip = inString.copy ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//   mEdition                                                                                                          *
//---------------------------------------------------------------------------------------------------------------------*

- (void) setMEdition_swizzling: (NSString *) inNewValue {
  const NSString * oldValue = self.mEdition ;
  // NSLog (@"Enter setMDateParution_swizzling") ;
  [self setMEdition_swizzling:inNewValue] ;
 // NSLog (@"Exit setMDateParution_swizzling") ;
  if (![oldValue isEqualToString:inNewValue]) {
    if (self.mID == 0) {
      [self insererDansBaseDeDonnees] ;
    }else{
      [mConnection
        updateTableNamed:[gAppDelegate nomTableParutions]
        values:[NSDictionary dictionaryWithObjectsAndKeys:
         self.mEdition, @"edition",
         nil
        ]
        idFieldName:@"id"
        idFieldValue:self.mID
        client:self
        responseSelector:@selector (mEditionHasBeenUpdatedInDataBase:)
      ] ;
      self.mColorForEditionDisplay = [NSColor blueColor] ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

- (void) mEditionHasBeenUpdatedInDataBase: (NSString *) inString {
  // NSLog (@"%s : '%@'", __FUNCTION__, inString) ;
  if (nil == inString) { // No connection
    self.mStringForEditionTooltip = @"No connection" ;
    self.mColorForEditionDisplay = [NSColor blueColor] ;
  }else if ([inString length] == 0) { // Ok
    self.mStringForEditionTooltip = @"Ok" ;
    self.mColorForEditionDisplay = [NSColor blackColor] ;
  }else{
    self.mStringForEditionTooltip = inString.copy ;
    self.mColorForEditionDisplay = [NSColor redColor] ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//   mGroupe                                                                                                           *
//---------------------------------------------------------------------------------------------------------------------*

- (void) setMGroupe_swizzling: (NSString *) inNewValue {
  const NSString * oldValue = self.mGroupe ;
  [self setMGroupe_swizzling:inNewValue] ;
  if (![oldValue isEqualToString:inNewValue]) {
    if (self.mID == 0) {
      [self insererDansBaseDeDonnees] ;
    }else{
      [mConnection
        updateTableNamed:[gAppDelegate nomTableParutions]
        values:[NSDictionary dictionaryWithObjectsAndKeys:
         self.mGroupe, @"groupe",
         nil
        ]
        idFieldName:@"id"
        idFieldValue:self.mID
        client:self
        responseSelector:@selector (mGroupeHasBeenUpdatedInDataBase:)
      ] ;
      self.mColorForGroupeDisplay = [NSColor blueColor] ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

- (void) mGroupeHasBeenUpdatedInDataBase: (NSString *) inString {
  // NSLog (@"%s : '%@'", __FUNCTION__, inString) ;
  if (nil == inString) { // No connection
    self.mStringForGroupeTooltip = @"No connection" ;
    self.mColorForGroupeDisplay = [NSColor blueColor] ;
  }else if ([inString length] == 0) { // Ok
    self.mStringForGroupeTooltip = @"Ok" ;
    self.mColorForGroupeDisplay = [NSColor blackColor] ;
  }else{
    self.mStringForGroupeTooltip = inString.copy ;
    self.mColorForGroupeDisplay = [NSColor redColor] ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

@end

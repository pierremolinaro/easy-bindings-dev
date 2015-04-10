//
//  PMEncart.m
//  reservationEncarts
//
//  Created by Pierre Molinaro on 26/08/2014.
//  Copyright (c) 2014 Pierre Molinaro. All rights reserved.
//
//---------------------------------------------------------------------------------------------------------------------*

#import "PMEncart.h"
#import "AppDelegate.h"

#import <objc/runtime.h>

//---------------------------------------------------------------------------------------------------------------------*

@implementation PMEncart

//---------------------------------------------------------------------------------------------------------------------*

+ (void) load {    
  Method original = class_getInstanceMethod (self, @selector (setMNomClient:));
  Method swizzled = class_getInstanceMethod (self, @selector (setMNomClient_swizzling:));
  method_exchangeImplementations (original, swizzled) ;
//---
  original = class_getInstanceMethod (self, @selector (setMIDParution:));
  swizzled = class_getInstanceMethod (self, @selector (setMIDParution_swizzling:));
  method_exchangeImplementations (original, swizzled) ;
//---
  original = class_getInstanceMethod (self, @selector (setMEmplacementPremiereParution:));
  swizzled = class_getInstanceMethod (self, @selector (setMEmplacementPremiereParution_swizzling:));
  method_exchangeImplementations (original, swizzled) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   initWithDate:numero:connection:                                                                                   *
//---------------------------------------------------------------------------------------------------------------------*

- (instancetype) initWithNomClient: (NSString *) inNomClient
                 IDParution: (NSUInteger) inIDParution
                 emplacementPremiereParution: (NSUInteger) inEmplacement
                 connection: (MySQLConnection *) inConnection {
  self = [self init] ;
  if (self) {
  //--- ID
    self.mColorForIDDisplay = [NSColor blueColor] ;
    self.mStringForIDTooltip = @"Non enregistré" ;
  //--- Date
    self.mNomClient = inNomClient ;
    self.mColorForNomClientDisplay = [NSColor blackColor] ;
    self.mStringForNomClientTooltip = @"Ok" ;
  //--- ID Parution
    self.mIDParution = inIDParution ;
    self.mColorForIDParutionDisplay = [NSColor blackColor] ;
    self.mStringForIDParutionTooltip = @"Ok" ;
  //--- Emplacement première parution
    self.mEmplacementPremiereParution = inEmplacement;
    self.mColorForEmplacementPremiereParutionDisplay = [NSColor blackColor] ;
    self.mStringForEmplacementPremiereParutionTooltip = @"Ok" ;
  //--- Connexion
    mConnection = inConnection ;
    [self insererDansBaseDeDonnees] ;
  }
  return self ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (void) insererDansBaseDeDonnees {
  [mConnection
    insertInTable:[gAppDelegate nomTableEncarts]
    values:[NSDictionary dictionaryWithObjectsAndKeys:
      self.mNomClient, @"nomClient",
      [NSString stringWithFormat:@"%lu", self.mIDParution], @"idParution",
      [NSString stringWithFormat:@"%lu", self.mEmplacementPremiereParution], @"emplacement",
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
//--- Supprimer temporairement la connexion vers la base pour que le rafraîchissement ne lance pas de requête
  MySQLConnection * connection = mConnection ;
  mConnection = nil ;
//--- Date
  self.mNomClient = [inDictionary objectForKey:@"nomClient"] ;
  self.mColorForNomClientDisplay = [NSColor blackColor] ;
  self.mStringForNomClientTooltip = @"Ok" ;
//--- Numero
  self.mIDParution = (NSUInteger) [[inDictionary objectForKey: @"idParution"] intValue] ;
  self.mColorForIDParutionDisplay = [NSColor blackColor] ;
  self.mStringForIDParutionTooltip = @"Ok" ;
//--- Emplacement première parution
  self.mEmplacementPremiereParution = (NSUInteger) [[inDictionary objectForKey:@"emplacement"] intValue] ;
  self.mColorForEmplacementPremiereParutionDisplay = [NSColor blackColor] ;
  self.mStringForEmplacementPremiereParutionTooltip = @"Ok" ;
//--- Rétablir la connexion
  mConnection = connection ;
}


//---------------------------------------------------------------------------------------------------------------------*
//   mNomClient                                                                                                        *
//---------------------------------------------------------------------------------------------------------------------*

- (void) setMNomClient_swizzling: (NSString *) inNewValue {
  NSString * oldValue = self.mNomClient ;
  // NSLog (@"Enter setMDateParution_swizzling") ;
  [self setMNomClient_swizzling:inNewValue] ;
 // NSLog (@"Exit setMDateParution_swizzling") ;
  if (![oldValue isEqualToString:inNewValue]) {
    if (self.mID == 0) {
      [self insererDansBaseDeDonnees] ;
    }else{
      [mConnection
        updateTableNamed:[gAppDelegate nomTableEncarts]
        values:[NSDictionary dictionaryWithObjectsAndKeys:
         self.mNomClient, @"nomClient",
         nil
        ]
        idFieldName:@"id"
        idFieldValue:self.mID
        client:self
        responseSelector:@selector (mNomClientHasBeenUpdatedInDataBase:)
      ] ;
      self.mColorForNomClientDisplay = [NSColor blueColor] ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

- (void) mNomClientHasBeenUpdatedInDataBase: (NSString *) inString {
//  NSLog (@"%s : '%@'", __FUNCTION__, inString) ;
  if (nil == inString) { // No connection
    self.mStringForNomClientTooltip = @"No connection" ;
    self.mColorForNomClientDisplay = [NSColor blueColor] ;
  }else if ([inString length] == 0) { // Ok
    self.mStringForNomClientTooltip = @"Ok" ;
    self.mColorForNomClientDisplay = [NSColor blackColor] ;
  }else{
    self.mColorForNomClientDisplay = [NSColor redColor] ;
    self.mStringForNomClientTooltip = inString.copy ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//   mIDParution                                                                                                       *
//---------------------------------------------------------------------------------------------------------------------*

- (void) setMIDParution_swizzling: (NSUInteger) inNewValue {
  const NSUInteger oldValue = self.mIDParution ;
  [self setMIDParution_swizzling:inNewValue] ;
 // NSLog (@"Exit setMDateParution_swizzling") ;
  if (oldValue != inNewValue) {
    if (self.mID == 0) {
      [self insererDansBaseDeDonnees] ;
    }else{
      [mConnection
        updateTableNamed:[gAppDelegate nomTableEncarts]
        values:[NSDictionary dictionaryWithObjectsAndKeys:
         [NSString stringWithFormat:@"%lu", self.mIDParution], @"idParution",
         nil
        ]
        idFieldName:@"id"
        idFieldValue:self.mID
        client:self
        responseSelector:@selector (mIDParutionHasBeenUpdatedInDataBase:)
      ] ;
      self.mColorForIDParutionDisplay = [NSColor blueColor] ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

- (void) mIDParutionHasBeenUpdatedInDataBase: (NSString *) inString {
  // NSLog (@"%s : '%@'", __FUNCTION__, inString) ;
  if (nil == inString) { // No connection
    self.mStringForIDParutionTooltip = @"No connection" ;
    self.mColorForIDParutionDisplay = [NSColor blueColor] ;
  }else if ([inString length] == 0) { // Ok
    self.mStringForIDParutionTooltip = @"Ok" ;
    self.mColorForIDParutionDisplay = [NSColor blackColor] ;
  }else{
    self.mStringForIDParutionTooltip = inString.copy ;
    self.mColorForIDParutionDisplay = [NSColor redColor] ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//   mEmplacementPremiereParution                                                                                      *
//---------------------------------------------------------------------------------------------------------------------*

- (void) setMEmplacementPremiereParution_swizzling: (NSUInteger) inNewValue {
  const NSUInteger oldValue = self.mEmplacementPremiereParution ;
  // NSLog (@"Enter setMEmplacementPremiereParution_swizzling") ;
  [self setMEmplacementPremiereParution_swizzling:inNewValue] ;
 // NSLog (@"Exit setMDateParution_swizzling") ;
  if (oldValue != inNewValue) {
    if (self.mID == 0) {
      [self insererDansBaseDeDonnees] ;
    }else{
      [mConnection
        updateTableNamed:[gAppDelegate nomTableEncarts]
        values:[NSDictionary dictionaryWithObjectsAndKeys:
         [NSString stringWithFormat:@"%lu", self.mEmplacementPremiereParution], @"emplacement",
         nil
        ]
        idFieldName:@"id"
        idFieldValue:self.mID
        client:self
        responseSelector:@selector (mEmplacementHasBeenUpdatedInDataBase:)
      ] ;
      self.mColorForEmplacementPremiereParutionDisplay = [NSColor blueColor] ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

- (void) mEmplacementHasBeenUpdatedInDataBase: (NSString *) inString {
  // NSLog (@"%s : '%@'", __FUNCTION__, inString) ;
  if (nil == inString) { // No connection
    self.mStringForEmplacementPremiereParutionTooltip = @"No connection" ;
    self.mColorForEmplacementPremiereParutionDisplay = [NSColor blueColor] ;
  }else if ([inString length] == 0) { // Ok
    self.mStringForEmplacementPremiereParutionTooltip = @"Ok" ;
    self.mColorForEmplacementPremiereParutionDisplay = [NSColor blackColor] ;
  }else{
    self.mColorForEmplacementPremiereParutionDisplay = [NSColor redColor] ;
    self.mStringForEmplacementPremiereParutionTooltip = inString.copy ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

@end

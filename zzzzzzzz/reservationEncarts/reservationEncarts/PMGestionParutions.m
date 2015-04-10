//
//  PMGestionParutions.m
//  reservationEncarts
//
//  Created by Pierre Molinaro on 26/08/2014.
//  Copyright (c) 2014 Pierre Molinaro. All rights reserved.
//
//---------------------------------------------------------------------------------------------------------------------*

#import "PMParution.h"
#import "AppDelegate.h"
#import "PMGestionEncarts.h"
#import "PMGestionParutions.h"

//---------------------------------------------------------------------------------------------------------------------*

PMGestionParutions * gGestionParutions ;

//---------------------------------------------------------------------------------------------------------------------*

@implementation PMGestionParutions

//---------------------------------------------------------------------------------------------------------------------*

- (void) awakeFromNib {
  gGestionParutions = self ;
//------------------ Parutions
  mListeDesParutionsArray = [NSMutableArray new] ;
  mListeDesParutionsController = [NSArrayController new] ;
  [mListeDesParutionsController
    bind:@"contentArray"
    toObject:self
    withKeyPath:@"mListeDesParutionsArray"
    options:nil
  ] ;
  mListeDesParutionsTableView.delegate = self ;
//--- date
  [[mListeDesParutionsTableView tableColumnWithIdentifier:@"date"]
    bind:@"value"
    toObject:mListeDesParutionsController
    withKeyPath:@"arrangedObjects.mDateParution"
    options:nil
  ] ;
  [[mListeDesParutionsTableView tableColumnWithIdentifier:@"date"]
    bind:@"textColor"
    toObject:mListeDesParutionsController
    withKeyPath:@"arrangedObjects.mColorForDateParutionDisplay"
    options:nil
  ] ;
//--- ID
  [[mListeDesParutionsTableView tableColumnWithIdentifier:@"id"]
    bind:@"value"
    toObject:mListeDesParutionsController
    withKeyPath:@"arrangedObjects.mID"
    options:nil
  ] ;
  [[mListeDesParutionsTableView tableColumnWithIdentifier:@"id"]
    bind:@"textColor"
    toObject:mListeDesParutionsController
    withKeyPath:@"arrangedObjects.mColorForIDDisplay"
    options:nil
  ] ;
//--- Edition
  [[mListeDesParutionsTableView tableColumnWithIdentifier:@"edition"]
    bind:@"value"
    toObject:mListeDesParutionsController
    withKeyPath:@"arrangedObjects.mEdition"
    options:nil
  ] ;
  [[mListeDesParutionsTableView tableColumnWithIdentifier:@"edition"]
    bind:@"textColor"
    toObject:mListeDesParutionsController
    withKeyPath:@"arrangedObjects.mColorForEditionDisplay"
    options:nil
  ] ;
//--- Groupe
  [[mListeDesParutionsTableView tableColumnWithIdentifier:@"groupe"]
    bind:@"value"
    toObject:mListeDesParutionsController
    withKeyPath:@"arrangedObjects.mGroupe"
    options:nil
  ] ;
  [[mListeDesParutionsTableView tableColumnWithIdentifier:@"groupe"]
    bind:@"textColor"
    toObject:mListeDesParutionsController
    withKeyPath:@"arrangedObjects.mColorForGroupeDisplay"
    options:nil
  ] ;
//--- Remplissage
  [[mListeDesParutionsTableView tableColumnWithIdentifier:@"remplissage"]
    bind:@"value"
    toObject:mListeDesParutionsController
    withKeyPath:@"arrangedObjects.mRemplissage"
    options:nil
  ] ;
  [[mListeDesParutionsTableView tableColumnWithIdentifier:@"remplissage"]
    bind:@"textColor"
    toObject:mListeDesParutionsController
    withKeyPath:@"arrangedObjects.remplissageBackgroundColor"
    options:nil
  ] ;
//--- Gestion du double clic dans la table
  mListeDesParutionsTableView.doubleAction = @selector (doubleClicDansTableView:) ;
  mListeDesParutionsTableView.target = self ;
//--- Suppression parution
  mBoutonSupprimerParution.action = @selector (supprimerParutionSelectionnee:) ;
  mBoutonSupprimerParution.target = self ;
  [mBoutonSupprimerParution
    bind:@"enabled"
    toObject:mListeDesParutionsController
    withKeyPath:@"canRemove"
    options:nil
  ] ;
//--- Date Picker
  [mDatePicker setDateValue:[NSDate date]] ;
//---
  [mAddParutionPanel setDefaultButtonCell:mBoutonOk.cell] ;
//--- Conflits
  mMessageConflitTextField.stringValue = @"" ;
//--- Lecture de la base distante
  [self rafraichirParutions] ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (NSString *) tableView:(NSTableView *)aTableView
               toolTipForCell:(NSCell *)aCell
               rect:(NSRectPointer)rect
               tableColumn:(NSTableColumn *)aTableColumn
               row:(NSInteger)row
               mouseLocation:(NSPoint)mouseLocation {
  NSString * result = nil ;
  NSString * columnIdentifier = [aTableColumn identifier] ;
  if ([@"date" isEqualToString:columnIdentifier]) {
    PMParution * parution = [[mListeDesParutionsController arrangedObjects] objectAtIndex:(NSUInteger) row] ;
    result = parution.mStringForDateParutionTooltip ;
  }else if ([@"edition" isEqualToString:columnIdentifier]) {
    PMParution * parution = [[mListeDesParutionsController arrangedObjects] objectAtIndex:(NSUInteger) row] ;
    result = parution.mStringForEditionTooltip ;
  }else if ([@"groupe" isEqualToString:columnIdentifier]) {
    PMParution * parution = [[mListeDesParutionsController arrangedObjects] objectAtIndex:(NSUInteger) row] ;
    result = parution.mStringForGroupeTooltip ;
  }else if ([@"id" isEqualToString:columnIdentifier]) {
    PMParution * parution = [[mListeDesParutionsController arrangedObjects] objectAtIndex:(NSUInteger) row] ;
    result = parution.mStringForIDTooltip ;
  }
  // NSLog (@"columnIdentifier '%@', result '%@'", columnIdentifier, result) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (void) rafraichirParutions {
  NSMutableString * query = [NSMutableString new] ;
  [query appendFormat:
    @"SELECT %@.id,%@.edition,%@.date,%@.groupe,COUNT(DISTINCT encarts1.emplacement),COUNT(encarts1.idParution)<>COUNT(DISTINCT encarts1.emplacement) ",
    [gAppDelegate nomTableParutions],
    [gAppDelegate nomTableParutions],
    [gAppDelegate nomTableParutions],
    [gAppDelegate nomTableParutions]
  ] ;
  [query appendFormat:
    @"FROM %@, %@ as encarts1, %@ as encarts2 ",
    [gAppDelegate nomTableParutions],
    [gAppDelegate nomTableEncarts],
    [gAppDelegate nomTableEncarts]
  ] ;
  [query appendFormat:
    @"WHERE %@.id=encarts1.idParution AND %@.id=encarts2.idParution AND encarts1.emplacement=encarts2.emplacement ",
    [gAppDelegate nomTableParutions],
    [gAppDelegate nomTableParutions]
  ] ;
  [query appendFormat:@"GROUP BY %@.id", [gAppDelegate nomTableParutions]] ;
  [[AppDelegate connection]
    customQuery:query
    client:self
    responseSelector:@selector (resultatLectureTableParutions:)
  ] ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (void) resultatLectureTableParutions: (NSArray *) inParutionsLuesDansLaBase {
//  NSLog (@"inParutionsLuesDansLaBase %@", inParutionsLuesDansLaBase) ;
//--- Ajouter / modifier des parutions ?
  NSMutableSet * IDSet = [NSMutableSet new] ;
  for (NSDictionary * d in inParutionsLuesDansLaBase) {
    PMParution * parution = [[PMParution alloc]
      initWithDictionary:d
      connection:[AppDelegate connection]
    ] ;
    [IDSet addObject:[NSNumber numberWithUnsignedInteger:parution.mID]] ;
    NSArray * existingObjects = [mListeDesParutionsController arrangedObjects] ;
    PMParution * object = nil ;
    for (NSUInteger i=0 ; (i<existingObjects.count) && (object == nil) ; i++) {
      PMParution * candidate = [existingObjects objectAtIndex:i] ;
      if (candidate.mID == parution.mID) {
        object = candidate ;
      }
    }
    if (object == nil) { // Does not exist
      [mListeDesParutionsController addObject:parution] ;
    }else{
      [object updateWithDictionary:d] ;
    }
  }
//--- Supprimer des parutions ?
  NSArray * currentObjects = [[mListeDesParutionsController arrangedObjects] copy] ;
  for (PMParution * parution in currentObjects) {
    if (![IDSet containsObject:[NSNumber numberWithUnsignedInteger:parution.mID]]) {
      [mListeDesParutionsController removeObject:parution] ;
    }
  }
//--- Des conflits ?
  NSUInteger nombreConflits = 0 ;
  for (PMParution * parution in currentObjects) {
    if (parution.mConflit) {
      nombreConflits ++ ;
    }
  }
  if (nombreConflits == 0) {
    mMessageConflitTextField.stringValue = @"" ;
  }else if (nombreConflits == 1) {
    mMessageConflitTextField.stringValue = @"1 parution en conflit" ;
  }else{
    mMessageConflitTextField.stringValue = [NSString stringWithFormat:@"%lu parutions en conflit", nombreConflits] ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

- (IBAction) ajouterParution: (id) inSender {
  [mListeDesParutionsTableView.window
    beginSheet:mAddParutionPanel
    completionHandler:^(NSModalResponse inReturnCode) {
      if (NSModalResponseStop == inReturnCode) { // Ok
        PMParution * parution = [[PMParution alloc]
          initWithDate:self->mDatePicker.dateValue
          edition:self->mEditionTextField.stringValue
          groupe:self->mGroupeTextField.stringValue
          remplissage:0
          connection:[AppDelegate connection]
        ] ;
        [self->mListeDesParutionsController addObject:parution] ;
      }
    }
  ] ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (IBAction) annulerSheet:(id) inSender {
  [mListeDesParutionsTableView.window endSheet:mAddParutionPanel returnCode:NSModalResponseAbort] ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (IBAction) validerSheet:(id) inSender {
  [mListeDesParutionsTableView.window endSheet:mAddParutionPanel returnCode:NSModalResponseStop] ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (IBAction) doubleClicDansTableView: (id) inSender {
  const NSInteger clickedRow = mListeDesParutionsTableView.clickedRow ;
  if (clickedRow >= 0) {
    mParutionEnCoursEdition = [[mListeDesParutionsController arrangedObjects] objectAtIndex:(NSUInteger) clickedRow] ;
    [mDatePicker setDateValue:mParutionEnCoursEdition.mDateParution] ;
    mEditionTextField.stringValue = mParutionEnCoursEdition.mEdition ;
    mGroupeTextField.stringValue  = mParutionEnCoursEdition.mGroupe ;
    [mListeDesParutionsTableView.window
      beginSheet:mAddParutionPanel
      completionHandler:^(NSModalResponse inReturnCode) {
        if (NSModalResponseStop == inReturnCode) { // Ok
          self->mParutionEnCoursEdition.mDateParution = self->mDatePicker.dateValue ;
          self->mParutionEnCoursEdition.mEdition = self->mEditionTextField.stringValue ;
          self->mParutionEnCoursEdition.mGroupe = self->mGroupeTextField.stringValue ;
        }
        self->mParutionEnCoursEdition = nil ;
      }
    ] ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

- (IBAction) afficherParutionSelectionnee: (id) inSender {
  const NSInteger clickedRow = mListeDesParutionsTableView.clickedRow ;
  if (clickedRow >= 0) {
    PMParution * parution = [[mListeDesParutionsController arrangedObjects] objectAtIndex:(NSUInteger) clickedRow] ;
    [gGestionnaireEncarts editerParution:parution] ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//   Suppression d'une parution, et de ses encarts                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

- (IBAction) supprimerParutionSelectionnee: (id) inSender {
  const NSInteger selectedRow = mListeDesParutionsTableView.selectedRow ;
  if (selectedRow >= 0) {
    PMParution * parution = [[mListeDesParutionsController arrangedObjects] objectAtIndex:(NSUInteger) selectedRow] ;
    NSDateFormatter * f = [NSDateFormatter new] ;
    f.dateFormat = @"EEEE dd MMMM yyyy" ;
    NSAlert * alert = [NSAlert new] ;
    alert.messageText = [NSString
       stringWithFormat:@"Êtes-vous sûr de vouloir supprimer la parution %@, %@ du %@, et tous ses encarts ?",
       parution.mEdition,
       parution.mGroupe,
       [f stringFromDate:parution.mDateParution]
    ] ;
    alert.informativeText = @"Cette opération ne pourra pas être annulée." ;
    [alert addButtonWithTitle:@"Supprimer"] ;
    [alert addButtonWithTitle:@"Annuler"] ;
    [alert
      beginSheetModalForWindow:mListeDesParutionsTableView.window
      completionHandler: ^(NSInteger returnCode) {
        // NSLog (@"returnCode %ld", returnCode) ;
        if (returnCode == 1000) {
          [[AppDelegate connection] // Commencer par supprimer les encarts
            deleteInTableNamed:[gAppDelegate nomTableEncarts]
            fieldName:@"idParution"
            fieldValue:parution.mID
            client:self
            responseSelector:@selector (resultatSuppressionDansTableEncarts:)
          ] ;
        }
      }
    ] ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

- (void) resultatSuppressionDansTableEncarts: (NSString *) inResponse {
  if (inResponse.length > 0 && ![inResponse isEqualToString:@"Several rows have been deleted"] && ![inResponse isEqualToString:@"No row deleted"]) {
    NSAlert * alert = [NSAlert new] ;
    alert.messageText = @"Erreur de suppression" ;
    alert.informativeText = inResponse ;
    [alert
      beginSheetModalForWindow:mListeDesParutionsTableView.window
      completionHandler: NULL
    ] ;
  }else{ // Ok, maintenant supprimer la parution
    const NSInteger selectedRow = mListeDesParutionsTableView.selectedRow ;
    PMParution * parution = [[mListeDesParutionsController arrangedObjects] objectAtIndex:(NSUInteger) selectedRow] ;
    [[AppDelegate connection] // Commencer par supprimer les encarts
      deleteInTableNamed:[gAppDelegate nomTableParutions]
      fieldName:@"id"
      fieldValue:parution.mID
      client:self
      responseSelector:@selector (resultatSuppressionDansTableParution:)
    ] ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*

- (void) resultatSuppressionDansTableParution: (NSString *) inResponse {
  if (inResponse.length > 0) {
    NSAlert * alert = [NSAlert new] ;
    alert.messageText = @"Erreur de suppression" ;
    alert.informativeText = inResponse ;
    [alert
      beginSheetModalForWindow:mListeDesParutionsTableView.window
      completionHandler: NULL
    ] ;
  }
  [self rafraichirParutions] ;
}

//---------------------------------------------------------------------------------------------------------------------*

@end

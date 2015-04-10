//
//  PMGestionEncarts.m
//  reservationEncarts
//
//  Created by Pierre Molinaro on 26/08/2014.
//  Copyright (c) 2014 Pierre Molinaro. All rights reserved.
//
//---------------------------------------------------------------------------------------------------------------------*

#import "PMGestionEncarts.h"
#import "PMEncart.h"
#import "AppDelegate.h"
#import "PMParution.h"

//---------------------------------------------------------------------------------------------------------------------*

PMGestionEncarts * gGestionnaireEncarts ;

//---------------------------------------------------------------------------------------------------------------------*

@implementation PMGestionEncarts

//---------------------------------------------------------------------------------------------------------------------*

- (void) awakeFromNib {
  gGestionnaireEncarts = self ;
//------------------ Parutions
  mListeDesEncartsArray = [NSMutableArray new] ;
  mListeDesEncartsController = [NSArrayController new] ;
  [mListeDesEncartsController
    bind:@"contentArray"
    toObject:self
    withKeyPath:@"mListeDesEncartsArray"
    options:nil
  ] ;
  mListeDesEncartsTableView.delegate = self ;
//--- ID
  [[mListeDesEncartsTableView tableColumnWithIdentifier:@"id"]
    bind:@"value"
    toObject:mListeDesEncartsController
    withKeyPath:@"arrangedObjects.mID"
    options:nil
  ] ;
  [[mListeDesEncartsTableView tableColumnWithIdentifier:@"id"]
    bind:@"textColor"
    toObject:mListeDesEncartsController
    withKeyPath:@"arrangedObjects.mColorForIDDisplay"
    options:nil
  ] ;
//--- ID parution
  [[mListeDesEncartsTableView tableColumnWithIdentifier:@"idParution"]
    bind:@"value"
    toObject:mListeDesEncartsController
    withKeyPath:@"arrangedObjects.mIDParution"
    options:nil
  ] ;
  [[mListeDesEncartsTableView tableColumnWithIdentifier:@"idParution"]
    bind:@"textColor"
    toObject:mListeDesEncartsController
    withKeyPath:@"arrangedObjects.mColorForIDParutionDisplay"
    options:nil
  ] ;
//--- Emplacement
  [[mListeDesEncartsTableView tableColumnWithIdentifier:@"emplacement"]
    bind:@"value"
    toObject:mListeDesEncartsController
    withKeyPath:@"arrangedObjects.mEmplacementPremiereParution"
    options:nil
  ] ;
  [[mListeDesEncartsTableView tableColumnWithIdentifier:@"emplacement"]
    bind:@"textColor"
    toObject:mListeDesEncartsController
    withKeyPath:@"arrangedObjects.mColorForEmplacementPremiereParutionDisplay"
    options:nil
  ] ;
//--- NomClient
  [[mListeDesEncartsTableView tableColumnWithIdentifier:@"nomClient"]
    bind:@"value"
    toObject:mListeDesEncartsController
    withKeyPath:@"arrangedObjects.mNomClient"
    options:nil
  ] ;
  [[mListeDesEncartsTableView tableColumnWithIdentifier:@"nomClient"]
    bind:@"textColor"
    toObject:mListeDesEncartsController
    withKeyPath:@"arrangedObjects.mColorForNomClientDisplay"
    options:nil
  ] ;
//--- Activation du bouton de suppression des encarts
  [mBoutonSupprimerEncart
    bind:@"enabled"
    toObject:mListeDesEncartsController
    withKeyPath:@"canRemove"
    options:nil
  ] ;
  mBoutonSupprimerEncart.target = self ;
  mBoutonSupprimerEncart.action = @selector (supprimerEncart:) ;
//--- Gestion du double clic dans la table
  mListeDesEncartsTableView.doubleAction = @selector (doubleClicDansTableView:) ;
  mListeDesEncartsTableView.target = self ;
//--- Nom client
  [mNomClientTextField setStringValue:@""] ;
//---
  [mBoutonAfficherCalendrierClient
    bind:@"enabled"
    toObject:mListeDesEncartsController
    withKeyPath:@"canRemove"
    options:nil
  ] ;
  mBoutonAfficherCalendrierClient.action = @selector (afficherCalendrierParClient:) ;
  mBoutonAfficherCalendrierClient.target = self ;
//---
  [mAddEncartPanel setDefaultButtonCell:mBoutonOk.cell] ;
  [mAffichageDispositionEncartsPanel setDefaultButtonCell:mAffichageDispositionEncartsOkBouton.cell] ;
  [mAffichageCalendrierParClientPanel setDefaultButtonCell:mAffichageCalendrierParClientOkBouton.cell] ;
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
  if ([@"nom" isEqualToString:columnIdentifier]) {
    PMEncart * encart = [[mListeDesEncartsController arrangedObjects] objectAtIndex:(NSUInteger) row] ;
    result = encart.mStringForNomClientTooltip ;
  }else if ([@"idParution" isEqualToString:columnIdentifier]) {
    PMEncart * encart = [[mListeDesEncartsController arrangedObjects] objectAtIndex:(NSUInteger) row] ;
    result = encart.mStringForIDParutionTooltip ;
  }else if ([@"emplacement" isEqualToString:columnIdentifier]) {
    PMEncart * encart = [[mListeDesEncartsController arrangedObjects] objectAtIndex:(NSUInteger) row] ;
    result = encart.mStringForEmplacementPremiereParutionTooltip ;
  }else if ([@"id" isEqualToString:columnIdentifier]) {
    PMEncart * encart = [[mListeDesEncartsController arrangedObjects] objectAtIndex:(NSUInteger) row] ;
    result = encart.mStringForIDTooltip ;
  }
  // NSLog (@"columnIdentifier '%@', result '%@'", columnIdentifier, result) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (IBAction) rafraichirEncarts {
  if (mParutionEnCoursEdition != nil) {
    [[AppDelegate connection]
      readTableNamed:[gAppDelegate nomTableEncarts]
      fieldNameArray:[NSArray arrayWithObjects:@"id", @"nomClient", @"idParution", @"emplacement", nil]
      whereCondition:[NSString stringWithFormat:@"idParution=%lu", mParutionEnCoursEdition.mID]
      client:self
      responseSelector:@selector (resultatLectureTableEncarts:)
    ] ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

- (void) resultatLectureTableEncarts: (NSArray *) inEncartsLusDansLaBase {
 //  NSLog (@"inEncartsLusDansLaBase %@", inEncartsLusDansLaBase) ;
//--- Ajouter / modifier des encart ?
  NSMutableSet * IDSet = [NSMutableSet new] ;
  for (NSDictionary * d in inEncartsLusDansLaBase) {
    PMEncart * encart = [[PMEncart alloc]
      initWithDictionary:d
      connection:[AppDelegate connection]
    ] ;
    [IDSet addObject:[NSNumber numberWithUnsignedInteger:encart.mID]] ;
    NSArray * existingObjects = [mListeDesEncartsController arrangedObjects] ;
    PMEncart * object = nil ;
    for (NSUInteger i=0 ; (i<existingObjects.count) && (object == nil) ; i++) {
      PMEncart * candidate = [existingObjects objectAtIndex:i] ;
      if (candidate.mID == encart.mID) {
        object = candidate ;
      }
    }
    if (object == nil) { // Does not exist
      [mListeDesEncartsController addObject:encart] ;
    }else{
      [object updateWithDictionary:d] ;
    }
  }
//--- Supprimer des parutions ?
  NSArray * currentObjects = [[mListeDesEncartsController arrangedObjects] copy] ;
  for (PMEncart * encart in currentObjects) {
    if (![IDSet containsObject:[NSNumber numberWithUnsignedInteger:encart.mID]]) {
      [mListeDesEncartsController removeObject:encart] ;
    }
  }
  [self mettreAJourBilanEncarts] ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (IBAction) ajouterEncart: (id) inSender {
//--------------------------- Mettre à jour le popup button des emplacements
  mNomClientTextField.stringValue = @"" ;
//--- Valider tous les items
  NSMenu * menu = mEmplacementPopUpButton.menu ;
  menu.autoenablesItems = NO ;
  for (NSInteger i=0 ; i<menu.numberOfItems ; i++) {
    NSMenuItem * item = [menu itemAtIndex:i] ;
    [item setEnabled:YES] ;
  }
//--- Parcourir les encarts actuels pour interdire la duplication
  for (PMEncart * encart in mListeDesEncartsArray) {
    NSMenuItem * item = [menu itemAtIndex: ((NSInteger) encart.mEmplacementPremiereParution) - 1] ;
    [item setEnabled:NO] ;
  }
//--- Chercher le premier encart libre
  BOOL existeEncartLibre = NO ;
  for (NSInteger i=0 ; (i<menu.numberOfItems) && !existeEncartLibre ; i++) {
    NSMenuItem * item = [menu itemAtIndex:i] ;
    if (item.isEnabled) {
      existeEncartLibre = YES ;
      [mEmplacementPopUpButton selectItemAtIndex:i] ;
    }
  }
//--- Dialogue ou alerte
  if (existeEncartLibre) {
    [mListeDesEncartsTableView.window
      beginSheet:mAddEncartPanel
      completionHandler:^(NSModalResponse inReturnCode) {
        if (NSModalResponseStop == inReturnCode) { // Ok
          PMEncart * encart = [[PMEncart alloc]
            initWithNomClient:self->mNomClientTextField.stringValue
            IDParution:self->mParutionEnCoursEdition.mID
            emplacementPremiereParution:1 + (NSUInteger) self->mEmplacementPopUpButton.indexOfSelectedItem
            connection:[AppDelegate connection]
          ] ;
          [self->mListeDesEncartsController addObject:encart] ;
          [self mettreAJourBilanEncarts] ;
        }
      }
    ] ;
  }else{
    NSAlert * alert = [NSAlert new] ;
    alert.messageText = @"Il n'y a plus d'emplacement libre." ;
    alert.informativeText = @"Les 11 emplacements de cette parution sont attribués." ;
    [alert
      beginSheetModalForWindow:mListeDesEncartsTableView.window
      completionHandler: NULL
    ] ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

- (IBAction) annulerSheet:(id) inSender {
  [mListeDesEncartsTableView.window endSheet:mAddEncartPanel returnCode:NSModalResponseAbort] ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (IBAction) validerSheet:(id) inSender {
  [mListeDesEncartsTableView.window endSheet:mAddEncartPanel returnCode:NSModalResponseStop] ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (IBAction) doubleClicDansTableView: (id) inSender {
  const NSInteger clickedRow = mListeDesEncartsTableView.clickedRow ;
  if (clickedRow >= 0) {
    PMEncart * encartEnCoursEdition = [[mListeDesEncartsController arrangedObjects] objectAtIndex:(NSUInteger) clickedRow] ;
    mNomClientTextField.stringValue = encartEnCoursEdition.mNomClient ;
  //--------------------------- Mettre à jour le popup button des emplacements
  //--- Valider tous les items
    NSMenu * menu = mEmplacementPopUpButton.menu ;
    menu.autoenablesItems = NO ;
    for (NSInteger i=0 ; i<menu.numberOfItems ; i++) {
      NSMenuItem * item = [menu itemAtIndex:i] ;
      [item setEnabled:YES] ;
    }
  //--- Parcourir les encarts actuels pour interdire la duplication
    for (PMEncart * encart in mListeDesEncartsArray) {
      NSMenuItem * item = [menu itemAtIndex: ((NSInteger) encart.mEmplacementPremiereParution) - 1] ;
      [item setEnabled:NO] ;
    }
  //--- Activer et sélectionner l'emplacement qui correspond à l'encart en cours d'édition
    const NSInteger idx = ((NSInteger) encartEnCoursEdition.mEmplacementPremiereParution) - 1 ;
    NSMenuItem * item = [menu itemAtIndex:idx] ;
    [item setEnabled:YES] ;
    [mEmplacementPopUpButton selectItemAtIndex:idx] ;
    [[NSRunLoop currentRunLoop]
      performSelector:@selector (editerEncart:)
      target:self
      argument:encartEnCoursEdition
      order:NSUIntegerMax
      modes:[NSArray arrayWithObject:NSDefaultRunLoopMode]
    ] ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

- (void) editerEncart: (PMEncart *) inEncart {
 [mListeDesEncartsTableView.window
    beginSheet:mAddEncartPanel
    completionHandler:^(NSModalResponse inReturnCode) {
      if (NSModalResponseStop == inReturnCode) { // Ok
        inEncart.mNomClient = self->mNomClientTextField.stringValue ;
        inEncart.mEmplacementPremiereParution = 1 + (NSUInteger) self->mEmplacementPopUpButton.indexOfSelectedItem ;
        [self mettreAJourBilanEncarts] ;
      }
    }
  ] ;
}

//---------------------------------------------------------------------------------------------------------------------*
// http://www.unicode.org/reports/tr35/tr35-31/tr35-dates.html#Date_Format_Patterns

- (void) editerParution: (PMParution *) inParution {
  mParutionEnCoursEdition = inParution ;
  [self rafraichirEncarts] ;
  NSDateFormatter * f = [NSDateFormatter new] ;
  f.dateFormat = @"EEEE dd MMMM yyyy" ;
  NSString * titre = [NSString stringWithFormat:@"%@, %@, %@", inParution.mEdition, inParution.mGroupe, [f stringFromDate:inParution.mDateParution]] ;
  mTitreEncartsTableField.stringValue = titre ;
  [gAppDelegate connectUserView:mVueEncarts] ;
//--- Mettre à jour la liste des dates de parution
  f.dateFormat = @"yyyy" ;
  NSInteger annee = [f stringFromDate:inParution.mDateParution].integerValue ;
  f.dateFormat = @"MM" ;
  NSInteger mois = [f stringFromDate:inParution.mDateParution].integerValue ;
  // NSLog (@"Annee : %ld, mois %ld", annee, mois) ;
  for (NSInteger i=0 ; i<11 ; i++) {
    NSCell * cell = [mParutionMatrix cellAtRow:0 column:i] ;
    [cell setTitle:[NSString stringWithFormat:@"%ld / %ld", mois, annee]] ;
    mois ++ ;
    if (mois == 8) {
      mois ++ ;
    }else if (mois == 13) {
      mois = 1 ;
      annee ++ ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

- (IBAction) afficherParutions: (id)sender {
  mParutionEnCoursEdition = nil ;
  [gAppDelegate afficherListeParutions:nil] ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (IBAction) supprimerEncart: (id)sender {
  const NSInteger selectedRow = mListeDesEncartsTableView.selectedRow ;
  if (selectedRow >= 0) {
    PMEncart * encartASupprimer = [[mListeDesEncartsController arrangedObjects] objectAtIndex:(NSUInteger) selectedRow] ;
    NSAlert * alert = [NSAlert new] ;
    alert.messageText = @"Suppression ?" ;
    alert.informativeText = [NSString
       stringWithFormat:@"Êtes-vous sûr de vouloir supprimer l'encart n°%lu du '%@' ?",
       encartASupprimer.mEmplacementPremiereParution,
       encartASupprimer.mNomClient
    ] ;
    [alert addButtonWithTitle:@"Supprimer"] ;
    [alert addButtonWithTitle:@"Annuler"] ;
    [alert
      beginSheetModalForWindow:mListeDesEncartsTableView.window
      completionHandler: ^(NSInteger returnCode) {
        // NSLog (@"returnCode %ld", returnCode) ;
        if (returnCode == 1000) {
          [[AppDelegate connection]
            deleteInTableNamed:[gAppDelegate nomTableEncarts]
            fieldName:@"id"
            fieldValue:encartASupprimer.mID
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
  if (inResponse.length > 0) {
    NSAlert * alert = [NSAlert new] ;
    alert.messageText = @"Erreur de suppression" ;
    alert.informativeText = inResponse ;
    [alert
      beginSheetModalForWindow:mListeDesEncartsTableView.window
      completionHandler: NULL
    ] ;
  }
  [self rafraichirEncarts] ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (void) mettreAJourBilanEncarts {
  NSCountedSet * countedSet = [NSCountedSet new] ;
  for (PMEncart * encart in mListeDesEncartsArray) {
    const NSInteger emplacement = (NSInteger) encart.mEmplacementPremiereParution ;
    [countedSet addObject:[NSNumber numberWithInteger:emplacement]] ;
  }
//--- Des emplacements attribués plusieurs fois ?
  BOOL ok = YES ;
  for (NSInteger i=1 ; (i<=11) && ok ; i++) {
    const NSUInteger n = [countedSet countForObject:[NSNumber numberWithInteger:i]] ;
    if (n > 1) {
      ok = NO ;
      mBilanEmplacementsTextField.stringValue = [NSString stringWithFormat:@"Erreur : l'emplacement %ld est attribué %lu fois.", i, n] ;
      mBilanEmplacementsTextField.textColor = [NSColor redColor] ;
    }
  }
//--- Des emplacements non attribués ?
  if (ok) {
    NSMutableString * s = [NSMutableString new] ;
    NSInteger nombreNonAttribues = 0 ;
    for (NSInteger i=1 ; i<=11 ; i++) {
      const NSUInteger n = [countedSet countForObject:[NSNumber numberWithInteger:i]] ;
      if (n == 0) {
        [s appendFormat:@" %ld", i] ;
        nombreNonAttribues ++ ;
      }
    }
    if (nombreNonAttribues == 0) {
      mBilanEmplacementsTextField.stringValue = @"Tous les emplacements sont attribués." ;
      mBilanEmplacementsTextField.textColor = [NSColor blackColor] ;
    }else if (nombreNonAttribues == 1) {
      mBilanEmplacementsTextField.stringValue = [NSString stringWithFormat:@"Un emplacement non attribué :%@.", s] ;
      mBilanEmplacementsTextField.textColor = [NSColor orangeColor] ;
    }else{
      mBilanEmplacementsTextField.stringValue = [NSString stringWithFormat:@"%ld emplacements non attribués :%@.", nombreNonAttribues, s] ;
      mBilanEmplacementsTextField.textColor = [NSColor orangeColor] ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

- (IBAction) afficherMiseEnPage: (NSMatrix *) inSender {
  const NSInteger clickedColumn = inSender.selectedColumn ;
  mEditionTextField.stringValue = mParutionEnCoursEdition.mEdition ;
  mGroupeTextField.stringValue = mParutionEnCoursEdition.mGroupe ;
  NSDateFormatter * f = [NSDateFormatter new] ;
  f.dateFormat = @"MMMM yyyy" ;
  mDatePremiereParutionTextField.stringValue = [f stringFromDate:mParutionEnCoursEdition.mDateParution] ;
//--- Affichage du mois
  f.dateFormat = @"yyyy" ;
  NSInteger annee = [f stringFromDate:mParutionEnCoursEdition.mDateParution].integerValue ;
  f.dateFormat = @"MM" ;
  const NSInteger moisDepart = [f stringFromDate:mParutionEnCoursEdition.mDateParution].integerValue ;
  NSInteger mois = moisDepart ;
  const NSInteger emplacement = (clickedColumn + moisDepart + 9) % 11 ;
  mois += clickedColumn ;
  if (mois > 12) {
    mois -= 12 ;
    annee ++ ;
  }
  if ((mois < moisDepart) && (mois >= 8)) {
    mois ++ ;
  }
  mMoisAnneeParutionTextField.stringValue = [NSString stringWithFormat:@"%ld / %ld", mois, annee] ;
  if (clickedColumn == 0) {
    mIndiceParutionTextField.stringValue = @"1re parution" ;
  }else{
    mIndiceParutionTextField.stringValue = [NSString stringWithFormat:@"%lde parution", clickedColumn + 1] ;
  }
//--- Tableau des emplacements
  NSMutableArray * array = [NSMutableArray new] ;
  for (NSInteger i=0 ; i<11 ; i++) {
    [array addObject:@"Non attribué"] ;
  }
//--- Récupération de tous les emplacements
  for (PMEncart * encart in mListeDesEncartsArray) {
    const NSUInteger idx = encart.mEmplacementPremiereParution - 1 ;
    [array replaceObjectAtIndex:idx withObject:encart.mNomClient] ;
  }
//--- Affichage des emplacements
  mEmplacement1TextField.stringValue  = [array objectAtIndex: (NSUInteger) emplacement] ;
  mEmplacement11TextField.stringValue = [array objectAtIndex: (NSUInteger) (emplacement +  1) % 11] ;
  mEmplacement10TextField.stringValue = [array objectAtIndex: (NSUInteger) (emplacement +  2) % 11] ;
  mEmplacement9TextField.stringValue  = [array objectAtIndex: (NSUInteger) (emplacement +  3) % 11] ;
  mEmplacement8TextField.stringValue  = [array objectAtIndex: (NSUInteger) (emplacement +  4) % 11] ;
  mEmplacement7TextField.stringValue  = [array objectAtIndex: (NSUInteger) (emplacement +  5) % 11] ;
  mEmplacement6TextField.stringValue  = [array objectAtIndex: (NSUInteger) (emplacement +  6) % 11] ;
  mEmplacement5TextField.stringValue  = [array objectAtIndex: (NSUInteger) (emplacement +  7) % 11] ;
  mEmplacement4TextField.stringValue  = [array objectAtIndex: (NSUInteger) (emplacement +  8) % 11] ;
  mEmplacement3TextField.stringValue  = [array objectAtIndex: (NSUInteger) (emplacement +  9) % 11] ;
  mEmplacement2TextField.stringValue  = [array objectAtIndex: (NSUInteger) (emplacement + 10) % 11] ;
//---
  [mListeDesEncartsTableView.window
    beginSheet:mAffichageDispositionEncartsPanel
    completionHandler:NULL
  ] ;
}


//---------------------------------------------------------------------------------------------------------------------*

- (IBAction) imprimerMiseEnPage: (id) inSender {
  NSPrintInfo * pr = [NSPrintInfo sharedPrintInfo] ;
  pr.orientation = NSLandscapeOrientation ;
  pr.verticalPagination = NSFitPagination ;
  pr.horizontalPagination = NSFitPagination ;
  pr.topMargin = 0.0 ;
  pr.bottomMargin = 0.0 ;
  pr.leftMargin = 0.0 ;
  pr.rightMargin = 0.0 ;
  NSPrintOperation * op = [NSPrintOperation printOperationWithView:mVueCompositionParution printInfo:pr] ;
  [op runOperation] ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (void) afficherCalendrierParClient: (id) inSender {
  const NSInteger clickedColumn = mListeDesEncartsTableView.selectedRow ;
  PMEncart * encart = [[mListeDesEncartsController arrangedObjects] objectAtIndex:(NSUInteger) clickedColumn] ;
  mNomClientCalendrierParClientTextField.stringValue = encart.mNomClient ;
  mEditionCalendrierParClientTextField.stringValue = mParutionEnCoursEdition.mEdition ;
  mGroupeCalendrierParClientTextField.stringValue = mParutionEnCoursEdition.mGroupe ;
  NSDateFormatter * f = [NSDateFormatter new] ;
  f.dateFormat = @"MMMM yyyy" ;
  mDatePremiereParutionCalendrierParClientTextField.stringValue = [f stringFromDate:mParutionEnCoursEdition.mDateParution] ;
//--- Affichage du mois
  f.dateFormat = @"yyyy" ;
  NSInteger annee = [f stringFromDate:mParutionEnCoursEdition.mDateParution].integerValue ;
  f.dateFormat = @"MM" ;
  const NSInteger moisDepart = [f stringFromDate:mParutionEnCoursEdition.mDateParution].integerValue ;
  NSInteger mois = moisDepart ;
  const NSInteger emplacement = (12 + ((NSInteger) encart.mEmplacementPremiereParution) - moisDepart - (moisDepart < 8)) % 11 ;
//--- Tableau des emplacements
  f.dateFormat = @"MMMM yyyy" ;
  NSMutableArray * array = [NSMutableArray new] ;
  for (NSInteger i=0 ; i<11 ; i++) {
    NSDateComponents *comps = [[NSDateComponents alloc] init];
    [comps setMonth:mois] ;
    [comps setYear:annee] ;
    NSCalendar * gregorian = [[NSCalendar alloc] initWithCalendarIdentifier:NSGregorianCalendar];
    NSDate *date = [gregorian dateFromComponents:comps] ;
    [array addObject:[f stringFromDate:date]] ;
    mois ++ ;
    if (mois == 8) {
      mois ++ ;
    }else if (mois > 12) {
      mois = 1 ;
      annee ++ ;
    }
  }
//--- Affichage des emplacements
  mEmplacement1CalendrierParClientTextField.stringValue  = [array objectAtIndex: (NSUInteger) emplacement] ;
  mEmplacement2CalendrierParClientTextField.stringValue = [array objectAtIndex: (NSUInteger) (emplacement +  1) % 11] ;
  mEmplacement3CalendrierParClientTextField.stringValue = [array objectAtIndex: (NSUInteger) (emplacement +  2) % 11] ;
  mEmplacement4CalendrierParClientTextField.stringValue  = [array objectAtIndex: (NSUInteger) (emplacement +  3) % 11] ;
  mEmplacement5CalendrierParClientTextField.stringValue  = [array objectAtIndex: (NSUInteger) (emplacement +  4) % 11] ;
  mEmplacement6CalendrierParClientTextField.stringValue  = [array objectAtIndex: (NSUInteger) (emplacement +  5) % 11] ;
  mEmplacement7CalendrierParClientTextField.stringValue  = [array objectAtIndex: (NSUInteger) (emplacement +  6) % 11] ;
  mEmplacement8CalendrierParClientTextField.stringValue  = [array objectAtIndex: (NSUInteger) (emplacement +  7) % 11] ;
  mEmplacement9CalendrierParClientTextField.stringValue  = [array objectAtIndex: (NSUInteger) (emplacement +  8) % 11] ;
  mEmplacement10CalendrierParClientTextField.stringValue  = [array objectAtIndex: (NSUInteger) (emplacement +  9) % 11] ;
  mEmplacement11CalendrierParClientTextField.stringValue  = [array objectAtIndex: (NSUInteger) (emplacement + 10) % 11] ;
//---
  [mListeDesEncartsTableView.window
    beginSheet:mAffichageCalendrierParClientPanel
    completionHandler:NULL
  ] ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (IBAction) imprimerParutionParClient: (id) inSender {
  NSPrintInfo * pr = [NSPrintInfo sharedPrintInfo] ;
  pr.orientation = NSLandscapeOrientation ;
  pr.verticalPagination = NSFitPagination ;
  pr.horizontalPagination = NSFitPagination ;
  pr.topMargin = 0.0 ;
  pr.bottomMargin = 0.0 ;
  pr.leftMargin = 0.0 ;
  pr.rightMargin = 0.0 ;
  NSPrintOperation * op = [NSPrintOperation printOperationWithView:mVueCompositionCalendrierParClient printInfo:pr] ;
  [op runOperation] ;
}

//---------------------------------------------------------------------------------------------------------------------*

@end

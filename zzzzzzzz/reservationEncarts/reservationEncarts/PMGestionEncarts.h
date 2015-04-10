//
//  PMGestionEncarts.h
//  reservationEncarts
//
//  Created by Pierre Molinaro on 26/08/2014.
//  Copyright (c) 2014 Pierre Molinaro. All rights reserved.
//
//---------------------------------------------------------------------------------------------------------------------*

#import <Cocoa/Cocoa.h>

//---------------------------------------------------------------------------------------------------------------------*

@class PMEncart ;
@class PMGestionEncarts ;
@class PMParution ;

//---------------------------------------------------------------------------------------------------------------------*

extern PMGestionEncarts * gGestionnaireEncarts ;

//---------------------------------------------------------------------------------------------------------------------*

@interface PMGestionEncarts : NSObject <NSTableViewDelegate> {
  IBOutlet NSTextField * mTitreEncartsTableField ;

//--- Liste des encarts
  IBOutlet NSTableView * mListeDesEncartsTableView ;
  NSMutableArray * mListeDesEncartsArray ;
  NSArrayController * mListeDesEncartsController ;
  
  IBOutlet NSPanel * mAddEncartPanel ;

  IBOutlet NSTextField * mNomClientTextField ;

  IBOutlet NSPopUpButton * mEmplacementPopUpButton ;

  IBOutlet NSButton * mBoutonOk ;

  IBOutlet NSTextField * mBilanEmplacementsTextField ;

  IBOutlet NSMatrix * mParutionMatrix ;

  IBOutlet NSButton * mBoutonAfficherCalendrierClient ;

  
  
  PMParution * mParutionEnCoursEdition ;

  IBOutlet NSButton * mBoutonSupprimerEncart ;

//--- Vue encarts
  IBOutlet NSView * mVueEncarts ;

//--- Affichage des parutions selon le mois
  IBOutlet NSPanel * mAffichageDispositionEncartsPanel ;
  IBOutlet NSButton * mAffichageDispositionEncartsOkBouton ;
  IBOutlet NSTextField * mEditionTextField ;
  IBOutlet NSTextField * mGroupeTextField ;
  IBOutlet NSTextField * mDatePremiereParutionTextField ;
  IBOutlet NSTextField * mMoisAnneeParutionTextField ;
  IBOutlet NSTextField * mIndiceParutionTextField ;

  IBOutlet NSView * mVueCompositionParution ;

  IBOutlet NSTextField * mEmplacement1TextField ;
  IBOutlet NSTextField * mEmplacement2TextField ;
  IBOutlet NSTextField * mEmplacement3TextField ;
  IBOutlet NSTextField * mEmplacement4TextField ;
  IBOutlet NSTextField * mEmplacement5TextField ;
  IBOutlet NSTextField * mEmplacement6TextField ;
  IBOutlet NSTextField * mEmplacement7TextField ;
  IBOutlet NSTextField * mEmplacement8TextField ;
  IBOutlet NSTextField * mEmplacement9TextField ;
  IBOutlet NSTextField * mEmplacement10TextField ;
  IBOutlet NSTextField * mEmplacement11TextField ;

//--- Affichage du calendrier par client
  IBOutlet NSPanel * mAffichageCalendrierParClientPanel ;
  IBOutlet NSButton * mAffichageCalendrierParClientOkBouton ;
  IBOutlet NSTextField * mEditionCalendrierParClientTextField ;
  IBOutlet NSTextField * mGroupeCalendrierParClientTextField ;
  IBOutlet NSTextField * mDatePremiereParutionCalendrierParClientTextField ;
  IBOutlet NSTextField * mNomClientCalendrierParClientTextField ;

  IBOutlet NSView * mVueCompositionCalendrierParClient ;

  IBOutlet NSTextField * mEmplacement1CalendrierParClientTextField ;
  IBOutlet NSTextField * mEmplacement2CalendrierParClientTextField ;
  IBOutlet NSTextField * mEmplacement3CalendrierParClientTextField ;
  IBOutlet NSTextField * mEmplacement4CalendrierParClientTextField ;
  IBOutlet NSTextField * mEmplacement5CalendrierParClientTextField ;
  IBOutlet NSTextField * mEmplacement6CalendrierParClientTextField ;
  IBOutlet NSTextField * mEmplacement7CalendrierParClientTextField ;
  IBOutlet NSTextField * mEmplacement8CalendrierParClientTextField ;
  IBOutlet NSTextField * mEmplacement9CalendrierParClientTextField ;
  IBOutlet NSTextField * mEmplacement10CalendrierParClientTextField ;
  IBOutlet NSTextField * mEmplacement11CalendrierParClientTextField ;
}

- (void) rafraichirEncarts ;

- (IBAction) ajouterEncart:(id) inSender ;
- (IBAction) annulerSheet:(id) inSender ;
- (IBAction) validerSheet:(id) inSender ;

- (void) editerParution: (PMParution *) inParution ;
@end

//---------------------------------------------------------------------------------------------------------------------*

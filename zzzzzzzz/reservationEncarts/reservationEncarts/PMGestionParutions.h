//
//  PMGestionParutions.h
//  reservationEncarts
//
//  Created by Pierre Molinaro on 26/08/2014.
//  Copyright (c) 2014 Pierre Molinaro. All rights reserved.
//
//---------------------------------------------------------------------------------------------------------------------*

#import <Cocoa/Cocoa.h>

//---------------------------------------------------------------------------------------------------------------------*

@class PMParution ;

//---------------------------------------------------------------------------------------------------------------------*

@interface PMGestionParutions : NSObject <NSTableViewDelegate> {
//--- Liste des parutions
  IBOutlet NSTableView * mListeDesParutionsTableView ;
  NSMutableArray * mListeDesParutionsArray ;
  NSArrayController * mListeDesParutionsController ;
  
  IBOutlet NSPanel * mAddParutionPanel ;
  IBOutlet NSDatePicker * mDatePicker ;
  IBOutlet NSTextField * mEditionTextField ;
  IBOutlet NSTextField * mGroupeTextField ;
  IBOutlet NSButton * mBoutonOk ;

  PMParution * mParutionEnCoursEdition ;
  IBOutlet NSButton * mBoutonSupprimerParution ;

  IBOutlet NSTextField * mMessageConflitTextField ;
}

- (IBAction) ajouterParution:(id) inSender ;
- (IBAction) annulerSheet:(id) inSender ;
- (IBAction) validerSheet:(id) inSender ;

- (void) rafraichirParutions ;

@end

//---------------------------------------------------------------------------------------------------------------------*

extern PMGestionParutions * gGestionParutions ;

//---------------------------------------------------------------------------------------------------------------------*

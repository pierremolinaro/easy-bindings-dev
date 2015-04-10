//
//  PMParution.h
//  reservationEncarts
//
//  Created by Pierre Molinaro on 26/08/2014.
//  Copyright (c) 2014 Pierre Molinaro. All rights reserved.
//
//---------------------------------------------------------------------------------------------------------------------*

#import <Foundation/Foundation.h>
#import "MySQLConnection.h"

//---------------------------------------------------------------------------------------------------------------------*

@interface PMParution : NSObject {
  MySQLConnection * mConnection ;
}

@property NSUInteger mID ;
@property (copy) NSString * mStringForIDTooltip ;
@property (copy) NSColor * mColorForIDDisplay ;

@property (copy) NSDate * mDateParution ;
@property (copy) NSColor * mColorForDateParutionDisplay ;
@property (copy) NSString * mStringForDateParutionTooltip ;

@property (copy) NSString * mEdition ;
@property (copy) NSColor * mColorForEditionDisplay ;
@property (copy) NSString * mStringForEditionTooltip ;

@property (copy) NSString * mGroupe ;
@property (copy) NSColor * mColorForGroupeDisplay ;
@property (copy) NSString * mStringForGroupeTooltip ;

@property NSUInteger mRemplissage ;
@property BOOL mConflit ;

- (instancetype) initWithDate: (NSDate *) inDate
                 edition: (NSString *) inEdition
                 groupe: (NSString *) inGroupe
                 remplissage: (NSUInteger) inRemplissage
                 connection: (MySQLConnection *) inConnection ;

- (instancetype) initWithDictionary: (NSDictionary *) inDictionary
                 connection: (MySQLConnection *) inConnection ;

- (void) updateWithDictionary: (NSDictionary *) inDictionary ;

- (NSColor *) remplissageBackgroundColor ;

@end

//---------------------------------------------------------------------------------------------------------------------*

//
//  PMEncart.h
//  reservationEncarts
//
//  Created by Pierre Molinaro on 26/08/2014.
//  Copyright (c) 2014 Pierre Molinaro. All rights reserved.
//
//---------------------------------------------------------------------------------------------------------------------*

#import <Foundation/Foundation.h>
#import "MySQLConnection.h"

//---------------------------------------------------------------------------------------------------------------------*

@interface PMEncart : NSObject {
  MySQLConnection * mConnection ;
}

@property NSUInteger mID ;
@property (copy) NSColor * mColorForIDDisplay ;
@property (copy) NSString * mStringForIDTooltip ;

@property NSUInteger mIDParution ;
@property (copy) NSColor * mColorForIDParutionDisplay ;
@property (copy) NSString * mStringForIDParutionTooltip ;

@property NSUInteger mEmplacementPremiereParution ;
@property (copy) NSColor * mColorForEmplacementPremiereParutionDisplay ;
@property (copy) NSString * mStringForEmplacementPremiereParutionTooltip ;

@property (copy) NSString * mNomClient ;
@property (copy) NSColor * mColorForNomClientDisplay ;
@property (copy) NSString * mStringForNomClientTooltip ;

- (instancetype) initWithNomClient: (NSString *) inNomClient
                 IDParution: (NSUInteger) inIDParution
                 emplacementPremiereParution: (NSUInteger) inEmplacement
                 connection: (MySQLConnection *) inConnection ;

- (instancetype) initWithDictionary: (NSDictionary *) inDictionary
                 connection: (MySQLConnection *) inConnection ;

- (void) updateWithDictionary: (NSDictionary *) inDictionary ;

@end

//---------------------------------------------------------------------------------------------------------------------*

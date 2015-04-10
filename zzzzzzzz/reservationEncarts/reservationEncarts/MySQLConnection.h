//
//  MySQLConnection.h
//  reservationEncarts
//
//  Created by Pierre Molinaro on 26/08/2014.
//  Copyright (c) 2014 Pierre Molinaro. All rights reserved.
//
//---------------------------------------------------------------------------------------------------------------------*

#import <Cocoa/Cocoa.h>
#import "mysql.h"

//---------------------------------------------------------------------------------------------------------------------*

@interface MySQLConnection : NSObject {
  MYSQL mMySQL ;
  NSOperationQueue * mOperationQueue ;
  NSTextField * mActivityTextField ;
}

@property BOOL mConnected ;

- (instancetype) initWithServer: (NSString *) inServer
                 dateBase: (NSString *) inDataBase
                 user : (NSString *) inUser
                 password: (NSString *) inPassword ;

- (void) setActivityTextField: (NSTextField *) inTextField ;


- (void) insertInTable: (NSString *) inTableName
         values: (NSDictionary *) inValues
         client: (NSObject *) inClient
         responseSelector: (SEL) inResponseSelector ;


- (void) customQuery: (NSString *) inQuery
         client: (NSObject *) inClient
         responseSelector: (SEL) inResponseSelector ;

- (void) readTableNamed: (NSString *) inTableName
         fieldNameArray: (NSArray *) inFieldNameArray
         whereCondition: (NSString *) inCondition // Empty string if no condtion
         client: (NSObject *) inClient
         responseSelector: (SEL) inResponseSelector ;


- (void) deleteInTableNamed: (NSString *) inTableName
         fieldName: (NSString *) inFieldName
         fieldValue: (NSUInteger) inFieldValue
         client: (NSObject *) inClient
         responseSelector: (SEL) inResponseSelector ;


- (void) updateTableNamed: (NSString *) inTableName
         values: (NSDictionary *) inValues
         idFieldName: (NSString *) inIDFieldName
         idFieldValue: (NSUInteger) inIDFieldValue
         client: (NSObject *) inClient
         responseSelector: (SEL) inResponseSelector ;
@end

//---------------------------------------------------------------------------------------------------------------------*

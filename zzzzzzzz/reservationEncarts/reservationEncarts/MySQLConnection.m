//
//  MySQLConnection.m
//  reservationEncarts
//
//  Created by Pierre Molinaro on 26/08/2014.
//  Copyright (c) 2014 Pierre Molinaro. All rights reserved.
//
//---------------------------------------------------------------------------------------------------------------------*

#import "MySQLConnection.h"

//---------------------------------------------------------------------------------------------------------------------*

@interface PMQuery : NSObject
  @property (copy) NSString * mQuery ;
  @property (assign) NSObject * mClient ;
  @property SEL mResponseSelector ;
@end

@implementation PMQuery
@end

//---------------------------------------------------------------------------------------------------------------------*

@implementation MySQLConnection

//---------------------------------------------------------------------------------------------------------------------*

- (instancetype) initWithServer: (NSString *) inServer
                 dateBase: (NSString *) inDataBase
                 user : (NSString *) inUser
                 password: (NSString *) inPassword {
  self = [super init] ;
  if (self) {
    mOperationQueue = [NSOperationQueue new] ;
    mysql_init (& mMySQL) ;
	  mysql_options (& mMySQL, MYSQL_OPT_CONNECT_TIMEOUT, "2") ;
	  mysql_options (& mMySQL, MYSQL_SET_CHARSET_NAME, "utf8") ;
    // http://dev.mysql.com/doc/refman/5.5/en/mysql-real-connect.html
    self.mConnected = NULL != mysql_real_connect (& mMySQL,
                                                  [inServer cStringUsingEncoding:NSUTF8StringEncoding],
                                                  [inUser cStringUsingEncoding:NSUTF8StringEncoding],
                                                  [inPassword cStringUsingEncoding:NSUTF8StringEncoding],
                                                  [inDataBase cStringUsingEncoding:NSUTF8StringEncoding],
                                                  3306,
                                                  NULL,
                                                  CLIENT_MULTI_STATEMENTS) ;
    //NSLog (@"mConnected %@", mConnected ? @"yes" : @"no") ;
  }
  return self ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Mise à jour de l'indicateur d'activité                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

- (void) setActivityTextField: (NSTextField *) inTextField {
  mActivityTextField = inTextField ;
  mActivityTextField.stringValue = @"" ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (void) updateActivityIndicator: (NSString *) inString {
  [self
    performSelectorOnMainThread:@selector (displayWithString:)
    withObject:inString.copy
    waitUntilDone:NO
  ] ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (void) displayWithString: (NSString *) inString {
  mActivityTextField.stringValue = inString ;
  [mActivityTextField display] ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Insertion dans d'une table                                                                                        *
//---------------------------------------------------------------------------------------------------------------------*

// http://dev.mysql.com/doc/refman/5.5/en/mysql-real-query.html
// http://dev.mysql.com/doc/refman/5.5/en/c-api-multiple-queries.html

- (void) insertInTable: (NSString *) inTableName
         values: (NSDictionary *) inValues
         client: (NSObject *) inClient
         responseSelector: (SEL) inResponseSelector {
  NSMutableString * query = [NSMutableString new] ;
  [query appendFormat:@"INSERT INTO %@ SET", inTableName] ;
  BOOL first = YES ;
  for (NSString * key in inValues.allKeys) {
    if (first) {
      first = NO ;
    }else{
      [query appendString:@","] ;
    }
    id value = [inValues objectForKey:key] ;
    [query appendFormat:@" %@=\"%@\"", key, value] ;
  }
  [query appendString:@";SELECT LAST_INSERT_ID()"] ;
  // NSLog (@"query '%@'", query) ;
  PMQuery * q = [PMQuery new] ;
  q.mQuery = query ;
  q.mClient = inClient ;
  q.mResponseSelector = inResponseSelector ;
  NSInvocationOperation * op = [[NSInvocationOperation alloc]
    initWithTarget:self
    selector:@selector (asynchronousTableInsert:)
    object:q
  ] ;
  [mOperationQueue addOperation:op] ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (void) asynchronousTableInsert: (PMQuery *) inQuery {
  @synchronized (self) {
    [self updateActivityIndicator:@"I"] ;
    NSObject * response = nil ;
    const char * queryStr = [inQuery.mQuery cStringUsingEncoding:NSUTF8StringEncoding] ;
    int status = mysql_real_query (& mMySQL, queryStr, strlen (queryStr)) ;
    if (status != 0) {
      response = [NSString stringWithFormat:@"Erreur %d : %s", status, mysql_error (& mMySQL)] ;
      if (status == 2013) { // Perte de la connexion
        self.mConnected = NO ;
      }
    }else{
      NSUInteger resultCount = 0 ;
      NSUInteger rowCount = 0 ;
      NSUInteger fieldCount = 0 ;
      NSInteger candidateInsertionID = 0 ;
      do {
        MYSQL_RES * result = mysql_store_result (& mMySQL) ;
        if (result != NULL) { // yes; process rows and free the result set
          resultCount ++ ;
          MYSQL_ROW	row ;
          while ((row = mysql_fetch_row (result)) != NULL){
            mysql_field_seek (result, 0) ;
            rowCount ++ ;
            for (unsigned i=0 ; i<mysql_num_fields (result) ; i++){
              fieldCount ++ ;
              candidateInsertionID = [[NSString stringWithCString:row [i] encoding:NSASCIIStringEncoding] integerValue] ;
            }
          }
          mysql_free_result (result) ;
        }
        status = mysql_next_result (& mMySQL) ; // more results? -1 : no, >0 : error, 0 : yes (keep looping)
      } while (status == 0) ;
      // NSLog (@"resultCount %lu, rowCount %lu fieldCount %lu candidateInsertionID %ld", resultCount, rowCount, fieldCount, candidateInsertionID) ;
      if ((resultCount * rowCount * fieldCount) == 1) {
        response = [NSNumber numberWithInteger:candidateInsertionID] ;
      }else{
        response = @"Erreur interne" ;
      }
    }
    [inQuery.mClient
      performSelectorOnMainThread:inQuery.mResponseSelector
      withObject:response
      waitUntilDone:NO
    ] ;
    [self updateActivityIndicator:@""] ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//   Mise à jour d'une table                                                                                           *
//---------------------------------------------------------------------------------------------------------------------*

- (void) updateTableNamed: (NSString *) inTableName
         values: (NSDictionary *) inValues
         idFieldName: (NSString *) inIDFieldName
         idFieldValue: (NSUInteger) inIDFieldValue
         client: (NSObject *) inClient
         responseSelector: (SEL) inResponseSelector {
  NSMutableString * query = [NSMutableString new] ;
  [query appendFormat:@"UPDATE %@ SET ", inTableName] ;
  BOOL first = YES ;
  for (NSString * key in inValues.allKeys) {
    if (first) {
      first = NO ;
    }else{
      [query appendString:@","] ;
    }
    [query appendFormat:@"%@=\"%@\"", key, [inValues objectForKey:key]] ;
  }
  [query appendFormat:@" WHERE %@=%lu", inIDFieldName, inIDFieldValue] ;
  // NSLog (@"query '%@'", query) ;
  PMQuery * q = [PMQuery new] ;
  q.mQuery = query ;
  q.mClient = inClient ;
  q.mResponseSelector = inResponseSelector ;
  NSInvocationOperation * op = [[NSInvocationOperation alloc]
    initWithTarget:self
    selector:@selector (asynchronousTableUpdate:)
    object:q
  ] ;
  [mOperationQueue addOperation:op] ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (void) asynchronousTableUpdate: (PMQuery *) inQuery {
  @synchronized (self) {
    [self updateActivityIndicator:@"U"] ;
    NSString * response = nil ;
    const char * queryStr = [inQuery.mQuery cStringUsingEncoding:NSUTF8StringEncoding] ;
    int status = mysql_real_query (& mMySQL, queryStr, strlen (queryStr)) ;
    if (status == 0) {
      switch (mysql_affected_rows (& mMySQL)) {
      case 0 : response = @"Row has been deleted" ; break ;
      case 1 : response = @"" ; break ;
      default : response = @"Several rows have been deleted" ; break ;
      }
    }else if (status == 2013) { // Perte de la connexion, on renvoie nil
      self.mConnected = NO ;
    }else{ // Autre erreur
      response = [NSString stringWithFormat:@"Erreur %d : %s", status, mysql_error (& mMySQL)] ;
    }
    [inQuery.mClient
      performSelectorOnMainThread:inQuery.mResponseSelector
      withObject:response
      waitUntilDone:NO
    ] ;
    [self updateActivityIndicator:@""] ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//   Lecture d'une table                                                                                               *
//---------------------------------------------------------------------------------------------------------------------*

- (void) readTableNamed: (NSString *) inTableName
         fieldNameArray: (NSArray *) inFieldNameArray
         whereCondition: (NSString *) inCondition
         client: (NSObject *) inClient
         responseSelector: (SEL) inResponseSelector {
  NSMutableString * query = [NSMutableString new] ;
  [query appendString:@"SELECT "] ;
  BOOL first = YES ;
  for (NSString * key in inFieldNameArray) {
    if (first) {
      first = NO ;
    }else{
      [query appendString:@","] ;
    }
    [query appendFormat:@"%@", key] ;
  }
  [query appendFormat:@" FROM %@", inTableName] ;
  if ([inCondition length] > 0) {
    [query appendFormat:@" WHERE %@", inCondition] ;
  }
 //  NSLog (@"table read query: '%@'", query) ;
  PMQuery * q = [PMQuery new] ;
  q.mQuery = query ;
  q.mClient = inClient ;
  q.mResponseSelector = inResponseSelector ;
  NSInvocationOperation * op = [[NSInvocationOperation alloc]
    initWithTarget:self
    selector:@selector (asynchronousTableRead:)
    object:q
  ] ;
  [mOperationQueue addOperation:op] ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (void) asynchronousTableRead: (PMQuery *) inQuery {
  @synchronized (self) {
    [self updateActivityIndicator:@"R"] ;
    NSMutableArray * responseArray = nil ;
    const char * queryStr = [inQuery.mQuery cStringUsingEncoding:NSUTF8StringEncoding] ;
    int status = mysql_real_query (& mMySQL, queryStr, strlen (queryStr)) ;
    if (status != 0) {
      NSLog (@"Erreur %d : %s", status, mysql_error (& mMySQL)) ;
      if (status == 2013) { // Perte de la connexion
        self.mConnected = NO ;
      }
    }else{
      responseArray = [NSMutableArray new] ;
      do {
        MYSQL_RES * result = mysql_store_result (& mMySQL) ;
        if (result != NULL) { // yes; process rows and free the result set
          MYSQL_ROW	row ;
          while ((row = mysql_fetch_row (result)) != NULL) {
            mysql_field_seek (result, 0) ;
            NSMutableDictionary * d = [NSMutableDictionary new] ;
            for (unsigned i=0 ; i<mysql_num_fields (result) ; i++) {
              MYSQL_FIELD * field = mysql_fetch_field (result) ;
              [d
                setObject:[NSString stringWithCString:row [i] encoding:NSUTF8StringEncoding]
                forKey:[NSString stringWithCString:field->name encoding:NSUTF8StringEncoding]
              ] ;
            }
            [responseArray addObject:d] ;
          }
          // printf ("%lu rows returned\n", (unsigned long) mysql_num_rows (result));
          mysql_free_result (result) ;
        }
        status = mysql_next_result (& mMySQL) ; // more results? -1 = no, >0 = error, 0 = yes (keep looping)
      } while (status == 0) ;
      // NSLog (@"resultCount %lu, rowCount %lu fieldCount %lu candidateInsertionID %ld", resultCount, rowCount, fieldCount, candidateInsertionID) ;
    }
    [inQuery.mClient
      performSelectorOnMainThread:inQuery.mResponseSelector
      withObject:responseArray
      waitUntilDone:NO
    ] ;
    [self updateActivityIndicator:@""] ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//   Suppression dans une table                                                                                        *
//---------------------------------------------------------------------------------------------------------------------*

- (void) deleteInTableNamed: (NSString *) inTableName
         fieldName: (NSString *) inFieldName
         fieldValue: (NSUInteger) inFieldValue
         client: (NSObject *) inClient
         responseSelector: (SEL) inResponseSelector {
  NSMutableString * query = [NSMutableString new] ;
  [query appendFormat:@"DELETE FROM %@ WHERE %@=%lu", inTableName, inFieldName, inFieldValue] ;
  // NSLog (@"table delete query: '%@'", query) ;
  PMQuery * q = [PMQuery new] ;
  q.mQuery = query ;
  q.mClient = inClient ;
  q.mResponseSelector = inResponseSelector ;
  NSInvocationOperation * op = [[NSInvocationOperation alloc]
    initWithTarget:self
    selector:@selector (asynchronousDeleteInTable:)
    object:q
  ] ;
  [mOperationQueue addOperation:op] ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (void) asynchronousDeleteInTable: (PMQuery *) inQuery {
  @synchronized (self) {
    [self updateActivityIndicator:@"D"] ;
    NSString * response = nil ;
    const char * queryStr = [inQuery.mQuery cStringUsingEncoding:NSUTF8StringEncoding] ;
    int status = mysql_real_query (& mMySQL, queryStr, strlen (queryStr)) ;
    if (status == 0) {
      switch (mysql_affected_rows (& mMySQL)) {
      case 0 : response = @"No row deleted" ; break ;
      case 1 : response = @"" ; break ;
      default : response = @"Several rows have been deleted" ; break ;
      }
    }else if (status == 2013) { // Perte de la connexion, on renvoie nil
      self.mConnected = NO ;
    }else{ // Autre erreur
      response = [NSString stringWithFormat:@"Erreur %d : %s", status, mysql_error (& mMySQL)] ;
    }
    [inQuery.mClient
      performSelectorOnMainThread:inQuery.mResponseSelector
      withObject:response
      waitUntilDone:NO
    ] ;
    [self updateActivityIndicator:@""] ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//   Requête customisée                                                                                                *
//---------------------------------------------------------------------------------------------------------------------*

- (void) customQuery: (NSString *) inQuery
         client: (NSObject *) inClient
         responseSelector: (SEL) inResponseSelector {
  // NSLog (@"custom query: '%@'", inQuery) ;
  PMQuery * q = [PMQuery new] ;
  q.mQuery = inQuery ;
  q.mClient = inClient ;
  q.mResponseSelector = inResponseSelector ;
  NSInvocationOperation * op = [[NSInvocationOperation alloc]
    initWithTarget:self
    selector:@selector (asynchronousCustomQuery:)
    object:q
  ] ;
  [mOperationQueue addOperation:op] ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (void) asynchronousCustomQuery: (PMQuery *) inQuery {
  @synchronized (self) {
    [self updateActivityIndicator:@"Q"] ;
    NSMutableArray * responseArray = nil ;
    const char * queryStr = [inQuery.mQuery cStringUsingEncoding:NSUTF8StringEncoding] ;
    int status = mysql_real_query (& mMySQL, queryStr, strlen (queryStr)) ;
    if (status != 0) {
      NSLog (@"Erreur %d : %s", status, mysql_error (& mMySQL)) ;
      if (status == 2013) { // Perte de la connexion
        self.mConnected = NO ;
      }
    }else{
      responseArray = [NSMutableArray new] ;
      do {
        MYSQL_RES * result = mysql_store_result (& mMySQL) ;
        if (result != NULL) { // yes; process rows and free the result set
          MYSQL_ROW	row ;
          while ((row = mysql_fetch_row (result)) != NULL) {
            mysql_field_seek (result, 0) ;
            NSMutableDictionary * d = [NSMutableDictionary new] ;
            for (unsigned i=0 ; i<mysql_num_fields (result) ; i++) {
              MYSQL_FIELD * field = mysql_fetch_field (result) ;
              [d
                setObject:[NSString stringWithCString:row [i] encoding:NSUTF8StringEncoding]
                forKey:[NSString stringWithCString:field->name encoding:NSUTF8StringEncoding]
              ] ;
            }
            [responseArray addObject:d] ;
          }
          // printf ("%lu rows returned\n", (unsigned long) mysql_num_rows (result));
          mysql_free_result (result) ;
        }
        status = mysql_next_result (& mMySQL) ; // more results? -1 = no, >0 = error, 0 = yes (keep looping)
      } while (status == 0) ;
      // NSLog (@"resultCount %lu, rowCount %lu fieldCount %lu candidateInsertionID %ld", resultCount, rowCount, fieldCount, candidateInsertionID) ;
    }
    [inQuery.mClient
      performSelectorOnMainThread:inQuery.mResponseSelector
      withObject:responseArray
      waitUntilDone:NO
    ] ;
    [self updateActivityIndicator:@""] ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

@end

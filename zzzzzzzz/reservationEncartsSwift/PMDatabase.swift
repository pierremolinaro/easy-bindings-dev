import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//     PMDatabase                                                                                                      *
// http://stackoverflow.com/questions/24146488/swift-pass-uninitialized-c-structure-to-imported-c-function             *
// http://dev.mysql.com/doc/connector-c/en/index.html                                                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMDatabase {
  private var mMySQL = UnsafeMutablePointer<MYSQL>.alloc(1)
  private var mOperationQueue = NSOperationQueue ()
  private var mConnected : Bool

  //···················································································································*

  private var mActivityTextField : NSTextField?
  private var mConnectionImageView : NSImageView?

  //···················································································································*

  init (server : String,
        user : String,
        password: String,
        dataBase: String) {
    mOperationQueue.maxConcurrentOperationCount = 1

    mysql_init (mMySQL)

    mysql_options (mMySQL, MYSQL_OPT_CONNECT_TIMEOUT, "2")

    mysql_options (mMySQL, MYSQL_SET_CHARSET_NAME, "utf8")

  //--- http://dev.mysql.com/doc/refman/5.5/en/mysql-real-connect.html
    let result = mysql_real_connect (mMySQL,
                                     server,
                                     user,
                                     password,
                                     dataBase,
                                     3306,
                                     UnsafePointer <CChar> (nil),
                                     CLIENT_MULTI_STATEMENTS)
    mConnected = result != UnsafePointer <MYSQL> (nil)
    NSLog ("mConnected %@", mConnected ? "yes" : "no")
    if !mConnected {
      NSLog ("Erreur '%s'", mysql_error (self.mMySQL))
    }
  }

  //···················································································································*

  deinit {
    mMySQL.dealloc (1)
  }
  
  //···················································································································*
  //   Mise à jour de l'indicateur de connexion                                                                        *
  //···················································································································*

  func setConnectionImageView (inImageView : NSImageView?) {
    mConnectionImageView = inImageView
    mConnectionImageView?.image = NSImage (named:mConnected ? NSImageNameStatusAvailable : NSImageNameStatusUnavailable)
  }

  //···················································································································*
  //   Mise à jour de l'indicateur d'activité                                                                          *
  //···················································································································*

  func setActivityTextField (inTextField : NSTextField?) {
    mActivityTextField = inTextField
    mActivityTextField?.stringValue = ""
  }

  //···················································································································*
  //   updateActivityIndicator                                                                                         *
  //···················································································································*

  func updateActivityIndicator (inString : String) {
    dispatch_after (DISPATCH_TIME_NOW, dispatch_get_main_queue()) {
      self.mActivityTextField?.stringValue = inString
      self.mActivityTextField?.display ()
    }
  }
  
  //···················································································································*

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//     Table read                                                                                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extension PMDatabase {

  func readTableNamed (tableName : String,
                       fieldNameArray : [String],
                       whereCondition: String,
                       responseFunction : ([[String : String]]) -> Void) {
    var query = "SELECT "
    var first = true
    for key in fieldNameArray {
      if first {
        first = false
      }else{
        query += ","
      }
      query += key + " "
    }
    query += " FROM " +  tableName
    if whereCondition != "" {
      query += " WHERE " + whereCondition
    }
    customQuery (query, symbol:"R", responseFunction:responseFunction)
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//     Custom query                                                                                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extension PMDatabase {

  func customQuery (query : String,
                    symbol: String = "Q",
                    responseFunction : ([[String : String]]) -> Void) {
    mOperationQueue.addOperationWithBlock ({
      self.updateActivityIndicator (symbol)
      var responseArray = [[String : String]] ()
      let queryAsData = query.dataUsingEncoding (NSUTF8StringEncoding, allowLossyConversion: false)!
      var status = mysql_real_query (self.mMySQL, query, CUnsignedLong (queryAsData.length))
      if status != 0 {
        NSLog ("Erreur %d : %s", status, mysql_error (self.mMySQL))
        if status == 2013 { // Perte de la connexion
          self.mConnected = false
        }
      }else{
        do {
          var result : UnsafeMutablePointer <MYSQL_RES> = mysql_store_result (self.mMySQL)
          if result != nil { // yes; process rows and free the result set
            var row : MYSQL_ROW = mysql_fetch_row (result)
            while row != nil {
              mysql_field_seek (result, 0)
              var d = [String : String] ()
              for var i : UInt32 = 0 ; i<mysql_num_fields (result) ; i++ {
                let field : UnsafeMutablePointer <MYSQL_FIELD> = mysql_fetch_field (result)
                let key = String.fromCString (field.memory.name)!
                let object = String.fromCString (UnsafeMutablePointer <CChar> (row [Int (i)]))!
                d [key] = object
              }
              responseArray.append (d)
              row = mysql_fetch_row (result)
            }
  //          // printf ("%lu rows returned\n", (unsigned long) mysql_num_rows (result));
            mysql_free_result (result)
          }
          status = mysql_next_result (self.mMySQL) // more results? -1 = no, >0 = error, 0 = yes (keep looping)
        } while status == 0
  //      // NSLog (@"resultCount %lu, rowCount %lu fieldCount %lu candidateInsertionID %ld", resultCount, rowCount, fieldCount, candidateInsertionID) ;
      }
      self.updateActivityIndicator ("")
      dispatch_after (DISPATCH_TIME_NOW, dispatch_get_main_queue()) {
        responseFunction (responseArray)
      }
    })
  }

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


////---------------------------------------------------------------------------------------------------------------------*
////   Insertion dans d'une table                                                                                        *
////---------------------------------------------------------------------------------------------------------------------*
//
//// http://dev.mysql.com/doc/refman/5.5/en/mysql-real-query.html
//// http://dev.mysql.com/doc/refman/5.5/en/c-api-multiple-queries.html
//
//- (void) insertInTable: (NSString *) inTableName
//         values: (NSDictionary *) inValues
//         client: (NSObject *) inClient
//         responseSelector: (SEL) inResponseSelector {
//  NSMutableString * query = [NSMutableString new] ;
//  [query appendFormat:@"INSERT INTO %@ SET", inTableName] ;
//  BOOL first = YES ;
//  for (NSString * key in inValues.allKeys) {
//    if (first) {
//      first = NO ;
//    }else{
//      [query appendString:@","] ;
//    }
//    id value = [inValues objectForKey:key] ;
//    [query appendFormat:@" %@=\"%@\"", key, value] ;
//  }
//  [query appendString:@";SELECT LAST_INSERT_ID()"] ;
//  // NSLog (@"query '%@'", query) ;
//  PMQuery * q = [PMQuery new] ;
//  q.mQuery = query ;
//  q.mClient = inClient ;
//  q.mResponseSelector = inResponseSelector ;
//  NSInvocationOperation * op = [[NSInvocationOperation alloc]
//    initWithTarget:self
//    selector:@selector (asynchronousTableInsert:)
//    object:q
//  ] ;
//  [mOperationQueue addOperation:op] ;
//}
//
////---------------------------------------------------------------------------------------------------------------------*
//
//- (void) asynchronousTableInsert: (PMQuery *) inQuery {
//  @synchronized (self) {
//    [self updateActivityIndicator:@"I"] ;
//    NSObject * response = nil ;
//    const char * queryStr = [inQuery.mQuery cStringUsingEncoding:NSUTF8StringEncoding] ;
//    int status = mysql_real_query (& mMySQL, queryStr, strlen (queryStr)) ;
//    if (status != 0) {
//      response = [NSString stringWithFormat:@"Erreur %d : %s", status, mysql_error (& mMySQL)] ;
//      if (status == 2013) { // Perte de la connexion
//        self.mConnected = NO ;
//      }
//    }else{
//      NSUInteger resultCount = 0 ;
//      NSUInteger rowCount = 0 ;
//      NSUInteger fieldCount = 0 ;
//      NSInteger candidateInsertionID = 0 ;
//      do {
//        MYSQL_RES * result = mysql_store_result (& mMySQL) ;
//        if (result != NULL) { // yes; process rows and free the result set
//          resultCount ++ ;
//          MYSQL_ROW	row ;
//          while ((row = mysql_fetch_row (result)) != NULL){
//            mysql_field_seek (result, 0) ;
//            rowCount ++ ;
//            for (unsigned i=0 ; i<mysql_num_fields (result) ; i++){
//              fieldCount ++ ;
//              candidateInsertionID = [[NSString stringWithCString:row [i] encoding:NSASCIIStringEncoding] integerValue] ;
//            }
//          }
//          mysql_free_result (result) ;
//        }
//        status = mysql_next_result (& mMySQL) ; // more results? -1 : no, >0 : error, 0 : yes (keep looping)
//      } while (status == 0) ;
//      // NSLog (@"resultCount %lu, rowCount %lu fieldCount %lu candidateInsertionID %ld", resultCount, rowCount, fieldCount, candidateInsertionID) ;
//      if ((resultCount * rowCount * fieldCount) == 1) {
//        response = [NSNumber numberWithInteger:candidateInsertionID] ;
//      }else{
//        response = @"Erreur interne" ;
//      }
//    }
//    [inQuery.mClient
//      performSelectorOnMainThread:inQuery.mResponseSelector
//      withObject:response
//      waitUntilDone:NO
//    ] ;
//    [self updateActivityIndicator:@""] ;
//  }
//}
//
////---------------------------------------------------------------------------------------------------------------------*
////   Mise à jour d'une table                                                                                           *
////---------------------------------------------------------------------------------------------------------------------*
//
//- (void) updateTableNamed: (NSString *) inTableName
//         values: (NSDictionary *) inValues
//         idFieldName: (NSString *) inIDFieldName
//         idFieldValue: (NSUInteger) inIDFieldValue
//         client: (NSObject *) inClient
//         responseSelector: (SEL) inResponseSelector {
//  NSMutableString * query = [NSMutableString new] ;
//  [query appendFormat:@"UPDATE %@ SET ", inTableName] ;
//  BOOL first = YES ;
//  for (NSString * key in inValues.allKeys) {
//    if (first) {
//      first = NO ;
//    }else{
//      [query appendString:@","] ;
//    }
//    [query appendFormat:@"%@=\"%@\"", key, [inValues objectForKey:key]] ;
//  }
//  [query appendFormat:@" WHERE %@=%lu", inIDFieldName, inIDFieldValue] ;
//  // NSLog (@"query '%@'", query) ;
//  PMQuery * q = [PMQuery new] ;
//  q.mQuery = query ;
//  q.mClient = inClient ;
//  q.mResponseSelector = inResponseSelector ;
//  NSInvocationOperation * op = [[NSInvocationOperation alloc]
//    initWithTarget:self
//    selector:@selector (asynchronousTableUpdate:)
//    object:q
//  ] ;
//  [mOperationQueue addOperation:op] ;
//}
//
////---------------------------------------------------------------------------------------------------------------------*
//
//- (void) asynchronousTableUpdate: (PMQuery *) inQuery {
//  @synchronized (self) {
//    [self updateActivityIndicator:@"U"] ;
//    NSString * response = nil ;
//    const char * queryStr = [inQuery.mQuery cStringUsingEncoding:NSUTF8StringEncoding] ;
//    int status = mysql_real_query (& mMySQL, queryStr, strlen (queryStr)) ;
//    if (status == 0) {
//      switch (mysql_affected_rows (& mMySQL)) {
//      case 0 : response = @"Row has been deleted" ; break ;
//      case 1 : response = @"" ; break ;
//      default : response = @"Several rows have been deleted" ; break ;
//      }
//    }else if (status == 2013) { // Perte de la connexion, on renvoie nil
//      self.mConnected = NO ;
//    }else{ // Autre erreur
//      response = [NSString stringWithFormat:@"Erreur %d : %s", status, mysql_error (& mMySQL)] ;
//    }
//    [inQuery.mClient
//      performSelectorOnMainThread:inQuery.mResponseSelector
//      withObject:response
//      waitUntilDone:NO
//    ] ;
//    [self updateActivityIndicator:@""] ;
//  }
//}
//
////---------------------------------------------------------------------------------------------------------------------*
////   Suppression dans une table                                                                                        *
////---------------------------------------------------------------------------------------------------------------------*
//
//- (void) deleteInTableNamed: (NSString *) inTableName
//         fieldName: (NSString *) inFieldName
//         fieldValue: (NSUInteger) inFieldValue
//         client: (NSObject *) inClient
//         responseSelector: (SEL) inResponseSelector {
//  NSMutableString * query = [NSMutableString new] ;
//  [query appendFormat:@"DELETE FROM %@ WHERE %@=%lu", inTableName, inFieldName, inFieldValue] ;
//  // NSLog (@"table delete query: '%@'", query) ;
//  PMQuery * q = [PMQuery new] ;
//  q.mQuery = query ;
//  q.mClient = inClient ;
//  q.mResponseSelector = inResponseSelector ;
//  NSInvocationOperation * op = [[NSInvocationOperation alloc]
//    initWithTarget:self
//    selector:@selector (asynchronousDeleteInTable:)
//    object:q
//  ] ;
//  [mOperationQueue addOperation:op] ;
//}
//
////---------------------------------------------------------------------------------------------------------------------*
//
//- (void) asynchronousDeleteInTable: (PMQuery *) inQuery {
//  @synchronized (self) {
//    [self updateActivityIndicator:@"D"] ;
//    NSString * response = nil ;
//    const char * queryStr = [inQuery.mQuery cStringUsingEncoding:NSUTF8StringEncoding] ;
//    int status = mysql_real_query (& mMySQL, queryStr, strlen (queryStr)) ;
//    if (status == 0) {
//      switch (mysql_affected_rows (& mMySQL)) {
//      case 0 : response = @"No row deleted" ; break ;
//      case 1 : response = @"" ; break ;
//      default : response = @"Several rows have been deleted" ; break ;
//      }
//    }else if (status == 2013) { // Perte de la connexion, on renvoie nil
//      self.mConnected = NO ;
//    }else{ // Autre erreur
//      response = [NSString stringWithFormat:@"Erreur %d : %s", status, mysql_error (& mMySQL)] ;
//    }
//    [inQuery.mClient
//      performSelectorOnMainThread:inQuery.mResponseSelector
//      withObject:response
//      waitUntilDone:NO
//    ] ;
//    [self updateActivityIndicator:@""] ;
//  }
//}
//
////---------------------------------------------------------------------------------------------------------------------*
//
//@end

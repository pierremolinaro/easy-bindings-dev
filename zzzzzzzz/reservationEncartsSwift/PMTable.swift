import Foundation

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//     PMTable                                                                                                         *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMTable {
  var mDatabase : PMDatabase
  let mTableName : String

  //···················································································································*

  init (database : PMDatabase, tableName : String) {
    mDatabase = database
    mTableName = tableName
//    mDatabase.readTableNamed (mTableName,
//                              fieldNameArray : ["id", "nomClient", "idParution", "emplacement"],
//                              whereCondition: "",
//                              responseFunction : {(result : [[String : String]]) -> Void in
//      NSLog ("%@", result)
//    })
  }

  //···················································································································*

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

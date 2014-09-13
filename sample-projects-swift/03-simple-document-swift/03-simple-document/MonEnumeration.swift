
import Foundation

//---------------------------------------------------------------------------------------------------------------------*

enum MonEnumeration : Int {
  case premier = 0
  case deuxieme = 1
  case troisieme = 2

  
  func string () -> String {
    switch self {
      case premier : return "premier" // 0
      case deuxieme : return "deuxieme" // 1
      case troisieme : return "troisieme" // 2
    }
  }

  func enumfromRawValue (rawValue : Int) -> MonEnumeration {
    var result = self
    let v : MonEnumeration? = MonEnumeration.fromRaw (rawValue) ;
    if let unwrappedV = v {
      result = unwrappedV
    }
    return result
  }
}

//---------------------------------------------------------------------------------------------------------------------*

/*  func storeInDictionary (inKey : String,
                          inout ioDictionary : NSMutableDictionary) {
    ioDictionary.setObject (NSNumber.numberWithInteger (toRaw ()), forKey: inKey)
  }*/
 
//---------------------------------------------------------------------------------------------------------------------*

extension NSDictionary {
  func readMonEnumeration  (inKey : String) -> MonEnumeration {
    let v : Int? = objectForKey (inKey)?.integerValue
    var result = MonEnumeration.premier
    if v != nil {
      let e : MonEnumeration? = MonEnumeration.fromRaw (v!)
      if e != nil {
        result = e!
      }
    }
    return result
  }
}

//---------------------------------------------------------------------------------------------------------------------*


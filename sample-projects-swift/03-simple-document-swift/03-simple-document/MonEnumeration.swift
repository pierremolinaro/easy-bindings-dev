
import Foundation

//---------------------------------------------------------------------------------------------------------------------*

enum MonEnumeration : Int, EntityPropertyProtocol {
  case premier = 0
  case deuxieme = 1
  case troisieme = 2


  func descriptionForExplorer () -> String {
    switch self {
      case premier : return "premier" // 0
      case deuxieme : return "deuxieme" // 1
      case troisieme : return "troisieme" // 2
    }
  }

  func embeddedNSObject () -> NSObject {
    return NSNumber (integer:self.rawValue)
  }

  func enumfromRawValue (rawValue : Int) -> MonEnumeration {
    var result = self
    let v : MonEnumeration? = MonEnumeration (rawValue:rawValue) ;
    if let unwrappedV = v {
      result = unwrappedV
    }
    return result
  }
}

//---------------------------------------------------------------------------------------------------------------------*

extension NSDictionary {
  func readMonEnumeration  (inKey : String) -> MonEnumeration {
    let v : Int? = objectForKey (inKey)?.integerValue
    var result = MonEnumeration.premier
    if v != nil {
      let e : MonEnumeration? = MonEnumeration (rawValue:v!)
      if e != nil {
        result = e!
      }
    }
    return result
  }
}

//---------------------------------------------------------------------------------------------------------------------*


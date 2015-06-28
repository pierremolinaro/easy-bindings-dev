//--- START OF USER ZONE 1


//--- END OF USER ZONE 1
import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extension PMDocument {
  func decrement (inSender : AnyObject) {
//--- START OF USER ZONE 2
    for object in rootObject.mNames.propval {
      object.aValue.setProp (object.aValue.propval - 1)
    }
//--- END OF USER ZONE 2
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

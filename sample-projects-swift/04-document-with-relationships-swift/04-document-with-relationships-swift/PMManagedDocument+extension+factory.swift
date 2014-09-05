//---------------------------------------------------------------------------------------------------------------------*

import Cocoa

//---------------------------------------------------------------------------------------------------------------------*

extension PMManagedDocument {

  //-------------------------------------------------------------------------------------------------------------------*
  //  newInstanceOfEntityNamed                                                                                         *
  //-------------------------------------------------------------------------------------------------------------------*

  func newInstanceOfEntityNamed (inEntityTypeName : String) -> PMManagedObject? {
    var result : PMManagedObject?
    if inEntityTypeName == "MyRootEntity" {
      result = MyRootEntity (undoManager:undoManager)
    }else if inEntityTypeName == "NameEntity" {
      result = NameEntity (undoManager:undoManager)
    }
    return result
  }
}

//---------------------------------------------------------------------------------------------------------------------*


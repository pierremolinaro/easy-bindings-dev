//---------------------------------------------------------------------------------------------------------------------*

import Cocoa

//---------------------------------------------------------------------------------------------------------------------*

extension PMManagedDocument {

  //-------------------------------------------------------------------------------------------------------------------*
  //  newInstanceOfEntityNamed                                                                                         *
  //-------------------------------------------------------------------------------------------------------------------*

  func newInstanceOfEntityNamed (inEntityTypeName : String) -> PMManagedObject? {
    var result : PMManagedObject?
    if let unwrappedUndoManager = undoManager {
      if inEntityTypeName == "MyRootEntity" {
        result = MyRootEntity (undoManager:unwrappedUndoManager)
      }
    }
    return result
  }
}

//---------------------------------------------------------------------------------------------------------------------*


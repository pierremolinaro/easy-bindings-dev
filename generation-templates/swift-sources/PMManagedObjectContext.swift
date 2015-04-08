import Foundation

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//  PMManagedObjectContext                                                                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMManagedObjectContext : PMObject {
  private var mUndoManager : PMUndoManager
  private var mManagedObjectSet = Set <PMManagedObject> ()

  //-------------------------------------------------------------------------------------------------------------------*
  //    init                                                                                                           *
  //···················································································································*
  
  init (undoManager : PMUndoManager) {
    mUndoManager = undoManager
    super.init ()
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    undoManager                                                                                                    *
  //···················································································································*
  
  func undoManager () -> PMUndoManager {
    return mUndoManager
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    insertManagedObject                                                                                            *
  //···················································································································*
  
  func insertManagedObject (object : PMManagedObject) {
    if !mManagedObjectSet.contains(object) {
      mManagedObjectSet.insert (object)
      mUndoManager.registerUndoWithTarget(self, selector: "removeManagedObject:", object: object)
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    removeManagedObject                                                                                            *
  //···················································································································*
  
  func removeManagedObject (object : PMManagedObject) {
    if mManagedObjectSet.contains(object) {
      mManagedObjectSet.remove (object)
      mUndoManager.registerUndoWithTarget(self, selector: "insertManagedObject:", object: object)
    }
  }
  //-------------------------------------------------------------------------------------------------------------------*
  //  newInstanceOfEntityNamed                                                                                         *
  //···················································································································*

  func newInstanceOfEntityNamed (inEntityTypeName : String) -> PMManagedObject? {
    var result : PMManagedObject?
    if inEntityTypeName == "MyRootEntity" {
      result = MyRootEntity (managedObjectContext:self)
    }else if inEntityTypeName == "NameEntity" {
      result = NameEntity (managedObjectContext:self)
    }
    if let unwResult = result {
      insertManagedObject (unwResult)
    }
    return result
  }

  //-------------------------------------------------------------------------------------------------------------------*

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

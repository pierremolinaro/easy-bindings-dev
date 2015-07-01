import Cocoa

//---------------------------------------------------------------------------*

let traceUndoManager = false

//---------------------------------------------------------------------------*

@objc(EBUndoManager) class EBUndoManager : NSUndoManager, EBUserClassName {

  //-----------------------------------------------------------------------------*
  //    init                                                                     *
  //-----------------------------------------------------------------------------*

  override init () {
    super.init ()
    noteObjectAllocation (self)
  }

  //-----------------------------------------------------------------------------*
  //    deinit                                                                   *
  //-----------------------------------------------------------------------------*

  deinit {
    noteObjectDeallocation (self)
  }

  //-----------------------------------------------------------------------------*
  //    registerUndoWithTarget                                                   *
  //-----------------------------------------------------------------------------*

  override func registerUndoWithTarget (target:AnyObject, selector:Selector, object anObject:AnyObject!) {
    super.registerUndoWithTarget (target, selector:selector, object:anObject)
    if traceUndoManager {
      if nil != anObject {
        NSLog ("registerUndoWithTarget (%@) target:%@, selector:\"%@\" object:%@", undoRegistrationEnabled ? "yes" : "no", target.description, selector.description, anObject.description)
      }else{
        NSLog ("registerUndoWithTarget (%@) target:%@, selector:\"%@\" object:nil", undoRegistrationEnabled ? "yes" : "no", target.description, selector.description)
      }
    }
  }

  //-----------------------------------------------------------------------------*
  //    beginUndoGrouping                                                        *
  //-----------------------------------------------------------------------------*

  override func beginUndoGrouping () {
    if traceUndoManager {
      NSLog ("beginUndoGrouping")
    }
    super.beginUndoGrouping ()
  }

  //-----------------------------------------------------------------------------*
  //    endUndoGrouping                                                          *
  //-----------------------------------------------------------------------------*

  override func endUndoGrouping () {
    if traceUndoManager {
      NSLog ("endUndoGrouping")
    }
    super.endUndoGrouping ()
  }
}

//------------------------------------------------------------------------------*

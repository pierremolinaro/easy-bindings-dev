import Cocoa

//---------------------------------------------------------------------------------------------------------------------*

protocol MyRootEntity_docBool {
  var docBool : Bool { get }
}

//---------------------------------------------------------------------------------------------------------------------*

@objc(MyRootEntity) class MyRootEntity : PMManagedObject, MyRootEntity_docBool {
  override func userClassName () -> String { return "MyRootEntity" }



  //-------------------------------------------------------------------------------------------------------------------*
  //    Attribute: docBool                                                                                             *
  //-------------------------------------------------------------------------------------------------------------------*

  private var docBool_explorer : NSTextField? = nil
  private var docBool_observers : [Int : PMTransientEventProtocol] = [:]
  var docBool : Bool = true {
    didSet {
      if docBool != oldValue {
        mUndoManager?.registerUndoWithTarget (self, selector:"undoFor_docBool:", object:NSNumber (bool:oldValue))
        docBool_explorer?.stringValue = NSString (format:"%s", docBool ? "true" : "false")
        for object in docBool_observers.values {
          postTransientEvent (object)
        }
      }
    }
  }

  func undoFor_docBool (value : NSNumber) {
    docBool = value.boolValue
  }

  func addObserverOf_docBool (inObserver : PMTransientEventProtocol, inTrigger:Bool) {
    docBool_observers [inObserver.uniqueIndex] = inObserver
    if inTrigger {
      postTransientEvent (inObserver)
    }
  }
 
  func removeObserverOf_docBool (inObserver : PMTransientEventProtocol, inTrigger:Bool) {
    docBool_observers [inObserver.uniqueIndex] = nil
    if inTrigger {
      postTransientEvent (inObserver)
    }
  }

  func validate_docBool (proposedValue : Bool) -> PMValidationResult { return PMValidationResult.ok }


  //-------------------------------------------------------------------------------------------------------------------*
  //  prepareForDeletion                                                                                               *
  //-------------------------------------------------------------------------------------------------------------------*

  override func prepareForDeletion () {
    super.prepareForDeletion ()
  }
  

  //-------------------------------------------------------------------------------------------------------------------*
  //    populateExplorerWindowWithRect                                                                                 *
  //-------------------------------------------------------------------------------------------------------------------*

  override func populateExplorerWindowWithRect (inout ioRect : NSRect, view : NSView) {
    super.populateExplorerWindowWithRect (&ioRect, view:view)
    docBool_explorer = createEntryForAttributeNamed ("docBool", ioRect:&ioRect, view:view)
    if let explorer = docBool_explorer {
      explorer.stringValue = NSString (format:"%s", docBool ? "true" : "false")
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    clearObjectExplorer                                                                                            *
  //-------------------------------------------------------------------------------------------------------------------*

  override func clearObjectExplorer () {
    docBool_explorer = nil
    super.clearObjectExplorer ()
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    saveIntoDictionary                                                                                             *
  //-------------------------------------------------------------------------------------------------------------------*

  override func saveIntoDictionary (ioDictionary : NSMutableDictionary) {
    super.saveIntoDictionary (ioDictionary)
    ioDictionary.setValue (NSNumber (bool:docBool), forKey: "docBool")
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    setUpWithDictionary                                                                                            *
  //-------------------------------------------------------------------------------------------------------------------*

  override func setUpWithDictionary (inDictionary : NSDictionary,
                                     managedObjectArray : NSArray) {
    super.setUpWithDictionary (inDictionary, managedObjectArray:managedObjectArray)
    docBool = inDictionary.readBool ("docBool")
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //   accessibleObjects                                                                                               *
  //-------------------------------------------------------------------------------------------------------------------*

  override func accessibleObjects (inout objects : NSMutableArray) {
    super.accessibleObjects (&objects)
  }

  //-------------------------------------------------------------------------------------------------------------------*

}


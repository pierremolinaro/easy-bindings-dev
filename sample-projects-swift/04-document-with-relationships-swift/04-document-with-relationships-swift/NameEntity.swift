import Cocoa

//---------------------------------------------------------------------------------------------------------------------*

protocol NameEntity_aValue {
  var aValue : Int { get }
}

//---------------------------------------------------------------------------------------------------------------------*

protocol NameEntity_name {
  var name : String { get }
}

//---------------------------------------------------------------------------------------------------------------------*

@objc(NameEntity) class NameEntity : PMManagedObject, NameEntity_aValue, NameEntity_name {
  override func userClassName () -> String { return "NameEntity" }



  //-------------------------------------------------------------------------------------------------------------------*
  //    Attribute: aValue                                                                                              *
  //-------------------------------------------------------------------------------------------------------------------*

  private var aValue_explorer : NSTextField? = nil
  private var aValue_observers : [Int : PMTransientEventProtocol] = [:]
  var aValue : Int = 123 {
    didSet {
      if aValue != oldValue {
        mUndoManager?.registerUndoWithTarget (self, selector:"undoFor_aValue:", object:NSNumber (integer:oldValue))
        aValue_explorer?.stringValue = NSString (format:"%ld", aValue)
        for object in aValue_observers.values {
          postTransientEvent (object)
        }
      }
    }
  }

  func undoFor_aValue (value : NSNumber) {
    aValue = value.integerValue
  }

  func addObserverOf_aValue (inObserver : PMTransientEventProtocol, inTrigger:Bool) {
    aValue_observers [inObserver.uniqueIndex] = inObserver
    if inTrigger {
      postTransientEvent (inObserver)
    }
  }
 
  func removeObserverOf_aValue (inObserver : PMTransientEventProtocol, inTrigger:Bool) {
    aValue_observers [inObserver.uniqueIndex] = nil
    if inTrigger {
      postTransientEvent (inObserver)
    }
  }

  func validate_aValue (proposedValue : Int) -> PMValidationResult { return PMValidationResult.ok }


  //-------------------------------------------------------------------------------------------------------------------*
  //    Attribute: name                                                                                                *
  //-------------------------------------------------------------------------------------------------------------------*

  private var name_explorer : NSTextField? = nil
  private var name_observers : [Int : PMTransientEventProtocol] = [:]
  var name : String = "Name" {
    didSet {
      if name != oldValue {
        mUndoManager?.registerUndoWithTarget (self, selector:"undoFor_name:", object:oldValue)
        name_explorer?.stringValue = name
        for object in name_observers.values {
          postTransientEvent (object)
        }
      }
    }
  }

  func undoFor_name (value : String) {
    name = value
  }

  func addObserverOf_name (inObserver : PMTransientEventProtocol, inTrigger:Bool) {
    name_observers [inObserver.uniqueIndex] = inObserver
    if inTrigger {
      postTransientEvent (inObserver)
    }
  }
 
  func removeObserverOf_name (inObserver : PMTransientEventProtocol, inTrigger:Bool) {
    name_observers [inObserver.uniqueIndex] = nil
    if inTrigger {
      postTransientEvent (inObserver)
    }
  }

  func validate_name (proposedValue : String) -> PMValidationResult { return PMValidationResult.ok }

  //-------------------------------------------------------------------------------------------------------------------*
  //    To one relationship: mRoot                                                                                     *
  //-------------------------------------------------------------------------------------------------------------------*

  private var mRoot_observers : [Int : PMTransientEventProtocol] = [:]
  private var mRoot_explorer : NSButton?
  var mRoot : MyRootEntity? = nil {
    didSet {
      if oldValue !== mRoot {
      //--- Register old value in undo manager
        mUndoManager?.registerUndoWithTarget (self, selector:"undoFor_mRoot:", object:oldValue)
      //--- Update explorer
        if mRoot_explorer != nil {
          updateManagedObjectToOneRelationshipDisplayForKey ("mRoot", button : mRoot_explorer)
        }
      //--- Reset old opposite relation ship
        if let unwrappedOldValue = oldValue {
          let idx = unwrappedOldValue.mNames.indexOfObjectIdenticalTo (self)
          if idx != NSNotFound {
            var array = unwrappedOldValue.mNames.mutableCopy () as NSMutableArray
            array.removeObjectAtIndex (idx)
            unwrappedOldValue.mNames = array
          }
        }
      //--- Set new opposite relation ship
        if let root = mRoot {
          let idx = root.mNames.indexOfObjectIdenticalTo (self)
          if idx == NSNotFound {
            var array = root.mNames.mutableCopy () as NSMutableArray
            array.addObject (self)
            root.mNames = array
          }
        }
      //--- Notify observers
        for object in mRoot_observers.values {
          postTransientEvent (object)
        }
      }
    }
  }

  func undoFor_mRoot (object:MyRootEntity) {
    mRoot = object
  }

  func addObserverOf_mRoot (inObserver : PMTransientEventProtocol, inTrigger:Bool) {
    mRoot_observers [inObserver.uniqueIndex] = inObserver
    if inTrigger {
      postTransientEvent (inObserver)
    }
  }

  func removeObserverOf_mRoot (inObserver : PMTransientEventProtocol, inTrigger:Bool) {
    mRoot_observers [inObserver.uniqueIndex] = nil
    if inTrigger {
      postTransientEvent (inObserver)
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //  prepareForDeletion                                                                                               *
  //-------------------------------------------------------------------------------------------------------------------*

  override func prepareForDeletion () {
    super.prepareForDeletion ()
    mRoot = nil
  }
  

  //-------------------------------------------------------------------------------------------------------------------*
  //    populateExplorerWindowWithRect                                                                                 *
  //-------------------------------------------------------------------------------------------------------------------*

  override func populateExplorerWindowWithRect (inout ioRect : NSRect, view : NSView) {
    super.populateExplorerWindowWithRect (&ioRect, view:view)
    aValue_explorer = createEntryForAttributeNamed ("aValue", ioRect:&ioRect, view:view)
    if let explorer = aValue_explorer {
      explorer.stringValue = NSString (format:"%ld", aValue)
    }
    name_explorer = createEntryForAttributeNamed ("name", ioRect:&ioRect, view:view)
    if let explorer = name_explorer {
      explorer.stringValue = name
    }
    mRoot_explorer = createEntryForToOneRelationshipNamed ("mRoot", ioRect: &ioRect, view: view)
    updateManagedObjectToOneRelationshipDisplayForKey ("mRoot", button:mRoot_explorer!)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    clearObjectExplorer                                                                                            *
  //-------------------------------------------------------------------------------------------------------------------*

  override func clearObjectExplorer () {
    aValue_explorer = nil
    name_explorer = nil
    mRoot_explorer = nil
    super.clearObjectExplorer ()
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    saveIntoDictionary                                                                                             *
  //-------------------------------------------------------------------------------------------------------------------*

  override func saveIntoDictionary (ioDictionary : NSMutableDictionary) {
    super.saveIntoDictionary (ioDictionary)
    ioDictionary.setValue (NSNumber (integer:aValue), forKey: "aValue")
    ioDictionary.setValue (name, forKey: "name")
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    setUpWithDictionary                                                                                            *
  //-------------------------------------------------------------------------------------------------------------------*

  override func setUpWithDictionary (inDictionary : NSDictionary,
                                     managedObjectArray : NSArray) {
    super.setUpWithDictionary (inDictionary, managedObjectArray:managedObjectArray)
    aValue = inDictionary.readInt ("aValue")
    name = inDictionary.readString ("name")
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //   accessibleObjects                                                                                               *
  //-------------------------------------------------------------------------------------------------------------------*

  override func accessibleObjects (inout objects : NSMutableArray) {
    super.accessibleObjects (&objects)
    if mRoot != nil {
      objects.addObject (mRoot!)
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

}


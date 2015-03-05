import Cocoa

//---------------------------------------------------------------------------------------------------------------------*

protocol NameEntity_aValue {
  var aValue : PMEntityProperty <Int> { get }
}

//---------------------------------------------------------------------------------------------------------------------*

protocol NameEntity_name {
  var name : PMEntityProperty <String> { get }
}

//---------------------------------------------------------------------------------------------------------------------*

@objc(NameEntity) class NameEntity : PMManagedObject, NameEntity_aValue, NameEntity_name {
  override func userClassName () -> String { return "NameEntity" }

  //-------------------------------------------------------------------------------------------------------------------*
  //    Properties                                                                                                     *
  //-------------------------------------------------------------------------------------------------------------------*

  var aValue = PMEntityProperty <Int> (123)
  var name = PMEntityProperty <String> ("Name")


  //-------------------------------------------------------------------------------------------------------------------*
  //    Transient properties                                                                                           *
  //-------------------------------------------------------------------------------------------------------------------*


  //-------------------------------------------------------------------------------------------------------------------*
  //    Attribute: aValue                                                                                              *
  //-------------------------------------------------------------------------------------------------------------------*

 /* private var aValue_explorer : NSTextField? = nil
  private var aValue_observers : [Int : PMTransientEventProtocol] = [:]
  var aValue : Int = 123 {
    didSet {
      if aValue != oldValue {
        mUndoManager?.registerUndoWithTarget (self, selector:"undoFor_aValue:", object:NSNumber (integer:oldValue))
        aValue_explorer?.stringValue = NSString (format:"%ld", aValue.value) as! String
        for (key, observer) in aValue_observers {
          postTransientEvent (observer)
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
  } */

 // func validate_aValue (proposedValue : Int) -> PMValidationResult { return PMValidationResult.ok }


  //-------------------------------------------------------------------------------------------------------------------*
  //    Attribute: name                                                                                                *
  //-------------------------------------------------------------------------------------------------------------------*

 /* private var name_explorer : NSTextField? = nil
  private var name_observers : [Int : PMTransientEventProtocol] = [:]
  var name : String = "Name" {
    didSet {
      if name != oldValue {
        mUndoManager?.registerUndoWithTarget (self, selector:"undoFor_name:", object:oldValue)
        name_explorer?.stringValue = name.value
        for (key, observer) in name_observers {
          postTransientEvent (observer)
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
  } */

 // func validate_name (proposedValue : String) -> PMValidationResult { return PMValidationResult.ok }

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
          updateManagedObjectToOneRelationshipDisplay (mRoot, button : mRoot_explorer)
        }
      //--- Reset old opposite relation ship
        if let unwrappedOldValue = oldValue {
          if unwrappedOldValue.mNames_set.contains (self) {
            var array = unwrappedOldValue.mNames
            let idx = find (array, self)
            array.removeAtIndex (idx!)
            unwrappedOldValue.mNames = array
          }
        }
      //--- Set new opposite relation ship
        if let root = mRoot {
          if !root.mNames_set.contains (self) {
            root.mNames.append (self)
          }
        }
      //--- Notify observers
        for (key, observer) in mRoot_observers {
          postTransientEvent (observer)
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
    aValue.explorer = createEntryForAttributeNamed ("aValue", ioRect:&ioRect, view:view)
    if let explorer = aValue.explorer {
      explorer.stringValue = aValue.value.descriptionForExplorer ()
    }
    name.explorer = createEntryForAttributeNamed ("name", ioRect:&ioRect, view:view)
    if let explorer = name.explorer {
      explorer.stringValue = name.value.descriptionForExplorer ()
    }
    mRoot_explorer = createEntryForToOneRelationshipNamed ("mRoot", ioRect: &ioRect, view: view)
    updateManagedObjectToOneRelationshipDisplay (mRoot, button:mRoot_explorer!)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    clearObjectExplorer                                                                                            *
  //-------------------------------------------------------------------------------------------------------------------*

  override func clearObjectExplorer () {
    aValue.explorer = nil
    name.explorer = nil
    mRoot_explorer = nil
    super.clearObjectExplorer ()
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    saveIntoDictionary                                                                                             *
  //-------------------------------------------------------------------------------------------------------------------*

  override func saveIntoDictionary (ioDictionary : NSMutableDictionary) {
    super.saveIntoDictionary (ioDictionary)
    ioDictionary.setValue (NSNumber (integer:aValue.value), forKey: "aValue")
    ioDictionary.setValue (name.value, forKey: "name")
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    setUpWithDictionary                                                                                            *
  //-------------------------------------------------------------------------------------------------------------------*

  override func setUpWithDictionary (inDictionary : NSDictionary,
                                     managedObjectArray : Array<PMManagedObject>) {
    super.setUpWithDictionary (inDictionary, managedObjectArray:managedObjectArray)
    aValue.value = inDictionary.readInt ("aValue")
    name.value = inDictionary.readString ("name")
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


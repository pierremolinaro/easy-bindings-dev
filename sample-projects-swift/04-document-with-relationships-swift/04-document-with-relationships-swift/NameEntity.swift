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
//    To one relationship: mRoot                                                                                       *
//---------------------------------------------------------------------------------------------------------------------*

struct ToOneRelationship_NameEntity_mRoot {
  var explorer : NSButton?
  var owner : NameEntity?
 
  var value : MyRootEntity? = nil {
    didSet {
      if let unwrappedOwner = owner where oldValue !== value {
      //--- Register old value in undo manager
        unwrappedOwner.mUndoManager?.registerUndoWithTarget (unwrappedOwner, selector:"undoFor_mRoot:", object:oldValue)
      //--- Update explorer
        if let unwrappedExplorer = explorer {
          unwrappedOwner.updateManagedObjectToOneRelationshipDisplay (value, button : unwrappedExplorer)
        }
      //--- Reset old opposite relation ship
        if let unwrappedOldValue = oldValue {
          if unwrappedOldValue.mNames.mSet.contains (unwrappedOwner) {
            var array = unwrappedOldValue.mNames.values
            let idx = find (array, unwrappedOwner)
            array.removeAtIndex (idx!)
            unwrappedOldValue.mNames.values = array
          }
        }
      //--- Set new opposite relation ship
        if let unwrappedValue = value {
          if !unwrappedValue.mNames.mSet.contains (unwrappedOwner) {
            unwrappedValue.mNames.values.append (unwrappedOwner)
          }
        }
      //--- Notify observers
        for (key, observer) in mObservers {
          postTransientEvent (observer)
        }
      }
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  private var mObservers : [Int : PMTransientEventProtocol] = [:]

  mutating func addObserver (inObserver : PMTransientEventProtocol, inTrigger:Bool) {
    mObservers [inObserver.uniqueIndex] = inObserver
    if inTrigger {
      postTransientEvent (inObserver)
    }
  }

  mutating func removeObserver (inObserver : PMTransientEventProtocol, inTrigger:Bool) {
    mObservers [inObserver.uniqueIndex] = nil
    if inTrigger {
      postTransientEvent (inObserver)
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//    Entity: NameEntity                                                                                               *
//---------------------------------------------------------------------------------------------------------------------*

@objc(NameEntity) class NameEntity : PMManagedObject, NameEntity_aValue, NameEntity_name {
  override func userClassName () -> String { return "NameEntity" }

  //-------------------------------------------------------------------------------------------------------------------*
  //    Properties                                                                                                     *
  //-------------------------------------------------------------------------------------------------------------------*

  var aValue = PMEntityProperty <Int> (123)
  var aValue_keyCodingValue : Int { get { return aValue.value } }
  var name = PMEntityProperty <String> ("Name")
  var name_keyCodingValue : String { get { return name.value } }


  //-------------------------------------------------------------------------------------------------------------------*
  //    Transient properties                                                                                           *
  //-------------------------------------------------------------------------------------------------------------------*

  //-------------------------------------------------------------------------------------------------------------------*
  //    Relationships                                                                                                  *
  //-------------------------------------------------------------------------------------------------------------------*

  var mRoot = ToOneRelationship_NameEntity_mRoot ()
  func undoFor_mRoot (object:MyRootEntity) {
    mRoot.value = object
  }


  //-------------------------------------------------------------------------------------------------------------------*
  //    init                                                                                                           *
  //-------------------------------------------------------------------------------------------------------------------*

  override init (undoManager : NSUndoManager) {
    super.init (undoManager:undoManager)
  //--- Install compute functions for transients
  //--- Install property observers for transients
  //--- Install undoers for properties
    aValue.registerUndo = {(oldValue : NSObject) in mUndoManager?.registerUndoWithTarget (self, selector:"undoFor_aValue:", object:oldValue) }
    name.registerUndo = {(oldValue : NSObject) in mUndoManager?.registerUndoWithTarget (self, selector:"undoFor_name:", object:oldValue) }
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //  Undo methods for properties                                                                                      *
  //-------------------------------------------------------------------------------------------------------------------*

  func undoFor_aValue (value : NSNumber) {
    aValue.value = value.integerValue
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func undoFor_name (value : String) {
    name.value = value
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //  prepareForDeletion                                                                                               *
  //-------------------------------------------------------------------------------------------------------------------*

  override func prepareForDeletion () {
    super.prepareForDeletion ()
  //--- Uninstall compute functions for transients
  //--- Uninstall undoers for properties
    aValue.registerUndo = nil
    name.registerUndo = nil
    mRoot.value = nil
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
    mRoot.explorer = createEntryForToOneRelationshipNamed ("mRoot", ioRect: &ioRect, view: view)
    updateManagedObjectToOneRelationshipDisplay (mRoot.value, button:mRoot.explorer!)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    clearObjectExplorer                                                                                            *
  //-------------------------------------------------------------------------------------------------------------------*

  override func clearObjectExplorer () {
    aValue.explorer = nil
    name.explorer = nil
    mRoot.explorer = nil
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
    if let object = mRoot.value {
      objects.addObject (object)
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

}


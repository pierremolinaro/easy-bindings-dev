import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(NameEntity_name) protocol NameEntity_name {
  var name : PMStoredProperty_String { get }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(NameEntity_aValue) protocol NameEntity_aValue {
  var aValue : PMStoredProperty_Int { get }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    To one relationship: mRoot                                                                                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class ToOneRelationship_NameEntity_mRoot : PMAbstractProperty {
  var explorer : NSButton?
  weak var owner : NameEntity? {
    didSet {
      if let unwrappedExplorer = explorer, unwrappedOwner = owner {
        unwrappedOwner.updateManagedObjectToOneRelationshipDisplay (prop, button : unwrappedExplorer)
      }
    }
  }
 
  var prop : MyRootEntity? = nil {
    didSet {
      if let unwrappedOwner = owner where oldValue !== prop {
      //--- Register old value in undo manager
        unwrappedOwner.mUndoManager?.registerUndoWithTarget (self, selector:"performUndo:", object:oldValue)
      //--- Update explorer
        if let unwrappedExplorer = explorer {
          unwrappedOwner.updateManagedObjectToOneRelationshipDisplay (prop, button : unwrappedExplorer)
        }
      //--- Reset old opposite relation ship
        if let unwrappedOldValue = oldValue {
          if unwrappedOldValue.mNames.mSet.contains (unwrappedOwner) {
            var array = unwrappedOldValue.mNames.prop
            let idx = find (array, unwrappedOwner)
            array.removeAtIndex (idx!)
            unwrappedOldValue.mNames.prop = array
          }
        }
      //--- Set new opposite relation ship
        if let unwrappedValue = prop {
          if !unwrappedValue.mNames.mSet.contains (unwrappedOwner) {
            unwrappedValue.mNames.prop.append (unwrappedOwner)
          }
        }
      //--- Notify observers
        postEvent ()
      }
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func performUndo (oldValue : MyRootEntity?) {
    prop = oldValue
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func prepareForDeletion () {
    prop = nil
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func remove (object : MyRootEntity) {
    if prop === object {
      prop = nil
    }
  }
  
  //-------------------------------------------------------------------------------------------------------------------*

  func add (object : MyRootEntity) {
    prop = object
  }

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    Entity: NameEntity                                                                                               *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(NameEntity) class NameEntity : PMManagedObject, NameEntity_name, NameEntity_aValue {

  //-------------------------------------------------------------------------------------------------------------------*
  //    Properties                                                                                                     *
  //-------------------------------------------------------------------------------------------------------------------*

  var name = PMStoredProperty_String ("Name")
  var name_keyCodingValue : String { get {return name.prop } }

  var aValue = PMStoredProperty_Int (100)
  var aValue_keyCodingValue : Int { get {return aValue.prop } }

  //-------------------------------------------------------------------------------------------------------------------*
  //    Transient properties                                                                                           *
  //-------------------------------------------------------------------------------------------------------------------*


  //-------------------------------------------------------------------------------------------------------------------*
  //    Relationships                                                                                                  *
  //-------------------------------------------------------------------------------------------------------------------*

  var mRoot = ToOneRelationship_NameEntity_mRoot ()

  //-------------------------------------------------------------------------------------------------------------------*
  //    init                                                                                                           *
  //-------------------------------------------------------------------------------------------------------------------*

  override init (undoManager : NSUndoManager) {
    super.init (undoManager:undoManager)
  //--- Install compute functions for transients
  //--- Install property observers for transients
  //--- Install undoers for properties
    name.undoManager = undoManager
    aValue.undoManager = undoManager
  //--- Install owner for relationships
    mRoot.owner = self
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //  prepareForDeletion                                                                                               *
  //-------------------------------------------------------------------------------------------------------------------*

  override func prepareForDeletion () {
    super.prepareForDeletion ()
  //--- Remove transients observers
  //--- Uninstall compute functions for transients
  //--- Uninstall undoers for properties
    name.undoManager = nil
    aValue.undoManager = nil
  //--- Reset relationships
    mRoot.prepareForDeletion ()
  }
  
  //-------------------------------------------------------------------------------------------------------------------*
  //    populateExplorerWindowWithRect                                                                                 *
  //-------------------------------------------------------------------------------------------------------------------*

  override func populateExplorerWindowWithRect (inout ioRect : NSRect, view : NSView) {
    super.populateExplorerWindowWithRect (&ioRect, view:view)
    name.explorer = createEntryForAttributeNamed ("name", ioRect:&ioRect, view:view)
    aValue.explorer = createEntryForAttributeNamed ("aValue", ioRect:&ioRect, view:view)
    mRoot.explorer = createEntryForToOneRelationshipNamed ("mRoot", ioRect: &ioRect, view: view)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    clearObjectExplorer                                                                                            *
  //-------------------------------------------------------------------------------------------------------------------*

  override func clearObjectExplorer () {
    name.explorer = nil
    aValue.explorer = nil
    mRoot.explorer = nil
    super.clearObjectExplorer ()
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    saveIntoDictionary                                                                                             *
  //-------------------------------------------------------------------------------------------------------------------*

  override func saveIntoDictionary (ioDictionary : NSMutableDictionary) {
    super.saveIntoDictionary (ioDictionary)
    ioDictionary.setValue (name.prop, forKey: "name")
    ioDictionary.setValue (NSNumber (integer:aValue.prop), forKey: "aValue")
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    setUpWithDictionary                                                                                            *
  //-------------------------------------------------------------------------------------------------------------------*

  override func setUpWithDictionary (inDictionary : NSDictionary,
                                     managedObjectArray : Array<PMManagedObject>) {
    super.setUpWithDictionary (inDictionary, managedObjectArray:managedObjectArray)
    name.setProp (inDictionary.readString ("name"))
    aValue.setProp (inDictionary.readInt ("aValue"))
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //   accessibleObjects                                                                                               *
  //-------------------------------------------------------------------------------------------------------------------*

  override func accessibleObjects (inout objects : NSMutableArray) {
    super.accessibleObjects (&objects)
    if let object = mRoot.prop {
      objects.addObject (object)
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

}


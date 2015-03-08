import Cocoa

//---------------------------------------------------------------------------------------------------------------------*

protocol NameEntity_aValue {
  var aValue : PMStoredProperty_Int { get }
}

//---------------------------------------------------------------------------------------------------------------------*

protocol NameEntity_name {
  var name : PMStoredProperty_String { get }
}

//---------------------------------------------------------------------------------------------------------------------*
//    To one relationship: mRoot                                                                                       *
//---------------------------------------------------------------------------------------------------------------------*

class ToOneRelationship_NameEntity_mRoot : PMAbstractProperty {
  var explorer : NSButton?
  var owner : NameEntity? {
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
            var array = unwrappedOldValue.mNames.props
            let idx = find (array, unwrappedOwner)
            array.removeAtIndex (idx!)
            unwrappedOldValue.mNames.props = array
          }
        }
      //--- Set new opposite relation ship
        if let unwrappedValue = prop {
          if !unwrappedValue.mNames.mSet.contains (unwrappedOwner) {
            unwrappedValue.mNames.props.append (unwrappedOwner)
          }
        }
      //--- Notify observers
        postEvents ()
      }
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func performUndo (oldValue : MyRootEntity?) {
    prop = oldValue
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//    Entity: NameEntity                                                                                               *
//---------------------------------------------------------------------------------------------------------------------*

@objc(NameEntity) class NameEntity : PMManagedObject, NameEntity_aValue, NameEntity_name {

  //-------------------------------------------------------------------------------------------------------------------*
  //    Properties                                                                                                     *
  //-------------------------------------------------------------------------------------------------------------------*

  var aValue = PMStoredProperty_Int (123)
  var name = PMStoredProperty_String ("Name")

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
    aValue.undoManager = undoManager
    name.undoManager = undoManager
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //  prepareForDeletion                                                                                               *
  //-------------------------------------------------------------------------------------------------------------------*

  override func prepareForDeletion () {
    super.prepareForDeletion ()
  //--- Uninstall compute functions for transients
  //--- Uninstall undoers for properties
    aValue.undoManager = nil
    name.undoManager = nil
    mRoot.prop = nil
  }
  
  //-------------------------------------------------------------------------------------------------------------------*
  //    deinit                                                                                                         *
  //-------------------------------------------------------------------------------------------------------------------*

  deinit {
  //--- Unregister trigger objects
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    populateExplorerWindowWithRect                                                                                 *
  //-------------------------------------------------------------------------------------------------------------------*

  override func populateExplorerWindowWithRect (inout ioRect : NSRect, view : NSView) {
    super.populateExplorerWindowWithRect (&ioRect, view:view)
    aValue.explorer = createEntryForAttributeNamed ("aValue", ioRect:&ioRect, view:view)
    name.explorer = createEntryForAttributeNamed ("name", ioRect:&ioRect, view:view)
    mRoot.explorer = createEntryForToOneRelationshipNamed ("mRoot", ioRect: &ioRect, view: view)
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
    ioDictionary.setValue (NSNumber (integer:aValue.prop), forKey: "aValue")
    ioDictionary.setValue (name.prop, forKey: "name")
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    setUpWithDictionary                                                                                            *
  //-------------------------------------------------------------------------------------------------------------------*

  override func setUpWithDictionary (inDictionary : NSDictionary,
                                     managedObjectArray : Array<PMManagedObject>) {
    super.setUpWithDictionary (inDictionary, managedObjectArray:managedObjectArray)
    aValue.setProp (inDictionary.readInt ("aValue"))
    name.setProp (inDictionary.readString ("name"))
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


import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(MyRootEntity_docString) protocol MyRootEntity_docString {
  var docString : PMStoredProperty_String { get }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    Array of MyRootEntity                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class ArrayOf_MyRootEntity : PMEvent {
  var computeFunction : Optional<() -> [MyRootEntity]?>

  override init () {
    super.init ()
    count.computeFunction = { [weak self] in return self?.mSet.count }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  var count = PMTransientProperty_Int ()

  override func postEvent () {
    if (prop_cache != nil) {
      prop_cache = nil
      count.postEvent ()
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  private var mSet = Set<MyRootEntity> ()

  var prop_cache : Optional <Array<MyRootEntity> >

  var prop : Array<MyRootEntity> {
    get {
      if prop_cache == nil {
        if let unwrappedComputeFunction = computeFunction {
          prop_cache = unwrappedComputeFunction ()
        }
        if prop_cache == nil {
          prop_cache = Array<MyRootEntity> ()
        }
        let newObjectSet = Set<MyRootEntity> (prop_cache!)
        if mSet != newObjectSet {
        //--- Removed object set
          var removedObjectSet = mSet
          removedObjectSet.subtractInPlace (newObjectSet)
          for managedObject : MyRootEntity in removedObjectSet {
            for observer in mObserversOf_docString {
              managedObject.docString.removeObserver (observer, postEvent:true)
            }
          }
        //--- Added object set
          var addedObjectSet = newObjectSet
          addedObjectSet.subtractInPlace (mSet)
          for managedObject : MyRootEntity in addedObjectSet {
            for observer in mObserversOf_docString {
              managedObject.docString.addObserver (observer, postEvent:true)
            }
          }
        //--- Update object set
          mSet = newObjectSet
        }
      }
      return prop_cache!
    }
  }


  //-------------------------------------------------------------------------------------------------------------------*

  var mObserversOf_docString = Set<PMEvent> ()

  func addObserverOf_docString (inObserver : PMEvent, postEvent inTrigger:Bool) {
    mObserversOf_docString.insert (inObserver)
    for managedObject in prop {
      managedObject.docString.addObserver (inObserver, postEvent:inTrigger)
    }
  }

  func removeObserverOf_docString (inObserver : PMEvent, postEvent inTrigger:Bool) {
    mObserversOf_docString.remove (inObserver)
    for managedObject in prop {
      managedObject.docString.removeObserver (inObserver, postEvent:inTrigger)
    }
  }

}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    Entity: MyRootEntity                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(MyRootEntity) class MyRootEntity : PMManagedObject, MyRootEntity_docString {

  //-------------------------------------------------------------------------------------------------------------------*
  //    Properties                                                                                                     *
  //-------------------------------------------------------------------------------------------------------------------*

  var docString = PMStoredProperty_String ("doc string")
  var docString_keyCodingValue : String { get {return docString.prop } }

  //-------------------------------------------------------------------------------------------------------------------*
  //    Transient properties                                                                                           *
  //-------------------------------------------------------------------------------------------------------------------*

  var transientConcatString = PMTransientProperty_String ()
  var otherTransientConcatString = PMTransientProperty_String ()

  //-------------------------------------------------------------------------------------------------------------------*
  //    Relationships                                                                                                  *
  //-------------------------------------------------------------------------------------------------------------------*


  //-------------------------------------------------------------------------------------------------------------------*
  //    init                                                                                                           *
  //-------------------------------------------------------------------------------------------------------------------*

  override init (undoManager : NSUndoManager) {
    super.init (undoManager:undoManager)
  //--- Install compute functions for transients
    transientConcatString.computeFunction = {return compute_MyRootEntity_transientConcatString (self.docString.prop, g_MyPrefs!.myPrefString.prop, g_MyPrefs!.prefTransientString.prop)}
    otherTransientConcatString.computeFunction = {return compute_MyRootEntity_otherTransientConcatString (g_MyPrefs!.myPrefString.prop)}
  //--- Install property observers for transients
    docString.addObserver (transientConcatString, postEvent:true)
    g_MyPrefs?.myPrefString.addObserver (transientConcatString, postEvent:true)
    g_MyPrefs?.prefTransientString.addObserver (transientConcatString, postEvent:true)
    g_MyPrefs?.myPrefString.addObserver (otherTransientConcatString, postEvent:true)
  //--- Install undoers for properties
    docString.undoManager = undoManager
  //--- Install owner for relationships
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //  prepareForDeletion                                                                                               *
  //-------------------------------------------------------------------------------------------------------------------*

  override func prepareForDeletion () {
    super.prepareForDeletion ()
  //--- Remove transients observers
    docString.removeObserver (transientConcatString, postEvent:false)
    g_MyPrefs?.myPrefString.removeObserver (transientConcatString, postEvent:false)
    g_MyPrefs?.prefTransientString.removeObserver (transientConcatString, postEvent:false)
    g_MyPrefs?.myPrefString.removeObserver (otherTransientConcatString, postEvent:false)
  //--- Uninstall compute functions for transients
    transientConcatString.computeFunction = nil
    otherTransientConcatString.computeFunction = nil
  //--- Uninstall undoers for properties
    docString.undoManager = nil
  //--- Reset relationships
  }
  
  //-------------------------------------------------------------------------------------------------------------------*
  //    populateExplorerWindowWithRect                                                                                 *
  //-------------------------------------------------------------------------------------------------------------------*

  override func populateExplorerWindowWithRect (inout ioRect : NSRect, view : NSView) {
    super.populateExplorerWindowWithRect (&ioRect, view:view)
    docString.explorer = createEntryForAttributeNamed ("docString", ioRect:&ioRect, view:view)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    clearObjectExplorer                                                                                            *
  //-------------------------------------------------------------------------------------------------------------------*

  override func clearObjectExplorer () {
    docString.explorer = nil
    super.clearObjectExplorer ()
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    saveIntoDictionary                                                                                             *
  //-------------------------------------------------------------------------------------------------------------------*

  override func saveIntoDictionary (ioDictionary : NSMutableDictionary) {
    super.saveIntoDictionary (ioDictionary)
    ioDictionary.setValue (docString.prop, forKey: "docString")
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    setUpWithDictionary                                                                                            *
  //-------------------------------------------------------------------------------------------------------------------*

  override func setUpWithDictionary (inDictionary : NSDictionary,
                                     managedObjectArray : Array<PMManagedObject>) {
    super.setUpWithDictionary (inDictionary, managedObjectArray:managedObjectArray)
    docString.setProp (inDictionary.readString ("docString"))
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //   accessibleObjects                                                                                               *
  //-------------------------------------------------------------------------------------------------------------------*

  override func accessibleObjects (inout objects : NSMutableArray) {
    super.accessibleObjects (&objects)
  }

  //-------------------------------------------------------------------------------------------------------------------*

}


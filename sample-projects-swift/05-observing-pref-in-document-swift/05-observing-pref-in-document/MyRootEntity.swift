import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

protocol MyRootEntity_docString {
  var docString : PMStoredProperty_String { get }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    Array of MyRootEntity                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class ArrayOf_MyRootEntity : PMObject, PMTransientPropertyProtocol {
  var computeFunction : Optional<() -> [MyRootEntity]?>

  override init () {
    super.init ()
    count.computeFunction = { [weak self] in return self?.mSet.count }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  var count = PMTransientProperty_Int ()

  func noteModelDidChange () {
    if (props_cache != nil) {
      props_cache = nil
      count.postEvents ()
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  private var mSet = Set<MyRootEntity> ()

  var props_cache : Optional <Array<MyRootEntity> >

  var props : Array<MyRootEntity> {
    get {
      if props_cache == nil {
        if let unwrappedComputeFunction = computeFunction {
          props_cache = unwrappedComputeFunction ()
        }
        if props_cache == nil {
          props_cache = Array<MyRootEntity> ()
        }
        let newObjectSet = Set<MyRootEntity> (props_cache!)
        if mSet != newObjectSet {
        //--- Removed object set
          var removedObjectSet = mSet
          removedObjectSet.subtractInPlace (newObjectSet)
          for managedObject : MyRootEntity in removedObjectSet {
            for observer in mObserversOf_docString {
              managedObject.docString.removeObserver (observer, inTrigger:true)
            }
          }
        //--- Added object set
          var addedObjectSet = newObjectSet
          addedObjectSet.subtractInPlace (mSet)
          for managedObject : MyRootEntity in addedObjectSet {
            for observer in mObserversOf_docString {
              managedObject.docString.addObserver (observer, inTrigger:true)
            }
          }
        //--- Update object set
          mSet = newObjectSet
        }
      }
      return props_cache!
    }
  }


  //-------------------------------------------------------------------------------------------------------------------*

  var mObserversOf_docString = Set<PMEvent> ()

  func addObserverOf_docString (inObserver : PMEvent, inTrigger:Bool) {
    mObserversOf_docString.insert (inObserver)
    for managedObject in props {
      managedObject.docString.addObserver (inObserver, inTrigger:inTrigger)
    }
  }

  func removeObserverOf_docString (inObserver : PMEvent, inTrigger:Bool) {
    mObserversOf_docString.remove (inObserver)
    for managedObject in props {
      managedObject.docString.removeObserver (inObserver, inTrigger:inTrigger)
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

  var otherTransientConcatString = PMTransientProperty_String ()
  var transientConcatString = PMTransientProperty_String ()

  //-------------------------------------------------------------------------------------------------------------------*
  //    Relationships                                                                                                  *
  //-------------------------------------------------------------------------------------------------------------------*


  //-------------------------------------------------------------------------------------------------------------------*
  //    init                                                                                                           *
  //-------------------------------------------------------------------------------------------------------------------*

  override init (undoManager : NSUndoManager) {
    super.init (undoManager:undoManager)
  //--- Install compute functions for transients
    otherTransientConcatString.computeFunction = {return compute_MyRootEntity_otherTransientConcatString (g_MyPrefs!.myPrefString.prop)}
    transientConcatString.computeFunction = {return compute_MyRootEntity_transientConcatString (self.docString.prop, g_MyPrefs!.myPrefString.prop, g_MyPrefs!.prefTransientString.prop)}
  //--- Install property observers for transients
    g_MyPrefs?.myPrefString.addObserver (otherTransientConcatString.event, inTrigger:true)
    docString.addObserver (transientConcatString.event, inTrigger:true)
    g_MyPrefs?.myPrefString.addObserver (transientConcatString.event, inTrigger:true)
    g_MyPrefs?.prefTransientString.addObserver (transientConcatString.event, inTrigger:true)
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
    g_MyPrefs?.myPrefString.removeObserver (otherTransientConcatString.event, inTrigger:false)
    docString.removeObserver (transientConcatString.event, inTrigger:false)
    g_MyPrefs?.myPrefString.removeObserver (transientConcatString.event, inTrigger:false)
    g_MyPrefs?.prefTransientString.removeObserver (transientConcatString.event, inTrigger:false)
  //--- Uninstall compute functions for transients
    otherTransientConcatString.computeFunction = nil
    transientConcatString.computeFunction = nil
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


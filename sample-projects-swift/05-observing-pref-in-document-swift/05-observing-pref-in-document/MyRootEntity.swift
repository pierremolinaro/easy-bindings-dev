import Cocoa

//---------------------------------------------------------------------------------------------------------------------*

protocol MyRootEntity_docString {
  var docString : String { get }
}

//---------------------------------------------------------------------------------------------------------------------*

@objc(MyRootEntity) class MyRootEntity : PMManagedObject, MyRootEntity_docString {
  override func userClassName () -> String { return "MyRootEntity" }



  //-------------------------------------------------------------------------------------------------------------------*
  //    Attribute: docString                                                                                           *
  //-------------------------------------------------------------------------------------------------------------------*

  private var docString_explorer : NSTextField? = nil
  private var docString_observers : [Int : PMTransientEventProtocol] = [:]
  var docString : String = "doc string" {
    didSet {
      if docString != oldValue {
        mUndoManager?.registerUndoWithTarget (self, selector:"undoFor_docString:", object:oldValue)
        docString_explorer?.stringValue = docString
        for (key, observer) in docString_observers {
          postTransientEvent (observer)
        }
      }
    }
  }

  func undoFor_docString (value : String) {
    docString = value
  }

  func addObserverOf_docString (inObserver : PMTransientEventProtocol, inTrigger:Bool) {
    docString_observers [inObserver.uniqueIndex] = inObserver
    if inTrigger {
      postTransientEvent (inObserver)
    }
  }
 
  func removeObserverOf_docString (inObserver : PMTransientEventProtocol, inTrigger:Bool) {
    docString_observers [inObserver.uniqueIndex] = nil
    if inTrigger {
      postTransientEvent (inObserver)
    }
  }

  func validate_docString (proposedValue : String) -> PMValidationResult { return PMValidationResult.ok }


  //-------------------------------------------------------------------------------------------------------------------*
  //    init                                                                                                           *
  //-------------------------------------------------------------------------------------------------------------------*

  override init (undoManager : NSUndoManager) {
    super.init (undoManager:undoManager)
  //--- Register trigger objects
    g_MyPrefs?.addObserverOf_myPrefString (event_entity_2E_MyRootEntity_2E_otherTransientConcatString, inTrigger:true)
    addObserverOf_docString (event_entity_2E_MyRootEntity_2E_transientConcatString, inTrigger:true)
    g_MyPrefs?.addObserverOf_myPrefString (event_entity_2E_MyRootEntity_2E_transientConcatString, inTrigger:true)
    g_MyPrefs?.addObserverOf_prefTransientString (event_entity_2E_MyRootEntity_2E_transientConcatString, inTrigger:true)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //  prepareForDeletion                                                                                               *
  //-------------------------------------------------------------------------------------------------------------------*

  override func prepareForDeletion () {
    super.prepareForDeletion ()
  }
  

  //-------------------------------------------------------------------------------------------------------------------*
  //    deinit                                                                                                         *
  //-------------------------------------------------------------------------------------------------------------------*

  deinit {
  //--- Unregister trigger objects
    g_MyPrefs?.removeObserverOf_myPrefString (event_entity_2E_MyRootEntity_2E_otherTransientConcatString, inTrigger:false)
    removeObserverOf_docString (event_entity_2E_MyRootEntity_2E_transientConcatString, inTrigger:false)
    g_MyPrefs?.removeObserverOf_myPrefString (event_entity_2E_MyRootEntity_2E_transientConcatString, inTrigger:false)
    g_MyPrefs?.removeObserverOf_prefTransientString (event_entity_2E_MyRootEntity_2E_transientConcatString, inTrigger:false)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    populateExplorerWindowWithRect                                                                                 *
  //-------------------------------------------------------------------------------------------------------------------*

  override func populateExplorerWindowWithRect (inout ioRect : NSRect, view : NSView) {
    super.populateExplorerWindowWithRect (&ioRect, view:view)
    docString_explorer = createEntryForAttributeNamed ("docString", ioRect:&ioRect, view:view)
    if let explorer = docString_explorer {
      explorer.stringValue = docString
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    clearObjectExplorer                                                                                            *
  //-------------------------------------------------------------------------------------------------------------------*

  override func clearObjectExplorer () {
    docString_explorer = nil
    super.clearObjectExplorer ()
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    saveIntoDictionary                                                                                             *
  //-------------------------------------------------------------------------------------------------------------------*

  override func saveIntoDictionary (ioDictionary : NSMutableDictionary) {
    super.saveIntoDictionary (ioDictionary)
    ioDictionary.setValue (docString, forKey: "docString")
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    setUpWithDictionary                                                                                            *
  //-------------------------------------------------------------------------------------------------------------------*

  override func setUpWithDictionary (inDictionary : NSDictionary,
                                     managedObjectArray : Array<PMManagedObject>) {
    super.setUpWithDictionary (inDictionary, managedObjectArray:managedObjectArray)
    docString = inDictionary.readString ("docString")
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    Transient: otherTransientConcatString                                                                          *
  //-------------------------------------------------------------------------------------------------------------------*

  private var otherTransientConcatString_observers : [Int : PMTransientEventProtocol] = [:]
  private var otherTransientConcatString_cache : String?
  var otherTransientConcatString : String {
    get {
      if otherTransientConcatString_cache == nil {
        otherTransientConcatString_cache = compute_MyRootEntity_otherTransientConcatString (g_MyPrefs!.myPrefString)
      }
      return otherTransientConcatString_cache!
    }
    set {
    }
  }

  func entity_2E_MyRootEntity_2E_otherTransientConcatString_noteDidChange () {
    otherTransientConcatString_cache = nil
  }

  func entity_2E_MyRootEntity_2E_otherTransientConcatString_trigger () {
    for (key, observer) in otherTransientConcatString_observers {
      postTransientEvent (observer)
    }
  }

   func addObserverOf_otherTransientConcatString (inObserver : PMTransientEventProtocol, inTrigger:Bool) {
    otherTransientConcatString_observers [inObserver.uniqueIndex] = inObserver
    if inTrigger {
      postTransientEvent (inObserver)
    }
  }
 
  func removeObserverOf_otherTransientConcatString (inObserver : PMTransientEventProtocol, inTrigger:Bool) {
    otherTransientConcatString_observers [inObserver.uniqueIndex] = nil
    if inTrigger {
      postTransientEvent (inObserver)
    }
  }

  var event_entity_2E_MyRootEntity_2E_otherTransientConcatString_cache : PMEvent_entity_2E_MyRootEntity_2E_otherTransientConcatString? = nil
  var event_entity_2E_MyRootEntity_2E_otherTransientConcatString : PMEvent_entity_2E_MyRootEntity_2E_otherTransientConcatString {
    if nil == event_entity_2E_MyRootEntity_2E_otherTransientConcatString_cache {
      event_entity_2E_MyRootEntity_2E_otherTransientConcatString_cache = PMEvent_entity_2E_MyRootEntity_2E_otherTransientConcatString (object:self)
    }
    return event_entity_2E_MyRootEntity_2E_otherTransientConcatString_cache!
  }
 
  //-------------------------------------------------------------------------------------------------------------------*
  //    Transient: transientConcatString                                                                               *
  //-------------------------------------------------------------------------------------------------------------------*

  private var transientConcatString_observers : [Int : PMTransientEventProtocol] = [:]
  private var transientConcatString_cache : String?
  var transientConcatString : String {
    get {
      if transientConcatString_cache == nil {
        transientConcatString_cache = compute_MyRootEntity_transientConcatString (docString, g_MyPrefs!.myPrefString, g_MyPrefs!.prefTransientString)
      }
      return transientConcatString_cache!
    }
    set {
    }
  }

  func entity_2E_MyRootEntity_2E_transientConcatString_noteDidChange () {
    transientConcatString_cache = nil
  }

  func entity_2E_MyRootEntity_2E_transientConcatString_trigger () {
    for (key, observer) in transientConcatString_observers {
      postTransientEvent (observer)
    }
  }

   func addObserverOf_transientConcatString (inObserver : PMTransientEventProtocol, inTrigger:Bool) {
    transientConcatString_observers [inObserver.uniqueIndex] = inObserver
    if inTrigger {
      postTransientEvent (inObserver)
    }
  }
 
  func removeObserverOf_transientConcatString (inObserver : PMTransientEventProtocol, inTrigger:Bool) {
    transientConcatString_observers [inObserver.uniqueIndex] = nil
    if inTrigger {
      postTransientEvent (inObserver)
    }
  }

  var event_entity_2E_MyRootEntity_2E_transientConcatString_cache : PMEvent_entity_2E_MyRootEntity_2E_transientConcatString? = nil
  var event_entity_2E_MyRootEntity_2E_transientConcatString : PMEvent_entity_2E_MyRootEntity_2E_transientConcatString {
    if nil == event_entity_2E_MyRootEntity_2E_transientConcatString_cache {
      event_entity_2E_MyRootEntity_2E_transientConcatString_cache = PMEvent_entity_2E_MyRootEntity_2E_transientConcatString (object:self)
    }
    return event_entity_2E_MyRootEntity_2E_transientConcatString_cache!
  }
 
  //-------------------------------------------------------------------------------------------------------------------*
  //   accessibleObjects                                                                                               *
  //-------------------------------------------------------------------------------------------------------------------*

  override func accessibleObjects (inout objects : NSMutableArray) {
    super.accessibleObjects (&objects)
  }

  //-------------------------------------------------------------------------------------------------------------------*

}


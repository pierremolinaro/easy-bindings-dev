
import Cocoa

//---------------------------------------------------------------------------------------------------------------------*

@objc(PMDocument) class PMDocument : PMManagedDocument {

  //-------------------------------------------------------------------------------------------------------------------*
  //    Outlets                                                                                                        *
  //-------------------------------------------------------------------------------------------------------------------*

  @IBOutlet var addPathButton : PMButton?
  @IBOutlet var canRemoveTextField : PMTextField?
  @IBOutlet var countItemMessageTextField : PMTextField?
  @IBOutlet var countItemTextField : PMTextField?
  @IBOutlet var mNamesTableView : PMTableView?
  @IBOutlet var removePathButton : PMButton?
  @IBOutlet var totalTextField : PMTextField?

  //-------------------------------------------------------------------------------------------------------------------*
  //    Controllers                                                                                                    *
  //-------------------------------------------------------------------------------------------------------------------*

  //-------------------------------------------------------------------------------------------------------------------*
  //    Document attributes                                                                                            *
  //-------------------------------------------------------------------------------------------------------------------*


  //-------------------------------------------------------------------------------------------------------------------*
  //    windowNibName                                                                                                  *
  //-------------------------------------------------------------------------------------------------------------------*

  override var windowNibName: String {
    return "PMDocument"
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    rootEntityClassName                                                                                            *
  //-------------------------------------------------------------------------------------------------------------------*

  override func rootEntityClassName () -> String {
    return "MyRootEntity"
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    rootObject                                                                                                     *
  //-------------------------------------------------------------------------------------------------------------------*

  var rootObject : MyRootEntity { get { return mRootObject as MyRootEntity } }

  //-------------------------------------------------------------------------------------------------------------------*
  //    Array controller: nameController                                                                               *
  //-------------------------------------------------------------------------------------------------------------------*
  
  private var nameController : ArrayController_MyRootEntity_mNames? = nil

  func document_2E_PMDocument_2E_nameController_noteDidChange () {
  }

  func document_2E_PMDocument_2E_nameController_trigger () {
    nameController?.arrayModelSizeDidChange ()
    nameController?.updateCanRemoveProperty ()
  }

  private var triggerObjectFor_document_2E_PMDocument_2E_nameController_cache : PMTrigger_document_2E_PMDocument_2E_nameController?
  private var triggerObjectFor_document_2E_PMDocument_2E_nameController : PMTrigger_document_2E_PMDocument_2E_nameController {
    get {
      if triggerObjectFor_document_2E_PMDocument_2E_nameController_cache == nil {
        triggerObjectFor_document_2E_PMDocument_2E_nameController_cache = PMTrigger_document_2E_PMDocument_2E_nameController (object:self)
      }
      return triggerObjectFor_document_2E_PMDocument_2E_nameController_cache!
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    windowControllerDidLoadNib                                                                                     *
  //-------------------------------------------------------------------------------------------------------------------*

  var mControllerArray = NSMutableArray ()

  //-------------------------------------------------------------------------------------------------------------------*

  override func windowControllerDidLoadNib (aController: NSWindowController) {
    super.windowControllerDidLoadNib (aController)
  //--------------------------- Outlet checking
    if nil == addPathButton {
      presentErrorWindow (__FILE__, __LINE__, "the 'addPathButton' outlet is nil") ;
    }
    if nil == canRemoveTextField {
      presentErrorWindow (__FILE__, __LINE__, "the 'canRemoveTextField' outlet is nil") ;
    }
    if nil == countItemMessageTextField {
      presentErrorWindow (__FILE__, __LINE__, "the 'countItemMessageTextField' outlet is nil") ;
    }
    if nil == countItemTextField {
      presentErrorWindow (__FILE__, __LINE__, "the 'countItemTextField' outlet is nil") ;
    }
    if nil == mNamesTableView {
      presentErrorWindow (__FILE__, __LINE__, "the 'mNamesTableView' outlet is nil") ;
    }
    if nil == removePathButton {
      presentErrorWindow (__FILE__, __LINE__, "the 'removePathButton' outlet is nil") ;
    }
    if nil == totalTextField {
      presentErrorWindow (__FILE__, __LINE__, "the 'totalTextField' outlet is nil") ;
    }
  //--------------------------- Array controller
    nameController = ArrayController_MyRootEntity_mNames (
      object:rootObject,
      tableView:mNamesTableView,
      file:__FILE__,
      line:__LINE__
    )
  //--------------------------- Transient observers
    nameController?.addObserverOf_canRemove (triggerObjectFor_document_2E_PMDocument_2E_canRemoveString)
    rootObject.addObserverOf_mNames (triggerObjectFor_document_2E_PMDocument_2E_countItemMessage)
  //--------------------------- Array controller as observers
    rootObject.addObserverOf_mNames (triggerObjectFor_document_2E_PMDocument_2E_nameController)
  //--------------------------- Simple controller
    mControllerArray.addObject (Controller_PMDocument_canRemoveString_PMTextField_rvalue (object:self, outlet:canRemoveTextField, file:__FILE__, line:__LINE__))
    mControllerArray.addObject (Controller_ArrayController_MyRootEntity_mNames_canRemove_PMButton_enabled (object:nameController, outlet:removePathButton, file:__FILE__, line:__LINE__))
    mControllerArray.addObject (Controller_MyRootEntity_mNames_count_PMTextField_rvalue (object:rootObject, outlet:countItemTextField, file:__FILE__, line:__LINE__))
    mControllerArray.addObject (Controller_PMDocument_countItemMessage_PMTextField_rvalue (object:self, outlet:countItemMessageTextField, file:__FILE__, line:__LINE__))
  //--------------------------- Set targets / actions
    addPathButton?.target = nameController
    addPathButton?.action = "add:"
    removePathButton?.target = nameController
    removePathButton?.action = "remove:"
  //--------------------------- Update display
    flushTriggers ()
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //   removeWindowController                                                                                          *
  //-------------------------------------------------------------------------------------------------------------------*

  override func removeWindowController (inWindowController : NSWindowController) {
  //--------------------------- Remove controllers
    nameController?.unregister ()
    for object in mControllerArray {
      let controller = object as PMTriggerProtocol
      controller.unregister ()
    }
    mControllerArray.removeAllObjects ()
  //--------------------------- Remove targets / actions
    addPathButton?.target = nil
    removePathButton?.target = nil
  //---
    super.removeWindowController (inWindowController)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    Transient: canRemoveString                                                                                     *
  //-------------------------------------------------------------------------------------------------------------------*

  var canRemoveString_observers = NSMutableSet ()
  var canRemoveString_cache : String?
  var canRemoveString : String {
    get {
      if canRemoveString_cache == nil {
        canRemoveString_cache = compute_PMDocument_canRemoveString ((nameController != nil) ? (nameController?.canRemove)! : false)
      }
      return canRemoveString_cache!
    }
  }

  func document_2E_PMDocument_2E_canRemoveString_noteDidChange () {
    canRemoveString_cache = nil
  }

  func document_2E_PMDocument_2E_canRemoveString_trigger () {
    for anyObject in canRemoveString_observers {
      let object = anyObject as PMTriggerProtocol
      enterTriggerWithObject (object)
    }
  }
 
   func addObserverOf_canRemoveString (inObserver : PMTriggerProtocol) {
    canRemoveString_observers.addObject (inObserver)
    enterTriggerWithObject (inObserver)
  }
 
  func removeObserverOf_canRemoveString (inObserver : PMTriggerProtocol) {
    canRemoveString_observers.removeObject (inObserver)
    enterTriggerWithObject (inObserver)
  }

  var triggerObjectFor_document_2E_PMDocument_2E_canRemoveString_cache : PMTrigger_document_2E_PMDocument_2E_canRemoveString? = nil
  var triggerObjectFor_document_2E_PMDocument_2E_canRemoveString : PMTrigger_document_2E_PMDocument_2E_canRemoveString {
    if triggerObjectFor_document_2E_PMDocument_2E_canRemoveString_cache == nil {
      triggerObjectFor_document_2E_PMDocument_2E_canRemoveString_cache = PMTrigger_document_2E_PMDocument_2E_canRemoveString (object:self)
    }
    return triggerObjectFor_document_2E_PMDocument_2E_canRemoveString_cache!
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    Transient: countItemMessage                                                                                    *
  //-------------------------------------------------------------------------------------------------------------------*

  var countItemMessage_observers = NSMutableSet ()
  var countItemMessage_cache : String?
  var countItemMessage : String {
    get {
      if countItemMessage_cache == nil {
        countItemMessage_cache = compute_PMDocument_countItemMessage (rootObject.mNames.count)
      }
      return countItemMessage_cache!
    }
  }

  func document_2E_PMDocument_2E_countItemMessage_noteDidChange () {
    countItemMessage_cache = nil
  }

  func document_2E_PMDocument_2E_countItemMessage_trigger () {
    for anyObject in countItemMessage_observers {
      let object = anyObject as PMTriggerProtocol
      enterTriggerWithObject (object)
    }
  }
 
   func addObserverOf_countItemMessage (inObserver : PMTriggerProtocol) {
    countItemMessage_observers.addObject (inObserver)
    enterTriggerWithObject (inObserver)
  }
 
  func removeObserverOf_countItemMessage (inObserver : PMTriggerProtocol) {
    countItemMessage_observers.removeObject (inObserver)
    enterTriggerWithObject (inObserver)
  }

  var triggerObjectFor_document_2E_PMDocument_2E_countItemMessage_cache : PMTrigger_document_2E_PMDocument_2E_countItemMessage? = nil
  var triggerObjectFor_document_2E_PMDocument_2E_countItemMessage : PMTrigger_document_2E_PMDocument_2E_countItemMessage {
    if triggerObjectFor_document_2E_PMDocument_2E_countItemMessage_cache == nil {
      triggerObjectFor_document_2E_PMDocument_2E_countItemMessage_cache = PMTrigger_document_2E_PMDocument_2E_countItemMessage (object:self)
    }
    return triggerObjectFor_document_2E_PMDocument_2E_countItemMessage_cache!
  }



//---------------------------------------------------------------------------------------------------------------------*

}


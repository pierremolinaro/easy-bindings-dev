
import Cocoa

//---------------------------------------------------------------------------------------------------------------------*

@objc(PMDocument) class PMDocument : PMManagedDocument, PMUserClassName {

  //-------------------------------------------------------------------------------------------------------------------*
  //    userClassName                                                                                                  *
  //-------------------------------------------------------------------------------------------------------------------*

  override func userClassName () -> String { return "PMDocument" }

  //-------------------------------------------------------------------------------------------------------------------*
  //    Outlets                                                                                                        *
  //-------------------------------------------------------------------------------------------------------------------*

  @IBOutlet var addPathButton : PMButton?
  @IBOutlet var canRemoveTextField : PMTextField?
  @IBOutlet var countItemMessageTextField : PMTextField?
  @IBOutlet var countItemTextField : PMNumberField?
  @IBOutlet var mNamesTableView : PMTableView?
  @IBOutlet var removePathButton : PMButton?
  @IBOutlet var totalTextField : PMNumberField?

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

  var mControllerArray : [PMTriggerProtocol] = []

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
    nameController?.addObserverOf_canRemove (triggerObjectFor_document_2E_PMDocument_2E_canRemoveString, inTrigger:true)
    rootObject.addObserverOf_mNames (triggerObjectFor_document_2E_PMDocument_2E_countItemMessage, inTrigger:true)
    rootObject.addObserverOf_mNames_aValue (triggerObjectFor_document_2E_PMDocument_2E_total, inTrigger:true)
  //--------------------------- Array controller as observers
    rootObject.addObserverOf_mNames (triggerObjectFor_document_2E_PMDocument_2E_nameController, inTrigger:false)
  //--------------------------- Simple controller
    mControllerArray.append (Controller_PMDocument_canRemoveString_PMTextField_rvalue (object:self, outlet:canRemoveTextField, file:__FILE__, line:__LINE__))
    mControllerArray.append (Controller_ArrayController_MyRootEntity_mNames_canRemove_PMButton_enabled (object:nameController, outlet:removePathButton, file:__FILE__, line:__LINE__))
    mControllerArray.append (Controller_MyRootEntity_mNames_count_PMNumberField_rvalue (object:rootObject, outlet:countItemTextField, file:__FILE__, line:__LINE__))
    mControllerArray.append (Controller_PMDocument_countItemMessage_PMTextField_rvalue (object:self, outlet:countItemMessageTextField, file:__FILE__, line:__LINE__))
    mControllerArray.append (Controller_PMDocument_total_PMNumberField_rvalue (object:self, outlet:totalTextField, file:__FILE__, line:__LINE__))
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
    for controller in mControllerArray {
      controller.unregister ()
    }
    mControllerArray = []
  //--------------------------- Remove targets / actions
    addPathButton?.target = nil
    removePathButton?.target = nil
  //---
    super.removeWindowController (inWindowController)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    Transient: canRemoveString                                                                                     *
  //-------------------------------------------------------------------------------------------------------------------*

  var canRemoveString_observers : [Int : PMTriggerProtocol] = [:]
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
    for object in canRemoveString_observers.values {
      enterTriggerWithObject (object)
    }
  }
 
   func addObserverOf_canRemoveString (inObserver : PMTriggerProtocol, inTrigger:Bool) {
    canRemoveString_observers [inObserver.uniqueIndex] = inObserver
    if inTrigger {
      enterTriggerWithObject (inObserver)
    }
  }
 
  func removeObserverOf_canRemoveString (inObserver : PMTriggerProtocol, inTrigger:Bool) {
    canRemoveString_observers [inObserver.uniqueIndex] = nil
    if inTrigger {
      enterTriggerWithObject (inObserver)
    }
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

  var countItemMessage_observers : [Int : PMTriggerProtocol] = [:]
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
    for object in countItemMessage_observers.values {
      enterTriggerWithObject (object)
    }
  }
 
   func addObserverOf_countItemMessage (inObserver : PMTriggerProtocol, inTrigger:Bool) {
    countItemMessage_observers [inObserver.uniqueIndex] = inObserver
    if inTrigger {
      enterTriggerWithObject (inObserver)
    }
  }
 
  func removeObserverOf_countItemMessage (inObserver : PMTriggerProtocol, inTrigger:Bool) {
    countItemMessage_observers [inObserver.uniqueIndex] = nil
    if inTrigger {
      enterTriggerWithObject (inObserver)
    }
  }

  var triggerObjectFor_document_2E_PMDocument_2E_countItemMessage_cache : PMTrigger_document_2E_PMDocument_2E_countItemMessage? = nil
  var triggerObjectFor_document_2E_PMDocument_2E_countItemMessage : PMTrigger_document_2E_PMDocument_2E_countItemMessage {
    if triggerObjectFor_document_2E_PMDocument_2E_countItemMessage_cache == nil {
      triggerObjectFor_document_2E_PMDocument_2E_countItemMessage_cache = PMTrigger_document_2E_PMDocument_2E_countItemMessage (object:self)
    }
    return triggerObjectFor_document_2E_PMDocument_2E_countItemMessage_cache!
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    Transient: total                                                                                               *
  //-------------------------------------------------------------------------------------------------------------------*

  var total_observers : [Int : PMTriggerProtocol] = [:]
  var total_cache : Int?
  var total : Int {
    get {
      if total_cache == nil {
        total_cache = compute_PMDocument_total (rootObject.mNames /* (rootObject.mNames as NSArray) as [NameEntity_aValue] */)
      }
      return total_cache!
    }
  }

  func document_2E_PMDocument_2E_total_noteDidChange () {
    total_cache = nil
  }

  func document_2E_PMDocument_2E_total_trigger () {
    for object in total_observers.values {
      enterTriggerWithObject (object)
    }
  }
 
   func addObserverOf_total (inObserver : PMTriggerProtocol, inTrigger:Bool) {
    total_observers [inObserver.uniqueIndex] = inObserver
    if inTrigger {
      enterTriggerWithObject (inObserver)
    }
  }
 
  func removeObserverOf_total (inObserver : PMTriggerProtocol, inTrigger:Bool) {
    total_observers [inObserver.uniqueIndex] = nil
    if inTrigger {
      enterTriggerWithObject (inObserver)
    }
  }

  var triggerObjectFor_document_2E_PMDocument_2E_total_cache : PMTrigger_document_2E_PMDocument_2E_total? = nil
  var triggerObjectFor_document_2E_PMDocument_2E_total : PMTrigger_document_2E_PMDocument_2E_total {
    if triggerObjectFor_document_2E_PMDocument_2E_total_cache == nil {
      triggerObjectFor_document_2E_PMDocument_2E_total_cache = PMTrigger_document_2E_PMDocument_2E_total (object:self)
    }
    return triggerObjectFor_document_2E_PMDocument_2E_total_cache!
  }



//---------------------------------------------------------------------------------------------------------------------*

}


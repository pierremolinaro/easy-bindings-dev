
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
  //    init                                                                                                           *
  //-------------------------------------------------------------------------------------------------------------------*

  override init () {
    super.init ()
  }
  
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

  var rootObject : MyRootEntity {
    get {
      return mRootObject as MyRootEntity
    }
  }

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
  //--------------------------- Transient observers
  //--------------------------- Array controller as observers
    rootObject.addObserverOf_mNames (triggerObjectFor_document_2E_PMDocument_2E_nameController)
  //--------------------------- Array controller
    nameController = ArrayController_MyRootEntity_mNames (
      object:rootObject,
      tableView:mNamesTableView,
      file:__FILE__,
      line:__LINE__
    )
  //--------------------------- Simple controller
    mControllerArray.addObject (Controller_ArrayController_MyRootEntity_mNames_canRemove_PMButton_enabled (object:nameController, outlet:removePathButton, file:__FILE__, line:__LINE__))
    mControllerArray.addObject (Controller_MyRootEntity_mNames_count_PMTextField_value (object:rootObject, outlet:countItemTextField, file:__FILE__, line:__LINE__, sendContinously:false))
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



//---------------------------------------------------------------------------------------------------------------------*

}


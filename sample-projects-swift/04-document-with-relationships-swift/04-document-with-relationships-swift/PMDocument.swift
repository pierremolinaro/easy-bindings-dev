
import Cocoa

//---------------------------------------------------------------------------------------------------------------------*

@objc(PMDocument) class PMDocument : PMManagedDocument, PMUserClassName {

  //-------------------------------------------------------------------------------------------------------------------*
  //    Outlets                                                                                                        *
  //-------------------------------------------------------------------------------------------------------------------*

  @IBOutlet var addPathButton : PMButton?
  @IBOutlet var canRemoveTextField : PMReadOnlyTextField?
  @IBOutlet var countItemMessageTextField : PMReadOnlyTextField?
  @IBOutlet var countItemTextField : PMReadOnlyIntField?
  @IBOutlet var mNamesTableView : PMTableView?
  @IBOutlet var removePathButton : PMButton?
  @IBOutlet var totalTextField : PMReadOnlyIntField?

  //-------------------------------------------------------------------------------------------------------------------*
  //    Properties                                                                                                     *
  //-------------------------------------------------------------------------------------------------------------------*


  //-------------------------------------------------------------------------------------------------------------------*
  //    Transient properties                                                                                           *
  //-------------------------------------------------------------------------------------------------------------------*

  var canRemoveString = PMTransientProperty_String (PMTransientIndex.k_document_2E_PMDocument_2E_canRemoveString)
  var countItemMessage = PMTransientProperty_String (PMTransientIndex.k_document_2E_PMDocument_2E_countItemMessage)
  var total = PMTransientProperty_Int (PMTransientIndex.k_document_2E_PMDocument_2E_total)

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

  var rootObject : MyRootEntity { get { return mRootObject as! MyRootEntity } }

  //-------------------------------------------------------------------------------------------------------------------*
  //    Array controller: nameController                                                                               *
  //-------------------------------------------------------------------------------------------------------------------*
  
  private var nameController : ArrayController_MyRootEntity_mNames? = nil

  func document_2E_PMDocument_2E_nameController_noteDidChange () {
    nameController?.modelDidChange ()
  }

  func document_2E_PMDocument_2E_nameController_trigger () {
    nameController?.display ()
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    windowControllerDidLoadNib                                                                                     *
  //-------------------------------------------------------------------------------------------------------------------*

  override func windowControllerDidLoadNib (aController: NSWindowController) {
    super.windowControllerDidLoadNib (aController)
  //--------------------------- Outlet checking
    if nil == addPathButton {
      presentErrorWindow (__FILE__, __LINE__, "the 'addPathButton' outlet is nil") ;
    }else if !addPathButton!.isKindOfClass (PMButton) {
      presentErrorWindow (__FILE__, __LINE__, "the 'addPathButton' outlet is not an instance of 'PMButton'") ;
    }
    if nil == canRemoveTextField {
      presentErrorWindow (__FILE__, __LINE__, "the 'canRemoveTextField' outlet is nil") ;
    }else if !canRemoveTextField!.isKindOfClass (PMReadOnlyTextField) {
      presentErrorWindow (__FILE__, __LINE__, "the 'canRemoveTextField' outlet is not an instance of 'PMReadOnlyTextField'") ;
    }
    if nil == countItemMessageTextField {
      presentErrorWindow (__FILE__, __LINE__, "the 'countItemMessageTextField' outlet is nil") ;
    }else if !countItemMessageTextField!.isKindOfClass (PMReadOnlyTextField) {
      presentErrorWindow (__FILE__, __LINE__, "the 'countItemMessageTextField' outlet is not an instance of 'PMReadOnlyTextField'") ;
    }
    if nil == countItemTextField {
      presentErrorWindow (__FILE__, __LINE__, "the 'countItemTextField' outlet is nil") ;
    }else if !countItemTextField!.isKindOfClass (PMReadOnlyIntField) {
      presentErrorWindow (__FILE__, __LINE__, "the 'countItemTextField' outlet is not an instance of 'PMReadOnlyIntField'") ;
    }
    if nil == mNamesTableView {
      presentErrorWindow (__FILE__, __LINE__, "the 'mNamesTableView' outlet is nil") ;
    }else if !mNamesTableView!.isKindOfClass (PMTableView) {
      presentErrorWindow (__FILE__, __LINE__, "the 'mNamesTableView' outlet is not an instance of 'PMTableView'") ;
    }
    if nil == removePathButton {
      presentErrorWindow (__FILE__, __LINE__, "the 'removePathButton' outlet is nil") ;
    }else if !removePathButton!.isKindOfClass (PMButton) {
      presentErrorWindow (__FILE__, __LINE__, "the 'removePathButton' outlet is not an instance of 'PMButton'") ;
    }
    if nil == totalTextField {
      presentErrorWindow (__FILE__, __LINE__, "the 'totalTextField' outlet is nil") ;
    }else if !totalTextField!.isKindOfClass (PMReadOnlyIntField) {
      presentErrorWindow (__FILE__, __LINE__, "the 'totalTextField' outlet is not an instance of 'PMReadOnlyIntField'") ;
    }
  //--------------------------- Array controller
    nameController = ArrayController_MyRootEntity_mNames (
      object:rootObject,
      tableView:mNamesTableView,
      file:__FILE__,
      line:__LINE__
    )
  //--- Install compute functions for transients
    canRemoveString.computeFunction = {return compute_PMDocument_canRemoveString ((self.nameController != nil) ? (self.nameController?.canRemove)! : false)}
    countItemMessage.computeFunction = {return compute_PMDocument_countItemMessage (self.rootObject.mNames.prop.count)}
    total.computeFunction = {return compute_PMDocument_total (self.rootObject.mNames)}
  //--- Install property observers for transients
    nameController?.canRemove.addObserver (canRemoveString.event, inTrigger:true)
    rootObject.mNames.addObserver (countItemMessage.event, inTrigger:true)
    rootObject.mNames.addObserverOf_aValue (total.event, inTrigger:true)
  //--- Install bindings
    canRemoveTextField?.bind_readOnlyValue (self.canRemoveString, file:__FILE__, line:__LINE__)
    countItemMessageTextField?.bind_readOnlyValue (self.countItemMessage, file:__FILE__, line:__LINE__)
    countItemTextField?.bind_readOnlyValue (rootObject.mNames, file:__FILE__, line:__LINE__)
    totalTextField?.bind_readOnlyValue (self.total, file:__FILE__, line:__LINE__)
  //--------------------------- Array controller as observers
 //   rootObject.mNames.addObserver (PMEvent_document_2E_PMDocument_2E_nameController (object:self), inTrigger:true)
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
  //--- Unbind
    canRemoveTextField?.unbind_readOnlyValue ()
    countItemMessageTextField?.unbind_readOnlyValue ()
    countItemTextField?.unbind_readOnlyValue ()
    totalTextField?.unbind_readOnlyValue ()
  //--------------------------- Remove controllers
    nameController?.unregister ()
  //--------------------------- Remove targets / actions
    addPathButton?.target = nil
    removePathButton?.target = nil
  //---
    super.removeWindowController (inWindowController)
  }


//---------------------------------------------------------------------------------------------------------------------*

}


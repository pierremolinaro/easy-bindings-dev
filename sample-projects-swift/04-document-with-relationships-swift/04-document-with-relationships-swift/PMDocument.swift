
import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(PMDocument) class PMDocument : PMManagedDocument, PMUserClassName {

  //-------------------------------------------------------------------------------------------------------------------*
  //    Outlets                                                                                                        *
  //-------------------------------------------------------------------------------------------------------------------*

  @IBOutlet var addPathButton : PMButton?
  @IBOutlet var canRemoveTextField : PMReadOnlyTextField?
  @IBOutlet var countItemMessageTextField : PMReadOnlyTextField?
  @IBOutlet var countItemTextField : PMReadOnlyIntField?
  @IBOutlet var decrementButton : PMButton?
  @IBOutlet var evenValueTextField : PMReadOnlyTextField?
  @IBOutlet var incrementButton : PMButton?
  @IBOutlet var mNamesTableView : PMTableView?
  @IBOutlet var mOtherTableView : PMTableView?
  @IBOutlet var removePathButton : PMButton?
  @IBOutlet var totalTextField : PMReadOnlyIntField?

  //-------------------------------------------------------------------------------------------------------------------*
  //    Properties                                                                                                     *
  //-------------------------------------------------------------------------------------------------------------------*


  //-------------------------------------------------------------------------------------------------------------------*
  //    Transient properties                                                                                           *
  //-------------------------------------------------------------------------------------------------------------------*

  private var evenValueString = PMTransientProperty_String ()
  private var canRemoveString = PMTransientProperty_String ()
  private var countItemMessage = PMTransientProperty_String ()
  private var total = PMTransientProperty_Int ()

  //-------------------------------------------------------------------------------------------------------------------*
  //    Array Controllers                                                                                              *
  //-------------------------------------------------------------------------------------------------------------------*

  private var nameController = ArrayController_PMDocument_nameController ()
  private var otherController = ArrayController_PMDocument_otherController ()

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
  //    windowControllerDidLoadNib                                                                                     *
  //-------------------------------------------------------------------------------------------------------------------*

  override func windowControllerDidLoadNib (aController: NSWindowController) {
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
    if nil == decrementButton {
      presentErrorWindow (__FILE__, __LINE__, "the 'decrementButton' outlet is nil") ;
    }else if !decrementButton!.isKindOfClass (PMButton) {
      presentErrorWindow (__FILE__, __LINE__, "the 'decrementButton' outlet is not an instance of 'PMButton'") ;
    }
    if nil == evenValueTextField {
      presentErrorWindow (__FILE__, __LINE__, "the 'evenValueTextField' outlet is nil") ;
    }else if !evenValueTextField!.isKindOfClass (PMReadOnlyTextField) {
      presentErrorWindow (__FILE__, __LINE__, "the 'evenValueTextField' outlet is not an instance of 'PMReadOnlyTextField'") ;
    }
    if nil == incrementButton {
      presentErrorWindow (__FILE__, __LINE__, "the 'incrementButton' outlet is nil") ;
    }else if !incrementButton!.isKindOfClass (PMButton) {
      presentErrorWindow (__FILE__, __LINE__, "the 'incrementButton' outlet is not an instance of 'PMButton'") ;
    }
    if nil == mNamesTableView {
      presentErrorWindow (__FILE__, __LINE__, "the 'mNamesTableView' outlet is nil") ;
    }else if !mNamesTableView!.isKindOfClass (PMTableView) {
      presentErrorWindow (__FILE__, __LINE__, "the 'mNamesTableView' outlet is not an instance of 'PMTableView'") ;
    }
    if nil == mOtherTableView {
      presentErrorWindow (__FILE__, __LINE__, "the 'mOtherTableView' outlet is nil") ;
    }else if !mOtherTableView!.isKindOfClass (PMTableView) {
      presentErrorWindow (__FILE__, __LINE__, "the 'mOtherTableView' outlet is not an instance of 'PMTableView'") ;
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
    nameController.bind_modelAndView (
      rootObject.mNames,
      tableView:mNamesTableView!,
      file:__FILE__,
      line:__LINE__
    )
    otherController.bind_modelAndView (
      rootObject.mNames,
      tableView:mOtherTableView!,
      file:__FILE__,
      line:__LINE__
    )
  //--- Install compute functions for transients
    evenValueString.computeFunction = {return compute_PMDocument_evenValueString (self.otherController.sortedArray.count.prop)}
    canRemoveString.computeFunction = {return compute_PMDocument_canRemoveString (self.nameController.selectionCount.prop)}
    countItemMessage.computeFunction = {return compute_PMDocument_countItemMessage (self.rootObject.mNames.count.prop)}
    total.computeFunction = {return compute_PMDocument_total (self.rootObject.mNames.prop)}
  //--- Install property observers for transients
    otherController.sortedArray.count.addObserver (evenValueString, postEvent:true)
    nameController.selectionCount.addObserver (canRemoveString, postEvent:true)
    rootObject.mNames.count.addObserver (countItemMessage, postEvent:true)
    self.rootObject.mNames.addObserverOf_aValue (total, postEvent:true)
  //--- Install regular bindings
    evenValueTextField?.bind_readOnlyValue (self.evenValueString, file:__FILE__, line:__LINE__)
    canRemoveTextField?.bind_readOnlyValue (self.canRemoveString, file:__FILE__, line:__LINE__)
    countItemTextField?.bind_readOnlyValue (self.rootObject.mNames.count, file:__FILE__, line:__LINE__)
    countItemMessageTextField?.bind_readOnlyValue (self.countItemMessage, file:__FILE__, line:__LINE__)
    totalTextField?.bind_readOnlyValue (self.total, file:__FILE__, line:__LINE__)
  //--- Install multiple bindings
    removePathButton?.bind_enabled (
      [self.nameController.selectionCount],
      computeFunction:{ (self.nameController.selectionCount.prop > 0) },
      file:__FILE__, line:__LINE__
    )
    incrementButton?.bind_enabled (
      [self.rootObject.mNames.count],
      computeFunction:{ (self.rootObject.mNames.count.prop > 0) },
      file:__FILE__, line:__LINE__
    )
    decrementButton?.bind_enabled (
      [self.rootObject.mNames.count],
      computeFunction:{ (self.rootObject.mNames.count.prop > 0) },
      file:__FILE__, line:__LINE__
    )
  //--------------------------- Array controller as observers
 // §   rootObject.mNames.addObserver (nameController, postEvent:true)
 // §   rootObject.mNames.addObserver (otherController, postEvent:true)
  //--------------------------- Set targets / actions
    addPathButton?.target = nameController
    addPathButton?.action = "add:"
    removePathButton?.target = nameController
    removePathButton?.action = "remove:"
    incrementButton?.target = self
    incrementButton?.action = "increment:"
    decrementButton?.target = self
    decrementButton?.action = "decrement:"
  //--------------------------- Update display
    super.windowControllerDidLoadNib (aController)
    flushOutletEvents ()
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //   removeWindowController                                                                                          *
  //-------------------------------------------------------------------------------------------------------------------*

  override func removeWindowController (inWindowController : NSWindowController) {
    undoManager?.removeAllActions ()
    undoManager = nil
  //--- Unbind regular bindings
    evenValueTextField?.unbind_readOnlyValue ()
    canRemoveTextField?.unbind_readOnlyValue ()
    countItemTextField?.unbind_readOnlyValue ()
    countItemMessageTextField?.unbind_readOnlyValue ()
    totalTextField?.unbind_readOnlyValue ()
  //--- Unbind multiple bindings
    removePathButton?.unbind_enabled ()
    incrementButton?.unbind_enabled ()
    decrementButton?.unbind_enabled ()
  //--- Uninstall compute functions for transients
    evenValueString.computeFunction = nil
    canRemoveString.computeFunction = nil
    countItemMessage.computeFunction = nil
    total.computeFunction = nil
  //--------------------------- Unbind array controllers
    nameController.unbind_modelAndView ()
    otherController.unbind_modelAndView ()
  //--- Uninstall property observers for transients
    otherController.sortedArray.count.removeObserver (evenValueString, postEvent:false)
    nameController.selectionCount.removeObserver (canRemoveString, postEvent:false)
    rootObject.mNames.count.removeObserver (countItemMessage, postEvent:false)
    self.rootObject.mNames.removeObserverOf_aValue (total, postEvent:false)
  //--------------------------- Remove targets / actions
    addPathButton?.target = nil
    removePathButton?.target = nil
    incrementButton?.target = nil
    decrementButton?.target = nil
  //---
    super.removeWindowController (inWindowController)
  }

//---------------------------------------------------------------------------------------------------------------------*

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


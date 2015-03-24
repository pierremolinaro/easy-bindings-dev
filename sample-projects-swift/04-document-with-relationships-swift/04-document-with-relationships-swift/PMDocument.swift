
import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(PMDocument) class PMDocument : PMManagedDocument, PMUserClassName {

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    Outlets                                                                                                        *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  @IBOutlet var addPathButton : PMButton?
  @IBOutlet var canRemoveTextField : PMReadOnlyTextField?
  @IBOutlet var countItemMessageTextField : PMReadOnlyTextField?
  @IBOutlet var countItemTextField : PMReadOnlyIntField?
  @IBOutlet var decrementButton : PMButton?
  @IBOutlet var evenValueTextField : PMReadOnlyTextField?
  @IBOutlet var incrementButton : PMButton?
  @IBOutlet var mNamesTableView : PMTableView?
  @IBOutlet var mOtherTableView : PMTableView?
  @IBOutlet var mSelectionCountTextField : PMReadOnlyTextField?
  @IBOutlet var mSelectionTableView : PMTableView?
  @IBOutlet var nameDetailTextField : PMTextField?
  @IBOutlet var removePathButton : PMButton?
  @IBOutlet var totalTextField : PMReadOnlyIntField?

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    Properties                                                                                                     *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*


  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    Transient properties                                                                                           *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  private var selectionCountString = PMTransientProperty_String ()
  private var evenValueString = PMTransientProperty_String ()
  private var canRemoveString = PMTransientProperty_String ()
  private var countItemMessage = PMTransientProperty_String ()
  private var total = PMTransientProperty_Int ()

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    Array Controllers                                                                                              *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  private var nameController = ArrayController_PMDocument_nameController ()
  private var otherController = ArrayController_PMDocument_otherController ()
  private var selController = ArrayController_PMDocument_selController ()

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    Selection Controllers                                                                                          *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  private var detailController = SelectionController_PMDocument_detailController ()

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    windowNibName                                                                                                  *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  override var windowNibName: String {
    return "PMDocument"
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    rootEntityClassName                                                                                            *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  override func rootEntityClassName () -> String {
    return "MyRootEntity"
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    rootObject                                                                                                     *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  var rootObject : MyRootEntity { get { return mRootObject as! MyRootEntity } }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    windowControllerDidLoadNib                                                                                     *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

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
    if nil == mSelectionCountTextField {
      presentErrorWindow (__FILE__, __LINE__, "the 'mSelectionCountTextField' outlet is nil") ;
    }else if !mSelectionCountTextField!.isKindOfClass (PMReadOnlyTextField) {
      presentErrorWindow (__FILE__, __LINE__, "the 'mSelectionCountTextField' outlet is not an instance of 'PMReadOnlyTextField'") ;
    }
    if nil == mSelectionTableView {
      presentErrorWindow (__FILE__, __LINE__, "the 'mSelectionTableView' outlet is nil") ;
    }else if !mSelectionTableView!.isKindOfClass (PMTableView) {
      presentErrorWindow (__FILE__, __LINE__, "the 'mSelectionTableView' outlet is not an instance of 'PMTableView'") ;
    }
    if nil == nameDetailTextField {
      presentErrorWindow (__FILE__, __LINE__, "the 'nameDetailTextField' outlet is nil") ;
    }else if !nameDetailTextField!.isKindOfClass (PMTextField) {
      presentErrorWindow (__FILE__, __LINE__, "the 'nameDetailTextField' outlet is not an instance of 'PMTextField'") ;
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
      tableViewArray:[mNamesTableView!],
      file:__FILE__,
      line:__LINE__
    )
    otherController.bind_modelAndView (
      rootObject.mNames,
      tableViewArray:[mOtherTableView!],
      file:__FILE__,
      line:__LINE__
    )
    selController.bind_modelAndView (
      nameController.selectedArray,
      tableViewArray:[mSelectionTableView!],
      file:__FILE__,
      line:__LINE__
    )
  //--------------------------- Selection controller
    detailController.bind_selection (
      nameController.selectedArray,
      file:__FILE__,
      line:__LINE__
    )
    selectionCountString.computeFunction = {
      let selectionKind = self.selController.sortedArray.count.prop.1
      if selectionKind == .singleSelection {
        return (compute_PMDocument_selectionCountString (self.selController.sortedArray.count.prop.0), .singleSelection)
      }else{
        return ("", selectionKind)
      }
    }
    evenValueString.computeFunction = {
      let selectionKind = self.otherController.sortedArray.count.prop.1
      if selectionKind == .singleSelection {
        return (compute_PMDocument_evenValueString (self.otherController.sortedArray.count.prop.0), .singleSelection)
      }else{
        return ("", selectionKind)
      }
    }
    canRemoveString.computeFunction = {
      let selectionKind = self.nameController.selectedArray.count.prop.1
      if selectionKind == .singleSelection {
        return (compute_PMDocument_canRemoveString (self.nameController.selectedArray.count.prop.0), .singleSelection)
      }else{
        return ("", selectionKind)
      }
    }
    countItemMessage.computeFunction = {
      let selectionKind = self.rootObject.mNames.count.prop.1
      if selectionKind == .singleSelection {
        return (compute_PMDocument_countItemMessage (self.rootObject.mNames.count.prop.0), .singleSelection)
      }else{
        return ("", selectionKind)
      }
    }
    total.computeFunction = {
      let selectionKind = self.rootObject.mNames.prop.1
      if selectionKind == .singleSelection {
        return (compute_PMDocument_total (self.rootObject.mNames.prop.0), .singleSelection)
      }else{
        return (0, selectionKind)
      }
    }
  //--- Install property observers for transients
    selController.sortedArray.count.addObserver (selectionCountString, postEvent:true)
    otherController.sortedArray.count.addObserver (evenValueString, postEvent:true)
    nameController.selectedArray.count.addObserver (canRemoveString, postEvent:true)
    rootObject.mNames.count.addObserver (countItemMessage, postEvent:true)
    self.rootObject.mNames.addObserverOf_aValue (total, postEvent:true)
  //--- Install regular bindings
    mSelectionCountTextField?.bind_readOnlyValue (self.selectionCountString, file:__FILE__, line:__LINE__)
    evenValueTextField?.bind_readOnlyValue (self.evenValueString, file:__FILE__, line:__LINE__)
    canRemoveTextField?.bind_readOnlyValue (self.canRemoveString, file:__FILE__, line:__LINE__)
    countItemTextField?.bind_readOnlyValue (self.rootObject.mNames.count, file:__FILE__, line:__LINE__)
    countItemMessageTextField?.bind_readOnlyValue (self.countItemMessage, file:__FILE__, line:__LINE__)
    totalTextField?.bind_readOnlyValue (self.total, file:__FILE__, line:__LINE__)
    nameDetailTextField?.bind_value (self.detailController.name, file:__FILE__, line:__LINE__, sendContinously:true)
  //--- Install multiple bindings
    removePathButton?.bind_enabled (
      [self.nameController.selectedArray.count],
      computeFunction:{
        let selection = self.nameController.selectedArray.count.prop.1
        if selection == .singleSelection {
          return ((self.nameController.selectedArray.count.prop.0 > 0), .singleSelection)
        }else{
          return (false, selection)
        }
      },
      file:__FILE__, line:__LINE__
    )
    incrementButton?.bind_enabled (
      [self.rootObject.mNames.count],
      computeFunction:{
        let selection = self.rootObject.mNames.count.prop.1
        if selection == .singleSelection {
          return ((self.rootObject.mNames.count.prop.0 > 0), .singleSelection)
        }else{
          return (false, selection)
        }
      },
      file:__FILE__, line:__LINE__
    )
    decrementButton?.bind_enabled (
      [self.rootObject.mNames.count],
      computeFunction:{
        let selection = self.rootObject.mNames.count.prop.1
        if selection == .singleSelection {
          return ((self.rootObject.mNames.count.prop.0 > 0), .singleSelection)
        }else{
          return (false, selection)
        }
      },
      file:__FILE__, line:__LINE__
    )
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

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //   removeWindowController                                                                                          *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  private func removeUserInterface () {
    undoManager?.removeAllActions ()
    undoManager = nil
  //--- Unbind regular bindings
    mSelectionCountTextField?.unbind_readOnlyValue ()
    evenValueTextField?.unbind_readOnlyValue ()
    canRemoveTextField?.unbind_readOnlyValue ()
    countItemTextField?.unbind_readOnlyValue ()
    countItemMessageTextField?.unbind_readOnlyValue ()
    totalTextField?.unbind_readOnlyValue ()
    nameDetailTextField?.unbind_value ()
  //--- Unbind multiple bindings
    removePathButton?.unbind_enabled ()
    incrementButton?.unbind_enabled ()
    decrementButton?.unbind_enabled ()
  //--- Uninstall compute functions for transients
    selectionCountString.computeFunction = nil
    evenValueString.computeFunction = nil
    canRemoveString.computeFunction = nil
    countItemMessage.computeFunction = nil
    total.computeFunction = nil
  //--------------------------- Unbind array controllers
    nameController.unbind_modelAndView ()
    otherController.unbind_modelAndView ()
    selController.unbind_modelAndView ()
  //--------------------------- Unbind selection controllers
    detailController.unbind_selection ()
  //--- Uninstall property observers for transients
    selController.sortedArray.count.removeObserver (selectionCountString, postEvent:false)
    otherController.sortedArray.count.removeObserver (evenValueString, postEvent:false)
    nameController.selectedArray.count.removeObserver (canRemoveString, postEvent:false)
    rootObject.mNames.count.removeObserver (countItemMessage, postEvent:false)
    self.rootObject.mNames.removeObserverOf_aValue (total, postEvent:false)
  //--------------------------- Remove targets / actions
    addPathButton?.target = nil
    removePathButton?.target = nil
    incrementButton?.target = nil
    decrementButton?.target = nil
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  override func removeWindowController (inWindowController : NSWindowController) {
    dispatch_after (DISPATCH_TIME_NOW, dispatch_get_main_queue()) { self.removeUserInterface () }
    super.removeWindowController (inWindowController)
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


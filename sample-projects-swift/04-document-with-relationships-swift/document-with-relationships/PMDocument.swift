
import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(PMDocument) class PMDocument : PMManagedDocument, PMUserClassName {

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    Outlets                                                                                                        *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  @IBOutlet var addPathButton : PMButton?
  @IBOutlet var canRemoveTextField : PMTextFieldObserver?
  @IBOutlet var countItemMessageTextField : PMTextFieldObserver?
  @IBOutlet var countItemTextField : PMIntFieldObserver?
  @IBOutlet var decrementButton : PMButton?
  @IBOutlet var evenValueTextField : PMTextFieldObserver?
  @IBOutlet var incrementButton : PMButton?
  @IBOutlet var mNamesTableView : PMTableView?
  @IBOutlet var mOtherTableView : PMTableView?
  @IBOutlet var mSelectionCountTextField : PMTextFieldObserver?
  @IBOutlet var mSelectionTableView : PMTableView?
  @IBOutlet var nameDetailTextField : PMTextField?
  @IBOutlet var removePathButton : PMButton?
  @IBOutlet var totalTextField : PMIntFieldObserver?
  @IBOutlet var valueDetailTextField : PMIntField?

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
    }else if !canRemoveTextField!.isKindOfClass (PMTextFieldObserver) {
      presentErrorWindow (__FILE__, __LINE__, "the 'canRemoveTextField' outlet is not an instance of 'PMTextFieldObserver'") ;
    }
    if nil == countItemMessageTextField {
      presentErrorWindow (__FILE__, __LINE__, "the 'countItemMessageTextField' outlet is nil") ;
    }else if !countItemMessageTextField!.isKindOfClass (PMTextFieldObserver) {
      presentErrorWindow (__FILE__, __LINE__, "the 'countItemMessageTextField' outlet is not an instance of 'PMTextFieldObserver'") ;
    }
    if nil == countItemTextField {
      presentErrorWindow (__FILE__, __LINE__, "the 'countItemTextField' outlet is nil") ;
    }else if !countItemTextField!.isKindOfClass (PMIntFieldObserver) {
      presentErrorWindow (__FILE__, __LINE__, "the 'countItemTextField' outlet is not an instance of 'PMIntFieldObserver'") ;
    }
    if nil == decrementButton {
      presentErrorWindow (__FILE__, __LINE__, "the 'decrementButton' outlet is nil") ;
    }else if !decrementButton!.isKindOfClass (PMButton) {
      presentErrorWindow (__FILE__, __LINE__, "the 'decrementButton' outlet is not an instance of 'PMButton'") ;
    }
    if nil == evenValueTextField {
      presentErrorWindow (__FILE__, __LINE__, "the 'evenValueTextField' outlet is nil") ;
    }else if !evenValueTextField!.isKindOfClass (PMTextFieldObserver) {
      presentErrorWindow (__FILE__, __LINE__, "the 'evenValueTextField' outlet is not an instance of 'PMTextFieldObserver'") ;
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
    }else if !mSelectionCountTextField!.isKindOfClass (PMTextFieldObserver) {
      presentErrorWindow (__FILE__, __LINE__, "the 'mSelectionCountTextField' outlet is not an instance of 'PMTextFieldObserver'") ;
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
    }else if !totalTextField!.isKindOfClass (PMIntFieldObserver) {
      presentErrorWindow (__FILE__, __LINE__, "the 'totalTextField' outlet is not an instance of 'PMIntFieldObserver'") ;
    }
    if nil == valueDetailTextField {
      presentErrorWindow (__FILE__, __LINE__, "the 'valueDetailTextField' outlet is nil") ;
    }else if !valueDetailTextField!.isKindOfClass (PMIntField) {
      presentErrorWindow (__FILE__, __LINE__, "the 'valueDetailTextField' outlet is not an instance of 'PMIntField'") ;
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
  //--- Transient compute functions
    selectionCountString.computeFunction = { [weak self] in
      if let unwSelf = self {
        switch unwSelf.selController.sortedArray.count.prop {
        case .noSelection :
          return .noSelection
        case .multipleSelection :
          return .multipleSelection
        case .singleSelection (let v1) :
          return .singleSelection (compute_PMDocument_selectionCountString (v1))
        }
      }else{
        return .noSelection
      }
    }
    evenValueString.computeFunction = { [weak self] in
      if let unwSelf = self {
        switch unwSelf.otherController.sortedArray.count.prop {
        case .noSelection :
          return .noSelection
        case .multipleSelection :
          return .multipleSelection
        case .singleSelection (let v1) :
          return .singleSelection (compute_PMDocument_evenValueString (v1))
        }
      }else{
        return .noSelection
      }
    }
    canRemoveString.computeFunction = { [weak self] in
      if let unwSelf = self {
        switch unwSelf.nameController.selectedArray.count.prop {
        case .noSelection :
          return .noSelection
        case .multipleSelection :
          return .multipleSelection
        case .singleSelection (let v1) :
          return .singleSelection (compute_PMDocument_canRemoveString (v1))
        }
      }else{
        return .noSelection
      }
    }
    countItemMessage.computeFunction = { [weak self] in
      if let unwSelf = self {
        switch unwSelf.rootObject.mNames.count.prop {
        case .noSelection :
          return .noSelection
        case .multipleSelection :
          return .multipleSelection
        case .singleSelection (let v1) :
          return .singleSelection (compute_PMDocument_countItemMessage (v1))
        }
      }else{
        return .noSelection
      }
    }
    total.computeFunction = { [weak self] in
      if let unwSelf = self {
        switch unwSelf.rootObject.mNames.prop {
        case .noSelection :
          return .noSelection
        case .multipleSelection :
          return .multipleSelection
        case .singleSelection (let v1) :
          return .singleSelection (compute_PMDocument_total (v1))
        }
      }else{
        return .noSelection
      }
    }
  //--- Install property observers for transients
    selController.sortedArray.count.addObserver (selectionCountString, postEvent:true)
    otherController.sortedArray.count.addObserver (evenValueString, postEvent:true)
    nameController.selectedArray.count.addObserver (canRemoveString, postEvent:true)
    rootObject.mNames.count.addObserver (countItemMessage, postEvent:true)
    self.rootObject.mNames.addObserverOf_aValue (total, postEvent:true)
  //--- Install regular bindings
    mSelectionCountTextField?.bind_valueObserver (self.selectionCountString, file:__FILE__, line:__LINE__)
    evenValueTextField?.bind_valueObserver (self.evenValueString, file:__FILE__, line:__LINE__)
    canRemoveTextField?.bind_valueObserver (self.canRemoveString, file:__FILE__, line:__LINE__)
    countItemTextField?.bind_valueObserver (self.rootObject.mNames.count, file:__FILE__, line:__LINE__, autoFormatter:false)
    countItemMessageTextField?.bind_valueObserver (self.countItemMessage, file:__FILE__, line:__LINE__)
    totalTextField?.bind_valueObserver (self.total, file:__FILE__, line:__LINE__, autoFormatter:false)
    nameDetailTextField?.bind_value (self.detailController.name, file:__FILE__, line:__LINE__, sendContinously:true)
    valueDetailTextField?.bind_value (self.detailController.aValue, file:__FILE__, line:__LINE__, sendContinously:true, autoFormatter:false)
  //--- Install multiple bindings
    removePathButton?.bind_enabled (
      [self.nameController.selectedArray.count],
      computeFunction:{
        return (self.nameController.selectedArray.count.prop > PMProperty.singleSelection (0))
      },
      file:__FILE__, line:__LINE__
    )
    incrementButton?.bind_enabled (
      [self.rootObject.mNames.count],
      computeFunction:{
        return (self.rootObject.mNames.count.prop > PMProperty.singleSelection (0))
      },
      file:__FILE__, line:__LINE__
    )
    decrementButton?.bind_enabled (
      [self.rootObject.mNames.count],
      computeFunction:{
        return (self.rootObject.mNames.count.prop > PMProperty.singleSelection (0))
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
    mSelectionCountTextField?.unbind_valueObserver ()
    evenValueTextField?.unbind_valueObserver ()
    canRemoveTextField?.unbind_valueObserver ()
    countItemTextField?.unbind_valueObserver ()
    countItemMessageTextField?.unbind_valueObserver ()
    totalTextField?.unbind_valueObserver ()
    nameDetailTextField?.unbind_value ()
    valueDetailTextField?.unbind_value ()
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

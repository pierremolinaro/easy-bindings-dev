
import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(PMDocument) class PMDocument : EBManagedDocument {

  //····················································································································
  //    Outlets
  //····················································································································

  @IBOutlet var myColorWell : EBColorWell?
  @IBOutlet var myTextConcatField : EBTextFieldObserver?
  @IBOutlet var myTextField : EBTextField?
  @IBOutlet var myTextMajField : EBTextFieldObserver?
  @IBOutlet var myTextMinField : EBTextFieldObserver?

  //····················································································································
  //    Properties
  //····················································································································


  //····················································································································
  //    Transient properties
  //····················································································································


  //····················································································································
  //    Array Controllers
  //····················································································································


  //····················································································································
  //    Selection Controllers
  //····················································································································


  //····················································································································
  //    populateExplorerWindow
  //····················································································································

  override func populateExplorerWindow (inout y : CGFloat, view : NSView) {
    super.populateExplorerWindow (&y, view:view)
  }

  //····················································································································
  //    windowNibName
  //····················································································································

  override var windowNibName: String {
    return "PMDocument"
  }

  //····················································································································
  //    rootEntityClassName
  //····················································································································

  override func rootEntityClassName () -> String {
    return "MyRootEntity"
  }

  //····················································································································
  //    rootObject
  //····················································································································

  var rootObject : MyRootEntity { get { return mRootObject as! MyRootEntity } }

  //····················································································································
  //    windowControllerDidLoadNib
  //····················································································································

  override func windowControllerDidLoadNib (aController: NSWindowController) {
  //--------------------------- Outlet checking
    if nil == myColorWell {
      presentErrorWindow (__FILE__,
                              line:__LINE__,
                              errorMessage:"the 'myColorWell' outlet is nil") ;
    }else if !myColorWell!.isKindOfClass (EBColorWell) {
      presentErrorWindow (__FILE__,
                              line:__LINE__,
                              errorMessage:"the 'myColorWell' outlet is not an instance of 'EBColorWell'") ;
    }
    if nil == myTextConcatField {
      presentErrorWindow (__FILE__,
                              line:__LINE__,
                              errorMessage:"the 'myTextConcatField' outlet is nil") ;
    }else if !myTextConcatField!.isKindOfClass (EBTextFieldObserver) {
      presentErrorWindow (__FILE__,
                              line:__LINE__,
                              errorMessage:"the 'myTextConcatField' outlet is not an instance of 'EBTextFieldObserver'") ;
    }
    if nil == myTextField {
      presentErrorWindow (__FILE__,
                              line:__LINE__,
                              errorMessage:"the 'myTextField' outlet is nil") ;
    }else if !myTextField!.isKindOfClass (EBTextField) {
      presentErrorWindow (__FILE__,
                              line:__LINE__,
                              errorMessage:"the 'myTextField' outlet is not an instance of 'EBTextField'") ;
    }
    if nil == myTextMajField {
      presentErrorWindow (__FILE__,
                              line:__LINE__,
                              errorMessage:"the 'myTextMajField' outlet is nil") ;
    }else if !myTextMajField!.isKindOfClass (EBTextFieldObserver) {
      presentErrorWindow (__FILE__,
                              line:__LINE__,
                              errorMessage:"the 'myTextMajField' outlet is not an instance of 'EBTextFieldObserver'") ;
    }
    if nil == myTextMinField {
      presentErrorWindow (__FILE__,
                              line:__LINE__,
                              errorMessage:"the 'myTextMinField' outlet is nil") ;
    }else if !myTextMinField!.isKindOfClass (EBTextFieldObserver) {
      presentErrorWindow (__FILE__,
                              line:__LINE__,
                              errorMessage:"the 'myTextMinField' outlet is not an instance of 'EBTextFieldObserver'") ;
    }
  //--------------------------- Array controller
  //--------------------------- Selection controller
  //--- Transient compute functions
  //--- Install property observers for transients
  //--- Install regular bindings
    myTextField?.bind_value (self.rootObject.myString, file:__FILE__, line:__LINE__, sendContinously:true)
    myTextMajField?.bind_valueObserver (self.rootObject.myStringMaj, file:__FILE__, line:__LINE__)
    myTextMinField?.bind_valueObserver (self.rootObject.myStringMin, file:__FILE__, line:__LINE__)
    myTextConcatField?.bind_valueObserver (self.rootObject.myStringConcat, file:__FILE__, line:__LINE__)
    myColorWell?.bind_color (self.rootObject.myColor, file:__FILE__, line:__LINE__, sendContinously:false)
  //--- Install multiple bindings
  //--------------------------- Set targets / actions
  //--------------------------- Update display
    super.windowControllerDidLoadNib (aController)
    flushOutletEvents ()
  }

  //····················································································································
  //   removeWindowController
  //····················································································································

  override func removeUserInterface () {
  //--- Unbind regular bindings
    myTextField?.unbind_value ()
    myTextMajField?.unbind_valueObserver ()
    myTextMinField?.unbind_valueObserver ()
    myTextConcatField?.unbind_valueObserver ()
    myColorWell?.unbind_color ()
  //--- Unbind multiple bindings
  //--- Uninstall compute functions for transients
  //--------------------------- Unbind array controllers
  //--------------------------- Unbind selection controllers
  //--- Uninstall property observers for transients
  //--------------------------- Remove targets / actions
  }

  //····················································································································

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*



import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(PMDocument) class PMDocument : PMManagedDocument, PMUserClassName {

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    Outlets                                                                                                        *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  @IBOutlet var myColorWell : PMColorWell?
  @IBOutlet var myMatrix : PMMatrix?
  @IBOutlet var myTextConcatField : PMReadOnlyTextField?
  @IBOutlet var myTextField : PMTextField?
  @IBOutlet var myTextMajField : PMReadOnlyTextField?
  @IBOutlet var myTextMinField : PMReadOnlyTextField?

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    Properties                                                                                                     *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*


  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    Transient properties                                                                                           *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*


  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    Array Controllers                                                                                              *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*


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
    if nil == myColorWell {
      presentErrorWindow (__FILE__, __LINE__, "the 'myColorWell' outlet is nil") ;
    }else if !myColorWell!.isKindOfClass (PMColorWell) {
      presentErrorWindow (__FILE__, __LINE__, "the 'myColorWell' outlet is not an instance of 'PMColorWell'") ;
    }
    if nil == myMatrix {
      presentErrorWindow (__FILE__, __LINE__, "the 'myMatrix' outlet is nil") ;
    }else if !myMatrix!.isKindOfClass (PMMatrix) {
      presentErrorWindow (__FILE__, __LINE__, "the 'myMatrix' outlet is not an instance of 'PMMatrix'") ;
    }
    if nil == myTextConcatField {
      presentErrorWindow (__FILE__, __LINE__, "the 'myTextConcatField' outlet is nil") ;
    }else if !myTextConcatField!.isKindOfClass (PMReadOnlyTextField) {
      presentErrorWindow (__FILE__, __LINE__, "the 'myTextConcatField' outlet is not an instance of 'PMReadOnlyTextField'") ;
    }
    if nil == myTextField {
      presentErrorWindow (__FILE__, __LINE__, "the 'myTextField' outlet is nil") ;
    }else if !myTextField!.isKindOfClass (PMTextField) {
      presentErrorWindow (__FILE__, __LINE__, "the 'myTextField' outlet is not an instance of 'PMTextField'") ;
    }
    if nil == myTextMajField {
      presentErrorWindow (__FILE__, __LINE__, "the 'myTextMajField' outlet is nil") ;
    }else if !myTextMajField!.isKindOfClass (PMReadOnlyTextField) {
      presentErrorWindow (__FILE__, __LINE__, "the 'myTextMajField' outlet is not an instance of 'PMReadOnlyTextField'") ;
    }
    if nil == myTextMinField {
      presentErrorWindow (__FILE__, __LINE__, "the 'myTextMinField' outlet is nil") ;
    }else if !myTextMinField!.isKindOfClass (PMReadOnlyTextField) {
      presentErrorWindow (__FILE__, __LINE__, "the 'myTextMinField' outlet is not an instance of 'PMReadOnlyTextField'") ;
    }
  //--------------------------- Array controller
  //--- Install property observers for transients
  //--- Install regular bindings
    myTextField?.bind_value (self.rootObject.myString, file:__FILE__, line:__LINE__, sendContinously:true)
    myTextMajField?.bind_readOnlyValue (self.rootObject.myStringMaj, file:__FILE__, line:__LINE__)
    myTextMinField?.bind_readOnlyValue (self.rootObject.myStringMin, file:__FILE__, line:__LINE__)
    myTextConcatField?.bind_readOnlyValue (self.rootObject.myStringConcat, file:__FILE__, line:__LINE__)
    myMatrix?.bind_selectedIndex (self.rootObject.myEnumeration, file:__FILE__, line:__LINE__)
    myColorWell?.bind_color (self.rootObject.myColor, file:__FILE__, line:__LINE__, sendContinously:false)
  //--- Install multiple bindings
  //--------------------------- Set targets / actions
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
    myTextField?.unbind_value ()
    myTextMajField?.unbind_readOnlyValue ()
    myTextMinField?.unbind_readOnlyValue ()
    myTextConcatField?.unbind_readOnlyValue ()
    myMatrix?.unbind_selectedIndex ()
    myColorWell?.unbind_color ()
  //--- Unbind multiple bindings
  //--- Uninstall compute functions for transients
  //--------------------------- Unbind array controllers
  //--- Uninstall property observers for transients
  //--------------------------- Remove targets / actions
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  override func removeWindowController (inWindowController : NSWindowController) {
    dispatch_after (DISPATCH_TIME_NOW, dispatch_get_main_queue()) { self.removeUserInterface () }
    super.removeWindowController (inWindowController)
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


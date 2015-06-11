
import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(PMDocument) class PMDocument : PMManagedDocument {

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    Outlets                                                                                                        *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  @IBOutlet var myColorWell : PMColorWell?
  @IBOutlet var myMatrix : PMMatrix?
  @IBOutlet var myTextConcatField : PMTextFieldObserver?
  @IBOutlet var myTextField : PMTextField?
  @IBOutlet var myTextMajField : PMTextFieldObserver?
  @IBOutlet var myTextMinField : PMTextFieldObserver?

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
  //    Selection Controllers                                                                                          *
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
      presentErrorWindow (__FILE__,
                              line:__LINE__,
                              errorMessage:"the 'myColorWell' outlet is nil") ;
    }else if !myColorWell!.isKindOfClass (PMColorWell) {
      presentErrorWindow (__FILE__,
                              line:__LINE__,
                              errorMessage:"the 'myColorWell' outlet is not an instance of 'PMColorWell'") ;
    }
    if nil == myMatrix {
      presentErrorWindow (__FILE__,
                              line:__LINE__,
                              errorMessage:"the 'myMatrix' outlet is nil") ;
    }else if !myMatrix!.isKindOfClass (PMMatrix) {
      presentErrorWindow (__FILE__,
                              line:__LINE__,
                              errorMessage:"the 'myMatrix' outlet is not an instance of 'PMMatrix'") ;
    }
    if nil == myTextConcatField {
      presentErrorWindow (__FILE__,
                              line:__LINE__,
                              errorMessage:"the 'myTextConcatField' outlet is nil") ;
    }else if !myTextConcatField!.isKindOfClass (PMTextFieldObserver) {
      presentErrorWindow (__FILE__,
                              line:__LINE__,
                              errorMessage:"the 'myTextConcatField' outlet is not an instance of 'PMTextFieldObserver'") ;
    }
    if nil == myTextField {
      presentErrorWindow (__FILE__,
                              line:__LINE__,
                              errorMessage:"the 'myTextField' outlet is nil") ;
    }else if !myTextField!.isKindOfClass (PMTextField) {
      presentErrorWindow (__FILE__,
                              line:__LINE__,
                              errorMessage:"the 'myTextField' outlet is not an instance of 'PMTextField'") ;
    }
    if nil == myTextMajField {
      presentErrorWindow (__FILE__,
                              line:__LINE__,
                              errorMessage:"the 'myTextMajField' outlet is nil") ;
    }else if !myTextMajField!.isKindOfClass (PMTextFieldObserver) {
      presentErrorWindow (__FILE__,
                              line:__LINE__,
                              errorMessage:"the 'myTextMajField' outlet is not an instance of 'PMTextFieldObserver'") ;
    }
    if nil == myTextMinField {
      presentErrorWindow (__FILE__,
                              line:__LINE__,
                              errorMessage:"the 'myTextMinField' outlet is nil") ;
    }else if !myTextMinField!.isKindOfClass (PMTextFieldObserver) {
      presentErrorWindow (__FILE__,
                              line:__LINE__,
                              errorMessage:"the 'myTextMinField' outlet is not an instance of 'PMTextFieldObserver'") ;
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

  override func removeUserInterface () {
  //--- Unbind regular bindings
    myTextField?.unbind_value ()
    myTextMajField?.unbind_valueObserver ()
    myTextMinField?.unbind_valueObserver ()
    myTextConcatField?.unbind_valueObserver ()
    myMatrix?.unbind_selectedIndex ()
    myColorWell?.unbind_color ()
  //--- Unbind multiple bindings
  //--- Uninstall compute functions for transients
  //--------------------------- Unbind array controllers
  //--------------------------- Unbind selection controllers
  //--- Uninstall property observers for transients
  //--------------------------- Remove targets / actions
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


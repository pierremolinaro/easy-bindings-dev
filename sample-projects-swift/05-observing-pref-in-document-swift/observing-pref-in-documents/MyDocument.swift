
import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(MyDocument) class MyDocument : PMManagedDocument {

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    Outlets                                                                                                        *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  @IBOutlet var docStringTextField : PMTextField?
  @IBOutlet var prefStringTextField : PMTextFieldObserver?
  @IBOutlet var prefTransientStringTextField : PMTextFieldObserver?
  @IBOutlet var transientConcatStringTextField : PMTextFieldObserver?

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
    return "MyDocument"
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
    if nil == docStringTextField {
      presentErrorWindow (__FILE__,
                              line:__LINE__,
                              errorMessage:"the 'docStringTextField' outlet is nil") ;
    }else if !docStringTextField!.isKindOfClass (PMTextField) {
      presentErrorWindow (__FILE__,
                              line:__LINE__,
                              errorMessage:"the 'docStringTextField' outlet is not an instance of 'PMTextField'") ;
    }
    if nil == prefStringTextField {
      presentErrorWindow (__FILE__,
                              line:__LINE__,
                              errorMessage:"the 'prefStringTextField' outlet is nil") ;
    }else if !prefStringTextField!.isKindOfClass (PMTextFieldObserver) {
      presentErrorWindow (__FILE__,
                              line:__LINE__,
                              errorMessage:"the 'prefStringTextField' outlet is not an instance of 'PMTextFieldObserver'") ;
    }
    if nil == prefTransientStringTextField {
      presentErrorWindow (__FILE__,
                              line:__LINE__,
                              errorMessage:"the 'prefTransientStringTextField' outlet is nil") ;
    }else if !prefTransientStringTextField!.isKindOfClass (PMTextFieldObserver) {
      presentErrorWindow (__FILE__,
                              line:__LINE__,
                              errorMessage:"the 'prefTransientStringTextField' outlet is not an instance of 'PMTextFieldObserver'") ;
    }
    if nil == transientConcatStringTextField {
      presentErrorWindow (__FILE__,
                              line:__LINE__,
                              errorMessage:"the 'transientConcatStringTextField' outlet is nil") ;
    }else if !transientConcatStringTextField!.isKindOfClass (PMTextFieldObserver) {
      presentErrorWindow (__FILE__,
                              line:__LINE__,
                              errorMessage:"the 'transientConcatStringTextField' outlet is not an instance of 'PMTextFieldObserver'") ;
    }
  //--------------------------- Array controller
  //--------------------------- Selection controller
  //--- Transient compute functions
  //--- Install property observers for transients
  //--- Install regular bindings
    docStringTextField?.bind_value (self.rootObject.docString, file:__FILE__, line:__LINE__, sendContinously:true)
    prefStringTextField?.bind_valueObserver (g_Preferences!.myPrefString, file:__FILE__, line:__LINE__)
    prefTransientStringTextField?.bind_valueObserver (g_Preferences!.prefTransientString, file:__FILE__, line:__LINE__)
    transientConcatStringTextField?.bind_valueObserver (self.rootObject.transientConcatString, file:__FILE__, line:__LINE__)
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
    docStringTextField?.unbind_value ()
    prefStringTextField?.unbind_valueObserver ()
    prefTransientStringTextField?.unbind_valueObserver ()
    transientConcatStringTextField?.unbind_valueObserver ()
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


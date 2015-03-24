
import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(MyDocument) class MyDocument : PMManagedDocument, PMUserClassName {

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    Outlets                                                                                                        *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  @IBOutlet var docStringTextField : PMTextField?
  @IBOutlet var prefStringTextField : PMTextField?
  @IBOutlet var prefTransientStringTextField : PMReadOnlyTextField?
  @IBOutlet var transientConcatStringTextField : PMReadOnlyTextField?

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
      presentErrorWindow (__FILE__, __LINE__, "the 'docStringTextField' outlet is nil") ;
    }else if !docStringTextField!.isKindOfClass (PMTextField) {
      presentErrorWindow (__FILE__, __LINE__, "the 'docStringTextField' outlet is not an instance of 'PMTextField'") ;
    }
    if nil == prefStringTextField {
      presentErrorWindow (__FILE__, __LINE__, "the 'prefStringTextField' outlet is nil") ;
    }else if !prefStringTextField!.isKindOfClass (PMTextField) {
      presentErrorWindow (__FILE__, __LINE__, "the 'prefStringTextField' outlet is not an instance of 'PMTextField'") ;
    }
    if nil == prefTransientStringTextField {
      presentErrorWindow (__FILE__, __LINE__, "the 'prefTransientStringTextField' outlet is nil") ;
    }else if !prefTransientStringTextField!.isKindOfClass (PMReadOnlyTextField) {
      presentErrorWindow (__FILE__, __LINE__, "the 'prefTransientStringTextField' outlet is not an instance of 'PMReadOnlyTextField'") ;
    }
    if nil == transientConcatStringTextField {
      presentErrorWindow (__FILE__, __LINE__, "the 'transientConcatStringTextField' outlet is nil") ;
    }else if !transientConcatStringTextField!.isKindOfClass (PMReadOnlyTextField) {
      presentErrorWindow (__FILE__, __LINE__, "the 'transientConcatStringTextField' outlet is not an instance of 'PMReadOnlyTextField'") ;
    }
  //--------------------------- Array controller
  //--------------------------- Selection controller
  //--- Install property observers for transients
  //--- Install regular bindings
    docStringTextField?.bind_value (self.rootObject.docString, file:__FILE__, line:__LINE__, sendContinously:true)
    prefStringTextField?.bind_value (g_MyPrefs!.myPrefString, file:__FILE__, line:__LINE__, sendContinously:false)
    prefTransientStringTextField?.bind_readOnlyValue (g_MyPrefs!.prefTransientString, file:__FILE__, line:__LINE__)
    transientConcatStringTextField?.bind_readOnlyValue (self.rootObject.transientConcatString, file:__FILE__, line:__LINE__)
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
    docStringTextField?.unbind_value ()
    prefStringTextField?.unbind_value ()
    prefTransientStringTextField?.unbind_readOnlyValue ()
    transientConcatStringTextField?.unbind_readOnlyValue ()
  //--- Unbind multiple bindings
  //--- Uninstall compute functions for transients
  //--------------------------- Unbind array controllers
  //--------------------------- Unbind selection controllers
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


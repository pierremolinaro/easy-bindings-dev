import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    PMEvent class                                                                                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(PMEvent) class PMEvent : PMObject {
  func postEvent () {} // Abstract method
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    PMTransientEvent class                                                                                           *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(PMTransientEvent) class PMTransientEvent : PMEvent {

  private weak var mTransientProperty : PMTransientPropertyProtocol?
  
  init (_ transientProperty : PMTransientPropertyProtocol) {
    mTransientProperty = transientProperty
    super.init ()
  }
  
  override func postEvent () {
    mTransientProperty?.noteModelDidChange ()
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    PMTransientPropertyProtocol                                                                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(PMTransientPropertyProtocol) protocol PMTransientPropertyProtocol {
  func noteModelDidChange ()
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    PMOutletEvent class                                                                                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(PMOutletEvent) class PMOutletEvent : PMEvent {
  override func postEvent () {
    postOutletEvent (self)
  }
  func updateOutlet () {} // Abstract Method
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    O U T L E T    E V E N T S                                                                                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

private var gPendingOutletEvents = Set <PMOutletEvent> ()

func postOutletEvent (event : PMOutletEvent) {
  if gPendingOutletEvents.count == 0 {
    dispatch_after (DISPATCH_TIME_NOW, dispatch_get_main_queue()) { flushOutletEvents () }
  }
  
  if logEvents () {
    let str = String (format:"Post outlet event #%@\n", _stdlib_getDemangledTypeName (event))
    if !gPendingOutletEvents.contains (event) {
      appendMessageString (str)
    }else{ // Event already posted
      appendMessageString (str, NSColor.brownColor ())
    }
  }
  gPendingOutletEvents.insert (event)
}

//---------------------------------------------------------------------------------------------------------------------*

func flushOutletEvents () {
  if gPendingOutletEvents.count > 0 {
    if logEvents () {
      appendMessageString ("-Flush level 0: display outlets\n")
    }
    for object in gPendingOutletEvents {
      if logEvents () {
        appendMessageString (String (format:"  - %@\n", _stdlib_getDemangledTypeName (object)))
      }
      object.updateOutlet ()
    }
    gPendingOutletEvents = Set ()
    if logEvents () {
      appendMessageString ("————————————————————————————————————————————————————\n")
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    A P P E N D    T O    T R A N S I E N T    E V E N T    L O G                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

func logEvents () -> Bool {
  var theApp = NSApp as! PMApplication
  return theApp.logEvents ()
}

//---------------------------------------------------------------------------------------------------------------------*

func appendToTransientEventLog (message : String) {
  var theApp = NSApp as! PMApplication
  theApp.appendToTransientEventLog (message)
}

//---------------------------------------------------------------------------------------------------------------------*

func appendMessageString (message : String) {
  var theApp = NSApp as! PMApplication
  theApp.mTransientEventExplorerTextView?.appendMessageString (message)
}

//---------------------------------------------------------------------------------------------------------------------*

func appendMessageString (message : String, color:NSColor) {
  var theApp = NSApp as! PMApplication
  theApp.mTransientEventExplorerTextView?.appendMessageString (message, color:color)
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    A P P L I C A T I O N    C L A S S                                                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

@objc(PMApplication) class PMApplication : NSApplication {
  private var mLevel = 0
  private var mTriggerOutletDisplaySet = Set <PMOutletEvent> ()
 
  //-------------------------------------------------------------------------------------------------------------------*

  @IBOutlet var mTransientEventExplorerWindow : NSWindow?
  @IBOutlet var mTransientEventExplorerTextView : NSTextView?
 
  //-------------------------------------------------------------------------------------------------------------------*

  override func awakeFromNib () {
    var menuItem = NSMenuItem (
      title:"Show Transient Event Log Window",
      action:"showTransientEventLogWindow:",
      keyEquivalent:""
    )
    addItemToDebugMenu (menuItem)
  }

  //-------------------------------------------------------------------------------------------------------------------*
 
  @IBAction func showTransientEventLogWindow (sender : NSObject) {
    mTransientEventExplorerTextView?.string = ""
    mTransientEventExplorerWindow?.makeKeyAndOrderFront (sender)
  }
  
  //-------------------------------------------------------------------------------------------------------------------*
 
  @IBAction func clearTransientEventLogWindow (sender : NSObject) {
    mTransientEventExplorerTextView?.string = ""
  }
  
  //-------------------------------------------------------------------------------------------------------------------*

  private func appendToTransientEventLog (message : String) {
    if logEvents () {
      mTransientEventExplorerTextView?.appendMessageString (message, color:NSColor.blueColor ())
    }
  }
  
  //-------------------------------------------------------------------------------------------------------------------*

  private func logEvents () -> Bool {
    return (mTransientEventExplorerWindow == nil) ? false : mTransientEventExplorerWindow!.visible
  }

  //-------------------------------------------------------------------------------------------------------------------*

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

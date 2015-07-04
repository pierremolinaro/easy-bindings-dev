import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    EBEvent class                                                                                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(EBEvent) class EBEvent : EBObject {
  func postEvent () {} // Abstract method
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    EBOutletEvent class                                                                                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(EBOutletEvent) class EBOutletEvent : EBEvent {
  override func postEvent () {
    postOutletEvent (self)
  }
  func sendUpdateEvent () {} // Abstract Method
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    O U T L E T    E V E N T S                                                                                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

private var gPendingOutletEvents = Set <EBOutletEvent> ()

func postOutletEvent (event : EBOutletEvent) {
  if gPendingOutletEvents.count == 0 {
    dispatch_after (DISPATCH_TIME_NOW, dispatch_get_main_queue()) { flushOutletEvents () }
  }
  
  if logEvents () {
    let str = String (format:"Post outlet event #%@\n", _stdlib_getDemangledTypeName (event))
    if !gPendingOutletEvents.contains (event) {
      appendMessageString (str)
    }else{ // Event already posted
      appendMessageString (str, color: NSColor.brownColor ())
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
      object.sendUpdateEvent ()
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
  let theApp = NSApp as! EBApplication
  return theApp.logEvents ()
}

//---------------------------------------------------------------------------------------------------------------------*

func appendToTransientEventLog (message : String) {
  let theApp = NSApp as! EBApplication
  theApp.appendToTransientEventLog (message)
}

//---------------------------------------------------------------------------------------------------------------------*

func appendMessageString (message : String) {
  let theApp = NSApp as! EBApplication
  theApp.mTransientEventExplorerTextView?.appendMessageString (message)
}

//---------------------------------------------------------------------------------------------------------------------*

func appendMessageString (message : String, color:NSColor) {
  let theApp = NSApp as! EBApplication
  theApp.mTransientEventExplorerTextView?.appendMessageString (message, color:color)
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    A P P L I C A T I O N    C L A S S                                                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

@objc(EBApplication) class EBApplication : NSApplication {
  private var mLevel = 0
  private var mTriggerOutletDisplaySet = Set <EBOutletEvent> ()
 
  //-------------------------------------------------------------------------------------------------------------------*

  @IBOutlet var mTransientEventExplorerWindow : NSWindow?
  @IBOutlet var mTransientEventExplorerTextView : NSTextView?
 
  //-------------------------------------------------------------------------------------------------------------------*

  override func awakeFromNib () {
    let menuItem = NSMenuItem (
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

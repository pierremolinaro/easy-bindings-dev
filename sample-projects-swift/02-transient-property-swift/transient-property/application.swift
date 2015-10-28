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
    if logEvents () {
      appendMessageString ("Post events\n")
    }
  }
  
  if logEvents () {
    let str = "  " +  explorerIndexString (event.mExplorerObjectIndex) + event.className + "\n"
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
      appendMessageString ("Flush outlet events\n", color: NSColor.blueColor ())
    }
    while gPendingOutletEvents.count > 0 {
      let pendingOutletEvents = gPendingOutletEvents
      gPendingOutletEvents.removeAll ()
      for event in pendingOutletEvents {
        if logEvents () {
          let message = "  " +  explorerIndexString (event.mExplorerObjectIndex) + event.className + "\n"
          appendMessageString (message, color: NSColor.blueColor ())
        }
        event.sendUpdateEvent ()
      }
      if gPendingOutletEvents.count > 0 && logEvents () {
        let message = String (gPendingOutletEvents.count) +  " event(s) posted during flush\n"
        appendMessageString (message, color: NSColor.redColor ())
      }
    }
    if logEvents () {
      appendMessageString ("——————————————————————————————————————\n", color: NSColor.blueColor ())
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

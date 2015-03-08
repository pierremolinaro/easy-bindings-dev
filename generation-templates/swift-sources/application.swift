//---------------------------------------------------------------------------------------------------------------------*

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
    var theApp = NSApp as! PMApplication
    theApp.postTransientEvent (self) ;
  }
  func updateOutlet () {} // Abstract Method
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    R U N    T R I G G E R S                                                                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

func flushTriggers () {
  var theApp = NSApp as! PMApplication
  theApp.flushTransientEvents ()
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    A P P E N D    T O    T R A N S I E N T    E V E N T    L O G                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

func appendToTransientEventLog (message : String) {
  var theApp = NSApp as! PMApplication
  theApp.appendToTransientEventLog (message)
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

  private func postTransientEvent (inObject : PMOutletEvent) {
    if logEvents () {
      let str = String (format:"Post outlet event #%@\n", _stdlib_getDemangledTypeName (inObject))
      if !mTriggerOutletDisplaySet.contains (inObject) {
        mTransientEventExplorerTextView?.appendMessageString (str)
      }else{ // Event already posted
        mTransientEventExplorerTextView?.appendMessageString (str, color:NSColor.brownColor ())
      }
    }
    mTriggerOutletDisplaySet.insert (inObject)
  }

  //-------------------------------------------------------------------------------------------------------------------*
 
  override func sendEvent (inEvent : NSEvent) {
    mLevel += 1
    // NSLog ("send event %d", mLevel)
    super.sendEvent (inEvent)
    mLevel -= 1
    // NSLog ("send event done %d", mLevel)
    if 0 == mLevel {
      flushTransientEvents ()
    }
  }
  
  //-------------------------------------------------------------------------------------------------------------------*

  override func sendAction (theAction: Selector, to theTarget: AnyObject!, from sender: AnyObject!) -> Bool {
    mLevel += 1
    // NSLog ("send action %d", mLevel)
    let result = super.sendAction (theAction, to:theTarget, from:sender)
    mLevel -= 1
    // NSLog ("send action done %d", mLevel)
    if 0 == mLevel {
      flushTransientEvents ()
    }
    return result
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  private func flushTransientEvents () {
    if mTriggerOutletDisplaySet.count > 0 {
      if logEvents () {
        mTransientEventExplorerTextView?.appendMessageString ("-Flush level 0: display outlets\n")
      }
      for object in mTriggerOutletDisplaySet {
        if logEvents () {
          mTransientEventExplorerTextView?.appendMessageString (String (format:"  - %@\n", _stdlib_getDemangledTypeName (object)))
        }
        object.updateOutlet ()
      }
      mTriggerOutletDisplaySet = Set ()
    }
    if logEvents () {
      mTransientEventExplorerTextView?.appendMessageString ("————————————————————————————————————————————————————\n")
    }
 }

  //-------------------------------------------------------------------------------------------------------------------*

}


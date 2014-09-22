//---------------------------------------------------------------------------------------------------------------------*

import Cocoa

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    T O P O L O G I C A L    S O R T    O F    P R O P E R T I E S                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

// preference.PMPrefs.mColor
// preference.PMPrefs.mDate
// preference.PMPrefs.mIntegerValue
// preference.PMPrefs.myString


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    T R A N S I E N T    I N D E X E S                                                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

enum PMTransientIndex : Int {
  case kTriggerOutletDisplay // 0
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    T R A N S I E N T    T R I G G E R    C L A S S E S                                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    P O S T    T R A N S I E N T    E V E N T                                                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

func postTransientEvent (inObject : PMTransientEventProtocol) {
  var theApp = NSApp as PMApplication
  theApp.postTransientEvent (inObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    R U N    T R I G G E R S                                                                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

func flushTriggers () {
  var theApp = NSApp as PMApplication
  theApp.flushTransientEvents ()
  displayAllocation ()
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    A P P L I C A T I O N    C L A S S                                                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

@objc(PMApplication) class PMApplication : NSApplication {
  private var mLevel = 0
  private var mFlushLevel = 1
  private var mTriggerOutletDisplaySet : [Int : PMTransientEventProtocol] = [:]
 
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

  private func logEvents () -> Bool {
    return (mTransientEventExplorerWindow == nil) ? false : mTransientEventExplorerWindow!.visible
  }

  //-------------------------------------------------------------------------------------------------------------------*


  //-------------------------------------------------------------------------------------------------------------------*

  private func postTransientEvent (inObject : PMTransientEventProtocol) {
    let transientIndex = inObject.transientEventIndex
    inObject.noteTransientDidChange ()
    switch transientIndex {
    case PMTransientIndex.kTriggerOutletDisplay :
      if logEvents () {
        let str = NSString (format:"+level %d, #%d:%@\n", transientIndex.rawValue, inObject.uniqueIndex, inObject.userClassName())
        if transientIndex.rawValue >= mFlushLevel {
          mTransientEventExplorerTextView?.appendErrorString (str)
        }else if mTriggerOutletDisplaySet [inObject.uniqueIndex] == nil {
          mTransientEventExplorerTextView?.appendMessageString (str)
        }else{ // Event already posted
          mTransientEventExplorerTextView?.appendMessageString (str, color:NSColor.brownColor ())
        }
      }
      mTriggerOutletDisplaySet [inObject.uniqueIndex] = inObject
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
 
  override func sendEvent (inEvent : NSEvent!) {
    mLevel += 1
    // NSLog ("send event %d", mLevel)
    super.sendEvent (inEvent)
    mLevel -= 1
    // NSLog ("send event done %d", mLevel)
    if 0 == mLevel {
      flushTransientEvents ()
      displayAllocation ()
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
      displayAllocation ()
    }
    return result
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  private func flushTransientEvents () {
    var emptyFlush = true ;
    if mTriggerOutletDisplaySet.count > 0 {
      emptyFlush = false
      if logEvents () {
        mTransientEventExplorerTextView?.appendMessageString ("-Flush level 0: display outlets\n")
      }
      mFlushLevel = 0
      for object in mTriggerOutletDisplaySet.values {
        if logEvents () {
          mTransientEventExplorerTextView?.appendMessageString (NSString (format:"  -#%d:%@\n", object.uniqueIndex, object.userClassName()))
        }
        object.trigger ()
      }
      mTriggerOutletDisplaySet = [:]
    }
    mFlushLevel = 1
    if !emptyFlush && logEvents () {
       mTransientEventExplorerTextView?.appendMessageString ("————————————————————————————————————————————————————\n")
    }
 }

  //-------------------------------------------------------------------------------------------------------------------*

}


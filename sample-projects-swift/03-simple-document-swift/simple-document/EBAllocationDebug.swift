import Cocoa

//---------------------------------------------------------------------------------------------------------------------*
//    Public routines                                                                                                  *
//---------------------------------------------------------------------------------------------------------------------*

func noteObjectAllocation (inObject : EBUserClassName) {
  installDebugMenu ()
  let className = _stdlib_getDemangledTypeName (inObject).pathExtension
  gDebugObject?.pmNoteObjectAllocation (className)
}

//---------------------------------------------------------------------------------------------------------------------*

func noteObjectDeallocation (inObject : EBUserClassName) {
  let className = _stdlib_getDemangledTypeName (inObject).pathExtension
  gDebugObject?.pmNoteObjectDeallocation (className)
}

//---------------------------------------------------------------------------------------------------------------------*

func addItemToDebugMenu (item : NSMenuItem) {
  installDebugMenu ()
  gDebugObject?.mDebugMenu?.addItem (item)
}

//---------------------------------------------------------------------------------------------------------------------*
//    Private routine                                                                                                  *
//---------------------------------------------------------------------------------------------------------------------*

private func installDebugMenu () {
  if nil == gDebugObject {
    let debugObject = EBAllocationDebug ()
    gDebugObject = debugObject
    let mainBundle = NSBundle.mainBundle ()
    let ok = mainBundle.loadNibNamed ("EBAllocationDebug", owner:debugObject, topLevelObjects:&debugObject.mTopLevelObjects)
    if !ok {
      presentErrorWindow (__FILE__, line: __LINE__, errorMessage: "Cannot load 'EBAllocationDebug' nib file") ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//   EBAllocationItemDisplay class                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

@objc(EBAllocationItemDisplay) class EBAllocationItemDisplay : NSObject {
  var mClassname : String
  var mAllCount : Int
  var mLive : Int
  var mSnapshot : Int

  init (classname : String, allCount : Int, live : Int, snapshot : Int) {
    mClassname = classname
    mAllCount = allCount
    mLive = live
    mSnapshot = snapshot
  }
}

//---------------------------------------------------------------------------------------------------------------------*

private var gDebugObject : EBAllocationDebug? = nil

//---------------------------------------------------------------------------------------------------------------------*

@objc(EBAllocationDebug) class EBAllocationDebug : NSObject, NSTableViewDataSource, NSWindowDelegate {
  @IBOutlet var mPerformSnapShotButton  : NSButton?
  @IBOutlet var mAllocationStatsWindowVisibleAtLaunchCheckbox : NSButton?
  @IBOutlet var mDisplayFilterPopUpButton : NSPopUpButton?
  @IBOutlet var mDebugMenu : NSMenu?
  @IBOutlet var mAllocationStatsWindow : NSWindow?
  @IBOutlet var mCurrentlyAllocatedObjectCountTextField : NSTextField?
  @IBOutlet var mTotalAllocatedObjectCountTextField : NSTextField?
  @IBOutlet var mStatsTableView : NSTableView?


  private var mTopLevelObjects : NSArray?

  private var mDebugMenuInstalled = false

  private var mAllocationStatsWindowVisibleAtLaunch : Bool = true {
    didSet {
      mAllocationStatsWindowVisibleAtLaunchCheckbox?.state = Int (mAllocationStatsWindowVisibleAtLaunch)
    }
  }

  private var mAllocatedObjectCount : Int = 0 {
    didSet {
      mCurrentlyAllocatedObjectCountTextField?.stringValue = String (format:"%d", mAllocatedObjectCount)
    }
  }

  private var mTotalAllocatedObjectCount : Int = 0 {
    didSet {
      mTotalAllocatedObjectCountTextField?.stringValue = String (format:"%d", mTotalAllocatedObjectCount)
    }
  }

  private var mDisplayFilter : Int = 0 {
    didSet {
      mRefreshDisplay = true
    }
  }

  private var mAllocatedObjectCountByClass = NSCountedSet ()

  private var mTotalAllocatedObjectCountByClass = NSCountedSet ()

  private var mSnapShotDictionary = NSMutableDictionary ()
 
  private var mRefreshDisplay = false

  private var mAllocationStatsDataSource = NSMutableArray ()
  
  private var mRefreshTimer : NSTimer? = nil

  //-------------------------------------------------------------------------------------------------------------------*
  //    init                                                                                                           *
  //-------------------------------------------------------------------------------------------------------------------*
  
   override init () {
      //  NSLog (@"%s %p", __PRETTY_FUNCTION__, self) ;
    super.init ()
    assert (gDebugObject == nil, "EBAllocationDebug already exists", file:__FILE__, line:__LINE__)
    let df = NSNotificationCenter.defaultCenter ()
    df.addObserver (self,
      selector:"applicationWillTerminateAction:",
      name:NSApplicationWillTerminateNotification,
      object:nil
    )
    gDebugObject = self
  }
  
  //-------------------------------------------------------------------------------------------------------------------*
  //    pmInstallDebugMenu                                                                                             *
  //-------------------------------------------------------------------------------------------------------------------*

  private func pmInstallDebugMenu () {
    if !mDebugMenuInstalled {
      if let menu = NSApp.mainMenu {
        let item = NSMenuItem (
          title:"",
          action:nil,
          keyEquivalent:""
        )
        item.submenu = mDebugMenu
        menu.addItem (item)
        mDebugMenuInstalled = true
      }
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    awakeFromNib                                                                                                   *
  //-------------------------------------------------------------------------------------------------------------------*
  
  override func awakeFromNib () {
  // NSLog (@"%s %p %p", __PRETTY_FUNCTION__, self, mDebugMenu) ;
  //--- Allocation Window visibility
    let df = NSUserDefaults.standardUserDefaults ()
    mAllocationStatsWindowVisibleAtLaunch = df.boolForKey ("EBAllocationDebug:allocationStatsWindowVisible")
    mDisplayFilter = df.integerForKey ("EBAllocationDebug:allocationStatsDisplayFilter")
  //--- will call windowDidBecomeKey: and windowWillClose:
    mAllocationStatsWindow?.delegate = self
  //--- Allocation stats window visibility at Launch
    mAllocationStatsWindowVisibleAtLaunchCheckbox?.state = Int (mAllocationStatsWindowVisibleAtLaunch)
    mAllocationStatsWindowVisibleAtLaunchCheckbox?.target = self
    mAllocationStatsWindowVisibleAtLaunchCheckbox?.action = "setAllocationStatsWindowVisibleAtLaunchAction:"
    if mAllocationStatsWindowVisibleAtLaunch {
      mAllocationStatsWindow?.makeKeyAndOrderFront (nil)
      installTimer ()
    }
    mDisplayFilterPopUpButton?.selectItemAtIndex (mDisplayFilter)
    mDisplayFilterPopUpButton?.target = self
    mDisplayFilterPopUpButton?.action = "setDisplayFilerAction:"
    let columns = mStatsTableView!.tableColumns as NSArray
    if columns.count > 0 {
      let firstColumn = columns [0] as! NSTableColumn
      mStatsTableView!.sortDescriptors = NSArray (object:firstColumn.sortDescriptorPrototype!) as! [NSSortDescriptor]
    }
    pmInstallDebugMenu ()
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    installTimer                                                                                                   *
  //-------------------------------------------------------------------------------------------------------------------*

  func installTimer () {
    if mRefreshTimer == nil {
      displayAllocation ()
      mRefreshTimer = NSTimer (
        timeInterval: 1.0,
        target:self,
        selector:"refreshDisplay:",
        userInfo: nil,
        repeats: true
      )
      NSRunLoop.currentRunLoop().addTimer (mRefreshTimer!, forMode:NSDefaultRunLoopMode)
      mRefreshDisplay = true
      displayAllocation ()
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    windowDidBecomeKey: create and validate timer                                                                  *
  //-------------------------------------------------------------------------------------------------------------------*

  func windowDidBecomeKey (_: NSNotification) {
    installTimer ()
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    windowWillClose: invalidate timer and release timer                                                            *
  //-------------------------------------------------------------------------------------------------------------------*

  func windowWillClose (_: NSNotification) {
    if let timer = mRefreshTimer {
      timer.invalidate ()
      mRefreshTimer = nil
    }
  }
  
  //-------------------------------------------------------------------------------------------------------------------*
  //    refreshDisplay:                                                                                                *
  //-------------------------------------------------------------------------------------------------------------------*

  func refreshDisplay (timer : NSTimer) {
    displayAllocation ()
  }
  
  //-------------------------------------------------------------------------------------------------------------------*
  //    setAllocationStatsWindowVisibleAtLaunchAction:                                                                 *
  //-------------------------------------------------------------------------------------------------------------------*
  
  func setAllocationStatsWindowVisibleAtLaunchAction (_: AnyObject!) {
    mAllocationStatsWindowVisibleAtLaunch = mAllocationStatsWindowVisibleAtLaunchCheckbox?.state != 0
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    setDisplayFilerAction:                                                                                         *
  //-------------------------------------------------------------------------------------------------------------------*
  
  func setDisplayFilerAction (_: AnyObject!) {
    if let displayFilterPopUpButton = mDisplayFilterPopUpButton {
      mDisplayFilter = displayFilterPopUpButton.indexOfSelectedItem
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    applicationWillTerminateAction:                                                                                *
  //-------------------------------------------------------------------------------------------------------------------*
  
  func applicationWillTerminateAction (_: NSNotification) {
    let ud = NSUserDefaults.standardUserDefaults ()
    ud.setBool (mAllocationStatsWindowVisibleAtLaunch,
      forKey:"EBAllocationDebug:allocationStatsWindowVisible"
    )
    ud.setInteger (mDisplayFilter,
      forKey:"EBAllocationDebug:allocationStatsDisplayFilter"
    )
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    performSnapShotAction:                                                                                         *
  //-------------------------------------------------------------------------------------------------------------------*
  
  @IBAction func performSnapShotAction (_: AnyObject) {
    mSnapShotDictionary = NSMutableDictionary ()
    for c : AnyObject in mAllocatedObjectCountByClass.allObjects  {
      let className = c as! String
      let liveByClass = mAllocatedObjectCountByClass.countForObject (className)
      mSnapShotDictionary.setObject (liveByClass, forKey:className)
    }
    mRefreshDisplay = true
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    pmNoteObjectAllocation:                                                                                        *
  //-------------------------------------------------------------------------------------------------------------------*
  
  private func pmNoteObjectAllocation (inObjectClassName : NSString!) {
  //NSLog (@"objectClassName %@", inObjectClassName) ;
    mAllocatedObjectCountByClass.addObject (inObjectClassName)
    mTotalAllocatedObjectCountByClass.addObject (inObjectClassName)
    mRefreshDisplay = true
    pmInstallDebugMenu ()
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    pmNoteObjectDeallocation:                                                                                      *
  //-------------------------------------------------------------------------------------------------------------------*
  
  private func pmNoteObjectDeallocation (inObjectClassName : NSString) {
  // NSLog (@"DEALLOC objectClassName %@", inObjectClassName) ;
    mAllocatedObjectCountByClass.removeObject (inObjectClassName)
    mRefreshDisplay = true
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    displayAllocation                                                                                              *
  //-------------------------------------------------------------------------------------------------------------------*

  private func displayAllocation () {
    if mRefreshDisplay {
      mRefreshDisplay = false
    //---
      var liveObjectCount : Int = 0
      var totalObjectCount : Int = 0
    //---
      mAllocationStatsDataSource = NSMutableArray ()
      let allObjects = mTotalAllocatedObjectCountByClass.allObjects
      for object : AnyObject in allObjects {
        let liveByClass = mAllocatedObjectCountByClass.countForObject (object)
        let totalByClass = mTotalAllocatedObjectCountByClass.countForObject (object)
        let snapShotByClass : Int? = mSnapShotDictionary.objectForKey (object)?.unsignedIntegerValue
        liveObjectCount += liveByClass ;
        totalObjectCount += totalByClass ;
        var display = true ;
        if 1 == mDisplayFilter {
          display = liveByClass != 0 ;
        }else if 2 == mDisplayFilter {
          display = liveByClass != snapShotByClass ;
        }
        if display {
          mAllocationStatsDataSource.addObject (EBAllocationItemDisplay (
            classname : object as! String,
            allCount : totalByClass,
            live : liveByClass,
            snapshot : ((snapShotByClass != nil) ? snapShotByClass! : 0)
          ))
        }
      }
      mAllocatedObjectCount = liveObjectCount ;
      mTotalAllocatedObjectCount = totalObjectCount ;
    //---
      let sortDescriptors : [NSSortDescriptor]! = mStatsTableView?.sortDescriptors
      mAllocationStatsDataSource.sortUsingDescriptors (sortDescriptors)
      mStatsTableView?.setDataSource (self)
      mStatsTableView?.reloadData ()
    }
  }


  //-------------------------------------------------------------------------------------------------------------------*
  //    T A B L E   V I E W    D A T A    S O U R C E                                                                  *
  //-------------------------------------------------------------------------------------------------------------------*

  func tableView (aTableView : NSTableView,
                  objectValueForTableColumn: NSTableColumn?,
                  row:Int) -> AnyObject? {
    let theRecord : EBAllocationItemDisplay = mAllocationStatsDataSource [row] as! EBAllocationItemDisplay
    return theRecord.valueForKey (objectValueForTableColumn!.identifier as String)
  }
  
  //-------------------------------------------------------------------------------------------------------------------*
  
  func numberOfRowsInTableView (_: NSTableView) -> Int {
    return mAllocationStatsDataSource.count
  }
  
  //-------------------------------------------------------------------------------------------------------------------*
  //    tableView:sortDescriptorsDidChange: NSTableViewDataSource delegate                                             *
  //-------------------------------------------------------------------------------------------------------------------*

  func tableView (aTableView: NSTableView,
                 sortDescriptorsDidChange oldDescriptors: [NSSortDescriptor]) {
    let sortDescriptors = mStatsTableView?.sortDescriptors
    mAllocationStatsDataSource.sortUsingDescriptors (sortDescriptors!)
    mStatsTableView?.reloadData ()
  }

  //-------------------------------------------------------------------------------------------------------------------*

}

//---------------------------------------------------------------------------------------------------------------------*

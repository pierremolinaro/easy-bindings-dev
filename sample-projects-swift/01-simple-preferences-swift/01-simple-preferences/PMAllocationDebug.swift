import Cocoa

//---------------------------------------------------------------------------------------------------------------------*

class PMAllocationItemDisplay : NSObject {
  var mClassname : String
  var mAllCount : Int
  var mLive : Int
  var mSnapshot : Int

  init (classname : String, allCount : Int, live : Int, snapshot : Int) {
    mClassname = classname
    mAllCount = allCount
    mLive = live
    mSnapshot = snapshot
    super.init ()
  }
  
}

//---------------------------------------------------------------------------------------------------------------------*

var gDebugObject : PMAllocationDebug? = nil

//---------------------------------------------------------------------------------------------------------------------*

@objc(PMAllocationDebug) class PMAllocationDebug : NSObject, NSTableViewDataSource {
  @IBOutlet var mPerformSnapShotButton  : NSButton?
  @IBOutlet var mAllocationStatsWindowVisibleAtLaunchCheckbox : NSButton?
  @IBOutlet var mDisplayFilterPopUpButton : NSPopUpButton?
  @IBOutlet var mDebugMenu : NSMenu?
  @IBOutlet var mAllocationStatsWindow : NSWindow?
  @IBOutlet var mCurrentlyAllocatedObjectCountTextField : NSTextField?
  @IBOutlet var mTotalAllocatedObjectCountTextField : NSTextField?
  @IBOutlet var mStatsTableView : NSTableView?


  var mTopLevelObjects : NSArray?

  var mDebugMenuInstalled = false

  var mAllocationStatsWindowVisibleAtLaunch : Bool = true {
    didSet {
      mAllocationStatsWindowVisibleAtLaunchCheckbox?.state = Int (mAllocationStatsWindowVisibleAtLaunch)
    }
  }

  var mAllocatedObjectCount : Int = 0 {
    didSet {
      mCurrentlyAllocatedObjectCountTextField?.stringValue = NSString (format:"%d", mAllocatedObjectCount)
    }
  }

  var mTotalAllocatedObjectCount : Int = 0 {
    didSet {
      mTotalAllocatedObjectCountTextField?.stringValue = NSString (format:"%d", mTotalAllocatedObjectCount)
    }
  }

  var mDisplayFilter : Int = 0 {
    didSet {
      mRefreshDisplay = true
    }
  }

  var mAllocatedObjectCountByClass = NSCountedSet ()

  var mTotalAllocatedObjectCountByClass = NSCountedSet ()

  var mSnapShotDictionary = NSMutableDictionary ()
 
  var mRefreshDisplay = false

  var mAllocationStatsDataSource : [PMAllocationItemDisplay] = []

  //-------------------------------------------------------------------------------------------------------------------*
  //    init                                                                                                           *
  //-------------------------------------------------------------------------------------------------------------------*
  
   override init () {
      //  NSLog (@"%s %p", __PRETTY_FUNCTION__, self) ;
    super.init ()
    assert (gDebugObject == nil, "PMAllocationDebug already exists", file:__FILE__, line:__LINE__)
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

  func pmInstallDebugMenu () {
    if (!mDebugMenuInstalled) && (NSApp.mainMenu != nil) {
      var item = NSMenuItem (
        title:"",
        action:nil,
        keyEquivalent:""
      )
      item.submenu = mDebugMenu
      NSApp.mainMenu?.addItem (item)
      mDebugMenuInstalled = true
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    addDebugMenuItem:                                                                                              *
  //-------------------------------------------------------------------------------------------------------------------*
  
  func addDebugMenuItem (inMenuItem : NSMenuItem) {
    mDebugMenu?.addItem (inMenuItem)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    awakeFromNib                                                                                                   *
  //-------------------------------------------------------------------------------------------------------------------*
  
  override func awakeFromNib () {
  // NSLog (@"%s %p %p", __PRETTY_FUNCTION__, self, mDebugMenu) ;
  //--- Allocation Window visibility
    var df = NSUserDefaults.standardUserDefaults ()
    mAllocationStatsWindowVisibleAtLaunch = df.boolForKey ("PMAllocationDebug:allocationStatsWindowVisible")
    mDisplayFilter = df.integerForKey ("PMAllocationDebug:allocationStatsDisplayFilter")
  //--- Allocation stats window visibility at Launch
    mAllocationStatsWindowVisibleAtLaunchCheckbox?.state = Int (mAllocationStatsWindowVisibleAtLaunch)
    mAllocationStatsWindowVisibleAtLaunchCheckbox?.target = self
    mAllocationStatsWindowVisibleAtLaunchCheckbox?.action = "setAllocationStatsWindowVisibleAtLaunchAction:"
    if mAllocationStatsWindowVisibleAtLaunch {
      mAllocationStatsWindow?.makeKeyAndOrderFront (nil)
    }
    mDisplayFilterPopUpButton?.selectItemAtIndex (mDisplayFilter)
    mDisplayFilterPopUpButton?.target = self
    mDisplayFilterPopUpButton?.action = "setDisplayFilerAction:"
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    setAllocationStatsWindowVisibleAtLaunchAction:                                                                 *
  //-------------------------------------------------------------------------------------------------------------------*
  
  func setAllocationStatsWindowVisibleAtLaunchAction (AnyObject!) {
    mAllocationStatsWindowVisibleAtLaunch = mAllocationStatsWindowVisibleAtLaunchCheckbox?.state != 0
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    setAllocationStatsWindowVisibleAtLaunchAction:                                                                 *
  //-------------------------------------------------------------------------------------------------------------------*
  
  func setDisplayFilerAction (AnyObject!) {
    if let displayFilterPopUpButton = mDisplayFilterPopUpButton {
      mDisplayFilter = displayFilterPopUpButton.indexOfSelectedItem
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    applicationWillTerminateAction:                                                                                *
  //-------------------------------------------------------------------------------------------------------------------*
  
  func applicationWillTerminateAction (NSNotification) {
    var ud = NSUserDefaults.standardUserDefaults ()
    ud.setBool (mAllocationStatsWindowVisibleAtLaunch,
      forKey:"PMAllocationDebug:allocationStatsWindowVisible"
    )
    ud.setInteger (mDisplayFilter,
      forKey:"PMAllocationDebug:allocationStatsDisplayFilter"
    )
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    performSnapShotAction:                                                                                         *
  //-------------------------------------------------------------------------------------------------------------------*
  
  @IBAction func performSnapShotAction (AnyObject) {
    mSnapShotDictionary = NSMutableDictionary ()
    for c : AnyObject in mAllocatedObjectCountByClass.allObjects  {
      let className = c as String
      let liveByClass = mAllocatedObjectCountByClass.countForObject (className)
      mSnapShotDictionary.setObject (liveByClass, forKey:className)
    }
    mRefreshDisplay = true
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    pmNoteObjectAllocation:                                                                                        *
  //-------------------------------------------------------------------------------------------------------------------*
  
  func pmNoteObjectAllocation (inObjectClassName : NSString!) {
  //NSLog (@"objectClassName %@", inObjectClassName) ;
    mAllocatedObjectCountByClass.addObject (inObjectClassName)
    mTotalAllocatedObjectCountByClass.addObject (inObjectClassName)
    mRefreshDisplay = true
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    pmNoteObjectDeallocation:                                                                                      *
  //-------------------------------------------------------------------------------------------------------------------*
  
  func pmNoteObjectDeallocation (inObjectClassName : NSString) {
  // NSLog (@"DEALLOC objectClassName %@", inObjectClassName) ;
    mAllocatedObjectCountByClass.removeObject (inObjectClassName)
    mRefreshDisplay = true
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    refreshAllocationStats                                                                                         *
  //-------------------------------------------------------------------------------------------------------------------*

  func displayAllocation () {
    self.pmInstallDebugMenu ()
    if mRefreshDisplay {
      mRefreshDisplay = false
    //---
      var liveObjectCount : Int = 0
      var totalObjectCount : Int = 0
    //---
      var array : [PMAllocationItemDisplay] = []
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
          array.append (PMAllocationItemDisplay (
            classname : object as NSString,
            allCount : totalByClass,
            live : liveByClass,
            snapshot : ((snapShotByClass != nil) ? snapShotByClass! : 0)
          ))
        }
      }
      mAllocatedObjectCount = liveObjectCount ;
      mTotalAllocatedObjectCount = totalObjectCount ;
    //---
      mAllocationStatsDataSource = array
      mStatsTableView?.setDataSource (self)
      mStatsTableView?.reloadData ()
    }
  }


  //-------------------------------------------------------------------------------------------------------------------*
  //    T A B L E   V I E W    D A T A    S O U R C E                                                                  *
  //-------------------------------------------------------------------------------------------------------------------*
  
  func tableView (aTableView : NSTableView,
                  objectValueForTableColumn: NSTableColumn,
                  row:NSInteger) -> AnyObject! {
    var theRecord : PMAllocationItemDisplay = mAllocationStatsDataSource [row]
    return theRecord.valueForKey (objectValueForTableColumn.identifier as String)
  }
  
  //-------------------------------------------------------------------------------------------------------------------*
  
  func numberOfRowsInTableView (NSTableView) -> Int {
    return mAllocationStatsDataSource.count
  }
  
  //-------------------------------------------------------------------------------------------------------------------*
  //    S H O W     A L L O C A T I O N    S T A T S    W I N D O W                                                    *
  //-------------------------------------------------------------------------------------------------------------------*
  
  func pmShowAllocationStatsWindow () {
    mStatsTableView?.window?.makeKeyAndOrderFront (nil)
  }
  
  //-------------------------------------------------------------------------------------------------------------------*
  
  class func routineShowAllocationStatsWindow () {
    gDebugObject?.pmShowAllocationStatsWindow ()
  }
  
  //-------------------------------------------------------------------------------------------------------------------*
  
  class func addItemToDebugMenu (inMenuItem : NSMenuItem) {
    if (nil == gDebugObject) {
      var debugObject = PMAllocationDebug ()
      gDebugObject = debugObject
      var mainBundle = NSBundle.mainBundle ()
      let ok = mainBundle.loadNibNamed ("PMAllocationDebug", owner:debugObject, topLevelObjects:&debugObject.mTopLevelObjects)
      if !ok {
        presentErrorWindow (__FILE__, __LINE__, "Cannot load 'PMAllocationDebug' nib file") ;
      }
    }
  }

}

//---------------------------------------------------------------------------------------------------------------------*
//    R O U T I N E S                                                                                                  *
//---------------------------------------------------------------------------------------------------------------------*

func noteObjectAllocation (inObject : NSObject) {
  if (nil == gDebugObject) {
    var debugObject = PMAllocationDebug ()
    gDebugObject = debugObject
    var topLevelObjects : NSArray?
    var mainBundle = NSBundle.mainBundle ()
    let ok = mainBundle.loadNibNamed ("PMAllocationDebug", owner:debugObject, topLevelObjects:&debugObject.mTopLevelObjects)
    if !ok {
      presentErrorWindow (__FILE__, __LINE__, "Cannot load 'PMAllocationDebug' nib file") ;
    }
  }
  let className = inObject.className 
  gDebugObject?.pmNoteObjectAllocation (className)
}

//---------------------------------------------------------------------------------------------------------------------*

func noteObjectDeallocation (inObject : NSObject) {
  let className = inObject.className
  gDebugObject?.pmNoteObjectDeallocation (className)
}

//---------------------------------------------------------------------------------------------------------------------*

func displayAllocation () {
  gDebugObject?.displayAllocation ()
}

//---------------------------------------------------------------------------------------------------------------------*

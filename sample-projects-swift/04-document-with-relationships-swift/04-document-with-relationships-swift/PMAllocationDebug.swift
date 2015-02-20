import Cocoa

//---------------------------------------------------------------------------------------------------------------------*
//    Public routines                                                                                                  *
//---------------------------------------------------------------------------------------------------------------------*

func noteObjectAllocation (inObject : PMUserClassName) {
  installDebugMenu ()
  let className = inObject.userClassName ()
  gDebugObject?.pmNoteObjectAllocation (className)
}

//---------------------------------------------------------------------------------------------------------------------*

func noteObjectDeallocation (inObject : PMUserClassName) {
  let className = inObject.userClassName ()
  gDebugObject?.pmNoteObjectDeallocation (className)
}

//---------------------------------------------------------------------------------------------------------------------*

func displayAllocation () {
  gDebugObject?.displayAllocation ()
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
    var debugObject = PMAllocationDebug ()
    gDebugObject = debugObject
    var mainBundle = NSBundle.mainBundle ()
    let ok = mainBundle.loadNibNamed ("PMAllocationDebug", owner:debugObject, topLevelObjects:&debugObject.mTopLevelObjects)
    if !ok {
      presentErrorWindow (__FILE__, __LINE__, "Cannot load 'PMAllocationDebug' nib file") ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//   PMAllocationItemDisplay class                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

@objc(PMAllocationItemDisplay) class PMAllocationItemDisplay : NSObject {
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

private var gDebugObject : PMAllocationDebug? = nil

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

  private func pmInstallDebugMenu () {
    if let mainMenu = NSApp.mainMenu {
      if !mDebugMenuInstalled {
        var item = NSMenuItem (
          title:"",
          action:nil,
          keyEquivalent:""
        )
        item.submenu = mDebugMenu
        mainMenu!.addItem (item)
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
    let columns = mStatsTableView!.tableColumns as NSArray
    if columns.count > 0 {
      let firstColumn = columns [0] as! NSTableColumn
      mStatsTableView!.sortDescriptors = NSArray (object:firstColumn.sortDescriptorPrototype!) as! [AnyObject]
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    setAllocationStatsWindowVisibleAtLaunchAction:                                                                 *
  //-------------------------------------------------------------------------------------------------------------------*
  
  func setAllocationStatsWindowVisibleAtLaunchAction (AnyObject!) {
    mAllocationStatsWindowVisibleAtLaunch = mAllocationStatsWindowVisibleAtLaunchCheckbox?.state != 0
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    setDisplayFilerAction:                                                                                         *
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
    pmInstallDebugMenu ()
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
          mAllocationStatsDataSource.addObject (PMAllocationItemDisplay (
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
      let sortDescriptors : [AnyObject]! = mStatsTableView?.sortDescriptors
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
                  row:NSInteger) -> AnyObject! {
    var theRecord : PMAllocationItemDisplay = mAllocationStatsDataSource [row] as! PMAllocationItemDisplay
    return theRecord.valueForKey (objectValueForTableColumn!.identifier as String)
  }
  
  //-------------------------------------------------------------------------------------------------------------------*
  
  func numberOfRowsInTableView (NSTableView) -> Int {
    return mAllocationStatsDataSource.count
  }
  
  //-------------------------------------------------------------------------------------------------------------------*
  //    tableView:sortDescriptorsDidChange: NSTableViewDataSource delegate                                             *
  //-------------------------------------------------------------------------------------------------------------------*

  func tableView (aTableView: NSTableView,
                 sortDescriptorsDidChange oldDescriptors: [AnyObject]) {
    let sortDescriptors : [AnyObject]! = mStatsTableView?.sortDescriptors
    mAllocationStatsDataSource.sortUsingDescriptors (sortDescriptors)
    mStatsTableView?.reloadData ()
  }

  //-------------------------------------------------------------------------------------------------------------------*

}

//---------------------------------------------------------------------------------------------------------------------*

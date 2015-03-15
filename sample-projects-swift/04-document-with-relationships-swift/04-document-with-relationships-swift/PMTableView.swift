import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(PMTableView) class PMTableView : NSTableView, PMUserClassName {

  //-------------------------------------------------------------------------------------------------------------------*

  required init? (coder: NSCoder) {
    super.init (coder:coder)
    noteObjectAllocation (self)
  }

  //-------------------------------------------------------------------------------------------------------------------*

  deinit {
    noteObjectDeallocation (self)
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    AbstractArrayController                                                                                          *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(AbstractArrayController)
class AbstractArrayController : PMAbstractProperty, NSTableViewDataSource, NSTableViewDelegate {
  func setSortDescriptors (sortDescriptors : [AnyObject]) {} // Abstract method
  func configureTableView (inTableView : PMTableView, file : String, line : Int) {} // Abstract method
  func selectedObjectIndexSet () -> NSIndexSet { return NSIndexSet () } // Abstract method
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Controller Controller_PMTableView_controller                                                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_PMTableView_controller) class Controller_PMTableView_controller : PMOutletEvent {

  private var mOutlet : PMTableView
  private var mObject : AbstractArrayController

  //-------------------------------------------------------------------------------------------------------------------*

  init (object:AbstractArrayController, outlet : PMTableView, file : String, line : Int) {
    mObject = object
    mOutlet = outlet
    super.init ()
    mObject.configureTableView (mOutlet, file : file, line : line)
    object.addObserver (self, inTrigger:true)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func unregister () {
    mOutlet.setDataSource (nil)
    mOutlet.setDelegate (nil)
    mObject.removeObserver (self, inTrigger:false)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  // http://stackoverflow.com/questions/7359921/how-to-keep-the-visible-content-after-nstableview-reloaddata
  
  override func updateOutlet () {
    dispatch_after (DISPATCH_TIME_NOW, dispatch_get_main_queue()) {
  //---------------- So tableViewSelectionDidChange is not called
    self.mOutlet.setDelegate (nil)
  //---------------- Reload data
    self.mOutlet.reloadData ()
  //----------------
  //---------------- Update table view selection
    var newTableViewSelectionIndexSet = self.mObject.selectedObjectIndexSet ()
    self.mOutlet.selectRowIndexes (newTableViewSelectionIndexSet, byExtendingSelection:false)
  //---------------- Scroll first selected row to visible
    if newTableViewSelectionIndexSet.count > 0 {
      self.mOutlet.scrollRowToVisible (newTableViewSelectionIndexSet.firstIndex)
    }
  //----------------
    self.mOutlet.setDelegate (self.mObject)
  }
  }

  //-------------------------------------------------------------------------------------------------------------------*
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

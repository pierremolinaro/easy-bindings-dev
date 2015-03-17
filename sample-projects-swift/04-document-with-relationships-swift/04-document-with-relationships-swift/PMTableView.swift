import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    PMTableView                                                                                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(PMTableView) class PMTableView : NSTableView, PMUserClassName {

  //••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••

  required init? (coder: NSCoder) {
    super.init (coder:coder)
    noteObjectAllocation (self)
  }

  //••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••

  deinit {
    noteObjectDeallocation (self)
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    PMTableViewDataSource                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(PMTableViewDataSource) protocol PMTableViewDataSource : NSTableViewDataSource {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    PMTableViewDataSource                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(PMTableViewDelegate) protocol PMTableViewDelegate : NSTableViewDelegate {
  func selectedObjectIndexSet () -> NSIndexSet
  func willReload ()
  func didReload ()
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Controller Controller_PMTableView_controller                                                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_PMTableView_controller) class Controller_PMTableView_controller : PMOutletEvent {

  private var mDelegate : PMTableViewDelegate
  private var mTableView : PMTableView
  private var mDataSource : PMTableViewDataSource?

  //••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••

  init (delegate:PMTableViewDelegate, dataSource:PMTableViewDataSource, tableView:PMTableView, file:String, line:Int) {
    mTableView = tableView
    mDelegate = delegate
    mDataSource = dataSource
    super.init ()
  }

  //••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••
  
  override func updateOutlet () {
  //---------------- So tableViewSelectionDidChange is not called
    mDelegate.willReload ()
  //---------------- Reload data
    mTableView.reloadData ()
  //---------------- Update table view selection
    var newTableViewSelectionIndexSet = self.mDelegate.selectedObjectIndexSet ()
    // NSLog ("newTableViewSelectionIndexSet %@", newTableViewSelectionIndexSet)
    self.mTableView.selectRowIndexes (newTableViewSelectionIndexSet, byExtendingSelection:false)
  //---------------- Scroll first selected row to visible
    if newTableViewSelectionIndexSet.count > 0 {
      self.mTableView.scrollRowToVisible (newTableViewSelectionIndexSet.firstIndex)
    }
  //---------------- So tableViewSelectionDidChange will be called on user change
    mDelegate.didReload ()
  }

  //••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

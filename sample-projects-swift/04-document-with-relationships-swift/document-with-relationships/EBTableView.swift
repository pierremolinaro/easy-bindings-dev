import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    EBTableView                                                                                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(EBTableView) class EBTableView : NSTableView, EBUserClassName {

  //••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••

  required init? (coder: NSCoder) {
    super.init (coder:coder)
    noteObjectAllocation (self)
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  override init (frame:NSRect) {
    super.init (frame:frame)
    noteObjectAllocation (self)
  }
  
  //••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••

  deinit {
    noteObjectDeallocation (self)
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    EBTableViewDataSource                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(EBTableViewDataSource) protocol EBTableViewDataSource : NSTableViewDataSource {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    EBTableViewDataSource                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(EBTableViewDelegate) protocol EBTableViewDelegate : NSTableViewDelegate {
  func selectedObjectIndexSet () -> NSIndexSet
  func willReload ()
  func didReload ()
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Controller Controller_EBTableView_controller                                                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_EBTableView_controller) class Controller_EBTableView_controller : EBOutletEvent {

  private var mDelegate : EBTableViewDelegate
  private var mTableView : EBTableView

  //••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••

  init (delegate:EBTableViewDelegate, tableView:EBTableView, file:String, line:Int) {
    mTableView = tableView
    mDelegate = delegate
    super.init ()
  }

  //••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••
  
  override func updateOutlet () {
  //---------------- So tableViewSelectionDidChange is not called
    mDelegate.willReload ()
  //---------------- Reload data
    mTableView.reloadData ()
  //---------------- Update table view selection
    let newTableViewSelectionIndexSet = self.mDelegate.selectedObjectIndexSet ()
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
import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    EBTableView                                                                                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(EBTableView) class EBTableView : NSTableView, EBUserClassName {

  //····················································································································

  required init? (coder: NSCoder) {
    super.init (coder:coder)
    noteObjectAllocation (self)
  }

  //····················································································································

  override init (frame:NSRect) {
    super.init (frame:frame)
    noteObjectAllocation (self)
  }
  
  //····················································································································

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
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Controller Controller_EBTableView_controller                                                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Controller_EBTableView_controller) final class Controller_EBTableView_controller : EBOutletEvent {

  private let mDelegate : EBTableViewDelegate
  private let mTableView : EBTableView

  //····················································································································

  init (delegate:EBTableViewDelegate, tableView:EBTableView, file:String, line:Int) {
    mTableView = tableView
    mDelegate = delegate
    super.init ()
  }

  //····················································································································
  
  override func sendUpdateEvent () {
    mTableView.setDelegate (nil)
  //---------------- So tableViewSelectionDidChange is not called
//    mDelegate.willReload ()
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
//    mDelegate.didReload ()
    mTableView.setDelegate (mDelegate)
  }

  //····················································································································
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

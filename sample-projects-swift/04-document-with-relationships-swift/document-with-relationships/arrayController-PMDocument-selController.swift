import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

private let DEBUG_EVENT = false

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//    DataSource_PMDocument_selController
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

@objc(DataSource_PMDocument_selController)
final class DataSource_PMDocument_selController : TransientArrayOf_NameEntity, EBTableViewDataSource {

  //····················································································································
  //    Sort descriptors
  //····················································································································
  
  private var mSortDescriptors : [NSSortDescriptor] = [NSSortDescriptor] () {
    didSet {
      postEvent () // Force sorting
    }
  }

  //····················································································································
  
  func setSortDescriptors (sortDescriptors : [NSSortDescriptor]) {
    mSortDescriptors = sortDescriptors
  }
  
  //····················································································································
  //    T A B L E V I E W    D A T A S O U R C E : tableView:sortDescriptorsDidChange:
  //····················································································································

  func tableView (aTableView: NSTableView,
                  sortDescriptorsDidChange oldDescriptors: [NSSortDescriptor]) {
    if DEBUG_EVENT {
      print ("\(__FUNCTION__)")
    }
    mSortDescriptors = aTableView.sortDescriptors
  }

  //····················································································································
  //    T A B L E V I E W    D A T A S O U R C E : numberOfRowsInTableView
  //····················································································································

  func numberOfRowsInTableView (_ : NSTableView) -> Int {
    if DEBUG_EVENT {
      print ("\(__FUNCTION__)")
    }
    switch prop {
    case .noSelection, .multipleSelection :
      return 0
    case .singleSelection (let v) :
      return v.count
    }
  }

  //····················································································································

}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//    SelectedSet_PMDocument_selController
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

@objc(SelectedSet_PMDocument_selController)
final class SelectedSet_PMDocument_selController : EBAbstractProperty {

  //····················································································································

  private var mSet = Set<NameEntity> () {
    didSet {
      if mSet != oldValue {
        postEvent ()
      }
    }
  }

  //····················································································································

}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//    ArrayController_PMDocument_selController
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

@objc(ArrayController_PMDocument_selController)
final class ArrayController_PMDocument_selController : EBObject, EBTableViewDelegate {

  private var mModel : ReadOnlyArrayOf_NameEntity?

  var sortedArray = DataSource_PMDocument_selController ()

  var selectedArray = TransientArrayOf_NameEntity ()

  private var mSelectedSet = SelectedSet_PMDocument_selController ()

  private var mTableViewControllerArray = [Controller_EBTableView_controller] ()

  //····················································································································
  //    init
  //····················································································································

  override init () {
    super.init ()
  //--- Set selected array compute function
    selectedArray.computeFunction = {
      switch self.sortedArray.prop {
      case .noSelection :
        return .noSelection
      case .multipleSelection :
        return .multipleSelection
      case .singleSelection (let v) :
        var result = [NameEntity] ()
        for object in v {
          if self.mSelectedSet.mSet.contains (object) {
            result.append (object)
          }
        }
        return .singleSelection (result)
      }
    }
  //--- Set sorted array compute function
    sortedArray.computeFunction = { [weak self] in
      let result = self?.filterAndSort () ?? .noSelection
/*      let newObjectSet : Set<NameEntity>
      switch result {
      case .noSelection, .multipleSelection :
        newObjectSet = Set ()
      case .singleSelection (let array) :
        newObjectSet = Set (array)
      }
   //--- Update object set
      self?.mSelectedSet.mSet = newObjectSet */
      return result
    }
  }

  //····················································································································

  private func filterAndSort () -> EBProperty < [NameEntity] > {
    if let model = mModel {
      switch model.prop {
      case .noSelection :
        return .noSelection
      case .multipleSelection :
        return .multipleSelection
      case .singleSelection (let modelArray) :
        let array = NSMutableArray (array:modelArray)
        array.sortUsingDescriptors (sortedArray.mSortDescriptors)
        let sortedObjectArray = array.mutableCopy () as! [NameEntity]
        return .singleSelection (sortedObjectArray)
     }
    }else{
      return .noSelection
    }
  }

  //····················································································································
  //    Explorer
  //····················································································································

  final func addExplorer (name : String,
                          inout y : CGFloat,
                          view : NSView) {
  }

  //····················································································································
  //    bind_modelAndView
  //····················································································································

  func bind_modelAndView (model:ReadOnlyArrayOf_NameEntity, tableViewArray:[EBTableView], file:String, line:Int) {
    if DEBUG_EVENT {
      print ("\(__FUNCTION__)")
    }
  //--- Add observers
    mModel = model
    model.addEBObserver (sortedArray)
    sortedArray.addEBObserver (selectedArray)
    mSelectedSet.addEBObserver (selectedArray)
  //--- Add observed properties (for filtering)
  //--- Bind table views
    for tableView in tableViewArray {
      bind_tableView (tableView, file:file, line:line)
    }
  }

  //····················································································································
  //    bind_tableView
  //····················································································································

  private func bind_tableView (tableView:EBTableView,
                               file:String,
                               line:Int) {
    if DEBUG_EVENT {
      print ("\(__FUNCTION__)")
    }
    let tableViewController = Controller_EBTableView_controller (
      delegate:self,
      tableView:tableView,
      file:file,
      line:line
    )
  //--- Check 'name' column
    if let anyObject: NSView = tableView.makeViewWithIdentifier ("name", owner:self) {
      if let unwrappedTableCellView = anyObject as? EBTextField_Cell {
        unwrappedTableCellView.checkOutlet ("name", file:file, line:line)
      }else{
        presentErrorWindow (file,
          line: line,
          errorMessage:"\"name\" column cell view is not an instance of EBTextField_Cell"
        )
      }
    }else{
      presentErrorWindow (file,
        line: line,
        errorMessage:"\"name\" column view unknown, or table view is NSCell-based"
      )
    }
    if let columnName : NSTableColumn = tableView.tableColumnWithIdentifier ("name") {
      columnName.sortDescriptorPrototype = NSSortDescriptor (key:"name_kvc", ascending:true)
    }
  //--- Check 'int' column
    if let anyObject: NSView = tableView.makeViewWithIdentifier ("int", owner:self) {
      if let unwrappedTableCellView = anyObject as? EBIntField_Cell {
        unwrappedTableCellView.checkOutlet ("int", file:file, line:line)
      }else{
        presentErrorWindow (file,
          line: line,
          errorMessage:"\"int\" column cell view is not an instance of EBIntField_Cell"
        )
      }
    }else{
      presentErrorWindow (file,
        line: line,
        errorMessage:"\"int\" column view unknown, or table view is NSCell-based"
      )
    }
    if let columnName : NSTableColumn = tableView.tableColumnWithIdentifier ("int") {
      columnName.sortDescriptorPrototype = NSSortDescriptor (key:"aValue_kvc", ascending:true)
    }
  //--- Set descriptors from first column of table view
    let columns = tableView.tableColumns as NSArray
    if columns.count > 0 {
      let firstColumn = columns [0] as! NSTableColumn
      if let sdp = firstColumn.sortDescriptorPrototype {
        let sortDescriptorArray = NSArray (object:sdp) as! [NSSortDescriptor]
        tableView.sortDescriptors = sortDescriptorArray
        sortedArray.setSortDescriptors (sortDescriptorArray)
      }
    }
    sortedArray.addEBObserver (tableViewController)
    mTableViewControllerArray.append (tableViewController)
 //--- Set table view delegate and data source
    tableView.setDataSource (sortedArray)
    tableView.setDelegate (self)
  }

  //····················································································································
  //    unbind_modelAndView
  //····················································································································

  func unbind_modelAndView () {
    if DEBUG_EVENT {
      print ("\(__FUNCTION__)")
    }
    mModel?.removeEBObserver (sortedArray)
    sortedArray.removeEBObserver (selectedArray)
    mSelectedSet.removeEBObserver (selectedArray)
  //--- Remode observed properties (for filtering)
    for tvc in mTableViewControllerArray {
      sortedArray.removeEBObserver (tvc)
    }
    selectedArray.computeFunction = nil
    sortedArray.computeFunction = nil
    mSelectedSet.mSet = Set ()
    mTableViewControllerArray = []
    mModel = nil
 }

 //····················································································································

  func selectedObjectIndexSet () -> NSIndexSet {
    switch sortedArray.prop {
    case .noSelection, .multipleSelection :
       return NSIndexSet ()
    case .singleSelection (let v) :
    //--- Dictionary of object indexes
      var objectDictionary = [NameEntity : Int] ()
      for (index, object) in v.enumerate () {
        objectDictionary [object] = index
      }
      let indexSet = NSMutableIndexSet ()
      for object in mSelectedSet.mSet {
        if let index = objectDictionary [object] {
          indexSet.addIndex (index)
        }
      }
      return indexSet
    }
  }

  //····················································································································
  //    T A B L E V I E W    D E L E G A T E : tableViewSelectionDidChange:
  //····················································································································

  func tableViewSelectionDidChange (notication : NSNotification) {
    switch sortedArray.prop {
    case .noSelection, .multipleSelection :
      break
    case .singleSelection (let v) :
      let tableView = notication.object as! EBTableView
      var newSelectedObjectSet = Set <NameEntity> ()
      for index in tableView.selectedRowIndexes {
        newSelectedObjectSet.insert (v.objectAtIndex (index, file: __FILE__, line: __LINE__))
      }
      mSelectedSet.mSet = newSelectedObjectSet
    }
  }

  //····················································································································
  //    T A B L E V I E W    D E L E G A T E : tableView:viewForTableColumn:row:
  //····················································································································

  func tableView (tableView : NSTableView,
                  viewForTableColumn inTableColumn: NSTableColumn?,
                  row inRowIndex: Int) -> NSView? {
    if DEBUG_EVENT {
      print ("\(__FUNCTION__)")
    }
    switch sortedArray.prop {
    case .noSelection, .multipleSelection :
      return nil
    case .singleSelection (let v) :
      let columnIdentifier = inTableColumn!.identifier
      let result : NSTableCellView = tableView.makeViewWithIdentifier (columnIdentifier, owner:self) as! NSTableCellView
      let object = v.objectAtIndex (inRowIndex, file:__FILE__, line:__LINE__)
      if columnIdentifier == "name" {
        if let cell : EBTextField_Cell = result as? EBTextField_Cell {
          cell.configureWithProperty (object.name)
        }
      }else if columnIdentifier == "int" {
        if let cell : EBIntField_Cell = result as? EBIntField_Cell {
          cell.configureWithProperty (object.aValue)
        }
      }else{
        NSLog ("Unknown column '\(columnIdentifier)'")
      }
      return result
    }
  }
 

  //····················································································································

}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————


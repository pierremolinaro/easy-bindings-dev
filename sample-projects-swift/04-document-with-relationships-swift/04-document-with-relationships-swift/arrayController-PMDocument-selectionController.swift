import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    DataSource_PMDocument_selectionController                                                                        *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class DataSource_PMDocument_selectionController : ReadOnlyArrayOf_NameEntity, PMTableViewDataSource {
  var computeFunction : Optional<() -> [NameEntity]?>

  private weak var mModel : ReadOnlyArrayOf_NameEntity? // TransientArrayOf_NameEntity?
  var count = PMTransientProperty_Int ()

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  override init () {
    super.init ()
    count.computeFunction = { [weak self] in
      if let unwrappedSelf = self, model = unwrappedSelf.mModel {
        return unwrappedSelf.prop.count
      }else{
        return 0
      }
    }
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  override func postEvent () {
    if (prop_cache != nil) {
      prop_cache = nil
      count.postEvent ()
      super.postEvent ()
    }
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  private func filterAndSort () -> Array<NameEntity> {
    let sortedObjectArray : Array<NameEntity>
    if let model = mModel {
        var currentObjectArrayAsMutableArray = NSMutableArray (array:model.prop)
      currentObjectArrayAsMutableArray.sortUsingDescriptors (mSortDescriptors)
      sortedObjectArray = currentObjectArrayAsMutableArray.mutableCopy () as! Array<NameEntity>
    }else{
      sortedObjectArray = Array<NameEntity> ()
    }
    return sortedObjectArray
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  
  private var mSet = Set<NameEntity> ()

  var prop_cache : Optional <Array<NameEntity> >

  override var prop : Array<NameEntity> {
    get {
      if prop_cache == nil {
        prop_cache = filterAndSort ()
        let newObjectSet = Set<NameEntity> (prop_cache!)
        if mSet != newObjectSet {
        //--- Removed object set
          var removedObjectSet = mSet
          removedObjectSet.subtractInPlace (newObjectSet)
          for managedObject : NameEntity in removedObjectSet {
            for observer in mObserversOf_name {
              managedObject.name.removeObserver (observer, postEvent:true)
            }
          }
          for managedObject : NameEntity in removedObjectSet {
            for observer in mObserversOf_aValue {
              managedObject.aValue.removeObserver (observer, postEvent:true)
            }
          }
        //--- Added object set
          var addedObjectSet = newObjectSet
          addedObjectSet.subtractInPlace (mSet)
          for managedObject : NameEntity in addedObjectSet {
            for observer in mObserversOf_name {
              managedObject.name.addObserver (observer, postEvent:true)
            }
          }
           for managedObject : NameEntity in addedObjectSet {
            for observer in mObserversOf_aValue {
              managedObject.aValue.addObserver (observer, postEvent:true)
            }
          }
        //--- Update object set
          mSet = newObjectSet
        }
      }
      return prop_cache!
    }
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    Sort descriptors                                                                                               *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  
  private var mSortDescriptors : [AnyObject] = [AnyObject] () {
    didSet {
      postEvent () // Force sorting
    }
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  
  func setSortDescriptors (sortDescriptors : [AnyObject]) {
    mSortDescriptors = sortDescriptors
  }
  
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    T A B L E V I E W    D A T A S O U R C E : tableView:sortDescriptorsDidChange:                                 *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  func tableView (aTableView: NSTableView,
                  sortDescriptorsDidChange oldDescriptors: [AnyObject]) {
    // NSLog ("%@", __FUNCTION__)
    mSortDescriptors = aTableView.sortDescriptors
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    T A B L E V I E W    D A T A S O U R C E : numberOfRowsInTableView                                             *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  func numberOfRowsInTableView (NSTableView) -> Int {
    // NSLog ("%@ (%ld objects)", __FUNCTION__, prop.count)
    return prop.count
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    Delegate_PMDocument_selectionController                                                                          *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Delegate_PMDocument_selectionController) class Delegate_PMDocument_selectionController : PMAbstractProperty, PMTableViewDelegate {
  private var mTableView : PMTableView
  private var mSet = Set<NameEntity> ()
  private var mSetShouldBeComputed = true
  private var mSortedArray : DataSource_PMDocument_selectionController
  private var mIgnoreTableViewSelectionDidChange = true
  var count = PMTransientProperty_Int ()

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  init (tableView:PMTableView, model:DataSource_PMDocument_selectionController) {
    mTableView = tableView
    mSortedArray = model
    super.init ()
    mTableView.setDelegate (self)
    count.computeFunction = { [weak self] in
      if let unwrappedSelf = self {
        return unwrappedSelf.prop.count
      }else{
        return 0
      }
    }
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  
  override func postEvent () {
    if !mSetShouldBeComputed {
      mSetShouldBeComputed = true
      count.postEvent ()
      super.postEvent ()
    }
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  
  var prop : Set<NameEntity> {
    get {
      if mSetShouldBeComputed {
        mSetShouldBeComputed = false
        // NSLog ("mSet %d", mSet.count)
        mSet.intersectInPlace (mSortedArray.prop)
        // NSLog ("mSet %d", mSet.count)
        if (mSet.count == 0) && (mSortedArray.prop.count > 0) {
          mSet.insert (mSortedArray.prop [0])
        }
      //--- DEBUG :Dictionary of object indexes
        /* var objectDictionary = [NameEntity : Int] ()
        for (index, object) in enumerate (mSortedArray.prop) {
          objectDictionary [object] = index
        }
        for object in mSet {
          if let index = objectDictionary [object] {
            NSLog ("SELECTED : %d, %@", index, object)
          }
        } */
      //--- DEBUG end
      }
      return mSet
    }
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  func setProp (value : Set<NameEntity>) {
    mSet = value
    postEvent ()
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  func selectedObjectIndexSet () -> NSIndexSet {
  //--- Dictionary of object indexes
    var objectDictionary = [NameEntity : Int] ()
    for (index, object) in enumerate (mSortedArray.prop) {
      objectDictionary [object] = index
    }
    var indexSet = NSMutableIndexSet ()
    for object in prop {
      if let index = objectDictionary [object] {
        indexSet.addIndex (index)
      }
    }
    return indexSet
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    T A B L E V I E W    D E L E G A T E : tableViewSelectionDidChange:                                            *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  func tableViewSelectionDidChange (notication : NSNotification) {
    // NSLog ("%@ %d", __FUNCTION__, mIgnoreTableViewSelectionDidChange)
    if !mIgnoreTableViewSelectionDidChange {
      var newSelectedObjectSet = Set <NameEntity> ()
      for index in mTableView.selectedRowIndexes {
        newSelectedObjectSet.insert (mSortedArray.prop.objectAtIndex (index, file: __FILE__, line: __LINE__))
      }
      setProp (newSelectedObjectSet)
    }
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    T A B L E V I E W    D E L E G A T E : tableView:viewForTableColumn:row:                                       *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  func tableView (tableView : NSTableView,
                  viewForTableColumn inTableColumn: NSTableColumn?,
                  row inRowIndex: Int) -> NSView? {
 //   NSLog ("%@, row %d, column %@", __FUNCTION__, inRowIndex, inTableColumn!.identifier)
    let columnIdentifier = inTableColumn!.identifier
    var result : NSTableCellView = tableView.makeViewWithIdentifier (columnIdentifier, owner:self) as! NSTableCellView
    result.textField?.tag = inRowIndex
    let object = mSortedArray.prop.objectAtIndex (inRowIndex, file:__FILE__, line:__LINE__)
    if columnIdentifier == "name" {
    //--- From cell-String-PMTextField.txt file
      result.textField?.stringValue = object.name.prop
      result.textField?.target = self
      result.textField?.action = "set_name_Action:"
      let tf : PMTextField = result.textField as! PMTextField
    //--- End
    }else if columnIdentifier == "int" {
    //--- From cell-Int-PMNumberField.txt file
      let tf : PMNumberField = result.textField as! PMNumberField
      tf.myIntegerValue = object.aValue.prop
      tf.target = self
      tf.action = "set_aValue_Action:"
    //--- end
    }
    return result
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  func willReload () {
    mIgnoreTableViewSelectionDidChange = true
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  
  func didReload () {
    mIgnoreTableViewSelectionDidChange = false
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  func set_name_Action (sender : PMTextField) {
    let row = sender.tag
    let object = mSortedArray.prop.objectAtIndex (row, file:__FILE__, line:__LINE__)
    object.name.validateAndSetProp (
      sender.stringValue,
      windowForSheet:sender.window,
      discardFunction: { object.name.setProp (sender.stringValue) }
    )
  }
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  func set_aValue_Action (sender : PMNumberField) {
    let row = sender.tag
    let object = mSortedArray.prop.objectAtIndex (row, file:__FILE__, line:__LINE__)
    object.aValue.validateAndSetProp (
      sender.integerValue,
      windowForSheet:sender.window,
      discardFunction: { object.aValue.setProp (sender.integerValue) }
    )
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    ArrayController_PMDocument_selectionController                                                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class ArrayController_PMDocument_selectionController : PMObject {
  private let mAllowsEmptySelection = false
  private let mAllowsMultipleSelection = true

  var sortedArray = DataSource_PMDocument_selectionController ()

  var selectedArray = TransientArrayOf_NameEntity ()

  private var mSelectedSet : Delegate_PMDocument_selectionController?

  private var mTableViewController : Controller_PMTableView_controller?

  private var mModel : ReadOnlyArrayOf_NameEntity?
 
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    init                                                                                                           *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  override init () {
    super.init ()
    selectedArray.computeFunction = {
      var result = Array<NameEntity> ()
      if let selectedSet = self.mSelectedSet {
        for object in self.sortedArray.prop {
          if selectedSet.prop.contains (object) {
            result.append (object)
          }
        }
      }
      return result
    }
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    bind_modelAndView                                                                                              *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  func bind_modelAndView (model:ReadOnlyArrayOf_NameEntity, tableView:PMTableView, file:String, line:Int) {
    mModel = model
    let selectedSet = Delegate_PMDocument_selectionController (tableView:tableView, model:sortedArray)
    mSelectedSet = selectedSet
    sortedArray.mModel = model
    let tableViewController = Controller_PMTableView_controller (
      delegate:selectedSet,
      dataSource:sortedArray,
      tableView:tableView,
      file:file,
      line:line
    )
    mTableViewController = tableViewController
    tableView.allowsEmptySelection = mAllowsEmptySelection
    tableView.allowsMultipleSelection = mAllowsMultipleSelection
  //--- Check 'name' column
    if let anyObject: AnyObject = tableView.makeViewWithIdentifier ("name", owner:self) {
      if let unwrappedTableCellView = anyObject as? NSTableCellView {
        if !(unwrappedTableCellView.textField is PMTextField) {
          presentErrorWindow (file, line, "\"name\" column view is not an instance of PMTextField")
        }
      }else{
        presentErrorWindow (file, line, "\"name\" column cell view is not an instance of NSTableCellView")
      }
    }else{
      presentErrorWindow (file, line, "\"name\" column view unknown")
    }
    if let columnName : NSTableColumn = tableView.tableColumnWithIdentifier ("name") {
      columnName.sortDescriptorPrototype = NSSortDescriptor (key:"name_keyCodingValue", ascending:true)
    }
  //--- Check 'int' column
    if let anyObject: AnyObject = tableView.makeViewWithIdentifier ("int", owner:self) {
      if let unwrappedTableCellView = anyObject as? NSTableCellView {
        if !(unwrappedTableCellView.textField is PMNumberField) {
          presentErrorWindow (file, line, "\"int\" column view is not an instance of PMNumberField")
        }
      }else{
        presentErrorWindow (file, line, "\"int\" column cell view is not an instance of NSTableCellView")
      }
    }else{
      presentErrorWindow (file, line, "\"int\" column view unknown")
    }
    if let columnName : NSTableColumn = tableView.tableColumnWithIdentifier ("int") {
      columnName.sortDescriptorPrototype = NSSortDescriptor (key:"aValue_keyCodingValue", ascending:true)
    }
  //--- Set descriptors from first column of table view
    let columns = tableView.tableColumns as NSArray
    if columns.count > 0 {
      let firstColumn = columns [0] as! NSTableColumn
      if let sdp = firstColumn.sortDescriptorPrototype {
        let sortDescriptorArray = NSArray (object:sdp) as! [AnyObject]
        tableView.sortDescriptors = sortDescriptorArray
        sortedArray.setSortDescriptors (sortDescriptorArray)
      }
    }
  //--- Add observers
    model.addObserverOf_name (sortedArray, postEvent:true)
    model.addObserverOf_aValue (sortedArray, postEvent:true)
    model.addObserver (sortedArray, postEvent:true)
    sortedArray.addObserver (tableViewController, postEvent:true)
    sortedArray.addObserver (selectedSet, postEvent:true)
    selectedSet.addObserver (selectedArray, postEvent:true)
  //--- Set table view delegate and data source
    tableView.setDataSource (sortedArray)
    tableView.setDelegate (selectedSet)
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    unbind_modelAndView                                                                                            *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  func unbind_modelAndView () {
    mModel?.removeObserverOf_name (sortedArray, postEvent:false)
    mModel?.removeObserverOf_aValue (sortedArray, postEvent:false)
    mModel?.removeObserver (sortedArray, postEvent:false)
    sortedArray.removeObserver (mTableViewController!, postEvent:false)
    sortedArray.removeObserver (mSelectedSet!, postEvent:false)
    mSelectedSet?.removeObserver (selectedArray, postEvent:false)
    selectedArray.computeFunction = nil
    mTableViewController = nil
    mSelectedSet = nil
    mModel = nil
  }
 

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


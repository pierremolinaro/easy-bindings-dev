import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    DataSource_PMDocument_selectionController                                                                        *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class DataSource_PMDocument_selectionController : ReadOnlyArrayOf_NameEntity, PMTableViewDataSource {
  private weak var mModel : ReadOnlyArrayOf_NameEntity?
  var count = PMTransientProperty_Int ()

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  override init () {
    super.init ()
    count.computeFunction = { [weak self] in
      if let unwrappedSelf = self, model = unwrappedSelf.mModel {
        return (unwrappedSelf.prop.0.count, unwrappedSelf.prop.1)
      }else{
        return (0, .noSelection)
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

  private func filterAndSort () -> (Array<NameEntity>, PMSelectionKind) {
    let sortedObjectArray : Array<NameEntity>
    var selection = PMSelectionKind.singleSelection
    if let model = mModel {
      selection = model.prop.1
      var currentObjectArrayAsMutableArray = NSMutableArray (array:model.prop.0)
      currentObjectArrayAsMutableArray.sortUsingDescriptors (mSortDescriptors)
      sortedObjectArray = currentObjectArrayAsMutableArray.mutableCopy () as! Array<NameEntity>
    }else{
      sortedObjectArray = Array<NameEntity> ()
      selection = .noSelection
    }
    return (sortedObjectArray, selection)
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  
  private var mSet = Set<NameEntity> ()

  var prop_cache : Optional < (Array<NameEntity>, PMSelectionKind) >

  override var prop : (Array<NameEntity>, PMSelectionKind) {
    get {
      if prop_cache == nil {
        prop_cache = filterAndSort ()
        let newObjectSet = Set<NameEntity> (prop_cache!.0)
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
    return prop.0.count
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    Delegate_PMDocument_selectionController                                                                          *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Delegate_PMDocument_selectionController) class Delegate_PMDocument_selectionController : PMAbstractProperty, PMTableViewDelegate {
  private var mSet = Set<NameEntity> ()
  private var mSetShouldBeComputed = true
  private var mSortedArray : DataSource_PMDocument_selectionController
  private var mIgnoreTableViewSelectionDidChange = true
  var count = PMTransientProperty_Int ()

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  init (model:DataSource_PMDocument_selectionController) {
    mSortedArray = model
    super.init ()
    count.computeFunction = { [weak self] in
      if let unwrappedSelf = self {
        return (unwrappedSelf.prop.0.count, unwrappedSelf.prop.1)
      }else{
        return (0, .noSelection)
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
  
  var prop : (Set<NameEntity>, PMSelectionKind) {
    get {
      if mSetShouldBeComputed {
        mSetShouldBeComputed = false
        // NSLog ("mSet %d", mSet.count)
        mSet.intersectInPlace (mSortedArray.prop.0)
        // NSLog ("mSet %d", mSet.count)
        if (mSet.count == 0) && (mSortedArray.prop.0.count > 0) {
          mSet.insert (mSortedArray.prop.0 [0])
        }
      //--- DEBUG :Dictionary of object indexes
        /* var objectDictionary = [NameEntity : Int] ()
        for (index, object) in enumerate (mSortedArray.prop.0) {
          objectDictionary [object] = index
        }
        for object in mSet {
          if let index = objectDictionary [object] {
            NSLog ("SELECTED : %d, %@", index, object)
          }
        } */
      //--- DEBUG end
      }
      return (mSet, mSortedArray.prop.1)
    }
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  func setProp (value : Set<NameEntity>) {
    mSet = value
    postEvent ()
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  func selectedObjectIndexSet () -> NSIndexSet {
    var indexSet = NSMutableIndexSet ()
    if mSortedArray.prop.1 == .singleSelection {
    //--- Dictionary of object indexes
      var objectDictionary = [NameEntity : Int] ()
      for (index, object) in enumerate (mSortedArray.prop.0) {
        objectDictionary [object] = index
      }
      for object in prop.0 {
        if let index = objectDictionary [object] {
          indexSet.addIndex (index)
        }
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
      let tableView = notication.object as! PMTableView
      var newSelectedObjectSet = Set <NameEntity> ()
      for index in tableView.selectedRowIndexes {
        newSelectedObjectSet.insert (mSortedArray.prop.0.objectAtIndex (index, file: __FILE__, line: __LINE__))
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
    let object = mSortedArray.prop.0.objectAtIndex (inRowIndex, file:__FILE__, line:__LINE__)
    if columnIdentifier == "name" {
    //--- From cell-String-PMTextField.txt file
     let tf : PMTextField = result.textField as! PMTextField
      switch object.name.prop.1 {
      case .noSelection :
        tf.stringValue = "No Selection"
        tf.enabled = false
      case .singleSelection :
        tf.stringValue = object.name.prop.0
        tf.enabled = true
        tf.target = self
        tf.action = "set_name_Action:"
       case .multipleSelection :
        tf.stringValue = "Multiple Selection"
        tf.enabled = false
     }
    //--- End
    }else if columnIdentifier == "int" {
    //--- From cell-Int-PMNumberField.txt file
      let tf : PMNumberField = result.textField as! PMNumberField
      switch object.aValue.prop.1 {
      case .noSelection :
        tf.stringValue = "No Selection"
        tf.enabled = false
      case .singleSelection :
        tf.integerValue = object.aValue.prop.0
        tf.enabled = true
        tf.target = self
        tf.action = "set_aValue_Action:"
       case .multipleSelection :
        tf.stringValue = "Multiple Selection"
        tf.enabled = false
     }
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
    let object = mSortedArray.prop.0.objectAtIndex (row, file:__FILE__, line:__LINE__)
    object.name.validateAndSetProp (sender.stringValue, windowForSheet:sender.window)
  }
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  func set_aValue_Action (sender : PMNumberField) {
    let row = sender.tag
    let object = mSortedArray.prop.0.objectAtIndex (row, file:__FILE__, line:__LINE__)
    object.aValue.validateAndSetProp (sender.integerValue, windowForSheet:sender.window)
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

  private var mTableViewControllerArray = [Controller_PMTableView_controller] ()

  private var mModel : ReadOnlyArrayOf_NameEntity?
 
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    init                                                                                                           *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  override init () {
    super.init ()
    selectedArray.computeFunction = {
      var result = Array<NameEntity> ()
      var selection = PMSelectionKind.singleSelection
      if let selectedSet = self.mSelectedSet {
        selection = self.sortedArray.prop.1 & selectedSet.prop.1
        for object in self.sortedArray.prop.0 {
          if selectedSet.prop.0.contains (object) {
            result.append (object)
          }
        }
      }
      if selection != .singleSelection {
        result = Array<NameEntity> ()
      }
      return (result, selection)
    }
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    bind_modelAndView                                                                                              *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  func bind_modelAndView (model:ReadOnlyArrayOf_NameEntity, tableViewArray:[PMTableView], file:String, line:Int) {
    mModel = model
    sortedArray.mModel = model
    let selectedSet = Delegate_PMDocument_selectionController (model:sortedArray)
    mSelectedSet = selectedSet
    for tableView in tableViewArray {
      let tableViewController = Controller_PMTableView_controller (
        delegate:selectedSet,
        tableView:tableView,
        file:file,
        line:line
      )
      mTableViewControllerArray.append (tableViewController)
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
      sortedArray.addObserver (tableViewController, postEvent:true)
      selectedSet.addObserver (tableViewController, postEvent:true)
   //--- Set table view delegate and data source
      tableView.setDataSource (sortedArray)
      tableView.setDelegate (selectedSet)
   }
  //--- Add observers
    model.addObserverOf_name (sortedArray, postEvent:true)
    model.addObserverOf_aValue (sortedArray, postEvent:true)
    model.addObserver (sortedArray, postEvent:true)
    sortedArray.addObserver (selectedSet, postEvent:true)
    selectedSet.addObserver (selectedArray, postEvent:true)
  }

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*
  //    unbind_modelAndView                                                                                            *
  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

  func unbind_modelAndView () {
    mModel?.removeObserverOf_name (sortedArray, postEvent:false)
    mModel?.removeObserverOf_aValue (sortedArray, postEvent:false)
    mModel?.removeObserver (sortedArray, postEvent:false)
    if let selectedSet = mSelectedSet {
      sortedArray.removeObserver (selectedSet, postEvent:false)
    }
    mSelectedSet?.removeObserver (selectedArray, postEvent:false)
     for tableViewController in mTableViewControllerArray {
      sortedArray.removeObserver (tableViewController, postEvent:false)
      mSelectedSet?.removeObserver (tableViewController, postEvent:false)
    }
    mTableViewControllerArray = []
    selectedArray.computeFunction = nil
    mSelectedSet = nil
    mModel = nil
 }
 

  //•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••*

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


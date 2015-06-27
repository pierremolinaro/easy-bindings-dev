import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    DataSource_PMDocument_selController                                                                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class DataSource_PMDocument_selController : ReadOnlyArrayOf_NameEntity, EBTableViewDataSource {
  private weak var mModel : ReadOnlyArrayOf_NameEntity?
  var count = EBTransientProperty_Int ()

  //···················································································································*

  override init () {
    super.init ()
    count.computeFunction = { [weak self] in
      if let unwrappedSelf = self, model = unwrappedSelf.mModel {
        switch model.prop {
        case .noSelection :
          return .noSelection
        case .multipleSelection :
          return .multipleSelection
        case .singleSelection (let v) :
          return .singleSelection (v.count)
        }
      }else{
        return .noSelection
      }
    }
  }

  //···················································································································*

  override func postEvent () {
    if (prop_cache != nil) {
      prop_cache = nil
      count.postEvent ()
      super.postEvent ()
    }
  }

  //···················································································································*

  private func filterAndSort () -> EBProperty <Array<NameEntity> > {
    if let model = mModel {
      switch model.prop {
      case .noSelection :
        return .noSelection
      case .multipleSelection :
        return .multipleSelection
      case .singleSelection (let modelArray) :
        let array = NSMutableArray (array:modelArray)
        array.sortUsingDescriptors (mSortDescriptors)
        let sortedObjectArray = array.mutableCopy () as! Array<NameEntity>
        return .singleSelection (sortedObjectArray)
     }
    }else{
      return .noSelection
    }
  }

  //···················································································································*
  
  private var mSet = Set<NameEntity> ()

  var prop_cache : Optional < EBProperty <Array<NameEntity> > >

  override var prop : EBProperty <Array<NameEntity> > {
    get {
      if prop_cache == nil {
        prop_cache = filterAndSort ()
        let newObjectSet : Set<NameEntity>
        switch prop_cache! {
        case .noSelection, .multipleSelection :
          newObjectSet = Set<NameEntity> ()
        case .singleSelection (let v) :
          newObjectSet = Set<NameEntity> (v)
        }
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

  //···················································································································*
  //    Sort descriptors                                                                                               *
  //···················································································································*
  
  private var mSortDescriptors : [NSSortDescriptor] = [NSSortDescriptor] () {
    didSet {
      postEvent () // Force sorting
    }
  }

  //···················································································································*
  
  func setSortDescriptors (sortDescriptors : [NSSortDescriptor]) {
    mSortDescriptors = sortDescriptors
  }
  
  //···················································································································*
  //    T A B L E V I E W    D A T A S O U R C E : tableView:sortDescriptorsDidChange:                                 *
  //···················································································································*

  func tableView (aTableView: NSTableView,
                  sortDescriptorsDidChange oldDescriptors: [NSSortDescriptor]) {
    // NSLog ("%@", __FUNCTION__)
    mSortDescriptors = aTableView.sortDescriptors
  }

  //···················································································································*
  //    T A B L E V I E W    D A T A S O U R C E : numberOfRowsInTableView                                             *
  //···················································································································*

  func numberOfRowsInTableView (NSTableView) -> Int {
    // NSLog ("%@ (%ld objects)", __FUNCTION__, prop.count)
    switch prop {
    case .noSelection, .multipleSelection :
      return 0
    case .singleSelection (let v) :
      return v.count
    }
  }

  //···················································································································*

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    Delegate_PMDocument_selController                                                                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(Delegate_PMDocument_selController) class Delegate_PMDocument_selController : EBAbstractProperty, EBTableViewDelegate {
  private var mSet = Set<NameEntity> ()
  private var mSetShouldBeComputed = true
  private var mSortedArray : DataSource_PMDocument_selController
  private var mIgnoreTableViewSelectionDidChange = true
  var count = EBTransientProperty_Int ()

  //···················································································································*

  init (model:DataSource_PMDocument_selController) {
    mSortedArray = model
    super.init ()
    count.computeFunction = { [weak self] in
     if let unwSelf = self {
        switch unwSelf.prop {
        case .noSelection :
          return .noSelection
        case .multipleSelection :
          return .multipleSelection
        case .singleSelection (let v) :
          return .singleSelection (v.count)
        }
      }else{
        return .noSelection
      }
    }
  }

  //···················································································································*
  
  override func postEvent () {
    if !mSetShouldBeComputed {
      mSetShouldBeComputed = true
      count.postEvent ()
      super.postEvent ()
    }
  }

  //···················································································································*
  
  var prop : EBProperty <Set<NameEntity> > {
    get {
      if mSetShouldBeComputed {
        mSetShouldBeComputed = false
        // NSLog ("mSet %d", mSet.count)
        switch mSortedArray.prop {
        case .noSelection :
          return .noSelection
        case .multipleSelection :
          return .multipleSelection
        case .singleSelection (let v) :
          mSet.intersectInPlace (v)
          // NSLog ("mSet %d", mSet.count)
          if (mSet.count == 0) && (v.count > 0) {
            mSet.insert (v [0])
          }
        //--- DEBUG :Dictionary of object indexes
          /* var objectDictionary = [NameEntity : Int] ()
          for (index, object) in enumerate (v) {
            objectDictionary [object] = index
          }
          for object in mSet {
            if let index = objectDictionary [object] {
              NSLog ("SELECTED : %d, %@", index, object)
            }
          } */
        //--- DEBUG end
          return .singleSelection (mSet)
        }
      }else{
        switch mSortedArray.prop {
        case .noSelection :
          return .noSelection
        case .multipleSelection :
          return .multipleSelection
        case .singleSelection :
          return .singleSelection (mSet)
        }
      }
    }
  }

  //···················································································································*

  func setProp (value : Set<NameEntity>) {
    mSet = value
    postEvent ()
  }

  //···················································································································*

  func selectedObjectIndexSet () -> NSIndexSet {
    switch mSortedArray.prop {
    case .noSelection, .multipleSelection :
       return NSIndexSet ()
    case .singleSelection (let v) :
      switch prop {
      case .noSelection, .multipleSelection :
        return NSIndexSet ()
      case .singleSelection (let vv) :
      //--- Dictionary of object indexes
        var objectDictionary = [NameEntity : Int] ()
        for (index, object) in v.enumerate () {
          objectDictionary [object] = index
        }
        let indexSet = NSMutableIndexSet ()
        for object in vv {
          if let index = objectDictionary [object] {
            indexSet.addIndex (index)
          }
        }
        return indexSet
      }
    }
  }

  //···················································································································*
  //    T A B L E V I E W    D E L E G A T E : tableViewSelectionDidChange:                                            *
  //···················································································································*

  func tableViewSelectionDidChange (notication : NSNotification) {
    // NSLog ("%@ %d", __FUNCTION__, mIgnoreTableViewSelectionDidChange)
    if !mIgnoreTableViewSelectionDidChange {
      switch mSortedArray.prop {
      case .noSelection, .multipleSelection :
        break
      case .singleSelection (let v) :
        let tableView = notication.object as! EBTableView
        var newSelectedObjectSet = Set <NameEntity> ()
        for index in tableView.selectedRowIndexes {
          newSelectedObjectSet.insert (v.objectAtIndex (index, file: __FILE__, line: __LINE__))
        }
        setProp (newSelectedObjectSet)
      }
    }
  }

  //···················································································································*
  //    T A B L E V I E W    D E L E G A T E : tableView:viewForTableColumn:row:                                       *
  //···················································································································*

  func tableView (tableView : NSTableView,
                  viewForTableColumn inTableColumn: NSTableColumn?,
                  row inRowIndex: Int) -> NSView? {
 //   NSLog ("%@, row %d, column %@", __FUNCTION__, inRowIndex, inTableColumn!.identifier)
    switch mSortedArray.prop {
    case .noSelection, .multipleSelection :
      return nil
    case .singleSelection (let v) :
      let columnIdentifier = inTableColumn!.identifier
      let result : NSTableCellView = tableView.makeViewWithIdentifier (columnIdentifier, owner:self) as! NSTableCellView
      result.textField?.tag = inRowIndex
      let object = v.objectAtIndex (inRowIndex, file:__FILE__, line:__LINE__)
      if columnIdentifier == "name" {
      //--- From cell-String-EBTextField.txt file
        let tf : EBTextField = result.textField as! EBTextField
        switch object.name.prop {
        case .noSelection :
          tf.stringValue = "No Selection"
          tf.enabled = false
          tf.target = nil
          tf.action = ""
        case .singleSelection (let v) :
          tf.stringValue = v
          tf.enabled = true
          tf.target = self
          tf.action = "set_name_Action:"
         case .multipleSelection :
          tf.stringValue = "Multiple Selection"
          tf.enabled = false
          tf.target = nil
          tf.action = ""
        }
      //--- End
      }else if columnIdentifier == "int" {
      //--- From cell-Int-EBIntField.txt file
        let tf : EBIntField = result.textField as! EBIntField
        switch object.aValue.prop {
        case .noSelection :
          tf.stringValue = "No Selection"
          tf.enabled = false
          tf.target = nil
          tf.action = ""
        case .singleSelection (let v) :
          tf.integerValue = v
          tf.enabled = true
          tf.target = self
          tf.action = "set_aValue_Action:"
         case .multipleSelection :
          tf.stringValue = "Multiple Selection"
          tf.enabled = false
          tf.target = nil
          tf.action = ""
        }
      //--- end
      }
     return result
    }
  }

  //···················································································································*

  func willReload () {
    mIgnoreTableViewSelectionDidChange = true
  }

  //···················································································································*
  
  func didReload () {
    mIgnoreTableViewSelectionDidChange = false
  }

  //···················································································································*

  func set_name_Action (sender : EBTextField) {
    switch mSortedArray.prop {
    case .noSelection, .multipleSelection :
      break
    case .singleSelection (let v) :
      let row = sender.tag
      let object = v.objectAtIndex (row, file:__FILE__, line:__LINE__)
      object.name.validateAndSetProp (sender.stringValue, windowForSheet:sender.window)
    }
  }

  //···················································································································*

  func set_aValue_Action (sender : EBIntField) {
    switch mSortedArray.prop {
    case .noSelection, .multipleSelection :
      break
    case .singleSelection (let v) :
      let row = sender.tag
      let object = v.objectAtIndex (row, file:__FILE__, line:__LINE__)
      object.aValue.validateAndSetProp (sender.integerValue, windowForSheet:sender.window)
    }
  }

  //···················································································································*

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    ArrayController_PMDocument_selController                                                                         *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class ArrayController_PMDocument_selController : EBObject {
  private let mAllowsEmptySelection = false
  private let mAllowsMultipleSelection = true

  var sortedArray = DataSource_PMDocument_selController ()

  var selectedArray = TransientArrayOf_NameEntity ()

  private var mSelectedSet : Delegate_PMDocument_selController?

  private var mTableViewControllerArray = [Controller_EBTableView_controller] ()

  private var mModel : ReadOnlyArrayOf_NameEntity?
 
  //···················································································································*
  //    init                                                                                                           *
  //···················································································································*

  override init () {
    super.init ()
    selectedArray.computeFunction = {
      if let selectedSet = self.mSelectedSet {
        switch selectedSet.prop {
        case .noSelection :
          return .noSelection
        case .multipleSelection :
          return .multipleSelection
        case .singleSelection (let selSet) :
          switch self.sortedArray.prop {
          case .noSelection :
            return .noSelection
          case .multipleSelection :
            return .multipleSelection
          case .singleSelection (let v) :
            var result = Array<NameEntity> ()
            for object in v {
              if selSet.contains (object) {
                result.append (object)
              }
            }
            return .singleSelection (result)
          }
        }
      }else{
        return .noSelection
      }
    }
  }

  //···················································································································*
  //    bind_modelAndView                                                                                              *
  //···················································································································*

  func bind_modelAndView (model:ReadOnlyArrayOf_NameEntity, tableViewArray:[EBTableView], file:String, line:Int) {
    mModel = model
    sortedArray.mModel = model
    let selectedSet = Delegate_PMDocument_selController (model:sortedArray)
    mSelectedSet = selectedSet
    for tableView in tableViewArray {
      let tableViewController = Controller_EBTableView_controller (
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
          if !(unwrappedTableCellView.textField is EBTextField) {
            presentErrorWindow (file,
                                line: line,
                                errorMessage:"\"name\" column view is not an instance of EBTextField")
          }
        }else{
          presentErrorWindow (file,
                              line: line,
                              errorMessage:"\"name\" column cell view is not an instance of NSTableCellView")
        }
      }else{
        presentErrorWindow (file,
                            line: line,
                            errorMessage:"\"name\" column view unknown")
      }
      if let columnName : NSTableColumn = tableView.tableColumnWithIdentifier ("name") {
        columnName.sortDescriptorPrototype = NSSortDescriptor (key:"name_keyCodingValue", ascending:true)
      }
    //--- Check 'int' column
      if let anyObject: AnyObject = tableView.makeViewWithIdentifier ("int", owner:self) {
        if let unwrappedTableCellView = anyObject as? NSTableCellView {
          if !(unwrappedTableCellView.textField is EBIntField) {
            presentErrorWindow (file,
                                line: line,
                                errorMessage:"\"int\" column view is not an instance of EBIntField")
          }
        }else{
          presentErrorWindow (file,
                              line: line,
                              errorMessage:"\"int\" column cell view is not an instance of NSTableCellView")
        }
      }else{
        presentErrorWindow (file,
                            line: line,
                            errorMessage:"\"int\" column view unknown")
      }
      if let columnName : NSTableColumn = tableView.tableColumnWithIdentifier ("int") {
        columnName.sortDescriptorPrototype = NSSortDescriptor (key:"aValue_keyCodingValue", ascending:true)
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

  //···················································································································*
  //    unbind_modelAndView                                                                                            *
  //···················································································································*

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
 

  //···················································································································*

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


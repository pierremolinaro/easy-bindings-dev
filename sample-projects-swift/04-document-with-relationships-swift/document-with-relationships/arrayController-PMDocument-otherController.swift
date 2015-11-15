import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

private let DEBUG_EVENT = false

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//    DataSource_PMDocument_otherController
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

@objc(DataSource_PMDocument_otherController)
final class DataSource_PMDocument_otherController : TransientArrayOf_NameEntity, EBTableViewDataSource {

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
//    SelectedSet_PMDocument_otherController
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

@objc(SelectedSet_PMDocument_otherController)
final class SelectedSet_PMDocument_otherController : EBAbstractProperty {
  private let mAllowsEmptySelection : Bool
  private let mAllowsMultipleSelection : Bool
  private let mSortedArray : DataSource_PMDocument_otherController

  //····················································································································

  init (allowsEmptySelection : Bool,
        allowsMultipleSelection : Bool,
        sortedArray : DataSource_PMDocument_otherController) {
    mAllowsMultipleSelection = allowsMultipleSelection
    mAllowsEmptySelection = allowsEmptySelection
    mSortedArray = sortedArray
    super.init ()
  }

  //····················································································································

/*  private var mSet = Set<NameEntity> () {
    didSet {
      if mSet != oldValue {
        postEvent ()
      }
    }
  } */

  //····················································································································

  private var mPrivateSet = Set<NameEntity> () {
    didSet {
      if mPrivateSet != oldValue {
        postEvent ()
      }
    }
  }

  //····················································································································

  var mSet : Set<NameEntity> {
    set {
      var newSelectedSet = newValue
      switch mSortedArray.prop {
      case .noSelection, .multipleSelection :
        break ;
      case .singleSelection (let sortedArray) :
        if !mAllowsEmptySelection && (newSelectedSet.count == 0) && (sortedArray.count > 0) {
          newSelectedSet = Set (arrayLiteral: sortedArray [0])
        }else if !mAllowsMultipleSelection && (newSelectedSet.count > 1) {
          newSelectedSet = Set (arrayLiteral: newSelectedSet.first!)
        }
      }
      mPrivateSet = newSelectedSet
    }
    get {
      return mPrivateSet
    }
  }

  //····················································································································

}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//    ArrayController_PMDocument_otherController
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

@objc(ArrayController_PMDocument_otherController)
final class ArrayController_PMDocument_otherController : EBObject, EBTableViewDelegate {

  private var mModel : ToManyRelationship_MyRootEntity_mNames? = nil

  let sortedArray = DataSource_PMDocument_otherController ()

  let selectedArray = TransientArrayOf_NameEntity ()

  private let mSelectedSet : SelectedSet_PMDocument_otherController

  private var mTableViewDataSourceControllerArray = [DataSource_EBTableView_controller] ()
  private var mTableViewSelectionControllerArray = [Selection_EBTableView_controller] ()

  private let allowsEmptySelection = false
  private let allowsMultipleSelection = true
  
  //····················································································································
  //    init
  //····················································································································

  override init () {
    mSelectedSet = SelectedSet_PMDocument_otherController (
      allowsEmptySelection:allowsEmptySelection,
      allowsMultipleSelection:allowsMultipleSelection,
      sortedArray:sortedArray
    )
    super.init ()
  //--- Set selected array compute function
    setSelectedArrayComputeFunction ()
  //--- Set sorted array compute function
    setFilterAndSortFunction ()
  }

  //····················································································································

  private final func setSelectedArrayComputeFunction () {
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
  }

  //····················································································································

  private final func setFilterAndSortFunction () {
    sortedArray.computeFunction = {
      if let model = self.mModel {
        switch model.prop {
        case .noSelection :
          return .noSelection
        case .multipleSelection :
          return .multipleSelection
        case .singleSelection (let modelArray) :
          let array = NSMutableArray ()
          var isMultiple = false
          for object in modelArray {
            switch object.aValue.prop {
            case .noSelection :
              return .noSelection
            case .multipleSelection :
              isMultiple = true
            case .singleSelection (let v1) :
              if arrayControllerFilter_PMDocument_otherController (v1) {
                array.addObject (object)
              }
            }
          }
          if isMultiple {
            return .multipleSelection
          }else{
            array.sortUsingDescriptors (self.sortedArray.mSortDescriptors)
            let sortedObjectArray = array.mutableCopy () as! [NameEntity]
            return .singleSelection (sortedObjectArray)
          }
        }
      }else{
        return .noSelection
      }
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

  func bind_modelAndView (model:ToManyRelationship_MyRootEntity_mNames, tableViewArray:[EBTableView], file:String, line:Int) {
    if DEBUG_EVENT {
      print ("\(__FUNCTION__)")
    }
  //--- Add observers
    mModel = model
    model.addEBObserver (sortedArray)
    sortedArray.addEBObserver (mSelectedSet)
    mSelectedSet.addEBObserver (selectedArray)
  //--- Add observed properties (for filtering and sorting)
    model.addEBObserverOf_aValue (sortedArray)
    model.addEBObserverOf_name (sortedArray)
  //--- Bind table views
    for tableView in tableViewArray {
      bind_tableView (tableView, file:file, line:line)
    }
  }

  //····················································································································
  //    unbind_modelAndView
  //····················································································································

  func unbind_modelAndView () {
    if DEBUG_EVENT {
      print ("\(__FUNCTION__)")
    }
    mModel?.removeEBObserver (sortedArray)
    sortedArray.removeEBObserver (mSelectedSet)
    mSelectedSet.removeEBObserver (selectedArray)
  //--- Remove observed properties (for filtering and sorting)
    mModel?.removeEBObserverOf_aValue (sortedArray)
    mModel?.removeEBObserverOf_name (sortedArray)
    for tvc in mTableViewDataSourceControllerArray {
      sortedArray.removeEBObserver (tvc)
    }
    for tvc in mTableViewSelectionControllerArray {
      mSelectedSet.removeEBObserver (tvc)
    }
  //---
    selectedArray.computeFunction = nil
    sortedArray.computeFunction = nil
    mSelectedSet.mSet = Set ()
    mTableViewDataSourceControllerArray = []
    mTableViewSelectionControllerArray = []
    mModel = nil
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
    tableView.allowsEmptySelection = allowsEmptySelection
    tableView.allowsMultipleSelection = allowsMultipleSelection
    tableView.setDataSource (sortedArray)
    tableView.setDelegate (self)
  //--- Set table view data source controller
    let dataSourceTableViewController = DataSource_EBTableView_controller (delegate:self, tableView:tableView)
    sortedArray.addEBObserver (dataSourceTableViewController)
    mTableViewDataSourceControllerArray.append (dataSourceTableViewController)
  //--- Set table view selection controller
    let selectionTableViewController = Selection_EBTableView_controller (delegate:self, tableView:tableView)
    mSelectedSet.addEBObserver (selectionTableViewController)
    mTableViewSelectionControllerArray.append (selectionTableViewController)
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
    if DEBUG_EVENT {
      print ("\(__FUNCTION__)")
    }
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
          cell.mUnbindFunction = { [weak cell] in
            cell?.mCellOutlet?.unbind_value ()
          }
          cell.mUnbindFunction? ()
          cell.mCellOutlet?.bind_value (object.name, file: __FILE__, line: __LINE__, sendContinously : false)
          // cell.configureWithProperty (object.name)
        }
      }else if columnIdentifier == "int" {
        if let cell : EBIntField_Cell = result as? EBIntField_Cell {
          cell.mUnbindFunction = { [weak cell] in
            cell?.mCellOutlet?.unbind_value ()
          }
          cell.mUnbindFunction? ()
          cell.mCellOutlet?.bind_value (object.aValue, file: __FILE__, line: __LINE__, sendContinously : false, autoFormatter : true)
          // cell.configureWithProperty (object.aValue)
        }
      }else{
        NSLog ("Unknown column '\(columnIdentifier)'")
      }
      return result
    }
  }
 
 
  //····················································································································
  //    add
  //····················································································································

   func add (inSender : NSButton?) {
    if DEBUG_EVENT {
      print ("\(__FUNCTION__)")
    }
    if let model = mModel,
           owner = model.owner,
           managedObjectContext = owner.managedObjectContext () {
      switch model.prop {
      case .noSelection, .multipleSelection :
        break
      case .singleSelection (let v) :
        let newObject : NameEntity = NameEntity (managedObjectContext:managedObjectContext)
        var array = v
        array.append (newObject)
      //--- New object is the selection
        var newSelectedObjectSet = Set <NameEntity> ()
        newSelectedObjectSet.insert (newObject)
        mSelectedSet.mSet = newSelectedObjectSet
        model.setProp (array)
      }
    }
  }

  //····················································································································
  //    remove
  //····················································································································

  func remove (inSender : NSButton?) {
    if DEBUG_EVENT {
      print ("\(__FUNCTION__)")
    }
    if let model = mModel,
           owner = model.owner,
           managedObjectContext = owner.managedObjectContext () {
      switch model.prop {
      case .noSelection, .multipleSelection :
        break
      case .singleSelection (let model_prop) :
        switch sortedArray.prop {
        case .noSelection, .multipleSelection :
          break
        case .singleSelection (let sortedArray_prop) :
        //------------- Find the object to be selected after selected object removing
        //--- Dictionary of object sorted indexes
          var sortedObjectDictionary = [NameEntity : Int] ()
          for (index, object) in sortedArray_prop.enumerate () {
            sortedObjectDictionary [object] = index
          }
          var indexArrayOfSelectedObjects = [Int] ()
          for object in mSelectedSet.mSet {
            managedObjectContext.removeManagedObject (object)
            let index = sortedObjectDictionary [object]
            if let idx = index {
              indexArrayOfSelectedObjects.append (idx)
            }
          }
        //--- Sort
          indexArrayOfSelectedObjects.sortInPlace { $0 < $1 }
        //--- Find the first index of a non selected object
          var newSelectionIndex = indexArrayOfSelectedObjects [0] + 1
          for index in indexArrayOfSelectedObjects {
            if newSelectionIndex < index {
              break
            }else{
              newSelectionIndex = index + 1
            }
          }
          var newSelectedObject : NameEntity? = nil
          if (newSelectionIndex >= 0) && (newSelectionIndex < sortedArray_prop.count) {
            newSelectedObject = sortedArray_prop [newSelectionIndex]
          }
        //----------------------------------------- Remove selected object
        //--- Dictionary of object absolute indexes
          var objectDictionary = [NameEntity : Int] ()
          for (index, object) in model_prop.enumerate () {
            objectDictionary [object] = index
          }
        //--- Build selected objects index array
          var selectedObjectIndexArray = [Int] ()
          for object in mSelectedSet.mSet {
            let index = objectDictionary [object]
            if let idx = index {
              selectedObjectIndexArray.append (idx)
            }
          }
        //--- Sort in reverse order
          selectedObjectIndexArray.sortInPlace { $1 < $0 }
        //--- Remove objects, in reverse of order of their index
          var newObjectArray = model_prop
          for index in selectedObjectIndexArray {
            newObjectArray.removeAtIndex (index)
          }
        //----------------------------------------- Set new selection
          var newSelectionSet = Set <NameEntity> ()
          if let object = newSelectedObject {
            newSelectionSet.insert (object)
          }
          mSelectedSet.mSet = newSelectionSet
        //----------------------------------------- Set new object array
          model.setProp (newObjectArray)
        }
      }
    }
  }

  //····················································································································

}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————


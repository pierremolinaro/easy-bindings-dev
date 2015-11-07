import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

private let DEBUG_EVENT = false

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//    DataSource_PMDocument_otherController
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

@objc(DataSource_PMDocument_otherController)
final class DataSource_PMDocument_otherController : ReadOnlyArrayOf_NameEntity, EBTableViewDataSource {
  private weak var mModel : ReadOnlyArrayOf_NameEntity?
  var count = EBTransientProperty_Int ()

  //····················································································································

  override init () {
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

  //····················································································································

  final func setModel (model : ReadOnlyArrayOf_NameEntity) {
    mModel = model
    model.addEBObserver (self)
  }

  //····················································································································

  override func postEvent () {
    if DEBUG_EVENT {
      print ("DataSource_PMDocument_otherController:" + __FUNCTION__ + " prop_cache \(prop_cache != nil)")
    }
    if prop_cache != nil {
      prop_cache = nil
      count.postEvent ()
      super.postEvent ()
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
          array.sortUsingDescriptors (mSortDescriptors)
          let sortedObjectArray = array.mutableCopy () as! [NameEntity]
          return .singleSelection (sortedObjectArray)
        }
     }
    }else{
      return .noSelection
    }
  }

  //····················································································································
  
  private var mSet = Set<NameEntity> ()

  var prop_cache : Optional < EBProperty < [NameEntity] > >

  override var prop : EBProperty < [NameEntity] > {
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
          let removedObjectSet = mSet.subtract (newObjectSet)
          removeEBObserversOf_name_fromElementsOfSet (removedObjectSet)
          removeEBObserversOf_aValue_fromElementsOfSet (removedObjectSet)
        //--- Added object set
          let addedObjectSet = newObjectSet.subtract (mSet)
          addEBObserversOf_name_toElementsOfSet (addedObjectSet)
          addEBObserversOf_aValue_toElementsOfSet (addedObjectSet)
       //--- Update object set
          mSet = newObjectSet
        }
      }
      return prop_cache!
    }
  }

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
    // NSLog ("%@", __FUNCTION__)
    mSortDescriptors = aTableView.sortDescriptors
  }

  //····················································································································
  //    T A B L E V I E W    D A T A S O U R C E : numberOfRowsInTableView
  //····················································································································

  func numberOfRowsInTableView (_ : NSTableView) -> Int {
    // NSLog ("%@ (%ld objects)", __FUNCTION__, prop.count)
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
//    Delegate_PMDocument_otherController
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

@objc(Delegate_PMDocument_otherController)
final class Delegate_PMDocument_otherController : EBAbstractProperty, EBTableViewDelegate {
  private var mSet = Set<NameEntity> ()
  private var mSetShouldBeComputed = true
  private var mSortedArray : DataSource_PMDocument_otherController
  private var mSelectedArray : TransientArrayOf_NameEntity
  var count = EBTransientProperty_Int ()

  //····················································································································

  init (model:DataSource_PMDocument_otherController,
        selectedArray:TransientArrayOf_NameEntity) {
    mSortedArray = model
    mSelectedArray = selectedArray
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

  //····················································································································
  
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
          if (mSet.count == 0) && (v.count > 0) {
            mSet.insert (v [0])
          }
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

  //····················································································································

  private func setProp (value : Set<NameEntity>) {
    if (mSet != value) {
      mSet = value
      postEvent ()
    }
  }

  //····················································································································

  override func postEvent () {
    if !mSetShouldBeComputed {
      mSetShouldBeComputed = true
      count.postEvent ()
      super.postEvent ()
    }
  }

  //····················································································································

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

  //····················································································································
  //    T A B L E V I E W    D E L E G A T E : tableViewSelectionDidChange:
  //····················································································································

  func tableViewSelectionDidChange (notication : NSNotification) {
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

  //····················································································································
  //    T A B L E V I E W    D E L E G A T E : tableView:viewForTableColumn:row:
  //····················································································································

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
      let object = v.objectAtIndex (inRowIndex, file:__FILE__, line:__LINE__)
      if columnIdentifier == "name" {
      if let cell : EBTextField_Cell = result as? EBTextField_Cell {
        cell.configureWithProperty (object.name)
      }
      }else if columnIdentifier == "int" {
      if let cell : EBIntField_Cell = result as? EBIntField_Cell {
        cell.configureWithProperty (object.aValue)
      }
      }
     return result
    }
  }

  //····················································································································

}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//    ArrayController_PMDocument_otherController
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

@objc(ArrayController_PMDocument_otherController)
final class ArrayController_PMDocument_otherController : EBObject {

  var sortedArray = DataSource_PMDocument_otherController ()

  var selectedArray = TransientArrayOf_NameEntity ()

  private var mSelectedSet : Delegate_PMDocument_otherController?

  private var mTableViewControllerArray = [Controller_EBTableView_controller] ()

  private var mModel : ToManyRelationship_MyRootEntity_mNames?

  //····················································································································
  //    init
  //····················································································································

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
            var result = [NameEntity] ()
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
    mModel = model
    sortedArray.setModel (model)
    let selectedSet = Delegate_PMDocument_otherController (model:sortedArray, selectedArray:selectedArray)
    mSelectedSet = selectedSet
    for tableView in tableViewArray {
      bind_tableView (tableView, selectedSet:selectedSet, file:file, line:line)
    }
  //--- Add observers
    sortedArray.addEBObserver (selectedSet)
    selectedSet.addEBObserver (selectedArray)
  }

  //····················································································································
  //    bind_tableView
  //····················································································································

  private func bind_tableView (tableView:EBTableView,
                               selectedSet:Delegate_PMDocument_otherController,
                               file:String,
                               line:Int) {
    let tableViewController = Controller_EBTableView_controller (
      delegate:selectedSet,
      tableView:tableView,
      file:file,
      line:line
    )
    //--- Check 'name' column
    if let anyObject: NSView = tableView.makeViewWithIdentifier ("name", owner:self) {
      if let unwrappedTableCellView = anyObject as? EBTextField_Cell {
        if !unwrappedTableCellView.outletIsDefined () {
          presentErrorWindow (file,
            line: line,
            errorMessage:"\"name\" column view is not an instance of EBTextField"
          )
        }
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
      columnName.sortDescriptorPrototype = NSSortDescriptor (key:"name_keyCodingValue", ascending:true)
    }
    //--- Check 'int' column
    if let anyObject: NSView = tableView.makeViewWithIdentifier ("int", owner:self) {
      if let unwrappedTableCellView = anyObject as? EBIntField_Cell {
        if !unwrappedTableCellView.outletIsDefined () {
          presentErrorWindow (file,
            line: line,
            errorMessage:"\"int\" column view is not an instance of EBIntField"
          )
        }
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
    sortedArray.addEBObserver (tableViewController)
    mTableViewControllerArray.append (tableViewController)
 //--- Set table view delegate and data source
    tableView.setDataSource (sortedArray)
    tableView.setDelegate (selectedSet)
  }

  //····················································································································
  //    unbind_modelAndView
  //····················································································································

  func unbind_modelAndView () {
    if let selectedSet = mSelectedSet {
      sortedArray.removeEBObserver (selectedSet)
      selectedSet.removeEBObserver (selectedArray)
    }
    for tvc in mTableViewControllerArray {
      sortedArray.removeEBObserver (tvc)
    }
    mTableViewControllerArray = []
    selectedArray.computeFunction = nil
    mSelectedSet = nil
    mModel = nil
 }
 
 
  //····················································································································
  //    add
  //····················································································································

   func add (inSender : NSButton?) {
    if let model = mModel,
           owner = model.owner,
           managedObjectContext = owner.managedObjectContext (),
           selectedSet = mSelectedSet {
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
        selectedSet.setProp (newSelectedObjectSet)
        model.setProp (array)
      }
    }
  }

  //····················································································································
  //    remove
  //····················································································································

  func remove (inSender : NSButton?) {
    if let model = mModel,
           owner = model.owner,
           managedObjectContext = owner.managedObjectContext (),
           selectedSet = mSelectedSet {
      switch model.prop {
      case .noSelection, .multipleSelection :
        break
      case .singleSelection (let model_prop) :
        switch selectedSet.prop {
        case .noSelection, .multipleSelection :
          break
        case .singleSelection (let selectedSet_prop) :
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
            for object in selectedSet_prop {
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
            for object in selectedSet_prop {
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
            mSelectedSet?.setProp (newSelectionSet)
          //----------------------------------------- Set new object array
            model.setProp (newObjectArray)
          }
        }
      }
    }
  }

  //····················································································································

}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————


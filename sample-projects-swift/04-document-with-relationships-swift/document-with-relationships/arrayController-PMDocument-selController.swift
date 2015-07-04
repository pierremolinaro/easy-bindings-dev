import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    DataSource_PMDocument_selController                                                                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class DataSource_PMDocument_selController : EBObject, EBTableViewDataSource {
  private weak var mModel : ReadOnlyArrayOf_NameEntity?
  var count = EBTransientProperty_Int ()

  //····················································································································

  override init () {
    super.init ()
    count.computeFunction = { [weak self] in
      if let unwSelf = self, model = unwSelf.mModel {
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

   //····················································································································

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

  //····················································································································
  //    Sort descriptors
  //····················································································································
  
  private var mSortDescriptors : [NSSortDescriptor] = [NSSortDescriptor] () {
    didSet {
      mModel?.postEvent () // Force sorting
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

  func numberOfRowsInTableView (NSTableView) -> Int {
    if let model = mModel {
      switch model.prop {
      case .noSelection, .multipleSelection :
        return 0
      case .singleSelection (let v) :
        return v.count
      }
    }else{
      return 0
    }
  }

  //····················································································································

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

  //····················································································································

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

  //····················································································································
  
  override func postEvent () {
    if !mSetShouldBeComputed {
      mSetShouldBeComputed = true
      count.postEvent ()
      super.postEvent ()
    }
  }

  //····················································································································
  
  var prop : EBProperty <Set<NameEntity> > {
    get {
      if let model = mSortedArray.mModel {
        if mSetShouldBeComputed {
          mSetShouldBeComputed = false
        // NSLog ("mSet %d", mSet.count)
          switch model.prop {
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
            /* var objectDictionary = [ArtworkFileGenerationParameters : Int] ()
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
          switch model.prop {
          case .noSelection :
            return .noSelection
          case .multipleSelection :
            return .multipleSelection
          case .singleSelection :
            return .singleSelection (mSet)
          }
        }
      }else{
        return .noSelection
      }
    }
  }

  //····················································································································

  func setProp (value : Set<NameEntity>) {
    mSet = value
    postEvent ()
  }

  //····················································································································

  func selectedObjectIndexSet () -> NSIndexSet {
    if let model = mSortedArray.mModel {
      switch model.prop {
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
    }else{
      return NSIndexSet ()
    }
  }

  //····················································································································
  //    T A B L E V I E W    D E L E G A T E : tableViewSelectionDidChange:
  //····················································································································

  func tableViewSelectionDidChange (notication : NSNotification) {
    // NSLog ("%@ %d", __FUNCTION__, mIgnoreTableViewSelectionDidChange)
    if let model = mSortedArray.mModel where !mIgnoreTableViewSelectionDidChange {
      switch model.prop {
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

  //····················································································································
  //    T A B L E V I E W    D E L E G A T E : tableView:viewForTableColumn:row:
  //····················································································································

  func tableView (tableView : NSTableView,
                  viewForTableColumn inTableColumn: NSTableColumn?,
                  row inRowIndex: Int) -> NSView? {
 //   NSLog ("%@, row %d, column %@", __FUNCTION__, inRowIndex, inTableColumn!.identifier)
    if let model = mSortedArray.mModel {
      switch model.prop {
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
    }else{
      return nil
    }
  }

  //····················································································································

  func willReload () {
    mIgnoreTableViewSelectionDidChange = true
  }

  //····················································································································
  
  func didReload () {
    mIgnoreTableViewSelectionDidChange = false
  }

  //····················································································································

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
         if let model = self.sortedArray.mModel {
           switch model.prop {
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
           }else{
            return .noSelection
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

  func bind_modelAndView (model:ReadOnlyArrayOf_NameEntity,
                          tableViewArray:[EBTableView],
                          file:String, line:Int) {
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
      sortedArray.mModel?.addObserver (tableViewController, postEvent:true)
      selectedSet.addObserver (tableViewController, postEvent:true)
   //--- Set table view delegate and data source
      tableView.setDataSource (sortedArray)
      tableView.setDelegate (selectedSet)
    }
  //--- Add observers
    if let model = sortedArray.mModel {
      model.addObserverOf_name (model, postEvent:true)
      model.addObserverOf_aValue (model, postEvent:true)
    //model.addObserver (sortedArray, postEvent:true)
      model.addObserver (selectedSet, postEvent:true)
    }
    selectedSet.addObserver (selectedArray, postEvent:true)
  }

  //····················································································································
  //    unbind_modelAndView
  //····················································································································

  func unbind_modelAndView () {
    if let sortedArrayModel = sortedArray.mModel {
      mModel?.removeObserverOf_name (sortedArrayModel, postEvent:false)
      mModel?.removeObserverOf_aValue (sortedArrayModel, postEvent:false)
    }
//    mModel?.removeObserver (sortedArray, postEvent:false)
    if let selectedSet = mSelectedSet {
      sortedArray.mModel?.removeObserver (selectedSet, postEvent:false)
    }
    mSelectedSet?.removeObserver (selectedArray, postEvent:false)
     for tableViewController in mTableViewControllerArray {
      sortedArray.mModel?.removeObserver (tableViewController, postEvent:false)
      mSelectedSet?.removeObserver (tableViewController, postEvent:false)
    }
    mTableViewControllerArray = []
    selectedArray.computeFunction = nil
    mSelectedSet = nil
    mModel = nil
 }
 

  //····················································································································

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


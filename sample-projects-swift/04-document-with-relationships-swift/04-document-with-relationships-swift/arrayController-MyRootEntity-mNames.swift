
import Cocoa

private let displayDebugMessage = false

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    TriggerFor_MyRootEntity_mNames_mNamesTableView                                                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class TriggerFor_MyRootEntity_mNames_mNamesTableView : PMTransientEventProtocol {
  private weak var mArrayController : ArrayController_MyRootEntity_mNames? = nil
  
  var transientEventIndex : PMTransientIndex { get { return PMTransientIndex.kTriggerOutletDisplay } }
 
  private let mPrivateUniqueIndex : Int ;
  var uniqueIndex : Int { get { return mPrivateUniqueIndex } }
 
  init (object : ArrayController_MyRootEntity_mNames) {
    mPrivateUniqueIndex = getUniqueIndex ()
    mArrayController = object
    noteObjectAllocation (self) ;
  }
  
  func unregister () {
  }
  
  deinit {
    noteObjectDeallocation (self) ;
  }

  func noteTransientDidChange () {
  }
  
  func trigger () {
    mArrayController?.modelDidChange ()
  }

  func userClassName () -> String { return "TriggerFor_MyRootEntity_mNames_mNamesTableView" }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    ArrayController_MyRootEntity_mNames                                                                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class ArrayController_MyRootEntity_mNames : NSObject, NSTableViewDataSource, NSTableViewDelegate, PMUserClassName {
  private var mUndoManager : NSUndoManager?
  private var mObject : MyRootEntity
  private var mTableView : PMTableView?

  private var mCurrentObjectSet = NSMutableSet ()
  private var mCurrentObjectArray = NSMutableArray ()
  private var mSelectedObjectArray : NSArray = NSArray () {
    didSet {
      updateCanRemoveProperty ()
    }
  }
  
  private var mSelectNewObject = true
  private var mAllowsEmptySelection = false
  private var mAllowsMultipleSelection = true
 
  //-------------------------------------------------------------------------------------------------------------------*
  //    userClassName                                                                                                  *
  //-------------------------------------------------------------------------------------------------------------------*

  func userClassName () -> String { return "ArrayController_MyRootEntity_mNames" }
 
  //-------------------------------------------------------------------------------------------------------------------*
  //    init                                                                                                           *
  //-------------------------------------------------------------------------------------------------------------------*

  init (object : MyRootEntity, tableView:PMTableView?, file:String, line:Int) {
    mObject = object
    mTableView = tableView
    mUndoManager = object.undoManager ()
    super.init ()
    if let unwrappedTableView = tableView {
      unwrappedTableView.allowsEmptySelection = mAllowsEmptySelection
      unwrappedTableView.allowsMultipleSelection = mAllowsMultipleSelection
      var ok = true
      if let anyObject: AnyObject = unwrappedTableView.makeViewWithIdentifier ("name", owner:self) {
        if let unwrappedTableCellView = anyObject as? NSTableCellView {
          if !(unwrappedTableCellView.textField is PMTextField) {
            presentErrorWindow (file, line, "\"name\" column view is not an instance of PMTextField")
            ok = false
          }
        }else{
          presentErrorWindow (file, line, "\"name\" column cell view is not an instance of NSTableCellView")
          ok = false
        }
      }else{
        presentErrorWindow (file, line, "\"name\" column view unknown")
        ok = false
      }
      if let anyObject: AnyObject = unwrappedTableView.makeViewWithIdentifier ("int", owner:self) {
        if let unwrappedTableCellView = anyObject as? NSTableCellView {
          if !(unwrappedTableCellView.textField is PMNumberField) {
            presentErrorWindow (file, line, "\"int\" column view is not an instance of PMNumberField")
            ok = false
          }
        }else{
          presentErrorWindow (file, line, "\"int\" column cell view is not an instance of NSTableCellView")
          ok = false
        }
      }else{
        presentErrorWindow (file, line, "\"int\" column view unknown")
        ok = false
      }
      if ok {
        unwrappedTableView.setDataSource (self)
        unwrappedTableView.setDelegate (self)
        let col_name : NSTableColumn = unwrappedTableView.tableColumnWithIdentifier ("name")
        col_name.sortDescriptorPrototype = NSSortDescriptor (key:"name", ascending:true)
        let col_aValue : NSTableColumn = unwrappedTableView.tableColumnWithIdentifier ("int")
        col_aValue.sortDescriptorPrototype = NSSortDescriptor (key:"aValue", ascending:true)
        let columns = unwrappedTableView.tableColumns as NSArray
        if columns.count > 0 {
          let firstColumn = columns [0] as NSTableColumn
          unwrappedTableView.sortDescriptors = NSArray (object:firstColumn.sortDescriptorPrototype)
        }
      }
    }
    noteObjectAllocation (self)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    unregister                                                                                                     *
  //-------------------------------------------------------------------------------------------------------------------*

  func unregister () {
    for object : AnyObject in mCurrentObjectSet {
      let managedObject = object as  NameEntity
      managedObject.removeObserverOf_name (eventModelChange, inTrigger:false)
      managedObject.removeObserverOf_aValue (eventModelChange, inTrigger:false)
    }
  }
  
  //-------------------------------------------------------------------------------------------------------------------*
  //    deinit                                                                                                         *
  //-------------------------------------------------------------------------------------------------------------------*

  deinit {
    noteObjectDeallocation (self)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    tableViewSelectionDidChange                                                                                    *
  //-------------------------------------------------------------------------------------------------------------------*

  func tableViewSelectionDidChange (NSNotification!) {
    if displayDebugMessage {
      appendToTransientEventLog (NSString (format:"    %@\n", __FUNCTION__))
    }
    var selectedObjectArray = NSMutableArray ()
    if let tableView = mTableView {
      let selectedRowIndexes = tableView.selectedRowIndexes
      selectedRowIndexes.enumerateIndexesUsingBlock ({(idx : Int, stop : UnsafeMutablePointer <ObjCBool>) in
        stop.initialize (false)
        let object = self.mCurrentObjectArray.objectAtIndex (idx, file:__FILE__, line:__LINE__) as? NameEntity
        if let unwrappedObject = object {
          selectedObjectArray.addObject (unwrappedObject)
        }
      })
    }
    mSelectedObjectArray = selectedObjectArray
    // NSLog ("mSelectedObjectArray %d", mSelectedObjectArray.count)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    tableView:sortDescriptorsDidChange: NSTableViewDataSource delegate                                             *
  //-------------------------------------------------------------------------------------------------------------------*

  func tableView (aTableView: NSTableView!,
                 sortDescriptorsDidChange oldDescriptors: [AnyObject]!) {
    if displayDebugMessage {
      appendToTransientEventLog (NSString (format:"    %@\n", __FUNCTION__))
    }
    let sortDescriptors : [AnyObject]! = mTableView?.sortDescriptors
    mCurrentObjectArray.sortUsingDescriptors (sortDescriptors)
    display ()
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    Observing model change                                                                                         *
  //-------------------------------------------------------------------------------------------------------------------*
  
  func modelDidChange () {
    if displayDebugMessage {
      appendToTransientEventLog (NSString (format:"    %@\n", __FUNCTION__))
    }
    mCurrentObjectArray = mObject.mNames.mutableCopy () as NSMutableArray
  //--- Build new selected objects array
    var selectedArrayShouldBeChanged = false
    var newSelectedArray = NSMutableArray ()
    for object in mSelectedObjectArray {
      let idx = mCurrentObjectArray.indexOfObjectIdenticalTo (object)
      if idx == NSNotFound {
        selectedArrayShouldBeChanged = true ;
      }else{
        newSelectedArray.addObject (object)
      }
    }
    if selectedArrayShouldBeChanged {
      mObject.undoManager()?.registerUndoWithTarget(self, selector:"undoFor_selectedObjectArray:", object:mSelectedObjectArray)
      mSelectedObjectArray = newSelectedArray ;
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func undoFor_selectedObjectArray (selectedObjectArray : NSArray) {
    mSelectedObjectArray = selectedObjectArray
  }
  
  //-------------------------------------------------------------------------------------------------------------------*
  
  func display () {
    if displayDebugMessage {
      appendToTransientEventLog (NSString (format:"    %@\n", __FUNCTION__))
    }
    if let tableView = mTableView {
      let sortDescriptors : [AnyObject]! = mTableView?.sortDescriptors
      mCurrentObjectArray.sortUsingDescriptors (sortDescriptors)
    //--- Update observers for handling model change
      let oldObjectSet = mCurrentObjectSet
      mCurrentObjectSet = NSMutableSet ()
      mCurrentObjectSet.addObjectsFromArray (mObject.mNames)
    //--- Removed object set
      var removedObjectSet = NSMutableSet ()
      removedObjectSet.setSet (oldObjectSet)
      removedObjectSet.minusSet (mCurrentObjectSet)
      for object : AnyObject in removedObjectSet {
        let managedObject = object as  NameEntity
        managedObject.removeObserverOf_name (eventModelChange, inTrigger:false)
        managedObject.removeObserverOf_aValue (eventModelChange, inTrigger:false)
      }
    //--- Added object set
      var addedObjectSet = NSMutableSet ()
      addedObjectSet.setSet (mCurrentObjectSet)
      addedObjectSet.minusSet (oldObjectSet)
      for object : AnyObject in addedObjectSet {
        let managedObject = object as  NameEntity
        managedObject.addObserverOf_name (eventModelChange, inTrigger:false)
        managedObject.addObserverOf_aValue (eventModelChange, inTrigger:false)
      }
    //--- Reload data
      tableView.reloadData ()
      var newSelectedArray = mCurrentObjectArray.mutableCopy () as NSMutableArray
      var selectedArrayShouldBeChanged = false
      var newSelectionIndexSet = NSMutableIndexSet ()
      for object in mSelectedObjectArray {
        let idx = mCurrentObjectArray.indexOfObjectIdenticalTo (object)
        if idx == NSNotFound {
          selectedArrayShouldBeChanged = true ;
        }else{
          newSelectionIndexSet.addIndex (idx)
          newSelectedArray.addObject (object)
        }
      }
      if selectedArrayShouldBeChanged {
        mCurrentObjectArray = newSelectedArray ;
      }
      let currentSelectedRowIndexes = tableView.selectedRowIndexes
      if !currentSelectedRowIndexes.isEqualToIndexSet (newSelectionIndexSet) {
        tableView.selectRowIndexes (newSelectionIndexSet, byExtendingSelection:false)
      }
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  private var eventModelChange_cache : TriggerFor_MyRootEntity_mNames_mNamesTableView? = nil
  private var eventModelChange : TriggerFor_MyRootEntity_mNames_mNamesTableView {
    get {
      if eventModelChange_cache == nil {
        eventModelChange_cache = TriggerFor_MyRootEntity_mNames_mNamesTableView (object:self)
      }
      return eventModelChange_cache!
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    T A B L E V I E W    D A T A S O U R C E                                                                       *
  //-------------------------------------------------------------------------------------------------------------------*
  // http://thegreyblog.blogspot.fr/2014/06/nscontroltexteditingdelegate-methods.html

  func numberOfRowsInTableView (NSTableView!) -> Int {
    if displayDebugMessage {
      appendToTransientEventLog (NSString (format:"    %@ (%ld objects)\n", __FUNCTION__, mCurrentObjectArray.count))
    }
    return mCurrentObjectArray.count
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func tableView (tableView : NSTableView,
                  viewForTableColumn : NSTableColumn,
                  row : NSInteger) -> NSView! {
    let columnIdentifier = viewForTableColumn.identifier as String
    if displayDebugMessage {
      appendToTransientEventLog (NSString (format:"    %@, identifier '%@\', row %d\n", __FUNCTION__, columnIdentifier, row))
    }
    var result : NSTableCellView = tableView.makeViewWithIdentifier (columnIdentifier, owner:self) as NSTableCellView
    let object = mCurrentObjectArray.objectAtIndex (row, file:__FILE__, line:__LINE__) as  NameEntity
    if columnIdentifier == "name" {
      result.textField.stringValue = object.name
      result.textField.target = self
      result.textField.action = "set_name_Action:"
      let tf : PMTextField = result.textField as PMTextField
      tf.setSendContinously (true)
    }else if columnIdentifier == "int" {
      let tf : PMNumberField = result.textField as PMNumberField
      tf.myIntegerValue = object.aValue
      tf.target = self
      tf.action = "set_aValue_Action:"
      tf.setSendContinously (true)
    }
    return result
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func set_name_Action (sender : PMTextField) {
    if let tableView = mTableView {
      let row = tableView.rowForView (sender)
      if row >= 0 {
        let object = mCurrentObjectArray.objectAtIndex (row, file:__FILE__, line:__LINE__) as NameEntity
        object.removeObserverOf_name (eventModelChange, inTrigger:false)
        object.name = sender.stringValue
        object.addObserverOf_name (eventModelChange, inTrigger:false)
      }
    }
  }

 //-------------------------------------------------------------------------------------------------------------------*

  func set_aValue_Action (sender : PMNumberField) {
    if let tableView = mTableView {
      let row = tableView.rowForView (sender)
      if row >= 0 {
        let object = mCurrentObjectArray.objectAtIndex (row, file:__FILE__, line:__LINE__) as NameEntity
        object.removeObserverOf_aValue (eventModelChange, inTrigger:false)
        object.aValue = sender.integerValue
        object.addObserverOf_aValue (eventModelChange, inTrigger:false)
      }
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    add                                                                                                            *
  //-------------------------------------------------------------------------------------------------------------------*

  func add (inSender : AnyObject!) {
    if displayDebugMessage {
      appendToTransientEventLog (NSString (format:"    %@\n", __FUNCTION__))
    }
    var newObject : NameEntity = NameEntity (undoManager:mUndoManager!)
    var array : NSMutableArray = mObject.mNames.mutableCopy () as NSMutableArray
    array.addObject (newObject)
    if mSelectNewObject {
      mSelectedObjectArray = NSArray (object:newObject)
    }
    mObject.mNames = array
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    remove                                                                                                         *
  //-------------------------------------------------------------------------------------------------------------------*

  func remove (inSender : AnyObject!) {
    if mSelectedObjectArray.count > 0 {
      if let tableView = mTableView {
        var newObjectArray = mObject.mNames.mutableCopy () as NSMutableArray
        for object in mSelectedObjectArray {
          newObjectArray.removeObjectIdenticalTo (object)
        }
        if newObjectArray.count == 0 {
          mSelectedObjectArray = NSArray ()
        }else{
          let idx = tableView.selectedRow
          if idx < mCurrentObjectArray.count {
            mSelectedObjectArray = NSArray (object:mCurrentObjectArray [idx])
          }else{
            mSelectedObjectArray = NSArray (object:newObjectArray.lastObject!)
          }
        }
        mObject.mNames = newObjectArray
      }
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //  Transient: canRemove                                                                                             *
  //-------------------------------------------------------------------------------------------------------------------*

  private var canRemove_private = false // As array is empty initially
  var canRemove : Bool { get { return canRemove_private } }
  
  func updateCanRemoveProperty () {
    if displayDebugMessage {
      appendToTransientEventLog (NSString (format:"    %@\n", __FUNCTION__))
    }
    let newValue = mSelectedObjectArray.count > 0
    if canRemove_private != newValue {
      canRemove_private = newValue
      for object in canRemove_observers.values {
        postTransientEvent (object)
      }
    }
  }
  
  private var canRemove_observers : [Int : PMTransientEventProtocol] = [:]
  
  func addObserverOf_canRemove (inObserver : PMTransientEventProtocol, inTrigger:Bool) {
    canRemove_observers [inObserver.uniqueIndex] = inObserver
    if inTrigger {
      postTransientEvent (inObserver)
    }
  }
 
  func removeObserverOf_canRemove (inObserver : PMTransientEventProtocol, inTrigger:Bool) {
    canRemove_observers [inObserver.uniqueIndex] = nil
    if inTrigger {
      postTransientEvent (inObserver)
    }
  }

}

//---------------------------------------------------------------------------------------------------------------------*

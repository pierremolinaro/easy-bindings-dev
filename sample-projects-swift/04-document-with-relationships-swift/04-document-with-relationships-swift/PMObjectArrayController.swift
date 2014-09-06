
import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMTrigger_updateTableView                                                                                         *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(PMTrigger_updateTableView)
class PMTrigger_updateTableView : NSObject, PMTriggerProtocol {
  weak var mTriggerObject : PMObjectArrayController? = nil
  
  var mTransientIndex : Int {
    get {
      return kTriggerOutletDisplay
    }
  }
  
  init (object : PMObjectArrayController) {
    mTriggerObject = object
    super.init ()
    noteObjectAllocation (self) ;
  }
  
  func unregister () {
  }
  
  deinit {
    noteObjectDeallocation (self) ;
  }

  func noteTransientChanged () {
  }
  
  func trigger () {
    mTriggerObject?.refreshDisplay ()
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   PMObjectArrayController                                                                                           *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(PMObjectArrayController) class PMObjectArrayController : NSObject, PMTriggerProtocol, NSTableViewDataSource, NSTableViewDelegate {
  var mUndoManager : NSUndoManager?
  var mObject : MyRootEntity
  var mTableView : PMTableView?

  //-------------------------------------------------------------------------------------------------------------------*
  //    init                                                                                                           *
  //-------------------------------------------------------------------------------------------------------------------*

  init (object : MyRootEntity, tableView:PMTableView?, file:String, line:Int) {
    mObject = object
    mTableView = tableView
    mUndoManager = object.undoManager ()
    super.init ()
    if let unwrappedTableView = tableView {
      var ok = true
      if let anyObject: AnyObject = unwrappedTableView.makeViewWithIdentifier ("int", owner:self) {
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
        presentErrorWindow (file, line, "\"int\" column view unknown")
        ok = false
      }
      if unwrappedTableView.makeViewWithIdentifier ("name", owner:self) == nil {
        presentErrorWindow (file, line, "\"name\" column view unknown")
        ok = false
      }
      if ok {
        mTableView?.setDataSource (self)
        mTableView?.setDelegate (self)
      }
    }
    noteObjectAllocation (self)
    object.addObserverOf_mNames (self)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    unregister                                                                                                     *
  //-------------------------------------------------------------------------------------------------------------------*

  func unregister () {
    mObject.removeObserverOf_mNames (self)
    for object : AnyObject in mCurrentObjectSet {
      let managedObject = object as NameEntity
      managedObject.removeObserverOf_aValue (triggerObjectForModelChange)
      managedObject.removeObserverOf_name (triggerObjectForModelChange)
    }
    mCurrentObjectSet = NSMutableSet ()
  }
  
  //-------------------------------------------------------------------------------------------------------------------*
  //    deinit                                                                                                         *
  //-------------------------------------------------------------------------------------------------------------------*

  deinit {
    noteObjectDeallocation (self)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    For PMTriggerProtocol                                                                                          *
  //-------------------------------------------------------------------------------------------------------------------*

  var mTransientIndex : Int {
    get {
      return kTriggerOutletDisplay
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func noteTransientChanged () {
  }

  //-------------------------------------------------------------------------------------------------------------------*

  private var mCurrentObjectSet = NSMutableSet ()
  private var mCurrentObjectArray = NSArray ()
  
  func trigger () {
    mCurrentObjectArray = mObject.mNames.copy () as NSArray
  //--- Update observers for handling model change
    let oldObjectSet = mCurrentObjectSet
    mCurrentObjectSet = NSMutableSet ()
    mCurrentObjectSet.addObjectsFromArray (mObject.mNames)
  //--- Removed object set
    var removedObjectSet = NSMutableSet ()
    removedObjectSet.setSet (oldObjectSet)
    removedObjectSet.minusSet (mCurrentObjectSet)
    for object : AnyObject in removedObjectSet {
      let managedObject = object as NameEntity
      managedObject.removeObserverOf_aValue (triggerObjectForModelChange)
      managedObject.removeObserverOf_name (triggerObjectForModelChange)
    }
  //--- Added object set
    var addedObjectSet = NSMutableSet ()
    addedObjectSet.setSet (mCurrentObjectSet)
    addedObjectSet.minusSet (oldObjectSet)
    for object : AnyObject in addedObjectSet {
      let managedObject = object as NameEntity
      managedObject.addObserverOf_aValue (triggerObjectForModelChange)
      managedObject.addObserverOf_name (triggerObjectForModelChange)
    }
  //---
    refreshDisplay ()
    updateCanRemoveProperty ()
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    tableViewSelectionDidChange                                                                                    *
  //-------------------------------------------------------------------------------------------------------------------*

  var mSelectedObject : NameEntity? = nil {
    didSet {
      if mSelectedObject == nil {
   //     NSLog ("nil")
      }else{
  //      NSLog ("Int %d", mSelectedObject!.aValue)
      }
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func tableViewSelectionDidChange (NSNotification!) {
    var selectedObject : NameEntity?
    if let tableView = mTableView {
      let selectedObjectIndex = tableView.selectedRow
      if selectedObjectIndex >= 0 {
        selectedObject = mCurrentObjectArray.objectAtIndex (selectedObjectIndex, file:__FILE__, line:__LINE__) as? NameEntity
      }
    }
    mSelectedObject = selectedObject
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    Observing model change                                                                                         *
  //-------------------------------------------------------------------------------------------------------------------*
  
  func refreshDisplay () {
  //--- Sort local array for display
    let sortDescriptor = NSSortDescriptor (key :"aValue", ascending:true)
    let descriptorArray = NSArray (object:sortDescriptor)
    mCurrentObjectArray = mCurrentObjectArray.sortedArrayUsingDescriptors (descriptorArray) as NSArray
    mTableView?.reloadData ()
  //--- Restore selection (if any)
    if let selectedObjectUnwrapped = mSelectedObject {
      let idx = mCurrentObjectArray.indexOfObjectIdenticalTo (selectedObjectUnwrapped)
      if idx != NSNotFound {
        mTableView?.selectRowIndexes(NSIndexSet (index:idx), byExtendingSelection:false)
        mTableView?.scrollRowToVisible (idx)
      }else{
        let selectedObjectIndex = mTableView!.selectedRow
        if selectedObjectIndex >= 0 {
          mSelectedObject = mCurrentObjectArray.objectAtIndex (selectedObjectIndex, file:__FILE__, line:__LINE__) as? NameEntity
        }
      }
    }
  }

  var triggerObjectForModelChange_cache : PMTrigger_updateTableView? = nil
  var triggerObjectForModelChange : PMTrigger_updateTableView {
    get {
      if triggerObjectForModelChange_cache == nil {
        triggerObjectForModelChange_cache = PMTrigger_updateTableView (object:self)
      }
      return triggerObjectForModelChange_cache!
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    T A B L E V I E W    D A T A S O U R C E                                                                       *
  //-------------------------------------------------------------------------------------------------------------------*

  func numberOfRowsInTableView (NSTableView!) -> Int {
    return mCurrentObjectArray.count
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func tableView (tableView : NSTableView,
                  viewForTableColumn : NSTableColumn,
                  row : NSInteger) -> NSView! {
 
    // Get an existing cell with the MyView identifier if it exists
    let columnIdentifier = viewForTableColumn.identifier as String
    // NSLog ("columnIdentifier %@", columnIdentifier)
    var result : NSTableCellView = tableView.makeViewWithIdentifier (columnIdentifier, owner:self) as NSTableCellView
    result.textField.target = self
    let tf : PMTextField = result.textField as PMTextField
    // NSLog ("result.textField %p", result.textField)
    if columnIdentifier == "name" {
      let object = mCurrentObjectArray.objectAtIndex (row, file:__FILE__, line:__LINE__) as NameEntity
      result.textField.action = "set_name_Action:"
      result.textField.stringValue = object.name
      tf.setSendContinously (true)
    }else if columnIdentifier == "int" {
      let object = mCurrentObjectArray.objectAtIndex (row, file:__FILE__, line:__LINE__) as NameEntity
      result.textField.objectValue = NSNumber.numberWithLongLong (object.aValue)
      result.textField.action = "set_aValue_Action:"
    }
    return result
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func set_name_Action (sender : NSTextField) {
    if let tableView = mTableView {
      let row = tableView.rowForView (sender)
    //  NSLog ("row %d", row)
      let object = mCurrentObjectArray.objectAtIndex (row, file:__FILE__, line:__LINE__) as NameEntity
      object.name = sender.stringValue
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
// http://thegreyblog.blogspot.fr/2014/06/nscontroltexteditingdelegate-methods.html

  func set_aValue_Action (sender : NSTextField) {
    if let tableView = mTableView {
      let row = tableView.rowForView (sender)
    //  NSLog ("row %d", row)
      let object = mCurrentObjectArray.objectAtIndex (row, file:__FILE__, line:__LINE__) as NameEntity
      object.aValue = Int64 (sender.integerValue)
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func control (control: NSControl!,
                didFailToValidatePartialString: String!,
                errorDescription: String!) {
     NSLog ("didFailToValidatePartialString")
  }
  
  //-------------------------------------------------------------------------------------------------------------------*
  //    add                                                                                                            *
  //-------------------------------------------------------------------------------------------------------------------*

  func add (inSender : AnyObject!) {
    var newObject : PMManagedObject = NameEntity (undoManager:mUndoManager!)
    var array : NSMutableArray = mObject.mNames.mutableCopy () as NSMutableArray
    array.addObject (newObject)
    mObject.mNames = array
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    remove                                                                                                         *
  //-------------------------------------------------------------------------------------------------------------------*

  func remove (inSender : AnyObject!) {
    if let tableView = mTableView {
      let selectedRow = tableView.selectedRow ;
      if selectedRow >= 0 {
        let object = mCurrentObjectArray.objectAtIndex (selectedRow, file:__FILE__, line:__LINE__) as NameEntity
        var array : NSMutableArray = mObject.mNames.mutableCopy () as NSMutableArray
        array.removeObjectIdenticalTo (object)
        mObject.mNames = array
      }
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //  Transient: canRemove                                                                                             *
  //-------------------------------------------------------------------------------------------------------------------*

  private var canRemove_private = false // As array is empty initially
  var canRemove : Bool { get { return canRemove_private } }
  
  func updateCanRemoveProperty () {
    let newValue = mObject.mNames.count > 0
    if canRemove_private != newValue {
      canRemove_private = newValue
      for anyObject in canRemove_observers {
        let object = anyObject as PMTriggerProtocol
        enterTriggerWithObject (object)
      }
    }
  }
  
  private var canRemove_observers = NSMutableSet ()
  
  func addObserverOf_canRemove (inObserver : PMTriggerProtocol) {
    canRemove_observers.addObject (inObserver)
    enterTriggerWithObject (inObserver)
  }
 
  func removeObserverOf_canRemove (inObserver : PMTriggerProtocol) {
    canRemove_observers.removeObject (inObserver)
    enterTriggerWithObject (inObserver)
  }

}

//---------------------------------------------------------------------------------------------------------------------*

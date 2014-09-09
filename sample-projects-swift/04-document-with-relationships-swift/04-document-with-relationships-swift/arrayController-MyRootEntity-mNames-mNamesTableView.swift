
import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    TriggerFor_MyRootEntity_mNames_mNamesTableView                                                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(TriggerFor_MyRootEntity_mNames_mNamesTableView)
class TriggerFor_MyRootEntity_mNames_mNamesTableView : NSObject, PMTriggerProtocol {
  private weak var mArrayController : ArrayController_MyRootEntity_mNames_mNamesTableView? = nil
  
  var mTransientIndex : Int { get { return kTriggerOutletDisplay } }
  
  init (object : ArrayController_MyRootEntity_mNames_mNamesTableView) {
    mArrayController = object
    super.init ()
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
    mArrayController?.refreshDisplay ()
    mArrayController?.updateCanRemoveProperty ()
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    ArrayController_MyRootEntity_mNames_mNamesTableView                                                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

@objc(ArrayController_MyRootEntity_mNames_mNamesTableView)
class ArrayController_MyRootEntity_mNames_mNamesTableView : NSObject, NSTableViewDataSource, NSTableViewDelegate {
  private var mUndoManager : NSUndoManager?
  private var mObject : MyRootEntity
  private var mTableView : PMTableView?
  private var mDisplayTrigger : TriggerFor_MyRootEntity_mNames_mNamesTableView? = nil

  private var mCurrentObjectSet = NSMutableSet ()
  private var mCurrentObjectArray = NSArray ()
 
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
          if !(unwrappedTableCellView.textField is PMTextField) {
            presentErrorWindow (file, line, "\"int\" column view is not an instance of PMTextField")
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
        mTableView?.setDataSource (self)
        mTableView?.setDelegate (self)
        mDisplayTrigger = TriggerFor_MyRootEntity_mNames_mNamesTableView (object: self)
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
      managedObject.removeObserverOf_name (mTriggerObjectForModelChange)
      managedObject.removeObserverOf_aValue (mTriggerObjectForModelChange)
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
  //    arrayModelSizeDidChange                                                                                        *
  //-------------------------------------------------------------------------------------------------------------------*

  func arrayModelSizeDidChange () {
    if let trigger = mDisplayTrigger {
      enterTriggerWithObject (trigger)
    }
  }
  
   //-------------------------------------------------------------------------------------------------------------------*
  //    tableViewSelectionDidChange                                                                                    *
  //-------------------------------------------------------------------------------------------------------------------*

  var mSelectedObject :  NameEntity? = nil {
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
    var selectedObject :  NameEntity?
    if let tableView = mTableView {
      let selectedObjectIndex = tableView.selectedRow
      if selectedObjectIndex >= 0 {
        selectedObject = mCurrentObjectArray.objectAtIndex (selectedObjectIndex, file:__FILE__, line:__LINE__) as?  NameEntity
      }
    }
    mSelectedObject = selectedObject
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    Observing model change                                                                                         *
  //-------------------------------------------------------------------------------------------------------------------*
  
  func refreshDisplay () {
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
      let managedObject = object as  NameEntity
      managedObject.removeObserverOf_name (mTriggerObjectForModelChange)
      managedObject.removeObserverOf_aValue (mTriggerObjectForModelChange)
    }
  //--- Added object set
    var addedObjectSet = NSMutableSet ()
    addedObjectSet.setSet (mCurrentObjectSet)
    addedObjectSet.minusSet (oldObjectSet)
    for object : AnyObject in addedObjectSet {
      let managedObject = object as  NameEntity
      managedObject.addObserverOf_name (mTriggerObjectForModelChange)
      managedObject.addObserverOf_aValue (mTriggerObjectForModelChange)
    }
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
          mSelectedObject = mCurrentObjectArray.objectAtIndex (selectedObjectIndex, file:__FILE__, line:__LINE__) as?  NameEntity
        }
      }
    }
 }

  private var mTriggerObjectForModelChange_cache : TriggerFor_MyRootEntity_mNames_mNamesTableView? = nil
  private var mTriggerObjectForModelChange : TriggerFor_MyRootEntity_mNames_mNamesTableView {
    get {
      if mTriggerObjectForModelChange_cache == nil {
        mTriggerObjectForModelChange_cache = TriggerFor_MyRootEntity_mNames_mNamesTableView (object:self)
      }
      return mTriggerObjectForModelChange_cache!
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    T A B L E V I E W    D A T A S O U R C E                                                                       *
  //-------------------------------------------------------------------------------------------------------------------*
  // http://thegreyblog.blogspot.fr/2014/06/nscontroltexteditingdelegate-methods.html

  func numberOfRowsInTableView (NSTableView!) -> Int {
    return mCurrentObjectArray.count
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func tableView (tableView : NSTableView,
                  viewForTableColumn : NSTableColumn,
                  row : NSInteger) -> NSView! {
    let columnIdentifier = viewForTableColumn.identifier as String
    var result : NSTableCellView = tableView.makeViewWithIdentifier (columnIdentifier, owner:self) as NSTableCellView
    let object = mCurrentObjectArray.objectAtIndex (row, file:__FILE__, line:__LINE__) as  NameEntity
    if columnIdentifier == "name" {
      result.textField.stringValue = object.name
      result.textField.target = self
      result.textField.action = "set_name_Action:"
      let tf : PMTextField = result.textField as PMTextField
      tf.setSendContinously (true)
    }else if columnIdentifier == "int" {
      result.textField.objectValue = NSNumber.numberWithLongLong (object.aValue)
      result.textField.target = self
      result.textField.action = "set_aValue_Action:"
      let tf : PMTextField = result.textField as PMTextField
      tf.setSendContinously (true)
    }
    return result
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func set_name_Action (sender : PMTextField) {
    if let tableView = mTableView {
      let row = tableView.rowForView (sender)
      let object = mCurrentObjectArray.objectAtIndex (row, file:__FILE__, line:__LINE__) as  NameEntity
      object.name = sender.stringValue
    }
  }

 //-------------------------------------------------------------------------------------------------------------------*

  func set_aValue_Action (sender : PMTextField) {
    if let tableView = mTableView {
      let row = tableView.rowForView (sender)
      let object = mCurrentObjectArray.objectAtIndex (row, file:__FILE__, line:__LINE__) as  NameEntity
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
        let object = mCurrentObjectArray.objectAtIndex (selectedRow, file:__FILE__, line:__LINE__) as  NameEntity
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

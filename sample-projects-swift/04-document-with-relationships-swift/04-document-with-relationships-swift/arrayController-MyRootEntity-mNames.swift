
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

  private var mObjectSet : Set<NameEntity> = Set ()
  private var mSortedObjectArray : Array<NameEntity> = Array ()

  private var mTableViewSelectionIndexSet = NSMutableIndexSet ()
  private var mSelectedObjectArray : Array<NameEntity> = Array () {
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
        if let col_name : NSTableColumn = unwrappedTableView.tableColumnWithIdentifier ("name") {
          col_name.sortDescriptorPrototype = NSSortDescriptor (key:"name", ascending:true)
        }
        if let col_aValue : NSTableColumn = unwrappedTableView.tableColumnWithIdentifier ("int") {
          col_aValue.sortDescriptorPrototype = NSSortDescriptor (key:"aValue", ascending:true)
        }
        let columns = unwrappedTableView.tableColumns as NSArray
        if columns.count > 0 {
          let firstColumn = columns [0] as! NSTableColumn
          if let sdp = firstColumn.sortDescriptorPrototype {
            unwrappedTableView.sortDescriptors = NSArray (object:sdp) as! [AnyObject]
          }
        }
      }
    }
    noteObjectAllocation (self)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    unregister                                                                                                     *
  //-------------------------------------------------------------------------------------------------------------------*

  func unregister () {
    for managedObject : NameEntity in mObjectSet {
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

  func tableViewSelectionDidChange (NSNotification) {
    if displayDebugMessage {
      appendToTransientEventLog (String (format:"    %@\n", __FUNCTION__))
    }
    var selectedObjectArray : Array<NameEntity> = Array ()
    var tableViewSelectionIndexSet = NSMutableIndexSet ()
    if let tableView = mTableView {
      let selectedRowIndexes = tableView.selectedRowIndexes
      selectedRowIndexes.enumerateIndexesUsingBlock ({(idx : Int, stop : UnsafeMutablePointer <ObjCBool>) in
        stop.initialize (false)
        let object = self.mSortedObjectArray.objectAtIndex (idx, file:__FILE__, line:__LINE__)
        selectedObjectArray.append (object)
        tableViewSelectionIndexSet.addIndex (idx)
      })
    }
    mSelectedObjectArray = selectedObjectArray
    mTableViewSelectionIndexSet = tableViewSelectionIndexSet
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    tableView:sortDescriptorsDidChange: NSTableViewDataSource delegate                                             *
  //-------------------------------------------------------------------------------------------------------------------*

  func tableView (aTableView: NSTableView,
                 sortDescriptorsDidChange oldDescriptors: [AnyObject]) {
    if displayDebugMessage {
      appendToTransientEventLog (String (format:"    %@\n", __FUNCTION__))
    }
    let sortDescriptors : [AnyObject]! = mTableView?.sortDescriptors
    var currentObjectArrayAsMutableArray = NSMutableArray (array: mSortedObjectArray)
    currentObjectArrayAsMutableArray.sortUsingDescriptors (sortDescriptors)
    mSortedObjectArray = currentObjectArrayAsMutableArray.copy () as! Array<NameEntity>
    display ()
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    Observing model change                                                                                         *
  //-------------------------------------------------------------------------------------------------------------------*
  
  func modelDidChange () {
    if displayDebugMessage {
      appendToTransientEventLog (String (format:"    %@\n", __FUNCTION__))
    }
  //--------------------------- Update observers for handling model change
    let oldObjectSet = mObjectSet
    mObjectSet = Set ()
    mObjectSet.unionInPlace (mObject.mNames)
  //--- Removed object set
    var removedObjectSet = oldObjectSet
    removedObjectSet.subtractInPlace (mObjectSet)
    for managedObject : NameEntity in removedObjectSet {
      managedObject.removeObserverOf_name (eventModelChange, inTrigger:false)
      managedObject.removeObserverOf_aValue (eventModelChange, inTrigger:false)
    }
  //--- Added object set
    var addedObjectSet = mObjectSet
    addedObjectSet.subtractInPlace (oldObjectSet)
    for managedObject : NameEntity in addedObjectSet {
      managedObject.addObserverOf_name (eventModelChange, inTrigger:false)
      managedObject.addObserverOf_aValue (eventModelChange, inTrigger:false)
    }
  //-------------------------- Sort objects
    let sortDescriptors : [AnyObject]! = mTableView?.sortDescriptors
    var currentObjectArrayAsMutableArray = NSMutableArray (array: mObject.mNames)
    currentObjectArrayAsMutableArray.sortUsingDescriptors (sortDescriptors)
    mSortedObjectArray = currentObjectArrayAsMutableArray.copy () as! Array<NameEntity>
  //-------------------------- Build new selected objects array
    let previousSelectionSet : Set<NameEntity> = Set (mSelectedObjectArray)
    var newSelectedArray : Array<NameEntity> = Array ()
    var newTableViewSelectionIndexSet = NSMutableIndexSet ()
    var idx = 0 ;
    for object in mSortedObjectArray {
      if previousSelectionSet.contains (object) {
        newTableViewSelectionIndexSet.addIndex (idx)
        newSelectedArray.append (object)
      }
      idx += 1
    }
    if mSelectedObjectArray != newSelectedArray {
      mObject.undoManager()?.registerUndoWithTarget(self, selector:"undoFor_selectedObjectArray:", object:mSelectedObjectArray)
      mSelectedObjectArray = newSelectedArray ;
    }
    if !mTableViewSelectionIndexSet.isEqualToIndexSet(newTableViewSelectionIndexSet) {
      mObject.undoManager()?.registerUndoWithTarget(self, selector:"undoFor_selectedObjectIndexSet:", object:mTableViewSelectionIndexSet)
      mTableViewSelectionIndexSet = newTableViewSelectionIndexSet
    }
    display ()
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func undoFor_selectedObjectArray (selectedObjectArray : NSArray) {
    mSelectedObjectArray = selectedObjectArray as! Array<NameEntity>
  }
  
  //-------------------------------------------------------------------------------------------------------------------*
  
  func undoFor_selectedObjectIndexSet (selectedObjectIndexSet : NSMutableIndexSet) {
    mTableViewSelectionIndexSet = selectedObjectIndexSet
  }
  
   //-------------------------------------------------------------------------------------------------------------------*
  
  func display () {
    if displayDebugMessage {
      appendToTransientEventLog (String (format:"    %@\n", __FUNCTION__))
    }
    if let tableView = mTableView {
    //---------------- So tableViewSelectionDidChange is not called
      tableView.setDelegate (nil)
    //---------------- Reload data
      tableView.reloadData ()
    //---------------- Update table view selection
      tableView.selectRowIndexes (mTableViewSelectionIndexSet, byExtendingSelection:false)
    //---------------- Scroll first selected row to visible
      if mTableViewSelectionIndexSet.count > 0 {
        tableView.scrollRowToVisible (mTableViewSelectionIndexSet.firstIndex)
      }
    //----------------
      tableView.setDelegate (self)
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

  func numberOfRowsInTableView (NSTableView) -> Int {
    if displayDebugMessage {
      appendToTransientEventLog (String (format:"    %@ (%ld objects)\n", __FUNCTION__, mSortedObjectArray.count))
    }
    return mSortedObjectArray.count
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func tableView (tableView : NSTableView,
                  viewForTableColumn : NSTableColumn?,
                  row : NSInteger) -> NSView {
    let columnIdentifier = viewForTableColumn!.identifier
    if displayDebugMessage {
      appendToTransientEventLog (String (format:"    %@, identifier '%@\', row %d\n", __FUNCTION__, columnIdentifier, row))
    }
    var result : NSTableCellView = tableView.makeViewWithIdentifier (columnIdentifier, owner:self) as! NSTableCellView
    let object = mSortedObjectArray.objectAtIndex (row, file:__FILE__, line:__LINE__)
    if columnIdentifier == "name" {
      result.textField?.stringValue = object.name
      result.textField?.target = self
      result.textField?.action = "set_name_Action:"
      let tf : PMTextField = result.textField as! PMTextField
    }else if columnIdentifier == "int" {
      let tf : PMNumberField = result.textField as! PMNumberField
      tf.myIntegerValue = object.aValue
      tf.target = self
      tf.action = "set_aValue_Action:"
    }
    return result
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func set_name_Action (sender : PMTextField) {
    if let tableView = mTableView {
      let row = tableView.rowForView (sender)
      if row >= 0 {
        let object = mSortedObjectArray.objectAtIndex (row, file:__FILE__, line:__LINE__)
        let validationResult = object.validate_name (sender.stringValue)
        switch validationResult {
        case PMValidationResult.ok :
          object.name = sender.stringValue
        case PMValidationResult.rejectWithBeep :
          NSBeep ()
        case PMValidationResult.rejectWithAlert (let informativeText) :
          if let window = sender.window {
            let alert = NSAlert ()
            alert.messageText = String (format:"The value “%@” is invalid.", sender.stringValue)
            alert.informativeText = informativeText
            alert.addButtonWithTitle ("Ok")
            alert.addButtonWithTitle ("Discard Change")
            alert.beginSheetModalForWindow (window, completionHandler:{(response : NSModalResponse) in
              if response == NSAlertSecondButtonReturn { // Discard Change
                object.removeObserverOf_name (self.eventModelChange, inTrigger:false)
                object.name = sender.stringValue
                object.addObserverOf_name (self.eventModelChange, inTrigger:false)
              }
            })
          }
        }
      }
    }
  }

 //-------------------------------------------------------------------------------------------------------------------*

  func set_aValue_Action (sender : PMNumberField) {
    if let tableView = mTableView {
      let row = tableView.rowForView (sender)
      if row >= 0 {
        let object = mSortedObjectArray.objectAtIndex (row, file:__FILE__, line:__LINE__)
        let validationResult = object.validate_aValue (sender.integerValue)
        switch validationResult {
        case PMValidationResult.ok :
          object.aValue = sender.integerValue
        case PMValidationResult.rejectWithBeep :
          NSBeep ()
        case PMValidationResult.rejectWithAlert (let informativeText) :
          if let window = sender.window {
            let alert = NSAlert ()
            alert.messageText = String (format:"The value “%d” is invalid.", sender.integerValue)
            alert.informativeText = informativeText
            alert.addButtonWithTitle ("Ok")
            alert.addButtonWithTitle ("Discard Change")
            alert.beginSheetModalForWindow (window, completionHandler:{(response : NSModalResponse) in
              if response == NSAlertSecondButtonReturn { // Discard Change
                object.removeObserverOf_aValue (self.eventModelChange, inTrigger:false)
                object.aValue = sender.integerValue
                object.addObserverOf_aValue (self.eventModelChange, inTrigger:false)
              }
            })
          }
        }
      }
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    add                                                                                                            *
  //-------------------------------------------------------------------------------------------------------------------*

  func add (inSender : AnyObject!) {
    if displayDebugMessage {
      appendToTransientEventLog (String (format:"    %@\n", __FUNCTION__))
    }
    var newObject : NameEntity = NameEntity (undoManager:mUndoManager!)
    var array = mObject.mNames
    array.append (newObject)
    if mSelectNewObject {
      mSelectedObjectArray = [newObject]
    }
    mObject.mNames = array
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    remove                                                                                                         *
  //-------------------------------------------------------------------------------------------------------------------*

  func remove (inSender : AnyObject!) {
    if mSelectedObjectArray.count > 0 {
      if let tableView = mTableView {
        var newObjectArray = mObject.mNames
        for object in mSelectedObjectArray {
          let optItx = find (newObjectArray, object)
          if let idx = optItx {
            newObjectArray.removeAtIndex (idx)
          }
        }
        mTableViewSelectionIndexSet = NSMutableIndexSet ()
        if newObjectArray.count == 0 {
          mSelectedObjectArray = Array ()
        }else{
          let idx = tableView.selectedRow
          if idx < mSortedObjectArray.count {
            mSelectedObjectArray = [mSortedObjectArray [idx]]
            mTableViewSelectionIndexSet.addIndex (idx)
          }else{
            mSelectedObjectArray = [newObjectArray.last!]
            mTableViewSelectionIndexSet.addIndex (newObjectArray.count - 1)
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
      appendToTransientEventLog (String (format:"    %@\n", __FUNCTION__))
    }
    let newValue = mSelectedObjectArray.count > 0
    if canRemove_private != newValue {
      canRemove_private = newValue
      for (key, object) in canRemove_observers {
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

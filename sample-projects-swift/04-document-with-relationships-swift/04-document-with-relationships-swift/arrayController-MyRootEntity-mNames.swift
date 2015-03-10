
import Cocoa

private let displayDebugMessage = false

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    TriggerFor_MyRootEntity_mNames_mNamesTableView                                                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class TriggerFor_MyRootEntity_mNames_mNamesTableView : PMTransientEvent {
  private weak var mArrayController : ArrayController_MyRootEntity_mNames? = nil
  
  init (object : ArrayController_MyRootEntity_mNames) {
    mArrayController = object
  }
 
  override func noteModelDidChange () {
     mArrayController?.modelDidChange ()
 }
  
  override func trigger () {
    mArrayController?.display ()
  }

  override func userClassName () -> String { return "TriggerFor_MyRootEntity_mNames_mNamesTableView" }
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

  private var mSelectedObjectArray : Array<NameEntity> = Array () {
    didSet {
      if mSelectedObjectArray != oldValue {
        mObject.undoManager()?.registerUndoWithTarget(self, selector:"undoFor_selectedObjectArray:", object:oldValue)
        updateCanRemoveProperty ()
      }
    }
  }
  
  private var mSelectNewObject = true
  private var mAllowsEmptySelection = false
  private var mAllowsMultipleSelection = true
 
  //-------------------------------------------------------------------------------------------------------------------*
  
  func undoFor_selectedObjectArray (previousSelectedObjectArray : NSArray) {
    mSelectedObjectArray = previousSelectedObjectArray as! Array<NameEntity>
  }
  
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
          col_name.sortDescriptorPrototype = NSSortDescriptor (key:"name_keyCodingValue", ascending:true)
        }
        if let col_aValue : NSTableColumn = unwrappedTableView.tableColumnWithIdentifier ("int") {
          col_aValue.sortDescriptorPrototype = NSSortDescriptor (key:"aValue_keyCodingValue", ascending:true)
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
      managedObject.name.removeObserver (eventModelChange, inTrigger:false)
      managedObject.aValue.removeObserver (eventModelChange, inTrigger:false)
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
    if let tableView = mTableView {
      let selectedRowIndexes = tableView.selectedRowIndexes
      selectedRowIndexes.enumerateIndexesUsingBlock ({(idx : Int, stop : UnsafeMutablePointer <ObjCBool>) in
        stop.initialize (false)
        let object = self.mSortedObjectArray.objectAtIndex (idx, file:__FILE__, line:__LINE__)
        selectedObjectArray.append (object)
      })
    }
    mSelectedObjectArray = selectedObjectArray
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
    mObjectSet.unionInPlace (mObject.mNames.values)
  //--- Removed object set
    var removedObjectSet = oldObjectSet
    removedObjectSet.subtractInPlace (mObjectSet)
    for managedObject : NameEntity in removedObjectSet {
      managedObject.name.removeObserver (eventModelChange, inTrigger:false)
      managedObject.aValue.removeObserver (eventModelChange, inTrigger:false)
    }
  //--- Added object set
    var addedObjectSet = mObjectSet
    addedObjectSet.subtractInPlace (oldObjectSet)
    for managedObject : NameEntity in addedObjectSet {
      managedObject.name.addObserver (eventModelChange, inTrigger:false)
      managedObject.aValue.addObserver (eventModelChange, inTrigger:false)
    }
  //-------------------------- Sort objects
    let sortDescriptors : [AnyObject]! = mTableView?.sortDescriptors
    var currentObjectArrayAsMutableArray = NSMutableArray (array: mObject.mNames.values)
    currentObjectArrayAsMutableArray.sortUsingDescriptors (sortDescriptors)
    mSortedObjectArray = currentObjectArrayAsMutableArray.copy () as! Array<NameEntity>
  //-------------------------- Build new selected objects array
    let previousSelectionSet : Set<NameEntity> = Set (mSelectedObjectArray)
    var newSelectedArray : Array<NameEntity> = Array ()
    for object in mSortedObjectArray {
      if previousSelectionSet.contains (object) {
        newSelectedArray.append (object)
      }
    }
    mSelectedObjectArray = newSelectedArray ;
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
      var newTableViewSelectionIndexSet = NSMutableIndexSet ()
      for object in mSelectedObjectArray {
        if let idx = find (mSortedObjectArray, object) {
          newTableViewSelectionIndexSet.addIndex (idx)
        }
      }
      tableView.selectRowIndexes (newTableViewSelectionIndexSet, byExtendingSelection:false)
    //---------------- Scroll first selected row to visible
      if newTableViewSelectionIndexSet.count > 0 {
        tableView.scrollRowToVisible (newTableViewSelectionIndexSet.firstIndex)
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
      result.textField?.stringValue = object.name.value
      result.textField?.target = self
      result.textField?.action = "set_name_Action:"
      let tf : PMTextField = result.textField as! PMTextField
    }else if columnIdentifier == "int" {
      let tf : PMNumberField = result.textField as! PMNumberField
      tf.myIntegerValue = object.aValue.value
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
        let validationResult = object.name.validate (sender.stringValue)
        switch validationResult {
        case PMValidationResult.ok :
          object.name.setValue (sender.stringValue)
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
                object.name.removeObserver(self.eventModelChange, inTrigger:false)
                object.name.setValue (sender.stringValue)
                object.name.addObserver (self.eventModelChange, inTrigger:false)
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
        let validationResult = object.aValue.validate (sender.integerValue)
        switch validationResult {
        case PMValidationResult.ok :
          object.aValue.setValue (sender.integerValue)
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
                object.aValue.removeObserver(self.eventModelChange, inTrigger:false)
                object.aValue.setValue (sender.integerValue)
                object.aValue.addObserver (self.eventModelChange, inTrigger:false)
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
    var array = mObject.mNames.values
    array.append (newObject)
    if mSelectNewObject {
      mSelectedObjectArray = [newObject]
    }
    mObject.mNames.values = array
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    remove                                                                                                         *
  //-------------------------------------------------------------------------------------------------------------------*

  func remove (inSender : AnyObject!) {
    if mSelectedObjectArray.count > 0 {
      if let tableView = mTableView {
        var newObjectArray = mObject.mNames.values
        for object in mSelectedObjectArray {
          let optItx = find (newObjectArray, object)
          if let idx = optItx {
            newObjectArray.removeAtIndex (idx)
          }
        }
        if newObjectArray.count == 0 {
          mSelectedObjectArray = Array ()
        }else{
          let idx = tableView.selectedRow
          if idx < -1 {
            mSelectedObjectArray = [newObjectArray [0]]
          }else if idx < newObjectArray.count {
            mSelectedObjectArray = [newObjectArray [idx]]
          }else{
            mSelectedObjectArray = [newObjectArray.last!]
          }
        }
        mObject.mNames.values = newObjectArray
      }
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //  Transient: canRemove                                                                                             *
  //-------------------------------------------------------------------------------------------------------------------*

  var canRemove = PMStoredProperty_Bool (false)
  
  func updateCanRemoveProperty () {
    if displayDebugMessage {
      appendToTransientEventLog (String (format:"    %@\n", __FUNCTION__))
    }
    canRemove.setValue (mSelectedObjectArray.count > 0)
   }
}

//---------------------------------------------------------------------------------------------------------------------*

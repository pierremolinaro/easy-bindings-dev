import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

private let displayDebugMessage = false

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//    ArrayController_PMDocument_nameController                                                                        *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class ArrayController_PMDocument_nameController : AbstractArrayController, PMTransientPropertyProtocol {
  private let mAllowsEmptySelection = false
  private let mAllowsMultipleSelection = true

  private var mModel : ToManyRelationship_MyRootEntity_mNames?

  private var sortedArray = ArrayOf_NameEntity ()

  private var mTableViewController : Controller_PMTableView_controller?
 
  //-------------------------------------------------------------------------------------------------------------------*
  //    init                                                                                                           *
  //-------------------------------------------------------------------------------------------------------------------*

  override init () {
    super.init ()
  //--- Sort Descriptors
    mSortDescriptors.append (NSSortDescriptor (key:"name_keyCodingValue", ascending:true))
    mSortDescriptors.append (NSSortDescriptor (key:"aValue_keyCodingValue", ascending:true))

  //--- 'canRemove' transient function 
    canRemove.computeFunction = { self.selectedObjectSet ().count > 0 }
  //--- 'sortedArray' transient function 
    sortedArray.computeFunction = {
      let sortedObjectArray : Array<NameEntity>
      if let model = self.mModel {
        var currentObjectArrayAsMutableArray = NSMutableArray (array:model.prop)
        currentObjectArrayAsMutableArray.sortUsingDescriptors (self.mSortDescriptors)
        sortedObjectArray = currentObjectArrayAsMutableArray.copy () as! Array<NameEntity>
      }else{
        sortedObjectArray = Array<NameEntity> ()
      }
      return sortedObjectArray
    }
 }

   //-------------------------------------------------------------------------------------------------------------------*
  //    bind_modelAndView                                                                                              *
  //-------------------------------------------------------------------------------------------------------------------*

  func bind_modelAndView (object:ToManyRelationship_MyRootEntity_mNames, tableView:PMTableView, file:String, line:Int) {
    mModel = object
    mTableViewController = Controller_PMTableView_controller (object:self, outlet:tableView, file:file, line:line)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    unbind_modelAndView                                                                                            *
  //-------------------------------------------------------------------------------------------------------------------*

  func unbind_modelAndView () {
    canRemove.computeFunction = nil
    sortedArray.computeFunction = nil
    mTableViewController?.unregister ()
    mTableViewController = nil
    mInternalSelectedObjectSet = Set ()
    mModel?.removeObserverOf_name (event, inTrigger:false)
    mModel?.removeObserverOf_aValue (event, inTrigger:false)
  }
  
  //-------------------------------------------------------------------------------------------------------------------*
  //    Sort descriptors                                                                                               *
  //-------------------------------------------------------------------------------------------------------------------*
  
  private var mSortDescriptors : [AnyObject] = [AnyObject] () {
    didSet {
      noteModelDidChange () // Force sorting
      postEvents () // Notify outlets display should be done
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  override func setSortDescriptors (sortDescriptors : [AnyObject]) {
    mSortDescriptors = sortDescriptors
  }
  
  //-------------------------------------------------------------------------------------------------------------------*
  //    Selected object set                                                                                            *
  //-------------------------------------------------------------------------------------------------------------------*

  var mSelectedObjectSetShouldBeComputed = true

  var mInternalSelectedObjectSet = Set <NameEntity> ()

  //-------------------------------------------------------------------------------------------------------------------*

  func selectedObjectSet () -> Set <NameEntity> {
    if mSelectedObjectSetShouldBeComputed {
      mSelectedObjectSetShouldBeComputed = false
      var newInternalSelectedObjectSet = mInternalSelectedObjectSet
      newInternalSelectedObjectSet.intersectInPlace (sortedArray.prop)
      mInternalSelectedObjectSet = newInternalSelectedObjectSet
      if (mInternalSelectedObjectSet.count == 0) && (sortedArray.prop.count > 0) {
        mInternalSelectedObjectSet.insert (sortedArray.prop [0])
      }
    }
    return mInternalSelectedObjectSet
  }

  //-------------------------------------------------------------------------------------------------------------------*
  
  func setSelectedObjectSet (objectSet : Set <NameEntity>) {
    mInternalSelectedObjectSet = objectSet
    mSelectedObjectSetShouldBeComputed = true
    canRemove.noteModelDidChange ()
  }

  //-------------------------------------------------------------------------------------------------------------------*

  override func selectedObjectIndexSet () -> NSIndexSet {
  //--- Dictionary of object indexes
    var objectDictionary = [NameEntity : Int] ()
    for (index, object) in enumerate (sortedArray.prop) {
      objectDictionary [object] = index
    }
    var indexSet = NSMutableIndexSet ()
    for object in selectedObjectSet () {
      if let index = objectDictionary [object] {
        indexSet.addIndex (index)
      }
    }
    return indexSet
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    Model observing event                                                                                          *
  //-------------------------------------------------------------------------------------------------------------------*

  private var eventModelChange_cache : PMTransientEvent? = nil
  var event : PMTransientEvent {
    get {
      if eventModelChange_cache == nil {
        eventModelChange_cache = PMTransientEvent (self)
      }
      return eventModelChange_cache!
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    Object array dictionary                                                                                        *
  //-------------------------------------------------------------------------------------------------------------------*

  private var mSortedObjectArrayDictionary = [NameEntity : Int] ()
  private var mSortedObjectArrayDictionaryShouldBeComputed = true
  
  var sortedObjectArrayDictionary : [NameEntity : Int] {
    get {
      if mSortedObjectArrayDictionaryShouldBeComputed {
        mSortedObjectArrayDictionaryShouldBeComputed = false
        mSortedObjectArrayDictionary = [:]
        for (idx, object) in enumerate (sortedArray.prop) {
          mSortedObjectArrayDictionary [object] = idx
        }
      }
      return mSortedObjectArrayDictionary
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    Observing model change                                                                                         *
  //-------------------------------------------------------------------------------------------------------------------*
  
  func noteModelDidChange () {
    if displayDebugMessage {
      NSLog ("%@", __FUNCTION__)
    }
    sortedArray.noteModelDidChange ()
    canRemove.noteModelDidChange ()
    mSortedObjectArrayDictionaryShouldBeComputed = true
    mSelectedObjectSetShouldBeComputed = true
  //--- Notify tableView outlets model did change
    postEvents ()
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    Configure table view                                                                                           *
  //-------------------------------------------------------------------------------------------------------------------*

  override func configureTableView (inTableView : PMTableView, file : String, line : Int) {
    inTableView.allowsEmptySelection = mAllowsEmptySelection
    inTableView.allowsMultipleSelection = mAllowsMultipleSelection
    if let anyObject: AnyObject = inTableView.makeViewWithIdentifier ("name", owner:self) {
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
    if let anyObject: AnyObject = inTableView.makeViewWithIdentifier ("int", owner:self) {
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
    inTableView.setDataSource (self)
    inTableView.setDelegate (self)
    if let col_name : NSTableColumn = inTableView.tableColumnWithIdentifier ("name") {
      col_name.sortDescriptorPrototype = NSSortDescriptor (key:"name_keyCodingValue", ascending:true)
    }
    if let col_aValue : NSTableColumn = inTableView.tableColumnWithIdentifier ("int") {
      col_aValue.sortDescriptorPrototype = NSSortDescriptor (key:"aValue_keyCodingValue", ascending:true)
    }
    let columns = inTableView.tableColumns as NSArray
    if columns.count > 0 {
      let firstColumn = columns [0] as! NSTableColumn
      if let sdp = firstColumn.sortDescriptorPrototype {
        inTableView.sortDescriptors = NSArray (object:sdp) as! [AnyObject]
      }
    }
    mModel?.addObserverOf_name (event, inTrigger:true)
    mModel?.addObserverOf_aValue (event, inTrigger:true)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    T A B L E V I E W    D E L E G A T E : tableViewSelectionDidChange:                                            *
  //-------------------------------------------------------------------------------------------------------------------*

  func tableViewSelectionDidChange (notication : NSNotification) {
    if displayDebugMessage {
      appendToTransientEventLog (String (format:"    %@\n", __FUNCTION__))
    }
    let tableView : AnyObject? = notication.object
    if let tableView = notication.object as? NSTableView, model = mModel {
      var newSelectedObjectSet = Set <NameEntity> ()
      for index in tableView.selectedRowIndexes {
        newSelectedObjectSet.insert (sortedArray.prop.objectAtIndex (index, file: __FILE__, line: __LINE__))
      }
      setSelectedObjectSet (newSelectedObjectSet)
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    T A B L E V I E W    D E L E G A T E : tableView:sortDescriptorsDidChange:                                     *
  //-------------------------------------------------------------------------------------------------------------------*

  func tableView (aTableView: NSTableView,
                  sortDescriptorsDidChange oldDescriptors: [AnyObject]) {
    if displayDebugMessage {
      NSLog ("%@", __FUNCTION__)
    }
    mSortDescriptors = aTableView.sortDescriptors
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    T A B L E V I E W    D A T A S O U R C E                                                                       *
  //-------------------------------------------------------------------------------------------------------------------*
  // http://thegreyblog.blogspot.fr/2014/06/nscontroltexteditingdelegate-methods.html

  func numberOfRowsInTableView (NSTableView) -> Int {
    if displayDebugMessage {
      appendToTransientEventLog (String (format:"    %@ (%ld objects)\n", __FUNCTION__, sortedArray.prop.count))
    }
    return sortedArray.prop.count
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func tableView (tableView : NSTableView,
                  viewForTableColumn : NSTableColumn?,
                  row : Int) -> NSView {
    if displayDebugMessage {
//      NSLog ("%@, row %d, column %@", __FUNCTION__, row, viewForTableColumn!.identifier)
    }
    let columnIdentifier = viewForTableColumn!.identifier
    var result : NSTableCellView = tableView.makeViewWithIdentifier (columnIdentifier, owner:self) as! NSTableCellView
    result.textField?.tag = row
    let object = sortedArray.prop.objectAtIndex (row, file:__FILE__, line:__LINE__)
    if columnIdentifier == "name" {
    //--- From cell-String-PMTextField.text file
      result.textField?.stringValue = object.name.prop
      result.textField?.target = self
      result.textField?.action = "set_name_Action:"
      let tf : PMTextField = result.textField as! PMTextField
    //--- End
    }else if columnIdentifier == "int" {
    //--- From cell-String-PMNumberField.text file
      let tf : PMNumberField = result.textField as! PMNumberField
      tf.myIntegerValue = object.aValue.prop
      tf.target = self
      tf.action = "set_aValue_Action:"
    //--- end
    }
    return result
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func set_name_Action (sender : PMTextField) {
    let row = sender.tag
    let object = sortedArray.prop.objectAtIndex (row, file:__FILE__, line:__LINE__)
    let validationResult = object.name.validate (sender.stringValue)
    switch validationResult {
    case PMValidationResult.ok :
      object.name.setProp (sender.stringValue)
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
         //   object.name.removeObserver(self.eventModelChange, inTrigger:false)
            object.name.setProp (sender.stringValue)
         //   object.name.addObserver (self.eventModelChange, inTrigger:false)
          }
        })
      }
    }
  }

 //-------------------------------------------------------------------------------------------------------------------*

  func set_aValue_Action (sender : PMNumberField) {
    let row = sender.tag
    let object = sortedArray.prop.objectAtIndex (row, file:__FILE__, line:__LINE__)
    let validationResult = object.aValue.validate (sender.integerValue)
    switch validationResult {
    case PMValidationResult.ok :
      object.aValue.setProp (sender.integerValue)
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
         //   object.aValue.removeObserver(self.eventModelChange, inTrigger:false)
            object.aValue.setProp (sender.integerValue)
         //   object.aValue.addObserver (self.eventModelChange, inTrigger:false)
          }
        })
      }
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    add                                                                                                            *
  //-------------------------------------------------------------------------------------------------------------------*

   func add (inSender : NSButton?) {
    if displayDebugMessage {
      appendToTransientEventLog (String (format:"    %@\n", __FUNCTION__))
    }
    if let model = mModel, owner = model.owner, undoManager = owner.undoManager () {
      var newObject : NameEntity = NameEntity (undoManager:undoManager)
      var array = model.prop
      array.append (newObject)
    //--- New object is the selection
      var newSelectedObjectSet = Set <NameEntity> ()
      newSelectedObjectSet.insert (newObject)
      setSelectedObjectSet (newSelectedObjectSet)
      model.prop = array
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    remove                                                                                                         *
  //-------------------------------------------------------------------------------------------------------------------*

  func remove (inSender : NSButton?) {
    if let model = mModel where selectedObjectSet ().count > 0 {
    //------------- Find the object to be selected after selected object removing
    //--- Dictionary of object sorted indexes
      var sortedObjectDictionary = [NameEntity : Int] ()
      for (index, object) in enumerate (sortedArray.prop) {
        sortedObjectDictionary [object] = index
      }
      var indexArrayOfSelectedObjects = [Int] ()
      for object in selectedObjectSet () {
        let index = sortedObjectDictionary [object]
        if let idx = index {
          indexArrayOfSelectedObjects.append (idx)
        }
      }
    //--- Sort
      indexArrayOfSelectedObjects.sort { $0 < $1 }
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
      if (newSelectionIndex >= 0) && (newSelectionIndex < sortedArray.prop.count) {
        newSelectedObject = sortedArray.prop [newSelectionIndex]
      }
    //----------------------------------------- Remove selected object
    //--- Dictionary of object absolute indexes
      var objectDictionary = [NameEntity : Int] ()
      for (index, object) in enumerate (model.prop) {
        objectDictionary [object] = index
      }
    //--- Build selected objects index array
      var selectedObjectIndexArray = [Int] ()
      for object in selectedObjectSet () {
        let index = objectDictionary [object]
        if let idx = index {
          selectedObjectIndexArray.append (idx)
        }
      }
    //--- Sort in reverse order
      selectedObjectIndexArray.sort { $1 < $0 }
    //--- Remove objects, in reverse of order of their index
      var newObjectArray = model.prop
      for index in selectedObjectIndexArray {
        newObjectArray.removeAtIndex (index)
      }
    //----------------------------------------- Set new selection
      var newSelectionSet = Set <NameEntity> ()
      if let object = newSelectedObject {
        newSelectionSet.insert (object)
      }
      setSelectedObjectSet (newSelectionSet)
    //----------------------------------------- Set new object array
      model.prop = newObjectArray
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //  Transient: canRemove                                                                                             *
  //-------------------------------------------------------------------------------------------------------------------*

  var canRemove = PMTransientProperty_Bool ()
}

//---------------------------------------------------------------------------------------------------------------------*

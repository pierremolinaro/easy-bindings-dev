import Cocoa

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

let kFormatSignature = "PM-BINARY-FORMAT"
let EBVersion = "EBVersion"

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

private var gDebugMenuItemsAdded = false

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

enum EBDocumentCompressionEnum {
  case EBDocumentNoCompression
  case EBDocumentBZ2Compression
  case EBDocumentZLIBCompression
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//  EBManagedDocument
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

class EBManagedDocument : NSDocument, EBUserClassName {
  var mRootObject : EBManagedObject?

  private var mReadMetadataStatus : UInt8 = 0
  private var mMetadataDictionary : NSMutableDictionary = [:]
  private var mManagedObjectContext : EBManagedObjectContext

  //····················································································································
  //    init
  //····················································································································

  override init () {
    let theUndoManager = EBUndoManager ()
    mManagedObjectContext = EBManagedObjectContext (undoManager:theUndoManager)
    super.init ()
    noteObjectAllocation (self)
    undoManager = theUndoManager
    hookOfInit ()
    theUndoManager.disableUndoRegistration ()
    mRootObject = mManagedObjectContext.newInstanceOfEntityNamed (rootEntityClassName ())
    hookOfNewDocumentCreation ()
    theUndoManager.enableUndoRegistration ()
  }

  //····················································································································
  //    deinit
  //····················································································································

  deinit {
    noteObjectDeallocation (self)
  }

  //····················································································································
  //    hookOfInit
  //····················································································································

  func hookOfInit () {
  }

  //····················································································································
  //    hookOfNewDocumentCreation
  //····················································································································

  func hookOfNewDocumentCreation () {
  }

  //····················································································································
  //    rootEntityClassName
  //····················································································································

  func rootEntityClassName () -> String {
    return ""
  }

  //····················································································································
  //  SAVE
  //····················································································································

  func metadataStatusForSaving () -> UInt8 {
    return 0 ;
  }

  //····················································································································

  func compressDataOnSaving () -> EBDocumentCompressionEnum {
    return EBDocumentCompressionEnum.EBDocumentBZ2Compression ;
  }

  //····················································································································

  func hookOfWillSave () {
  }

  //····················································································································

  
  override func dataOfType (typeName: String?) throws -> NSData {
  //---
    hookOfWillSave ()
  //--- Store the document version to metadata dictionary
    var version = mVersionObserver.propval
    switch mVersionShouldChangeObserver.prop {
    case .noSelection, .multipleSelection :
      break
    case .singleSelection (let shouldChange) :
      if shouldChange {
        version += 1
        mVersionObserver.setProp (version)
        mVersionShouldChangeObserver.updateStartUpSignature ()
      }
    }
    mMetadataDictionary.setObject (NSNumber (unsignedInteger:version), forKey:EBVersion)
  //--- Add the witdth and the height of main window to metadata dictionary
    if let unwrappedWindowForSheet = windowForSheet { // Document has been opened in the user interface
      if (unwrappedWindowForSheet.styleMask & NSResizableWindowMask) != 0 { // Only if window is resizable
        let windowSize = unwrappedWindowForSheet.frame.size ;
        mMetadataDictionary.setObject (NSNumber (double: Double (windowSize.width)), forKey:"EBWindowWidth")
        mMetadataDictionary.setObject (NSNumber (double: Double (windowSize.height)), forKey:"EBWindowHeight")
      }
    }else{ // Document has not been opened in the user interface, use values read from file, if they exist
/*      NSDictionary * metadataDictionaryReadFromFile = self.metadataDictionaryReadFromFile ;
      NSNumber * v = [metadataDictionaryReadFromFile objectForKey:@"EBWindowWidth"] ;
      if (nil != v) {
        [metadataDictionary setObject:v forKey:@"EBWindowWidth"] ;
      }
      v = [metadataDictionaryReadFromFile objectForKey:@"EBWindowHeight"] ;
      if (nil != v) {
        [metadataDictionary setObject:v forKey:@"EBWindowHeight"] ;
      }*/
    }
  //---
    let fileData = NSMutableData ()
    var trace : String? = nil
  //--- Append signature
    fileData.writeSignature (&trace)
  //--- Write status
    fileData.writeByte (metadataStatusForSaving (), trace:&trace)
  //--- Append metadata dictionary
    let metaData = try NSPropertyListSerialization.dataWithPropertyList (mMetadataDictionary,
      format:NSPropertyListFormat.BinaryFormat_v1_0,
      options:0
    )
    fileData.writeByte (1, trace:&trace)
    fileData.writeAutosizedData (metaData, trace:&trace)
  //--- Append document data
    let documentData = try dataForSavingFromRootObject ()
    fileData.writeByte (6, trace:&trace)
    fileData.writeAutosizedData (documentData, trace:&trace)
/*    switch ([self compressDataOnSaving]) {
    case EBDocumentBZ2Compression:
      data = [data bz2CompressedDataWithCompressionFactor:9 returnedErrorCode:nil] ;
      [fileData writeByte:5 trace:nil] ;
      [fileData writeAutosizedData:data trace:nil] ;
      break ;
    case EBDocumentZLIBCompression:
      data = [data zlibCompressedDataWithCompressionFactor:9 returnedErrorCode:nil] ;
      [fileData writeByte:7 trace:nil] ;
      [fileData writeAutosizedData:data trace:nil] ;
      break ;
    default:
      [fileData writeByte:6 trace:nil] ;
      [fileData writeAutosizedData:data trace:nil] ;
      break ;
    }*/
  //--- Append final byte
    fileData.writeByte (0, trace:&trace)
   // println (trace)
  //---
    return fileData ;
  }

  //····················································································································

  func dataForSavingFromRootObject () throws -> NSData {
    let objectsToSaveArray : Array<EBManagedObject> = mManagedObjectContext.reachableObjectsFromRootObject (mRootObject!)
  //--- Set savingIndex for each object
    var idx = 0 ;
    for object in objectsToSaveArray {
      object.savingIndex = idx
      idx += 1
    }
  //---
    var saveDataArray : [NSDictionary] = []
    for object in objectsToSaveArray {
      let d : NSMutableDictionary = [
        "--entity" : object.className
      ]
      object.saveIntoDictionary (d)
      saveDataArray.append (d)
    }
    return try NSPropertyListSerialization.dataWithPropertyList (saveDataArray,
      format:NSPropertyListFormat.BinaryFormat_v1_0,
      options:0
    )
  }

  //····················································································································
  //    READ DOCUMENT FROM FILE
  //····················································································································

  override func readFromData (data: NSData?, ofType typeName: String?) throws {
    undoManager?.disableUndoRegistration ()
  //---- Define input data scanner
    var dataScanner = EBDataScanner (data:data!)
  //--- Check Signature
    for c in kFormatSignature.utf8 {
      dataScanner.acceptRequiredByte (c, sourceFile:__FUNCTION__)
    }
  //--- Read Status
    mReadMetadataStatus = dataScanner.parseByte ()
  //--- if ok, check byte is 1
    dataScanner.acceptRequiredByte (1, sourceFile:__FUNCTION__)
  //--- Read metadata dictionary
    let dictionaryData = dataScanner.parseAutosizedData ()
    let metadataDictionary = try NSPropertyListSerialization.propertyListWithData (dictionaryData,
      options:NSPropertyListReadOptions.Immutable,
      format:nil
    ) as! NSDictionary
    mMetadataDictionary = metadataDictionary.mutableCopy () as! NSMutableDictionary
  //--- Read version from file
    if let versionNumber = mMetadataDictionary.objectForKey (EBVersion) as? NSNumber {
      mVersionObserver.setProp (versionNumber.integerValue)
    }
  //--- Read data dictionary
    let dataFormat = dataScanner.parseByte ()
    switch dataFormat {
    case 6 :
      let data = dataScanner.parseAutosizedData ()
      try readManagedObjectsFromData (data)
    default:
      NSLog ("unknown data format: %u", dataFormat)
    }
/*    BOOL legacyDataWithoutConverterError = NO ;
    if ([dataScanner testAcceptByte:3]) { // Legacy data, not compressed
      NSData * data = [dataScanner parseAutosizedData] ;
      if (NULL == legacyFormatLoader) {
        data = nil ;
        legacyDataWithoutConverterError = YES ;
      }else if (nil != data) {
        mRootObject = legacyFormatLoader (data, self.entityManager, self.rootEntityClass, & error) ;
      }
    }else if ([dataScanner testAcceptByte:4]) { // Legacy data, ZLIB Compressed
      NSData * compressedData = [dataScanner parseAutosizedData] ;
      NSData * data = nil ;
      if (nil != compressedData) {
         data = [compressedData zlibDecompressedDataWithEstimedExpansion:10 returnedErrorCode:nil] ;
      }
      if (NULL == legacyFormatLoader) {
        legacyDataWithoutConverterError = YES ;
        data = nil ;
      }else if (nil != data) {
        mRootObject = legacyFormatLoader (data, self.entityManager, self.rootEntityClass, & error) ;
      }
    }else if ([dataScanner testAcceptByte:2]) { // Legacy data, BZ2 compressed
      NSData * compressedData = [dataScanner parseAutosizedData] ;
      NSData * data = nil ;
      if (nil != compressedData) {
        data = [compressedData bz2DecompressedDataWithEstimedExpansion:10 returnedErrorCode:nil] ;
      }
      if (NULL == legacyFormatLoader) {
        legacyDataWithoutConverterError = YES ;
        data = nil ;
      }else if (nil != data) {
        mRootObject = legacyFormatLoader (data, self.entityManager, self.rootEntityClass, & error) ;
      }
    }else if ([dataScanner testAcceptByte:6]) { // Not compressed
      NSData * data = [dataScanner parseAutosizedData] ;
      if (nil != data) {
        mRootObject = [mEntityManager readFromData:data withRootEntityClass:self.rootEntityClass] ;
        macroRetain (mRootObject) ;
      }
    }else if ([dataScanner testAcceptByte:7]) { // ZLIB Compressed
      NSData * compressedData = [dataScanner parseAutosizedData] ;
      if (nil != compressedData) {
        NSData * data = [compressedData zlibDecompressedDataWithEstimedExpansion:10 returnedErrorCode:nil] ;
        mRootObject = [mEntityManager readFromData:data withRootEntityClass:self.rootEntityClass] ;
        macroRetain (mRootObject) ;
      }
    }else{
      [dataScanner acceptRequiredByte:5 sourceFile:__FUNCTION__] ; // BZ2 compressed
      NSData * compressedData = [dataScanner parseAutosizedData] ;
      if (nil != compressedData) {
        NSData * data = [compressedData bz2DecompressedDataWithEstimedExpansion:10 returnedErrorCode:nil] ;
        mRootObject = [mEntityManager readFromData:data withRootEntityClass:self.rootEntityClass] ;
        macroRetain (mRootObject) ;
      }
    }*/
  //--- if ok, check final byte (0)
    dataScanner.acceptRequiredByte (0, sourceFile:__FUNCTION__)
  //--- Scanner error ?
    if !dataScanner.ok () {
      let dictionary = [
        "Cannot Open Document" :  NSLocalizedDescriptionKey,
        "The file has an invalid format" :  NSLocalizedRecoverySuggestionErrorKey
      ]
      throw NSError (
        domain:NSBundle.mainBundle ().bundleIdentifier!,
        code:1,
        userInfo:dictionary
      )
    }
  //---
/*    if (legacyDataWithoutConverterError) {
      NSDictionary * dictionary = [NSDictionary dictionaryWithObjectsAndKeys:
        @"Cannot Open Document",  NSLocalizedDescriptionKey,
        @"Legacy data, no helper function",  NSLocalizedRecoverySuggestionErrorKey,
        nil
      ] ;
      macroReleaseSetToNil (error) ;
      throw [[NSError alloc]
        initWithDomain:[NSBundle mainBundle].bundleIdentifier
        code:1
        userInfo:dictionary
      ] ;
    }*/
  //---
    if mRootObject == nil {
      let dictionary = [
        "Cannot Open Document" :  NSLocalizedDescriptionKey,
        "Root object cannot be read" :  NSLocalizedRecoverySuggestionErrorKey
      ]
      throw NSError (
        domain:NSBundle.mainBundle ().bundleIdentifier!,
        code:1,
        userInfo:dictionary
      )
    }
  //---
    undoManager?.enableUndoRegistration ()
  }

  //····················································································································

  let logReadFileDuration = false

  //····················································································································

  func readManagedObjectsFromData (inData : NSData) throws {
    let startDate = NSDate ()
    let v : AnyObject = try NSPropertyListSerialization.propertyListWithData (inData,
      options:NSPropertyListReadOptions.Immutable,
      format:nil
    )
    let dictionaryArray : [NSDictionary] = v as! [NSDictionary]
    if logReadFileDuration {
      let timeTaken = NSDate().timeIntervalSinceDate (startDate)
      NSLog ("Dictionary array: +%g s", timeTaken)
    }
    let semaphore : dispatch_semaphore_t = dispatch_semaphore_create (0)
    var progress : EBDocumentReadProgress? = nil
    if dictionaryArray.count > 10000 {
      progress = EBDocumentReadProgress (title:lastComponentOfFileName.stringByDeletingPathExtension,
                                         dataLength:dictionaryArray.count * 2,
                                         semaphore:semaphore)
    }
    let queue = dispatch_queue_create ("readObjectFromData", DISPATCH_QUEUE_CONCURRENT)
    dispatch_after (DISPATCH_TIME_NOW, queue) {
      var objectArray : Array<EBManagedObject> = Array  ()
      var progressIdx = 0 ;
      for d in dictionaryArray {
        let className = d.objectForKey ("--entity") as! String
        let object = self.mManagedObjectContext.newInstanceOfEntityNamed (className)
        objectArray.append (object!)
        progressIdx += 1
        progress?.setProgress (progressIdx)
      }
      if self.logReadFileDuration {
        let timeTaken = NSDate().timeIntervalSinceDate (startDate)
        NSLog ("Creation of %d objects: +%g s", objectArray.count, timeTaken)
      }
      var idx = 0
      for d in dictionaryArray {
        let object : EBManagedObject = objectArray [idx]
        object.setUpWithDictionary (d, managedObjectArray:objectArray)
        idx += 1
        progressIdx += 1
        progress?.setProgress (progressIdx)
      }
      if self.logReadFileDuration {
        let timeTaken = NSDate().timeIntervalSinceDate (startDate)
        NSLog ("Read: +%g s", timeTaken)
      }
    //--- Set root object
      if let rootObject = self.mRootObject {
        self.mManagedObjectContext.removeManagedObject (rootObject)
      }
      self.mRootObject = objectArray [0]
      dispatch_semaphore_signal (semaphore)
    }
    var wait = true
    while wait {
      dispatch_semaphore_wait (semaphore, DISPATCH_TIME_FOREVER)
      if progress != nil {
        wait = progress!.displayAndTestWaiting ()
      }else{
        wait = false
      }
    }
    progress?.orderOut ()
  }

  //····················································································································
  //   showWindows
  //····················································································································

  override func showWindows () {
    super.showWindows ()
    if let unwrappedWindowForSheet = windowForSheet { // Document has been opened in the user interface
      if (unwrappedWindowForSheet.styleMask & NSResizableWindowMask) != 0 { // Only if window is resizable
        let windowWidthNumber : NSNumber? = mMetadataDictionary.objectForKey ("EBWindowWidth") as? NSNumber
        let windowHeightNumber : NSNumber? = mMetadataDictionary.objectForKey ("EBWindowHeight") as? NSNumber
        if (nil != windowWidthNumber) && (nil != windowHeightNumber) {
          let newSize = NSSize (width: CGFloat (windowWidthNumber!.doubleValue), height: CGFloat (windowHeightNumber!.doubleValue))
          var windowFrame : NSRect = unwrappedWindowForSheet.frame
          windowFrame.size = newSize
          unwrappedWindowForSheet.setFrame (windowFrame, display:true)
        }
      }
    }
  }

  //····················································································································
  //   C H E C K    E N T I T Y   R E A C H A B I L I T Y
  //····················································································································

  @IBAction func checkEntityReachability (AnyObject!) {
    if let rootObject = mRootObject, window = windowForSheet {
      mManagedObjectContext.checkEntityReachabilityFromObject (rootObject, windowForSheet:window)
    }
  }

  //····················································································································
  //   showObjectExplorerWindow:
  //····················································································································

  @IBAction func showObjectExplorerWindow (AnyObject!) {
    if mExplorerWindow == nil {
      createAndPopulateObjectExplorerWindow ()
    }
    mExplorerWindow?.makeKeyAndOrderFront (nil)
  }

  //····················································································································
  //   createAndPopulateObjectExplorerWindow
  //····················································································································

  func createAndPopulateObjectExplorerWindow () {
  //-------------------------------------------------- Create Window
    let r = NSRect (x:20.0, y:20.0, width:10.0, height:10.0)
    mExplorerWindow = NSWindow (
      contentRect:r,
      styleMask:NSTitledWindowMask | NSClosableWindowMask,
      backing:NSBackingStoreType.Buffered,
      `defer`:true,
      screen:nil
    )
  //-------------------------------------------------- Adding properties
    let view = NSView (frame:r)
    var y : CGFloat = 0.0
    populateExplorerWindow (&y, view:view)
  //-------------------------------------------------- Finish Window construction
  //--- Resize View
    let viewFrame = NSRect (x:0.0, y:0.0, width:EXPLORER_ROW_WIDTH, height:y)
    view.frame = viewFrame
  //--- Set content size
    mExplorerWindow?.setContentSize (NSSize (width:EXPLORER_ROW_WIDTH + 16.0, height:fmin (600.0, y)))
  //--- Set close button as 'remove window' button
    let closeButton : NSButton? = mExplorerWindow?.standardWindowButton (NSWindowButton.CloseButton)
    closeButton!.target = self
    closeButton!.action = "deleteWindowAction:"
  //--- Set window title
    mExplorerWindow!.title = "Document " + className
  //--- Add Scroll view
    let frame = NSRect (x:0.0, y:0.0, width:EXPLORER_ROW_WIDTH, height:y)
    let sw = NSScrollView (frame:frame)
    sw.hasVerticalScroller = true
    sw.documentView = view
    mExplorerWindow!.contentView = sw
  }

  //····················································································································
  //    populateExplorerWindow
  //····················································································································

  var mExplorerWindow : NSWindow?
  var mValueExplorer : NSButton? {
    didSet {
      if let unwrappedExplorer = mValueExplorer {
        updateManagedObjectToOneRelationshipDisplay (mRootObject, button:unwrappedExplorer)
      }
    }
  }

  func populateExplorerWindow (inout y : CGFloat, view : NSView) {
    if let rootObject = mRootObject {
      createEntryForToOneRelationshipNamed (
        "Root",
        idx:rootObject.mExplorerObjectIndex,
        y: &y,
        view: view,
        valueExplorer:&mValueExplorer
      )
    }
  }
  
  //····················································································································
  //    windowControllerDidLoadNib
  //····················································································································

  override func windowControllerDidLoadNib (aController: NSWindowController) {
    super.windowControllerDidLoadNib (aController)
  //--- Signature obbserver
    mRootObject?.setSignatureObserver (mSignatureObserver)
    mSignatureObserver.setRootObject (mRootObject!)
  //--- Version did change observer
    mVersionShouldChangeObserver.setSignatureObserver (mSignatureObserver)
    mSignatureObserver.addObserver (mVersionShouldChangeObserver, postEvent:true)
  //--- Get version from metadadictionary
    let possibleVersion = mMetadataDictionary.objectForKey ("EBVersion")
    if let versionNumber = possibleVersion as? NSNumber {
      let version : Int = versionNumber.integerValue
      mVersionObserver.setProp (version)
    }
  //--- Add Debug menu items ?
    if !gDebugMenuItemsAdded {
      gDebugMenuItemsAdded = true
      var menuItem = NSMenuItem (
        title:"Explore document",
        action:"showObjectExplorerWindow:",
        keyEquivalent:""
      )
      addItemToDebugMenu (menuItem)
      menuItem = NSMenuItem (
        title:"Check Relationships",
        action:"checkRelationships:",
        keyEquivalent:""
      )
      addItemToDebugMenu (menuItem)
      menuItem = NSMenuItem (
        title:"Check All Objects are Reachable",
        action:"checkEntityReachability:",
        keyEquivalent:""
      )
      addItemToDebugMenu (menuItem)
    }
  //-------------- Check relationships
/*      NSUserDefaultsController * sudc = [NSUserDefaultsController sharedUserDefaultsController] ;
      const BOOL check = [[[sudc values] value_for_key:@"checkDocumentRelationships"] boolValue] ;
      if (check) {
        [self.windowForSheet makeKeyAndOrderFront:nil] ;
        [self checkRelationships:nil] ;
      }*/
  }

  //····················································································································
  //   removeWindowController
  //····················································································································

  func removeUserInterface () {
    mSignatureObserver.removeObserver (mVersionShouldChangeObserver, postEvent:true)
    mManagedObjectContext.reset ()
  }

  //····················································································································

  override func removeWindowController (inWindowController : NSWindowController) {
    dispatch_after (DISPATCH_TIME_NOW, dispatch_get_main_queue()) { self.removeUserInterface () }
    super.removeWindowController (inWindowController)
  }

  //····················································································································
  //    Signature observer
  //····················································································································

  private var mSignatureObserver = EBSignatureObserverEvent ()

  //····················································································································

  final func signatureObserver () -> EBSignatureObserverEvent {
    return mSignatureObserver
  }

  //····················································································································
  //    Version observer
  //····················································································································

  private var mVersionObserver = EBStoredProperty_Int (0)

  //····················································································································

  final func versionObserver () -> EBStoredProperty_Int {
    return mVersionObserver
  }

  //····················································································································
  //    Version observer
  //····················································································································

  private var mVersionShouldChangeObserver = EBVersionShouldChangeObserver ()

  //····················································································································

  final func versionShouldChangeObserver () -> EBVersionShouldChangeObserver {
    return mVersionShouldChangeObserver
  }

  //····················································································································

}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//     NSMutableData extension
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

extension NSMutableData {
  func writeSignature (inout trace: String?) {
    trace? += String (format:"%03lu %03lu ", length / 1000, length % 1000)
    for c in kFormatSignature.utf8 {
      var byte : UInt8 = UInt8 (c)
      appendBytes (&byte, length:1)
      trace? += String (format:"%02hhX ", byte)
    }
    trace? += "\n"
  }

  //····················································································································

  func writeAutosizedData (inData: NSData,
                           inout trace: String?) {
    writeAutosizedUnsigned (UInt64 (inData.length), trace:&trace)
    trace? += String (format:"%03lu %03lu ", length / 1000, length % 1000)
    appendData (inData)
    trace? += "(data, length \(inData.length))\n"
  }

  //····················································································································

  func writeByte (inByte: UInt8,
                  inout trace: String?) {
    trace? += String (format:"%03lu %03lu ", length / 1000, length % 1000)
    trace? += String (format:"%02hhX ", inByte)
    var byte = inByte
    appendBytes (&byte, length:1)
    trace? += "\n"
  }

  //····················································································································

  func writeAutosizedUnsigned (inValue: UInt64,
                               inout trace: String?) {
    trace? += String (format:"%03lu %03lu ", length / 1000, length % 1000)
    trace? += "U "
    var value = inValue
    repeat{
      var byte : UInt8 = UInt8 (value & 0x7F)
      value >>= 7
      if (value != 0) {
        byte |= 0x80
      }
      trace? += String (format:"%02hhX ", byte)
      appendBytes (&byte, length:1)
    }while value != 0
    trace? += "\n"
  }

}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//     EBDocumentReadProgress
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

private struct EBDocumentReadProgress {
  private var mProgressWindow : NSWindow?
  private var mProgressIndicator : NSProgressIndicator?
  private var mTotal : Double
  private var mCurrentProgress = 0.0
  private var mSemaphore : dispatch_semaphore_t
  private var mMutex : dispatch_semaphore_t
  private var mDisplayCounter = 0
  
  //····················································································································
  //  init
  //····················································································································

  init (title : String, dataLength : Int, semaphore : dispatch_semaphore_t) {
    mMutex = dispatch_semaphore_create (1)
    mTotal = Double (dataLength)
    mSemaphore = semaphore
    if let visibleFrame = NSScreen.mainScreen ()?.visibleFrame {
      let windowWidth = 400.0
      let windowHeight = 65.0
      let windowRect = NSMakeRect (
        NSMidX (visibleFrame) - CGFloat (windowWidth / 2.0),
        NSMidY (visibleFrame) - CGFloat (windowHeight / 2.0),
        CGFloat (windowWidth),
        CGFloat (windowHeight)
      )
      let progressWindow = NSWindow (
        contentRect:windowRect,
        styleMask:NSTitledWindowMask,
        backing:NSBackingStoreType.Buffered,
        `defer`:false
      )
      mProgressWindow = progressWindow
      progressWindow.excludedFromWindowsMenu = true
      progressWindow.title = "Progress"
      let contientViewRect : NSRect = progressWindow.contentView.frame
    //--- Add comment text
      let ts_r = NSRect (
        x:25.0,
        y:30.0,
        width:NSMaxX (contientViewRect) - 40.0,
        height:20.0
      )
      let ts = NSTextField (frame:ts_r)
      ts.font = NSFont.boldSystemFontOfSize (NSFont.smallSystemFontSize())
      ts.stringValue = String (format:"Opening %@…", title)
      ts.bezeled = false
      ts.bordered = false
      ts.editable = false
      ts.drawsBackground = false
      progressWindow.contentView.addSubview (ts)
    //--- Add progress indicator
      let ps_r = NSRect (
        x:20.0,
        y:10.0,
        width:NSMaxX (contientViewRect) - 40.0,
        height: 20.0
      )
      mProgressIndicator = NSProgressIndicator (frame:ps_r)
      mProgressIndicator!.indeterminate = true
      progressWindow.contentView.addSubview (mProgressIndicator!)
    //---
      mProgressIndicator!.minValue = 0.0
      mProgressIndicator!.maxValue = 1.0
      mProgressIndicator!.doubleValue = 0.0
      mProgressIndicator!.indeterminate = false
      mProgressIndicator!.display ()
    //---
      progressWindow.makeKeyAndOrderFront (nil)
    }
  }

  //····················································································································
  //  displayAndTestWaiting
  //····················································································································

  mutating func displayAndTestWaiting () -> Bool {
    mProgressIndicator?.doubleValue = mCurrentProgress
    mProgressIndicator?.display ()
    dispatch_semaphore_wait (mMutex, DISPATCH_TIME_FOREVER)
      mDisplayCounter -= 1
      let stop = mDisplayCounter < 0
    dispatch_semaphore_signal (mMutex)
    return !stop
  }

  //····················································································································
  //  setProgress
  //····················································································································

  mutating func setProgress (inValue : Int) {
    let currentProgress = Double (inValue) / mTotal
    if (currentProgress - mCurrentProgress) > 0.02 {
      dispatch_semaphore_wait (mMutex, DISPATCH_TIME_FOREVER)
        mCurrentProgress = currentProgress
        mDisplayCounter += 1
      dispatch_semaphore_signal (mMutex)
      dispatch_semaphore_signal (mSemaphore)
    }
  }
  
  //····················································································································
  //  orderOut
  //····················································································································

  func orderOut () {
    mProgressWindow?.orderOut (nil)
  }

  //····················································································································

}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

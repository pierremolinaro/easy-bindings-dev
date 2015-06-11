import Cocoa

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

let kFormatSignature = "PM-BINARY-FORMAT"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

private var gDebugMenuItemsAdded = false

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

enum PMDocumentCompressionEnum {
  case PMDocumentNoCompression
  case PMDocumentBZ2Compression
  case PMDocumentZLIBCompression
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//  PMManagedDocument                                                                                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class PMManagedDocument : NSDocument, PMUserClassName {
  var mRootObject : PMManagedObject?
  private var mReadMetadataStatus : UInt8 = 0
  private var mMetadataDictionary : NSMutableDictionary = [:]
  private var mManagedObjectContext : PMManagedObjectContext

  //···················································································································*
  //    init                                                                                                           *
  //···················································································································*

  override init () {
    let theUndoManager = PMUndoManager ()
    mManagedObjectContext = PMManagedObjectContext (undoManager:theUndoManager)
    super.init ()
    noteObjectAllocation (self)
    undoManager = theUndoManager
    hookOfInit ()
    theUndoManager.disableUndoRegistration ()
    mRootObject = mManagedObjectContext.newInstanceOfEntityNamed (rootEntityClassName ())
    hookOfNewDocumentCreation ()
    theUndoManager.enableUndoRegistration ()
  }

  //···················································································································*
  //    deinit                                                                                                         *
  //···················································································································*

  deinit {
    noteObjectDeallocation (self)
  }

  //···················································································································*
  //    hookOfInit                                                                                                     *
  //···················································································································*

  func hookOfInit () {
  }

  //···················································································································*
  //    hookOfNewDocumentCreation                                                                                      *
  //···················································································································*

  func hookOfNewDocumentCreation () {
  }

  //···················································································································*
  //    rootEntityClassName                                                                                            *
  //···················································································································*

  func rootEntityClassName () -> String {
    return ""
  }

  //···················································································································*
  //    windowControllerDidLoadNib:                                                                                    *
  //···················································································································*

  override func windowControllerDidLoadNib (aController: NSWindowController) {
    super.windowControllerDidLoadNib (aController)
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

  //···················································································································*
  //  S A V E    T O    D A T A                                                                                        *
  //···················································································································*

  func metadataStatusForSaving () -> UInt8 {
    return 0 ;
  }

  //···················································································································*

  func compressDataOnSaving () -> PMDocumentCompressionEnum {
    return PMDocumentCompressionEnum.PMDocumentBZ2Compression ;
  }

  //···················································································································*

  func hookOfWillSave () {
  }

  //···················································································································*
  //    dataOfType                                                                                                     *
  //···················································································································*

  override func dataOfType (typeName: String?) throws -> NSData {
  //---
    hookOfWillSave ()
  //--- Add to metadata dictionary the witdth and the height of main window
    if let unwrappedWindowForSheet = windowForSheet { // Document has been opened in the user interface
      if (unwrappedWindowForSheet.styleMask & NSResizableWindowMask) != 0 { // Only if window is resizable
        let windowSize = unwrappedWindowForSheet.frame.size ;
        mMetadataDictionary.setObject (NSNumber (double: Double (windowSize.width)), forKey:"PMWindowWidth")
        mMetadataDictionary.setObject (NSNumber (double: Double (windowSize.height)), forKey:"PMWindowHeight")
      }
    }else{ // Document has not been opened in the user interface, use values read from file, if they exist
/*      NSDictionary * metadataDictionaryReadFromFile = self.metadataDictionaryReadFromFile ;
      NSNumber * v = [metadataDictionaryReadFromFile objectForKey:@"PMWindowWidth"] ;
      if (nil != v) {
        [metadataDictionary setObject:v forKey:@"PMWindowWidth"] ;
      }
      v = [metadataDictionaryReadFromFile objectForKey:@"PMWindowHeight"] ;
      if (nil != v) {
        [metadataDictionary setObject:v forKey:@"PMWindowHeight"] ;
      }*/
    }
  //---
    let fileData = NSMutableData ()
    var trace : String = ""
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
    case PMDocumentBZ2Compression:
      data = [data bz2CompressedDataWithCompressionFactor:9 returnedErrorCode:nil] ;
      [fileData writeByte:5 trace:nil] ;
      [fileData writeAutosizedData:data trace:nil] ;
      break ;
    case PMDocumentZLIBCompression:
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

  //···················································································································*

  func dataForSavingFromRootObject () throws -> NSData {
    let objectsToSaveArray : Array<PMManagedObject> = mManagedObjectContext.reachableObjectsFromRootObject (mRootObject!)
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

  //···················································································································*
  //    readFromData                                                                                                   *
  //···················································································································*

  override func readFromData (data: NSData?, ofType typeName: String?) throws {
    undoManager?.disableUndoRegistration ()
  //---- Define input data scanner
    let dataScanner = PMDataScanner (
      data:data!,
      displayProgressWindowTitle:(data!.length > 30000) ? lastComponentOfFileName.stringByDeletingPathExtension : nil
    )
  //--- Check Signature
    for c in kFormatSignature.utf8 {
      dataScanner.acceptRequiredByte (c, sourceFile:__FUNCTION__)
    }
  //--- Read Status
    mReadMetadataStatus = dataScanner.parseByte ()
  //--- if ok, check byte is 1
    dataScanner.acceptRequiredByte (1, sourceFile:__FUNCTION__)
  //--- Read metadata dictionary
    var error : NSError?
    let dictionaryData = dataScanner.parseAutosizedData ()
    let metadataDictionary = try NSPropertyListSerialization.propertyListWithData (dictionaryData,
      options:NSPropertyListReadOptions.Immutable,
      format:nil
    ) as! NSDictionary
    mMetadataDictionary = metadataDictionary.mutableCopy () as! NSMutableDictionary
     //  NSLog (@"mReadMetadataDictionary %@", mReadMetadataDictionary) ;
  //--- Read data dictionary
    let dataFormat = dataScanner.parseByte ()
    switch dataFormat {
    case 6 :
      let data = dataScanner.parseAutosizedData ()
      try readManagedObjectsFromData (data)
    default:
      NSLog ("unknowm data format: %u", dataFormat)
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
      error = NSError (
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
      error = [[NSError alloc]
        initWithDomain:[NSBundle mainBundle].bundleIdentifier
        code:1
        userInfo:dictionary
      ] ;
    }*/
  //---
    if (error == nil) && (mRootObject == nil) {
      let dictionary = [
        "Cannot Open Document" :  NSLocalizedDescriptionKey,
        "Root object cannot be read" :  NSLocalizedRecoverySuggestionErrorKey
      ]
      error = NSError (
        domain:NSBundle.mainBundle ().bundleIdentifier!,
        code:1,
        userInfo:dictionary
      )
    }
  //---
    undoManager?.enableUndoRegistration ()
  }

  //···················································································································*

  let logReadFileDuration = false

  //···················································································································*

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
    var objectArray : Array<PMManagedObject> = Array  ()
    for d in dictionaryArray {
      let className = d.objectForKey ("--entity") as! String
      let object = mManagedObjectContext.newInstanceOfEntityNamed (className)
      objectArray.append (object!)
    }
    if logReadFileDuration {
      let timeTaken = NSDate().timeIntervalSinceDate (startDate)
      NSLog ("Creation of %d objects: +%g s", objectArray.count, timeTaken)
    }
    var idx = 0
    for d in dictionaryArray {
      let object : PMManagedObject = objectArray [idx]
      object.setUpWithDictionary (d, managedObjectArray:objectArray)
      idx += 1
    }
    if logReadFileDuration {
      let timeTaken = NSDate().timeIntervalSinceDate (startDate)
      NSLog ("Read: +%g s", timeTaken)
    }
  //--- Set root object
    if let rootObject = mRootObject {
      mManagedObjectContext.removeManagedObject (rootObject)
    }
    mRootObject = objectArray [0]
  }

  //···················································································································*
  //   showWindows                                                                                                     *
  //···················································································································*

  override func showWindows () {
    super.showWindows ()
    if let unwrappedWindowForSheet = windowForSheet { // Document has been opened in the user interface
      if (unwrappedWindowForSheet.styleMask & NSResizableWindowMask) != 0 { // Only if window is resizable
        let windowWidthNumber : NSNumber? = mMetadataDictionary.objectForKey ("PMWindowWidth") as? NSNumber
        let windowHeightNumber : NSNumber? = mMetadataDictionary.objectForKey ("PMWindowHeight") as? NSNumber
        if (nil != windowWidthNumber) && (nil != windowHeightNumber) {
          let newSize = NSSize (width: CGFloat (windowWidthNumber!.doubleValue), height: CGFloat (windowHeightNumber!.doubleValue))
          var windowFrame : NSRect = unwrappedWindowForSheet.frame
          windowFrame.size = newSize
          unwrappedWindowForSheet.setFrame (windowFrame, display:true)
        }
      }
    }
  }

  //···················································································································*
  //   C H E C K    E N T I T Y   R E A C H A B I L I T Y                                                              *
  //···················································································································*

  @IBAction func checkEntityReachability (AnyObject!) {
    if let rootObject = mRootObject, window = windowForSheet {
      mManagedObjectContext.checkEntityReachabilityFromObject (rootObject, windowForSheet:window)
    }
  }

  //···················································································································*
  //   showObjectExplorerWindow:                                                                                       *
  //···················································································································*

  @IBAction func showObjectExplorerWindow (AnyObject!) {
    mRootObject?.showExplorerWindow ()
  }

  //···················································································································*
  //   removeWindowController                                                                                          *
  //···················································································································*

  func removeUserInterface () {
    mManagedObjectContext.reset ()
  }

  //···················································································································*

  override func removeWindowController (inWindowController : NSWindowController) {
    dispatch_after (DISPATCH_TIME_NOW, dispatch_get_main_queue()) { self.removeUserInterface () }
    super.removeWindowController (inWindowController)
  }

  //···················································································································*

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//     NSMutableData extension                                                                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extension NSMutableData {
  func writeSignature (inout trace: String) {
    trace += String (format:"%03lu %03lu ", length / 1000, length % 1000)
    for c in kFormatSignature.utf8 {
      var byte : UInt8 = UInt8 (c)
      appendBytes (&byte, length:1)
      trace += String (format:"%02hhX ", byte)
    }
    trace += "\n"
  }

  //···················································································································*

  func writeAutosizedData (inData: NSData,
                           inout trace: String) {
    writeAutosizedUnsigned (UInt64 (inData.length), trace:&trace)
    trace += String (format:"%03lu %03lu ", length / 1000, length % 1000)
    appendData (inData)
    trace += "(data, length \(inData.length))\n"
  }

  //···················································································································*

  func writeByte (inByte: UInt8,
                  inout trace: String) {
    trace += String (format:"%03lu %03lu ", length / 1000, length % 1000)
    trace += String (format:"%02hhX ", inByte)
    var byte = inByte
    appendBytes (&byte, length:1)
    trace += "\n"
  }

  //···················································································································*

  func writeAutosizedUnsigned (inValue: UInt64,
                               inout trace: String) {
    trace += String (format:"%03lu %03lu ", length / 1000, length % 1000)
    trace += "U "
    var value = inValue
    repeat{
      var byte : UInt8 = UInt8 (value & 0x7F)
      value >>= 7
      if (value != 0) {
        byte |= 0x80
      }
      trace += String (format:"%02hhX ", byte)
      appendBytes (&byte, length:1)
    }while value != 0
    trace += "\n"
  }

}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

import Cocoa

//---------------------------------------------------------------------------------------------------------------------*

private let kFormatSignature = "PM-BINARY-FORMAT"
private var gDebugMenuItemsAdded = false

//---------------------------------------------------------------------------------------------------------------------*

enum PMDocumentCompressionEnum {
  case PMDocumentNoCompression
  case PMDocumentBZ2Compression
  case PMDocumentZLIBCompression
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//  PMManagedDocument                                                                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class PMManagedDocument : NSDocument {
  var mRootObject : PMManagedObject?
  var mReadMetadataStatus : UInt8 = 0
  var mMetadataDictionary : NSMutableDictionary = [:]

  //-------------------------------------------------------------------------------------------------------------------*
  //    init                                                                                                           *
  //-------------------------------------------------------------------------------------------------------------------*

  override init () {
    super.init ()
    noteObjectAllocation (self)
    undoManager = PMUndoManager ()
    hookOfInit () ;
    undoManager.disableUndoRegistration ()
    mRootObject = newInstanceOfEntityNamed (rootEntityClassName ())
    hookOfNewDocumentCreation ()
    undoManager.enableUndoRegistration ()
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    deinit                                                                                                         *
  //-------------------------------------------------------------------------------------------------------------------*

  deinit {
    noteObjectDeallocation (self)
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    hookOfInit                                                                                                     *
  //-------------------------------------------------------------------------------------------------------------------*

  func hookOfInit () {
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    hookOfNewDocumentCreation                                                                                      *
  //-------------------------------------------------------------------------------------------------------------------*

  func hookOfNewDocumentCreation () {
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    rootEntityClassName                                                                                            *
  //-------------------------------------------------------------------------------------------------------------------*

  func rootEntityClassName () -> String {
    return ""
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    windowControllerDidLoadNib:                                                                                    *
  //-------------------------------------------------------------------------------------------------------------------*

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
        gDebugObject?.addDebugMenuItem (menuItem)
        menuItem = NSMenuItem (
          title:"Check Relationships",
          action:"checkRelationships:",
          keyEquivalent:""
        )
        gDebugObject?.addDebugMenuItem (menuItem)
        menuItem = NSMenuItem (
          title:"Check All Objects are Reachable",
          action:"checkEntityReachability:",
          keyEquivalent:""
        )
        gDebugObject?.addDebugMenuItem (menuItem)
      }
    //-------------- Check relationships
/*      NSUserDefaultsController * sudc = [NSUserDefaultsController sharedUserDefaultsController] ;
      const BOOL check = [[[sudc values] value_for_key:@"checkDocumentRelationships"] boolValue] ;
      if (check) {
        [self.windowForSheet makeKeyAndOrderFront:nil] ;
        [self checkRelationships:nil] ;
      }*/
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //   removeWindowController:                                                                                         *
  //-------------------------------------------------------------------------------------------------------------------*

/*  - (void) removeWindowController: (NSWindowController *) inWindowController {
    [self.undoManager disableUndoRegistration] ;
    [mEntityManager resetBeforeDeletion] ;
    [self.undoManager enableUndoRegistration] ;
    [self.undoManager removeAllActions] ;
    [super removeWindowController:inWindowController] ;
  } */


  //-------------------------------------------------------------------------------------------------------------------*
  //  S A V E    T O    D A T A                                                                                        *
  //-------------------------------------------------------------------------------------------------------------------*

  func metadataStatusForSaving () -> UInt8 {
    return 0 ;
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func compressDataOnSaving () -> PMDocumentCompressionEnum {
    return PMDocumentCompressionEnum.PMDocumentBZ2Compression ;
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func hookOfWillSave () {
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    dataOfType                                                                                                     *
  //-------------------------------------------------------------------------------------------------------------------*

  override func dataOfType (typeName: String?, error outError: NSErrorPointer) -> NSData? {
  //---
    hookOfWillSave ()
  //--- Add to metadata dictionary the witdth and the height of main window
    if nil != windowForSheet { // Document has been opened in the user interface
      if (windowForSheet!.styleMask & NSResizableWindowMask) != 0 { // Only if window is resizable
        let windowSize = windowForSheet.frame.size ;
        mMetadataDictionary.setObject (NSNumber.numberWithDouble (Double (windowSize.width)), forKey:"PMWindowWidth")
        mMetadataDictionary.setObject (NSNumber.numberWithDouble (Double (windowSize.height)), forKey:"PMWindowHeight")
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
    var fileData = NSMutableData ()
    var trace : String = ""
  //--- Append signature
    fileData.writeSignature (&trace)
  //--- Write status
    fileData.writeByte (metadataStatusForSaving (), trace:&trace)
  //--- Append metadata dictionary
    let metaData = NSPropertyListSerialization.dataWithPropertyList (mMetadataDictionary,
      format:NSPropertyListFormat.BinaryFormat_v1_0,
      options:0,
      error:nil
    )!
    fileData.writeByte (1, trace:&trace)
    fileData.writeAutosizedData (metaData, trace:&trace)
  //--- Append document data
    let documentData = dataForSavingFromRootObject ()
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

  //-------------------------------------------------------------------------------------------------------------------*

  func dataForSavingFromRootObject () -> NSData {
    let objectsToSaveArray : NSArray = reachableObjectsFromRootObject ()
  //--- Set savingIndex for each object
    var idx = 0 ;
    for anyObject in objectsToSaveArray {
      let object = anyObject as PMManagedObject
      object.savingIndex = idx
      idx += 1
    }
  //---
    var saveDataArray : [NSDictionary] = []
    for anyObject in objectsToSaveArray {
      let object = anyObject as PMManagedObject
      var d : NSMutableDictionary = [
        "--entity" : object.className
      ]
      object.saveIntoDictionary (d)
      saveDataArray.append (d)
    }
    return NSPropertyListSerialization.dataWithPropertyList (saveDataArray,
      format:NSPropertyListFormat.BinaryFormat_v1_0,
      options:0,
      error:nil
    )!
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //    readFromData                                                                                                   *
  //-------------------------------------------------------------------------------------------------------------------*

  override func readFromData (data: NSData?,
                              ofType typeName: String?,
                              error outError: NSErrorPointer) -> Bool {
    undoManager.disableUndoRegistration ()
  //---- Define input data scanner
    var dataScanner = PMDataScanner (
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
    let metadataDictionary = NSPropertyListSerialization.propertyListWithData (dictionaryData,
      options:0, // NSPropertyListReadOptions.Immutable,
      format:nil,
      error:nil
    ) as NSDictionary
    mMetadataDictionary = metadataDictionary.mutableCopy () as NSMutableDictionary
     //  NSLog (@"mReadMetadataDictionary %@", mReadMetadataDictionary) ;
  //--- Read data dictionary
    let dataFormat = dataScanner.parseByte ()
    switch dataFormat {
    case 6 :
      let data = dataScanner.parseAutosizedData ()
      readManagedObjectsFromData (data)
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
    if (nil != outError) {
      outError.memory = error
    }
    undoManager.enableUndoRegistration ()
  //---
    return nil == error
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func readManagedObjectsFromData (inData : NSData) {
    // let start = NSDate()
    let v : AnyObject = NSPropertyListSerialization.propertyListWithData (inData,
      options:0, // NSPropertyListReadOptions.Immutable,
      format:nil,
      error:nil
    )!
    let dictionaryArray : [NSDictionary] = v as [NSDictionary]
    var objectArray = NSMutableArray  ()
    for d in dictionaryArray {
      let className = d.objectForKey ("--entity") as String
      let object = newInstanceOfEntityNamed (className)
      objectArray.addObject (object!)
    }
    var idx = 0
    for d in dictionaryArray {
      var object : PMManagedObject = objectArray [idx] as PMManagedObject
      object.setUpWithDictionary (d, managedObjectArray:objectArray)
      idx += 1
    }
    // let timeTaken = NSDate().timeIntervalSinceDate(start) * 1000
    // NSLog ("Read %f ms", timeTaken)
  //--- Set root object
    mRootObject = objectArray [0] as PMManagedObject
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //   showWindows                                                                                                     *
  //-------------------------------------------------------------------------------------------------------------------*

  override func showWindows () {
    super.showWindows ()
    if (windowForSheet.styleMask & NSResizableWindowMask) != 0 { // Only if window is resizable
      var windowWidthNumber : NSNumber? = mMetadataDictionary.objectForKey ("PMWindowWidth") as? NSNumber
      var windowHeightNumber : NSNumber? = mMetadataDictionary.objectForKey ("PMWindowHeight") as? NSNumber
      if (nil != windowWidthNumber) && (nil != windowHeightNumber) {
        let newSize = NSSize (width: CGFloat (windowWidthNumber!.doubleValue), height: CGFloat (windowHeightNumber!.doubleValue))
        var windowFrame : NSRect = windowForSheet.frame
        windowFrame.size = newSize
        windowForSheet.setFrame (windowFrame, display:true)
      }
    }
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //   C H E C K    E N T I T Y   R E A C H A B I L I T Y                                                              *
  //-------------------------------------------------------------------------------------------------------------------*

  @IBAction func checkEntityReachability (AnyObject!) {
  //--- Build and show Panel
    let panelRect = NSRect (
      x:0.0,
      y:0.0,
      width:295.0,
      height:107.0
    )
    let panel = NSPanel (contentRect:panelRect,
      styleMask:NSTitledWindowMask,
      backing:NSBackingStoreType.Buffered,
      defer:false
    )
    let textRect = NSRect (
     x:17.0,
     y:45.0,
     width:261.0,
     height:17.0
    )
    var tf = NSTextField (frame:textRect)
    tf.stringValue = "Checking Document Relationships..."
    tf.bezeled = false
    tf.bordered = false
    tf.drawsBackground = false
    tf.editable = false
    tf.font = NSFont.boldSystemFontOfSize (0.0)
    panel.contentView.addSubview (tf)
    NSApp.beginSheet (panel,
      modalForWindow:windowForSheet,
      modalDelegate:nil,
      didEndSelector:nil,
      contextInfo:nil
    )
    panel.display ()
    let reachableObjects : NSArray = reachableObjectsFromRootObject ()
  //---
    panel.orderOut (nil) ; NSApp.endSheet (panel)
  //---
    let reachableCount = reachableObjects.count
    var alert = NSAlert ()
    alert.messageText = "Object Graph Analysis"
    alert.informativeText = NSString (format:"There are %lu reachable objects from root object.",
      reachableCount
    )
    alert.beginSheetModalForWindow (windowForSheet,
      completionHandler:nil
    )
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //   showObjectExplorerWindow:                                                                                       *
  //-------------------------------------------------------------------------------------------------------------------*

  @IBAction func showObjectExplorerWindow (AnyObject!) {
    mRootObject?.showExplorerWindow ()
  }

  //-------------------------------------------------------------------------------------------------------------------*
  //  R E A C H A B L E   O B J E C T S    F R O M    O B J E C T                                                      *
  //-------------------------------------------------------------------------------------------------------------------*

  func reachableObjectsFromRootObject () -> NSArray {
    var reachableObjectArray = NSMutableArray ()
    if let rootObject = mRootObject {
      var reachableObjectSet = NSMutableSet ()
      var objectsToExploreArray = NSMutableArray ()
      objectsToExploreArray.addObject (rootObject)
      rootObject.savingIndex = reachableObjectArray.count
      reachableObjectArray.addObject (rootObject)
      // let start = NSDate()
      //   NSLog ("start")
      while (objectsToExploreArray.count > 0) {
        let objectToExplore : PMManagedObject = objectsToExploreArray.lastObject as PMManagedObject
        objectsToExploreArray.removeLastObject ()
        var accessible = NSMutableArray ()
        objectToExplore.accessibleObjects (&accessible)
        for object : AnyObject in accessible {
          let managedObject = object as PMManagedObject
          if !reachableObjectSet.containsObject (managedObject) {
            reachableObjectSet.addObject (managedObject)
            managedObject.savingIndex = reachableObjectArray.count
            reachableObjectArray.addObject (managedObject)
            objectsToExploreArray.addObject (managedObject)
          }
        }
      }
      // let timeTaken = NSDate().timeIntervalSinceDate(start) * 1000
      // NSLog ("%f ms", timeTaken)
    }
    return reachableObjectArray ;
  }

}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//     NSMutableData extension                                                                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

extension NSMutableData {

  func writeSignature (inout trace: String) {
    trace += NSString (format:"%03lu %03lu ", length / 1000, length % 1000)
    for c in kFormatSignature.utf8 {
      var byte : UInt8 = UInt8 (c)
      appendBytes (&byte, length:1)
      trace += NSString (format:"%02hhX ", byte)
    }
    trace += "\n"
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func writeAutosizedData (inData: NSData,
                           inout trace: String) {
    writeAutosizedUnsigned (UInt64 (inData.length), trace:&trace)
    trace += NSString (format:"%03lu %03lu ", length / 1000, length % 1000)
    appendData (inData)
    trace += "(data, length \(inData.length))\n"
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func writeByte (inByte: UInt8,
                  inout trace: String) {
    trace += NSString (format:"%03lu %03lu ", length / 1000, length % 1000)
    trace += NSString (format:"%02hhX ", inByte)
    var byte = inByte
    appendBytes (&byte, length:1)
    trace += "\n"
  }

  //-------------------------------------------------------------------------------------------------------------------*

  func writeAutosizedUnsigned (inValue: UInt64,
                               inout trace: String) {
    trace += NSString (format:"%03lu %03lu ", length / 1000, length % 1000)
    trace += "U "
    var value = inValue
    do{
      var byte : UInt8 = UInt8 (value & 0x7F)
      value >>= 7
      if (value != 0) {
        byte |= 0x80
      }
      trace += NSString (format:"%02hhX ", byte)
      appendBytes (&byte, length:1)
    }while value != 0
    trace += "\n"
  }

  //-------------------------------------------------------------------------------------------------------------------*
}

//---------------------------------------------------------------------------------------------------------------------*

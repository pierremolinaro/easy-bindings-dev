import Cocoa

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//  EBVersionShouldChangeObserver
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

@objc(EBVersionShouldChangeObserver) class EBVersionShouldChangeObserver : EBTransientProperty_Bool, EBSignatureObserverProtocol {

  private weak var mSignatureObserver : EBSignatureObserverEvent?
  private var mSignatureAtStartUp : UInt32 = 0

  override init () {
    super.init ()
    self.computeFunction = { [weak self] in
      if let unwSelf = self {
        return .singleSelection (unwSelf.mSignatureAtStartUp != unwSelf.signature ())
      }else{
        return .noSelection
      }
    }
  }

  //····················································································································

  final func setSignatureObserver (signatureObserver : EBSignatureObserverEvent) {
    mSignatureObserver = signatureObserver
    mSignatureAtStartUp = signatureObserver.signature ()
  }

  //····················································································································

  final func updateStartUpSignature () {
    if let signatureObserver = mSignatureObserver {
      mSignatureAtStartUp = signatureObserver.signature ()
      postEvent ()
    }
  }

  //····················································································································

  func signature () -> UInt32 {
    if let signatureObserver = mSignatureObserver {
      return signatureObserver.signature ()
    }else{
      return 0
    }
  }

  //····················································································································

  func clearSignatureCache () {
    postEvent ()
  }

  //····················································································································

}


//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//  EBSignatureObserverProtocol
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

@objc(EBSignatureObserverProtocol) protocol EBSignatureObserverProtocol {
  func clearSignatureCache ()
  func signature () -> UInt32
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//  EBSignatureObserverEvent
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

@objc(EBSignatureObserverEvent) class EBSignatureObserverEvent : EBTransientProperty_Int, EBSignatureObserverProtocol {

  private weak var mRootObject : EBSignatureObserverProtocol?

  override init () {
    super.init ()
    self.computeFunction = { [weak self] in
      if let unwSelf = self {
        return .singleSelection (Int (unwSelf.signature ()))
      }else{
        return .noSelection
      }
    }
  }

  //····················································································································

  final func setRootObject (rootObject : EBSignatureObserverProtocol) {
    mRootObject = rootObject
  }

  //····················································································································

  func signature () -> UInt32 {
    if let rootObject = mRootObject {
      return rootObject.signature ()
    }else{
      return 0
    }
  }

  //····················································································································

  func clearSignatureCache () {
    postEvent ()
  }

  //····················································································································

}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//   EBAbstractProperty (abstract class)
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

@objc(EBAbstractProperty) class EBAbstractProperty : EBEvent {

  private final var mObservers = Set <EBEvent> ()
  
  //····················································································································

  final func addObserver (inObserver : EBEvent, postEvent inTrigger:Bool) {
    mObservers.insert (inObserver)
    updateObserverExplorer ()
    if inTrigger {
      inObserver.postEvent ()
    }
  }
 
  //····················································································································

  final func removeObserver (inObserver : EBEvent, postEvent inTrigger:Bool) {
    mObservers.remove (inObserver)
    updateObserverExplorer ()
    if inTrigger {
      inObserver.postEvent ()
    }
  }

  //····················································································································

  override func postEvent () {
    for object in mObservers {
      object.postEvent ()
    }
  }
  
  //····················································································································

  final var mObserverExplorer : NSPopUpButton? {
    didSet {
      updateObserverExplorer ()
    }
  }
  
  //····················································································································

  final func updateObserverExplorer () {
    if let observerExplorer = mObserverExplorer {
      observerExplorer.removeAllItems ()
      observerExplorer.addItemWithTitle (String (mObservers.count))
      observerExplorer.enabled = mObservers.count > 0
      for object : EBEvent in mObservers {
        let stringValue = explorerIndexString (object.mExplorerObjectIndex) + object.className
        observerExplorer.addItemWithTitle (stringValue)
        let item = observerExplorer.lastItem
        item?.target = object
        item?.action = "showExplorerWindowAction:"
      }
    }
  }

  //····················································································································

}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//   ebHashValue
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

extension String {
  func ebHashValue () -> UInt32 {
    let possibleData = self.dataUsingEncoding (NSUTF8StringEncoding)
    if let data = possibleData {
      return data.ebHashValue ()
    }else{
      return 0
    }
  }
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

extension NSColor {
  final func ebHashValue () -> UInt32 {
    let data = NSArchiver.archivedDataWithRootObject (self)
    return data.ebHashValue ()
  }
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

extension NSDate {
  final func ebHashValue () -> UInt32 {
    let data = NSArchiver.archivedDataWithRootObject (self)
    return data.ebHashValue ()
  }
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

extension NSFont {
  final func ebHashValue () -> UInt32 {
    let data = NSArchiver.archivedDataWithRootObject (self)
    return data.ebHashValue ()
  }
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

extension NSData {
  final func ebHashValue () -> UInt32 {
    var crc : UInt32 = 0
    var ptr = UnsafePointer <UInt8> (self.bytes)
    for _ in 0 ..< self.length {
      crc.accumulateByte (ptr.memory)
      ptr += 1
    }
    return crc
  }
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

extension Int {
  func ebHashValue () -> UInt32 {
    var crc : UInt32 = 0
    var ptr = UnsafePointer <UInt8> ([self])
    for _ in 0 ..< sizeof (Int) {
      // print ("\(ptr)")
      crc.accumulateByte (ptr.memory)
      ptr += 1
    }
    return crc
  }
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

extension Double {
  func ebHashValue () -> UInt32 {
    let nsValue = NSNumber (double:self)
    let data = NSArchiver.archivedDataWithRootObject (nsValue)
    return data.ebHashValue ()
  }
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

extension Bool {
  func ebHashValue () -> UInt32 {
    var crc : UInt32 = 0
    crc.accumulateByte (self ? 1 : 0)
    return crc
  }
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//   CRC computations for signature
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

private let kTableCRC : [UInt32] = [
  0x00000000, 0x77073096, 0xee0e612c, 0x990951ba, 0x076dc419, 0x706af48f, 0xe963a535, 0x9e6495a3,
  0x0edb8832, 0x79dcb8a4, 0xe0d5e91e, 0x97d2d988, 0x09b64c2b, 0x7eb17cbd, 0xe7b82d07, 0x90bf1d91,
  0x1db71064, 0x6ab020f2, 0xf3b97148, 0x84be41de, 0x1adad47d, 0x6ddde4eb, 0xf4d4b551, 0x83d385c7,
  0x136c9856, 0x646ba8c0, 0xfd62f97a, 0x8a65c9ec, 0x14015c4f, 0x63066cd9, 0xfa0f3d63, 0x8d080df5,
  0x3b6e20c8, 0x4c69105e, 0xd56041e4, 0xa2677172, 0x3c03e4d1, 0x4b04d447, 0xd20d85fd, 0xa50ab56b,
  0x35b5a8fa, 0x42b2986c, 0xdbbbc9d6, 0xacbcf940, 0x32d86ce3, 0x45df5c75, 0xdcd60dcf, 0xabd13d59,
  0x26d930ac, 0x51de003a, 0xc8d75180, 0xbfd06116, 0x21b4f4b5, 0x56b3c423, 0xcfba9599, 0xb8bda50f,
  0x2802b89e, 0x5f058808, 0xc60cd9b2, 0xb10be924, 0x2f6f7c87, 0x58684c11, 0xc1611dab, 0xb6662d3d,
  0x76dc4190, 0x01db7106, 0x98d220bc, 0xefd5102a, 0x71b18589, 0x06b6b51f, 0x9fbfe4a5, 0xe8b8d433,
  0x7807c9a2, 0x0f00f934, 0x9609a88e, 0xe10e9818, 0x7f6a0dbb, 0x086d3d2d, 0x91646c97, 0xe6635c01,
  0x6b6b51f4, 0x1c6c6162, 0x856530d8, 0xf262004e, 0x6c0695ed, 0x1b01a57b, 0x8208f4c1, 0xf50fc457,
  0x65b0d9c6, 0x12b7e950, 0x8bbeb8ea, 0xfcb9887c, 0x62dd1ddf, 0x15da2d49, 0x8cd37cf3, 0xfbd44c65,
  0x4db26158, 0x3ab551ce, 0xa3bc0074, 0xd4bb30e2, 0x4adfa541, 0x3dd895d7, 0xa4d1c46d, 0xd3d6f4fb,
  0x4369e96a, 0x346ed9fc, 0xad678846, 0xda60b8d0, 0x44042d73, 0x33031de5, 0xaa0a4c5f, 0xdd0d7cc9,
  0x5005713c, 0x270241aa, 0xbe0b1010, 0xc90c2086, 0x5768b525, 0x206f85b3, 0xb966d409, 0xce61e49f,
  0x5edef90e, 0x29d9c998, 0xb0d09822, 0xc7d7a8b4, 0x59b33d17, 0x2eb40d81, 0xb7bd5c3b, 0xc0ba6cad,
  0xedb88320, 0x9abfb3b6, 0x03b6e20c, 0x74b1d29a, 0xead54739, 0x9dd277af, 0x04db2615, 0x73dc1683,
  0xe3630b12, 0x94643b84, 0x0d6d6a3e, 0x7a6a5aa8, 0xe40ecf0b, 0x9309ff9d, 0x0a00ae27, 0x7d079eb1,
  0xf00f9344, 0x8708a3d2, 0x1e01f268, 0x6906c2fe, 0xf762575d, 0x806567cb, 0x196c3671, 0x6e6b06e7,
  0xfed41b76, 0x89d32be0, 0x10da7a5a, 0x67dd4acc, 0xf9b9df6f, 0x8ebeeff9, 0x17b7be43, 0x60b08ed5,
  0xd6d6a3e8, 0xa1d1937e, 0x38d8c2c4, 0x4fdff252, 0xd1bb67f1, 0xa6bc5767, 0x3fb506dd, 0x48b2364b,
  0xd80d2bda, 0xaf0a1b4c, 0x36034af6, 0x41047a60, 0xdf60efc3, 0xa867df55, 0x316e8eef, 0x4669be79,
  0xcb61b38c, 0xbc66831a, 0x256fd2a0, 0x5268e236, 0xcc0c7795, 0xbb0b4703, 0x220216b9, 0x5505262f,
  0xc5ba3bbe, 0xb2bd0b28, 0x2bb45a92, 0x5cb36a04, 0xc2d7ffa7, 0xb5d0cf31, 0x2cd99e8b, 0x5bdeae1d,
  0x9b64c2b0, 0xec63f226, 0x756aa39c, 0x026d930a, 0x9c0906a9, 0xeb0e363f, 0x72076785, 0x05005713,
  0x95bf4a82, 0xe2b87a14, 0x7bb12bae, 0x0cb61b38, 0x92d28e9b, 0xe5d5be0d, 0x7cdcefb7, 0x0bdbdf21,
  0x86d3d2d4, 0xf1d4e242, 0x68ddb3f8, 0x1fda836e, 0x81be16cd, 0xf6b9265b, 0x6fb077e1, 0x18b74777,
  0x88085ae6, 0xff0f6a70, 0x66063bca, 0x11010b5c, 0x8f659eff, 0xf862ae69, 0x616bffd3, 0x166ccf45,
  0xa00ae278, 0xd70dd2ee, 0x4e048354, 0x3903b3c2, 0xa7672661, 0xd06016f7, 0x4969474d, 0x3e6e77db,
  0xaed16a4a, 0xd9d65adc, 0x40df0b66, 0x37d83bf0, 0xa9bcae53, 0xdebb9ec5, 0x47b2cf7f, 0x30b5ffe9,
  0xbdbdf21c, 0xcabac28a, 0x53b39330, 0x24b4a3a6, 0xbad03605, 0xcdd70693, 0x54de5729, 0x23d967bf,
  0xb3667a2e, 0xc4614ab8, 0x5d681b02, 0x2a6f2b94, 0xb40bbe37, 0xc30c8ea1, 0x5a05df1b, 0x2d02ef8d
]

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

extension UInt32 {
  mutating func accumulateByte (byte : UInt8) {
    let idx = Int ((self ^ UInt32(byte)) & 0xff)
    self = (self >> 8) ^ kTableCRC [idx]
  }
  mutating func accumulateUInt32 (value : UInt32) {
    self.accumulateByte (UInt8 (value & 0xFF))
    self.accumulateByte (UInt8 ((value >>  8) & 0xFF))
    self.accumulateByte (UInt8 ((value >> 16) & 0xFF))
    self.accumulateByte (UInt8 (value >> 24))
  }
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//   presentErrorWindow
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

var gErrorWindows : [NSWindow] = []
var origin = NSPoint (x:20.0, y:20.0)

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

func presentErrorWindow (file : String!,
                         line : Int,
                         errorMessage : String) {
  var message = ""
  message += "File: " + file + "\n"
  message += "Line: \(line)\n"
  message += "Message: " + errorMessage + "\n"
  let r = NSRect (origin:origin, size:NSSize (width:300.0, height:200.0))
  origin.x += 20.0 ;
  origin.y += 20.0 ;
  let window = NSWindow.init (
    contentRect:r,
    styleMask:NSTitledWindowMask | NSClosableWindowMask,
    backing:NSBackingStoreType.Buffered,
    `defer`:true
  )
  window.title = "Outlet Error"
  let contentView : NSView! = window.contentView as NSView
  let tfRect = NSInsetRect (contentView.bounds , 10.0, 10.0)
  let tf = NSTextField.init (frame:tfRect)
  tf.editable = false
  tf.selectable = true
  tf.font = NSFont.boldSystemFontOfSize (0.0)
  tf.textColor = NSColor.redColor ()
  tf.stringValue = message
  contentView.addSubview (tf)
  NSBeep () ;
  window.makeKeyAndOrderFront (nil)
  //---
  gErrorWindows.append (window)
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//   Array<T> extension
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

extension Array {
  func objectAtIndex (index:Int, file:String, line:Int) -> T {
    if index < 0 {
      NSLog ("Negative index %d in '%@' line %d", index, file, line)
    }else if index >= count {
      NSLog ("index %d >= count %d in '%@' line %d", index, count, file, line)
    }
    return self [index]
  }
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//    EBValidationResult
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

enum EBValidationResult {
  case ok
  case rejectWithBeep
  case rejectWithAlert (String /* informativeText */)
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//    EBUserClassName protocol
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

@objc(EBUserClassName) protocol EBUserClassName {
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//    EBObject class
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

private var gExplorerObjectIndex = 0

//······················································································································

@objc(EBObject) class EBObject : NSObject, EBUserClassName {
  let mExplorerObjectIndex : Int

  override init () {
    mExplorerObjectIndex = gExplorerObjectIndex
    gExplorerObjectIndex += 1
    super.init ()
    noteObjectAllocation (self)
  }
  
  deinit {
    noteObjectDeallocation (self)
  }
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//    EBSimpleClass class
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

@objc(EBSimpleClass) class EBSimpleClass : EBObject {

  func populateExplorerWindow (inout y : CGFloat, view : NSView) {
  }

  func clearObjectExplorer () {
  }

  func saveIntoDictionary (ioDictionary : NSMutableDictionary) {
  }

  func setUpWithDictionary (inDictionary : NSDictionary) {
  }
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//   EBSimpleController
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

class EBSimpleController : EBOutletEvent {
  private let mPrivateObjects : [EBAbstractProperty]
  private let mPrivateOutlet : NSView
  private var mExplorerWindow : NSWindow?
  
  //····················································································································

  init (objects : [EBAbstractProperty], outlet : NSView) {
    mPrivateObjects = objects
    mPrivateOutlet = outlet
  }
  
  //····················································································································

  func showExplorerWindowAction (inSender : AnyObject) {
    if mExplorerWindow == nil {
      createAndPopulateObjectExplorerWindow ()
    }
    mExplorerWindow?.makeKeyAndOrderFront (inSender)
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
    for object in mPrivateObjects {
      createEntryForObjectNamed (
        "object",
        object:object,
        y:&y,
        view:view
      )
    }
    createEntryForOutletNamed (
     "Outlet",
      outlet:mPrivateOutlet,
      y:&y,
      view:view
    )
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
    let windowTitle = explorerIndexString (mExplorerObjectIndex) + className
    mExplorerWindow!.title = windowTitle
  //--- Add Scroll view
    let frame = NSRect (x:0.0, y:0.0, width:EXPLORER_ROW_WIDTH, height:y)
    let sw = NSScrollView (frame:frame)
    sw.hasVerticalScroller = true
    sw.documentView = view
    mExplorerWindow!.contentView = sw
  }

  //····················································································································
  //   deleteWindowAction
  //····················································································································

  final func deleteWindowAction (AnyObject) {
    clearObjectExplorer ()
  }

  //····················································································································
  //   clearObjectExplorer
  //····················································································································

  final func clearObjectExplorer () {
    let closeButton = mExplorerWindow?.standardWindowButton (NSWindowButton.CloseButton)
    closeButton!.target = nil
    mExplorerWindow?.orderOut (nil)
    mExplorerWindow = nil
  }

  //····················································································································

}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//    createEntryForAttributeNamed
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

let EXPLORER_ROW_HEIGHT : CGFloat = 20.0
private let FIRST_COLUMN_WIDTH : CGFloat = 40.0
private let SECOND_COLUMN_WIDTH : CGFloat = 300.0
private let THIRD_COLUMN_WIDTH : CGFloat = 220.0

let EXPLORER_ROW_WIDTH : CGFloat = FIRST_COLUMN_WIDTH + SECOND_COLUMN_WIDTH + THIRD_COLUMN_WIDTH

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

func firstColumn (y : CGFloat) -> NSRect {
  return NSRect (x:0.0, y:y, width:FIRST_COLUMN_WIDTH, height:EXPLORER_ROW_HEIGHT)
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

func secondColumn (y : CGFloat) -> NSRect {
  return NSRect (x:FIRST_COLUMN_WIDTH, y:y, width:SECOND_COLUMN_WIDTH, height:EXPLORER_ROW_HEIGHT)
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

func thirdColumn (y : CGFloat) -> NSRect {
  return NSRect (x:FIRST_COLUMN_WIDTH + SECOND_COLUMN_WIDTH, y:y, width:SECOND_COLUMN_WIDTH, height:EXPLORER_ROW_HEIGHT)
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

private let explorerLetters = ["A", "B", "C", "D", "E", "F", "G", "H", "J", "K", "L",
                               "M", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"]

func explorerIndexString (idx : Int) -> String {
  var result = String (idx % 10)
  var n = idx / 10
  result += String (n % 10)
  n /= 10
  result += explorerLetters [n % explorerLetters.count]
  n /= explorerLetters.count
  result += explorerLetters [n % explorerLetters.count]
  n /= explorerLetters.count
  result += explorerLetters [n % explorerLetters.count]
  n /= explorerLetters.count
  if n > 0 {
    result += String (n)
  }
  return result + " — "
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

func createEntryForPropertyNamed (attributeName : String,
                                  idx : Int,
                                  inout y : CGFloat,
                                  view : NSView,
                                  inout observerExplorer : NSPopUpButton?,
                                  inout valueExplorer : NSTextField?) {
  let font = NSFont.boldSystemFontOfSize (NSFont.smallSystemFontSize ())
//--- Explorer popup button
  observerExplorer = NSPopUpButton (frame:firstColumn (y), pullsDown:true)
  observerExplorer?.font = font
  view.addSubview (observerExplorer!)
//--- Property textfield
  let tf = NSTextField (frame:secondColumn (y))
  tf.enabled = true
  tf.editable = false
  tf.stringValue = explorerIndexString (idx) + attributeName
  tf.font = font
  view.addSubview (tf)
//--- Value textfield
  valueExplorer = NSTextField (frame:thirdColumn (y))
  valueExplorer?.enabled = true
  valueExplorer?.editable = false
  valueExplorer?.font = font
  view.addSubview (valueExplorer!)
//--- Update rect origin
  y += EXPLORER_ROW_HEIGHT
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//    createEntryForOutletNamed
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

func createEntryForOutletNamed (name : String,
                                outlet : NSView,
                                inout y : CGFloat,
                                view : NSView) {
  let font = NSFont.boldSystemFontOfSize (NSFont.smallSystemFontSize ())
//--- Property textfield
  let tf = NSTextField (frame:secondColumn (y))
  tf.enabled = true
  tf.editable = false
  tf.stringValue = name
  tf.font = font
  view.addSubview (tf)
//--- Value textfield
  let vtf = NSTextField (frame:thirdColumn (y))
  vtf.enabled = true
  vtf.editable = false
  vtf.stringValue = outlet.className
  vtf.font = font
  view.addSubview (vtf)
//--- Update rect origin
  y += EXPLORER_ROW_HEIGHT
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//    createEntryForObjectNamed
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

func createEntryForObjectNamed (name : String,
                                object : EBObject,
                                inout y : CGFloat,
                                view : NSView) {
  let font = NSFont.boldSystemFontOfSize (NSFont.smallSystemFontSize ())
//--- Property textfield
  let tf = NSTextField (frame:secondColumn (y))
  tf.enabled = true
  tf.editable = false
  tf.stringValue = name
  tf.font = font
  view.addSubview (tf)
//--- Value textfield
  let vtf = NSTextField (frame:thirdColumn (y))
  vtf.enabled = true
  vtf.editable = false
  vtf.stringValue = explorerIndexString (object.mExplorerObjectIndex) + _stdlib_getDemangledTypeName (object)
  vtf.font = font
  view.addSubview (vtf)
//--- Update rect origin
  y += EXPLORER_ROW_HEIGHT
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//    createEntryForToOneRelationshipNamed
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

func createEntryForToOneRelationshipNamed (relationshipName : String,
                                           idx : Int,
                                           inout y : CGFloat,
                                           view : NSView,
                                           inout valueExplorer : NSButton?) {
  let font = NSFont.boldSystemFontOfSize (NSFont.smallSystemFontSize ())
  let tf = NSTextField (frame:secondColumn (y))
  tf.enabled = true
  tf.editable = false
  tf.stringValue = explorerIndexString (idx) + relationshipName
  tf.font = font
  view.addSubview (tf)
  valueExplorer = NSButton (frame:thirdColumn (y))
  valueExplorer?.font = font
  view.addSubview (valueExplorer!)
  y += EXPLORER_ROW_HEIGHT
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//    createEntryForToManyRelationshipNamed
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

func createEntryForToManyRelationshipNamed (relationshipName : String,
                                            idx : Int,
                                            inout y : CGFloat,
                                            view : NSView,
                                            inout valueExplorer : NSPopUpButton?) {
  let font = NSFont.boldSystemFontOfSize (NSFont.smallSystemFontSize ())
  let tf = NSTextField (frame:secondColumn (y))
  tf.enabled = true
  tf.editable = false
  tf.stringValue = explorerIndexString (idx) + relationshipName
  tf.font = font
  view.addSubview (tf)
  valueExplorer = NSPopUpButton (frame:thirdColumn (y), pullsDown:true)
  valueExplorer?.font = font
  view.addSubview (valueExplorer!)
  y += EXPLORER_ROW_HEIGHT
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//    NSTExtView extension
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

extension NSTextView {

  //····················································································································

  func displayAndScrollToEndOfText () {
    if let unwrappedLayoutManager = layoutManager {
      if let ts = unwrappedLayoutManager.textStorage {
        let endOfText = NSRange (location:ts.length, length:0)
        scrollRangeToVisible (endOfText)
        displayIfNeeded ()
      }
    }
  }

  //····················································································································

  func clear () {
    let str = NSAttributedString (string:"", attributes:nil)
    if let unwrappedLayoutManager = layoutManager {
      if let ts = unwrappedLayoutManager.textStorage {
        ts.setAttributedString (str)
      }
    }
  }

  //····················································································································

  func appendAttributedString (inAttributedString : NSAttributedString) {
    if let unwrappedLayoutManager = layoutManager {
      if let ts = unwrappedLayoutManager.textStorage {
        ts.appendAttributedString (inAttributedString)
        displayAndScrollToEndOfText ()
      }
    }
  }

  //····················································································································

  func appendMessageString (inString : String) {
    let attributes : [String : NSObject] = [
      NSFontAttributeName : NSFont.boldSystemFontOfSize (NSFont.smallSystemFontSize ()),
      NSForegroundColorAttributeName : NSColor.blackColor()
    ]
    let str = NSAttributedString (string:inString, attributes:attributes)
    if let unwrappedLayoutManager = layoutManager {
      if let ts = unwrappedLayoutManager.textStorage {
        ts.appendAttributedString (str)
        displayAndScrollToEndOfText ()
      }
    }
  }

  //····················································································································

  func appendMessageString (inString : String, color:NSColor) {
    let attributes : [String : NSObject] = [
      NSFontAttributeName : NSFont.boldSystemFontOfSize (NSFont.smallSystemFontSize ()),
      NSForegroundColorAttributeName : color
    ]
    let str = NSAttributedString (string:inString, attributes:attributes)
    if let unwrappedLayoutManager = layoutManager {
      if let ts = unwrappedLayoutManager.textStorage {
        ts.appendAttributedString (str)
        displayAndScrollToEndOfText ()
      }
    }
  }

  //····················································································································

  func appendErrorString (inString : String) {
    appendMessageString (inString, color:NSColor.redColor ())
  }
  
  //····················································································································

  func appendWarningString (inString : String) {
    appendMessageString (inString, color:NSColor.orangeColor ())
  }

  //····················································································································

  func appendSuccessString (inString : String) {
    appendMessageString (inString, color:NSColor.blueColor ())
  }
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//    defaultValidationFunction
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

func defaultValidationFunction<T> (proposedValue : T) -> EBValidationResult {
  return EBValidationResult.ok
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//   EBProperty
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

enum EBProperty<T> {
  case noSelection
  case singleSelection (T)
  case multipleSelection
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

private func compareIntProperties (left:EBProperty<Int>,
                                   right:EBProperty<Int>,
                                   function : (Int, Int) -> Bool) -> EBProperty<Bool> {
  switch left {
  case .noSelection :
    return .noSelection
  case .multipleSelection :
    switch right {
    case .noSelection :
      return .noSelection
    case .multipleSelection, .singleSelection :
      return .multipleSelection
    }
  case .singleSelection (let vg) :
    switch right {
    case .noSelection :
      return .noSelection
    case .multipleSelection :
      return .multipleSelection
    case .singleSelection (let vd) :
      return .singleSelection (function (vg, vd))
    }
  }
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

func > (left:EBProperty<Int>, right:EBProperty<Int>) -> EBProperty<Bool> {
  return compareIntProperties (left, right: right, function: {$0 > $1})
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

func >= (left:EBProperty<Int>, right:EBProperty<Int>) -> EBProperty<Bool> {
  return compareIntProperties (left, right: right, function: {$0 >= $1})
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

func < (left:EBProperty<Int>, right:EBProperty<Int>) -> EBProperty<Bool> {
  return compareIntProperties (left, right: right, function: {$0 < $1})
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

func <= (left:EBProperty<Int>, right:EBProperty<Int>) -> EBProperty<Bool> {
  return compareIntProperties (left, right: right, function: {$0 <= $1})
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

func == (left:EBProperty<Int>, right:EBProperty<Int>) -> EBProperty<Bool> {
  return compareIntProperties (left, right: right, function: {$0 == $1})
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

func != (left:EBProperty<Int>, right:EBProperty<Int>) -> EBProperty<Bool> {
  return compareIntProperties (left, right: right, function: {$0 != $1})
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

private func combineBoolProperties (left:EBProperty<Bool>,
                                     right:EBProperty<Bool>,
                                     function : (Bool, Bool) -> Bool) -> EBProperty<Bool> {
  switch left {
  case .noSelection :
    return .noSelection
  case .multipleSelection :
    switch right {
    case .noSelection :
      return .noSelection
    case .multipleSelection, .singleSelection :
      return .multipleSelection
    }
  case .singleSelection (let vg) :
    switch right {
    case .noSelection :
      return .noSelection
    case .multipleSelection :
      return .multipleSelection
    case .singleSelection (let vd) :
      return .singleSelection (function (vg, vd))
    }
  }
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

func && (left:EBProperty<Bool>, right:EBProperty<Bool>) -> EBProperty<Bool> {
  return combineBoolProperties (left, right: right, function: {$0 && $1})
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

func || (left:EBProperty<Bool>, right:EBProperty<Bool>) -> EBProperty<Bool> {
  return combineBoolProperties (left, right: right, function: {$0 || $1})
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

func ^ (left:EBProperty<Bool>, right:EBProperty<Bool>) -> EBProperty<Bool> {
  return combineBoolProperties (left, right: right, function: {$0 != $1})
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

prefix func ! (operand:EBProperty<Bool>) -> EBProperty<Bool> {
  switch operand {
  case .noSelection :
    return .noSelection
  case .multipleSelection :
    return .multipleSelection
  case .singleSelection (let v) :
    return .singleSelection (!v)
  }
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//   EBReadOnlyEnumPropertyProtocol
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

@objc(EBReadOnlyEnumPropertyProtocol) protocol EBReadOnlyEnumPropertyProtocol {

  func addObserver (inObserver : EBEvent, postEvent inTrigger:Bool)

  func removeObserver (inObserver : EBEvent, postEvent inTrigger:Bool)

  func count () -> Int

  func rawValue () -> Int
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//   EBEnumPropertyProtocol
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

@objc(EBEnumPropertyProtocol) protocol EBEnumPropertyProtocol : EBReadOnlyEnumPropertyProtocol {
  func setFromRawValue (rawValue : Int)
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

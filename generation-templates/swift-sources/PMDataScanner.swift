//
//  PMDataScanner.m
//  canari
//
//  Created by Pierre Molinaro on 09/11/07.
//  Copyright 2007 __MyCompanyName__. All rights reserved.
//
//---------------------------------------------------------------------------*

import Cocoa

//---------------------------------------------------------------------------*

@objc(PMDataScanner) class PMDataScanner : NSObject {
  var mData : NSData
  var mReadIndex : Int = 0
  var mReadOk : Bool = true
  var mExpectedBytes : Array<UInt8> = []
  var mProgressWindow : NSWindow? = nil
  var mProgressIndicator : NSProgressIndicator? = nil

  //---------------------------------------------------------------------------*
  //  init                                                                     *
  //---------------------------------------------------------------------------*

  init (data: NSData,
        displayProgressWindowTitle: String?) {
    mData = data
    super.init ()
    noteObjectAllocation (self)
    if (nil != displayProgressWindowTitle) {
      openProgressWindowWithTitle (displayProgressWindowTitle!)
    }
  }

  //---------------------------------------------------------------------------*
  //  deinit                                                                   *
  //---------------------------------------------------------------------------*

  deinit {
    mProgressWindow?.orderOut (self)
    noteObjectDeallocation (self)
  }

  //---------------------------------------------------------------------------*
  //  openProgressWindowWithTitle                                              *
  //---------------------------------------------------------------------------*

  func openProgressWindowWithTitle (inTitle : String) {
    let visibleFrame = NSScreen.mainScreen ().visibleFrame
    let windowWidth = 400.0
    let windowHeight = 65.0
    let windowRect = NSMakeRect (
      NSMidX (visibleFrame) - CGFloat (windowWidth / 2.0),
      NSMidY (visibleFrame) - CGFloat (windowHeight / 2.0),
      CGFloat (windowWidth),
      CGFloat (windowHeight)
    )
    mProgressWindow = NSWindow (
      contentRect:windowRect,
      styleMask:NSTitledWindowMask,
      backing:NSBackingStoreType.Buffered,
      defer:false
    )
    mProgressWindow!.excludedFromWindowsMenu = true
    mProgressWindow!.title = "Progress"
    let contientViewRect : NSRect = mProgressWindow!.contentView.frame
  //--- Add comment text
    let ts_r = NSRect (
      x:25.0,
      y:30.0,
      width:NSMaxX (contientViewRect) - 40.0,
      height:20.0
    )
    var ts = NSTextField (frame:ts_r)
    ts.font = NSFont.boldSystemFontOfSize (NSFont.smallSystemFontSize())
    ts.stringValue = NSString (format:"Opening %@…", inTitle)
    ts.bezeled = false
    ts.bordered = false
    ts.editable = false
    ts.drawsBackground = false
    mProgressWindow!.contentView.addSubview (ts)
  //--- Add progress indicator
    let ps_r = NSRect (
      x:20.0,
      y:10.0,
      width:NSMaxX (contientViewRect) - 40.0,
      height: 20.0
    )
    mProgressIndicator = NSProgressIndicator (frame:ps_r)
    mProgressIndicator!.indeterminate = true
    mProgressWindow!.contentView.addSubview (mProgressIndicator!)
  //---
    mProgressIndicator!.minValue = 0.0
    mProgressIndicator!.maxValue = Double (mData.length)
    mProgressIndicator!.doubleValue = Double (mReadIndex)
    mProgressIndicator!.indeterminate = false
    mProgressIndicator!.display ()
  //---
    mProgressWindow!.makeKeyAndOrderFront (nil)
  }

  //---------------------------------------------------------------------------*
  //  updateProgressIndicator                                                  *
  //---------------------------------------------------------------------------*

  func updateProgressIndicator () {
    if let progressIndicator = mProgressIndicator {
      progressIndicator.doubleValue = Double (mReadIndex)
      progressIndicator.display ()
    }
  }

  //---------------------------------------------------------------------------*
  //  ignoreBytes                                                              *
  //---------------------------------------------------------------------------*

  func ignoreBytes (inLengthToIgnore : Int) {
    if mReadOk {
      mReadIndex += inLengthToIgnore ;
      updateProgressIndicator ()
    }
  }

  //---------------------------------------------------------------------------*
  //  testAcceptByte                                                           *
  //---------------------------------------------------------------------------*
  // http://stackoverflow.com/questions/24067085/pointers-pointer-arithmetic-and-raw-data-in-swift

  func testAcceptByte (inByte : UInt8) -> Bool {
    var result = mReadOk
    if result {
      if mReadIndex >= mData.length {
         NSLog ("Read beyond end of data")
         mReadOk = false
       }else{
        let byteAsData = mData.subdataWithRange (NSMakeRange(mReadIndex, sizeof(UInt8))).bytes
        var byte = UnsafePointer<UInt8> (byteAsData).memory
     //   let ptr = offsetPointer (mData.bytes, CInt(mReadIndex))
     //   var array : COpaquePointer = mData.bytes ()
     //   var byteArray : CConstPointer<UInt8> = CConstPointer<UInt8> (mData.bytes ())
        result = byte == inByte
        if result {
          mReadIndex += 1
          mExpectedBytes = []
        }else{
          mExpectedBytes.append (inByte)
        }
      }
    }
    updateProgressIndicator ()
    return result ;
  }

  //---------------------------------------------------------------------------*
  //  testAcceptFromByte                                                       *
  //---------------------------------------------------------------------------*

  func testAcceptFromByte (lowerBound: UInt8,
                           upperBound: UInt8,
                           inout value:UInt8) -> Bool {
    var result = mReadOk
    if result {
      if mReadIndex >= mData.length {
         NSLog ("Read beyond end of data")
         mReadOk = false
       }else{
        let byteAsData = mData.subdataWithRange (NSMakeRange(mReadIndex, sizeof(UInt8))).bytes
        var byte = UnsafePointer<UInt8> (byteAsData).memory
        result = (byte >= lowerBound) && (byte <= upperBound) ;
        if (result) {
          value = byte
          mReadIndex += 1
          mExpectedBytes = []
        }else{
          for i in lowerBound ..< upperBound + 1 {
            mExpectedBytes.append (i)
          }
        }
      }
    }
    updateProgressIndicator ()
    return result ;
  }

  //---------------------------------------------------------------------------*
  //  acceptRequiredByte                                                       *
  //---------------------------------------------------------------------------*

  func acceptRequiredByte (inByte : UInt8,
                           sourceFile: String) {
    if mReadOk {
      if mReadIndex >= mData.length {
         NSLog ("Read beyond end of data")
         mReadOk = false
      }else{
        let byteAsData = mData.subdataWithRange (NSMakeRange(mReadIndex, sizeof(UInt8))).bytes
        var byte = UnsafePointer<UInt8> (byteAsData).memory
        if (byte == inByte) {
          mReadIndex += 1
          mExpectedBytes = []
        }else{
          var message = ""
          for b in mExpectedBytes {
            message += NSString (format:"0x%02hhx, ", b)
          }
          NSLog ("%s: invalid current byte (0x%02x): expected bytes:%@0x%02x", sourceFile, byte, message, inByte) ;
          mReadOk = false
        }
      }
    }
    updateProgressIndicator ()
  }

  //---------------------------------------------------------------------------*
  //  parseByte                                                                *
  //---------------------------------------------------------------------------*

  func parseByte () -> UInt8 {
    var result : UInt8 = 0
    if mReadOk {
      if mReadIndex >= mData.length {
         NSLog ("Read beyond end of data")
         mReadOk = false
       }else{
        let byteAsData = mData.subdataWithRange (NSMakeRange(mReadIndex, sizeof(UInt8))).bytes
        result = UnsafePointer<UInt8> (byteAsData).memory
        mReadIndex += 1
      }
    }
    updateProgressIndicator ()
    return result
  }

  //---------------------------------------------------------------------------*
  //  parseAutosizedUnsignedInteger                                            *
  //---------------------------------------------------------------------------*

  func parseAutosizedUnsignedInteger () -> UInt {
    var result : UInt = 0
    var shift : UInt = 0
    var loop = true
    while loop && mReadOk {
      if mReadIndex >= mData.length {
         NSLog ("Read beyond end of data")
         mReadOk = false
      }else{
        let byteAsData = mData.subdataWithRange (NSMakeRange(mReadIndex, sizeof(UInt8))).bytes
        var byte = UnsafePointer<UInt8> (byteAsData).memory
        let w : UInt = UInt (byte) & 0x7F
        result |= (w << shift)
        shift += 7
        loop = (byte & 0x80) != 0
        mReadIndex += 1
      }
    }
    updateProgressIndicator ()
    return result ;
  }

  //---------------------------------------------------------------------------*
  //  parseAutosizedData                                                       *
  //---------------------------------------------------------------------------*

  func parseAutosizedData () -> NSData {
  var result = NSData ()
  if mReadOk {
    let dataLength : Int = Int (parseAutosizedUnsignedInteger ())
    if (mReadIndex + dataLength) >= mData.length {
      NSLog ("Read beyond end of data")
      mReadOk = false
    }else{
      result = mData.subdataWithRange (NSMakeRange (mReadIndex, dataLength))
      mReadIndex += dataLength
    }
  }
  updateProgressIndicator ()
  return result ;
}

  //---------------------------------------------------------------------------*
  //  ok                                                                       *
  //---------------------------------------------------------------------------*

  func ok () -> Bool {
    return mReadOk
  }

}

//---------------------------------------------------------------------------*
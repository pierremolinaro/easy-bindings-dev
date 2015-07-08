import Cocoa

//---------------------------------------------------------------------------*

struct DataScanner {
  private var mData : NSData
  private var mReadIndex : Int = 0
  private var mReadOk : Bool = true
  private var mExpectedBytes : Array<UInt8> = []

  //---------------------------------------------------------------------------*
  //  init                                                                     *
  //---------------------------------------------------------------------------*

  init (data: NSData) {
    mData = data
  }

  func printAddress (textView : NSTextView) {
    textView.appendMessageString (String (format:"%04X %04X:", mReadIndex >> 16, mReadIndex & 0xFFFF))
  }

  //---------------------------------------------------------------------------*
  //  ignoreBytes                                                              *
  //---------------------------------------------------------------------------*

  mutating func ignoreBytes (inLengthToIgnore : Int) {
    if mReadOk {
      mReadIndex += inLengthToIgnore ;
    }
  }

  //---------------------------------------------------------------------------*
  //  testAcceptByte                                                           *
  //---------------------------------------------------------------------------*
  // http://stackoverflow.com/questions/24067085/pointers-pointer-arithmetic-and-raw-data-in-swift

  mutating func testAcceptByte (inByte : UInt8) -> Bool {
    var result = mReadOk
    if result {
      if mReadIndex >= mData.length {
         NSLog ("Read beyond end of data")
         mReadOk = false
       }else{
        let byteAsData = mData.subdataWithRange (NSMakeRange(mReadIndex, sizeof(UInt8))).bytes
        let byte = UnsafePointer<UInt8> (byteAsData).memory
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
    return result ;
  }

  //---------------------------------------------------------------------------*
  //  testAcceptFromByte                                                       *
  //---------------------------------------------------------------------------*

  mutating func testAcceptFromByte (lowerBound: UInt8,
                                    upperBound: UInt8,
                                    inout value:UInt8) -> Bool {
    var result = mReadOk
    if result {
      if mReadIndex >= mData.length {
         NSLog ("Read beyond end of data")
         mReadOk = false
       }else{
        let byteAsData = mData.subdataWithRange (NSMakeRange(mReadIndex, sizeof(UInt8))).bytes
        let byte = UnsafePointer<UInt8> (byteAsData).memory
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
    return result ;
  }

  //---------------------------------------------------------------------------*
  //  acceptRequiredByte                                                       *
  //---------------------------------------------------------------------------*

  mutating func acceptRequiredByte (inByte : UInt8,
                                    sourceFile: String) {
    if mReadOk {
      if mReadIndex >= mData.length {
         NSLog ("Read beyond end of data")
         mReadOk = false
      }else{
        let byteAsData = mData.subdataWithRange (NSMakeRange(mReadIndex, sizeof(UInt8))).bytes
        let byte = UnsafePointer<UInt8> (byteAsData).memory
        if (byte == inByte) {
          mReadIndex += 1
          mExpectedBytes = []
        }else{
          var message = ""
          for b in mExpectedBytes {
            message += String (format:"0x%02hhx, ", b)
          }
          NSLog ("%s: invalid current byte (0x%02x): expected bytes:%@0x%02x", sourceFile, byte, message, inByte) ;
          mReadOk = false
        }
      }
    }
  }

  //---------------------------------------------------------------------------*
  //  parseByte                                                                *
  //---------------------------------------------------------------------------*

  mutating func parseByte () -> UInt8 {
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
    return result
  }

  //---------------------------------------------------------------------------*
  //  parseAutosizedUnsignedInteger                                            *
  //---------------------------------------------------------------------------*

  mutating func parseAutosizedUnsignedInteger (textView : NSTextView, comment : String) -> UInt {
    printAddress (textView)
    var result : UInt = 0
    var shift : UInt = 0
    var loop = true
    while loop && mReadOk {
      if mReadIndex >= mData.length {
         NSLog ("Read beyond end of data")
         mReadOk = false
      }else{
        let byteAsData = mData.subdataWithRange (NSMakeRange(mReadIndex, sizeof(UInt8))).bytes
        let byte = UnsafePointer<UInt8> (byteAsData).memory
        textView.appendByte(byte)
        let w : UInt = UInt (byte) & 0x7F
        result |= (w << shift)
        shift += 7
        loop = (byte & 0x80) != 0
        mReadIndex += 1
      }
    }
    textView.appendMessageString (" | \(comment) (\(result))\n")
    return result ;
  }

  //---------------------------------------------------------------------------*
  //  parseAutosizedData                                                       *
  //---------------------------------------------------------------------------*

  mutating func parseAutosizedData (textView : NSTextView, lengthComment : String, dataComment:String) -> NSData {
    var result = NSData ()
    if mReadOk {
      let dataLength : Int = Int (parseAutosizedUnsignedInteger (textView, comment:lengthComment))
      if (mReadIndex + dataLength) >= mData.length {
        NSLog ("Read beyond end of data")
        mReadOk = false
      }else{
        printAddress (textView)
        result = mData.subdataWithRange (NSMakeRange (mReadIndex, dataLength))
        textView.appendMessageString (" ... | \(dataComment) (\(dataLength) bytes)\n")
        mReadIndex += dataLength
      }
    }
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

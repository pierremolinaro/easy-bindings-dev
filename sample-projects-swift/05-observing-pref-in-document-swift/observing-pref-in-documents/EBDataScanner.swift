import Cocoa

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//  EBDataScanner
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

struct EBDataScanner {
  private var mData : NSData
  private var mReadIndex : Int = 0
  private var mReadOk : Bool = true
  private var mExpectedBytes : Array<UInt8> = []

  //····················································································································

  init (data: NSData) {
    mData = data
  }

  //····················································································································

  mutating func ignoreBytes (inLengthToIgnore : Int) {
    if mReadOk {
      mReadIndex += inLengthToIgnore ;
    }
  }

  //····················································································································
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

  //····················································································································

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

  //····················································································································

  mutating func acceptRequiredByte (inByte : UInt8) {
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
          NSLog ("invalid current byte (0x%02x): expected bytes:%@0x%02x", byte, message, inByte) ;
          mReadOk = false
        }
      }
    }
  }

  //····················································································································

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

  //····················································································································

  mutating func parseAutosizedUnsignedInteger () -> UInt {
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
        let w : UInt = UInt (byte) & 0x7F
        result |= (w << shift)
        shift += 7
        loop = (byte & 0x80) != 0
        mReadIndex += 1
      }
    }
    return result ;
  }

  //····················································································································

  mutating func parseAutosizedData () -> NSData {
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
    return result ;
  }

  //····················································································································

  mutating func parseAutosizedString () -> String {
    var result : String = ""
    var ptr = UnsafePointer<UInt8> (mData.bytes)
    ptr += mReadIndex
    var stringLength = 0
    var loop = true
    while loop && mReadOk {
      if (mReadIndex + stringLength) >= mData.length {
         mReadOk = false
      }else{
        loop = ptr.memory != 0
        ptr += 1
        stringLength += 1
      }
    }
    if (mReadOk) {
      let d = mData.subdataWithRange (NSMakeRange (mReadIndex, stringLength - 1))
      result = NSString (data:d, encoding: NSUTF8StringEncoding) as! String
      mReadIndex += stringLength
    }
    return result
  }

  //····················································································································

  func ok () -> Bool {
    return mReadOk
  }

  //····················································································································

}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

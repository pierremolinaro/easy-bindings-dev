//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

import Cocoa

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
//  EBDataScanner
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

struct EBDataScanner {
  private var mData : Data
  private var mReadIndex : Int = 0
  private var mReadOk : Bool = true
  private var mExpectedBytes : Array<UInt8> = []

  //····················································································································

  init (data: Data) {
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

  mutating func testAccept (byte : UInt8) -> Bool {
    var result = mReadOk
    if result {
      if mReadIndex >= mData.count {
         NSLog ("Read beyond end of data")
         mReadOk = false
       }else{
        result = byte == mData [mReadIndex]
        if result {
          mReadIndex += 1
          mExpectedBytes = []
        }else{
          mExpectedBytes.append (byte)
        }
      }
    }
    return result ;
  }

  //····················································································································

  mutating func testAcceptFromByte (lowerBound: UInt8,
                                    upperBound: UInt8,
                                    value:inout UInt8) -> Bool {
    var result = mReadOk
    if result {
      if mReadIndex >= mData.count {
         NSLog ("Read beyond end of data")
         mReadOk = false
       }else{
        let byte = mData [mReadIndex]
        result = (byte >= lowerBound) && (byte <= upperBound)
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

  mutating func acceptRequired (byte : UInt8) {
    if mReadOk {
      if mReadIndex >= mData.count {
         NSLog ("Read beyond end of data")
         mReadOk = false
      }else{
        if (byte == mData [mReadIndex]) {
          mReadIndex += 1
          mExpectedBytes = []
        }else{
          var message = ""
          for b in mExpectedBytes {
            message += String (format:"0x%02hhx, ", b)
          }
          NSLog ("invalid current byte (0x%02x): expected byte:%@0x%02x", byte, message, mData [mReadIndex]) ;
          mReadOk = false
        }
      }
    }
  }

  //····················································································································

  mutating func parseByte () -> UInt8 {
    var result : UInt8 = 0
    if mReadOk {
      if mReadIndex >= mData.count {
         NSLog ("Read beyond end of data")
         mReadOk = false
       }else{
        result = mData [mReadIndex]
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
      if mReadIndex >= mData.count {
         NSLog ("Read beyond end of data")
         mReadOk = false
      }else{
        let byte = mData [mReadIndex]
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

  mutating func parseAutosizedData () -> Data {
    var result = Data ()
    if mReadOk {
      let dataLength : Int = Int (parseAutosizedUnsignedInteger ())
      if (mReadIndex + dataLength) >= mData.count {
        NSLog ("Read beyond end of data")
        mReadOk = false
      }else{
        result = mData.subdata (in: mReadIndex ..< mReadIndex + dataLength)
        mReadIndex += dataLength
      }
    }
    return result ;
  }

  //····················································································································

  mutating func parseAutosizedString () -> String {
    var result : String = ""
    var stringLength = 0
    var loop = true
    while loop && mReadOk {
      if (mReadIndex + stringLength) >= mData.count {
        mReadOk = false
      }else{
        loop = mData [mReadIndex + stringLength] != 0
        stringLength += 1
      }
    }
    if (mReadOk) {
      let d = mData.subdata (in: mReadIndex ..< mReadIndex + stringLength - 1)
      if let r = String (data:d, encoding:String.Encoding.utf8) {
        result = r
      }else{
        mReadOk = false
      }
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

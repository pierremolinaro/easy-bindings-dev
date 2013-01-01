//
//  PMDataScanner.m
//  canari
//
//  Created by Pierre Molinaro on 09/11/07.
//  Copyright 2007 __MyCompanyName__. All rights reserved.
//
//---------------------------------------------------------------------------*

#import "PMDataScanner.h"

//#define EASY_BINDINGS_DEBUG

//---------------------------------------------------------------------------*

static NSUInteger uimin (const NSUInteger inA, const NSUInteger inB) {
  return (inA < inB) ? inA : inB ;
}

//---------------------------------------------------------------------------*

@implementation PMDataScanner

//---------------------------------------------------------------------------*

- (void) configureWithData: (NSData *) inData {
    mReadIndex = 0 ;
    mData = inData ;
    mReadOk = YES ;
    mExpectedBytes = [NSMutableData new] ;
}

//---------------------------------------------------------------------------*

+ (PMDataScanner *) scannerWithData: (NSData *) inData {
  PMDataScanner * scanner  = [PMDataScanner new] ;
  [scanner configureWithData:inData] ;
  return scanner ;
}

//---------------------------------------------------------------------------*

- (void) ignoreBytes: (NSUInteger) inLengthToIgnore {
  if (mReadOk) {
    mReadIndex += inLengthToIgnore ;
  }
}

//---------------------------------------------------------------------------*

- (BOOL) testAcceptByte: (UInt8) inByte {
  BOOL result = mReadOk ;
  if (result) {
    if (mReadIndex >= [mData length]) {
       NSLog (@"Read beyond end of data") ;
       mReadOk = NO ;
     }else{
      const UInt8 * bytes = [mData bytes] ;
      result = bytes [mReadIndex] == inByte ;
      if (result) {
        mReadIndex ++ ;
        [mExpectedBytes setLength:0] ;
      }else{
        [mExpectedBytes appendBytes:& inByte length:1] ;
      }
    }
  }
  return result ;
}

//---------------------------------------------------------------------------*

- (BOOL) testAcceptByte: (UInt8) inByte
         withMessage: (NSString *) inMessage {
  const NSUInteger idx = mReadIndex ;
  BOOL result = [self testAcceptByte:inByte] ;
  if (result) {
    printf ("%04lX %04lX:", (idx >> 32), idx % (1UL << 32)) ;
    printf (" %02X", inByte) ;
    printf (" | %s\n", [inMessage cStringUsingEncoding:NSUTF8StringEncoding]) ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

- (BOOL) testAcceptFromByte: (UInt8) inLowerBound
         toByte: (UInt8) inUpperBound
         value: (UInt8 *) outValuePtr {
  BOOL result = mReadOk ;
  if (result) {
    if (mReadIndex >= [mData length]) {
       NSLog (@"Read beyond end of data") ;
       mReadOk = NO ;
     }else{
      const UInt8 * bytes = [mData bytes] ;
      result = (bytes [mReadIndex] >= inLowerBound) && (bytes [mReadIndex] <= inUpperBound) ;
      if (result) {
        if (outValuePtr != NULL) {
          * outValuePtr = bytes [mReadIndex] ;
        }
        mReadIndex ++ ;
        [mExpectedBytes setLength:0] ;
      }else{
        for (NSUInteger i=inLowerBound ; i<=inUpperBound ; i++) {
          [mExpectedBytes appendBytes:& i length:1] ;
        }
      }
    }
  }
  return result ;
}

//---------------------------------------------------------------------------*

- (void) acceptRequiredByte: (UInt8) inByte {
  if (mReadOk) {
    if (mReadIndex >= [mData length]) {
       NSLog (@"Read beyond end of data") ;
       mReadOk = NO ;
     }else{
      const UInt8 * bytes = [mData bytes] ;
      if (bytes [mReadIndex] == inByte) {
        mReadIndex ++ ;
        [mExpectedBytes setLength:0] ;
      }else{
        NSMutableString * message = [NSMutableString new] ;
        const UInt8 * expectedBytes = [mExpectedBytes bytes] ;
        for (NSUInteger i=0 ; i<[mExpectedBytes length] ; i++) {
          [message appendFormat:@"0x%02hhx, ", expectedBytes  [i]] ;
        }
        NSLog (@"Invalid current byte (0x%02x): expected bytes:%@0x%02x", bytes [mReadIndex], message, inByte) ;
        mReadOk = NO ;
      }
    }
  }
}

//---------------------------------------------------------------------------*

- (void) acceptRequiredByte: (UInt8) inByte
         withMessage: (NSString *) inMessage {
  const NSUInteger idx = mReadIndex ;
  [self acceptRequiredByte:inByte] ;
  if (mReadOk) {
    printf ("%04lX %04lX:", (idx >> 32), idx % (1UL << 32)) ;
    printf (" %02X", inByte) ;
    printf (" | %s\n", [inMessage cStringUsingEncoding:NSUTF8StringEncoding]) ;
  }
}

//---------------------------------------------------------------------------*

- (void) acceptRequiredBytes: (UInt8 *) inBytes
         length: (NSUInteger) inLength
         message: (NSString *) inMessage {
  const NSUInteger idx = mReadIndex ;
  for (NSUInteger i=0 ; i<inLength ; i++) {
    [self acceptRequiredByte: inBytes [i]] ;
  }
  if (mReadOk) {
    printf ("%04lX %04lX:", (idx >> 32), idx % (1UL << 32)) ;
    const UInt8 * bytes = [mData bytes] ;
    for (NSUInteger i=0 ; i<inLength ; i++) {
      printf (" %02X", bytes [idx + i]) ;
    }
    printf (" | %s\n", [inMessage cStringUsingEncoding:NSUTF8StringEncoding]) ;
  }
}

//---------------------------------------------------------------------------*

- (UInt8) parseByte {
  UInt8 result = 0 ;
  if (mReadOk) {
    if (mReadIndex >= [mData length]) {
       NSLog (@"Read beyond end of data") ;
       mReadOk = NO ;
     }else{
      const UInt8 * bytes = [mData bytes] ;
      result = bytes [mReadIndex] ;
      mReadIndex ++ ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------*

- (void) parseByteWithMessage: (NSString *) inMessage {
  const NSUInteger idx = mReadIndex ;
  const UInt8 byte = self.parseByte ;
  if (mReadOk) {
    printf ("%04lX %04lX:", (idx >> 32), idx % (1UL << 32)) ;
    printf (" %02X", byte) ;
    printf (" | %s\n", [inMessage cStringUsingEncoding:NSUTF8StringEncoding]) ;
  }
}

//---------------------------------------------------------------------------*

- (UInt64) parseAutosizedUnsignedInteger {
  UInt64 result = 0 ;
  const UInt8 * bytes = [mData bytes] ;
  NSUInteger shift = 0 ;
  BOOL loop = YES ;
  while (loop && mReadOk) {
    if (mReadIndex >= [mData length]) {
       NSLog (@"Read beyond end of data") ;
       mReadOk = NO ;
    }else{
      const UInt64 w = bytes [mReadIndex] & 0x7F ;
      result |= (UInt64) (w << shift) ;
      shift += 7 ;
      loop = (bytes [mReadIndex] & 0x80) !=0 ;
      mReadIndex ++ ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------*

- (NSUInteger) parseAutosizedUnsignedIntegerWithMessage: (NSString *) inMessage {
  const NSUInteger idx = mReadIndex ;
  NSUInteger result = [self parseAutosizedUnsignedInteger] ;
  if (result) {
    printf ("%04lX %04lX:", (idx >> 32), idx % (1UL << 32)) ;
    const UInt8 * bytes = [mData bytes] ;
    for (NSUInteger i=idx ; i<mReadIndex ; i++) {
      printf (" %02X", bytes [i]) ;
    }
    NSString * s = [NSString stringWithFormat:@"%@ (size: %lu bytes, value: %lu)", inMessage, mReadIndex - idx, result] ;
    printf (" | %s\n", [s cStringUsingEncoding:NSUTF8StringEncoding]) ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

- (NSString *) parseAutosizedString {
  NSString * result = nil ;
  const UInt8 * bytes = [mData bytes] ;
  NSUInteger beyondStringIndex = mReadIndex ;
  BOOL loop = YES ;
  while (loop && mReadOk) {
    if (beyondStringIndex >= [mData length]) {
       NSLog (@"Read beyond end of data") ;
       mReadOk = NO ;
    }else{
      loop = bytes [beyondStringIndex] != 0 ;
      beyondStringIndex ++ ;
    }
  }
  if (mReadOk) {
    result = [NSString stringWithUTF8String:(const char *) & bytes [mReadIndex]] ;
    mReadIndex = beyondStringIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

- (NSString *) parseAutosizedStringWithMessage: (NSString *) inMessage {
  const NSUInteger idx = mReadIndex ;
  NSString * result = [self parseAutosizedString] ;
  if (result) {
    printf ("%04lX %04lX:", (idx >> 32), idx % (1UL << 32)) ;
    const UInt8 * bytes = [mData bytes] ;
    const NSUInteger maxPrint = uimin (idx + 10, mReadIndex) ;
    for (NSUInteger i=idx ; i<maxPrint ; i++) {
      printf (" %02X", bytes [i]) ;
    }
    if (maxPrint < mReadIndex) {
      printf ("...") ;
    }
    NSString * s = [NSString stringWithFormat:@"%@ (size: %lu bytes, value: '%@')", inMessage, mReadIndex - idx, result] ;
    printf (" | %s\n", [s cStringUsingEncoding:NSUTF8StringEncoding]) ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

- (NSData *) parseAutosizedData {
  NSData * result = nil ;
  if (mReadOk) {
    const NSUInteger dataLength = [self parseAutosizedUnsignedInteger] ;
    if ((mReadIndex + dataLength) >= [mData length]) {
      NSLog (@"Read beyond end of data") ;
      mReadOk = NO ;
    }else{
      result = [mData subdataWithRange:NSMakeRange (mReadIndex, dataLength)] ;
      mReadIndex += dataLength ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------*

- (NSData *) parseAutosizedDataWithMessage: (NSString *) inMessage {
  NSData * result = nil ;
  if (mReadOk) {
    const NSUInteger idx = mReadIndex ;
    const NSUInteger dataLength = [self parseAutosizedUnsignedInteger] ;
    printf ("%04lX %04lX:", (idx >> 32), idx % (1UL << 32)) ;
    const UInt8 * bytes = [mData bytes] ;
    for (NSUInteger i=idx ; i<mReadIndex ; i++) {
      printf (" %02X", bytes [i]) ;
    }
    NSString * s = [NSString stringWithFormat:@"%@ (length field, size: %lu bytes)", inMessage, mReadIndex - idx] ;
    printf (" | %s\n", [s cStringUsingEncoding:NSUTF8StringEncoding]) ;
    if ((mReadIndex + dataLength) >= [mData length]) {
      NSLog (@"Read beyond end of data") ;
      mReadOk = NO ;
    }else{
      const NSUInteger idx2 = mReadIndex ;
      result = [mData subdataWithRange:NSMakeRange (mReadIndex, dataLength)] ;
      mReadIndex += dataLength ;
      printf ("%04lX %04lX:", (idx2 >> 32), idx2 % (1UL << 32)) ;
      s = [NSString stringWithFormat:@"%@ (contents, size: %lu bytes)", inMessage, dataLength] ;
      printf ("... | %s\n", [s cStringUsingEncoding:NSUTF8StringEncoding]) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------*

- (void) ignoreAutosizedData {
  if (mReadOk) {
    const NSUInteger dataLength = [self parseAutosizedUnsignedInteger] ;
    [self ignoreBytes:dataLength] ;
  }
}

//---------------------------------------------------------------------------*

- (BOOL) ok {
  return mReadOk ;
}

//---------------------------------------------------------------------------*

@end

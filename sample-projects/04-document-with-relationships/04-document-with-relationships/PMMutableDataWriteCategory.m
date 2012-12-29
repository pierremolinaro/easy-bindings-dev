//
//  PMMutableDataWriteCategory.m
//  canari
//
//  Created by Pierre Molinaro on 09/11/07.
//  Copyright 2007 __MyCompanyName__. All rights reserved.
//
//---------------------------------------------------------------------------*

#import "PMMutableDataWriteCategory.h"

//---------------------------------------------------------------------------*

@implementation NSMutableData (PMMutableDataWriteCategory)

//---------------------------------------------------------------------------*

- (void) writeAutosizedData: (NSData *) inData
         trace: (NSMutableString *) ioTrace {
  [ioTrace appendFormat:@"%03lu %03lu ", self.length / 1000, self.length % 1000] ;
  [self writeAutosizedUnsigned:[inData length] trace:ioTrace] ;
  [self appendData:inData] ;
}

//---------------------------------------------------------------------------*

- (void) writeByte: (UInt8) inByte
         trace: (NSMutableString *) ioTrace {
  [ioTrace appendFormat:@"%03lu %03lu ", self.length / 1000, self.length % 1000] ;
  [ioTrace appendFormat:@"%02hhX ", inByte] ;
  [self appendBytes:& inByte length:1] ;
}

//---------------------------------------------------------------------------*

- (void) writeByte: (UInt8) inByte
         trace: (NSMutableString *) ioTrace
         code: (char) inCode {
  [ioTrace appendFormat:@"%03lu %03lu ", self.length / 1000, self.length % 1000] ;
  [ioTrace appendFormat:@"%c %02hhX ", inCode, inByte] ;
  [self appendBytes:& inByte length:1] ;
}

//---------------------------------------------------------------------------*

- (void) writeAutosizedString: (NSString *) inString
         trace: (NSMutableString *) ioTrace {
  const char * cString = [inString UTF8String] ;
  const NSUInteger length = strlen (cString) ;
  if (nil != ioTrace) {
    [ioTrace appendFormat:@"%03lu %03lu S ", self.length / 1000, self.length % 1000] ;
    for (NSUInteger i=0 ; i<=length ; i++) {
      [ioTrace appendFormat:@"%02hhX ", cString [i]] ;
    }
  }
  [self appendBytes:cString length:length+1] ;
}

//---------------------------------------------------------------------------*

- (void) writeAutosizedUnsigned: (UInt64) inValue
         trace: (NSMutableString *) ioTrace {
  [ioTrace appendFormat:@"%03lu %03lu ", self.length / 1000, self.length % 1000] ;
  [ioTrace appendString:@"U "] ;
  UInt8 bytes [10] ;
  NSUInteger idx = 0 ;
  UInt64 value = inValue ;
  do{
    bytes [idx] = value & 0x7FULL ;
    value >>= 7 ;
    if (value != 0) {
      bytes [idx] |= 0x80 ;
    }
    [ioTrace appendFormat:@"%02hhX ", bytes [idx]] ;
    idx ++ ;
  }while (value != 0) ;
  [self appendBytes:bytes length:idx] ;
}

//---------------------------------------------------------------------------*

- (void) writePrefixedSigned: (NSNumber *) inValue
         trace: (NSMutableString *) ioTrace {
  if (inValue == nil) {
    [self writeByte:0xFF trace:ioTrace code:'Z'] ;
  }else{
    const SInt64 value = (SInt64) [inValue longLongValue] ;
    if (value >= 0) {
      [self writeByte:0xFE trace:ioTrace code:'P'] ;
      [ioTrace appendString:@"\n"] ;
      [self writeAutosizedUnsigned: (UInt64) value trace:ioTrace] ;
    }else{
      [self writeByte:0xFD trace:ioTrace code:'N'] ;
      [ioTrace appendString:@"\n"] ;
      const SInt64 w = - value ;
      [self writeAutosizedUnsigned: (UInt64) w trace:ioTrace] ;
    }
  }
}

//---------------------------------------------------------------------------*

- (void) writePrefixedString: (NSString *) inString
         trace: (NSMutableString *) ioTrace {
  if (inString == nil) {
    [self writeByte:0xFF trace:ioTrace code:'Z'] ;
  }else{
    [self writeByte:0x09 trace:ioTrace code:'s'] ;
    [ioTrace appendString:@"\n"] ;
    [self writeAutosizedString:inString trace:ioTrace] ;
  }
}

//---------------------------------------------------------------------------*

- (void) writePrefixedBool: (NSNumber *) inBoolNumber
         trace: (NSMutableString *) ioTrace {
  [ioTrace appendFormat:@"%03lu %03lu ", self.length / 1000, self.length % 1000] ;
  if (inBoolNumber == nil) {
    [self writeByte:0xFF trace:ioTrace code:'Z'] ;
  }else if ([inBoolNumber boolValue]) {
    [self writeByte:0x0B trace:ioTrace code:'T'] ;
  }else{
    [self writeByte:0x0A trace:ioTrace code:'F'] ;
  }
}

//---------------------------------------------------------------------------*

- (void) writePrefixedDate: (NSDate *) inDate
         trace: (NSMutableString *) ioTrace {
  [ioTrace appendFormat:@"%03lu %03lu ", self.length / 1000, self.length % 1000] ;
  if (inDate == nil) {
    [self writeByte:0xFF trace:ioTrace code:'Z'] ;
  }else{
    [self writeByte:0x0E trace:ioTrace code:'D'] ;
    [ioTrace appendString:@"\n"] ;
    [self writeAutosizedData:[NSArchiver archivedDataWithRootObject:inDate] trace:ioTrace] ;
  }
}

//---------------------------------------------------------------------------*

- (void) writePrefixedDecimal: (NSDecimalNumber *) inDecimalNumber
         trace: (NSMutableString *) ioTrace {
  [ioTrace appendFormat:@"%03lu %03lu ", self.length / 1000, self.length % 1000] ;
  if (inDecimalNumber == nil) {
    [self writeByte:0xFF trace:ioTrace code:'Z'] ;
  }else{
    [self writeByte:0x10 trace:ioTrace code:'d'] ;
    [ioTrace appendString:@"\n"] ;
    [self writeAutosizedData:[NSArchiver archivedDataWithRootObject:inDecimalNumber] trace:ioTrace] ;
  }
}

//---------------------------------------------------------------------------*

- (void) writePrefixedBinaryData: (NSData *) inData
         trace: (NSMutableString *) ioTrace {
  [ioTrace appendFormat:@"%03lu %03lu ", self.length / 1000, self.length % 1000] ;
  if (inData == nil) {
    [self writeByte:0xFF trace:ioTrace code:'Z'] ;
  }else{
    [self writeByte:0x0F trace:ioTrace code:'b'] ;
    [ioTrace appendString:@"\n"] ;
    const NSUInteger length = [inData length] ;
    [self writeAutosizedUnsigned:length trace:ioTrace] ;
    [ioTrace appendString:@"\n"] ;
    [self appendData:inData] ;
  }
}

//---------------------------------------------------------------------------*

- (void) writePrefixedFloat: (NSNumber *) inValue
         trace: (NSMutableString *) ioTrace {
  [ioTrace appendFormat:@"%03lu %03lu ", self.length / 1000, self.length % 1000] ;
  if (inValue == nil) {
    [self writeByte:0xFF trace:ioTrace code:'Z'] ;
  }else{
    [self writeByte:0x0C trace:ioTrace code:'f'] ;
    [ioTrace appendString:@"\n"] ;
    [self writeAutosizedData:[NSArchiver archivedDataWithRootObject:inValue] trace:ioTrace] ;
  }
}

//---------------------------------------------------------------------------*

- (void) writePrefixedDouble: (NSNumber *) inValue
         trace: (NSMutableString *) ioTrace {
  [ioTrace appendFormat:@"%03lu %03lu ", self.length / 1000, self.length % 1000] ;
  if (inValue == nil) {
    [self writeByte:0xFF trace:ioTrace code:'Z'] ;
  }else{
    [self writeByte:0x0D trace:ioTrace code:'e'] ;
    [self writeAutosizedData:[NSArchiver archivedDataWithRootObject:inValue] trace:ioTrace] ;
    // NSLog (@"Write Double '%@'", [inValue description]) ;
  }
}

//---------------------------------------------------------------------------*

@end

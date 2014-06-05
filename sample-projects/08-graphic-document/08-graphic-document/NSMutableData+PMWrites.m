//
//  NSMutableData+PMWrites.m
//  essai
//
//  Created by Pierre Molinaro on 30/06/13.
//  Copyright (c) 2013 ECN / IRCCyN. All rights reserved.
//
//---------------------------------------------------------------------------*

#import "NSMutableData+PMWrites.h"

//---------------------------------------------------------------------------*

@implementation NSMutableData (PMWrites)

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

@end

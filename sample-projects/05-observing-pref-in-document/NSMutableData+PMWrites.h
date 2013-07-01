//
//  NSMutableData+PMWrites.h
//  essai
//
//  Created by Pierre Molinaro on 30/06/13.
//  Copyright (c) 2013 ECN / IRCCyN. All rights reserved.
//
//---------------------------------------------------------------------------*

#import <Foundation/Foundation.h>

//---------------------------------------------------------------------------*

@interface NSMutableData (PMWrites)

- (void) writeAutosizedData: (NSData *) inData
         trace: (NSMutableString *) ioTrace ;

- (void) writeByte: (UInt8) inByte
         trace: (NSMutableString *) ioTrace ;

- (void) writeAutosizedUnsigned: (UInt64) inValue
         trace: (NSMutableString *) ioTrace ;

@end

//---------------------------------------------------------------------------*

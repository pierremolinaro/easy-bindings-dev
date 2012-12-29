//
//  PMMutableDataWriteCategory.h
//  canari
//
//  Created by Pierre Molinaro on 09/11/07.
//  Copyright 2007 __MyCompanyName__. All rights reserved.
//
//---------------------------------------------------------------------------*

#import <Cocoa/Cocoa.h>

//---------------------------------------------------------------------------*

@interface NSMutableData (PMMutableDataWriteCategory)

- (void) writeByte: (UInt8) inByte trace: (NSMutableString *) ioTrace ;

- (void) writeByte: (UInt8) inByte trace: (NSMutableString *) ioTrace code: (char) inCode ;

- (void) writeAutosizedString: (NSString *) inString trace: (NSMutableString *) ioTrace ;

- (void) writeAutosizedUnsigned: (UInt64) inValue trace: (NSMutableString *) ioTrace ;

- (void) writeAutosizedData: (NSData *) inData trace: (NSMutableString *) ioTrace ;

- (void) writePrefixedSigned: (NSNumber *) inValue trace: (NSMutableString *) ioTrace ;

- (void) writePrefixedString: (NSString *) inString trace: (NSMutableString *) ioTrace ;

- (void) writePrefixedBool: (NSNumber *) inBoolNumber trace: (NSMutableString *) ioTrace ;

- (void) writePrefixedDate: (NSDate *) inDate trace: (NSMutableString *) ioTrace ;

- (void) writePrefixedDecimal: (NSDecimalNumber *) inDecimalNumber trace: (NSMutableString *) ioTrace ;

- (void) writePrefixedBinaryData: (NSData *) inData trace: (NSMutableString *) ioTrace ;

- (void) writePrefixedFloat: (NSNumber *) inValue trace: (NSMutableString *) ioTrace ;

- (void) writePrefixedDouble: (NSNumber *) inValue trace: (NSMutableString *) ioTrace ;

@end

//---------------------------------------------------------------------------*

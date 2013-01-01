//
//  PMDataScanner.h
//  canari
//
//  Created by Pierre Molinaro on 09/11/07.
//  Copyright 2007 __MyCompanyName__. All rights reserved.
//
//---------------------------------------------------------------------------*

#import <Foundation/Foundation.h>

//---------------------------------------------------------------------------*

@interface PMDataScanner : NSObject {
  @private NSData * mData ;
  @private NSUInteger mReadIndex ;
  @private BOOL mReadOk ;
  @private NSMutableData * mExpectedBytes ;
}

+ (PMDataScanner *) scannerWithData: (NSData *) inData ;

- (void) ignoreBytes: (NSUInteger) inLengthToIgnore ;

- (BOOL) testAcceptByte: (UInt8) inByte ;

- (BOOL) testAcceptByte: (UInt8) inByte
         withMessage: (NSString *) inMessage ;

- (BOOL) testAcceptFromByte: (UInt8) inLowerBound
         toByte: (UInt8) inUpperBound
         value: (UInt8 *) outValuePtr ;

- (void) acceptRequiredByte: (UInt8) inByte ;

- (void) acceptRequiredByte: (UInt8) inByte
         withMessage: (NSString *) inMessage;

- (void) acceptRequiredBytes: (UInt8 *) inBytes
         length: (NSUInteger) inLength
         message: (NSString *) inMessage ;

- (UInt64) parseAutosizedUnsignedInteger ;

- (NSUInteger) parseAutosizedUnsignedIntegerWithMessage: (NSString *) inMessage ;

- (NSString *) parseAutosizedString ;

- (NSString *) parseAutosizedStringWithMessage: (NSString *) inMessage ;

- (NSData *) parseAutosizedData ;

- (NSData *) parseAutosizedDataWithMessage: (NSString *) inMessage ;

- (void) ignoreAutosizedData ;

- (UInt8) parseByte ;

- (void) parseByteWithMessage: (NSString *) inMessage ;

- (BOOL) ok ;

@end

//---------------------------------------------------------------------------*

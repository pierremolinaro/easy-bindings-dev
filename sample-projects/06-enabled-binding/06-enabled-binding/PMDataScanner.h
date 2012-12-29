//
//  PMDataScanner.h
//  canari
//
//  Created by Pierre Molinaro on 09/11/07.
//  Copyright 2007 __MyCompanyName__. All rights reserved.
//
//---------------------------------------------------------------------------*

#import <Cocoa/Cocoa.h>

//---------------------------------------------------------------------------*

@interface PMDataScanner : NSObject {
  @private NSData * mData ;
  @private NSUInteger mReadIndex ;
  @private BOOL mReadOk ;
  @private NSMutableData * mExpectedBytes ;
  @private NSWindow * mProgressWindow ;
  @private NSProgressIndicator * mProgressIndicator ;
}

+ (PMDataScanner *) scannerWithData: (NSData *) inData
                    displayProgressWindowTitle: (NSString *) inTitle ;

- (void) orderOutProgressWindow ;

- (void) ignoreBytes: (NSUInteger) inLengthToIgnore ;

- (BOOL) testAcceptByte: (UInt8) inByte ;

- (BOOL) testAcceptFromByte: (UInt8) inLowerBound
         toByte: (UInt8) inUpperBound
         value: (UInt8 *) outValuePtr ;

- (void) acceptRequiredByte: (UInt8) inByte ;

- (UInt64) parseAutosizedUnsignedInteger ;

- (NSString *) parseAutosizedString ;

// - (long long) parseIntegerOfSize: (NSUInteger) inByteSize ; // DEPRECATED

- (NSData *) parseAutosizedData ;

- (void) ignoreAutosizedData ;

- (UInt8) parseByte ;

- (BOOL) ok ;

@end

//---------------------------------------------------------------------------*

//
//  PMDataScanner.m
//  canari
//
//  Created by Pierre Molinaro on 09/11/07.
//  Copyright 2007 __MyCompanyName__. All rights reserved.
//
//---------------------------------------------------------------------------*

#import "PMDataScanner.h"
#import "easy-bindings-utilities.h"
#import "PMAllocationDebug.h"

//#define EASY_BINDINGS_DEBUG

//---------------------------------------------------------------------------*

@implementation PMDataScanner

//---------------------------------------------------------------------------*

- (void) openProgressWindowWithTitle: (NSString *) inTitle {
  const NSRect visibleFrame = [[NSScreen mainScreen] visibleFrame] ;
  const double windowWidth = 400.0 ;
  const double windowHeight = 65.0 ;
  const NSRect windowRect = {
    {NSMidX (visibleFrame) - windowWidth / 2.0, NSMidY (visibleFrame) - windowHeight / 2.0},
    {windowWidth, windowHeight}
  } ;
  mProgressWindow = [[NSWindow alloc]
    initWithContentRect:windowRect
    styleMask:NSTitledWindowMask
    backing:NSBackingStoreBuffered
    defer:NO
  ] ;
  [mProgressWindow setExcludedFromWindowsMenu:YES] ;
  [mProgressWindow setTitle:@"Progress"] ;
  const NSRect contientViewRect = [[mProgressWindow contentView] frame] ;
//--- Add comment text
  const NSRect ts_r = {{25.0, 30.0}, {NSMaxX (contientViewRect) - 40.0, 20.0}} ;
  NSTextField * ts = [[NSTextField alloc] initWithFrame:ts_r] ;
  [ts setFont:[NSFont boldSystemFontOfSize:[NSFont smallSystemFontSize]]] ;
  [ts setStringValue:[NSString stringWithFormat:@"Opening %@…", inTitle]] ;
  [ts setBezeled:NO] ;
  [ts setBordered:NO] ;
  [ts setEditable:NO] ;
  [ts setDrawsBackground:NO] ;
  [[mProgressWindow contentView] addSubview:ts] ;
  macroReleaseSetToNil (ts) ;
//--- Add progress indicator
  const NSRect ps_r = {{20.0, 10.0}, {NSMaxX (contientViewRect) - 40.0, 20.0}} ;
  mProgressIndicator = [[NSProgressIndicator alloc] initWithFrame:ps_r] ;
  [mProgressIndicator setIndeterminate:YES] ;
  [[mProgressWindow contentView] addSubview:mProgressIndicator] ;
//---
  [mProgressIndicator setMinValue:0.0] ;
  [mProgressIndicator setMaxValue: (double) [mData length]] ;
  [mProgressIndicator setDoubleValue: (double) mReadIndex] ;
  [mProgressIndicator setIndeterminate:NO] ;
  [mProgressIndicator display] ;
  [mProgressWindow makeKeyAndOrderFront:nil] ;
}

//---------------------------------------------------------------------------*

- (void) orderOutProgressWindow {
  [mProgressWindow close] ;
  mProgressWindow = nil ;
}

//---------------------------------------------------------------------------*

- (void) configureWithData: (NSData *) inData {
    mReadIndex = 0 ;
    mData = inData ;
    mReadOk = YES ;
    mExpectedBytes = [NSMutableData new] ;
}

//---------------------------------------------------------------------------*

+ (PMDataScanner *) scannerWithData: (NSData *) inData
                    displayProgressWindowTitle: (NSString *) inTitle {
  PMDataScanner * scanner  = [PMDataScanner new] ;
  [scanner configureWithData:inData] ;
  if (nil != inTitle) {
    [scanner openProgressWindowWithTitle:inTitle] ;
  }
  macroAutorelease (scanner) ;
  return scanner ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//                           dealloc                                         *
//                                                                           *
//---------------------------------------------------------------------------*

#ifdef PM_COCOA_DEBUG
  - (void) dealloc {
    macroNoteObjectDeallocation ;
    macroSuperDealloc ;
  }
#endif

//---------------------------------------------------------------------------*
//                                                                           *
//                           dealloc                                         *
//                                                                           *
//---------------------------------------------------------------------------*

- (id) init {
  self = [super init] ;
  if (self) {
    macroNoteObjectAllocation ;
  }
  return self ;
}

//---------------------------------------------------------------------------*

- (void) updateProgressIndicator {
  [mProgressIndicator setDoubleValue: (double) mReadIndex] ;
  [mProgressIndicator display] ;
}

//---------------------------------------------------------------------------*

- (void) ignoreBytes: (NSUInteger) inLengthToIgnore {
  if (mReadOk) {
    mReadIndex += inLengthToIgnore ;
    [self updateProgressIndicator] ;
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
  [self updateProgressIndicator] ;
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
  [self updateProgressIndicator] ;
  return result ;
}

//---------------------------------------------------------------------------*

- (void) acceptRequiredByte: (UInt8) inByte
         sourceFile: (const char *) inSourceFile {
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
        NSLog (@"%s: invalid current byte (0x%02x): expected bytes:%@0x%02x", inSourceFile, bytes [mReadIndex], message, inByte) ;
        macroReleaseSetToNil (message) ;
        mReadOk = NO ;
      }
    }
  }
  [self updateProgressIndicator] ;
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
  [self updateProgressIndicator] ;
  return result ;
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
  [self updateProgressIndicator] ;
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
  [self updateProgressIndicator] ;
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
  [self updateProgressIndicator] ;
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

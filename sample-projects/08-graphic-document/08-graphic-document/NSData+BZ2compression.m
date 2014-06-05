//
//  NSData+BZ2compression.m
//  essai
//
//  Created by Pierre Molinaro on 30/06/13.
//  Copyright (c) 2013 ECN / IRCCyN. All rights reserved.
//
//---------------------------------------------------------------------------*

#import "NSData+BZ2compression.h"

//---------------------------------------------------------------------------*

#include <bzlib.h>

//---------------------------------------------------------------------------*

@implementation NSData (BZ2compression)

//---------------------------------------------------------------------------*

// See http://www.bzip.org/1.0.3/html/libprog.html

//---------------------------------------------------------------------------*

- (NSData *) bz2DecompressedDataWithEstimedExpansion: (NSUInteger) inEstimedExpansionFactor
             returnedErrorCode : (NSInteger *) outErrorPtr {
  const NSUInteger compressedDataLength = self.length ;
  char * compressedDataPointer = (char *) self.bytes ;
  NSUInteger estimedDecompressedDataLength = compressedDataLength ;
  if (inEstimedExpansionFactor > 1) {
    estimedDecompressedDataLength *= inEstimedExpansionFactor ;
  }
  NSInteger error ;
  UInt32 decompressedDataLength ;
  char * decompressedBuffer = NULL ;
  do{
    free (decompressedBuffer) ;
    //NSLog (@"estimedDecompressedDataLength %u", estimedDecompressedDataLength) ;
    decompressedBuffer = malloc (estimedDecompressedDataLength) ;
    decompressedDataLength = (UInt32) estimedDecompressedDataLength ;
    error = BZ2_bzBuffToBuffDecompress (decompressedBuffer, & decompressedDataLength,
                                        compressedDataPointer, (UInt32) compressedDataLength,
                                        0, 0) ;
    estimedDecompressedDataLength *= 2 ;
  }while (error == BZ_OUTBUFF_FULL) ;
  NSData * result = nil ;
  if (error == BZ_OK) {
    result  = [NSData dataWithBytes:decompressedBuffer length:decompressedDataLength] ;
  }
  if (outErrorPtr != NULL) {
    * outErrorPtr = error ;
  }
  free (decompressedBuffer) ; decompressedBuffer = NULL ;
  return result ;
}

//---------------------------------------------------------------------------*

- (NSData *) bz2CompressedDataWithCompressionFactor: (NSInteger) inCompressionFactor
             returnedErrorCode : (NSInteger *) outErrorPtr {
  const UInt32 sourceDataLength = (UInt32) self.length ;
  char * sourceDataPointer = (char *) self.bytes ;
  UInt32 estimedCompressedDataLength = sourceDataLength + (sourceDataLength / 100) + (600 * 1024) ;
  NSInteger error ;
  UInt32 compressedDataLength ;
  char * compressedBuffer = NULL ;
  do{
    free (compressedBuffer) ;
    compressedBuffer = malloc (estimedCompressedDataLength) ;
    compressedDataLength = estimedCompressedDataLength ;
    error = BZ2_bzBuffToBuffCompress (compressedBuffer,
                                      & compressedDataLength,
                                      sourceDataPointer,
                                      sourceDataLength,
                                      (int) inCompressionFactor,
                                      0, // Verbosity (0 = silent)
                                      0) ; // Work factor (0 = default)
    estimedCompressedDataLength *= 2 ;
  }while (error == BZ_OUTBUFF_FULL) ;
  NSData * result = nil ;
  if (error == BZ_OK) {
    result  = [NSData dataWithBytesNoCopy:compressedBuffer length:compressedDataLength] ;
  }else{
    free (compressedBuffer) ;
  }
  if (outErrorPtr != NULL) {
    * outErrorPtr = error ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

+ (NSString *) bz2ErrorMessageForErrorCode: (NSInteger) inErrorCode {
  NSString * result = @"Unknown BZ2 Error" ;
  switch (inErrorCode) {
  case BZ_OK:
    result = @"" ;
    break ;
  case BZ_SEQUENCE_ERROR:
    result = @"BZ2 Sequence Error" ;
    break ;
  case BZ_PARAM_ERROR:
    result = @"BZ2 Parameter Error" ;
    break ;
  case BZ_MEM_ERROR:
    result = @"BZ2 Memory Error" ;
    break ;
  case BZ_DATA_ERROR:
    result = @"BZ2 Data Error" ;
    break ;
  case BZ_IO_ERROR:
    result = @"BZ2 I/O Error" ;
    break ;
  case BZ_UNEXPECTED_EOF:
    result = @"BZ2 Unexpected EOF Error" ;
    break ;
  case BZ_OUTBUFF_FULL:
    result = @"BZ2 Output Buffer Full Error" ;
    break ;
  case BZ_CONFIG_ERROR:
    result = @"BZ2 Configuration Error" ;
    break ;
  default:
    break ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

@end

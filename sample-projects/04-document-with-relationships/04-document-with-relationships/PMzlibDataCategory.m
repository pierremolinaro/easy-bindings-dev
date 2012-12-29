
#import "PMzlibDataCategory.h"

//---------------------------------------------------------------------------*

#include <zlib.h>

//---------------------------------------------------------------------------*

@implementation NSData (PMzlibDataCategory)

//---------------------------------------------------------------------------*

- (NSData *) zlibDecompressedDataWithEstimedExpansion: (NSUInteger) inEstimedExpansionFactor
             returnedErrorCode : (NSInteger *) outErrorPtr {
  const NSUInteger compressedDataLength = self.length ;
  UInt8 * compressedDataPointer = (UInt8 *) self.bytes ;
  NSUInteger estimedDecompressedDataLength = compressedDataLength ;
  if (inEstimedExpansionFactor > 1) {
    estimedDecompressedDataLength *= inEstimedExpansionFactor ;
  }
  NSInteger error ;
  NSUInteger decompressedDataLength ;
  UInt8 * decompressedBuffer = NULL ;
  do{
    free (decompressedBuffer) ;
    //NSLog (@"estimedDecompressedDataLength %u", estimedDecompressedDataLength) ;
    decompressedBuffer = malloc (estimedDecompressedDataLength) ;
    decompressedDataLength = estimedDecompressedDataLength ;
    error = uncompress (decompressedBuffer, & decompressedDataLength,
                       compressedDataPointer, compressedDataLength) ;
    estimedDecompressedDataLength *= 2 ;
  }while (error == Z_BUF_ERROR) ;
  NSData * result = nil ;
  if (error == Z_OK) {
    result  = [NSData dataWithBytes:decompressedBuffer length:decompressedDataLength] ;
  }
  if (outErrorPtr != NULL) {
    * outErrorPtr = error ;
  }
  free (decompressedBuffer) ; decompressedBuffer = NULL ;
  return result ;
}

//---------------------------------------------------------------------------*

- (NSData *) zlibCompressedDataWithCompressionFactor: (NSUInteger) inCompressionFactor
             returnedErrorCode : (NSInteger *) outErrorPtr {
  const NSUInteger sourceDataLength = self.length ;
  UInt8 * sourceDataPointer = (UInt8 *) self.bytes ;
  NSUInteger estimedCompressedDataLength = sourceDataLength + (sourceDataLength / 100) + (600 * 1024) ;
  NSInteger error ;
  NSUInteger compressedDataLength ;
  UInt8 * compressedBuffer = NULL ;
  do{
    free (compressedBuffer) ;
    compressedBuffer = malloc (estimedCompressedDataLength) ;
    compressedDataLength = estimedCompressedDataLength ;
    error = compress2 (compressedBuffer, & compressedDataLength,
                       sourceDataPointer, sourceDataLength,
                       (int) inCompressionFactor) ; // Work factor (0 = default)
    estimedCompressedDataLength *= 2 ;
  }while (error == Z_BUF_ERROR) ;
  NSData * result = nil ;
  if (error == Z_OK) {
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

+ (NSString *) zlibErrorMessageForErrorCode: (NSInteger) inErrorCode {
  NSString * result = @"Unknown ZLIB Error" ;
  switch (inErrorCode) {
  case Z_OK:
    result = @"" ;
    break ;
  case Z_ERRNO:
    result = @"ZLIB Unknown Error" ;
    break ;
  case Z_BUF_ERROR:
    result = @"ZLIB Buffer overflow Error" ;
    break ;
  case Z_STREAM_ERROR:
    result = @"ZLIB Stream Error" ;
    break ;
  case Z_MEM_ERROR:
    result = @"ZLIB Memory Error" ;
    break ;
  case Z_DATA_ERROR:
    result = @"ZLIB Data Error" ;
    break ;
  case Z_VERSION_ERROR:
    result = @"ZLIB Version Error" ;
    break ;
  default:
    break ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

@end

#import <Cocoa/Cocoa.h>

//---------------------------------------------------------------------------*

@interface NSData (PMzlibDataCategory)


- (NSData *) zlibDecompressedDataWithEstimedExpansion: (NSUInteger) inEstimedExpansionFactor
             returnedErrorCode : (NSInteger *) outErrorPtr ;

- (NSData *) zlibCompressedDataWithCompressionFactor: (NSUInteger) inCompressionFactor
             returnedErrorCode: (NSInteger *) outErrorPtr ;


+ (NSString *) zlibErrorMessageForErrorCode: (NSInteger) inErrorCode ;

@end

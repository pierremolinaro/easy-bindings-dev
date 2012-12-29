#import <Cocoa/Cocoa.h>

//---------------------------------------------------------------------------*

@interface NSData (PMbz2DataCategory)


- (NSData *) bz2DecompressedDataWithEstimedExpansion: (NSUInteger) inEstimedExpansionFactor
             returnedErrorCode : (NSInteger *) outErrorPtr ;

- (NSData *) bz2CompressedDataWithCompressionFactor: (NSInteger) inCompressionFactor
             returnedErrorCode: (NSInteger *) outErrorPtr ;


+ (NSString *) bz2ErrorMessageForErrorCode: (NSInteger) inErrorCode ;

@end

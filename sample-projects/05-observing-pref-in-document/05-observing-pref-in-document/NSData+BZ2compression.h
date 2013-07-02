//
//  NSData+BZ2compression.h
//  essai
//
//  Created by Pierre Molinaro on 30/06/13.
//  Copyright (c) 2013 ECN / IRCCyN. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSData (BZ2compression)

- (NSData *) bz2DecompressedDataWithEstimedExpansion: (NSUInteger) inEstimedExpansionFactor
             returnedErrorCode : (NSInteger *) outErrorPtr ;

- (NSData *) bz2CompressedDataWithCompressionFactor: (NSInteger) inCompressionFactor
             returnedErrorCode: (NSInteger *) outErrorPtr ;


+ (NSString *) bz2ErrorMessageForErrorCode: (NSInteger) inErrorCode ;

@end

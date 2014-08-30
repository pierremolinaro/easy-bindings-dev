//
//  NSData+PMBZ2compression.h
//  essai
//
//  Created by Pierre Molinaro on 30/06/13.
//  Copyright (c) 2013 ECN / IRCCyN. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSData (PMBZ2compression)

- (NSData *) zlibDecompressedDataWithEstimedExpansion: (NSUInteger) inEstimedExpansionFactor
             returnedErrorCode : (NSInteger *) outErrorPtr ;

- (NSData *) zlibCompressedDataWithCompressionFactor: (NSUInteger) inCompressionFactor
             returnedErrorCode: (NSInteger *) outErrorPtr ;


+ (NSString *) zlibErrorMessageForErrorCode: (NSInteger) inErrorCode ;


@end

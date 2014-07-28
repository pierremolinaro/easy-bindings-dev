//
//  PMManagedDocument.h
//  essai
//
//  Created by Pierre Molinaro on 28/06/13.
//  Copyright (c) 2013 ECN / IRCCyN. All rights reserved.
//
//---------------------------------------------------------------------------*

#import <Cocoa/Cocoa.h>

//---------------------------------------------------------------------------*

@class PMManagedObject ;
@class PMObjectManager ;

//---------------------------------------------------------------------------*

typedef enum : NSUInteger {
  PMDocumentNoCompression,
  PMDocumentBZ2Compression,
  PMDocumentZLIBCompression
} PMDocumentCompressionEnum ;

//---------------------------------------------------------------------------*

@interface PMManagedDocument : NSDocument {
  @private PMObjectManager * mEntityManager ;
  @protected PMManagedObject * mRootObject ;
  @private UInt8 mReadMetadataStatus ;
  @private NSDictionary * mReadMetadataDictionary ;
}

- (void) hookOfInit ;

- (Class) rootEntityClass ;

- (PMObjectManager *) entityManager ;

- (void) hookOfNewDocumentCreation ;

//--- Methods called during a save operation
- (void) hookOfWillSave ;

- (UInt8) metadataStatusForSaving ; // Returns 0 by default

- (NSDictionary *) metadataDictionaryForSaving ; // Returns an empty dictionary by default

- (PMDocumentCompressionEnum) compressDataOnSaving ; // Default: PMDocumentBZ2Compression

//--- Legacy format helper
@property (atomic)
   PMManagedObject * (* legacyFormatLoader) (NSData * inData,
                                             PMObjectManager * inManager,
                                             Class inRootEntityClass,
                                             NSError ** outError) ;

//--- Methods that can be called during document's life
- (UInt8) metadataStatusReadFromFile ; // 0 if document has been never saved

- (NSDictionary *) metadataDictionaryReadFromFile ; // nil if document has been never saved

//--- Metadata access
+ (UInt8) statusForFileAtPath: (NSString *) inFilePath
          error: (NSError **) outError ;

+ (NSDictionary *) metadataForFileAtPath: (NSString *) inFilePath
                   status: (UInt8 *) outStatus
                   error: (NSError **) outError ;

@end

//---------------------------------------------------------------------------*

//
//  PMBinaryFlatDocument.h
//
//  Created by Pierre Molinaro on 22/12/06.
//  Copyright Pierre Molinaro 2006 . All rights reserved.
//
//---------------------------------------------------------------------------*

#import "PMAbstractPersistentDocument.h"

//---------------------------------------------------------------------------*

typedef enum {
  PMBinaryFlatDocumentNoCompression,
  PMBinaryFlatDocumentBZ2Compression,
  PMBinaryFlatDocumentZLIBCompression
} PMBinaryFlatDocumentCompressionEnum ;

//---------------------------------------------------------------------------*

@interface PMBinaryFlatDocument : PMAbstractPersistentDocument {
  @private UInt8 mReadMetadataStatus ;
  @private NSDictionary * mReadMetadataDictionary ;
}

//--- Methods called during a save operation
- (UInt8) metadataStatusForSaving ; // Returns 0 by default

- (NSDictionary *) metadataDictionaryForSaving ; // Returns an empty dictionary by default

- (PMBinaryFlatDocumentCompressionEnum) compressDataOnSaving ; // Default: PMBinaryFlatDocumentBZ2Compression


//--- Methods that can be called during document's life
- (UInt8) metadataStatusReadFromFile ; // 0 if document has been never saved

- (NSDictionary *) metadataDictionaryReadFromFile ; // nil if document has been never saved

//---
+ (UInt8) statusForFileAtPath: (NSString *) inFilePath
          error: (NSError **) outError ;

+ (NSDictionary *) metadataForFileAtPath: (NSString *) inFilePath
                   status: (UInt8 *) outStatus
                   error: (NSError **) outError ;

+ (id) rootObjectWithEntityNamed: (NSString *) inRootEntityName
       fromFile: (NSString *) inFilePath
       usingManagedObjectContext: (NSManagedObjectContext *) inManagedObjectContext
       status: (UInt8 *) outStatus
       metadataDictionary: (NSDictionary **) outMetadataDictionary
       error: (NSError **) outError ;

+ (id) rootObjectWithEntityNamed: (NSString *) inRootEntityName
       fromFile: (NSString *) inFilePath
       status: (UInt8 *) outStatus
       metadataDictionary: (NSDictionary **) outMetadataDictionary
       error: (NSError **) outError ;

@end

//---------------------------------------------------------------------------*

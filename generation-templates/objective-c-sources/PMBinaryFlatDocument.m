//
//  PMBinaryFlatDocument.m
//  persistentDocumentAsPackage
//
//  Created by Pierre Molinaro on 22/12/06.
//  Copyright Pierre Molinaro 2006 . All rights reserved.
//
//---------------------------------------------------------------------------*

#import "PMBinaryFlatDocument.h"
#import "PMbz2DataCategory.h"
#import "PMzlibDataCategory.h"
#import "PMDataScanner.h"
#import "PMLoadedEntityDatabase.h"
#import "PMLoadedObjectDatabase.h"
#import "PMEmbeddedEntityDatabase.h"
#import "PMEmbeddedObjectDatabase.h"
#import "PMMutableDataWriteCategory.h"
#import "easy-bindings-utilities.h"
#import "PMAllocationDebug.h"
#import "PMManagedObject.h"

//---------------------------------------------------------------------------*

//#define EASY_BINDINGS_DEBUG

//---------------------------------------------------------------------------*

#include <unistd.h>

//---------------------------------------------------------------------------*

@implementation PMBinaryFlatDocument

//---------------------------------------------------------------------------*

#pragma mark Document Saving

//---------------------------------------------------------------------------*

- (NSDictionary *) metadataDictionaryForSaving {
  return [NSDictionary new] ;
}

//---------------------------------------------------------------------------*

- (UInt8) metadataStatusForSaving {
  return 0 ;
}

//---------------------------------------------------------------------------*

- (PMBinaryFlatDocumentCompressionEnum) compressDataOnSaving {
  return PMBinaryFlatDocumentBZ2Compression ;
}

//---------------------------------------------------------------------------*

- (NSData *) binaryDataForSaving {
  NSManagedObjectContext * moc = self.managedObjectContext ;
  [moc processPendingChanges] ;
  PMEmbeddedEntityDatabase * entityDatabase = [PMEmbeddedEntityDatabase new] ;
  PMEmbeddedObjectDatabase * objectDatabase = [PMEmbeddedObjectDatabase new] ;
  NSMutableString * trace = nil ; // [NSMutableString new] ;
//--- Recursively explore from root object
 [objectDatabase
    enterObject:self.rootObject
    withEmbeddedEntityDatabase:entityDatabase
  ] ;
//--- Write Entities
  NSMutableData * saveData = [NSMutableData new] ;
  [entityDatabase
    saveEntitiesToData:saveData
    trace:trace
  ] ;
//--- Write objects
  [objectDatabase
    saveObjectsToData:saveData
    trace:trace
    withEmbeddedEntityDatabase:entityDatabase
  ] ;
//---
  [moc.undoManager removeAllActions] ;
  [self updateDocumentEdition:nil] ;
//  NSLog (@"WRITE TRACE:\n%@", trace) ;
  return saveData ;
}

//---------------------------------------------------------------------------*

static const char * kFormatSignature = "PM-BINARY-FORMAT" ;

//---------------------------------------------------------------------------*

- (NSData *) dataOfType: (NSString *) inTypeName
             error:(NSError **) outError {
//---
  [self hookOfWillSave] ;
//--- Add to metadata dictionary the witdth and the height of main window
  NSMutableDictionary * metadataDictionary = self.metadataDictionaryForSaving.mutableCopy ;
  if (nil == metadataDictionary) {
    metadataDictionary = [NSMutableDictionary new] ;
  }
  if (nil != self.windowForSheet) { // Document has been opened in the user interface
    if ((self.windowForSheet.styleMask & NSResizableWindowMask) != 0) { // Only if window is resizable
      const NSSize windowSize = self.windowForSheet.frame.size ;
      [metadataDictionary setObject:[NSNumber numberWithDouble:windowSize.width] forKey:@"PMWindowWidth"] ;
      [metadataDictionary setObject:[NSNumber numberWithDouble:windowSize.height] forKey:@"PMWindowHeight"] ;
    }
  }else{ // Document has been opened in the user interface, use values read from file, if they exist
    NSDictionary * metadataDictionaryReadFromFile = self.metadataDictionaryReadFromFile ;
    NSNumber * v = [metadataDictionaryReadFromFile objectForKey:@"PMWindowWidth"] ;
    if (nil != v) {
      [metadataDictionary setObject:v forKey:@"PMWindowWidth"] ;
    }
    v = [metadataDictionaryReadFromFile objectForKey:@"PMWindowHeight"] ;
    if (nil != v) {
      [metadataDictionary setObject:v forKey:@"PMWindowHeight"] ;
    }
  }
//---
  NSMutableData * fileData = [NSMutableData new] ;
//--- Append signature
  [fileData appendBytes:kFormatSignature length:strlen (kFormatSignature)] ;
//--- Write status
  [fileData writeByte:[self metadataStatusForSaving] trace:nil] ;
//--- Append metadata dictionary
  NSData * data = [NSPropertyListSerialization
    dataFromPropertyList:metadataDictionary
    format:NSPropertyListBinaryFormat_v1_0
    errorDescription:nil
  ] ;
  [fileData writeByte:1 trace:nil] ;
  [fileData writeAutosizedData:data trace:nil] ;
//--- Append document data
  data = [self binaryDataForSaving] ;
  switch ([self compressDataOnSaving]) {
  case PMBinaryFlatDocumentBZ2Compression:
    data = [data bz2CompressedDataWithCompressionFactor:9 returnedErrorCode:nil] ;
    [fileData writeByte:2 trace:nil] ;
    [fileData writeAutosizedData:data trace:nil] ;
    break ;
  case PMBinaryFlatDocumentZLIBCompression:
    data = [data zlibCompressedDataWithCompressionFactor:9 returnedErrorCode:nil] ;
    [fileData writeByte:4 trace:nil] ;
    [fileData writeAutosizedData:data trace:nil] ;
    break ;
  default:
    [fileData writeByte:3 trace:nil] ;
    [fileData writeAutosizedData:data trace:nil] ;
    break ;
  }
//--- Append final byte
  [fileData writeByte:0 trace:nil] ;
//---
  return fileData ;
}

//---------------------------------------------------------------------------*

- (void) hookOfWillSave {
}

//---------------------------------------------------------------------------*

- (void) showWindows {
  if ((self.windowForSheet.styleMask & NSResizableWindowMask) != 0) { // Only if window is resizable
    NSDictionary * metadataDictionaryReadFromFile = self.metadataDictionaryReadFromFile ;
    NSNumber * windowWidthNumber = [metadataDictionaryReadFromFile objectForKey:@"PMWindowWidth"] ;
    NSNumber * windowHeightNumber = [metadataDictionaryReadFromFile objectForKey:@"PMWindowHeight"] ;
    if ((nil != windowWidthNumber) && (nil != windowHeightNumber)) {
      const NSSize newSize = {windowWidthNumber.doubleValue, windowHeightNumber.doubleValue} ;
      NSRect windowFrame = self.windowForSheet.frame ;
      windowFrame.size = newSize ;
      [self.windowForSheet setFrame:windowFrame display:YES] ;
    }
  }
//---
  [super showWindows] ;
}

//---------------------------------------------------------------------------*

#pragma mark Document Loading

//---------------------------------------------------------------------------*

+ (BOOL) loadFromBinaryData: (NSData *) inBinaryData
         usingManagedObjectContext: (NSManagedObjectContext *) inManagedObjectContext
         error: (NSError **) outError {
  NSError * error = nil ;
//---
  NSDictionary * readOptions = [NSDictionary
    dictionaryWithObject:[NSNumber numberWithBool:YES]
    forKey:NSIgnorePersistentStoreVersioningOption
  ] ;
  [[inManagedObjectContext persistentStoreCoordinator] 
    addPersistentStoreWithType:NSInMemoryStoreType
    configuration:nil
    URL:nil
    options:readOptions
    error:&error
  ] ;
//---
  if (nil == error) {
    NSMutableString * trace = [NSMutableString new] ;
    // @try{
  //--- Load data
    PMDataScanner * dataScanner = [PMDataScanner scannerWithData:inBinaryData displayProgressWindowTitle:nil] ;
  //--- Parse entity definitions
    PMLoadedEntityDatabase * loadedEntityDatabase = [[PMLoadedEntityDatabase alloc]
      initWithDataScanner:dataScanner
      trace: trace
      entityDictionary:inManagedObjectContext.persistentStoreCoordinator.managedObjectModel.entitiesByName
    ] ;
  //--- Parse object definitions
    [[inManagedObjectContext undoManager] disableUndoRegistration] ;
    [PMLoadedObjectDatabase
      loadWithDataScanner:dataScanner
      trace:trace
      withLoadedDatabase:loadedEntityDatabase
      managedObjectContext:inManagedObjectContext
    ] ;
    // }@catch (NSException * e) {
    //  NSLog (@"READ TRACE:\n%@", trace) ;
    //  @throw e ;
    // }
    [inManagedObjectContext processPendingChanges] ;
    [[inManagedObjectContext undoManager] enableUndoRegistration] ;
  }
//---
  if (NULL != outError) {
    * outError = error ;
  }
//---
  return nil == error ;
}

//---------------------------------------------------------------------------*

- (NSDictionary *) metadataDictionaryReadFromFile { // nil if document has been never saved
  return mReadMetadataDictionary.copy ;
}

//---------------------------------------------------------------------------*

- (UInt8) metadataStatusReadFromFile {
  return mReadMetadataStatus ;
}

//---------------------------------------------------------------------------*

- (BOOL) readFromData: (NSData *) inData
         ofType:(NSString *) inTypeName
         error:(NSError **) outError {
  #ifdef EASY_BINDINGS_DEBUG
    NSLog (@"PMBinaryFlatDocument <readFromData:'%lu' ofType:'%@'>", [inData length], inTypeName) ;
  #endif
//---- Define input data scanner
  PMDataScanner * dataScanner = [PMDataScanner
    scannerWithData:inData
    displayProgressWindowTitle:([inData length] > 30000) ? [[self lastComponentOfFileName] stringByDeletingPathExtension] : nil
  ] ;
//--- Check Signature
  for (NSUInteger i=0 ; i<strlen (kFormatSignature) ; i++) {
    [dataScanner acceptRequiredByte: (UInt8) kFormatSignature [i] sourceFile:__PRETTY_FUNCTION__] ;
  }
//--- Read Status
  mReadMetadataStatus = [dataScanner parseByte] ;
//--- if ok, check byte is 1
  [dataScanner acceptRequiredByte:1 sourceFile:__PRETTY_FUNCTION__] ;
//--- Read dictionary
  NSError * error = nil ;
  NSData * dictionaryData = [dataScanner parseAutosizedData] ;
  if (nil != dictionaryData) {
    mReadMetadataDictionary = [NSPropertyListSerialization
      propertyListWithData:dictionaryData
      options:NSPropertyListImmutable
      format:NULL
      error:& error
    ] ;
   //  NSLog (@"mReadMetadataDictionary %@", mReadMetadataDictionary) ;
  }
//--- Read dictionary
  if ([dataScanner testAcceptByte:3]) { // Not compressed
    NSData * data = [dataScanner parseAutosizedData] ;
    if (nil != data) {
      [PMBinaryFlatDocument loadFromBinaryData:data usingManagedObjectContext:self.managedObjectContext error: & error] ;
    }
  }else if ([dataScanner testAcceptByte:4]) { // ZLIB Compressed
    NSData * compressedData = [dataScanner parseAutosizedData] ;
    if (nil != compressedData) {
      NSData * data = [compressedData zlibDecompressedDataWithEstimedExpansion:10 returnedErrorCode:nil] ;
      [PMBinaryFlatDocument loadFromBinaryData:data usingManagedObjectContext:self.managedObjectContext error: & error] ;
    }
  }else{
    [dataScanner acceptRequiredByte:2 sourceFile:__PRETTY_FUNCTION__] ; // BZ2 compressed
    NSData * compressedData = [dataScanner parseAutosizedData] ;
    if (nil != compressedData) {
      NSData * data = [compressedData bz2DecompressedDataWithEstimedExpansion:10 returnedErrorCode:nil] ;
      [PMBinaryFlatDocument loadFromBinaryData:data usingManagedObjectContext:self.managedObjectContext error: & error] ;
    }
  }
//--- if ok, check final byte (0)
  [dataScanner acceptRequiredByte:0 sourceFile:__PRETTY_FUNCTION__] ;
//--- Scanner error ?
  if (! [dataScanner ok]) {
    NSDictionary * dictionary = [NSDictionary dictionaryWithObjectsAndKeys:
      @"Cannot Open Document",  NSLocalizedDescriptionKey,
      @"The file has an invalid format",  NSLocalizedRecoverySuggestionErrorKey,
      nil
    ] ;
    error = [[NSError alloc]
      initWithDomain:@"fr.ec-nantes.irccyn.molinaro.canari"
      code:1
      userInfo:dictionary
    ] ;
/*    [NSError
      canariErrorWithMessage:@"Cannot Open Document"
      informativeText:@"The file has an invalid format"
      error: & error
    ] ;*/
  }
//---
  [dataScanner orderOutProgressWindow] ;
  dataScanner = nil ;
//---
  if (NULL != outError) {
    * outError = error ;
  }
//---
  return nil == error ;
}

//---------------------------------------------------------------------------*

#pragma mark Close User Interface

//---------------------------------------------------------------------------*

#ifdef EASY_BINDINGS_DEBUG
  - (void) updateChangeCount: (NSDocumentChangeType) inChangeType {
    NSLog (@"%s%d>", __PRETTY_FUNCTION__, inChangeType) ;
    [super updateChangeCount:inChangeType] ;
  }
#endif

//---------------------------------------------------------------------------*

#pragma mark Get file metadata

//---------------------------------------------------------------------------*

+ (BOOL) badFormatErrorForFileAtPath: (NSString *) inFilePath
         error: (NSError **) outError {
/*  return [NSError
    canariErrorWithMessage:[NSString stringWithFormat:@"Cannot read '%@' file", inFilePath]
    informativeText:@"File does have the required format"
    error:outError
  ] ;*/
  NSDictionary * dictionary = [NSDictionary dictionaryWithObjectsAndKeys:
    [NSString stringWithFormat:@"Cannot read '%@' file", inFilePath],  NSLocalizedDescriptionKey,
    @"File does have the required format",  NSLocalizedRecoverySuggestionErrorKey,
    nil
  ] ;
  NSError * error = [[NSError alloc]
    initWithDomain:@"fr.ec-nantes.irccyn.molinaro.canari"
    code:1
    userInfo:dictionary
  ] ;
  if (nil != outError) {
    * outError = error ;
  }
  return NO ;
}

//---------------------------------------------------------------------------*

static UInt8 readByte (NSFileHandle * inFileHandle, NSString * inFilePath, NSError ** outError) {
  UInt8 byte = 0 ;
  NSError * error = nil ;
  NSData * byteData = [inFileHandle readDataOfLength:1] ;
  if ([byteData length] != 1) {
    [PMBinaryFlatDocument badFormatErrorForFileAtPath:inFilePath error: & error] ;
  }else{
    [byteData getBytes: & byte length:1] ;
  }
//---
  if (NULL != outError) {
    * outError = error ;
  }
  return byte ;
}

//---------------------------------------------------------------------------*

static NSUInteger readAutosizedUnsignedIntegerAtIndex (NSFileHandle * inFileHandle, NSString * inFilePath, NSError ** outError) {
  NSUInteger result = 0 ;
  NSUInteger shift = 0 ;
  NSError * error = nil ;
  BOOL done = NO ;
  do{
    const UInt8 byte = readByte (inFileHandle, inFilePath, & error) ;
    const NSUInteger w = byte & 0x7FU ;
    result |= w << shift ;
    shift += 7 ;
    done = (byte & 0x80) == 0 ;
  }while ((nil == error) && ! done) ;
//---
  if (NULL != outError) {
    * outError = error ;
  }
  return result ;
}

//---------------------------------------------------------------------------*

static NSData * readAutosizedDataAtIndex (NSFileHandle * inFileHandle, NSString * inFilePath, NSError ** outError) {
  NSError * error = nil ;
  const NSUInteger dataLength = readAutosizedUnsignedIntegerAtIndex (inFileHandle, inFilePath, & error) ;
//---
  NSData * result = nil ;
  if (nil == error) {
    result = [inFileHandle readDataOfLength:dataLength] ;
  }
//---
  if (NULL != outError) {
    * outError = error ;
  }
//---
  return result ;
}

//---------------------------------------------------------------------------*

+ (NSDictionary *) metadataForFileAtPath: (NSString *) inFilePath
                   status: (UInt8 *) outStatus
                   error: (NSError **) outError {
//--- Open file
  NSError * error = nil ;
  NSFileHandle * f = [NSFileHandle
    fileHandleForReadingFromURL:[NSURL fileURLWithPath:inFilePath]
    error: & error
  ] ;
//--- Read format string
  if (nil == error) {
    NSData * formatStringData = [f readDataOfLength:strlen (kFormatSignature)] ;
    if ([formatStringData length] != strlen (kFormatSignature)) {
      [PMBinaryFlatDocument badFormatErrorForFileAtPath:inFilePath error: & error] ;
    }else{
      UInt8 * bytes = (UInt8 *) [formatStringData bytes] ;
      if (memcmp (bytes, kFormatSignature, strlen (kFormatSignature)) != 0) {
        [PMBinaryFlatDocument badFormatErrorForFileAtPath:inFilePath error: & error] ;
      }
    }
  }
//--- Read status
  if (nil == error) {
    const UInt8 status = readByte (f, inFilePath, & error) ;
    if (NULL != outStatus) {
      * outStatus = status ;
    }
  }
//--- Check byte is 1
  if (nil == error) {
    const UInt8 byte = readByte (f, inFilePath, & error) ;
    if ((nil == error) && (1 != byte)) {
      [PMBinaryFlatDocument badFormatErrorForFileAtPath:inFilePath error: & error] ;
    }
  }
//--- Read metadata dictionary
  NSData * dictionaryData = nil ;
  if (nil == error) {
    dictionaryData = readAutosizedDataAtIndex (f, inFilePath, & error) ;
  }
  NSDictionary * metadataDictionaryForSaving  = nil ;
  if (nil == error) {
    metadataDictionaryForSaving = [NSPropertyListSerialization
      propertyListWithData:dictionaryData
      options:NSPropertyListImmutable
      format:NULL
      error:nil
    ] ;
  }
//---  
  [f closeFile] ;
//---
  if (NULL != outError) {
    * outError = error ;
  }
//---
  return metadataDictionaryForSaving ;
}

//---------------------------------------------------------------------------*

+ (UInt8) statusForFileAtPath: (NSString *) inFilePath
          error: (NSError **) outError {
//--- Open file
  NSError * error = nil ;
  NSFileHandle * f = [NSFileHandle
    fileHandleForReadingFromURL:[NSURL fileURLWithPath:inFilePath]
    error: & error
  ] ;
//--- Read format string
  if (nil == error) {
    NSData * formatStringData = [f readDataOfLength:strlen (kFormatSignature)] ;
    if ([formatStringData length] != strlen (kFormatSignature)) {
      [PMBinaryFlatDocument badFormatErrorForFileAtPath:inFilePath error: & error] ;
    }else{
      UInt8 * bytes = (UInt8 *) [formatStringData bytes] ;
      if (memcmp (bytes, kFormatSignature, strlen (kFormatSignature)) != 0) {
        [PMBinaryFlatDocument badFormatErrorForFileAtPath:inFilePath error: & error] ;
      }
    }
  }
//--- Read status
  UInt8 status = 0 ;
  if (nil == error) {
    NSData * statusData = [f readDataOfLength:1] ;
    if ([statusData length] != 1) {
      [PMBinaryFlatDocument badFormatErrorForFileAtPath:inFilePath error: & error] ;
    }else{
      [statusData getBytes: & status length:1] ;
    }
  }
//---  
  [f closeFile] ;
//---
  if (NULL != outError) {
    * outError = error ;
  }
//---
  return status ;
}

//---------------------------------------------------------------------------*

#pragma mark Load Data in MOC

//---------------------------------------------------------------------------*

+ (id) rootObjectWithEntityNamed: (NSString *) inRootEntityName
       fromFile: (NSString *) inFilePath
       usingManagedObjectContext: (NSManagedObjectContext *) inManagedObjectContext
       status: (UInt8 *) outStatus
       metadataDictionary: (NSDictionary **) outMetadataDictionary
       error: (NSError **) outError {
//--- Read file
  NSData * fileContents = nil ;
  NSError * error = nil ;
  if (nil == error) {
    fileContents = [NSData
      dataWithContentsOfFile:inFilePath
      options:NSDataReadingMapped
      error:& error
    ] ;
  }
//---- Define input data scanner
  PMDataScanner * dataScanner = nil ;
  if (nil == error) {
    dataScanner = [PMDataScanner scannerWithData:fileContents displayProgressWindowTitle:nil] ;
  }
//--- Check Signature
  for (NSUInteger i=0 ; i<strlen (kFormatSignature) ; i++) {
    [dataScanner acceptRequiredByte: (UInt8) kFormatSignature [i] sourceFile:__PRETTY_FUNCTION__] ;
  }
//--- Pass One byte of Status
  const UInt8 status = [dataScanner parseByte] ;
  if (NULL != outStatus) {
    * outStatus = status ;
  }
//--- Check byte is 1
  [dataScanner acceptRequiredByte:1 sourceFile:__PRETTY_FUNCTION__] ;
//--- Metadata dictionary
  if (NULL == outMetadataDictionary) {
    [dataScanner ignoreAutosizedData] ;
  }else{
    NSData * dictionaryData = [dataScanner parseAutosizedData] ;
    * outMetadataDictionary = [NSPropertyListSerialization
      propertyListWithData:dictionaryData
      options:NSPropertyListImmutable
      format:NULL
      error:& error
    ] ;
  }
//--- Read data
  if (nil == error) {
    if ([dataScanner testAcceptByte:3]) { // Not compressed
      NSData * data = [dataScanner parseAutosizedData] ;
      if (nil != data) {
        [PMBinaryFlatDocument loadFromBinaryData:data usingManagedObjectContext:inManagedObjectContext error:&error] ;
      }
    }else if ([dataScanner testAcceptByte:4]) { // ZLIB Compressed
      NSData * compressedData = [dataScanner parseAutosizedData] ;
      if (nil != compressedData) {
        NSData * data = [compressedData zlibDecompressedDataWithEstimedExpansion:10 returnedErrorCode:nil] ;
        [PMBinaryFlatDocument loadFromBinaryData:data usingManagedObjectContext:inManagedObjectContext error:&error] ;
      }
    }else{
      [dataScanner acceptRequiredByte:2 sourceFile:__PRETTY_FUNCTION__] ; // BZ2 compressed
      NSData * compressedData = [dataScanner parseAutosizedData] ;
      if (nil != compressedData) {
        NSData * data = [compressedData bz2DecompressedDataWithEstimedExpansion:10 returnedErrorCode:nil] ;
        [PMBinaryFlatDocument loadFromBinaryData:data usingManagedObjectContext:inManagedObjectContext error:&error] ;
      }
    }
  }
//--- Fetch root object
  id rootObject = nil ;
  if (nil == error) {
    NSFetchRequest * request = [NSFetchRequest new] ;
    [request setEntity:[NSEntityDescription entityForName:inRootEntityName inManagedObjectContext:inManagedObjectContext]] ;
    NSArray * fetchResult = nil ;
    if (nil == error) {
      fetchResult = [inManagedObjectContext executeFetchRequest:request error:& error] ;
    }
    if (nil == error) {
      if ([fetchResult count] == 1) {
        rootObject = [fetchResult objectAtIndex:0 HERE] ;
      }else{
        NSDictionary * dictionary = [NSDictionary dictionaryWithObjectsAndKeys:
          [NSString stringWithFormat:@"Cannot read '%@' file", inFilePath],  NSLocalizedDescriptionKey,
          @"File does not present one root object",  NSLocalizedRecoverySuggestionErrorKey,
          nil
        ] ;
        error = [[NSError alloc]
          initWithDomain:@"fr.ec-nantes.irccyn.molinaro.canari"
          code:1
          userInfo:dictionary
        ] ;
/*        [NSError
          canariErrorWithMessage:[NSString stringWithFormat:@"Cannot read '%@' file", inFilePath]
          informativeText:@"File does not present one root object"
          error:& error
        ] ;*/
      }
    }
  }
//---
  if (NULL != outError) {
    * outError = error ;
  }
  return rootObject ;
}

//---------------------------------------------------------------------------*

+ (id) rootObjectWithEntityNamed: (NSString *) inRootEntityName
       fromFile: (NSString *) inFilePath
       status: (UInt8 *) outStatus
       metadataDictionary: (NSDictionary **) outMetadataDictionary
       error: (NSError **) outError {
//--- Configure a temporary MOC
  NSManagedObjectContext * temporaryMOC = [NSManagedObjectContext new] ;
  NSManagedObjectModel * mom = [NSManagedObjectModel mergedModelFromBundles:nil] ;
  NSPersistentStoreCoordinator * coordinator = [[NSPersistentStoreCoordinator alloc] initWithManagedObjectModel:mom] ;
  NSDictionary * options = [NSDictionary dictionaryWithObjectsAndKeys:
    [NSNumber numberWithBool:YES], NSIgnorePersistentStoreVersioningOption,
    nil
  ] ;
  [coordinator
    addPersistentStoreWithType:NSInMemoryStoreType
    configuration:nil
    URL:nil
    options:options
    error:nil
  ] ;
  [temporaryMOC setPersistentStoreCoordinator:coordinator] ;
//---
  return [PMBinaryFlatDocument
    rootObjectWithEntityNamed:inRootEntityName
    fromFile:inFilePath
    usingManagedObjectContext:temporaryMOC
    status:outStatus
    metadataDictionary:outMetadataDictionary
    error:outError
  ] ;
}

//---------------------------------------------------------------------------*

@end

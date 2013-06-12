//
//  main.m
//  binary-flat-file-analyzer
//
//  Created by Pierre Molinaro on 31/12/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//
//----------------------------------------------------------------------------*

#import "PMDataScanner.h"
#import "PMbz2DataCategory.h"
#import "PMzlibDataCategory.h"
#import "PMLoadedEntityDatabase.h"
#import "PMLoadedObjectDatabase.h"

//---------------------------------------------------------------------------*

static void dumpData (NSData * inFileData) {
  printf ("------------------------------ File Data (%lu bytes)\n", inFileData.length) ;
  PMDataScanner * dataScanner = [PMDataScanner scannerWithData:inFileData] ;
//--- Parse entity definitions
  PMLoadedEntityDatabase * loadedEntityDatabase = [[PMLoadedEntityDatabase alloc]
    initWithDataScanner:dataScanner
  ] ;
//--- Parse object definitions
  [PMLoadedObjectDatabase
    loadWithDataScanner:dataScanner
    withLoadedDatabase:loadedEntityDatabase
  ] ;
}

//---------------------------------------------------------------------------*

static void dumpMetadataDictionary (NSDictionary * inMetadataDictionary) {
  printf ("------------------------------ Metadata Dictionary\n") ;
  NSData * data = [NSPropertyListSerialization
    dataWithPropertyList:inMetadataDictionary
    format:NSPropertyListXMLFormat_v1_0
    options:0
    error:nil
  ] ;
  NSString * s = [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding] ;
  printf ("%s", [s cStringUsingEncoding:NSUTF8StringEncoding]) ;
}

//---------------------------------------------------------------------------*

static const char * kFormatSignature = "PM-BINARY-FORMAT" ;

//----------------------------------------------------------------------------*

static void dumpFile (NSString * inFilePath) {
  printf ("Dumping '%s' file\n", [inFilePath cStringUsingEncoding:NSUTF8StringEncoding]) ;
  NSData * contents = [NSData dataWithContentsOfFile:inFilePath] ;
  printf ("Size: %lu bytes\n", contents.length) ;
  printf ("------------------------------ File contents\n") ;
  PMDataScanner * dataScanner = [PMDataScanner scannerWithData:contents] ;
//--- Check Signature
  [dataScanner
    acceptRequiredBytes: (UInt8 *) kFormatSignature
    length: strlen (kFormatSignature)
    message: @"Magic Tag"
  ] ;
//--- Read Status
  [dataScanner parseByteWithMessage:@"File Status"] ;
//--- if ok, check byte is 1
  [dataScanner acceptRequiredByte:1 withMessage:@"Required byte" sourceFile:__PRETTY_FUNCTION__] ;
//--- Read dictionary
  NSError * error = nil ;
  NSData * dictionaryData = [dataScanner parseAutosizedDataWithMessage:@"Metadata dictionary"] ;
  NSDictionary * metadataDictionary = nil ;
  if (nil != dictionaryData) {
    metadataDictionary = [NSPropertyListSerialization
      propertyListWithData:dictionaryData
      options:NSPropertyListImmutable
      format:NULL
      error:& error
    ] ;
   //  NSLog (@"mReadMetadataDictionary %@", mReadMetadataDictionary) ;
  }
//--- Read data
  NSData * fileData = nil ;
  if ([dataScanner testAcceptByte:3 withMessage:@"Data is not compressed"]) { // Not compressed
    fileData = [dataScanner parseAutosizedDataWithMessage:@"File Data"] ;
  }else if ([dataScanner testAcceptByte:4 withMessage:@"Data is compressed using ZLIB"]) { // ZLIB Compressed
    NSData * compressedData = [dataScanner parseAutosizedDataWithMessage:@"File Data"] ;
    if (nil != compressedData) {
      fileData = [compressedData zlibDecompressedDataWithEstimedExpansion:10 returnedErrorCode:nil] ;
    }
  }else{
    [dataScanner acceptRequiredByte:2 withMessage:@"Data is compressed using BZ2" sourceFile:__PRETTY_FUNCTION__] ; // BZ2 compressed
    NSData * compressedData = [dataScanner parseAutosizedDataWithMessage:@"File Data"] ;
    if (nil != compressedData) {
      fileData = [compressedData bz2DecompressedDataWithEstimedExpansion:10 returnedErrorCode:nil] ;
    }
  }
//--- if ok, check final byte (0)
  [dataScanner acceptRequiredByte:0 withMessage:@"End of file Mark" sourceFile:__PRETTY_FUNCTION__] ;
//------------------ Dump metadata dictionary
  dumpMetadataDictionary (metadataDictionary) ;
//------------------ Dump metadata dictionary
  dumpData (fileData) ;
//------------------
  printf ("------------------------------ END\n") ;
}

//----------------------------------------------------------------------------*

int main (int argc, const char * argv[]) {
/*  for (int i=0 ; i<argc ; i++) {
    printf ("Arg #%d: '%s'\n", i, argv [i]) ;
  }*/
  @autoreleasepool {
    if (argc == 2) {
      NSString * filePath = [NSString stringWithFormat:@"%s", argv[1]] ;
      dumpFile (filePath) ;
    }else{
      printf ("Usage %s file\n", argv[0]) ;
    }
  }
  return 0;
}

//----------------------------------------------------------------------------*

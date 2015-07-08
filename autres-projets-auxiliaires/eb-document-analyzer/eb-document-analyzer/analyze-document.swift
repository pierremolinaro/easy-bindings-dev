//
//  analyze-document.swift
//  eb-document-analyzer
//
//  Created by Pierre Molinaro on 08/07/2015.
//  Copyright © 2015 Pierre Molinaro. All rights reserved.
//
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

import Cocoa

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

private let kFormatSignature = "PM-BINARY-FORMAT"

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

func analyze (inFilePath : String, textView : NSTextView) throws {
//--- Read data
  let fileData = try NSData (contentsOfFile:inFilePath, options: NSDataReadingOptions.DataReadingMappedIfSafe)
//---- Show window
  textView.window?.title = inFilePath.lastPathComponent
  textView.window?.makeKeyAndOrderFront (nil)
//---- Clear result
  textView.string = ""
  textView.appendMessageString ("File: \(inFilePath)\n")
  textView.appendMessageString ("Size: \(fileData.length) bytes\n")
  textView.appendMessageString ("------------------------------ File contents\n")
//---- Define input data scanner
  var dataScanner = DataScanner (data:fileData)
//--- Check Signature
  dataScanner.printAddress (textView)
  for c in kFormatSignature.utf8 {
    textView.appendByte (c)
    dataScanner.acceptRequiredByte (c, sourceFile:__FUNCTION__)
  }
  textView.appendMessageString (" | Magic tag\n")
//--- Read Status
  dataScanner.printAddress (textView)
  let meadMetadataStatus = dataScanner.parseByte ()
  textView.appendByte (meadMetadataStatus)
  textView.appendMessageString (" | Status\n")
//--- if ok, check byte is 1
  dataScanner.printAddress (textView)
  dataScanner.acceptRequiredByte (1, sourceFile:__FUNCTION__)
  textView.appendByte (1)
  textView.appendMessageString (" | Required byte\n")
//--- Read metadata dictionary
  let dictionaryData = dataScanner.parseAutosizedData (textView, lengthComment:"Metadata dictionary length", dataComment:"Metadata dictionary")
//--- Read data format
  dataScanner.printAddress (textView)
  let dataFormat = dataScanner.parseByte ()
  textView.appendByte (dataFormat)
  switch dataFormat {
  case 2 :
    textView.appendMessageString (" | Legacy BZ2-compressed format\n")
  case 6 :
    textView.appendMessageString (" | Array of dictionaries format\n")
  default:
    textView.appendErrorString (" | Unknown data format\n")
  }
//--- Read data
  let data = dataScanner.parseAutosizedData (textView, lengthComment:"Encoded data length", dataComment:"Encoded data")
/*    BOOL legacyDataWithoutConverterError = NO ;
  if ([dataScanner testAcceptByte:3]) { // Legacy data, not compressed
    NSData * data = [dataScanner parseAutosizedData] ;
    if (NULL == legacyFormatLoader) {
      data = nil ;
      legacyDataWithoutConverterError = YES ;
    }else if (nil != data) {
      mRootObject = legacyFormatLoader (data, self.entityManager, self.rootEntityClass, & error) ;
    }
  }else if ([dataScanner testAcceptByte:4]) { // Legacy data, ZLIB Compressed
    NSData * compressedData = [dataScanner parseAutosizedData] ;
    NSData * data = nil ;
    if (nil != compressedData) {
       data = [compressedData zlibDecompressedDataWithEstimedExpansion:10 returnedErrorCode:nil] ;
    }
    if (NULL == legacyFormatLoader) {
      legacyDataWithoutConverterError = YES ;
      data = nil ;
    }else if (nil != data) {
      mRootObject = legacyFormatLoader (data, self.entityManager, self.rootEntityClass, & error) ;
    }
  }else if ([dataScanner testAcceptByte:2]) { // Legacy data, BZ2 compressed
    NSData * compressedData = [dataScanner parseAutosizedData] ;
    NSData * data = nil ;
    if (nil != compressedData) {
      data = [compressedData bz2DecompressedDataWithEstimedExpansion:10 returnedErrorCode:nil] ;
    }
    if (NULL == legacyFormatLoader) {
      legacyDataWithoutConverterError = YES ;
      data = nil ;
    }else if (nil != data) {
      mRootObject = legacyFormatLoader (data, self.entityManager, self.rootEntityClass, & error) ;
    }
  }else if ([dataScanner testAcceptByte:6]) { // Not compressed
    NSData * data = [dataScanner parseAutosizedData] ;
    if (nil != data) {
      mRootObject = [mEntityManager readFromData:data withRootEntityClass:self.rootEntityClass] ;
      macroRetain (mRootObject) ;
    }
  }else if ([dataScanner testAcceptByte:7]) { // ZLIB Compressed
    NSData * compressedData = [dataScanner parseAutosizedData] ;
    if (nil != compressedData) {
      NSData * data = [compressedData zlibDecompressedDataWithEstimedExpansion:10 returnedErrorCode:nil] ;
      mRootObject = [mEntityManager readFromData:data withRootEntityClass:self.rootEntityClass] ;
      macroRetain (mRootObject) ;
    }
  }else{
    [dataScanner acceptRequiredByte:5 sourceFile:__FUNCTION__] ; // BZ2 compressed
    NSData * compressedData = [dataScanner parseAutosizedData] ;
    if (nil != compressedData) {
      NSData * data = [compressedData bz2DecompressedDataWithEstimedExpansion:10 returnedErrorCode:nil] ;
      mRootObject = [mEntityManager readFromData:data withRootEntityClass:self.rootEntityClass] ;
      macroRetain (mRootObject) ;
    }
  }*/
//--- if ok, check final byte (0)
  dataScanner.printAddress (textView)
  dataScanner.acceptRequiredByte (0, sourceFile:__FUNCTION__)
  textView.appendByte (0)
  textView.appendSuccessString (" | End of file\n")
//--- Display metadata dictionary
  textView.appendMessageString ("------------------------------ Metadata dictionary\n")
  let metadataDictionary = try NSPropertyListSerialization.propertyListWithData (dictionaryData,
    options:NSPropertyListReadOptions.Immutable,
    format:nil
  ) as! NSDictionary
  textView.appendMessageString (String (format:"%@\n", metadataDictionary))
//--- Display data
  switch dataFormat {
  case 6 :
    textView.appendMessageString ("------------------------------ Data in array of dictionaries format\n")
    let dataArray = try NSPropertyListSerialization.propertyListWithData (data,
      options:NSPropertyListReadOptions.Immutable,
      format:nil
    ) as! NSArray
    textView.appendMessageString (String (format:"%@\n", dataArray))
  default:
    analyzeLegacyBZ2Data (data, textView:textView)
    break
  }
//--- END
  textView.appendMessageString ("------------------------------ Analysis completed\n")
}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

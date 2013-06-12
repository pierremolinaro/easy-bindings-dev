//
//  PMLoadedObjectDatabase.m
//  canari
//
//  Created by Pierre Molinaro on 09/11/07.
//  Copyright 2007 __MyCompanyName__. All rights reserved.
//
//---------------------------------------------------------------------------*

#import "PMLoadedObjectDatabase.h"
#import "PMDataScanner.h"
#import "PMLoadedEntityDatabase.h"

#define EASY_BINDINGS_DEBUG

//---------------------------------------------------------------------------*

@implementation PMLoadedObjectDatabase

//---------------------------------------------------------------------------*

+ (void) scanObjectIndex: (NSUInteger) inObjectIndex
         dataScanner: (PMDataScanner *) inDataScanner
         withLoadedDatabase: (PMLoadedEntityDatabase *) inLoadedEntityDatabase {
//--- 'start of object attribute' mark
  [inDataScanner acceptRequiredByte:0x03 withMessage:[NSString stringWithFormat:@"Start of #%lu Object Attribute Values", inObjectIndex] sourceFile:__PRETTY_FUNCTION__] ;
//--- Entity index
  const NSUInteger entityIndex = [inDataScanner parseAutosizedUnsignedIntegerWithMessage:@"Entity Index"] ;
//--- Create new object
  NSString * entityName = [inLoadedEntityDatabase entityNameForIndex:entityIndex] ;
  printf ("      --> entity Name: '%s'\n", [entityName cStringUsingEncoding:NSUTF8StringEncoding]) ;
//--- Entity attribute name list, ordered by name
  NSArray * sortedAttributeNames = [inLoadedEntityDatabase sortedAttributeNamesForEntityOfIndex:entityIndex] ;
//--- Parse attributes and relationship values
  NSUInteger propertyIndex = 0 ;
  BOOL loop = YES ;
  while (loop && [inDataScanner ok]) {
    NSString * key = [sortedAttributeNames objectAtIndex:propertyIndex] ;
    propertyIndex ++ ;
    if ([inDataScanner testAcceptByte:0xFF withMessage:[NSString stringWithFormat:@"No value for '%@'", key]]) { // nil
 
    }else if ([inDataScanner testAcceptByte:0xFE withMessage:[NSString stringWithFormat:@"Unsigned Integer Mark for '%@'", key]]) { // positive signed integer
      /*const UInt64 value = */ [inDataScanner parseAutosizedUnsignedIntegerWithMessage:@"Value"] ;
    }else if ([inDataScanner testAcceptByte:0xFD withMessage:[NSString stringWithFormat:@"Negative Integer Mark for '%@'", key]]) { // negative signed integer
      /*const UInt64 value = */ [inDataScanner parseAutosizedUnsignedIntegerWithMessage:@"Value to Negate"] ;
    }else if ([inDataScanner testAcceptByte:0x09 withMessage:[NSString stringWithFormat:@"String Mark for '%@'", key]]) { // String
     [inDataScanner parseAutosizedStringWithMessage:@"Value"] ;
    }else if ([inDataScanner testAcceptByte:0x0A withMessage:[NSString stringWithFormat:@"Boolean NO for '%@'", key]]) { // False
    }else if ([inDataScanner testAcceptByte:0x0B withMessage:[NSString stringWithFormat:@"Boolean YES for '%@'", key]]) { // True
    }else if ([inDataScanner testAcceptByte:0x0C withMessage:[NSString stringWithFormat:@"Float Mark for '%@'", key]]) { // Float
      [inDataScanner parseAutosizedDataWithMessage:@"Float value"] ;
    }else if ([inDataScanner testAcceptByte:0x0D withMessage:[NSString stringWithFormat:@"Double Mark for '%@'", key]]) { // Double
      [inDataScanner parseAutosizedDataWithMessage:@"Double Value"] ;
    }else if ([inDataScanner testAcceptByte:0x0E withMessage:[NSString stringWithFormat:@"Date Mark for '%@'", key]]) { // Date
      [inDataScanner parseAutosizedDataWithMessage:@"Date value"] ;
    }else if ([inDataScanner testAcceptByte:0x0F withMessage:[NSString stringWithFormat:@"Binary Data Mark for '%@'", key]]) { // Binary Data
      [inDataScanner parseAutosizedDataWithMessage:@"Data Value"] ;
    }else if ([inDataScanner testAcceptByte:0x10 withMessage:[NSString stringWithFormat:@"Decimal Mark for '%@'", key]]) { // Decimal
      [inDataScanner parseAutosizedDataWithMessage:@"Decimal Value"] ;
    }else if ([inDataScanner testAcceptByte:0x11 withMessage:[NSString stringWithFormat:@"Transfomable Attribute Mark for '%@'", key]]) { // Decimal
      [inDataScanner parseAutosizedDataWithMessage:@"Value as binary data"] ;
    }else{
      [inDataScanner acceptRequiredByte:0x00 withMessage:[NSString stringWithFormat:@"End of #%lu Object Attribute Values\n", inObjectIndex] sourceFile:__PRETTY_FUNCTION__] ;
      loop = NO ;
    }
  }
}

//---------------------------------------------------------------------------*

+ (void) scanRelationshipForObjectIndex: (NSUInteger) inObjectIndex
         withDataScanner: (PMDataScanner *) inDataScanner
         withLoadedDatabase: (PMLoadedEntityDatabase *) inLoadedEntityDatabase {
//--- 'start of object relationship' mark
  [inDataScanner acceptRequiredByte:0x04 withMessage:[NSString stringWithFormat:@"Start of #%lu Object Relationships", inObjectIndex] sourceFile:__PRETTY_FUNCTION__] ;
//--- Entity Index
  const NSUInteger entityIndex = [inDataScanner parseAutosizedUnsignedIntegerWithMessage:@"Entity Index"] ;
//--- Build attribute array
  NSArray * relationshipDescriptionArray = [inLoadedEntityDatabase sortedRelationshipNamesForEntityOfIndex:entityIndex] ;
//--- Parse relationship values
  NSUInteger relationshipIndex = 0 ;
  BOOL loop = YES ;
  while (loop && [inDataScanner ok]) {
    NSString * key = [relationshipDescriptionArray objectAtIndex:relationshipIndex] ;
    relationshipIndex ++ ;
    if ([inDataScanner testAcceptByte:0xFF withMessage:[NSString stringWithFormat:@"'%@' -> nil", key]]) { // nil
    }else if ([inDataScanner testAcceptByte:0x01 withMessage:[NSString stringWithFormat:@"'%@' -> To one value", key]]) {
      [inDataScanner parseAutosizedUnsignedIntegerWithMessage:@"Destination object index"] ;
    }else if ([inDataScanner testAcceptByte:0x02 withMessage:[NSString stringWithFormat:@"'%@' -> To Many value", key]]) {
      const NSUInteger objectCount = [inDataScanner parseAutosizedUnsignedIntegerWithMessage:@"Destination object count"] ;
      for (NSUInteger i=0 ; i<objectCount ; i++) {
        [inDataScanner parseAutosizedUnsignedIntegerWithMessage:@"Object index"] ;
      }
    }else{
      [inDataScanner acceptRequiredByte:0x00 withMessage:[NSString stringWithFormat:@"End of #%lu Object Relationships\n", inObjectIndex] sourceFile:__PRETTY_FUNCTION__] ;
      loop = NO ;
    }
  }
}

//---------------------------------------------------------------------------*

+ (void) loadWithDataScanner: (PMDataScanner *) inDataScanner
         withLoadedDatabase: (PMLoadedEntityDatabase *) inLoadedEntityDatabase {
//------------------------ 'Object count' mark
  [inDataScanner acceptRequiredByte:0x02 sourceFile:__PRETTY_FUNCTION__] ;
//------------------------ Get object count 
  const NSUInteger objectCount = [inDataScanner parseAutosizedUnsignedInteger] ;
//------------------------ Parse object attributes
  for (NSUInteger i=0 ; (i<objectCount)&& [inDataScanner ok] ; i++) {
    [PMLoadedObjectDatabase
      scanObjectIndex:i
      dataScanner:inDataScanner
      withLoadedDatabase:inLoadedEntityDatabase
    ] ;
  }
//------------------------ Parse object relation
  for (NSUInteger i=0 ; (i<objectCount)&& [inDataScanner ok] ; i++) {
    [PMLoadedObjectDatabase
      scanRelationshipForObjectIndex:i
      withDataScanner:inDataScanner
      withLoadedDatabase:inLoadedEntityDatabase
    ] ;
  }
//------------------------ 'End of file' mark
  [inDataScanner acceptRequiredByte:0x05 sourceFile:__PRETTY_FUNCTION__] ;
}

//---------------------------------------------------------------------------*

@end

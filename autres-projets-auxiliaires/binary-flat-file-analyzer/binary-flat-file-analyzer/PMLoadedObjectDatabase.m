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
  [inDataScanner acceptRequiredByte:0x03 withMessage:[NSString stringWithFormat:@"Start of #%lu Object Attribute Values", inObjectIndex]] ;
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
      NSNumber * numberString = [NSUnarchiver unarchiveObjectWithData:[inDataScanner parseAutosizedData]] ;
      const double value = [numberString doubleValue] ; 
      if ([key length] > 0) {

      }
    }else if ([inDataScanner testAcceptByte:0x0D withMessage:[NSString stringWithFormat:@"Double Mark for '%@'", key]]) { // Double
      NSNumber * numberString = [NSUnarchiver unarchiveObjectWithData:[inDataScanner parseAutosizedData]] ;
      const double value = [numberString doubleValue] ;
      if ([key length] > 0) {

      }
    }else if ([inDataScanner testAcceptByte:0x0E withMessage:[NSString stringWithFormat:@"Date Mark for '%@'", key]]) { // Date
      NSDate * date = [NSUnarchiver unarchiveObjectWithData:[inDataScanner parseAutosizedData]] ;
      // [ioTrace appendFormat:@"  Date '%@'", dateString) ;
      if ([key length] > 0) {

      }
    }else if ([inDataScanner testAcceptByte:0x0F withMessage:[NSString stringWithFormat:@"Binary Data Mark for '%@'", key]]) { // Binary Data
      NSData * data = [inDataScanner parseAutosizedData] ;
      // [ioTrace appendFormat:@"  Data '%@'\n", data) ;
      if ([key length] > 0) {

      }
    }else if ([inDataScanner testAcceptByte:0x10 withMessage:[NSString stringWithFormat:@"Decimal Mark for '%@'", key]]) { // Decimal
      NSDecimalNumber * decimalNumber = [NSUnarchiver unarchiveObjectWithData:[inDataScanner parseAutosizedData]] ;
      if ([key length] > 0) {

      }
    }else{
      [inDataScanner acceptRequiredByte:0x00 withMessage:[NSString stringWithFormat:@"End of #%lu Object Attribute Values\n", inObjectIndex]] ;
      loop = NO ;
    }
  }
}

//---------------------------------------------------------------------------*

+ (void) scanRelationshipForObjectIndex: (NSUInteger *) inObjectIndex
         withDataScanner: (PMDataScanner *) inDataScanner
         withLoadedDatabase: (PMLoadedEntityDatabase *) inLoadedEntityDatabase {
//--- 'start of object relationship' mark
  [inDataScanner acceptRequiredByte:0x04] ;
//--- Entity Index
  const NSUInteger entityIndex = [inDataScanner parseAutosizedUnsignedInteger] ;
//--- Build attribute array
  NSArray * relationshipDescriptionArray = [inLoadedEntityDatabase sortedRelationshipNamesForEntityOfIndex:entityIndex] ;
//--- Parse relationship values
  NSUInteger relationshipIndex = 0 ;
  BOOL loop = YES ;
  while (loop && [inDataScanner ok]) {
    NSString * key = [relationshipDescriptionArray objectAtIndex:relationshipIndex] ;
    relationshipIndex ++ ;
    if ([inDataScanner testAcceptByte:0xFF]) { // nil
    }else if ([inDataScanner testAcceptByte:0x01]) { // To-one relationship object
      const NSUInteger destinationObjectIndex = [inDataScanner parseAutosizedUnsignedInteger] ;
 //    NSManagedObject * destinationObject = [inLoadedObjectArray objectAtIndex:destinationObjectIndex] ;
      if ([key length] > 0) {

      }
    }else if ([inDataScanner testAcceptByte:0x02]) { // To-many relationship object
      const NSUInteger objectCount = [inDataScanner parseAutosizedUnsignedInteger] ;
      NSMutableSet * destinationSet = [NSMutableSet setWithCapacity:objectCount] ;
      for (NSUInteger i=0 ; i<objectCount ; i++) {
        const NSUInteger destinationObjectIndex = [inDataScanner parseAutosizedUnsignedInteger] ;

      }
      if ([key length] > 0) {

      }
    }else{
      [inDataScanner acceptRequiredByte:0x00] ;
      loop = NO ;
    }
  }
}

//---------------------------------------------------------------------------*

+ (void) loadWithDataScanner: (PMDataScanner *) inDataScanner
         withLoadedDatabase: (PMLoadedEntityDatabase *) inLoadedEntityDatabase {
//------------------------ 'Object count' mark
  [inDataScanner acceptRequiredByte:0x02] ;
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
  [inDataScanner acceptRequiredByte:0x05] ;
}

//---------------------------------------------------------------------------*

@end

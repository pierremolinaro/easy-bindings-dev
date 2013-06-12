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
#import "PMManagedObject.h"
#import "PMAllocationDebug.h"
#import "easy-bindings-utilities.h"

#define EASY_BINDINGS_DEBUG

//---------------------------------------------------------------------------*

@implementation PMLoadedObjectDatabase

//---------------------------------------------------------------------------*

+ (PMManagedObject *) scanObjectDataScanner: (PMDataScanner *) inDataScanner
                      trace: (NSMutableString *) ioTrace
                      withLoadedDatabase: (PMLoadedEntityDatabase *) inLoadedEntityDatabase
                      managedObjectContext: (NSManagedObjectContext *) inManagedObjectContext {
//--- 'start of object attribute' mark
  [inDataScanner acceptRequiredByte:0x03 sourceFile:__PRETTY_FUNCTION__] ;
//--- Entity index
  const NSUInteger entityIndex = [inDataScanner parseAutosizedUnsignedInteger] ;
//--- Create new object
  NSString * entityName = [inLoadedEntityDatabase entityNameForIndex:entityIndex] ;
  PMManagedObject * newObject = [NSEntityDescription
    insertNewObjectForEntityForName:entityName
    inManagedObjectContext:inManagedObjectContext
  ] ;
  [ioTrace appendFormat:@"Object of entity named '%@' (#%lu)\n", entityName, entityIndex] ;
//--- Entity attribute name list, ordered by name
  NSArray * sortedAttributeNames = [inLoadedEntityDatabase sortedAttributeNamesForEntityOfIndex:entityIndex] ;
//--- Parse attributes and relationship values
  NSUInteger propertyIndex = 0 ;
  BOOL loop = YES ;
  while (loop && [inDataScanner ok]) {
    NSString * key = [sortedAttributeNames objectAtIndex:propertyIndex HERE OFCLASS (NSString)] ;
    propertyIndex ++ ;
    if ([inDataScanner testAcceptByte:0xFF]) { // nil
      if ([key length] > 0) {
          [ioTrace appendFormat:@"  attribute '%@': nil\n", key] ;
      }
    }else if ([inDataScanner testAcceptByte:0xFE]) { // positive signed integer
      const UInt64 value = [inDataScanner parseAutosizedUnsignedInteger] ;
      if ([key length] > 0) {
        [newObject setValue:[NSNumber numberWithUnsignedLongLong:value] forKey:key] ;
        [ioTrace appendFormat:@"  attribute '%@': number %@\n", key, [NSNumber numberWithUnsignedLongLong:value]] ;
      }
    }else if ([inDataScanner testAcceptByte:0xFD]) { // negative signed integer
      const SInt64 value = (SInt64) [inDataScanner parseAutosizedUnsignedInteger] ;
      if ([key length] > 0) {
        [newObject setValue:[NSNumber numberWithLongLong: - value] forKey:key] ;
        [ioTrace appendFormat:@"  attribute '%@': number %@\n", key, [NSNumber numberWithLongLong: - value]] ;
      }
    }else if ([inDataScanner testAcceptByte:0x09]) { // String
      NSString * s = [inDataScanner parseAutosizedString] ;
      if ([key length] > 0) {
        [newObject setValue:s forKey:key] ;
        [ioTrace appendFormat:@"  attribute '%@': string '%@'\n", key, s] ;
      }
    }else if ([inDataScanner testAcceptByte:0x0A]) { // False
      if ([key length] > 0) {
        [newObject setValue:[NSNumber numberWithBool:NO] forKey:key] ;
        [ioTrace appendFormat:@"  attribute '%@': NO\n", key] ;
      }
    }else if ([inDataScanner testAcceptByte:0x0B]) { // True
      if ([key length] > 0) {
        [newObject setValue:[NSNumber numberWithBool:YES] forKey:key] ;
        [ioTrace appendFormat:@"  attribute '%@': YES\n", key] ;
      }
    }else if ([inDataScanner testAcceptByte:0x0C]) { // Float
      NSNumber * numberString = [NSUnarchiver unarchiveObjectWithData:[inDataScanner parseAutosizedData]] ;
      const double value = [numberString doubleValue] ; 
      if ([key length] > 0) {
        [newObject setValue:[NSNumber numberWithDouble:value] forKey:key] ;
        [ioTrace appendFormat:@"  attribute '%@': float -> double %@\n", key, [NSNumber numberWithDouble:value]] ;
      }
    }else if ([inDataScanner testAcceptByte:0x0D]) { // Double
      NSNumber * numberString = [NSUnarchiver unarchiveObjectWithData:[inDataScanner parseAutosizedData]] ;
      const double value = [numberString doubleValue] ;
      if ([key length] > 0) {
        [newObject setValue:[NSNumber numberWithDouble:value] forKey:key] ;
        [ioTrace appendFormat:@"  attribute '%@': double %@\n", key, [NSNumber numberWithDouble:value]] ;
      }
    }else if ([inDataScanner testAcceptByte:0x0E]) { // Date
      NSDate * date = [NSUnarchiver unarchiveObjectWithData:[inDataScanner parseAutosizedData]] ;
      // [ioTrace appendFormat:@"  Date '%@'", dateString) ;
      if ([key length] > 0) {
        [newObject setValue:date forKey:key] ;
        [ioTrace appendFormat:@"  attribute '%@': date '%@'\n", key, date] ;
      }
    }else if ([inDataScanner testAcceptByte:0x0F]) { // Binary Data
      NSData * data = [inDataScanner parseAutosizedData] ;
      // [ioTrace appendFormat:@"  Data '%@'\n", data) ;
      if ([key length] > 0) {
        [newObject setValue:data forKey:key] ;
        [ioTrace appendFormat:@"  attribute '%@': data (%lu bytes)\n", key, [data length]] ;
      }
    }else if ([inDataScanner testAcceptByte:0x10]) { // Decimal
      NSDecimalNumber * decimalNumber = [NSUnarchiver unarchiveObjectWithData:[inDataScanner parseAutosizedData]] ;
      if ([key length] > 0) {
        [newObject setValue:decimalNumber forKey:key] ;
        [ioTrace appendFormat:@"  attribute '%@': decimal %@\n", key, decimalNumber] ;
      }
    }else if ([inDataScanner testAcceptByte:0x11]) { // Archived data
      id value = [NSUnarchiver unarchiveObjectWithData:[inDataScanner parseAutosizedData]] ;
      if ([key length] > 0) {
        [newObject setValue:value forKey:key] ;
        [ioTrace appendFormat:@"  attribute '%@': archived value %@\n", key, value] ;
      }
    }else{
      [inDataScanner acceptRequiredByte:0x00 sourceFile:__PRETTY_FUNCTION__] ;
      loop = NO ;
    }
  }
  return newObject ;
}

//---------------------------------------------------------------------------*

+ (void) scanRelationshipForObject: (NSManagedObject *) inObject
         trace: (NSMutableString *) ioTrace
         withLoadedObjectArray: (NSArray *) inLoadedObjectArray // Object NSManagedObject
         withDataScanner: (PMDataScanner *) inDataScanner
         withLoadedDatabase: (PMLoadedEntityDatabase *) inLoadedEntityDatabase {
//--- 'start of object relationship' mark
  [inDataScanner acceptRequiredByte:0x04 sourceFile:__PRETTY_FUNCTION__] ;
//--- Entity Index
  const NSUInteger entityIndex = [inDataScanner parseAutosizedUnsignedInteger] ;
  [ioTrace appendFormat:@"Object of entity #%lu\n", entityIndex] ;
//--- Build attribute array
  NSArray * relationshipDescriptionArray = [inLoadedEntityDatabase sortedRelationshipNamesForEntityOfIndex:entityIndex] ;
//--- Parse relationship values
  NSUInteger relationshipIndex = 0 ;
  BOOL loop = YES ;
  while (loop && [inDataScanner ok]) {
    NSString * key = [relationshipDescriptionArray objectAtIndex:relationshipIndex HERE OFCLASS (NSString)] ;
    relationshipIndex ++ ;
    if ([inDataScanner testAcceptByte:0xFF]) { // nil
      [ioTrace appendFormat:@"  relationship '%@': nil\n", key] ;
    }else if ([inDataScanner testAcceptByte:0x01]) { // To-one relationship object
      const NSUInteger destinationObjectIndex = [inDataScanner parseAutosizedUnsignedInteger] ;
      NSManagedObject * destinationObject = [inLoadedObjectArray objectAtIndex:destinationObjectIndex HERE OFCLASS (NSManagedObject)] ;
      if ([key length] > 0) {
        [inObject setValue:destinationObject forKey:key] ;
        [ioTrace appendFormat:@"  to-one relationship '%@' : object #%lu\n", key, destinationObjectIndex] ;
      }
    }else if ([inDataScanner testAcceptByte:0x02]) { // To-many relationship object
      const NSUInteger objectCount = [inDataScanner parseAutosizedUnsignedInteger] ;
      NSMutableSet * destinationSet = [NSMutableSet setWithCapacity:objectCount] ;
      for (NSUInteger i=0 ; i<objectCount ; i++) {
        const NSUInteger destinationObjectIndex = [inDataScanner parseAutosizedUnsignedInteger] ;
        NSManagedObject * destinationObject = [inLoadedObjectArray objectAtIndex:destinationObjectIndex HERE OFCLASS (NSManagedObject)] ;
        if (destinationObject == nil) {
          [ioTrace appendFormat:@"destinationObject nil for object #%lu\n", destinationObjectIndex] ;
        }else{
          [destinationSet addObject:destinationObject HERE] ;
        }
      }
      if ([key length] > 0) {
        [inObject setValue:destinationSet forKey:key] ;
        [ioTrace appendFormat:@"  to-many relationship '%@' : %lu objects\n", key, [destinationSet count]] ;
      }
    }else{
      [inDataScanner acceptRequiredByte:0x00 sourceFile:__PRETTY_FUNCTION__] ;
      loop = NO ;
    }
  }
}

//---------------------------------------------------------------------------*

+ (void) loadWithDataScanner: (PMDataScanner *) inDataScanner
         trace: (NSMutableString *) ioTrace
         withLoadedDatabase: (PMLoadedEntityDatabase *) inLoadedEntityDatabase
         managedObjectContext: (NSManagedObjectContext *) inManagedObjectContext {
  NSMutableArray * loadedObjectArray = [NSMutableArray new] ;
//------------------------ 'Object count' mark
  [inDataScanner acceptRequiredByte:0x02 sourceFile:__PRETTY_FUNCTION__] ;
//------------------------ Get object count 
  const NSUInteger objectCount = [inDataScanner parseAutosizedUnsignedInteger] ;
//------------------------ Parse object attributes
  for (NSUInteger i=0 ; (i<objectCount)&& [inDataScanner ok] ; i++) {
    NSManagedObject * newObject = [PMLoadedObjectDatabase
      scanObjectDataScanner:inDataScanner
      trace:ioTrace
      withLoadedDatabase:inLoadedEntityDatabase
      managedObjectContext:inManagedObjectContext
    ] ;
    [loadedObjectArray addObject:newObject] ;
  }
//------------------------ Parse object relation
  for (NSUInteger i=0 ; (i<objectCount)&& [inDataScanner ok] ; i++) {
    NSManagedObject * object = [loadedObjectArray objectAtIndex:i HERE OFCLASS (NSManagedObject)] ;
    [PMLoadedObjectDatabase
      scanRelationshipForObject:object
      trace:ioTrace
      withLoadedObjectArray:loadedObjectArray
      withDataScanner:inDataScanner
      withLoadedDatabase:inLoadedEntityDatabase
    ] ;
  }
//------------------------ 'End of file' mark
  [inDataScanner acceptRequiredByte:0x05 sourceFile:__PRETTY_FUNCTION__] ;
//------------------------ Set Order field
  NSUInteger order = 0 ;
  for (PMManagedObject * object in loadedObjectArray) {
 //   object.mObjectIndexForLoadingAndSaving = order ;
    order ++ ;
  }
  macroReleaseSetToNil (loadedObjectArray) ;
}

//---------------------------------------------------------------------------*

@end

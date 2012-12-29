//
//  PMEmbeddedObjectDatabase.m
//  canari
//
//  Created by Pierre Molinaro on 09/11/07.
//  Copyright 2007 __MyCompanyName__. All rights reserved.
//

#import "PMEmbeddedObjectDatabase.h"
#import "PMEmbeddedEntityDatabase.h"
#import "PMMutableDataWriteCategory.h"
#import "PMManagedObject.h"
#import "PMAllocationDebug.h"

//#define EASY_BINDINGS_DEBUG

//---------------------------------------------------------------------------*


@implementation PMEmbeddedObjectDatabase

//---------------------------------------------------------------------------*

- (id) init {
  self = [super init] ;
  if (self) {
    macroNoteObjectAllocation (self) ;
  //--- Enter super entity 
    mDictionary = [NSMutableDictionary new] ;
    mObjectArray = [NSMutableArray new] ;
  }
  return self ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//                           dealloc                             *
//                                                                           *
//---------------------------------------------------------------------------*

#ifdef PM_COCOA_DEBUG
  - (void) dealloc {
    macroNoteObjectDeallocation (self) ;
  }
#endif

//---------------------------------------------------------------------------*

- (void) enterObject: (NSManagedObject *) inObject
         withEmbeddedEntityDatabase: (PMEmbeddedEntityDatabase *) ioEmbeddedEntityDatabase {
  NSValue * key = [NSValue valueWithNonretainedObject:inObject] ;
  NSNumber * indexNumber = [mDictionary objectForKey:key] ;
  if (indexNumber == nil) {
  //--- First enter object entity in entity database
    [ioEmbeddedEntityDatabase enterEntity:[inObject entity]] ;
  //--- Enter object
    const NSUInteger objectIndex = [mDictionary count] ;
    indexNumber = [NSNumber numberWithUnsignedInteger:objectIndex] ;
    [mDictionary setObject:indexNumber forKey:key] ;
    [mObjectArray addObject:inObject] ;
  //--- Enumerate relationships
    NSDictionary * relationshipsByName = [[inObject entity] relationshipsByName] ;
    NSArray * relationshipNames = [relationshipsByName allKeys] ;
    for (NSString * relationshipName in relationshipNames) {
      id value = [inObject valueForKey:relationshipName] ;
      if (value != nil) {
        NSRelationshipDescription * rsd = [relationshipsByName objectForKey:relationshipName] ;
        if ([rsd isToMany]) {
          for (NSManagedObject * object in value) {
            [self
              enterObject:object
              withEmbeddedEntityDatabase:ioEmbeddedEntityDatabase
            ] ;
          }
        }else{
          [self
            enterObject:value
            withEmbeddedEntityDatabase:ioEmbeddedEntityDatabase
          ] ;
        }
      }
    }
  }
}

//---------------------------------------------------------------------------*

- (NSUInteger) indexOfObject: (NSManagedObject *) inObject {
  NSValue * key = [NSValue valueWithNonretainedObject:inObject] ;
  NSNumber * indexNumber = [mDictionary objectForKey:key] ;
  if (indexNumber == nil) {
    NSLog (@"ERROR: UNKNOWN object '%p'", inObject) ;
  }
  return [indexNumber unsignedIntegerValue] ;
}

//---------------------------------------------------------------------------*

- (void) saveObjectsToData: (NSMutableData *) ioData
         trace: (NSMutableString *) ioTrace
         withEmbeddedEntityDatabase: (PMEmbeddedEntityDatabase *) inEmbeddedEntityDatabase {
//--- Write object count
  [ioData writeByte:0x02 trace:ioTrace] ;
  [ioTrace appendString:@"Start of data mark\n"] ;
  [ioData writeAutosizedUnsigned:[mObjectArray count] trace:ioTrace] ;
  [ioTrace appendFormat:@"Data Count: %lu\n", [mObjectArray count]] ;
//--- Sort objects
  [mObjectArray sortUsingSelector:@selector (compareByCreationField:)] ;
//--- Write creation field and rebuild object dictionary
  mDictionary = [NSMutableDictionary new] ;  // Key : NSValue of NSManagedObject, object : index (NSNumber)
  NSUInteger creationFieldValue = 0 ;
  for (PMManagedObject * object in mObjectArray) {
    object.mObjectIndexForLoadingAndSaving = creationFieldValue ;
    [mDictionary
      setObject:[NSNumber numberWithUnsignedInteger:creationFieldValue]
      forKey:[NSValue valueWithNonretainedObject:object]
    ] ;
    creationFieldValue ++ ;
  }
//-------------------------- Write objects attributes
  NSUInteger idx = 0 ;
  for (NSManagedObject * object in mObjectArray) {
  //--- Get entity index
    NSEntityDescription * coreDataEntity = [object entity] ;
    const NSUInteger entityIndex = [inEmbeddedEntityDatabase
      indexOfCoreDataEntity:coreDataEntity
    ] ;
  //--- Write 'Object Attributes Definition' Mark
    [ioData writeByte:0x03 trace:ioTrace] ;
    [ioTrace appendFormat:@"Start of #%lu object attributes mark\n", idx] ;
  //--- Write Entity Index
    [ioData writeAutosizedUnsigned:entityIndex trace:ioTrace] ;
    [ioTrace appendFormat:@"Entity Index: %lu -> '%@'\n", entityIndex, [coreDataEntity name]] ;
  //--- Save object attributes
    NSDictionary * attributesByName = [coreDataEntity attributesByName] ;
    NSArray * sortedAttributeNames = [[attributesByName allKeys] sortedArrayUsingSelector:@selector (compare:)] ;
    for (NSString * attributeName in sortedAttributeNames) {
      NSAttributeDescription * attributeDescription = [attributesByName objectForKey:attributeName] ;
      if (! [attributeDescription isTransient]) {
        id value = [object valueForKey:attributeName] ;
        NSAttributeType attributeType = [attributeDescription attributeType] ;
        switch (attributeType) {
        case NSInteger16AttributeType:
          [ioData writePrefixedSigned:value trace:ioTrace] ;
          [ioTrace appendFormat:@"NSInteger16AttributeType: '%@'\n", value] ;
          break ;
        case NSInteger32AttributeType:
          [ioData writePrefixedSigned:value trace:ioTrace] ;
          [ioTrace appendFormat:@"NSInteger32AttributeType: '%@'\n", value] ;
          break ;
        case NSInteger64AttributeType:
          [ioData writePrefixedSigned:value trace:ioTrace] ;
          [ioTrace appendFormat:@"NSInteger64AttributeType: '%@'\n", value] ;
          break ;
        case NSDecimalAttributeType:
          [ioData writePrefixedDecimal:value trace:ioTrace] ;
          [ioTrace appendFormat:@"NSDecimalAttributeType: '%@'\n", value] ;
          break ;
        case NSDoubleAttributeType:
          [ioData writePrefixedDouble:value trace:ioTrace] ;
          [ioTrace appendFormat:@"NSDoubleAttributeType: '%@'\n", value] ;
          break ;
        case NSFloatAttributeType:
          [ioData writePrefixedFloat:value trace:ioTrace] ;
          [ioTrace appendFormat:@"NSFloatAttributeType: '%@'\n", value] ;
          break ;
        case NSStringAttributeType:
          [ioData writePrefixedString:value trace:ioTrace] ;
          [ioTrace appendFormat:@"NSStringAttributeType: '%@'\n", value] ;
          break ;
        case NSBooleanAttributeType:
          [ioData writePrefixedBool:value trace:ioTrace] ;
          [ioTrace appendFormat:@"NSBooleanAttributeType: '%@'\n", value] ;
          break ;
        case NSDateAttributeType:
          [ioData writePrefixedDate:value trace:ioTrace] ;
          [ioTrace appendFormat:@"NSDateAttributeType: '%@'\n", value] ;
          break ;
        case NSBinaryDataAttributeType:
          [ioData writePrefixedBinaryData:value trace:ioTrace] ;
          [ioTrace appendFormat:@"NSBinaryDataAttributeType: %lu bytes\n", [value length]] ;
          break ;
        default: NSLog (@"Error: unknown attribute type (%lld)", (SInt64) attributeType) ; break ;
        }
      }
    }
    [ioData writeByte:0x00 trace:ioTrace] ; // End of Object Definition Mark
    [ioTrace appendFormat:@"End of #%lu object attributes mark\n", idx] ;
    idx ++ ;
  }
//------------------------------------- Save relationships
  idx = 0 ;
  for (NSManagedObject * object in mObjectArray) {
   //--- Write 'Object Relationship Definition' Mark
    [ioData writeByte:0x04 trace:ioTrace] ;
    [ioTrace appendFormat:@"Start of #%lu object relationships mark\n", idx] ;
  //--- Get entity index
    NSEntityDescription * coreDataEntity = [object entity] ;
    const NSUInteger entityIndex = [inEmbeddedEntityDatabase
      indexOfCoreDataEntity:coreDataEntity
    ] ;
  //--- Write Entity Index
    [ioData writeAutosizedUnsigned:entityIndex trace:ioTrace] ;
    [ioTrace appendFormat:@"Entity Index:%lu -> '%@'\n", entityIndex, [coreDataEntity name]] ;
  //--- Save object relationships
    NSDictionary * relationshipsByName = [coreDataEntity relationshipsByName] ;
    NSArray * sortedRelationshipNames = [[relationshipsByName allKeys] sortedArrayUsingSelector:@selector (compare:)] ;
    for (NSString * relationshipName in sortedRelationshipNames) {
      NSRelationshipDescription * rsd = [relationshipsByName objectForKey:relationshipName] ;
      if (! [rsd isTransient]) {
        id value = [object valueForKey:relationshipName] ;
        if ([rsd isToMany]) {
          NSSet * valueSet = value ;
          if ([valueSet count] == 0) {
            [ioData writeByte:0xFF trace:ioTrace code:'Z'] ;
            [ioTrace appendFormat:@"To-many '%@' relationship is nil\n", relationshipName] ;
          }else{
            [ioData writeByte:0x02 trace:ioTrace code:'M'] ;
            [ioTrace appendFormat:@"To-many '%@' relationship has objects\n", relationshipName] ;
            [ioData writeAutosizedUnsigned:[valueSet count] trace:ioTrace] ;
            [ioTrace appendFormat:@"%lu objects\n", [valueSet count]] ;
            NSArray * sortedObjectArray = [[valueSet allObjects] sortedArrayUsingSelector:@selector (compareByCreationField:)] ;
            NSUInteger objectIdx = 0 ;
            for (NSManagedObject * destinationObject in sortedObjectArray) {
              const NSUInteger destinationObjectIndex = [self indexOfObject:destinationObject] ;
              [ioData writeAutosizedUnsigned:destinationObjectIndex trace:ioTrace] ;
              [ioTrace appendFormat:@"%lu: object has index %lu\n", objectIdx, destinationObjectIndex] ;
              objectIdx ++ ;
            }
          }
        }else if (value == nil) { // To-one relationship is nil
          [ioData writeByte:0xFF trace:ioTrace code:'Z'] ;
          [ioTrace appendFormat:@"To-one '%@' relationship is nil\n", relationshipName] ;
        }else{
          [ioData writeByte:0x01 trace:ioTrace code:'Z'] ;
          [ioTrace appendFormat:@"To-one '%@' relationship has object\n", relationshipName] ;
          const NSUInteger destinationObjectIndex = [self indexOfObject:value] ;
          [ioData writeAutosizedUnsigned:destinationObjectIndex trace:ioTrace] ;
          [ioTrace appendFormat:@"object hasindex %lu\n", destinationObjectIndex] ;
        }
      }
    }
    [ioData writeByte:0x00 trace:ioTrace] ; // End of Object Definition Mark
    [ioTrace appendFormat:@"End of #%lu object relationships mark\n", idx] ;
    idx ++ ;
  }
  [ioData writeByte:0x05 trace:ioTrace] ; // 'End of file' mark
  [ioTrace appendString:@"End of file mark\n"] ;
}


//---------------------------------------------------------------------------*

@end

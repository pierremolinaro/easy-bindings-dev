//
//  PMEmbeddedEntityDatabase.m
//  canari
//
//  Created by Pierre Molinaro on 09/11/07.
//  Copyright 2007 __MyCompanyName__. All rights reserved.
//
//---------------------------------------------------------------------------*

#import "PMEmbeddedEntityDatabase.h"
#import "PMMutableDataWriteCategory.h"
#import "easy-bindings-utilities.h"
#import "PMAllocationDebug.h"

//#define EASY_BINDINGS_DEBUG

//---------------------------------------------------------------------------*

@implementation PMEmbeddedEntityDatabase

//---------------------------------------------------------------------------*

- (instancetype) init {
  self = [super init] ;
  if (self) {
    macroNoteObjectAllocation ;
  //--- Enter super entity 
    mDictionary = [NSMutableDictionary new] ;
    mEmbeddedEntityArray = [NSMutableArray new] ;
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
    macroNoteObjectDeallocation ;
    macroSuperDealloc ;
  }
#endif

//---------------------------------------------------------------------------*

- (void) enterEntity: (NSEntityDescription *) inCoreDataEntity {
  if (nil == inCoreDataEntity) {
		NSLog (@"inCoreDataEntity is nil in %s", __PRETTY_FUNCTION__) ;
  }
  NSValue * key = [NSValue valueWithNonretainedObject:inCoreDataEntity] ;
//--- First, if entity is not already entered, enter super entity.
  if (nil == [mDictionary objectForKey:key]) {
    NSEntityDescription * superEntity = [inCoreDataEntity superentity] ;
    if (nil != superEntity) {
      [self enterEntity:superEntity] ;
    }
  }
//--- If it does not exist, enter entity. Entering super entity may have entered this entity, by side effect
  if (nil == [mDictionary objectForKey:key]) {
    const NSUInteger indexValue = [mDictionary count] ;
    #ifdef EASY_BINDINGS_DEBUG
      NSLog (@"ENTER ENTITY '%@' at index %lu", [inCoreDataEntity name], indexValue) ;
    #endif
    NSNumber * indexNumber = [NSNumber numberWithUnsignedInteger:indexValue] ;
    [mDictionary setObject:indexNumber forKey:key] ;
    [mEmbeddedEntityArray addObject:inCoreDataEntity] ;
  //--- Now, explore relationships to get other useful entities
    NSDictionary * relationshipsByName = [inCoreDataEntity relationshipsByName] ;
    NSArray * sortedRelationshipNames = [[relationshipsByName allKeys] sortedArrayUsingSelector:@selector (compare:)] ;
    for (NSString * relationshipName in sortedRelationshipNames) {
      NSRelationshipDescription * rsd = [relationshipsByName objectForKey:relationshipName] ;
      NSEntityDescription * destinationEntity = [rsd destinationEntity] ;
      [self enterEntity:destinationEntity] ;
    }
  }
}

//---------------------------------------------------------------------------*

- (NSUInteger) indexOfCoreDataEntity: (NSEntityDescription *) inCoreDataEntity {
  NSValue * key = [NSValue valueWithNonretainedObject:inCoreDataEntity] ;
  NSNumber * indexNumber = [mDictionary objectForKey:key] ;
  if (indexNumber == nil) {
    NSLog (@"ERROR: UNKNOWN entity named '%@'", [inCoreDataEntity name]) ;
  }
  return [indexNumber unsignedIntegerValue] ;
}

//---------------------------------------------------------------------------*

- (void) saveEntitiesToData: (NSMutableData *) ioData
         trace:(NSMutableString *) ioTrace {
//--- Write entity count
  [ioData writeAutosizedUnsigned:[mEmbeddedEntityArray count] trace:ioTrace] ;
  [ioTrace appendFormat:@"%lu entities\n", [mEmbeddedEntityArray count]] ;
//--- Write entities
  for (NSUInteger entityIdx=0 ; entityIdx<[mEmbeddedEntityArray count] ; entityIdx++) {
    NSEntityDescription * coreDataEntity = [mEmbeddedEntityArray objectAtIndex:entityIdx HERE OFCLASS (NSEntityDescription)] ;
  //--- Write 'Entity Definition' Mark
    [ioData writeByte:0xBA trace:ioTrace] ;
    [ioTrace appendFormat:@"Start of %lu Entity Mark\n", entityIdx] ;
  //--- Write Entity Name
    [ioData writeAutosizedString:[coreDataEntity name] trace:ioTrace] ;
    [ioTrace appendFormat:@"Entity Name: '%@'\n", [coreDataEntity name]] ;
    #ifdef EASY_BINDINGS_DEBUG
      NSLog (@"Entity #%lu, '%@'", entityIdx, [coreDataEntity name]) ;
    #endif 
  //--- Write super entity index (if any)
    NSEntityDescription * superEntity = [coreDataEntity superentity] ;
    if (superEntity == nil) {
      [ioData writeByte:0xFF trace:ioTrace] ;
      [ioTrace appendFormat:@"No super Entity\n"] ;
    }else{
      [ioData writeByte:0xFE trace:ioTrace] ;
      [ioTrace appendFormat:@"Entity has super Entity\n"] ;
      const NSUInteger superEntityIndex = [self
        indexOfCoreDataEntity:superEntity
      ] ;
      [ioData writeAutosizedUnsigned:superEntityIndex trace:ioTrace] ;
      [ioTrace appendFormat:@"Super Entity Index: %lu -> '%@'\n", superEntityIndex, [superEntity name]] ;
      #ifdef EASY_BINDINGS_DEBUG
        NSLog (@"  Super entity %lu", superEntityIndex) ;
      #endif 
    }
  //---
    NSDictionary * attributesByName = [coreDataEntity attributesByName] ;
    NSArray * attributeNames = [[attributesByName allKeys] sortedArrayUsingSelector:@selector (compare:)] ;
  //--- Write attributes: code byte, then attribute name
    for (NSString * attributeName in attributeNames) {
      NSAttributeDescription * attributeDescription = [attributesByName objectForKey:attributeName] ;
      if (! [attributeDescription isTransient]) {
        NSAttributeType attributeType = [attributeDescription attributeType] ;
        switch (attributeType) {
        case NSInteger16AttributeType :
          [ioData writeByte:0x01 trace:ioTrace] ;
          [ioTrace appendFormat:@"Attribute Type: NSInteger16AttributeType\n"] ;
          #ifdef EASY_BINDINGS_DEBUG
            NSLog (@" Attribute '%@', NSInteger16AttributeType", attributeName) ;
          #endif 
          break ;
        case NSInteger32AttributeType :
          [ioData writeByte:0x02 trace:ioTrace] ;
          [ioTrace appendFormat:@"Attribute Type: NSInteger32AttributeType\n"] ;
          #ifdef EASY_BINDINGS_DEBUG
            NSLog (@" Attribute '%@', NSInteger32AttributeType", attributeName) ;
          #endif 
          break ;
        case NSInteger64AttributeType :
          [ioData writeByte:0x03 trace:ioTrace] ;
          [ioTrace appendFormat:@"Attribute Type: NSInteger64AttributeType\n"] ;
          #ifdef EASY_BINDINGS_DEBUG
            NSLog (@" Attribute '%@', NSInteger64AttributeType", attributeName) ;
          #endif 
          break ;
        case NSDecimalAttributeType   :
          [ioData writeByte:0x04 trace:ioTrace] ;
          [ioTrace appendFormat:@"Attribute Type: NSDecimalAttributeType\n"] ;
           #ifdef EASY_BINDINGS_DEBUG
            NSLog (@" Attribute '%@', NSDecimalAttributeType", attributeName) ;
          #endif 
         break ;
        case NSDoubleAttributeType    :
          [ioData writeByte:0x05 trace:ioTrace] ;
          [ioTrace appendFormat:@"Attribute Type: NSDoubleAttributeType\n"] ;
          #ifdef EASY_BINDINGS_DEBUG
            NSLog (@" Attribute '%@', NSDoubleAttributeType", attributeName) ;
          #endif 
          break ;
        case NSFloatAttributeType     :
          [ioData writeByte:0x06 trace:ioTrace] ;
          [ioTrace appendFormat:@"Attribute Type: NSFloatAttributeType\n"] ;
          #ifdef EASY_BINDINGS_DEBUG
            NSLog (@" Attribute '%@', NSFloatAttributeType", attributeName) ;
          #endif 
          break ;
        case NSStringAttributeType    :
          [ioData writeByte:0x07 trace:ioTrace] ;
          [ioTrace appendFormat:@"Attribute Type: NSStringAttributeType\n"] ;
          #ifdef EASY_BINDINGS_DEBUG
            NSLog (@" Attribute '%@', NSStringAttributeType", attributeName) ;
          #endif 
          break ;
        case NSBooleanAttributeType   :
          [ioData writeByte:0x08 trace:ioTrace] ;
          [ioTrace appendFormat:@"Attribute Type: NSBooleanAttributeType\n"] ;
          #ifdef EASY_BINDINGS_DEBUG
            NSLog (@" Attribute '%@', NSBooleanAttributeType", attributeName) ;
          #endif 
          break ;
        case NSDateAttributeType      :
          [ioData writeByte:0x09 trace:ioTrace] ;
          [ioTrace appendFormat:@"Attribute Type: NSDateAttributeType\n"] ;
        #ifdef EASY_BINDINGS_DEBUG
            NSLog (@" Attribute '%@', NSDateAttributeType", attributeName) ;
          #endif 
          break ;
        case NSBinaryDataAttributeType:
          [ioData writeByte:0x0A trace:ioTrace] ;
          [ioTrace appendFormat:@"Attribute Type: NSBinaryDataAttributeType\n"] ;
          #ifdef EASY_BINDINGS_DEBUG
            NSLog (@" Attribute '%@', NSBinaryDataAttributeType", attributeName) ;
          #endif 
          break ;
        case NSTransformableAttributeType:
          [ioData writeByte:0x0D trace:ioTrace] ;
          [ioTrace appendFormat:@"Attribute Type: NSTransformableAttributeType\n"] ;
          #ifdef EASY_BINDINGS_DEBUG
            NSLog (@" Attribute '%@', NSTransformableAttributeType", attributeName) ;
          #endif 
          break ;
        default:
          NSLog (@"%s, unknow attribute type (%lld)", __PRETTY_FUNCTION__, (SInt64) attributeType) ;
          break ;
        }
        [ioData writeAutosizedString:attributeName trace:ioTrace] ;
        [ioTrace appendFormat:@"Attribute Name: '%@'\n", attributeName] ;
      }
    }
  //--- Write relationships
    NSDictionary * relationshipsByName = [coreDataEntity relationshipsByName] ;
    NSArray * relationshipNames = [[relationshipsByName allKeys] sortedArrayUsingSelector:@selector (compare:)] ;
    for (NSString * relationshipName in relationshipNames) {
      NSRelationshipDescription * rsd = [relationshipsByName objectForKey:relationshipName] ;
      if (! [rsd isTransient]) {
        [ioData writeByte:[rsd isToMany] ? 0x0C : 0x0B trace:ioTrace] ;
        [ioTrace appendFormat:@"%@ Relationship\n", [rsd isToMany] ? @"To-many" : @"To-one"] ;
        NSEntityDescription * destinationEntity = [rsd destinationEntity] ;
        const NSUInteger destinationEntityIndex = [self
          indexOfCoreDataEntity:destinationEntity
        ] ;
        [ioData writeAutosizedUnsigned:destinationEntityIndex trace:ioTrace] ;
        [ioTrace appendFormat:@"Destination Entity: %lu -> '%@'\n", destinationEntityIndex, [destinationEntity name]] ;
        [ioData writeAutosizedString:relationshipName trace:ioTrace] ;
        [ioTrace appendFormat:@"Relationship Name: '%@'\n", relationshipName] ;
      }
    }
    [ioData writeByte:0x00 trace:ioTrace] ; // 'End of Entity Definition' Mark
    [ioTrace appendFormat:@"End of Entity Definition Mark\n"] ;
  }
}

//---------------------------------------------------------------------------*

@end

//
//  PMLoadedEntityDatabase.m
//  canari
//
//  Created by Pierre Molinaro on 09/11/07.
//  Copyright 2007 __MyCompanyName__. All rights reserved.
//
//---------------------------------------------------------------------------*

#import "PMLoadedEntityDatabase.h"
#import "PMDataScanner.h"
#import "PMLoadedEntityDescription.h"

#define EASY_BINDINGS_DEBUG

//---------------------------------------------------------------------------*

@implementation PMLoadedEntityDatabase

//---------------------------------------------------------------------------*

- (id) initWithDataScanner: (PMDataScanner *) inDataScanner {
  self = [super init] ;
  if (self) {
  //---
    mLoadedEntityArray = [NSMutableArray new] ;
  //--- Get entity count 
    const NSUInteger entityCount = [inDataScanner parseAutosizedUnsignedIntegerWithMessage:@"Entity Count"] ;
    for (NSUInteger i=0 ; (i<entityCount) && [inDataScanner ok] ; i++) {
    //--- 'Start of Entity' mark
      [inDataScanner acceptRequiredByte:0xBA withMessage:[NSString stringWithFormat:@"Start of #%lu Entity Mark", i]] ;
    //--- Entity Name
      NSString * entityName = [inDataScanner parseAutosizedStringWithMessage:@"Entity Name"] ;
      PMLoadedEntityDescription * loadedSuperEntity = nil ;
      if ([inDataScanner testAcceptByte:0xFE withMessage:@"Super Entity Mark"]) { // Has a super entity
        const NSUInteger superEntityIndex = [inDataScanner parseAutosizedUnsignedIntegerWithMessage:@"Super Entity Index"] ;
        loadedSuperEntity = [mLoadedEntityArray objectAtIndex:superEntityIndex] ;
      }else{ // No super entity
        [inDataScanner acceptRequiredByte:0xFF withMessage:@"No Super Entity Mark"] ;
      }
    //--- Parse attributes and relationship definitions
      NSMutableArray * entityAttributeArray = [NSMutableArray new] ;
      NSMutableArray * entityRelationshipArray = [NSMutableArray new] ;
      BOOL loop = YES ;
      while (loop && [inDataScanner ok]) {
        if ([inDataScanner testAcceptByte:0x01 withMessage:@"NSInteger16AttributeType Mark"]) {
          NSString * attributeName = [inDataScanner parseAutosizedStringWithMessage:@"Attribute Name"] ;
          [entityAttributeArray addObject:attributeName] ;
        }else if ([inDataScanner testAcceptByte:0x02 withMessage:@"NSInteger32AttributeType Mark"]) {
          NSString * attributeName = [inDataScanner parseAutosizedStringWithMessage:@"Attribute Name"] ;
          [entityAttributeArray addObject:attributeName] ;
        }else if ([inDataScanner testAcceptByte:0x03 withMessage:@"NSInteger64AttributeType Mark"]) {
          NSString * attributeName = [inDataScanner parseAutosizedStringWithMessage:@"Attribute Name"] ;
          [entityAttributeArray addObject:attributeName] ;
        }else if ([inDataScanner testAcceptByte:0x04 withMessage:@"NSDecimalAttributeType Mark"]) {
          NSString * attributeName = [inDataScanner parseAutosizedStringWithMessage:@"Attribute Name"] ;
          [entityAttributeArray addObject:attributeName] ;
         }else if ([inDataScanner testAcceptByte:0x05 withMessage:@"NSDoubleAttributeType Mark"]) {
          NSString * attributeName = [inDataScanner parseAutosizedStringWithMessage:@"Attribute Name"] ;
          [entityAttributeArray addObject:attributeName] ;
        }else if ([inDataScanner testAcceptByte:0x06 withMessage:@"NSFloatAttributeType or NSDoubleAttributeType Mark"]) {
          NSString * attributeName = [inDataScanner parseAutosizedStringWithMessage:@"Attribute Name"] ;
          [entityAttributeArray addObject:attributeName] ;
        }else if ([inDataScanner testAcceptByte:0x07 withMessage:@"NSStringAttributeType Mark"]) {
          NSString * attributeName = [inDataScanner parseAutosizedStringWithMessage:@"Attribute Name"] ;
          [entityAttributeArray addObject:attributeName] ;
        }else if ([inDataScanner testAcceptByte:0x08 withMessage:@"NSBooleanAttributeType Mark"]) {
          NSString * attributeName = [inDataScanner parseAutosizedStringWithMessage:@"Attribute Name"] ;
          [entityAttributeArray addObject:attributeName] ;
        }else if ([inDataScanner testAcceptByte:0x09 withMessage:@"NSDateAttributeType Mark"]) {
          NSString * attributeName = [inDataScanner parseAutosizedStringWithMessage:@"Attribute Name"] ;
          [entityAttributeArray addObject:attributeName] ;
        }else if ([inDataScanner testAcceptByte:0x0A withMessage:@"NSBinaryDataAttributeType Mark"]) {
          NSString * attributeName = [inDataScanner parseAutosizedStringWithMessage:@"Attribute Name"] ;
          [entityAttributeArray addObject:attributeName] ;
        }else if ([inDataScanner testAcceptByte:0x0B withMessage:@"To-one relationship Mark"]) {
          /* const NSUInteger relationshipEntityIndex = */ [inDataScanner parseAutosizedUnsignedIntegerWithMessage:@"Destination Entity Index"] ;
          NSString * relationshipName = [inDataScanner parseAutosizedStringWithMessage:@"Relationship Name"] ;
          [entityRelationshipArray addObject:relationshipName] ;
        }else if ([inDataScanner testAcceptByte:0x0C withMessage:@"To-many relationship Mark"]) {
          /* const NSUInteger relationshipEntityIndex = */ [inDataScanner parseAutosizedUnsignedIntegerWithMessage:@"Destination Entity Index"] ;
          NSString * relationshipName = [inDataScanner parseAutosizedStringWithMessage:@"Relationship Name"] ;
          [entityRelationshipArray addObject:relationshipName] ;
        }else{
          [entityAttributeArray addObject:@""] ;
          [entityRelationshipArray addObject:@""] ;
          [inDataScanner acceptRequiredByte:0x00 withMessage:[NSString stringWithFormat:@"End of #%lu Entity Mark\n", i]] ;
          loop = NO ;
        }
      }
    //--- Enter new description
      PMLoadedEntityDescription * newLoadedEntity = [[PMLoadedEntityDescription alloc]
        initWithCoreDataEntityName:entityName
        withLoadedSuperEntity:loadedSuperEntity
        withLoadedAttributes:entityAttributeArray
        withLoadedRelationships:entityRelationshipArray
      ] ;
      [mLoadedEntityArray addObject:newLoadedEntity] ;
    }
  }
  return self ;
}


//---------------------------------------------------------------------------*

- (NSString *) entityNameForIndex: (NSUInteger) inEntityIndex {
  PMLoadedEntityDescription * led = [mLoadedEntityArray objectAtIndex:inEntityIndex] ;
  return [led coreDataEntityName] ;
}

//---------------------------------------------------------------------------*

- (NSArray *) sortedAttributeNamesForEntityOfIndex: (NSUInteger) inEntityIndex {
  PMLoadedEntityDescription * led = [mLoadedEntityArray objectAtIndex:inEntityIndex] ;
  return [led sortedAttributeNames] ;
}

//---------------------------------------------------------------------------*

- (NSArray *) sortedRelationshipNamesForEntityOfIndex: (NSUInteger) inEntityIndex {
  PMLoadedEntityDescription * led = [mLoadedEntityArray objectAtIndex:inEntityIndex] ;
  return [led sortedRelationshipNames] ;
}

//---------------------------------------------------------------------------*

@end

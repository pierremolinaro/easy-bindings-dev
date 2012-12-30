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
#import "easy-bindings-utilities.h"
#import "PMAllocationDebug.h"

#define EASY_BINDINGS_DEBUG

//---------------------------------------------------------------------------*

@implementation PMLoadedEntityDatabase

//---------------------------------------------------------------------------*

- (BOOL) checkEntity: (NSEntityDescription *) inEntity
         trace: (NSMutableString *) ioTrace
         hasAttributeNamed: (NSString *) inAttributeName
         ofType: (NSAttributeType) inAttributeType {
  NSAttributeDescription * ad = [[inEntity attributesByName] objectForKey:inAttributeName] ;
  BOOL ok = ad != nil ;
  if (ok) {
    const NSAttributeType attributeType = [ad attributeType] ;
    if (attributeType != inAttributeType) {
      ok = NO ;
      [ioTrace appendFormat:@"For '%@' attribute of '%@' entity, attribute type %lld (read %lld)\n",
             inAttributeName, [inEntity name], (SInt64) attributeType, (SInt64) inAttributeType] ;
    }
  }
  return ok ;
}

//---------------------------------------------------------------------------*

- (BOOL) checkEntity: (NSEntityDescription *) inEntity
         trace: (NSMutableString *) ioTrace
         hasRelationshipNamed: (NSString *) inRelationshipName
         toMany: (BOOL) inIsToMany {
  NSRelationshipDescription * rd = [[inEntity relationshipsByName] objectForKey:inRelationshipName] ;
  BOOL ok = rd != nil ;
  if (ok) {
    const BOOL isToMany = [rd isToMany] ;
    if (isToMany != inIsToMany) {
      ok = NO ;
      [ioTrace appendFormat:@"For '%@' relationship of '%@' entity, to-many flag %d (read %d)\n",
             inRelationshipName, [inEntity name], isToMany, inIsToMany] ;
    }
  }
  return ok ;
}

//---------------------------------------------------------------------------*

- (id) initWithDataScanner: (PMDataScanner *) inDataScanner
       trace: (NSMutableString *) ioTrace
       entityDictionary: (NSDictionary *) inEntityDictionary {
  self = [super init] ;
  if (self) {
    macroNoteObjectAllocation ;
  //--- Entity name substitution
    NSDictionary * entityNameSubstitution = [NSDictionary dictionaryWithObjectsAndKeys:
      nil
    ] ;
  //---
    mLoadedEntityArray = [NSMutableArray new] ;
  //--- Get entity count 
    const NSUInteger entityCount = [inDataScanner parseAutosizedUnsignedInteger] ;
    for (NSUInteger i=0 ; (i<entityCount) && [inDataScanner ok] ; i++) {
    //--- 'Start of Entity' mark
      [inDataScanner acceptRequiredByte:0xBA] ;
    //--- Entity Name
      NSString * entityName = [inDataScanner parseAutosizedString] ;
      NSEntityDescription * coreDataEntity = [inEntityDictionary
        objectForKey:entityName
      ] ;
      if (nil == coreDataEntity) {
        NSString * substitutionName = [entityNameSubstitution objectForKey:entityName] ;
        if (nil == substitutionName) {
          NSLog (@"Cannot find entity named '%@', no substitution found", entityName) ;
        }else{
          coreDataEntity = [inEntityDictionary objectForKey:substitutionName] ;
          if (nil == coreDataEntity) {
            NSLog (@"Cannot find entity named '%@', substitution '%@' invalid", entityName, substitutionName) ;
          }else{
            NSLog (@"Cannot find entity named '%@', substitution '%@' ok", entityName, substitutionName) ;
          }
        }
      }
      [ioTrace appendFormat:@"Load entity #%lu, '%@'\n", i, entityName] ;
    //--- Super entity ?
      PMLoadedEntityDescription * loadedSuperEntity = nil ;
      if ([inDataScanner testAcceptByte:0xFE]) { // Has a super entity
        const NSUInteger superEntityIndex = [inDataScanner parseAutosizedUnsignedInteger] ;
        loadedSuperEntity = [mLoadedEntityArray objectAtIndex:superEntityIndex HERE OFCLASS (PMLoadedEntityDescription)] ;
        [ioTrace appendFormat:@"  Super entity #%lu\n", superEntityIndex] ;
      }else{ // No super entity
        [inDataScanner acceptRequiredByte:0xFF] ;
      }
    //--- Parse attributes and relationship definitions
      NSMutableArray * entityAttributeArray = [NSMutableArray new] ;
      NSMutableArray * entityRelationshipArray = [NSMutableArray new] ;
      BOOL loop = YES ;
      while (loop && [inDataScanner ok]) {
        if ([inDataScanner testAcceptByte:0x01]) { // NSInteger16AttributeType
          NSString * attributeName = [inDataScanner parseAutosizedString] ;
          const BOOL ok =
            [self checkEntity:coreDataEntity trace:ioTrace hasAttributeNamed:attributeName ofType:NSInteger64AttributeType]
          ||
            [self checkEntity:coreDataEntity trace:ioTrace hasAttributeNamed:attributeName ofType:NSInteger32AttributeType]
          ||
            [self checkEntity:coreDataEntity trace:ioTrace hasAttributeNamed:attributeName ofType:NSInteger16AttributeType]
          ;
          [entityAttributeArray addObject:ok ? attributeName : @""] ;
          [ioTrace appendFormat:@"  NSInteger16AttributeType, '%@'\n", attributeName] ;
        }else if ([inDataScanner testAcceptByte:0x02]) { // NSInteger32AttributeType
          NSString * attributeName = [inDataScanner parseAutosizedString] ;
          const BOOL ok =
            [self checkEntity:coreDataEntity trace:ioTrace hasAttributeNamed:attributeName ofType:NSInteger64AttributeType]
          ||
            [self checkEntity:coreDataEntity trace:ioTrace hasAttributeNamed:attributeName ofType:NSInteger32AttributeType]
          ||
            [self checkEntity:coreDataEntity trace:ioTrace hasAttributeNamed:attributeName ofType:NSInteger16AttributeType]
          ;
          [entityAttributeArray addObject:ok ? attributeName : @""] ;
          [ioTrace appendFormat:@"  NSInteger32AttributeType, '%@'\n", attributeName] ;
        }else if ([inDataScanner testAcceptByte:0x03]) { // NSInteger64AttributeType
          NSString * attributeName = [inDataScanner parseAutosizedString] ;
          const BOOL ok =
            [self checkEntity:coreDataEntity trace:ioTrace hasAttributeNamed:attributeName ofType:NSInteger64AttributeType]
          ||
            [self checkEntity:coreDataEntity trace:ioTrace hasAttributeNamed:attributeName ofType:NSInteger32AttributeType]
          ||
            [self checkEntity:coreDataEntity trace:ioTrace hasAttributeNamed:attributeName ofType:NSInteger16AttributeType]
          ;
          [entityAttributeArray addObject:ok ? attributeName : @""] ;
          [ioTrace appendFormat:@"  NSInteger64AttributeType, '%@'\n",attributeName] ;
        }else if ([inDataScanner testAcceptByte:0x04]) { // NSDecimalAttributeType
          NSString * attributeName = [inDataScanner parseAutosizedString] ;
          const BOOL ok = [self checkEntity:coreDataEntity trace:ioTrace hasAttributeNamed:attributeName ofType:NSDecimalAttributeType] ;
          [entityAttributeArray addObject:ok ? attributeName : @""] ;
          [ioTrace appendFormat:@"  NSDecimalAttributeType, '%@'\n", attributeName] ;
         }else if ([inDataScanner testAcceptByte:0x05]) { // NSDoubleAttributeType
          NSString * attributeName = [inDataScanner parseAutosizedString] ;
          const BOOL ok = [self checkEntity:coreDataEntity trace:ioTrace hasAttributeNamed:attributeName ofType:NSDoubleAttributeType] ;
          [entityAttributeArray addObject:ok ? attributeName : @""] ;
          [ioTrace appendFormat:@"  NSDoubleAttributeType, '%@'\n", attributeName] ;
        }else if ([inDataScanner testAcceptByte:0x06]) { // NSFloatAttributeType or NSDoubleAttributeType
          NSString * attributeName = [inDataScanner parseAutosizedString] ;
          const BOOL ok =
            [self checkEntity:coreDataEntity trace:ioTrace hasAttributeNamed:attributeName ofType:NSFloatAttributeType]
          ||
            [self checkEntity:coreDataEntity trace:ioTrace hasAttributeNamed:attributeName ofType:NSDoubleAttributeType]
          ;
          [entityAttributeArray addObject:ok ? attributeName : @""] ;
          [ioTrace appendFormat:@"  NSFloatAttributeType, '%@'\n", attributeName] ;
        }else if ([inDataScanner testAcceptByte:0x07]) { // NSStringAttributeType
          NSString * attributeName = [inDataScanner parseAutosizedString] ;
          const BOOL ok = [self checkEntity:coreDataEntity trace:ioTrace hasAttributeNamed:attributeName ofType:NSStringAttributeType] ;
          [entityAttributeArray addObject:ok ? attributeName : @""] ;
          [ioTrace appendFormat:@"  NSStringAttributeType, '%@'\n", attributeName] ;
        }else if ([inDataScanner testAcceptByte:0x08]) { // NSBooleanAttributeType
          NSString * attributeName = [inDataScanner parseAutosizedString] ;
          const BOOL ok = [self checkEntity:coreDataEntity trace:ioTrace hasAttributeNamed:attributeName ofType:NSBooleanAttributeType] ;
          [entityAttributeArray addObject:ok ? attributeName : @""] ;
          [ioTrace appendFormat:@"  NSBooleanAttributeType, '%@'\n", attributeName] ;
        }else if ([inDataScanner testAcceptByte:0x09]) { // NSDateAttributeType
          NSString * attributeName = [inDataScanner parseAutosizedString] ;
          const BOOL ok = [self checkEntity:coreDataEntity trace:ioTrace hasAttributeNamed:attributeName ofType:NSDateAttributeType] ;
          [entityAttributeArray addObject:ok ? attributeName : @""] ;
          [ioTrace appendFormat:@"  NSDateAttributeType, '%@'\n", attributeName] ;
        }else if ([inDataScanner testAcceptByte:0x0A]) { // NSBinaryDataAttributeType
          NSString * attributeName = [inDataScanner parseAutosizedString] ;
          const BOOL ok = [self checkEntity:coreDataEntity trace:ioTrace hasAttributeNamed:attributeName ofType:NSBinaryDataAttributeType] ;
          [entityAttributeArray addObject:ok ? attributeName : @""] ;
          [ioTrace appendFormat:@"  NSBinaryDataAttributeType, '%@'\n", attributeName] ;
        }else if ([inDataScanner testAcceptByte:0x0B]) { // To-one relationship
          /* const NSUInteger relationshipEntityIndex = */ [inDataScanner parseAutosizedUnsignedInteger] ;
          NSString * relationshipName = [inDataScanner parseAutosizedString] ;
          const BOOL ok = [self checkEntity:coreDataEntity trace:ioTrace hasRelationshipNamed:relationshipName toMany:NO] ;
          [entityRelationshipArray addObject:ok ? relationshipName : @""] ;
          [ioTrace appendFormat:@"  To-one relationship with '%@'\n", relationshipName] ;
        }else if ([inDataScanner testAcceptByte:0x0C]) { // To-many relationship
          /* const NSUInteger relationshipEntityIndex = */ [inDataScanner parseAutosizedUnsignedInteger] ;
          NSString * relationshipName = [inDataScanner parseAutosizedString] ;
          const BOOL ok = [self checkEntity:coreDataEntity trace:ioTrace hasRelationshipNamed:relationshipName toMany:YES] ;
          [entityRelationshipArray addObject:ok ? relationshipName : @""] ;
          [ioTrace appendFormat:@"  To-many relationship '%@'\n", relationshipName] ;
        }else{
          [entityAttributeArray addObject:@""] ;
          [entityRelationshipArray addObject:@""] ;
          [inDataScanner acceptRequiredByte:0x00] ;
          loop = NO ;
        }
      }
    //--- Enter new description
      PMLoadedEntityDescription * newLoadedEntity = [[PMLoadedEntityDescription alloc]
        initWithCoreDataEntity:coreDataEntity
        withLoadedSuperEntity:loadedSuperEntity
        withLoadedAttributes:entityAttributeArray
        withLoadedRelationships:entityRelationshipArray
      ] ;
      macroReleaseSetToNil (entityAttributeArray) ;
      macroReleaseSetToNil (entityRelationshipArray) ;
      [mLoadedEntityArray addObject:newLoadedEntity] ;
      macroReleaseSetToNil (newLoadedEntity) ;
    }
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

- (NSString *) entityNameForIndex: (NSUInteger) inEntityIndex {
  PMLoadedEntityDescription * led = [mLoadedEntityArray objectAtIndex:inEntityIndex HERE OFCLASS (PMLoadedEntityDescription)] ;
  return [[led coreDataEntity] name] ;
}

//---------------------------------------------------------------------------*

- (NSEntityDescription *) entityForIndex: (NSUInteger) inEntityIndex {
  PMLoadedEntityDescription * led = [mLoadedEntityArray objectAtIndex:inEntityIndex HERE OFCLASS (PMLoadedEntityDescription)] ;
  return [led coreDataEntity] ;
}

//---------------------------------------------------------------------------*

- (NSArray *) sortedAttributeNamesForEntityOfIndex: (NSUInteger) inEntityIndex {
  PMLoadedEntityDescription * led = [mLoadedEntityArray objectAtIndex:inEntityIndex HERE OFCLASS (PMLoadedEntityDescription)] ;
  return [led sortedAttributeNames] ;
}

//---------------------------------------------------------------------------*

- (NSArray *) sortedRelationshipNamesForEntityOfIndex: (NSUInteger) inEntityIndex {
  PMLoadedEntityDescription * led = [mLoadedEntityArray objectAtIndex:inEntityIndex HERE OFCLASS (PMLoadedEntityDescription)] ;
  return [led sortedRelationshipNames] ;
}

//---------------------------------------------------------------------------*

@end

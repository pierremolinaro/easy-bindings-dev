//
//  PMEntityController.m
//  essai
//
//  Created by Pierre Molinaro on 29/06/13.
//  Copyright (c) 2013 ECN / IRCCyN. All rights reserved.
//
//-----------------------------------------------------------------------------*

#import "easy-bindings-utilities.h"
#import "PMEntityController.h"
#import "PMManagedEntity.h"
#import "PMEntityManager.h"
#import "PMAllocationDebug.h"

//-----------------------------------------------------------------------------*

@implementation PMEntityController

//-----------------------------------------------------------------------------*

@synthesize deleteEntityOnRemove ;
@synthesize entityManager ;

//-----------------------------------------------------------------------------*

- (instancetype) init {
  self = [super init] ;
  if (self) {
    macroNoteObjectAllocation ;
  }
  return self ;
}

//----------------------------------------------------------------------------*
//    Dealloc                                                                 *
//----------------------------------------------------------------------------*

- (void) dealloc {
  macroReleaseSetToNil (entityManager) ;
  macroNoteObjectDeallocation ;
  macroSuperDealloc ;
}

//-----------------------------------------------------------------------------*

- (void) add: (id) inSender {
  if (nil == self.entityManager) {
    [super add:inSender] ;
  }else{
    id newObject = [self.entityManager newInstanceOfEntity:self.objectClass] ;
    [self addObject:newObject] ;
    macroAutorelease (newObject) ;
  }
}

//-----------------------------------------------------------------------------*

- (void) remove: (id) inSender {
  id contentObject = self.content ;
  if ((contentObject != nil) && (nil != self.entityManager)) {
    [self.entityManager deleteEntity:contentObject] ;
  }else{
    [super remove:inSender] ;
  }
}

//-----------------------------------------------------------------------------*

@end
//
//  PMUndoManager.m
//  essai
//
//  Created by Pierre Molinaro on 30/06/13.
//  Copyright (c) 2013 ECN / IRCCyN. All rights reserved.
//
//---------------------------------------------------------------------------*

#import "PMUndoManager.h"
#import "PMAllocationDebug.h"

//---------------------------------------------------------------------------*

@implementation PMUndoManager

//---------------------------------------------------------------------------*

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
  macroNoteObjectDeallocation ;
  macroSuperDealloc ;
}

//---------------------------------------------------------------------------*

@end

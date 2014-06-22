//
//  PMUndoManager.m
//  essai
//
//  Created by Pierre Molinaro on 30/06/13.
//  Copyright (c) 2013 ECN / IRCCyN. All rights reserved.
//
//---------------------------------------------------------------------------*

import Cocoa

//---------------------------------------------------------------------------*

@objc(PMUndoManager) class PMUndoManager : NSUndoManager {

  //-----------------------------------------------------------------------------*
  //    init                                                                     *
  //-----------------------------------------------------------------------------*

  init () {
    super.init ()
    noteObjectAllocation (self)
  }

  //-----------------------------------------------------------------------------*
  //    deinit                                                                   *
  //-----------------------------------------------------------------------------*

  deinit {
    noteObjectDeallocation (self)
  }
}

//---------------------------------------------------------------------------*

/*
#import "easy-bindings-utilities.h"
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

*/
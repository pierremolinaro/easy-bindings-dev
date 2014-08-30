//
//  PMUndoManager.swift
//  essai
//
//  Created by Pierre Molinaro on 30/06/14.
//  Copyright (c) 2013 ECN / IRCCyN. All rights reserved.
//
//---------------------------------------------------------------------------*

import Cocoa

//---------------------------------------------------------------------------*

let traceUndoManager = false

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

  //-----------------------------------------------------------------------------*
  //    registerUndoWithTarget                                                   *
  //-----------------------------------------------------------------------------*

  override func prepareWithInvocationTarget (target:AnyObject!) -> AnyObject! {
    let result : AnyObject! = super.prepareWithInvocationTarget (target)
    if traceUndoManager {
      NSLog ("prepareWithInvocationTarget (%@) target:%@", undoRegistrationEnabled ? "yes" : "no", target.description)
    }
    return result
  }

  //-----------------------------------------------------------------------------*
  //    registerUndoWithTarget                                                   *
  //-----------------------------------------------------------------------------*

  override func registerUndoWithTarget (target:AnyObject!, selector:Selector, object anObject:AnyObject!) {
    super.registerUndoWithTarget (target, selector:selector, object:anObject)
    if traceUndoManager {
      if anObject {
        NSLog ("registerUndoWithTarget (%@) target:%@, selector:\"%@\" object:%@", undoRegistrationEnabled ? "yes" : "no", target.description, selector.description, anObject.description)
      }else{
        NSLog ("registerUndoWithTarget (%@) target:%@, selector:\"%@\" object:nil", undoRegistrationEnabled ? "yes" : "no", target.description, selector.description)
      }
    }
  }

  //-----------------------------------------------------------------------------*
  //    beginUndoGrouping                                                        *
  //-----------------------------------------------------------------------------*

  override func beginUndoGrouping () {
    if traceUndoManager {
      NSLog ("beginUndoGrouping")
    }
    super.beginUndoGrouping ()
  }

  //-----------------------------------------------------------------------------*
  //    endUndoGrouping                                                          *
  //-----------------------------------------------------------------------------*

  override func endUndoGrouping () {
    if traceUndoManager {
      NSLog ("endUndoGrouping")
    }
    super.endUndoGrouping ()
  }
}

//------------------------------------------------------------------------------*

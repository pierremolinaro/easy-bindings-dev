//
//  PMTransientProperty.swift
//  02-transient-property
//
//  Created by Pierre Molinaro on 27/02/2015.
//  Copyright (c) 2015 Pierre Molinaro. All rights reserved.
//
//---------------------------------------------------------------------------------------------------------------------*

import Foundation

//---------------------------------------------------------------------------------------------------------------------*

class PMTransientProperty<T> : PMUserClassName {
  private var mObservers : [Int : PMTransientEventProtocol] = [:]
  private var mValueCache : T? = nil
  private let mTransientIndex : PMTransientIndex
  private var mComputeFunction : Optional<() -> T>
  
  init (_ inTransientIndex : PMTransientIndex) {
    mTransientIndex = inTransientIndex
    noteObjectAllocation (self)
  }

  deinit {
    noteObjectDeallocation (self) ;
  }

  func setComputeFunction (function : () -> T) {
    mComputeFunction = function
  }
  
  func userClassName () -> String { return "PMTransientProperty<T>"}
  
  var value : T {
    get {
      if mValueCache == nil, let computeFunction = mComputeFunction {
        mValueCache = computeFunction ()
      }
      return mValueCache!
    }
  }

  func noteDidChange () {
    mValueCache = nil
  }
  

  func trigger () {
    for (key, object) in mObservers {
      postTransientEvent (object)
    }
  }
 
  func addObserver (inObserver : PMTransientEventProtocol, inTrigger:Bool) {
    mObservers [inObserver.uniqueIndex] = inObserver
    if inTrigger {
      postTransientEvent (inObserver)
    }
  }
 
  func removeObserver (inObserver : PMTransientEventProtocol, inTrigger:Bool) {
    mObservers [inObserver.uniqueIndex] = nil
    if inTrigger {
      postTransientEvent (inObserver)
    }
  }

  private var mEvent : PMTransientEventProtocol?

  var event : PMTransientEventProtocol {
    get {
      if mEvent == nil {
        mEvent = PMTransientPropertyEvent<T> (self)
      }
      return mEvent!
    }
  }

  func resetComputationFunction () {
    mComputeFunction = nil
  }
}

//---------------------------------------------------------------------------------------------------------------------*

class PMTransientPropertyEvent<T> : PMTransientEventProtocol {
  weak private var mObserver : PMTransientProperty<T>? = nil
  private let mTransientIndex : PMTransientIndex
  
  func userClassName () -> String { return "PMTransientPropertyEvent<T>" }

  var transientEventIndex : PMTransientIndex { get { return mTransientIndex } }

  private let mPrivateUniqueIndex : Int

  var uniqueIndex : Int { get { return mPrivateUniqueIndex } }
  
  init (_ inObject : PMTransientProperty<T>) {
    mPrivateUniqueIndex = getUniqueIndex ()
    mObserver = inObject
    mTransientIndex = inObject.mTransientIndex
    noteObjectAllocation (self)
  }

  func noteTransientDidChange () {
    mObserver?.noteDidChange ()
  }

  func unregister () {
  }
  
  deinit {
    noteObjectDeallocation (self) ;
  }

  func trigger () {
    mObserver?.trigger ()
  }
}

//---------------------------------------------------------------------------------------------------------------------*


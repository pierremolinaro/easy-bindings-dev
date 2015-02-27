//
//  PMProperty.swift
//  02-transient-property
//
//  Created by Pierre Molinaro on 27/02/2015.
//  Copyright (c) 2015 Pierre Molinaro. All rights reserved.
//
//---------------------------------------------------------------------------------------------------------------------*

import Cocoa

//---------------------------------------------------------------------------------------------------------------------*

protocol PMStringRepresentation {
  func representation () -> String
}

//---------------------------------------------------------------------------------------------------------------------*

struct PMProperty <T : Equatable> {
  var didChangeFunction : Optional < (T) -> () > = nil
 
  private var mObservers : [Int : PMTransientEventProtocol] = [:]

  var value : T {
    didSet {
      if value != oldValue {
        didChangeFunction? (oldValue)
        for (key, object) in mObservers {
          postTransientEvent (object)
        }
      }
    }
  }
  
  init (_ inValue : T) {
    value = inValue
  }
  
  mutating func addObserver (inObserver : PMTransientEventProtocol, inTrigger:Bool) {
    mObservers [inObserver.uniqueIndex] = inObserver
    if inTrigger {
      postTransientEvent (inObserver)
    }
  }
 
  mutating func removeObserver (inObserver : PMTransientEventProtocol, inTrigger:Bool) {
    mObservers [inObserver.uniqueIndex] = nil
    if inTrigger {
      postTransientEvent (inObserver)
    }
  }

  private var mValidationFunction : (T) -> PMValidationResult = defaultValidationFunction
  
  mutating func setValidationFunction (fonction : (T) -> PMValidationResult) {
    mValidationFunction = fonction
  }
  
  func validate (proposedValue : T) -> PMValidationResult {
    return mValidationFunction (proposedValue)
  }
}

//---------------------------------------------------------------------------------------------------------------------*

func defaultValidationFunction<T> (proposedValue : T) -> PMValidationResult {
  return PMValidationResult.ok
}

//---------------------------------------------------------------------------------------------------------------------*

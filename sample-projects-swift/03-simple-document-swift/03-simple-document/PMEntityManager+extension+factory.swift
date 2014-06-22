//
//  PMEntityManager.swift
//  essai
//
//  Created by Pierre Molinaro on 28/06/13.
//  Copyright (c) 2013 ECN / IRCCyN. All rights reserved.
//
//-----------------------------------------------------------------------------*

import Cocoa

//-----------------------------------------------------------------------------*

extension PMEntityManager {

  //-----------------------------------------------------------------------------*
  //  newInstanceOfEntityNamed                                                   *
  //-----------------------------------------------------------------------------*

  func newInstanceOfEntityNamed (inEntityTypeName : String) -> PMManagedEntity? {
    var result : PMManagedEntity?
    if inEntityTypeName == "MyRootEntity" {
      result = MyRootEntity (entityManager:self)
    }
    if nil != result {
      addEntity (result!)
    }
    return result
  }

}

//-----------------------------------------------------------------------------*


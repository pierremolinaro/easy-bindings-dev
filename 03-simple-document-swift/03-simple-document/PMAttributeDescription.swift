//
//  PMAttributeDescription.m
//  essai
//
//  Created by Pierre Molinaro on 30/06/13.
//  Copyright (c) 2013 ECN / IRCCyN. All rights reserved.
//
//---------------------------------------------------------------------------*

import Cocoa

//---------------------------------------------------------------------------*

class PMAttributeDescription : NSObject {
  let attributeName : String

  //----------------------------------------------------------------------------*
  //    Init                                                                    *
  //----------------------------------------------------------------------------*

  init (inAttributeName : NSString)  {
    super.init ()
    attributeName = inAttributeName
    noteObjectAllocation (self)
  }

  //----------------------------------------------------------------------------*
  //    deinit                                                                  *
  //----------------------------------------------------------------------------*

  deinit {
    noteObjectDeallocation (self)
  }

}

//----------------------------------------------------------------------------*
//    Comparing                                                               *
//----------------------------------------------------------------------------*

@infix func < (left: PMAttributeDescription, right: PMAttributeDescription) -> Bool {
  return left.attributeName < right.attributeName
}

//---------------------------------------------------------------------------*

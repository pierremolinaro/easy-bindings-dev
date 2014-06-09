//
//  PMRelationshipDescription.m
//  essai
//
//  Created by Pierre Molinaro on 30/06/13.
//  Copyright (c) 2013 ECN / IRCCyN. All rights reserved.
//
//---------------------------------------------------------------------------*

import Cocoa

//---------------------------------------------------------------------------*

class PMRelationshipDescription : NSObject {
  let relationshipName : String
  let oppositeRelationshipName : String
  let oppositeRelationshipIsToMany : Bool

  //----------------------------------------------------------------------------*
  //    Init                                                                    *
  //----------------------------------------------------------------------------*

  init (inRelationshipName : NSString,
        inOppositeRelationshipName: NSString,
        inIsToManyOppositionRelationship: Bool)  {
    relationshipName = inRelationshipName
    oppositeRelationshipName = inOppositeRelationshipName
    oppositeRelationshipIsToMany = inIsToManyOppositionRelationship
    super.init ()
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

@infix func < (left: PMRelationshipDescription, right: PMRelationshipDescription) -> Bool {
  return left.relationshipName < right.relationshipName
}

//----------------------------------------------------------------------------*

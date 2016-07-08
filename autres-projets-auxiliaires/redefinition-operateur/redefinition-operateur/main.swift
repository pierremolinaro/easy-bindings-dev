//
//  main.swift
//  redefinition-operateur
//
//  Created by Pierre Molinaro on 14/08/2014.
//  Copyright (c) 2014 Pierre Molinaro. All rights reserved.
//

struct PMLength {
  var mValue : Int64 = 0
  
  init (value:Int64) {
    mValue = value
  }

}

func + (op1 : PMLength, op2 : PMLength) -> PMLength {
  return PMLength (value: op1.mValue + op2.mValue)
}

import Foundation

print ("Native op")

var r : Int64 = 0

for i in 0..<1_000_000 {

}

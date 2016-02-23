//
//  main.swift
//  reference-type-equality
//
//  Created by Pierre Molinaro on 16/08/2014.
//  Copyright (c) 2014 Pierre Molinaro. All rights reserved.
//

import Foundation

class A {
  var a : Int
  
  init (v : Int) {
    a = v
  }
}

func == (op1 : A, op2 : A) -> Bool {
  return op1.a == op2.a
}

var objectA = A (v:2)
var objectB = A (v:2)

let eq1 = (objectA == objectB) ? "yes" : "no"
let eq2 = (objectA === objectB) ? "yes" : "no"

print("objectA == objectB \(eq1), objectA === objectB \(eq2)")


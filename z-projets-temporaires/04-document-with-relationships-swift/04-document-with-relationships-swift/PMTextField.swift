//
//  PMTextField.swift
//  04-document-with-relationships-swift
//
//  Created by Pierre Molinaro on 14/08/2014.
//  Copyright (c) 2014 Pierre Molinaro. All rights reserved.
//

import Cocoa

class PMTextField : NSTextField {

  func control (control: NSControl!,
                didFailToValidatePartialString: String!,
                errorDescription: String!) {
     NSLog ("didFailToValidatePartialString")
  }

}
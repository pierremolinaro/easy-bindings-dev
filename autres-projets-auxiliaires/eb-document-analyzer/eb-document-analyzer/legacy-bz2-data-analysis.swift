//
//  legacy-bz2-data-analysis.swift
//  eb-document-analyzer
//
//  Created by Pierre Molinaro on 08/07/2015.
//  Copyright © 2015 Pierre Molinaro. All rights reserved.
//
//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

import Cocoa

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

func analyzeLegacyBZ2Data (data : NSData, textView:NSTextView) {
  textView.appendMessageString ("------------------------------ Uncompressed data format\n")
  let uncompressedData = bz2DecompressedData (data)
  textView.appendMessageString ("Uncompressed data: \(uncompressedData.length) bytes\n")

}

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————


//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————

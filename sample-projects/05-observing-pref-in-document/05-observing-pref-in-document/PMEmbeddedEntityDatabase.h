//
//  PMEmbeddedEntityDatabase.h
//  canari
//
//  Created by Pierre Molinaro on 09/11/07.
//  Copyright 2007 __MyCompanyName__. All rights reserved.
//
//---------------------------------------------------------------------------*

#import <Cocoa/Cocoa.h>

//---------------------------------------------------------------------------*

@interface PMEmbeddedEntityDatabase : NSObject {
  @private NSMutableArray * mEmbeddedEntityArray ; // Object NSEntityDescription
  @private NSMutableDictionary * mDictionary ; // Key : NSValue of NSEntityDescription, object : index (NSNumber)
}

- (void) enterEntity: (NSEntityDescription *) inCoreDataEntity ;

- (NSUInteger) indexOfCoreDataEntity: (NSEntityDescription *) inCoreDataEntity ;

- (void) saveEntitiesToData: (NSMutableData *) ioData
             trace:(NSMutableString *) ioTrace ;

@end

//---------------------------------------------------------------------------*

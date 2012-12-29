//
//  PMEmbeddedObjectDatabase.h
//  canari
//
//  Created by Pierre Molinaro on 09/11/07.
//  Copyright 2007 __MyCompanyName__. All rights reserved.
//
//---------------------------------------------------------------------------*

#import <Cocoa/Cocoa.h>

//---------------------------------------------------------------------------*

@class PMEmbeddedEntityDatabase ;

//---------------------------------------------------------------------------*

@interface PMEmbeddedObjectDatabase : NSObject {

  @private NSMutableArray * mObjectArray ; // Object NSManagedObject
  @private NSMutableDictionary * mDictionary ; // Key : NSValue of NSManagedObject, object : index (NSNumber)

}

- (void) enterObject: (NSManagedObject *) inObject
         withEmbeddedEntityDatabase: (PMEmbeddedEntityDatabase *) ioEmbeddedEntityDatabase ;

- (void) saveObjectsToData: (NSMutableData *) ioData
         trace: (NSMutableString *) ioTrace
         withEmbeddedEntityDatabase: (PMEmbeddedEntityDatabase *) inEmbeddedEntityDatabase ;

@end

//---------------------------------------------------------------------------*

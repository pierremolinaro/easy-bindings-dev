//
//  PMLoadedObjectDatabase.h
//  canari
//
//  Created by Pierre Molinaro on 09/11/07.
//  Copyright 2007 __MyCompanyName__. All rights reserved.
//
//---------------------------------------------------------------------------*

#import <Cocoa/Cocoa.h>

//---------------------------------------------------------------------------*

@class PMDataScanner ;
@class PMLoadedEntityDatabase ;

//---------------------------------------------------------------------------*

@interface PMLoadedObjectDatabase : NSObject {

}

+ (void) loadWithDataScanner: (PMDataScanner *) inDataScanner
         trace: (NSMutableString *) ioTrace
         withLoadedDatabase: (PMLoadedEntityDatabase *) inLoadedEntityDatabase
         managedObjectContext: (NSManagedObjectContext *) inManagedObjectContext ;

@end

//---------------------------------------------------------------------------*

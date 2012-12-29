//---------------------------------------------------------------------------*
//                                                                           *
//  File 'PMAbstractPersistentDocument.h'                                    *
//  Created by Pierre Molinaro on january 23, 2008.                          *
//                                                                           *
//---------------------------------------------------------------------------*

#import <Cocoa/Cocoa.h>

//---------------------------------------------------------------------------*

@class PMManagedObject ;

//---------------------------------------------------------------------------*

@interface PMAbstractPersistentDocument : NSDocument {
  @private BOOL mFetchingAllObjectsDone ;
  @private NSMutableArray * mUnreachableObjectsForCheckObjectGraph ;
  @private NSManagedObjectContext * mManagedObjectContext ;
}

- (NSManagedObjectContext *) managedObjectContext ;

- (IBAction) checkRelationships: (id) inSender ;

- (IBAction) checkObjectGraph: (id) inUnusedSender ;

- (PMManagedObject *) rootObject ;

- (void) hookOfRootObjectDidCreate ;

- (void) updateDocumentEdition: (id) inUnusedArgument ;

@end

//---------------------------------------------------------------------------*


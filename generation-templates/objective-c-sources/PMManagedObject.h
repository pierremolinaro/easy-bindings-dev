//
//  PMManagedObject.h
//  canari
//
//  Created by Pierre Molinaro on 02/11/07.
//  Copyright 2007 __MyCompanyName__. All rights reserved.
//
//---------------------------------------------------------------------------*

#import <Cocoa/Cocoa.h>

//---------------------------------------------------------------------------*

@interface PMManagedObject : NSManagedObject {
  #ifdef PM_COCOA_DEBUG
    @private NSWindow * mExplorerWindow ;
    @private NSMutableDictionary * mAttributeViewDictionary ;
    @private NSTextField * mChangedPropertyTextField ;
  #endif 
}

#ifdef PM_COCOA_DEBUG
  - (void) showExplorerWindow ;
#endif

@property NSUInteger mObjectIndex ;

@end

//---------------------------------------------------------------------------*

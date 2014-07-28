//
//  PMEntityController.h
//  essai
//
//  Created by Pierre Molinaro on 29/06/13.
//  Copyright (c) 2013 ECN / IRCCyN. All rights reserved.
//
//-----------------------------------------------------------------------------*

#import <Cocoa/Cocoa.h>

@class PMObjectManager ;

//-----------------------------------------------------------------------------*

@interface PMEntityController : NSObjectController {
}

@property (atomic) BOOL deleteEntityOnRemove ;
@property (retain, atomic) PMObjectManager * entityManager ;

- (void) add: (id) inSender ;

- (void) remove: (id) inSender ;

@end

//-----------------------------------------------------------------------------*

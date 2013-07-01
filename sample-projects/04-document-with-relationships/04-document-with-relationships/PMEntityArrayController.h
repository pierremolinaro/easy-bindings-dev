//
//  PMEntityArrayController.h
//  essai
//
//  Created by Pierre Molinaro on 29/06/13.
//  Copyright (c) 2013 ECN / IRCCyN. All rights reserved.
//
//-----------------------------------------------------------------------------*

#import <Cocoa/Cocoa.h>

@class PMEntityManager ;

//-----------------------------------------------------------------------------*

@interface PMEntityArrayController : NSArrayController {
  @private NSString * mFilteringKey ;
  @private NSSet * mObservedObjects ;
}

@property (atomic) BOOL deleteEntityOnRemove ;
@property (retain, atomic) PMEntityManager * entityManager ;

- (void) add: (id) inSender ;

- (void) remove: (id) inSender ;

- (void) automaticallyFilterWithKey: (NSString *) inKey ;

@end

//-----------------------------------------------------------------------------*

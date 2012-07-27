//
//  PMDependancyTrigger.h
//  ExempleTransientMultipleDependances
//
//  Created by Pierre Molinaro on 27/07/12.
//  Copyright (c) 2012 ECN / IRCCyN. All rights reserved.
//
#define OBSERVER_ARRAY_SIZE (2)

#define TRIGGER_NOM_COMPLET_INDEX (0)
#define TRIGGER_TEXTE_DEPENDANT_INDEX (1)

#import <Foundation/Foundation.h>

@interface PMDependancyTrigger : NSObject {
  @private BOOL mDeferredMessageSent ;
  @private NSMutableSet * mObserverObjectArray [OBSERVER_ARRAY_SIZE] ;
}

+ (void) enterTriggerForObject: (NSObject *) inObject
         transientIndex: (const NSUInteger) inIndex ;

@end

//
//  PMManagedObjectContext.m
//  simple-document
//
//  Created by Pierre Molinaro on 19/08/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "PMManagedObjectContext.h"


@implementation PMManagedObjectContext

- (void) processPendingChanges {
  NSLog (@"WILL %s", __PRETTY_FUNCTION__) ;
  [super processPendingChanges] ;
  NSLog (@"DID %s", __PRETTY_FUNCTION__) ;
}

- (BOOL) save: (NSError **) outError {
  NSLog (@"WILL %s", __PRETTY_FUNCTION__) ;
  const BOOL result = [super save:outError] ;
  NSLog (@"DID %s", __PRETTY_FUNCTION__) ;
  return result ;
}

@end

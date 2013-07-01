//
//  MyElementEntity.h
//  essai
//
//  Created by Pierre Molinaro on 28/06/13.
//  Copyright (c) 2013 ECN / IRCCyN. All rights reserved.
//

#import "PMManagedEntity.h"

@class MyRootEntity ;

@interface MyElementEntity : PMManagedEntity

@property (copy, atomic) NSString * mOtherString ;
@property (atomic) BOOL mFlag ;
@property (assign, atomic) MyRootEntity * mRoot ;

+ (MyElementEntity *) newInstanceWithManager: (PMEntityManager *) inManager withDefaultValues: (BOOL) inFlag ;

@end

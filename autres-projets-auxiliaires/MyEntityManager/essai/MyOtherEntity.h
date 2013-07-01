//
//  MyOtherEntity.h
//  essai
//
//  Created by Pierre Molinaro on 28/06/13.
//  Copyright (c) 2013 ECN / IRCCyN. All rights reserved.
//
//-----------------------------------------------------------------------------*

#import "PMManagedEntity.h"

@class MyRootEntity ;
@class PMEntityManager ;

//-----------------------------------------------------------------------------*

@interface MyOtherEntity : PMManagedEntity

@property (copy, atomic) NSString * mOtherString ;

@property (assign, atomic) MyRootEntity * mRoot ;

+ (MyOtherEntity *) newInstanceWithManager: (PMEntityManager *) inManager withDefaultValues: (BOOL) inFlag ;

@end

//-----------------------------------------------------------------------------*

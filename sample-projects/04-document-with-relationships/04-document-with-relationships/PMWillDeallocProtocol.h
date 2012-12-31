//
//  PMWillDeallocProtocol.h
//  canari
//
//  Created by Pierre Molinaro on 31/12/12.
//  Copyright (c) 2012 IRCCyN. All rights reserved.
//
//-----------------------------------------------------------------------------*

#import <Foundation/Foundation.h>

//-----------------------------------------------------------------------------*

@protocol PMWillDeallocProtocol <NSObject>

- (void) objectWillBeDeallocated ;

@end

//-----------------------------------------------------------------------------*

//
//  MyDocument.m
//  essai
//
//  Created by Pierre Molinaro on 27/06/13.
//  Copyright (c) 2013 ECN / IRCCyN. All rights reserved.
//

#import "PMAllocationDebug.h"
#import "MyDocument.h"
#import "PMEntityManager.h"
#import "MyRootEntity.h"
#import "MyOtherEntity.h"
#import "MyElementEntity.h"
#import "PMEntityArrayController.h"

//-----------------------------------------------------------------------------*

@implementation MyDocument

//-----------------------------------------------------------------------------*

- (NSString *) windowNibName {
  return @"MyDocument";
}

//-----------------------------------------------------------------------------*

- (Class) rootEntityClass {
  return [MyRootEntity class] ;
}

//-----------------------------------------------------------------------------*

- (MyRootEntity *) rootObject {
  return (MyRootEntity *) mRootObject ;
}

//-----------------------------------------------------------------------------*

- (void) windowControllerDidLoadNib:(NSWindowController *)aController {
  [super windowControllerDidLoadNib:aController];
  [mEntityCountTextField
    bind:@"value"
    toObject:self.entityManager
    withKeyPath:@"entityCount"
    options:nil
  ] ;
  [mTextField
    bind:@"value"
    toObject:mRootObject
    withKeyPath:@"mString"
    options:nil
  ] ;
  [mCheckbox
    bind:@"value"
    toObject:mRootObject
    withKeyPath:@"mBool"
    options:nil
  ] ;
  [mColorWell
    bind:@"value"
    toObject:mRootObject
    withKeyPath:@"mColor"
    options:nil
  ] ;
  mOtherEntityController = [NSObjectController new] ;
  [mOtherEntityController
    bind:@"contentObject"
    toObject:mRootObject
    withKeyPath:@"mOtherEntity"
    options:nil
  ] ;
  [mOtherTextField
    bind:@"value"
    toObject:mOtherEntityController
    withKeyPath:@"selection.mOtherString"
    options:nil
  ] ;
  [mCreateOtherEntity
    bind:@"enabled"
    toObject:mRootObject
    withKeyPath:@"mOtherEntity"
    options:[NSDictionary dictionaryWithObjectsAndKeys:
      NSIsNilTransformerName, NSValueTransformerNameBindingOption,
      nil
    ]
  ] ;
  mCreateOtherEntity.target = self ;
  mCreateOtherEntity.action = @selector (createOtherEntity:) ;
  [mDeleteOtherEntity
    bind:@"enabled"
    toObject:mRootObject
    withKeyPath:@"mOtherEntity"
    options:[NSDictionary dictionaryWithObjectsAndKeys:
      NSIsNotNilTransformerName, NSValueTransformerNameBindingOption,
      nil
    ]
  ] ;
  mDeleteOtherEntity.target = self ;
  mDeleteOtherEntity.action = @selector (deleteOtherEntity:) ;
//---
  mElementEntityArrayController = [PMEntityArrayController new] ;
  mElementEntityArrayController.objectClass = [MyElementEntity class] ;
  mElementEntityArrayController.deleteEntityOnRemove = YES ;
  mElementEntityArrayController.entityManager = self.entityManager ;
  [mElementEntityArrayController
    bind:@"contentArray"
    toObject:mRootObject
    withKeyPath:@"mElementArray"
    options:nil
  ] ;

  [[mTableView tableColumnWithIdentifier:@"myColumn"]
    bind:@"value"
    toObject:mElementEntityArrayController
    withKeyPath:@"arrangedObjects.mOtherString"
    options:nil
  ] ;
  [[mTableView tableColumnWithIdentifier:@"flag"]
    bind:@"value"
    toObject:mElementEntityArrayController
    withKeyPath:@"arrangedObjects.mFlag"
    options:nil
  ] ;

  mSubElementEntityArrayController = [PMEntityArrayController new] ;
  [mSubElementEntityArrayController automaticallyFilterWithKey:@"mFlag"] ;
  [mSubElementEntityArrayController
    bind:@"contentArray"
    toObject:mRootObject
    withKeyPath:@"mElementArray"
    options:nil
  ] ;

  [[mSubTableView tableColumnWithIdentifier:@"myColumn"]
    bind:@"value"
    toObject:mSubElementEntityArrayController
    withKeyPath:@"arrangedObjects.mOtherString"
    options:nil
  ] ;

  mAddElementButton.target = self ;
  mAddElementButton.action = @selector (addElementAction:) ;

  [mRemoveElementButton
    bind:@"enabled"
    toObject:mElementEntityArrayController
    withKeyPath:@"canRemove"
    options:nil
  ] ;
  mRemoveElementButton.target = mElementEntityArrayController ;
  mRemoveElementButton.action = @selector (remove:) ;

  mAddElementViaControllerButton.target = mElementEntityArrayController ;
  mAddElementViaControllerButton.action = @selector (add:) ;
}

//----------------------------------------------------------------------------*
//   R E M O V E    W I N D O W    C O N T R O L L E R                        *
//----------------------------------------------------------------------------*

- (void) removeWindowController:(NSWindowController *) inWindowController {
  //NSLog (@"%s", __PRETTY_FUNCTION__) ;
  [mEntityCountTextField
    unbind:@"value"
  ] ;
  [mTextField
    unbind:@"value"
  ] ;
  [mCheckbox
    unbind:@"value"
  ] ;
  [mColorWell
    unbind:@"value"
  ] ;

  [mOtherEntityController
    unbind:@"contentObject"
  ] ;
  [mOtherTextField
    unbind:@"value"
  ] ;
  [mCreateOtherEntity
    unbind:@"enabled"
  ] ;

  [mDeleteOtherEntity
    unbind:@"enabled"
  ] ;
//---
  [mElementEntityArrayController
    unbind:@"contentArray"
  ] ;

  [[mTableView tableColumnWithIdentifier:@"myColumn"]
    unbind:@"value"
  ] ;
  [[mTableView tableColumnWithIdentifier:@"flag"]
    unbind:@"value"
  ] ;

  [mSubElementEntityArrayController
    unbind:@"contentArray"
  ] ;

  [[mSubTableView tableColumnWithIdentifier:@"myColumn"]
    unbind:@"value"
  ] ;

  [mRemoveElementButton
    unbind:@"enabled"
  ] ;
  
  macroReleaseSetToNil (mSubElementEntityArrayController) ;
  macroReleaseSetToNil (mElementEntityArrayController) ;
  macroReleaseSetToNil (mOtherEntityController) ;
//---
  [super removeWindowController:inWindowController] ;
}

//----------------------------------------------------------------------------*

- (void) createOtherEntity: (id) inSender {
  MyOtherEntity * object = [MyOtherEntity
    newInstanceWithManager:self.entityManager
    withDefaultValues:YES
  ] ;
  self.rootObject.mOtherEntity = object ;
  macroAutorelease (object) ;
}

//----------------------------------------------------------------------------*

- (void) deleteOtherEntity: (id) inSender {
  [self.entityManager deleteEntity:self.rootObject.mOtherEntity] ;
}

//----------------------------------------------------------------------------*

- (void) addElementAction: (id) inSender {
  MyElementEntity * object = [MyElementEntity
    newInstanceWithManager:self.entityManager
    withDefaultValues:YES
  ] ;
  object.mRoot = self.rootObject ;
  macroAutorelease (object) ;
}

//-----------------------------------------------------------------------------*

@end

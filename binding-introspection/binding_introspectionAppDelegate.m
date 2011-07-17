//
//  binding_introspectionAppDelegate.m
//  binding-introspection
//
//  Created by Pierre Molinaro on 20/06/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "binding_introspectionAppDelegate.h"

@implementation binding_introspectionAppDelegate

@synthesize window;

//-------------------------------------------------------------------------------------*

-(void) enumerateBindingsForClass: (Class) inClass {
  id object = [inClass new] ;
  [mGeneratedCode appendFormat:@"outletClass %@ {\n", [object className]] ; 
  // NSLog (@"***************** Bindings for '%@' class ********************", [object className]) ;
  for (NSString * bindingName in [object exposedBindings]) {
    // NSArray * options = [object optionDescriptionsForBinding:bindingName] ;
    NSString * bindingClassName = [[object valueClassForBinding:bindingName] className] ;
    // NSLog (@"  Binding '%@:%@': class '%@', %u options", [object className], bindingName, bindingClassName, [options count]) ;
  //--- Explore options
    NSString * agregate = [NSString stringWithFormat:@"%@:%@", [object className], bindingName] ;
    if ([mOptionsToIgnoreSet containsObject:agregate]) {
      [mGeneratedCode appendFormat:@"  # Warning: skipped $%@ binding\n", bindingName] ; 
       NSLog (@"** skipped %@ binding **", agregate) ;
    }else{
      [mGeneratedCode appendFormat:@"  $%@ : %@ {\n", bindingName, bindingClassName] ; 
      if ([bindingClassName isEqualToString:@"NSColor"]) {
        mBindingObject = [NSColor blackColor] ;
      }else if ([bindingClassName isEqualToString:@"NSFont"]) {
        mBindingObject = [NSFont systemFontOfSize:12.0F] ;
      }else if ([bindingClassName isEqualToString:@"NSImage"]) {
        mBindingObject = [NSImage imageNamed:@"NSApplicationIcon"] ;
      }else{
        mBindingObject = [[object valueClassForBinding:bindingName] new] ;
      }
      [object
        bind:bindingName
        toObject:self
        withKeyPath:@"mBindingObject"
        options:nil
      ] ;
      NSDictionary * bindingInfos = [[object infoForBinding:bindingName] valueForKey:@"NSOptions"] ;
      //NSLog (@"  options: '%@'", [bindingInfos allKeys]) ;
      for (NSString * optionName in [bindingInfos allKeys]) {
        if (! [mSilentlyIgnoredOptions containsObject:optionName]) {
        NSString * type = [mBindingOptionTypes valueForKey:optionName] ;
          if (nil != type) {
            [mGeneratedCode appendFormat:@"    %@ : %@ ;\n", optionName, type] ;
          }else if ([mPlaceHolders containsObject:optionName]) {
            //NSLog (@"optionName %@, mBindingPlaceholderTypes %@", optionName, mBindingPlaceholderTypes) ;
            type = [mBindingPlaceholderTypes valueForKey:bindingName] ;
            if (nil != type) {
              [mGeneratedCode appendFormat:@"    %@ : %@ ;\n", optionName, type] ;
            }else{
             NSLog (@"** no type for %@ binding '%@' placeholder (type '%@')**", agregate, optionName, [[bindingInfos valueForKey:optionName] class]) ;
            }
          }else{
             NSLog (@"** no type for %@ binding '%@' option **", agregate, optionName) ;
          }
        }
      }
      [object unbind:bindingName] ;
      [mGeneratedCode appendString:@"  }\n"] ; 
    }
  }
  [mGeneratedCode appendString:@"}\n\n"] ; 
}

//-------------------------------------------------------------------------------------*

- (void) displayBindingsNames {
  mOptionsToIgnoreSet = [NSSet setWithObjects:
    @"NSArrayController:contentArray",
    @"NSArrayController:contentSet",
    @"NSArrayController:managedObjectContext",
    @"NSArrayController:filterPredicate",
    @"NSBox:displayPatternTitle1",
    @"NSBrowser:selectionIndexPaths",
    @"NSBrowser:content",
    @"NSBrowser:value",
    @"NSButton:fontBold",
    @"NSButton:fontItalic",
    @"NSButton:fontFamilyName",
    @"NSButton:fontSize",
    @"NSButton:fontName",
    @"NSButtonCell:fontBold",
    @"NSButtonCell:fontItalic",
    @"NSButtonCell:fontFamilyName",
    @"NSButtonCell:fontSize",
    @"NSButtonCell:fontName",
    @"NSCollectionView:selectionIndexes",
    @"NSCollectionView:content",
    @"NSComboBox:value",
    @"NSComboBox:content",
    @"NSComboBox:contentValues",
    @"NSDictionaryController:contentDictionary",
    @"NSDictionaryController:managedObjectContext",
    @"NSImageCell:data",
    @"NSImageView:data",
    @"NSMatrix:contentObjects",
    @"NSMatrix:contentValues",
    @"NSMatrix:content",
    @"NSMatrix:selectedObject",
    @"NSMenuItem:value",
    @"NSObjectController:managedObjectContext",
    @"NSOutlineView:selectionIndexPaths",
    @"NSOutlineView:sortDescriptors",
    @"NSOutlineView:content",
    @"NSPanel:displayPatternTitle1",
    @"NSPersistentDocument:managedObjectContext",
    @"NSPopUpButton:selectedObject",
    @"NSPopUpButton:contentValues",
    @"NSPopUpButton:content",
    @"NSPopUpButton:contentObjects",
    @"NSPopUpButtonCell:selectedObject",
    @"NSPopUpButtonCell:contentValues",
    @"NSPopUpButtonCell:content",
    @"NSPopUpButtonCell:onStateImage", // Bug ?
    @"NSPopUpButtonCell:offStateImage", // Bug ?
    @"NSPopUpButtonCell:mixedStateImage", // Bug ?
    @"NSPopUpButtonCell:contentObjects",
    @"NSPredicateEditor:value",
    @"NSSecureTextField:displayPatternValue1",
    @"NSSecureTextFieldCell:displayPatternValue1",
    @"NSTabView:selectedIdentifier",
    @"NSTableColumn:displayPatternValue1",
    @"NSTableView:selectionIndexes",
    @"NSTableView:sortDescriptors",
    @"NSTableView:content",
    @"NSTextField:displayPatternValue1",
    @"NSTextFieldCell:displayPatternValue1",
    @"NSTextView:attributedString",
    @"NSTokenField:displayPatternValue1",
    @"NSTokenFieldCell:displayPatternValue1",
    @"NSTextView:valueURL",
    @"NSTreeController:contentArray",
    @"NSTreeController:contentSet",
    @"NSTreeController:managedObjectContext",
    nil
  ] ;
  mBindingOptionTypes = [NSDictionary dictionaryWithObjectsAndKeys:
    @"bool", @"NSAllowsEditingMultipleValuesSelection",
    @"bool", @"NSAllowsNullArgument",
    @"bool", @"NSAlwaysPresentsApplicationModalAlerts",
    @"bool", @"NSConditionallySetsEditable",
    @"bool", @"NSConditionallySetsEnabled",
    @"bool", @"NSConditionallySetsHidden",
    @"integer", @"NSContentPlacementTag",
    @"bool", @"NSContinuouslyUpdatesValue",
    @"bool", @"NSCreatesSortDescriptor",
    @"bool", @"NSDeletesObjectsOnRemove",
    @"NSString", @"NSDisplayName",
    @"NSString", @"NSDisplayPattern",
    @"bool", @"NSHandlesContentAsCompoundValue",
    @"bool", @"NSInsertsNullPlaceholder",
    @"bool", @"NSInvokesSeparatelyWithArrayObjects",
    @"NSString", @"NSPredicateFormat",
    @"bool", @"NSRaisesForNotApplicableKeys",
    @"NSString", @"NSSelectorName",
    @"bool", @"NSSelectsAllWhenSettingContent",
    @"bool", @"NSValidatesImmediately",
    nil
  ] ;
  mPlaceHolders = [NSSet setWithObjects:
    @"NSMultipleValuesPlaceholder",
    @"NSNoSelectionPlaceholder",
    @"NSNotApplicablePlaceholder",
    @"NSNullPlaceholder",
    nil
  ] ;
  mSilentlyIgnoredOptions = [NSSet setWithObjects:
    @"NSValueTransformer",
    @"NSValueTransformerName",
    nil
  ] ;
  mBindingPlaceholderTypes = [NSDictionary dictionaryWithObjectsAndKeys:
    @"bool", @"isIndeterminate",
    @"bool", @"visible",
    @"bool", @"animate",
    @"NSNumber", @"animationDelay",
    @"bool", @"enabled",
    @"bool", @"hidden",
    @"bool", @"transparent",
    @"bool", @"editable",
    @"bool", @"fontBold",
    @"NSString", @"label",
    @"NSString", @"toolTip",
    @"NSString", @"fontName",
    @"NSString", @"headerTitle",
    @"NSString", @"title",
    @"NSString", @"fontFamilyName",
    @"integer", @"fontItalic", // or null
    @"integer", @"fontSize",
    @"NSString", @"textColor", // Error ?
    @"NSFont", @"font",
    @"integer", @"alignment",
    @"integer", @"minValue",
    @"integer", @"maxValue",
    @"integer", @"minWidth",
    @"integer", @"maxWidth",
    @"integer", @"width",
    @"integer", @"rowHeight",
    @"NSString", @"displayPatternTitle1",
    @"NSString", @"displayPatternValue1",
    @"NSString", @"data",
    nil
  ] ;
  mGeneratedCode = [NSMutableString new] ;
  [self enumerateBindingsForClass:[NSArrayController class]] ;
  [self enumerateBindingsForClass:[NSObjectController class]] ;
  [self enumerateBindingsForClass:[NSBox class]] ;
  [self enumerateBindingsForClass:[NSBrowser class]] ;
  [self enumerateBindingsForClass:[NSButton class]] ;
  [self enumerateBindingsForClass:[NSButtonCell class]] ;
  [self enumerateBindingsForClass:[NSCollectionView class]] ;
  [self enumerateBindingsForClass:[NSColorWell class]] ;
  [self enumerateBindingsForClass:[NSComboBox class]] ;
  [self enumerateBindingsForClass:[NSDatePicker class]] ;
  [self enumerateBindingsForClass:[NSDatePickerCell class]] ;
//  [self enumerateBindingsForClass:[NSDictionaryController class]] ;
  [self enumerateBindingsForClass:[NSDrawer class]] ;
  [self enumerateBindingsForClass:[NSForm class]] ;
  [self enumerateBindingsForClass:[NSFormCell class]] ;
  [self enumerateBindingsForClass:[NSImageCell class]] ;
  [self enumerateBindingsForClass:[NSImageView class]] ;
  [self enumerateBindingsForClass:[NSLevelIndicator class]] ;
  [self enumerateBindingsForClass:[NSLevelIndicatorCell class]] ;
  [self enumerateBindingsForClass:[NSMatrix class]] ;
  [self enumerateBindingsForClass:[NSMenuItem class]] ;
//  [self enumerateBindingsForClass:[NSMovieView class]] ;
  [self enumerateBindingsForClass:[NSOutlineView class]] ;
  [self enumerateBindingsForClass:[NSPanel class]] ;
  [self enumerateBindingsForClass:[NSPathCell class]] ;
  [self enumerateBindingsForClass:[NSPathControl class]] ;
//  [self enumerateBindingsForClass:[NSPersistentDocument class]] ;
  [self enumerateBindingsForClass:[NSPopUpButton class]] ;
  [self enumerateBindingsForClass:[NSPopUpButtonCell class]] ;
  [self enumerateBindingsForClass:[NSPredicateEditor class]] ;
  [self enumerateBindingsForClass:[NSProgressIndicator class]] ;
  [self enumerateBindingsForClass:[NSScrollView class]] ;
  [self enumerateBindingsForClass:[NSSearchField class]] ;
  [self enumerateBindingsForClass:[NSSecureTextField class]] ;
  [self enumerateBindingsForClass:[NSSecureTextFieldCell class]] ;
  [self enumerateBindingsForClass:[NSSegmentedCell class]] ;
  [self enumerateBindingsForClass:[NSSegmentedControl class]] ;
  [self enumerateBindingsForClass:[NSSlider class]] ;
  [self enumerateBindingsForClass:[NSSliderCell class]] ;
  [self enumerateBindingsForClass:[NSSplitView class]] ;
  [self enumerateBindingsForClass:[NSStepper class]] ;
  [self enumerateBindingsForClass:[NSStepperCell class]] ;
  [self enumerateBindingsForClass:[NSTabView class]] ;
  [self enumerateBindingsForClass:[NSTabViewItem class]] ;
  [self enumerateBindingsForClass:[NSTableColumn class]] ;
  [self enumerateBindingsForClass:[NSTableView class]] ;
  [self enumerateBindingsForClass:[NSTextField class]] ;
  [self enumerateBindingsForClass:[NSTextFieldCell class]] ;
  [self enumerateBindingsForClass:[NSTextView class]] ;
  [self enumerateBindingsForClass:[NSTokenField class]] ;
  [self enumerateBindingsForClass:[NSTokenFieldCell class]] ;
  [self enumerateBindingsForClass:[NSToolbarItem class]] ;
//  [self enumerateBindingsForClass:[NSTreeController class]] ;
  [self enumerateBindingsForClass:[NSView class]] ;
//  [self enumerateBindingsForClass:[NSWindow class]] ;
  NSLog (@"***************** Terminé ********************") ;
  /* [mGeneratedCode
      writeToURL:[NSURL URLWithString:@"file://localhost/Volumes/dev-svn/easyBindings/binding-introspection/predefinedOutletClasses.easyBindings"]
      atomically:YES
      encoding:NSASCIIStringEncoding
      error:nil
    ] ; */
  NSLog (@"%@", mGeneratedCode) ;
}

//-------------------------------------------------------------------------------------*


- (void)applicationDidFinishLaunching:(NSNotification *)aNotification {
  [self displayBindingsNames] ;
}

@end

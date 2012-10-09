//---------------------------------------------------------------------------*

#import "easy-bindings-utilities.h"

//---------------------------------------------------------------------------*
//   presentErrorWindow                                                      *
//---------------------------------------------------------------------------*

static NSMutableArray * gErrorWindows ;

//---------------------------------------------------------------------------*

void presentErrorWindow (const char * inFile,
                         const int inLineNumber,
                         NSString * inErrorMessage) {
  if (nil == gErrorWindows) {
    gErrorWindows = [NSMutableArray new] ;
  }
//---
  NSString * f = [@(inFile) lastPathComponent] ;
  NSMutableString * message = [NSMutableString stringWithCapacity:1000] ;
  [message appendFormat:@"File: %@\n", f] ;
  [message appendFormat:@"Line: %d\n\n", inLineNumber] ;
  [message appendFormat:@"Message: %@", inErrorMessage] ;
  static NSPoint origin = {20.0, 20.0} ;
  const NSRect r = {origin, {300.0, 200.0}} ;
  origin.x += 20.0F ;
  origin.y += 20.0F ;
  NSWindow * window = [[NSWindow alloc] initWithContentRect:r
    styleMask:NSTitledWindowMask | NSClosableWindowMask
    backing:NSBackingStoreBuffered
    defer:YES
    screen:nil
  ] ;
  [window setTitle:@"Outlet Error"] ;
  NSView * contentView = [window contentView] ;
  const NSRect tfRect = NSInsetRect ([contentView bounds], 10.0, 10.0) ;
  NSTextField * tf = [[NSTextField alloc] initWithFrame:tfRect] ;
  [tf setEditable:NO] ;
  [tf setSelectable:YES] ;
  [tf setFont:[NSFont boldSystemFontOfSize:0.0]] ;
  [tf setTextColor:[NSColor redColor]] ;
  [tf setStringValue:message] ;
  [contentView addSubview:tf] ;
  NSBeep () ;
  [window makeKeyAndOrderFront:nil] ;
//---
  [gErrorWindows addObject:window] ;
}

//---------------------------------------------------------------------------*
//   NSData encoding                                                         *
//---------------------------------------------------------------------------*

NSData * dataEncodedValue (id inValue) {
  return [NSArchiver archivedDataWithRootObject:inValue] ;
}

//---------------------------------------------------------------------------*

id valueFromData (NSData * inData) {
  return (inData  == nil) ? nil : [NSUnarchiver unarchiveObjectWithData:inData] ;
}

//---------------------------------------------------------------------------*
//   BOOL                                                                    *
//---------------------------------------------------------------------------*

BOOL boolFromNSNumber (id inValue) {
  return [inValue boolValue] ;
}

//---------------------------------------------------------------------------*

NSNumber * numberEncodedBool (BOOL inValue) {
  return @(inValue) ;
}

//---------------------------------------------------------------------------*
//   SInt16                                                                  *
//---------------------------------------------------------------------------*

SInt16 sint16FromNSNumber (id inValue) {
  return (SInt16) [inValue intValue] ;
}

//---------------------------------------------------------------------------*

NSNumber * numberEncodedSInt16 (SInt16 inValue) {
  return @((SInt32) inValue) ;
}

//---------------------------------------------------------------------------*
//   SInt32                                                                  *
//---------------------------------------------------------------------------*

SInt32 sint32FromNSNumber (id inValue) {
  return [inValue intValue] ;
}

//---------------------------------------------------------------------------*

NSNumber * numberEncodedSInt32 (SInt32 inValue) {
  return @(inValue) ;
}

//---------------------------------------------------------------------------*
//   SInt64                                                                  *
//---------------------------------------------------------------------------*

SInt64 sint64FromNSNumber (id inValue) {
  return [inValue longLongValue] ;
}

//---------------------------------------------------------------------------*

NSNumber * numberEncodedSInt64 (SInt64 inValue) {
  return @(inValue) ;
}

//---------------------------------------------------------------------------*
//   float                                                                   *
//---------------------------------------------------------------------------*

float floatFromNSNumber (id inValue) {
  return [inValue floatValue] ;
}

//---------------------------------------------------------------------------*

NSNumber * numberEncodedFloat (float inValue) {
  return @(inValue) ;
}

//---------------------------------------------------------------------------*
//   double                                                                  *
//---------------------------------------------------------------------------*

double doubleFromNSNumber (id inValue) {
  return [inValue doubleValue] ;
}

//---------------------------------------------------------------------------*

NSNumber * numberEncodedDouble (double inValue) {
  return @(inValue) ;
}

//---------------------------------------------------------------------------*

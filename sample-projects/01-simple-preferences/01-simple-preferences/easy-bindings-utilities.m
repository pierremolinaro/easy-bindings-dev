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
  NSString * f = [[NSString stringWithCString:inFile encoding:NSASCIIStringEncoding] lastPathComponent] ;
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
  return [NSNumber numberWithBool:inValue] ;
}

//---------------------------------------------------------------------------*
//   NSInteger                                                               *
//---------------------------------------------------------------------------*

NSInteger NSIntegerFromNSNumber (id inValue) {
  return [inValue integerValue] ;
}

//---------------------------------------------------------------------------*

NSNumber * numberEncodedNSInteger (NSInteger inValue) {
  return [NSNumber numberWithInteger:inValue] ;
}

//---------------------------------------------------------------------------*
//   double                                                                  *
//---------------------------------------------------------------------------*

double doubleFromNSNumber (id inValue) {
  return [inValue doubleValue] ;
}

//---------------------------------------------------------------------------*

NSNumber * numberEncodedDouble (double inValue) {
  return [NSNumber numberWithDouble:inValue] ;
}

//---------------------------------------------------------------------------*
//   enterSignatureValue                                                     *
//---------------------------------------------------------------------------*

NSInteger enterSignatureValue (const NSInteger inSignature,
                               const NSInteger inValue) {
  NSInteger result = inSignature ;
  NSInteger negative = inSignature < 0 ;
  result <<= 1 ;
  result |= negative ;
  result ^= inValue ;
  return result ;  
}

//---------------------------------------------------------------------------*

//---------------------------------------------------------------------------*

#import "easy-bindings-utilities.h"
#import <objc/runtime.h>

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
  origin.x += 20.0 ;
  origin.y += 20.0 ;
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

#ifdef PM_COCOA_DEBUG
  void routineCheckObject (id inObject,
                           Class inClass,
                           const char * inFile,
                           const NSInteger inLine) {
    if (nil == inObject) {
      presentErrorWindow (inFile, inLine, @"Object is nil") ;
    }else if (! [inObject isKindOfClass:inClass]) {
      NSString * s = [NSString stringWithFormat:
        @"Object is not an instance of %s, but %s",
        class_getName (inClass),
        class_getName ([inObject class])
      ] ;
      presentErrorWindow (inFile, inLine, s) ;
    }  
  }
#endif

//---------------------------------------------------------------------------*

#ifdef PM_COCOA_DEBUG
  void routineAssert (const BOOL inAssertion,
                      NSString * inFormat,
                      const SInt64 inValue1,
                      const SInt64 inValue2,
                      const char * inFile,
                      const NSInteger inLine) {
    if (! inAssertion) {
      NSString * s = [NSString stringWithFormat:
        inFormat,
        inValue1,
        inValue2
      ] ;
      presentErrorWindow (inFile, inLine, s) ;
    }
  }
#endif

//---------------------------------------------------------------------------*

@implementation NSArray (PMArrayDebugCategory)

//---------------------------------------------------------------------------*

#ifdef PM_COCOA_DEBUG
+ (id) arrayWithObject: (id) anObject LOCATION_ARGS {
  if (anObject == nil) {
    NSLog (@"arrayWithObject: argument is nil in:%s:%ld", IN_SOURCE_FILE, IN_SOURCE_LINE) ;
  }
  return [NSArray arrayWithObject:anObject] ; // DO NOT ADD HERE !!!
}
#endif

//---------------------------------------------------------------------------*

#ifdef PM_COCOA_DEBUG
- (id) objectAtIndex: (NSUInteger) inIndex LOCATION_ARGS {
  if (! [self isKindOfClass:[NSArray class]]) {
    NSLog (@"objectAtIndex: receiver is not an instance of NSArray in:%s:%ld", IN_SOURCE_FILE, IN_SOURCE_LINE) ;
  }else if (inIndex >= self.count) {
    NSLog (@"objectAtIndex: index (%llu) >= object count (%llu) in:%s:%ld",
          (UInt64) inIndex, (UInt64) self.count, IN_SOURCE_FILE, IN_SOURCE_LINE) ;  
  }
  return [self objectAtIndex:inIndex] ;
}
#endif

//---------------------------------------------------------------------------*

#ifdef PM_COCOA_DEBUG
- (id) objectAtIndex: (NSUInteger) inIndex LOCATION_ARGS OF_CLASS_ARG {
  id result = [self objectAtIndex:inIndex THERE] ;
  if (! [result isKindOfClass:inClass]) {
    NSLog (@"objectAtIndex: receiver is an instance of %@ class (instead of %@ class) in:%s:%ld",
          [[result class] className], [inClass className], IN_SOURCE_FILE, IN_SOURCE_LINE) ;
  }
  return result ;
}
#endif

//---------------------------------------------------------------------------*

#ifdef PM_COCOA_DEBUG
- (id) lastObject COLON_LOCATION_ARGS {
  if (! [self isKindOfClass:[NSArray class]]) {
    NSLog (@"<lastObject>: receiver is not an instance of NSArray in:%s:%ld", IN_SOURCE_FILE, IN_SOURCE_LINE) ;
  }
  return [self lastObject] ;
}
#endif

//---------------------------------------------------------------------------*

#ifdef PM_COCOA_DEBUG
- (id) lastObject COLON_LOCATION_ARGS OF_CLASS_ARG {
  if (! [self isKindOfClass:[NSArray class]]) {
    NSLog (@"<lastObject>: receiver is not an instance of NSArray in:%s:%ld", IN_SOURCE_FILE, IN_SOURCE_LINE) ;
  }
  id result = [self lastObject] ;
  if (! [result isKindOfClass:inClass]) {
    NSLog (@"<lastObject>: receiver is an instance of %@ class (instead of %@ class) in:%s:%ld",
          [[result class] className], [inClass className], IN_SOURCE_FILE, IN_SOURCE_LINE) ;
  }
  return result ;
}
#endif

//---------------------------------------------------------------------------*

//--- Define DEBUG_ENUMERATORS (in PMCocoaCallsDebug.h), in order to detect
//    "Collection ... was mutated while being enumerated" exception
#ifdef PM_COCOA_DEBUG
- (NSEnumerator *) objectEnumerator COLON_LOCATION_ARGS {
  #ifdef DEBUG_ENUMERATORS
    NSLog (@"%p <objectEnumerator> in:%s:%d", self, IN_SOURCE_FILE, IN_SOURCE_LINE) ;
  #endif
  return [self objectEnumerator] ; // DO NOT ADD COLON_HERE !!!
}
#endif

//---------------------------------------------------------------------------*

@end

//---------------------------------------------------------------------------*

@implementation NSMutableSet (PMMutableSetDebugCategory)

//---------------------------------------------------------------------------*

#ifdef PM_COCOA_DEBUG
- (void) addObject: (id) inObject LOCATION_ARGS {
  if (! [self isKindOfClass:[NSMutableSet class]]) {
    NSLog (@"addObject: receiver is not an instance of NSMutableSet in sourceFile:%s:%ld", IN_SOURCE_FILE, IN_SOURCE_LINE) ;
  }else if (inObject == nil) {
    NSLog (@"in '%s' file at line %ld, attempt to insert nil", IN_SOURCE_FILE, IN_SOURCE_LINE) ;  
  }
  [self addObject:inObject] ;
}
#endif

//---------------------------------------------------------------------------*

#ifdef PM_COCOA_DEBUG
- (void) removeAllObjects COLON_LOCATION_ARGS {
  if (! [self isKindOfClass:[NSMutableSet class]]) {
    NSLog (@"removeAllObjects: receiver is not an instance of NSMutableSet in source file:%s:%ld", IN_SOURCE_FILE, IN_SOURCE_LINE) ;
  }
  [self removeAllObjects] ;
}
#endif

//---------------------------------------------------------------------------*

#ifdef PM_COCOA_DEBUG
- (void) removeObject: (id) inObject LOCATION_ARGS {
  if (! [self isKindOfClass:[NSMutableSet class]]) {
    NSLog (@"removeObject: receiver is not an instance of NSMutableSet in source file:%s:%ld", IN_SOURCE_FILE, IN_SOURCE_LINE) ;
  }else if (inObject == nil) {
    NSLog (@"removeObject: argument is nil in source file:%s:%ld", IN_SOURCE_FILE, IN_SOURCE_LINE) ;
  }
  [self removeObject:inObject] ;
}
#endif

//---------------------------------------------------------------------------*

@end

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
//   Font                                                                    *
//---------------------------------------------------------------------------*

NSData * dataFromFont (NSFont * inFont) {
  return [NSArchiver archivedDataWithRootObject:inFont] ;
}

//---------------------------------------------------------------------------*

NSFont * fontFromData (NSData * inDataEncodeFont) {
  return (inDataEncodeFont == nil)
    ? nil
    : [NSUnarchiver unarchiveObjectWithData:inDataEncodeFont]
  ;
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

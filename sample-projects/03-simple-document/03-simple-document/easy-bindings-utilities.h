
#import <Cocoa/Cocoa.h>

//---------------------------------------------------------------------------*
//   presentErrorWindow                                                      *
//---------------------------------------------------------------------------*

void presentErrorWindow (const char * inFile,
                         const int inLine,
                         NSString * inErrorMessage) ;

//---------------------------------------------------------------------------*

#ifdef PM_COCOA_DEBUG
  #define macroCheckObject(OBJECT,TYPE) routineCheckObject(OBJECT, [TYPE class], __FILE__, __LINE__)
  void routineCheckObject (id inObject, Class inClass, const char * inFile, const int inLine) ;
#else
  #define macroCheckObject(OBJECT,TYPE)
#endif

//---------------------------------------------------------------------------*

#ifdef PM_COCOA_DEBUG
  #define macroAssert(EXP,MESSAGE,VALUE1,VALUE2) routineAssert(EXP, MESSAGE, VALUE1, VALUE2, __FILE__, __LINE__)
  void routineAssert (const BOOL inAssertion,
                      NSString * inFormat,
                      const SInt64 inValue1,
                      const SInt64 inValue2,
                      const char * inFile,
                      const int inLine) ;
#else
  #define macroAssert(EXP,MESSAGE,VALUE1,VALUE2)
#endif

//---------------------------------------------------------------------------*

#ifdef PM_COCOA_DEBUG
  #define HERE                  atFile:__FILE__  atLine:__LINE__
  #define COLON_HERE            :__FILE__  atLine:__LINE__
  #define THERE                 atFile:IN_SOURCE_FILE  atLine:IN_SOURCE_LINE
  #define COLON_THERE           IN_SOURCE_FILE  atLine:IN_SOURCE_LINE
  #define LOCATION_ARGS         atFile: (const char *) IN_SOURCE_FILE  atLine: (NSInteger) IN_SOURCE_LINE
  #define COLON_LOCATION_ARGS   : (const char *) IN_SOURCE_FILE  atLine: (NSInteger) IN_SOURCE_LINE
  #define OF_CLASS_ARG          ofClass: (Class) inClass
  #define OFCLASS(className)    ofClass:[className class]
#else
  #define HERE
  #define COLON_HERE
  #define THERE
  #define COLON_THERE
  #define LOCATION_ARGS
  #define COLON_LOCATION_ARGS
  #define OF_CLASS_ARG
  #define OFCLASS(className)
#endif

//---------------------------------------------------------------------------*

#define value_for_key  valueForKey
#define set_value      setValue
#define for_key        forKey

//---------------------------------------------------------------------------*

@interface NSArray (PMArrayDebugCategory)

#ifdef PM_COCOA_DEBUG
+ (id) arrayWithObject: (id) anObject LOCATION_ARGS ;

- (id) objectAtIndex: (NSUInteger) inIndex LOCATION_ARGS ;

- (id) objectAtIndex: (NSUInteger) inIndex LOCATION_ARGS OF_CLASS_ARG ;

- (id) lastObject COLON_LOCATION_ARGS ;

- (id) lastObject COLON_LOCATION_ARGS OF_CLASS_ARG ;

- (NSEnumerator *) objectEnumerator COLON_LOCATION_ARGS ;
#endif

@end

//---------------------------------------------------------------------------*

@interface NSMutableSet (PMMutableSetDebugCategory)

#ifdef PM_COCOA_DEBUG
- (void) addObject: (id) inObject LOCATION_ARGS ;

- (void) removeAllObjects COLON_LOCATION_ARGS ;

- (void) removeObject: (id) inObject LOCATION_ARGS ;
#endif

@end

//---------------------------------------------------------------------------*
//   NSData encoding                                                         *
//---------------------------------------------------------------------------*

NSData * dataEncodedValue (id inValue) ;

id valueFromData (NSData * inData) ;

//---------------------------------------------------------------------------*
//   BOOL                                                                    *
//---------------------------------------------------------------------------*

BOOL boolFromNSNumber (id inValue) ;

NSNumber * numberEncodedBool (BOOL inValue) ;

//---------------------------------------------------------------------------*
//   NSInteger                                                               *
//---------------------------------------------------------------------------*

NSInteger NSIntegerFromNSNumber (id inValue) ;

NSNumber * numberEncodedNSInteger (NSInteger inValue) ;

//---------------------------------------------------------------------------*
//   double                                                                  *
//---------------------------------------------------------------------------*

double doubleFromNSNumber (id inValue) ;

NSNumber * numberEncodedDouble (double inValue) ;

//---------------------------------------------------------------------------*
//   Font                                                                    *
//---------------------------------------------------------------------------*

NSData * dataFromFont (NSFont * inFont) ;

NSFont * fontFromData (NSData * inDataEncodeFont) ;

//---------------------------------------------------------------------------*
//   enterSignatureValue                                                     *
//---------------------------------------------------------------------------*

NSInteger enterSignatureValue (const NSInteger inSignature,
                               const NSInteger inValue) ;

//---------------------------------------------------------------------------*

#if __has_feature(objc_arc)
  #define macroSuperDealloc
#else
  #define macroSuperDealloc [super dealloc]
#endif

//---------------------------------------------------------------------------*

#if __has_feature(objc_arc)
  #define macroRetain(OBJECT)
#else
  #define macroRetain(OBJECT) [OBJECT retain]
#endif

//---------------------------------------------------------------------------*

#if __has_feature(objc_arc)
  #define macroReleaseSetToNil(OBJECT) OBJECT = nil
#else
  #define macroReleaseSetToNil(OBJECT) { [OBJECT release] ; OBJECT = nil ; }
#endif

//---------------------------------------------------------------------------*

#if __has_feature(objc_arc)
  #define macroAutorelease(OBJECT)
#else
  #define macroAutorelease(OBJECT) [OBJECT autorelease]
#endif

//---------------------------------------------------------------------------*

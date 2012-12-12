
#import <Cocoa/Cocoa.h>

//---------------------------------------------------------------------------*
//   presentErrorWindow                                                      *
//---------------------------------------------------------------------------*

void presentErrorWindow (const char * inFile,
                         const int inLine,
                         NSString * inErrorMessage) ;


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
//   enterSignatureValue                                                     *
//---------------------------------------------------------------------------*

NSInteger enterSignatureValue (const NSInteger inSignature,
                               const NSInteger inValue) ;

//---------------------------------------------------------------------------*

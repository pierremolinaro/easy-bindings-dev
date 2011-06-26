//---------------------------------------------------------------------------*

#import "easy-bindings-utilities.h"

//---------------------------------------------------------------------------*

NSData * dataEncodedValue (id inValue) {
  return [NSArchiver archivedDataWithRootObject:inValue] ;
}

//---------------------------------------------------------------------------*

id valueFromData (NSData * inData) {
  return (inData  == nil) ? nil : [NSUnarchiver unarchiveObjectWithData:inData] ;
}

//---------------------------------------------------------------------------*

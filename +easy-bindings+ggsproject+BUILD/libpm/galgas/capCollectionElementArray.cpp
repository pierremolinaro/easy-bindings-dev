//--------------------------------------------------------------------------------------------------
//
//  capCollectionElementArray
//
//  This file is part of libpm library
//
//  Copyright (C) 2010, ..., 2023 Pierre Molinaro.
//
//  e-mail : pierre@pcmolinaro.name
//
//  This library is free software; you can redistribute it and/or modify it under the terms of the GNU Lesser General
//  Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option)
//  any later version.
//
//  This program is distributed in the hope it will be useful, but WITHOUT ANY WARRANTY; without even the implied
//  warranty of MERCHANDIBILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
//  more details.
//
//--------------------------------------------------------------------------------------------------

#include "capCollectionElementArray.h"
#include "MF_MemoryControl.h"
#include "String-class.h"
#include "Compiler.h"

//--------------------------------------------------------------------------------------------------
//   capCollectionRoot
//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark capCollectionRoot
#endif

//--------------------------------------------------------------------------------------------------

class capCollectionRoot : public SharedObject {
//--- Default constructor
  public: capCollectionRoot (void) ;

//--- Special copy constructor
  public: capCollectionRoot (const capCollectionRoot * inSource) ;

//--- Destructor
  public: virtual ~ capCollectionRoot (void) ;

//--- No copy
  private: capCollectionRoot (const capCollectionRoot &) ;
  private: capCollectionRoot & operator = (const capCollectionRoot &) ;

//--- Private properties
  private: capCollectionElement * mArray ;
  private: uint32_t mCapacity ;
  private: uint32_t mCount ;

//--- Friend
  friend class capCollectionElementArray ;
} ;

//--------------------------------------------------------------------------------------------------

capCollectionRoot::capCollectionRoot (void) :
SharedObject (HERE),
mArray (nullptr),
mCapacity (0),
mCount (0) {
}

//--------------------------------------------------------------------------------------------------

capCollectionRoot::capCollectionRoot (const capCollectionRoot * inSource) :
SharedObject (HERE),
mArray (nullptr),
mCapacity (0),
mCount (0) {
  macroValidPointer (inSource) ;
  if (inSource->mCount > 0) {
    macroMyNewArray (mArray, capCollectionElement, inSource->mCount) ;
    for (uint32_t i=0 ; i<inSource->mCount ; i++) {
      mArray [i] = inSource->mArray [i] ;
    }
    mCapacity = inSource->mCount ;
    mCount = inSource->mCount ;
  }
}

//--------------------------------------------------------------------------------------------------

capCollectionRoot::~ capCollectionRoot (void) {
  macroMyDeleteArray (mArray) ;
}

//--------------------------------------------------------------------------------------------------
//   capCollectionElementArray
//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark capCollectionElementArray
#endif

//--------------------------------------------------------------------------------------------------

capCollectionElementArray::capCollectionElementArray (void) :
mSharedRoot (nullptr) {
}

//--------------------------------------------------------------------------------------------------

capCollectionElementArray::capCollectionElementArray (const uint32_t inCapacity) :
mSharedRoot (nullptr) {
  setCapacity (inCapacity) ;
}

//--------------------------------------------------------------------------------------------------

capCollectionElementArray::capCollectionElementArray (const capCollectionElementArray & inSource) :
mSharedRoot (nullptr) {
  macroAssignSharedObject (mSharedRoot, inSource.mSharedRoot) ;
}

//--------------------------------------------------------------------------------------------------

capCollectionElementArray & capCollectionElementArray::operator = (const capCollectionElementArray & inSource) {
  if (mSharedRoot != inSource.mSharedRoot) {
    macroAssignSharedObject (mSharedRoot, inSource.mSharedRoot) ;
  }
  return *this ;
}

//--------------------------------------------------------------------------------------------------

capCollectionElementArray::~capCollectionElementArray (void) {
  macroDetachSharedObject (mSharedRoot) ;
}

//--------------------------------------------------------------------------------------------------

uint32_t capCollectionElementArray::count (void) const {
  return (nullptr == mSharedRoot) ? 0 : mSharedRoot->mCount ;
}

//--------------------------------------------------------------------------------------------------

uint32_t capCollectionElementArray::capacity (void) const {
  return (nullptr == mSharedRoot) ? 0 : mSharedRoot->mCapacity ;
}

//--------------------------------------------------------------------------------------------------

void capCollectionElementArray::insulateOrCreate (void) {
  if (nullptr == mSharedRoot) {
    macroMyNew (mSharedRoot, capCollectionRoot) ;
  }else if (!mSharedRoot->isUniquelyReferenced()) { // Copy
    capCollectionRoot * newRoot = nullptr ;
    macroMyNew (newRoot, capCollectionRoot (mSharedRoot)) ;
    macroAssignSharedObject (mSharedRoot, newRoot) ;
    macroDetachSharedObject (newRoot) ;
  }
}

//--------------------------------------------------------------------------------------------------

void capCollectionElementArray::setCapacity (const uint32_t inNewCapacity) {
  insulateOrCreate () ;
  macroUniqueSharedObject (mSharedRoot) ;
  if (inNewCapacity > capacity ()) {
    uint32_t newCapacity = (capacity () > 8) ? capacity () : 8 ;
    while (newCapacity < inNewCapacity) {
      newCapacity <<= 1 ;
    }
    capCollectionElement * newArray = nullptr ;
    macroMyNewArray (newArray, capCollectionElement, newCapacity) ;
    for (uint32_t i=0 ; i<count () ; i++) {
      newArray [i] = mSharedRoot->mArray [i] ;
    }
    macroMyDeleteArray (mSharedRoot->mArray) ; mSharedRoot->mArray = newArray ;
    mSharedRoot->mCapacity = newCapacity ;
  }
}

//--------------------------------------------------------------------------------------------------

void capCollectionElementArray::appendObject (const capCollectionElement & inObject) {
  setCapacity (count () + 1) ;
  macroUniqueSharedObject (mSharedRoot) ;
  macroAssert (count () < capacity (), "mCount (%lld) >= mCapacity (%lld)", count (), capacity ()) ;
  mSharedRoot->mArray [mSharedRoot->mCount] = inObject ;
  mSharedRoot->mCount ++ ;
}

//--------------------------------------------------------------------------------------------------

void capCollectionElementArray::insertObjectAtIndex (const capCollectionElement & inObject,
                                                     const uint32_t inInsertionIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  setCapacity (count () + 1) ;
  macroUniqueSharedObject (mSharedRoot) ;
  macroAssert (count () < capacity (), "mCount (%lld) >= mCapacity (%lld)", count (), capacity ()) ;
  if (inInsertionIndex <= mSharedRoot->mCount) {
    for (uint32_t i=mSharedRoot->mCount ; i>inInsertionIndex ; i--) {
      mSharedRoot->mArray [i] = mSharedRoot->mArray [i-1] ;
    }
    mSharedRoot->mArray [inInsertionIndex] = inObject ;
    mSharedRoot->mCount ++ ;
  }else{
    String s ("insertAtIndex: insertion index (") ;
    s.appendUnsigned (inInsertionIndex) ;
    s.appendCString (") > length (") ;
    s.appendUnsigned (count ()) ;
    s.appendCString (")") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void capCollectionElementArray::removeObjectAtIndex (capCollectionElement & outObject,
                                                     const uint32_t inIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  insulateOrCreate () ;
  macroUniqueSharedObject (mSharedRoot) ;
  macroAssert (count () > 0, "empty array", 0, 0) ;
  if (inIndex < mSharedRoot->mCount) {
    outObject = mSharedRoot->mArray [inIndex] ;
    for (uint32_t i=inIndex + 1 ; i<mSharedRoot->mCount ; i++) {
      mSharedRoot->mArray [i-1] = mSharedRoot->mArray [i] ;
    }
    mSharedRoot->mCount -- ;
    mSharedRoot->mArray [mSharedRoot->mCount].drop () ;
  }else{
    String s ("removeObjectAtIndex: index (") ;
    s.appendUnsigned (inIndex) ;
    s.appendCString (") >= length (") ;
    s.appendUnsigned (count ()) ;
    s.appendCString (")") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void capCollectionElementArray::removeFirstObject (capCollectionElement & outObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  insulateOrCreate () ;
  macroUniqueSharedObject (mSharedRoot) ;
  if (count () == 0) {
    String s = "removeFirstObject: empty list" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    outObject = mSharedRoot->mArray [0] ;
    for (uint32_t i=1 ; i<mSharedRoot->mCount ; i++) {
      mSharedRoot->mArray [i-1] = mSharedRoot->mArray [i] ;
    }
    mSharedRoot->mCount -- ;
    mSharedRoot->mArray [mSharedRoot->mCount].drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void capCollectionElementArray::readFirstObject (capCollectionElement & outObject,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  if (count () == 0) {
    String s = "firstObject: empty list" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    outObject = mSharedRoot->mArray [0] ;
  }
}

//--------------------------------------------------------------------------------------------------

void capCollectionElementArray::removeLastObject (capCollectionElement & outObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  insulateOrCreate () ;
  macroUniqueSharedObject (mSharedRoot) ;
  if (count () == 0) {
    String s = "removeLastObject: empty list" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    mSharedRoot->mCount -- ;
    outObject = mSharedRoot->mArray [mSharedRoot->mCount] ;
    mSharedRoot->mArray [mSharedRoot->mCount].drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void capCollectionElementArray::readLastObject (capCollectionElement & outObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  if (count () == 0) {
    String s = "lastObject: empty list" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    outObject = mSharedRoot->mArray [mSharedRoot->mCount - 1] ;
  }
}

//--------------------------------------------------------------------------------------------------

void capCollectionElementArray::replaceObjectAtIndex (const capCollectionElement & inObject,
                                                      const uint32_t inIndex
                                                      COMMA_LOCATION_ARGS) {
  insulateOrCreate () ;
  macroUniqueSharedObject (mSharedRoot) ;
  macroAssertThere (inIndex < count (), "inIndex (%ld) >= mCount (%ld)", inIndex, count ()) ;
  mSharedRoot->mArray [inIndex] = inObject ;
}

//--------------------------------------------------------------------------------------------------

capCollectionElement capCollectionElementArray::objectAtIndex (const uint32_t inIndex
                                                               COMMA_LOCATION_ARGS) const {
  macroAssertThere (inIndex < count (), "inIndex (%ld) >= mCount (%ld)", inIndex, count ()) ;
  return mSharedRoot->mArray [inIndex] ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * capCollectionElementArray::uniquelyReferencedPointerAtIndex (const uint32_t inIndex
                                                                                  COMMA_LOCATION_ARGS) {
  insulateOrCreate () ;
  macroUniqueSharedObject (mSharedRoot) ;
  macroAssertThere (inIndex < count (), "inIndex (%ld) >= mCount (%ld)", inIndex, count ()) ;
  mSharedRoot->mArray [inIndex].insulate () ;
  return mSharedRoot->mArray [inIndex].ptr () ;
}

//--------------------------------------------------------------------------------------------------

const cCollectionElement * capCollectionElementArray::pointerAtIndexForReadAccess (const uint32_t inIndex
                                                                                   COMMA_LOCATION_ARGS) const {
  macroAssertThere (inIndex < count (), "inIndex (%ld) >= mCount (%ld)", inIndex, count ()) ;
  return mSharedRoot->mArray [inIndex].ptr () ;
}

//--------------------------------------------------------------------------------------------------

void capCollectionElementArray::removeObjectAtIndex (const uint32_t inIndex) {
  insulateOrCreate () ;
  macroUniqueSharedObject (mSharedRoot) ;
  macroAssert (count () > inIndex, "mCount (%ld) <= inIndex (%lld)", count (), inIndex) ;
  for (uint32_t i=inIndex+1 ; i<mSharedRoot->mCount ; i++) {
    mSharedRoot->mArray [i - 1] = mSharedRoot->mArray [i] ;
  }
  mSharedRoot->mCount -- ;
  mSharedRoot->mArray [mSharedRoot->mCount].drop () ;
}

//--------------------------------------------------------------------------------------------------

void capCollectionElementArray::predendObject (const capCollectionElement & inObject) {
  setCapacity (count () + 1) ;
  macroUniqueSharedObject (mSharedRoot) ;
  macroAssert (count () < capacity (), "mCount (%lld) >= mCapacity (%lld)", count (), capacity ()) ;
  for (uint32_t i=count () ; i>0 ; i--) {
    mSharedRoot->mArray [i] = mSharedRoot->mArray [i-1] ;
  }
  mSharedRoot->mArray [0] = inObject ;
  mSharedRoot->mCount ++ ;
}

//--------------------------------------------------------------------------------------------------

void capCollectionElementArray::removeAllObjects (void) {
  insulateOrCreate () ;
  macroUniqueSharedObject (mSharedRoot) ;
  for (uint32_t i=0 ; i<mSharedRoot->mCount ; i++) {
    mSharedRoot->mArray [i].drop () ;
  }
  mSharedRoot->mCount = 0 ;
}

//--------------------------------------------------------------------------------------------------

void capCollectionElementArray::appendObjects (const capCollectionElementArray inObjects) {
  const uint32_t operandCount = inObjects.count () ;
  if (operandCount > 0) {
    const uint32_t receiverCount = count () ;
    setCapacity (receiverCount + operandCount) ;
    macroUniqueSharedObject (mSharedRoot) ;
    for (uint32_t i=0 ; i<operandCount ; i++) {
      mSharedRoot->mArray [receiverCount + i] = inObjects.mSharedRoot->mArray [i] ;
    }
    mSharedRoot->mCount += operandCount ;
  }
}

//--------------------------------------------------------------------------------------------------

void capCollectionElementArray::subListToIndex (capCollectionElementArray & outSubList,
                                                const uint32_t inIndex,
                                                bool & outOk,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  outSubList.removeAllObjects () ;
  outOk = false ;
  if (inIndex >= count ()) {
    String s ;
    s.appendCString ("Cannot get a sub list from index ") ;
    s.appendUnsigned (inIndex) ;
    s.appendCString (" with a list of length ") ;
    s.appendUnsigned (count ()) ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const uint32_t length = inIndex + 1 ;
    outSubList.setCapacity (length) ;
    for (uint32_t i=0 ; i<length ; i++) {
      outSubList.appendObject (mSharedRoot->mArray [i]) ;
    }
    outOk = true ;
  }
}

//--------------------------------------------------------------------------------------------------

void capCollectionElementArray::subListWithRange (capCollectionElementArray & outSubList,
                                                  const uint32_t inStartIndex,
                                                  const uint32_t inLength,
                                                  bool & outOk,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  outOk = false ;
  outSubList.removeAllObjects () ;
  if ((inStartIndex + inLength) > count ()) {
    String s ;
    s.appendCString ("Cannot get a sub list of range [") ;
    s.appendUnsigned (inStartIndex) ;
    s.appendCString (":") ;
    s.appendUnsigned (inLength) ;
    s.appendCString ("] from a list of length ") ;
    s.appendUnsigned (count ()) ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    outSubList.setCapacity (inLength) ;
    for (uint32_t i=0 ; i<inLength ; i++) {
      outSubList.appendObject (mSharedRoot->mArray [inStartIndex + i]) ;
    }
    outOk = true ;
  }
}

//--------------------------------------------------------------------------------------------------

void capCollectionElementArray::subListFromIndex (capCollectionElementArray & outSubList,
                                                  const uint32_t inIndex,
                                                  bool & outOk,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  outOk = false ;
  outSubList.removeAllObjects () ;
  if (inIndex > count ()) {
    String s ("Cannot get a sub list from index ") ;
    s.appendUnsigned (inIndex) ;
    s.appendCString (" with a list of length ") ;
    s.appendUnsigned (count ()) ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const uint32_t length = count () - inIndex ;
    outSubList.setCapacity (length) ;
    for (uint32_t i=0 ; i<length ; i++) {
      outSubList.appendObject (mSharedRoot->mArray [inIndex + i]) ;
    }
    outOk = true ;
  }
}

//--------------------------------------------------------------------------------------------------

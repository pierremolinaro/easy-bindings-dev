//--------------------------------------------------------------------------------------------------
//
//  AbstractOutputStream : an abstract output stream class
//
//  This file is part of libpm library
//
//  Copyright (C) 1997, ..., 2023 Pierre Molinaro.
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

#include "AbstractOutputStream.h"
#include "String-class.h"
#include "DateTime.h"
#include "unicode_character_cpp.h"
#include "unicode_string_routines.h"

//--------------------------------------------------------------------------------------------------

#include <string.h>
#include <ctype.h>

#define __STDC_FORMAT_MACROS // This is required for GCC for windows
#include <inttypes.h>

//--------------------------------------------------------------------------------------------------

AbstractOutputStream::AbstractOutputStream (void) :
mIndentation (0),
mStartingLine (true) {
}

//--------------------------------------------------------------------------------------------------

AbstractOutputStream::~AbstractOutputStream (void) {
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::addString (const char * inCstring) {
  if (inCstring != nullptr) {
    genericCharArrayOutput (inCstring, (int32_t) (strlen (inCstring) & UINT32_MAX)) ;
  }
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::genericCharArrayOutput (const char * inCharArray, const int32_t inArrayCount) {
  if (mIndentation == 0) {
    performActualCharArrayOutput (inCharArray, inArrayCount) ;
  }else if (inArrayCount > 0) {
    for (int32_t i=0 ; i<inArrayCount ; i++) {
      if (mStartingLine) {
        for (int32_t j=0 ; j<mIndentation ; j++) {
          performActualCharArrayOutput (" ", 1) ;
        }
      }
      performActualCharArrayOutput (& (inCharArray [i]) , 1) ;
      mStartingLine = inCharArray [i] == '\n' ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::genericUnicodeArrayOutput (const utf32 * inCharArray, const int32_t inArrayCount) {
  if (mIndentation == 0) {
    performActualUnicodeArrayOutput (inCharArray, inArrayCount) ;
  }else if (inArrayCount > 0) {
    for (int32_t i=0 ; i<inArrayCount ; i++) {
      if (mStartingLine) {
        for (int32_t j=0 ; j<mIndentation ; j++) {
          const utf32 space [1] = {TO_UNICODE (' ')} ;
          performActualUnicodeArrayOutput (space, 1) ;
        }
      }
      performActualUnicodeArrayOutput (& (inCharArray [i]) , 1) ;
      mStartingLine = UNICODE_VALUE (inCharArray [i]) == '\n' ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark << String
#endif

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::addNL (void) {
  addString ("\n") ;
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::addString (const String inString) {
  genericUnicodeArrayOutput (inString.utf32String (HERE), inString.length ()) ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark << char *
#endif

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::addString (const char * inCstring, const int32_t inCount) {
  genericCharArrayOutput (inCstring, inCount) ;
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::appendUTF32String (const utf32 * inUTF32String) {
  genericUnicodeArrayOutput (inUTF32String, utf32_strlen (inUTF32String)) ;
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::appendUTF32LiteralStringConstant (const String & inString) {
  const utf32 * str = inString.utf32String (HERE) ;
  addUnicodeChar (TO_UNICODE ('{') COMMA_HERE) ;
  while (UNICODE_VALUE (* str) != 0) {
    const utf32 c = * str ;
    addString ("\n  TO_UNICODE (") ;
    if (isprint ((int) UNICODE_VALUE (c))) {
      addStringAsCLiteralCharConstant (c) ;
    }else{
      addUnsigned (UNICODE_VALUE (c)) ;
    }
    addString ("),") ;
    str ++ ;
  }
  addString ("\n  TO_UNICODE (0)\n}") ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark << char
#endif

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::addChar (const char inValue) {
  addUnicodeChar (TO_UNICODE (uint32_t (inValue)) COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::addUnicodeChar (const utf32 inUnicodeCharacter COMMA_UNUSED_LOCATION_ARGS) {
  genericUnicodeArrayOutput (& inUnicodeCharacter, 1) ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark << double
#endif

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::addDouble (const double inValue) {
  char s [40] ;
  snprintf (s, 40, "%g", inValue) ;
  addString (s) ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark uint64_t
#endif

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::addUnsigned (const uint64_t inValue) {
  char s [32] ;
  snprintf (s, 31, "%" PRIu64, inValue) ;
  addString (s) ;
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::addUnsignedHex16 (const uint64_t inValue) {
  char s [32] ;
  snprintf (s, 31, "%016" PRIX64, inValue) ;
  addString (s) ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark << int64_t
#endif

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::addSigned (const int64_t inValue) {
  char s [32] ;
  snprintf (s, 31, "%" PRId64, inValue) ;
  addString (s) ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Bool
#endif

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::addBool (const bool inValue) {
  addString (inValue ? "true" : "false") ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark << uint32_t
#endif

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::addUnsignedWithZeroFill (const uint64_t inValue, const uint32_t inWidth) {
  char s [32] ;
  snprintf (s, 31, "%" PRIu64, inValue) ;
  for (uint32_t i = uint32_t (strlen (s)) ; i < inWidth ; i++) {
    addString (" ") ;
  }
  addString (s) ;
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::addUnsignedHex (const uint64_t inValue) {
  char s [32] ;
  snprintf (s, 31, "%" PRIX64, inValue) ;
  addString (s) ;
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::adddHex0xUnsigned (const uint64_t inValue) {
  char s [32] ;
  snprintf (s, 31, "0x%" PRIX64, inValue) ;
  addString (s) ;
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::addUnsignedHex2 (const uint64_t inValue) {
  char s [32] ;
  snprintf (s, 31, "%02" PRIX64, inValue & 0xFF) ;
  addString (s) ;
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::addUnsignedHex4 (const uint64_t inValue) {
  char s [32] ;
  snprintf (s, 31, "%04" PRIX64, inValue & 0xFFFF) ;
  addString (s) ;
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::addUnsignedHex8 (const uint64_t inValue) {
  char s [32] ;
  snprintf (s, 31, "%08" PRIX64, inValue) ;
  addString (s) ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark << void *
#endif

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::addPointer (const void * inValue) {
  char s [30] ;
  snprintf (s, 29, "%p", inValue) ;
  addString (s) ;
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::addSpaces (const int32_t inSpaceCount) {
  for (int32_t i=0 ; i<inSpaceCount ; i++) {
    addUnicodeChar (TO_UNICODE (' ') COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::addStringMultiple (const String & inString, const int32_t inRepeatCount) {
  for (int32_t i=0 ; i<inRepeatCount ; i++) {
    addString (inString) ;
  }
}

//--------------------------------------------------------------------------------------------------
//                          Comments
//--------------------------------------------------------------------------------------------------

static const int32_t kCommentMaxLength = 99 ;

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::addHyphenLineCommentWithoutExtraBlankLine (const String & inLineCommentPrefix) {
  addString (inLineCommentPrefix) ;
  for (int32_t i=1 ; i<kCommentMaxLength ; i++) {
    addString ("-") ;
  }
  addString ("\n") ;
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::appendTitleComment (const String & inLineCommentPrefix,
                                          const String & inCommentString) {
  addHyphenLineCommentWithoutExtraBlankLine (inLineCommentPrefix) ;
  addSpaceLineComment (inLineCommentPrefix) ;
  addCenterJustifiedComment (inLineCommentPrefix, inCommentString) ;
  addSpaceLineComment (inLineCommentPrefix) ;
  addCppHyphenLineComment (inLineCommentPrefix) ;
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::addComment (const String & inLineCommentPrefix,
                                     const String & inCommentString) {
  addString (inLineCommentPrefix) ;
  addString (" ") ;
  addString (inCommentString) ;
  addString ("\n") ;
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::addCenterJustifiedComment (const String & inLineCommentPrefix,
                                                      const String & inCommentString) {
  const int32_t commentLength = inCommentString.length () ;
  const int32_t n = (kCommentMaxLength - 3 - commentLength) / 2 ;

  addString (inLineCommentPrefix) ;
  for (int32_t i=0 ; i<n ; i++) {
   addString (" ") ;
  }
  addString (inCommentString) ;
  const int32_t fin = kCommentMaxLength - n - commentLength - 2 ;
  for (int32_t j=0 ; j<=fin ; j++) {
    addString (" ") ;
  }
  addString ("\n") ;
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::addSpaceLineComment (const String & inLineCommentPrefix) {
  addString (inLineCommentPrefix) ;
//  for (int32_t i=1 ; i<kCommentMaxLength ; i++) {
//    addString (" ") ;
//  }
  addString ("\n") ;
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::addCppHyphenLineComment (const String & inLineCommentPrefix) {
  addHyphenLineCommentWithoutExtraBlankLine (inLineCommentPrefix) ;
  addString ("\n") ;
}

//--------------------------------------------------------------------------------------------------
//                          C Comments
//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::append_C_HyphenLineComment (void) {
  addString ("/*") ;
  for (int32_t i=0 ; i<(kCommentMaxLength-4) ; i++) {
    addString ("-") ;
  }
  addString ("*/\n") ;
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::append_C_SpaceLineComment (void) {
  addString ("/*") ;
  for (int32_t i=0 ; i<(kCommentMaxLength-4) ; i++) {
    addString (" ") ;
  }
  addString ("*/\n") ;
}

//--------------------------------------------------------------------------------------------------
//                        C++ Comments
//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::addCppHyphenLineCommentWithoutExtraBlankLine (void) {
  addHyphenLineCommentWithoutExtraBlankLine ("//") ;
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::addCppTitleComment (const String & inCommentString) {
  appendTitleComment ("//", inCommentString) ;
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::addCppTitleComment (const char * inCommentString) {
  appendTitleComment ("//", inCommentString) ;
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::addCppComment (const String & inCommentString) {
  addComment ("//", inCommentString) ;
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::addCppCenterJustifiedComment (const String & inCommentString) {
  addCenterJustifiedComment ("//", inCommentString) ;
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::addCppSpaceLineComment (void) {
  addSpaceLineComment ("//") ;
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::addCppHyphenLineComment (void) {
  addCppHyphenLineComment ("//") ;
}

//--------------------------------------------------------------------------------------------------

static void internalWriteCstringConstantWithoutDelimiters (AbstractOutputStream & ioStream,
                                                           const String & inString,
                                                           const int32_t inStringLength,
                                                           const int32_t inLineMaxLength) {
  int32_t currentColumn = 0 ;
  for (int32_t i=0 ; i<inStringLength ; i++) {
    if (currentColumn > inLineMaxLength) {
      ioStream.addString ("\"\n  \"") ;
      currentColumn = 0 ;
    }
    currentColumn ++ ;
    const utf32 c = inString (i COMMA_HERE) ;
    switch (UNICODE_VALUE (c)) {
    case '\0' :
      break ;
    case '\a' :
      ioStream.addString ("\\a") ;
      break ;
    case '\b' :
      ioStream.addString ("\\b") ;
      break ;
    case '\f' :
      ioStream.addString ("\\f") ;
      break ;
    case '\n' :
      ioStream.addString ("\\n") ;
      if (i < (inStringLength - 1)) {
        ioStream.addString ("\"\n  \"") ;
        currentColumn = 1 ;
      }
      break ;
    case '\r' :
      ioStream.addString ("\\r") ;
      break ;
    case '\t' :
      ioStream.addString ("\\t") ;
      break ;
    case '\v' :
      ioStream.addString ("\\v") ;
      break ;
    case '\\' :
      ioStream.addString ("\\\\") ;
      break ;
    case '\"' :
      ioStream.addString ("\\\"") ;
      break ;
    default :
      if ((UNICODE_VALUE (c) >= ' ') && (UNICODE_VALUE (c) < 127)) {
        ioStream.addUnicodeChar (c COMMA_HERE) ;
      }else{
        char buffer [5] ;
        const int32_t n = UTF8StringFromUTF32Character (c, buffer) ;
        for (int32_t j=0 ; j<n ; j++) {
          ioStream.addString ("\\x") ;
          ioStream.addUnsignedHex2 ((uint32_t) buffer [j]) ;
          ioStream.addString ("\"\"")  ;
        }
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

static void internalWriteCstringConstant (AbstractOutputStream & ioStream,
                                          const String & inString,
                                          const int32_t inStringLength,
                                          const int32_t inLineMaxLength) {
  ioStream.addString ("\"") ;
  internalWriteCstringConstantWithoutDelimiters (ioStream, inString, inStringLength, inLineMaxLength) ;
  ioStream.addString ("\"") ;
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::addStringAsCLiteralStringConstant (const String & inString) {
  internalWriteCstringConstant (*this, inString, inString.length (), 150) ;
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::addStringAsCLiteralStringConstantWithoutDelimiters (const String & inString) {
  internalWriteCstringConstantWithoutDelimiters (*this, inString, inString.length (), 150) ;
}

//--------------------------------------------------------------------------------------------------

void AbstractOutputStream::addStringAsCLiteralCharConstant (const utf32 c) {
  switch (UNICODE_VALUE (c)) {
  case '\0' :
    addString ("'\\0'") ;
    break ;
  case '\a' :
    addString ("'\\a'") ;
    break ;
  case '\b' :
    addString ("'\\b'") ;
    break ;
  case '\f' :
    addString ("'\\f'") ;
    break ;
  case '\n' :
    addString ("'\\n'") ;
    break ;
  case '\r' :
    addString ("'\\r'") ;
    break ;
  case '\t' :
    addString ("'\\t'") ;
    break ;
  case '\v' :
    addString ("'\\v'") ;
    break ;
  case '\\' :
    addString ("'\\\\'") ;
    break ;
  case '\'' :
    addString ("'\\''") ;
    break ;
  case '\"' :
    addString ("'\\\"'") ;
    break ;
  case '\?' :
    addString ("'\\\?'") ;
    break ;
  default :
    if ((UNICODE_VALUE (c) >= ' ') && (UNICODE_VALUE (c) <= '~')) {
      addString ("'") ;
      addUnicodeChar (c COMMA_HERE) ;
      addString ("'") ;
    }else{
      addUnsigned (UNICODE_VALUE (c)) ;
    }
    break ;
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark stringWith...
#endif

//--------------------------------------------------------------------------------------------------

String stringWithUnsigned (const uint64_t inValue) {
  String result ;
  result.addUnsigned (inValue) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

String stringWithHex0xUnsigned (const uint64_t inValue) {
  String s ;
  s.adddHex0xUnsigned (inValue) ;
  return s ;
}

//--------------------------------------------------------------------------------------------------

String stringWithSigned (const int64_t inValue) {
  String result ;
  result.addSigned (inValue) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

String stringWithCharacter (const char inValue) {
  String result ;
  result.addUnicodeChar (TO_UNICODE (uint32_t (inValue)) COMMA_HERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

String stringWithUnicodeCharacter (const utf32 inValue) {
  String result ;
  result.addUnicodeChar (inValue COMMA_HERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

String stringWithPointer (const void * inValue) {
  String result ;
  result.addPointer (inValue) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

String stringWithDouble (const double inValue) {
  String result ;
  result.addDouble (inValue) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
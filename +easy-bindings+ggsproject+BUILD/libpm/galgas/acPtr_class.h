//--------------------------------------------------------------------------------------------------
//
//  acPtr_class : Base class for GALGAS class                                                    
//
//  This file is part of libpm library                                                           
//
//  Copyright (C) 2008, ..., 2011 Pierre Molinaro.
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

#pragma once

//--------------------------------------------------------------------------------------------------

#include "SharedObject.h"
#include "ComparisonResult.h"

//--------------------------------------------------------------------------------------------------

class String ;
class GALGAS_TypeDescriptor ;

//--------------------------------------------------------------------------------------------------

class acPtr_class : public SharedObject {
  public: acPtr_class (LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const = 0 ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
    return ComparisonResult::invalid ;
  }

  public: virtual const GALGAS_TypeDescriptor * classDescriptor (void) const = 0 ;

  public: virtual acPtr_class * duplicate (class Compiler * COMMA_UNUSED_LOCATION_ARGS) const = 0 ;
} ;

//--------------------------------------------------------------------------------------------------

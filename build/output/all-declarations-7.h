#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-6.h"

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration prefKeyDefinitionCode'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_prefKeyDefinitionCode (const cPtr_propertyGeneration * inObject,
                                                            class Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration declarationInSelectionControllerCode'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_declarationInSelectionControllerCode (const cPtr_propertyGeneration * inObject,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration bindPropertyInSelectionController'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_bindPropertyInSelectionController (const cPtr_propertyGeneration * inObject,
                                                                        class Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@propertyGeneration propertyDeclarationCode'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_propertyDeclarationCode (const class cPtr_propertyGeneration * inObject,
                                                              const class GGS_bool constin_inPreferences,
                                                              const class GGS_bool constin_inGenerationDirectAccess,
                                                              const class GGS_stringset constin_inOverriddenTransients,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@propertyGeneration configurationCode'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_configurationCode (const class cPtr_propertyGeneration * inObject,
                                                        const class GGS_bool constin_inPreferences,
                                                        class Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@propertyGeneration initCode'
//
//--------------------------------------------------------------------------------------------------

class GGS_string callExtensionGetter_initCode (const class cPtr_propertyGeneration * inObject,
                                               class Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;


#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-9.h"

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@integerAsDefaultValue analyzeDefaultValueType'
//--------------------------------------------------------------------------------------------------

void cPtr_integerAsDefaultValue::method_analyzeDefaultValueType (const GGS_typeKindList constinArgument_inAttributeActualTypeList,
                                                                 const GGS_propertyMap /* constinArgument_inPreferencesPropertyMap */,
                                                                 GGS_string & outArgument_outSwiftDefaultValueAsString,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSwiftDefaultValueAsString = GGS_string::makeEmptyString () ;
  GGS_bool var_found_4854 = GGS_bool (false) ;
  UpEnumerator_typeKindList enumerator_4875 (constinArgument_inAttributeActualTypeList) ;
  bool bool_0 = var_found_4854.operator_not (SOURCE_FILE ("explicit-default-value.galgas4", 142)).isValidAndTrue () ;
  if (enumerator_4875.hasCurrentObject () && bool_0) {
    while (enumerator_4875.hasCurrentObject () && bool_0) {
      switch (enumerator_4875.current_mType (HERE).enumValue ()) {
      case GGS_typeKind::Enumeration::invalid:
        break ;
      case GGS_typeKind::Enumeration::enum_integerType:
        {
          const GGS_integerAsDefaultValue temp_1 = this ;
          GGS_string temp_2 ;
          const GalgasBool test_3 = temp_1.readProperty_mNegative ().boolEnum () ;
          if (GalgasBool::boolTrue == test_3) {
            temp_2 = GGS_string ("-") ;
          }else if (GalgasBool::boolFalse == test_3) {
            temp_2 = GGS_string::makeEmptyString () ;
          }
          const GGS_integerAsDefaultValue temp_4 = this ;
          outArgument_outSwiftDefaultValueAsString = temp_2.add_operation (temp_4.readProperty_mValue ().readProperty_uint ().getter_string (SOURCE_FILE ("explicit-default-value.galgas4", 145)), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 145)) ;
          var_found_4854 = GGS_bool (true) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_uint_33__32_Type:
        {
          GalgasBool test_5 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_5) {
            const GGS_integerAsDefaultValue temp_6 = this ;
            test_5 = temp_6.readProperty_mNegative ().boolEnum () ;
            if (GalgasBool::boolTrue == test_5) {
              const GGS_integerAsDefaultValue temp_7 = this ;
              GenericArray <FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (temp_7.readProperty_mValue ().readProperty_location (), GGS_string ("Uint32 value should be ≥ 0"), fixItArray8  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 149)) ;
            }
          }
          const GGS_integerAsDefaultValue temp_9 = this ;
          outArgument_outSwiftDefaultValueAsString = temp_9.readProperty_mValue ().readProperty_uint ().getter_string (SOURCE_FILE ("explicit-default-value.galgas4", 151)) ;
          var_found_4854 = GGS_bool (true) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_fontType:
        {
          const GGS_integerAsDefaultValue temp_10 = this ;
          outArgument_outSwiftDefaultValueAsString = GGS_string ("NSFont.systemFont (ofSize: ").add_operation (temp_10.readProperty_mValue ().readProperty_uint ().getter_string (SOURCE_FILE ("explicit-default-value.galgas4", 154)), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 154)).add_operation (GGS_string (".0)"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 154)) ;
          var_found_4854 = GGS_bool (true) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_boolType:
      case GGS_typeKind::Enumeration::enum_dateType:
      case GGS_typeKind::Enumeration::enum_dataType:
      case GGS_typeKind::Enumeration::enum_doubleType:
      case GGS_typeKind::Enumeration::enum_stringType:
      case GGS_typeKind::Enumeration::enum_colorType:
      case GGS_typeKind::Enumeration::enum_bezierPathType:
      case GGS_typeKind::Enumeration::enum_bezierPathArrayType:
        break ;
      case GGS_typeKind::Enumeration::enum_entityType:
        break ;
      case GGS_typeKind::Enumeration::enum_enumType:
        break ;
      case GGS_typeKind::Enumeration::enum_classType:
        break ;
      case GGS_typeKind::Enumeration::enum_transientPropertyExternType:
        break ;
      }
      enumerator_4875.gotoNextObject () ;
      if (enumerator_4875.hasCurrentObject ()) {
        bool_0 = var_found_4854.operator_not (SOURCE_FILE ("explicit-default-value.galgas4", 142)).isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = var_found_4854.operator_not (SOURCE_FILE ("explicit-default-value.galgas4", 163)).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      const GGS_integerAsDefaultValue temp_12 = this ;
      GenericArray <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mValue ().readProperty_location (), GGS_string ("only an integer attribute can be initialized by an integer constant"), fixItArray13  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 164)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@doubleAsDefaultValue analyzeDefaultValueType'
//--------------------------------------------------------------------------------------------------

void cPtr_doubleAsDefaultValue::method_analyzeDefaultValueType (const GGS_typeKindList constinArgument_inAttributeActualTypeList,
                                                                const GGS_propertyMap /* constinArgument_inPreferencesPropertyMap */,
                                                                GGS_string & outArgument_outSwiftDefaultValueAsString,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSwiftDefaultValueAsString = GGS_string::makeEmptyString () ;
  GGS_bool var_found_6161 = GGS_bool (false) ;
  UpEnumerator_typeKindList enumerator_6182 (constinArgument_inAttributeActualTypeList) ;
  bool bool_0 = var_found_6161.operator_not (SOURCE_FILE ("explicit-default-value.galgas4", 179)).isValidAndTrue () ;
  if (enumerator_6182.hasCurrentObject () && bool_0) {
    while (enumerator_6182.hasCurrentObject () && bool_0) {
      switch (enumerator_6182.current_mType (HERE).enumValue ()) {
      case GGS_typeKind::Enumeration::invalid:
        break ;
      case GGS_typeKind::Enumeration::enum_doubleType:
        {
          const GGS_doubleAsDefaultValue temp_1 = this ;
          outArgument_outSwiftDefaultValueAsString = temp_1.readProperty_mValue ().readProperty_double ().getter_string (SOURCE_FILE ("explicit-default-value.galgas4", 182)) ;
          var_found_6161 = GGS_bool (true) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_boolType:
      case GGS_typeKind::Enumeration::enum_dateType:
      case GGS_typeKind::Enumeration::enum_dataType:
      case GGS_typeKind::Enumeration::enum_integerType:
      case GGS_typeKind::Enumeration::enum_uint_33__32_Type:
      case GGS_typeKind::Enumeration::enum_stringType:
      case GGS_typeKind::Enumeration::enum_fontType:
      case GGS_typeKind::Enumeration::enum_colorType:
      case GGS_typeKind::Enumeration::enum_bezierPathType:
      case GGS_typeKind::Enumeration::enum_bezierPathArrayType:
        break ;
      case GGS_typeKind::Enumeration::enum_entityType:
        break ;
      case GGS_typeKind::Enumeration::enum_enumType:
        break ;
      case GGS_typeKind::Enumeration::enum_classType:
        break ;
      case GGS_typeKind::Enumeration::enum_transientPropertyExternType:
        break ;
      }
      enumerator_6182.gotoNextObject () ;
      if (enumerator_6182.hasCurrentObject ()) {
        bool_0 = var_found_6161.operator_not (SOURCE_FILE ("explicit-default-value.galgas4", 179)).isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = var_found_6161.operator_not (SOURCE_FILE ("explicit-default-value.galgas4", 192)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_doubleAsDefaultValue temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mValue ().readProperty_location (), GGS_string ("only a double attribute can be initialized by a floating point constant"), fixItArray4  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 193)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@stringAsDefaultValue analyzeDefaultValueType'
//--------------------------------------------------------------------------------------------------

void cPtr_stringAsDefaultValue::method_analyzeDefaultValueType (const GGS_typeKindList constinArgument_inAttributeActualTypeList,
                                                                const GGS_propertyMap /* constinArgument_inPreferencesPropertyMap */,
                                                                GGS_string & outArgument_outSwiftDefaultValueAsString,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSwiftDefaultValueAsString = GGS_string::makeEmptyString () ;
  GGS_bool var_found_7129 = GGS_bool (false) ;
  UpEnumerator_typeKindList enumerator_7150 (constinArgument_inAttributeActualTypeList) ;
  bool bool_0 = var_found_7129.operator_not (SOURCE_FILE ("explicit-default-value.galgas4", 208)).isValidAndTrue () ;
  if (enumerator_7150.hasCurrentObject () && bool_0) {
    while (enumerator_7150.hasCurrentObject () && bool_0) {
      switch (enumerator_7150.current_mType (HERE).enumValue ()) {
      case GGS_typeKind::Enumeration::invalid:
        break ;
      case GGS_typeKind::Enumeration::enum_stringType:
        {
          const GGS_stringAsDefaultValue temp_1 = this ;
          outArgument_outSwiftDefaultValueAsString = GGS_string ("\"").add_operation (temp_1.readProperty_mValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 211)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 211)) ;
          var_found_7129 = GGS_bool (true) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_boolType:
      case GGS_typeKind::Enumeration::enum_dateType:
      case GGS_typeKind::Enumeration::enum_dataType:
      case GGS_typeKind::Enumeration::enum_integerType:
      case GGS_typeKind::Enumeration::enum_uint_33__32_Type:
      case GGS_typeKind::Enumeration::enum_doubleType:
      case GGS_typeKind::Enumeration::enum_fontType:
      case GGS_typeKind::Enumeration::enum_colorType:
      case GGS_typeKind::Enumeration::enum_bezierPathType:
      case GGS_typeKind::Enumeration::enum_bezierPathArrayType:
        break ;
      case GGS_typeKind::Enumeration::enum_entityType:
        break ;
      case GGS_typeKind::Enumeration::enum_enumType:
        break ;
      case GGS_typeKind::Enumeration::enum_classType:
        break ;
      case GGS_typeKind::Enumeration::enum_transientPropertyExternType:
        break ;
      }
      enumerator_7150.gotoNextObject () ;
      if (enumerator_7150.hasCurrentObject ()) {
        bool_0 = var_found_7129.operator_not (SOURCE_FILE ("explicit-default-value.galgas4", 208)).isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = var_found_7129.operator_not (SOURCE_FILE ("explicit-default-value.galgas4", 221)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_stringAsDefaultValue temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mValue ().readProperty_location (), GGS_string ("only a string attribute can be initialized by a string constant"), fixItArray4  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 222)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Once function 'predefinedDates'
//
//--------------------------------------------------------------------------------------------------

static GGS_stringset onceFunction_predefinedDates (Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset result_result ; // Returned variable
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 231)) ;
  result_result = temp_0 ;
  {
  result_result.setter_insert (GGS_string ("now"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 232)) ;
  }
  {
  result_result.setter_insert (GGS_string ("distantPast"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 233)) ;
  }
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_predefinedDates = false ;
static GGS_stringset gOnceFunctionResult_predefinedDates ;

//--------------------------------------------------------------------------------------------------

GGS_stringset function_predefinedDates (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_predefinedDates) {
    gOnceFunctionResult_predefinedDates = onceFunction_predefinedDates (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_predefinedDates = true ;
  }
  return gOnceFunctionResult_predefinedDates ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_predefinedDates (void) {
  gOnceFunctionResult_predefinedDates.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_predefinedDates (nullptr,
                                                           releaseOnceFunctionResult_predefinedDates) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_predefinedDates [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_predefinedDates (Compiler * inCompiler,
                                                             const GALGAS_ObjectArray & /* inEffectiveParameterArray */,
                                                             const GGS_location & /* inErrorLocation */
                                                             COMMA_LOCATION_ARGS) {
  return function_predefinedDates (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_predefinedDates ("predefinedDates",
                                                                 functionWithGenericHeader_predefinedDates,
                                                                 & kTypeDescriptor_GALGAS_stringset,
                                                                 0,
                                                                 functionArgs_predefinedDates) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'predefinedColors'
//
//--------------------------------------------------------------------------------------------------

static GGS_stringset onceFunction_predefinedColors (Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset result_result ; // Returned variable
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 239)) ;
  result_result = temp_0 ;
  {
  result_result.setter_insert (GGS_string ("black"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 240)) ;
  }
  {
  result_result.setter_insert (GGS_string ("blue"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 241)) ;
  }
  {
  result_result.setter_insert (GGS_string ("brown"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 242)) ;
  }
  {
  result_result.setter_insert (GGS_string ("clear"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 243)) ;
  }
  {
  result_result.setter_insert (GGS_string ("control"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 244)) ;
  }
  {
  result_result.setter_insert (GGS_string ("controlDarkShadow"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 245)) ;
  }
  {
  result_result.setter_insert (GGS_string ("controlHighlight"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 246)) ;
  }
  {
  result_result.setter_insert (GGS_string ("controlLightHighlight"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 247)) ;
  }
  {
  result_result.setter_insert (GGS_string ("controlShadow"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 248)) ;
  }
  {
  result_result.setter_insert (GGS_string ("controlText"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 249)) ;
  }
  {
  result_result.setter_insert (GGS_string ("cyan"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 250)) ;
  }
  {
  result_result.setter_insert (GGS_string ("darkGray"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 251)) ;
  }
  {
  result_result.setter_insert (GGS_string ("disabledControlText"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 252)) ;
  }
  {
  result_result.setter_insert (GGS_string ("gray"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 253)) ;
  }
  {
  result_result.setter_insert (GGS_string ("green"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 254)) ;
  }
  {
  result_result.setter_insert (GGS_string ("grid"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 255)) ;
  }
  {
  result_result.setter_insert (GGS_string ("header"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 256)) ;
  }
  {
  result_result.setter_insert (GGS_string ("headerText"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 257)) ;
  }
  {
  result_result.setter_insert (GGS_string ("highlight"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 258)) ;
  }
  {
  result_result.setter_insert (GGS_string ("keyboardFocusIndicator"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 259)) ;
  }
  {
  result_result.setter_insert (GGS_string ("knob"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 260)) ;
  }
  {
  result_result.setter_insert (GGS_string ("lightGray"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 261)) ;
  }
  {
  result_result.setter_insert (GGS_string ("magenta"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 262)) ;
  }
  {
  result_result.setter_insert (GGS_string ("orange"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 263)) ;
  }
  {
  result_result.setter_insert (GGS_string ("purple"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 264)) ;
  }
  {
  result_result.setter_insert (GGS_string ("red"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 265)) ;
  }
  {
  result_result.setter_insert (GGS_string ("scrollBar"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 266)) ;
  }
  {
  result_result.setter_insert (GGS_string ("selectedControl"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 267)) ;
  }
  {
  result_result.setter_insert (GGS_string ("selectedControlText"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 268)) ;
  }
  {
  result_result.setter_insert (GGS_string ("selectedKnob"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 269)) ;
  }
  {
  result_result.setter_insert (GGS_string ("selectedMenuItem"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 270)) ;
  }
  {
  result_result.setter_insert (GGS_string ("selectedMenuItemText"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 271)) ;
  }
  {
  result_result.setter_insert (GGS_string ("selectedTextBackground"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 272)) ;
  }
  {
  result_result.setter_insert (GGS_string ("selectedText"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 273)) ;
  }
  {
  result_result.setter_insert (GGS_string ("shadow"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 274)) ;
  }
  {
  result_result.setter_insert (GGS_string ("textBackground"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 275)) ;
  }
  {
  result_result.setter_insert (GGS_string ("white"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 276)) ;
  }
  {
  result_result.setter_insert (GGS_string ("windowBackground"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 277)) ;
  }
  {
  result_result.setter_insert (GGS_string ("windowFrame"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 278)) ;
  }
  {
  result_result.setter_insert (GGS_string ("windowFrameText"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 279)) ;
  }
  {
  result_result.setter_insert (GGS_string ("yellow"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 280)) ;
  }
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_predefinedColors = false ;
static GGS_stringset gOnceFunctionResult_predefinedColors ;

//--------------------------------------------------------------------------------------------------

GGS_stringset function_predefinedColors (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_predefinedColors) {
    gOnceFunctionResult_predefinedColors = onceFunction_predefinedColors (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_predefinedColors = true ;
  }
  return gOnceFunctionResult_predefinedColors ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_predefinedColors (void) {
  gOnceFunctionResult_predefinedColors.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_predefinedColors (nullptr,
                                                            releaseOnceFunctionResult_predefinedColors) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_predefinedColors [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_predefinedColors (Compiler * inCompiler,
                                                              const GALGAS_ObjectArray & /* inEffectiveParameterArray */,
                                                              const GGS_location & /* inErrorLocation */
                                                              COMMA_LOCATION_ARGS) {
  return function_predefinedColors (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_predefinedColors ("predefinedColors",
                                                                  functionWithGenericHeader_predefinedColors,
                                                                  & kTypeDescriptor_GALGAS_stringset,
                                                                  0,
                                                                  functionArgs_predefinedColors) ;

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@identifierAsDefaultValue analyzeDefaultValueType'
//--------------------------------------------------------------------------------------------------

void cPtr_identifierAsDefaultValue::method_analyzeDefaultValueType (const GGS_typeKindList constinArgument_inAttributeActualTypeList,
                                                                    const GGS_propertyMap /* constinArgument_inPreferencesPropertyMap */,
                                                                    GGS_string & outArgument_outSwiftDefaultValueAsString,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSwiftDefaultValueAsString = GGS_string::makeEmptyString () ;
  GGS_bool var_found_9854 = GGS_bool (false) ;
  UpEnumerator_typeKindList enumerator_9875 (constinArgument_inAttributeActualTypeList) ;
  bool bool_0 = var_found_9854.operator_not (SOURCE_FILE ("explicit-default-value.galgas4", 291)).isValidAndTrue () ;
  if (enumerator_9875.hasCurrentObject () && bool_0) {
    while (enumerator_9875.hasCurrentObject () && bool_0) {
      switch (enumerator_9875.current_mType (HERE).enumValue ()) {
      case GGS_typeKind::Enumeration::invalid:
        break ;
      case GGS_typeKind::Enumeration::enum_dateType:
        {
          var_found_9854 = GGS_bool (true) ;
          GalgasBool test_1 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_1) {
            const GGS_identifierAsDefaultValue temp_2 = this ;
            test_1 = function_predefinedDates (inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 295)).getter_hasKey (temp_2.readProperty_mValue ().readProperty_string () COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 295)).boolEnum () ;
            if (GalgasBool::boolTrue == test_1) {
              GalgasBool test_3 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_3) {
                const GGS_identifierAsDefaultValue temp_4 = this ;
                test_3 = GGS_bool (ComparisonKind::equal, temp_4.readProperty_mValue ().readProperty_string ().objectCompare (GGS_string ("now"))).boolEnum () ;
                if (GalgasBool::boolTrue == test_3) {
                  outArgument_outSwiftDefaultValueAsString = GGS_string ("Date ()") ;
                }
              }
              if (GalgasBool::boolFalse == test_3) {
                GalgasBool test_5 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_5) {
                  const GGS_identifierAsDefaultValue temp_6 = this ;
                  test_5 = GGS_bool (ComparisonKind::equal, temp_6.readProperty_mValue ().readProperty_string ().objectCompare (GGS_string ("distantPast"))).boolEnum () ;
                  if (GalgasBool::boolTrue == test_5) {
                    outArgument_outSwiftDefaultValueAsString = GGS_string ("Date.distantPast") ;
                  }
                }
                if (GalgasBool::boolFalse == test_5) {
                  const GGS_identifierAsDefaultValue temp_7 = this ;
                  GenericArray <FixItDescription> fixItArray8 ;
                  inCompiler->emitSemanticError (temp_7.readProperty_mValue ().readProperty_location (), GGS_string ("unknown predefined date"), fixItArray8  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 301)) ;
                }
              }
            }
          }
          if (GalgasBool::boolFalse == test_1) {
            const GGS_identifierAsDefaultValue temp_9 = this ;
            GenericArray <FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (temp_9.readProperty_mValue ().readProperty_location (), GGS_string ("unknown predefined date"), fixItArray10  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 304)) ;
          }
        }
        break ;
      case GGS_typeKind::Enumeration::enum_bezierPathType:
        {
          var_found_9854 = GGS_bool (true) ;
          GalgasBool test_11 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_11) {
            const GGS_identifierAsDefaultValue temp_12 = this ;
            test_11 = GGS_bool (ComparisonKind::equal, temp_12.readProperty_mValue ().readProperty_string ().objectCompare (GGS_string ("empty"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_11) {
              outArgument_outSwiftDefaultValueAsString = GGS_string ("NSBezierPath ()") ;
            }
          }
          if (GalgasBool::boolFalse == test_11) {
            const GGS_identifierAsDefaultValue temp_13 = this ;
            GenericArray <FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (temp_13.readProperty_mValue ().readProperty_location (), GGS_string ("only 'empty' is accepted as default NSBezierPath"), fixItArray14  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 311)) ;
          }
        }
        break ;
      case GGS_typeKind::Enumeration::enum_bezierPathArrayType:
        {
          var_found_9854 = GGS_bool (true) ;
          GalgasBool test_15 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_15) {
            const GGS_identifierAsDefaultValue temp_16 = this ;
            test_15 = GGS_bool (ComparisonKind::equal, temp_16.readProperty_mValue ().readProperty_string ().objectCompare (GGS_string ("empty"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_15) {
              outArgument_outSwiftDefaultValueAsString = GGS_string ("BezierPathArray ()") ;
            }
          }
          if (GalgasBool::boolFalse == test_15) {
            const GGS_identifierAsDefaultValue temp_17 = this ;
            GenericArray <FixItDescription> fixItArray18 ;
            inCompiler->emitSemanticError (temp_17.readProperty_mValue ().readProperty_location (), GGS_string ("only 'empty' is accepted as default BezierPathArray"), fixItArray18  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 318)) ;
          }
        }
        break ;
      case GGS_typeKind::Enumeration::enum_enumType:
        {
          GGS_string extractedValue_10955_enumTypeName_0 ;
          GGS_enumConstantMap extractedValue_10986_constantMap_1 ;
          GGS_enumFuncMap extractedValue_10999__2 ;
          enumerator_9875.current_mType (HERE).getAssociatedValuesFor_enumType (extractedValue_10955_enumTypeName_0, extractedValue_10986_constantMap_1, extractedValue_10999__2) ;
          var_found_9854 = GGS_bool (true) ;
          GalgasBool test_19 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_19) {
            const GGS_identifierAsDefaultValue temp_20 = this ;
            test_19 = extractedValue_10986_constantMap_1.getter_hasKey (temp_20.readProperty_mValue ().readProperty_string () COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 322)).boolEnum () ;
            if (GalgasBool::boolTrue == test_19) {
              const GGS_identifierAsDefaultValue temp_21 = this ;
              outArgument_outSwiftDefaultValueAsString = extractedValue_10955_enumTypeName_0.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 323)).add_operation (temp_21.readProperty_mValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 323)) ;
            }
          }
          if (GalgasBool::boolFalse == test_19) {
            const GGS_identifierAsDefaultValue temp_22 = this ;
            const GGS_identifierAsDefaultValue temp_23 = this ;
            GenericArray <FixItDescription> fixItArray24 ;
            inCompiler->emitSemanticError (temp_22.readProperty_mValue ().readProperty_location (), GGS_string ("the '").add_operation (extractedValue_10955_enumTypeName_0, inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 326)).add_operation (GGS_string ("' enumeration does not define '"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 326)).add_operation (temp_23.readProperty_mValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 326)).add_operation (GGS_string ("' constant"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 326)), fixItArray24  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 325)) ;
            outArgument_outSwiftDefaultValueAsString.drop () ; // Release error dropped variable
          }
        }
        break ;
      case GGS_typeKind::Enumeration::enum_entityType:
        {
          GGS_string extractedValue_11370__0 ;
          GGS_bool extractedValue_11370__1 ;
          enumerator_9875.current_mType (HERE).getAssociatedValuesFor_entityType (extractedValue_11370__0, extractedValue_11370__1) ;
          const GGS_identifierAsDefaultValue temp_25 = this ;
          GenericArray <FixItDescription> fixItArray26 ;
          inCompiler->emitSemanticError (temp_25.readProperty_mValue ().readProperty_location (), GGS_string ("invalid entity type"), fixItArray26  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 330)) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_classType:
        {
          GGS_string extractedValue_11446__0 ;
          enumerator_9875.current_mType (HERE).getAssociatedValuesFor_classType (extractedValue_11446__0) ;
          const GGS_identifierAsDefaultValue temp_27 = this ;
          GenericArray <FixItDescription> fixItArray28 ;
          inCompiler->emitSemanticError (temp_27.readProperty_mValue ().readProperty_location (), GGS_string ("invalid class type"), fixItArray28  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 332)) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_boolType:
        {
          const GGS_identifierAsDefaultValue temp_29 = this ;
          GenericArray <FixItDescription> fixItArray30 ;
          inCompiler->emitSemanticError (temp_29.readProperty_mValue ().readProperty_location (), GGS_string ("invalid bool type"), fixItArray30  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 334)) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_dataType:
        {
          var_found_9854 = GGS_bool (true) ;
          GalgasBool test_31 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_31) {
            const GGS_identifierAsDefaultValue temp_32 = this ;
            test_31 = GGS_bool (ComparisonKind::equal, temp_32.readProperty_mValue ().readProperty_string ().objectCompare (GGS_string ("empty"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_31) {
              outArgument_outSwiftDefaultValueAsString = GGS_string ("Data ()") ;
            }
          }
          if (GalgasBool::boolFalse == test_31) {
            const GGS_identifierAsDefaultValue temp_33 = this ;
            GenericArray <FixItDescription> fixItArray34 ;
            inCompiler->emitSemanticError (temp_33.readProperty_mValue ().readProperty_location (), GGS_string ("only 'empty' is accepted as default Data"), fixItArray34  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 340)) ;
          }
        }
        break ;
      case GGS_typeKind::Enumeration::enum_doubleType:
        {
          const GGS_identifierAsDefaultValue temp_35 = this ;
          GenericArray <FixItDescription> fixItArray36 ;
          inCompiler->emitSemanticError (temp_35.readProperty_mValue ().readProperty_location (), GGS_string ("invalid double type"), fixItArray36  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 343)) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_integerType:
        {
          const GGS_identifierAsDefaultValue temp_37 = this ;
          GenericArray <FixItDescription> fixItArray38 ;
          inCompiler->emitSemanticError (temp_37.readProperty_mValue ().readProperty_location (), GGS_string ("invalid integer type"), fixItArray38  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 345)) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_uint_33__32_Type:
        {
          const GGS_identifierAsDefaultValue temp_39 = this ;
          GenericArray <FixItDescription> fixItArray40 ;
          inCompiler->emitSemanticError (temp_39.readProperty_mValue ().readProperty_location (), GGS_string ("invalid UInt32 type"), fixItArray40  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 347)) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_stringType:
        {
          const GGS_identifierAsDefaultValue temp_41 = this ;
          GenericArray <FixItDescription> fixItArray42 ;
          inCompiler->emitSemanticError (temp_41.readProperty_mValue ().readProperty_location (), GGS_string ("invalid string type"), fixItArray42  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 349)) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_fontType:
        {
          const GGS_identifierAsDefaultValue temp_43 = this ;
          GenericArray <FixItDescription> fixItArray44 ;
          inCompiler->emitSemanticError (temp_43.readProperty_mValue ().readProperty_location (), GGS_string ("invalid font type"), fixItArray44  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 351)) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_colorType:
        {
          GalgasBool test_45 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_45) {
            const GGS_identifierAsDefaultValue temp_46 = this ;
            test_45 = function_predefinedColors (inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 353)).getter_hasKey (temp_46.readProperty_mValue ().readProperty_string () COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 353)).boolEnum () ;
            if (GalgasBool::boolTrue == test_45) {
              const GGS_identifierAsDefaultValue temp_47 = this ;
              outArgument_outSwiftDefaultValueAsString = GGS_string ("NSColor.").add_operation (temp_47.readProperty_mValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 354)) ;
              var_found_9854 = GGS_bool (true) ;
            }
          }
          if (GalgasBool::boolFalse == test_45) {
            const GGS_identifierAsDefaultValue temp_48 = this ;
            GenericArray <FixItDescription> fixItArray49 ;
            inCompiler->emitSemanticError (temp_48.readProperty_mValue ().readProperty_location (), GGS_string ("unknown predefined color"), fixItArray49  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 357)) ;
          }
        }
        break ;
      case GGS_typeKind::Enumeration::enum_transientPropertyExternType:
        {
          GGS_string extractedValue_12452__0 ;
          enumerator_9875.current_mType (HERE).getAssociatedValuesFor_transientPropertyExternType (extractedValue_12452__0) ;
          const GGS_identifierAsDefaultValue temp_50 = this ;
          GenericArray <FixItDescription> fixItArray51 ;
          inCompiler->emitSemanticError (temp_50.readProperty_mValue ().readProperty_location (), GGS_string ("invalid image type"), fixItArray51  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 360)) ;
        }
        break ;
      }
      enumerator_9875.gotoNextObject () ;
      if (enumerator_9875.hasCurrentObject ()) {
        bool_0 = var_found_9854.operator_not (SOURCE_FILE ("explicit-default-value.galgas4", 291)).isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_52 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_52) {
    test_52 = var_found_9854.operator_not (SOURCE_FILE ("explicit-default-value.galgas4", 363)).boolEnum () ;
    if (GalgasBool::boolTrue == test_52) {
      const GGS_identifierAsDefaultValue temp_53 = this ;
      GenericArray <FixItDescription> fixItArray54 ;
      inCompiler->emitSemanticError (temp_53.readProperty_mValue ().readProperty_location (), GGS_string ("unknow type for this identifier"), fixItArray54  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 364)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@prefsAsDefaultValue analyzeDefaultValueType'
//--------------------------------------------------------------------------------------------------

void cPtr_prefsAsDefaultValue::method_analyzeDefaultValueType (const GGS_typeKindList constinArgument_inAttributeActualTypeList,
                                                               const GGS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                               GGS_string & outArgument_outSwiftDefaultValueAsString,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKind var_kind_12997 ;
  const GGS_prefsAsDefaultValue temp_0 = this ;
  GGS_actionMap joker_13003_2 ; // Joker input parameter
  GGS_bool joker_13003_1 ; // Joker input parameter
  constinArgument_inPreferencesPropertyMap.method_searchKey (temp_0.readProperty_mPrefPropertyName (), var_kind_12997, joker_13003_2, joker_13003_1, inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 377)) ;
  switch (var_kind_12997.enumValue ()) {
  case GGS_propertyKind::Enumeration::invalid:
    break ;
  case GGS_propertyKind::Enumeration::enum_property:
    {
      GGS_typeKind extractedValue_13049_type_0 ;
      GGS_propertyAccessibility extractedValue_13055__1 ;
      var_kind_12997.getAssociatedValuesFor_property (extractedValue_13049_type_0, extractedValue_13055__1) ;
      GGS_bool var_found_13068 = GGS_bool (false) ;
      UpEnumerator_typeKindList enumerator_13091 (constinArgument_inAttributeActualTypeList) ;
      bool bool_1 = var_found_13068.operator_not (SOURCE_FILE ("explicit-default-value.galgas4", 381)).isValidAndTrue () ;
      if (enumerator_13091.hasCurrentObject () && bool_1) {
        while (enumerator_13091.hasCurrentObject () && bool_1) {
          var_found_13068 = GGS_bool (ComparisonKind::equal, extractedValue_13049_type_0.objectCompare (enumerator_13091.current_mType (HERE))) ;
          enumerator_13091.gotoNextObject () ;
          if (enumerator_13091.hasCurrentObject ()) {
            bool_1 = var_found_13068.operator_not (SOURCE_FILE ("explicit-default-value.galgas4", 381)).isValidAndTrue () ;
          }
        }
      }
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = var_found_13068.operator_not (SOURCE_FILE ("explicit-default-value.galgas4", 384)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          const GGS_prefsAsDefaultValue temp_3 = this ;
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (temp_3.readProperty_mPrefPropertyName ().readProperty_location (), GGS_string ("the atomic property type is not compatible"), fixItArray4  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 385)) ;
        }
      }
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toMany:
    {
      GGS_lstring extractedValue_13304__0 ;
      GGS_propertyAccessibility extractedValue_13304__1 ;
      GGS_bool extractedValue_13304__2 ;
      GGS_toManyRelationshipOptionAST extractedValue_13304__3 ;
      var_kind_12997.getAssociatedValuesFor_toMany (extractedValue_13304__0, extractedValue_13304__1, extractedValue_13304__2, extractedValue_13304__3) ;
      const GGS_prefsAsDefaultValue temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mPrefPropertyName ().readProperty_location (), GGS_string ("an atomic property is required here"), fixItArray6  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 388)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toOne:
    {
      GGS_lstring extractedValue_13399__0 ;
      GGS_propertyAccessibility extractedValue_13399__1 ;
      GGS_bool extractedValue_13399__2 ;
      GGS_toOneOppositeRelationship extractedValue_13399__3 ;
      GGS_bool extractedValue_13399__4 ;
      var_kind_12997.getAssociatedValuesFor_toOne (extractedValue_13399__0, extractedValue_13399__1, extractedValue_13399__2, extractedValue_13399__3, extractedValue_13399__4) ;
      const GGS_prefsAsDefaultValue temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mPrefPropertyName ().readProperty_location (), GGS_string ("an atomic property is required here"), fixItArray8  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 390)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_arrayController:
    {
      GGS_lstring extractedValue_13504__0 ;
      GGS_bool extractedValue_13504__1 ;
      var_kind_12997.getAssociatedValuesFor_arrayController (extractedValue_13504__0, extractedValue_13504__1) ;
      const GGS_prefsAsDefaultValue temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mPrefPropertyName ().readProperty_location (), GGS_string ("an atomic property is required here"), fixItArray10  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 392)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_selectionController:
    {
      GGS_string extractedValue_13612__0 ;
      var_kind_12997.getAssociatedValuesFor_selectionController (extractedValue_13612__0) ;
      const GGS_prefsAsDefaultValue temp_11 = this ;
      GenericArray <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mPrefPropertyName ().readProperty_location (), GGS_string ("an atomic property is required here"), fixItArray12  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 394)) ;
    }
    break ;
  }
  const GGS_prefsAsDefaultValue temp_13 = this ;
  outArgument_outSwiftDefaultValueAsString = GGS_string ("preferences_").add_operation (temp_13.readProperty_mPrefPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 396)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@prefsAsDefaultValue enterDefaultValuePrecedence'
//--------------------------------------------------------------------------------------------------

void cPtr_prefsAsDefaultValue::method_enterDefaultValuePrecedence (const GGS_lstring constinArgument_inNode,
                                                                   GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_prefsAsDefaultValue temp_0 = this ;
  const GGS_prefsAsDefaultValue temp_1 = this ;
  GGS_lstring var_p_14012 = GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 405)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 405)).add_operation (temp_0.readProperty_mPrefPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 405)), temp_1.readProperty_mPrefPropertyName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inNode, var_p_14012 COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 406)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'predefinedOutletClasses'
//
//--------------------------------------------------------------------------------------------------

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_predefinedOutletClasses_3 [1] = {
  nullptr
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_predefinedOutletClasses_3 [1] = {
  nullptr
} ;

//--- Directory 'controllers'

const cDirectoryWrapper gWrapperDirectory_3_predefinedOutletClasses (
  "controllers",
  0,
  gWrapperAllFiles_predefinedOutletClasses_3,
  0,
  gWrapperAllDirectories_predefinedOutletClasses_3
) ;

//--- All files of 'standard-properties' directory

static const cRegularFileWrapper * gWrapperAllFiles_predefinedOutletClasses_1 [1] = {
  nullptr
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_predefinedOutletClasses_1 [1] = {
  nullptr
} ;

//--- Directory 'standard-properties'

const cDirectoryWrapper gWrapperDirectory_1_predefinedOutletClasses (
  "standard-properties",
  0,
  gWrapperAllFiles_predefinedOutletClasses_1,
  0,
  gWrapperAllDirectories_predefinedOutletClasses_1
) ;

//--- All files of 'xcode-project' directory

static const cRegularFileWrapper * gWrapperAllFiles_predefinedOutletClasses_2 [1] = {
  nullptr
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_predefinedOutletClasses_2 [1] = {
  nullptr
} ;

//--- Directory 'xcode-project'

const cDirectoryWrapper gWrapperDirectory_2_predefinedOutletClasses (
  "xcode-project",
  0,
  gWrapperAllFiles_predefinedOutletClasses_2,
  0,
  gWrapperAllDirectories_predefinedOutletClasses_2
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_predefinedOutletClasses_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_predefinedOutletClasses_0 [4] = {
  & gWrapperDirectory_3_predefinedOutletClasses,
  & gWrapperDirectory_1_predefinedOutletClasses,
  & gWrapperDirectory_2_predefinedOutletClasses,
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_predefinedOutletClasses (
  "",
  0,
  gWrapperAllFiles_predefinedOutletClasses_0,
  3,
  gWrapperAllDirectories_predefinedOutletClasses_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedOutletClasses sourceFile'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedOutletClasses_sourceFile (Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\nenum GridStyle {\n  noGrid, cross, line\n}\n\n//----------------------------------------------------------------------------------------\n\ntransient property struct CGFloat ;\n\ntransient property class NSImage ;\n\ntransient property class EBShape ;\n\nextern outlet class EBGraphicView : NSView $graphicController ;\nbinding EBGraphicView $underObjectsDisplay : transient EBShape ;\nbinding EBGraphicView $overObjectsDisplay : transient EBShape ;\nbinding EBGraphicView $arrowKeyMagnitude : transient Int ;\nbinding EBGraphicView $shiftArrowKeyMagnitude : transient Int ;\nbinding EBGraphicView $backColor : transient NSColor ;\nbinding EBGraphicView $mouseGrid : transient Int ;\nbinding EBGraphicView $gridStep : transient Int ;\nbinding EBGraphicView $gridStyle : transient GridStyle ;\nbinding EBGraphicView $gridDisplayFactor : transient Int ;\nbinding EBGraphicView $gridLineColor : transient NSColor ;\nbinding EBGraphicView $gridCrossColor : transient NSColor ;\nbinding EBGraphicView $zoom : property Int ;\nbinding EBGraphicView $horizontalFlip : transient Bool ;\nbinding EBGraphicView $verticalFlip : transient Bool ;\nbinding EBGraphicView $xPlacardUnit : transient Int ;\nbinding EBGraphicView $yPlacardUnit : transient Int ;\nbinding EBGraphicView $backgroundImageData : transient Data ;\nbinding EBGraphicView $backgroundImageOpacity : transient Double ;\nbinding EBGraphicView $foregroundImageData : transient Data ;\nbinding EBGraphicView $foregroundImageOpacity : transient Double ;\n\nextern outlet class EBEnclosingGraphicView : NSView $graphicController ;\nbinding EBEnclosingGraphicView $underObjectsDisplay : transient EBShape ;\nbinding EBEnclosingGraphicView $overObjectsDisplay : transient EBShape ;\nbinding EBEnclosingGraphicView $arrowKeyMagnitude : transient Int ;\nbinding EBEnclosingGraphicView $shiftArrowKeyMagnitude : transient Int ;\nbinding EBEnclosingGraphicView $backColor : transient NSColor ;\nbinding EBEnclosingGraphicView $mouseGrid : transient Int ;\nbinding EBEnclosingGraphicView $gridStep : transient Int ;\nbinding EBEnclosingGraphicView $gridStyle : transient GridStyle ;\nbinding EBEnclosingGraphicView $gridDisplayFactor : transient Int ;\nbinding EBEnclosingGraphicView $gridLineColor : transient NSColor ;\nbinding EBEnclosingGraphicView $gridCrossColor : transient NSColor ;\nbinding EBEnclosingGraphicView $zoom : property Int ;\nbinding EBEnclosingGraphicView $horizontalFlip : transient Bool ;\nbinding EBEnclosingGraphicView $verticalFlip : transient Bool ;\nbinding EBEnclosingGraphicView $xPlacardUnit : transient Int ;\nbinding EBEnclosingGraphicView $yPlacardUnit : transient Int ;\nbinding EBEnclosingGraphicView $backgroundImageData : transient Data ;\nbinding EBEnclosingGraphicView $backgroundImageOpacity : transient Double ;\nbinding EBEnclosingGraphicView $foregroundImageData : transient Data ;\nbinding EBEnclosingGraphicView $foregroundImageOpacity : transient Double ;\n\nextern outlet class NSView $hidden ;\n\nextern outlet class NSControl : NSView $enabled $run ;\n\noutlet class EBButton : NSControl ;\nbinding EBButton $title : transient String ;\n\noutlet class EBColorObserverWell : NSControl ;\nbinding EBColorObserverWell $colorObserver : transient NSColor ;\n\noutlet class EBColorWell : NSControl ;\nbinding EBColorWell $color : property NSColor {sendContinously : Bool} ;\n\n\noutlet class EBDatePicker : NSControl ;\nbinding EBDatePicker $date : property Date ;\n\noutlet class EBDoubleField : NSControl ;\nbinding EBDoubleField $value : property Double {sendContinously : Bool, autoFormatter:Bool} ;\n\n\noutlet class EBDoubleObserverField : NSControl ;\nbinding EBDoubleObserverField $valueObserver : transient Double {autoFormatter:Bool} ;\n\n\noutlet class EBIntField : NSControl ;\nbinding EBIntField $value : property Int {sendContinously : Bool, autoFormatter:Bool} ;\n\n\noutlet class EBIntObserverField : NSControl ;\nbinding EBIntObserverField $valueObserver : transient Int {autoFormatter:Bool} ;\n\n\noutlet class EBFontButton : NSControl ;\nbinding EBFontButton $fontValue : property NSFont ;\n\n\noutlet class EBPopUpButton : NSControl ;\nbinding EBPopUpButton $selectedTag : property Int ;\nbinding EBPopUpButton $selectedIndex : property enum ;\n\n\noutlet class EBGroupButton : NSControl ;\nbinding EBGroupButton $selectedIndex : property Int ;\n\n\noutlet class EBImageObserverView : NSView ;\nbinding EBImageObserverView $image : transient NSImage ;\nbinding EBImageObserverView $tooltip : transient String ;\n\n\noutlet class EBMenu ;\n\n\noutlet class EBMenuItem $enabled $run ;\n\n\noutlet class EBCheckedMenuItem ;\nbinding EBCheckedMenuItem $checked : property Bool ;\n\n\noutlet class EBProgressIndicator : NSView ;\n\n\noutlet class EBSegmentedControl : NSControl ;\nbinding EBSegmentedControl $selectedIndex : property Int ;\n\n\noutlet class EBSlider : NSControl ;\nbinding EBSlider $doubleValue : property Double {sendContinously:Bool} ;\nbinding EBSlider $intValue : property Int {sendContinously:Bool} ;\n\n\noutlet class EBStepper : NSControl ;\nbinding EBStepper $value : property Int {sendContinously:Bool} ;\n\n\noutlet class EBSwitch : NSControl ;\nbinding EBSwitch $value : property Bool ;\n\n\noutlet class EBTableView : NSControl $tableValue ;\n\n\noutlet class EBTextField : NSControl ;\nbinding EBTextField $value : property String {sendContinously : Bool} ;\n\noutlet class EBTextObserverField : NSView ;\nbinding EBTextObserverField $valueObserver : transient String ;\nbinding EBTextObserverField $backColor : transient NSColor ;\n\n\noutlet class EBTextObserverView : NSView ;\nbinding EBTextObserverView $valueObserver : transient String ;\n\n\noutlet class EBTextView : NSControl ;\nbinding EBTextView $value : property String ;\n\noutlet class EBWindow ;\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@autoLayoutViewClassDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutViewClassDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_autoLayoutViewClassDeclarationAST temp_0 = this ;
  const GGS_autoLayoutViewClassDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mClassName (), temp_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 63)) ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_autoLayoutViewClassDeclarationAST temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::notEqual, temp_3.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      {
      const GGS_autoLayoutViewClassDeclarationAST temp_4 = this ;
      const GGS_autoLayoutViewClassDeclarationAST temp_5 = this ;
      ioArgument_ioGraph.setter_addEdge (temp_4.readProperty_mClassName (), temp_5.readProperty_mSuperClassName () COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 65)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutViewClassDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_autoLayoutViewClassDeclarationAST::getter_nodeKey (Compiler */* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_autoLayoutViewClassDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mClassName () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@autoLayoutViewClassDeclarationAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutViewClassDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                        GGS_generationStruct & /* ioArgument_ioGeneration */,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_autoLayoutViewClassDeclarationAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      const GGS_autoLayoutViewClassDeclarationAST temp_2 = this ;
      const GGS_autoLayoutViewClassDeclarationAST temp_3 = this ;
      const GGS_autoLayoutViewClassDeclarationAST temp_4 = this ;
      const GGS_autoLayoutViewClassDeclarationAST temp_5 = this ;
      const GGS_autoLayoutViewClassDeclarationAST temp_6 = this ;
      const GGS_autoLayoutViewClassDeclarationAST temp_7 = this ;
      const GGS_autoLayoutViewClassDeclarationAST temp_8 = this ;
      const GGS_autoLayoutViewClassDeclarationAST temp_9 = this ;
      const GGS_autoLayoutViewClassDeclarationAST temp_10 = this ;
      ioArgument_ioSemanticContext.mProperty_mAutolayoutViewClassMap.setter_insertKey (temp_2.readProperty_mClassName (), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-view-class.galgas4", 239)), temp_3.readProperty_mHasRunAction (), temp_4.readProperty_mHandlesTableValueBinding (), temp_5.readProperty_mHasEnabled (), temp_6.readProperty_mHasHidden (), temp_7.readProperty_mHandlesGraphicControllerBinding (), temp_8.readProperty_mUserDefined (), temp_9.readProperty_mParameterList (), temp_10.readProperty_mAutoLayoutViewFunctionMap (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 237)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_bool var_hasRunAction_8531 ;
    GGS_bool var_handlesTableValueBinding_8556 ;
    GGS_bool var_hasEnabled_8593 ;
    GGS_bool var_hasHidden_8616 ;
    GGS_bool var_handlesGraphicControllerBinding_8638 ;
    const GGS_autoLayoutViewClassDeclarationAST temp_11 = this ;
    GGS_lstring joker_8516 ; // Joker input parameter
    GGS_bool joker_8677_3 ; // Joker input parameter
    GGS_autoLayoutClassParameterList joker_8677_2 ; // Joker input parameter
    GGS_astAutoLayoutViewFunctionMap joker_8677_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mAutolayoutViewClassMap ().method_searchKey (temp_11.readProperty_mSuperClassName (), joker_8516, var_hasRunAction_8531, var_handlesTableValueBinding_8556, var_hasEnabled_8593, var_hasHidden_8616, var_handlesGraphicControllerBinding_8638, joker_8677_3, joker_8677_2, joker_8677_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 250)) ;
    GalgasBool test_12 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_12) {
      const GGS_autoLayoutViewClassDeclarationAST temp_13 = this ;
      test_12 = temp_13.readProperty_mHasRunAction ().operator_and (var_hasRunAction_8531 COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 260)).boolEnum () ;
      if (GalgasBool::boolTrue == test_12) {
        const GGS_autoLayoutViewClassDeclarationAST temp_14 = this ;
        GenericArray <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mClassName ().readProperty_location (), GGS_string ("$run binding already defined in superclass"), fixItArray15  COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 261)) ;
      }
    }
    GalgasBool test_16 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_16) {
      const GGS_autoLayoutViewClassDeclarationAST temp_17 = this ;
      test_16 = temp_17.readProperty_mHandlesTableValueBinding ().operator_and (var_handlesTableValueBinding_8556 COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 263)).boolEnum () ;
      if (GalgasBool::boolTrue == test_16) {
        const GGS_autoLayoutViewClassDeclarationAST temp_18 = this ;
        GenericArray <FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (temp_18.readProperty_mClassName ().readProperty_location (), GGS_string ("$tableview binding already defined in superclass"), fixItArray19  COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 264)) ;
      }
    }
    GalgasBool test_20 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_20) {
      const GGS_autoLayoutViewClassDeclarationAST temp_21 = this ;
      test_20 = temp_21.readProperty_mHasEnabled ().operator_and (var_hasEnabled_8593 COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 266)).boolEnum () ;
      if (GalgasBool::boolTrue == test_20) {
        const GGS_autoLayoutViewClassDeclarationAST temp_22 = this ;
        GenericArray <FixItDescription> fixItArray23 ;
        inCompiler->emitSemanticError (temp_22.readProperty_mClassName ().readProperty_location (), GGS_string ("$enabled binding already defined in superclass"), fixItArray23  COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 267)) ;
      }
    }
    GalgasBool test_24 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_24) {
      const GGS_autoLayoutViewClassDeclarationAST temp_25 = this ;
      test_24 = temp_25.readProperty_mHasHidden ().operator_and (var_hasHidden_8616 COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 269)).boolEnum () ;
      if (GalgasBool::boolTrue == test_24) {
        const GGS_autoLayoutViewClassDeclarationAST temp_26 = this ;
        GenericArray <FixItDescription> fixItArray27 ;
        inCompiler->emitSemanticError (temp_26.readProperty_mClassName ().readProperty_location (), GGS_string ("$hidden binding already defined in superclass"), fixItArray27  COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 270)) ;
      }
    }
    GalgasBool test_28 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_28) {
      const GGS_autoLayoutViewClassDeclarationAST temp_29 = this ;
      test_28 = temp_29.readProperty_mHandlesGraphicControllerBinding ().operator_and (var_handlesGraphicControllerBinding_8638 COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 272)).boolEnum () ;
      if (GalgasBool::boolTrue == test_28) {
        const GGS_autoLayoutViewClassDeclarationAST temp_30 = this ;
        GenericArray <FixItDescription> fixItArray31 ;
        inCompiler->emitSemanticError (temp_30.readProperty_mClassName ().readProperty_location (), GGS_string ("$graphicController binding already defined in superclass"), fixItArray31  COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 273)) ;
      }
    }
    {
    const GGS_autoLayoutViewClassDeclarationAST temp_32 = this ;
    const GGS_autoLayoutViewClassDeclarationAST temp_33 = this ;
    const GGS_autoLayoutViewClassDeclarationAST temp_34 = this ;
    const GGS_autoLayoutViewClassDeclarationAST temp_35 = this ;
    const GGS_autoLayoutViewClassDeclarationAST temp_36 = this ;
    const GGS_autoLayoutViewClassDeclarationAST temp_37 = this ;
    const GGS_autoLayoutViewClassDeclarationAST temp_38 = this ;
    const GGS_autoLayoutViewClassDeclarationAST temp_39 = this ;
    const GGS_autoLayoutViewClassDeclarationAST temp_40 = this ;
    const GGS_autoLayoutViewClassDeclarationAST temp_41 = this ;
    ioArgument_ioSemanticContext.mProperty_mAutolayoutViewClassMap.setter_insertKey (temp_32.readProperty_mClassName (), temp_33.readProperty_mSuperClassName (), temp_34.readProperty_mHasRunAction ().operator_or (var_hasRunAction_8531 COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 279)), temp_35.readProperty_mHandlesTableValueBinding ().operator_or (var_handlesTableValueBinding_8556 COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 280)), temp_36.readProperty_mHasEnabled ().operator_or (var_hasEnabled_8593 COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 281)), temp_37.readProperty_mHasHidden ().operator_or (var_hasHidden_8616 COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 282)), temp_38.readProperty_mHandlesGraphicControllerBinding ().operator_or (var_handlesGraphicControllerBinding_8638 COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 283)), temp_39.readProperty_mUserDefined (), temp_40.readProperty_mParameterList (), temp_41.readProperty_mAutoLayoutViewFunctionMap (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 276)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@atomicClassDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_atomicClassDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_atomicClassDeclarationAST temp_0 = this ;
  const GGS_atomicClassDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mClassName (), temp_1, inCompiler COMMA_SOURCE_FILE ("atomic-class.galgas4", 12)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicClassDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_atomicClassDeclarationAST::getter_nodeKey (Compiler */* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_atomicClassDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mClassName () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterAtomicClassesIn&declarationList'
//
//--------------------------------------------------------------------------------------------------

void routine_enterAtomicClassesIn_26_declarationList (GGS_declarationListAST & ioArgument_ioDeclarationListAST,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("Double").getter_nowhere (SOURCE_FILE ("atomic-class.galgas4", 26)), GGS_typeKind::class_func_doubleType (SOURCE_FILE ("atomic-class.galgas4", 26)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.galgas4", 26)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("String").getter_nowhere (SOURCE_FILE ("atomic-class.galgas4", 27)), GGS_typeKind::class_func_stringType (SOURCE_FILE ("atomic-class.galgas4", 27)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.galgas4", 27)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("Int").getter_nowhere (SOURCE_FILE ("atomic-class.galgas4", 28)), GGS_typeKind::class_func_integerType (SOURCE_FILE ("atomic-class.galgas4", 28)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.galgas4", 28)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("UInt32").getter_nowhere (SOURCE_FILE ("atomic-class.galgas4", 29)), GGS_typeKind::class_func_uint_33__32_Type (SOURCE_FILE ("atomic-class.galgas4", 29)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.galgas4", 29)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("Bool").getter_nowhere (SOURCE_FILE ("atomic-class.galgas4", 30)), GGS_typeKind::class_func_boolType (SOURCE_FILE ("atomic-class.galgas4", 30)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.galgas4", 30)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("NSColor").getter_nowhere (SOURCE_FILE ("atomic-class.galgas4", 32)), GGS_typeKind::class_func_colorType (SOURCE_FILE ("atomic-class.galgas4", 32)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.galgas4", 32)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("NSFont").getter_nowhere (SOURCE_FILE ("atomic-class.galgas4", 33)), GGS_typeKind::class_func_fontType (SOURCE_FILE ("atomic-class.galgas4", 33)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.galgas4", 33)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("Date").getter_nowhere (SOURCE_FILE ("atomic-class.galgas4", 34)), GGS_typeKind::class_func_dateType (SOURCE_FILE ("atomic-class.galgas4", 34)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.galgas4", 34)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("Data").getter_nowhere (SOURCE_FILE ("atomic-class.galgas4", 35)), GGS_typeKind::class_func_dataType (SOURCE_FILE ("atomic-class.galgas4", 35)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.galgas4", 35)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("NSBezierPath").getter_nowhere (SOURCE_FILE ("atomic-class.galgas4", 36)), GGS_typeKind::class_func_bezierPathType (SOURCE_FILE ("atomic-class.galgas4", 36)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.galgas4", 36)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("BezierPathArray").getter_nowhere (SOURCE_FILE ("atomic-class.galgas4", 37)), GGS_typeKind::class_func_bezierPathArrayType (SOURCE_FILE ("atomic-class.galgas4", 37)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.galgas4", 37)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@atomicClassDeclarationAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_atomicClassDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                GGS_generationStruct & /* ioArgument_ioGeneration */,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_atomicClassDeclarationAST temp_0 = this ;
  const GGS_atomicClassDeclarationAST temp_1 = this ;
  GGS_propertyGenerationList temp_2 = GGS_propertyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("atomic-class.galgas4", 53)) ;
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (temp_0.readProperty_mClassName (), GGS_classKind::class_func_atomic (temp_1.readProperty_mKind ()  COMMA_SOURCE_FILE ("atomic-class.galgas4", 50)), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS_actionMap::init (inCompiler COMMA_HERE), temp_2, inCompiler COMMA_SOURCE_FILE ("atomic-class.galgas4", 48)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'graphvizAnalysis???'
//
//--------------------------------------------------------------------------------------------------

void routine_graphvizAnalysis_3F__3F__3F_ (const GGS_string constinArgument_inSourceFileDirectory,
                                           const GGS_semanticContext constinArgument_inSemanticContext,
                                           const GGS_lstringlist constinArgument_inGraphvizList,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("graphviz.galgas4", 29)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      UpEnumerator_lstringlist enumerator_1057 (constinArgument_inGraphvizList) ;
      while (enumerator_1057.hasCurrentObject ()) {
        {
        routine_graphvizRootEntityAnalysis_3F__3F__3F_ (constinArgument_inSourceFileDirectory, constinArgument_inSemanticContext, enumerator_1057.current_mValue (HERE).readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas4", 31)) ;
        }
        {
        routine_graphvizRootEntityStrongAnalysis_3F__3F__3F_ (constinArgument_inSourceFileDirectory, constinArgument_inSemanticContext, enumerator_1057.current_mValue (HERE).readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas4", 32)) ;
        }
        enumerator_1057.gotoNextObject () ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'graphvizRootEntityAnalysis???'
//
//--------------------------------------------------------------------------------------------------

void routine_graphvizRootEntityAnalysis_3F__3F__3F_ (const GGS_string constinArgument_inSourceFileDirectory,
                                                     const GGS_semanticContext constinArgument_inSemanticContext,
                                                     const GGS_string constinArgument_inRootEntityName,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 42)) ;
  temp_0.plusPlusAssignOperation (constinArgument_inRootEntityName  COMMA_SOURCE_FILE ("graphviz.galgas4", 42)) ;
  GGS_stringset var_reachableEntityNameSet_1662 = temp_0 ;
  GGS_stringlist temp_1 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 43)) ;
  temp_1.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (constinArgument_inRootEntityName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("graphviz.galgas4", 43)) ;
  GGS_stringlist var_exploreArray_1724 = temp_1 ;
  GGS_stringlist temp_2 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 44)) ;
  GGS_stringlist var_nodeList_1779 = temp_2 ;
  GGS_stringlist temp_3 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 45)) ;
  GGS_stringlist var_arrowList_1811 = temp_3 ;
  if (constinArgument_inSemanticContext.readProperty_mClassMap ().getter_count (SOURCE_FILE ("graphviz.galgas4", 46)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 46)).isValid ()) {
    uint32_t variant_1828 = constinArgument_inSemanticContext.readProperty_mClassMap ().getter_count (SOURCE_FILE ("graphviz.galgas4", 46)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 46)).uintValue () ;
    bool loop_1828 = true ;
    while (loop_1828) {
      loop_1828 = GGS_bool (ComparisonKind::greaterThan, var_exploreArray_1724.getter_count (SOURCE_FILE ("graphviz.galgas4", 46)).objectCompare (GGS_uint (uint32_t (0U)))).isValid () ;
      if (loop_1828) {
        loop_1828 = GGS_bool (ComparisonKind::greaterThan, var_exploreArray_1724.getter_count (SOURCE_FILE ("graphviz.galgas4", 46)).objectCompare (GGS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_1828 && (0 == variant_1828)) {
        loop_1828 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("graphviz.galgas4", 46)) ;
      }
      if (loop_1828) {
        variant_1828 -= 1 ;
        GGS_string var_entityName_1946 ;
        {
        var_exploreArray_1724.setter_popLast (var_entityName_1946, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 47)) ;
        }
        GGS_string var_node_1966 = GGS_string ("  ").add_operation (var_entityName_1946, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 48)).add_operation (GGS_string ("[label=\"<"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 48)).add_operation (var_entityName_1946, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 48)).add_operation (GGS_string (">"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 48)).add_operation (var_entityName_1946, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 48)) ;
        GGS_classKind var_entityKind_2107 ;
        GGS_propertyMap var_propertyMap_2137 ;
        GGS_actionMap joker_2150_2 ; // Joker input parameter
        GGS_propertyGenerationList joker_2150_1 ; // Joker input parameter
        constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (var_entityName_1946.getter_nowhere (SOURCE_FILE ("graphviz.galgas4", 49)), var_entityKind_2107, var_propertyMap_2137, joker_2150_2, joker_2150_1, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 49)) ;
        GGS_string var_superEntityName_2207 ;
        GGS_bool joker_2224_3 ; // Joker input parameter
        GGS_bool joker_2224_2 ; // Joker input parameter
        GGS_bool joker_2224_1 ; // Joker input parameter
        var_entityKind_2107.method_extractEntity (var_superEntityName_2207, joker_2224_3, joker_2224_2, joker_2224_1, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 50)) ;
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = GGS_bool (ComparisonKind::notEqual, var_superEntityName_2207.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            GalgasBool test_5 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_5) {
              test_5 = var_reachableEntityNameSet_1662.getter_hasKey (var_superEntityName_2207 COMMA_SOURCE_FILE ("graphviz.galgas4", 52)).operator_not (SOURCE_FILE ("graphviz.galgas4", 52)).boolEnum () ;
              if (GalgasBool::boolTrue == test_5) {
                {
                var_reachableEntityNameSet_1662.setter_insert (var_superEntityName_2207, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 53)) ;
                }
                {
                var_exploreArray_1724.setter_append (var_superEntityName_2207, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 54)) ;
                }
              }
            }
            {
            var_arrowList_1811.setter_append (GGS_string ("  ").add_operation (var_entityName_1946, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 56)).add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 56)).add_operation (var_superEntityName_2207, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 56)).add_operation (GGS_string (" [dir=both arrowtail=dot arrowhead=normal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 56)), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 56)) ;
            }
          }
        }
        UpEnumerator_propertyMap enumerator_2611 (var_propertyMap_2137) ;
        while (enumerator_2611.hasCurrentObject ()) {
          switch (enumerator_2611.current_mKind (HERE).enumValue ()) {
          case GGS_propertyKind::Enumeration::invalid:
            break ;
          case GGS_propertyKind::Enumeration::enum_property:
            {
              GGS_typeKind extractedValue_2679_type_0 ;
              GGS_propertyAccessibility extractedValue_2685_accessibility_1 ;
              enumerator_2611.current_mKind (HERE).getAssociatedValuesFor_property (extractedValue_2679_type_0, extractedValue_2685_accessibility_1) ;
              switch (extractedValue_2685_accessibility_1.enumValue ()) {
              case GGS_propertyAccessibility::Enumeration::invalid:
                break ;
              case GGS_propertyAccessibility::Enumeration::enum_stored:
                {
                  var_node_1966.plusAssignOperation(GGS_string ("|").add_operation (extensionGetter_swiftTypeName (extractedValue_2679_type_0, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 63)), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 63)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 63)).add_operation (enumerator_2611.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 63)), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas4", 63)) ;
                }
                break ;
              case GGS_propertyAccessibility::Enumeration::enum_transient:
                break ;
              case GGS_propertyAccessibility::Enumeration::enum_computed:
                break ;
              }
            }
            break ;
          case GGS_propertyKind::Enumeration::enum_arrayController:
            break ;
          case GGS_propertyKind::Enumeration::enum_selectionController:
            break ;
          case GGS_propertyKind::Enumeration::enum_toMany:
            {
              GGS_lstring extractedValue_2981_typeName_0 ;
              GGS_propertyAccessibility extractedValue_3014_accessibility_1 ;
              GGS_bool extractedValue_3029__2 ;
              GGS_toManyRelationshipOptionAST extractedValue_3032_optionKind_3 ;
              enumerator_2611.current_mKind (HERE).getAssociatedValuesFor_toMany (extractedValue_2981_typeName_0, extractedValue_3014_accessibility_1, extractedValue_3029__2, extractedValue_3032_optionKind_3) ;
              GalgasBool test_6 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_6) {
                test_6 = extractedValue_3014_accessibility_1.getter_isStored (SOURCE_FILE ("graphviz.galgas4", 70)).boolEnum () ;
                if (GalgasBool::boolTrue == test_6) {
                  var_node_1966.plusAssignOperation(GGS_string ("|<").add_operation (enumerator_2611.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 71)).add_operation (GGS_string (">["), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 71)).add_operation (extractedValue_2981_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 71)).add_operation (GGS_string ("] "), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 71)).add_operation (enumerator_2611.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 71)), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas4", 71)) ;
                  switch (extractedValue_3032_optionKind_3.enumValue ()) {
                  case GGS_toManyRelationshipOptionAST::Enumeration::invalid:
                    break ;
                  case GGS_toManyRelationshipOptionAST::Enumeration::enum_none:
                    {
                      GalgasBool test_7 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_7) {
                        test_7 = var_reachableEntityNameSet_1662.getter_hasKey (extractedValue_2981_typeName_0.readProperty_string () COMMA_SOURCE_FILE ("graphviz.galgas4", 74)).operator_not (SOURCE_FILE ("graphviz.galgas4", 74)).boolEnum () ;
                        if (GalgasBool::boolTrue == test_7) {
                          {
                          var_reachableEntityNameSet_1662.setter_insert (extractedValue_2981_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 75)) ;
                          }
                          {
                          var_exploreArray_1724.setter_append (extractedValue_2981_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 76)) ;
                          }
                        }
                      }
                      {
                      var_arrowList_1811.setter_append (GGS_string ("  ").add_operation (var_entityName_1946, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 78)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 78)).add_operation (enumerator_2611.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 78)).add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 78)).add_operation (extractedValue_2981_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 79)).add_operation (GGS_string (" [dir=both arrowtail=none arrowhead=veevee]"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 79)), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 78)) ;
                      }
                    }
                    break ;
                  case GGS_toManyRelationshipOptionAST::Enumeration::enum_hasOpposite:
                    {
                      GGS_lstring extractedValue_3571_oppositeName_0 ;
                      extractedValue_3032_optionKind_3.getAssociatedValuesFor_hasOpposite (extractedValue_3571_oppositeName_0) ;
                      GalgasBool test_8 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_8) {
                        test_8 = var_reachableEntityNameSet_1662.getter_hasKey (extractedValue_2981_typeName_0.readProperty_string () COMMA_SOURCE_FILE ("graphviz.galgas4", 81)).operator_not (SOURCE_FILE ("graphviz.galgas4", 81)).boolEnum () ;
                        if (GalgasBool::boolTrue == test_8) {
                          {
                          var_reachableEntityNameSet_1662.setter_insert (extractedValue_2981_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 82)) ;
                          }
                          {
                          var_exploreArray_1724.setter_append (extractedValue_2981_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 83)) ;
                          }
                        }
                      }
                      {
                      var_arrowList_1811.setter_append (GGS_string ("  ").add_operation (var_entityName_1946, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 85)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 85)).add_operation (enumerator_2611.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 85)).add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 85)).add_operation (extractedValue_2981_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 86)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 86)).add_operation (extractedValue_3571_oppositeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 86)).add_operation (GGS_string (" [dir=both arrowtail=onormal arrowhead=veevee]"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 86)), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 85)) ;
                      }
                    }
                    break ;
                  case GGS_toManyRelationshipOptionAST::Enumeration::enum_hasDependance:
                    {
                      GGS_lstring extractedValue_3974__0 ;
                      extractedValue_3032_optionKind_3.getAssociatedValuesFor_hasDependance (extractedValue_3974__0) ;
                      GalgasBool test_9 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_9) {
                        test_9 = var_reachableEntityNameSet_1662.getter_hasKey (extractedValue_2981_typeName_0.readProperty_string () COMMA_SOURCE_FILE ("graphviz.galgas4", 88)).operator_not (SOURCE_FILE ("graphviz.galgas4", 88)).boolEnum () ;
                        if (GalgasBool::boolTrue == test_9) {
                          {
                          var_reachableEntityNameSet_1662.setter_insert (extractedValue_2981_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 89)) ;
                          }
                          {
                          var_exploreArray_1724.setter_append (extractedValue_2981_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 90)) ;
                          }
                        }
                      }
                      {
                      var_arrowList_1811.setter_append (GGS_string ("  ").add_operation (var_entityName_1946, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 92)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 92)).add_operation (enumerator_2611.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 92)).add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 92)).add_operation (extractedValue_2981_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 93)).add_operation (GGS_string (" [dir=both arrowtail=none arrowhead=veevee]"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 93)), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 92)) ;
                      }
                    }
                    break ;
                  }
                }
              }
            }
            break ;
          case GGS_propertyKind::Enumeration::enum_toOne:
            {
              GGS_lstring extractedValue_4365_typeName_0 ;
              GGS_propertyAccessibility extractedValue_4398_accessibility_1 ;
              GGS_bool extractedValue_4413__2 ;
              GGS_toOneOppositeRelationship extractedValue_4416_opposite_3 ;
              GGS_bool extractedValue_4426__4 ;
              enumerator_2611.current_mKind (HERE).getAssociatedValuesFor_toOne (extractedValue_4365_typeName_0, extractedValue_4398_accessibility_1, extractedValue_4413__2, extractedValue_4416_opposite_3, extractedValue_4426__4) ;
              GalgasBool test_10 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_10) {
                test_10 = extractedValue_4398_accessibility_1.getter_isStored (SOURCE_FILE ("graphviz.galgas4", 97)).boolEnum () ;
                if (GalgasBool::boolTrue == test_10) {
                  var_node_1966.plusAssignOperation(GGS_string ("|<").add_operation (enumerator_2611.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 98)).add_operation (GGS_string (">"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 98)).add_operation (extractedValue_4365_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 98)).add_operation (GGS_string ("\? "), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 98)).add_operation (enumerator_2611.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 98)), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas4", 98)) ;
                  switch (extractedValue_4416_opposite_3.enumValue ()) {
                  case GGS_toOneOppositeRelationship::Enumeration::invalid:
                    break ;
                  case GGS_toOneOppositeRelationship::Enumeration::enum_none:
                    {
                      GalgasBool test_11 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_11) {
                        test_11 = var_reachableEntityNameSet_1662.getter_hasKey (extractedValue_4365_typeName_0.readProperty_string () COMMA_SOURCE_FILE ("graphviz.galgas4", 101)).operator_not (SOURCE_FILE ("graphviz.galgas4", 101)).boolEnum () ;
                        if (GalgasBool::boolTrue == test_11) {
                          {
                          var_reachableEntityNameSet_1662.setter_insert (extractedValue_4365_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 102)) ;
                          }
                          {
                          var_exploreArray_1724.setter_append (extractedValue_4365_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 103)) ;
                          }
                        }
                      }
                      {
                      var_arrowList_1811.setter_append (GGS_string ("  ").add_operation (var_entityName_1946, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 105)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 105)).add_operation (enumerator_2611.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 105)).add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 105)).add_operation (extractedValue_4365_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 106)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 106)).add_operation (extractedValue_4365_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 106)).add_operation (GGS_string (" [dir=both arrowtail=none arrowhead=onormal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 106)), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 105)) ;
                      }
                    }
                    break ;
                  case GGS_toOneOppositeRelationship::Enumeration::enum_oppositeIsToMany:
                    break ;
                  case GGS_toOneOppositeRelationship::Enumeration::enum_oppositeIsToOne:
                    {
                      GGS_lstring extractedValue_5040_oppositeName_0 ;
                      extractedValue_4416_opposite_3.getAssociatedValuesFor_oppositeIsToOne (extractedValue_5040_oppositeName_0) ;
                      GalgasBool test_12 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_12) {
                        test_12 = var_reachableEntityNameSet_1662.getter_hasKey (extractedValue_4365_typeName_0.readProperty_string () COMMA_SOURCE_FILE ("graphviz.galgas4", 109)).operator_not (SOURCE_FILE ("graphviz.galgas4", 109)).boolEnum () ;
                        if (GalgasBool::boolTrue == test_12) {
                          {
                          var_reachableEntityNameSet_1662.setter_insert (extractedValue_4365_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 110)) ;
                          }
                          {
                          var_exploreArray_1724.setter_append (extractedValue_4365_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 111)) ;
                          }
                        }
                      }
                      GalgasBool test_13 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_13) {
                        test_13 = GGS_bool (ComparisonKind::greaterThan, enumerator_2611.current_lkey (HERE).readProperty_string ().objectCompare (extractedValue_5040_oppositeName_0.readProperty_string ())).boolEnum () ;
                        if (GalgasBool::boolTrue == test_13) {
                          {
                          var_arrowList_1811.setter_append (GGS_string ("  ").add_operation (var_entityName_1946, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 114)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 114)).add_operation (enumerator_2611.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 114)).add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 114)).add_operation (extractedValue_4365_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 115)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 115)).add_operation (extractedValue_5040_oppositeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 115)).add_operation (GGS_string (" [dir=both arrowtail=onormal arrowhead=onormal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 115)), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 114)) ;
                          }
                        }
                      }
                    }
                    break ;
                  }
                }
              }
            }
            break ;
          }
          enumerator_2611.gotoNextObject () ;
        }
        var_node_1966.plusAssignOperation(GGS_string ("\"]"), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas4", 121)) ;
        {
        var_nodeList_1779.setter_append (var_node_1966, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 122)) ;
        }
      }
    }
  }
  GGS_string var_s_5624 = GGS_string ("digraph G {\n") ;
  var_s_5624.plusAssignOperation(GGS_string ("  rankdir=LR ;\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas4", 126)) ;
  var_s_5624.plusAssignOperation(GGS_string ("  node [shape=record fontname=helvetica style=rounded] ;\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas4", 127)) ;
  UpEnumerator_stringlist enumerator_5745 (var_nodeList_1779) ;
  while (enumerator_5745.hasCurrentObject ()) {
    var_s_5624.plusAssignOperation(enumerator_5745.current_mValue (HERE).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 129)), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas4", 129)) ;
    enumerator_5745.gotoNextObject () ;
  }
  UpEnumerator_stringlist enumerator_5802 (var_arrowList_1811) ;
  while (enumerator_5802.hasCurrentObject ()) {
    var_s_5624.plusAssignOperation(enumerator_5802.current_mValue (HERE).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 132)), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas4", 132)) ;
    enumerator_5802.gotoNextObject () ;
  }
  var_s_5624.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas4", 134)) ;
  GGS_string var_filePath_5874 = constinArgument_inSourceFileDirectory.add_operation (GGS_string ("/models/graph-"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 135)).add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 135)).add_operation (GGS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 135)) ;
  GGS_string var_temp_5960 = var_filePath_5874.getter_deletingLastPathComponent (SOURCE_FILE ("graphviz.galgas4", 136)) ;
  var_temp_5960.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 136)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'graphvizRootEntityStrongAnalysis???'
//
//--------------------------------------------------------------------------------------------------

void routine_graphvizRootEntityStrongAnalysis_3F__3F__3F_ (const GGS_string constinArgument_inSourceFileDirectory,
                                                           const GGS_semanticContext constinArgument_inSemanticContext,
                                                           const GGS_string constinArgument_inRootEntityName,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 151)) ;
  temp_0.plusPlusAssignOperation (constinArgument_inRootEntityName  COMMA_SOURCE_FILE ("graphviz.galgas4", 151)) ;
  GGS_stringset var_reachableEntityNameSet_6688 = temp_0 ;
  GGS_stringlist temp_1 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 152)) ;
  temp_1.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (constinArgument_inRootEntityName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("graphviz.galgas4", 152)) ;
  GGS_stringlist var_exploreArray_6750 = temp_1 ;
  GGS_stringlist temp_2 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 153)) ;
  GGS_stringlist var_nodeList_6805 = temp_2 ;
  GGS_stringlist temp_3 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 154)) ;
  GGS_stringlist var_arrowList_6837 = temp_3 ;
  GGS_entityStrongReferenceGraph var_entityStrongReferenceGraph_6886 = GGS_entityStrongReferenceGraph::init (inCompiler COMMA_HERE) ;
  if (constinArgument_inSemanticContext.readProperty_mClassMap ().getter_count (SOURCE_FILE ("graphviz.galgas4", 156)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 156)).isValid ()) {
    uint32_t variant_6921 = constinArgument_inSemanticContext.readProperty_mClassMap ().getter_count (SOURCE_FILE ("graphviz.galgas4", 156)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 156)).uintValue () ;
    bool loop_6921 = true ;
    while (loop_6921) {
      loop_6921 = GGS_bool (ComparisonKind::greaterThan, var_exploreArray_6750.getter_count (SOURCE_FILE ("graphviz.galgas4", 156)).objectCompare (GGS_uint (uint32_t (0U)))).isValid () ;
      if (loop_6921) {
        loop_6921 = GGS_bool (ComparisonKind::greaterThan, var_exploreArray_6750.getter_count (SOURCE_FILE ("graphviz.galgas4", 156)).objectCompare (GGS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_6921 && (0 == variant_6921)) {
        loop_6921 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("graphviz.galgas4", 156)) ;
      }
      if (loop_6921) {
        variant_6921 -= 1 ;
        GGS_string var_entityName_7039 ;
        {
        var_exploreArray_6750.setter_popLast (var_entityName_7039, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 157)) ;
        }
        {
        var_nodeList_6805.setter_append (var_entityName_7039, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 158)) ;
        }
        {
        var_entityStrongReferenceGraph_6886.setter_addNode (GGS_lstring::init_21__21_ (var_entityName_7039, GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.galgas4", 159)), inCompiler COMMA_HERE), var_entityName_7039, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 159)) ;
        }
        GGS_classKind var_entityKind_7234 ;
        GGS_propertyMap var_propertyMap_7264 ;
        GGS_actionMap joker_7277_2 ; // Joker input parameter
        GGS_propertyGenerationList joker_7277_1 ; // Joker input parameter
        constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (var_entityName_7039.getter_nowhere (SOURCE_FILE ("graphviz.galgas4", 160)), var_entityKind_7234, var_propertyMap_7264, joker_7277_2, joker_7277_1, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 160)) ;
        GGS_string var_superEntityName_7334 ;
        GGS_bool joker_7351_3 ; // Joker input parameter
        GGS_bool joker_7351_2 ; // Joker input parameter
        GGS_bool joker_7351_1 ; // Joker input parameter
        var_entityKind_7234.method_extractEntity (var_superEntityName_7334, joker_7351_3, joker_7351_2, joker_7351_1, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 161)) ;
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = GGS_bool (ComparisonKind::notEqual, var_superEntityName_7334.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            GalgasBool test_5 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_5) {
              test_5 = var_reachableEntityNameSet_6688.getter_hasKey (var_superEntityName_7334 COMMA_SOURCE_FILE ("graphviz.galgas4", 163)).operator_not (SOURCE_FILE ("graphviz.galgas4", 163)).boolEnum () ;
              if (GalgasBool::boolTrue == test_5) {
                {
                var_reachableEntityNameSet_6688.setter_insert (var_superEntityName_7334, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 164)) ;
                }
                {
                var_exploreArray_6750.setter_append (var_superEntityName_7334, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 165)) ;
                }
              }
            }
            {
            var_arrowList_6837.setter_append (var_superEntityName_7334.add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 167)).add_operation (var_entityName_7039, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 167)).add_operation (GGS_string (" [arrowtail=dot arrowhead=normal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 167)), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 167)) ;
            }
            {
            var_entityStrongReferenceGraph_6886.setter_addEdge (GGS_lstring::init_21__21_ (var_superEntityName_7334, GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.galgas4", 168)), inCompiler COMMA_HERE), GGS_lstring::init_21__21_ (var_entityName_7039, GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.galgas4", 168)), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("graphviz.galgas4", 168)) ;
            }
          }
        }
        UpEnumerator_propertyMap enumerator_7822 (var_propertyMap_7264) ;
        while (enumerator_7822.hasCurrentObject ()) {
          switch (enumerator_7822.current_mKind (HERE).enumValue ()) {
          case GGS_propertyKind::Enumeration::invalid:
            break ;
          case GGS_propertyKind::Enumeration::enum_property:
            break ;
          case GGS_propertyKind::Enumeration::enum_arrayController:
            break ;
          case GGS_propertyKind::Enumeration::enum_selectionController:
            break ;
          case GGS_propertyKind::Enumeration::enum_toMany:
            {
              GGS_lstring extractedValue_7996_typeName_0 ;
              GGS_propertyAccessibility extractedValue_8029_accessibility_1 ;
              GGS_bool extractedValue_8045__2 ;
              GGS_toManyRelationshipOptionAST extractedValue_8045__3 ;
              enumerator_7822.current_mKind (HERE).getAssociatedValuesFor_toMany (extractedValue_7996_typeName_0, extractedValue_8029_accessibility_1, extractedValue_8045__2, extractedValue_8045__3) ;
              {
              var_arrowList_6837.setter_append (var_entityName_7039.add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 176)).add_operation (extractedValue_7996_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 176)).add_operation (GGS_string (" [dir=both arrowtail=none arrowhead=veevee]"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 176)), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 176)) ;
              }
              {
              var_entityStrongReferenceGraph_6886.setter_addEdge (GGS_lstring::init_21__21_ (var_entityName_7039, GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.galgas4", 177)), inCompiler COMMA_HERE), GGS_lstring::init_21__21_ (extractedValue_7996_typeName_0.readProperty_string (), GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.galgas4", 177)), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("graphviz.galgas4", 177)) ;
              }
              GalgasBool test_6 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_6) {
                test_6 = extractedValue_8029_accessibility_1.getter_isStored (SOURCE_FILE ("graphviz.galgas4", 178)).boolEnum () ;
                if (GalgasBool::boolTrue == test_6) {
                  GalgasBool test_7 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_7) {
                    test_7 = var_reachableEntityNameSet_6688.getter_hasKey (extractedValue_7996_typeName_0.readProperty_string () COMMA_SOURCE_FILE ("graphviz.galgas4", 179)).operator_not (SOURCE_FILE ("graphviz.galgas4", 179)).boolEnum () ;
                    if (GalgasBool::boolTrue == test_7) {
                      {
                      var_reachableEntityNameSet_6688.setter_insert (extractedValue_7996_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 180)) ;
                      }
                      {
                      var_exploreArray_6750.setter_append (extractedValue_7996_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 181)) ;
                      }
                    }
                  }
                }
              }
            }
            break ;
          case GGS_propertyKind::Enumeration::enum_toOne:
            {
              GGS_lstring extractedValue_8522_typeName_0 ;
              GGS_propertyAccessibility extractedValue_8555_accessibility_1 ;
              GGS_bool extractedValue_8570__2 ;
              GGS_toOneOppositeRelationship extractedValue_8573_opposite_3 ;
              GGS_bool extractedValue_8583_isWeak_4 ;
              enumerator_7822.current_mKind (HERE).getAssociatedValuesFor_toOne (extractedValue_8522_typeName_0, extractedValue_8555_accessibility_1, extractedValue_8570__2, extractedValue_8573_opposite_3, extractedValue_8583_isWeak_4) ;
              GalgasBool test_8 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_8) {
                test_8 = extractedValue_8583_isWeak_4.operator_not (SOURCE_FILE ("graphviz.galgas4", 185)).boolEnum () ;
                if (GalgasBool::boolTrue == test_8) {
                  {
                  var_arrowList_6837.setter_append (var_entityName_7039.add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 186)).add_operation (extractedValue_8522_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 186)).add_operation (GGS_string (" [dir=both arrowtail=none arrowhead=onormal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 186)), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 186)) ;
                  }
                  {
                  var_entityStrongReferenceGraph_6886.setter_addEdge (GGS_lstring::init_21__21_ (var_entityName_7039, GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.galgas4", 187)), inCompiler COMMA_HERE), GGS_lstring::init_21__21_ (extractedValue_8522_typeName_0.readProperty_string (), GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.galgas4", 187)), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("graphviz.galgas4", 187)) ;
                  }
                }
              }
              GalgasBool test_9 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_9) {
                test_9 = extractedValue_8555_accessibility_1.getter_isStored (SOURCE_FILE ("graphviz.galgas4", 189)).boolEnum () ;
                if (GalgasBool::boolTrue == test_9) {
                  switch (extractedValue_8573_opposite_3.enumValue ()) {
                  case GGS_toOneOppositeRelationship::Enumeration::invalid:
                    break ;
                  case GGS_toOneOppositeRelationship::Enumeration::enum_none:
                    {
                      GalgasBool test_10 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_10) {
                        test_10 = var_reachableEntityNameSet_6688.getter_hasKey (extractedValue_8522_typeName_0.readProperty_string () COMMA_SOURCE_FILE ("graphviz.galgas4", 192)).operator_not (SOURCE_FILE ("graphviz.galgas4", 192)).boolEnum () ;
                        if (GalgasBool::boolTrue == test_10) {
                          {
                          var_reachableEntityNameSet_6688.setter_insert (extractedValue_8522_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 193)) ;
                          }
                          {
                          var_exploreArray_6750.setter_append (extractedValue_8522_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 194)) ;
                          }
                        }
                      }
                    }
                    break ;
                  case GGS_toOneOppositeRelationship::Enumeration::enum_oppositeIsToMany:
                    break ;
                  case GGS_toOneOppositeRelationship::Enumeration::enum_oppositeIsToOne:
                    {
                      GGS_lstring extractedValue_9210__0 ;
                      extractedValue_8573_opposite_3.getAssociatedValuesFor_oppositeIsToOne (extractedValue_9210__0) ;
                      GalgasBool test_11 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_11) {
                        test_11 = var_reachableEntityNameSet_6688.getter_hasKey (extractedValue_8522_typeName_0.readProperty_string () COMMA_SOURCE_FILE ("graphviz.galgas4", 198)).operator_not (SOURCE_FILE ("graphviz.galgas4", 198)).boolEnum () ;
                        if (GalgasBool::boolTrue == test_11) {
                          {
                          var_reachableEntityNameSet_6688.setter_insert (extractedValue_8522_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 199)) ;
                          }
                          {
                          var_exploreArray_6750.setter_append (extractedValue_8522_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 200)) ;
                          }
                        }
                      }
                    }
                    break ;
                  }
                }
              }
            }
            break ;
          }
          enumerator_7822.gotoNextObject () ;
        }
      }
    }
  }
  GGS_string var_s_9472 = GGS_string ("digraph G {\n") ;
  var_s_9472.plusAssignOperation(GGS_string ("  rankdir=LR ;\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas4", 209)) ;
  var_s_9472.plusAssignOperation(GGS_string ("  node [shape=record fontname=helvetica style=rounded] ;\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas4", 210)) ;
  UpEnumerator_stringlist enumerator_9593 (var_nodeList_6805) ;
  while (enumerator_9593.hasCurrentObject ()) {
    var_s_9472.plusAssignOperation(GGS_string ("  ").add_operation (enumerator_9593.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 212)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 212)), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas4", 212)) ;
    enumerator_9593.gotoNextObject () ;
  }
  UpEnumerator_stringlist enumerator_9657 (var_arrowList_6837) ;
  while (enumerator_9657.hasCurrentObject ()) {
    var_s_9472.plusAssignOperation(GGS_string ("  ").add_operation (enumerator_9657.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 215)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 215)), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas4", 215)) ;
    enumerator_9657.gotoNextObject () ;
  }
  var_s_9472.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas4", 217)) ;
  GGS_string var_filePath_9736 = constinArgument_inSourceFileDirectory.add_operation (GGS_string ("/models/strong-"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 218)).add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 218)).add_operation (GGS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 218)) ;
  GGS_string var_temp_9823 = var_filePath_9736.getter_deletingLastPathComponent (SOURCE_FILE ("graphviz.galgas4", 219)) ;
  var_temp_9823.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 219)) ;
  GGS_bool joker_9937 ; // Joker input parameter
  var_s_9472.method_writeToFileWhenDifferentContents (var_filePath_9736, joker_9937, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 220)) ;
  var_filePath_9736 = constinArgument_inSourceFileDirectory.add_operation (GGS_string ("/models/strong-dep-"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 222)).add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 222)).add_operation (GGS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 222)) ;
  GGS_string var_temp_32__10051 = var_entityStrongReferenceGraph_6886.getter_graphviz (SOURCE_FILE ("graphviz.galgas4", 223)) ;
  GGS_bool joker_10147 ; // Joker input parameter
  var_temp_32__10051.method_writeToFileWhenDifferentContents (var_filePath_9736, joker_10147, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 223)) ;
  GGS_stringlist var_undefinedNodeList_10189 = var_entityStrongReferenceGraph_6886.getter_undefinedNodeKeyList (SOURCE_FILE ("graphviz.galgas4", 225)) ;
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    test_12 = GGS_bool (ComparisonKind::greaterThan, var_undefinedNodeList_10189.getter_count (SOURCE_FILE ("graphviz.galgas4", 226)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      GGS_string var_s_10303 = GGS_string ("for ").add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 227)).add_operation (GGS_string (" graph , the following entities are not defined"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 227)) ;
      UpEnumerator_stringlist enumerator_10394 (var_undefinedNodeList_10189) ;
      while (enumerator_10394.hasCurrentObject ()) {
        var_s_10303.plusAssignOperation(GGS_string ("\n -- ").add_operation (enumerator_10394.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 229)), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas4", 229)) ;
        enumerator_10394.gotoNextObject () ;
      }
      GenericArray <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.galgas4", 231)), var_s_10303, fixItArray13  COMMA_SOURCE_FILE ("graphviz.galgas4", 231)) ;
    }
  }
  GalgasBool test_14 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_14) {
    test_14 = GGS_bool (ComparisonKind::equal, var_undefinedNodeList_10189.getter_count (SOURCE_FILE ("graphviz.galgas4", 234)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_14) {
      GGS_lstringlist temp_15 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 236)) ;
      temp_15.plusPlusAssignOperation (GGS_lstringlist_2E_element::init_21_ (GGS_lstring::init_21__21_ (constinArgument_inRootEntityName, GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.galgas4", 236)), inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("graphviz.galgas4", 236)) ;
      GGS_stringset temp_16 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 236)) ;
      GGS_lstringlist var_accessibleNodeList_10562 = var_entityStrongReferenceGraph_6886.getter_accessibleNodesFrom (temp_15, temp_16, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 235)) ;
      GGS_stringset var_accessibleNodeSet_10685 = GGS_stringset::class_func_setWithLStringList (var_accessibleNodeList_10562  COMMA_SOURCE_FILE ("graphviz.galgas4", 237)) ;
      UpEnumerator_stringlist enumerator_10765 (var_nodeList_6805) ;
      while (enumerator_10765.hasCurrentObject ()) {
        GalgasBool test_17 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_17) {
          test_17 = var_accessibleNodeSet_10685.getter_hasKey (enumerator_10765.current_mValue (HERE) COMMA_SOURCE_FILE ("graphviz.galgas4", 239)).operator_not (SOURCE_FILE ("graphviz.galgas4", 239)).boolEnum () ;
          if (GalgasBool::boolTrue == test_17) {
            GenericArray <FixItDescription> fixItArray18 ;
            inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.galgas4", 240)), enumerator_10765.current_mValue (HERE).add_operation (GGS_string (" entity is not reachable via strong reference from "), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 240)).add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 240)), fixItArray18  COMMA_SOURCE_FILE ("graphviz.galgas4", 240)) ;
          }
        }
        enumerator_10765.gotoNextObject () ;
      }
    }
  }
  GalgasBool test_19 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_19) {
    test_19 = GGS_bool (ComparisonKind::equal, var_undefinedNodeList_10189.getter_count (SOURCE_FILE ("graphviz.galgas4", 245)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_19) {
      GGS_lstringlist var_unsortedNodeList_11102 ;
      GGS_stringlist joker_11080 ; // Joker input parameter
      var_entityStrongReferenceGraph_6886.method_circularities (joker_11080, var_unsortedNodeList_11102 COMMA_SOURCE_FILE ("graphviz.galgas4", 246)) ;
      GalgasBool test_20 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_20) {
        test_20 = GGS_bool (ComparisonKind::greaterThan, var_unsortedNodeList_11102.getter_count (SOURCE_FILE ("graphviz.galgas4", 247)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_20) {
          GGS_string var_s_11169 = GGS_string ("for ").add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 248)).add_operation (GGS_string (" graph, "), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 248)).add_operation (var_unsortedNodeList_11102.getter_count (SOURCE_FILE ("graphviz.galgas4", 248)).getter_string (SOURCE_FILE ("graphviz.galgas4", 248)), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 248)) ;
          var_s_11169.plusAssignOperation(GGS_string (" entities are involved in a strong reference cycle"), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas4", 249)) ;
          UpEnumerator_lstringlist enumerator_11312 (var_unsortedNodeList_11102) ;
          while (enumerator_11312.hasCurrentObject ()) {
            var_s_11169.plusAssignOperation(GGS_string ("\n -- ").add_operation (enumerator_11312.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 251)), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas4", 251)) ;
            enumerator_11312.gotoNextObject () ;
          }
          GenericArray <FixItDescription> fixItArray21 ;
          inCompiler->emitSemanticWarning (GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.galgas4", 253)), var_s_11169, fixItArray21  COMMA_SOURCE_FILE ("graphviz.galgas4", 253)) ;
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateXcodeProject????'
//
//--------------------------------------------------------------------------------------------------

void routine_generateXcodeProject_3F__3F__3F__3F_ (const GGS_string constinArgument_inOutputDirectory,
                                                   const GGS_string constinArgument_inXcodeProjectString,
                                                   const GGS_stringset constinArgument_inGeneratedFileSet,
                                                   const GGS_string constinArgument_projectName,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inXcodeProjectString.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      routine_generateXcodeProjectInternal_3F__3F__3F__3F_ (constinArgument_inOutputDirectory, constinArgument_inXcodeProjectString, constinArgument_inGeneratedFileSet, constinArgument_projectName, inCompiler  COMMA_SOURCE_FILE ("xcode-project.galgas4", 39)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateXcodeProjectInternal????'
//
//--------------------------------------------------------------------------------------------------

void routine_generateXcodeProjectInternal_3F__3F__3F__3F_ (const GGS_string constinArgument_inOutputDirectory,
                                                           const GGS_string constinArgument_inXcodeProjectString,
                                                           const GGS_stringset constinArgument_inGeneratedFileSet,
                                                           const GGS_string constinArgument_projectName,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_XcodeProjectDescriptor var_xcodeProject_1556 = GGS_XcodeProjectDescriptor::init (inCompiler COMMA_HERE) ;
  GGS_string var_SDK_1637 = GGS_string ("macosx") ;
  GGS_string var_DEPLOYMENT_1658 = GGS_string ("10.10") ;
  {
  GGS_stringlist temp_0 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 93)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("ALWAYS_SEARCH_USER_PATHS = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.galgas4", 56)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("ARCHS = \"$(ARCHS_STANDARD_64_BIT)\""), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.galgas4", 57)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_ENABLE_OBJC_ARC = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.galgas4", 58)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_GENERATE_DEBUGGING_SYMBOLS = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.galgas4", 59)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_PRECOMPILE_PREFIX_HEADER = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.galgas4", 60)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_THREADSAFE_STATICS = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.galgas4", 61)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_TREAT_IMPLICIT_FUNCTION_DECLARATIONS_AS_ERRORS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.galgas4", 62)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_TREAT_WARNINGS_AS_ERRORS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.galgas4", 63)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_64_TO_32_BIT_CONVERSION = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.galgas4", 64)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_ABOUT_DEPRECATED_FUNCTIONS = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.galgas4", 65)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_ABOUT_INVALID_OFFSETOF_MACRO = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.galgas4", 66)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_SUSPICIOUS_IMPLICIT_CONVERSION = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.galgas4", 67)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_ABOUT_MISSING_NEWLINE = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.galgas4", 68)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_ABOUT_MISSING_PROTOTYPES = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.galgas4", 69)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_ABOUT_RETURN_TYPE = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.galgas4", 70)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_CHECK_SWITCH_STATEMENTS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.galgas4", 71)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_FOUR_CHARACTER_CONSTANTS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.galgas4", 72)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_HIDDEN_VIRTUAL_FUNCTIONS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.galgas4", 73)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_INHIBIT_ALL_WARNINGS = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.galgas4", 74)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_INITIALIZER_NOT_FULLY_BRACKETED = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.galgas4", 75)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_MISSING_PARENTHESES = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.galgas4", 76)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_NON_VIRTUAL_DESTRUCTOR = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.galgas4", 77)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_PEDANTIC = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.galgas4", 78)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_SHADOW = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.galgas4", 79)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_SIGN_COMPARE = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.galgas4", 80)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_TYPECHECK_CALLS_TO_PRINTF = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.galgas4", 81)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNINITIALIZED_AUTOS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.galgas4", 82)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNKNOWN_PRAGMAS = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.galgas4", 83)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNUSED_FUNCTION = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.galgas4", 84)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNUSED_LABEL = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.galgas4", 85)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNUSED_VALUE = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.galgas4", 86)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNUSED_VARIABLE = YES"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.galgas4", 87)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("HEADER_SEARCH_PATHS = ()"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.galgas4", 88)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("MACOSX_DEPLOYMENT_TARGET = ").add_operation (var_DEPLOYMENT_1658, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 89)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.galgas4", 89)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SDKROOT = ").add_operation (var_SDK_1637, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 90)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.galgas4", 90)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("COPY_PHASE_STRIP = NO"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.galgas4", 91)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_VERSION = 4.2"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.galgas4", 92)) ;
  temp_0.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("LD_RUNPATH_SEARCH_PATHS = \"$(inherited) @executable_path/../Frameworks\""), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.galgas4", 93)) ;
  extensionSetter_addSettingsToDefaultConfiguration (var_xcodeProject_1556, temp_0, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 55)) ;
  }
  GGS_stringlist temp_1 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 96)) ;
  GGS_stringlist var_swiftFileRefList_3529 = temp_1 ;
  GGS_stringlist temp_2 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 97)) ;
  GGS_stringlist var_resourceFileRefList_3569 = temp_2 ;
  GGS_stringset var_generatedFileSet_3600 = constinArgument_inGeneratedFileSet ;
  {
  var_generatedFileSet_3600.setter_insert (GGS_string ("MainMenu.xib"), inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 99)) ;
  }
  GGS_stringlist var_cppFileRefs_3690 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_mFileRefs_3726 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_mmFileRefs_3760 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_frameworkFileRefs_3795 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_string var_groupRef_4192 ;
  {
  extensionSetter_addGroupWithFiles (var_xcodeProject_1556, GGS_string ("Sources"), constinArgument_projectName, var_generatedFileSet_3600, var_cppFileRefs_3690, var_mFileRefs_3726, var_mmFileRefs_3760, var_swiftFileRefList_3529, var_frameworkFileRefs_3795, var_resourceFileRefList_3569, var_groupRef_4192, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 104)) ;
  }
  {
  extensionSetter_placeGroupAsMainGroup (var_xcodeProject_1556, var_groupRef_4192, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 116)) ;
  }
  GGS_stringlist var_cppFileRefs_32__4272 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_mFileRefs_32__4309 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_mmFileRefs_32__4344 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_frameworkFileRefs_32__4380 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  {
  GGS_stringset temp_3 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 124)) ;
  temp_3.plusPlusAssignOperation (GGS_string ("Info.plist")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 124)) ;
  extensionSetter_addGroupWithFiles (var_xcodeProject_1556, GGS_string ("Resources"), constinArgument_projectName, temp_3, var_cppFileRefs_32__4272, var_mFileRefs_32__4309, var_mmFileRefs_32__4344, var_swiftFileRefList_3529, var_frameworkFileRefs_32__4380, var_resourceFileRefList_3569, var_groupRef_4192, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 121)) ;
  }
  {
  extensionSetter_placeGroupAsMainGroup (var_xcodeProject_1556, var_groupRef_4192, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 133)) ;
  }
  {
  GGS_stringlist temp_4 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 139)) ;
  GGS_stringlist temp_5 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 143)) ;
  temp_5.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_OPTIMIZATION_LEVEL = 0"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.galgas4", 142)) ;
  temp_5.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_PREPROCESSOR_DEFINITIONS = ()"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("xcode-project.galgas4", 143)) ;
  GGS_stringlist temp_6 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 145)) ;
  GGS__32_stringlist temp_7 = GGS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 146)) ;
  GGS_string joker_5297 ; // Joker input parameter
  extensionSetter_addAppTarget (var_xcodeProject_1556, constinArgument_projectName, constinArgument_projectName, var_swiftFileRefList_3529, temp_4, var_resourceFileRefList_3569, temp_5, temp_6, temp_7, constinArgument_projectName.add_operation (GGS_string ("/Info.plist"), inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 147)), joker_5297, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 135)) ;
  }
  GGS_string var_sourceDir_5347 = constinArgument_inOutputDirectory.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 151)).add_operation (constinArgument_projectName, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 151)).add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 151)) ;
  extensionMethod_generateAtPath (var_xcodeProject_1556, constinArgument_inOutputDirectory.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 153)).add_operation (constinArgument_projectName, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 153)).add_operation (GGS_string (".xcodeproj"), inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 153)), var_sourceDir_5347.add_operation (constinArgument_projectName, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 154)).add_operation (GGS_string (".xcodeproj.txt"), inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 154)), inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 152)) ;
  GGS_stringset temp_8 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 161)) ;
  temp_8.plusPlusAssignOperation (constinArgument_projectName  COMMA_SOURCE_FILE ("xcode-project.galgas4", 161)) ;
  GGS_string var_s_5610 = GGS_string (filewrapperTemplate_additionalXcodeFiles_info_5F_plist (inCompiler, constinArgument_projectName, constinArgument_inXcodeProjectString, GGS_string ("1.0.0"), temp_8 COMMA_SOURCE_FILE ("xcode-project.galgas4", 157))) ;
  {
  GGS_string::class_method_generateFile (var_sourceDir_5347, GGS_string ("Info.plist"), var_s_5610, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 163)) ;
  }
  var_s_5610 = GGS_string (filewrapperTemplate_additionalXcodeFiles_main_5F_xib (inCompiler, constinArgument_projectName COMMA_SOURCE_FILE ("xcode-project.galgas4", 168))) ;
  {
  GGS_string::class_method_generateFile (var_sourceDir_5347, GGS_string ("MainMenu.xib"), var_s_5610, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 171)) ;
  }
  var_s_5610 = GGS_string (filewrapperTemplate_additionalXcodeFiles_build_5F_command (inCompiler, constinArgument_projectName COMMA_SOURCE_FILE ("xcode-project.galgas4", 176))) ;
  GGS_bool joker_6103 ; // Joker input parameter
  var_s_5610.method_writeToExecutableFileWhenDifferentContents (constinArgument_inOutputDirectory.add_operation (GGS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 178)), joker_6103, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 177)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'additionalXcodeFiles'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_additionalXcodeFiles_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_additionalXcodeFiles_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_additionalXcodeFiles (
  "",
  0,
  gWrapperAllFiles_additionalXcodeFiles_0,
  0,
  gWrapperAllDirectories_additionalXcodeFiles_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'additionalXcodeFiles main_xib'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_additionalXcodeFiles_main_5F_xib (Compiler * /* inCompiler */,
                                                                 const GGS_string & in_PROJECT_5F_NAME
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("<\?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"no\"\?>\n<document type=\"com.apple.InterfaceBuilder3.Cocoa.XIB\" version=\"3.0\" toolsVersion=\"7528.3\" systemVersion=\"14C1514\" targetRuntime=\"MacOSX.Cocoa\" propertyAccessControl=\"none\">\n    <dependencies>\n        <deployment version=\"1090\" identifier=\"macosx\"/>\n        <plugIn identifier=\"com.apple.InterfaceBuilder.CocoaPlugin\" version=\"7528.3\"/>\n    </dependencies>\n    <objects>\n        <customObject id=\"-2\" userLabel=\"File's Owner\" customClass=\"NSApplication\"/>\n        <customObject id=\"-1\" userLabel=\"First Responder\" customClass=\"FirstResponder\"/>\n        <customObject id=\"-3\" userLabel=\"Application\" customClass=\"NSObject\"/>\n        <menu title=\"AMainMenu\" systemMenu=\"main\" id=\"29\">\n            <items>\n                <menuItem title=\"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\" id=\"56\">\n                    <menu key=\"submenu\" title=\"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\" systemMenu=\"apple\" id=\"57\">\n                        <items>\n                            <menuItem title=\"About ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\" id=\"58\">\n                                <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                <connections>\n                                    <action selector=\"orderFrontStandardAboutPanel:\" target=\"-2\" id=\"142\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem isSeparatorItem=\"YES\" id=\"236\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n                            </menuItem>\n                            <menuItem title=\"Preferences…\" keyEquivalent=\",\" id=\"129\"/>\n                            <menuItem isSeparatorItem=\"YES\" id=\"143\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n                            </menuItem>\n                            <menuItem title=\"Services\" id=\"131\">\n                                <menu key=\"submenu\" title=\"Services\" systemMenu=\"services\" id=\"130\"/>\n                            </menuItem>\n                            <menuItem isSeparatorItem=\"YES\" id=\"144\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n                            </menuItem>\n                            <menuItem title=\"Hide ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\" keyEquivalent=\"h\" id=\"134\">\n                                <connections>\n                                    <action selector=\"hide:\" target=\"-1\" id=\"367\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Hide Others\" keyEquivalent=\"h\" id=\"145\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" option=\"YES\" command=\"YES\"/>\n                                <connections>\n                                    <action selector=\"hideOtherApplications:\" target=\"-1\" id=\"368\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Show All\" id=\"150\">\n                                <connections>\n                                    <action selector=\"unhideAllApplications:\" target=\"-1\" id=\"370\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem isSeparatorItem=\"YES\" id=\"149\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n                            </menuItem>\n                            <menuItem title=\"Quit ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\" keyEquivalent=\"q\" id=\"136\">\n                                <connections>\n                                    <action selector=\"terminate:\" target=\"-3\" id=\"449\"/>\n                                </connections>\n                            </menuItem>\n                        </items>\n                    </menu>\n                </menuItem>\n                <menuItem title=\"File\" id=\"83\">\n                    <menu key=\"submenu\" title=\"File\" id=\"81\">\n                        <items>\n                            <menuItem title=\"New\" keyEquivalent=\"n\" id=\"82\">\n                                <connections>\n                                    <action selector=\"newDocument:\" target=\"-1\" id=\"373\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Open…\" keyEquivalent=\"o\" id=\"72\">\n                                <connections>\n                                    <action selector=\"openDocument:\" target=\"-1\" id=\"374\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Open Recent\" id=\"124\">\n                                <menu key=\"submenu\" title=\"Open Recent\" systemMenu=\"recentDocuments\" id=\"125\">\n                                    <items>\n                                        <menuItem title=\"Clear Menu\" id=\"126\">\n                                            <connections>\n                                                <action selector=\"clearRecentDocuments:\" target=\"-1\" id=\"127\"/>\n                                            </connections>\n                                        </menuItem>\n                                    </items>\n                                </menu>\n                            </menuItem>\n                            <menuItem isSeparatorItem=\"YES\" id=\"79\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n                            </menuItem>\n                            <menuItem title=\"Close\" keyEquivalent=\"w\" id=\"73\">\n                                <connections>\n                                    <action selector=\"performClose:\" target=\"-1\" id=\"193\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Save…\" keyEquivalent=\"s\" id=\"75\">\n                                <connections>\n                                    <action selector=\"saveDocument:\" target=\"-1\" id=\"362\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Revert to Saved\" id=\"112\">\n                                <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                <connections>\n                                    <action selector=\"revertDocumentToSaved:\" target=\"-1\" id=\"364\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem isSeparatorItem=\"YES\" id=\"74\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n                            </menuItem>\n                            <menuItem title=\"Page Setup...\" keyEquivalent=\"P\" id=\"77\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" shift=\"YES\" command=\"YES\"/>\n                                <connections>\n                                    <action selector=\"runPageLayout:\" target=\"-1\" id=\"87\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Print…\" keyEquivalent=\"p\" id=\"78\">\n                                <connections>\n                                    <action selector=\"print:\" target=\"-1\" id=\"86\"/>\n                                </connections>\n                            </menuItem>\n                        </items>\n                    </menu>\n                </menuItem>\n                <menuItem title=\"Edit\" id=\"217\">\n                    <menu key=\"submenu\" title=\"Edit\" id=\"205\">\n                        <items>\n                            <menuItem title=\"Undo\" keyEquivalent=\"z\" id=\"207\">\n                                <connections>\n                                    <action selector=\"undo:\" target=\"-1\" id=\"223\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Redo\" keyEquivalent=\"Z\" id=\"215\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" shift=\"YES\" command=\"YES\"/>\n                                <connections>\n                                    <action selector=\"redo:\" target=\"-1\" id=\"231\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem isSeparatorItem=\"YES\" id=\"206\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n                            </menuItem>\n                            <menuItem title=\"Cut\" keyEquivalent=\"x\" id=\"199\">\n                                <connections>\n                                    <action selector=\"cut:\" target=\"-1\" id=\"228\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Copy\" keyEquivalent=\"c\" id=\"197\">\n                                <connections>\n                                    <action selector=\"copy:\" target=\"-1\" id=\"224\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Paste\" keyEquivalent=\"v\" id=\"203\">\n                                <connections>\n                                    <action selector=\"paste:\" target=\"-1\" id=\"226\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Paste and Match Style\" keyEquivalent=\"V\" id=\"485\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" option=\"YES\" command=\"YES\"/>\n                                <connections>\n                                    <action selector=\"pasteAsPlainText:\" target=\"-1\" id=\"486\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Delete\" id=\"202\">\n                                <connections>\n                                    <action selector=\"delete:\" target=\"-1\" id=\"235\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Select All\" keyEquivalent=\"a\" id=\"198\">\n                                <connections>\n                                    <action selector=\"selectAll:\" target=\"-1\" id=\"232\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem isSeparatorItem=\"YES\" id=\"214\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n                            </menuItem>\n                            <menuItem title=\"Find\" id=\"218\">\n                                <menu key=\"submenu\" title=\"Find\" id=\"220\">\n                                    <items>\n                                        <menuItem title=\"Find…\" tag=\"1\" keyEquivalent=\"f\" id=\"209\">\n                                            <connections>\n                                                <action selector=\"performFindPanelAction:\" target=\"-1\" id=\"241\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Find and Replace…\" tag=\"12\" keyEquivalent=\"f\" id=\"534\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\" option=\"YES\" command=\"YES\"/>\n                                            <connections>\n                                                <action selector=\"performFindPanelAction:\" target=\"-1\" id=\"535\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Find Next\" tag=\"2\" keyEquivalent=\"g\" id=\"208\">\n                                            <connections>\n                                                <action selector=\"performFindPanelAction:\" target=\"-1\" id=\"487\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Find Previous\" tag=\"3\" keyEquivalent=\"G\" id=\"213\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\" shift=\"YES\" command=\"YES\"/>\n                                            <connections>\n                                                <action selector=\"performFindPanelAction:\" target=\"-1\" id=\"488\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Use Selection for Find\" tag=\"7\" keyEquivalent=\"e\" id=\"221\">\n                                            <connections>\n                                                <action selector=\"performFindPanelAction:\" target=\"-1\" id=\"489\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Jump to Selection\" keyEquivalent=\"j\" id=\"210\">\n                                            <connections>\n                                                <action selector=\"centerSelectionInVisibleArea:\" target=\"-1\" id=\"245\"/>\n                                            </connections>\n                                        </menuItem>\n                                    </items>\n                                </menu>\n                            </menuItem>\n                            <menuItem title=\"Spelling and Grammar\" id=\"216\">\n                                <menu key=\"submenu\" title=\"Spelling and Grammar\" id=\"200\">\n                                    <items>\n                                        <menuItem title=\"Show Spelling and Grammar\" keyEquivalent=\":\" id=\"204\">\n                                            <connections>\n                                                <action selector=\"showGuessPanel:\" target=\"-1\" id=\"230\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Check Document Now\" keyEquivalent=\";\" id=\"201\">\n                                            <connections>\n                                                <action selector=\"checkSpelling:\" target=\"-1\" id=\"225\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem isSeparatorItem=\"YES\" id=\"453\"/>\n                                        <menuItem title=\"Check Spelling While Typing\" id=\"219\">\n                                            <connections>\n                                                <action selector=\"toggleContinuousSpellChecking:\" target=\"-1\" id=\"222\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Check Grammar With Spelling\" id=\"346\">\n                                            <connections>\n                                                <action selector=\"toggleGrammarChecking:\" target=\"-1\" id=\"347\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Correct Spelling Automatically\" id=\"454\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <connections>\n                                                <action selector=\"toggleAutomaticSpellingCorrection:\" target=\"-1\" id=\"456\"/>\n                                            </connections>\n                                        </menuItem>\n                                    </items>\n                                </menu>\n                            </menuItem>\n                            <menuItem title=\"Substitutions\" id=\"348\">\n                                <menu key=\"submenu\" title=\"Substitutions\" id=\"349\">\n                                    <items>\n                                        <menuItem title=\"Show Substitutions\" id=\"457\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <connections>\n                                                <action selector=\"orderFrontSubstitutionsPanel:\" target=\"-1\" id=\"458\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem isSeparatorItem=\"YES\" id=\"459\"/>\n                                        <menuItem title=\"Smart Copy/Paste\" tag=\"1\" keyEquivalent=\"f\" id=\"350\">\n                                            <connections>\n                                                <action selector=\"toggleSmartInsertDelete:\" target=\"-1\" id=\"355\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Smart Quotes\" tag=\"2\" keyEquivalent=\"g\" id=\"351\">\n                                            <connections>\n                                                <action selector=\"toggleAutomaticQuoteSubstitution:\" target=\"-1\" id=\"356\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Smart Dashes\" id=\"460\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <connections>\n                                                <action selector=\"toggleAutomaticDashSubstitution:\" target=\"-1\" id=\"461\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Smart Links\" tag=\"3\" keyEquivalent=\"G\" id=\"354\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\" shift=\"YES\" command=\"YES\"/>\n                                            <connections>\n                                                <action selector=\"toggleAutomaticLinkDetection:\" target=\"-1\" id=\"357\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Text Replacement\" id=\"462\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <connections>\n                                                <action selector=\"toggleAutomaticTextReplacement:\" target=\"-1\" id=\"463\"/>\n                                            </connections>\n                                        </menuItem>\n                                    </items>\n                                </menu>\n                            </menuItem>\n                            <menuItem title=\"Transformations\" id=\"450\">\n                                <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                <menu key=\"submenu\" title=\"Transformations\" id=\"451\">\n                                    <items>\n                                        <menuItem title=\"Make Upper Case\" id=\"452\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <connections>\n                                                <action selector=\"uppercaseWord:\" target=\"-1\" id=\"464\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Make Lower Case\" id=\"465\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <connections>\n                                                <action selector=\"lowercaseWord:\" target=\"-1\" id=\"468\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Capitalize\" id=\"466\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <connections>\n                                                <action selector=\"capitalizeWord:\" target=\"-1\" id=\"467\"/>\n                                            </connections>\n                                        </menuItem>\n                                    </items>\n                                </menu>\n                            </menuItem>\n                            <menuItem title=\"Speech\" id=\"211\">\n                                <menu key=\"submenu\" title=\"Speech\" id=\"212\">\n                                    <items>\n                                        <menuItem title=\"Start Speaking\" id=\"196\">\n                                            <connections>\n                                                <action selector=\"startSpeaking:\" target=\"-1\" id=\"233\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Stop Speaking\" id=\"195\">\n                                            <connections>\n                                                <action selector=\"stopSpeaking:\" target=\"-1\" id=\"227\"/>\n                                            </connections>\n                                        </menuItem>\n                                    </items>\n                                </menu>\n                            </menuItem>\n                        </items>\n                    </menu>\n                </menuItem>\n                <menuItem title=\"Format\" id=\"375\">\n                    <modifierMask key=\"keyEquivalentModifierMask\"/>\n                    <menu key=\"submenu\" title=\"Format\" id=\"376\">\n                        <items>\n                            <menuItem title=\"Font\" id=\"377\">\n                                <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                <menu key=\"submenu\" title=\"Font\" systemMenu=\"font\" id=\"388\">\n                                    <items>\n                                        <menuItem title=\"Show Fonts\" keyEquivalent=\"t\" id=\"389\">\n                                            <connections>\n                                                <action selector=\"orderFrontFontPanel:\" target=\"420\" id=\"424\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Bold\" tag=\"2\" keyEquivalent=\"b\" id=\"390\">\n                                            <connections>\n                                                <action selector=\"addFontTrait:\" target=\"420\" id=\"421\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Italic\" tag=\"1\" keyEquivalent=\"i\" id=\"391\">\n                                            <connections>\n                                                <action selector=\"addFontTrait:\" target=\"420\" id=\"422\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Underline\" keyEquivalent=\"u\" id=\"392\">\n                                            <connections>\n                                                <action selector=\"underline:\" target=\"-1\" id=\"432\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem isSeparatorItem=\"YES\" id=\"393\"/>\n                                        <menuItem title=\"Bigger\" tag=\"3\" keyEquivalent=\"+\" id=\"394\">\n                                            <connections>\n                                                <action selector=\"modifyFont:\" target=\"420\" id=\"425\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Smaller\" tag=\"4\" keyEquivalent=\"-\" id=\"395\">\n                                            <connections>\n                                                <action selector=\"modifyFont:\" target=\"420\" id=\"423\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem isSeparatorItem=\"YES\" id=\"396\"/>\n                                        <menuItem title=\"Kern\" id=\"397\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <menu key=\"submenu\" title=\"Kern\" id=\"415\">\n                                                <items>\n                                                    <menuItem title=\"Use Default\" id=\"416\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"useStandardKerning:\" target=\"-1\" id=\"438\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem title=\"Use None\" id=\"417\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"turnOffKerning:\" target=\"-1\" id=\"441\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem title=\"Tighten\" id=\"418\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"tightenKerning:\" target=\"-1\" id=\"431\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem title=\"Loosen\" id=\"419\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"loosenKerning:\" target=\"-1\" id=\"435\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                </items>\n                                            </menu>\n                                        </menuItem>\n                                        <menuItem title=\"Ligature\" id=\"398\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <menu key=\"submenu\" title=\"Ligature\" id=\"411\">\n                                                <items>\n                                                    <menuItem title=\"Use Default\" id=\"412\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"useStandardLigatures:\" target=\"-1\" id=\"439\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem title=\"Use None\" id=\"413\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"turnOffLigatures:\" target=\"-1\" id=\"440\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem title=\"Use All\" id=\"414\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"useAllLigatures:\" target=\"-1\" id=\"434\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                </items>\n                                            </menu>\n                                        </menuItem>\n                                        <menuItem title=\"Baseline\" id=\"399\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <menu key=\"submenu\" title=\"Baseline\" id=\"405\">\n                                                <items>\n                                                    <menuItem title=\"Use Default\" id=\"406\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"unscript:\" target=\"-1\" id=\"437\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem title=\"Superscript\" id=\"407\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"superscript:\" target=\"-1\" id=\"430\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem title=\"Subscript\" id=\"408\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"subscript:\" target=\"-1\" id=\"429\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem title=\"Raise\" id=\"409\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"raiseBaseline:\" target=\"-1\" id=\"426\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem title=\"Lower\" id=\"410\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"lowerBaseline:\" target=\"-1\" id=\"427\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                </items>\n                                            </menu>\n                                        </menuItem>\n                                        <menuItem isSeparatorItem=\"YES\" id=\"400\"/>\n                                        <menuItem title=\"Show Colors\" keyEquivalent=\"C\" id=\"401\">\n                                            <connections>\n                                                <action selector=\"orderFrontColorPanel:\" target=\"-1\" id=\"433\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem isSeparatorItem=\"YES\" id=\"402\"/>\n                                        <menuItem title=\"Copy Style\" keyEquivalent=\"c\" id=\"403\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\" option=\"YES\" command=\"YES\"/>\n                                            <connections>\n                                                <action selector=\"copyFont:\" target=\"-1\" id=\"428\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Paste Style\" keyEquivalent=\"v\" id=\"404\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\" option=\"YES\" command=\"YES\"/>\n                                            <connections>\n                                                <action selector=\"pasteFont:\" target=\"-1\" id=\"436\"/>\n                                            </connections>\n                                        </menuItem>\n                                    </items>\n                                </menu>\n                            </menuItem>\n                            <menuItem title=\"Text\" id=\"496\">\n                                <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                <menu key=\"submenu\" title=\"Text\" id=\"497\">\n                                    <items>\n                                        <menuItem title=\"Align Left\" keyEquivalent=\"{\" id=\"498\">\n                                            <connections>\n                                                <action selector=\"alignLeft:\" target=\"-1\" id=\"524\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Center\" keyEquivalent=\"|\" id=\"499\">\n                                            <connections>\n                                                <action selector=\"alignCenter:\" target=\"-1\" id=\"518\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Justify\" id=\"500\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <connections>\n                                                <action selector=\"alignJustified:\" target=\"-1\" id=\"523\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Align Right\" keyEquivalent=\"}\" id=\"501\">\n                                            <connections>\n                                                <action selector=\"alignRight:\" target=\"-1\" id=\"521\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem isSeparatorItem=\"YES\" id=\"502\"/>\n                                        <menuItem title=\"Writing Direction\" id=\"503\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <menu key=\"submenu\" title=\"Writing Direction\" id=\"508\">\n                                                <items>\n                                                    <menuItem title=\"Paragraph\" enabled=\"NO\" id=\"509\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                    </menuItem>\n                                                    <menuItem id=\"510\">\n                                                        <string key=\"title\"> Default</string>\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"makeBaseWritingDirectionNatural:\" target=\"-1\" id=\"525\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem id=\"511\">\n                                                        <string key=\"title\"> Left to Right</string>\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"makeBaseWritingDirectionLeftToRight:\" target=\"-1\" id=\"526\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem id=\"512\">\n                                                        <string key=\"title\"> Right to Left</string>\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"makeBaseWritingDirectionRightToLeft:\" target=\"-1\" id=\"527\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem isSeparatorItem=\"YES\" id=\"513\"/>\n                                                    <menuItem title=\"Selection\" enabled=\"NO\" id=\"514\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                    </menuItem>\n                                                    <menuItem id=\"515\">\n                                                        <string key=\"title\"> Default</string>\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"makeTextWritingDirectionNatural:\" target=\"-1\" id=\"528\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem id=\"516\">\n                                                        <string key=\"title\"> Left to Right</string>\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"makeTextWritingDirectionLeftToRight:\" target=\"-1\" id=\"529\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem id=\"517\">\n                                                        <string key=\"title\"> Right to Left</string>\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"makeTextWritingDirectionRightToLeft:\" target=\"-1\" id=\"530\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                </items>\n                                            </menu>\n                                        </menuItem>\n                                        <menuItem isSeparatorItem=\"YES\" id=\"504\"/>\n                                        <menuItem title=\"Show Ruler\" id=\"505\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <connections>\n                                                <action selector=\"toggleRuler:\" target=\"-1\" id=\"520\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Copy Ruler\" keyEquivalent=\"c\" id=\"506\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\" control=\"YES\" command=\"YES\"/>\n                                            <connections>\n                                                <action selector=\"copyRuler:\" target=\"-1\" id=\"522\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Paste Ruler\" keyEquivalent=\"v\" id=\"507\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\" control=\"YES\" command=\"YES\"/>\n                                            <connections>\n                                                <action selector=\"pasteRuler:\" target=\"-1\" id=\"519\"/>\n                                            </connections>\n                                        </menuItem>\n                                    </items>\n                                </menu>\n                            </menuItem>\n                        </items>\n                    </menu>\n                </menuItem>\n                <menuItem title=\"View\" id=\"295\">\n                    <menu key=\"submenu\" title=\"View\" id=\"296\">\n                        <items>\n                            <menuItem title=\"Show Toolbar\" keyEquivalent=\"t\" id=\"297\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" option=\"YES\" command=\"YES\"/>\n                                <connections>\n                                    <action selector=\"toggleToolbarShown:\" target=\"-1\" id=\"366\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Customize Toolbar…\" id=\"298\">\n                                <connections>\n                                    <action selector=\"runToolbarCustomizationPalette:\" target=\"-1\" id=\"365\"/>\n                                </connections>\n                            </menuItem>\n                        </items>\n                    </menu>\n                </menuItem>\n                <menuItem title=\"Window\" id=\"19\">\n                    <menu key=\"submenu\" title=\"Window\" systemMenu=\"window\" id=\"24\">\n                        <items>\n                            <menuItem title=\"Minimize\" keyEquivalent=\"m\" id=\"23\">\n                                <connections>\n                                    <action selector=\"performMiniaturize:\" target=\"-1\" id=\"37\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Zoom\" id=\"239\">\n                                <connections>\n                                    <action selector=\"performZoom:\" target=\"-1\" id=\"240\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem isSeparatorItem=\"YES\" id=\"92\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n                            </menuItem>\n                            <menuItem title=\"Bring All to Front\" id=\"5\">\n                                <connections>\n                                    <action selector=\"arrangeInFront:\" target=\"-1\" id=\"39\"/>\n                                </connections>\n                            </menuItem>\n                        </items>\n                    </menu>\n                </menuItem>\n                <menuItem title=\"Help\" id=\"490\">\n                    <modifierMask key=\"keyEquivalentModifierMask\"/>\n                    <menu key=\"submenu\" title=\"Help\" systemMenu=\"help\" id=\"491\">\n                        <items>\n                            <menuItem title=\"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString (" Help\" keyEquivalent=\"\?\" id=\"492\">\n                                <connections>\n                                    <action selector=\"showHelp:\" target=\"-1\" id=\"493\"/>\n                                </connections>\n                            </menuItem>\n                        </items>\n                    </menu>\n                </menuItem>\n            </items>\n        </menu>\n        <window identifier=\"PrefWindow\" title=\"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\" allowsToolTipsWhenApplicationIsInactive=\"NO\" autorecalculatesKeyViewLoop=\"NO\" releasedWhenClosed=\"NO\" animationBehavior=\"default\" id=\"371\">\n            <windowStyleMask key=\"styleMask\" titled=\"YES\"/>\n            <windowPositionMask key=\"initialPositionMask\" leftStrut=\"YES\" rightStrut=\"YES\" topStrut=\"YES\" bottomStrut=\"YES\"/>\n            <rect key=\"contentRect\" x=\"335\" y=\"390\" width=\"615\" height=\"409\"/>\n            <rect key=\"screenRect\" x=\"0.0\" y=\"0.0\" width=\"2560\" height=\"1418\"/>\n            <view key=\"contentView\" id=\"372\">\n                <rect key=\"frame\" x=\"0.0\" y=\"0.0\" width=\"615\" height=\"409\"/>\n                <autoresizingMask key=\"autoresizingMask\"/>\n            </view>\n        </window>\n        <customObject id=\"536\" userLabel=\"Prefs\" customClass=\"Preferences\">\n            <connections>\n                <outlet property=\"window\" destination=\"371\" id=\"MyW-LM-hi6\"/>\n            </connections>\n        </customObject>\n        <customObject id=\"420\" customClass=\"NSFontManager\"/>\n    </objects>\n</document>\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'additionalXcodeFiles info_plist'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_additionalXcodeFiles_info_5F_plist (Compiler * /* inCompiler */,
                                                                   const GGS_string & in_PROJECT_5F_NAME,
                                                                   const GGS_string & in_APPLICATION_5F_BUNDLE_5F_BASE,
                                                                   const GGS_string & in_VERSION_5F_STRING,
                                                                   const GGS_stringset & in_HANDLED_5F_EXTENSION_5F_SET
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("<\?xml version=\"1.0\" encoding=\"UTF-8\"\?>\n<!DOCTYPE plist PUBLIC \"-//Apple//DTD PLIST 1.0//EN\" \"http://www.apple.com/DTDs/PropertyList-1.0.dtd\">\n<plist version=\"1.0\">\n<dict>\n <key>CFBundleDevelopmentRegion</key>\n <string>English</string>\n <key>CFBundleExecutable</key>\n <string>${EXECUTABLE_NAME}</string>\n <key>CFBundleIconFile</key>\n <string>application_icns</string>\n <key>CFBundleIdentifier</key>\n <string>") ;
  result.appendString (in_APPLICATION_5F_BUNDLE_5F_BASE.stringValue ()) ;
  result.appendString (".") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("</string>\n <key>CFBundleInfoDictionaryVersion</key>\n <string>6.0</string>\n <key>CFBundleName</key>\n <string>${PRODUCT_NAME}</string>\n <key>CFBundlePackageType</key>\n <string>APPL</string>\n <key>CFBundleSignature</key>\n <string>\?\?\?\?</string>\n <key>LSMinimumSystemVersion</key>\n <string>10.9</string>\n <key>CFBundleShortVersionString</key>\n <string>") ;
  result.appendString (in_VERSION_5F_STRING.stringValue ()) ;
  result.appendString ("</string>\n <key>NSMainNibFile</key>\n <string>MainMenu</string>\n <key>NSPrincipalClass</key>\n <string>EBApplication</string>\n <key>CFBundleDocumentTypes</key>\n <array>\n") ;
  GGS_uint index_1016_ (0) ;
  if (in_HANDLED_5F_EXTENSION_5F_SET.isValid ()) {
    UpEnumerator_stringset enumerator_1016 (in_HANDLED_5F_EXTENSION_5F_SET) ;
    while (enumerator_1016.hasCurrentObject ()) {
      result.appendString ("  <dict>\n   <key>CFBundleTypeIconFile</key>\n   <string>") ;
      result.appendString (enumerator_1016.current_key (HERE).stringValue ()) ;
      result.appendString ("_icns</string>\n   <key>CFBundleTypeExtensions</key>\n   <array>\n    <string>") ;
      result.appendString (enumerator_1016.current_key (HERE).stringValue ()) ;
      result.appendString ("</string>\n   </array>\n   <key>CFBundleTypeName</key>\n   <string>") ;
      result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
      result.appendString (" Source</string>\n   <key>CFBundleTypeOSTypes</key>\n   <array>\n    <string>TEXT</string>\n   </array>\n   <key>CFBundleTypeRole</key>\n   <string>Editor</string>\n   <key>LSTypeIsPackage</key>\n   <false/>\n   <key>NSDocumentClass</key>\n   <string>OC_GGS_Document</string>\n  </dict>\n") ;
      enumerator_1016.gotoNextObject () ;
      index_1016_.increment () ;
    }
  }
  result.appendString ("\n </array>\n</dict>\n</plist>\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'additionalXcodeFiles build_command'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_additionalXcodeFiles_build_5F_command (Compiler * /* inCompiler */,
                                                                      const GGS_string & in_PROJECT_5F_NAME
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/env python\n# -*- coding: UTF-8 -*-\n\n//-----------------------------------------------------------------------------*\n\nimport subprocess, os, sys, atexit\n\n//-----------------------------------------------------------------------------*\n\ndef cleanup () :\n  if buildProcess.poll () == None :\n    buildProcess.kill ()\n    print 'Build process killed'\n\n//-----------------------------------------------------------------------------*\n\n//------------------ Register a function for killing build subprocess\natexit.register (cleanup)\n//------------------ Get compiler as first argument\ncompiler = \"eb\" # Default compiler\nif len (sys.argv) > 1 :\n  compiler = sys.argv [1]\n//------------------ Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\nos.chdir (scriptDir)\n//------------------ Build\nprint \"+ \" + compiler + \" ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString (".eb\"\nbuildProcess = subprocess.Popen ([compiler, \"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString (".eb\"])\nbuildProcess.wait ()\n//------------------ Xcode build\nif buildProcess.returncode == 0 :\n  buildProcess = subprocess.Popen ([\"/Applications/Xcode.app/Contents/Developer/usr/bin/xcodebuild\"])\n  buildProcess.wait ()\n//------------------ Result\nif buildProcess.returncode != 0 :\n  sys.exit (buildProcess.returncode)\n\n//-----------------------------------------------------------------------------*\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildAutoLayoutBindingSpecificationMap&?'
//
//--------------------------------------------------------------------------------------------------

void routine_buildAutoLayoutBindingSpecificationMap_26__3F_ (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                             const GGS_autoLayoutViewClassBindingSpecificationList constinArgument_inBindingSpecificationListMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_autoLayoutViewClassBindingSpecificationList enumerator_3666 (constinArgument_inBindingSpecificationListMap) ;
  while (enumerator_3666.hasCurrentObject ()) {
    GGS_outletBindingSpecificationModelList temp_0 = GGS_outletBindingSpecificationModelList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 98)) ;
    GGS_outletBindingSpecificationModelList var_outletBindingSpecificationModelList_3767 = temp_0 ;
    UpEnumerator_outletClassBindingSpecificationModelList enumerator_3833 (enumerator_3666.current_mOutletClassBindingSpecificationModelList (HERE)) ;
    while (enumerator_3833.hasCurrentObject ()) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = GGS_bool (ComparisonKind::equal, enumerator_3833.current_mModelTypeName (HERE).readProperty_string ().objectCompare (GGS_string ("enum"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          {
          var_outletBindingSpecificationModelList_3767.setter_append (GGS_typeKind::class_func_enumType (GGS_string::makeEmptyString (), GGS_enumConstantMap::init (inCompiler COMMA_HERE), GGS_enumFuncMap::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 102)), enumerator_3833.current_mModelShouldBeWritableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 101)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_1) {
        GGS_classKind var_classKind_4247 ;
        GGS_propertyMap joker_4258_3 ; // Joker input parameter
        GGS_actionMap joker_4258_2 ; // Joker input parameter
        GGS_propertyGenerationList joker_4258_1 ; // Joker input parameter
        ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (enumerator_3833.current_mModelTypeName (HERE), var_classKind_4247, joker_4258_3, joker_4258_2, joker_4258_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 106)) ;
        GGS_typeKind var_typeKind_4285 ;
        switch (var_classKind_4247.enumValue ()) {
        case GGS_classKind::Enumeration::invalid:
          break ;
        case GGS_classKind::Enumeration::enum_prefs:
          {
            GenericArray <FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (enumerator_3833.current_mModelTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray2  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 110)) ;
            var_typeKind_4285.drop () ; // Release error dropped variable
          }
          break ;
        case GGS_classKind::Enumeration::enum_atomic:
          {
            GGS_typeKind extractedValue_4456_kind_0 ;
            var_classKind_4247.getAssociatedValuesFor_atomic (extractedValue_4456_kind_0) ;
            var_typeKind_4285 = extractedValue_4456_kind_0 ;
          }
          break ;
        case GGS_classKind::Enumeration::enum_document:
          {
            GGS_lstring extractedValue_4513__0 ;
            var_classKind_4247.getAssociatedValuesFor_document (extractedValue_4513__0) ;
            GenericArray <FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (enumerator_3833.current_mModelTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray3  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 114)) ;
            var_typeKind_4285.drop () ; // Release error dropped variable
          }
          break ;
        case GGS_classKind::Enumeration::enum_entity:
          {
            GGS_string extractedValue_4625__0 ;
            GGS_bool extractedValue_4625__1 ;
            GGS_bool extractedValue_4625__2 ;
            GGS_bool extractedValue_4625__3 ;
            var_classKind_4247.getAssociatedValuesFor_entity (extractedValue_4625__0, extractedValue_4625__1, extractedValue_4625__2, extractedValue_4625__3) ;
            GenericArray <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_3833.current_mModelTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray4  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 116)) ;
            var_typeKind_4285.drop () ; // Release error dropped variable
          }
          break ;
        }
        {
        var_outletBindingSpecificationModelList_3767.setter_append (var_typeKind_4285, enumerator_3833.current_mModelShouldBeWritableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 118)) ;
        }
      }
      enumerator_3833.gotoNextObject () ;
    }
    GGS_controllerBindingOptionDecoratedList temp_5 = GGS_controllerBindingOptionDecoratedList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 121)) ;
    GGS_controllerBindingOptionDecoratedList var_controllerBindingOptionDecoratedList_4887 = temp_5 ;
    UpEnumerator_controllerBindingOptionList enumerator_4951 (enumerator_3666.current_mBindingOptionList (HERE)) ;
    while (enumerator_4951.hasCurrentObject ()) {
      GGS_classKind var_classKind_5071 ;
      GGS_propertyMap joker_5082_3 ; // Joker input parameter
      GGS_actionMap joker_5082_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_5082_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (enumerator_4951.current_mOptionTypeName (HERE), var_classKind_5071, joker_5082_3, joker_5082_2, joker_5082_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 123)) ;
      GGS_typeKind var_typeKind_5107 ;
      switch (var_classKind_5071.enumValue ()) {
      case GGS_classKind::Enumeration::invalid:
        break ;
      case GGS_classKind::Enumeration::enum_prefs:
        {
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (enumerator_4951.current_mOptionTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 127)) ;
          var_typeKind_5107.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_classKind::Enumeration::enum_atomic:
        {
          GGS_typeKind extractedValue_5271_kind_0 ;
          var_classKind_5071.getAssociatedValuesFor_atomic (extractedValue_5271_kind_0) ;
          var_typeKind_5107 = extractedValue_5271_kind_0 ;
        }
        break ;
      case GGS_classKind::Enumeration::enum_document:
        {
          GGS_lstring extractedValue_5324__0 ;
          var_classKind_5071.getAssociatedValuesFor_document (extractedValue_5324__0) ;
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (enumerator_4951.current_mOptionTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray7  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 131)) ;
          var_typeKind_5107.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_classKind::Enumeration::enum_entity:
        {
          GGS_string extractedValue_5433__0 ;
          GGS_bool extractedValue_5433__1 ;
          GGS_bool extractedValue_5433__2 ;
          GGS_bool extractedValue_5433__3 ;
          var_classKind_5071.getAssociatedValuesFor_entity (extractedValue_5433__0, extractedValue_5433__1, extractedValue_5433__2, extractedValue_5433__3) ;
          GenericArray <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (enumerator_4951.current_mOptionTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray8  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 133)) ;
          var_typeKind_5107.drop () ; // Release error dropped variable
        }
        break ;
      }
      {
      var_controllerBindingOptionDecoratedList_4887.setter_append (var_typeKind_5107, enumerator_4951.current_mOptionName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 135)) ;
      }
      enumerator_4951.gotoNextObject () ;
    }
    GGS_autoLayoutViewBindingSpecificationMap var_bindingMap_5692 ;
    GGS_lstring var_outletSuperClassName_5720 ;
    GalgasBool test_9 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_9) {
      test_9 = ioArgument_ioSemanticContext.readProperty_mAutoLayoutBindingSpecificationMap ().getter_hasKey (enumerator_3666.current_mOutletClassName (HERE).readProperty_string () COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 140)).boolEnum () ;
      if (GalgasBool::boolTrue == test_9) {
        {
        ioArgument_ioSemanticContext.mProperty_mAutoLayoutBindingSpecificationMap.setter_removeKey (enumerator_3666.current_mOutletClassName (HERE), var_outletSuperClassName_5720, var_bindingMap_5692, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 141)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_9) {
      var_bindingMap_5692 = GGS_autoLayoutViewBindingSpecificationMap::init (inCompiler COMMA_HERE) ;
      GGS_bool joker_6096_8 ; // Joker input parameter
      GGS_bool joker_6096_7 ; // Joker input parameter
      GGS_bool joker_6096_6 ; // Joker input parameter
      GGS_bool joker_6096_5 ; // Joker input parameter
      GGS_bool joker_6096_4 ; // Joker input parameter
      GGS_bool joker_6096_3 ; // Joker input parameter
      GGS_autoLayoutClassParameterList joker_6096_2 ; // Joker input parameter
      GGS_astAutoLayoutViewFunctionMap joker_6096_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mAutolayoutViewClassMap ().method_searchKey (enumerator_3666.current_mOutletClassName (HERE), var_outletSuperClassName_5720, joker_6096_8, joker_6096_7, joker_6096_6, joker_6096_5, joker_6096_4, joker_6096_3, joker_6096_2, joker_6096_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 144)) ;
    }
    {
    var_bindingMap_5692.setter_insertKey (enumerator_3666.current_mBindingName (HERE), var_outletBindingSpecificationModelList_3767, var_controllerBindingOptionDecoratedList_4887, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 146)) ;
    }
    {
    ioArgument_ioSemanticContext.mProperty_mAutoLayoutBindingSpecificationMap.setter_insertKey (enumerator_3666.current_mOutletClassName (HERE), var_outletSuperClassName_5720, var_bindingMap_5692, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 151)) ;
    }
    enumerator_3666.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildBindingSpecificationMap&?'
//
//--------------------------------------------------------------------------------------------------

void routine_buildBindingSpecificationMap_26__3F_ (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                   const GGS_outletClassBindingSpecificationList constinArgument_inBindingSpecificationListMap,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_outletClassBindingSpecificationList enumerator_4526 (constinArgument_inBindingSpecificationListMap) ;
  while (enumerator_4526.hasCurrentObject ()) {
    GGS_outletBindingSpecificationModelList temp_0 = GGS_outletBindingSpecificationModelList::init (inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 130)) ;
    GGS_outletBindingSpecificationModelList var_outletBindingSpecificationModelList_4627 = temp_0 ;
    UpEnumerator_outletClassBindingSpecificationModelList enumerator_4693 (enumerator_4526.current_mOutletClassBindingSpecificationModelList (HERE)) ;
    while (enumerator_4693.hasCurrentObject ()) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = GGS_bool (ComparisonKind::equal, enumerator_4693.current_mModelTypeName (HERE).readProperty_string ().objectCompare (GGS_string ("enum"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          {
          var_outletBindingSpecificationModelList_4627.setter_append (GGS_typeKind::class_func_enumType (GGS_string::makeEmptyString (), GGS_enumConstantMap::init (inCompiler COMMA_HERE), GGS_enumFuncMap::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 134)), enumerator_4693.current_mModelShouldBeWritableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 133)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_1) {
        GGS_classKind var_classKind_5107 ;
        GGS_propertyMap joker_5118_3 ; // Joker input parameter
        GGS_actionMap joker_5118_2 ; // Joker input parameter
        GGS_propertyGenerationList joker_5118_1 ; // Joker input parameter
        ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (enumerator_4693.current_mModelTypeName (HERE), var_classKind_5107, joker_5118_3, joker_5118_2, joker_5118_1, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 138)) ;
        GGS_typeKind var_typeKind_5145 ;
        switch (var_classKind_5107.enumValue ()) {
        case GGS_classKind::Enumeration::invalid:
          break ;
        case GGS_classKind::Enumeration::enum_prefs:
          {
            GenericArray <FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (enumerator_4693.current_mModelTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray2  COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 142)) ;
            var_typeKind_5145.drop () ; // Release error dropped variable
          }
          break ;
        case GGS_classKind::Enumeration::enum_atomic:
          {
            GGS_typeKind extractedValue_5316_kind_0 ;
            var_classKind_5107.getAssociatedValuesFor_atomic (extractedValue_5316_kind_0) ;
            var_typeKind_5145 = extractedValue_5316_kind_0 ;
          }
          break ;
        case GGS_classKind::Enumeration::enum_document:
          {
            GGS_lstring extractedValue_5373__0 ;
            var_classKind_5107.getAssociatedValuesFor_document (extractedValue_5373__0) ;
            GenericArray <FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (enumerator_4693.current_mModelTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray3  COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 146)) ;
            var_typeKind_5145.drop () ; // Release error dropped variable
          }
          break ;
        case GGS_classKind::Enumeration::enum_entity:
          {
            GGS_string extractedValue_5485__0 ;
            GGS_bool extractedValue_5485__1 ;
            GGS_bool extractedValue_5485__2 ;
            GGS_bool extractedValue_5485__3 ;
            var_classKind_5107.getAssociatedValuesFor_entity (extractedValue_5485__0, extractedValue_5485__1, extractedValue_5485__2, extractedValue_5485__3) ;
            GenericArray <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_4693.current_mModelTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray4  COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 148)) ;
            var_typeKind_5145.drop () ; // Release error dropped variable
          }
          break ;
        }
        {
        var_outletBindingSpecificationModelList_4627.setter_append (var_typeKind_5145, enumerator_4693.current_mModelShouldBeWritableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 150)) ;
        }
      }
      enumerator_4693.gotoNextObject () ;
    }
    GGS_controllerBindingOptionDecoratedList temp_5 = GGS_controllerBindingOptionDecoratedList::init (inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 153)) ;
    GGS_controllerBindingOptionDecoratedList var_controllerBindingOptionDecoratedList_5747 = temp_5 ;
    UpEnumerator_controllerBindingOptionList enumerator_5811 (enumerator_4526.current_mBindingOptionList (HERE)) ;
    while (enumerator_5811.hasCurrentObject ()) {
      GGS_classKind var_classKind_5931 ;
      GGS_propertyMap joker_5942_3 ; // Joker input parameter
      GGS_actionMap joker_5942_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_5942_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (enumerator_5811.current_mOptionTypeName (HERE), var_classKind_5931, joker_5942_3, joker_5942_2, joker_5942_1, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 155)) ;
      GGS_typeKind var_typeKind_5967 ;
      switch (var_classKind_5931.enumValue ()) {
      case GGS_classKind::Enumeration::invalid:
        break ;
      case GGS_classKind::Enumeration::enum_prefs:
        {
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (enumerator_5811.current_mOptionTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 159)) ;
          var_typeKind_5967.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_classKind::Enumeration::enum_atomic:
        {
          GGS_typeKind extractedValue_6131_kind_0 ;
          var_classKind_5931.getAssociatedValuesFor_atomic (extractedValue_6131_kind_0) ;
          var_typeKind_5967 = extractedValue_6131_kind_0 ;
        }
        break ;
      case GGS_classKind::Enumeration::enum_document:
        {
          GGS_lstring extractedValue_6184__0 ;
          var_classKind_5931.getAssociatedValuesFor_document (extractedValue_6184__0) ;
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (enumerator_5811.current_mOptionTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray7  COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 163)) ;
          var_typeKind_5967.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_classKind::Enumeration::enum_entity:
        {
          GGS_string extractedValue_6293__0 ;
          GGS_bool extractedValue_6293__1 ;
          GGS_bool extractedValue_6293__2 ;
          GGS_bool extractedValue_6293__3 ;
          var_classKind_5931.getAssociatedValuesFor_entity (extractedValue_6293__0, extractedValue_6293__1, extractedValue_6293__2, extractedValue_6293__3) ;
          GenericArray <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (enumerator_5811.current_mOptionTypeName (HERE).readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray8  COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 165)) ;
          var_typeKind_5967.drop () ; // Release error dropped variable
        }
        break ;
      }
      {
      var_controllerBindingOptionDecoratedList_5747.setter_append (var_typeKind_5967, enumerator_5811.current_mOptionName (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 167)) ;
      }
      enumerator_5811.gotoNextObject () ;
    }
    GGS_outletBindingSpecificationMap var_bindingMap_6544 ;
    GGS_lstring var_outletSuperClassName_6572 ;
    GalgasBool test_9 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_9) {
      test_9 = ioArgument_ioSemanticContext.readProperty_mBindingSpecificationMap ().getter_hasKey (enumerator_4526.current_mOutletClassName (HERE).readProperty_string () COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 172)).boolEnum () ;
      if (GalgasBool::boolTrue == test_9) {
        {
        ioArgument_ioSemanticContext.mProperty_mBindingSpecificationMap.setter_removeKey (enumerator_4526.current_mOutletClassName (HERE), var_outletSuperClassName_6572, var_bindingMap_6544, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 173)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_9) {
      var_bindingMap_6544 = GGS_outletBindingSpecificationMap::init (inCompiler COMMA_HERE) ;
      GGS_bool joker_6920_6 ; // Joker input parameter
      GGS_bool joker_6920_5 ; // Joker input parameter
      GGS_bool joker_6920_4 ; // Joker input parameter
      GGS_bool joker_6920_3 ; // Joker input parameter
      GGS_bool joker_6920_2 ; // Joker input parameter
      GGS_bool joker_6920_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mOutletClassMap ().method_searchKey (enumerator_4526.current_mOutletClassName (HERE), var_outletSuperClassName_6572, joker_6920_6, joker_6920_5, joker_6920_4, joker_6920_3, joker_6920_2, joker_6920_1, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 176)) ;
    }
    {
    var_bindingMap_6544.setter_insertKey (enumerator_4526.current_mBindingName (HERE), var_outletBindingSpecificationModelList_4627, var_controllerBindingOptionDecoratedList_5747, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 178)) ;
    }
    {
    ioArgument_ioSemanticContext.mProperty_mBindingSpecificationMap.setter_insertKey (enumerator_4526.current_mOutletClassName (HERE), var_outletSuperClassName_6572, var_bindingMap_6544, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 183)) ;
    }
    enumerator_4526.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@arrayControllerDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_arrayControllerDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_arrayControllerDeclarationAST temp_0 = this ;
  const GGS_arrayControllerDeclarationAST temp_1 = this ;
  const GGS_arrayControllerDeclarationAST temp_2 = this ;
  GGS_lstring var_node_1115 = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 28)).add_operation (temp_1.readProperty_mControllerName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 28)), temp_2.readProperty_mControllerName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_arrayControllerDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_1115, temp_3, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 29)) ;
  }
  {
  const GGS_arrayControllerDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_1115, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("array-controller.galgas4", 30)) ;
  }
  const GGS_arrayControllerDeclarationAST temp_5 = this ;
  switch (temp_5.readProperty_mModel ().enumValue ()) {
  case GGS_arrayControllerBoundModelAST::Enumeration::invalid:
    break ;
  case GGS_arrayControllerBoundModelAST::Enumeration::enum_rootToManyRelationship:
    {
      GGS_lstring extractedValue_1367_rootEntityName_0 ;
      temp_5.readProperty_mModel ().getAssociatedValuesFor_rootToManyRelationship (extractedValue_1367_rootEntityName_0) ;
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = GGS_bool (ComparisonKind::notEqual, extractedValue_1367_rootEntityName_0.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          {
          const GGS_arrayControllerDeclarationAST temp_7 = this ;
          const GGS_arrayControllerDeclarationAST temp_8 = this ;
          ioArgument_ioGraph.setter_addEdge (var_node_1115, GGS_lstring::init_21__21_ (extractedValue_1367_rootEntityName_0.readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 34)).add_operation (temp_7.readProperty_mToManyPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 34)), temp_8.readProperty_mToManyPropertyName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("array-controller.galgas4", 34)) ;
          }
        }
      }
    }
    break ;
  case GGS_arrayControllerBoundModelAST::Enumeration::enum_selfToManyRelationship:
    {
      {
      const GGS_arrayControllerDeclarationAST temp_9 = this ;
      const GGS_arrayControllerDeclarationAST temp_10 = this ;
      const GGS_arrayControllerDeclarationAST temp_11 = this ;
      ioArgument_ioGraph.setter_addEdge (var_node_1115, GGS_lstring::init_21__21_ (temp_9.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 37)).add_operation (temp_10.readProperty_mToManyPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 37)), temp_11.readProperty_mToManyPropertyName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("array-controller.galgas4", 37)) ;
      }
    }
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@arrayControllerDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_arrayControllerDeclarationAST::getter_nodeKey (Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_arrayControllerDeclarationAST temp_0 = this ;
  const GGS_arrayControllerDeclarationAST temp_1 = this ;
  const GGS_arrayControllerDeclarationAST temp_2 = this ;
  result_result = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 44)).add_operation (temp_1.readProperty_mControllerName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 44)), temp_2.readProperty_mControllerName ().readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@arrayControllerDeclarationAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_arrayControllerDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                    GGS_generationStruct & /* ioArgument_ioGeneration */,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_arrayControllerDeclarationAST temp_0 = this ;
  GGS_classMap_2E_element var_entry_4145 = ioArgument_ioSemanticContext.readProperty_mClassMap ().readSubscript__3F_searchKey (temp_0.readProperty_mClassName (), inCompiler COMMA_HERE) ;
  GGS_actionMap var_controllerActions_4309 = GGS_actionMap::init (inCompiler COMMA_HERE) ;
  {
  var_controllerActions_4309.setter_insertKey (GGS_string ("add").getter_nowhere (SOURCE_FILE ("array-controller.galgas4", 111)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 111)) ;
  }
  {
  var_controllerActions_4309.setter_insertKey (GGS_string ("remove").getter_nowhere (SOURCE_FILE ("array-controller.galgas4", 112)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 112)) ;
  }
  const GGS_arrayControllerDeclarationAST temp_1 = this ;
  switch (temp_1.readProperty_mModel ().enumValue ()) {
  case GGS_arrayControllerBoundModelAST::Enumeration::invalid:
    break ;
  case GGS_arrayControllerBoundModelAST::Enumeration::enum_rootToManyRelationship:
    {
      GGS_lstring extractedValue_4500_rootEntityName_0 ;
      temp_1.readProperty_mModel ().getAssociatedValuesFor_rootToManyRelationship (extractedValue_4500_rootEntityName_0) ;
      GGS_propertyMap var_rootProperties_4588 ;
      GGS_classKind joker_4579 ; // Joker input parameter
      GGS_actionMap joker_4604_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_4604_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_4500_rootEntityName_0, joker_4579, var_rootProperties_4588, joker_4604_2, joker_4604_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 115)) ;
      GGS_propertyKind var_classKind_4672 ;
      const GGS_arrayControllerDeclarationAST temp_2 = this ;
      GGS_actionMap joker_4683_2 ; // Joker input parameter
      GGS_bool joker_4683_1 ; // Joker input parameter
      var_rootProperties_4588.method_searchKey (temp_2.readProperty_mToManyPropertyName (), var_classKind_4672, joker_4683_2, joker_4683_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 116)) ;
      switch (var_classKind_4672.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_4733__0 ;
          GGS_propertyAccessibility extractedValue_4733__1 ;
          var_classKind_4672.getAssociatedValuesFor_property (extractedValue_4733__0, extractedValue_4733__1) ;
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (extractedValue_4500_rootEntityName_0.readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray3  COMMA_SOURCE_FILE ("array-controller.galgas4", 119)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_4831_typeName_0 ;
          GGS_propertyAccessibility extractedValue_4841__1 ;
          GGS_bool extractedValue_4844_graphic_2 ;
          GGS_toManyRelationshipOptionAST extractedValue_4853__3 ;
          var_classKind_4672.getAssociatedValuesFor_toMany (extractedValue_4831_typeName_0, extractedValue_4841__1, extractedValue_4844_graphic_2, extractedValue_4853__3) ;
          GGS_propertyKind var_kind_4870 = GGS_propertyKind::class_func_arrayController (extractedValue_4831_typeName_0, extractedValue_4844_graphic_2  COMMA_SOURCE_FILE ("array-controller.galgas4", 121)) ;
          {
          const GGS_arrayControllerDeclarationAST temp_4 = this ;
          var_entry_4145.mProperty_mPropertyMap.setter_insertKey (temp_4.readProperty_mControllerName (), var_kind_4870, var_controllerActions_4309, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 125)) ;
          }
          {
          const GGS_arrayControllerDeclarationAST temp_5 = this ;
          const GGS_arrayControllerDeclarationAST temp_6 = this ;
          const GGS_arrayControllerDeclarationAST temp_7 = this ;
          var_entry_4145.mProperty_mPropertyGenerationList.setter_append (GGS_arrayControllerPropertyGeneration::init_21__21__21_ (temp_5.readProperty_mControllerName ().readProperty_string (), GGS_string ("rootObject.").add_operation (temp_6.readProperty_mToManyPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 129)), temp_7.readProperty_mClassName ().readProperty_string (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 127)) ;
          }
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_5326__0 ;
          GGS_propertyAccessibility extractedValue_5326__1 ;
          GGS_bool extractedValue_5326__2 ;
          GGS_toOneOppositeRelationship extractedValue_5326__3 ;
          GGS_bool extractedValue_5326__4 ;
          var_classKind_4672.getAssociatedValuesFor_toOne (extractedValue_5326__0, extractedValue_5326__1, extractedValue_5326__2, extractedValue_5326__3, extractedValue_5326__4) ;
          GenericArray <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (extractedValue_4500_rootEntityName_0.readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray8  COMMA_SOURCE_FILE ("array-controller.galgas4", 134)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_5434__0 ;
          GGS_bool extractedValue_5434__1 ;
          var_classKind_4672.getAssociatedValuesFor_arrayController (extractedValue_5434__0, extractedValue_5434__1) ;
          GenericArray <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (extractedValue_4500_rootEntityName_0.readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray9  COMMA_SOURCE_FILE ("array-controller.galgas4", 136)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_5545__0 ;
          var_classKind_4672.getAssociatedValuesFor_selectionController (extractedValue_5545__0) ;
          GenericArray <FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (extractedValue_4500_rootEntityName_0.readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray10  COMMA_SOURCE_FILE ("array-controller.galgas4", 138)) ;
        }
        break ;
      }
    }
    break ;
  case GGS_arrayControllerBoundModelAST::Enumeration::enum_selfToManyRelationship:
    {
      GGS_propertyKind var_classKind_5735 ;
      const GGS_arrayControllerDeclarationAST temp_11 = this ;
      GGS_actionMap joker_5746_2 ; // Joker input parameter
      GGS_bool joker_5746_1 ; // Joker input parameter
      var_entry_4145.readProperty_mPropertyMap ().method_searchKey (temp_11.readProperty_mToManyPropertyName (), var_classKind_5735, joker_5746_2, joker_5746_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 141)) ;
      switch (var_classKind_5735.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_5796__0 ;
          GGS_propertyAccessibility extractedValue_5796__1 ;
          var_classKind_5735.getAssociatedValuesFor_property (extractedValue_5796__0, extractedValue_5796__1) ;
          const GGS_arrayControllerDeclarationAST temp_12 = this ;
          GenericArray <FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (temp_12.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray13  COMMA_SOURCE_FILE ("array-controller.galgas4", 144)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_5904_typeName_0 ;
          GGS_propertyAccessibility extractedValue_5914__1 ;
          GGS_bool extractedValue_5917_graphic_2 ;
          GGS_toManyRelationshipOptionAST extractedValue_5926__3 ;
          var_classKind_5735.getAssociatedValuesFor_toMany (extractedValue_5904_typeName_0, extractedValue_5914__1, extractedValue_5917_graphic_2, extractedValue_5926__3) ;
          GGS_propertyKind var_kind_5943 = GGS_propertyKind::class_func_arrayController (extractedValue_5904_typeName_0, extractedValue_5917_graphic_2  COMMA_SOURCE_FILE ("array-controller.galgas4", 146)) ;
          {
          const GGS_arrayControllerDeclarationAST temp_14 = this ;
          var_entry_4145.mProperty_mPropertyMap.setter_insertKey (temp_14.readProperty_mControllerName (), var_kind_5943, var_controllerActions_4309, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 150)) ;
          }
          {
          const GGS_arrayControllerDeclarationAST temp_15 = this ;
          const GGS_arrayControllerDeclarationAST temp_16 = this ;
          const GGS_arrayControllerDeclarationAST temp_17 = this ;
          var_entry_4145.mProperty_mPropertyGenerationList.setter_append (GGS_arrayControllerPropertyGeneration::init_21__21__21_ (temp_15.readProperty_mControllerName ().readProperty_string (), temp_16.readProperty_mToManyPropertyName ().readProperty_string (), temp_17.readProperty_mClassName ().readProperty_string (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 152)) ;
          }
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_6383__0 ;
          GGS_propertyAccessibility extractedValue_6383__1 ;
          GGS_bool extractedValue_6383__2 ;
          GGS_toOneOppositeRelationship extractedValue_6383__3 ;
          GGS_bool extractedValue_6383__4 ;
          var_classKind_5735.getAssociatedValuesFor_toOne (extractedValue_6383__0, extractedValue_6383__1, extractedValue_6383__2, extractedValue_6383__3, extractedValue_6383__4) ;
          const GGS_arrayControllerDeclarationAST temp_18 = this ;
          GenericArray <FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (temp_18.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray19  COMMA_SOURCE_FILE ("array-controller.galgas4", 159)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_6501__0 ;
          GGS_bool extractedValue_6501__1 ;
          var_classKind_5735.getAssociatedValuesFor_arrayController (extractedValue_6501__0, extractedValue_6501__1) ;
          const GGS_arrayControllerDeclarationAST temp_20 = this ;
          GenericArray <FixItDescription> fixItArray21 ;
          inCompiler->emitSemanticError (temp_20.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray21  COMMA_SOURCE_FILE ("array-controller.galgas4", 161)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_6622__0 ;
          var_classKind_5735.getAssociatedValuesFor_selectionController (extractedValue_6622__0) ;
          const GGS_arrayControllerDeclarationAST temp_22 = this ;
          GenericArray <FixItDescription> fixItArray23 ;
          inCompiler->emitSemanticError (temp_22.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray23  COMMA_SOURCE_FILE ("array-controller.galgas4", 163)) ;
        }
        break ;
      }
    }
    break ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_replace (var_entry_4145, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 167)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@arrayControllerDeclarationAST thirdAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_arrayControllerDeclarationAST::method_thirdAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                    GGS_generationStruct & ioArgument_ioGeneration,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyMap var_boundModelPropertyMap_7203 ;
  const GGS_arrayControllerDeclarationAST temp_0 = this ;
  switch (temp_0.readProperty_mModel ().enumValue ()) {
  case GGS_arrayControllerBoundModelAST::Enumeration::invalid:
    break ;
  case GGS_arrayControllerBoundModelAST::Enumeration::enum_rootToManyRelationship:
    {
      GGS_lstring extractedValue_7286_rootEntityName_0 ;
      temp_0.readProperty_mModel ().getAssociatedValuesFor_rootToManyRelationship (extractedValue_7286_rootEntityName_0) ;
      GGS_classKind joker_7377 ; // Joker input parameter
      GGS_actionMap joker_7419_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_7419_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_7286_rootEntityName_0, joker_7377, var_boundModelPropertyMap_7203, joker_7419_2, joker_7419_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 183)) ;
    }
    break ;
  case GGS_arrayControllerBoundModelAST::Enumeration::enum_selfToManyRelationship:
    {
      const GGS_arrayControllerDeclarationAST temp_1 = this ;
      GGS_classKind joker_7535 ; // Joker input parameter
      GGS_actionMap joker_7577_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_7577_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mClassName (), joker_7535, var_boundModelPropertyMap_7203, joker_7577_2, joker_7577_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 190)) ;
    }
    break ;
  }
  GGS_propertyKind var_boundModelClassKind_7672 ;
  const GGS_arrayControllerDeclarationAST temp_2 = this ;
  GGS_actionMap joker_7698_2 ; // Joker input parameter
  GGS_bool joker_7698_1 ; // Joker input parameter
  var_boundModelPropertyMap_7203.method_searchKey (temp_2.readProperty_mToManyPropertyName (), var_boundModelClassKind_7672, joker_7698_2, joker_7698_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 197)) ;
  GGS_arrayControllerModelKind var_arrayControllerModelKind_7825 ;
  GGS_bool var_graphic_7862 ;
  GGS_string var_elementTypeName_7884 ;
  switch (var_boundModelClassKind_7672.enumValue ()) {
  case GGS_propertyKind::Enumeration::invalid:
    break ;
  case GGS_propertyKind::Enumeration::enum_property:
    {
      GGS_typeKind extractedValue_7947__0 ;
      GGS_propertyAccessibility extractedValue_7947__1 ;
      var_boundModelClassKind_7672.getAssociatedValuesFor_property (extractedValue_7947__0, extractedValue_7947__1) ;
      const GGS_arrayControllerDeclarationAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany property is required here"), fixItArray4  COMMA_SOURCE_FILE ("array-controller.galgas4", 208)) ;
      var_graphic_7862.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_7825.drop () ; // Release error dropped variable
      var_elementTypeName_7884.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toMany:
    {
      GGS_lstring extractedValue_8112_typeName_0 ;
      GGS_propertyAccessibility extractedValue_8122_accessibility_1 ;
      GGS_bool extractedValue_8137_isGraphic_2 ;
      GGS_toManyRelationshipOptionAST extractedValue_8148__3 ;
      var_boundModelClassKind_7672.getAssociatedValuesFor_toMany (extractedValue_8112_typeName_0, extractedValue_8122_accessibility_1, extractedValue_8137_isGraphic_2, extractedValue_8148__3) ;
      var_elementTypeName_7884 = extractedValue_8112_typeName_0.readProperty_string () ;
      var_graphic_7862 = extractedValue_8137_isGraphic_2 ;
      GGS_arrayControllerModelKind temp_5 ;
      const GalgasBool test_6 = extractedValue_8122_accessibility_1.getter_isTransient (SOURCE_FILE ("array-controller.galgas4", 214)).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        temp_5 = GGS_arrayControllerModelKind::class_func_transientArray (SOURCE_FILE ("array-controller.galgas4", 215)) ;
      }else if (GalgasBool::boolFalse == test_6) {
        temp_5 = GGS_arrayControllerModelKind::class_func_entityArray (SOURCE_FILE ("array-controller.galgas4", 216)) ;
      }
      var_arrayControllerModelKind_7825 = temp_5 ;
      GGS_classKind joker_8380 ; // Joker input parameter
      GGS_propertyMap joker_8384_3 ; // Joker input parameter
      GGS_actionMap joker_8384_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_8384_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_8112_typeName_0, joker_8380, joker_8384_3, joker_8384_2, joker_8384_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 218)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toOne:
    {
      GGS_lstring extractedValue_8404__0 ;
      GGS_propertyAccessibility extractedValue_8404__1 ;
      GGS_bool extractedValue_8404__2 ;
      GGS_toOneOppositeRelationship extractedValue_8404__3 ;
      GGS_bool extractedValue_8404__4 ;
      var_boundModelClassKind_7672.getAssociatedValuesFor_toOne (extractedValue_8404__0, extractedValue_8404__1, extractedValue_8404__2, extractedValue_8404__3, extractedValue_8404__4) ;
      const GGS_arrayControllerDeclarationAST temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany property is required here"), fixItArray8  COMMA_SOURCE_FILE ("array-controller.galgas4", 220)) ;
      var_graphic_7862.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_7825.drop () ; // Release error dropped variable
      var_elementTypeName_7884.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_arrayController:
    {
      GGS_lstring extractedValue_8579__0 ;
      GGS_bool extractedValue_8579__1 ;
      var_boundModelClassKind_7672.getAssociatedValuesFor_arrayController (extractedValue_8579__0, extractedValue_8579__1) ;
      const GGS_arrayControllerDeclarationAST temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany property is required here"), fixItArray10  COMMA_SOURCE_FILE ("array-controller.galgas4", 224)) ;
      var_graphic_7862.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_7825.drop () ; // Release error dropped variable
      var_elementTypeName_7884.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_selectionController:
    {
      GGS_string extractedValue_8757__0 ;
      var_boundModelClassKind_7672.getAssociatedValuesFor_selectionController (extractedValue_8757__0) ;
      const GGS_arrayControllerDeclarationAST temp_11 = this ;
      GenericArray <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany property is required here"), fixItArray12  COMMA_SOURCE_FILE ("array-controller.galgas4", 228)) ;
      var_graphic_7862.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_7825.drop () ; // Release error dropped variable
      var_elementTypeName_7884.drop () ; // Release error dropped variable
    }
    break ;
  }
  {
  const GGS_arrayControllerDeclarationAST temp_13 = this ;
  const GGS_arrayControllerDeclarationAST temp_14 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_arrayControllerGeneration::init_21__21__21__21__21__21_ (temp_13.readProperty_mClassName ().readProperty_string (), temp_14.readProperty_mControllerName (), GGS_string ("ReadWriteArrayOf_").add_operation (var_elementTypeName_7884, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 236)), var_arrayControllerModelKind_7825, var_elementTypeName_7884, var_graphic_7862, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 233)) ;
  }
  {
  ioArgument_ioGeneration.mProperty_mGenerateClass_5F_StoredArrayOf_5F_.setter_insert (var_elementTypeName_7884, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 242)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@arrayControllerPropertyGeneration propertyDeclarationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_arrayControllerPropertyGeneration::getter_propertyDeclarationCode (const GGS_bool constinArgument_inPreferences,
                                                                                   const GGS_bool /* constinArgument_inGenerationDirectAccess */,
                                                                                   const GGS_stringset /* constinArgument_inOverriddenTransients */,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inPreferences.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result = GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("array-controller.galgas4", 261)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 261)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 261)) ;
      const GGS_arrayControllerPropertyGeneration temp_1 = this ;
      result_result.plusAssignOperation(GGS_string ("//   Array controller: ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 262)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 262)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas4", 262)) ;
      result_result.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("array-controller.galgas4", 263)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 263)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 263)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas4", 263)) ;
      const GGS_arrayControllerPropertyGeneration temp_2 = this ;
      const GGS_arrayControllerPropertyGeneration temp_3 = this ;
      const GGS_arrayControllerPropertyGeneration temp_4 = this ;
      result_result.plusAssignOperation(GGS_string ("@MainAction let preferences_").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 264)).add_operation (GGS_string (" = Controller_"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 264)).add_operation (temp_3.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 264)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 264)).add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 264)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 264)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas4", 264)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("array-controller.galgas4", 266)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 266)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 266)) ;
    const GGS_arrayControllerPropertyGeneration temp_5 = this ;
    result_result.plusAssignOperation(GGS_string ("  //   Array controller: ").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 267)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 267)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas4", 267)) ;
    result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("array-controller.galgas4", 268)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 268)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 268)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas4", 268)) ;
    const GGS_arrayControllerPropertyGeneration temp_6 = this ;
    const GGS_arrayControllerPropertyGeneration temp_7 = this ;
    const GGS_arrayControllerPropertyGeneration temp_8 = this ;
    result_result.plusAssignOperation(GGS_string ("  final var ").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 269)).add_operation (GGS_string (" = Controller_"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 269)).add_operation (temp_7.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 269)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 269)).add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 269)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 269)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas4", 269)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@arrayControllerPropertyGeneration initCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_arrayControllerPropertyGeneration::getter_initCode (Compiler */* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@arrayControllerPropertyGeneration configurationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_arrayControllerPropertyGeneration::getter_configurationCode (const GGS_bool /* constinArgument_inPreferences */,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_arrayControllerPropertyGeneration temp_0 = this ;
  result_result = GGS_string ("  //--- Array controller property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 282)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 282)) ;
  const GGS_arrayControllerPropertyGeneration temp_1 = this ;
  const GGS_arrayControllerPropertyGeneration temp_2 = this ;
  result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 283)).add_operation (GGS_string (".bind_model (self."), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 283)).add_operation (temp_2.readProperty_mModelString (), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 283)).add_operation (GGS_string ("_property, self.undoManager)\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 283)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas4", 283)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'arrayControllerGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_arrayControllerGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_arrayControllerGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_arrayControllerGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_arrayControllerGenerationTemplate_0,
  0,
  gWrapperAllDirectories_arrayControllerGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'arrayControllerGenerationTemplate arrayControllerImplementationInSwift'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_arrayControllerGenerationTemplate_arrayControllerImplementationInSwift (Compiler * inCompiler,
                                                                                                       const GGS_string & in_OWNER_5F_NAME,
                                                                                                       const GGS_string & in_ARRAY_5F_CONTROLLER_5F_NAME,
                                                                                                       const GGS_arrayControllerModelKind & in_MODEL_5F_KIND,
                                                                                                       const GGS_string & in_MODEL_5F_TYPE_5F_NAME,
                                                                                                       const GGS_string & in_ELEMENT_5F_TYPE_5F_NAME,
                                                                                                       const GGS_bool & in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//--------------------------------------------------------------------------------------------------\n\nimport AppKit\n\n//--------------------------------------------------------------------------------------------------\n//    ") ;
  result.appendString (GGS_string ("Array controller ").add_operation (in_OWNER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("array-controller.swift.galgasTemplate", 8)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("array-controller.swift.galgasTemplate", 8)).add_operation (in_ARRAY_5F_CONTROLLER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("array-controller.swift.galgasTemplate", 8)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nfinal class Controller_") ;
  result.appendString (in_OWNER_5F_NAME.stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_ARRAY_5F_CONTROLLER_5F_NAME.stringValue ()) ;
  result.appendString (" : EBReadOnlyAbstractGenericRelationshipProperty") ;
  const GalgasBool test_0 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString (", EBGraphicViewControllerProtocol") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (", HiddenEBProtocol {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Undo manager\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private weak var mUndoManager : UndoManager\? = nil // SHOULD BE WEAK\n  var undoManager : UndoManager\? { return self.mUndoManager }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // Model\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private weak var mModel : ") ;
  result.appendString (in_MODEL_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("\? = nil // SHOULD BE WEAK\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var objects : EBReferenceArray <") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("> {\n    if let objects = self.mModel\?.propval {\n      return objects\n    }else{\n      return EBReferenceArray ()\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var selectedSet : EBReferenceSet <") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("> {\n    set {\n") ;
  const GalgasBool test_1 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    result.appendString ("    //--- Add observers to newly selected set\n      for object in newValue.subtracting (self.mPrivateSelectedSet).values {\n        object.selectionDisplay_property.startsBeingObserved (by: self.mObjectSelectionObserver)\n      }\n    //--- Remove observers to deselected set\n      let deselectedSet = self.mPrivateSelectedSet.subtracting (newValue)\n      for object in deselectedSet.values {\n        object.selectionDisplay_property.stopsBeingObserved (by: self.mObjectSelectionObserver)\n      }\n      if deselectedSet.count > 0 {\n        self.mObjectSelectionObserver.observedObjectDidChange () // Required, as removing observer does not post event\n      }\n    //---\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("      self.mPrivateSelectedSet = newValue\n    }\n    get {\n      return self.selectedArray_property.propset\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mPrivateSelectedSet = EBReferenceSet <") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("> () {\n    didSet {\n      self.selectedArray_property.observedObjectDidChange ()\n      self.mInternalSelectedArrayProperty.setProp (EBReferenceArray (Array (self.mPrivateSelectedSet.values)))\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // Selected Array\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private let mInternalSelectedArrayProperty = StandAloneArrayOf_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var selectedArrayDidChange_property : EBObservedObserver { return self.mInternalSelectedArrayProperty } // EBGraphicViewControllerProtocol\n  var selectedArray_property : ReadOnlyArrayOf_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" { return self.mInternalSelectedArrayProperty }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var selectedArray : EBReferenceArray <") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("> { return self.selectedArray_property.propval }\n\n") ;
  const GalgasBool test_2 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  switch (test_2) {
  case GalgasBool::boolTrue : {
    result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Init\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override init () {\n    super.init ()\n   //--- Selection observers\n    self.canBringForward_property.mReadModelFunction = { [weak self] in\n      if let me = self {\n        return .single (me.canBringForward)\n      }else{\n        return .empty\n      }\n    }\n    self.selectedArray_property.startsBeingObserved (by: self.canBringToFront_property)\n  //---\n    self.canBringToFront_property.mReadModelFunction = { [weak self] in\n      if let me = self {\n        return .single (me.canBringToFront)\n      }else{\n        return .empty\n      }\n    }\n    self.selectedArray_property.startsBeingObserved (by: self.canBringToFront_property)\n  //---\n    self.canSendBackward_property.mReadModelFunction = { [weak self] in\n      if let me = self {\n        return .single (me.canSendBackward)\n      }else{\n        return .empty\n      }\n    }\n    self.selectedArray_property.startsBeingObserved (by: self.canSendBackward_property)\n  //---\n    self.canSendToBack_property.mReadModelFunction = { [weak self] in\n      if let me = self {\n        return .single (me.canSendToBack)\n      }else{\n        return .empty\n      }\n    }\n    self.selectedArray_property.startsBeingObserved (by: self.canSendToBack_property)\n  //---\n    self.canFlipHorizontally_property.mReadModelFunction = { [weak self] in\n      if let me = self {\n        return .single (me.canFlipHorizontally)\n      }else{\n        return .empty\n      }\n    }\n    self.selectedArray_property.startsBeingObserved (by: self.canFlipHorizontally_property)\n  //---\n    self.canFlipVertically_property.mReadModelFunction = { [weak self] in\n      if let me = self {\n        return .single (me.canFlipVertically)\n      }else{\n        return .empty\n      }\n    }\n    self.selectedArray_property.startsBeingObserved (by: self.canFlipVertically_property)\n  //---\n    self.canRotate90_property.mReadModelFunction = { [weak self] in\n      if let me = self {\n        return .single (me.canRotate90)\n      }else{\n        return .empty\n      }\n    }\n    self.selectedArray_property.startsBeingObserved (by: self.canRotate90_property)\n  }\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var objectCount : Int {\n    if let n = self.mModel\?.propval.count {\n      return n\n    }else{\n      return 0\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func bind_model (_ inModel : ") ;
  result.appendString (in_MODEL_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (", _ inUndoManager : UndoManager\?) {\n    self.mModel = inModel\n    self.mUndoManager = inUndoManager\n    inModel.attachClient (self)\n") ;
  const GalgasBool test_3 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  switch (test_3) {
  case GalgasBool::boolTrue : {
    result.appendString ("    self.startObservingObjectShape ()\n    self.startObservingSelectionShape ()\n    self.inspectorViewManagerStartsObservingSelection ()\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func unbind_model () {\n") ;
  const GalgasBool test_4 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  switch (test_4) {
  case GalgasBool::boolTrue : {
    result.appendString ("    self.stopObservingObjectShape ()\n    self.stopObservingSelectionShape ()\n    self.inspectorViewManagerStopsObservingSelection ()\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("    self.mModel\?.detachClient (self)\n    self.selectedSet = EBReferenceSet ()\n    self.mModel = nil\n    self.mUndoManager = nil\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func notifyModelDidChange () {\n    super.notifyModelDidChange ()\n    let currentSelectedSet = self.selectedSet\n    let objectArray = self.objectArray\n    let newSelectedSet = currentSelectedSet.intersection (objectArray.values)\n    self.mInternalSelectedArrayProperty.setProp (EBReferenceArray (Array (newSelectedSet.values)))\n  }\n\n   // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n   var objectArray : EBReferenceArray <") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("> {\n     if let values = self.mModel\?.propval {\n       return values\n     }else{\n       return EBReferenceArray ()\n     }\n   }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   SELECTION\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var selectedIndexesSet : Set <Int> {\n    var result = Set <Int> ()\n    var idx = 0\n    for object in self.objectArray.values {\n      if self.selectedArray_property.propset.contains (object) {\n        result.insert (idx)\n      }\n      idx += 1\n    }\n    return result\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func setSelection (_ inObjects : [") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("]) {\n    self.selectedSet = EBReferenceSet (inObjects)\n  }\n") ;
  const GalgasBool test_5 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  switch (test_5) {
  case GalgasBool::boolTrue : {
    result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  Graphic view interface\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var selectedGraphicObjectSet : EBReferenceSet <EBGraphicManagedObject> {\n    var result = EBReferenceSet <EBGraphicManagedObject> (minimumCapacity: self.selectedArray_property.propval.count)\n    for object in self.selectedArray_property.propval.values {\n      result.insert (object)\n    }\n    return result\n  }\n\n   // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n   var graphicObjectArray : [EBGraphicManagedObject] {\n     if let v = self.mModel\?.propval {\n       return v.values\n     }else{\n       return []\n     }\n   }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // Compute selection shape\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mObjectSelectionObserver = EBOutletEvent ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private func startObservingSelectionShape () {\n    self.mModel\?.toMany_selectionDisplay_StartsBeingObserved (by: self.mObjectSelectionObserver)\n    self.mObjectSelectionObserver.mEventCallBack = { [weak self] in self\?.computeSelectionShape () }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func computeSelectionShape () {\n    var selectionDisplayArray = [EBShape] ()\n    for object in self.objectArray.values {\n      if !self.selectedArray_property.propset.contains (object) {\n        selectionDisplayArray.append (EBShape ())\n      }else if let shape = object.selectionDisplay {\n        selectionDisplayArray.append (shape)\n      }else{\n        selectionDisplayArray.append (EBShape ())\n      }\n    }\n    for view in self.mEBGraphicViews {\n      view.updateSelectionShape (selectionDisplayArray)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private func stopObservingSelectionShape () {\n    self.mModel\?.toMany_selectionDisplay_StopsBeingObserved (by: self.mObjectSelectionObserver)\n    self.mObjectSelectionObserver.mEventCallBack = nil\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // Compute object shape\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mObjectDisplayObserver = EBOutletEvent ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private func startObservingObjectShape () {\n    self.mModel\?.toMany_objectDisplay_StartsBeingObserved (by: self.mObjectDisplayObserver)\n    self.mObjectDisplayObserver.mEventCallBack = { [weak self] in self\?.updateObjectDisplay () }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private func stopObservingObjectShape () {\n    self.mModel\?.toMany_objectDisplay_StopsBeingObserved (by: self.mObjectDisplayObserver)\n    self.mObjectDisplayObserver.mEventCallBack = nil\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func updateObjectDisplay () {\n    var displayArray = [EBShape] ()\n    for object in self.objectArray.values {\n      if let shape = object.objectDisplay {\n        displayArray.append (shape)\n      }else{\n        displayArray.append (EBShape ())\n      }\n    }\n    for view in self.mEBGraphicViews {\n      view.updateObjectDisplay (displayArray)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func alignmentPointSetArray () -> [Set<CanariPoint>] {\n    var result = [Set<CanariPoint>] ()\n    for object in self.objectArray.values {\n      result.append (object.alignmentPoints ())\n    }\n    return result\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // EBGraphicViews\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mEBGraphicViews = Set <EBGraphicView> ()\n  private var mPasteboardTypes = Set <NSPasteboard.PasteboardType> ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func addPasteBoardType (_ inType : NSPasteboard.PasteboardType) {\n    if !self.mPasteboardTypes.contains (inType) {\n      self.mPasteboardTypes.insert (inType)\n      for ebView in self.mEBGraphicViews {\n        ebView.register (draggedTypes: [inType])\n      }\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func boundViews () -> [EBGraphicView] {\n    return Array (self.mEBGraphicViews)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func setBackgroundImageAffineTransform (_ inAffineTransform : NSAffineTransform) {\n     for ebView in self.mEBGraphicViews {\n       ebView.mBackgroundImageAffineTransform = inAffineTransform\n     }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func setForegroundImageAffineTransform (_ inAffineTransform : NSAffineTransform) {\n     for ebView in self.mEBGraphicViews {\n       ebView.mForegroundImageAffineTransform = inAffineTransform\n     }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func bind_ebView (_ inEBView : EBGraphicView\?) {\n    if let ebView = inEBView {\n      ebView.register (draggedTypes: Array (self.mPasteboardTypes))\n      self.mEBGraphicViews.insert (ebView)\n      ebView.set (controller: self)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  /* final func unbind_ebView (_ inEBView : EBGraphicView\?) {\n    if let ebView = inEBView {\n      ebView.updateObjectDisplay ([])\n      ebView.updateSelectionShape ([])\n      self.mEBGraphicViews.remove (ebView)\n    }\n  } */\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func selectedObjectIndexSet () -> NSIndexSet {\n    let modelObjects = self.objectArray\n    let selectedObjects = self.selectedArray_property.propset\n    let indexSet = NSMutableIndexSet ()\n    for object in selectedObjects.values {\n      if let index = modelObjects.firstIndex (of: object) {\n        indexSet.add (index)\n      }\n    }\n    return indexSet\n  }\n\n") ;
  switch (in_MODEL_5F_KIND.enumValue ()) {
  case GGS_arrayControllerModelKind::Enumeration::invalid :
    break ;
  case GGS_arrayControllerModelKind::Enumeration::enum_transientArray :
    {
    }
    break ;
  case GGS_arrayControllerModelKind::Enumeration::enum_entityArray :
    {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    select\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func select (object inObject : ") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
      result.appendString (") {\n    if let model = self.mModel {\n      switch model.selection {\n      case .empty, .multiple :\n        break\n      case .single (let objectArray) :\n       let array = EBReferenceArray (objectArray)\n       if array.contains (inObject) {\n           self.selectedSet = EBReferenceSet (inObject)\n        }\n      }\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    add\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n   @objc func add (_ _ : Any) {\n    if let model = self.mModel {\n      switch model.selection {\n      case .empty, .multiple :\n        break\n      case .single (let v) :\n        let newObject = ") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
      result.appendString (" (self.undoManager)\n        var array = EBReferenceArray (v)\n        array.append (newObject)\n      //--- New object is the selection\n        self.selectedSet = EBReferenceSet ([newObject])\n        model.setProp (array)\n      }\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    remove\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  @objc func remove (_ _ : Any) {\n    if let model = self.mModel {\n      switch model.selection {\n      case .empty, .multiple :\n        break\n      case .single (let model_prop) :\n      //------------- Find the object to be selected after selected object removing\n      //--- Dictionary of object sorted indexes\n        var sortedObjectDictionary = EBReferenceDictionary <") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
      result.appendString (", Int> ()\n        for (index, object) in model_prop.enumerated () {\n          sortedObjectDictionary [object] = index\n        }\n        var indexArrayOfSelectedObjects = [Int] ()\n        for object in self.selectedArray_property.propset.values {\n          let index = sortedObjectDictionary [object]\n          if let idx = index {\n            indexArrayOfSelectedObjects.append (idx)\n          }\n        }\n      //--- Sort\n        indexArrayOfSelectedObjects.sort { $0 < $1 }\n      //--- Find the first index of a non selected object\n        var newSelectionIndex = indexArrayOfSelectedObjects [0] + 1\n        for index in indexArrayOfSelectedObjects {\n          if newSelectionIndex < index {\n            break\n          }else{\n            newSelectionIndex = index + 1\n          }\n        }\n        var newSelectedObject : ") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
      result.appendString ("\? = nil\n        if (newSelectionIndex >= 0) && (newSelectionIndex < model_prop.count) {\n          newSelectedObject = model_prop [newSelectionIndex]\n        }\n      //----------------------------------------- Remove selected object\n      //--- Dictionary of object absolute indexes\n        var objectDictionary = EBReferenceDictionary <") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
      result.appendString (", Int> ()\n        for (index, object) in model_prop.enumerated () {\n          objectDictionary [object] = index\n        }\n      //--- Build selected objects index array\n        var selectedObjectIndexArray = [Int] ()\n        for object in self.selectedArray_property.propset.values {\n          let index = objectDictionary [object]\n          if let idx = index {\n            selectedObjectIndexArray.append (idx)\n          }\n        }\n      //--- Sort in reverse order\n        selectedObjectIndexArray.sort { $1 < $0 }\n      //--- Remove objects, in reverse of order of their index\n        var newObjectArray = EBReferenceArray (model_prop)\n        for index in selectedObjectIndexArray {\n          newObjectArray.remove (at: index)\n        }\n      //----------------------------------------- Set new selection\n        var newSelectionSet = EBReferenceSet <") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
      result.appendString ("> ()\n        if let object = newSelectedObject {\n          newSelectionSet.insert (object)\n        }\n        self.selectedSet = newSelectionSet\n      //----------------------------------------- Set new object array\n        model.setProp (newObjectArray)\n      }\n    }\n  }\n") ;
    }
    break ;
  }
  const GalgasBool test_6 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  switch (test_6) {
  case GalgasBool::boolTrue : {
    result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  DOCUMENT  \n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final weak var mDocument : EBAutoLayoutManagedDocument\? = nil\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func set (document inDocument : EBAutoLayoutManagedDocument) {\n    self.mDocument = inDocument\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  SELECTION OPERATIONS\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private func sortedIndexArrayOfSelectedObjects () -> [Int] {\n    var result = [Int] ()\n    let objects = self.objectArray\n    for object in self.selectedArray_property.propset.values {\n      let idx = objects.firstIndex (of: object)!\n      result.append (idx)\n    }\n    return result.sorted ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func canCut (_ inPasteboardType : NSPasteboard.PasteboardType\?) -> Bool {\n    if (inPasteboardType == nil) || (self.selectedArray_property.propset.count == 0) {\n      return false\n    }else{\n      for object in self.selectedArray_property.propset.values {\n        if !object.canCopyAndPaste () || !object.canBeDeleted () {\n          return false\n        }\n      }\n      return true\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func cutSelectedObjectsIntoPasteboard (_ inPasteboardType : NSPasteboard.PasteboardType\?, pasteOffset : CanariPoint) {\n    self.copySelectedObjectsIntoPasteboard (inPasteboardType, pasteOffset: pasteOffset)\n    self.deleteSelectedObjects ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func canCopy (_ inPasteboardType : NSPasteboard.PasteboardType\?) -> Bool {\n    return self.canCut (inPasteboardType)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func copySelectedObjectsIntoPasteboard (_ inPasteboardType : NSPasteboard.PasteboardType\?,\n                                          pasteOffset : CanariPoint) {\n    if let pasteboardType = inPasteboardType {\n    //--- Declare pasteboard types\n      let pb = NSPasteboard.general\n      pb.declareTypes ([pasteboardType, .pdf], owner: self)\n    //--- Build PDF representation\n      let indexArray = self.sortedIndexArrayOfSelectedObjects ()\n      let objects = self.objectArray\n      var shape = EBShape ()\n      for idx in indexArray {\n        let object = objects [idx]\n        if let s = object.objectDisplay {\n          shape.add (s)\n        }\n      }\n      let pdfData = buildPDFimageData (frame: shape.boundingBox, shape: shape)\n      pb.setData (pdfData, forType: .pdf)\n   //--- Build private representation\n      var objectDictionaryArray = [[String : Any]] ()\n      var objectAdditionalDictionaryArray = [[String : Any]] ()\n      for idx in indexArray {\n        let object = objects [idx]\n        var dict = [String : Any] ()\n        object.savePropertiesIntoDictionary (&dict)\n        objectDictionaryArray.append (dict)\n        var additionalDict = [String : Any] ()\n        object.saveIntoAdditionalDictionary (&additionalDict)\n        objectAdditionalDictionaryArray.append (additionalDict)\n      }\n    //--- Copy private representation\n      let dataDictionary : [String : Any] = [\n        OBJECT_DICTIONARY_KEY : objectDictionaryArray,\n        OBJECT_ADDITIONAL_DICTIONARY_KEY : objectAdditionalDictionaryArray,\n        X_KEY : pasteOffset.x,\n        Y_KEY : pasteOffset.y\n      ]\n      pb.setPropertyList (dataDictionary, forType: pasteboardType)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func canPaste (_ inPasteboardType : NSPasteboard.PasteboardType\?) -> Bool {\n    if let pasteboardType = inPasteboardType {\n      let pb = NSPasteboard.general\n      return pb.availableType (from: [pasteboardType]) != nil\n    }else{\n      return false\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n   func pasteFromPasteboard (_ inPasteboardType : NSPasteboard.PasteboardType\?, _ inWindow : NSWindow) {\n    let pb = NSPasteboard.general\n    if let pasteboardType = inPasteboardType,\n           pb.availableType (from: [pasteboardType]) != nil,\n           let dataDictionary = pb.propertyList (forType: pasteboardType) as\? [String : Any],\n           let dictionaryArray = dataDictionary [OBJECT_DICTIONARY_KEY] as\? [[String : Any]],\n           let additionalDictionaryArray = dataDictionary [OBJECT_ADDITIONAL_DICTIONARY_KEY] as\? [[String : Any]],\n           let X = dataDictionary [X_KEY] as\? Int,\n           let Y = dataDictionary [Y_KEY] as\? Int {\n      var newObjects = [") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
    result.appendString ("] ()\n      var userSet = EBReferenceSet <EBManagedObject> ()\n      var idx = -1\n      var errorMessage = \"\"\n      for dictionary in dictionaryArray {\n        idx += 1\n        if let object = makeManagedObjectFromDictionary (self.undoManager, dictionary) as\? ") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
    result.appendString (" {\n          if errorMessage.isEmpty {\n            errorMessage = object.operationAfterPasting (additionalDictionary: additionalDictionaryArray [idx],\n                                                         optionalDocument: self.mDocument,\n                                                         objectArray: self.objectArray.values)\n          }\n          if errorMessage.isEmpty {\n            object.translate (xBy: X, yBy: Y, userSet: &userSet)\n            newObjects.append (object)\n          }\n        }\n      }\n      if errorMessage.isEmpty {\n        var objects = self.objectArray\n        objects.append (objects: newObjects)\n        self.mModel\?.setProp (objects)\n        self.selectedSet = EBReferenceSet (newObjects)\n      }else{\n         let alert = NSAlert ()\n         alert.messageText = errorMessage\n         _ = alert.addButton (withTitle: \"Ok\")\n         alert.beginSheetModal (for: inWindow) { (inReturnCode : NSApplication.ModalResponse) in }\n      }\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func canDelete () -> Bool {\n    if self.selectedArray_property.propset.count == 0 {\n      return false\n    }else{\n      for object in self.selectedArray_property.propset.values {\n        if !object.canBeDeleted () {\n          return false\n        }\n      }\n      return true\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final var mAfterObjectRemovingCallback : Optional < () -> Void > = nil\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func deleteSelectedObjects () {\n    if self.canDelete (), let model = self.mModel {\n    //--- Remove selected objects\n      let objectsToRemove = self.selectedArray_property.propset\n      for object in objectsToRemove.values {\n        object.operationBeforeRemoving ()\n        var objects = model.propval\n        if let idx = objects.firstIndex (of: object) {\n          objects.remove (at: idx)\n          model.setProp (objects)\n        }\n      }\n    //---\n      self.mAfterObjectRemovingCallback\? ()\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func selectAllObjects () {\n    self.selectedSet = EBReferenceSet (self.objectArray.values)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // BRING FORWARD\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canBringForward_property = EBTransientProperty <Bool> ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canBringForward : Bool {\n    let objects = self.objectArray\n    var result = (objects.count > 1) && (self.selectedArray_property.propset.count > 0)\n    if result {\n      let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n      result = sortedIndexArray.last! < (objects.count - 1)\n    }\n    return result\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func bringForward () {\n    var objects = self.objectArray\n    let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n    for idx in sortedIndexArray.reversed () {\n       let object = objects [idx]\n       objects.remove (at: idx)\n       objects.insert (object, at: idx+1)\n    }\n    self.mModel\?.setProp (objects)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // BRING TO FRONT\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canBringToFront_property = EBTransientProperty <Bool> ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canBringToFront : Bool {\n    let objects = self.objectArray\n    if (objects.count > 1) && (self.selectedArray_property.propset.count > 0) {\n      let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n      var top = objects.count - 1\n      for idx in sortedIndexArray.reversed () {\n        if idx < top {\n          return true\n        }\n        top -= 1\n      }\n    }\n    return false\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func bringToFront () {\n    var objects = self.objectArray\n    let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n    for idx in sortedIndexArray {\n      let object = objects [idx]\n      objects.remove (at: idx)\n      objects.append (object)\n    }\n    self.mModel\?.setProp (objects)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // SEND BACKWARD\n   // MARK: -\n // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canSendBackward_property = EBTransientProperty <Bool> ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canSendBackward : Bool {\n    let objects = self.objectArray\n    var result = (objects.count > 1) && (self.selectedArray_property.propset.count > 0)\n    if result {\n      let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n      result = sortedIndexArray [0] > 0\n    }\n    return result\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func sendBackward () {\n    var objects = self.objectArray\n    let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n    for idx in sortedIndexArray.reversed () {\n      let object = objects [idx]\n      objects.remove (at: idx)\n      objects.insert (object, at: idx - 1)\n    }\n    self.mModel\?.setProp (objects)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // SEND TO BACK\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canSendToBack_property = EBTransientProperty <Bool> ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func sendToBack () {\n    var objects = self.objectArray\n    let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n    var newObjectArray = EBReferenceArray <") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
    result.appendString ("> ()\n    for idx in sortedIndexArray.reversed () {\n      let object = objects [idx]\n      objects.remove (at: idx)\n      newObjectArray.append (object)\n    }\n    newObjectArray.reverse ()\n    newObjectArray.append (objects: objects)\n    self.mModel\?.setProp (newObjectArray)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canSendToBack : Bool {\n    let objects = self.objectArray\n    if (objects.count > 1) && (self.selectedArray_property.propset.count > 0) {\n      let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n      var bottom = 0\n      for idx in sortedIndexArray {\n        if idx > bottom {\n          return true\n        }\n        bottom += 1\n      }\n    }\n    return false\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // SNAP TO GRID\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func snapToGrid (_ inGrid : Int) {\n    for object in self.selectedArray_property.propset.values {\n      object.snapToGrid (inGrid)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func canSnapToGrid (_ inGrid : Int) -> Bool {\n    for object in self.selectedArray_property.propset.values {\n      if object.canSnapToGrid (inGrid) {\n        return true\n      }\n    }\n    return false\n  }\n\n\n // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // HORIZONTAL FLIP\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canFlipHorizontally_property = EBTransientProperty <Bool> ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func flipHorizontally () {\n    for object in self.selectedArray_property.propset.values {\n      object.flipHorizontally ()\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canFlipHorizontally : Bool {\n    for object in self.selectedArray_property.propset.values {\n      if !object.canFlipHorizontally () {\n        return false\n      }\n    }\n    return self.selectedArray_property.propset.count > 0\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // VERTICAL FLIP\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canFlipVertically_property = EBTransientProperty <Bool> ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func flipVertically () {\n    for object in self.selectedArray_property.propset.values {\n      object.flipVertically ()\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canFlipVertically : Bool {\n    for object in self.selectedArray_property.propset.values {\n      if !object.canFlipVertically () {\n        return false\n      }\n    }\n    return self.selectedArray_property.propset.count > 0\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // ROTATE 90\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canRotate90_property = EBTransientProperty <Bool> ()\n  private var mRotate90PointSet = Set <CanariPoint> ()\n\n // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canRotate90 : Bool {\n    self.mRotate90PointSet.removeAll ()\n    if self.selectedArray.count == 0 {\n      return false\n    }else{\n      for object in self.selectedArray.values {\n        if !object.canRotate90 (accumulatedPoints: &self.mRotate90PointSet) {\n          return false\n        }\n      }\n      return !self.mRotate90PointSet.isEmpty\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func rotate90Clockwise () {\n    let r = CanariRect (points: Array (self.mRotate90PointSet))\n    var userSet = EBReferenceSet <EBManagedObject> ()\n    for object in self.selectedArray.values {\n      object.rotate90Clockwise (from: r.center, userSet: &userSet)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func rotate90CounterClockwise () {\n    let r = CanariRect (points: Array (self.mRotate90PointSet))\n    var userSet = EBReferenceSet <EBManagedObject> ()\n    for object in self.selectedArray.values {\n      object.rotate90CounterClockwise (from: r.center, userSet: &userSet)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func addToSelection (objects inObjects : [") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
    result.appendString ("]) {\n    if let objectSet = self.mModel\?.propset {\n      var newSelectedSet = self.selectedArray_property.propset\n      for object in inObjects {\n        if objectSet.contains (object) {\n          newSelectedSet.insert (object)\n        }\n      }\n      self.selectedSet = newSelectedSet\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n /* func addToSelection (objectsWithIndex inIndexes : [Int]) {\n    let objects = self.objectArray\n    var newSelectedSet = self.selectedArray_property.propset\n    for idx in inIndexes {\n      let newSelectedObject = objects [idx]\n      newSelectedSet.insert (newSelectedObject)\n    }\n    self.selectedSet = newSelectedSet\n  } */\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n/*  func removeFromSelection (objectWithIndex inIndex : Int) {\n    let objects = self.objectArray\n    let object = objects [inIndex]\n    var newSelectedSet = self.selectedArray_property.propset\n    newSelectedSet.remove (object)\n    self.selectedSet = newSelectedSet\n  } */\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func clearSelection () {\n    self.selectedSet = EBReferenceSet ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func setSelection (objectsWithIndexes inIndexes : [Int]) {\n    let objects = self.objectArray\n    var selectedObjects = [") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
    result.appendString ("] ()\n    for index in inIndexes {\n      let newSelectedObject = objects [index]\n      selectedObjects.append (newSelectedObject)\n    }\n    self.selectedSet = EBReferenceSet (selectedObjects)\n  }\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  //  INSPECTOR\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mInspectorReceivingView : NSView\? = nil\n  private var mCurrentAttachedView : NSView\? = nil\n  private var mInspectorDictionary = [ObjectIdentifier : NSView] ()\n  private var mInspectorObserver = EBOutletEvent ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func register (inspectorReceivingView : NSView\?) {\n    self.mInspectorReceivingView = inspectorReceivingView\n    self.updateInspectorViews ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func register (inspectorView : NSView\?, for inEntity : EBGraphicManagedObject.Type) {\n    self.mInspectorDictionary [ObjectIdentifier (inEntity)] = inspectorView\n    self.updateInspectorViews ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private func inspectorViewManagerStartsObservingSelection () {\n    self.selectedArray_property.startsBeingObserved (by: self.mInspectorObserver)\n    self.mInspectorObserver.mEventCallBack = { [weak self] in self\?.updateInspectorViews () }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private func inspectorViewManagerStopsObservingSelection () {\n    self.mInspectorObserver.mEventCallBack = nil\n    self.selectedArray_property.stopsBeingObserved (by: self.mInspectorObserver)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private func updateInspectorViews () {\n    if let inspectorView = self.mInspectorReceivingView {\n    //--- Remove current attached view\n      self.mCurrentAttachedView\?.removeFromSuperview ()\n    //--- Add the new attached view\n      if self.mViewIsHidden {\n        self.mCurrentAttachedView = nil\n      }else if self.selectedArray.count == 0 {\n        let tf = self.textField (\"Empty Selection\", inspectorView.frame)\n        inspectorView.addSubview (tf)\n        self.mCurrentAttachedView = tf\n      }else{\n        var selectionTypes = Set <ObjectIdentifier> ()\n        for object in self.selectedArray.values {\n          let T = ObjectIdentifier (type (of: object))\n          selectionTypes.insert (T)\n        }\n        if selectionTypes.count > 1 {\n          let tf = self.textField (\"Multiple Selection\", inspectorView.frame)\n          inspectorView.addSubview (tf)\n          self.mCurrentAttachedView = tf\n        }else if let selectionInspectorView = self.mInspectorDictionary [selectionTypes.first!] {\n          selectionInspectorView.autoresizingMask = [.width, .minYMargin]\n          selectionInspectorView.frame = inspectorView.frame\n          inspectorView.addSubview (selectionInspectorView)\n          self.mCurrentAttachedView = selectionInspectorView\n        }else{\n          let tf = self.textField (\"No Inspector for this Selection\", inspectorView.frame)\n          inspectorView.addSubview (tf)\n          self.mCurrentAttachedView = tf\n        }\n      }\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private func textField (_ inString : String, _ inspectorFrame : NSRect) -> NSTextField {\n    let textHeight : CGFloat = 30.0\n    let r = NSRect (\n      x: 0.0,\n      y: inspectorFrame.origin.y + (inspectorFrame.size.height - textHeight) / 2.0,\n      width: inspectorFrame.size.width,\n      height: textHeight\n    )\n    let tf = NSTextField (frame: r)\n    tf.alignment = .center\n    tf.isBezeled = false\n    tf.isBordered = false\n    tf.drawsBackground = false\n    tf.isEnabled = true\n    tf.isEditable = false\n    tf.autoresizingMask = [.width, .minYMargin, .maxYMargin]\n    tf.stringValue = inString\n    tf.font = NSFont.boldSystemFont (ofSize: NSFont.systemFontSize * 1.25)\n    tf.textColor = NSColor.lightGray\n    return tf\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mViewIsHidden = false {\n    didSet { self.updateInspectorViews () }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var isHidden : Bool {\n    get { return self.mViewIsHidden }\n    set { self.mViewIsHidden = newValue }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@arrayControllerGeneration generateCodePhase1'
//--------------------------------------------------------------------------------------------------

void cPtr_arrayControllerGeneration::method_generateCodePhase_31_ (const GGS_string /* constinArgument_inOutputDirectory */,
                                                                   const GGS_generationStruct /* constinArgument_inGenerationStruct */,
                                                                   GGS_stringset & /* ioArgument_ioUsedProtocolSet */,
                                                                   GGS_stringset & /* ioArgument_ioGeneratedFileSet */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@arrayControllerGeneration generateCodePhase2'
//--------------------------------------------------------------------------------------------------

void cPtr_arrayControllerGeneration::method_generateCodePhase_32_ (const GGS_string constinArgument_inOutputDirectory,
                                                                   const GGS_generationStruct /* constinArgument_inGenerationStruct */,
                                                                   const GGS_stringset /* constinArgument_inUsedProtocolSet */,
                                                                   GGS_stringset & /* ioArgument_ioGeneratedFileSet */,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_arrayControllerGeneration temp_0 = this ;
  const GGS_arrayControllerGeneration temp_1 = this ;
  const GGS_arrayControllerGeneration temp_2 = this ;
  const GGS_arrayControllerGeneration temp_3 = this ;
  const GGS_arrayControllerGeneration temp_4 = this ;
  const GGS_arrayControllerGeneration temp_5 = this ;
  GGS_string var_s_13532 = GGS_string (filewrapperTemplate_arrayControllerGenerationTemplate_arrayControllerImplementationInSwift (inCompiler, temp_0.readProperty_mOwnerName (), temp_1.readProperty_mControllerName ().readProperty_string (), temp_2.readProperty_mArrayControllerModelKind (), temp_3.readProperty_mModelTypeName (), temp_4.readProperty_mElementTypeName (), temp_5.readProperty_mElementTypeIsGraphic () COMMA_SOURCE_FILE ("array-controller.galgas4", 340))) ;
  {
  const GGS_arrayControllerGeneration temp_6 = this ;
  const GGS_arrayControllerGeneration temp_7 = this ;
  GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, GGS_string ("controller-array-").add_operation (temp_6.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 350)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 350)).add_operation (temp_7.readProperty_mControllerName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 350)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 350)), var_s_13532, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 348)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@literalIntMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//--------------------------------------------------------------------------------------------------

void cPtr_literalIntMultipleBindingExpressionAST::method_analyzeExpressionForMultipleBinding (const GGS_bool /* constinArgument_inPreferences */,
                                                                                              const GGS_propertyMap /* constinArgument_inRootObservablePropertyMap */,
                                                                                              const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                                                              const GGS_propertyMap /* constinArgument_inCurrentObservablePropertyMap */,
                                                                                              const GGS_propertyMap /* constinArgument_inPreferencesObservablePropertyMap */,
                                                                                              GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                              GGS_typeKind & outArgument_outType,
                                                                                              GGS_location & outArgument_outErrorLocation,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalIntMultipleBindingExpressionAST temp_0 = this ;
  outArgument_outEnableExpression = GGS_booleanMultipleBindingLiteralIntForGeneration::init_21_ (temp_0.readProperty_mValue ().readProperty_uint (), inCompiler COMMA_HERE) ;
  outArgument_outType = GGS_typeKind::class_func_integerType (SOURCE_FILE ("multiple-binding.galgas4", 274)) ;
  const GGS_literalIntMultipleBindingExpressionAST temp_1 = this ;
  outArgument_outErrorLocation = temp_1.readProperty_mValue ().readProperty_location () ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@observablePropertyInMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//--------------------------------------------------------------------------------------------------

void cPtr_observablePropertyInMultipleBindingExpressionAST::method_analyzeExpressionForMultipleBinding (const GGS_bool constinArgument_inPreferences,
                                                                                                        const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                                        const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                                        const GGS_propertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                                        const GGS_propertyMap constinArgument_inPreferencesObservablePropertyMap,
                                                                                                        GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                                        GGS_typeKind & outArgument_outType,
                                                                                                        GGS_location & outArgument_outErrorLocation,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKind var_kind_12428 ;
  GGS_string var_swiftTypeStringForTransientFunctionArgument_12458 ;
  GGS_string var_protocolTypeName_12527 ;
  GGS_string var_defaultValueAsString_12569 ;
  const GGS_observablePropertyInMultipleBindingExpressionAST temp_0 = this ;
  GGS_propertyMap temp_1 ;
  const GalgasBool test_2 = constinArgument_inPreferences.boolEnum () ;
  if (GalgasBool::boolTrue == test_2) {
    temp_1 = constinArgument_inPreferencesObservablePropertyMap ;
  }else if (GalgasBool::boolFalse == test_2) {
    temp_1 = constinArgument_inCurrentObservablePropertyMap ;
  }
  extensionMethod_analyzeObservableProperty (temp_0.readProperty_mProperty (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, temp_1, var_kind_12428, var_swiftTypeStringForTransientFunctionArgument_12458, var_protocolTypeName_12527, var_defaultValueAsString_12569, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 290)) ;
  switch (var_kind_12428.enumValue ()) {
  case GGS_propertyKind::Enumeration::invalid:
    break ;
  case GGS_propertyKind::Enumeration::enum_property:
    {
      GGS_typeKind extractedValue_12625_type_0 ;
      GGS_propertyAccessibility extractedValue_12631__1 ;
      var_kind_12428.getAssociatedValuesFor_property (extractedValue_12625_type_0, extractedValue_12631__1) ;
      outArgument_outType = extractedValue_12625_type_0 ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toMany:
    {
      GGS_lstring extractedValue_12671__0 ;
      GGS_propertyAccessibility extractedValue_12671__1 ;
      GGS_bool extractedValue_12671__2 ;
      GGS_toManyRelationshipOptionAST extractedValue_12671__3 ;
      var_kind_12428.getAssociatedValuesFor_toMany (extractedValue_12671__0, extractedValue_12671__1, extractedValue_12671__2, extractedValue_12671__3) ;
      const GGS_observablePropertyInMultipleBindingExpressionAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_3.readProperty_mProperty (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 303)), GGS_string ("only an atomic property can be observed"), fixItArray4  COMMA_SOURCE_FILE ("multiple-binding.galgas4", 303)) ;
      outArgument_outType.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toOne:
    {
      GGS_lstring extractedValue_12785__0 ;
      GGS_propertyAccessibility extractedValue_12785__1 ;
      GGS_bool extractedValue_12785__2 ;
      GGS_toOneOppositeRelationship extractedValue_12785__3 ;
      GGS_bool extractedValue_12785__4 ;
      var_kind_12428.getAssociatedValuesFor_toOne (extractedValue_12785__0, extractedValue_12785__1, extractedValue_12785__2, extractedValue_12785__3, extractedValue_12785__4) ;
      const GGS_observablePropertyInMultipleBindingExpressionAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_5.readProperty_mProperty (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 305)), GGS_string ("only an atomic property can be observed"), fixItArray6  COMMA_SOURCE_FILE ("multiple-binding.galgas4", 305)) ;
      outArgument_outType.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_arrayController:
    {
      GGS_lstring extractedValue_12909__0 ;
      GGS_bool extractedValue_12909__1 ;
      var_kind_12428.getAssociatedValuesFor_arrayController (extractedValue_12909__0, extractedValue_12909__1) ;
      const GGS_observablePropertyInMultipleBindingExpressionAST temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_7.readProperty_mProperty (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 307)), GGS_string ("only an atomic property can be observed"), fixItArray8  COMMA_SOURCE_FILE ("multiple-binding.galgas4", 307)) ;
      outArgument_outType.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_selectionController:
    {
      GGS_string extractedValue_13036__0 ;
      var_kind_12428.getAssociatedValuesFor_selectionController (extractedValue_13036__0) ;
      const GGS_observablePropertyInMultipleBindingExpressionAST temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_9.readProperty_mProperty (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 309)), GGS_string ("only an atomic property can be observed"), fixItArray10  COMMA_SOURCE_FILE ("multiple-binding.galgas4", 309)) ;
      outArgument_outType.drop () ; // Release error dropped variable
    }
    break ;
  }
  const GGS_observablePropertyInMultipleBindingExpressionAST temp_11 = this ;
  GGS_string temp_12 ;
  const GalgasBool test_13 = constinArgument_inPreferences.boolEnum () ;
  if (GalgasBool::boolTrue == test_13) {
    temp_12 = GGS_string ("preferences_") ;
  }else if (GalgasBool::boolFalse == test_13) {
    temp_12 = GGS_string ("self.") ;
  }
  outArgument_outEnableExpression = GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::init_21_ (extensionGetter_modelStringForSelf (temp_11.readProperty_mProperty (), temp_12, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 312)), inCompiler COMMA_HERE) ;
  const GGS_observablePropertyInMultipleBindingExpressionAST temp_14 = this ;
  outArgument_outErrorLocation = extensionGetter_location (temp_14.readProperty_mProperty (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 314)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@negateBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//--------------------------------------------------------------------------------------------------

void cPtr_negateBooleanMultipleBindingExpressionAST::method_analyzeExpressionForMultipleBinding (const GGS_bool constinArgument_inPreferences,
                                                                                                 const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                                 const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                                 const GGS_propertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                                 const GGS_propertyMap constinArgument_inPreferencesObservablePropertyMap,
                                                                                                 GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                                 GGS_typeKind & outArgument_outType,
                                                                                                 GGS_location & outArgument_outErrorLocation,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_expression_14217 ;
  const GGS_negateBooleanMultipleBindingExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_0.readProperty_mBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_expression_14217, outArgument_outType, outArgument_outErrorLocation, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 329)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = outArgument_outType.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas4", 339)).operator_not (SOURCE_FILE ("multiple-binding.galgas4", 339)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (outArgument_outErrorLocation, GGS_string ("cannot apply negation: operand is not boolean"), fixItArray2  COMMA_SOURCE_FILE ("multiple-binding.galgas4", 340)) ;
    }
  }
  outArgument_outEnableExpression = GGS_negateBooleanMultipleBindingExpressionForGeneration::init_21_ (var_expression_14217, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@orBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//--------------------------------------------------------------------------------------------------

void cPtr_orBooleanMultipleBindingExpressionAST::method_analyzeExpressionForMultipleBinding (const GGS_bool constinArgument_inPreferences,
                                                                                             const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                             const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                             const GGS_propertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                             const GGS_propertyMap constinArgument_inPreferencesObservablePropertyMap,
                                                                                             GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                             GGS_typeKind & outArgument_outType,
                                                                                             GGS_location & outArgument_outErrorLocation,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_15317 ;
  GGS_typeKind var_outLeftType_15342 ;
  GGS_location var_outLeftLocation_15364 ;
  const GGS_orBooleanMultipleBindingExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_0.readProperty_mLeftBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_leftExpression_15317, var_outLeftType_15342, var_outLeftLocation_15364, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 357)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_outLeftType_15342.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas4", 367)).operator_not (SOURCE_FILE ("multiple-binding.galgas4", 367)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_outLeftLocation_15364, GGS_string ("cannot apply 'or': left operand is not boolean"), fixItArray2  COMMA_SOURCE_FILE ("multiple-binding.galgas4", 368)) ;
    }
  }
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_15787 ;
  GGS_typeKind var_outRightType_15813 ;
  GGS_location var_outRightLocation_15836 ;
  const GGS_orBooleanMultipleBindingExpressionAST temp_3 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_3.readProperty_mRightBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_rightExpression_15787, var_outRightType_15813, var_outRightLocation_15836, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 370)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = var_outRightType_15813.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas4", 380)).operator_not (SOURCE_FILE ("multiple-binding.galgas4", 380)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (var_outRightLocation_15836, GGS_string ("cannot apply 'or': right operand is not boolean"), fixItArray5  COMMA_SOURCE_FILE ("multiple-binding.galgas4", 381)) ;
    }
  }
  outArgument_outType = GGS_typeKind::class_func_boolType (SOURCE_FILE ("multiple-binding.galgas4", 383)) ;
  outArgument_outErrorLocation = var_outRightLocation_15836 ;
  outArgument_outEnableExpression = GGS_orBooleanMultipleBindingExpressionForGeneration::init_21__21_ (var_leftExpression_15317, var_rightExpression_15787, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@xorBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//--------------------------------------------------------------------------------------------------

void cPtr_xorBooleanMultipleBindingExpressionAST::method_analyzeExpressionForMultipleBinding (const GGS_bool constinArgument_inPreferences,
                                                                                              const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                              const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                              const GGS_propertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                              const GGS_propertyMap constinArgument_inPreferencesObservablePropertyMap,
                                                                                              GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                              GGS_typeKind & outArgument_outType,
                                                                                              GGS_location & outArgument_outErrorLocation,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_16990 ;
  GGS_typeKind var_outLeftType_17015 ;
  GGS_location var_outLeftLocation_17037 ;
  const GGS_xorBooleanMultipleBindingExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_0.readProperty_mLeftBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_leftExpression_16990, var_outLeftType_17015, var_outLeftLocation_17037, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 400)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_outLeftType_17015.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas4", 410)).operator_not (SOURCE_FILE ("multiple-binding.galgas4", 410)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_outLeftLocation_17037, GGS_string ("cannot apply 'or': left operand is not boolean"), fixItArray2  COMMA_SOURCE_FILE ("multiple-binding.galgas4", 411)) ;
    }
  }
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_17460 ;
  GGS_typeKind var_outRightType_17486 ;
  GGS_location var_outRightLocation_17509 ;
  const GGS_xorBooleanMultipleBindingExpressionAST temp_3 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_3.readProperty_mRightBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_rightExpression_17460, var_outRightType_17486, var_outRightLocation_17509, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 413)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = var_outRightType_17486.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas4", 423)).operator_not (SOURCE_FILE ("multiple-binding.galgas4", 423)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (var_outRightLocation_17509, GGS_string ("cannot apply 'or': right operand is not boolean"), fixItArray5  COMMA_SOURCE_FILE ("multiple-binding.galgas4", 424)) ;
    }
  }
  outArgument_outType = GGS_typeKind::class_func_boolType (SOURCE_FILE ("multiple-binding.galgas4", 426)) ;
  outArgument_outErrorLocation = var_outRightLocation_17509 ;
  outArgument_outEnableExpression = GGS_xorBooleanMultipleBindingExpressionForGeneration::init_21__21_ (var_leftExpression_16990, var_rightExpression_17460, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@andBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//--------------------------------------------------------------------------------------------------

void cPtr_andBooleanMultipleBindingExpressionAST::method_analyzeExpressionForMultipleBinding (const GGS_bool constinArgument_inPreferences,
                                                                                              const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                              const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                              const GGS_propertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                              const GGS_propertyMap constinArgument_inPreferencesObservablePropertyMap,
                                                                                              GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                              GGS_typeKind & outArgument_outType,
                                                                                              GGS_location & outArgument_outErrorLocation,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_18664 ;
  GGS_typeKind var_outLeftType_18689 ;
  GGS_location var_outLeftLocation_18711 ;
  const GGS_andBooleanMultipleBindingExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_0.readProperty_mLeftBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_leftExpression_18664, var_outLeftType_18689, var_outLeftLocation_18711, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 443)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_outLeftType_18689.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas4", 453)).operator_not (SOURCE_FILE ("multiple-binding.galgas4", 453)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_outLeftLocation_18711, GGS_string ("cannot apply 'and': left operand is not boolean"), fixItArray2  COMMA_SOURCE_FILE ("multiple-binding.galgas4", 454)) ;
    }
  }
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_19135 ;
  GGS_typeKind var_outRightType_19161 ;
  GGS_location var_outRightLocation_19184 ;
  const GGS_andBooleanMultipleBindingExpressionAST temp_3 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_3.readProperty_mRightBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_rightExpression_19135, var_outRightType_19161, var_outRightLocation_19184, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 456)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = var_outRightType_19161.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas4", 466)).operator_not (SOURCE_FILE ("multiple-binding.galgas4", 466)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (var_outRightLocation_19184, GGS_string ("cannot apply 'and': right operand is not boolean"), fixItArray5  COMMA_SOURCE_FILE ("multiple-binding.galgas4", 467)) ;
    }
  }
  outArgument_outType = GGS_typeKind::class_func_boolType (SOURCE_FILE ("multiple-binding.galgas4", 469)) ;
  outArgument_outErrorLocation = var_outRightLocation_19184 ;
  outArgument_outEnableExpression = GGS_andBooleanMultipleBindingExpressionForGeneration::init_21__21_ (var_leftExpression_18664, var_rightExpression_19135, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@comparisonMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//--------------------------------------------------------------------------------------------------

void cPtr_comparisonMultipleBindingExpressionAST::method_analyzeExpressionForMultipleBinding (const GGS_bool constinArgument_inPreferences,
                                                                                              const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                              const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                              const GGS_propertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                              const GGS_propertyMap constinArgument_inPreferencesObservablePropertyMap,
                                                                                              GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                              GGS_typeKind & outArgument_outType,
                                                                                              GGS_location & outArgument_outErrorLocation,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_20340 ;
  GGS_typeKind var_outLeftType_20365 ;
  GGS_location var_outLeftLocation_20387 ;
  const GGS_comparisonMultipleBindingExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_0.readProperty_mLeftBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_leftExpression_20340, var_outLeftType_20365, var_outLeftLocation_20387, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 486)) ;
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_20688 ;
  GGS_typeKind var_outRightType_20714 ;
  GGS_location var_outRightLocation_20737 ;
  const GGS_comparisonMultipleBindingExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_1.readProperty_mRightBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_rightExpression_20688, var_outRightType_20714, var_outRightLocation_20737, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 496)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    GGS_bool test_3 = var_outLeftType_20365.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas4", 506)) ;
    if (GalgasBool::boolTrue != test_3.boolEnum ()) {
      test_3 = var_outLeftType_20365.getter_isIntegerType (SOURCE_FILE ("multiple-binding.galgas4", 506)) ;
    }
    test_2 = test_3.operator_not (SOURCE_FILE ("multiple-binding.galgas4", 506)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (var_outLeftLocation_20387, GGS_string ("cannot compare: left operand is neither boolean nor integer"), fixItArray4  COMMA_SOURCE_FILE ("multiple-binding.galgas4", 507)) ;
    }
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = GGS_bool (ComparisonKind::notEqual, var_outRightType_20714.objectCompare (var_outLeftType_20365)).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (var_outRightLocation_20737, GGS_string ("cannot compare: right operand type is different than left operand type"), fixItArray6  COMMA_SOURCE_FILE ("multiple-binding.galgas4", 510)) ;
    }
  }
  outArgument_outType = GGS_typeKind::class_func_boolType (SOURCE_FILE ("multiple-binding.galgas4", 512)) ;
  outArgument_outErrorLocation = var_outRightLocation_20737 ;
  const GGS_comparisonMultipleBindingExpressionAST temp_7 = this ;
  outArgument_outEnableExpression = GGS_comparisonMultipleBindingExpressionForGeneration::init_21__21__21_ (var_leftExpression_20340, temp_7.readProperty_mOperator (), var_rightExpression_20688, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@booleanMultipleBindingLiteralIntForGeneration expressionString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_booleanMultipleBindingLiteralIntForGeneration::getter_expressionString (Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outExpressionString ; // Returned variable
  const GGS_booleanMultipleBindingLiteralIntForGeneration temp_0 = this ;
  result_outExpressionString = GGS_string (".literalInt (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("multiple-binding.galgas4", 529)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 529)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 529)) ;
//---
  return result_outExpressionString ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@observablePropertyAsBooleanMultipleBindingExpressionForGeneration expressionString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::getter_expressionString (Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outExpressionString ; // Returned variable
  const GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration temp_0 = this ;
  result_outExpressionString = GGS_string (".prop (").add_operation (temp_0.readProperty_mObservedModelString (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 536)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 536)) ;
//---
  return result_outExpressionString ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@negateBooleanMultipleBindingExpressionForGeneration expressionString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_negateBooleanMultipleBindingExpressionForGeneration::getter_expressionString (Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outExpressionString ; // Returned variable
  const GGS_negateBooleanMultipleBindingExpressionForGeneration temp_0 = this ;
  result_outExpressionString = GGS_string (".not (").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_0.readProperty_mBinding ().ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 543)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 543)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 543)) ;
//---
  return result_outExpressionString ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@orBooleanMultipleBindingExpressionForGeneration expressionString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_orBooleanMultipleBindingExpressionForGeneration::getter_expressionString (Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outExpressionString ; // Returned variable
  const GGS_orBooleanMultipleBindingExpressionForGeneration temp_0 = this ;
  const GGS_orBooleanMultipleBindingExpressionForGeneration temp_1 = this ;
  result_outExpressionString = GGS_string (".boolcmp (").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_0.readProperty_mLeftBinding ().ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 550)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 550)).add_operation (GGS_string (", .or, "), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 550)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_1.readProperty_mRightBinding ().ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 550)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 550)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 550)) ;
//---
  return result_outExpressionString ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@xorBooleanMultipleBindingExpressionForGeneration expressionString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_xorBooleanMultipleBindingExpressionForGeneration::getter_expressionString (Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outExpressionString ; // Returned variable
  const GGS_xorBooleanMultipleBindingExpressionForGeneration temp_0 = this ;
  const GGS_xorBooleanMultipleBindingExpressionForGeneration temp_1 = this ;
  result_outExpressionString = GGS_string (".boolcmp (").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_0.readProperty_mLeftBinding ().ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 557)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 557)).add_operation (GGS_string (", .xor, "), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 557)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_1.readProperty_mRightBinding ().ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 557)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 557)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 557)) ;
//---
  return result_outExpressionString ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@andBooleanMultipleBindingExpressionForGeneration expressionString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_andBooleanMultipleBindingExpressionForGeneration::getter_expressionString (Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outExpressionString ; // Returned variable
  const GGS_andBooleanMultipleBindingExpressionForGeneration temp_0 = this ;
  const GGS_andBooleanMultipleBindingExpressionForGeneration temp_1 = this ;
  result_outExpressionString = GGS_string (".boolcmp (").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_0.readProperty_mLeftBinding ().ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 564)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 564)).add_operation (GGS_string (", .and, "), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 564)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_1.readProperty_mRightBinding ().ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 564)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 564)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 564)) ;
//---
  return result_outExpressionString ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@comparisonMultipleBindingExpressionForGeneration expressionString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_comparisonMultipleBindingExpressionForGeneration::getter_expressionString (Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outExpressionString ; // Returned variable
  const GGS_comparisonMultipleBindingExpressionForGeneration temp_0 = this ;
  result_outExpressionString = GGS_string (".intcmp (").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_0.readProperty_mLeftBinding ().ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 571)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 571)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 571)) ;
  const GGS_comparisonMultipleBindingExpressionForGeneration temp_1 = this ;
  switch (temp_1.readProperty_mOperator ().enumValue ()) {
  case GGS_multipleBindingComparisonAST::Enumeration::invalid:
    break ;
  case GGS_multipleBindingComparisonAST::Enumeration::enum_equal:
    {
      result_outExpressionString.plusAssignOperation(GGS_string (".eq"), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas4", 573)) ;
    }
    break ;
  case GGS_multipleBindingComparisonAST::Enumeration::enum_notEqual:
    {
      result_outExpressionString.plusAssignOperation(GGS_string (".ne"), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas4", 574)) ;
    }
    break ;
  case GGS_multipleBindingComparisonAST::Enumeration::enum_lower:
    {
      result_outExpressionString.plusAssignOperation(GGS_string (".lt"), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas4", 575)) ;
    }
    break ;
  case GGS_multipleBindingComparisonAST::Enumeration::enum_lowerOrEqual:
    {
      result_outExpressionString.plusAssignOperation(GGS_string (".le"), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas4", 576)) ;
    }
    break ;
  case GGS_multipleBindingComparisonAST::Enumeration::enum_greater:
    {
      result_outExpressionString.plusAssignOperation(GGS_string (".gt"), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas4", 577)) ;
    }
    break ;
  case GGS_multipleBindingComparisonAST::Enumeration::enum_greaterOrEqual:
    {
      result_outExpressionString.plusAssignOperation(GGS_string (".ge"), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas4", 578)) ;
    }
    break ;
  }
  const GGS_comparisonMultipleBindingExpressionForGeneration temp_2 = this ;
  result_outExpressionString.plusAssignOperation(GGS_string (", ").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_2.readProperty_mRightBinding ().ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 580)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 580)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 580)), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas4", 580)) ;
//---
  return result_outExpressionString ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selectionControllerDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_selectionControllerDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_selectionControllerDeclarationAST temp_0 = this ;
  const GGS_selectionControllerDeclarationAST temp_1 = this ;
  const GGS_selectionControllerDeclarationAST temp_2 = this ;
  GGS_lstring var_node_687 = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 16)).add_operation (temp_1.readProperty_mSelectionControllerName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 16)), temp_2.readProperty_mSelectionControllerName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_selectionControllerDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_687, temp_3, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 19)) ;
  }
  {
  const GGS_selectionControllerDeclarationAST temp_4 = this ;
  const GGS_selectionControllerDeclarationAST temp_5 = this ;
  const GGS_selectionControllerDeclarationAST temp_6 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_687, GGS_lstring::init_21__21_ (temp_4.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 20)).add_operation (temp_5.readProperty_mModelControllerName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 20)), temp_6.readProperty_mModelControllerName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("selection-controller.galgas4", 20)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@selectionControllerDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_selectionControllerDeclarationAST::getter_nodeKey (Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_selectionControllerDeclarationAST temp_0 = this ;
  const GGS_selectionControllerDeclarationAST temp_1 = this ;
  const GGS_selectionControllerDeclarationAST temp_2 = this ;
  result_result = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 26)).add_operation (temp_1.readProperty_mSelectionControllerName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 26)), temp_2.readProperty_mSelectionControllerName ().readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selectionControllerDeclarationAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_selectionControllerDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                        GGS_generationStruct & /* ioArgument_ioGeneration */,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_selectionControllerDeclarationAST temp_0 = this ;
  GGS_classMap_2E_element var_entry_3023 = ioArgument_ioSemanticContext.readProperty_mClassMap ().readSubscript__3F_searchKey (temp_0.readProperty_mClassName (), inCompiler COMMA_HERE) ;
  GGS_propertyKind var_propertyKind_3234 ;
  const GGS_selectionControllerDeclarationAST temp_1 = this ;
  GGS_actionMap joker_3248_2 ; // Joker input parameter
  GGS_bool joker_3248_1 ; // Joker input parameter
  var_entry_3023.readProperty_mPropertyMap ().method_searchKey (temp_1.readProperty_mModelControllerName (), var_propertyKind_3234, joker_3248_2, joker_3248_1, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 71)) ;
  switch (var_propertyKind_3234.enumValue ()) {
  case GGS_propertyKind::Enumeration::invalid:
    break ;
  case GGS_propertyKind::Enumeration::enum_property:
    {
      GGS_typeKind extractedValue_3297__0 ;
      GGS_propertyAccessibility extractedValue_3297__1 ;
      var_propertyKind_3234.getAssociatedValuesFor_property (extractedValue_3297__0, extractedValue_3297__1) ;
      const GGS_selectionControllerDeclarationAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mModelControllerName ().readProperty_location (), GGS_string ("an array controller is required here"), fixItArray3  COMMA_SOURCE_FILE ("selection-controller.galgas4", 74)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toMany:
    {
      GGS_lstring extractedValue_3401__0 ;
      GGS_propertyAccessibility extractedValue_3401__1 ;
      GGS_bool extractedValue_3401__2 ;
      GGS_toManyRelationshipOptionAST extractedValue_3401__3 ;
      var_propertyKind_3234.getAssociatedValuesFor_toMany (extractedValue_3401__0, extractedValue_3401__1, extractedValue_3401__2, extractedValue_3401__3) ;
      const GGS_selectionControllerDeclarationAST temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mModelControllerName ().readProperty_location (), GGS_string ("an array controller is required here"), fixItArray5  COMMA_SOURCE_FILE ("selection-controller.galgas4", 76)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toOne:
    {
      GGS_lstring extractedValue_3504__0 ;
      GGS_propertyAccessibility extractedValue_3504__1 ;
      GGS_bool extractedValue_3504__2 ;
      GGS_toOneOppositeRelationship extractedValue_3504__3 ;
      GGS_bool extractedValue_3504__4 ;
      var_propertyKind_3234.getAssociatedValuesFor_toOne (extractedValue_3504__0, extractedValue_3504__1, extractedValue_3504__2, extractedValue_3504__3, extractedValue_3504__4) ;
      const GGS_selectionControllerDeclarationAST temp_6 = this ;
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mModelControllerName ().readProperty_location (), GGS_string ("an array controller is required here"), fixItArray7  COMMA_SOURCE_FILE ("selection-controller.galgas4", 78)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_selectionController:
    {
      GGS_string extractedValue_3620__0 ;
      var_propertyKind_3234.getAssociatedValuesFor_selectionController (extractedValue_3620__0) ;
      const GGS_selectionControllerDeclarationAST temp_8 = this ;
      GenericArray <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mModelControllerName ().readProperty_location (), GGS_string ("an array controller is required here"), fixItArray9  COMMA_SOURCE_FILE ("selection-controller.galgas4", 80)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_arrayController:
    {
      GGS_lstring extractedValue_3733__0 ;
      GGS_bool extractedValue_3733__1 ;
      var_propertyKind_3234.getAssociatedValuesFor_arrayController (extractedValue_3733__0, extractedValue_3733__1) ;
      GalgasBool test_10 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_10) {
        const GGS_selectionControllerDeclarationAST temp_11 = this ;
        test_10 = GGS_bool (ComparisonKind::notEqual, temp_11.readProperty_mModelControllerPropertyName ().readProperty_string ().objectCompare (GGS_string ("selectedArray"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_10) {
          const GGS_selectionControllerDeclarationAST temp_12 = this ;
          GenericArray <FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (temp_12.readProperty_mModelControllerPropertyName ().readProperty_location (), GGS_string ("'selectedArray' is required here"), fixItArray13  COMMA_SOURCE_FILE ("selection-controller.galgas4", 83)) ;
        }
      }
      const GGS_selectionControllerDeclarationAST temp_14 = this ;
      GGS_propertyKind var_kind_3919 = GGS_propertyKind::class_func_selectionController (temp_14.readProperty_mSelectionEntityName ().readProperty_string ()  COMMA_SOURCE_FILE ("selection-controller.galgas4", 85)) ;
      {
      const GGS_selectionControllerDeclarationAST temp_15 = this ;
      var_entry_3023.mProperty_mPropertyMap.setter_insertKey (temp_15.readProperty_mSelectionControllerName (), var_kind_3919, GGS_actionMap::init (inCompiler COMMA_HERE), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 86)) ;
      }
      {
      const GGS_selectionControllerDeclarationAST temp_16 = this ;
      const GGS_selectionControllerDeclarationAST temp_17 = this ;
      const GGS_selectionControllerDeclarationAST temp_18 = this ;
      const GGS_selectionControllerDeclarationAST temp_19 = this ;
      var_entry_3023.mProperty_mPropertyGenerationList.setter_append (GGS_selectionControllerPropertyGeneration::init_21__21__21__21_ (temp_16.readProperty_mSelectionControllerName ().readProperty_string (), temp_17.readProperty_mClassName ().readProperty_string (), temp_18.readProperty_mModelControllerName ().readProperty_string (), temp_19.readProperty_mModelControllerPropertyName ().readProperty_string (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 87)) ;
      }
    }
    break ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_replace (var_entry_3023, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 95)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@selectionControllerDeclarationAST fourthAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_selectionControllerDeclarationAST::method_fourthAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                         GGS_generationStruct & ioArgument_ioGeneration,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_classKind var_superClassKind_6043 ;
  GGS_propertyMap var_propertyMap_6064 ;
  const GGS_selectionControllerDeclarationAST temp_0 = this ;
  GGS_actionMap joker_6077_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_6077_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_0.readProperty_mClassName (), var_superClassKind_6043, var_propertyMap_6064, joker_6077_2, joker_6077_1, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 131)) ;
  GGS_propertyKind var_propertyKind_6139 ;
  const GGS_selectionControllerDeclarationAST temp_1 = this ;
  GGS_actionMap joker_6153_2 ; // Joker input parameter
  GGS_bool joker_6153_1 ; // Joker input parameter
  var_propertyMap_6064.method_searchKey (temp_1.readProperty_mModelControllerName (), var_propertyKind_6139, joker_6153_2, joker_6153_1, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 132)) ;
  switch (var_propertyKind_6139.enumValue ()) {
  case GGS_propertyKind::Enumeration::invalid:
    break ;
  case GGS_propertyKind::Enumeration::enum_property:
    break ;
  case GGS_propertyKind::Enumeration::enum_toMany:
    break ;
  case GGS_propertyKind::Enumeration::enum_toOne:
    break ;
  case GGS_propertyKind::Enumeration::enum_selectionController:
    break ;
  case GGS_propertyKind::Enumeration::enum_arrayController:
    {
      GGS_lstring extractedValue_6307_typeName_0 ;
      GGS_bool extractedValue_6317__1 ;
      var_propertyKind_6139.getAssociatedValuesFor_arrayController (extractedValue_6307_typeName_0, extractedValue_6317__1) ;
      GGS_propertyMap var_selectionObservablePropertyMap_6423 ;
      GGS_propertyGenerationList var_selectionGenerationList_6478 ;
      const GGS_selectionControllerDeclarationAST temp_2 = this ;
      GGS_classKind joker_6407 ; // Joker input parameter
      GGS_actionMap joker_6462 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_2.readProperty_mSelectionEntityName (), joker_6407, var_selectionObservablePropertyMap_6423, joker_6462, var_selectionGenerationList_6478, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 139)) ;
      {
      const GGS_selectionControllerDeclarationAST temp_3 = this ;
      const GGS_selectionControllerDeclarationAST temp_4 = this ;
      const GGS_selectionControllerDeclarationAST temp_5 = this ;
      const GGS_selectionControllerDeclarationAST temp_6 = this ;
      const GGS_selectionControllerDeclarationAST temp_7 = this ;
      ioArgument_ioGeneration.mProperty_mSelectionControllerListForGeneration.setter_append (temp_3.readProperty_mClassName ().readProperty_string (), temp_4.readProperty_mSelectionControllerName ().readProperty_string (), temp_5.readProperty_mModelControllerName ().readProperty_string (), temp_6.readProperty_mModelControllerPropertyName ().readProperty_string (), extractedValue_6307_typeName_0.readProperty_string (), temp_7.readProperty_mSelectionEntityName ().readProperty_string (), var_selectionObservablePropertyMap_6423, var_selectionGenerationList_6478, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 146)) ;
      }
      {
      ioArgument_ioGeneration.mProperty_mToManyClassImplementations.setter_insert (extractedValue_6307_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 156)) ;
      }
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        const GGS_selectionControllerDeclarationAST temp_9 = this ;
        test_8 = GGS_bool (ComparisonKind::notEqual, extractedValue_6307_typeName_0.readProperty_string ().objectCompare (temp_9.readProperty_mSelectionEntityName ().readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          {
          const GGS_selectionControllerDeclarationAST temp_10 = this ;
          ioArgument_ioGeneration.mProperty_mToManyClassImplementations.setter_insert (temp_10.readProperty_mSelectionEntityName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 158)) ;
          }
          {
          const GGS_selectionControllerDeclarationAST temp_11 = this ;
          ioArgument_ioGeneration.mProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_.setter_insert (temp_11.readProperty_mSelectionEntityName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 159)) ;
          }
        }
      }
      const GGS_selectionControllerDeclarationAST temp_12 = this ;
      GGS_string var_testedTypeName_7237 = temp_12.readProperty_mSelectionEntityName ().readProperty_string () ;
      if (GGS_uint::class_func_max (SOURCE_FILE ("selection-controller.galgas4", 162)).isValid ()) {
        uint32_t variant_7292 = GGS_uint::class_func_max (SOURCE_FILE ("selection-controller.galgas4", 162)).uintValue () ;
        bool loop_7292 = true ;
        while (loop_7292) {
          loop_7292 = GGS_bool (ComparisonKind::notEqual, extractedValue_6307_typeName_0.readProperty_string ().objectCompare (var_testedTypeName_7237)).operator_and (GGS_bool (ComparisonKind::notEqual, var_testedTypeName_7237.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("selection-controller.galgas4", 162)).isValid () ;
          if (loop_7292) {
            loop_7292 = GGS_bool (ComparisonKind::notEqual, extractedValue_6307_typeName_0.readProperty_string ().objectCompare (var_testedTypeName_7237)).operator_and (GGS_bool (ComparisonKind::notEqual, var_testedTypeName_7237.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("selection-controller.galgas4", 162)).boolValue () ;
          }
          if (loop_7292 && (0 == variant_7292)) {
            loop_7292 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("selection-controller.galgas4", 162)) ;
          }
          if (loop_7292) {
            variant_7292 -= 1 ;
            GalgasBool test_13 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_13) {
              const GGS_selectionControllerDeclarationAST temp_14 = this ;
              test_13 = GGS_bool (ComparisonKind::notEqual, extractedValue_6307_typeName_0.readProperty_string ().objectCompare (temp_14.readProperty_mSelectionEntityName ().readProperty_string ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_13) {
                switch (var_superClassKind_6043.enumValue ()) {
                case GGS_classKind::Enumeration::invalid:
                  break ;
                case GGS_classKind::Enumeration::enum_prefs:
                  {
                    var_testedTypeName_7237 = GGS_string::makeEmptyString () ;
                  }
                  break ;
                case GGS_classKind::Enumeration::enum_atomic:
                  {
                    GGS_typeKind extractedValue_7552__0 ;
                    var_superClassKind_6043.getAssociatedValuesFor_atomic (extractedValue_7552__0) ;
                    var_testedTypeName_7237 = GGS_string::makeEmptyString () ;
                  }
                  break ;
                case GGS_classKind::Enumeration::enum_document:
                  {
                    GGS_lstring extractedValue_7612__0 ;
                    var_superClassKind_6043.getAssociatedValuesFor_document (extractedValue_7612__0) ;
                    var_testedTypeName_7237 = GGS_string::makeEmptyString () ;
                  }
                  break ;
                case GGS_classKind::Enumeration::enum_entity:
                  {
                    GGS_string extractedValue_7678_superOfSuperEntity_0 ;
                    GGS_bool extractedValue_7699__1 ;
                    GGS_bool extractedValue_7699__2 ;
                    GGS_bool extractedValue_7699__3 ;
                    var_superClassKind_6043.getAssociatedValuesFor_entity (extractedValue_7678_superOfSuperEntity_0, extractedValue_7699__1, extractedValue_7699__2, extractedValue_7699__3) ;
                    var_testedTypeName_7237 = extractedValue_7678_superOfSuperEntity_0 ;
                    GalgasBool test_15 = GalgasBool::boolTrue ;
                    if (GalgasBool::boolTrue == test_15) {
                      test_15 = GGS_bool (ComparisonKind::equal, var_testedTypeName_7237.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                      if (GalgasBool::boolTrue == test_15) {
                        const GGS_selectionControllerDeclarationAST temp_16 = this ;
                        GenericArray <FixItDescription> fixItArray17 ;
                        inCompiler->emitSemanticError (temp_16.readProperty_mSelectionEntityName ().readProperty_location (), GGS_string ("This entity is not descendant of ").add_operation (extractedValue_6307_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 174)), fixItArray17  COMMA_SOURCE_FILE ("selection-controller.galgas4", 174)) ;
                      }
                    }
                  }
                  break ;
                }
              }
            }
          }
        }
      }
    }
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@selectionControllerPropertyGeneration propertyDeclarationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_selectionControllerPropertyGeneration::getter_propertyDeclarationCode (const GGS_bool /* constinArgument_inPreferences */,
                                                                                       const GGS_bool /* constinArgument_inGenerationDirectAccess */,
                                                                                       const GGS_stringset /* constinArgument_inOverriddenTransients */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("selection-controller.galgas4", 198)), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 198)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 198)) ;
  const GGS_selectionControllerPropertyGeneration temp_0 = this ;
  result_result.plusAssignOperation(GGS_string ("  //   Selection controller: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 199)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 199)), inCompiler  COMMA_SOURCE_FILE ("selection-controller.galgas4", 199)) ;
  result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("selection-controller.galgas4", 200)), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 200)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 200)), inCompiler  COMMA_SOURCE_FILE ("selection-controller.galgas4", 200)) ;
  const GGS_selectionControllerPropertyGeneration temp_1 = this ;
  const GGS_selectionControllerPropertyGeneration temp_2 = this ;
  const GGS_selectionControllerPropertyGeneration temp_3 = this ;
  result_result.plusAssignOperation(GGS_string ("  final var ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 201)).add_operation (GGS_string (" = SelectionController_"), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 201)).add_operation (temp_2.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 201)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 201)).add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 201)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 201)), inCompiler  COMMA_SOURCE_FILE ("selection-controller.galgas4", 201)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@selectionControllerPropertyGeneration configurationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_selectionControllerPropertyGeneration::getter_configurationCode (const GGS_bool /* constinArgument_inPreferences */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_selectionControllerPropertyGeneration temp_0 = this ;
  result_result = GGS_string ("  //--- Selection controller property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 207)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 207)) ;
  const GGS_selectionControllerPropertyGeneration temp_1 = this ;
  const GGS_selectionControllerPropertyGeneration temp_2 = this ;
  const GGS_selectionControllerPropertyGeneration temp_3 = this ;
  result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 208)).add_operation (GGS_string (".bind_selection (model: self."), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 208)).add_operation (temp_2.readProperty_mModelControllerName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 208)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 208)).add_operation (temp_3.readProperty_mModelControllerPropertyName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 209)).add_operation (GGS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 209)), inCompiler  COMMA_SOURCE_FILE ("selection-controller.galgas4", 208)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@selectionControllerPropertyGeneration initCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_selectionControllerPropertyGeneration::getter_initCode (Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'selectionControllerGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_selectionControllerGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_selectionControllerGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_selectionControllerGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_selectionControllerGenerationTemplate_0,
  0,
  gWrapperAllDirectories_selectionControllerGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'selectionControllerGenerationTemplate baseSelectionControllerImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_selectionControllerGenerationTemplate_baseSelectionControllerImplementation (Compiler * inCompiler,
                                                                                                            const GGS_string & in_OWNER_5F_NAME,
                                                                                                            const GGS_string & in_SELECTION_5F_CONTROLLER_5F_NAME,
                                                                                                            const GGS_string & in_ELEMENT_5F_TYPE_5F_NAME,
                                                                                                            const GGS_propertyMap & in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//--------------------------------------------------------------------------------------------------\n\nimport AppKit\n\n//--------------------------------------------------------------------------------------------------\n//    Base Selection Controller ") ;
  result.appendString (in_OWNER_5F_NAME.stringValue ()) ;
  result.appendString (" ") ;
  result.appendString (in_SELECTION_5F_CONTROLLER_5F_NAME.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n@MainActor final class SelectionController_") ;
  result.appendString (in_OWNER_5F_NAME.stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_SELECTION_5F_CONTROLLER_5F_NAME.stringValue ()) ;
  result.appendString (" {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  init () {\n    noteObjectAllocation (self)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  deinit {\n    noteObjectDeallocation (self)\n  }\n\n") ;
  GGS_uint index_1030_ (0) ;
  if (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP.isValid ()) {
    UpEnumerator_propertyMap enumerator_1030 (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP) ;
    while (enumerator_1030.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Selection observable property: ") ;
      result.appendString (enumerator_1030.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
      const GalgasBool test_0 = extensionGetter_isEntityType (enumerator_1030.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 29)).operator_not (SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 29)).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        const GalgasBool test_1 = extensionGetter_isTransient (enumerator_1030.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 30)).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString ("  var ") ;
          result.appendString (enumerator_1030.current_lkey (HERE).readProperty_string ().stringValue ()) ;
          result.appendString ("_property = EBTransientProperty <") ;
          result.appendString (extensionGetter_swiftTypeName (enumerator_1030.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 31)).stringValue ()) ;
          result.appendString ("> ()\n\n") ;
          } break ;
        case GalgasBool::boolFalse : {
          result.appendString ("  var ") ;
          result.appendString (enumerator_1030.current_lkey (HERE).readProperty_string ().stringValue ()) ;
          result.appendString ("_property = EBComputedProperty_") ;
          result.appendString (extensionGetter_swiftTypeName (enumerator_1030.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 33)).stringValue ()) ;
          result.appendString (" ()\n\n") ;
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_1030.gotoNextObject () ;
      index_1030_.increment () ;
    }
  }
  result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   BIND SELECTION\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private weak var mModel : ReadOnlyArrayOf_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("\? = nil // SHOULD BE WEAK\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func bind_selection (model : ReadOnlyArrayOf_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (") {\n    self.mModel = model\n") ;
  GGS_uint index_2181_ (0) ;
  if (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP.isValid ()) {
    UpEnumerator_propertyMap enumerator_2181 (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP) ;
    while (enumerator_2181.hasCurrentObject ()) {
      const GalgasBool test_2 = extensionGetter_isEntityType (enumerator_2181.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 48)).operator_not (SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 48)).boolEnum () ;
      switch (test_2) {
      case GalgasBool::boolTrue : {
        result.appendString ("    self.bind_property_") ;
        result.appendString (enumerator_2181.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" (model: model)\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_2181.gotoNextObject () ;
      index_2181_.increment () ;
    }
  }
  result.appendString ("  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   UNBIND SELECTION\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  /* final func unbind_selection () {\n") ;
  GGS_uint index_2644_ (0) ;
  if (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP.isValid ()) {
    UpEnumerator_propertyMap enumerator_2644 (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP) ;
    while (enumerator_2644.hasCurrentObject ()) {
      const GalgasBool test_3 = extensionGetter_isEntityType (enumerator_2644.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 61)).operator_not (SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 61)).boolEnum () ;
      switch (test_3) {
      case GalgasBool::boolTrue : {
        result.appendString ("  //--- ") ;
        result.appendString (enumerator_2644.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString ("\n    self.") ;
        result.appendString (enumerator_2644.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString ("_property.mReadModelFunction = nil \n") ;
        const GalgasBool test_4 = extensionGetter_isTransient (enumerator_2644.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 64)).operator_not (SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 64)).boolEnum () ;
        switch (test_4) {
        case GalgasBool::boolTrue : {
          result.appendString ("    self.") ;
          result.appendString (enumerator_2644.current_lkey (HERE).readProperty_string ().stringValue ()) ;
          result.appendString ("_property.mWriteModelFunction = nil \n") ;
          } break ;
        case GalgasBool::boolFalse : {
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        result.appendString ("    self.mModel\?.toMany_") ;
        result.appendString (enumerator_2644.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString ("_StopsBeingObserved (by: self.") ;
        result.appendString (enumerator_2644.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString ("_property)\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_2644.gotoNextObject () ;
      index_2644_.increment () ;
    }
  }
  result.appendString ("  //---\n    self.mModel = nil\n  } */\n\n") ;
  GGS_uint index_3143_ (0) ;
  if (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP.isValid ()) {
    UpEnumerator_propertyMap enumerator_3143 (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP) ;
    while (enumerator_3143.hasCurrentObject ()) {
      const GalgasBool test_5 = extensionGetter_isEntityType (enumerator_3143.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 75)).operator_not (SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 75)).boolEnum () ;
      switch (test_5) {
      case GalgasBool::boolTrue : {
        result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final func bind_property_") ;
        result.appendString (enumerator_3143.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" (model : ReadOnlyArrayOf_") ;
        result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
        result.appendString (") {\n    model.toMany_") ;
        result.appendString (enumerator_3143.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString ("_StartsBeingObserved (by: self.") ;
        result.appendString (enumerator_3143.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString ("_property)\n    self.") ;
        result.appendString (enumerator_3143.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString ("_property.mReadModelFunction = { [weak self] in\n      if let model = self\?.mModel {\n        switch model.selection {\n        case .empty :\n          return .empty\n        case .multiple :\n          return .multiple\n        case .single (let v) :\n          var s = Set <") ;
        result.appendString (extensionGetter_swiftTypeName (enumerator_3143.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 87)).stringValue ()) ;
        result.appendString ("> ()\n          var isMultipleSelection = false\n          for object in v {\n            switch object.") ;
        result.appendString (enumerator_3143.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString ("_property.selection {\n            case .empty :\n              return .empty\n            case .multiple :\n              isMultipleSelection = true\n            case .single (let vProp) :\n              s.insert (vProp)\n            }\n          }\n          if isMultipleSelection {\n            return .multiple\n          }else if s.count == 0 {\n            return .empty\n          }else if s.count == 1 {\n            return .single (s.first!)\n          }else{\n            return .multiple\n          }\n        }\n      }else{\n        return .empty\n      }\n    }\n") ;
        const GalgasBool test_6 = extensionGetter_isTransient (enumerator_3143.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 113)).operator_not (SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 113)).boolEnum () ;
        switch (test_6) {
        case GalgasBool::boolTrue : {
          result.appendString ("    self.") ;
          result.appendString (enumerator_3143.current_lkey (HERE).readProperty_string ().stringValue ()) ;
          result.appendString ("_property.mWriteModelFunction = { [weak self] (inValue : ") ;
          result.appendString (extensionGetter_swiftTypeName (enumerator_3143.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 114)).stringValue ()) ;
          result.appendString (") in\n      if let model = self\?.mModel {\n        switch model.selection {\n        case .empty, .multiple :\n          break\n        case .single (let v) :\n          for object in v {\n            object.") ;
          result.appendString (enumerator_3143.current_lkey (HERE).readProperty_string ().stringValue ()) ;
          result.appendString ("_property.setProp (inValue)\n          }\n        }\n      }\n    }\n") ;
          } break ;
        case GalgasBool::boolFalse : {
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        result.appendString ("  }\n\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_3143.gotoNextObject () ;
      index_3143_.increment () ;
    }
  }
  result.appendString ("\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'selectionControllerGenerationTemplate derivedSelectionControllerImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_selectionControllerGenerationTemplate_derivedSelectionControllerImplementation (Compiler * inCompiler,
                                                                                                               const GGS_string & in_OWNER_5F_NAME,
                                                                                                               const GGS_string & in_SELECTION_5F_CONTROLLER_5F_NAME,
                                                                                                               const GGS_string & in_BASE_5F_ELEMENT_5F_TYPE_5F_NAME,
                                                                                                               const GGS_string & in_DERIVED_5F_ELEMENT_5F_TYPE_5F_NAME,
                                                                                                               const GGS_propertyGenerationList & in_PROPERTY_5F_GENERATION_5F_LIST,
                                                                                                               const GGS_bool & /* in_HAS_5F_ATOMIC_5F_PROPERTIES */
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//--------------------------------------------------------------------------------------------------\n\nimport AppKit\n\n//--------------------------------------------------------------------------------------------------\n//    Derived selection controller ") ;
  result.appendString (in_OWNER_5F_NAME.stringValue ()) ;
  result.appendString (" ") ;
  result.appendString (in_SELECTION_5F_CONTROLLER_5F_NAME.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n@MainActor final class SelectionController_") ;
  result.appendString (in_OWNER_5F_NAME.stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_SELECTION_5F_CONTROLLER_5F_NAME.stringValue ()) ;
  result.appendString (" {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  init () {\n    noteObjectAllocation (self)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  deinit {\n    noteObjectDeallocation (self)\n  }\n\n") ;
  GGS_uint index_998_ (0) ;
  if (in_PROPERTY_5F_GENERATION_5F_LIST.isValid ()) {
    UpEnumerator_propertyGenerationList enumerator_998 (in_PROPERTY_5F_GENERATION_5F_LIST) ;
    while (enumerator_998.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_declarationInSelectionControllerCode ((const cPtr_propertyGeneration *) enumerator_998.current_mProperty (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("derived-selection-controller.swift.galgasTemplate", 26)).stringValue ()) ;
      enumerator_998.gotoNextObject () ;
      index_998_.increment () ;
    }
  }
  result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Selected array (not observable)\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var selectedArray : EBReferenceArray <") ;
  result.appendString (in_DERIVED_5F_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("> { return self.selectedArray_property.propval }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   BIND SELECTION\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n   let selectedArray_property = TransientArrayOfSuperOf_") ;
  result.appendString (in_DERIVED_5F_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" <") ;
  result.appendString (in_BASE_5F_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("> ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func bind_selection (model : ReadOnlyArrayOf_") ;
  result.appendString (in_BASE_5F_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (") {\n    self.selectedArray_property.setDataProvider (model)\n") ;
  GGS_uint index_2048_ (0) ;
  if (in_PROPERTY_5F_GENERATION_5F_LIST.isValid ()) {
    UpEnumerator_propertyGenerationList enumerator_2048 (in_PROPERTY_5F_GENERATION_5F_LIST) ;
    while (enumerator_2048.hasCurrentObject ()) {
      const GalgasBool test_0 = GGS_bool (enumerator_2048.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_atomicPropertyGeneration).operator_or (GGS_bool (enumerator_2048.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_transientPropertyGeneration) COMMA_SOURCE_FILE ("derived-selection-controller.swift.galgasTemplate", 46)).operator_or (GGS_bool (enumerator_2048.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_computedPropertyGeneration) COMMA_SOURCE_FILE ("derived-selection-controller.swift.galgasTemplate", 47)).operator_or (GGS_bool (enumerator_2048.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_atomicProxyGeneration) COMMA_SOURCE_FILE ("derived-selection-controller.swift.galgasTemplate", 48)).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("    self.bind_property_") ;
        result.appendString (enumerator_2048.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString (" ()\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_2048.gotoNextObject () ;
      index_2048_.increment () ;
    }
  }
  result.appendString ("  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   UNBIND SELECTION\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  /* final func unbind_selection () {\n    self.selectedArray_property.setDataProvider (nil)\n") ;
  GGS_uint index_2712_ (0) ;
  if (in_PROPERTY_5F_GENERATION_5F_LIST.isValid ()) {
    UpEnumerator_propertyGenerationList enumerator_2712 (in_PROPERTY_5F_GENERATION_5F_LIST) ;
    while (enumerator_2712.hasCurrentObject ()) {
      const GalgasBool test_1 = GGS_bool (enumerator_2712.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_atomicPropertyGeneration).operator_or (GGS_bool (enumerator_2712.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_computedPropertyGeneration) COMMA_SOURCE_FILE ("derived-selection-controller.swift.galgasTemplate", 63)).operator_or (GGS_bool (enumerator_2712.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_transientPropertyGeneration) COMMA_SOURCE_FILE ("derived-selection-controller.swift.galgasTemplate", 64)).boolEnum () ;
      switch (test_1) {
      case GalgasBool::boolTrue : {
        result.appendString ("  //--- ") ;
        result.appendString (enumerator_2712.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("\n    self.") ;
        result.appendString (enumerator_2712.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_property.mReadModelFunction = nil \n") ;
        const GalgasBool test_2 = GGS_bool (enumerator_2712.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_atomicPropertyGeneration).operator_or (GGS_bool (enumerator_2712.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_computedPropertyGeneration) COMMA_SOURCE_FILE ("derived-selection-controller.swift.galgasTemplate", 68)).boolEnum () ;
        switch (test_2) {
        case GalgasBool::boolTrue : {
          result.appendString ("    self.") ;
          result.appendString (enumerator_2712.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
          result.appendString ("_property.mWriteModelFunction = nil \n") ;
          } break ;
        case GalgasBool::boolFalse : {
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        result.appendString ("    self.selectedArray_property.toMany_") ;
        result.appendString (enumerator_2712.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_StopsBeingObserved (by: self.") ;
        result.appendString (enumerator_2712.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_property)\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_2712.gotoNextObject () ;
      index_2712_.increment () ;
    }
  }
  result.appendString ("  } */\n\n") ;
  GGS_uint index_3416_ (0) ;
  if (in_PROPERTY_5F_GENERATION_5F_LIST.isValid ()) {
    UpEnumerator_propertyGenerationList enumerator_3416 (in_PROPERTY_5F_GENERATION_5F_LIST) ;
    while (enumerator_3416.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_bindPropertyInSelectionController ((const cPtr_propertyGeneration *) enumerator_3416.current_mProperty (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("derived-selection-controller.swift.galgasTemplate", 77)).stringValue ()) ;
      enumerator_3416.gotoNextObject () ;
      index_3416_.increment () ;
    }
  }
  result.appendString ("\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateSelectionControllers??&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateSelectionControllers_3F__3F__26_ (const GGS_selectionControllerForGeneration constinArgument_inArrayControllerListForGeneration,
                                                       const GGS_string constinArgument_inOutputDirectory,
                                                       GGS_stringset & ioArgument_ioGeneratedFileSet,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_selectionControllerForGeneration enumerator_11756 (constinArgument_inArrayControllerListForGeneration) ;
  while (enumerator_11756.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::equal, enumerator_11756.current_mBaseTypeName (HERE).objectCompare (enumerator_11756.current_mSelectionTypeName (HERE))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string var_s_11877 = GGS_string (filewrapperTemplate_selectionControllerGenerationTemplate_baseSelectionControllerImplementation (inCompiler, enumerator_11756.current_mOwnerName (HERE), enumerator_11756.current_mSelectionControllerName (HERE), enumerator_11756.current_mBaseTypeName (HERE), enumerator_11756.current_mSelectionObservablePropertyMap (HERE) COMMA_SOURCE_FILE ("selection-controller.galgas4", 265))) ;
        GGS_string var_fileName_12102 = GGS_string ("selectionController-").add_operation (enumerator_11756.current_mOwnerName (HERE), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 271)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 271)).add_operation (enumerator_11756.current_mSelectionControllerName (HERE), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 271)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 271)) ;
        {
        ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_12102, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 272)) ;
        }
        {
        GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_12102, var_s_11877, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 273)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GGS_bool var_hasAtomicStoredProperties_12348 = GGS_bool (false) ;
      UpEnumerator_propertyGenerationList enumerator_12393 (enumerator_11756.current_mPropertyGenerationList (HERE)) ;
      bool bool_1 = var_hasAtomicStoredProperties_12348.operator_not (SOURCE_FILE ("selection-controller.galgas4", 280)).isValidAndTrue () ;
      if (enumerator_12393.hasCurrentObject () && bool_1) {
        while (enumerator_12393.hasCurrentObject () && bool_1) {
          var_hasAtomicStoredProperties_12348 = GGS_bool (nullptr != dynamic_cast <const cPtr_atomicPropertyGeneration *> (enumerator_12393.current_mProperty (HERE).ptr ())) ;
          enumerator_12393.gotoNextObject () ;
          if (enumerator_12393.hasCurrentObject ()) {
            bool_1 = var_hasAtomicStoredProperties_12348.operator_not (SOURCE_FILE ("selection-controller.galgas4", 280)).isValidAndTrue () ;
          }
        }
      }
      GGS_string var_s_12562 = GGS_string (filewrapperTemplate_selectionControllerGenerationTemplate_derivedSelectionControllerImplementation (inCompiler, enumerator_11756.current_mOwnerName (HERE), enumerator_11756.current_mSelectionControllerName (HERE), enumerator_11756.current_mBaseTypeName (HERE), enumerator_11756.current_mSelectionTypeName (HERE), enumerator_11756.current_mPropertyGenerationList (HERE), var_hasAtomicStoredProperties_12348 COMMA_SOURCE_FILE ("selection-controller.galgas4", 283))) ;
      GGS_string var_fileName_12844 = GGS_string ("selectionController-").add_operation (enumerator_11756.current_mOwnerName (HERE), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 291)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 291)).add_operation (enumerator_11756.current_mSelectionControllerName (HERE), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 291)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 291)) ;
      {
      ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_12844, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 292)) ;
      }
      {
      GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_12844, var_s_12562, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 293)) ;
      }
    }
    enumerator_11756.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@astSeparatorInstructionDeclaration generateViewCode'
//--------------------------------------------------------------------------------------------------

void cPtr_astSeparatorInstructionDeclaration::method_generateViewCode (const GGS_autoLayoutViewDeclarationMap /* constinArgument_inViewDeclarationMap */,
                                                                       const GGS_bool /* constinArgument_inPreferences */,
                                                                       const GGS_propertyMap /* constinArgument_inRootObservablePropertyMap */,
                                                                       const GGS_propertyMap /* constinArgument_inPreferencesPropertyMap */,
                                                                       const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                                       const GGS_propertyMap /* constinArgument_inObservablePropertyMap */,
                                                                       const GGS_actionMap /* constinArgument_inActionMap */,
                                                                       const GGS_string /* constinArgument_inReceiverSwiftTypeName */,
                                                                       const GGS_classMap /* constinArgument_inClassMap */,
                                                                       GGS_implicitViewFunctionGenerationList & /* ioArgument_ioImplicitViewFunctionGenerationList */,
                                                                       GGS_autoLayoutConfiguratorMap & /* ioArgument_ioConfiguratorMap */,
                                                                       GGS_autoLayoutOutletMap & /* ioArgument_ioOutletMap */,
                                                                       GGS_abstractViewInstructionGeneration & outArgument_outInstruction,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_astSeparatorInstructionDeclaration temp_0 = this ;
  outArgument_outInstruction = GGS_autoLayoutSeparatorInstructionGeneration::init_21_horizontal (temp_0.readProperty_horizontal (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@astGutterInstructionDeclaration generateViewCode'
//--------------------------------------------------------------------------------------------------

void cPtr_astGutterInstructionDeclaration::method_generateViewCode (const GGS_autoLayoutViewDeclarationMap /* constinArgument_inViewDeclarationMap */,
                                                                    const GGS_bool /* constinArgument_inPreferences */,
                                                                    const GGS_propertyMap /* constinArgument_inRootObservablePropertyMap */,
                                                                    const GGS_propertyMap /* constinArgument_inPreferencesPropertyMap */,
                                                                    const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                                    const GGS_propertyMap /* constinArgument_inObservablePropertyMap */,
                                                                    const GGS_actionMap /* constinArgument_inActionMap */,
                                                                    const GGS_string /* constinArgument_inReceiverSwiftTypeName */,
                                                                    const GGS_classMap /* constinArgument_inClassMap */,
                                                                    GGS_implicitViewFunctionGenerationList & /* ioArgument_ioImplicitViewFunctionGenerationList */,
                                                                    GGS_autoLayoutConfiguratorMap & /* ioArgument_ioConfiguratorMap */,
                                                                    GGS_autoLayoutOutletMap & /* ioArgument_ioOutletMap */,
                                                                    GGS_abstractViewInstructionGeneration & outArgument_outInstruction,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_astGutterInstructionDeclaration temp_0 = this ;
  outArgument_outInstruction = GGS_autoLayoutGutterInstructionGeneration::init_21_horizontal (temp_0.readProperty_horizontal (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@astComputedHorizontalViewDeclaration checkView'
//--------------------------------------------------------------------------------------------------

void cPtr_astComputedHorizontalViewDeclaration::method_checkView (const GGS_string /* constinArgument_inViewName */,
                                                                  const GGS_autoLayoutViewDeclarationMap constinArgument_inViewDeclarationMap,
                                                                  const GGS_bool constinArgument_inPreferences,
                                                                  const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                  const GGS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                                  const GGS_semanticContext constinArgument_inSemanticContext,
                                                                  const GGS_propertyMap constinArgument_inObservablePropertyMap,
                                                                  const GGS_actionMap constinArgument_inActionMap,
                                                                  const GGS_string constinArgument_inReceiverSwiftTypeName,
                                                                  const GGS_classMap constinArgument_inClassMap,
                                                                  GGS_implicitViewFunctionGenerationList & ioArgument_ioImplicitViewFunctionGenerationList,
                                                                  GGS_autoLayoutConfiguratorMap & ioArgument_ioConfiguratorMap,
                                                                  GGS_autoLayoutOutletMap & ioArgument_ioOutletMap,
                                                                  GGS_abstractViewGeneration & outArgument_outGeneration,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_actionMap var_preferencesActionMap_32254 ;
  GGS_classKind joker_32244_2 ; // Joker input parameter
  GGS_propertyMap joker_32244_1 ; // Joker input parameter
  GGS_propertyGenerationList joker_32276 ; // Joker input parameter
  constinArgument_inClassMap.method_searchKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 787)), GGS_location::class_func_nowhere (SOURCE_FILE ("auto-layout-view.galgas4", 787)), inCompiler COMMA_HERE), joker_32244_2, joker_32244_1, var_preferencesActionMap_32254, joker_32276, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 787)) ;
  GGS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_32793 ;
  const GGS_astComputedHorizontalViewDeclaration temp_0 = this ;
  extensionMethod_checkViewFunctionCallList (temp_0.readProperty_mFunctionCallList (), constinArgument_inSemanticContext.readProperty_mAutoLayoutHStackFunctionMap (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, var_preferencesActionMap_32254, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_32793, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 788)) ;
  GGS_autoLayoutViewInstructionGenerationList temp_1 = GGS_autoLayoutViewInstructionGenerationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 805)) ;
  GGS_autoLayoutViewInstructionGenerationList var_instructionList_32857 = temp_1 ;
  const GGS_astComputedHorizontalViewDeclaration temp_2 = this ;
  UpEnumerator_astViewInstructionList enumerator_32885 (temp_2.readProperty_mInstructionList ()) ;
  while (enumerator_32885.hasCurrentObject ()) {
    GGS_abstractViewInstructionGeneration var_generatedInstruction_33313 ;
    callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) enumerator_32885.current_mInstruction (HERE).ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_generatedInstruction_33313, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 807)) ;
    {
    var_instructionList_32857.setter_append (var_generatedInstruction_33313, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 822)) ;
    }
    enumerator_32885.gotoNextObject () ;
  }
  const GGS_astComputedHorizontalViewDeclaration temp_3 = this ;
  outArgument_outGeneration = GGS_computedHorizontalViewGeneration::init_21__21__21_ (var_funcCallList_32793, var_instructionList_32857, temp_3.readProperty_mNewStackViewDeclarationList (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@astComputedVerticalViewDeclaration checkView'
//--------------------------------------------------------------------------------------------------

void cPtr_astComputedVerticalViewDeclaration::method_checkView (const GGS_string /* constinArgument_inViewName */,
                                                                const GGS_autoLayoutViewDeclarationMap constinArgument_inViewDeclarationMap,
                                                                const GGS_bool constinArgument_inPreferences,
                                                                const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                const GGS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                                const GGS_semanticContext constinArgument_inSemanticContext,
                                                                const GGS_propertyMap constinArgument_inObservablePropertyMap,
                                                                const GGS_actionMap constinArgument_inActionMap,
                                                                const GGS_string constinArgument_inReceiverSwiftTypeName,
                                                                const GGS_classMap constinArgument_inClassMap,
                                                                GGS_implicitViewFunctionGenerationList & ioArgument_ioImplicitViewFunctionGenerationList,
                                                                GGS_autoLayoutConfiguratorMap & ioArgument_ioConfiguratorMap,
                                                                GGS_autoLayoutOutletMap & ioArgument_ioOutletMap,
                                                                GGS_abstractViewGeneration & outArgument_outGeneration,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_actionMap var_preferencesActionMap_34811 ;
  GGS_classKind joker_34801_2 ; // Joker input parameter
  GGS_propertyMap joker_34801_1 ; // Joker input parameter
  GGS_propertyGenerationList joker_34833 ; // Joker input parameter
  constinArgument_inClassMap.method_searchKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 844)), GGS_location::class_func_nowhere (SOURCE_FILE ("auto-layout-view.galgas4", 844)), inCompiler COMMA_HERE), joker_34801_2, joker_34801_1, var_preferencesActionMap_34811, joker_34833, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 844)) ;
  GGS_autoLayoutViewInstructionGenerationList temp_0 = GGS_autoLayoutViewInstructionGenerationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 845)) ;
  GGS_autoLayoutViewInstructionGenerationList var_instructionList_34884 = temp_0 ;
  GGS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_35418 ;
  const GGS_astComputedVerticalViewDeclaration temp_1 = this ;
  extensionMethod_checkViewFunctionCallList (temp_1.readProperty_mFunctionCallList (), constinArgument_inSemanticContext.readProperty_mAutoLayoutVStackFunctionMap (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, var_preferencesActionMap_34811, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_35418, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 846)) ;
  const GGS_astComputedVerticalViewDeclaration temp_2 = this ;
  UpEnumerator_astViewInstructionList enumerator_35442 (temp_2.readProperty_mInstructionList ()) ;
  while (enumerator_35442.hasCurrentObject ()) {
    GGS_abstractViewInstructionGeneration var_generatedInstruction_35869 ;
    callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) enumerator_35442.current_mInstruction (HERE).ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_generatedInstruction_35869, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 864)) ;
    {
    var_instructionList_34884.setter_append (var_generatedInstruction_35869, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 879)) ;
    }
    enumerator_35442.gotoNextObject () ;
  }
  const GGS_astComputedVerticalViewDeclaration temp_3 = this ;
  const GGS_astComputedVerticalViewDeclaration temp_4 = this ;
  const GGS_astComputedVerticalViewDeclaration temp_5 = this ;
  outArgument_outGeneration = GGS_computedVerticalViewGeneration::init_21__21__21__21__21_ (temp_3.readProperty_mHasVerticalScroller (), temp_4.readProperty_mConfiguratorName (), var_funcCallList_35418, var_instructionList_34884, temp_5.readProperty_mNewStackViewDeclarationList (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@astSpaceViewInstruction generateViewCode'
//--------------------------------------------------------------------------------------------------

void cPtr_astSpaceViewInstruction::method_generateViewCode (const GGS_autoLayoutViewDeclarationMap /* constinArgument_inViewDeclarationMap */,
                                                            const GGS_bool /* constinArgument_inPreferences */,
                                                            const GGS_propertyMap /* constinArgument_inRootObservablePropertyMap */,
                                                            const GGS_propertyMap /* constinArgument_inPreferencesPropertyMap */,
                                                            const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                            const GGS_propertyMap /* constinArgument_inObservablePropertyMap */,
                                                            const GGS_actionMap /* constinArgument_inActionMap */,
                                                            const GGS_string /* constinArgument_inReceiverSwiftTypeName */,
                                                            const GGS_classMap /* constinArgument_inClassMap */,
                                                            GGS_implicitViewFunctionGenerationList & /* ioArgument_ioImplicitViewFunctionGenerationList */,
                                                            GGS_autoLayoutConfiguratorMap & /* ioArgument_ioConfiguratorMap */,
                                                            GGS_autoLayoutOutletMap & /* ioArgument_ioOutletMap */,
                                                            GGS_abstractViewInstructionGeneration & outArgument_outInstruction,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstruction = GGS_autoLayoutSpaceViewInstructionGeneration::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@astDividerInstructionDeclaration generateViewCode'
//--------------------------------------------------------------------------------------------------

void cPtr_astDividerInstructionDeclaration::method_generateViewCode (const GGS_autoLayoutViewDeclarationMap /* constinArgument_inViewDeclarationMap */,
                                                                     const GGS_bool /* constinArgument_inPreferences */,
                                                                     const GGS_propertyMap /* constinArgument_inRootObservablePropertyMap */,
                                                                     const GGS_propertyMap /* constinArgument_inPreferencesPropertyMap */,
                                                                     const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                                     const GGS_propertyMap /* constinArgument_inObservablePropertyMap */,
                                                                     const GGS_actionMap /* constinArgument_inActionMap */,
                                                                     const GGS_string /* constinArgument_inReceiverSwiftTypeName */,
                                                                     const GGS_classMap /* constinArgument_inClassMap */,
                                                                     GGS_implicitViewFunctionGenerationList & /* ioArgument_ioImplicitViewFunctionGenerationList */,
                                                                     GGS_autoLayoutConfiguratorMap & /* ioArgument_ioConfiguratorMap */,
                                                                     GGS_autoLayoutOutletMap & /* ioArgument_ioOutletMap */,
                                                                     GGS_abstractViewInstructionGeneration & outArgument_outInstruction,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_astDividerInstructionDeclaration temp_0 = this ;
  outArgument_outInstruction = GGS_autoLayoutDividerInstructionGeneration::init_21_horizontal (temp_0.readProperty_horizontal (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@astLocalViewInstruction generateViewCode'
//--------------------------------------------------------------------------------------------------

void cPtr_astLocalViewInstruction::method_generateViewCode (const GGS_autoLayoutViewDeclarationMap /* constinArgument_inViewDeclarationMap */,
                                                            const GGS_bool /* constinArgument_inPreferences */,
                                                            const GGS_propertyMap /* constinArgument_inRootObservablePropertyMap */,
                                                            const GGS_propertyMap /* constinArgument_inPreferencesPropertyMap */,
                                                            const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                            const GGS_propertyMap /* constinArgument_inObservablePropertyMap */,
                                                            const GGS_actionMap /* constinArgument_inActionMap */,
                                                            const GGS_string /* constinArgument_inReceiverSwiftTypeName */,
                                                            const GGS_classMap /* constinArgument_inClassMap */,
                                                            GGS_implicitViewFunctionGenerationList & /* ioArgument_ioImplicitViewFunctionGenerationList */,
                                                            GGS_autoLayoutConfiguratorMap & /* ioArgument_ioConfiguratorMap */,
                                                            GGS_autoLayoutOutletMap & /* ioArgument_ioOutletMap */,
                                                            GGS_abstractViewInstructionGeneration & outArgument_outInstruction,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_astLocalViewInstruction temp_0 = this ;
  outArgument_outInstruction = GGS_autoLayoutLocalViewInstructionGeneration::init_21_ (temp_0.readProperty_mLocalView ().readProperty_string (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@astComputedViewInstruction generateViewCode'
//--------------------------------------------------------------------------------------------------

void cPtr_astComputedViewInstruction::method_generateViewCode (const GGS_autoLayoutViewDeclarationMap constinArgument_inViewDeclarationMap,
                                                               const GGS_bool constinArgument_inPreferences,
                                                               const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                               const GGS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                               const GGS_semanticContext constinArgument_inSemanticContext,
                                                               const GGS_propertyMap constinArgument_inObservablePropertyMap,
                                                               const GGS_actionMap constinArgument_inActionMap,
                                                               const GGS_string constinArgument_inReceiverSwiftTypeName,
                                                               const GGS_classMap constinArgument_inClassMap,
                                                               GGS_implicitViewFunctionGenerationList & ioArgument_ioImplicitViewFunctionGenerationList,
                                                               GGS_autoLayoutConfiguratorMap & ioArgument_ioConfiguratorMap,
                                                               GGS_autoLayoutOutletMap & ioArgument_ioOutletMap,
                                                               GGS_abstractViewInstructionGeneration & outArgument_outInstruction,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutClassParameterList var_formalParameterList_42485 ;
  GGS_astAutoLayoutViewFunctionMap var_functionMap_42516 ;
  const GGS_astComputedViewInstruction temp_0 = this ;
  GGS_lstring joker_42470_7 ; // Joker input parameter
  GGS_bool joker_42470_6 ; // Joker input parameter
  GGS_bool joker_42470_5 ; // Joker input parameter
  GGS_bool joker_42470_4 ; // Joker input parameter
  GGS_bool joker_42470_3 ; // Joker input parameter
  GGS_bool joker_42470_2 ; // Joker input parameter
  GGS_bool joker_42470_1 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mAutolayoutViewClassMap ().method_searchKey (temp_0.readProperty_mAutoLayoutViewClassName (), joker_42470_7, joker_42470_6, joker_42470_5, joker_42470_4, joker_42470_3, joker_42470_2, joker_42470_1, var_formalParameterList_42485, var_functionMap_42516, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 980)) ;
  GGS_actionMap var_preferencesActionMap_42600 ;
  GGS_classKind joker_42590_2 ; // Joker input parameter
  GGS_propertyMap joker_42590_1 ; // Joker input parameter
  GGS_propertyGenerationList joker_42622 ; // Joker input parameter
  constinArgument_inClassMap.method_searchKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 986)), GGS_location::class_func_nowhere (SOURCE_FILE ("auto-layout-view.galgas4", 986)), inCompiler COMMA_HERE), joker_42590_2, joker_42590_1, var_preferencesActionMap_42600, joker_42622, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 986)) ;
  GGS_autoLayoutViewInstructionGenerationParameterList temp_1 = GGS_autoLayoutViewInstructionGenerationParameterList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 987)) ;
  GGS_autoLayoutViewInstructionGenerationParameterList var_parameterList_42682 = temp_1 ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_astComputedViewInstruction temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::notEqual, var_formalParameterList_42485.getter_count (SOURCE_FILE ("auto-layout-view.galgas4", 988)).objectCompare (temp_3.readProperty_mParameterList ().getter_count (SOURCE_FILE ("auto-layout-view.galgas4", 988)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_astComputedViewInstruction temp_4 = this ;
      const GGS_astComputedViewInstruction temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mAutoLayoutViewClassName ().readProperty_location (), var_formalParameterList_42485.getter_count (SOURCE_FILE ("auto-layout-view.galgas4", 990)).getter_string (SOURCE_FILE ("auto-layout-view.galgas4", 990)).add_operation (GGS_string (" parameter(s) required, "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 990)).add_operation (temp_5.readProperty_mParameterList ().getter_count (SOURCE_FILE ("auto-layout-view.galgas4", 990)).getter_string (SOURCE_FILE ("auto-layout-view.galgas4", 990)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 990)).add_operation (GGS_string (" provided"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 990)), fixItArray6  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 989)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    const GGS_astComputedViewInstruction temp_7 = this ;
    UpEnumerator_astAutoLayoutViewInstructionParameterList enumerator_42953 (temp_7.readProperty_mParameterList ()) ;
    UpEnumerator_autoLayoutClassParameterList enumerator_42997 (var_formalParameterList_42485) ;
    while (enumerator_42953.hasCurrentObject () && enumerator_42997.hasCurrentObject ()) {
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        const GGS_autoLayoutClassParameterType_2E_typeEnum var_formalTypeEnum_43048 = enumerator_42997.current_mParameterType (HERE).getter_getTypeEnum (SOURCE_FILE ("auto-layout-view.galgas4", 994)).unwrappedValue () ;
        if (!enumerator_42997.current_mParameterType (HERE).getter_getTypeEnum (SOURCE_FILE ("auto-layout-view.galgas4", 994)).isValuated ()) {
          test_8 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_8) {
          const GGS_autoLayoutClassParameterType_2E_typeEnum var_actualTypeEnum_43093 = enumerator_42953.current_mParameterType (HERE).getter_getTypeEnum (SOURCE_FILE ("auto-layout-view.galgas4", 994)).unwrappedValue () ;
          if (!enumerator_42953.current_mParameterType (HERE).getter_getTypeEnum (SOURCE_FILE ("auto-layout-view.galgas4", 994)).isValuated ()) {
            test_8 = GalgasBool::boolFalse ;
          }
          if (GalgasBool::boolTrue == test_8) {
            GGS_classKind var_typeKind_43188 ;
            GGS_propertyMap joker_43198_3 ; // Joker input parameter
            GGS_actionMap joker_43198_2 ; // Joker input parameter
            GGS_propertyGenerationList joker_43198_1 ; // Joker input parameter
            constinArgument_inClassMap.method_searchKey (var_formalTypeEnum_43048.readProperty_name (), var_typeKind_43188, joker_43198_3, joker_43198_2, joker_43198_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 995)) ;
            GalgasBool test_9 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_9) {
              const GGS_classKind_2E_atomic var_atomicTypeKind_43218 = var_typeKind_43188.getter_getAtomic (SOURCE_FILE ("auto-layout-view.galgas4", 996)).unwrappedValue () ;
              if (!var_typeKind_43188.getter_getAtomic (SOURCE_FILE ("auto-layout-view.galgas4", 996)).isValuated ()) {
                test_9 = GalgasBool::boolFalse ;
              }
              if (GalgasBool::boolTrue == test_9) {
                const GGS_typeKind_2E_enumType var_enumKind_43259 = var_atomicTypeKind_43218.readProperty_kind ().getter_getEnumType (SOURCE_FILE ("auto-layout-view.galgas4", 996)).unwrappedValue () ;
                if (!var_atomicTypeKind_43218.readProperty_kind ().getter_getEnumType (SOURCE_FILE ("auto-layout-view.galgas4", 996)).isValuated ()) {
                  test_9 = GalgasBool::boolFalse ;
                }
                if (GalgasBool::boolTrue == test_9) {
                  GGS_uint joker_43370 ; // Joker input parameter
                  var_enumKind_43259.readProperty_constantMap ().method_searchKey (var_actualTypeEnum_43093.readProperty_name (), joker_43370, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 997)) ;
                }
              }
            }
            if (GalgasBool::boolFalse == test_9) {
              GenericArray <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (var_formalTypeEnum_43048.readProperty_name ().readProperty_location (), GGS_string ("this type name is not an enum"), fixItArray10  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 999)) ;
            }
          }
        }
      }
      if (GalgasBool::boolFalse == test_8) {
        GalgasBool test_11 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_11) {
          test_11 = GGS_bool (ComparisonKind::notEqual, enumerator_42953.current_mParameterType (HERE).objectCompare (enumerator_42997.current_mParameterType (HERE))).boolEnum () ;
          if (GalgasBool::boolTrue == test_11) {
            GenericArray <FixItDescription> fixItArray12 ;
            inCompiler->emitSemanticError (enumerator_42953.current_mParameterName (HERE).readProperty_location (), GGS_string ("the formal parameter requires ").add_operation (extensionGetter_string (enumerator_42997.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1002)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1002)).add_operation (GGS_string (", actual parameter is "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1002)).add_operation (extensionGetter_string (enumerator_42953.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1002)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1002)), fixItArray12  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1002)) ;
          }
        }
      }
      GalgasBool test_13 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_13) {
        test_13 = GGS_bool (ComparisonKind::notEqual, enumerator_42953.current_mParameterName (HERE).readProperty_string ().objectCompare (enumerator_42997.current_mParameterName (HERE).readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_13) {
          GenericArray <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (enumerator_42953.current_mParameterName (HERE).readProperty_location (), GGS_string ("the parameter name should be '").add_operation (enumerator_42997.current_mParameterName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1005)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1005)), fixItArray14  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1005)) ;
        }
      }
      switch (enumerator_42953.current_mParameter (HERE).enumValue ()) {
      case GGS_astAutoLayoutViewInstructionParameterValue::Enumeration::invalid:
        break ;
      case GGS_astAutoLayoutViewInstructionParameterValue::Enumeration::enum_viewFunc:
        {
          GGS_astAbstractViewInstructionDeclaration extractedValue_43794_instruction_0 ;
          enumerator_42953.current_mParameter (HERE).getAssociatedValuesFor_viewFunc (extractedValue_43794_instruction_0) ;
          GGS_abstractViewInstructionGeneration var_viewInstruction_44316 ;
          callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) extractedValue_43794_instruction_0.ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_viewInstruction_44316, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1009)) ;
          {
          var_parameterList_42682.setter_append (enumerator_42953.current_mParameterName (HERE).readProperty_string (), GGS_string ("self.computeImplicitView_").add_operation (ioArgument_ioImplicitViewFunctionGenerationList.getter_count (SOURCE_FILE ("auto-layout-view.galgas4", 1024)).getter_string (SOURCE_FILE ("auto-layout-view.galgas4", 1024)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1024)).add_operation (GGS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1024)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1024)) ;
          }
          {
          ioArgument_ioImplicitViewFunctionGenerationList.setter_append (var_viewInstruction_44316, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1025)) ;
          }
        }
        break ;
      case GGS_astAutoLayoutViewInstructionParameterValue::Enumeration::enum_entity:
        {
          GGS_lstring extractedValue_44559_entityName_0 ;
          enumerator_42953.current_mParameter (HERE).getAssociatedValuesFor_entity (extractedValue_44559_entityName_0) ;
          GGS_classKind var_classKind_44620 ;
          GGS_propertyMap joker_44631_3 ; // Joker input parameter
          GGS_actionMap joker_44631_2 ; // Joker input parameter
          GGS_propertyGenerationList joker_44631_1 ; // Joker input parameter
          constinArgument_inClassMap.method_searchKey (extractedValue_44559_entityName_0, var_classKind_44620, joker_44631_3, joker_44631_2, joker_44631_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1027)) ;
          GalgasBool test_15 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_15) {
            test_15 = var_classKind_44620.getter_isEntity (SOURCE_FILE ("auto-layout-view.galgas4", 1028)).operator_not (SOURCE_FILE ("auto-layout-view.galgas4", 1028)).boolEnum () ;
            if (GalgasBool::boolTrue == test_15) {
              GenericArray <FixItDescription> fixItArray16 ;
              inCompiler->emitSemanticError (extractedValue_44559_entityName_0.readProperty_location (), GGS_string ("an entity is required here"), fixItArray16  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1029)) ;
            }
          }
          {
          var_parameterList_42682.setter_append (enumerator_42953.current_mParameterName (HERE).readProperty_string (), extractedValue_44559_entityName_0.readProperty_string ().add_operation (GGS_string (".self"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1031)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1031)) ;
          }
        }
        break ;
      case GGS_astAutoLayoutViewInstructionParameterValue::Enumeration::enum_string:
        {
          GGS_string extractedValue_44832_stringValue_0 ;
          enumerator_42953.current_mParameter (HERE).getAssociatedValuesFor_string (extractedValue_44832_stringValue_0) ;
          {
          var_parameterList_42682.setter_append (enumerator_42953.current_mParameterName (HERE).readProperty_string (), extractedValue_44832_stringValue_0, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1033)) ;
          }
        }
        break ;
      case GGS_astAutoLayoutViewInstructionParameterValue::Enumeration::enum_menuItem:
        {
          GGS_string extractedValue_44919_title_0 ;
          GGS_runActionDescriptor extractedValue_44926_run_1 ;
          GGS_multipleBindingDescriptor extractedValue_44931_enabledBinding_2 ;
          enumerator_42953.current_mParameter (HERE).getAssociatedValuesFor_menuItem (extractedValue_44919_title_0, extractedValue_44926_run_1, extractedValue_44931_enabledBinding_2) ;
          GGS_autolayoutRunBindingForGeneration var_runBindingGeneration_45267 ;
          {
          routine_analyzeAutoLayoutRunBinding_3F__3F_handlesRunAction_3F__3F__3F__3F__3F__3F__21_ (extractedValue_44926_run_1, GGS_bool (true), constinArgument_inPreferences, GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-view.galgas4", 1039)), constinArgument_inActionMap, constinArgument_inObservablePropertyMap, constinArgument_inReceiverSwiftTypeName, var_preferencesActionMap_42600, var_runBindingGeneration_45267, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1035)) ;
          }
          GGS_autolayoutEnabledBindingForGeneration var_enabledBindingGeneration_45603 ;
          {
          routine_analyzeAutoLayoutEnableBinding_3F__3F_handlesEnabledBinding_3F_prefs_3F__3F__3F__3F_prefsMap_21_ (extractedValue_44931_enabledBinding_2, GGS_bool (true), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_enabledBindingGeneration_45603, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1046)) ;
          }
          GGS_string var_s_45650 = GGS_string ("AutoLayoutMenuItemDescriptor (title: ").add_operation (extractedValue_44919_title_0.getter_utf_38_Representation (SOURCE_FILE ("auto-layout-view.galgas4", 1056)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1056)) ;
          switch (var_runBindingGeneration_45267.enumValue ()) {
          case GGS_autolayoutRunBindingForGeneration::Enumeration::invalid:
            break ;
          case GGS_autolayoutRunBindingForGeneration::Enumeration::enum_none:
            {
              var_s_45650.plusAssignOperation(GGS_string (", target: nil, selector: nil"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1059)) ;
            }
            break ;
          case GGS_autolayoutRunBindingForGeneration::Enumeration::enum_run:
            {
              GGS_string extractedValue_45842_targetName_0 ;
              GGS_string extractedValue_45854_actionName_1 ;
              GGS_string extractedValue_45866_runTargetName_2 ;
              var_runBindingGeneration_45267.getAssociatedValuesFor_run (extractedValue_45842_targetName_0, extractedValue_45854_actionName_1, extractedValue_45866_runTargetName_2) ;
              var_s_45650.plusAssignOperation(GGS_string (", target: ").add_operation (extractedValue_45842_targetName_0, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1061)).add_operation (GGS_string (", selector: #selector ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1061)).add_operation (extractedValue_45866_runTargetName_2, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1061)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1061)).add_operation (extractedValue_45854_actionName_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1061)).add_operation (GGS_string (" (_:))"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1061)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1061)) ;
            }
            break ;
          }
          switch (var_enabledBindingGeneration_45603.enumValue ()) {
          case GGS_autolayoutEnabledBindingForGeneration::Enumeration::invalid:
            break ;
          case GGS_autolayoutEnabledBindingForGeneration::Enumeration::enum_none:
            {
              var_s_45650.plusAssignOperation(GGS_string (", enableBinding: .alwaysTrue"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1065)) ;
            }
            break ;
          case GGS_autolayoutEnabledBindingForGeneration::Enumeration::enum_enabled:
            {
              GGS_abstractBooleanMultipleBindingExpressionForGeneration extractedValue_46139_binding_0 ;
              var_enabledBindingGeneration_45603.getAssociatedValuesFor_enabled (extractedValue_46139_binding_0) ;
              var_s_45650.plusAssignOperation(GGS_string (", enableBinding: ").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) extractedValue_46139_binding_0.ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1067)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1067)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1067)) ;
            }
            break ;
          }
          var_s_45650.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1069)) ;
          {
          var_parameterList_42682.setter_append (enumerator_42953.current_mParameterName (HERE).readProperty_string (), var_s_45650, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1070)) ;
          }
        }
        break ;
      case GGS_astAutoLayoutViewInstructionParameterValue::Enumeration::enum_enumFunc:
        {
          GGS_lstring extractedValue_46303_enumTypeName_0 ;
          GGS_lstring extractedValue_46317_funcName_1 ;
          enumerator_42953.current_mParameter (HERE).getAssociatedValuesFor_enumFunc (extractedValue_46303_enumTypeName_0, extractedValue_46317_funcName_1) ;
          GGS_classKind var_type_46395 ;
          GGS_propertyMap joker_46401_3 ; // Joker input parameter
          GGS_actionMap joker_46401_2 ; // Joker input parameter
          GGS_propertyGenerationList joker_46401_1 ; // Joker input parameter
          constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_46303_enumTypeName_0, var_type_46395, joker_46401_3, joker_46401_2, joker_46401_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1072)) ;
          GalgasBool test_17 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_17) {
            test_17 = var_type_46395.getter_isAtomic (SOURCE_FILE ("auto-layout-view.galgas4", 1073)).operator_not (SOURCE_FILE ("auto-layout-view.galgas4", 1073)).boolEnum () ;
            if (GalgasBool::boolTrue == test_17) {
              GenericArray <FixItDescription> fixItArray18 ;
              inCompiler->emitSemanticError (extractedValue_46303_enumTypeName_0.readProperty_location (), GGS_string ("this type should be an enum type"), fixItArray18  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1074)) ;
            }
          }
          if (GalgasBool::boolFalse == test_17) {
            GGS_typeKind var_typeKind_46561 ;
            var_type_46395.method_extractAtomic (var_typeKind_46561, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1076)) ;
            GalgasBool test_19 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_19) {
              test_19 = var_typeKind_46561.getter_isEnumType (SOURCE_FILE ("auto-layout-view.galgas4", 1077)).boolEnum () ;
              if (GalgasBool::boolTrue == test_19) {
                GGS_enumFuncMap var_funcMap_46665 ;
                GGS_string joker_46647_2 ; // Joker input parameter
                GGS_enumConstantMap joker_46647_1 ; // Joker input parameter
                var_typeKind_46561.method_extractEnumType (joker_46647_2, joker_46647_1, var_funcMap_46665, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1078)) ;
                GGS_enumFunAssociationSortedList joker_46715 ; // Joker input parameter
                var_funcMap_46665.method_searchKey (extractedValue_46317_funcName_1, joker_46715, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1079)) ;
              }
            }
            if (GalgasBool::boolFalse == test_19) {
              GenericArray <FixItDescription> fixItArray20 ;
              inCompiler->emitSemanticError (extractedValue_46303_enumTypeName_0.readProperty_location (), GGS_string ("this type should be an enum type"), fixItArray20  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1081)) ;
            }
          }
          {
          var_parameterList_42682.setter_append (enumerator_42953.current_mParameterName (HERE).readProperty_string (), extractedValue_46303_enumTypeName_0.readProperty_string ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1084)).add_operation (extractedValue_46317_funcName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1084)).add_operation (GGS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1084)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1084)) ;
          }
        }
        break ;
      }
      enumerator_42953.gotoNextObject () ;
      enumerator_42997.gotoNextObject () ;
    }
  }
  GGS_autoLayoutRegularBindingsGenerationList var_regularBindingsGenerationList_47471 ;
  GGS_autoLayoutMultipleBindingGenerationList var_multipleBindingGenerationList_47552 ;
  GGS_autolayoutRunBindingForGeneration var_runBindingGeneration_47627 ;
  GGS_string var_inTableViewBindingGeneration_47666 ;
  GGS_autoLayoutViewGraphicControllerBindingGeneration var_ebViewGraphicControllerBindingGeneration_47755 ;
  {
  const GGS_astComputedViewInstruction temp_21 = this ;
  const GGS_astComputedViewInstruction temp_22 = this ;
  const GGS_astComputedViewInstruction temp_23 = this ;
  const GGS_astComputedViewInstruction temp_24 = this ;
  const GGS_astComputedViewInstruction temp_25 = this ;
  const GGS_astComputedViewInstruction temp_26 = this ;
  const GGS_astComputedViewInstruction temp_27 = this ;
  routine_analyzeAutoLayoutBinding_3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__21__21__21__21__21_ (constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_preferencesActionMap_42600, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, temp_21.readProperty_mAutoLayoutViewClassName (), temp_22.readProperty_mTableValueBinding (), temp_23.readProperty_mRunActionDescriptor (), temp_24.readProperty_mEnabledBindingDescriptor (), temp_25.readProperty_mHiddenBindingDescriptor (), temp_26.readProperty_mGraphicController (), temp_27.readProperty_mRegularBindingList (), var_regularBindingsGenerationList_47471, var_multipleBindingGenerationList_47552, var_runBindingGeneration_47627, var_inTableViewBindingGeneration_47666, var_ebViewGraphicControllerBindingGeneration_47755, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1089)) ;
  }
  GGS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_48278 ;
  const GGS_astComputedViewInstruction temp_28 = this ;
  extensionMethod_checkViewFunctionCallList (temp_28.readProperty_mFunctionCallList (), var_functionMap_42516, constinArgument_inViewDeclarationMap, constinArgument_inPreferences, var_preferencesActionMap_42600, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_48278, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1114)) ;
  GalgasBool test_29 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_29) {
    const GGS_astComputedViewInstruction temp_30 = this ;
    test_29 = GGS_bool (ComparisonKind::notEqual, temp_30.readProperty_mOutletName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_29) {
      {
      const GGS_astComputedViewInstruction temp_31 = this ;
      const GGS_astComputedViewInstruction temp_32 = this ;
      const GGS_astComputedViewInstruction temp_33 = this ;
      ioArgument_ioOutletMap.setter_insertKey (temp_31.readProperty_mOutletName (), temp_32.readProperty_mAutoLayoutViewClassName ().readProperty_string (), temp_33.readProperty_mOutletIsArray (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1133)) ;
      }
    }
  }
  GalgasBool test_34 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_34) {
    const GGS_astComputedViewInstruction temp_35 = this ;
    test_34 = GGS_bool (ComparisonKind::notEqual, temp_35.readProperty_mConfiguratorName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_34) {
      {
      const GGS_astComputedViewInstruction temp_36 = this ;
      const GGS_astComputedViewInstruction temp_37 = this ;
      ioArgument_ioConfiguratorMap.setter_insertKey (temp_36.readProperty_mConfiguratorName (), temp_37.readProperty_mAutoLayoutViewClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1137)) ;
      }
    }
  }
  const GGS_astComputedViewInstruction temp_38 = this ;
  const GGS_astComputedViewInstruction temp_39 = this ;
  const GGS_astComputedViewInstruction temp_40 = this ;
  const GGS_astComputedViewInstruction temp_41 = this ;
  outArgument_outInstruction = GGS_autoLayoutComputedViewInstructionGeneration::init_21__21__21__21__21__21__21__21__21__21__21_ (temp_38.readProperty_mAutoLayoutViewClassName (), var_parameterList_42682, var_funcCallList_48278, var_regularBindingsGenerationList_47471, var_multipleBindingGenerationList_47552, var_runBindingGeneration_47627, var_inTableViewBindingGeneration_47666, var_ebViewGraphicControllerBindingGeneration_47755, temp_39.readProperty_mConfiguratorName ().readProperty_string (), temp_40.readProperty_mOutletName ().readProperty_string (), temp_41.readProperty_mOutletIsArray (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeAutoLayoutBinding???????????????!!!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeAutoLayoutBinding_3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__21__21__21__21__21_ (const GGS_bool constinArgument_inPreferences,
                                                                                                                       const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                                                       const GGS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                                                                                       const GGS_actionMap constinArgument_inPreferencesActionMap,
                                                                                                                       const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                                                       const GGS_propertyMap constinArgument_inObservablePropertyMap,
                                                                                                                       const GGS_actionMap constinArgument_inActionMap,
                                                                                                                       const GGS_string constinArgument_inReceiverSwiftTypeName,
                                                                                                                       const GGS_lstring constinArgument_inTypeName,
                                                                                                                       const GGS_tableValueBinding constinArgument_inTableValueBinding,
                                                                                                                       const GGS_runActionDescriptor constinArgument_inRunActionDescriptor,
                                                                                                                       const GGS_multipleBindingDescriptor constinArgument_inEnabledBindingDescriptor,
                                                                                                                       const GGS_multipleBindingDescriptor constinArgument_inHiddenBindingDescriptor,
                                                                                                                       const GGS_graphicController constinArgument_inGraphicController,
                                                                                                                       const GGS_regularBindingList constinArgument_inRegularBindingList,
                                                                                                                       GGS_autoLayoutRegularBindingsGenerationList & outArgument_outRegularBindingsGenerationList,
                                                                                                                       GGS_autoLayoutMultipleBindingGenerationList & outArgument_outMultipleBindingGenerationList,
                                                                                                                       GGS_autolayoutRunBindingForGeneration & outArgument_outRunBindingGeneration,
                                                                                                                       GGS_string & outArgument_outTableViewBindingGeneration,
                                                                                                                       GGS_autoLayoutViewGraphicControllerBindingGeneration & outArgument_outEBViewGraphicControllerBindingGeneration,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRegularBindingsGenerationList.drop () ; // Release 'out' argument
  outArgument_outMultipleBindingGenerationList.drop () ; // Release 'out' argument
  outArgument_outRunBindingGeneration.drop () ; // Release 'out' argument
  outArgument_outTableViewBindingGeneration.drop () ; // Release 'out' argument
  outArgument_outEBViewGraphicControllerBindingGeneration.drop () ; // Release 'out' argument
  GGS_autoLayoutRegularBindingsGenerationList temp_0 = GGS_autoLayoutRegularBindingsGenerationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1180)) ;
  outArgument_outRegularBindingsGenerationList = temp_0 ;
  GGS_autoLayoutMultipleBindingGenerationList temp_1 = GGS_autoLayoutMultipleBindingGenerationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1181)) ;
  outArgument_outMultipleBindingGenerationList = temp_1 ;
  outArgument_outTableViewBindingGeneration = GGS_string::makeEmptyString () ;
  GGS_bool var_handlesRunAction_50685 ;
  GGS_bool var_handlesTableViewBinding_50718 ;
  GGS_bool var_handlesEnabledBinding_50758 ;
  GGS_bool var_handlesHiddenBinding_50796 ;
  GGS_bool var_handleGraphicControllerBinding_50833 ;
  GGS_lstring joker_50666 ; // Joker input parameter
  GGS_bool joker_50869_3 ; // Joker input parameter
  GGS_autoLayoutClassParameterList joker_50869_2 ; // Joker input parameter
  GGS_astAutoLayoutViewFunctionMap joker_50869_1 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mAutolayoutViewClassMap ().method_searchKey (constinArgument_inTypeName, joker_50666, var_handlesRunAction_50685, var_handlesTableViewBinding_50718, var_handlesEnabledBinding_50758, var_handlesHiddenBinding_50796, var_handleGraphicControllerBinding_50833, joker_50869_3, joker_50869_2, joker_50869_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1183)) ;
  outArgument_outEBViewGraphicControllerBindingGeneration = GGS_autoLayoutViewGraphicControllerBindingGeneration::class_func_none (SOURCE_FILE ("auto-layout-view.galgas4", 1194)) ;
  switch (constinArgument_inGraphicController.enumValue ()) {
  case GGS_graphicController::Enumeration::invalid:
    break ;
  case GGS_graphicController::Enumeration::enum_none:
    break ;
  case GGS_graphicController::Enumeration::enum_defined:
    {
      GGS_lstring extractedValue_51023_controllerName_0 ;
      GGS_lstring extractedValue_51048_propertyName_1 ;
      constinArgument_inGraphicController.getAssociatedValuesFor_defined (extractedValue_51023_controllerName_0, extractedValue_51048_propertyName_1) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = var_handleGraphicControllerBinding_50833.operator_not (SOURCE_FILE ("auto-layout-view.galgas4", 1198)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1199)).add_operation (GGS_string ("' type does not handle the $graphicController binding"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1199)), fixItArray3  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1199)) ;
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        GGS_propertyKind var_kind_51318 ;
        GGS_actionMap joker_51332_2 ; // Joker input parameter
        GGS_bool joker_51332_1 ; // Joker input parameter
        constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_51023_controllerName_0, var_kind_51318, joker_51332_2, joker_51332_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1201)) ;
        switch (var_kind_51318.enumValue ()) {
        case GGS_propertyKind::Enumeration::invalid:
          break ;
        case GGS_propertyKind::Enumeration::enum_property:
          {
            GGS_typeKind extractedValue_51385__0 ;
            GGS_propertyAccessibility extractedValue_51385__1 ;
            var_kind_51318.getAssociatedValuesFor_property (extractedValue_51385__0, extractedValue_51385__1) ;
            GenericArray <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (extractedValue_51023_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray4  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1208)) ;
          }
          break ;
        case GGS_propertyKind::Enumeration::enum_toMany:
          {
            GGS_lstring extractedValue_51491__0 ;
            GGS_propertyAccessibility extractedValue_51491__1 ;
            GGS_bool extractedValue_51491__2 ;
            GGS_toManyRelationshipOptionAST extractedValue_51491__3 ;
            var_kind_51318.getAssociatedValuesFor_toMany (extractedValue_51491__0, extractedValue_51491__1, extractedValue_51491__2, extractedValue_51491__3) ;
            GenericArray <FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (extractedValue_51023_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray5  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1210)) ;
          }
          break ;
        case GGS_propertyKind::Enumeration::enum_toOne:
          {
            GGS_lstring extractedValue_51596__0 ;
            GGS_propertyAccessibility extractedValue_51596__1 ;
            GGS_bool extractedValue_51596__2 ;
            GGS_toOneOppositeRelationship extractedValue_51596__3 ;
            GGS_bool extractedValue_51596__4 ;
            var_kind_51318.getAssociatedValuesFor_toOne (extractedValue_51596__0, extractedValue_51596__1, extractedValue_51596__2, extractedValue_51596__3, extractedValue_51596__4) ;
            GenericArray <FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (extractedValue_51023_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray6  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1212)) ;
          }
          break ;
        case GGS_propertyKind::Enumeration::enum_arrayController:
          {
            GGS_lstring extractedValue_51710_entityName_0 ;
            GGS_bool extractedValue_51722_graphic_1 ;
            var_kind_51318.getAssociatedValuesFor_arrayController (extractedValue_51710_entityName_0, extractedValue_51722_graphic_1) ;
            GalgasBool test_7 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_7) {
              test_7 = GGS_bool (ComparisonKind::equal, extractedValue_51048_propertyName_1.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_7) {
                GalgasBool test_8 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_8) {
                  test_8 = extractedValue_51722_graphic_1.operator_not (SOURCE_FILE ("auto-layout-view.galgas4", 1215)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_8) {
                    GenericArray <FixItDescription> fixItArray9 ;
                    inCompiler->emitSemanticError (extractedValue_51023_controllerName_0.readProperty_location (), GGS_string ("the controlled entity (").add_operation (extractedValue_51710_entityName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1216)).add_operation (GGS_string (") should be a graphic entity"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1216)), fixItArray9  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1216)) ;
                  }
                }
              }
            }
            if (GalgasBool::boolFalse == test_7) {
              GGS_propertyMap var_observablePropertyMap_52047 ;
              GGS_classKind joker_52026 ; // Joker input parameter
              GGS_actionMap joker_52082_2 ; // Joker input parameter
              GGS_propertyGenerationList joker_52082_1 ; // Joker input parameter
              constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_51710_entityName_0, joker_52026, var_observablePropertyMap_52047, joker_52082_2, joker_52082_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1219)) ;
              GGS_propertyKind var_propertyKind_52160 ;
              GGS_actionMap joker_52174_2 ; // Joker input parameter
              GGS_bool joker_52174_1 ; // Joker input parameter
              var_observablePropertyMap_52047.method_searchKey (extractedValue_51048_propertyName_1, var_propertyKind_52160, joker_52174_2, joker_52174_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1225)) ;
              switch (var_propertyKind_52160.enumValue ()) {
              case GGS_propertyKind::Enumeration::invalid:
                break ;
              case GGS_propertyKind::Enumeration::enum_property:
                {
                  GGS_typeKind extractedValue_52236__0 ;
                  GGS_propertyAccessibility extractedValue_52236__1 ;
                  var_propertyKind_52160.getAssociatedValuesFor_property (extractedValue_52236__0, extractedValue_52236__1) ;
                  GenericArray <FixItDescription> fixItArray10 ;
                  inCompiler->emitSemanticError (extractedValue_51023_controllerName_0.readProperty_location (), GGS_string ("the bound model should be a toMany property"), fixItArray10  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1228)) ;
                }
                break ;
              case GGS_propertyKind::Enumeration::enum_toMany:
                {
                  GGS_lstring extractedValue_52347_kEntityName_0 ;
                  GGS_propertyAccessibility extractedValue_52360__1 ;
                  GGS_bool extractedValue_52363_isGraphic_2 ;
                  GGS_toManyRelationshipOptionAST extractedValue_52374__3 ;
                  var_propertyKind_52160.getAssociatedValuesFor_toMany (extractedValue_52347_kEntityName_0, extractedValue_52360__1, extractedValue_52363_isGraphic_2, extractedValue_52374__3) ;
                  GalgasBool test_11 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_11) {
                    test_11 = extractedValue_52363_isGraphic_2.operator_not (SOURCE_FILE ("auto-layout-view.galgas4", 1230)).boolEnum () ;
                    if (GalgasBool::boolTrue == test_11) {
                      GenericArray <FixItDescription> fixItArray12 ;
                      inCompiler->emitSemanticError (extractedValue_51023_controllerName_0.readProperty_location (), GGS_string ("the controlled entity (").add_operation (extractedValue_52347_kEntityName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1231)).add_operation (GGS_string (") should be a graphic entity"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1231)), fixItArray12  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1231)) ;
                    }
                  }
                }
                break ;
              case GGS_propertyKind::Enumeration::enum_toOne:
                {
                  GGS_lstring extractedValue_52564__0 ;
                  GGS_propertyAccessibility extractedValue_52564__1 ;
                  GGS_bool extractedValue_52564__2 ;
                  GGS_toOneOppositeRelationship extractedValue_52564__3 ;
                  GGS_bool extractedValue_52564__4 ;
                  var_propertyKind_52160.getAssociatedValuesFor_toOne (extractedValue_52564__0, extractedValue_52564__1, extractedValue_52564__2, extractedValue_52564__3, extractedValue_52564__4) ;
                  GenericArray <FixItDescription> fixItArray13 ;
                  inCompiler->emitSemanticError (extractedValue_51023_controllerName_0.readProperty_location (), GGS_string ("the bound model should be a toMany property"), fixItArray13  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1234)) ;
                }
                break ;
              case GGS_propertyKind::Enumeration::enum_arrayController:
                {
                  GGS_lstring extractedValue_52685__0 ;
                  GGS_bool extractedValue_52685__1 ;
                  var_propertyKind_52160.getAssociatedValuesFor_arrayController (extractedValue_52685__0, extractedValue_52685__1) ;
                  GenericArray <FixItDescription> fixItArray14 ;
                  inCompiler->emitSemanticError (extractedValue_51023_controllerName_0.readProperty_location (), GGS_string ("the bound model should be a toMany property"), fixItArray14  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1236)) ;
                }
                break ;
              case GGS_propertyKind::Enumeration::enum_selectionController:
                {
                  GGS_string extractedValue_52809__0 ;
                  var_propertyKind_52160.getAssociatedValuesFor_selectionController (extractedValue_52809__0) ;
                  GenericArray <FixItDescription> fixItArray15 ;
                  inCompiler->emitSemanticError (extractedValue_51023_controllerName_0.readProperty_location (), GGS_string ("the bound model should be a toMany property"), fixItArray15  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1238)) ;
                }
                break ;
              }
            }
          }
          break ;
        case GGS_propertyKind::Enumeration::enum_selectionController:
          {
            GGS_string extractedValue_52954__0 ;
            var_kind_51318.getAssociatedValuesFor_selectionController (extractedValue_52954__0) ;
            GenericArray <FixItDescription> fixItArray16 ;
            inCompiler->emitSemanticError (extractedValue_51023_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray16  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1242)) ;
          }
          break ;
        }
        outArgument_outEBViewGraphicControllerBindingGeneration = GGS_autoLayoutViewGraphicControllerBindingGeneration::class_func_binding (extractedValue_51023_controllerName_0.readProperty_string ()  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1244)) ;
      }
    }
    break ;
  }
  switch (constinArgument_inTableValueBinding.enumValue ()) {
  case GGS_tableValueBinding::Enumeration::invalid:
    break ;
  case GGS_tableValueBinding::Enumeration::enum_noTableValueBinding:
    break ;
  case GGS_tableValueBinding::Enumeration::enum_tableValueBinding:
    {
      GGS_lstring extractedValue_53290_controllerName_0 ;
      constinArgument_inTableValueBinding.getAssociatedValuesFor_tableValueBinding (extractedValue_53290_controllerName_0) ;
      GalgasBool test_17 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_17) {
        test_17 = var_handlesTableViewBinding_50718.operator_not (SOURCE_FILE ("auto-layout-view.galgas4", 1251)).boolEnum () ;
        if (GalgasBool::boolTrue == test_17) {
          GenericArray <FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1252)).add_operation (GGS_string ("' type does not handle the $tableView binding"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1252)), fixItArray18  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1252)) ;
        }
      }
      if (GalgasBool::boolFalse == test_17) {
        GalgasBool test_19 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_19) {
          test_19 = constinArgument_inPreferences.boolEnum () ;
          if (GalgasBool::boolTrue == test_19) {
            GGS_propertyKind var_kind_53568 ;
            GGS_actionMap joker_53582_2 ; // Joker input parameter
            GGS_bool joker_53582_1 ; // Joker input parameter
            constinArgument_inPreferencesPropertyMap.method_searchKey (extractedValue_53290_controllerName_0, var_kind_53568, joker_53582_2, joker_53582_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1254)) ;
            GalgasBool test_20 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_20) {
              test_20 = var_kind_53568.getter_isArrayController (SOURCE_FILE ("auto-layout-view.galgas4", 1259)).operator_not (SOURCE_FILE ("auto-layout-view.galgas4", 1259)).boolEnum () ;
              if (GalgasBool::boolTrue == test_20) {
                GenericArray <FixItDescription> fixItArray21 ;
                inCompiler->emitSemanticError (extractedValue_53290_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray21  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1260)) ;
              }
            }
            outArgument_outTableViewBindingGeneration = extractedValue_53290_controllerName_0.readProperty_string () ;
          }
        }
        if (GalgasBool::boolFalse == test_19) {
          GGS_propertyKind var_kind_53887 ;
          GGS_actionMap joker_53901_2 ; // Joker input parameter
          GGS_bool joker_53901_1 ; // Joker input parameter
          constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_53290_controllerName_0, var_kind_53887, joker_53901_2, joker_53901_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1264)) ;
          GalgasBool test_22 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_22) {
            test_22 = var_kind_53887.getter_isArrayController (SOURCE_FILE ("auto-layout-view.galgas4", 1269)).operator_not (SOURCE_FILE ("auto-layout-view.galgas4", 1269)).boolEnum () ;
            if (GalgasBool::boolTrue == test_22) {
              GenericArray <FixItDescription> fixItArray23 ;
              inCompiler->emitSemanticError (extractedValue_53290_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray23  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1270)) ;
            }
          }
          outArgument_outTableViewBindingGeneration = extractedValue_53290_controllerName_0.readProperty_string () ;
        }
      }
    }
    break ;
  }
  {
  routine_analyzeAutoLayoutRunBinding_3F__3F_handlesRunAction_3F__3F__3F__3F__3F__3F__21_ (constinArgument_inRunActionDescriptor, var_handlesRunAction_50685, constinArgument_inPreferences, constinArgument_inTypeName, constinArgument_inActionMap, constinArgument_inObservablePropertyMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inPreferencesActionMap, outArgument_outRunBindingGeneration, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1276)) ;
  }
  GGS_autolayoutEnabledBindingForGeneration var_enabledBindingGeneration_54693 ;
  {
  routine_analyzeAutoLayoutEnableBinding_3F__3F_handlesEnabledBinding_3F_prefs_3F__3F__3F__3F_prefsMap_21_ (constinArgument_inEnabledBindingDescriptor, var_handlesEnabledBinding_50758, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_enabledBindingGeneration_54693, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1288)) ;
  }
  switch (var_enabledBindingGeneration_54693.enumValue ()) {
  case GGS_autolayoutEnabledBindingForGeneration::Enumeration::invalid:
    break ;
  case GGS_autolayoutEnabledBindingForGeneration::Enumeration::enum_none:
    break ;
  case GGS_autolayoutEnabledBindingForGeneration::Enumeration::enum_enabled:
    {
      GGS_abstractBooleanMultipleBindingExpressionForGeneration extractedValue_54786_binding_0 ;
      var_enabledBindingGeneration_54693.getAssociatedValuesFor_enabled (extractedValue_54786_binding_0) ;
      {
      outArgument_outMultipleBindingGenerationList.setter_append (GGS_string ("enabled"), extractedValue_54786_binding_0, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1301)) ;
      }
    }
    break ;
  }
  switch (constinArgument_inHiddenBindingDescriptor.enumValue ()) {
  case GGS_multipleBindingDescriptor::Enumeration::invalid:
    break ;
  case GGS_multipleBindingDescriptor::Enumeration::enum_noBinding:
    break ;
  case GGS_multipleBindingDescriptor::Enumeration::enum_binding:
    {
      GGS_abstractBooleanMultipleBindingExpressionAST extractedValue_54997_expression_0 ;
      constinArgument_inHiddenBindingDescriptor.getAssociatedValuesFor_binding (extractedValue_54997_expression_0) ;
      GGS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_55281 ;
      GGS_typeKind var_type_55320 ;
      GGS_location var_errorLocation_55347 ;
      callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_54997_expression_0.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_hiddenExpression_55281, var_type_55320, var_errorLocation_55347, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1307)) ;
      GalgasBool test_24 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_24) {
        test_24 = var_type_55320.getter_isBoolType (SOURCE_FILE ("auto-layout-view.galgas4", 1317)).operator_not (SOURCE_FILE ("auto-layout-view.galgas4", 1317)).boolEnum () ;
        if (GalgasBool::boolTrue == test_24) {
          GenericArray <FixItDescription> fixItArray25 ;
          inCompiler->emitSemanticError (var_errorLocation_55347, GGS_string ("expression is not boolean"), fixItArray25  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1318)) ;
        }
      }
      GalgasBool test_26 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_26) {
        test_26 = var_handlesHiddenBinding_50796.operator_not (SOURCE_FILE ("auto-layout-view.galgas4", 1320)).boolEnum () ;
        if (GalgasBool::boolTrue == test_26) {
          GenericArray <FixItDescription> fixItArray27 ;
          inCompiler->emitSemanticError (var_errorLocation_55347, GGS_string ("cet outlet n'accepte pas le binding $hidden"), fixItArray27  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1321)) ;
        }
      }
      {
      outArgument_outMultipleBindingGenerationList.setter_append (GGS_string ("hidden"), var_hiddenExpression_55281, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1323)) ;
      }
    }
    break ;
  }
  {
  GGS_string temp_28 ;
  const GalgasBool test_29 = constinArgument_inPreferences.boolEnum () ;
  if (GalgasBool::boolTrue == test_29) {
    temp_28 = GGS_string ("preferences_") ;
  }else if (GalgasBool::boolFalse == test_29) {
    temp_28 = GGS_string ("self.") ;
  }
  routine_analyzeAutoLayoutRegularBinding_3F_prefs_3F__3F__3F__3F__3F__3F__3F__26_ (constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inTypeName, constinArgument_inRegularBindingList, temp_28, outArgument_outRegularBindingsGenerationList, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1329)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeAutoLayoutEnableBinding??handlesEnabledBinding?prefs????prefsMap!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeAutoLayoutEnableBinding_3F__3F_handlesEnabledBinding_3F_prefs_3F__3F__3F__3F_prefsMap_21_ (const GGS_multipleBindingDescriptor constinArgument_inEnabledBindingDescriptor,
                                                                                                               const GGS_bool constinArgument_inHandlesEnabledBinding,
                                                                                                               const GGS_bool constinArgument_inPreferences,
                                                                                                               const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                                               const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                                               const GGS_propertyMap constinArgument_inObservablePropertyMap,
                                                                                                               const GGS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                                                                               GGS_autolayoutEnabledBindingForGeneration & outArgument_outEnabledBindingGeneration,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outEnabledBindingGeneration.drop () ; // Release 'out' argument
  switch (constinArgument_inEnabledBindingDescriptor.enumValue ()) {
  case GGS_multipleBindingDescriptor::Enumeration::invalid:
    break ;
  case GGS_multipleBindingDescriptor::Enumeration::enum_noBinding:
    {
      outArgument_outEnabledBindingGeneration = GGS_autolayoutEnabledBindingForGeneration::class_func_none (SOURCE_FILE ("auto-layout-view.galgas4", 1356)) ;
    }
    break ;
  case GGS_multipleBindingDescriptor::Enumeration::enum_binding:
    {
      GGS_abstractBooleanMultipleBindingExpressionAST extractedValue_56780_expression_0 ;
      constinArgument_inEnabledBindingDescriptor.getAssociatedValuesFor_binding (extractedValue_56780_expression_0) ;
      GGS_abstractBooleanMultipleBindingExpressionForGeneration var_enableExpression_57064 ;
      GGS_typeKind var_type_57103 ;
      GGS_location var_errorLocation_57130 ;
      callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_56780_expression_0.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_enableExpression_57064, var_type_57103, var_errorLocation_57130, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1358)) ;
      GalgasBool test_0 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_0) {
        test_0 = constinArgument_inHandlesEnabledBinding.operator_not (SOURCE_FILE ("auto-layout-view.galgas4", 1368)).boolEnum () ;
        if (GalgasBool::boolTrue == test_0) {
          GenericArray <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (var_errorLocation_57130, GGS_string ("cet outlet n'accepte pas le binding $enabled"), fixItArray1  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1369)) ;
        }
      }
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = var_type_57103.getter_isBoolType (SOURCE_FILE ("auto-layout-view.galgas4", 1371)).operator_not (SOURCE_FILE ("auto-layout-view.galgas4", 1371)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_errorLocation_57130, GGS_string ("expression is not boolean"), fixItArray3  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1372)) ;
        }
      }
      outArgument_outEnabledBindingGeneration = GGS_autolayoutEnabledBindingForGeneration::class_func_enabled (var_enableExpression_57064  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1374)) ;
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeAutoLayoutRunBinding??handlesRunAction??????!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeAutoLayoutRunBinding_3F__3F_handlesRunAction_3F__3F__3F__3F__3F__3F__21_ (const GGS_runActionDescriptor constinArgument_inRunActionDescriptor,
                                                                                              const GGS_bool constinArgument_inHandlesRunAction,
                                                                                              const GGS_bool constinArgument_inPreferences,
                                                                                              const GGS_lstring constinArgument_inTypeName,
                                                                                              const GGS_actionMap constinArgument_inActionMap,
                                                                                              const GGS_propertyMap constinArgument_inObservablePropertyMap,
                                                                                              const GGS_string constinArgument_inReceiverSwiftTypeName,
                                                                                              const GGS_actionMap constinArgument_inPreferencesActionMap,
                                                                                              GGS_autolayoutRunBindingForGeneration & outArgument_outRunBindingGeneration,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRunBindingGeneration.drop () ; // Release 'out' argument
  switch (constinArgument_inRunActionDescriptor.enumValue ()) {
  case GGS_runActionDescriptor::Enumeration::invalid:
    break ;
  case GGS_runActionDescriptor::Enumeration::enum_noAction:
    {
      outArgument_outRunBindingGeneration = GGS_autolayoutRunBindingForGeneration::class_func_none (SOURCE_FILE ("auto-layout-view.galgas4", 1391)) ;
    }
    break ;
  case GGS_runActionDescriptor::Enumeration::enum_action:
    {
      GGS_lstring extractedValue_58327_target_0 ;
      GGS_lstring extractedValue_58344_action_1 ;
      constinArgument_inRunActionDescriptor.getAssociatedValuesFor_action (extractedValue_58327_target_0, extractedValue_58344_action_1) ;
      GalgasBool test_0 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_0) {
        test_0 = constinArgument_inHandlesRunAction.operator_not (SOURCE_FILE ("auto-layout-view.galgas4", 1393)).boolEnum () ;
        if (GalgasBool::boolTrue == test_0) {
          GenericArray <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1394)).add_operation (GGS_string ("' type does not handle run action"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1394)), fixItArray1  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1394)) ;
          outArgument_outRunBindingGeneration.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_0) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::equal, extractedValue_58327_target_0.readProperty_string ().objectCompare (GGS_string ("self"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            constinArgument_inActionMap.method_searchKey (extractedValue_58344_action_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1397)) ;
            outArgument_outRunBindingGeneration = GGS_autolayoutRunBindingForGeneration::class_func_run (GGS_string ("self"), extractedValue_58344_action_1.readProperty_string (), constinArgument_inReceiverSwiftTypeName  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1398)) ;
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = GGS_bool (ComparisonKind::equal, extractedValue_58327_target_0.readProperty_string ().objectCompare (GGS_string ("prefs"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              constinArgument_inPreferencesActionMap.method_searchKey (extractedValue_58344_action_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1404)) ;
              outArgument_outRunBindingGeneration = GGS_autolayoutRunBindingForGeneration::class_func_run (GGS_string ("g").add_operation (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1406)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1406)).add_operation (GGS_string ("!"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1406)), extractedValue_58344_action_1.readProperty_string (), function_preferencesName (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1408))  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1405)) ;
            }
          }
          if (GalgasBool::boolFalse == test_3) {
            GGS_actionMap var_controllerActionMap_59140 ;
            GGS_propertyKind joker_59112 ; // Joker input parameter
            GGS_bool joker_59169 ; // Joker input parameter
            constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_58327_target_0, joker_59112, var_controllerActionMap_59140, joker_59169, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1411)) ;
            var_controllerActionMap_59140.method_searchKey (extractedValue_58344_action_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1417)) ;
            GGS_string temp_4 ;
            const GalgasBool test_5 = constinArgument_inPreferences.boolEnum () ;
            if (GalgasBool::boolTrue == test_5) {
              temp_4 = GGS_string ("preferences_") ;
            }else if (GalgasBool::boolFalse == test_5) {
              temp_4 = GGS_string::makeEmptyString () ;
            }
            outArgument_outRunBindingGeneration = GGS_autolayoutRunBindingForGeneration::class_func_run (temp_4.add_operation (extractedValue_58327_target_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1419)), extractedValue_58344_action_1.readProperty_string (), GGS_string ("Controller_").add_operation (constinArgument_inReceiverSwiftTypeName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1421)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1421)).add_operation (extractedValue_58327_target_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1421))  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1418)) ;
          }
        }
      }
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeAutoLayoutRegularBinding?prefs???????&'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeAutoLayoutRegularBinding_3F_prefs_3F__3F__3F__3F__3F__3F__3F__26_ (const GGS_bool constinArgument_inPreferences,
                                                                                       const GGS_propertyMap constinArgument_inRootPropertyMap,
                                                                                       const GGS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                                                       const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                       const GGS_propertyMap constinArgument_inBoundModelPropertyMap,
                                                                                       const GGS_lstring constinArgument_inOutletTypeName,
                                                                                       const GGS_regularBindingList constinArgument_inRegularBindingList,
                                                                                       const GGS_string constinArgument_inSelfSwiftName,
                                                                                       GGS_autoLayoutRegularBindingsGenerationList & ioArgument_ioRegularBindingsGenerationList,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_regularBindingList enumerator_60074 (constinArgument_inRegularBindingList) ;
  while (enumerator_60074.hasCurrentObject ()) {
    GGS_outletBindingModelList temp_0 = GGS_outletBindingModelList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1442)) ;
    GGS_outletBindingModelList var_boundModelTypeList_60174 = temp_0 ;
    GGS_boundObjectList temp_1 = GGS_boundObjectList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1443)) ;
    GGS_boundObjectList var_boundModelListForGeneration_60223 = temp_1 ;
    UpEnumerator_observablePropertyList enumerator_60265 (enumerator_60074.current_mObservablePropertyList (HERE)) ;
    while (enumerator_60265.hasCurrentObject ()) {
      GGS_propertyKind var_kind_60539 ;
      GGS_string var_swiftTypeStringForTransientFunctionArgument_60573 ;
      GGS_string var_protocolTypeName_60646 ;
      GGS_string var_defaultValueAsString_60692 ;
      GGS_propertyMap temp_2 ;
      const GalgasBool test_3 = constinArgument_inPreferences.boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        temp_2 = constinArgument_inPreferencesPropertyMap ;
      }else if (GalgasBool::boolFalse == test_3) {
        temp_2 = constinArgument_inBoundModelPropertyMap ;
      }
      extensionMethod_analyzeObservableProperty (enumerator_60265.current_mObservableProperty (HERE), constinArgument_inRootPropertyMap, constinArgument_inSemanticContext, temp_2, var_kind_60539, var_swiftTypeStringForTransientFunctionArgument_60573, var_protocolTypeName_60646, var_defaultValueAsString_60692, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1445)) ;
      switch (var_kind_60539.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_60792__0 ;
          GGS_propertyAccessibility extractedValue_60792__1 ;
          GGS_bool extractedValue_60792__2 ;
          GGS_toManyRelationshipOptionAST extractedValue_60792__3 ;
          var_kind_60539.getAssociatedValuesFor_toMany (extractedValue_60792__0, extractedValue_60792__1, extractedValue_60792__2, extractedValue_60792__3) ;
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_60265.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1457)), GGS_string ("a toMany property cannot be bound"), fixItArray4  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1457)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_60898__0 ;
          GGS_propertyAccessibility extractedValue_60898__1 ;
          GGS_bool extractedValue_60898__2 ;
          GGS_toOneOppositeRelationship extractedValue_60898__3 ;
          GGS_bool extractedValue_60898__4 ;
          var_kind_60539.getAssociatedValuesFor_toOne (extractedValue_60898__0, extractedValue_60898__1, extractedValue_60898__2, extractedValue_60898__3, extractedValue_60898__4) ;
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_60265.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1459)), GGS_string ("a toOne property cannot be bound"), fixItArray5  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1459)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_61013__0 ;
          GGS_bool extractedValue_61013__1 ;
          var_kind_60539.getAssociatedValuesFor_arrayController (extractedValue_61013__0, extractedValue_61013__1) ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_60265.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1461)), GGS_string ("an array controller cannot be bound"), fixItArray6  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1461)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_61134__0 ;
          var_kind_60539.getAssociatedValuesFor_selectionController (extractedValue_61134__0) ;
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_60265.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1463)), GGS_string ("a selection controller cannot be bound"), fixItArray7  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1463)) ;
        }
        break ;
      }
      {
      var_boundModelListForGeneration_60223.setter_append (extensionGetter_modelStringForSelf (enumerator_60265.current_mObservableProperty (HERE), constinArgument_inSelfSwiftName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1465)), var_kind_60539, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1465)) ;
      }
      {
      var_boundModelTypeList_60174.setter_append (var_kind_60539, extensionGetter_location (enumerator_60265.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1466)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1466)) ;
      }
      enumerator_60265.gotoNextObject () ;
    }
    GGS_outletBindingSpecificationModelList temp_8 = GGS_outletBindingSpecificationModelList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1469)) ;
    GGS_outletBindingSpecificationModelList var_outletBindingSpecificationModelList_61499 = temp_8 ;
    GGS_controllerBindingOptionDecoratedList temp_9 = GGS_controllerBindingOptionDecoratedList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1470)) ;
    GGS_controllerBindingOptionDecoratedList var_controllerBindingOptionDecoratedList_61586 = temp_9 ;
    GGS_lstring var_outletTypeName_61636 = constinArgument_inOutletTypeName ;
    GGS_bool var_continues_61678 = GGS_bool (true) ;
    if (constinArgument_inSemanticContext.readProperty_mBindingSpecificationMap ().getter_count (SOURCE_FILE ("auto-layout-view.galgas4", 1473)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1473)).isValid ()) {
      uint32_t variant_61699 = constinArgument_inSemanticContext.readProperty_mBindingSpecificationMap ().getter_count (SOURCE_FILE ("auto-layout-view.galgas4", 1473)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1473)).uintValue () ;
      bool loop_61699 = true ;
      while (loop_61699) {
        loop_61699 = GGS_bool (ComparisonKind::notEqual, var_outletTypeName_61636.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).operator_and (var_continues_61678 COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1473)).isValid () ;
        if (loop_61699) {
          loop_61699 = GGS_bool (ComparisonKind::notEqual, var_outletTypeName_61636.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).operator_and (var_continues_61678 COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1473)).boolValue () ;
        }
        if (loop_61699 && (0 == variant_61699)) {
          loop_61699 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("auto-layout-view.galgas4", 1473)) ;
        }
        if (loop_61699) {
          variant_61699 -= 1 ;
          var_continues_61678 = GGS_bool (false) ;
          GGS_lstring var_superOutletClassName_61941 ;
          GGS_autoLayoutViewBindingSpecificationMap var_bindingMap_61976 ;
          constinArgument_inSemanticContext.readProperty_mAutoLayoutBindingSpecificationMap ().method_searchKey (var_outletTypeName_61636, var_superOutletClassName_61941, var_bindingMap_61976, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1475)) ;
          GalgasBool test_10 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_10) {
            test_10 = var_bindingMap_61976.getter_hasKey (enumerator_60074.current_mBindingName (HERE).readProperty_string () COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1480)).boolEnum () ;
            if (GalgasBool::boolTrue == test_10) {
              var_bindingMap_61976.method_searchKey (enumerator_60074.current_mBindingName (HERE), var_outletBindingSpecificationModelList_61499, var_controllerBindingOptionDecoratedList_61586, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1481)) ;
            }
          }
          if (GalgasBool::boolFalse == test_10) {
            var_continues_61678 = GGS_bool (true) ;
            var_outletTypeName_61636 = var_superOutletClassName_61941 ;
          }
        }
      }
    }
    GalgasBool test_11 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_11) {
      test_11 = var_continues_61678.boolEnum () ;
      if (GalgasBool::boolTrue == test_11) {
        GenericArray <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (enumerator_60074.current_mBindingName (HERE).readProperty_location (), GGS_string ("this binding is not defined"), fixItArray12  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1492)) ;
      }
    }
    if (GalgasBool::boolFalse == test_11) {
      GalgasBool test_13 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_13) {
        test_13 = GGS_bool (ComparisonKind::notEqual, var_boundModelTypeList_60174.getter_count (SOURCE_FILE ("auto-layout-view.galgas4", 1493)).objectCompare (var_outletBindingSpecificationModelList_61499.getter_count (SOURCE_FILE ("auto-layout-view.galgas4", 1493)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_13) {
          GenericArray <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (enumerator_60074.current_mBindingName (HERE).readProperty_location (), var_outletBindingSpecificationModelList_61499.getter_count (SOURCE_FILE ("auto-layout-view.galgas4", 1495)).getter_string (SOURCE_FILE ("auto-layout-view.galgas4", 1495)).add_operation (GGS_string (" model(s) required for this binding (found: "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1495)).add_operation (var_boundModelTypeList_60174.getter_count (SOURCE_FILE ("auto-layout-view.galgas4", 1497)).getter_string (SOURCE_FILE ("auto-layout-view.galgas4", 1496)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1496)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1497)), fixItArray14  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1494)) ;
        }
      }
      if (GalgasBool::boolFalse == test_13) {
        UpEnumerator_outletBindingSpecificationModelList enumerator_62706 (var_outletBindingSpecificationModelList_61499) ;
        UpEnumerator_outletBindingModelList enumerator_62801 (var_boundModelTypeList_60174) ;
        while (enumerator_62706.hasCurrentObject () && enumerator_62801.hasCurrentObject ()) {
          GalgasBool test_15 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_15) {
            GGS_bool test_16 = enumerator_62706.current_mModelShouldBeWritableProperty (HERE) ;
            if (GalgasBool::boolTrue == test_16.boolEnum ()) {
              test_16 = extensionGetter_isTransient (enumerator_62801.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1501)) ;
            }
            test_15 = test_16.boolEnum () ;
            if (GalgasBool::boolTrue == test_15) {
              GenericArray <FixItDescription> fixItArray17 ;
              inCompiler->emitSemanticError (enumerator_62801.current_mErrorLocation (HERE), GGS_string ("the model is transient and the binding requires an writable model"), fixItArray17  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1502)) ;
            }
          }
          GalgasBool test_18 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_18) {
            GGS_bool test_19 = enumerator_62706.current_mModelType (HERE).getter_isEnumType (SOURCE_FILE ("auto-layout-view.galgas4", 1504)) ;
            if (GalgasBool::boolTrue == test_19.boolEnum ()) {
              test_19 = extensionGetter_isEnumType (enumerator_62801.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1504)) ;
            }
            test_18 = test_19.boolEnum () ;
            if (GalgasBool::boolTrue == test_18) {
            }
          }
          if (GalgasBool::boolFalse == test_18) {
            GalgasBool test_20 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_20) {
              test_20 = GGS_bool (ComparisonKind::notEqual, extensionGetter_swiftTypeName (enumerator_62706.current_mModelType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1505)).objectCompare (extensionGetter_swiftTypeName (enumerator_62801.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1505)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_20) {
                GenericArray <FixItDescription> fixItArray21 ;
                inCompiler->emitSemanticError (enumerator_62801.current_mErrorLocation (HERE), GGS_string ("the model type should be ").add_operation (extensionGetter_swiftTypeName (enumerator_62706.current_mModelType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1506)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1506)), fixItArray21  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1506)) ;
              }
            }
          }
          enumerator_62706.gotoNextObject () ;
          enumerator_62801.gotoNextObject () ;
        }
      }
    }
    GGS_string var_bindingOptionString_63377 = GGS_string::makeEmptyString () ;
    GalgasBool test_22 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_22) {
      test_22 = GGS_bool (ComparisonKind::notEqual, var_controllerBindingOptionDecoratedList_61586.getter_count (SOURCE_FILE ("auto-layout-view.galgas4", 1512)).objectCompare (enumerator_60074.current_mBindingOptionList (HERE).getter_count (SOURCE_FILE ("auto-layout-view.galgas4", 1512)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_22) {
        GGS_string var_s_63503 ;
        GalgasBool test_23 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_23) {
          test_23 = GGS_bool (ComparisonKind::equal, var_controllerBindingOptionDecoratedList_61586.getter_count (SOURCE_FILE ("auto-layout-view.galgas4", 1514)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_23) {
            var_s_63503 = GGS_string ("this binding has no option") ;
          }
        }
        if (GalgasBool::boolFalse == test_23) {
          var_s_63503 = GGS_string ("this binding requires the following options:") ;
          UpEnumerator_controllerBindingOptionDecoratedList enumerator_63705 (var_controllerBindingOptionDecoratedList_61586) ;
          while (enumerator_63705.hasCurrentObject ()) {
            var_s_63503.plusAssignOperation(GGS_string ("\n  - ").add_operation (enumerator_63705.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1519)).add_operation (GGS_string (" : "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1519)).add_operation (extensionGetter_swiftTypeName (enumerator_63705.current_mOptionType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1519)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1519)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1519)) ;
            enumerator_63705.gotoNextObject () ;
          }
        }
        GenericArray <FixItDescription> fixItArray24 ;
        inCompiler->emitSemanticError (enumerator_60074.current_mBindingName (HERE).readProperty_location (), var_s_63503, fixItArray24  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1522)) ;
      }
    }
    if (GalgasBool::boolFalse == test_22) {
      UpEnumerator_controllerBindingOptionDecoratedList enumerator_63932 (var_controllerBindingOptionDecoratedList_61586) ;
      UpEnumerator_bindingOptionList enumerator_64019 (enumerator_60074.current_mBindingOptionList (HERE)) ;
      while (enumerator_63932.hasCurrentObject () && enumerator_64019.hasCurrentObject ()) {
        GalgasBool test_25 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_25) {
          test_25 = GGS_bool (ComparisonKind::notEqual, enumerator_63932.current_mOptionName (HERE).readProperty_string ().objectCompare (enumerator_64019.current_mOptionName (HERE).readProperty_string ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_25) {
            GenericArray <FixItDescription> fixItArray26 ;
            inCompiler->emitSemanticError (enumerator_64019.current_mOptionName (HERE).readProperty_location (), GGS_string ("the option name should be '").add_operation (enumerator_63932.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1526)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1526)), fixItArray26  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1526)) ;
          }
        }
        GGS_string var_optionValueAsString_64408 ;
        GGS_typeKindList temp_27 = GGS_typeKindList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1529)) ;
        temp_27.plusPlusAssignOperation (GGS_typeKindList_2E_element::init_21_ (enumerator_63932.current_mOptionType (HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1529)) ;
        callExtensionMethod_analyzeDefaultValueType ((cPtr_abstractDefaultValue *) enumerator_64019.current_mOptionValue (HERE).ptr (), temp_27, constinArgument_inPreferencesPropertyMap, var_optionValueAsString_64408, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1528)) ;
        var_bindingOptionString_63377.plusAssignOperation(GGS_string (", ").add_operation (enumerator_63932.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1533)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1533)).add_operation (var_optionValueAsString_64408, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1533)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1533)) ;
        enumerator_63932.gotoNextObject () ;
        enumerator_64019.gotoNextObject () ;
      }
    }
    {
    ioArgument_ioRegularBindingsGenerationList.setter_append (enumerator_60074.current_mBindingName (HERE).readProperty_string (), var_boundModelListForGeneration_60223, var_bindingOptionString_63377, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1537)) ;
    }
    enumerator_60074.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@astHStackViewInstructionDeclaration generateViewCode'
//--------------------------------------------------------------------------------------------------

void cPtr_astHStackViewInstructionDeclaration::method_generateViewCode (const GGS_autoLayoutViewDeclarationMap constinArgument_inViewDeclarationMap,
                                                                        const GGS_bool constinArgument_inPreferences,
                                                                        const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                        const GGS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                                        const GGS_semanticContext constinArgument_inSemanticContext,
                                                                        const GGS_propertyMap constinArgument_inObservablePropertyMap,
                                                                        const GGS_actionMap constinArgument_inActionMap,
                                                                        const GGS_string constinArgument_inReceiverSwiftTypeName,
                                                                        const GGS_classMap constinArgument_inClassMap,
                                                                        GGS_implicitViewFunctionGenerationList & ioArgument_ioImplicitViewFunctionGenerationList,
                                                                        GGS_autoLayoutConfiguratorMap & ioArgument_ioConfiguratorMap,
                                                                        GGS_autoLayoutOutletMap & ioArgument_ioOutletMap,
                                                                        GGS_abstractViewInstructionGeneration & outArgument_outInstruction,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_actionMap var_preferencesActionMap_65845 ;
  GGS_classKind joker_65835_2 ; // Joker input parameter
  GGS_propertyMap joker_65835_1 ; // Joker input parameter
  GGS_propertyGenerationList joker_65867 ; // Joker input parameter
  constinArgument_inClassMap.method_searchKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1561)), GGS_location::class_func_nowhere (SOURCE_FILE ("auto-layout-view.galgas4", 1561)), inCompiler COMMA_HERE), joker_65835_2, joker_65835_1, var_preferencesActionMap_65845, joker_65867, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1561)) ;
  GGS_autoLayoutViewInstructionGenerationList temp_0 = GGS_autoLayoutViewInstructionGenerationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1562)) ;
  GGS_autoLayoutViewInstructionGenerationList var_instructionList_65918 = temp_0 ;
  GGS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_66453 ;
  const GGS_astHStackViewInstructionDeclaration temp_1 = this ;
  extensionMethod_checkViewFunctionCallList (temp_1.readProperty_mFunctionCallList (), constinArgument_inSemanticContext.readProperty_mAutoLayoutHStackFunctionMap (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, var_preferencesActionMap_65845, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_66453, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1563)) ;
  GGS_autoLayoutMultipleBindingGenerationList temp_2 = GGS_autoLayoutMultipleBindingGenerationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1580)) ;
  GGS_autoLayoutMultipleBindingGenerationList var_multipleBindingGenerationList_66517 = temp_2 ;
  const GGS_astHStackViewInstructionDeclaration temp_3 = this ;
  switch (temp_3.readProperty_mOptionalHiddenBinding ().enumValue ()) {
  case GGS_optionalHiddenBinding::Enumeration::invalid:
    break ;
  case GGS_optionalHiddenBinding::Enumeration::enum_noBinding:
    break ;
  case GGS_optionalHiddenBinding::Enumeration::enum_binding:
    {
      GGS_abstractBooleanMultipleBindingExpressionAST extractedValue_66625_hiddenBindingExpression_0 ;
      temp_3.readProperty_mOptionalHiddenBinding ().getAssociatedValuesFor_binding (extractedValue_66625_hiddenBindingExpression_0) ;
      GGS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_66935 ;
      GGS_typeKind var_type_66974 ;
      GGS_location var_errorLocation_67001 ;
      callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_66625_hiddenBindingExpression_0.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_hiddenExpression_66935, var_type_66974, var_errorLocation_67001, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1584)) ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = var_type_66974.getter_isBoolType (SOURCE_FILE ("auto-layout-view.galgas4", 1594)).operator_not (SOURCE_FILE ("auto-layout-view.galgas4", 1594)).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (var_errorLocation_67001, GGS_string ("expression is not boolean"), fixItArray5  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1595)) ;
        }
      }
      {
      var_multipleBindingGenerationList_66517.setter_append (GGS_string ("hidden"), var_hiddenExpression_66935, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1597)) ;
      }
    }
    break ;
  }
  const GGS_astHStackViewInstructionDeclaration temp_6 = this ;
  UpEnumerator_astViewInstructionList enumerator_67224 (temp_6.readProperty_mInstructionList ()) ;
  while (enumerator_67224.hasCurrentObject ()) {
    GGS_abstractViewInstructionGeneration var_generatedInstruction_67651 ;
    callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) enumerator_67224.current_mInstruction (HERE).ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_generatedInstruction_67651, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1603)) ;
    {
    var_instructionList_65918.setter_append (var_generatedInstruction_67651, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1618)) ;
    }
    enumerator_67224.gotoNextObject () ;
  }
  const GGS_astHStackViewInstructionDeclaration temp_7 = this ;
  outArgument_outInstruction = GGS_hStackViewInstructionGeneration::init_21__21__21__21_ (var_funcCallList_66453, var_instructionList_65918, var_multipleBindingGenerationList_66517, temp_7.readProperty_mAstNewStackViewDeclarationList (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@astVStackViewInstructionDeclaration generateViewCode'
//--------------------------------------------------------------------------------------------------

void cPtr_astVStackViewInstructionDeclaration::method_generateViewCode (const GGS_autoLayoutViewDeclarationMap constinArgument_inViewDeclarationMap,
                                                                        const GGS_bool constinArgument_inPreferences,
                                                                        const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                        const GGS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                                        const GGS_semanticContext constinArgument_inSemanticContext,
                                                                        const GGS_propertyMap constinArgument_inObservablePropertyMap,
                                                                        const GGS_actionMap constinArgument_inActionMap,
                                                                        const GGS_string constinArgument_inReceiverSwiftTypeName,
                                                                        const GGS_classMap constinArgument_inClassMap,
                                                                        GGS_implicitViewFunctionGenerationList & ioArgument_ioImplicitViewFunctionGenerationList,
                                                                        GGS_autoLayoutConfiguratorMap & ioArgument_ioConfiguratorMap,
                                                                        GGS_autoLayoutOutletMap & ioArgument_ioOutletMap,
                                                                        GGS_abstractViewInstructionGeneration & outArgument_outInstruction,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_actionMap var_preferencesActionMap_69028 ;
  GGS_classKind joker_69018_2 ; // Joker input parameter
  GGS_propertyMap joker_69018_1 ; // Joker input parameter
  GGS_propertyGenerationList joker_69050 ; // Joker input parameter
  constinArgument_inClassMap.method_searchKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1644)), GGS_location::class_func_nowhere (SOURCE_FILE ("auto-layout-view.galgas4", 1644)), inCompiler COMMA_HERE), joker_69018_2, joker_69018_1, var_preferencesActionMap_69028, joker_69050, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1644)) ;
  GGS_autoLayoutViewInstructionGenerationList temp_0 = GGS_autoLayoutViewInstructionGenerationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1645)) ;
  GGS_autoLayoutViewInstructionGenerationList var_instructionList_69101 = temp_0 ;
  GGS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_69636 ;
  const GGS_astVStackViewInstructionDeclaration temp_1 = this ;
  extensionMethod_checkViewFunctionCallList (temp_1.readProperty_mFunctionCallList (), constinArgument_inSemanticContext.readProperty_mAutoLayoutVStackFunctionMap (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, var_preferencesActionMap_69028, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_69636, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1646)) ;
  GGS_autoLayoutMultipleBindingGenerationList temp_2 = GGS_autoLayoutMultipleBindingGenerationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1663)) ;
  GGS_autoLayoutMultipleBindingGenerationList var_multipleBindingGenerationList_69700 = temp_2 ;
  const GGS_astVStackViewInstructionDeclaration temp_3 = this ;
  switch (temp_3.readProperty_mOptionalHiddenBinding ().enumValue ()) {
  case GGS_optionalHiddenBinding::Enumeration::invalid:
    break ;
  case GGS_optionalHiddenBinding::Enumeration::enum_noBinding:
    break ;
  case GGS_optionalHiddenBinding::Enumeration::enum_binding:
    {
      GGS_abstractBooleanMultipleBindingExpressionAST extractedValue_69808_hiddenBindingExpression_0 ;
      temp_3.readProperty_mOptionalHiddenBinding ().getAssociatedValuesFor_binding (extractedValue_69808_hiddenBindingExpression_0) ;
      GGS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_70118 ;
      GGS_typeKind var_type_70157 ;
      GGS_location var_errorLocation_70184 ;
      callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_69808_hiddenBindingExpression_0.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_hiddenExpression_70118, var_type_70157, var_errorLocation_70184, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1667)) ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = var_type_70157.getter_isBoolType (SOURCE_FILE ("auto-layout-view.galgas4", 1677)).operator_not (SOURCE_FILE ("auto-layout-view.galgas4", 1677)).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (var_errorLocation_70184, GGS_string ("expression is not boolean"), fixItArray5  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1678)) ;
        }
      }
      {
      var_multipleBindingGenerationList_69700.setter_append (GGS_string ("hidden"), var_hiddenExpression_70118, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1680)) ;
      }
    }
    break ;
  }
  const GGS_astVStackViewInstructionDeclaration temp_6 = this ;
  UpEnumerator_astViewInstructionList enumerator_70387 (temp_6.readProperty_mInstructionList ()) ;
  while (enumerator_70387.hasCurrentObject ()) {
    GGS_abstractViewInstructionGeneration var_generatedInstruction_70815 ;
    callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) enumerator_70387.current_mInstruction (HERE).ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_generatedInstruction_70815, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1683)) ;
    {
    var_instructionList_69101.setter_append (var_generatedInstruction_70815, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1698)) ;
    }
    enumerator_70387.gotoNextObject () ;
  }
  const GGS_astVStackViewInstructionDeclaration temp_7 = this ;
  const GGS_astVStackViewInstructionDeclaration temp_8 = this ;
  const GGS_astVStackViewInstructionDeclaration temp_9 = this ;
  outArgument_outInstruction = GGS_vStackViewInstructionGeneration::init_21__21__21__21__21__21_ (temp_7.readProperty_mHasVerticalScroller (), temp_8.readProperty_mConfiguratorName (), var_funcCallList_69636, var_instructionList_69101, var_multipleBindingGenerationList_69700, temp_9.readProperty_mAstNewStackViewDeclarationList (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutSeparatorInstructionGeneration generateViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutSeparatorInstructionGeneration::getter_generateViewInstruction (const GGS_bool /* constinArgument_inPreferences */,
                                                                                          const GGS_string constinArgument_inName,
                                                                                          const GGS_string constinArgument_inIndentation,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_autoLayoutSeparatorInstructionGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_horizontal ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1790)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1790)).add_operation (GGS_string (" = AutoLayoutHorizontalStackView.VerticalSeparator ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1790)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1792)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1792)).add_operation (GGS_string (" = AutoLayoutVerticalStackView.HorizontalSeparator ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1792)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutSeparatorInstructionGeneration generateAppendViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutSeparatorInstructionGeneration::getter_generateAppendViewInstruction (const GGS_bool /* constinArgument_inPreferences */,
                                                                                                const GGS_string constinArgument_inReceiverViewName,
                                                                                                const GGS_string constinArgument_inIndentation,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("_ = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1799)).add_operation (constinArgument_inReceiverViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1799)).add_operation (GGS_string (".appendSeparator ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1799)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutGutterInstructionGeneration generateViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutGutterInstructionGeneration::getter_generateViewInstruction (const GGS_bool /* constinArgument_inPreferences */,
                                                                                       const GGS_string constinArgument_inName,
                                                                                       const GGS_string constinArgument_inIndentation,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_autoLayoutGutterInstructionGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_horizontal ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1814)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1814)).add_operation (GGS_string (" = AutoLayoutHorizontalStackView.GutterSeparator ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1814)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1816)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1816)).add_operation (GGS_string (" = AutoLayoutVerticalStackView.GutterSeparator ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1816)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutGutterInstructionGeneration generateAppendViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutGutterInstructionGeneration::getter_generateAppendViewInstruction (const GGS_bool /* constinArgument_inPreferences */,
                                                                                             const GGS_string constinArgument_inReceiverViewName,
                                                                                             const GGS_string constinArgument_inIndentation,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("_ = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1823)).add_operation (constinArgument_inReceiverViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1823)).add_operation (GGS_string (".appendGutter ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1823)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedHorizontalViewGeneration generateViewBuilder'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_computedHorizontalViewGeneration::getter_generateViewBuilder (const GGS_bool constinArgument_inPreferences,
                                                                              const GGS_string constinArgument_inViewName,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  final func ").add_operation (constinArgument_inViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1934)).add_operation (GGS_string (" () -> AutoLayoutHorizontalStackView {\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1934)) ;
  result_result.plusAssignOperation(GGS_string ("    let hStackView = AutoLayoutHorizontalStackView ()\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1935)) ;
  const GGS_computedHorizontalViewGeneration temp_0 = this ;
  extensionMethod_generate (temp_0.readProperty_mFuncCallList (), GGS_string ("    "), result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1936)) ;
  const GGS_computedHorizontalViewGeneration temp_1 = this ;
  UpEnumerator_astNewStackViewDeclarationList enumerator_81313 (temp_1.readProperty_mNewStackViewDeclarationList ()) ;
  while (enumerator_81313.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string ("    let ").add_operation (enumerator_81313.current_mInstanciedStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1938)).add_operation (GGS_string (" = self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1938)).add_operation (enumerator_81313.current_mTypeStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1938)).add_operation (GGS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1938)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1938)) ;
    enumerator_81313.gotoNextObject () ;
  }
  const GGS_computedHorizontalViewGeneration temp_2 = this ;
  UpEnumerator_autoLayoutViewInstructionGenerationList enumerator_81438 (temp_2.readProperty_mInstructionList ()) ;
  while (enumerator_81438.hasCurrentObject ()) {
    result_result.plusAssignOperation(callExtensionGetter_generateAppendViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_81438.current_mInstruction (HERE).ptr (), constinArgument_inPreferences, GGS_string ("hStackView"), GGS_string ("    "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1941)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1941)) ;
    enumerator_81438.gotoNextObject () ;
  }
  result_result.plusAssignOperation(GGS_string ("    return hStackView\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1943)) ;
  result_result.plusAssignOperation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1944)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedVerticalViewGeneration generateViewBuilder'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_computedVerticalViewGeneration::getter_generateViewBuilder (const GGS_bool constinArgument_inPreferences,
                                                                            const GGS_string constinArgument_inViewName,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  final func ").add_operation (constinArgument_inViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1951)).add_operation (GGS_string (" () -> AutoLayoutVerticalStackView {\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1951)) ;
  result_result.plusAssignOperation(GGS_string ("    let vStackView = "), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1952)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_computedVerticalViewGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mHasVerticalScroller ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result.plusAssignOperation(GGS_string ("AutoLayoutVerticalStackViewWithScrollBar"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1954)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result.plusAssignOperation(GGS_string ("AutoLayoutVerticalStackView"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1956)) ;
  }
  result_result.plusAssignOperation(GGS_string (" ()\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1958)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_computedVerticalViewGeneration temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::notEqual, temp_3.readProperty_mConfiguratorName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_computedVerticalViewGeneration temp_4 = this ;
      result_result.plusAssignOperation(GGS_string ("    self.configure_").add_operation (temp_4.readProperty_mConfiguratorName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1960)).add_operation (GGS_string (" (vStackView)\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1960)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1960)) ;
    }
  }
  const GGS_computedVerticalViewGeneration temp_5 = this ;
  extensionMethod_generate (temp_5.readProperty_mFuncCallList (), GGS_string ("    "), result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1962)) ;
  const GGS_computedVerticalViewGeneration temp_6 = this ;
  UpEnumerator_astNewStackViewDeclarationList enumerator_82471 (temp_6.readProperty_mNewStackViewDeclarationList ()) ;
  while (enumerator_82471.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string ("    let ").add_operation (enumerator_82471.current_mInstanciedStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1964)).add_operation (GGS_string (" = self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1964)).add_operation (enumerator_82471.current_mTypeStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1964)).add_operation (GGS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1964)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1964)) ;
    enumerator_82471.gotoNextObject () ;
  }
  const GGS_computedVerticalViewGeneration temp_7 = this ;
  UpEnumerator_autoLayoutViewInstructionGenerationList enumerator_82596 (temp_7.readProperty_mInstructionList ()) ;
  while (enumerator_82596.hasCurrentObject ()) {
    result_result.plusAssignOperation(callExtensionGetter_generateAppendViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_82596.current_mInstruction (HERE).ptr (), constinArgument_inPreferences, GGS_string ("vStackView"), GGS_string ("    "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1967)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1967)) ;
    enumerator_82596.gotoNextObject () ;
  }
  result_result.plusAssignOperation(GGS_string ("    return vStackView\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1969)) ;
  result_result.plusAssignOperation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1970)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutSpaceViewInstructionGeneration generateViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutSpaceViewInstructionGeneration::getter_generateViewInstruction (const GGS_bool /* constinArgument_inPreferences */,
                                                                                          const GGS_string constinArgument_inName,
                                                                                          const GGS_string constinArgument_inIndentation,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1979)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1979)).add_operation (GGS_string (" = AutoLayoutFlexibleSpace ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1979)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutSpaceViewInstructionGeneration generateAppendViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutSpaceViewInstructionGeneration::getter_generateAppendViewInstruction (const GGS_bool /* constinArgument_inPreferences */,
                                                                                                const GGS_string constinArgument_inReceiverViewName,
                                                                                                const GGS_string constinArgument_inIndentation,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("_ = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1988)).add_operation (constinArgument_inReceiverViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1988)).add_operation (GGS_string (".appendFlexibleSpace ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1988)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutDividerInstructionGeneration generateViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutDividerInstructionGeneration::getter_generateViewInstruction (const GGS_bool /* constinArgument_inPreferences */,
                                                                                        const GGS_string constinArgument_inName,
                                                                                        const GGS_string constinArgument_inIndentation,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_autoLayoutDividerInstructionGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_horizontal ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1998)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1998)).add_operation (GGS_string (" = AutoLayoutHorizontalStackView.VerticalDivider ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 1998)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2000)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2000)).add_operation (GGS_string (" = AutoLayoutVerticalStackView.HorizontalDivider ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2000)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutDividerInstructionGeneration generateAppendViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutDividerInstructionGeneration::getter_generateAppendViewInstruction (const GGS_bool /* constinArgument_inPreferences */,
                                                                                              const GGS_string constinArgument_inReceiverViewName,
                                                                                              const GGS_string constinArgument_inIndentation,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("_ = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2007)).add_operation (constinArgument_inReceiverViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2007)).add_operation (GGS_string (".appendDivider ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2007)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutLocalViewInstructionGeneration generateViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutLocalViewInstructionGeneration::getter_generateViewInstruction (const GGS_bool /* constinArgument_inPreferences */,
                                                                                          const GGS_string constinArgument_inName,
                                                                                          const GGS_string constinArgument_inIndentation,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_autoLayoutLocalViewInstructionGeneration temp_0 = this ;
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2016)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2016)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2016)).add_operation (temp_0.readProperty_mLocalView (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2016)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2016)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutLocalViewInstructionGeneration generateAppendViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutLocalViewInstructionGeneration::getter_generateAppendViewInstruction (const GGS_bool /* constinArgument_inPreferences */,
                                                                                                const GGS_string constinArgument_inReceiverViewName,
                                                                                                const GGS_string constinArgument_inIndentation,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_autoLayoutLocalViewInstructionGeneration temp_0 = this ;
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("_ = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2022)).add_operation (constinArgument_inReceiverViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2022)).add_operation (GGS_string (".appendView ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2022)).add_operation (temp_0.readProperty_mLocalView (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2022)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2022)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutComputedViewInstructionGeneration generateViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutComputedViewInstructionGeneration::getter_generateViewInstruction (const GGS_bool constinArgument_inPreferences,
                                                                                             const GGS_string constinArgument_inName,
                                                                                             const GGS_string constinArgument_inIndentation,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_autoLayoutComputedViewInstructionGeneration temp_0 = this ;
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2031)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2031)).add_operation (GGS_string (" = AutoLayout"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2031)).add_operation (temp_0.readProperty_mAutoLayoutViewClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2031)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2031)) ;
  const GGS_autoLayoutComputedViewInstructionGeneration temp_1 = this ;
  UpEnumerator_autoLayoutViewInstructionGenerationParameterList enumerator_86181 (temp_1.readProperty_mParameterList ()) ;
  while (enumerator_86181.hasCurrentObject ()) {
    result_result.plusAssignOperation(enumerator_86181.current (HERE).readProperty_mParameterName ().add_operation (GGS_string (": "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2034)).add_operation (enumerator_86181.current (HERE).readProperty_mParameterValue (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2034)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2034)) ;
    enumerator_86181.gotoNextObject () ;
    if (enumerator_86181.hasCurrentObject ()) {
      result_result.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2036)) ;
    }
  }
  result_result.plusAssignOperation(GGS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2038)) ;
  const GGS_autoLayoutComputedViewInstructionGeneration temp_2 = this ;
  extensionMethod_generate (temp_2.readProperty_mFunctionCallList (), constinArgument_inIndentation, result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2039)) ;
  const GGS_autoLayoutComputedViewInstructionGeneration temp_3 = this ;
  UpEnumerator_autoLayoutRegularBindingsGenerationList enumerator_86425 (temp_3.readProperty_mRegularBindingsGenerationList ()) ;
  while (enumerator_86425.hasCurrentObject ()) {
    result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2041)).add_operation (enumerator_86425.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2041)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2041)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2041)) ;
    UpEnumerator_boundObjectList enumerator_86575 (enumerator_86425.current_mBoundObjectList (HERE)) ;
    while (enumerator_86575.hasCurrentObject ()) {
      result_result.plusAssignOperation(enumerator_86575.current_mBoundObjectString (HERE), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2043)) ;
      enumerator_86575.gotoNextObject () ;
      if (enumerator_86575.hasCurrentObject ()) {
        result_result.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2044)) ;
      }
    }
    result_result.plusAssignOperation(enumerator_86425.current_mBindingOptionsString (HERE).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2046)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2046)) ;
    enumerator_86425.gotoNextObject () ;
  }
  const GGS_autoLayoutComputedViewInstructionGeneration temp_4 = this ;
  UpEnumerator_autoLayoutMultipleBindingGenerationList enumerator_86736 (temp_4.readProperty_mMultipleBindingGenerationList ()) ;
  while (enumerator_86736.hasCurrentObject ()) {
    result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2049)).add_operation (enumerator_86736.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2049)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2049)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_86736.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2049)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2049)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2049)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2049)) ;
    enumerator_86736.gotoNextObject () ;
  }
  const GGS_autoLayoutComputedViewInstructionGeneration temp_5 = this ;
  switch (temp_5.readProperty_mRunBindingGeneration ().enumValue ()) {
  case GGS_autolayoutRunBindingForGeneration::Enumeration::invalid:
    break ;
  case GGS_autolayoutRunBindingForGeneration::Enumeration::enum_none:
    break ;
  case GGS_autolayoutRunBindingForGeneration::Enumeration::enum_run:
    {
      GGS_string extractedValue_86953_targetName_0 ;
      GGS_string extractedValue_86965_actionName_1 ;
      GGS_string extractedValue_86977_targetTypeName_2 ;
      temp_5.readProperty_mRunBindingGeneration ().getAssociatedValuesFor_run (extractedValue_86953_targetName_0, extractedValue_86965_actionName_1, extractedValue_86977_targetTypeName_2) ;
      result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("  .bind_run (\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2054)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2054)) ;
      result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("    target: "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2055)).add_operation (extractedValue_86953_targetName_0, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2055)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2055)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2055)) ;
      result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("    selector: #selector ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2056)).add_operation (extractedValue_86977_targetTypeName_2, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2056)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2056)).add_operation (extractedValue_86965_actionName_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2056)).add_operation (GGS_string (" (_:))\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2056)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2056)) ;
      result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("  )\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2057)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2057)) ;
    }
    break ;
  }
  const GGS_autoLayoutComputedViewInstructionGeneration temp_6 = this ;
  switch (temp_6.readProperty_mEBViewGraphicControllerBindingGeneration ().enumValue ()) {
  case GGS_autoLayoutViewGraphicControllerBindingGeneration::Enumeration::invalid:
    break ;
  case GGS_autoLayoutViewGraphicControllerBindingGeneration::Enumeration::enum_none:
    break ;
  case GGS_autoLayoutViewGraphicControllerBindingGeneration::Enumeration::enum_binding:
    {
      GGS_string extractedValue_87346_controllerName_0 ;
      temp_6.readProperty_mEBViewGraphicControllerBindingGeneration ().getAssociatedValuesFor_binding (extractedValue_87346_controllerName_0) ;
      result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("  .bind_graphic_controller (self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2062)).add_operation (extractedValue_87346_controllerName_0, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2062)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2062)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2062)) ;
    }
    break ;
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    const GGS_autoLayoutComputedViewInstructionGeneration temp_8 = this ;
    test_7 = GGS_bool (ComparisonKind::notEqual, temp_8.readProperty_mTableViewBindingGeneration ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      GGS_string temp_9 ;
      const GalgasBool test_10 = constinArgument_inPreferences.boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        temp_9 = GGS_string ("preferences_") ;
      }else if (GalgasBool::boolFalse == test_10) {
        temp_9 = GGS_string ("self.") ;
      }
      GGS_string var_prefix_87518 = temp_9 ;
      const GGS_autoLayoutComputedViewInstructionGeneration temp_11 = this ;
      result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (var_prefix_87518, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2066)).add_operation (temp_11.readProperty_mTableViewBindingGeneration (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2066)).add_operation (GGS_string (".bind_tableView ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2066)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2066)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2066)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2066)) ;
    }
  }
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    const GGS_autoLayoutComputedViewInstructionGeneration temp_13 = this ;
    test_12 = GGS_bool (ComparisonKind::notEqual, temp_13.readProperty_mOutletName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      GalgasBool test_14 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_14) {
        const GGS_autoLayoutComputedViewInstructionGeneration temp_15 = this ;
        test_14 = temp_15.readProperty_mOutletIsArray ().boolEnum () ;
        if (GalgasBool::boolTrue == test_14) {
          const GGS_autoLayoutComputedViewInstructionGeneration temp_16 = this ;
          result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2070)).add_operation (temp_16.readProperty_mOutletName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2070)).add_operation (GGS_string (".append ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2070)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2070)).add_operation (GGS_string (") // Outlet Array\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2070)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2070)) ;
        }
      }
      if (GalgasBool::boolFalse == test_14) {
        const GGS_autoLayoutComputedViewInstructionGeneration temp_17 = this ;
        result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2072)).add_operation (temp_17.readProperty_mOutletName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2072)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2072)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2072)).add_operation (GGS_string (" // Outlet\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2072)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2072)) ;
      }
    }
  }
  GalgasBool test_18 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_18) {
    const GGS_autoLayoutComputedViewInstructionGeneration temp_19 = this ;
    test_18 = GGS_bool (ComparisonKind::notEqual, temp_19.readProperty_mConfiguratorName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_18) {
      const GGS_autoLayoutComputedViewInstructionGeneration temp_20 = this ;
      result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("self.configure_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2076)).add_operation (temp_20.readProperty_mConfiguratorName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2076)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2076)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2076)).add_operation (GGS_string (") // Configurator\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2076)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2076)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutComputedViewInstructionGeneration generateAppendViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutComputedViewInstructionGeneration::getter_generateAppendViewInstruction (const GGS_bool constinArgument_inPreferences,
                                                                                                   const GGS_string constinArgument_inReceiverViewName,
                                                                                                   const GGS_string constinArgument_inIndentation,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("do{\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2085)) ;
  GGS_string var_indentation_88589 = constinArgument_inIndentation.add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2086)) ;
  GGS_string var_name_88630 = constinArgument_inReceiverViewName.add_operation (GGS_string ("_view"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2087)) ;
  const GGS_autoLayoutComputedViewInstructionGeneration temp_0 = this ;
  result_result.plusAssignOperation(var_indentation_88589.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2088)).add_operation (var_name_88630, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2088)).add_operation (GGS_string (" = AutoLayout"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2088)).add_operation (temp_0.readProperty_mAutoLayoutViewClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2088)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2088)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2088)) ;
  const GGS_autoLayoutComputedViewInstructionGeneration temp_1 = this ;
  UpEnumerator_autoLayoutViewInstructionGenerationParameterList enumerator_88794 (temp_1.readProperty_mParameterList ()) ;
  while (enumerator_88794.hasCurrentObject ()) {
    result_result.plusAssignOperation(enumerator_88794.current (HERE).readProperty_mParameterName ().add_operation (GGS_string (": "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2091)).add_operation (enumerator_88794.current (HERE).readProperty_mParameterValue (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2091)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2091)) ;
    enumerator_88794.gotoNextObject () ;
    if (enumerator_88794.hasCurrentObject ()) {
      result_result.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2093)) ;
    }
  }
  result_result.plusAssignOperation(GGS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2095)) ;
  const GGS_autoLayoutComputedViewInstructionGeneration temp_2 = this ;
  extensionMethod_generate (temp_2.readProperty_mFunctionCallList (), var_indentation_88589, result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2096)) ;
  const GGS_autoLayoutComputedViewInstructionGeneration temp_3 = this ;
  UpEnumerator_autoLayoutRegularBindingsGenerationList enumerator_89036 (temp_3.readProperty_mRegularBindingsGenerationList ()) ;
  while (enumerator_89036.hasCurrentObject ()) {
    result_result.plusAssignOperation(var_indentation_88589.add_operation (GGS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2098)).add_operation (enumerator_89036.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2098)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2098)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2098)) ;
    UpEnumerator_boundObjectList enumerator_89184 (enumerator_89036.current_mBoundObjectList (HERE)) ;
    while (enumerator_89184.hasCurrentObject ()) {
      result_result.plusAssignOperation(enumerator_89184.current_mBoundObjectString (HERE), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2100)) ;
      enumerator_89184.gotoNextObject () ;
      if (enumerator_89184.hasCurrentObject ()) {
        result_result.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2101)) ;
      }
    }
    result_result.plusAssignOperation(enumerator_89036.current_mBindingOptionsString (HERE).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2103)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2103)) ;
    enumerator_89036.gotoNextObject () ;
  }
  const GGS_autoLayoutComputedViewInstructionGeneration temp_4 = this ;
  UpEnumerator_autoLayoutMultipleBindingGenerationList enumerator_89345 (temp_4.readProperty_mMultipleBindingGenerationList ()) ;
  while (enumerator_89345.hasCurrentObject ()) {
    result_result.plusAssignOperation(var_indentation_88589.add_operation (GGS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2106)).add_operation (enumerator_89345.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2106)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2106)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_89345.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2106)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2106)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2106)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2106)) ;
    enumerator_89345.gotoNextObject () ;
  }
  const GGS_autoLayoutComputedViewInstructionGeneration temp_5 = this ;
  switch (temp_5.readProperty_mRunBindingGeneration ().enumValue ()) {
  case GGS_autolayoutRunBindingForGeneration::Enumeration::invalid:
    break ;
  case GGS_autolayoutRunBindingForGeneration::Enumeration::enum_none:
    break ;
  case GGS_autolayoutRunBindingForGeneration::Enumeration::enum_run:
    {
      GGS_string extractedValue_89560_targetName_0 ;
      GGS_string extractedValue_89572_actionName_1 ;
      GGS_string extractedValue_89584_targetTypeName_2 ;
      temp_5.readProperty_mRunBindingGeneration ().getAssociatedValuesFor_run (extractedValue_89560_targetName_0, extractedValue_89572_actionName_1, extractedValue_89584_targetTypeName_2) ;
      result_result.plusAssignOperation(var_indentation_88589.add_operation (GGS_string ("  .bind_run (\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2111)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2111)) ;
      result_result.plusAssignOperation(var_indentation_88589.add_operation (GGS_string ("    target: "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2112)).add_operation (extractedValue_89560_targetName_0, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2112)).add_operation (GGS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2112)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2112)) ;
      result_result.plusAssignOperation(var_indentation_88589.add_operation (GGS_string ("    selector: #selector ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2113)).add_operation (extractedValue_89584_targetTypeName_2, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2113)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2113)).add_operation (extractedValue_89572_actionName_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2113)).add_operation (GGS_string (" (_:))\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2113)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2113)) ;
      result_result.plusAssignOperation(var_indentation_88589.add_operation (GGS_string ("  )\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2114)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2114)) ;
    }
    break ;
  }
  const GGS_autoLayoutComputedViewInstructionGeneration temp_6 = this ;
  switch (temp_6.readProperty_mEBViewGraphicControllerBindingGeneration ().enumValue ()) {
  case GGS_autoLayoutViewGraphicControllerBindingGeneration::Enumeration::invalid:
    break ;
  case GGS_autoLayoutViewGraphicControllerBindingGeneration::Enumeration::enum_none:
    break ;
  case GGS_autoLayoutViewGraphicControllerBindingGeneration::Enumeration::enum_binding:
    {
      GGS_string extractedValue_89945_controllerName_0 ;
      temp_6.readProperty_mEBViewGraphicControllerBindingGeneration ().getAssociatedValuesFor_binding (extractedValue_89945_controllerName_0) ;
      result_result.plusAssignOperation(var_indentation_88589.add_operation (GGS_string ("  .bind_graphic_controller (self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2119)).add_operation (extractedValue_89945_controllerName_0, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2119)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2119)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2119)) ;
    }
    break ;
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    const GGS_autoLayoutComputedViewInstructionGeneration temp_8 = this ;
    test_7 = GGS_bool (ComparisonKind::notEqual, temp_8.readProperty_mTableViewBindingGeneration ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      GGS_string temp_9 ;
      const GalgasBool test_10 = constinArgument_inPreferences.boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        temp_9 = GGS_string ("preferences_") ;
      }else if (GalgasBool::boolFalse == test_10) {
        temp_9 = GGS_string ("self.") ;
      }
      GGS_string var_prefix_90115 = temp_9 ;
      const GGS_autoLayoutComputedViewInstructionGeneration temp_11 = this ;
      result_result.plusAssignOperation(var_indentation_88589.add_operation (var_prefix_90115, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2123)).add_operation (temp_11.readProperty_mTableViewBindingGeneration (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2123)).add_operation (GGS_string (".bind_tableView ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2123)).add_operation (var_name_88630, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2123)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2123)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2123)) ;
    }
  }
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    const GGS_autoLayoutComputedViewInstructionGeneration temp_13 = this ;
    test_12 = GGS_bool (ComparisonKind::notEqual, temp_13.readProperty_mOutletName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      GalgasBool test_14 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_14) {
        const GGS_autoLayoutComputedViewInstructionGeneration temp_15 = this ;
        test_14 = temp_15.readProperty_mOutletIsArray ().boolEnum () ;
        if (GalgasBool::boolTrue == test_14) {
          const GGS_autoLayoutComputedViewInstructionGeneration temp_16 = this ;
          result_result.plusAssignOperation(var_indentation_88589.add_operation (GGS_string ("self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2127)).add_operation (temp_16.readProperty_mOutletName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2127)).add_operation (GGS_string (".append ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2127)).add_operation (var_name_88630, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2127)).add_operation (GGS_string (") // Outlet Array\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2127)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2127)) ;
        }
      }
      if (GalgasBool::boolFalse == test_14) {
        const GGS_autoLayoutComputedViewInstructionGeneration temp_17 = this ;
        result_result.plusAssignOperation(var_indentation_88589.add_operation (GGS_string ("self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2129)).add_operation (temp_17.readProperty_mOutletName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2129)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2129)).add_operation (var_name_88630, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2129)).add_operation (GGS_string (" // Outlet\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2129)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2129)) ;
      }
    }
  }
  GalgasBool test_18 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_18) {
    const GGS_autoLayoutComputedViewInstructionGeneration temp_19 = this ;
    test_18 = GGS_bool (ComparisonKind::notEqual, temp_19.readProperty_mConfiguratorName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_18) {
      const GGS_autoLayoutComputedViewInstructionGeneration temp_20 = this ;
      result_result.plusAssignOperation(var_indentation_88589.add_operation (GGS_string ("self.configure_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2133)).add_operation (temp_20.readProperty_mConfiguratorName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2133)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2133)).add_operation (var_name_88630, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2133)).add_operation (GGS_string (") // Configurator\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2133)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2133)) ;
    }
  }
  result_result.plusAssignOperation(var_indentation_88589.add_operation (GGS_string ("_ = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2135)).add_operation (constinArgument_inReceiverViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2135)).add_operation (GGS_string (" .appendView ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2135)).add_operation (var_name_88630, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2135)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2135)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2135)) ;
  result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2136)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2136)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@hStackViewInstructionGeneration generateViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_hStackViewInstructionGeneration::getter_generateViewInstruction (const GGS_bool constinArgument_inPreferences,
                                                                                 const GGS_string constinArgument_inName,
                                                                                 const GGS_string constinArgument_inIndentation,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2145)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2145)).add_operation (GGS_string (" = AutoLayoutHorizontalStackView ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2145)) ;
  const GGS_hStackViewInstructionGeneration temp_0 = this ;
  extensionMethod_generate (temp_0.readProperty_mFuncCallList (), constinArgument_inIndentation, result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2146)) ;
  const GGS_hStackViewInstructionGeneration temp_1 = this ;
  UpEnumerator_autoLayoutMultipleBindingGenerationList enumerator_91354 (temp_1.readProperty_mMultipleBindingGenerationList ()) ;
  while (enumerator_91354.hasCurrentObject ()) {
    result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2148)).add_operation (enumerator_91354.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2148)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2148)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_91354.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2148)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2148)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2148)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2148)) ;
    enumerator_91354.gotoNextObject () ;
  }
  const GGS_hStackViewInstructionGeneration temp_2 = this ;
  UpEnumerator_astNewStackViewDeclarationList enumerator_91526 (temp_2.readProperty_mNewStackViewDeclarationList ()) ;
  while (enumerator_91526.hasCurrentObject ()) {
    result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2151)).add_operation (enumerator_91526.current_mInstanciedStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2151)).add_operation (GGS_string (" = self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2151)).add_operation (enumerator_91526.current_mTypeStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2151)).add_operation (GGS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2151)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2151)) ;
    enumerator_91526.gotoNextObject () ;
  }
  const GGS_hStackViewInstructionGeneration temp_3 = this ;
  UpEnumerator_autoLayoutViewInstructionGenerationList enumerator_91663 (temp_3.readProperty_mInstructionList ()) ;
  while (enumerator_91663.hasCurrentObject ()) {
    result_result.plusAssignOperation(callExtensionGetter_generateAppendViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_91663.current_mInstruction (HERE).ptr (), constinArgument_inPreferences, constinArgument_inName, constinArgument_inIndentation, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2154)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2154)) ;
    enumerator_91663.gotoNextObject () ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@hStackViewInstructionGeneration generateAppendViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_hStackViewInstructionGeneration::getter_generateAppendViewInstruction (const GGS_bool constinArgument_inPreferences,
                                                                                       const GGS_string constinArgument_inReceiverViewName,
                                                                                       const GGS_string constinArgument_inIndentation,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("do{\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2163)) ;
  GGS_string var_indentation_92263 = constinArgument_inIndentation.add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2164)) ;
  GGS_string var_name_92304 = constinArgument_inReceiverViewName.add_operation (GGS_string ("_view"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2165)) ;
  result_result.plusAssignOperation(var_indentation_92263.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2166)).add_operation (var_name_92304, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2166)).add_operation (GGS_string (" = AutoLayoutHorizontalStackView ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2166)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2166)) ;
  const GGS_hStackViewInstructionGeneration temp_0 = this ;
  extensionMethod_generate (temp_0.readProperty_mFuncCallList (), var_indentation_92263, result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2167)) ;
  const GGS_hStackViewInstructionGeneration temp_1 = this ;
  UpEnumerator_autoLayoutMultipleBindingGenerationList enumerator_92496 (temp_1.readProperty_mMultipleBindingGenerationList ()) ;
  while (enumerator_92496.hasCurrentObject ()) {
    result_result.plusAssignOperation(var_indentation_92263.add_operation (GGS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2169)).add_operation (enumerator_92496.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2169)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2169)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_92496.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2169)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2169)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2169)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2169)) ;
    enumerator_92496.gotoNextObject () ;
  }
  const GGS_hStackViewInstructionGeneration temp_2 = this ;
  UpEnumerator_astNewStackViewDeclarationList enumerator_92666 (temp_2.readProperty_mNewStackViewDeclarationList ()) ;
  while (enumerator_92666.hasCurrentObject ()) {
    result_result.plusAssignOperation(var_indentation_92263.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2172)).add_operation (enumerator_92666.current_mInstanciedStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2172)).add_operation (GGS_string (" = self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2172)).add_operation (enumerator_92666.current_mTypeStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2172)).add_operation (GGS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2172)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2172)) ;
    enumerator_92666.gotoNextObject () ;
  }
  const GGS_hStackViewInstructionGeneration temp_3 = this ;
  UpEnumerator_autoLayoutViewInstructionGenerationList enumerator_92801 (temp_3.readProperty_mInstructionList ()) ;
  while (enumerator_92801.hasCurrentObject ()) {
    result_result.plusAssignOperation(callExtensionGetter_generateAppendViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_92801.current_mInstruction (HERE).ptr (), constinArgument_inPreferences, var_name_92304, var_indentation_92263, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2175)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2175)) ;
    enumerator_92801.gotoNextObject () ;
  }
  result_result.plusAssignOperation(var_indentation_92263.add_operation (GGS_string ("_ = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2177)).add_operation (constinArgument_inReceiverViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2177)).add_operation (GGS_string (" .appendView ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2177)).add_operation (var_name_92304, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2177)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2177)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2177)) ;
  result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2178)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2178)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@vStackViewInstructionGeneration generateViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_vStackViewInstructionGeneration::getter_generateViewInstruction (const GGS_bool constinArgument_inPreferences,
                                                                                 const GGS_string constinArgument_inName,
                                                                                 const GGS_string constinArgument_inIndentation,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2187)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2187)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2187)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_vStackViewInstructionGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mHasVerticalScroller ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result.plusAssignOperation(GGS_string ("AutoLayoutVerticalStackViewWithScrollBar"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2189)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result.plusAssignOperation(GGS_string ("AutoLayoutVerticalStackView"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2191)) ;
  }
  result_result.plusAssignOperation(GGS_string (" ()\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2193)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_vStackViewInstructionGeneration temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::notEqual, temp_3.readProperty_mConfiguratorName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_vStackViewInstructionGeneration temp_4 = this ;
      result_result.plusAssignOperation(GGS_string ("    self.configure_").add_operation (temp_4.readProperty_mConfiguratorName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2195)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2195)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2195)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2195)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2195)) ;
    }
  }
  const GGS_vStackViewInstructionGeneration temp_5 = this ;
  extensionMethod_generate (temp_5.readProperty_mFuncCallList (), constinArgument_inIndentation, result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2197)) ;
  const GGS_vStackViewInstructionGeneration temp_6 = this ;
  UpEnumerator_autoLayoutMultipleBindingGenerationList enumerator_93865 (temp_6.readProperty_mMultipleBindingGenerationList ()) ;
  while (enumerator_93865.hasCurrentObject ()) {
    result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2199)).add_operation (enumerator_93865.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2199)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2199)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_93865.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2199)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2199)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2199)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2199)) ;
    enumerator_93865.gotoNextObject () ;
  }
  const GGS_vStackViewInstructionGeneration temp_7 = this ;
  UpEnumerator_astNewStackViewDeclarationList enumerator_94037 (temp_7.readProperty_mNewStackViewDeclarationList ()) ;
  while (enumerator_94037.hasCurrentObject ()) {
    result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2202)).add_operation (enumerator_94037.current_mInstanciedStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2202)).add_operation (GGS_string (" = self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2202)).add_operation (enumerator_94037.current_mTypeStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2202)).add_operation (GGS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2202)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2202)) ;
    enumerator_94037.gotoNextObject () ;
  }
  const GGS_vStackViewInstructionGeneration temp_8 = this ;
  UpEnumerator_autoLayoutViewInstructionGenerationList enumerator_94174 (temp_8.readProperty_mInstructionList ()) ;
  while (enumerator_94174.hasCurrentObject ()) {
    result_result.plusAssignOperation(callExtensionGetter_generateAppendViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_94174.current_mInstruction (HERE).ptr (), constinArgument_inPreferences, constinArgument_inName, constinArgument_inIndentation, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2205)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2205)) ;
    enumerator_94174.gotoNextObject () ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@vStackViewInstructionGeneration generateAppendViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_vStackViewInstructionGeneration::getter_generateAppendViewInstruction (const GGS_bool constinArgument_inPreferences,
                                                                                       const GGS_string constinArgument_inReceiverViewName,
                                                                                       const GGS_string constinArgument_inIndentation,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GGS_string ("do{\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2214)) ;
  GGS_string var_indentation_94774 = constinArgument_inIndentation.add_operation (GGS_string ("  "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2215)) ;
  GGS_string var_name_94815 = constinArgument_inReceiverViewName.add_operation (GGS_string ("_view"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2216)) ;
  result_result.plusAssignOperation(var_indentation_94774.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2217)).add_operation (var_name_94815, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2217)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2217)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2217)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_vStackViewInstructionGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mHasVerticalScroller ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result.plusAssignOperation(GGS_string ("AutoLayoutVerticalStackViewWithScrollBar"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2219)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result.plusAssignOperation(GGS_string ("AutoLayoutVerticalStackView"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2221)) ;
  }
  result_result.plusAssignOperation(GGS_string (" ()\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2223)) ;
  const GGS_vStackViewInstructionGeneration temp_2 = this ;
  extensionMethod_generate (temp_2.readProperty_mFuncCallList (), var_indentation_94774, result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2224)) ;
  const GGS_vStackViewInstructionGeneration temp_3 = this ;
  UpEnumerator_autoLayoutMultipleBindingGenerationList enumerator_95143 (temp_3.readProperty_mMultipleBindingGenerationList ()) ;
  while (enumerator_95143.hasCurrentObject ()) {
    result_result.plusAssignOperation(var_indentation_94774.add_operation (GGS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2226)).add_operation (enumerator_95143.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2226)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2226)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_95143.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2226)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2226)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2226)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2226)) ;
    enumerator_95143.gotoNextObject () ;
  }
  const GGS_vStackViewInstructionGeneration temp_4 = this ;
  UpEnumerator_astNewStackViewDeclarationList enumerator_95313 (temp_4.readProperty_mNewStackViewDeclarationList ()) ;
  while (enumerator_95313.hasCurrentObject ()) {
    result_result.plusAssignOperation(var_indentation_94774.add_operation (GGS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2229)).add_operation (enumerator_95313.current_mInstanciedStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2229)).add_operation (GGS_string (" = self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2229)).add_operation (enumerator_95313.current_mTypeStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2229)).add_operation (GGS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2229)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2229)) ;
    enumerator_95313.gotoNextObject () ;
  }
  const GGS_vStackViewInstructionGeneration temp_5 = this ;
  UpEnumerator_autoLayoutViewInstructionGenerationList enumerator_95448 (temp_5.readProperty_mInstructionList ()) ;
  while (enumerator_95448.hasCurrentObject ()) {
    result_result.plusAssignOperation(callExtensionGetter_generateAppendViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_95448.current_mInstruction (HERE).ptr (), constinArgument_inPreferences, var_name_94815, var_indentation_94774, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2232)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2232)) ;
    enumerator_95448.gotoNextObject () ;
  }
  result_result.plusAssignOperation(var_indentation_94774.add_operation (GGS_string ("_ = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2234)).add_operation (constinArgument_inReceiverViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2234)).add_operation (GGS_string (".appendView ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2234)).add_operation (var_name_94815, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2234)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2234)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2234)) ;
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_vStackViewInstructionGeneration temp_7 = this ;
    test_6 = GGS_bool (ComparisonKind::notEqual, temp_7.readProperty_mConfiguratorName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      const GGS_vStackViewInstructionGeneration temp_8 = this ;
      result_result.plusAssignOperation(var_indentation_94774.add_operation (GGS_string ("self.configure_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2236)).add_operation (temp_8.readProperty_mConfiguratorName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2236)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2236)).add_operation (var_name_94815, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2236)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2236)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2236)) ;
    }
  }
  result_result.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2238)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 2238)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//                               Bool options                                                    
//
//--------------------------------------------------------------------------------------------------

BoolCommandLineOption gOption_easyBindings_5F_options_outputDeclarationDependencyGraph ("easyBindings_options",
                                         "outputDeclarationDependencyGraph",
                                         103,
                                         "output-declaration-graph",
                                         "Output a declaration dependancy graph graphviz file") ;

//--------------------------------------------------------------------------------------------------
//
//                               UInt options                                                    
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//                              String options                                                   
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//                              String List options                                              
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeOutlets?????????&!!!!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeOutlets_3F__3F__3F__3F__3F__3F__3F__3F__3F__26__21__21__21__21__21__21_ (const GGS_bool constinArgument_inPreferences,
                                                                                             const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                             const GGS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                                                             const GGS_string /* constinArgument_inRootEntityName */,
                                                                                             const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                             const GGS_outletDeclarationList constinArgument_inOutletDeclarationList,
                                                                                             const GGS_propertyMap constinArgument_inObservablePropertyMap,
                                                                                             const GGS_actionMap constinArgument_inActionMap,
                                                                                             const GGS_string constinArgument_inReceiverSwiftTypeName,
                                                                                             GGS_generationStruct & ioArgument_ioGeneration,
                                                                                             GGS_regularBindingsGenerationList & outArgument_outRegularBindingsGenerationList,
                                                                                             GGS_multipleBindingGenerationList & outArgument_outMultipleBindingGenerationList,
                                                                                             GGS_actionBindingListForGeneration & outArgument_outTargetActionList,
                                                                                             GGS_decoratedOutletMap & outArgument_outletMap,
                                                                                             GGS_tableViewBindingGenerationList & outArgument_outTableViewBindingGenerationList,
                                                                                             GGS_ebViewGraphicControllerBindingGenerationList & outArgument_outEBViewGraphicControllerBindingGenerationList,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRegularBindingsGenerationList.drop () ; // Release 'out' argument
  outArgument_outMultipleBindingGenerationList.drop () ; // Release 'out' argument
  outArgument_outTargetActionList.drop () ; // Release 'out' argument
  outArgument_outletMap.drop () ; // Release 'out' argument
  outArgument_outTableViewBindingGenerationList.drop () ; // Release 'out' argument
  outArgument_outEBViewGraphicControllerBindingGenerationList.drop () ; // Release 'out' argument
  GGS_regularBindingsGenerationList temp_0 = GGS_regularBindingsGenerationList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 207)) ;
  outArgument_outRegularBindingsGenerationList = temp_0 ;
  GGS_actionBindingListForGeneration temp_1 = GGS_actionBindingListForGeneration::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 208)) ;
  outArgument_outTargetActionList = temp_1 ;
  GGS_multipleBindingGenerationList temp_2 = GGS_multipleBindingGenerationList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 209)) ;
  outArgument_outMultipleBindingGenerationList = temp_2 ;
  outArgument_outletMap = GGS_decoratedOutletMap::init (inCompiler COMMA_HERE) ;
  GGS_tableViewBindingGenerationList temp_3 = GGS_tableViewBindingGenerationList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 211)) ;
  outArgument_outTableViewBindingGenerationList = temp_3 ;
  GGS_ebViewGraphicControllerBindingGenerationList temp_4 = GGS_ebViewGraphicControllerBindingGenerationList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 212)) ;
  outArgument_outEBViewGraphicControllerBindingGenerationList = temp_4 ;
  UpEnumerator_outletDeclarationList enumerator_8190 (constinArgument_inOutletDeclarationList) ;
  while (enumerator_8190.hasCurrentObject ()) {
    {
    outArgument_outletMap.setter_insertKey (enumerator_8190.current_mOutletName (HERE), enumerator_8190.current_mOutletTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 214)) ;
    }
    GGS_bool var_handlesRunAction_8431 ;
    GGS_bool var_handlesTableViewBinding_8466 ;
    GGS_bool var_handlesEnabledBinding_8508 ;
    GGS_bool var_handlesHiddenBinding_8548 ;
    GGS_bool var_handleGraphicControllerBinding_8587 ;
    GGS_bool var_outletClassIsUserDefined_8636 ;
    GGS_lstring joker_8410 ; // Joker input parameter
    constinArgument_inSemanticContext.readProperty_mOutletClassMap ().method_searchKey (enumerator_8190.current_mOutletTypeName (HERE), joker_8410, var_handlesRunAction_8431, var_handlesTableViewBinding_8466, var_handlesEnabledBinding_8508, var_handlesHiddenBinding_8548, var_handleGraphicControllerBinding_8587, var_outletClassIsUserDefined_8636, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 215)) ;
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = var_outletClassIsUserDefined_8636.operator_not (SOURCE_FILE ("outlet-declaration.galgas4", 225)).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        {
        ioArgument_ioGeneration.mProperty_mNeededOutletClasses.setter_insert (enumerator_8190.current_mOutletTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 226)) ;
        }
      }
    }
    switch (enumerator_8190.current_mGraphicController (HERE).enumValue ()) {
    case GGS_graphicController::Enumeration::invalid:
      break ;
    case GGS_graphicController::Enumeration::enum_none:
      break ;
    case GGS_graphicController::Enumeration::enum_defined:
      {
        GGS_lstring extractedValue_8903_controllerName_0 ;
        GGS_lstring extractedValue_8928_propertyName_1 ;
        enumerator_8190.current_mGraphicController (HERE).getAssociatedValuesFor_defined (extractedValue_8903_controllerName_0, extractedValue_8928_propertyName_1) ;
        GalgasBool test_6 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_6) {
          test_6 = var_handleGraphicControllerBinding_8587.operator_not (SOURCE_FILE ("outlet-declaration.galgas4", 232)).boolEnum () ;
          if (GalgasBool::boolTrue == test_6) {
            GenericArray <FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (enumerator_8190.current_mOutletTypeName (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_8190.current_mOutletTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 233)).add_operation (GGS_string ("' type does not handle the $graphicController binding"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 233)), fixItArray7  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 233)) ;
          }
        }
        if (GalgasBool::boolFalse == test_6) {
          GGS_propertyKind var_kind_9234 ;
          GGS_actionMap joker_9250_2 ; // Joker input parameter
          GGS_bool joker_9250_1 ; // Joker input parameter
          constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_8903_controllerName_0, var_kind_9234, joker_9250_2, joker_9250_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 235)) ;
          switch (var_kind_9234.enumValue ()) {
          case GGS_propertyKind::Enumeration::invalid:
            break ;
          case GGS_propertyKind::Enumeration::enum_property:
            {
              GGS_typeKind extractedValue_9309__0 ;
              GGS_propertyAccessibility extractedValue_9309__1 ;
              var_kind_9234.getAssociatedValuesFor_property (extractedValue_9309__0, extractedValue_9309__1) ;
              GenericArray <FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (extractedValue_8903_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray8  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 242)) ;
            }
            break ;
          case GGS_propertyKind::Enumeration::enum_toMany:
            {
              GGS_lstring extractedValue_9419__0 ;
              GGS_propertyAccessibility extractedValue_9419__1 ;
              GGS_bool extractedValue_9419__2 ;
              GGS_toManyRelationshipOptionAST extractedValue_9419__3 ;
              var_kind_9234.getAssociatedValuesFor_toMany (extractedValue_9419__0, extractedValue_9419__1, extractedValue_9419__2, extractedValue_9419__3) ;
              GenericArray <FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (extractedValue_8903_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray9  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 244)) ;
            }
            break ;
          case GGS_propertyKind::Enumeration::enum_toOne:
            {
              GGS_lstring extractedValue_9528__0 ;
              GGS_propertyAccessibility extractedValue_9528__1 ;
              GGS_bool extractedValue_9528__2 ;
              GGS_toOneOppositeRelationship extractedValue_9528__3 ;
              GGS_bool extractedValue_9528__4 ;
              var_kind_9234.getAssociatedValuesFor_toOne (extractedValue_9528__0, extractedValue_9528__1, extractedValue_9528__2, extractedValue_9528__3, extractedValue_9528__4) ;
              GenericArray <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (extractedValue_8903_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray10  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 246)) ;
            }
            break ;
          case GGS_propertyKind::Enumeration::enum_arrayController:
            {
              GGS_lstring extractedValue_9646_entityName_0 ;
              GGS_bool extractedValue_9658_graphic_1 ;
              var_kind_9234.getAssociatedValuesFor_arrayController (extractedValue_9646_entityName_0, extractedValue_9658_graphic_1) ;
              GalgasBool test_11 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_11) {
                test_11 = GGS_bool (ComparisonKind::equal, extractedValue_8928_propertyName_1.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                if (GalgasBool::boolTrue == test_11) {
                  GalgasBool test_12 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_12) {
                    test_12 = extractedValue_9658_graphic_1.operator_not (SOURCE_FILE ("outlet-declaration.galgas4", 249)).boolEnum () ;
                    if (GalgasBool::boolTrue == test_12) {
                      GenericArray <FixItDescription> fixItArray13 ;
                      inCompiler->emitSemanticError (extractedValue_8903_controllerName_0.readProperty_location (), GGS_string ("the controlled entity (").add_operation (extractedValue_9646_entityName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 250)).add_operation (GGS_string (") should be a graphic entity"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 250)), fixItArray13  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 250)) ;
                    }
                  }
                }
              }
              if (GalgasBool::boolFalse == test_11) {
                GGS_propertyMap var_observablePropertyMap_10001 ;
                GGS_classKind joker_9978 ; // Joker input parameter
                GGS_actionMap joker_10038_2 ; // Joker input parameter
                GGS_propertyGenerationList joker_10038_1 ; // Joker input parameter
                constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_9646_entityName_0, joker_9978, var_observablePropertyMap_10001, joker_10038_2, joker_10038_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 253)) ;
                GGS_propertyKind var_propertyKind_10120 ;
                GGS_actionMap joker_10134_2 ; // Joker input parameter
                GGS_bool joker_10134_1 ; // Joker input parameter
                var_observablePropertyMap_10001.method_searchKey (extractedValue_8928_propertyName_1, var_propertyKind_10120, joker_10134_2, joker_10134_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 259)) ;
                switch (var_propertyKind_10120.enumValue ()) {
                case GGS_propertyKind::Enumeration::invalid:
                  break ;
                case GGS_propertyKind::Enumeration::enum_property:
                  {
                    GGS_typeKind extractedValue_10200__0 ;
                    GGS_propertyAccessibility extractedValue_10200__1 ;
                    var_propertyKind_10120.getAssociatedValuesFor_property (extractedValue_10200__0, extractedValue_10200__1) ;
                    GenericArray <FixItDescription> fixItArray14 ;
                    inCompiler->emitSemanticError (extractedValue_8903_controllerName_0.readProperty_location (), GGS_string ("the bound model should be a toMany property"), fixItArray14  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 262)) ;
                  }
                  break ;
                case GGS_propertyKind::Enumeration::enum_toMany:
                  {
                    GGS_lstring extractedValue_10315_kEntityName_0 ;
                    GGS_propertyAccessibility extractedValue_10328__1 ;
                    GGS_bool extractedValue_10331_isGraphic_2 ;
                    GGS_toManyRelationshipOptionAST extractedValue_10342__3 ;
                    var_propertyKind_10120.getAssociatedValuesFor_toMany (extractedValue_10315_kEntityName_0, extractedValue_10328__1, extractedValue_10331_isGraphic_2, extractedValue_10342__3) ;
                    GalgasBool test_15 = GalgasBool::boolTrue ;
                    if (GalgasBool::boolTrue == test_15) {
                      test_15 = extractedValue_10331_isGraphic_2.operator_not (SOURCE_FILE ("outlet-declaration.galgas4", 264)).boolEnum () ;
                      if (GalgasBool::boolTrue == test_15) {
                        GenericArray <FixItDescription> fixItArray16 ;
                        inCompiler->emitSemanticError (extractedValue_8903_controllerName_0.readProperty_location (), GGS_string ("the controlled entity (").add_operation (extractedValue_10315_kEntityName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 265)).add_operation (GGS_string (") should be a graphic entity"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 265)), fixItArray16  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 265)) ;
                      }
                    }
                  }
                  break ;
                case GGS_propertyKind::Enumeration::enum_toOne:
                  {
                    GGS_lstring extractedValue_10540__0 ;
                    GGS_propertyAccessibility extractedValue_10540__1 ;
                    GGS_bool extractedValue_10540__2 ;
                    GGS_toOneOppositeRelationship extractedValue_10540__3 ;
                    GGS_bool extractedValue_10540__4 ;
                    var_propertyKind_10120.getAssociatedValuesFor_toOne (extractedValue_10540__0, extractedValue_10540__1, extractedValue_10540__2, extractedValue_10540__3, extractedValue_10540__4) ;
                    GenericArray <FixItDescription> fixItArray17 ;
                    inCompiler->emitSemanticError (extractedValue_8903_controllerName_0.readProperty_location (), GGS_string ("the bound model should be a toMany property"), fixItArray17  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 268)) ;
                  }
                  break ;
                case GGS_propertyKind::Enumeration::enum_arrayController:
                  {
                    GGS_lstring extractedValue_10665__0 ;
                    GGS_bool extractedValue_10665__1 ;
                    var_propertyKind_10120.getAssociatedValuesFor_arrayController (extractedValue_10665__0, extractedValue_10665__1) ;
                    GenericArray <FixItDescription> fixItArray18 ;
                    inCompiler->emitSemanticError (extractedValue_8903_controllerName_0.readProperty_location (), GGS_string ("the bound model should be a toMany property"), fixItArray18  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 270)) ;
                  }
                  break ;
                case GGS_propertyKind::Enumeration::enum_selectionController:
                  {
                    GGS_string extractedValue_10793__0 ;
                    var_propertyKind_10120.getAssociatedValuesFor_selectionController (extractedValue_10793__0) ;
                    GenericArray <FixItDescription> fixItArray19 ;
                    inCompiler->emitSemanticError (extractedValue_8903_controllerName_0.readProperty_location (), GGS_string ("the bound model should be a toMany property"), fixItArray19  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 272)) ;
                  }
                  break ;
                }
              }
            }
            break ;
          case GGS_propertyKind::Enumeration::enum_selectionController:
            {
              GGS_string extractedValue_10946__0 ;
              var_kind_9234.getAssociatedValuesFor_selectionController (extractedValue_10946__0) ;
              GenericArray <FixItDescription> fixItArray20 ;
              inCompiler->emitSemanticError (extractedValue_8903_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray20  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 276)) ;
            }
            break ;
          }
          {
          outArgument_outEBViewGraphicControllerBindingGenerationList.setter_append (enumerator_8190.current_mOutletName (HERE).readProperty_string (), extractedValue_8903_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 278)) ;
          }
        }
      }
      break ;
    }
    switch (enumerator_8190.current_mTableValueBindingDescriptor (HERE).enumValue ()) {
    case GGS_tableValueBinding::Enumeration::invalid:
      break ;
    case GGS_tableValueBinding::Enumeration::enum_noTableValueBinding:
      break ;
    case GGS_tableValueBinding::Enumeration::enum_tableValueBinding:
      {
        GGS_lstring extractedValue_11343_controllerName_0 ;
        enumerator_8190.current_mTableValueBindingDescriptor (HERE).getAssociatedValuesFor_tableValueBinding (extractedValue_11343_controllerName_0) ;
        GalgasBool test_21 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_21) {
          test_21 = var_handlesTableViewBinding_8466.operator_not (SOURCE_FILE ("outlet-declaration.galgas4", 288)).boolEnum () ;
          if (GalgasBool::boolTrue == test_21) {
            GenericArray <FixItDescription> fixItArray22 ;
            inCompiler->emitSemanticError (enumerator_8190.current_mOutletTypeName (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_8190.current_mOutletTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 289)).add_operation (GGS_string ("' type does not handle the $tableView binding"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 289)), fixItArray22  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 289)) ;
          }
        }
        if (GalgasBool::boolFalse == test_21) {
          GGS_propertyKind var_kind_11643 ;
          GGS_actionMap joker_11659_2 ; // Joker input parameter
          GGS_bool joker_11659_1 ; // Joker input parameter
          constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_11343_controllerName_0, var_kind_11643, joker_11659_2, joker_11659_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 291)) ;
          GalgasBool test_23 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_23) {
            test_23 = var_kind_11643.getter_isArrayController (SOURCE_FILE ("outlet-declaration.galgas4", 296)).operator_not (SOURCE_FILE ("outlet-declaration.galgas4", 296)).boolEnum () ;
            if (GalgasBool::boolTrue == test_23) {
              GenericArray <FixItDescription> fixItArray24 ;
              inCompiler->emitSemanticError (extractedValue_11343_controllerName_0.readProperty_location (), GGS_string ("the bound model should be an array controller"), fixItArray24  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 297)) ;
            }
          }
          {
          outArgument_outTableViewBindingGenerationList.setter_append (enumerator_8190.current_mOutletName (HERE).readProperty_string (), extractedValue_11343_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 299)) ;
          }
        }
      }
      break ;
    }
    switch (enumerator_8190.current_mRunDescriptor (HERE).enumValue ()) {
    case GGS_runActionDescriptor::Enumeration::invalid:
      break ;
    case GGS_runActionDescriptor::Enumeration::enum_noAction:
      break ;
    case GGS_runActionDescriptor::Enumeration::enum_action:
      {
        GGS_lstring extractedValue_12052_target_0 ;
        GGS_lstring extractedValue_12069_action_1 ;
        enumerator_8190.current_mRunDescriptor (HERE).getAssociatedValuesFor_action (extractedValue_12052_target_0, extractedValue_12069_action_1) ;
        GalgasBool test_25 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_25) {
          test_25 = var_handlesRunAction_8431.operator_not (SOURCE_FILE ("outlet-declaration.galgas4", 309)).boolEnum () ;
          if (GalgasBool::boolTrue == test_25) {
            GenericArray <FixItDescription> fixItArray26 ;
            inCompiler->emitSemanticError (enumerator_8190.current_mOutletTypeName (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_8190.current_mOutletTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 310)).add_operation (GGS_string ("' type does not handle run action"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 310)), fixItArray26  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 310)) ;
          }
        }
        if (GalgasBool::boolFalse == test_25) {
          GalgasBool test_27 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_27) {
            test_27 = GGS_bool (ComparisonKind::equal, extractedValue_12052_target_0.readProperty_string ().objectCompare (GGS_string ("self"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_27) {
              constinArgument_inActionMap.method_searchKey (extractedValue_12069_action_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 312)) ;
              {
              outArgument_outTargetActionList.setter_append (enumerator_8190.current_mOutletName (HERE).readProperty_string (), GGS_string ("self"), extractedValue_12069_action_1.readProperty_string (), constinArgument_inReceiverSwiftTypeName, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 313)) ;
              }
            }
          }
          if (GalgasBool::boolFalse == test_27) {
            GGS_actionMap var_controllerActionMap_12607 ;
            GGS_propertyKind joker_12577 ; // Joker input parameter
            GGS_bool joker_12638 ; // Joker input parameter
            constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_12052_target_0, joker_12577, var_controllerActionMap_12607, joker_12638, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 320)) ;
            var_controllerActionMap_12607.method_searchKey (extractedValue_12069_action_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 326)) ;
            {
            GGS_string temp_28 ;
            const GalgasBool test_29 = constinArgument_inPreferences.boolEnum () ;
            if (GalgasBool::boolTrue == test_29) {
              temp_28 = GGS_string ("preferences_") ;
            }else if (GalgasBool::boolFalse == test_29) {
              temp_28 = GGS_string::makeEmptyString () ;
            }
            outArgument_outTargetActionList.setter_append (enumerator_8190.current_mOutletName (HERE).readProperty_string (), temp_28.add_operation (extractedValue_12052_target_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 329)), extractedValue_12069_action_1.readProperty_string (), GGS_string ("Controller_").add_operation (constinArgument_inReceiverSwiftTypeName, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 331)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 331)).add_operation (extractedValue_12052_target_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 331)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 327)) ;
            }
          }
        }
      }
      break ;
    }
    switch (enumerator_8190.current_mEnabledBindingDescriptor (HERE).enumValue ()) {
    case GGS_multipleBindingDescriptor::Enumeration::invalid:
      break ;
    case GGS_multipleBindingDescriptor::Enumeration::enum_noBinding:
      break ;
    case GGS_multipleBindingDescriptor::Enumeration::enum_binding:
      {
        GGS_abstractBooleanMultipleBindingExpressionAST extractedValue_13115_expression_0 ;
        enumerator_8190.current_mEnabledBindingDescriptor (HERE).getAssociatedValuesFor_binding (extractedValue_13115_expression_0) ;
        GGS_abstractBooleanMultipleBindingExpressionForGeneration var_enableExpression_13413 ;
        GGS_typeKind var_type_13454 ;
        GGS_location var_errorLocation_13483 ;
        callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_13115_expression_0.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_enableExpression_13413, var_type_13454, var_errorLocation_13483, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 339)) ;
        GalgasBool test_30 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_30) {
          test_30 = var_handlesEnabledBinding_8508.operator_not (SOURCE_FILE ("outlet-declaration.galgas4", 349)).boolEnum () ;
          if (GalgasBool::boolTrue == test_30) {
            GenericArray <FixItDescription> fixItArray31 ;
            inCompiler->emitSemanticError (var_errorLocation_13483, GGS_string ("cet outlet n'accepte pas le binding $enabled"), fixItArray31  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 350)) ;
          }
        }
        GalgasBool test_32 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_32) {
          test_32 = var_type_13454.getter_isBoolType (SOURCE_FILE ("outlet-declaration.galgas4", 352)).operator_not (SOURCE_FILE ("outlet-declaration.galgas4", 352)).boolEnum () ;
          if (GalgasBool::boolTrue == test_32) {
            GenericArray <FixItDescription> fixItArray33 ;
            inCompiler->emitSemanticError (var_errorLocation_13483, GGS_string ("expression is not boolean"), fixItArray33  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 353)) ;
          }
        }
        {
        outArgument_outMultipleBindingGenerationList.setter_append (enumerator_8190.current_mOutletName (HERE).readProperty_string (), GGS_string ("enabled"), var_enableExpression_13413, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 355)) ;
        }
      }
      break ;
    }
    switch (enumerator_8190.current_mHiddenBindingDescriptor (HERE).enumValue ()) {
    case GGS_multipleBindingDescriptor::Enumeration::invalid:
      break ;
    case GGS_multipleBindingDescriptor::Enumeration::enum_noBinding:
      break ;
    case GGS_multipleBindingDescriptor::Enumeration::enum_binding:
      {
        GGS_abstractBooleanMultipleBindingExpressionAST extractedValue_14027_expression_0 ;
        enumerator_8190.current_mHiddenBindingDescriptor (HERE).getAssociatedValuesFor_binding (extractedValue_14027_expression_0) ;
        GGS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_14325 ;
        GGS_typeKind var_type_14366 ;
        GGS_location var_errorLocation_14395 ;
        callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_14027_expression_0.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_hiddenExpression_14325, var_type_14366, var_errorLocation_14395, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 365)) ;
        GalgasBool test_34 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_34) {
          test_34 = var_type_14366.getter_isBoolType (SOURCE_FILE ("outlet-declaration.galgas4", 375)).operator_not (SOURCE_FILE ("outlet-declaration.galgas4", 375)).boolEnum () ;
          if (GalgasBool::boolTrue == test_34) {
            GenericArray <FixItDescription> fixItArray35 ;
            inCompiler->emitSemanticError (var_errorLocation_14395, GGS_string ("expression is not boolean"), fixItArray35  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 376)) ;
          }
        }
        GalgasBool test_36 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_36) {
          test_36 = var_handlesHiddenBinding_8548.operator_not (SOURCE_FILE ("outlet-declaration.galgas4", 378)).boolEnum () ;
          if (GalgasBool::boolTrue == test_36) {
            GenericArray <FixItDescription> fixItArray37 ;
            inCompiler->emitSemanticError (var_errorLocation_14395, GGS_string ("cet outlet n'accepte pas le binding $hidden"), fixItArray37  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 379)) ;
          }
        }
        {
        outArgument_outMultipleBindingGenerationList.setter_append (enumerator_8190.current_mOutletName (HERE).readProperty_string (), GGS_string ("hidden"), var_hiddenExpression_14325, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 381)) ;
        }
      }
      break ;
    }
    {
    GGS_string temp_38 ;
    const GalgasBool test_39 = constinArgument_inPreferences.boolEnum () ;
    if (GalgasBool::boolTrue == test_39) {
      temp_38 = GGS_string ("preferences_") ;
    }else if (GalgasBool::boolFalse == test_39) {
      temp_38 = GGS_string ("self.") ;
    }
    routine_analyzeRegularBinding_3F__3F__3F__3F__3F__3F__3F__3F__26_ (constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, enumerator_8190.current_mOutletTypeName (HERE), enumerator_8190.current_mOutletName (HERE).readProperty_string (), enumerator_8190.current_mRegularBindingList (HERE), temp_38, outArgument_outRegularBindingsGenerationList, inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 388)) ;
    }
    enumerator_8190.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeRegularBinding????????&'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeRegularBinding_3F__3F__3F__3F__3F__3F__3F__3F__26_ (const GGS_propertyMap constinArgument_inRootPropertyMap,
                                                                        const GGS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                                        const GGS_semanticContext constinArgument_inSemanticContext,
                                                                        const GGS_propertyMap constinArgument_inBoundModelPropertyMap,
                                                                        const GGS_lstring constinArgument_inOutletTypeName,
                                                                        const GGS_string constinArgument_inOutletName,
                                                                        const GGS_regularBindingList constinArgument_inRegularBindingList,
                                                                        const GGS_string constinArgument_inSelfSwiftName,
                                                                        GGS_regularBindingsGenerationList & ioArgument_ioRegularBindingsGenerationList,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_regularBindingList enumerator_15770 (constinArgument_inRegularBindingList) ;
  while (enumerator_15770.hasCurrentObject ()) {
    GGS_outletBindingModelList temp_0 = GGS_outletBindingModelList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 417)) ;
    GGS_outletBindingModelList var_boundModelTypeList_15870 = temp_0 ;
    GGS_boundObjectList temp_1 = GGS_boundObjectList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 418)) ;
    GGS_boundObjectList var_boundModelListForGeneration_15919 = temp_1 ;
    UpEnumerator_observablePropertyList enumerator_15961 (enumerator_15770.current_mObservablePropertyList (HERE)) ;
    while (enumerator_15961.hasCurrentObject ()) {
      GGS_propertyKind var_kind_16179 ;
      GGS_string var_swiftTypeStringForTransientFunctionArgument_16213 ;
      GGS_string var_protocolTypeName_16286 ;
      GGS_string var_defaultValueAsString_16332 ;
      extensionMethod_analyzeObservableProperty (enumerator_15961.current_mObservableProperty (HERE), constinArgument_inRootPropertyMap, constinArgument_inSemanticContext, constinArgument_inBoundModelPropertyMap, var_kind_16179, var_swiftTypeStringForTransientFunctionArgument_16213, var_protocolTypeName_16286, var_defaultValueAsString_16332, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 420)) ;
      switch (var_kind_16179.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_16432__0 ;
          GGS_propertyAccessibility extractedValue_16432__1 ;
          GGS_bool extractedValue_16432__2 ;
          GGS_toManyRelationshipOptionAST extractedValue_16432__3 ;
          var_kind_16179.getAssociatedValuesFor_toMany (extractedValue_16432__0, extractedValue_16432__1, extractedValue_16432__2, extractedValue_16432__3) ;
          GenericArray <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_15961.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 432)), GGS_string ("a toMany property cannot be bound"), fixItArray2  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 432)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_16538__0 ;
          GGS_propertyAccessibility extractedValue_16538__1 ;
          GGS_bool extractedValue_16538__2 ;
          GGS_toOneOppositeRelationship extractedValue_16538__3 ;
          GGS_bool extractedValue_16538__4 ;
          var_kind_16179.getAssociatedValuesFor_toOne (extractedValue_16538__0, extractedValue_16538__1, extractedValue_16538__2, extractedValue_16538__3, extractedValue_16538__4) ;
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_15961.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 434)), GGS_string ("a toOne property cannot be bound"), fixItArray3  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 434)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_16653__0 ;
          GGS_bool extractedValue_16653__1 ;
          var_kind_16179.getAssociatedValuesFor_arrayController (extractedValue_16653__0, extractedValue_16653__1) ;
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_15961.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 436)), GGS_string ("an array controller cannot be bound"), fixItArray4  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 436)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_16774__0 ;
          var_kind_16179.getAssociatedValuesFor_selectionController (extractedValue_16774__0) ;
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_15961.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 438)), GGS_string ("a selection controller cannot be bound"), fixItArray5  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 438)) ;
        }
        break ;
      }
      {
      var_boundModelListForGeneration_15919.setter_append (extensionGetter_modelStringForSelf (enumerator_15961.current_mObservableProperty (HERE), constinArgument_inSelfSwiftName, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 441)), var_kind_16179, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 440)) ;
      }
      {
      var_boundModelTypeList_15870.setter_append (var_kind_16179, extensionGetter_location (enumerator_15961.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 444)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 444)) ;
      }
      enumerator_15961.gotoNextObject () ;
    }
    GGS_outletBindingSpecificationModelList temp_6 = GGS_outletBindingSpecificationModelList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 447)) ;
    GGS_outletBindingSpecificationModelList var_outletBindingSpecificationModelList_17163 = temp_6 ;
    GGS_controllerBindingOptionDecoratedList temp_7 = GGS_controllerBindingOptionDecoratedList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 448)) ;
    GGS_controllerBindingOptionDecoratedList var_controllerBindingOptionDecoratedList_17250 = temp_7 ;
    GGS_lstring var_outletTypeName_17300 = constinArgument_inOutletTypeName ;
    GGS_bool var_continues_17342 = GGS_bool (true) ;
    if (constinArgument_inSemanticContext.readProperty_mBindingSpecificationMap ().getter_count (SOURCE_FILE ("outlet-declaration.galgas4", 451)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 451)).isValid ()) {
      uint32_t variant_17363 = constinArgument_inSemanticContext.readProperty_mBindingSpecificationMap ().getter_count (SOURCE_FILE ("outlet-declaration.galgas4", 451)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 451)).uintValue () ;
      bool loop_17363 = true ;
      while (loop_17363) {
        loop_17363 = GGS_bool (ComparisonKind::notEqual, var_outletTypeName_17300.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).operator_and (var_continues_17342 COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 451)).isValid () ;
        if (loop_17363) {
          loop_17363 = GGS_bool (ComparisonKind::notEqual, var_outletTypeName_17300.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).operator_and (var_continues_17342 COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 451)).boolValue () ;
        }
        if (loop_17363 && (0 == variant_17363)) {
          loop_17363 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("outlet-declaration.galgas4", 451)) ;
        }
        if (loop_17363) {
          variant_17363 -= 1 ;
          var_continues_17342 = GGS_bool (false) ;
          GGS_lstring var_superOutletClassName_17595 ;
          GGS_outletBindingSpecificationMap var_bindingMap_17661 ;
          constinArgument_inSemanticContext.readProperty_mBindingSpecificationMap ().method_searchKey (var_outletTypeName_17300, var_superOutletClassName_17595, var_bindingMap_17661, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 453)) ;
          GalgasBool test_8 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_8) {
            test_8 = var_bindingMap_17661.getter_hasKey (enumerator_15770.current_mBindingName (HERE).readProperty_string () COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 458)).boolEnum () ;
            if (GalgasBool::boolTrue == test_8) {
              var_bindingMap_17661.method_searchKey (enumerator_15770.current_mBindingName (HERE), var_outletBindingSpecificationModelList_17163, var_controllerBindingOptionDecoratedList_17250, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 459)) ;
            }
          }
          if (GalgasBool::boolFalse == test_8) {
            var_continues_17342 = GGS_bool (true) ;
            var_outletTypeName_17300 = var_superOutletClassName_17595 ;
          }
        }
      }
    }
    GalgasBool test_9 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_9) {
      test_9 = var_continues_17342.boolEnum () ;
      if (GalgasBool::boolTrue == test_9) {
        GenericArray <FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (enumerator_15770.current_mBindingName (HERE).readProperty_location (), GGS_string ("this binding is not defined"), fixItArray10  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 470)) ;
      }
    }
    if (GalgasBool::boolFalse == test_9) {
      GalgasBool test_11 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_11) {
        test_11 = GGS_bool (ComparisonKind::notEqual, var_boundModelTypeList_15870.getter_count (SOURCE_FILE ("outlet-declaration.galgas4", 471)).objectCompare (var_outletBindingSpecificationModelList_17163.getter_count (SOURCE_FILE ("outlet-declaration.galgas4", 471)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_11) {
          GenericArray <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (enumerator_15770.current_mBindingName (HERE).readProperty_location (), var_outletBindingSpecificationModelList_17163.getter_count (SOURCE_FILE ("outlet-declaration.galgas4", 473)).getter_string (SOURCE_FILE ("outlet-declaration.galgas4", 473)).add_operation (GGS_string (" model(s) required for this binding (found: "), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 473)).add_operation (var_boundModelTypeList_15870.getter_count (SOURCE_FILE ("outlet-declaration.galgas4", 475)).getter_string (SOURCE_FILE ("outlet-declaration.galgas4", 474)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 474)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 475)), fixItArray12  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 472)) ;
        }
      }
      if (GalgasBool::boolFalse == test_11) {
        UpEnumerator_outletBindingSpecificationModelList enumerator_18391 (var_outletBindingSpecificationModelList_17163) ;
        UpEnumerator_outletBindingModelList enumerator_18486 (var_boundModelTypeList_15870) ;
        while (enumerator_18391.hasCurrentObject () && enumerator_18486.hasCurrentObject ()) {
          GalgasBool test_13 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_13) {
            GGS_bool test_14 = enumerator_18391.current_mModelShouldBeWritableProperty (HERE) ;
            if (GalgasBool::boolTrue == test_14.boolEnum ()) {
              test_14 = extensionGetter_isTransient (enumerator_18486.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 479)) ;
            }
            test_13 = test_14.boolEnum () ;
            if (GalgasBool::boolTrue == test_13) {
              GenericArray <FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (enumerator_18486.current_mErrorLocation (HERE), GGS_string ("the model is transient and the binding requires an writable model"), fixItArray15  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 480)) ;
            }
          }
          GalgasBool test_16 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_16) {
            GGS_bool test_17 = enumerator_18391.current_mModelType (HERE).getter_isEnumType (SOURCE_FILE ("outlet-declaration.galgas4", 482)) ;
            if (GalgasBool::boolTrue == test_17.boolEnum ()) {
              test_17 = extensionGetter_isEnumType (enumerator_18486.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 482)) ;
            }
            test_16 = test_17.boolEnum () ;
            if (GalgasBool::boolTrue == test_16) {
            }
          }
          if (GalgasBool::boolFalse == test_16) {
            GalgasBool test_18 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_18) {
              test_18 = GGS_bool (ComparisonKind::notEqual, extensionGetter_swiftTypeName (enumerator_18391.current_mModelType (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 483)).objectCompare (extensionGetter_swiftTypeName (enumerator_18486.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 483)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_18) {
                GenericArray <FixItDescription> fixItArray19 ;
                inCompiler->emitSemanticError (enumerator_18486.current_mErrorLocation (HERE), GGS_string ("the model type should be ").add_operation (extensionGetter_swiftTypeName (enumerator_18391.current_mModelType (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 484)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 484)), fixItArray19  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 484)) ;
              }
            }
          }
          enumerator_18391.gotoNextObject () ;
          enumerator_18486.gotoNextObject () ;
        }
      }
    }
    GGS_string var_bindingOptionString_19062 = GGS_string::makeEmptyString () ;
    GalgasBool test_20 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_20) {
      test_20 = GGS_bool (ComparisonKind::notEqual, var_controllerBindingOptionDecoratedList_17250.getter_count (SOURCE_FILE ("outlet-declaration.galgas4", 490)).objectCompare (enumerator_15770.current_mBindingOptionList (HERE).getter_count (SOURCE_FILE ("outlet-declaration.galgas4", 490)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_20) {
        GGS_string var_s_19188 ;
        GalgasBool test_21 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_21) {
          test_21 = GGS_bool (ComparisonKind::equal, var_controllerBindingOptionDecoratedList_17250.getter_count (SOURCE_FILE ("outlet-declaration.galgas4", 492)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_21) {
            var_s_19188 = GGS_string ("this binding has no option") ;
          }
        }
        if (GalgasBool::boolFalse == test_21) {
          var_s_19188 = GGS_string ("this binding requires the following options:") ;
          UpEnumerator_controllerBindingOptionDecoratedList enumerator_19390 (var_controllerBindingOptionDecoratedList_17250) ;
          while (enumerator_19390.hasCurrentObject ()) {
            var_s_19188.plusAssignOperation(GGS_string ("\n  - ").add_operation (enumerator_19390.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 497)).add_operation (GGS_string (" : "), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 497)).add_operation (extensionGetter_swiftTypeName (enumerator_19390.current_mOptionType (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 497)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 497)), inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 497)) ;
            enumerator_19390.gotoNextObject () ;
          }
        }
        GenericArray <FixItDescription> fixItArray22 ;
        inCompiler->emitSemanticError (enumerator_15770.current_mBindingName (HERE).readProperty_location (), var_s_19188, fixItArray22  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 500)) ;
      }
    }
    if (GalgasBool::boolFalse == test_20) {
      UpEnumerator_controllerBindingOptionDecoratedList enumerator_19617 (var_controllerBindingOptionDecoratedList_17250) ;
      UpEnumerator_bindingOptionList enumerator_19714 (enumerator_15770.current_mBindingOptionList (HERE)) ;
      while (enumerator_19617.hasCurrentObject () && enumerator_19714.hasCurrentObject ()) {
        GalgasBool test_23 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_23) {
          test_23 = GGS_bool (ComparisonKind::notEqual, enumerator_19617.current_mOptionName (HERE).readProperty_string ().objectCompare (enumerator_19714.current_mOptionName (HERE).readProperty_string ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_23) {
            GenericArray <FixItDescription> fixItArray24 ;
            inCompiler->emitSemanticError (enumerator_19714.current_mOptionName (HERE).readProperty_location (), GGS_string ("the option name should be '").add_operation (enumerator_19617.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 505)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 505)), fixItArray24  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 505)) ;
          }
        }
        GGS_string var_optionValueAsString_20103 ;
        GGS_typeKindList temp_25 = GGS_typeKindList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 508)) ;
        temp_25.plusPlusAssignOperation (GGS_typeKindList_2E_element::init_21_ (enumerator_19617.current_mOptionType (HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 508)) ;
        callExtensionMethod_analyzeDefaultValueType ((cPtr_abstractDefaultValue *) enumerator_19714.current_mOptionValue (HERE).ptr (), temp_25, constinArgument_inPreferencesPropertyMap, var_optionValueAsString_20103, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 507)) ;
        var_bindingOptionString_19062.plusAssignOperation(GGS_string (", ").add_operation (enumerator_19617.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 512)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 512)).add_operation (var_optionValueAsString_20103, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 512)), inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 512)) ;
        enumerator_19617.gotoNextObject () ;
        enumerator_19714.gotoNextObject () ;
      }
    }
    {
    ioArgument_ioRegularBindingsGenerationList.setter_append (constinArgument_inOutletName, enumerator_15770.current_mBindingName (HERE).readProperty_string (), var_boundModelListForGeneration_15919, var_bindingOptionString_19062, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 516)) ;
    }
    enumerator_15770.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@transientDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_transientDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_transientDeclarationAST temp_0 = this ;
  const GGS_transientDeclarationAST temp_1 = this ;
  const GGS_transientDeclarationAST temp_2 = this ;
  GGS_lstring var_node_666 = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 15)).add_operation (temp_1.readProperty_mTransientName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 15)), temp_2.readProperty_mTransientName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_transientDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_666, temp_3, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 16)) ;
  }
  {
  const GGS_transientDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_666, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("transient-property.galgas4", 17)) ;
  }
  {
  const GGS_transientDeclarationAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_666, temp_5.readProperty_mTransientTypeName () COMMA_SOURCE_FILE ("transient-property.galgas4", 18)) ;
  }
  const GGS_transientDeclarationAST temp_6 = this ;
  UpEnumerator_observablePropertyList enumerator_951 (temp_6.readProperty_mDependencyList ()) ;
  while (enumerator_951.hasCurrentObject ()) {
    switch (enumerator_951.current (HERE).readProperty_mObservableProperty ().enumValue ()) {
    case GGS_observablePropertyAST::Enumeration::invalid:
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_rootProperty:
      {
        GGS_lstring extractedValue_1039_propertyName_0 ;
        enumerator_951.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_rootProperty (extractedValue_1039_propertyName_0) ;
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          const GGS_transientDeclarationAST temp_8 = this ;
          test_7 = GGS_bool (ComparisonKind::notEqual, temp_8.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            {
            const GGS_transientDeclarationAST temp_9 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_666, GGS_lstring::init_21__21_ (temp_9.readProperty_mRootEntityName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 23)).add_operation (extractedValue_1039_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 23)), extractedValue_1039_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.galgas4", 23)) ;
            }
          }
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_rootPropertyWithOption:
      {
        GGS_lstring extractedValue_1275_propertyName_0 ;
        GGS_lstring extractedValue_1289__1 ;
        enumerator_951.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_rootPropertyWithOption (extractedValue_1275_propertyName_0, extractedValue_1289__1) ;
        GalgasBool test_10 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_10) {
          const GGS_transientDeclarationAST temp_11 = this ;
          test_10 = GGS_bool (ComparisonKind::notEqual, temp_11.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_10) {
            {
            const GGS_transientDeclarationAST temp_12 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_666, GGS_lstring::init_21__21_ (temp_12.readProperty_mRootEntityName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 27)).add_operation (extractedValue_1275_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 27)), extractedValue_1275_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.galgas4", 27)) ;
            }
          }
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_rootPropertyRelationship:
      {
        GGS_lstring extractedValue_1516_relationshipName_0 ;
        GGS_lstring extractedValue_1534__1 ;
        enumerator_951.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_rootPropertyRelationship (extractedValue_1516_relationshipName_0, extractedValue_1534__1) ;
        GalgasBool test_13 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_13) {
          const GGS_transientDeclarationAST temp_14 = this ;
          test_13 = GGS_bool (ComparisonKind::notEqual, temp_14.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_13) {
            {
            const GGS_transientDeclarationAST temp_15 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_666, GGS_lstring::init_21__21_ (temp_15.readProperty_mRootEntityName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 31)).add_operation (extractedValue_1516_relationshipName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 31)), extractedValue_1516_relationshipName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.galgas4", 31)) ;
            }
          }
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_rootPropertyNone:
      {
        GGS_lstring extractedValue_1761_relationshipName_0 ;
        enumerator_951.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_rootPropertyNone (extractedValue_1761_relationshipName_0) ;
        GalgasBool test_16 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_16) {
          const GGS_transientDeclarationAST temp_17 = this ;
          test_16 = GGS_bool (ComparisonKind::notEqual, temp_17.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_16) {
            {
            const GGS_transientDeclarationAST temp_18 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_666, GGS_lstring::init_21__21_ (temp_18.readProperty_mRootEntityName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 35)).add_operation (extractedValue_1761_relationshipName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 35)), extractedValue_1761_relationshipName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.galgas4", 35)) ;
            }
          }
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfWithoutProperty:
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfProperty:
      {
        GGS_lstring extractedValue_2036_propertyName_0 ;
        enumerator_951.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfProperty (extractedValue_2036_propertyName_0) ;
        {
        const GGS_transientDeclarationAST temp_19 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_666, GGS_lstring::init_21__21_ (temp_19.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 39)).add_operation (extractedValue_2036_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 39)), extractedValue_2036_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.galgas4", 39)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfPropertyWithOption:
      {
        GGS_lstring extractedValue_2212_propertyName_0 ;
        GGS_lstring extractedValue_2226__1 ;
        enumerator_951.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfPropertyWithOption (extractedValue_2212_propertyName_0, extractedValue_2226__1) ;
        {
        const GGS_transientDeclarationAST temp_20 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_666, GGS_lstring::init_21__21_ (temp_20.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 41)).add_operation (extractedValue_2212_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 41)), extractedValue_2212_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.galgas4", 41)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfPropertyArray:
      {
        GGS_lstring extractedValue_2386_propertyName_0 ;
        GGS_lstring extractedValue_2400__1 ;
        enumerator_951.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfPropertyArray (extractedValue_2386_propertyName_0, extractedValue_2400__1) ;
        {
        const GGS_transientDeclarationAST temp_21 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_666, GGS_lstring::init_21__21_ (temp_21.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 43)).add_operation (extractedValue_2386_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 43)), extractedValue_2386_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.galgas4", 43)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfPropertyObject:
      {
        GGS_lstring extractedValue_2561_propertyName_0 ;
        GGS_lstring extractedValue_2575__1 ;
        enumerator_951.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfPropertyObject (extractedValue_2561_propertyName_0, extractedValue_2575__1) ;
        {
        const GGS_transientDeclarationAST temp_22 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_666, GGS_lstring::init_21__21_ (temp_22.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 45)).add_operation (extractedValue_2561_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 45)), extractedValue_2561_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.galgas4", 45)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfPropertyNone:
      {
        GGS_lstring extractedValue_2734_propertyName_0 ;
        enumerator_951.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfPropertyNone (extractedValue_2734_propertyName_0) ;
        {
        const GGS_transientDeclarationAST temp_23 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_666, GGS_lstring::init_21__21_ (temp_23.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 47)).add_operation (extractedValue_2734_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 47)), extractedValue_2734_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.galgas4", 47)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_prefsProperty:
      {
        GGS_lstring extractedValue_2901_propertyName_0 ;
        enumerator_951.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_prefsProperty (extractedValue_2901_propertyName_0) ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_666, GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 49)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 49)).add_operation (extractedValue_2901_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 49)), extractedValue_2901_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.galgas4", 49)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_prefsPropertyWithOption:
      {
        GGS_lstring extractedValue_3074_propertyName_0 ;
        GGS_lstring extractedValue_3088__1 ;
        enumerator_951.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_prefsPropertyWithOption (extractedValue_3074_propertyName_0, extractedValue_3088__1) ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_666, GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 51)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 51)).add_operation (extractedValue_3074_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 51)), extractedValue_3074_propertyName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.galgas4", 51)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfControllerProperty:
      {
        GGS_lstring extractedValue_3249_controllerName_0 ;
        GGS_lstring extractedValue_3272_propertyName_1 ;
        enumerator_951.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfControllerProperty (extractedValue_3249_controllerName_0, extractedValue_3272_propertyName_1) ;
        {
        const GGS_transientDeclarationAST temp_24 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_666, GGS_lstring::init_21__21_ (temp_24.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 53)).add_operation (extractedValue_3249_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 53)), extractedValue_3249_controllerName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.galgas4", 53)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfControllerSecondaryProperty:
      {
        GGS_lstring extractedValue_3462_controllerName_0 ;
        GGS_lstring extractedValue_3485_propertyName_1 ;
        GGS_lstring extractedValue_3506_secondaryPropertyName_2 ;
        enumerator_951.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfControllerSecondaryProperty (extractedValue_3462_controllerName_0, extractedValue_3485_propertyName_1, extractedValue_3506_secondaryPropertyName_2) ;
        {
        const GGS_transientDeclarationAST temp_25 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_666, GGS_lstring::init_21__21_ (temp_25.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 55)).add_operation (extractedValue_3462_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 55)), extractedValue_3462_controllerName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.galgas4", 55)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfControllerAllProperties:
      {
        GGS_lstring extractedValue_3701_controllerName_0 ;
        GGS_lstring extractedValue_3724_propertyName_1 ;
        GGS_lstring extractedValue_3745_secondaryPropertyName_2 ;
        enumerator_951.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfControllerAllProperties (extractedValue_3701_controllerName_0, extractedValue_3724_propertyName_1, extractedValue_3745_secondaryPropertyName_2) ;
        {
        const GGS_transientDeclarationAST temp_26 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_666, GGS_lstring::init_21__21_ (temp_26.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 57)).add_operation (extractedValue_3701_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 57)), extractedValue_3701_controllerName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.galgas4", 57)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_selfControllerOneProperty:
      {
        GGS_lstring extractedValue_3938_controllerName_0 ;
        GGS_lstring extractedValue_3961_propertyName_1 ;
        enumerator_951.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_selfControllerOneProperty (extractedValue_3938_controllerName_0, extractedValue_3961_propertyName_1) ;
        {
        const GGS_transientDeclarationAST temp_27 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_666, GGS_lstring::init_21__21_ (temp_27.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 59)).add_operation (extractedValue_3938_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 59)), extractedValue_3938_controllerName_0.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.galgas4", 59)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_signatureProperty:
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_versionProperty:
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_versionShouldChangeProperty:
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_superProperty:
      {
        GGS_lstring extractedValue_4246_superEntityName_0 ;
        GGS_lstring extractedValue_4272_propertyName_1 ;
        enumerator_951.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_superProperty (extractedValue_4246_superEntityName_0, extractedValue_4272_propertyName_1) ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_666, GGS_lstring::init_21__21_ (extractedValue_4246_superEntityName_0.readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 64)).add_operation (extractedValue_4272_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 64)), extractedValue_4272_propertyName_1.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.galgas4", 64)) ;
        }
      }
      break ;
    case GGS_observablePropertyAST::Enumeration::enum_superPropertyWithDefaultValue:
      {
        GGS_lstring extractedValue_4455_superEntityName_0 ;
        GGS_lstring extractedValue_4481_propertyName_1 ;
        GGS_abstractDefaultValue extractedValue_4495__2 ;
        enumerator_951.current (HERE).readProperty_mObservableProperty ().getAssociatedValuesFor_superPropertyWithDefaultValue (extractedValue_4455_superEntityName_0, extractedValue_4481_propertyName_1, extractedValue_4495__2) ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_666, GGS_lstring::init_21__21_ (extractedValue_4455_superEntityName_0.readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 66)).add_operation (extractedValue_4481_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 66)), extractedValue_4481_propertyName_1.readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("transient-property.galgas4", 66)) ;
        }
      }
      break ;
    }
    enumerator_951.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@transientDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_transientDeclarationAST::getter_nodeKey (Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_transientDeclarationAST temp_0 = this ;
  const GGS_transientDeclarationAST temp_1 = this ;
  const GGS_transientDeclarationAST temp_2 = this ;
  result_result = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 74)).add_operation (temp_1.readProperty_mTransientName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 74)), temp_2.readProperty_mTransientName ().readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@transientDeclarationAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_transientDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                              GGS_generationStruct & /* ioArgument_ioGeneration */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_transientDeclarationAST temp_0 = this ;
  GGS_classMap_2E_element var_entry_7287 = ioArgument_ioSemanticContext.readProperty_mClassMap ().readSubscript__3F_searchKey (temp_0.readProperty_mClassName (), inCompiler COMMA_HERE) ;
  GGS_classKind var_classKind_7426 ;
  const GGS_transientDeclarationAST temp_1 = this ;
  GGS_propertyMap joker_7437_3 ; // Joker input parameter
  GGS_actionMap joker_7437_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_7437_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mTransientTypeName (), var_classKind_7426, joker_7437_3, joker_7437_2, joker_7437_1, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 155)) ;
  switch (var_classKind_7426.enumValue ()) {
  case GGS_classKind::Enumeration::invalid:
    break ;
  case GGS_classKind::Enumeration::enum_prefs:
    {
      const GGS_transientDeclarationAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mTransientTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray3  COMMA_SOURCE_FILE ("transient-property.galgas4", 158)) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_atomic:
    {
      GGS_typeKind extractedValue_7572_kind_0 ;
      var_classKind_7426.getAssociatedValuesFor_atomic (extractedValue_7572_kind_0) ;
      {
      const GGS_transientDeclarationAST temp_4 = this ;
      const GGS_transientDeclarationAST temp_5 = this ;
      const GGS_transientDeclarationAST temp_6 = this ;
      var_entry_7287.mProperty_mPropertyMap.setter_insertKey (temp_4.readProperty_mTransientName (), GGS_propertyKind::class_func_property (extractedValue_7572_kind_0, GGS_propertyAccessibility::class_func_transient (GGS_bool (ComparisonKind::equal, temp_5.readProperty_mDependencyList ().getter_count (SOURCE_FILE ("transient-property.galgas4", 162)).objectCompare (GGS_uint (uint32_t (0U))))  COMMA_SOURCE_FILE ("transient-property.galgas4", 162))  COMMA_SOURCE_FILE ("transient-property.galgas4", 162)), GGS_actionMap::init (inCompiler COMMA_HERE), temp_6.readProperty_mIsOverriding (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 160)) ;
      }
    }
    break ;
  case GGS_classKind::Enumeration::enum_document:
    {
      GGS_lstring extractedValue_7822__0 ;
      var_classKind_7426.getAssociatedValuesFor_document (extractedValue_7822__0) ;
      const GGS_transientDeclarationAST temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mTransientTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray8  COMMA_SOURCE_FILE ("transient-property.galgas4", 167)) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_entity:
    {
      GGS_string extractedValue_7920__0 ;
      GGS_bool extractedValue_7920__1 ;
      GGS_bool extractedValue_7920__2 ;
      GGS_bool extractedValue_7920__3 ;
      var_classKind_7426.getAssociatedValuesFor_entity (extractedValue_7920__0, extractedValue_7920__1, extractedValue_7920__2, extractedValue_7920__3) ;
      const GGS_transientDeclarationAST temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mTransientTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray10  COMMA_SOURCE_FILE ("transient-property.galgas4", 169)) ;
    }
    break ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_replace (var_entry_7287, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 171)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@transientDeclarationAST thirdAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_transientDeclarationAST::method_thirdAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                              GGS_generationStruct & ioArgument_ioGeneration,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_classKind var_classKind_8541 ;
  const GGS_transientDeclarationAST temp_0 = this ;
  GGS_propertyMap joker_8552_3 ; // Joker input parameter
  GGS_actionMap joker_8552_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_8552_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_0.readProperty_mTransientTypeName (), var_classKind_8541, joker_8552_3, joker_8552_2, joker_8552_1, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 183)) ;
  GGS_typeKind var_typeKind_8589 ;
  switch (var_classKind_8541.enumValue ()) {
  case GGS_classKind::Enumeration::invalid:
    break ;
  case GGS_classKind::Enumeration::enum_prefs:
    {
      const GGS_transientDeclarationAST temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mTransientTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray2  COMMA_SOURCE_FILE ("transient-property.galgas4", 188)) ;
      var_typeKind_8589.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_classKind::Enumeration::enum_atomic:
    {
      GGS_typeKind extractedValue_8744_kind_0 ;
      var_classKind_8541.getAssociatedValuesFor_atomic (extractedValue_8744_kind_0) ;
      var_typeKind_8589 = extractedValue_8744_kind_0 ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_document:
    {
      GGS_lstring extractedValue_8789__0 ;
      var_classKind_8541.getAssociatedValuesFor_document (extractedValue_8789__0) ;
      const GGS_transientDeclarationAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mTransientTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray4  COMMA_SOURCE_FILE ("transient-property.galgas4", 192)) ;
      var_typeKind_8589.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_classKind::Enumeration::enum_entity:
    {
      GGS_string extractedValue_8897__0 ;
      GGS_bool extractedValue_8897__1 ;
      GGS_bool extractedValue_8897__2 ;
      GGS_bool extractedValue_8897__3 ;
      var_classKind_8541.getAssociatedValuesFor_entity (extractedValue_8897__0, extractedValue_8897__1, extractedValue_8897__2, extractedValue_8897__3) ;
      const GGS_transientDeclarationAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mTransientTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("transient-property.galgas4", 194)) ;
      var_typeKind_8589.drop () ; // Release error dropped variable
    }
    break ;
  }
  GGS_propertyMap var_rootProperties_9035 ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    const GGS_transientDeclarationAST temp_8 = this ;
    test_7 = GGS_bool (ComparisonKind::equal, temp_8.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      var_rootProperties_9035 = GGS_propertyMap::init (inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_7) {
    const GGS_transientDeclarationAST temp_9 = this ;
    GGS_classKind joker_9190 ; // Joker input parameter
    GGS_actionMap joker_9211_2 ; // Joker input parameter
    GGS_propertyGenerationList joker_9211_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_9.readProperty_mRootEntityName (), joker_9190, var_rootProperties_9035, joker_9211_2, joker_9211_1, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 201)) ;
  }
  GGS_classKind var_currentClassKind_9315 ;
  GGS_propertyMap var_properties_9338 ;
  const GGS_transientDeclarationAST temp_10 = this ;
  GGS_actionMap joker_9350_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_9350_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_10.readProperty_mClassName (), var_currentClassKind_9315, var_properties_9338, joker_9350_2, joker_9350_1, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 204)) ;
  GGS_transientDependencyListForGeneration temp_11 = GGS_transientDependencyListForGeneration::init (inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 206)) ;
  GGS_transientDependencyListForGeneration var_dependencies_9430 = temp_11 ;
  const GGS_transientDeclarationAST temp_12 = this ;
  UpEnumerator_observablePropertyList enumerator_9455 (temp_12.readProperty_mDependencyList ()) ;
  while (enumerator_9455.hasCurrentObject ()) {
    GGS_propertyKind var_dependencyKind_9645 ;
    GGS_string var_swiftTypeStringForTransientFunctionArgument_9680 ;
    GGS_string var_protocolTypeName_9744 ;
    GGS_string var_defaultValueAsString_9781 ;
    extensionMethod_analyzeObservableProperty (enumerator_9455.current_mObservableProperty (HERE), var_rootProperties_9035, ioArgument_ioSemanticContext, var_properties_9338, var_dependencyKind_9645, var_swiftTypeStringForTransientFunctionArgument_9680, var_protocolTypeName_9744, var_defaultValueAsString_9781, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 208)) ;
    switch (var_dependencyKind_9645.enumValue ()) {
    case GGS_propertyKind::Enumeration::invalid:
      break ;
    case GGS_propertyKind::Enumeration::enum_property:
      break ;
    case GGS_propertyKind::Enumeration::enum_toMany:
      break ;
    case GGS_propertyKind::Enumeration::enum_toOne:
      break ;
    case GGS_propertyKind::Enumeration::enum_arrayController:
      {
        GGS_lstring extractedValue_9999__0 ;
        GGS_bool extractedValue_9999__1 ;
        var_dependencyKind_9645.getAssociatedValuesFor_arrayController (extractedValue_9999__0, extractedValue_9999__1) ;
        GenericArray <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_9455.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 223)), GGS_string ("only an atomic property can be observed"), fixItArray13  COMMA_SOURCE_FILE ("transient-property.galgas4", 223)) ;
      }
      break ;
    case GGS_propertyKind::Enumeration::enum_selectionController:
      {
        GGS_string extractedValue_10121__0 ;
        var_dependencyKind_9645.getAssociatedValuesFor_selectionController (extractedValue_10121__0) ;
        GenericArray <FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_9455.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 225)), GGS_string ("only an atomic property can be observed"), fixItArray14  COMMA_SOURCE_FILE ("transient-property.galgas4", 225)) ;
      }
      break ;
    }
    {
    var_dependencies_9430.setter_append (enumerator_9455.current_mObservableProperty (HERE), extensionGetter_modelStringFunctionArgument (enumerator_9455.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 229)), var_swiftTypeStringForTransientFunctionArgument_9680, var_defaultValueAsString_9781, var_protocolTypeName_9744, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 227)) ;
    }
    enumerator_9455.gotoNextObject () ;
  }
  {
  const GGS_transientDeclarationAST temp_15 = this ;
  const GGS_transientDeclarationAST temp_16 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_transientRoutineGeneration::init_21__21__21__21__21_ (temp_15.readProperty_mClassName ().readProperty_string (), temp_16.readProperty_mTransientName ().readProperty_string (), var_typeKind_8589, GGS_string ("transient"), var_dependencies_9430, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 235)) ;
  }
  const GGS_transientDeclarationAST temp_17 = this ;
  GGS_classMap_2E_element var_entry_10636 = ioArgument_ioSemanticContext.readProperty_mClassMap ().readSubscript__3F_searchKey (temp_17.readProperty_mClassName (), inCompiler COMMA_HERE) ;
  GGS_bool var_generate_10716 ;
  switch (var_currentClassKind_9315.enumValue ()) {
  case GGS_classKind::Enumeration::invalid:
    break ;
  case GGS_classKind::Enumeration::enum_prefs:
    {
      var_generate_10716 = GGS_bool (true) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_document:
    {
      GGS_lstring extractedValue_10811__0 ;
      var_currentClassKind_9315.getAssociatedValuesFor_document (extractedValue_10811__0) ;
      var_generate_10716 = GGS_bool (true) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_atomic:
    {
      GGS_typeKind extractedValue_10855__0 ;
      var_currentClassKind_9315.getAssociatedValuesFor_atomic (extractedValue_10855__0) ;
      var_generate_10716 = GGS_bool (true) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_entity:
    {
      GGS_string extractedValue_10899__0 ;
      GGS_bool extractedValue_10902_graphic_1 ;
      GGS_bool extractedValue_10912__2 ;
      GGS_bool extractedValue_10912__3 ;
      var_currentClassKind_9315.getAssociatedValuesFor_entity (extractedValue_10899__0, extractedValue_10902_graphic_1, extractedValue_10912__2, extractedValue_10912__3) ;
      GalgasBool test_18 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_18) {
        test_18 = extractedValue_10902_graphic_1.boolEnum () ;
        if (GalgasBool::boolTrue == test_18) {
          const GGS_transientDeclarationAST temp_19 = this ;
          const GGS_transientDeclarationAST temp_20 = this ;
          var_generate_10716 = GGS_bool (ComparisonKind::notEqual, temp_19.readProperty_mTransientName ().readProperty_string ().objectCompare (GGS_string ("selectionDisplay"))).operator_and (GGS_bool (ComparisonKind::notEqual, temp_20.readProperty_mTransientName ().readProperty_string ().objectCompare (GGS_string ("objectDisplay"))) COMMA_SOURCE_FILE ("transient-property.galgas4", 254)) ;
        }
      }
      if (GalgasBool::boolFalse == test_18) {
        var_generate_10716 = GGS_bool (true) ;
      }
    }
    break ;
  }
  {
  const GGS_transientDeclarationAST temp_21 = this ;
  const GGS_transientDeclarationAST temp_22 = this ;
  var_entry_10636.mProperty_mPropertyGenerationList.setter_append (GGS_transientPropertyGeneration::init_21__21__21__21__21_ (temp_21.readProperty_mTransientName ().readProperty_string (), temp_22.readProperty_mClassName ().readProperty_string (), var_typeKind_8589, var_dependencies_9430, var_generate_10716, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 259)) ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_replace (var_entry_10636, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 267)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@transientPropertyGeneration declarationInSelectionControllerCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_transientPropertyGeneration::getter_declarationInSelectionControllerCode (Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("transient-property.galgas4", 291)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 291)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 291)) ;
  const GGS_transientPropertyGeneration temp_0 = this ;
  result_result.plusAssignOperation(GGS_string ("  //   Selection observable property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 292)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 292)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 292)) ;
  result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("transient-property.galgas4", 293)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 293)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 293)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 293)) ;
  const GGS_transientPropertyGeneration temp_1 = this ;
  const GGS_transientPropertyGeneration temp_2 = this ;
  result_result.plusAssignOperation(GGS_string ("  final let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 294)).add_operation (GGS_string ("_property = EBTransientProperty <"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 294)).add_operation (extensionGetter_swiftTypeName (temp_2.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 294)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 294)).add_operation (GGS_string ("> ()\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 294)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 294)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@transientPropertyGeneration initCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_transientPropertyGeneration::getter_initCode (Compiler */* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@transientPropertyGeneration bindPropertyInSelectionController'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_transientPropertyGeneration::getter_bindPropertyInSelectionController (Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("transient-property.galgas4", 306)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 306)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 306)) ;
  const GGS_transientPropertyGeneration temp_0 = this ;
  result_result.plusAssignOperation(GGS_string ("  private final func bind_property_").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 307)).add_operation (GGS_string (" () {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 307)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 307)) ;
  const GGS_transientPropertyGeneration temp_1 = this ;
  const GGS_transientPropertyGeneration temp_2 = this ;
  result_result.plusAssignOperation(GGS_string ("    self.selectedArray_property.toMany_").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 308)).add_operation (GGS_string ("_StartsBeingObserved (by: self."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 308)).add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 308)).add_operation (GGS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 308)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 308)) ;
  const GGS_transientPropertyGeneration temp_3 = this ;
  result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 309)).add_operation (GGS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 309)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 309)) ;
  result_result.plusAssignOperation(GGS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 310)) ;
  result_result.plusAssignOperation(GGS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 311)) ;
  result_result.plusAssignOperation(GGS_string ("        case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 312)) ;
  result_result.plusAssignOperation(GGS_string ("          return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 313)) ;
  result_result.plusAssignOperation(GGS_string ("        case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 314)) ;
  result_result.plusAssignOperation(GGS_string ("          return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 315)) ;
  result_result.plusAssignOperation(GGS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 316)) ;
  const GGS_transientPropertyGeneration temp_4 = this ;
  result_result.plusAssignOperation(GGS_string ("          var s = Set <").add_operation (extensionGetter_swiftTypeName (temp_4.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 317)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 317)).add_operation (GGS_string ("> ()\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 317)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 317)) ;
  result_result.plusAssignOperation(GGS_string ("          var isMultipleSelection = false\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 318)) ;
  result_result.plusAssignOperation(GGS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 319)) ;
  const GGS_transientPropertyGeneration temp_5 = this ;
  result_result.plusAssignOperation(GGS_string ("            switch object.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 320)).add_operation (GGS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 320)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 320)) ;
  result_result.plusAssignOperation(GGS_string ("            case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 321)) ;
  result_result.plusAssignOperation(GGS_string ("              return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 322)) ;
  result_result.plusAssignOperation(GGS_string ("            case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 323)) ;
  result_result.plusAssignOperation(GGS_string ("              isMultipleSelection = true\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 324)) ;
  result_result.plusAssignOperation(GGS_string ("            case .single (let vProp) :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 325)) ;
  result_result.plusAssignOperation(GGS_string ("              s.insert (vProp)\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 326)) ;
  result_result.plusAssignOperation(GGS_string ("            }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 327)) ;
  result_result.plusAssignOperation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 328)) ;
  result_result.plusAssignOperation(GGS_string ("          if isMultipleSelection {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 329)) ;
  result_result.plusAssignOperation(GGS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 330)) ;
  result_result.plusAssignOperation(GGS_string ("          }else if s.count == 0 {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 331)) ;
  result_result.plusAssignOperation(GGS_string ("            return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 332)) ;
  result_result.plusAssignOperation(GGS_string ("          }else if s.count == 1 {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 333)) ;
  result_result.plusAssignOperation(GGS_string ("            return .single (s.first!)\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 334)) ;
  result_result.plusAssignOperation(GGS_string ("          }else{\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 335)) ;
  result_result.plusAssignOperation(GGS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 336)) ;
  result_result.plusAssignOperation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 337)) ;
  result_result.plusAssignOperation(GGS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 338)) ;
  result_result.plusAssignOperation(GGS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 339)) ;
  result_result.plusAssignOperation(GGS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 340)) ;
  result_result.plusAssignOperation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 341)) ;
  result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 342)) ;
  result_result.plusAssignOperation(GGS_string ("  }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 343)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@transientPropertyGeneration propertyDeclarationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_transientPropertyGeneration::getter_propertyDeclarationCode (const GGS_bool constinArgument_inPreferences,
                                                                             const GGS_bool /* constinArgument_inGenerationDirectAccess */,
                                                                             const GGS_stringset constinArgument_inOverriddenTransients,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_transientPropertyGeneration temp_1 = this ;
    const GGS_transientPropertyGeneration temp_2 = this ;
    test_0 = temp_1.readProperty_mGenerate ().operator_and (constinArgument_inOverriddenTransients.getter_hasKey (temp_2.readProperty_mPropertyName () COMMA_SOURCE_FILE ("transient-property.galgas4", 354)).operator_not (SOURCE_FILE ("transient-property.galgas4", 354)) COMMA_SOURCE_FILE ("transient-property.galgas4", 354)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = constinArgument_inPreferences.boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          result_result.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("transient-property.galgas4", 356)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 356)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 356)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 356)) ;
          const GGS_transientPropertyGeneration temp_4 = this ;
          result_result.plusAssignOperation(GGS_string ("//   Transient property: ").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 357)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 357)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 357)) ;
          result_result.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("transient-property.galgas4", 358)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 358)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 358)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 358)) ;
          const GGS_transientPropertyGeneration temp_5 = this ;
          const GGS_transientPropertyGeneration temp_6 = this ;
          result_result.plusAssignOperation(GGS_string ("@MainActor let preferences_").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 359)).add_operation (GGS_string ("_property = EBTransientProperty <"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 359)).add_operation (extensionGetter_swiftTypeName (temp_6.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 359)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 359)).add_operation (GGS_string ("> ()\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 359)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 359)) ;
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("transient-property.galgas4", 361)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 361)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 361)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 361)) ;
        const GGS_transientPropertyGeneration temp_7 = this ;
        result_result.plusAssignOperation(GGS_string ("  //   Transient property: ").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 362)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 362)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 362)) ;
        result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("transient-property.galgas4", 363)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 363)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 363)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 363)) ;
        const GGS_transientPropertyGeneration temp_8 = this ;
        const GGS_transientPropertyGeneration temp_9 = this ;
        result_result.plusAssignOperation(GGS_string ("  final let ").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 364)).add_operation (GGS_string ("_property = EBTransientProperty <"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 364)).add_operation (extensionGetter_swiftTypeName (temp_9.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 364)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 364)).add_operation (GGS_string ("> ()\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 364)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 364)) ;
        result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("transient-property.galgas4", 365)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 365)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 365)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 365)) ;
        const GGS_transientPropertyGeneration temp_10 = this ;
        const GGS_transientPropertyGeneration temp_11 = this ;
        result_result.plusAssignOperation(GGS_string ("  final var ").add_operation (temp_10.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 366)).add_operation (GGS_string (" : "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 366)).add_operation (extensionGetter_swiftTypeName (temp_11.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 366)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 366)).add_operation (GGS_string ("\? {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 366)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 366)) ;
        const GGS_transientPropertyGeneration temp_12 = this ;
        result_result.plusAssignOperation(GGS_string ("    return self.").add_operation (temp_12.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 367)).add_operation (GGS_string ("_property.optionalValue\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 367)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 367)) ;
        result_result.plusAssignOperation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 368)) ;
      }
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@transientPropertyGeneration configurationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_transientPropertyGeneration::getter_configurationCode (const GGS_bool constinArgument_inPreferences,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  GGS_string temp_0 ;
  const GalgasBool test_1 = constinArgument_inPreferences.boolEnum () ;
  if (GalgasBool::boolTrue == test_1) {
    temp_0 = GGS_string ("preferences_") ;
  }else if (GalgasBool::boolFalse == test_1) {
    temp_0 = GGS_string ("self.") ;
  }
  GGS_string var_prefix_16600 = temp_0 ;
  result_result = GGS_string::makeEmptyString () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_transientPropertyGeneration temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::greaterThan, temp_3.readProperty_mDependencyList ().getter_count (SOURCE_FILE ("transient-property.galgas4", 378)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_transientPropertyGeneration temp_4 = this ;
      GGS_bool var_needs_5F_unwSelf_16727 = extensionGetter_needs_5F_unwSelf (temp_4.readProperty_mDependencyList (), constinArgument_inPreferences, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 379)) ;
      const GGS_transientPropertyGeneration temp_5 = this ;
      result_result.plusAssignOperation(GGS_string ("  //--- Atomic property: ").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 380)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 380)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 380)) ;
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = var_needs_5F_unwSelf_16727.boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          const GGS_transientPropertyGeneration temp_7 = this ;
          result_result.plusAssignOperation(GGS_string ("    ").add_operation (var_prefix_16600, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 382)).add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 382)).add_operation (GGS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 382)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 382)) ;
          result_result.plusAssignOperation(GGS_string ("      if let unwSelf = self {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 383)) ;
          const GGS_transientPropertyGeneration temp_8 = this ;
          const GGS_transientPropertyGeneration temp_9 = this ;
          const GGS_transientPropertyGeneration temp_10 = this ;
          result_result.plusAssignOperation(extensionGetter_transientComputeFunctionCall (temp_8.readProperty_mDependencyList (), constinArgument_inPreferences, temp_9.readProperty_mClassName (), temp_10.readProperty_mPropertyName (), GGS_string ("transient"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 384)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 384)) ;
          result_result.plusAssignOperation(GGS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 385)) ;
          result_result.plusAssignOperation(GGS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 386)) ;
          result_result.plusAssignOperation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 387)) ;
        }
      }
      if (GalgasBool::boolFalse == test_6) {
        const GGS_transientPropertyGeneration temp_11 = this ;
        result_result.plusAssignOperation(GGS_string ("    ").add_operation (var_prefix_16600, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 389)).add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 389)).add_operation (GGS_string ("_property.mReadModelFunction = {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 389)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 389)) ;
        const GGS_transientPropertyGeneration temp_12 = this ;
        const GGS_transientPropertyGeneration temp_13 = this ;
        const GGS_transientPropertyGeneration temp_14 = this ;
        result_result.plusAssignOperation(extensionGetter_transientComputeFunctionCall (temp_12.readProperty_mDependencyList (), constinArgument_inPreferences, temp_13.readProperty_mClassName (), temp_14.readProperty_mPropertyName (), GGS_string ("transient"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 390)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 390)) ;
      }
      result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 392)) ;
      const GGS_transientPropertyGeneration temp_15 = this ;
      UpEnumerator_transientDependencyListForGeneration enumerator_17570 (temp_15.readProperty_mDependencyList ()) ;
      while (enumerator_17570.hasCurrentObject ()) {
        GGS_string var_s_17610 = extensionGetter_generateAddObserverCall (enumerator_17570.current_mDependency (HERE), constinArgument_inPreferences, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 394)) ;
        GalgasBool test_16 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_16) {
          test_16 = GGS_bool (ComparisonKind::notEqual, var_s_17610.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_16) {
            const GGS_transientPropertyGeneration temp_17 = this ;
            result_result.plusAssignOperation(GGS_string ("    ").add_operation (var_s_17610, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 396)).add_operation (GGS_string (" (by: "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 396)).add_operation (var_prefix_16600, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 396)).add_operation (temp_17.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 396)).add_operation (GGS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 396)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas4", 396)) ;
          }
        }
        enumerator_17570.gotoNextObject () ;
      }
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@transientRoutineGeneration generateCodePhase2'
//--------------------------------------------------------------------------------------------------

void cPtr_transientRoutineGeneration::method_generateCodePhase_32_ (const GGS_string /* constinArgument_inOutputDirectory */,
                                                                    const GGS_generationStruct /* constinArgument_inGenerationStruct */,
                                                                    const GGS_stringset /* constinArgument_inUsedProtocolSet */,
                                                                    GGS_stringset & /* ioArgument_ioGeneratedFileSet */,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@transientRoutineGeneration generateCodePhase1'
//--------------------------------------------------------------------------------------------------

void cPtr_transientRoutineGeneration::method_generateCodePhase_31_ (const GGS_string constinArgument_inOutputDirectory,
                                                                    const GGS_generationStruct /* constinArgument_inGenerationStruct */,
                                                                    GGS_stringset & ioArgument_ioUsedProtocolSet,
                                                                    GGS_stringset & ioArgument_ioGeneratedFileSet,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_transientRoutineGeneration temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mDependencyList ().getter_count (SOURCE_FILE ("transient-property.galgas4", 614)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_transientRoutineGeneration temp_2 = this ;
      UpEnumerator_transientDependencyListForGeneration enumerator_28893 (temp_2.readProperty_mDependencyList ()) ;
      while (enumerator_28893.hasCurrentObject ()) {
        GalgasBool test_3 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_3) {
          test_3 = GGS_bool (ComparisonKind::notEqual, enumerator_28893.current (HERE).readProperty_mProtocolName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_3) {
            ioArgument_ioUsedProtocolSet.plusPlusAssignOperation (enumerator_28893.current (HERE).readProperty_mProtocolName ()  COMMA_SOURCE_FILE ("transient-property.galgas4", 617)) ;
          }
        }
        enumerator_28893.gotoNextObject () ;
      }
      const GGS_transientRoutineGeneration temp_4 = this ;
      const GGS_transientRoutineGeneration temp_5 = this ;
      const GGS_transientRoutineGeneration temp_6 = this ;
      const GGS_transientRoutineGeneration temp_7 = this ;
      const GGS_transientRoutineGeneration temp_8 = this ;
      GGS_string var_s_29075 = GGS_string (filewrapperTemplate_transientManager_transientComputationFunctionFile (inCompiler, temp_4.readProperty_mOwnerName (), temp_5.readProperty_mTransientName (), temp_6.readProperty_mDependencyList (), temp_7.readProperty_mTransientType (), temp_8.readProperty_mGeneratedFunctionNamePrefix () COMMA_SOURCE_FILE ("transient-property.galgas4", 621))) ;
      GGS_string var_header_29316 = GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("transient-property.galgas4", 628)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 628)).add_operation (GGS_string ("\n//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n//"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 628)).add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("transient-property.galgas4", 630)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 630)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 630)).add_operation (GGS_string ("import AppKit\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 630)).add_operation (GGS_string ("//"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 631)).add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("transient-property.galgas4", 632)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 632)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 632)) ;
      const GGS_transientRoutineGeneration temp_9 = this ;
      const GGS_transientRoutineGeneration temp_10 = this ;
      const GGS_transientRoutineGeneration temp_11 = this ;
      GGS_string var_fileName_29667 = temp_9.readProperty_mGeneratedFunctionNamePrefix ().add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 633)).add_operation (temp_10.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 633)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 633)).add_operation (temp_11.readProperty_mTransientName (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 633)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 633)) ;
      {
      ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_29667, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 634)) ;
      }
      {
      GGS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_29667, GGS_string ("//"), var_header_29316, GGS_string ("\n\n"), var_s_29075, GGS_string ("\n"), GGS_string ("}\n\n//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("transient-property.galgas4", 643)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 643)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 643)), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 635)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'transientManager'
//
//--------------------------------------------------------------------------------------------------

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_transientManager_3 [1] = {
  nullptr
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_transientManager_3 [1] = {
  nullptr
} ;

//--- Directory 'controllers'

const cDirectoryWrapper gWrapperDirectory_3_transientManager (
  "controllers",
  0,
  gWrapperAllFiles_transientManager_3,
  0,
  gWrapperAllDirectories_transientManager_3
) ;

//--- All files of 'standard-properties' directory

static const cRegularFileWrapper * gWrapperAllFiles_transientManager_1 [1] = {
  nullptr
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_transientManager_1 [1] = {
  nullptr
} ;

//--- Directory 'standard-properties'

const cDirectoryWrapper gWrapperDirectory_1_transientManager (
  "standard-properties",
  0,
  gWrapperAllFiles_transientManager_1,
  0,
  gWrapperAllDirectories_transientManager_1
) ;

//--- All files of 'xcode-project' directory

static const cRegularFileWrapper * gWrapperAllFiles_transientManager_2 [1] = {
  nullptr
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_transientManager_2 [1] = {
  nullptr
} ;

//--- Directory 'xcode-project'

const cDirectoryWrapper gWrapperDirectory_2_transientManager (
  "xcode-project",
  0,
  gWrapperAllFiles_transientManager_2,
  0,
  gWrapperAllDirectories_transientManager_2
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_transientManager_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_transientManager_0 [4] = {
  & gWrapperDirectory_3_transientManager,
  & gWrapperDirectory_1_transientManager,
  & gWrapperDirectory_2_transientManager,
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_transientManager (
  "",
  0,
  gWrapperAllFiles_transientManager_0,
  3,
  gWrapperAllDirectories_transientManager_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'transientManager transientComputationFunctionFile'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_transientManager_transientComputationFunctionFile (Compiler * inCompiler,
                                                                                  const GGS_string & in_OWNER_5F_NAME,
                                                                                  const GGS_string & in_TRANSIENT_5F_NAME,
                                                                                  const GGS_transientDependencyListForGeneration & in_DEPENDENCY_5F_LIST,
                                                                                  const GGS_typeKind & in_TRANSIENT_5F_TYPE,
                                                                                  const GGS_string & in_TRANSIENT_5F_FUNCTION_5F_NAME_5F_PREFIX
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n@MainActor func ") ;
  result.appendString (in_TRANSIENT_5F_FUNCTION_5F_NAME_5F_PREFIX.stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_OWNER_5F_NAME.stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_TRANSIENT_5F_NAME.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  GGS_uint index_270_ (0) ;
  if (in_DEPENDENCY_5F_LIST.isValid ()) {
    UpEnumerator_transientDependencyListForGeneration enumerator_270 (in_DEPENDENCY_5F_LIST) ;
    while (enumerator_270.hasCurrentObject ()) {
      result.appendString ("\n       _ ") ;
      result.appendString (enumerator_270.current_mFunctionArgumentName (HERE).stringValue ()) ;
      result.appendString (" : ") ;
      result.appendString (enumerator_270.current_mFunctionArgumentTypeString (HERE).stringValue ()) ;
      enumerator_270.gotoNextObject () ;
      if (enumerator_270.hasCurrentObject ()) {
        result.appendString (",") ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_270_.increment () ;
    }
  }
  result.appendString ("\n) -> ") ;
  result.appendString (extensionGetter_swiftTypeName (in_TRANSIENT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("transient-computation-function.swift.galgasTemplate", 10)).stringValue ()) ;
  result.appendString (" {\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateCode???'
//
//--------------------------------------------------------------------------------------------------

void routine_generateCode_3F__3F__3F_ (const GGS_string constinArgument_inXcodeProjectString,
                                       const GGS_generationStruct constinArgument_inGeneration,
                                       const GGS_string constinArgument_inSourceFile,
                                       Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_outputDirectory_3209 = constinArgument_inSourceFile.getter_deletingLastPathComponent (SOURCE_FILE ("code-generation.galgas4", 67)) ;
  GGS_string var_projectName_3272 = constinArgument_inSourceFile.getter_lastPathComponent (SOURCE_FILE ("code-generation.galgas4", 68)).getter_deletingPathExtension (SOURCE_FILE ("code-generation.galgas4", 68)) ;
  GGS_string var_fileOutputDirectory_3345 = var_outputDirectory_3209.add_operation (GGS_string ("/../"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas4", 69)).add_operation (var_projectName_3272, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas4", 69)) ;
  GGS_stringset var_generatedFileSet_3423 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_stringset var_usedProtocolSet_3462 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator_fileGenerationList enumerator_3490 (constinArgument_inGeneration.readProperty_mFileGenerationList ()) ;
  while (enumerator_3490.hasCurrentObject ()) {
    callExtensionMethod_generateCodePhase_31_ ((cPtr_abstractFileGeneration *) enumerator_3490.current_mFileGeneration (HERE).ptr (), var_fileOutputDirectory_3345, constinArgument_inGeneration, var_usedProtocolSet_3462, var_generatedFileSet_3423, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas4", 73)) ;
    enumerator_3490.gotoNextObject () ;
  }
  UpEnumerator_fileGenerationList enumerator_3701 (constinArgument_inGeneration.readProperty_mFileGenerationList ()) ;
  while (enumerator_3701.hasCurrentObject ()) {
    callExtensionMethod_generateCodePhase_32_ ((cPtr_abstractFileGeneration *) enumerator_3701.current_mFileGeneration (HERE).ptr (), var_fileOutputDirectory_3345, constinArgument_inGeneration, var_usedProtocolSet_3462, var_generatedFileSet_3423, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas4", 81)) ;
    enumerator_3701.gotoNextObject () ;
  }
  {
  routine_generateEBManagedObjectContext_3F__3F__26_ (constinArgument_inGeneration.readProperty_mEntityListForGeneration (), var_fileOutputDirectory_3345, var_generatedFileSet_3423, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas4", 88)) ;
  }
  {
  routine_generateSelectionControllers_3F__3F__26_ (constinArgument_inGeneration.readProperty_mSelectionControllerListForGeneration (), var_fileOutputDirectory_3345, var_generatedFileSet_3423, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas4", 93)) ;
  }
  {
  routine_generateValidationRoutineStubs_3F__3F__26_ (var_fileOutputDirectory_3345, constinArgument_inGeneration.readProperty_mValidationStubRoutineListForGeneration (), var_generatedFileSet_3423, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas4", 98)) ;
  }
  {
  routine_generateStandardProperties_3F__3F__3F__26_ (var_fileOutputDirectory_3345, constinArgument_inGeneration.readProperty_mPropertyClassList (), constinArgument_inGeneration.readProperty_mTransientPropertyTypeList (), var_generatedFileSet_3423, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas4", 103)) ;
  }
  {
  routine_generateXcodeProject_3F__3F__3F__3F_ (var_outputDirectory_3209, constinArgument_inXcodeProjectString, var_generatedFileSet_3423, var_projectName_3272, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas4", 109)) ;
  }
  {
  routine_generateTestFile_3F__3F__3F__3F_ (constinArgument_inXcodeProjectString, var_projectName_3272, constinArgument_inGeneration.readProperty_mMainXibDescriptorList (), var_outputDirectory_3209, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas4", 115)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'standard_properties'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_standard_5F_properties_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_standard_5F_properties_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_standard_5F_properties (
  "",
  0,
  gWrapperAllFiles_standard_5F_properties_0,
  0,
  gWrapperAllDirectories_standard_5F_properties_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'standard_properties scalarProperty'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_standard_5F_properties_scalarProperty (Compiler * /* inCompiler */,
                                                                      const GGS_string & in_TYPE,
                                                                      const GGS_bool & in_TRANSIENT,
                                                                      const GGS_string & /* in_COMPARISON_5F_METHOD */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//--------------------------------------------------------------------------------------------------\n\nimport AppKit\n\n//--------------------------------------------------------------------------------------------------\n//   Scalar property ") ;
  result.appendString (in_TYPE.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_0 = in_TRANSIENT.operator_not (SOURCE_FILE ("scalar-standard-property.swift.galgasTemplate", 11)).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("typealias EBReadWriteProperty_") ;
    result.appendString (in_TYPE.stringValue ()) ;
    result.appendString (" = EBObservableMutableProperty <") ;
    result.appendString (in_TYPE.stringValue ()) ;
    result.appendString (">\ntypealias EBComputedProperty_") ;
    result.appendString (in_TYPE.stringValue ()) ;
    result.appendString ("   = EBComputedProperty <") ;
    result.appendString (in_TYPE.stringValue ()) ;
    result.appendString (">\ntypealias EBStoredProperty_") ;
    result.appendString (in_TYPE.stringValue ()) ;
    result.appendString ("     = EBStoredProperty <") ;
    result.appendString (in_TYPE.stringValue ()) ;
    result.appendString (">\ntypealias EBStandAloneProperty_") ;
    result.appendString (in_TYPE.stringValue ()) ;
    result.appendString (" = EBStandAloneProperty <") ;
    result.appendString (in_TYPE.stringValue ()) ;
    result.appendString (">\ntypealias EBPreferenceProperty_") ;
    result.appendString (in_TYPE.stringValue ()) ;
    result.appendString (" = EBPreferenceProperty <") ;
    result.appendString (in_TYPE.stringValue ()) ;
    result.appendString (">\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'standard_properties classProperty'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_standard_5F_properties_classProperty (Compiler * /* inCompiler */,
                                                                     const GGS_string & in_CLASS_5F_NAME,
                                                                     const GGS_bool & in_TRANSIENT
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//--------------------------------------------------------------------------------------------------\n\nimport AppKit\n\n//--------------------------------------------------------------------------------------------------\n") ;
  const GalgasBool test_0 = in_TRANSIENT.boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("//   Transient property class ") ;
    result.appendString (in_CLASS_5F_NAME.stringValue ()) ;
    result.appendString ("\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("//   Property class ") ;
    result.appendString (in_CLASS_5F_NAME.stringValue ()) ;
    result.appendString ("\n") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_1 = in_TRANSIENT.operator_not (SOURCE_FILE ("class-standard-property.swift.galgasTemplate", 17)).boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    result.appendString ("typealias EBReadWriteProperty_") ;
    result.appendString (in_CLASS_5F_NAME.stringValue ()) ;
    result.appendString ("   = EBObservableMutableProperty <") ;
    result.appendString (in_CLASS_5F_NAME.stringValue ()) ;
    result.appendString (">\ntypealias EBComputedProperty_") ;
    result.appendString (in_CLASS_5F_NAME.stringValue ()) ;
    result.appendString ("    = EBComputedProperty <") ;
    result.appendString (in_CLASS_5F_NAME.stringValue ()) ;
    result.appendString (">\ntypealias EBStoredProperty_") ;
    result.appendString (in_CLASS_5F_NAME.stringValue ()) ;
    result.appendString ("      = EBStoredProperty <") ;
    result.appendString (in_CLASS_5F_NAME.stringValue ()) ;
    result.appendString (">\ntypealias EBStandAloneProperty_") ;
    result.appendString (in_CLASS_5F_NAME.stringValue ()) ;
    result.appendString ("  = EBStandAloneProperty <") ;
    result.appendString (in_CLASS_5F_NAME.stringValue ()) ;
    result.appendString (">\ntypealias EBPreferenceProperty_") ;
    result.appendString (in_CLASS_5F_NAME.stringValue ()) ;
    result.appendString ("  = EBPreferenceProperty <") ;
    result.appendString (in_CLASS_5F_NAME.stringValue ()) ;
    result.appendString (">\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateStandardProperties???&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateStandardProperties_3F__3F__3F__26_ (const GGS_string constinArgument_inOutputDirectory,
                                                         const GGS_stringlist constinArgument_inPropertyClassList,
                                                         const GGS_transientExternTypeList constinArgument_inTransientPropertyExternTypeList,
                                                         GGS_stringset & ioArgument_ioGeneratedFileSet,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_generateScalarProperty_3F__3F__3F_transient_3F__26_ (constinArgument_inOutputDirectory, GGS_string ("UInt32"), GGS_bool (false), GGS_string::makeEmptyString (), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas4", 148)) ;
  }
  {
  routine_generateScalarProperty_3F__3F__3F_transient_3F__26_ (constinArgument_inOutputDirectory, GGS_string ("Int"), GGS_bool (false), GGS_string::makeEmptyString (), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas4", 149)) ;
  }
  {
  routine_generateScalarProperty_3F__3F__3F_transient_3F__26_ (constinArgument_inOutputDirectory, GGS_string ("Bool"), GGS_bool (false), GGS_string::makeEmptyString (), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas4", 150)) ;
  }
  {
  routine_generateScalarProperty_3F__3F__3F_transient_3F__26_ (constinArgument_inOutputDirectory, GGS_string ("Double"), GGS_bool (false), GGS_string::makeEmptyString (), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas4", 151)) ;
  }
  {
  routine_generateScalarProperty_3F__3F__3F_transient_3F__26_ (constinArgument_inOutputDirectory, GGS_string ("String"), GGS_bool (false), GGS_string ("localizedStandardCompare"), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas4", 152)) ;
  }
  {
  routine_generateScalarProperty_3F__3F__3F_transient_3F__26_ (constinArgument_inOutputDirectory, GGS_string ("Data"), GGS_bool (false), GGS_string::makeEmptyString (), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas4", 153)) ;
  }
  {
  routine_generateScalarProperty_3F__3F__3F_transient_3F__26_ (constinArgument_inOutputDirectory, GGS_string ("Date"), GGS_bool (false), GGS_string::makeEmptyString (), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas4", 154)) ;
  }
  {
  routine_generateScalarProperty_3F__3F__3F_transient_3F__26_ (constinArgument_inOutputDirectory, GGS_string ("BezierPathArray"), GGS_bool (false), GGS_string::makeEmptyString (), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas4", 155)) ;
  }
  UpEnumerator_stringlist enumerator_6523 (constinArgument_inPropertyClassList) ;
  while (enumerator_6523.hasCurrentObject ()) {
    {
    routine_generateClassProperty_3F__3F__3F_transient_26_ (constinArgument_inOutputDirectory, enumerator_6523.current_mValue (HERE), GGS_bool (false), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas4", 158)) ;
    }
    enumerator_6523.gotoNextObject () ;
  }
  UpEnumerator_transientExternTypeList enumerator_6693 (constinArgument_inTransientPropertyExternTypeList) ;
  while (enumerator_6693.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = enumerator_6693.current_mIsClass (HERE).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        {
        routine_generateClassProperty_3F__3F__3F_transient_26_ (constinArgument_inOutputDirectory, enumerator_6693.current_mTypeName (HERE), GGS_bool (true), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas4", 162)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      {
      routine_generateScalarProperty_3F__3F__3F_transient_3F__26_ (constinArgument_inOutputDirectory, enumerator_6693.current_mTypeName (HERE), GGS_bool (true), GGS_string::makeEmptyString (), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas4", 164)) ;
      }
    }
    enumerator_6693.gotoNextObject () ;
  }
  {
  routine_generateClassProperty_3F__3F__3F_transient_26_ (constinArgument_inOutputDirectory, GGS_string ("NSBezierPath"), GGS_bool (false), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas4", 167)) ;
  }
  {
  routine_generateClassProperty_3F__3F__3F_transient_26_ (constinArgument_inOutputDirectory, GGS_string ("NSFont"), GGS_bool (false), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas4", 168)) ;
  }
  {
  routine_generateClassProperty_3F__3F__3F_transient_26_ (constinArgument_inOutputDirectory, GGS_string ("NSColor"), GGS_bool (false), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas4", 169)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateClassProperty???transient&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateClassProperty_3F__3F__3F_transient_26_ (const GGS_string constinArgument_inOutputDirectory,
                                                             const GGS_string constinArgument_inClassPropertyTypeName,
                                                             const GGS_bool constinArgument_inTransient,
                                                             GGS_stringset & ioArgument_ioGeneratedFileSet,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_contents_7682 = GGS_string (filewrapperTemplate_standard_5F_properties_classProperty (inCompiler, constinArgument_inClassPropertyTypeName, constinArgument_inTransient COMMA_SOURCE_FILE ("code-generation.galgas4", 178))) ;
  GGS_string var_fileName_7804 = GGS_string ("property-").add_operation (constinArgument_inClassPropertyTypeName, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas4", 180)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas4", 180)) ;
  {
  ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_7804, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas4", 181)) ;
  }
  {
  GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_7804, var_contents_7682, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas4", 182)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateScalarProperty???transient?&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateScalarProperty_3F__3F__3F_transient_3F__26_ (const GGS_string constinArgument_inOutputDirectory,
                                                                  const GGS_string constinArgument_inScalarPropertyTypeName,
                                                                  const GGS_bool constinArgument_inTransient,
                                                                  const GGS_string constinArgument_inComparisonMethod,
                                                                  GGS_stringset & ioArgument_ioGeneratedFileSet,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_contents_8447 = GGS_string (filewrapperTemplate_standard_5F_properties_scalarProperty (inCompiler, constinArgument_inScalarPropertyTypeName, constinArgument_inTransient, constinArgument_inComparisonMethod COMMA_SOURCE_FILE ("code-generation.galgas4", 196))) ;
  GGS_string var_fileName_8591 = GGS_string ("property-").add_operation (constinArgument_inScalarPropertyTypeName, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas4", 198)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas4", 198)) ;
  {
  ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_8591, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas4", 199)) ;
  }
  {
  GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_8591, var_contents_8447, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas4", 200)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@enumerationDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_enumerationDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_enumerationDeclarationAST temp_0 = this ;
  const GGS_enumerationDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mClassName (), temp_1, inCompiler COMMA_SOURCE_FILE ("enumeration.galgas4", 13)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@enumerationDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_enumerationDeclarationAST::getter_nodeKey (Compiler */* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_enumerationDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mClassName () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@enumerationDeclarationAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_enumerationDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                GGS_generationStruct & ioArgument_ioGeneration,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_enumConstantMap var_enumConstantMap_4269 = GGS_enumConstantMap::init (inCompiler COMMA_HERE) ;
  const GGS_enumerationDeclarationAST temp_0 = this ;
  UpEnumerator_lstringlist enumerator_4297 (temp_0.readProperty_mEnumConstantNameList ()) ;
  while (enumerator_4297.hasCurrentObject ()) {
    {
    var_enumConstantMap_4269.setter_insertKey (enumerator_4297.current_mValue (HERE), var_enumConstantMap_4269.getter_count (SOURCE_FILE ("enumeration.galgas4", 124)), inCompiler COMMA_SOURCE_FILE ("enumeration.galgas4", 124)) ;
    }
    enumerator_4297.gotoNextObject () ;
  }
  GGS_enumFuncMap var_enumFuncMap_4418 = GGS_enumFuncMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_enumerationFunctionListAST enumerator_4466 (ioArgument_ioSemanticContext.readProperty_mEnumerationFunctionListAST ()) ;
  while (enumerator_4466.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_enumerationDeclarationAST temp_2 = this ;
      test_1 = GGS_bool (ComparisonKind::equal, enumerator_4466.current_mEnumName (HERE).readProperty_string ().objectCompare (temp_2.readProperty_mClassName ().readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GGS_stringset temp_3 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("enumeration.galgas4", 129)) ;
        GGS_stringset var_definedConstantNameSet_4614 = temp_3 ;
        GGS_enumFunAssociationSortedList temp_4 = GGS_enumFunAssociationSortedList::init (inCompiler COMMA_SOURCE_FILE ("enumeration.galgas4", 130)) ;
        GGS_enumFunAssociationSortedList var_associationSortedList_4682 = temp_4 ;
        UpEnumerator__32_lstringlist enumerator_4734 (enumerator_4466.current_mAssociationList (HERE)) ;
        while (enumerator_4734.hasCurrentObject ()) {
          GGS_uint var_idx_4828 ;
          var_enumConstantMap_4269.method_searchKey (enumerator_4734.current_mValue_30_ (HERE), var_idx_4828, inCompiler COMMA_SOURCE_FILE ("enumeration.galgas4", 132)) ;
          {
          var_associationSortedList_4682.setter_insert (var_idx_4828, enumerator_4734.current_mValue_31_ (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("enumeration.galgas4", 133)) ;
          }
          GalgasBool test_5 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_5) {
            test_5 = var_definedConstantNameSet_4614.getter_hasKey (enumerator_4734.current_mValue_30_ (HERE).readProperty_string () COMMA_SOURCE_FILE ("enumeration.galgas4", 134)).boolEnum () ;
            if (GalgasBool::boolTrue == test_5) {
              GenericArray <FixItDescription> fixItArray6 ;
              inCompiler->emitSemanticError (enumerator_4734.current_mValue_30_ (HERE).readProperty_location (), GGS_string ("Duplicated constant"), fixItArray6  COMMA_SOURCE_FILE ("enumeration.galgas4", 135)) ;
            }
          }
          {
          var_definedConstantNameSet_4614.setter_insert (enumerator_4734.current_mValue_30_ (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("enumeration.galgas4", 137)) ;
          }
          enumerator_4734.gotoNextObject () ;
        }
        const GGS_enumerationDeclarationAST temp_7 = this ;
        UpEnumerator_lstringlist enumerator_5107 (temp_7.readProperty_mEnumConstantNameList ()) ;
        while (enumerator_5107.hasCurrentObject ()) {
          GalgasBool test_8 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_8) {
            test_8 = var_definedConstantNameSet_4614.getter_hasKey (enumerator_5107.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("enumeration.galgas4", 140)).operator_not (SOURCE_FILE ("enumeration.galgas4", 140)).boolEnum () ;
            if (GalgasBool::boolTrue == test_8) {
              GenericArray <FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (enumerator_4466.current_mFunctionName (HERE).readProperty_location (), GGS_string ("No association for '").add_operation (enumerator_5107.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("enumeration.galgas4", 141)).add_operation (GGS_string ("' constant"), inCompiler COMMA_SOURCE_FILE ("enumeration.galgas4", 141)), fixItArray9  COMMA_SOURCE_FILE ("enumeration.galgas4", 141)) ;
            }
          }
          enumerator_5107.gotoNextObject () ;
        }
        {
        var_enumFuncMap_4418.setter_insertKey (enumerator_4466.current_mFunctionName (HERE), var_associationSortedList_4682, inCompiler COMMA_SOURCE_FILE ("enumeration.galgas4", 144)) ;
        }
      }
    }
    enumerator_4466.gotoNextObject () ;
  }
  {
  const GGS_enumerationDeclarationAST temp_10 = this ;
  const GGS_enumerationDeclarationAST temp_11 = this ;
  GGS_propertyGenerationList temp_12 = GGS_propertyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("enumeration.galgas4", 152)) ;
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (temp_10.readProperty_mClassName (), GGS_classKind::class_func_atomic (GGS_typeKind::class_func_enumType (temp_11.readProperty_mClassName ().readProperty_string (), var_enumConstantMap_4269, var_enumFuncMap_4418  COMMA_SOURCE_FILE ("enumeration.galgas4", 149))  COMMA_SOURCE_FILE ("enumeration.galgas4", 149)), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS_actionMap::init (inCompiler COMMA_HERE), temp_12, inCompiler COMMA_SOURCE_FILE ("enumeration.galgas4", 147)) ;
  }
  {
  const GGS_enumerationDeclarationAST temp_13 = this ;
  const GGS_enumerationDeclarationAST temp_14 = this ;
  const GGS_enumerationDeclarationAST temp_15 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_enumForGeneration::init_21__21__21__21_ (temp_13.readProperty_mClassName ().readProperty_string (), temp_14.readProperty_mEnumConstantNameList (), var_enumFuncMap_4418, temp_15.readProperty_mCaseIterable (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("enumeration.galgas4", 155)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'enumGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_enumGenerationTemplate_3 [1] = {
  nullptr
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_enumGenerationTemplate_3 [1] = {
  nullptr
} ;

//--- Directory 'controllers'

const cDirectoryWrapper gWrapperDirectory_3_enumGenerationTemplate (
  "controllers",
  0,
  gWrapperAllFiles_enumGenerationTemplate_3,
  0,
  gWrapperAllDirectories_enumGenerationTemplate_3
) ;

//--- All files of 'standard-properties' directory

static const cRegularFileWrapper * gWrapperAllFiles_enumGenerationTemplate_1 [1] = {
  nullptr
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_enumGenerationTemplate_1 [1] = {
  nullptr
} ;

//--- Directory 'standard-properties'

const cDirectoryWrapper gWrapperDirectory_1_enumGenerationTemplate (
  "standard-properties",
  0,
  gWrapperAllFiles_enumGenerationTemplate_1,
  0,
  gWrapperAllDirectories_enumGenerationTemplate_1
) ;

//--- All files of 'xcode-project' directory

static const cRegularFileWrapper * gWrapperAllFiles_enumGenerationTemplate_2 [1] = {
  nullptr
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_enumGenerationTemplate_2 [1] = {
  nullptr
} ;

//--- Directory 'xcode-project'

const cDirectoryWrapper gWrapperDirectory_2_enumGenerationTemplate (
  "xcode-project",
  0,
  gWrapperAllFiles_enumGenerationTemplate_2,
  0,
  gWrapperAllDirectories_enumGenerationTemplate_2
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_enumGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_enumGenerationTemplate_0 [4] = {
  & gWrapperDirectory_3_enumGenerationTemplate,
  & gWrapperDirectory_1_enumGenerationTemplate,
  & gWrapperDirectory_2_enumGenerationTemplate,
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_enumGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_enumGenerationTemplate_0,
  3,
  gWrapperAllDirectories_enumGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'enumGenerationTemplate enumGenerationInSwift'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_enumGenerationTemplate_enumGenerationInSwift (Compiler * /* inCompiler */,
                                                                             const GGS_string & in_ENUM_5F_TYPE_5F_NAME,
                                                                             const GGS_lstringlist & in_CONSTANT_5F_ORDERED_5F_LIST,
                                                                             const GGS_bool & in_CASE_5F_ITERABLE
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//--------------------------------------------------------------------------------------------------\n\nimport Foundation\n\n//--------------------------------------------------------------------------------------------------\n\nenum ") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" : Int, Sendable") ;
  const GalgasBool test_0 = in_CASE_5F_ITERABLE.boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString (", CaseIterable") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (" {\n") ;
  GGS_uint index_513_idx (0) ;
  if (in_CONSTANT_5F_ORDERED_5F_LIST.isValid ()) {
    UpEnumerator_lstringlist enumerator_513 (in_CONSTANT_5F_ORDERED_5F_LIST) ;
    while (enumerator_513.hasCurrentObject ()) {
      result.appendString ("  case ") ;
      result.appendString (enumerator_513.current_mValue (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" = ") ;
      result.appendString (index_513_idx.getter_string (SOURCE_FILE ("enum.swift.galgasTemplate", 12)).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_513.gotoNextObject () ;
      index_513_idx.increment () ;
    }
  }
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'enumGenerationTemplate enumEBExtensionGenerationInSwift'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_enumGenerationTemplate_enumEBExtensionGenerationInSwift (Compiler * inCompiler,
                                                                                        const GGS_string & in_ENUM_5F_TYPE_5F_NAME,
                                                                                        const GGS_lstringlist & in_CONSTANT_5F_ORDERED_5F_LIST,
                                                                                        const GGS_enumFuncMap & in_FUNCTION_5F_MAP
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//--------------------------------------------------------------------------------------------------\n\nimport AppKit\n\n//--------------------------------------------------------------------------------------------------\n\nextension ") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" : EBEnumPropertyProtocol, Hashable {\n\n") ;
  GGS_uint index_500_ (0) ;
  if (in_FUNCTION_5F_MAP.isValid ()) {
    UpEnumerator_enumFuncMap enumerator_500 (in_FUNCTION_5F_MAP) ;
    while (enumerator_500.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // Function ") ;
      result.appendString (enumerator_500.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  static func ") ;
      result.appendString (enumerator_500.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" () -> [String] {\n    return [") ;
      GGS_uint index_872_ (0) ;
      if (enumerator_500.current_mAssociationSortedList (HERE).isValid ()) {
        UpEnumerator_enumFunAssociationSortedList enumerator_872 (enumerator_500.current_mAssociationSortedList (HERE)) ;
        while (enumerator_872.hasCurrentObject ()) {
          result.appendString (enumerator_872.current_mAssociatedString (HERE).getter_utf_38_Representation (SOURCE_FILE ("enum.ebExtension.swift.galgasTemplate", 19)).stringValue ()) ;
          enumerator_872.gotoNextObject () ;
          if (enumerator_872.hasCurrentObject ()) {
            result.appendString (", ") ;
          }
          index_872_.increment () ;
        }
      }
      result.appendString ("]\n  }\n\n") ;
      enumerator_500.gotoNextObject () ;
      index_500_.increment () ;
    }
  }
  result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  Enum generic bindings utility functions\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  static func buildfromRawValue (rawValue : Int) -> ") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("\? {\n    if let v = ") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" (rawValue:rawValue) {\n      return v\n    }else{\n      return nil\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n /* func enumfromRawValue (rawValue : Int) -> ") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" {\n    var result = self\n    let v : ") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("\? = ") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" (rawValue:rawValue) ;\n    if let unwrappedV = v {\n      result = unwrappedV\n    }\n    return result\n  } */\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  EBStoredPropertyProtocol\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func ebHashValue () -> UInt32 {\n    return UInt32 (self.rawValue)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func convertToNSObject () -> NSObject {\n    return NSNumber (value: self.rawValue)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  static func convertFromNSObject (object : NSObject) -> ") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" {\n    var result = ") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (".") ;
  result.appendString (in_CONSTANT_5F_ORDERED_5F_LIST.getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("enum.ebExtension.swift.galgasTemplate", 66)).readProperty_string ().stringValue ()) ;
  result.appendString ("\n    if let number = object as\? NSNumber, let v = ") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" (rawValue: number.intValue) {\n      result = v\n    }\n    return result\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  static func unarchiveFromDataRange (_ inData : Data, _ inRange : NSRange) -> ") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("\? {\n    if let rawValue = inData.base62EncodedInt (range: inRange), let enumValue = ") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" (rawValue: rawValue) {\n      return enumValue\n    }else{\n      return nil\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func appendPropertyValueTo (_ ioData : inout Data) {\n    ioData.append (base62Encoded: self.rawValue)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n\ntypealias EBReadWriteProperty_") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("  = EBEnumReadWriteProperty <") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (">\ntypealias EBStoredProperty_") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("     = EBEnumStoredProperty <") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (">\ntypealias EBStandAloneProperty_") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" = EBEnumStandAloneProperty <") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (">\ntypealias EBComputedProperty_") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("   = EBEnumGenericComputedProperty <") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (">\ntypealias EBPreferenceProperty_") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" = EBEnumPreferenceProperty <") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (">\n\n//--------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}


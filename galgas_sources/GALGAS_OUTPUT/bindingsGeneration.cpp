//---------------------------------------------------------------------------*
//                                                                           *
//                      File 'bindingsGeneration.cpp'                        *
//                        Generated by version 2.5.0                         *
//                       july 19th, 2013, at 16h0'53"                        *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#include "bindingsGeneration.h"
#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------*


//---------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  #define SOURCE_FILE_AT_LINE(line) "bindingsGeneration.gSemantics", line
  #define COMMA_SOURCE_FILE_AT_LINE(line) , SOURCE_FILE_AT_LINE(line)
#else
  #define SOURCE_FILE_AT_LINE(line) 
  #define COMMA_SOURCE_FILE_AT_LINE(line) 
#endif

//---------------------------------------------------------------------------*
//                                                                           *
//   Overriding category reader '@runBindingForGeneration generateBinding'   *
//                                                                           *
//---------------------------------------------------------------------------*

static GALGAS_string categoryReader_runBindingForGeneration_generateBinding (const cPtr_abstractBindingForGeneration * inObject,
                                                                             const GALGAS_string & constinArgument_inOutletName,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_runBindingForGeneration * object = (const cPtr_runBindingForGeneration *) inObject ;
  macroValidSharedObject (object, const cPtr_runBindingForGeneration) ;
  result_outResult = GALGAS_string ("  ").operator_concat (constinArgument_inOutletName COMMA_SOURCE_FILE_AT_LINE (10)).operator_concat (GALGAS_string (".target = ") COMMA_SOURCE_FILE_AT_LINE (10)).operator_concat (object->mAttribute_mTargetName COMMA_SOURCE_FILE_AT_LINE (10)).operator_concat (GALGAS_string (" ;\n") COMMA_SOURCE_FILE_AT_LINE (10)) ;
  result_outResult.dotAssign_operation (GALGAS_string ("  ").operator_concat (constinArgument_inOutletName COMMA_SOURCE_FILE_AT_LINE (11)).operator_concat (GALGAS_string (".action = @selector (") COMMA_SOURCE_FILE_AT_LINE (11)).operator_concat (object->mAttribute_mActionName COMMA_SOURCE_FILE_AT_LINE (11)).operator_concat (GALGAS_string (":) ;\n") COMMA_SOURCE_FILE_AT_LINE (11)) COMMA_SOURCE_FILE_AT_LINE (11)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------*

static void defineCategoryReader_runBindingForGeneration_generateBinding (void) {
  enterCategoryReader_generateBinding (kTypeDescriptor_GALGAS_runBindingForGeneration.mSlotID,
                                       categoryReader_runBindingForGeneration_generateBinding) ;
}

//---------------------------------------------------------------------------*

C_PrologueEpilogue gReader_runBindingForGeneration_generateBinding (defineCategoryReader_runBindingForGeneration_generateBinding, NULL) ;

//---------------------------------------------------------------------------*
//                                                                           *
//Overriding category reader '@runBindingForGeneration generateRemoveBinding'*
//                                                                           *
//---------------------------------------------------------------------------*

static GALGAS_string categoryReader_runBindingForGeneration_generateRemoveBinding (const cPtr_abstractBindingForGeneration * /* inObject */,
                                                                                   const GALGAS_string & constinArgument_inOutletName,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("  ").operator_concat (constinArgument_inOutletName COMMA_SOURCE_FILE_AT_LINE (20)).operator_concat (GALGAS_string (".target = nil ;\n") COMMA_SOURCE_FILE_AT_LINE (20)) ;
  result_outResult.dotAssign_operation (GALGAS_string ("  ").operator_concat (constinArgument_inOutletName COMMA_SOURCE_FILE_AT_LINE (21)).operator_concat (GALGAS_string (".action = NULL ;\n") COMMA_SOURCE_FILE_AT_LINE (21)) COMMA_SOURCE_FILE_AT_LINE (21)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------*

static void defineCategoryReader_runBindingForGeneration_generateRemoveBinding (void) {
  enterCategoryReader_generateRemoveBinding (kTypeDescriptor_GALGAS_runBindingForGeneration.mSlotID,
                                             categoryReader_runBindingForGeneration_generateRemoveBinding) ;
}

//---------------------------------------------------------------------------*

C_PrologueEpilogue gReader_runBindingForGeneration_generateRemoveBinding (defineCategoryReader_runBindingForGeneration_generateRemoveBinding, NULL) ;

//---------------------------------------------------------------------------*
//                                                                           *
//Overriding category reader '@tableValueBindingForGeneration generateBinding'*
//                                                                           *
//---------------------------------------------------------------------------*

static GALGAS_string categoryReader_tableValueBindingForGeneration_generateBinding (const cPtr_abstractBindingForGeneration * inObject,
                                                                                    const GALGAS_string & constinArgument_inOutletName,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_tableValueBindingForGeneration * object = (const cPtr_tableValueBindingForGeneration *) inObject ;
  macroValidSharedObject (object, const cPtr_tableValueBindingForGeneration) ;
  result_outResult = GALGAS_string::makeEmptyString () ;
  cEnumerator_columnBindingForTableValueBindingForGeneration enumerator_1044 (object->mAttribute_mColumnBindingForTableValueBindingForGeneration, kEnumeration_up) ;
  while (enumerator_1044.hasCurrentObject ()) {
    result_outResult.dotAssign_operation (GALGAS_string ("  if (nil == [").operator_concat (constinArgument_inOutletName COMMA_SOURCE_FILE_AT_LINE (32)).operator_concat (GALGAS_string (" tableColumnWithIdentifier:@\"") COMMA_SOURCE_FILE_AT_LINE (32)).operator_concat (enumerator_1044.current (HERE).mAttribute_mColumnIdentifier COMMA_SOURCE_FILE_AT_LINE (32)).operator_concat (GALGAS_string ("\"]) {\n") COMMA_SOURCE_FILE_AT_LINE (32)).operator_concat (GALGAS_string ("    presentErrorWindow (__FILE__, __LINE__, @\"the '") COMMA_SOURCE_FILE_AT_LINE (33)).operator_concat (constinArgument_inOutletName COMMA_SOURCE_FILE_AT_LINE (33)).operator_concat (GALGAS_string ("' NSTableView outlet has no formatter has no column with the ") COMMA_SOURCE_FILE_AT_LINE (33)).operator_concat (enumerator_1044.current (HERE).mAttribute_mColumnIdentifier COMMA_SOURCE_FILE_AT_LINE (33)).operator_concat (GALGAS_string (" identifier\") ;\n") COMMA_SOURCE_FILE_AT_LINE (33)).operator_concat (GALGAS_string ("  }else{\n") COMMA_SOURCE_FILE_AT_LINE (34)).operator_concat (GALGAS_string ("    NSActionCell * cell = [") COMMA_SOURCE_FILE_AT_LINE (35)).operator_concat (constinArgument_inOutletName COMMA_SOURCE_FILE_AT_LINE (35)).operator_concat (GALGAS_string (" tableColumnWithIdentifier:@\"") COMMA_SOURCE_FILE_AT_LINE (35)).operator_concat (enumerator_1044.current (HERE).mAttribute_mColumnIdentifier COMMA_SOURCE_FILE_AT_LINE (35)).operator_concat (GALGAS_string ("\"].dataCell ;\n") COMMA_SOURCE_FILE_AT_LINE (35)).operator_concat (GALGAS_string ("    if (! [cell isKindOfClass:[") COMMA_SOURCE_FILE_AT_LINE (36)).operator_concat (enumerator_1044.current (HERE).mAttribute_mRequiredCellClass COMMA_SOURCE_FILE_AT_LINE (36)).operator_concat (GALGAS_string (" class]]) {\n") COMMA_SOURCE_FILE_AT_LINE (36)).operator_concat (GALGAS_string ("      presentErrorWindow (__FILE__, __LINE__, @\"the dataCell is '") COMMA_SOURCE_FILE_AT_LINE (37)).operator_concat (enumerator_1044.current (HERE).mAttribute_mColumnIdentifier COMMA_SOURCE_FILE_AT_LINE (37)).operator_concat (GALGAS_string ("' column of the '") COMMA_SOURCE_FILE_AT_LINE (37)).operator_concat (constinArgument_inOutletName COMMA_SOURCE_FILE_AT_LINE (37)).operator_concat (GALGAS_string ("' should be an '") COMMA_SOURCE_FILE_AT_LINE (37)).operator_concat (enumerator_1044.current (HERE).mAttribute_mRequiredCellClass COMMA_SOURCE_FILE_AT_LINE (37)).operator_concat (GALGAS_string (" instance\") ;\n") COMMA_SOURCE_FILE_AT_LINE (37)).operator_concat (GALGAS_string ("    }\n") COMMA_SOURCE_FILE_AT_LINE (38)).operator_concat (GALGAS_string ("  }\n") COMMA_SOURCE_FILE_AT_LINE (39)).operator_concat (GALGAS_string ("  [[") COMMA_SOURCE_FILE_AT_LINE (40)).operator_concat (constinArgument_inOutletName COMMA_SOURCE_FILE_AT_LINE (40)).operator_concat (GALGAS_string (" tableColumnWithIdentifier:@\"") COMMA_SOURCE_FILE_AT_LINE (40)).operator_concat (enumerator_1044.current (HERE).mAttribute_mColumnIdentifier COMMA_SOURCE_FILE_AT_LINE (40)).operator_concat (GALGAS_string ("\"]\n") COMMA_SOURCE_FILE_AT_LINE (40)).operator_concat (GALGAS_string ("    bind:@\"value\"\n") COMMA_SOURCE_FILE_AT_LINE (41)).operator_concat (GALGAS_string ("    toObject:") COMMA_SOURCE_FILE_AT_LINE (42)).operator_concat (object->mAttribute_mControllerName COMMA_SOURCE_FILE_AT_LINE (42)).operator_concat (GALGAS_string ("\n") COMMA_SOURCE_FILE_AT_LINE (42)).operator_concat (GALGAS_string ("    withKeyPath:@\"arrangedObjects.") COMMA_SOURCE_FILE_AT_LINE (43)).operator_concat (enumerator_1044.current (HERE).mAttribute_mObservableAttributeName COMMA_SOURCE_FILE_AT_LINE (43)).operator_concat (GALGAS_string ("\"\n") COMMA_SOURCE_FILE_AT_LINE (43)).operator_concat (GALGAS_string ("    options:") COMMA_SOURCE_FILE_AT_LINE (44)) COMMA_SOURCE_FILE_AT_LINE (32)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_1044.current (HERE).mAttribute_mOutletBindingOptionList.reader_length (SOURCE_FILE_AT_LINE (45)).objectCompare (GALGAS_uint ((PMUInt32) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_outResult.dotAssign_operation (GALGAS_string ("nil\n") COMMA_SOURCE_FILE_AT_LINE (46)) ;
    }else if (kBoolFalse == test_0) {
      result_outResult.dotAssign_operation (GALGAS_string ("[NSDictionary dictionaryWithObjectsAndKeys:\n") COMMA_SOURCE_FILE_AT_LINE (48)) ;
      cEnumerator__32_stringlist enumerator_2368 (enumerator_1044.current (HERE).mAttribute_mOutletBindingOptionList, kEnumeration_up) ;
      while (enumerator_2368.hasCurrentObject ()) {
        result_outResult.dotAssign_operation (GALGAS_string ("      ").operator_concat (enumerator_2368.current_mValue_31_ (HERE) COMMA_SOURCE_FILE_AT_LINE (50)).operator_concat (GALGAS_string (", @") COMMA_SOURCE_FILE_AT_LINE (50)).operator_concat (enumerator_2368.current_mValue_30_ (HERE).reader_utf_38_Representation (SOURCE_FILE_AT_LINE (50)) COMMA_SOURCE_FILE_AT_LINE (50)).operator_concat (GALGAS_string (",\n") COMMA_SOURCE_FILE_AT_LINE (50)) COMMA_SOURCE_FILE_AT_LINE (50)) ;
        enumerator_2368.gotoNextObject () ;
      }
      result_outResult.dotAssign_operation (GALGAS_string ("      nil\n"
        "    ]\n") COMMA_SOURCE_FILE_AT_LINE (52)) ;
    }
    result_outResult.dotAssign_operation (GALGAS_string ("  ] ;\n") COMMA_SOURCE_FILE_AT_LINE (55)) ;
    enumerator_1044.gotoNextObject () ;
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------*

static void defineCategoryReader_tableValueBindingForGeneration_generateBinding (void) {
  enterCategoryReader_generateBinding (kTypeDescriptor_GALGAS_tableValueBindingForGeneration.mSlotID,
                                       categoryReader_tableValueBindingForGeneration_generateBinding) ;
}

//---------------------------------------------------------------------------*

C_PrologueEpilogue gReader_tableValueBindingForGeneration_generateBinding (defineCategoryReader_tableValueBindingForGeneration_generateBinding, NULL) ;

//---------------------------------------------------------------------------*
//                                                                           *
//Overriding category reader '@tableValueBindingForGeneration generateRemoveBinding'*
//                                                                           *
//---------------------------------------------------------------------------*

static GALGAS_string categoryReader_tableValueBindingForGeneration_generateRemoveBinding (const cPtr_abstractBindingForGeneration * inObject,
                                                                                          const GALGAS_string & constinArgument_inOutletName,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_tableValueBindingForGeneration * object = (const cPtr_tableValueBindingForGeneration *) inObject ;
  macroValidSharedObject (object, const cPtr_tableValueBindingForGeneration) ;
  result_outResult = GALGAS_string::makeEmptyString () ;
  cEnumerator_columnBindingForTableValueBindingForGeneration enumerator_2903 (object->mAttribute_mColumnBindingForTableValueBindingForGeneration, kEnumeration_up) ;
  while (enumerator_2903.hasCurrentObject ()) {
    result_outResult.dotAssign_operation (GALGAS_string ("  [[").operator_concat (constinArgument_inOutletName COMMA_SOURCE_FILE_AT_LINE (67)).operator_concat (GALGAS_string (" tableColumnWithIdentifier:@\"") COMMA_SOURCE_FILE_AT_LINE (67)).operator_concat (enumerator_2903.current (HERE).mAttribute_mColumnIdentifier COMMA_SOURCE_FILE_AT_LINE (67)).operator_concat (GALGAS_string ("\"] unbind:@\"value\"] ;\n") COMMA_SOURCE_FILE_AT_LINE (67)) COMMA_SOURCE_FILE_AT_LINE (67)) ;
    enumerator_2903.gotoNextObject () ;
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------*

static void defineCategoryReader_tableValueBindingForGeneration_generateRemoveBinding (void) {
  enterCategoryReader_generateRemoveBinding (kTypeDescriptor_GALGAS_tableValueBindingForGeneration.mSlotID,
                                             categoryReader_tableValueBindingForGeneration_generateRemoveBinding) ;
}

//---------------------------------------------------------------------------*

C_PrologueEpilogue gReader_tableValueBindingForGeneration_generateRemoveBinding (defineCategoryReader_tableValueBindingForGeneration_generateRemoveBinding, NULL) ;

//---------------------------------------------------------------------------*
//                                                                           *
// Overriding category reader '@regularBindingForGeneration generateBinding' *
//                                                                           *
//---------------------------------------------------------------------------*

static GALGAS_string categoryReader_regularBindingForGeneration_generateBinding (const cPtr_abstractBindingForGeneration * inObject,
                                                                                 const GALGAS_string & constinArgument_inOutletName,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_regularBindingForGeneration * object = (const cPtr_regularBindingForGeneration *) inObject ;
  macroValidSharedObject (object, const cPtr_regularBindingForGeneration) ;
  result_outResult = GALGAS_string::makeEmptyString () ;
  if (object->mAttribute_mRequiredFormatter.isValid ()) {
    switch (object->mAttribute_mRequiredFormatter.enumValue ()) {
    case GALGAS_formatterEnum::kNotBuilt:
      break ;
    case GALGAS_formatterEnum::kEnum_noFormatter: {
      } break ;
    case GALGAS_formatterEnum::kEnum_numberFormatter: {
      result_outResult.dotAssign_operation (GALGAS_string ("  if ((nil != ").operator_concat (constinArgument_inOutletName COMMA_SOURCE_FILE_AT_LINE (81)).operator_concat (GALGAS_string (") && (nil == ") COMMA_SOURCE_FILE_AT_LINE (81)).operator_concat (constinArgument_inOutletName COMMA_SOURCE_FILE_AT_LINE (81)).operator_concat (GALGAS_string (".formatter)) {\n") COMMA_SOURCE_FILE_AT_LINE (81)).operator_concat (GALGAS_string ("    presentErrorWindow (__FILE__, __LINE__, @\"the '") COMMA_SOURCE_FILE_AT_LINE (82)).operator_concat (constinArgument_inOutletName COMMA_SOURCE_FILE_AT_LINE (82)).operator_concat (GALGAS_string ("' outlet has no formatter, it should have an NSNumberFormatter\") ;\n") COMMA_SOURCE_FILE_AT_LINE (82)).operator_concat (GALGAS_string ("  }else if ((nil != ") COMMA_SOURCE_FILE_AT_LINE (83)).operator_concat (constinArgument_inOutletName COMMA_SOURCE_FILE_AT_LINE (83)).operator_concat (GALGAS_string (") && ![") COMMA_SOURCE_FILE_AT_LINE (83)).operator_concat (constinArgument_inOutletName COMMA_SOURCE_FILE_AT_LINE (83)).operator_concat (GALGAS_string (".formatter isKindOfClass:[NSNumberFormatter class]]) {\n") COMMA_SOURCE_FILE_AT_LINE (83)).operator_concat (GALGAS_string ("    presentErrorWindow (__FILE__, __LINE__, @\"the '") COMMA_SOURCE_FILE_AT_LINE (84)).operator_concat (constinArgument_inOutletName COMMA_SOURCE_FILE_AT_LINE (84)).operator_concat (GALGAS_string (" outlet has a formatter that is not kind of NSNumberFormatter class\") ;\n") COMMA_SOURCE_FILE_AT_LINE (84)).operator_concat (GALGAS_string ("  }\n") COMMA_SOURCE_FILE_AT_LINE (85)) COMMA_SOURCE_FILE_AT_LINE (81)) ;
      } break ;
    case GALGAS_formatterEnum::kEnum_dateFormatter: {
      result_outResult.dotAssign_operation (GALGAS_string ("  if ((nil != ").operator_concat (constinArgument_inOutletName COMMA_SOURCE_FILE_AT_LINE (87)).operator_concat (GALGAS_string (") && (nil == ") COMMA_SOURCE_FILE_AT_LINE (87)).operator_concat (constinArgument_inOutletName COMMA_SOURCE_FILE_AT_LINE (87)).operator_concat (GALGAS_string (".formatter)) {\n") COMMA_SOURCE_FILE_AT_LINE (87)).operator_concat (GALGAS_string ("    presentErrorWindow (__FILE__, __LINE__, @\"the '") COMMA_SOURCE_FILE_AT_LINE (88)).operator_concat (constinArgument_inOutletName COMMA_SOURCE_FILE_AT_LINE (88)).operator_concat (GALGAS_string ("' outlet has no formatter, it should have an NSDateFormatter\") ;\n") COMMA_SOURCE_FILE_AT_LINE (88)).operator_concat (GALGAS_string ("  }else if ((nil != ") COMMA_SOURCE_FILE_AT_LINE (89)).operator_concat (constinArgument_inOutletName COMMA_SOURCE_FILE_AT_LINE (89)).operator_concat (GALGAS_string (") && ![") COMMA_SOURCE_FILE_AT_LINE (89)).operator_concat (constinArgument_inOutletName COMMA_SOURCE_FILE_AT_LINE (89)).operator_concat (GALGAS_string (".formatter isKindOfClass:[NSDateFormatter class]]) {\n") COMMA_SOURCE_FILE_AT_LINE (89)).operator_concat (GALGAS_string ("    presentErrorWindow (__FILE__, __LINE__, @\"the '") COMMA_SOURCE_FILE_AT_LINE (90)).operator_concat (constinArgument_inOutletName COMMA_SOURCE_FILE_AT_LINE (90)).operator_concat (GALGAS_string ("' outlet has a formatter that is not kind of NSDateFormatter class\") ;\n") COMMA_SOURCE_FILE_AT_LINE (90)).operator_concat (GALGAS_string ("  }\n") COMMA_SOURCE_FILE_AT_LINE (91)) COMMA_SOURCE_FILE_AT_LINE (87)) ;
      } break ;
    }
  }
  result_outResult.dotAssign_operation (GALGAS_string ("  [").operator_concat (constinArgument_inOutletName COMMA_SOURCE_FILE_AT_LINE (93)).operator_concat (GALGAS_string ("\n") COMMA_SOURCE_FILE_AT_LINE (93)).operator_concat (GALGAS_string ("    bind:@\"") COMMA_SOURCE_FILE_AT_LINE (94)).operator_concat (object->mAttribute_mBindingName COMMA_SOURCE_FILE_AT_LINE (94)).operator_concat (GALGAS_string ("\"\n") COMMA_SOURCE_FILE_AT_LINE (94)).operator_concat (GALGAS_string ("    toObject:") COMMA_SOURCE_FILE_AT_LINE (95)).operator_concat (object->mAttribute_mObservedObjectName COMMA_SOURCE_FILE_AT_LINE (95)).operator_concat (GALGAS_string ("\n") COMMA_SOURCE_FILE_AT_LINE (95)).operator_concat (GALGAS_string ("    withKeyPath:@\"") COMMA_SOURCE_FILE_AT_LINE (96)).operator_concat (object->mAttribute_mObservableAttributeName COMMA_SOURCE_FILE_AT_LINE (96)).operator_concat (GALGAS_string ("\"\n") COMMA_SOURCE_FILE_AT_LINE (96)).operator_concat (GALGAS_string ("    options:") COMMA_SOURCE_FILE_AT_LINE (97)) COMMA_SOURCE_FILE_AT_LINE (93)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mOutletBindingOptionList.reader_length (SOURCE_FILE_AT_LINE (98)).objectCompare (GALGAS_uint ((PMUInt32) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outResult.dotAssign_operation (GALGAS_string ("nil\n") COMMA_SOURCE_FILE_AT_LINE (99)) ;
  }else if (kBoolFalse == test_0) {
    result_outResult.dotAssign_operation (GALGAS_string ("[NSDictionary dictionaryWithObjectsAndKeys:\n") COMMA_SOURCE_FILE_AT_LINE (101)) ;
    cEnumerator__32_stringlist enumerator_4945 (object->mAttribute_mOutletBindingOptionList, kEnumeration_up) ;
    while (enumerator_4945.hasCurrentObject ()) {
      result_outResult.dotAssign_operation (GALGAS_string ("      ").operator_concat (enumerator_4945.current_mValue_31_ (HERE) COMMA_SOURCE_FILE_AT_LINE (103)).operator_concat (GALGAS_string (", @") COMMA_SOURCE_FILE_AT_LINE (103)).operator_concat (enumerator_4945.current_mValue_30_ (HERE).reader_utf_38_Representation (SOURCE_FILE_AT_LINE (103)) COMMA_SOURCE_FILE_AT_LINE (103)).operator_concat (GALGAS_string (",\n") COMMA_SOURCE_FILE_AT_LINE (103)) COMMA_SOURCE_FILE_AT_LINE (103)) ;
      enumerator_4945.gotoNextObject () ;
    }
    result_outResult.dotAssign_operation (GALGAS_string ("      nil\n"
      "    ]\n") COMMA_SOURCE_FILE_AT_LINE (105)) ;
  }
  result_outResult.dotAssign_operation (GALGAS_string ("  ] ;\n") COMMA_SOURCE_FILE_AT_LINE (108)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------*

static void defineCategoryReader_regularBindingForGeneration_generateBinding (void) {
  enterCategoryReader_generateBinding (kTypeDescriptor_GALGAS_regularBindingForGeneration.mSlotID,
                                       categoryReader_regularBindingForGeneration_generateBinding) ;
}

//---------------------------------------------------------------------------*

C_PrologueEpilogue gReader_regularBindingForGeneration_generateBinding (defineCategoryReader_regularBindingForGeneration_generateBinding, NULL) ;

//---------------------------------------------------------------------------*
//                                                                           *
//Overriding category reader '@regularBindingForGeneration generateRemoveBinding'*
//                                                                           *
//---------------------------------------------------------------------------*

static GALGAS_string categoryReader_regularBindingForGeneration_generateRemoveBinding (const cPtr_abstractBindingForGeneration * inObject,
                                                                                       const GALGAS_string & constinArgument_inOutletName,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_regularBindingForGeneration * object = (const cPtr_regularBindingForGeneration *) inObject ;
  macroValidSharedObject (object, const cPtr_regularBindingForGeneration) ;
  result_outResult = GALGAS_string ("  [").operator_concat (constinArgument_inOutletName COMMA_SOURCE_FILE_AT_LINE (118)).operator_concat (GALGAS_string (" unbind:@\"") COMMA_SOURCE_FILE_AT_LINE (118)).operator_concat (object->mAttribute_mBindingName COMMA_SOURCE_FILE_AT_LINE (118)).operator_concat (GALGAS_string ("\"] ;\n") COMMA_SOURCE_FILE_AT_LINE (118)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------*

static void defineCategoryReader_regularBindingForGeneration_generateRemoveBinding (void) {
  enterCategoryReader_generateRemoveBinding (kTypeDescriptor_GALGAS_regularBindingForGeneration.mSlotID,
                                             categoryReader_regularBindingForGeneration_generateRemoveBinding) ;
}

//---------------------------------------------------------------------------*

C_PrologueEpilogue gReader_regularBindingForGeneration_generateRemoveBinding (defineCategoryReader_regularBindingForGeneration_generateRemoveBinding, NULL) ;

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


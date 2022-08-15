#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-8.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@prefsDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_prefsDeclarationAST::method_enterInPrecedenceGraph (GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_prefsDeclarationAST temp_0 = this ;
  const GALGAS_prefsDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mClassName (), temp_1, inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 24)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@prefsDeclarationAST nodeKey'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_prefsDeclarationAST::getter_nodeKey (C_Compiler */* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result_result ; // Returned variable
  const GALGAS_prefsDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mClassName () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'preferencesName'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_preferencesName (C_Compiler *
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("Preferences") ;
//---
  return result_outResult ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_preferencesName = false ;
static GALGAS_string gOnceFunctionResult_preferencesName ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_preferencesName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_preferencesName) {
    gOnceFunctionResult_preferencesName = onceFunction_preferencesName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_preferencesName = true ;
  }
  return gOnceFunctionResult_preferencesName ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_preferencesName (void) {
  gOnceFunctionResult_preferencesName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_preferencesName (NULL,
                                                             releaseOnceFunctionResult_preferencesName) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_preferencesName [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_preferencesName (C_Compiler * inCompiler,
                                                                const cObjectArray & /* inEffectiveParameterArray */,
                                                                const GALGAS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  return function_preferencesName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_preferencesName ("preferencesName",
                                                                 functionWithGenericHeader_preferencesName,
                                                                 & kTypeDescriptor_GALGAS_string,
                                                                 0,
                                                                 functionArgs_preferencesName) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@prefsDeclarationAST firstAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_prefsDeclarationAST::method_firstAnalysisPhase (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                          GALGAS_generationStruct & ioArgument_ioGeneration,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_actionMap var_actionMap_4085 ;
  {
  const GALGAS_prefsDeclarationAST temp_0 = this ;
  routine_buildActionMap (temp_0.readProperty_mDeclaration ().readProperty_mActionDeclarationList (), var_actionMap_4085, inCompiler  COMMA_SOURCE_FILE ("preferences.ggs", 95)) ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 97)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("preferences.ggs", 97))  COMMA_SOURCE_FILE ("preferences.ggs", 97)), GALGAS_classKind::constructor_prefs (SOURCE_FILE ("preferences.ggs", 98)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("preferences.ggs", 99)), var_actionMap_4085, GALGAS_propertyGenerationList::constructor_emptyList (SOURCE_FILE ("preferences.ggs", 101)), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 96)) ;
  }
  cEnumerator_actionMap enumerator_4227 (var_actionMap_4085, kENUMERATION_UP) ;
  while (enumerator_4227.hasCurrentObject ()) {
    const GALGAS_prefsDeclarationAST temp_1 = this ;
    ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_actionFileGeneration::constructor_new (temp_1.readProperty_mClassName ().readProperty_string (), enumerator_4227.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("preferences.ggs", 104))  COMMA_SOURCE_FILE ("preferences.ggs", 104)) ;
    enumerator_4227.gotoNextObject () ;
  }
  const GALGAS_prefsDeclarationAST temp_2 = this ;
  ioArgument_ioGeneration.setter_setMMainXibDescriptorList (temp_2.readProperty_mDeclaration ().readProperty_mMainXibDescriptorList () COMMA_SOURCE_FILE ("preferences.ggs", 109)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@prefsDeclarationAST fourthAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_prefsDeclarationAST::method_fourthAnalysisPhase (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                           GALGAS_generationStruct & ioArgument_ioGeneration,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("preferences.ggs", 121)) ;
  temp_0.addAssign_operation (GALGAS_string ("awakeFromNib")  COMMA_SOURCE_FILE ("preferences.ggs", 121)) ;
  temp_0.addAssign_operation (GALGAS_string ("init")  COMMA_SOURCE_FILE ("preferences.ggs", 121)) ;
  GALGAS_stringset var_availableCallers_4933 = temp_0 ;
  GALGAS_externFunctionMap var_externFunctionMap_5005 = GALGAS_externFunctionMap::constructor_emptyMap (SOURCE_FILE ("preferences.ggs", 122)) ;
  const GALGAS_prefsDeclarationAST temp_1 = this ;
  cEnumerator_externSwiftFunctionList enumerator_5054 (temp_1.readProperty_mDeclaration ().readProperty_mExternSwiftFunctionList (), kENUMERATION_UP) ;
  while (enumerator_5054.hasCurrentObject ()) {
    {
    var_externFunctionMap_5005.setter_insertKey (enumerator_5054.current_mExternSwiftFunctionName (HERE), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 124)) ;
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_availableCallers_4933.getter_hasKey (enumerator_5054.current_mCallerName (HERE).readProperty_string () COMMA_SOURCE_FILE ("preferences.ggs", 125)).operator_not (SOURCE_FILE ("preferences.ggs", 125)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_string var_s_5240 = GALGAS_string ("invalid caller; available callers:") ;
        cEnumerator_stringset enumerator_5294 (var_availableCallers_4933, kENUMERATION_UP) ;
        while (enumerator_5294.hasCurrentObject ()) {
          var_s_5240.plusAssign_operation(GALGAS_string ("\n"
            "  - ").add_operation (enumerator_5294.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 128)), inCompiler  COMMA_SOURCE_FILE ("preferences.ggs", 128)) ;
          enumerator_5294.gotoNextObject () ;
        }
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_5054.current_mCallerName (HERE).readProperty_location (), var_s_5240, fixItArray3  COMMA_SOURCE_FILE ("preferences.ggs", 130)) ;
      }
    }
    enumerator_5054.gotoNextObject () ;
  }
  GALGAS_propertyMap var_preferencesPropertyMap_5553 ;
  GALGAS_actionMap var_actionMap_5572 ;
  GALGAS_propertyGenerationList var_propertyGenerationList_5604 ;
  GALGAS_classKind joker_5520 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 135)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("preferences.ggs", 135))  COMMA_SOURCE_FILE ("preferences.ggs", 135)), joker_5520, var_preferencesPropertyMap_5553, var_actionMap_5572, var_propertyGenerationList_5604, inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 134)) ;
  GALGAS_regularBindingsGenerationList var_regularBindingsGenerationList_5974 ;
  GALGAS_multipleBindingGenerationList var_multipleBindingGenerationList_6044 ;
  GALGAS_actionBindingListForGeneration var_actionBindingListForGeneration_6116 ;
  GALGAS_decoratedOutletMap var_outletMap_6155 ;
  GALGAS_tableViewBindingGenerationList var_tableViewBindingGenerationList_6227 ;
  GALGAS_ebViewGraphicControllerBindingGenerationList var_ebViewGraphicControllerBindingGenerationList_6327 ;
  {
  const GALGAS_prefsDeclarationAST temp_4 = this ;
  routine_analyzeOutlets (GALGAS_bool (true), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("preferences.ggs", 144)), var_preferencesPropertyMap_5553, GALGAS_string::makeEmptyString (), ioArgument_ioSemanticContext, temp_4.readProperty_mDeclaration ().readProperty_mOutletDeclarationList (), var_preferencesPropertyMap_5553, var_actionMap_5572, function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 151)), ioArgument_ioGeneration, var_regularBindingsGenerationList_5974, var_multipleBindingGenerationList_6044, var_actionBindingListForGeneration_6116, var_outletMap_6155, var_tableViewBindingGenerationList_6227, var_ebViewGraphicControllerBindingGenerationList_6327, inCompiler  COMMA_SOURCE_FILE ("preferences.ggs", 142)) ;
  }
  GALGAS_autoLayoutViewDeclarationMap var_viewDeclarationMap_6427 = GALGAS_autoLayoutViewDeclarationMap::constructor_emptyMap (SOURCE_FILE ("preferences.ggs", 161)) ;
  GALGAS_viewGenerationList var_viewGenerationList_6477 = GALGAS_viewGenerationList::constructor_emptyList (SOURCE_FILE ("preferences.ggs", 162)) ;
  GALGAS_implicitViewFunctionGenerationList var_implicitViewFunctionGenerationList_6559 = GALGAS_implicitViewFunctionGenerationList::constructor_emptyList (SOURCE_FILE ("preferences.ggs", 163)) ;
  GALGAS_autoLayoutConfiguratorMap var_configuratorMap_6613 = GALGAS_autoLayoutConfiguratorMap::constructor_emptyMap (SOURCE_FILE ("preferences.ggs", 164)) ;
  GALGAS_autoLayoutOutletMap var_autoLayoutOutletMap_6665 = GALGAS_autoLayoutOutletMap::constructor_emptyMap (SOURCE_FILE ("preferences.ggs", 165)) ;
  const GALGAS_prefsDeclarationAST temp_5 = this ;
  cEnumerator_astViewDeclarationList enumerator_6702 (temp_5.readProperty_mDeclaration ().readProperty_mViewDeclarationList (), kENUMERATION_UP) ;
  while (enumerator_6702.hasCurrentObject ()) {
    {
    var_viewDeclarationMap_6427.setter_insertKey (enumerator_6702.current_mViewName (HERE), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 167)) ;
    }
    GALGAS_abstractViewGeneration var_viewGeneration_7198 ;
    const GALGAS_prefsDeclarationAST temp_6 = this ;
    callExtensionMethod_checkView ((cPtr_astAbstractViewDeclaration *) enumerator_6702.current_mView (HERE).ptr (), enumerator_6702.current_mViewName (HERE).readProperty_string (), var_viewDeclarationMap_6427, GALGAS_bool (true), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("preferences.ggs", 172)), var_preferencesPropertyMap_5553, ioArgument_ioSemanticContext, GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("preferences.ggs", 175)), var_actionMap_5572, temp_6.readProperty_mClassName ().readProperty_string (), ioArgument_ioSemanticContext.readProperty_mClassMap (), var_implicitViewFunctionGenerationList_6559, var_configuratorMap_6613, var_autoLayoutOutletMap_6665, var_viewGeneration_7198, inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 168)) ;
    var_viewGenerationList_6477.addAssign_operation (enumerator_6702.current_mViewName (HERE).readProperty_string (), var_viewGeneration_7198  COMMA_SOURCE_FILE ("preferences.ggs", 184)) ;
    enumerator_6702.gotoNextObject () ;
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_viewDeclarationMap_6427.getter_hasKey (GALGAS_string ("mPrefsMainView") COMMA_SOURCE_FILE ("preferences.ggs", 186)).operator_not (SOURCE_FILE ("preferences.ggs", 186)).boolEnum () ;
    if (kBoolTrue == test_7) {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("preferences.ggs", 187)), GALGAS_string ("Preferences should define 'mPrefsMainView' stack view"), fixItArray8  COMMA_SOURCE_FILE ("preferences.ggs", 187)) ;
    }
  }
  const GALGAS_prefsDeclarationAST temp_9 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_preferencesForGeneration::constructor_new (var_propertyGenerationList_5604, ioArgument_ioGeneration.readProperty_mMainXibDescriptorList (), var_regularBindingsGenerationList_5974, var_multipleBindingGenerationList_6044, var_actionBindingListForGeneration_6116, var_outletMap_6155, temp_9.readProperty_mDeclaration ().readProperty_mExternSwiftFunctionList (), var_tableViewBindingGenerationList_6227, var_ebViewGraphicControllerBindingGenerationList_6327, var_viewGenerationList_6477, var_implicitViewFunctionGenerationList_6559, var_configuratorMap_6613, var_autoLayoutOutletMap_6665  COMMA_SOURCE_FILE ("preferences.ggs", 190))  COMMA_SOURCE_FILE ("preferences.ggs", 190)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'prefsGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_prefsGenerationTemplate_3 [1] = {
  NULL
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_prefsGenerationTemplate_3 [1] = {
  NULL
} ;

//--- Directory 'controllers'

const cDirectoryWrapper gWrapperDirectory_3_prefsGenerationTemplate (
  "controllers",
  0,
  gWrapperAllFiles_prefsGenerationTemplate_3,
  0,
  gWrapperAllDirectories_prefsGenerationTemplate_3
) ;

//--- All files of 'standard-properties' directory

static const cRegularFileWrapper * gWrapperAllFiles_prefsGenerationTemplate_1 [1] = {
  NULL
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_prefsGenerationTemplate_1 [1] = {
  NULL
} ;

//--- Directory 'standard-properties'

const cDirectoryWrapper gWrapperDirectory_1_prefsGenerationTemplate (
  "standard-properties",
  0,
  gWrapperAllFiles_prefsGenerationTemplate_1,
  0,
  gWrapperAllDirectories_prefsGenerationTemplate_1
) ;

//--- All files of 'xcode-project' directory

static const cRegularFileWrapper * gWrapperAllFiles_prefsGenerationTemplate_2 [1] = {
  NULL
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_prefsGenerationTemplate_2 [1] = {
  NULL
} ;

//--- Directory 'xcode-project'

const cDirectoryWrapper gWrapperDirectory_2_prefsGenerationTemplate (
  "xcode-project",
  0,
  gWrapperAllFiles_prefsGenerationTemplate_2,
  0,
  gWrapperAllDirectories_prefsGenerationTemplate_2
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_prefsGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_prefsGenerationTemplate_0 [4] = {
  & gWrapperDirectory_3_prefsGenerationTemplate,
  & gWrapperDirectory_1_prefsGenerationTemplate,
  & gWrapperDirectory_2_prefsGenerationTemplate,
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_prefsGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_prefsGenerationTemplate_0,
  3,
  gWrapperAllDirectories_prefsGenerationTemplate_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'prefsGenerationTemplate preferences'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_prefsGenerationTemplate_preferences (C_Compiler * inCompiler,
                                                                       const GALGAS_propertyGenerationList & in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                       const GALGAS_mainXibDescriptorList & in_MAIN_5F_XIB_5F_DESCRIPTOR_5F_LIST,
                                                                       const GALGAS_decoratedOutletMap & in_OUTLET_5F_MAP,
                                                                       const GALGAS_regularBindingsGenerationList & in_REGULAR_5F_BINDINGS_5F_GENERATION_5F_LIST,
                                                                       const GALGAS_actionBindingListForGeneration & in_TARGET_5F_ACTION_5F_LIST,
                                                                       const GALGAS_multipleBindingGenerationList & in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST,
                                                                       const GALGAS_externSwiftFunctionList & in_EXTERN_5F_SWIFT_5F_FUNCTION_5F_LIST,
                                                                       const GALGAS_tableViewBindingGenerationList & in_TABLE_5F_VALUE_5F_BINDING_5F_GENERATION_5F_LIST,
                                                                       const GALGAS_ebViewGraphicControllerBindingGenerationList & in_EB_5F_VIEW_5F_GRAPHIC_5F_CONTROLLER_5F_BINDING_5F_GENERATION_5F_LIST,
                                                                       const GALGAS_viewGenerationList & in_VIEW_5F_GENERATION_5F_LIST,
                                                                       const GALGAS_implicitViewFunctionGenerationList & in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST,
                                                                       const GALGAS_autoLayoutOutletMap & in_AUTO_5F_LAYOUT_5F_OUTLET_5F_MAP
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "import Cocoa\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "var g_" ;
  result << function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 9)).stringValue () ;
  result << " : " ;
  result << function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 9)).stringValue () ;
  result << "\? = nil\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "@objc(" ;
  result << function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 13)).stringValue () ;
  result << ") final class " ;
  result << function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 13)).stringValue () ;
  result << " : " ;
  result << function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 13)).stringValue () ;
  result << "_SuperClass, NSWindowDelegate {\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  private final var mWindow : CanariWindow\? = nil\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    Show Preferences window\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  @IBAction func showPreferencesWindowAction (_ inSender : Any\?) {\n"
    "    let window : CanariWindow\n"
    "    if let w = self.mWindow {\n"
    "      window = w\n"
    "    }else{\n"
    "      window = CanariWindow (\n"
    "        contentRect: .zero,\n"
    "        styleMask: [.closable, .resizable, .titled],\n"
    "        backing: .buffered,\n"
    "        defer: false\n"
    "      )\n"
    "      self.mWindow = window\n"
    "      window.setFrameAutosaveName (\"PrefsWindowSettings\")\n"
    "      window.title = \"Preferences\"\n"
    "      window.isReleasedWhenClosed = false\n"
    "      window.contentView = AutoLayoutWindowContentView (view: self.mPrefsMainView)\n"
    "    //--- Contr\xC3""\xB4""ler le comportement en plein \xC3""\xA9""cran\n"
    "      window.collectionBehavior = [.fullScreenAuxiliary, .fullScreenNone]\n"
    "      let zoomButton = window.standardWindowButton (.zoomButton)\n"
    "      zoomButton\?.isEnabled = false\n"
    "    }\n"
    "    window.makeKeyAndOrderFront (nil)\n"
    "  }\n"
    "\n" ;
  GALGAS_uint index_2083_ (0) ;
  if (in_VIEW_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_viewGenerationList enumerator_2083 (in_VIEW_5F_GENERATION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2083.hasCurrentObject ()) {
      result << "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
        "  //    VIEW " ;
      result << enumerator_2083.current_mViewName (HERE).stringValue () ;
      result << "\n"
        "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
        "\n" ;
      result << callExtensionGetter_generate ((const cPtr_abstractViewGeneration *) enumerator_2083.current_mView (HERE).ptr (), GALGAS_bool (true), enumerator_2083.current_mViewName (HERE), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 52)).stringValue () ;
      index_2083_.increment () ;
      enumerator_2083.gotoNextObject () ;
    }
  }
  GALGAS_uint index_2493_idx (0) ;
  if (in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST.isValid ()) {
    cEnumerator_implicitViewFunctionGenerationList enumerator_2493 (in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2493.hasCurrentObject ()) {
      result << "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
        "  //    IMPLICIT VIEW " ;
      result << index_2493_idx.getter_string (SOURCE_FILE ("preferences.swift.galgasTemplate", 56)).stringValue () ;
      result << "\n"
        "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
        "\n"
        "  fileprivate final func computeImplicitView_" ;
      result << index_2493_idx.getter_string (SOURCE_FILE ("preferences.swift.galgasTemplate", 58)).stringValue () ;
      result << " () -> NSView {\n" ;
      result << callExtensionGetter_generate ((const cPtr_abstractViewInstructionGeneration *) enumerator_2493.current_mInstruction (HERE).ptr (), GALGAS_bool (true), GALGAS_string ("view"), GALGAS_string ("    "), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 59)).stringValue () ;
      result << "    return view\n"
        "  }\n"
        "\n" ;
      index_2493_idx.increment () ;
      enumerator_2493.gotoNextObject () ;
    }
  }
  result << "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    Outlets\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n" ;
  GALGAS_uint index_3289_ (0) ;
  if (in_AUTO_5F_LAYOUT_5F_OUTLET_5F_MAP.isValid ()) {
    cEnumerator_autoLayoutOutletMap enumerator_3289 (in_AUTO_5F_LAYOUT_5F_OUTLET_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_3289.hasCurrentObject ()) {
      result << "  var " ;
      result << enumerator_3289.current_lkey (HERE).readProperty_string ().stringValue () ;
      result << " : AutoLayout" ;
      result << enumerator_3289.current_mAutoLayoutOutletTypeName (HERE).stringValue () ;
      result << "\? = nil\n" ;
      index_3289_.increment () ;
      enumerator_3289.gotoNextObject () ;
    }
  }
  result << "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    Outlets (EX)\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n" ;
  GALGAS_uint index_3678_ (0) ;
  if (in_OUTLET_5F_MAP.isValid ()) {
    cEnumerator_decoratedOutletMap enumerator_3678 (in_OUTLET_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_3678.hasCurrentObject ()) {
      result << "  @IBOutlet var " ;
      result << enumerator_3678.current_lkey (HERE).readProperty_string ().stringValue () ;
      result << " : " ;
      result << enumerator_3678.current_mOutletTypeName (HERE).stringValue () ;
      result << "\? = nil\n" ;
      index_3678_.increment () ;
      enumerator_3678.gotoNextObject () ;
    }
  }
  result << "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    Multiple bindings controllers\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n" ;
  GALGAS_uint index_4122_ (0) ;
  if (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_multipleBindingGenerationList enumerator_4122 (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4122.hasCurrentObject ()) {
      result << "  private var mController_" ;
      result << enumerator_4122.current_mOutletName (HERE).stringValue () ;
      result << "_" ;
      result << enumerator_4122.current_mBindingName (HERE).stringValue () ;
      result << " : MultipleBindingController_" ;
      result << enumerator_4122.current_mBindingName (HERE).stringValue () ;
      result << "\?\n" ;
      index_4122_.increment () ;
      enumerator_4122.gotoNextObject () ;
    }
  }
  result << "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    Undo Manager\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  private var mUndoManager = EBUndoManager ()\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  var ebUndoManager : EBUndoManager { return self.mUndoManager }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  // The preferences window should register this object as delegate (do it in Interface Builder)\n"
    "\n"
    "  @objc func windowWillReturnUndoManager (_ window: NSWindow) -> UndoManager\? {\n"
    "    return self.ebUndoManager\n"
    "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    Init\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  override init () {\n"
    "    super.init ()\n"
    "    g_" ;
  result << function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 112)).stringValue () ;
  result << " = self ;\n"
    "  //--- Read from preferences\n" ;
  GALGAS_uint index_5484_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_5484 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_5484.hasCurrentObject ()) {
      result << callExtensionGetter_configurationCode ((const cPtr_propertyGeneration *) enumerator_5484.current_mProperty (HERE).ptr (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 116)).stringValue () ;
      index_5484_.increment () ;
      enumerator_5484.gotoNextObject () ;
    }
  }
  result << "  //--- Notify application will terminate\n"
    "    NotificationCenter.default.addObserver (self,\n"
    "      selector:#selector(Preferences.applicationWillTerminateAction(_:)),\n"
    "      name:NSApplication.willTerminateNotification,\n"
    "      object:nil\n"
    "    )\n"
    "  //--- Extern functions\n" ;
  GALGAS_uint index_5874_ (0) ;
  if (in_EXTERN_5F_SWIFT_5F_FUNCTION_5F_LIST.isValid ()) {
    cEnumerator_externSwiftFunctionList enumerator_5874 (in_EXTERN_5F_SWIFT_5F_FUNCTION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5874.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_5874.current_mCallerName (HERE).readProperty_string ().objectCompare (GALGAS_string ("init"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "    self." ;
        result << enumerator_5874.current_mExternSwiftFunctionName (HERE).readProperty_string ().stringValue () ;
        result << " ()\n" ;
      }else if (kBoolFalse == test_0) {
      }
      index_5874_.increment () ;
      enumerator_5874.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "\n" ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, in_MAIN_5F_XIB_5F_DESCRIPTOR_5F_LIST.getter_length (SOURCE_FILE ("preferences.swift.galgasTemplate", 134)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 134)).getter_uint (inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 134)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
      "\n"
      "  @IBOutlet private final var window : NSWindow\?\n"
      "  let OUTLET_WIDTH = 200.0\n"
      "  let OUTLET_HEIGHT = 22.0\n"
      "\n" ;
  }else if (kBoolFalse == test_1) {
  }
  result << "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    awakeFromNib\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  override func awakeFromNib () {\n" ;
  result << extensionGetter_generateCode (in_MAIN_5F_XIB_5F_DESCRIPTOR_5F_LIST, inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 149)).stringValue () ;
  GALGAS_uint index_6659_ (0) ;
  if (in_OUTLET_5F_MAP.isValid ()) {
    cEnumerator_decoratedOutletMap enumerator_6659 (in_OUTLET_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_6659.hasCurrentObject ()) {
      result << "    checkOutletConnection (self." ;
      result << enumerator_6659.current_lkey (HERE).readProperty_string ().stringValue () ;
      result << ", \"" ;
      result << enumerator_6659.current_lkey (HERE).readProperty_string ().stringValue () ;
      result << "\", " ;
      result << enumerator_6659.current_mOutletTypeName (HERE).stringValue () ;
      result << ".self, #file, #line)\n" ;
      index_6659_.increment () ;
      enumerator_6659.gotoNextObject () ;
    }
  }
  result << "  //--------------------------- Install bindings\n" ;
  GALGAS_uint index_6933_ (0) ;
  if (in_REGULAR_5F_BINDINGS_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_regularBindingsGenerationList enumerator_6933 (in_REGULAR_5F_BINDINGS_5F_GENERATION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6933.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_6933.current_mOutletName (HERE).stringValue () ;
      result << "\?.bind_" ;
      result << enumerator_6933.current_mBindingName (HERE).stringValue () ;
      result << " (" ;
      GALGAS_uint index_7040_ (0) ;
      if (enumerator_6933.current_mBoundObjectList (HERE).isValid ()) {
        cEnumerator_boundObjectList enumerator_7040 (enumerator_6933.current_mBoundObjectList (HERE), kENUMERATION_UP) ;
        while (enumerator_7040.hasCurrentObject ()) {
          result << enumerator_7040.current_mBoundObjectString (HERE).stringValue () ;
          if (enumerator_7040.hasNextObject ()) {
            result << ", " ;
          }
          index_7040_.increment () ;
          enumerator_7040.gotoNextObject () ;
        }
      }
      result << enumerator_6933.current_mBindingOptionsString (HERE).stringValue () ;
      result << ")\n" ;
      index_6933_.increment () ;
      enumerator_6933.gotoNextObject () ;
    }
  }
  result << "  //--------------------------- Install multiple bindings\n" ;
  GALGAS_uint index_7271_ (0) ;
  if (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_multipleBindingGenerationList enumerator_7271 (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7271.hasCurrentObject ()) {
      result << "    do{\n"
        "      let controller = MultipleBindingController_" ;
      result << enumerator_7271.current_mBindingName (HERE).stringValue () ;
      result << " (\n"
        "        computeFunction: " ;
      result << callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_7271.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 168)).stringValue () ;
      result << ",\n"
        "        outlet: self." ;
      result << enumerator_7271.current_mOutletName (HERE).stringValue () ;
      result << "\n"
        "      )\n"
        "      self.mController_" ;
      result << enumerator_7271.current_mOutletName (HERE).stringValue () ;
      result << "_" ;
      result << enumerator_7271.current_mBindingName (HERE).stringValue () ;
      result << " = controller\n"
        "    }\n" ;
      index_7271_.increment () ;
      enumerator_7271.gotoNextObject () ;
    }
  }
  result << "  //--------------------------- Array controller\n" ;
  GALGAS_uint index_7742_ (0) ;
  if (in_TABLE_5F_VALUE_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_tableViewBindingGenerationList enumerator_7742 (in_TABLE_5F_VALUE_5F_BINDING_5F_GENERATION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7742.hasCurrentObject ()) {
      result << "    preferences_" ;
      result << enumerator_7742.current_mTableValueBindingControllerName (HERE).stringValue () ;
      result << ".bind_tableView (self." ;
      result << enumerator_7742.current_mTableValueBindingOutletName (HERE).stringValue () ;
      result << ")\n" ;
      index_7742_.increment () ;
      enumerator_7742.gotoNextObject () ;
    }
  }
  GALGAS_uint index_7970_ (0) ;
  if (in_EB_5F_VIEW_5F_GRAPHIC_5F_CONTROLLER_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_ebViewGraphicControllerBindingGenerationList enumerator_7970 (in_EB_5F_VIEW_5F_GRAPHIC_5F_CONTROLLER_5F_BINDING_5F_GENERATION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7970.hasCurrentObject ()) {
      result << "    preferences_" ;
      result << enumerator_7970.current_mArrayControllerControllerName (HERE).stringValue () ;
      result << ".bind_ebView (self." ;
      result << enumerator_7970.current_mEBViewOutletName (HERE).stringValue () ;
      result << ")\n" ;
      index_7970_.increment () ;
      enumerator_7970.gotoNextObject () ;
    }
  }
  result << "  //--------------------------- Set targets / actions\n" ;
  GALGAS_uint index_8209_ (0) ;
  if (in_TARGET_5F_ACTION_5F_LIST.isValid ()) {
    cEnumerator_actionBindingListForGeneration enumerator_8209 (in_TARGET_5F_ACTION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8209.hasCurrentObject ()) {
      result << "    self." ;
      result << enumerator_8209.current_mOutletName (HERE).stringValue () ;
      result << "\?.target = " ;
      result << enumerator_8209.current_mTargetName (HERE).stringValue () ;
      result << "\n"
        "    self." ;
      result << enumerator_8209.current_mOutletName (HERE).stringValue () ;
      result << "\?.action = #selector (" ;
      result << enumerator_8209.current_mTargetTypeName (HERE).stringValue () ;
      result << "." ;
      result << enumerator_8209.current_mActionName (HERE).stringValue () ;
      result << " (_:))\n" ;
      index_8209_.increment () ;
      enumerator_8209.gotoNextObject () ;
    }
  }
  result << "  //--------------------------- Extern functions\n" ;
  GALGAS_uint index_8485_ (0) ;
  if (in_EXTERN_5F_SWIFT_5F_FUNCTION_5F_LIST.isValid ()) {
    cEnumerator_externSwiftFunctionList enumerator_8485 (in_EXTERN_5F_SWIFT_5F_FUNCTION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8485.hasCurrentObject ()) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_8485.current_mCallerName (HERE).readProperty_string ().objectCompare (GALGAS_string ("awakeFromNib"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        result << "    self." ;
        result << enumerator_8485.current_mExternSwiftFunctionName (HERE).readProperty_string ().stringValue () ;
        result << " ()\n" ;
      }else if (kBoolFalse == test_2) {
      }
      index_8485_.increment () ;
      enumerator_8485.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "  //    applicationWillTerminateAction\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  @objc func applicationWillTerminateAction (_ : NSNotification) {\n"
    "  //--------------------------- Array controller\n" ;
  GALGAS_uint index_9121_ (0) ;
  if (in_TABLE_5F_VALUE_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_tableViewBindingGenerationList enumerator_9121 (in_TABLE_5F_VALUE_5F_BINDING_5F_GENERATION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9121.hasCurrentObject ()) {
      result << "    preferences_" ;
      result << enumerator_9121.current_mTableValueBindingControllerName (HERE).stringValue () ;
      result << ".unbind_tableView (self." ;
      result << enumerator_9121.current_mTableValueBindingOutletName (HERE).stringValue () ;
      result << ")\n" ;
      index_9121_.increment () ;
      enumerator_9121.gotoNextObject () ;
    }
  }
  GALGAS_uint index_9351_ (0) ;
  if (in_EB_5F_VIEW_5F_GRAPHIC_5F_CONTROLLER_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_ebViewGraphicControllerBindingGenerationList enumerator_9351 (in_EB_5F_VIEW_5F_GRAPHIC_5F_CONTROLLER_5F_BINDING_5F_GENERATION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9351.hasCurrentObject ()) {
      result << "    preferences_" ;
      result << enumerator_9351.current_mArrayControllerControllerName (HERE).stringValue () ;
      result << ".unbind_ebView (preferences_" ;
      result << enumerator_9351.current_mEBViewOutletName (HERE).stringValue () ;
      result << ")\n" ;
      index_9351_.increment () ;
      enumerator_9351.gotoNextObject () ;
    }
  }
  GALGAS_uint index_9511_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_9511 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_9511.hasCurrentObject ()) {
      result << callExtensionGetter_terminationCode ((const cPtr_propertyGeneration *) enumerator_9511.current_mProperty (HERE).ptr (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 210)).stringValue () ;
      index_9511_.increment () ;
      enumerator_9511.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n" ;
  GALGAS_uint index_9857_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_9857 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_9857.hasCurrentObject ()) {
      result << callExtensionGetter_prefKeyDefinitionCode ((const cPtr_propertyGeneration *) enumerator_9857.current_mProperty (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 221)).stringValue () ;
      index_9857_.increment () ;
      enumerator_9857.gotoNextObject () ;
    }
  }
  result << "\n" ;
  GALGAS_uint index_9953_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_9953 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_9953.hasCurrentObject ()) {
      result << callExtensionGetter_propertyDeclarationCode ((const cPtr_propertyGeneration *) enumerator_9953.current_mProperty (HERE).ptr (), GALGAS_bool (true), GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("preferences.swift.galgasTemplate", 226)), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 226)).stringValue () ;
      index_9953_.increment () ;
      enumerator_9953.gotoNextObject () ;
    }
  }
  result << "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@preferencesForGeneration generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_preferencesForGeneration::method_generateCode (const GALGAS_string constinArgument_inOutputDirectory,
                                                         GALGAS_stringset /* inArgument_inToOneEntities */,
                                                         GALGAS_stringset /* inArgument_inToManyEntities */,
                                                         GALGAS_stringset & ioArgument_ioGeneratedFileSet,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_preferencesForGeneration temp_0 = this ;
  const GALGAS_preferencesForGeneration temp_1 = this ;
  const GALGAS_preferencesForGeneration temp_2 = this ;
  const GALGAS_preferencesForGeneration temp_3 = this ;
  const GALGAS_preferencesForGeneration temp_4 = this ;
  const GALGAS_preferencesForGeneration temp_5 = this ;
  const GALGAS_preferencesForGeneration temp_6 = this ;
  const GALGAS_preferencesForGeneration temp_7 = this ;
  const GALGAS_preferencesForGeneration temp_8 = this ;
  const GALGAS_preferencesForGeneration temp_9 = this ;
  const GALGAS_preferencesForGeneration temp_10 = this ;
  const GALGAS_preferencesForGeneration temp_11 = this ;
  GALGAS_string var_s_10524 = GALGAS_string (filewrapperTemplate_prefsGenerationTemplate_preferences (inCompiler, temp_0.readProperty_mPropertyListForGeneration (), temp_1.readProperty_mMainXibDescriptorList (), temp_2.readProperty_mOutletMap (), temp_3.readProperty_mRegularBindingsGenerationList (), temp_4.readProperty_mActionBindingListForGeneration (), temp_5.readProperty_mMultipleBindingGenerationList (), temp_6.readProperty_mExternSwiftFunctionList (), temp_7.readProperty_mTableViewBindingGenerationList (), temp_8.readProperty_mEBViewBindingGenerationList (), temp_9.readProperty_mViewGenerationList (), temp_10.readProperty_mImplicitViewFunctionGenerationList (), temp_11.readProperty_mAutoLayoutOutletMap () COMMA_SOURCE_FILE ("preferences.ggs", 255))) ;
  GALGAS_string var_fileName_11032 = function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 269)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 269)) ;
  ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_11032  COMMA_SOURCE_FILE ("preferences.ggs", 270)) ;
  {
  GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_11032, var_s_10524, inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 271)) ;
  }
  const GALGAS_preferencesForGeneration temp_12 = this ;
  cEnumerator_autoLayoutConfiguratorMap enumerator_11222 (temp_12.readProperty_mConfiguratorMap (), kENUMERATION_UP) ;
  while (enumerator_11222.hasCurrentObject ()) {
    GALGAS_string var_s_11261 = GALGAS_string (filewrapperTemplate_autoLayoutDocumentGenerationTemplate_documentOutletConfiguratorImplementation (inCompiler, GALGAS_string ("Preferences"), enumerator_11222.current_lkey (HERE).readProperty_string (), enumerator_11222.current_mAutoLayoutOutletTypeName (HERE) COMMA_SOURCE_FILE ("preferences.ggs", 278))) ;
    GALGAS_string var_header_11443 = GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("preferences.ggs", 283)), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 283)).add_operation (GALGAS_string ("\n"
      "//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n"
      "//"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 283)).add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("preferences.ggs", 285)), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 285)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 285)).add_operation (GALGAS_string ("import Cocoa\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 285)).add_operation (GALGAS_string ("//"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 286)).add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("preferences.ggs", 287)), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 287)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 287)) ;
    GALGAS_string var_fileName_11792 = GALGAS_string ("configurator-Preferences-").add_operation (enumerator_11222.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 288)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 288)) ;
    ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_11792  COMMA_SOURCE_FILE ("preferences.ggs", 289)) ;
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_11792, GALGAS_string ("//"), var_header_11443, GALGAS_string ("\n"
      "\n"), var_s_11261, GALGAS_string ("INSERT CONFIGURATION CODE\n"), GALGAS_string ("  }\n"
      "}\n"
      "\n"
      "//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("preferences.ggs", 298)), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 298)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 298)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 290)) ;
    }
    enumerator_11222.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'graphvizAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_graphvizAnalysis (const GALGAS_string constinArgument_inSourceFileDirectory,
                               const GALGAS_semanticContext constinArgument_inSemanticContext,
                               const GALGAS_lstringlist constinArgument_inGraphvizList,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("graphviz.ggs", 29)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 29)).getter_uint (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 29)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      cEnumerator_lstringlist enumerator_1221 (constinArgument_inGraphvizList, kENUMERATION_UP) ;
      while (enumerator_1221.hasCurrentObject ()) {
        {
        routine_graphvizRootEntityAnalysis (constinArgument_inSourceFileDirectory, constinArgument_inSemanticContext, enumerator_1221.current_mValue (HERE).readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 31)) ;
        }
        enumerator_1221.gotoNextObject () ;
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'graphvizRootEntityAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_graphvizRootEntityAnalysis (const GALGAS_string constinArgument_inSourceFileDirectory,
                                         const GALGAS_semanticContext constinArgument_inSemanticContext,
                                         const GALGAS_string constinArgument_inRootEntityName,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("graphviz.ggs", 43)) ;
  temp_0.addAssign_operation (constinArgument_inRootEntityName  COMMA_SOURCE_FILE ("graphviz.ggs", 43)) ;
  GALGAS_stringset var_reachableEntityNameSet_1677 = temp_0 ;
  GALGAS_stringlist temp_1 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("graphviz.ggs", 44)) ;
  temp_1.addAssign_operation (constinArgument_inRootEntityName  COMMA_SOURCE_FILE ("graphviz.ggs", 44)) ;
  GALGAS_stringlist var_exploreArray_1730 = temp_1 ;
  GALGAS_stringlist var_nodeList_1779 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("graphviz.ggs", 45)) ;
  GALGAS_stringlist var_arrowList_1812 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("graphviz.ggs", 46)) ;
  if (constinArgument_inSemanticContext.readProperty_mClassMap ().getter_count (SOURCE_FILE ("graphviz.ggs", 47)).add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 47)).getter_uint (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 47)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 47)).isValid ()) {
    uint32_t variant_1824 = constinArgument_inSemanticContext.readProperty_mClassMap ().getter_count (SOURCE_FILE ("graphviz.ggs", 47)).add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 47)).getter_uint (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 47)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 47)).uintValue () ;
    bool loop_1824 = true ;
    while (loop_1824) {
      loop_1824 = GALGAS_bool (kIsStrictSup, var_exploreArray_1730.getter_length (SOURCE_FILE ("graphviz.ggs", 47)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 47)).getter_uint (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 47)))).isValid () ;
      if (loop_1824) {
        loop_1824 = GALGAS_bool (kIsStrictSup, var_exploreArray_1730.getter_length (SOURCE_FILE ("graphviz.ggs", 47)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 47)).getter_uint (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 47)))).boolValue () ;
      }
      if (loop_1824 && (0 == variant_1824)) {
        loop_1824 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("graphviz.ggs", 47)) ;
      }
      if (loop_1824) {
        variant_1824 -- ;
        GALGAS_string var_entityName_1953 ;
        {
        var_exploreArray_1730.setter_popLast (var_entityName_1953, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 48)) ;
        }
        GALGAS_string var_node_1967 = GALGAS_string ("  ").add_operation (var_entityName_1953, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 49)).add_operation (GALGAS_string ("[label=\"<"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 49)).add_operation (var_entityName_1953, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 49)).add_operation (GALGAS_string (">"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 49)).add_operation (var_entityName_1953, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 49)) ;
        GALGAS_classKind var_entityKind_2115 ;
        GALGAS_propertyMap var_propertyMap_2145 ;
        GALGAS_actionMap joker_2147_2 ; // Joker input parameter
        GALGAS_propertyGenerationList joker_2147_1 ; // Joker input parameter
        constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (var_entityName_1953.getter_nowhere (SOURCE_FILE ("graphviz.ggs", 50)), var_entityKind_2115, var_propertyMap_2145, joker_2147_2, joker_2147_1, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 50)) ;
        GALGAS_string var_superEntityName_2211 ;
        GALGAS_bool joker_2213_2 ; // Joker input parameter
        GALGAS_bool joker_2213_1 ; // Joker input parameter
        var_entityKind_2115.method_entity (var_superEntityName_2211, joker_2213_2, joker_2213_1, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 51)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (kIsNotEqual, var_superEntityName_2211.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_2) {
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = var_reachableEntityNameSet_1677.getter_hasKey (var_superEntityName_2211 COMMA_SOURCE_FILE ("graphviz.ggs", 53)).operator_not (SOURCE_FILE ("graphviz.ggs", 53)).boolEnum () ;
              if (kBoolTrue == test_3) {
                var_reachableEntityNameSet_1677.addAssign_operation (var_superEntityName_2211  COMMA_SOURCE_FILE ("graphviz.ggs", 54)) ;
                var_exploreArray_1730.addAssign_operation (var_superEntityName_2211  COMMA_SOURCE_FILE ("graphviz.ggs", 55)) ;
              }
            }
            var_arrowList_1812.addAssign_operation (GALGAS_string ("  ").add_operation (var_entityName_1953, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 57)).add_operation (GALGAS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 57)).add_operation (var_superEntityName_2211, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 57)).add_operation (GALGAS_string (" [arrowhead=dot]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 57))  COMMA_SOURCE_FILE ("graphviz.ggs", 57)) ;
          }
        }
        cEnumerator_propertyMap enumerator_2552 (var_propertyMap_2145, kENUMERATION_UP) ;
        while (enumerator_2552.hasCurrentObject ()) {
          switch (enumerator_2552.current_mKind (HERE).enumValue ()) {
          case GALGAS_propertyKind::kNotBuilt:
            break ;
          case GALGAS_propertyKind::kEnum_property:
            {
              const cEnumAssociatedValues_propertyKind_property * extractPtr_2823 = (const cEnumAssociatedValues_propertyKind_property *) (enumerator_2552.current_mKind (HERE).unsafePointer ()) ;
              const GALGAS_typeKind extractedValue_2623_type = extractPtr_2823->mAssociatedValue0 ;
              const GALGAS_propertyAccessibility extractedValue_2637_accessibility = extractPtr_2823->mAssociatedValue1 ;
              switch (extractedValue_2637_accessibility.enumValue ()) {
              case GALGAS_propertyAccessibility::kNotBuilt:
                break ;
              case GALGAS_propertyAccessibility::kEnum_stored:
                {
                  var_node_1967.plusAssign_operation(GALGAS_string ("|").add_operation (extensionGetter_swiftTypeName (extractedValue_2623_type, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 64)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 64)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 64)).add_operation (enumerator_2552.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 64)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 64)) ;
                }
                break ;
              case GALGAS_propertyAccessibility::kEnum_transient:
                {
                }
                break ;
              case GALGAS_propertyAccessibility::kEnum_computed:
                {
                }
                break ;
              }
            }
            break ;
          case GALGAS_propertyKind::kEnum_arrayController:
            {
            }
            break ;
          case GALGAS_propertyKind::kEnum_selectionController:
            {
            }
            break ;
          case GALGAS_propertyKind::kEnum_toMany:
            {
              const cEnumAssociatedValues_propertyKind_toMany * extractPtr_3916 = (const cEnumAssociatedValues_propertyKind_toMany *) (enumerator_2552.current_mKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_2931_typeName = extractPtr_3916->mAssociatedValue0 ;
              const GALGAS_propertyAccessibility extractedValue_2968_accessibility = extractPtr_3916->mAssociatedValue1 ;
              const GALGAS_toManyRelationshipOptionAST extractedValue_2981_optionKind = extractPtr_3916->mAssociatedValue3 ;
              enumGalgasBool test_4 = kBoolTrue ;
              if (kBoolTrue == test_4) {
                test_4 = extractedValue_2968_accessibility.getter_isStored (SOURCE_FILE ("graphviz.ggs", 71)).boolEnum () ;
                if (kBoolTrue == test_4) {
                  var_node_1967.plusAssign_operation(GALGAS_string ("|<").add_operation (enumerator_2552.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 72)).add_operation (GALGAS_string (">["), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 72)).add_operation (extractedValue_2931_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 72)).add_operation (GALGAS_string ("] "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 72)).add_operation (enumerator_2552.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 72)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 72)) ;
                  switch (extractedValue_2981_optionKind.enumValue ()) {
                  case GALGAS_toManyRelationshipOptionAST::kNotBuilt:
                    break ;
                  case GALGAS_toManyRelationshipOptionAST::kEnum_none:
                    {
                      enumGalgasBool test_5 = kBoolTrue ;
                      if (kBoolTrue == test_5) {
                        test_5 = var_reachableEntityNameSet_1677.getter_hasKey (extractedValue_2931_typeName.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 75)).operator_not (SOURCE_FILE ("graphviz.ggs", 75)).boolEnum () ;
                        if (kBoolTrue == test_5) {
                          var_reachableEntityNameSet_1677.addAssign_operation (extractedValue_2931_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.ggs", 76)) ;
                          var_exploreArray_1730.addAssign_operation (extractedValue_2931_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.ggs", 77)) ;
                        }
                      }
                      var_arrowList_1812.addAssign_operation (GALGAS_string ("  ").add_operation (var_entityName_1953, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 79)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 79)).add_operation (enumerator_2552.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 79)).add_operation (GALGAS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 79)).add_operation (extractedValue_2931_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 80)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 80)).add_operation (extractedValue_2931_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 80)).add_operation (GALGAS_string (" [dir=both arrowtail=none arrowhead=vee]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 80))  COMMA_SOURCE_FILE ("graphviz.ggs", 79)) ;
                    }
                    break ;
                  case GALGAS_toManyRelationshipOptionAST::kEnum_hasOpposite:
                    {
                      const cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite * extractPtr_3857 = (const cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite *) (extractedValue_2981_optionKind.unsafePointer ()) ;
                      const GALGAS_lstring extractedValue_3519_oppositeName = extractPtr_3857->mAssociatedValue0 ;
                      enumGalgasBool test_6 = kBoolTrue ;
                      if (kBoolTrue == test_6) {
                        test_6 = var_reachableEntityNameSet_1677.getter_hasKey (extractedValue_2931_typeName.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 82)).operator_not (SOURCE_FILE ("graphviz.ggs", 82)).boolEnum () ;
                        if (kBoolTrue == test_6) {
                          var_reachableEntityNameSet_1677.addAssign_operation (extractedValue_2931_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.ggs", 83)) ;
                          var_exploreArray_1730.addAssign_operation (extractedValue_2931_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.ggs", 84)) ;
                        }
                      }
                      var_arrowList_1812.addAssign_operation (GALGAS_string ("  ").add_operation (var_entityName_1953, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 86)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 86)).add_operation (enumerator_2552.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 86)).add_operation (GALGAS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 86)).add_operation (extractedValue_2931_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 87)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 87)).add_operation (extractedValue_3519_oppositeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 87)).add_operation (GALGAS_string (" [dir=both arrowtail=onormal arrowhead=vee]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 87))  COMMA_SOURCE_FILE ("graphviz.ggs", 86)) ;
                    }
                    break ;
                  case GALGAS_toManyRelationshipOptionAST::kEnum_hasDependance:
                    {
                    }
                    break ;
                  }
                }
              }
            }
            break ;
          case GALGAS_propertyKind::kEnum_toOne:
            {
              const cEnumAssociatedValues_propertyKind_toOne * extractPtr_5066 = (const cEnumAssociatedValues_propertyKind_toOne *) (enumerator_2552.current_mKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_3952_typeName = extractPtr_5066->mAssociatedValue0 ;
              const GALGAS_propertyAccessibility extractedValue_3989_accessibility = extractPtr_5066->mAssociatedValue1 ;
              const GALGAS_toOneOppositeRelationship extractedValue_4000_opposite = extractPtr_5066->mAssociatedValue3 ;
              enumGalgasBool test_7 = kBoolTrue ;
              if (kBoolTrue == test_7) {
                test_7 = extractedValue_3989_accessibility.getter_isStored (SOURCE_FILE ("graphviz.ggs", 92)).boolEnum () ;
                if (kBoolTrue == test_7) {
                  var_node_1967.plusAssign_operation(GALGAS_string ("|<").add_operation (enumerator_2552.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 93)).add_operation (GALGAS_string (">"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 93)).add_operation (extractedValue_3952_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 93)).add_operation (GALGAS_string ("\? "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 93)).add_operation (enumerator_2552.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 93)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 93)) ;
                  switch (extractedValue_4000_opposite.enumValue ()) {
                  case GALGAS_toOneOppositeRelationship::kNotBuilt:
                    break ;
                  case GALGAS_toOneOppositeRelationship::kEnum_none:
                    {
                      enumGalgasBool test_8 = kBoolTrue ;
                      if (kBoolTrue == test_8) {
                        test_8 = var_reachableEntityNameSet_1677.getter_hasKey (extractedValue_3952_typeName.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 96)).operator_not (SOURCE_FILE ("graphviz.ggs", 96)).boolEnum () ;
                        if (kBoolTrue == test_8) {
                          var_reachableEntityNameSet_1677.addAssign_operation (extractedValue_3952_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.ggs", 97)) ;
                          var_exploreArray_1730.addAssign_operation (extractedValue_3952_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.ggs", 98)) ;
                        }
                      }
                      var_arrowList_1812.addAssign_operation (GALGAS_string ("  ").add_operation (var_entityName_1953, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 100)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 100)).add_operation (enumerator_2552.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 100)).add_operation (GALGAS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 100)).add_operation (extractedValue_3952_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 101)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 101)).add_operation (extractedValue_3952_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 101)).add_operation (GALGAS_string (" [dir=both arrowtail=none arrowhead=onormal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 101))  COMMA_SOURCE_FILE ("graphviz.ggs", 100)) ;
                    }
                    break ;
                  case GALGAS_toOneOppositeRelationship::kEnum_oppositeIsToMany:
                    {
                    }
                    break ;
                  case GALGAS_toOneOppositeRelationship::kEnum_oppositeIsToOne:
                    {
                      const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne * extractPtr_5040 = (const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne *) (extractedValue_4000_opposite.unsafePointer ()) ;
                      const GALGAS_lstring extractedValue_4607_oppositeName = extractPtr_5040->mAssociatedValue0 ;
                      enumGalgasBool test_9 = kBoolTrue ;
                      if (kBoolTrue == test_9) {
                        test_9 = var_reachableEntityNameSet_1677.getter_hasKey (extractedValue_3952_typeName.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 104)).operator_not (SOURCE_FILE ("graphviz.ggs", 104)).boolEnum () ;
                        if (kBoolTrue == test_9) {
                          var_reachableEntityNameSet_1677.addAssign_operation (extractedValue_3952_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.ggs", 105)) ;
                          var_exploreArray_1730.addAssign_operation (extractedValue_3952_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.ggs", 106)) ;
                        }
                      }
                      enumGalgasBool test_10 = kBoolTrue ;
                      if (kBoolTrue == test_10) {
                        test_10 = GALGAS_bool (kIsStrictSup, enumerator_2552.current_lkey (HERE).readProperty_string ().objectCompare (extractedValue_4607_oppositeName.readProperty_string ())).boolEnum () ;
                        if (kBoolTrue == test_10) {
                          var_arrowList_1812.addAssign_operation (GALGAS_string ("  ").add_operation (var_entityName_1953, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 109)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 109)).add_operation (enumerator_2552.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 109)).add_operation (GALGAS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 109)).add_operation (extractedValue_3952_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 110)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 110)).add_operation (extractedValue_4607_oppositeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 110)).add_operation (GALGAS_string (" [dir=both arrowtail=onormal arrowhead=onormal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 110))  COMMA_SOURCE_FILE ("graphviz.ggs", 109)) ;
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
          enumerator_2552.gotoNextObject () ;
        }
        var_node_1967.plusAssign_operation(GALGAS_string ("\"]"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 116)) ;
        var_nodeList_1779.addAssign_operation (var_node_1967  COMMA_SOURCE_FILE ("graphviz.ggs", 117)) ;
      }
    }
  }
  GALGAS_string var_s_5154 = GALGAS_string ("digraph G {\n") ;
  var_s_5154.plusAssign_operation(GALGAS_string ("  rankdir=LR ;\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 121)) ;
  var_s_5154.plusAssign_operation(GALGAS_string ("  node [shape=record fontname=helvetica style=rounded] ;\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 122)) ;
  cEnumerator_stringlist enumerator_5278 (var_nodeList_1779, kENUMERATION_UP) ;
  while (enumerator_5278.hasCurrentObject ()) {
    var_s_5154.plusAssign_operation(enumerator_5278.current_mValue (HERE).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 124)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 124)) ;
    enumerator_5278.gotoNextObject () ;
  }
  cEnumerator_stringlist enumerator_5336 (var_arrowList_1812, kENUMERATION_UP) ;
  while (enumerator_5336.hasCurrentObject ()) {
    var_s_5154.plusAssign_operation(enumerator_5336.current_mValue (HERE).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 127)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 127)) ;
    enumerator_5336.gotoNextObject () ;
  }
  var_s_5154.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 129)) ;
  GALGAS_string var_filePath_5411 = constinArgument_inSourceFileDirectory.add_operation (GALGAS_string ("/models/"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 130)).add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 130)).add_operation (GALGAS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 130)) ;
  var_filePath_5411.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("graphviz.ggs", 131)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 131)) ;
  GALGAS_bool joker_5589 ; // Joker input parameter
  var_s_5154.method_writeToFileWhenDifferentContents (var_filePath_5411, joker_5589, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 132)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@autoLayoutViewClassDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_autoLayoutViewClassDeclarationAST::method_enterInPrecedenceGraph (GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_autoLayoutViewClassDeclarationAST temp_0 = this ;
  const GALGAS_autoLayoutViewClassDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mClassName (), temp_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 63)) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_autoLayoutViewClassDeclarationAST temp_3 = this ;
    test_2 = GALGAS_bool (kIsNotEqual, temp_3.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      const GALGAS_autoLayoutViewClassDeclarationAST temp_4 = this ;
      const GALGAS_autoLayoutViewClassDeclarationAST temp_5 = this ;
      ioArgument_ioGraph.setter_addEdge (temp_4.readProperty_mClassName (), temp_5.readProperty_mSuperClassName () COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 65)) ;
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutViewClassDeclarationAST nodeKey'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_autoLayoutViewClassDeclarationAST::getter_nodeKey (C_Compiler */* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result_result ; // Returned variable
  const GALGAS_autoLayoutViewClassDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mClassName () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@autoLayoutViewClassDeclarationAST firstAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_autoLayoutViewClassDeclarationAST::method_firstAnalysisPhase (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_autoLayoutViewClassDeclarationAST temp_1 = this ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_autoLayoutViewClassDeclarationAST temp_2 = this ;
      const GALGAS_autoLayoutViewClassDeclarationAST temp_3 = this ;
      const GALGAS_autoLayoutViewClassDeclarationAST temp_4 = this ;
      const GALGAS_autoLayoutViewClassDeclarationAST temp_5 = this ;
      const GALGAS_autoLayoutViewClassDeclarationAST temp_6 = this ;
      const GALGAS_autoLayoutViewClassDeclarationAST temp_7 = this ;
      const GALGAS_autoLayoutViewClassDeclarationAST temp_8 = this ;
      const GALGAS_autoLayoutViewClassDeclarationAST temp_9 = this ;
      const GALGAS_autoLayoutViewClassDeclarationAST temp_10 = this ;
      ioArgument_ioSemanticContext.mProperty_mAutolayoutViewClassMap.setter_insertKey (temp_2.readProperty_mClassName (), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-view-class.ggs", 238)), temp_3.readProperty_mHasRunAction (), temp_4.readProperty_mHandlesTableValueBinding (), temp_5.readProperty_mHasEnabled (), temp_6.readProperty_mHasHidden (), temp_7.readProperty_mHandlesGraphicControllerBinding (), temp_8.readProperty_mUserDefined (), temp_9.readProperty_mParameterList (), temp_10.readProperty_mAutoLayoutViewFunctionMap (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 236)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_bool var_hasRunAction_8818 ;
    GALGAS_bool var_handlesTableValueBinding_8854 ;
    GALGAS_bool var_hasEnabled_8876 ;
    GALGAS_bool var_hasHidden_8897 ;
    GALGAS_bool var_handlesGraphicControllerBinding_8940 ;
    const GALGAS_autoLayoutViewClassDeclarationAST temp_11 = this ;
    GALGAS_lstring joker_8793 ; // Joker input parameter
    GALGAS_bool joker_8948_3 ; // Joker input parameter
    GALGAS_autoLayoutClassParameterList joker_8948_2 ; // Joker input parameter
    GALGAS_astAutoLayoutViewFunctionMap joker_8948_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mAutolayoutViewClassMap ().method_searchKey (temp_11.readProperty_mSuperClassName (), joker_8793, var_hasRunAction_8818, var_handlesTableValueBinding_8854, var_hasEnabled_8876, var_hasHidden_8897, var_handlesGraphicControllerBinding_8940, joker_8948_3, joker_8948_2, joker_8948_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 249)) ;
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      const GALGAS_autoLayoutViewClassDeclarationAST temp_13 = this ;
      test_12 = temp_13.readProperty_mHasRunAction ().operator_and (var_hasRunAction_8818 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 259)).boolEnum () ;
      if (kBoolTrue == test_12) {
        const GALGAS_autoLayoutViewClassDeclarationAST temp_14 = this ;
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mClassName ().readProperty_location (), GALGAS_string ("$run binding already defined in superclass"), fixItArray15  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 260)) ;
      }
    }
    enumGalgasBool test_16 = kBoolTrue ;
    if (kBoolTrue == test_16) {
      const GALGAS_autoLayoutViewClassDeclarationAST temp_17 = this ;
      test_16 = temp_17.readProperty_mHandlesTableValueBinding ().operator_and (var_handlesTableValueBinding_8854 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 262)).boolEnum () ;
      if (kBoolTrue == test_16) {
        const GALGAS_autoLayoutViewClassDeclarationAST temp_18 = this ;
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (temp_18.readProperty_mClassName ().readProperty_location (), GALGAS_string ("$tableview binding already defined in superclass"), fixItArray19  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 263)) ;
      }
    }
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      const GALGAS_autoLayoutViewClassDeclarationAST temp_21 = this ;
      test_20 = temp_21.readProperty_mHasEnabled ().operator_and (var_hasEnabled_8876 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 265)).boolEnum () ;
      if (kBoolTrue == test_20) {
        const GALGAS_autoLayoutViewClassDeclarationAST temp_22 = this ;
        TC_Array <C_FixItDescription> fixItArray23 ;
        inCompiler->emitSemanticError (temp_22.readProperty_mClassName ().readProperty_location (), GALGAS_string ("$enabled binding already defined in superclass"), fixItArray23  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 266)) ;
      }
    }
    enumGalgasBool test_24 = kBoolTrue ;
    if (kBoolTrue == test_24) {
      const GALGAS_autoLayoutViewClassDeclarationAST temp_25 = this ;
      test_24 = temp_25.readProperty_mHasHidden ().operator_and (var_hasHidden_8897 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 268)).boolEnum () ;
      if (kBoolTrue == test_24) {
        const GALGAS_autoLayoutViewClassDeclarationAST temp_26 = this ;
        TC_Array <C_FixItDescription> fixItArray27 ;
        inCompiler->emitSemanticError (temp_26.readProperty_mClassName ().readProperty_location (), GALGAS_string ("$hidden binding already defined in superclass"), fixItArray27  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 269)) ;
      }
    }
    enumGalgasBool test_28 = kBoolTrue ;
    if (kBoolTrue == test_28) {
      const GALGAS_autoLayoutViewClassDeclarationAST temp_29 = this ;
      test_28 = temp_29.readProperty_mHandlesGraphicControllerBinding ().operator_and (var_handlesGraphicControllerBinding_8940 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 271)).boolEnum () ;
      if (kBoolTrue == test_28) {
        const GALGAS_autoLayoutViewClassDeclarationAST temp_30 = this ;
        TC_Array <C_FixItDescription> fixItArray31 ;
        inCompiler->emitSemanticError (temp_30.readProperty_mClassName ().readProperty_location (), GALGAS_string ("$graphicController binding already defined in superclass"), fixItArray31  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 272)) ;
      }
    }
    {
    const GALGAS_autoLayoutViewClassDeclarationAST temp_32 = this ;
    const GALGAS_autoLayoutViewClassDeclarationAST temp_33 = this ;
    const GALGAS_autoLayoutViewClassDeclarationAST temp_34 = this ;
    const GALGAS_autoLayoutViewClassDeclarationAST temp_35 = this ;
    const GALGAS_autoLayoutViewClassDeclarationAST temp_36 = this ;
    const GALGAS_autoLayoutViewClassDeclarationAST temp_37 = this ;
    const GALGAS_autoLayoutViewClassDeclarationAST temp_38 = this ;
    const GALGAS_autoLayoutViewClassDeclarationAST temp_39 = this ;
    const GALGAS_autoLayoutViewClassDeclarationAST temp_40 = this ;
    const GALGAS_autoLayoutViewClassDeclarationAST temp_41 = this ;
    ioArgument_ioSemanticContext.mProperty_mAutolayoutViewClassMap.setter_insertKey (temp_32.readProperty_mClassName (), temp_33.readProperty_mSuperClassName (), temp_34.readProperty_mHasRunAction ().operator_or (var_hasRunAction_8818 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 278)), temp_35.readProperty_mHandlesTableValueBinding ().operator_or (var_handlesTableValueBinding_8854 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 279)), temp_36.readProperty_mHasEnabled ().operator_or (var_hasEnabled_8876 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 280)), temp_37.readProperty_mHasHidden ().operator_or (var_hasHidden_8897 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 281)), temp_38.readProperty_mHandlesGraphicControllerBinding ().operator_or (var_handlesGraphicControllerBinding_8940 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 282)), temp_39.readProperty_mUserDefined (), temp_40.readProperty_mParameterList (), temp_41.readProperty_mAutoLayoutViewFunctionMap (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 275)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildAutoLayoutBindingSpecificationMap'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildAutoLayoutBindingSpecificationMap (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                     const GALGAS_autoLayoutViewClassBindingSpecificationList constinArgument_inBindingSpecificationListMap,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_autoLayoutViewClassBindingSpecificationList enumerator_3837 (constinArgument_inBindingSpecificationListMap, kENUMERATION_UP) ;
  while (enumerator_3837.hasCurrentObject ()) {
    GALGAS_outletBindingSpecificationModelList var_outletBindingSpecificationModelList_3955 = GALGAS_outletBindingSpecificationModelList::constructor_emptyList (SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 97)) ;
    cEnumerator_outletClassBindingSpecificationModelList enumerator_4015 (enumerator_3837.current_mOutletClassBindingSpecificationModelList (HERE), kENUMERATION_UP) ;
    while (enumerator_4015.hasCurrentObject ()) {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (kIsEqual, enumerator_4015.current_mModelTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string ("enum"))).boolEnum () ;
        if (kBoolTrue == test_0) {
          var_outletBindingSpecificationModelList_3955.addAssign_operation (GALGAS_typeKind::constructor_enumType (GALGAS_string::makeEmptyString (), GALGAS_enumConstantMap::constructor_emptyMap (SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 101)), GALGAS_enumFuncMap::constructor_emptyMap (SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 101))  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 101)), enumerator_4015.current_mModelShouldBeWritableProperty (HERE)  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 100)) ;
        }
      }
      if (kBoolFalse == test_0) {
        GALGAS_classKind var_classKind_4386 ;
        GALGAS_propertyMap joker_4388_3 ; // Joker input parameter
        GALGAS_actionMap joker_4388_2 ; // Joker input parameter
        GALGAS_propertyGenerationList joker_4388_1 ; // Joker input parameter
        ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (enumerator_4015.current_mModelTypeName (HERE), var_classKind_4386, joker_4388_3, joker_4388_2, joker_4388_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 104)) ;
        GALGAS_typeKind var_typeKind_4422 ;
        switch (var_classKind_4386.enumValue ()) {
        case GALGAS_classKind::kNotBuilt:
          break ;
        case GALGAS_classKind::kEnum_prefs:
          {
            TC_Array <C_FixItDescription> fixItArray1 ;
            inCompiler->emitSemanticError (enumerator_4015.current_mModelTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray1  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 108)) ;
            var_typeKind_4422.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_classKind::kEnum_atomic:
          {
            const cEnumAssociatedValues_classKind_atomic * extractPtr_4612 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_4386.unsafePointer ()) ;
            const GALGAS_typeKind extractedValue_4583_kind = extractPtr_4612->mAssociatedValue0 ;
            var_typeKind_4422 = extractedValue_4583_kind ;
          }
          break ;
        case GALGAS_classKind::kEnum_document:
          {
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (enumerator_4015.current_mModelTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray2  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 112)) ;
            var_typeKind_4422.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_classKind::kEnum_entity:
          {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (enumerator_4015.current_mModelTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray3  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 114)) ;
            var_typeKind_4422.drop () ; // Release error dropped variable
          }
          break ;
        }
        var_outletBindingSpecificationModelList_3955.addAssign_operation (var_typeKind_4422, enumerator_4015.current_mModelShouldBeWritableProperty (HERE)  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 116)) ;
      }
      enumerator_4015.gotoNextObject () ;
    }
    GALGAS_controllerBindingOptionDecoratedList var_controllerBindingOptionDecoratedList_5027 = GALGAS_controllerBindingOptionDecoratedList::constructor_emptyList (SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 119)) ;
    cEnumerator_controllerBindingOptionList enumerator_5069 (enumerator_3837.current_mBindingOptionList (HERE), kENUMERATION_UP) ;
    while (enumerator_5069.hasCurrentObject ()) {
      GALGAS_classKind var_classKind_5183 ;
      GALGAS_propertyMap joker_5185_3 ; // Joker input parameter
      GALGAS_actionMap joker_5185_2 ; // Joker input parameter
      GALGAS_propertyGenerationList joker_5185_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (enumerator_5069.current_mOptionTypeName (HERE), var_classKind_5183, joker_5185_3, joker_5185_2, joker_5185_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 121)) ;
      GALGAS_typeKind var_typeKind_5217 ;
      switch (var_classKind_5183.enumValue ()) {
      case GALGAS_classKind::kNotBuilt:
        break ;
      case GALGAS_classKind::kEnum_prefs:
        {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_5069.current_mOptionTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray4  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 125)) ;
          var_typeKind_5217.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_classKind::kEnum_atomic:
        {
          const cEnumAssociatedValues_classKind_atomic * extractPtr_5398 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_5183.unsafePointer ()) ;
          const GALGAS_typeKind extractedValue_5371_kind = extractPtr_5398->mAssociatedValue0 ;
          var_typeKind_5217 = extractedValue_5371_kind ;
        }
        break ;
      case GALGAS_classKind::kEnum_document:
        {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (enumerator_5069.current_mOptionTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray5  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 129)) ;
          var_typeKind_5217.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_classKind::kEnum_entity:
        {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (enumerator_5069.current_mOptionTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 131)) ;
          var_typeKind_5217.drop () ; // Release error dropped variable
        }
        break ;
      }
      var_controllerBindingOptionDecoratedList_5027.addAssign_operation (var_typeKind_5217, enumerator_5069.current_mOptionName (HERE)  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 133)) ;
      enumerator_5069.gotoNextObject () ;
    }
    GALGAS_autoLayoutViewBindingSpecificationMap var_bindingMap_5779 ;
    GALGAS_lstring var_outletSuperClassName_5817 ;
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = ioArgument_ioSemanticContext.readProperty_mAutoLayoutBindingSpecificationMap ().getter_hasKey (enumerator_3837.current_mOutletClassName (HERE).readProperty_string () COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 138)).boolEnum () ;
      if (kBoolTrue == test_7) {
        {
        ioArgument_ioSemanticContext.mProperty_mAutoLayoutBindingSpecificationMap.setter_removeKey (enumerator_3837.current_mOutletClassName (HERE), var_outletSuperClassName_5817, var_bindingMap_5779, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 139)) ;
        }
      }
    }
    if (kBoolFalse == test_7) {
      var_bindingMap_5779 = GALGAS_autoLayoutViewBindingSpecificationMap::constructor_emptyMap (SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 141)) ;
      GALGAS_bool joker_6173_8 ; // Joker input parameter
      GALGAS_bool joker_6173_7 ; // Joker input parameter
      GALGAS_bool joker_6173_6 ; // Joker input parameter
      GALGAS_bool joker_6173_5 ; // Joker input parameter
      GALGAS_bool joker_6173_4 ; // Joker input parameter
      GALGAS_bool joker_6173_3 ; // Joker input parameter
      GALGAS_autoLayoutClassParameterList joker_6173_2 ; // Joker input parameter
      GALGAS_astAutoLayoutViewFunctionMap joker_6173_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mAutolayoutViewClassMap ().method_searchKey (enumerator_3837.current_mOutletClassName (HERE), var_outletSuperClassName_5817, joker_6173_8, joker_6173_7, joker_6173_6, joker_6173_5, joker_6173_4, joker_6173_3, joker_6173_2, joker_6173_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 142)) ;
    }
    {
    var_bindingMap_5779.setter_insertKey (enumerator_3837.current_mBindingName (HERE), var_outletBindingSpecificationModelList_3955, var_controllerBindingOptionDecoratedList_5027, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 144)) ;
    }
    {
    ioArgument_ioSemanticContext.mProperty_mAutoLayoutBindingSpecificationMap.setter_insertKey (enumerator_3837.current_mOutletClassName (HERE), var_outletSuperClassName_5817, var_bindingMap_5779, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 149)) ;
    }
    enumerator_3837.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@astHorizontalStackViewDeclaration checkView'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_astHorizontalStackViewDeclaration::method_checkView (const GALGAS_string /* constinArgument_inViewName */,
                                                               const GALGAS_autoLayoutViewDeclarationMap constinArgument_inViewDeclarationMap,
                                                               const GALGAS_bool constinArgument_inPreferences,
                                                               const GALGAS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                               const GALGAS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                               const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                               const GALGAS_propertyMap constinArgument_inObservablePropertyMap,
                                                               const GALGAS_actionMap constinArgument_inActionMap,
                                                               const GALGAS_string constinArgument_inReceiverSwiftTypeName,
                                                               const GALGAS_classMap constinArgument_inClassMap,
                                                               GALGAS_implicitViewFunctionGenerationList & ioArgument_ioImplicitViewFunctionGenerationList,
                                                               GALGAS_autoLayoutConfiguratorMap & ioArgument_ioConfiguratorMap,
                                                               GALGAS_autoLayoutOutletMap & ioArgument_ioOutletMap,
                                                               GALGAS_abstractViewGeneration & outArgument_outGeneration,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_30177 ;
  const GALGAS_astHorizontalStackViewDeclaration temp_0 = this ;
  extensionMethod_checkViewFunctionCallList (temp_0.readProperty_mFunctionCallList (), constinArgument_inSemanticContext.readProperty_mAutoLayoutHStackFunctionMap (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_30177, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 704)) ;
  outArgument_outGeneration = GALGAS_newHorizontalStackViewGeneration::constructor_new (var_funcCallList_30177  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 720)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@astVerticalStackViewDeclaration checkView'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_astVerticalStackViewDeclaration::method_checkView (const GALGAS_string /* constinArgument_inViewName */,
                                                             const GALGAS_autoLayoutViewDeclarationMap constinArgument_inViewDeclarationMap,
                                                             const GALGAS_bool constinArgument_inPreferences,
                                                             const GALGAS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                             const GALGAS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                             const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                             const GALGAS_propertyMap constinArgument_inObservablePropertyMap,
                                                             const GALGAS_actionMap constinArgument_inActionMap,
                                                             const GALGAS_string constinArgument_inReceiverSwiftTypeName,
                                                             const GALGAS_classMap constinArgument_inClassMap,
                                                             GALGAS_implicitViewFunctionGenerationList & ioArgument_ioImplicitViewFunctionGenerationList,
                                                             GALGAS_autoLayoutConfiguratorMap & ioArgument_ioConfiguratorMap,
                                                             GALGAS_autoLayoutOutletMap & ioArgument_ioOutletMap,
                                                             GALGAS_abstractViewGeneration & outArgument_outGeneration,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_31988 ;
  const GALGAS_astVerticalStackViewDeclaration temp_0 = this ;
  extensionMethod_checkViewFunctionCallList (temp_0.readProperty_mFunctionCallList (), constinArgument_inSemanticContext.readProperty_mAutoLayoutVStackFunctionMap (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_31988, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 740)) ;
  outArgument_outGeneration = GALGAS_newVerticalStackViewGeneration::constructor_new (var_funcCallList_31988  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 756)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@astComputedHorizontalViewDeclaration checkView'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_astComputedHorizontalViewDeclaration::method_checkView (const GALGAS_string /* constinArgument_inViewName */,
                                                                  const GALGAS_autoLayoutViewDeclarationMap constinArgument_inViewDeclarationMap,
                                                                  const GALGAS_bool constinArgument_inPreferences,
                                                                  const GALGAS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                  const GALGAS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                                  const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                  const GALGAS_propertyMap constinArgument_inObservablePropertyMap,
                                                                  const GALGAS_actionMap constinArgument_inActionMap,
                                                                  const GALGAS_string constinArgument_inReceiverSwiftTypeName,
                                                                  const GALGAS_classMap constinArgument_inClassMap,
                                                                  GALGAS_implicitViewFunctionGenerationList & ioArgument_ioImplicitViewFunctionGenerationList,
                                                                  GALGAS_autoLayoutConfiguratorMap & ioArgument_ioConfiguratorMap,
                                                                  GALGAS_autoLayoutOutletMap & ioArgument_ioOutletMap,
                                                                  GALGAS_abstractViewGeneration & outArgument_outGeneration,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_33802 ;
  const GALGAS_astComputedHorizontalViewDeclaration temp_0 = this ;
  extensionMethod_checkViewFunctionCallList (temp_0.readProperty_mFunctionCallList (), constinArgument_inSemanticContext.readProperty_mAutoLayoutHStackFunctionMap (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_33802, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 776)) ;
  GALGAS_autoLayoutViewInstructionGenerationList var_instructionList_33869 = GALGAS_autoLayoutViewInstructionGenerationList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 792)) ;
  const GALGAS_astComputedHorizontalViewDeclaration temp_1 = this ;
  cEnumerator_astViewInstructionList enumerator_33893 (temp_1.readProperty_mInstructionList (), kENUMERATION_UP) ;
  while (enumerator_33893.hasCurrentObject ()) {
    GALGAS_abstractViewInstructionGeneration var_generatedInstruction_34326 ;
    callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) enumerator_33893.current_mInstruction (HERE).ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_generatedInstruction_34326, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 794)) ;
    var_instructionList_33869.addAssign_operation (var_generatedInstruction_34326  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 809)) ;
    enumerator_33893.gotoNextObject () ;
  }
  outArgument_outGeneration = GALGAS_computedHorizontalViewGeneration::constructor_new (var_funcCallList_33802, var_instructionList_33869  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 811)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@astComputedVerticalViewDeclaration checkView'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_astComputedVerticalViewDeclaration::method_checkView (const GALGAS_string /* constinArgument_inViewName */,
                                                                const GALGAS_autoLayoutViewDeclarationMap constinArgument_inViewDeclarationMap,
                                                                const GALGAS_bool constinArgument_inPreferences,
                                                                const GALGAS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                const GALGAS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                                const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                const GALGAS_propertyMap constinArgument_inObservablePropertyMap,
                                                                const GALGAS_actionMap constinArgument_inActionMap,
                                                                const GALGAS_string constinArgument_inReceiverSwiftTypeName,
                                                                const GALGAS_classMap constinArgument_inClassMap,
                                                                GALGAS_implicitViewFunctionGenerationList & ioArgument_ioImplicitViewFunctionGenerationList,
                                                                GALGAS_autoLayoutConfiguratorMap & ioArgument_ioConfiguratorMap,
                                                                GALGAS_autoLayoutOutletMap & ioArgument_ioOutletMap,
                                                                GALGAS_abstractViewGeneration & outArgument_outGeneration,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutViewInstructionGenerationList var_instructionList_35777 = GALGAS_autoLayoutViewInstructionGenerationList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 831)) ;
  GALGAS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_36278 ;
  const GALGAS_astComputedVerticalViewDeclaration temp_0 = this ;
  extensionMethod_checkViewFunctionCallList (temp_0.readProperty_mFunctionCallList (), constinArgument_inSemanticContext.readProperty_mAutoLayoutVStackFunctionMap (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_36278, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 832)) ;
  const GALGAS_astComputedVerticalViewDeclaration temp_1 = this ;
  cEnumerator_astViewInstructionList enumerator_36301 (temp_1.readProperty_mInstructionList (), kENUMERATION_UP) ;
  while (enumerator_36301.hasCurrentObject ()) {
    GALGAS_abstractViewInstructionGeneration var_generatedInstruction_36733 ;
    callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) enumerator_36301.current_mInstruction (HERE).ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_generatedInstruction_36733, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 849)) ;
    var_instructionList_35777.addAssign_operation (var_generatedInstruction_36733  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 864)) ;
    enumerator_36301.gotoNextObject () ;
  }
  outArgument_outGeneration = GALGAS_computedVerticalViewGeneration::constructor_new (var_funcCallList_36278, var_instructionList_35777  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 866)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@astSpaceViewInstruction generateViewCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_astSpaceViewInstruction::method_generateViewCode (const GALGAS_autoLayoutViewDeclarationMap /* constinArgument_inViewDeclarationMap */,
                                                            const GALGAS_bool /* constinArgument_inPreferences */,
                                                            const GALGAS_propertyMap /* constinArgument_inRootObservablePropertyMap */,
                                                            const GALGAS_propertyMap /* constinArgument_inPreferencesPropertyMap */,
                                                            const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                            const GALGAS_propertyMap /* constinArgument_inObservablePropertyMap */,
                                                            const GALGAS_actionMap /* constinArgument_inActionMap */,
                                                            const GALGAS_string /* constinArgument_inReceiverSwiftTypeName */,
                                                            const GALGAS_classMap /* constinArgument_inClassMap */,
                                                            GALGAS_implicitViewFunctionGenerationList & /* ioArgument_ioImplicitViewFunctionGenerationList */,
                                                            GALGAS_autoLayoutConfiguratorMap & /* ioArgument_ioConfiguratorMap */,
                                                            GALGAS_autoLayoutOutletMap & /* ioArgument_ioOutletMap */,
                                                            GALGAS_abstractViewInstructionGeneration & outArgument_outInstruction,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstruction = GALGAS_autoLayoutSpaceViewInstructionGeneration::constructor_new (SOURCE_FILE ("auto-layout-view.ggs", 902)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@astSeparatorInstructionDeclaration generateViewCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_astSeparatorInstructionDeclaration::method_generateViewCode (const GALGAS_autoLayoutViewDeclarationMap /* constinArgument_inViewDeclarationMap */,
                                                                       const GALGAS_bool /* constinArgument_inPreferences */,
                                                                       const GALGAS_propertyMap /* constinArgument_inRootObservablePropertyMap */,
                                                                       const GALGAS_propertyMap /* constinArgument_inPreferencesPropertyMap */,
                                                                       const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                                       const GALGAS_propertyMap /* constinArgument_inObservablePropertyMap */,
                                                                       const GALGAS_actionMap /* constinArgument_inActionMap */,
                                                                       const GALGAS_string /* constinArgument_inReceiverSwiftTypeName */,
                                                                       const GALGAS_classMap /* constinArgument_inClassMap */,
                                                                       GALGAS_implicitViewFunctionGenerationList & /* ioArgument_ioImplicitViewFunctionGenerationList */,
                                                                       GALGAS_autoLayoutConfiguratorMap & /* ioArgument_ioConfiguratorMap */,
                                                                       GALGAS_autoLayoutOutletMap & /* ioArgument_ioOutletMap */,
                                                                       GALGAS_abstractViewInstructionGeneration & outArgument_outInstruction,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_astSeparatorInstructionDeclaration temp_0 = this ;
  outArgument_outInstruction = GALGAS_autoLayoutSeparatorInstructionGeneration::constructor_new (temp_0.readProperty_horizontal ()  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 921)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@astLocalViewInstruction generateViewCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_astLocalViewInstruction::method_generateViewCode (const GALGAS_autoLayoutViewDeclarationMap constinArgument_inViewDeclarationMap,
                                                            const GALGAS_bool /* constinArgument_inPreferences */,
                                                            const GALGAS_propertyMap /* constinArgument_inRootObservablePropertyMap */,
                                                            const GALGAS_propertyMap /* constinArgument_inPreferencesPropertyMap */,
                                                            const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                            const GALGAS_propertyMap /* constinArgument_inObservablePropertyMap */,
                                                            const GALGAS_actionMap /* constinArgument_inActionMap */,
                                                            const GALGAS_string /* constinArgument_inReceiverSwiftTypeName */,
                                                            const GALGAS_classMap /* constinArgument_inClassMap */,
                                                            GALGAS_implicitViewFunctionGenerationList & /* ioArgument_ioImplicitViewFunctionGenerationList */,
                                                            GALGAS_autoLayoutConfiguratorMap & /* ioArgument_ioConfiguratorMap */,
                                                            GALGAS_autoLayoutOutletMap & /* ioArgument_ioOutletMap */,
                                                            GALGAS_abstractViewInstructionGeneration & outArgument_outInstruction,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_astLocalViewInstruction temp_0 = this ;
  constinArgument_inViewDeclarationMap.method_searchKey (temp_0.readProperty_mLocalView (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 941)) ;
  const GALGAS_astLocalViewInstruction temp_1 = this ;
  outArgument_outInstruction = GALGAS_autoLayoutLocalViewInstructionGeneration::constructor_new (temp_1.readProperty_mLocalView ().readProperty_string ()  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 942)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@astComputedViewInstruction generateViewCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_astComputedViewInstruction::method_generateViewCode (const GALGAS_autoLayoutViewDeclarationMap constinArgument_inViewDeclarationMap,
                                                               const GALGAS_bool constinArgument_inPreferences,
                                                               const GALGAS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                               const GALGAS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                               const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                               const GALGAS_propertyMap constinArgument_inObservablePropertyMap,
                                                               const GALGAS_actionMap constinArgument_inActionMap,
                                                               const GALGAS_string constinArgument_inReceiverSwiftTypeName,
                                                               const GALGAS_classMap constinArgument_inClassMap,
                                                               GALGAS_implicitViewFunctionGenerationList & ioArgument_ioImplicitViewFunctionGenerationList,
                                                               GALGAS_autoLayoutConfiguratorMap & ioArgument_ioConfiguratorMap,
                                                               GALGAS_autoLayoutOutletMap & ioArgument_ioOutletMap,
                                                               GALGAS_abstractViewInstructionGeneration & outArgument_outInstruction,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutClassParameterList var_formalParameterList_43370 ;
  GALGAS_astAutoLayoutViewFunctionMap var_functionMap_43392 ;
  const GALGAS_astComputedViewInstruction temp_0 = this ;
  GALGAS_lstring joker_43338_7 ; // Joker input parameter
  GALGAS_bool joker_43338_6 ; // Joker input parameter
  GALGAS_bool joker_43338_5 ; // Joker input parameter
  GALGAS_bool joker_43338_4 ; // Joker input parameter
  GALGAS_bool joker_43338_3 ; // Joker input parameter
  GALGAS_bool joker_43338_2 ; // Joker input parameter
  GALGAS_bool joker_43338_1 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mAutolayoutViewClassMap ().method_searchKey (temp_0.readProperty_mAutoLayoutViewClassName (), joker_43338_7, joker_43338_6, joker_43338_5, joker_43338_4, joker_43338_3, joker_43338_2, joker_43338_1, var_formalParameterList_43370, var_functionMap_43392, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 961)) ;
  GALGAS_autoLayoutViewInstructionGenerationParameterList var_parameterList_43466 = GALGAS_autoLayoutViewInstructionGenerationParameterList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 966)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_astComputedViewInstruction temp_2 = this ;
    test_1 = GALGAS_bool (kIsNotEqual, var_formalParameterList_43370.getter_length (SOURCE_FILE ("auto-layout-view.ggs", 967)).objectCompare (temp_2.readProperty_mParameterList ().getter_length (SOURCE_FILE ("auto-layout-view.ggs", 967)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_astComputedViewInstruction temp_3 = this ;
      const GALGAS_astComputedViewInstruction temp_4 = this ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mAutoLayoutViewClassName ().readProperty_location (), var_formalParameterList_43370.getter_length (SOURCE_FILE ("auto-layout-view.ggs", 969)).getter_string (SOURCE_FILE ("auto-layout-view.ggs", 969)).add_operation (GALGAS_string (" parameter(s) required, "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 969)).add_operation (temp_4.readProperty_mParameterList ().getter_length (SOURCE_FILE ("auto-layout-view.ggs", 969)).getter_string (SOURCE_FILE ("auto-layout-view.ggs", 969)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 969)).add_operation (GALGAS_string (" provided"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 969)), fixItArray5  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 968)) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_astComputedViewInstruction temp_6 = this ;
    cEnumerator_astAutoLayoutViewInstructionParameterList enumerator_43733 (temp_6.readProperty_mParameterList (), kENUMERATION_UP) ;
    cEnumerator_autoLayoutClassParameterList enumerator_43781 (var_formalParameterList_43370, kENUMERATION_UP) ;
    while (enumerator_43733.hasCurrentObject () && enumerator_43781.hasCurrentObject ()) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        GALGAS_lstring var_enumTypeName_43866 ;
        const bool optionalResult43842 = enumerator_43781.current_mParameterType (HERE).optional_typeEnum (var_enumTypeName_43866) ;
        if (!optionalResult43842) {
          test_7 = kBoolFalse ;
        }
        if (kBoolTrue == test_7) {
          GALGAS_lstring var_constantName_43911 ;
          const bool optionalResult43887 = enumerator_43733.current_mParameterType (HERE).optional_typeEnum (var_constantName_43911) ;
          if (!optionalResult43887) {
            test_7 = kBoolFalse ;
          }
          if (kBoolTrue == test_7) {
            GALGAS_classKind var_typeKind_43975 ;
            GALGAS_propertyMap joker_43977_3 ; // Joker input parameter
            GALGAS_actionMap joker_43977_2 ; // Joker input parameter
            GALGAS_propertyGenerationList joker_43977_1 ; // Joker input parameter
            constinArgument_inClassMap.method_searchKey (var_enumTypeName_43866, var_typeKind_43975, joker_43977_3, joker_43977_2, joker_43977_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 973)) ;
            enumGalgasBool test_8 = kBoolTrue ;
            if (kBoolTrue == test_8) {
              GALGAS_typeKind var_classKind_44033 ;
              const bool optionalResult44012 = var_typeKind_43975.optional_atomic (var_classKind_44033) ;
              if (!optionalResult44012) {
                test_8 = kBoolFalse ;
              }
              if (kBoolTrue == test_8) {
                GALGAS_string var_unused_0_44063 ;
                GALGAS_enumConstantMap var_constantMap_44093 ;
                GALGAS_enumFuncMap var_unused_0_44097 ;
                const bool optionalResult44059 = var_classKind_44033.optional_enumType (var_unused_0_44063, var_constantMap_44093, var_unused_0_44097) ;
                if (!optionalResult44059) {
                  test_8 = kBoolFalse ;
                }
                if (kBoolTrue == test_8) {
                  GALGAS_uint joker_44152 ; // Joker input parameter
                  var_constantMap_44093.method_searchKey (var_constantName_43911, joker_44152, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 975)) ;
                }
              }
            }
            if (kBoolFalse == test_8) {
              TC_Array <C_FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (var_enumTypeName_43866.readProperty_location (), GALGAS_string ("this type name is not an enum"), fixItArray9  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 977)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_7) {
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          test_10 = GALGAS_bool (kIsNotEqual, enumerator_43733.current_mParameterType (HERE).objectCompare (enumerator_43781.current_mParameterType (HERE))).boolEnum () ;
          if (kBoolTrue == test_10) {
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (enumerator_43733.current_mParameterName (HERE).readProperty_location (), GALGAS_string ("the formal parameter requires ").add_operation (extensionGetter_string (enumerator_43781.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 980)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 980)).add_operation (GALGAS_string (", actual parameter is "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 980)).add_operation (extensionGetter_string (enumerator_43733.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 980)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 980)), fixItArray11  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 980)) ;
          }
        }
      }
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = GALGAS_bool (kIsNotEqual, enumerator_43733.current_mParameterName (HERE).readProperty_string ().objectCompare (enumerator_43781.current_mParameterName (HERE).readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_12) {
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (enumerator_43733.current_mParameterName (HERE).readProperty_location (), GALGAS_string ("the parameter name should be '").add_operation (enumerator_43781.current_mParameterName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 983)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 983)), fixItArray13  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 983)) ;
        }
      }
      switch (enumerator_43733.current_mParameter (HERE).enumValue ()) {
      case GALGAS_astAutoLayoutViewInstructionParameterValue::kNotBuilt:
        break ;
      case GALGAS_astAutoLayoutViewInstructionParameterValue::kEnum_viewFunc:
        {
          const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_viewFunc * extractPtr_45292 = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_viewFunc *) (enumerator_43733.current_mParameter (HERE).unsafePointer ()) ;
          const GALGAS_astAbstractViewInstructionDeclaration extractedValue_44573_instruction = extractPtr_45292->mAssociatedValue0 ;
          GALGAS_abstractViewInstructionGeneration var_viewInstruction_45095 ;
          callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) extractedValue_44573_instruction.ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_viewInstruction_45095, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 987)) ;
          var_parameterList_43466.addAssign_operation (enumerator_43733.current_mParameterName (HERE).readProperty_string (), GALGAS_string ("self.computeImplicitView_").add_operation (ioArgument_ioImplicitViewFunctionGenerationList.getter_length (SOURCE_FILE ("auto-layout-view.ggs", 1002)).getter_string (SOURCE_FILE ("auto-layout-view.ggs", 1002)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1002)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1002))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1002)) ;
          ioArgument_ioImplicitViewFunctionGenerationList.addAssign_operation (var_viewInstruction_45095  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1003)) ;
        }
        break ;
      case GALGAS_astAutoLayoutViewInstructionParameterValue::kEnum_entity:
        {
          const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_entity * extractPtr_45557 = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_entity *) (enumerator_43733.current_mParameter (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_45322_entityName = extractPtr_45557->mAssociatedValue0 ;
          GALGAS_classKind var_classKind_45382 ;
          GALGAS_propertyMap joker_45384_3 ; // Joker input parameter
          GALGAS_actionMap joker_45384_2 ; // Joker input parameter
          GALGAS_propertyGenerationList joker_45384_1 ; // Joker input parameter
          constinArgument_inClassMap.method_searchKey (extractedValue_45322_entityName, var_classKind_45382, joker_45384_3, joker_45384_2, joker_45384_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1005)) ;
          enumGalgasBool test_14 = kBoolTrue ;
          if (kBoolTrue == test_14) {
            test_14 = var_classKind_45382.getter_isEntity (SOURCE_FILE ("auto-layout-view.ggs", 1006)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1006)).boolEnum () ;
            if (kBoolTrue == test_14) {
              TC_Array <C_FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (extractedValue_45322_entityName.readProperty_location (), GALGAS_string ("an entity is required here"), fixItArray15  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1007)) ;
            }
          }
          var_parameterList_43466.addAssign_operation (enumerator_43733.current_mParameterName (HERE).readProperty_string (), extractedValue_45322_entityName.readProperty_string ().add_operation (GALGAS_string (".self"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1009))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1009)) ;
        }
        break ;
      case GALGAS_astAutoLayoutViewInstructionParameterValue::kEnum_string:
        {
          const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_string * extractPtr_45635 = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_string *) (enumerator_43733.current_mParameter (HERE).unsafePointer ()) ;
          const GALGAS_string extractedValue_45588_stringValue = extractPtr_45635->mAssociatedValue0 ;
          var_parameterList_43466.addAssign_operation (enumerator_43733.current_mParameterName (HERE).readProperty_string (), extractedValue_45588_stringValue  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1011)) ;
        }
        break ;
      case GALGAS_astAutoLayoutViewInstructionParameterValue::kEnum_menuItem:
        {
          const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_menuItem * extractPtr_46975 = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_menuItem *) (enumerator_43733.current_mParameter (HERE).unsafePointer ()) ;
          const GALGAS_string extractedValue_45662_title = extractPtr_46975->mAssociatedValue0 ;
          const GALGAS_runActionDescriptor extractedValue_45666_run = extractPtr_46975->mAssociatedValue1 ;
          const GALGAS_multipleBindingDescriptor extractedValue_45681_enabledBinding = extractPtr_46975->mAssociatedValue2 ;
          GALGAS_autolayoutRunBindingForGeneration var_runBindingGeneration_45989 ;
          {
          routine_analyzeAutoLayoutRunBinding (extractedValue_45666_run, GALGAS_bool (true), constinArgument_inPreferences, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-view.ggs", 1017)), constinArgument_inActionMap, constinArgument_inObservablePropertyMap, constinArgument_inReceiverSwiftTypeName, var_runBindingGeneration_45989, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1013)) ;
          }
          GALGAS_autolayoutEnabledBindingForGeneration var_enabledBindingGeneration_46326 ;
          {
          routine_analyzeAutoLayoutEnableBinding (extractedValue_45681_enabledBinding, GALGAS_bool (true), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_enabledBindingGeneration_46326, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1023)) ;
          }
          GALGAS_string var_s_46350 = GALGAS_string ("AutoLayoutMenuItemDescriptor (title: ").add_operation (extractedValue_45662_title.getter_utf_38_Representation (SOURCE_FILE ("auto-layout-view.ggs", 1033)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1033)) ;
          switch (var_runBindingGeneration_45989.enumValue ()) {
          case GALGAS_autolayoutRunBindingForGeneration::kNotBuilt:
            break ;
          case GALGAS_autolayoutRunBindingForGeneration::kEnum_none:
            {
              var_s_46350.plusAssign_operation(GALGAS_string (", target: nil, selector: nil"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1036)) ;
            }
            break ;
          case GALGAS_autolayoutRunBindingForGeneration::kEnum_run:
            {
              const cEnumAssociatedValues_autolayoutRunBindingForGeneration_run * extractPtr_46696 = (const cEnumAssociatedValues_autolayoutRunBindingForGeneration_run *) (var_runBindingGeneration_45989.unsafePointer ()) ;
              const GALGAS_string extractedValue_46553_targetName = extractPtr_46696->mAssociatedValue0 ;
              const GALGAS_string extractedValue_46564_actionName = extractPtr_46696->mAssociatedValue1 ;
              const GALGAS_string extractedValue_46578_runTargetName = extractPtr_46696->mAssociatedValue2 ;
              var_s_46350.plusAssign_operation(GALGAS_string (", target: ").add_operation (extractedValue_46553_targetName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1038)).add_operation (GALGAS_string (", selector: #selector ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1038)).add_operation (extractedValue_46578_runTargetName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1038)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1038)).add_operation (extractedValue_46564_actionName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1038)).add_operation (GALGAS_string (" (_:))"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1038)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1038)) ;
            }
            break ;
          }
          switch (var_enabledBindingGeneration_46326.enumValue ()) {
          case GALGAS_autolayoutEnabledBindingForGeneration::kNotBuilt:
            break ;
          case GALGAS_autolayoutEnabledBindingForGeneration::kEnum_none:
            {
              var_s_46350.plusAssign_operation(GALGAS_string (", enableBinding: .alwaysTrue"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1042)) ;
            }
            break ;
          case GALGAS_autolayoutEnabledBindingForGeneration::kEnum_enabled:
            {
              const cEnumAssociatedValues_autolayoutEnabledBindingForGeneration_enabled * extractPtr_46912 = (const cEnumAssociatedValues_autolayoutEnabledBindingForGeneration_enabled *) (var_enabledBindingGeneration_46326.unsafePointer ()) ;
              const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration extractedValue_46845_binding = extractPtr_46912->mAssociatedValue0 ;
              var_s_46350.plusAssign_operation(GALGAS_string (", enableBinding: ").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) extractedValue_46845_binding.ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1044)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1044)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1044)) ;
            }
            break ;
          }
          var_s_46350.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1046)) ;
          var_parameterList_43466.addAssign_operation (enumerator_43733.current_mParameterName (HERE).readProperty_string (), var_s_46350  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1047)) ;
        }
        break ;
      case GALGAS_astAutoLayoutViewInstructionParameterValue::kEnum_enumFunc:
        {
          const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_enumFunc * extractPtr_47583 = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_enumFunc *) (enumerator_43733.current_mParameter (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_47009_enumTypeName = extractPtr_47583->mAssociatedValue0 ;
          const GALGAS_lstring extractedValue_47018_funcName = extractPtr_47583->mAssociatedValue1 ;
          GALGAS_classKind var_type_47092 ;
          GALGAS_propertyMap joker_47094_3 ; // Joker input parameter
          GALGAS_actionMap joker_47094_2 ; // Joker input parameter
          GALGAS_propertyGenerationList joker_47094_1 ; // Joker input parameter
          constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_47009_enumTypeName, var_type_47092, joker_47094_3, joker_47094_2, joker_47094_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1049)) ;
          enumGalgasBool test_16 = kBoolTrue ;
          if (kBoolTrue == test_16) {
            test_16 = var_type_47092.getter_isAtomic (SOURCE_FILE ("auto-layout-view.ggs", 1050)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1050)).boolEnum () ;
            if (kBoolTrue == test_16) {
              TC_Array <C_FixItDescription> fixItArray17 ;
              inCompiler->emitSemanticError (extractedValue_47009_enumTypeName.readProperty_location (), GALGAS_string ("this type should be an enum type"), fixItArray17  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1051)) ;
            }
          }
          if (kBoolFalse == test_16) {
            GALGAS_typeKind var_typeKind_47254 ;
            var_type_47092.method_atomic (var_typeKind_47254, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1053)) ;
            enumGalgasBool test_18 = kBoolTrue ;
            if (kBoolTrue == test_18) {
              test_18 = var_typeKind_47254.getter_isEnumType (SOURCE_FILE ("auto-layout-view.ggs", 1054)).boolEnum () ;
              if (kBoolTrue == test_18) {
                GALGAS_enumFuncMap var_funcMap_47351 ;
                GALGAS_string joker_47328_2 ; // Joker input parameter
                GALGAS_enumConstantMap joker_47328_1 ; // Joker input parameter
                var_typeKind_47254.method_enumType (joker_47328_2, joker_47328_1, var_funcMap_47351, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1055)) ;
                GALGAS_enumFunAssociationSortedList joker_47395 ; // Joker input parameter
                var_funcMap_47351.method_searchKey (extractedValue_47018_funcName, joker_47395, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1056)) ;
              }
            }
            if (kBoolFalse == test_18) {
              TC_Array <C_FixItDescription> fixItArray19 ;
              inCompiler->emitSemanticError (extractedValue_47009_enumTypeName.readProperty_location (), GALGAS_string ("this type should be an enum type"), fixItArray19  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1058)) ;
            }
          }
          var_parameterList_43466.addAssign_operation (enumerator_43733.current_mParameterName (HERE).readProperty_string (), extractedValue_47009_enumTypeName.readProperty_string ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1061)).add_operation (extractedValue_47018_funcName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1061)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1061))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1061)) ;
        }
        break ;
      }
      enumerator_43733.gotoNextObject () ;
      enumerator_43781.gotoNextObject () ;
    }
  }
  GALGAS_autoLayoutRegularBindingsGenerationList var_regularBindingsGenerationList_48144 ;
  GALGAS_autoLayoutMultipleBindingGenerationList var_multipleBindingGenerationList_48224 ;
  GALGAS_autolayoutRunBindingForGeneration var_runBindingGeneration_48289 ;
  GALGAS_string var_inTableViewBindingGeneration_48335 ;
  GALGAS_autoLayoutViewGraphicControllerBindingGeneration var_ebViewGraphicControllerBindingGeneration_48435 ;
  {
  const GALGAS_astComputedViewInstruction temp_20 = this ;
  const GALGAS_astComputedViewInstruction temp_21 = this ;
  const GALGAS_astComputedViewInstruction temp_22 = this ;
  const GALGAS_astComputedViewInstruction temp_23 = this ;
  const GALGAS_astComputedViewInstruction temp_24 = this ;
  const GALGAS_astComputedViewInstruction temp_25 = this ;
  const GALGAS_astComputedViewInstruction temp_26 = this ;
  routine_analyzeAutoLayoutBinding (constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, temp_20.readProperty_mAutoLayoutViewClassName (), temp_21.readProperty_mTableValueBinding (), temp_22.readProperty_mRunActionDescriptor (), temp_23.readProperty_mEnabledBindingDescriptor (), temp_24.readProperty_mHiddenBindingDescriptor (), temp_25.readProperty_mGraphicController (), temp_26.readProperty_mRegularBindingList (), var_regularBindingsGenerationList_48144, var_multipleBindingGenerationList_48224, var_runBindingGeneration_48289, var_inTableViewBindingGeneration_48335, var_ebViewGraphicControllerBindingGeneration_48435, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1066)) ;
  }
  GALGAS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_48900 ;
  const GALGAS_astComputedViewInstruction temp_27 = this ;
  extensionMethod_checkViewFunctionCallList (temp_27.readProperty_mFunctionCallList (), var_functionMap_43392, constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_48900, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1090)) ;
  enumGalgasBool test_28 = kBoolTrue ;
  if (kBoolTrue == test_28) {
    const GALGAS_astComputedViewInstruction temp_29 = this ;
    test_28 = GALGAS_bool (kIsNotEqual, temp_29.readProperty_mOutletName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_28) {
      {
      const GALGAS_astComputedViewInstruction temp_30 = this ;
      const GALGAS_astComputedViewInstruction temp_31 = this ;
      ioArgument_ioOutletMap.setter_insertKey (temp_30.readProperty_mOutletName (), temp_31.readProperty_mAutoLayoutViewClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1108)) ;
      }
    }
  }
  enumGalgasBool test_32 = kBoolTrue ;
  if (kBoolTrue == test_32) {
    const GALGAS_astComputedViewInstruction temp_33 = this ;
    test_32 = GALGAS_bool (kIsNotEqual, temp_33.readProperty_mConfiguratorName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_32) {
      {
      const GALGAS_astComputedViewInstruction temp_34 = this ;
      const GALGAS_astComputedViewInstruction temp_35 = this ;
      ioArgument_ioConfiguratorMap.setter_insertKey (temp_34.readProperty_mConfiguratorName (), temp_35.readProperty_mAutoLayoutViewClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1112)) ;
      }
    }
  }
  const GALGAS_astComputedViewInstruction temp_36 = this ;
  const GALGAS_astComputedViewInstruction temp_37 = this ;
  const GALGAS_astComputedViewInstruction temp_38 = this ;
  outArgument_outInstruction = GALGAS_autoLayoutComputedViewInstructionGeneration::constructor_new (temp_36.readProperty_mAutoLayoutViewClassName (), var_parameterList_43466, var_funcCallList_48900, var_regularBindingsGenerationList_48144, var_multipleBindingGenerationList_48224, var_runBindingGeneration_48289, var_inTableViewBindingGeneration_48335, var_ebViewGraphicControllerBindingGeneration_48435, temp_37.readProperty_mConfiguratorName ().readProperty_string (), temp_38.readProperty_mOutletName ().readProperty_string ()  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1115)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeAutoLayoutBinding'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeAutoLayoutBinding (const GALGAS_bool constinArgument_inPreferences,
                                       const GALGAS_propertyMap constinArgument_inRootObservablePropertyMap,
                                       const GALGAS_propertyMap constinArgument_inPreferencesPropertyMap,
                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                       const GALGAS_propertyMap constinArgument_inObservablePropertyMap,
                                       const GALGAS_actionMap constinArgument_inActionMap,
                                       const GALGAS_string constinArgument_inReceiverSwiftTypeName,
                                       const GALGAS_lstring constinArgument_inTypeName,
                                       const GALGAS_tableValueBinding constinArgument_inTableValueBinding,
                                       const GALGAS_runActionDescriptor constinArgument_inRunActionDescriptor,
                                       const GALGAS_multipleBindingDescriptor constinArgument_inEnabledBindingDescriptor,
                                       const GALGAS_multipleBindingDescriptor constinArgument_inHiddenBindingDescriptor,
                                       const GALGAS_graphicController constinArgument_inGraphicController,
                                       const GALGAS_regularBindingList constinArgument_inRegularBindingList,
                                       GALGAS_autoLayoutRegularBindingsGenerationList & outArgument_outRegularBindingsGenerationList,
                                       GALGAS_autoLayoutMultipleBindingGenerationList & outArgument_outMultipleBindingGenerationList,
                                       GALGAS_autolayoutRunBindingForGeneration & outArgument_outRunBindingGeneration,
                                       GALGAS_string & outArgument_outTableViewBindingGeneration,
                                       GALGAS_autoLayoutViewGraphicControllerBindingGeneration & outArgument_outEBViewGraphicControllerBindingGeneration,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRegularBindingsGenerationList.drop () ; // Release 'out' argument
  outArgument_outMultipleBindingGenerationList.drop () ; // Release 'out' argument
  outArgument_outRunBindingGeneration.drop () ; // Release 'out' argument
  outArgument_outTableViewBindingGeneration.drop () ; // Release 'out' argument
  outArgument_outEBViewGraphicControllerBindingGeneration.drop () ; // Release 'out' argument
  outArgument_outRegularBindingsGenerationList = GALGAS_autoLayoutRegularBindingsGenerationList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 1155)) ;
  outArgument_outMultipleBindingGenerationList = GALGAS_autoLayoutMultipleBindingGenerationList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 1156)) ;
  outArgument_outTableViewBindingGeneration = GALGAS_string::makeEmptyString () ;
  GALGAS_bool var_handlesRunAction_50995 ;
  GALGAS_bool var_handlesTableViewBinding_51034 ;
  GALGAS_bool var_handlesEnabledBinding_51071 ;
  GALGAS_bool var_handlesHiddenBinding_51107 ;
  GALGAS_bool var_handleGraphicControllerBinding_51153 ;
  GALGAS_lstring joker_50962 ; // Joker input parameter
  GALGAS_bool joker_51159_3 ; // Joker input parameter
  GALGAS_autoLayoutClassParameterList joker_51159_2 ; // Joker input parameter
  GALGAS_astAutoLayoutViewFunctionMap joker_51159_1 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mAutolayoutViewClassMap ().method_searchKey (constinArgument_inTypeName, joker_50962, var_handlesRunAction_50995, var_handlesTableViewBinding_51034, var_handlesEnabledBinding_51071, var_handlesHiddenBinding_51107, var_handleGraphicControllerBinding_51153, joker_51159_3, joker_51159_2, joker_51159_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1158)) ;
  outArgument_outEBViewGraphicControllerBindingGeneration = GALGAS_autoLayoutViewGraphicControllerBindingGeneration::constructor_none (SOURCE_FILE ("auto-layout-view.ggs", 1169)) ;
  switch (constinArgument_inGraphicController.enumValue ()) {
  case GALGAS_graphicController::kNotBuilt:
    break ;
  case GALGAS_graphicController::kEnum_none:
    {
    }
    break ;
  case GALGAS_graphicController::kEnum_defined:
    {
      const cEnumAssociatedValues_graphicController_defined * extractPtr_53432 = (const cEnumAssociatedValues_graphicController_defined *) (constinArgument_inGraphicController.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_51326_controllerName = extractPtr_53432->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_51348_propertyName = extractPtr_53432->mAssociatedValue1 ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = var_handleGraphicControllerBinding_51153.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1173)).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1174)).add_operation (GALGAS_string ("' type does not handle the $graphicController binding"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1174)), fixItArray1  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1174)) ;
        }
      }
      if (kBoolFalse == test_0) {
        GALGAS_propertyKind var_kind_51608 ;
        GALGAS_actionMap joker_51618_2 ; // Joker input parameter
        GALGAS_bool joker_51618_1 ; // Joker input parameter
        constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_51326_controllerName, var_kind_51608, joker_51618_2, joker_51618_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1176)) ;
        switch (var_kind_51608.enumValue ()) {
        case GALGAS_propertyKind::kNotBuilt:
          break ;
        case GALGAS_propertyKind::kEnum_property:
          {
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (extractedValue_51326_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray2  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1183)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_toMany:
          {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (extractedValue_51326_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray3  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1185)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_toOne:
          {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (extractedValue_51326_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray4  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1187)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_arrayController:
          {
            const cEnumAssociatedValues_propertyKind_arrayController * extractPtr_53181 = (const cEnumAssociatedValues_propertyKind_arrayController *) (var_kind_51608.unsafePointer ()) ;
            const GALGAS_lstring extractedValue_51999_entityName = extractPtr_53181->mAssociatedValue0 ;
            const GALGAS_bool extractedValue_52007_graphic = extractPtr_53181->mAssociatedValue1 ;
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = GALGAS_bool (kIsEqual, extractedValue_51348_propertyName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_5) {
                enumGalgasBool test_6 = kBoolTrue ;
                if (kBoolTrue == test_6) {
                  test_6 = extractedValue_52007_graphic.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1190)).boolEnum () ;
                  if (kBoolTrue == test_6) {
                    TC_Array <C_FixItDescription> fixItArray7 ;
                    inCompiler->emitSemanticError (extractedValue_51326_controllerName.readProperty_location (), GALGAS_string ("the controlled entity (").add_operation (extractedValue_51999_entityName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1191)).add_operation (GALGAS_string (") should be a graphic entity"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1191)), fixItArray7  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1191)) ;
                  }
                }
              }
            }
            if (kBoolFalse == test_5) {
              GALGAS_propertyMap var_observablePropertyMap_52343 ;
              GALGAS_classKind joker_52303 ; // Joker input parameter
              GALGAS_actionMap joker_52357_2 ; // Joker input parameter
              GALGAS_propertyGenerationList joker_52357_1 ; // Joker input parameter
              constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_51999_entityName, joker_52303, var_observablePropertyMap_52343, joker_52357_2, joker_52357_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1194)) ;
              GALGAS_propertyKind var_propertyKind_52446 ;
              GALGAS_actionMap joker_52448_2 ; // Joker input parameter
              GALGAS_bool joker_52448_1 ; // Joker input parameter
              var_observablePropertyMap_52343.method_searchKey (extractedValue_51348_propertyName, var_propertyKind_52446, joker_52448_2, joker_52448_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1200)) ;
              switch (var_propertyKind_52446.enumValue ()) {
              case GALGAS_propertyKind::kNotBuilt:
                break ;
              case GALGAS_propertyKind::kEnum_property:
                {
                  TC_Array <C_FixItDescription> fixItArray8 ;
                  inCompiler->emitSemanticError (extractedValue_51326_controllerName.readProperty_location (), GALGAS_string ("the bound model should be a toMany property"), fixItArray8  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1203)) ;
                }
                break ;
              case GALGAS_propertyKind::kEnum_toMany:
                {
                  const cEnumAssociatedValues_propertyKind_toMany * extractPtr_52806 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_propertyKind_52446.unsafePointer ()) ;
                  const GALGAS_lstring extractedValue_52629_kEntityName = extractPtr_52806->mAssociatedValue0 ;
                  const GALGAS_bool extractedValue_52641_isGraphic = extractPtr_52806->mAssociatedValue2 ;
                  enumGalgasBool test_9 = kBoolTrue ;
                  if (kBoolTrue == test_9) {
                    test_9 = extractedValue_52641_isGraphic.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1205)).boolEnum () ;
                    if (kBoolTrue == test_9) {
                      TC_Array <C_FixItDescription> fixItArray10 ;
                      inCompiler->emitSemanticError (extractedValue_51326_controllerName.readProperty_location (), GALGAS_string ("the controlled entity (").add_operation (extractedValue_52629_kEntityName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1206)).add_operation (GALGAS_string (") should be a graphic entity"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1206)), fixItArray10  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1206)) ;
                    }
                  }
                }
                break ;
              case GALGAS_propertyKind::kEnum_toOne:
                {
                  TC_Array <C_FixItDescription> fixItArray11 ;
                  inCompiler->emitSemanticError (extractedValue_51326_controllerName.readProperty_location (), GALGAS_string ("the bound model should be a toMany property"), fixItArray11  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1209)) ;
                }
                break ;
              case GALGAS_propertyKind::kEnum_arrayController:
                {
                  TC_Array <C_FixItDescription> fixItArray12 ;
                  inCompiler->emitSemanticError (extractedValue_51326_controllerName.readProperty_location (), GALGAS_string ("the bound model should be a toMany property"), fixItArray12  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1211)) ;
                }
                break ;
              case GALGAS_propertyKind::kEnum_selectionController:
                {
                  TC_Array <C_FixItDescription> fixItArray13 ;
                  inCompiler->emitSemanticError (extractedValue_51326_controllerName.readProperty_location (), GALGAS_string ("the bound model should be a toMany property"), fixItArray13  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1213)) ;
                }
                break ;
              }
            }
          }
          break ;
        case GALGAS_propertyKind::kEnum_selectionController:
          {
            TC_Array <C_FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (extractedValue_51326_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray14  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1217)) ;
          }
          break ;
        }
        outArgument_outEBViewGraphicControllerBindingGeneration = GALGAS_autoLayoutViewGraphicControllerBindingGeneration::constructor_binding (extractedValue_51326_controllerName.readProperty_string ()  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1219)) ;
      }
    }
    break ;
  }
  switch (constinArgument_inTableValueBinding.enumValue ()) {
  case GALGAS_tableValueBinding::kNotBuilt:
    break ;
  case GALGAS_tableValueBinding::kEnum_noTableValueBinding:
    {
    }
    break ;
  case GALGAS_tableValueBinding::kEnum_tableValueBinding:
    {
      const cEnumAssociatedValues_tableValueBinding_tableValueBinding * extractPtr_54366 = (const cEnumAssociatedValues_tableValueBinding_tableValueBinding *) (constinArgument_inTableValueBinding.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_53562_controllerName = extractPtr_54366->mAssociatedValue0 ;
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = var_handlesTableViewBinding_51034.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1226)).boolEnum () ;
        if (kBoolTrue == test_15) {
          TC_Array <C_FixItDescription> fixItArray16 ;
          inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1227)).add_operation (GALGAS_string ("' type does not handle the $tableView binding"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1227)), fixItArray16  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1227)) ;
        }
      }
      if (kBoolFalse == test_15) {
        enumGalgasBool test_17 = kBoolTrue ;
        if (kBoolTrue == test_17) {
          test_17 = constinArgument_inPreferences.boolEnum () ;
          if (kBoolTrue == test_17) {
            GALGAS_propertyKind var_kind_53828 ;
            GALGAS_actionMap joker_53838_2 ; // Joker input parameter
            GALGAS_bool joker_53838_1 ; // Joker input parameter
            constinArgument_inPreferencesPropertyMap.method_searchKey (extractedValue_53562_controllerName, var_kind_53828, joker_53838_2, joker_53838_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1229)) ;
            enumGalgasBool test_18 = kBoolTrue ;
            if (kBoolTrue == test_18) {
              test_18 = var_kind_53828.getter_isArrayController (SOURCE_FILE ("auto-layout-view.ggs", 1234)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1234)).boolEnum () ;
              if (kBoolTrue == test_18) {
                TC_Array <C_FixItDescription> fixItArray19 ;
                inCompiler->emitSemanticError (extractedValue_53562_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray19  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1235)) ;
              }
            }
            outArgument_outTableViewBindingGeneration = extractedValue_53562_controllerName.readProperty_string () ;
          }
        }
        if (kBoolFalse == test_17) {
          GALGAS_propertyKind var_kind_54146 ;
          GALGAS_actionMap joker_54156_2 ; // Joker input parameter
          GALGAS_bool joker_54156_1 ; // Joker input parameter
          constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_53562_controllerName, var_kind_54146, joker_54156_2, joker_54156_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1239)) ;
          enumGalgasBool test_20 = kBoolTrue ;
          if (kBoolTrue == test_20) {
            test_20 = var_kind_54146.getter_isArrayController (SOURCE_FILE ("auto-layout-view.ggs", 1244)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1244)).boolEnum () ;
            if (kBoolTrue == test_20) {
              TC_Array <C_FixItDescription> fixItArray21 ;
              inCompiler->emitSemanticError (extractedValue_53562_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray21  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1245)) ;
            }
          }
          outArgument_outTableViewBindingGeneration = extractedValue_53562_controllerName.readProperty_string () ;
        }
      }
    }
    break ;
  }
  {
  routine_analyzeAutoLayoutRunBinding (constinArgument_inRunActionDescriptor, var_handlesRunAction_50995, constinArgument_inPreferences, constinArgument_inTypeName, constinArgument_inActionMap, constinArgument_inObservablePropertyMap, constinArgument_inReceiverSwiftTypeName, outArgument_outRunBindingGeneration, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1251)) ;
  }
  GALGAS_autolayoutEnabledBindingForGeneration var_enabledBindingGeneration_54939 ;
  {
  routine_analyzeAutoLayoutEnableBinding (constinArgument_inEnabledBindingDescriptor, var_handlesEnabledBinding_51071, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_enabledBindingGeneration_54939, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1262)) ;
  }
  switch (var_enabledBindingGeneration_54939.enumValue ()) {
  case GALGAS_autolayoutEnabledBindingForGeneration::kNotBuilt:
    break ;
  case GALGAS_autolayoutEnabledBindingForGeneration::kEnum_none:
    {
    }
    break ;
  case GALGAS_autolayoutEnabledBindingForGeneration::kEnum_enabled:
    {
      const cEnumAssociatedValues_autolayoutEnabledBindingForGeneration_enabled * extractPtr_55078 = (const cEnumAssociatedValues_autolayoutEnabledBindingForGeneration_enabled *) (var_enabledBindingGeneration_54939.unsafePointer ()) ;
      const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration extractedValue_55015_binding = extractPtr_55078->mAssociatedValue0 ;
      outArgument_outMultipleBindingGenerationList.addAssign_operation (GALGAS_string ("enabled"), extractedValue_55015_binding  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1275)) ;
    }
    break ;
  }
  switch (constinArgument_inHiddenBindingDescriptor.enumValue ()) {
  case GALGAS_multipleBindingDescriptor::kNotBuilt:
    break ;
  case GALGAS_multipleBindingDescriptor::kEnum_noBinding:
    {
    }
    break ;
  case GALGAS_multipleBindingDescriptor::kEnum_binding:
    {
      const cEnumAssociatedValues_multipleBindingDescriptor_binding * extractPtr_55875 = (const cEnumAssociatedValues_multipleBindingDescriptor_binding *) (constinArgument_inHiddenBindingDescriptor.unsafePointer ()) ;
      const GALGAS_abstractBooleanMultipleBindingExpressionAST extractedValue_55222_expression = extractPtr_55875->mAssociatedValue0 ;
      GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_55511 ;
      GALGAS_typeKind var_type_55537 ;
      GALGAS_location var_errorLocation_55572 ;
      callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_55222_expression.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_hiddenExpression_55511, var_type_55537, var_errorLocation_55572, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1281)) ;
      enumGalgasBool test_22 = kBoolTrue ;
      if (kBoolTrue == test_22) {
        test_22 = var_type_55537.getter_isBoolType (SOURCE_FILE ("auto-layout-view.ggs", 1291)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1291)).boolEnum () ;
        if (kBoolTrue == test_22) {
          TC_Array <C_FixItDescription> fixItArray23 ;
          inCompiler->emitSemanticError (var_errorLocation_55572, GALGAS_string ("expression is not boolean"), fixItArray23  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1292)) ;
        }
      }
      enumGalgasBool test_24 = kBoolTrue ;
      if (kBoolTrue == test_24) {
        test_24 = var_handlesHiddenBinding_51107.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1294)).boolEnum () ;
        if (kBoolTrue == test_24) {
          TC_Array <C_FixItDescription> fixItArray25 ;
          inCompiler->emitSemanticError (var_errorLocation_55572, GALGAS_string ("cet outlet n'accepte pas le binding $hidden"), fixItArray25  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1295)) ;
        }
      }
      outArgument_outMultipleBindingGenerationList.addAssign_operation (GALGAS_string ("hidden"), var_hiddenExpression_55511  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1297)) ;
    }
    break ;
  }
  {
  GALGAS_string temp_26 ;
  const enumGalgasBool test_27 = constinArgument_inPreferences.boolEnum () ;
  if (kBoolTrue == test_27) {
    temp_26 = GALGAS_string ("preferences_") ;
  }else if (kBoolFalse == test_27) {
    temp_26 = GALGAS_string ("self.") ;
  }
  routine_analyzeAutoLayoutRegularBinding (constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inTypeName, constinArgument_inRegularBindingList, temp_26, outArgument_outRegularBindingsGenerationList, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1302)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeAutoLayoutEnableBinding'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeAutoLayoutEnableBinding (const GALGAS_multipleBindingDescriptor constinArgument_inEnabledBindingDescriptor,
                                             const GALGAS_bool constinArgument_inHandlesEnabledBinding,
                                             const GALGAS_bool constinArgument_inPreferences,
                                             const GALGAS_propertyMap constinArgument_inRootObservablePropertyMap,
                                             const GALGAS_semanticContext constinArgument_inSemanticContext,
                                             const GALGAS_propertyMap constinArgument_inObservablePropertyMap,
                                             const GALGAS_propertyMap constinArgument_inPreferencesPropertyMap,
                                             GALGAS_autolayoutEnabledBindingForGeneration & outArgument_outEnabledBindingGeneration,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outEnabledBindingGeneration.drop () ; // Release 'out' argument
  switch (constinArgument_inEnabledBindingDescriptor.enumValue ()) {
  case GALGAS_multipleBindingDescriptor::kNotBuilt:
    break ;
  case GALGAS_multipleBindingDescriptor::kEnum_noBinding:
    {
      outArgument_outEnabledBindingGeneration = GALGAS_autolayoutEnabledBindingForGeneration::constructor_none (SOURCE_FILE ("auto-layout-view.ggs", 1329)) ;
    }
    break ;
  case GALGAS_multipleBindingDescriptor::kEnum_binding:
    {
      const cEnumAssociatedValues_multipleBindingDescriptor_binding * extractPtr_57650 = (const cEnumAssociatedValues_multipleBindingDescriptor_binding *) (constinArgument_inEnabledBindingDescriptor.unsafePointer ()) ;
      const GALGAS_abstractBooleanMultipleBindingExpressionAST extractedValue_57001_expression = extractPtr_57650->mAssociatedValue0 ;
      GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_enableExpression_57290 ;
      GALGAS_typeKind var_type_57316 ;
      GALGAS_location var_errorLocation_57351 ;
      callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_57001_expression.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_enableExpression_57290, var_type_57316, var_errorLocation_57351, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1331)) ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = constinArgument_inHandlesEnabledBinding.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1341)).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (var_errorLocation_57351, GALGAS_string ("cet outlet n'accepte pas le binding $enabled"), fixItArray1  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1342)) ;
        }
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_type_57316.getter_isBoolType (SOURCE_FILE ("auto-layout-view.ggs", 1344)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1344)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_errorLocation_57351, GALGAS_string ("expression is not boolean"), fixItArray3  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1345)) ;
        }
      }
      outArgument_outEnabledBindingGeneration = GALGAS_autolayoutEnabledBindingForGeneration::constructor_enabled (var_enableExpression_57290  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1347)) ;
    }
    break ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeAutoLayoutRunBinding'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeAutoLayoutRunBinding (const GALGAS_runActionDescriptor constinArgument_inRunActionDescriptor,
                                          const GALGAS_bool constinArgument_inHandlesRunAction,
                                          const GALGAS_bool constinArgument_inPreferences,
                                          const GALGAS_lstring constinArgument_inTypeName,
                                          const GALGAS_actionMap constinArgument_inActionMap,
                                          const GALGAS_propertyMap constinArgument_inObservablePropertyMap,
                                          const GALGAS_string constinArgument_inReceiverSwiftTypeName,
                                          GALGAS_autolayoutRunBindingForGeneration & outArgument_outRunBindingGeneration,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRunBindingGeneration.drop () ; // Release 'out' argument
  switch (constinArgument_inRunActionDescriptor.enumValue ()) {
  case GALGAS_runActionDescriptor::kNotBuilt:
    break ;
  case GALGAS_runActionDescriptor::kEnum_noAction:
    {
      outArgument_outRunBindingGeneration = GALGAS_autolayoutRunBindingForGeneration::constructor_none (SOURCE_FILE ("auto-layout-view.ggs", 1365)) ;
    }
    break ;
  case GALGAS_runActionDescriptor::kEnum_action:
    {
      const cEnumAssociatedValues_runActionDescriptor_action * extractPtr_59126 = (const cEnumAssociatedValues_runActionDescriptor_action *) (constinArgument_inRunActionDescriptor.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_58263_target = extractPtr_59126->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_58279_action = extractPtr_59126->mAssociatedValue1 ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = constinArgument_inHandlesRunAction.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1367)).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1368)).add_operation (GALGAS_string ("' type does not handle run action"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1368)), fixItArray1  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1368)) ;
          outArgument_outRunBindingGeneration.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_0) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (kIsEqual, extractedValue_58263_target.readProperty_string ().objectCompare (GALGAS_string ("self"))).boolEnum () ;
          if (kBoolTrue == test_2) {
            constinArgument_inActionMap.method_searchKey (extractedValue_58279_action, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1370)) ;
            outArgument_outRunBindingGeneration = GALGAS_autolayoutRunBindingForGeneration::constructor_run (GALGAS_string ("self"), extractedValue_58279_action.readProperty_string (), constinArgument_inReceiverSwiftTypeName  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1371)) ;
          }
        }
        if (kBoolFalse == test_2) {
          GALGAS_actionMap var_controllerActionMap_58805 ;
          GALGAS_propertyKind joker_58760 ; // Joker input parameter
          GALGAS_bool joker_58815 ; // Joker input parameter
          constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_58263_target, joker_58760, var_controllerActionMap_58805, joker_58815, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1377)) ;
          var_controllerActionMap_58805.method_searchKey (extractedValue_58279_action, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1383)) ;
          GALGAS_string temp_3 ;
          const enumGalgasBool test_4 = constinArgument_inPreferences.boolEnum () ;
          if (kBoolTrue == test_4) {
            temp_3 = GALGAS_string ("preferences_") ;
          }else if (kBoolFalse == test_4) {
            temp_3 = GALGAS_string::makeEmptyString () ;
          }
          outArgument_outRunBindingGeneration = GALGAS_autolayoutRunBindingForGeneration::constructor_run (temp_3.add_operation (extractedValue_58263_target.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1385)), extractedValue_58279_action.readProperty_string (), GALGAS_string ("Controller_").add_operation (constinArgument_inReceiverSwiftTypeName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1387)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1387)).add_operation (extractedValue_58263_target.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1387))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1384)) ;
        }
      }
    }
    break ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeAutoLayoutRegularBinding'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeAutoLayoutRegularBinding (const GALGAS_bool constinArgument_inPreferences,
                                              const GALGAS_propertyMap constinArgument_inRootPropertyMap,
                                              const GALGAS_propertyMap constinArgument_inPreferencesPropertyMap,
                                              const GALGAS_semanticContext constinArgument_inSemanticContext,
                                              const GALGAS_propertyMap constinArgument_inBoundModelPropertyMap,
                                              const GALGAS_lstring constinArgument_inOutletTypeName,
                                              const GALGAS_regularBindingList constinArgument_inRegularBindingList,
                                              const GALGAS_string constinArgument_inSelfSwiftName,
                                              GALGAS_autoLayoutRegularBindingsGenerationList & ioArgument_ioRegularBindingsGenerationList,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_regularBindingList enumerator_59753 (constinArgument_inRegularBindingList, kENUMERATION_UP) ;
  while (enumerator_59753.hasCurrentObject ()) {
    GALGAS_outletBindingModelList var_boundModelTypeList_59853 = GALGAS_outletBindingModelList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 1408)) ;
    GALGAS_boundObjectList var_boundModelListForGeneration_59911 = GALGAS_boundObjectList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 1409)) ;
    cEnumerator_observablePropertyList enumerator_59945 (enumerator_59753.current_mObservablePropertyList (HERE), kENUMERATION_UP) ;
    while (enumerator_59945.hasCurrentObject ()) {
      GALGAS_propertyKind var_kind_60204 ;
      GALGAS_string var_swiftTypeStringForTransientFunctionArgument_60276 ;
      GALGAS_string var_defaultValueAsString_60325 ;
      GALGAS_propertyMap temp_0 ;
      const enumGalgasBool test_1 = constinArgument_inPreferences.boolEnum () ;
      if (kBoolTrue == test_1) {
        temp_0 = constinArgument_inPreferencesPropertyMap ;
      }else if (kBoolFalse == test_1) {
        temp_0 = constinArgument_inBoundModelPropertyMap ;
      }
      extensionMethod_analyzeObservableProperty (enumerator_59945.current_mObservableProperty (HERE), constinArgument_inRootPropertyMap, constinArgument_inSemanticContext, temp_0, var_kind_60204, var_swiftTypeStringForTransientFunctionArgument_60276, var_defaultValueAsString_60325, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1411)) ;
      switch (var_kind_60204.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_59945.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1422)), GALGAS_string ("a toMany property cannot be bound"), fixItArray2  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1422)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_59945.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1424)), GALGAS_string ("a toOne property cannot be bound"), fixItArray3  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1424)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_59945.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1426)), GALGAS_string ("an array controller cannot be bound"), fixItArray4  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1426)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_59945.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1428)), GALGAS_string ("a selection controller cannot be bound"), fixItArray5  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1428)) ;
        }
        break ;
      }
      var_boundModelListForGeneration_59911.addAssign_operation (extensionGetter_modelStringForSelf (enumerator_59945.current_mObservableProperty (HERE), constinArgument_inSelfSwiftName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1430)), var_kind_60204  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1430)) ;
      var_boundModelTypeList_59853.addAssign_operation (var_kind_60204, extensionGetter_location (enumerator_59945.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1431))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1431)) ;
      enumerator_59945.gotoNextObject () ;
    }
    GALGAS_outletBindingSpecificationModelList var_outletBindingSpecificationModelList_61130 = GALGAS_outletBindingSpecificationModelList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 1434)) ;
    GALGAS_controllerBindingOptionDecoratedList var_controllerBindingOptionDecoratedList_61218 = GALGAS_controllerBindingOptionDecoratedList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 1435)) ;
    GALGAS_lstring var_outletTypeName_61246 = constinArgument_inOutletTypeName ;
    GALGAS_bool var_continues_61283 = GALGAS_bool (true) ;
    if (constinArgument_inSemanticContext.readProperty_mBindingSpecificationMap ().getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1438)).add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1438)).getter_uint (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1438)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1438)).isValid ()) {
      uint32_t variant_61299 = constinArgument_inSemanticContext.readProperty_mBindingSpecificationMap ().getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1438)).add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1438)).getter_uint (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1438)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1438)).uintValue () ;
      bool loop_61299 = true ;
      while (loop_61299) {
        loop_61299 = GALGAS_bool (kIsNotEqual, var_outletTypeName_61246.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).operator_and (var_continues_61283 COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1438)).isValid () ;
        if (loop_61299) {
          loop_61299 = GALGAS_bool (kIsNotEqual, var_outletTypeName_61246.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).operator_and (var_continues_61283 COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1438)).boolValue () ;
        }
        if (loop_61299 && (0 == variant_61299)) {
          loop_61299 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("auto-layout-view.ggs", 1438)) ;
        }
        if (loop_61299) {
          variant_61299 -- ;
          var_continues_61283 = GALGAS_bool (false) ;
          GALGAS_lstring var_superOutletClassName_61559 ;
          GALGAS_autoLayoutViewBindingSpecificationMap var_bindingMap_61583 ;
          constinArgument_inSemanticContext.readProperty_mAutoLayoutBindingSpecificationMap ().method_searchKey (var_outletTypeName_61246, var_superOutletClassName_61559, var_bindingMap_61583, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1440)) ;
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = var_bindingMap_61583.getter_hasKey (enumerator_59753.current_mBindingName (HERE).readProperty_string () COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1445)).boolEnum () ;
            if (kBoolTrue == test_6) {
              var_bindingMap_61583.method_searchKey (enumerator_59753.current_mBindingName (HERE), var_outletBindingSpecificationModelList_61130, var_controllerBindingOptionDecoratedList_61218, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1446)) ;
            }
          }
          if (kBoolFalse == test_6) {
            var_continues_61283 = GALGAS_bool (true) ;
            var_outletTypeName_61246 = var_superOutletClassName_61559 ;
          }
        }
      }
    }
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = var_continues_61283.boolEnum () ;
      if (kBoolTrue == test_7) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_59753.current_mBindingName (HERE).readProperty_location (), GALGAS_string ("this binding is not defined"), fixItArray8  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1457)) ;
      }
    }
    if (kBoolFalse == test_7) {
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = GALGAS_bool (kIsNotEqual, var_boundModelTypeList_59853.getter_length (SOURCE_FILE ("auto-layout-view.ggs", 1458)).objectCompare (var_outletBindingSpecificationModelList_61130.getter_length (SOURCE_FILE ("auto-layout-view.ggs", 1458)))).boolEnum () ;
        if (kBoolTrue == test_9) {
          TC_Array <C_FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (enumerator_59753.current_mBindingName (HERE).readProperty_location (), var_outletBindingSpecificationModelList_61130.getter_length (SOURCE_FILE ("auto-layout-view.ggs", 1460)).getter_string (SOURCE_FILE ("auto-layout-view.ggs", 1460)).add_operation (GALGAS_string (" model(s) required for this binding (found: "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1460)).add_operation (var_boundModelTypeList_59853.getter_length (SOURCE_FILE ("auto-layout-view.ggs", 1462)).getter_string (SOURCE_FILE ("auto-layout-view.ggs", 1461)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1461)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1462)), fixItArray10  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1459)) ;
        }
      }
      if (kBoolFalse == test_9) {
        cEnumerator_outletBindingSpecificationModelList enumerator_62343 (var_outletBindingSpecificationModelList_61130, kENUMERATION_UP) ;
        cEnumerator_outletBindingModelList enumerator_62418 (var_boundModelTypeList_59853, kENUMERATION_UP) ;
        while (enumerator_62343.hasCurrentObject () && enumerator_62418.hasCurrentObject ()) {
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            GALGAS_bool test_12 = enumerator_62343.current_mModelShouldBeWritableProperty (HERE) ;
            if (kBoolTrue == test_12.boolEnum ()) {
              test_12 = extensionGetter_isTransient (enumerator_62418.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1465)) ;
            }
            test_11 = test_12.boolEnum () ;
            if (kBoolTrue == test_11) {
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (enumerator_62418.current_mErrorLocation (HERE), GALGAS_string ("the model is transient and the binding requires an writable model"), fixItArray13  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1466)) ;
            }
          }
          enumGalgasBool test_14 = kBoolTrue ;
          if (kBoolTrue == test_14) {
            GALGAS_bool test_15 = enumerator_62343.current_mModelType (HERE).getter_isEnumType (SOURCE_FILE ("auto-layout-view.ggs", 1468)) ;
            if (kBoolTrue == test_15.boolEnum ()) {
              test_15 = extensionGetter_isEnumType (enumerator_62418.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1468)) ;
            }
            test_14 = test_15.boolEnum () ;
            if (kBoolTrue == test_14) {
            }
          }
          if (kBoolFalse == test_14) {
            enumGalgasBool test_16 = kBoolTrue ;
            if (kBoolTrue == test_16) {
              test_16 = GALGAS_bool (kIsNotEqual, extensionGetter_swiftTypeName (enumerator_62343.current_mModelType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1469)).objectCompare (extensionGetter_swiftTypeName (enumerator_62418.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1469)))).boolEnum () ;
              if (kBoolTrue == test_16) {
                TC_Array <C_FixItDescription> fixItArray17 ;
                inCompiler->emitSemanticError (enumerator_62418.current_mErrorLocation (HERE), GALGAS_string ("the model type should be ").add_operation (extensionGetter_swiftTypeName (enumerator_62343.current_mModelType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1470)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1470)), fixItArray17  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1470)) ;
              }
            }
          }
          enumerator_62343.gotoNextObject () ;
          enumerator_62418.gotoNextObject () ;
        }
      }
    }
    GALGAS_string var_bindingOptionString_63000 = GALGAS_string::makeEmptyString () ;
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = GALGAS_bool (kIsNotEqual, var_controllerBindingOptionDecoratedList_61218.getter_length (SOURCE_FILE ("auto-layout-view.ggs", 1476)).objectCompare (enumerator_59753.current_mBindingOptionList (HERE).getter_length (SOURCE_FILE ("auto-layout-view.ggs", 1476)))).boolEnum () ;
      if (kBoolTrue == test_18) {
        GALGAS_string var_s_63114 ;
        enumGalgasBool test_19 = kBoolTrue ;
        if (kBoolTrue == test_19) {
          test_19 = GALGAS_bool (kIsEqual, var_controllerBindingOptionDecoratedList_61218.getter_length (SOURCE_FILE ("auto-layout-view.ggs", 1478)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1478)).getter_uint (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1478)))).boolEnum () ;
          if (kBoolTrue == test_19) {
            var_s_63114 = GALGAS_string ("this binding has no option") ;
          }
        }
        if (kBoolFalse == test_19) {
          var_s_63114 = GALGAS_string ("this binding requires the following options:") ;
          cEnumerator_controllerBindingOptionDecoratedList enumerator_63328 (var_controllerBindingOptionDecoratedList_61218, kENUMERATION_UP) ;
          while (enumerator_63328.hasCurrentObject ()) {
            var_s_63114.plusAssign_operation(GALGAS_string ("\n"
              "  - ").add_operation (enumerator_63328.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1483)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1483)).add_operation (extensionGetter_swiftTypeName (enumerator_63328.current_mOptionType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1483)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1483)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1483)) ;
            enumerator_63328.gotoNextObject () ;
          }
        }
        TC_Array <C_FixItDescription> fixItArray20 ;
        inCompiler->emitSemanticError (enumerator_59753.current_mBindingName (HERE).readProperty_location (), var_s_63114, fixItArray20  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1486)) ;
      }
    }
    if (kBoolFalse == test_18) {
      cEnumerator_controllerBindingOptionDecoratedList enumerator_63565 (var_controllerBindingOptionDecoratedList_61218, kENUMERATION_UP) ;
      cEnumerator_bindingOptionList enumerator_63649 (enumerator_59753.current_mBindingOptionList (HERE), kENUMERATION_UP) ;
      while (enumerator_63565.hasCurrentObject () && enumerator_63649.hasCurrentObject ()) {
        enumGalgasBool test_21 = kBoolTrue ;
        if (kBoolTrue == test_21) {
          test_21 = GALGAS_bool (kIsNotEqual, enumerator_63565.current_mOptionName (HERE).readProperty_string ().objectCompare (enumerator_63649.current_mOptionName (HERE).readProperty_string ())).boolEnum () ;
          if (kBoolTrue == test_21) {
            TC_Array <C_FixItDescription> fixItArray22 ;
            inCompiler->emitSemanticError (enumerator_63649.current_mOptionName (HERE).readProperty_location (), GALGAS_string ("the option name should be '").add_operation (enumerator_63565.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1490)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1490)), fixItArray22  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1490)) ;
          }
        }
        GALGAS_string var_optionValueAsString_64033 ;
        GALGAS_typeKindList temp_23 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 1493)) ;
        temp_23.addAssign_operation (enumerator_63565.current_mOptionType (HERE)  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1493)) ;
        callExtensionMethod_analyzeDefaultValueType ((cPtr_abstractDefaultValue *) enumerator_63649.current_mOptionValue (HERE).ptr (), temp_23, constinArgument_inPreferencesPropertyMap, var_optionValueAsString_64033, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1492)) ;
        var_bindingOptionString_63000.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_63565.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1497)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1497)).add_operation (var_optionValueAsString_64033, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1497)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1497)) ;
        enumerator_63565.gotoNextObject () ;
        enumerator_63649.gotoNextObject () ;
      }
    }
    ioArgument_ioRegularBindingsGenerationList.addAssign_operation (enumerator_59753.current_mBindingName (HERE).readProperty_string (), var_boundModelListForGeneration_59911, var_bindingOptionString_63000  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1501)) ;
    enumerator_59753.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@astHStackViewInstructionDeclaration generateViewCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_astHStackViewInstructionDeclaration::method_generateViewCode (const GALGAS_autoLayoutViewDeclarationMap constinArgument_inViewDeclarationMap,
                                                                        const GALGAS_bool constinArgument_inPreferences,
                                                                        const GALGAS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                        const GALGAS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                                        const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                        const GALGAS_propertyMap constinArgument_inObservablePropertyMap,
                                                                        const GALGAS_actionMap constinArgument_inActionMap,
                                                                        const GALGAS_string constinArgument_inReceiverSwiftTypeName,
                                                                        const GALGAS_classMap constinArgument_inClassMap,
                                                                        GALGAS_implicitViewFunctionGenerationList & ioArgument_ioImplicitViewFunctionGenerationList,
                                                                        GALGAS_autoLayoutConfiguratorMap & ioArgument_ioConfiguratorMap,
                                                                        GALGAS_autoLayoutOutletMap & ioArgument_ioOutletMap,
                                                                        GALGAS_abstractViewInstructionGeneration & outArgument_outInstruction,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutViewInstructionGenerationList var_instructionList_65445 = GALGAS_autoLayoutViewInstructionGenerationList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 1524)) ;
  GALGAS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_65946 ;
  const GALGAS_astHStackViewInstructionDeclaration temp_0 = this ;
  extensionMethod_checkViewFunctionCallList (temp_0.readProperty_mFunctionCallList (), constinArgument_inSemanticContext.readProperty_mAutoLayoutHStackFunctionMap (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_65946, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1525)) ;
  GALGAS_autoLayoutMultipleBindingGenerationList var_multipleBindingGenerationList_66027 = GALGAS_autoLayoutMultipleBindingGenerationList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 1541)) ;
  const GALGAS_astHStackViewInstructionDeclaration temp_1 = this ;
  switch (temp_1.readProperty_mOptionalHiddenBinding ().enumValue ()) {
  case GALGAS_optionalHiddenBinding::kNotBuilt:
    break ;
  case GALGAS_optionalHiddenBinding::kEnum_noBinding:
    {
    }
    break ;
  case GALGAS_optionalHiddenBinding::kEnum_binding:
    {
      const cEnumAssociatedValues_optionalHiddenBinding_binding * extractPtr_66673 = (const cEnumAssociatedValues_optionalHiddenBinding_binding *) (temp_1.readProperty_mOptionalHiddenBinding ().unsafePointer ()) ;
      const GALGAS_abstractBooleanMultipleBindingExpressionAST extractedValue_66129_hiddenBindingExpression = extractPtr_66673->mAssociatedValue0 ;
      GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_66431 ;
      GALGAS_typeKind var_type_66457 ;
      GALGAS_location var_errorLocation_66492 ;
      callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_66129_hiddenBindingExpression.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_hiddenExpression_66431, var_type_66457, var_errorLocation_66492, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1545)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_type_66457.getter_isBoolType (SOURCE_FILE ("auto-layout-view.ggs", 1555)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1555)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_errorLocation_66492, GALGAS_string ("expression is not boolean"), fixItArray3  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1556)) ;
        }
      }
      var_multipleBindingGenerationList_66027.addAssign_operation (GALGAS_string ("hidden"), var_hiddenExpression_66431  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1558)) ;
    }
    break ;
  }
  const GALGAS_astHStackViewInstructionDeclaration temp_4 = this ;
  cEnumerator_astViewInstructionList enumerator_66698 (temp_4.readProperty_mInstructionList (), kENUMERATION_UP) ;
  while (enumerator_66698.hasCurrentObject ()) {
    GALGAS_abstractViewInstructionGeneration var_generatedInstruction_67130 ;
    callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) enumerator_66698.current_mInstruction (HERE).ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_generatedInstruction_67130, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1563)) ;
    var_instructionList_65445.addAssign_operation (var_generatedInstruction_67130  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1578)) ;
    enumerator_66698.gotoNextObject () ;
  }
  outArgument_outInstruction = GALGAS_hStackViewInstructionGeneration::constructor_new (var_funcCallList_65946, var_instructionList_65445, var_multipleBindingGenerationList_66027  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1580)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@astHSplitViewInstructionDeclaration generateViewCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_astHSplitViewInstructionDeclaration::method_generateViewCode (const GALGAS_autoLayoutViewDeclarationMap constinArgument_inViewDeclarationMap,
                                                                        const GALGAS_bool constinArgument_inPreferences,
                                                                        const GALGAS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                        const GALGAS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                                        const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                        const GALGAS_propertyMap constinArgument_inObservablePropertyMap,
                                                                        const GALGAS_actionMap constinArgument_inActionMap,
                                                                        const GALGAS_string constinArgument_inReceiverSwiftTypeName,
                                                                        const GALGAS_classMap constinArgument_inClassMap,
                                                                        GALGAS_implicitViewFunctionGenerationList & ioArgument_ioImplicitViewFunctionGenerationList,
                                                                        GALGAS_autoLayoutConfiguratorMap & ioArgument_ioConfiguratorMap,
                                                                        GALGAS_autoLayoutOutletMap & ioArgument_ioOutletMap,
                                                                        GALGAS_abstractViewInstructionGeneration & outArgument_outInstruction,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutViewInstructionGenerationList var_instructionList_68437 = GALGAS_autoLayoutViewInstructionGenerationList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 1599)) ;
  GALGAS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_68943 ;
  const GALGAS_astHSplitViewInstructionDeclaration temp_0 = this ;
  extensionMethod_checkViewFunctionCallList (temp_0.readProperty_mFunctionCallList (), GALGAS_astAutoLayoutViewFunctionMap::constructor_emptyMap (SOURCE_FILE ("auto-layout-view.ggs", 1601)), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_68943, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1600)) ;
  GALGAS_autoLayoutMultipleBindingGenerationList var_multipleBindingGenerationList_69024 = GALGAS_autoLayoutMultipleBindingGenerationList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 1616)) ;
  const GALGAS_astHSplitViewInstructionDeclaration temp_1 = this ;
  switch (temp_1.readProperty_mOptionalHiddenBinding ().enumValue ()) {
  case GALGAS_optionalHiddenBinding::kNotBuilt:
    break ;
  case GALGAS_optionalHiddenBinding::kEnum_noBinding:
    {
    }
    break ;
  case GALGAS_optionalHiddenBinding::kEnum_binding:
    {
      const cEnumAssociatedValues_optionalHiddenBinding_binding * extractPtr_69670 = (const cEnumAssociatedValues_optionalHiddenBinding_binding *) (temp_1.readProperty_mOptionalHiddenBinding ().unsafePointer ()) ;
      const GALGAS_abstractBooleanMultipleBindingExpressionAST extractedValue_69126_hiddenBindingExpression = extractPtr_69670->mAssociatedValue0 ;
      GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_69428 ;
      GALGAS_typeKind var_type_69454 ;
      GALGAS_location var_errorLocation_69489 ;
      callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_69126_hiddenBindingExpression.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_hiddenExpression_69428, var_type_69454, var_errorLocation_69489, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1620)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_type_69454.getter_isBoolType (SOURCE_FILE ("auto-layout-view.ggs", 1630)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1630)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_errorLocation_69489, GALGAS_string ("expression is not boolean"), fixItArray3  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1631)) ;
        }
      }
      var_multipleBindingGenerationList_69024.addAssign_operation (GALGAS_string ("hidden"), var_hiddenExpression_69428  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1633)) ;
    }
    break ;
  }
  const GALGAS_astHSplitViewInstructionDeclaration temp_4 = this ;
  cEnumerator_astViewInstructionList enumerator_69695 (temp_4.readProperty_mInstructionList (), kENUMERATION_UP) ;
  while (enumerator_69695.hasCurrentObject ()) {
    GALGAS_abstractViewInstructionGeneration var_generatedInstruction_70127 ;
    callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) enumerator_69695.current_mInstruction (HERE).ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_generatedInstruction_70127, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1638)) ;
    var_instructionList_68437.addAssign_operation (var_generatedInstruction_70127  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1653)) ;
    enumerator_69695.gotoNextObject () ;
  }
  outArgument_outInstruction = GALGAS_hSplitViewInstructionGeneration::constructor_new (var_funcCallList_68943, var_instructionList_68437, var_multipleBindingGenerationList_69024  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1655)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@astVSplitViewInstructionDeclaration generateViewCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_astVSplitViewInstructionDeclaration::method_generateViewCode (const GALGAS_autoLayoutViewDeclarationMap constinArgument_inViewDeclarationMap,
                                                                        const GALGAS_bool constinArgument_inPreferences,
                                                                        const GALGAS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                        const GALGAS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                                        const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                        const GALGAS_propertyMap constinArgument_inObservablePropertyMap,
                                                                        const GALGAS_actionMap constinArgument_inActionMap,
                                                                        const GALGAS_string constinArgument_inReceiverSwiftTypeName,
                                                                        const GALGAS_classMap constinArgument_inClassMap,
                                                                        GALGAS_implicitViewFunctionGenerationList & ioArgument_ioImplicitViewFunctionGenerationList,
                                                                        GALGAS_autoLayoutConfiguratorMap & ioArgument_ioConfiguratorMap,
                                                                        GALGAS_autoLayoutOutletMap & ioArgument_ioOutletMap,
                                                                        GALGAS_abstractViewInstructionGeneration & outArgument_outInstruction,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutViewInstructionGenerationList var_instructionList_71434 = GALGAS_autoLayoutViewInstructionGenerationList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 1674)) ;
  GALGAS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_71891 ;
  const GALGAS_astVSplitViewInstructionDeclaration temp_0 = this ;
  extensionMethod_checkViewFunctionCallList (temp_0.readProperty_mFunctionCallList (), GALGAS_astAutoLayoutViewFunctionMap::constructor_emptyMap (SOURCE_FILE ("auto-layout-view.ggs", 1676)), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_71891, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1675)) ;
  GALGAS_autoLayoutMultipleBindingGenerationList var_multipleBindingGenerationList_71972 = GALGAS_autoLayoutMultipleBindingGenerationList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 1691)) ;
  const GALGAS_astVSplitViewInstructionDeclaration temp_1 = this ;
  switch (temp_1.readProperty_mOptionalHiddenBinding ().enumValue ()) {
  case GALGAS_optionalHiddenBinding::kNotBuilt:
    break ;
  case GALGAS_optionalHiddenBinding::kEnum_noBinding:
    {
    }
    break ;
  case GALGAS_optionalHiddenBinding::kEnum_binding:
    {
      const cEnumAssociatedValues_optionalHiddenBinding_binding * extractPtr_72618 = (const cEnumAssociatedValues_optionalHiddenBinding_binding *) (temp_1.readProperty_mOptionalHiddenBinding ().unsafePointer ()) ;
      const GALGAS_abstractBooleanMultipleBindingExpressionAST extractedValue_72074_hiddenBindingExpression = extractPtr_72618->mAssociatedValue0 ;
      GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_72376 ;
      GALGAS_typeKind var_type_72402 ;
      GALGAS_location var_errorLocation_72437 ;
      callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_72074_hiddenBindingExpression.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_hiddenExpression_72376, var_type_72402, var_errorLocation_72437, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1695)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_type_72402.getter_isBoolType (SOURCE_FILE ("auto-layout-view.ggs", 1705)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1705)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_errorLocation_72437, GALGAS_string ("expression is not boolean"), fixItArray3  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1706)) ;
        }
      }
      var_multipleBindingGenerationList_71972.addAssign_operation (GALGAS_string ("hidden"), var_hiddenExpression_72376  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1708)) ;
    }
    break ;
  }
  const GALGAS_astVSplitViewInstructionDeclaration temp_4 = this ;
  cEnumerator_astViewInstructionList enumerator_72643 (temp_4.readProperty_mInstructionList (), kENUMERATION_UP) ;
  while (enumerator_72643.hasCurrentObject ()) {
    GALGAS_abstractViewInstructionGeneration var_generatedInstruction_73075 ;
    callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) enumerator_72643.current_mInstruction (HERE).ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_generatedInstruction_73075, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1713)) ;
    var_instructionList_71434.addAssign_operation (var_generatedInstruction_73075  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1728)) ;
    enumerator_72643.gotoNextObject () ;
  }
  outArgument_outInstruction = GALGAS_vSplitViewInstructionGeneration::constructor_new (var_funcCallList_71891, var_instructionList_71434, var_multipleBindingGenerationList_71972  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1730)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@astVStackViewInstructionDeclaration generateViewCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_astVStackViewInstructionDeclaration::method_generateViewCode (const GALGAS_autoLayoutViewDeclarationMap constinArgument_inViewDeclarationMap,
                                                                        const GALGAS_bool constinArgument_inPreferences,
                                                                        const GALGAS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                        const GALGAS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                                        const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                        const GALGAS_propertyMap constinArgument_inObservablePropertyMap,
                                                                        const GALGAS_actionMap constinArgument_inActionMap,
                                                                        const GALGAS_string constinArgument_inReceiverSwiftTypeName,
                                                                        const GALGAS_classMap constinArgument_inClassMap,
                                                                        GALGAS_implicitViewFunctionGenerationList & ioArgument_ioImplicitViewFunctionGenerationList,
                                                                        GALGAS_autoLayoutConfiguratorMap & ioArgument_ioConfiguratorMap,
                                                                        GALGAS_autoLayoutOutletMap & ioArgument_ioOutletMap,
                                                                        GALGAS_abstractViewInstructionGeneration & outArgument_outInstruction,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutViewInstructionGenerationList var_instructionList_74382 = GALGAS_autoLayoutViewInstructionGenerationList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 1749)) ;
  GALGAS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_74883 ;
  const GALGAS_astVStackViewInstructionDeclaration temp_0 = this ;
  extensionMethod_checkViewFunctionCallList (temp_0.readProperty_mFunctionCallList (), constinArgument_inSemanticContext.readProperty_mAutoLayoutVStackFunctionMap (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_74883, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1750)) ;
  GALGAS_autoLayoutMultipleBindingGenerationList var_multipleBindingGenerationList_74964 = GALGAS_autoLayoutMultipleBindingGenerationList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 1766)) ;
  const GALGAS_astVStackViewInstructionDeclaration temp_1 = this ;
  switch (temp_1.readProperty_mOptionalHiddenBinding ().enumValue ()) {
  case GALGAS_optionalHiddenBinding::kNotBuilt:
    break ;
  case GALGAS_optionalHiddenBinding::kEnum_noBinding:
    {
    }
    break ;
  case GALGAS_optionalHiddenBinding::kEnum_binding:
    {
      const cEnumAssociatedValues_optionalHiddenBinding_binding * extractPtr_75610 = (const cEnumAssociatedValues_optionalHiddenBinding_binding *) (temp_1.readProperty_mOptionalHiddenBinding ().unsafePointer ()) ;
      const GALGAS_abstractBooleanMultipleBindingExpressionAST extractedValue_75066_hiddenBindingExpression = extractPtr_75610->mAssociatedValue0 ;
      GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_75368 ;
      GALGAS_typeKind var_type_75394 ;
      GALGAS_location var_errorLocation_75429 ;
      callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_75066_hiddenBindingExpression.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_hiddenExpression_75368, var_type_75394, var_errorLocation_75429, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1770)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_type_75394.getter_isBoolType (SOURCE_FILE ("auto-layout-view.ggs", 1780)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1780)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_errorLocation_75429, GALGAS_string ("expression is not boolean"), fixItArray3  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1781)) ;
        }
      }
      var_multipleBindingGenerationList_74964.addAssign_operation (GALGAS_string ("hidden"), var_hiddenExpression_75368  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1783)) ;
    }
    break ;
  }
  const GALGAS_astVStackViewInstructionDeclaration temp_4 = this ;
  cEnumerator_astViewInstructionList enumerator_75635 (temp_4.readProperty_mInstructionList (), kENUMERATION_UP) ;
  while (enumerator_75635.hasCurrentObject ()) {
    GALGAS_abstractViewInstructionGeneration var_generatedInstruction_76067 ;
    callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) enumerator_75635.current_mInstruction (HERE).ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_generatedInstruction_76067, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1788)) ;
    var_instructionList_74382.addAssign_operation (var_generatedInstruction_76067  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1803)) ;
    enumerator_75635.gotoNextObject () ;
  }
  outArgument_outInstruction = GALGAS_vStackViewInstructionGeneration::constructor_new (var_funcCallList_74883, var_instructionList_74382, var_multipleBindingGenerationList_74964  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1805)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@astStackViewReferenceInstructionDeclaration generateViewCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_astStackViewReferenceInstructionDeclaration::method_generateViewCode (const GALGAS_autoLayoutViewDeclarationMap /* constinArgument_inViewDeclarationMap */,
                                                                                const GALGAS_bool /* constinArgument_inPreferences */,
                                                                                const GALGAS_propertyMap /* constinArgument_inRootObservablePropertyMap */,
                                                                                const GALGAS_propertyMap /* constinArgument_inPreferencesPropertyMap */,
                                                                                const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                                                const GALGAS_propertyMap /* constinArgument_inObservablePropertyMap */,
                                                                                const GALGAS_actionMap /* constinArgument_inActionMap */,
                                                                                const GALGAS_string /* constinArgument_inReceiverSwiftTypeName */,
                                                                                const GALGAS_classMap /* constinArgument_inClassMap */,
                                                                                GALGAS_implicitViewFunctionGenerationList & /* ioArgument_ioImplicitViewFunctionGenerationList */,
                                                                                GALGAS_autoLayoutConfiguratorMap & /* ioArgument_ioConfiguratorMap */,
                                                                                GALGAS_autoLayoutOutletMap & /* ioArgument_ioOutletMap */,
                                                                                GALGAS_abstractViewInstructionGeneration & outArgument_outInstruction,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_astStackViewReferenceInstructionDeclaration temp_0 = this ;
  outArgument_outInstruction = GALGAS_stackViewReferenceInstructionGeneration::constructor_new (temp_0.readProperty_mStackViewName ().readProperty_string ()  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1824)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@newHorizontalStackViewGeneration generate'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_newHorizontalStackViewGeneration::getter_generate (const GALGAS_bool /* constinArgument_inPreferences */,
                                                                      const GALGAS_string constinArgument_inViewName,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("  let ").add_operation (constinArgument_inViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2022)).add_operation (GALGAS_string (" : AutoLayoutBase_NSStackView = AutoLayoutHorizontalStackView ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2022)) ;
  const GALGAS_newHorizontalStackViewGeneration temp_0 = this ;
  extensionMethod_generate (temp_0.readProperty_mFuncCallList (), GALGAS_string ("    "), result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2023)) ;
  result_result.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2024)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@newVerticalStackViewGeneration generate'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_newVerticalStackViewGeneration::getter_generate (const GALGAS_bool /* constinArgument_inPreferences */,
                                                                    const GALGAS_string constinArgument_inViewName,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("  let ").add_operation (constinArgument_inViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2032)).add_operation (GALGAS_string (" : AutoLayoutBase_NSStackView = AutoLayoutVerticalStackView ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2032)) ;
  const GALGAS_newVerticalStackViewGeneration temp_0 = this ;
  extensionMethod_generate (temp_0.readProperty_mFuncCallList (), GALGAS_string ("    "), result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2033)) ;
  result_result.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2034)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedHorizontalViewGeneration generate'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_computedHorizontalViewGeneration::getter_generate (const GALGAS_bool constinArgument_inPreferences,
                                                                      const GALGAS_string constinArgument_inViewName,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("  lazy final var ").add_operation (constinArgument_inViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2042)).add_operation (GALGAS_string (" : AutoLayoutHorizontalStackView = {\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2042)) ;
  result_result.plusAssign_operation(GALGAS_string ("    let hStackView = AutoLayoutHorizontalStackView ()\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2043)) ;
  const GALGAS_computedHorizontalViewGeneration temp_0 = this ;
  extensionMethod_generate (temp_0.readProperty_mFuncCallList (), GALGAS_string ("    "), result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2044)) ;
  const GALGAS_computedHorizontalViewGeneration temp_1 = this ;
  cEnumerator_autoLayoutViewInstructionGenerationList enumerator_87577 (temp_1.readProperty_mInstructionList (), kENUMERATION_UP) ;
  GALGAS_uint index_87564 ((uint32_t) 0) ;
  while (enumerator_87577.hasCurrentObject ()) {
    GALGAS_string var_name_87627 = GALGAS_string ("view_").add_operation (index_87564.getter_string (SOURCE_FILE ("auto-layout-view.ggs", 2046)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2046)) ;
    result_result.plusAssign_operation(callExtensionGetter_generate ((const cPtr_abstractViewInstructionGeneration *) enumerator_87577.current_mInstruction (HERE).ptr (), constinArgument_inPreferences, var_name_87627, GALGAS_string ("    "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2047)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2047)) ;
    result_result.plusAssign_operation(GALGAS_string ("    hStackView.appendView (").add_operation (var_name_87627, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2048)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2048)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2048)) ;
    enumerator_87577.gotoNextObject () ;
    index_87564.increment_operation (inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2045)) ;
  }
  result_result.plusAssign_operation(GALGAS_string ("    return hStackView\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2050)) ;
  result_result.plusAssign_operation(GALGAS_string ("  } ()\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2051)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedVerticalViewGeneration generate'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_computedVerticalViewGeneration::getter_generate (const GALGAS_bool constinArgument_inPreferences,
                                                                    const GALGAS_string constinArgument_inViewName,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("  lazy final var ").add_operation (constinArgument_inViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2059)).add_operation (GALGAS_string (" : AutoLayoutVerticalStackView = {\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2059)) ;
  result_result.plusAssign_operation(GALGAS_string ("    let vStackView = AutoLayoutVerticalStackView ()\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2060)) ;
  const GALGAS_computedVerticalViewGeneration temp_0 = this ;
  extensionMethod_generate (temp_0.readProperty_mFuncCallList (), GALGAS_string ("    "), result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2061)) ;
  const GALGAS_computedVerticalViewGeneration temp_1 = this ;
  cEnumerator_autoLayoutViewInstructionGenerationList enumerator_88368 (temp_1.readProperty_mInstructionList (), kENUMERATION_UP) ;
  GALGAS_uint index_88355 ((uint32_t) 0) ;
  while (enumerator_88368.hasCurrentObject ()) {
    GALGAS_string var_name_88418 = GALGAS_string ("view_").add_operation (index_88355.getter_string (SOURCE_FILE ("auto-layout-view.ggs", 2063)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2063)) ;
    result_result.plusAssign_operation(callExtensionGetter_generate ((const cPtr_abstractViewInstructionGeneration *) enumerator_88368.current_mInstruction (HERE).ptr (), constinArgument_inPreferences, var_name_88418, GALGAS_string ("    "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2064)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2064)) ;
    result_result.plusAssign_operation(GALGAS_string ("    vStackView.appendView (").add_operation (var_name_88418, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2065)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2065)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2065)) ;
    enumerator_88368.gotoNextObject () ;
    index_88355.increment_operation (inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2062)) ;
  }
  result_result.plusAssign_operation(GALGAS_string ("    return vStackView\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2067)) ;
  result_result.plusAssign_operation(GALGAS_string ("  } ()\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2068)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutSpaceViewInstructionGeneration generate'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_autoLayoutSpaceViewInstructionGeneration::getter_generate (const GALGAS_bool /* constinArgument_inPreferences */,
                                                                              const GALGAS_string constinArgument_inName,
                                                                              const GALGAS_string constinArgument_inIndentation,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GALGAS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2084)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2084)).add_operation (GALGAS_string (" = AutoLayoutFlexibleSpace ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2084)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutSeparatorInstructionGeneration generate'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_autoLayoutSeparatorInstructionGeneration::getter_generate (const GALGAS_bool /* constinArgument_inPreferences */,
                                                                              const GALGAS_string constinArgument_inName,
                                                                              const GALGAS_string constinArgument_inIndentation,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_autoLayoutSeparatorInstructionGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_horizontal ().boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = constinArgument_inIndentation.add_operation (GALGAS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2094)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2094)).add_operation (GALGAS_string (" = AutoLayoutHorizontalStackView.VerticalSeparator ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2094)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = constinArgument_inIndentation.add_operation (GALGAS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2096)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2096)).add_operation (GALGAS_string (" = AutoLayoutVerticalStackView.HorizontalSeparator ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2096)) ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutLocalViewInstructionGeneration generate'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_autoLayoutLocalViewInstructionGeneration::getter_generate (const GALGAS_bool /* constinArgument_inPreferences */,
                                                                              const GALGAS_string constinArgument_inName,
                                                                              const GALGAS_string constinArgument_inIndentation,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_autoLayoutLocalViewInstructionGeneration temp_0 = this ;
  result_result = constinArgument_inIndentation.add_operation (GALGAS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2106)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2106)).add_operation (GALGAS_string (" = self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2106)).add_operation (temp_0.readProperty_mLocalView (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2106)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2106)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutComputedViewInstructionGeneration generate'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_autoLayoutComputedViewInstructionGeneration::getter_generate (const GALGAS_bool constinArgument_inPreferences,
                                                                                 const GALGAS_string constinArgument_inName,
                                                                                 const GALGAS_string constinArgument_inIndentation,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_autoLayoutComputedViewInstructionGeneration temp_0 = this ;
  result_result = constinArgument_inIndentation.add_operation (GALGAS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2115)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2115)).add_operation (GALGAS_string (" = AutoLayout"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2115)).add_operation (temp_0.readProperty_mAutoLayoutViewClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2115)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2115)) ;
  const GALGAS_autoLayoutComputedViewInstructionGeneration temp_1 = this ;
  cEnumerator_autoLayoutViewInstructionGenerationParameterList enumerator_91001 (temp_1.readProperty_mParameterList (), kENUMERATION_UP) ;
  while (enumerator_91001.hasCurrentObject ()) {
    result_result.plusAssign_operation(enumerator_91001.current (HERE).readProperty_mParameterName ().add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2118)).add_operation (enumerator_91001.current (HERE).readProperty_mParameterValue (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2118)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2118)) ;
    if (enumerator_91001.hasNextObject ()) {
      result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2120)) ;
    }
    enumerator_91001.gotoNextObject () ;
  }
  result_result.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2122)) ;
  const GALGAS_autoLayoutComputedViewInstructionGeneration temp_2 = this ;
  extensionMethod_generate (temp_2.readProperty_mFunctionCallList (), constinArgument_inIndentation, result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2123)) ;
  const GALGAS_autoLayoutComputedViewInstructionGeneration temp_3 = this ;
  cEnumerator_autoLayoutRegularBindingsGenerationList enumerator_91245 (temp_3.readProperty_mRegularBindingsGenerationList (), kENUMERATION_UP) ;
  while (enumerator_91245.hasCurrentObject ()) {
    result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2125)).add_operation (enumerator_91245.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2125)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2125)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2125)) ;
    cEnumerator_boundObjectList enumerator_91379 (enumerator_91245.current_mBoundObjectList (HERE), kENUMERATION_UP) ;
    while (enumerator_91379.hasCurrentObject ()) {
      result_result.plusAssign_operation(enumerator_91379.current_mBoundObjectString (HERE), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2127)) ;
      if (enumerator_91379.hasNextObject ()) {
        result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2128)) ;
      }
      enumerator_91379.gotoNextObject () ;
    }
    result_result.plusAssign_operation(enumerator_91245.current_mBindingOptionsString (HERE).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2130)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2130)) ;
    enumerator_91245.gotoNextObject () ;
  }
  const GALGAS_autoLayoutComputedViewInstructionGeneration temp_4 = this ;
  cEnumerator_autoLayoutMultipleBindingGenerationList enumerator_91545 (temp_4.readProperty_mMultipleBindingGenerationList (), kENUMERATION_UP) ;
  while (enumerator_91545.hasCurrentObject ()) {
    result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2133)).add_operation (enumerator_91545.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2133)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2133)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_91545.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2133)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2133)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2133)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2133)) ;
    enumerator_91545.gotoNextObject () ;
  }
  const GALGAS_autoLayoutComputedViewInstructionGeneration temp_5 = this ;
  switch (temp_5.readProperty_mRunBindingGeneration ().enumValue ()) {
  case GALGAS_autolayoutRunBindingForGeneration::kNotBuilt:
    break ;
  case GALGAS_autolayoutRunBindingForGeneration::kEnum_none:
    {
    }
    break ;
  case GALGAS_autolayoutRunBindingForGeneration::kEnum_run:
    {
      const cEnumAssociatedValues_autolayoutRunBindingForGeneration_run * extractPtr_92055 = (const cEnumAssociatedValues_autolayoutRunBindingForGeneration_run *) (temp_5.readProperty_mRunBindingGeneration ().unsafePointer ()) ;
      const GALGAS_string extractedValue_91767_targetName = extractPtr_92055->mAssociatedValue0 ;
      const GALGAS_string extractedValue_91778_actionName = extractPtr_92055->mAssociatedValue1 ;
      const GALGAS_string extractedValue_91793_targetTypeName = extractPtr_92055->mAssociatedValue2 ;
      result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("  .bind_run (\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2138)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2138)) ;
      result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("    target: "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2139)).add_operation (extractedValue_91767_targetName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2139)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2139)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2139)) ;
      result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("    selector: #selector ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2140)).add_operation (extractedValue_91793_targetTypeName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2140)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2140)).add_operation (extractedValue_91778_actionName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2140)).add_operation (GALGAS_string (" (_:))\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2140)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2140)) ;
      result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("  )\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2141)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2141)) ;
    }
    break ;
  }
  const GALGAS_autoLayoutComputedViewInstructionGeneration temp_6 = this ;
  switch (temp_6.readProperty_mEBViewGraphicControllerBindingGeneration ().enumValue ()) {
  case GALGAS_autoLayoutViewGraphicControllerBindingGeneration::kNotBuilt:
    break ;
  case GALGAS_autoLayoutViewGraphicControllerBindingGeneration::kEnum_none:
    {
    }
    break ;
  case GALGAS_autoLayoutViewGraphicControllerBindingGeneration::kEnum_binding:
    {
      const cEnumAssociatedValues_autoLayoutViewGraphicControllerBindingGeneration_binding * extractPtr_92256 = (const cEnumAssociatedValues_autoLayoutViewGraphicControllerBindingGeneration_binding *) (temp_6.readProperty_mEBViewGraphicControllerBindingGeneration ().unsafePointer ()) ;
      const GALGAS_string extractedValue_92162_controllerName = extractPtr_92256->mAssociatedValue0 ;
      result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("  .bind_graphic_controller (self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2146)).add_operation (extractedValue_92162_controllerName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2146)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2146)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2146)) ;
    }
    break ;
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GALGAS_autoLayoutComputedViewInstructionGeneration temp_8 = this ;
    test_7 = GALGAS_bool (kIsNotEqual, temp_8.readProperty_mTableViewBindingGeneration ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      GALGAS_string temp_9 ;
      const enumGalgasBool test_10 = constinArgument_inPreferences.boolEnum () ;
      if (kBoolTrue == test_10) {
        temp_9 = GALGAS_string ("preferences_") ;
      }else if (kBoolFalse == test_10) {
        temp_9 = GALGAS_string ("self.") ;
      }
      GALGAS_string var_prefix_92326 = temp_9 ;
      const GALGAS_autoLayoutComputedViewInstructionGeneration temp_11 = this ;
      result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (var_prefix_92326, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2150)).add_operation (temp_11.readProperty_mTableViewBindingGeneration (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2150)).add_operation (GALGAS_string (".bind_tableView ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2150)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2150)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2150)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2150)) ;
    }
  }
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    const GALGAS_autoLayoutComputedViewInstructionGeneration temp_13 = this ;
    test_12 = GALGAS_bool (kIsNotEqual, temp_13.readProperty_mOutletName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_12) {
      const GALGAS_autoLayoutComputedViewInstructionGeneration temp_14 = this ;
      result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2153)).add_operation (temp_14.readProperty_mOutletName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2153)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2153)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2153)).add_operation (GALGAS_string (" // Outlet\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2153)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2153)) ;
    }
  }
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    const GALGAS_autoLayoutComputedViewInstructionGeneration temp_16 = this ;
    test_15 = GALGAS_bool (kIsNotEqual, temp_16.readProperty_mConfiguratorName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_15) {
      const GALGAS_autoLayoutComputedViewInstructionGeneration temp_17 = this ;
      result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("self.configure_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2156)).add_operation (temp_17.readProperty_mConfiguratorName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2156)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2156)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2156)).add_operation (GALGAS_string (") // Configurator\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2156)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2156)) ;
    }
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@hStackViewInstructionGeneration generate'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_hStackViewInstructionGeneration::getter_generate (const GALGAS_bool constinArgument_inPreferences,
                                                                     const GALGAS_string constinArgument_inName,
                                                                     const GALGAS_string constinArgument_inIndentation,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GALGAS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2166)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2166)).add_operation (GALGAS_string (" = AutoLayoutHorizontalStackView ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2166)) ;
  const GALGAS_hStackViewInstructionGeneration temp_0 = this ;
  extensionMethod_generate (temp_0.readProperty_mFuncCallList (), constinArgument_inIndentation, result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2167)) ;
  const GALGAS_hStackViewInstructionGeneration temp_1 = this ;
  cEnumerator_autoLayoutMultipleBindingGenerationList enumerator_93305 (temp_1.readProperty_mMultipleBindingGenerationList (), kENUMERATION_UP) ;
  while (enumerator_93305.hasCurrentObject ()) {
    result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2169)).add_operation (enumerator_93305.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2169)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2169)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_93305.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2169)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2169)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2169)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2169)) ;
    enumerator_93305.gotoNextObject () ;
  }
  result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("do{\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2171)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2171)) ;
  GALGAS_string var_indentation_93508 = constinArgument_inIndentation.add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2172)) ;
  const GALGAS_hStackViewInstructionGeneration temp_2 = this ;
  cEnumerator_autoLayoutViewInstructionGenerationList enumerator_93550 (temp_2.readProperty_mInstructionList (), kENUMERATION_UP) ;
  GALGAS_uint index_93537 ((uint32_t) 0) ;
  while (enumerator_93550.hasCurrentObject ()) {
    GALGAS_string var_name_93601 = constinArgument_inName.add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2174)).add_operation (index_93537.getter_string (SOURCE_FILE ("auto-layout-view.ggs", 2174)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2174)) ;
    result_result.plusAssign_operation(callExtensionGetter_generate ((const cPtr_abstractViewInstructionGeneration *) enumerator_93550.current_mInstruction (HERE).ptr (), constinArgument_inPreferences, var_name_93601, var_indentation_93508, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2175)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2175)) ;
    result_result.plusAssign_operation(var_indentation_93508.add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2176)).add_operation (GALGAS_string (".appendView ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2176)).add_operation (var_name_93601, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2176)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2176)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2176)) ;
    enumerator_93550.gotoNextObject () ;
    index_93537.increment_operation (inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2173)) ;
  }
  result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2178)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2178)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@hSplitViewInstructionGeneration generate'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_hSplitViewInstructionGeneration::getter_generate (const GALGAS_bool constinArgument_inPreferences,
                                                                     const GALGAS_string constinArgument_inName,
                                                                     const GALGAS_string constinArgument_inIndentation,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GALGAS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2187)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2187)).add_operation (GALGAS_string (" = AutoLayoutHorizontalSplitView ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2187)) ;
  const GALGAS_hSplitViewInstructionGeneration temp_0 = this ;
  extensionMethod_generate (temp_0.readProperty_mFuncCallList (), constinArgument_inIndentation, result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2188)) ;
  const GALGAS_hSplitViewInstructionGeneration temp_1 = this ;
  cEnumerator_autoLayoutMultipleBindingGenerationList enumerator_94330 (temp_1.readProperty_mMultipleBindingGenerationList (), kENUMERATION_UP) ;
  while (enumerator_94330.hasCurrentObject ()) {
    result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2190)).add_operation (enumerator_94330.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2190)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2190)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_94330.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2190)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2190)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2190)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2190)) ;
    enumerator_94330.gotoNextObject () ;
  }
  result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("do{\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2192)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2192)) ;
  GALGAS_string var_indentation_94533 = constinArgument_inIndentation.add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2193)) ;
  const GALGAS_hSplitViewInstructionGeneration temp_2 = this ;
  cEnumerator_autoLayoutViewInstructionGenerationList enumerator_94575 (temp_2.readProperty_mInstructionList (), kENUMERATION_UP) ;
  GALGAS_uint index_94562 ((uint32_t) 0) ;
  while (enumerator_94575.hasCurrentObject ()) {
    GALGAS_string var_name_94626 = constinArgument_inName.add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2195)).add_operation (index_94562.getter_string (SOURCE_FILE ("auto-layout-view.ggs", 2195)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2195)) ;
    result_result.plusAssign_operation(callExtensionGetter_generate ((const cPtr_abstractViewInstructionGeneration *) enumerator_94575.current_mInstruction (HERE).ptr (), constinArgument_inPreferences, var_name_94626, var_indentation_94533, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2196)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2196)) ;
    result_result.plusAssign_operation(var_indentation_94533.add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2197)).add_operation (GALGAS_string (".appendView ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2197)).add_operation (var_name_94626, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2197)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2197)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2197)) ;
    enumerator_94575.gotoNextObject () ;
    index_94562.increment_operation (inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2194)) ;
  }
  result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2199)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2199)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@vSplitViewInstructionGeneration generate'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_vSplitViewInstructionGeneration::getter_generate (const GALGAS_bool constinArgument_inPreferences,
                                                                     const GALGAS_string constinArgument_inName,
                                                                     const GALGAS_string constinArgument_inIndentation,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GALGAS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2208)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2208)).add_operation (GALGAS_string (" = AutoLayoutVerticalSplitView ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2208)) ;
  const GALGAS_vSplitViewInstructionGeneration temp_0 = this ;
  extensionMethod_generate (temp_0.readProperty_mFuncCallList (), constinArgument_inIndentation, result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2209)) ;
  const GALGAS_vSplitViewInstructionGeneration temp_1 = this ;
  cEnumerator_autoLayoutMultipleBindingGenerationList enumerator_95353 (temp_1.readProperty_mMultipleBindingGenerationList (), kENUMERATION_UP) ;
  while (enumerator_95353.hasCurrentObject ()) {
    result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2211)).add_operation (enumerator_95353.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2211)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2211)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_95353.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2211)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2211)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2211)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2211)) ;
    enumerator_95353.gotoNextObject () ;
  }
  result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("do{\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2213)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2213)) ;
  GALGAS_string var_indentation_95556 = constinArgument_inIndentation.add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2214)) ;
  const GALGAS_vSplitViewInstructionGeneration temp_2 = this ;
  cEnumerator_autoLayoutViewInstructionGenerationList enumerator_95598 (temp_2.readProperty_mInstructionList (), kENUMERATION_UP) ;
  GALGAS_uint index_95585 ((uint32_t) 0) ;
  while (enumerator_95598.hasCurrentObject ()) {
    GALGAS_string var_name_95649 = constinArgument_inName.add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2216)).add_operation (index_95585.getter_string (SOURCE_FILE ("auto-layout-view.ggs", 2216)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2216)) ;
    result_result.plusAssign_operation(callExtensionGetter_generate ((const cPtr_abstractViewInstructionGeneration *) enumerator_95598.current_mInstruction (HERE).ptr (), constinArgument_inPreferences, var_name_95649, var_indentation_95556, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2217)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2217)) ;
    result_result.plusAssign_operation(var_indentation_95556.add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2218)).add_operation (GALGAS_string (".appendView ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2218)).add_operation (var_name_95649, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2218)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2218)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2218)) ;
    enumerator_95598.gotoNextObject () ;
    index_95585.increment_operation (inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2215)) ;
  }
  result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2220)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2220)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@vStackViewInstructionGeneration generate'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_vStackViewInstructionGeneration::getter_generate (const GALGAS_bool constinArgument_inPreferences,
                                                                     const GALGAS_string constinArgument_inName,
                                                                     const GALGAS_string constinArgument_inIndentation,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GALGAS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2229)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2229)).add_operation (GALGAS_string (" = AutoLayoutVerticalStackView ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2229)) ;
  const GALGAS_vStackViewInstructionGeneration temp_0 = this ;
  extensionMethod_generate (temp_0.readProperty_mFuncCallList (), constinArgument_inIndentation, result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2230)) ;
  const GALGAS_vStackViewInstructionGeneration temp_1 = this ;
  cEnumerator_autoLayoutMultipleBindingGenerationList enumerator_96376 (temp_1.readProperty_mMultipleBindingGenerationList (), kENUMERATION_UP) ;
  while (enumerator_96376.hasCurrentObject ()) {
    result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2232)).add_operation (enumerator_96376.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2232)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2232)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_96376.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2232)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2232)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2232)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2232)) ;
    enumerator_96376.gotoNextObject () ;
  }
  result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("do{\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2234)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2234)) ;
  GALGAS_string var_indentation_96579 = constinArgument_inIndentation.add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2235)) ;
  const GALGAS_vStackViewInstructionGeneration temp_2 = this ;
  cEnumerator_autoLayoutViewInstructionGenerationList enumerator_96621 (temp_2.readProperty_mInstructionList (), kENUMERATION_UP) ;
  GALGAS_uint index_96608 ((uint32_t) 0) ;
  while (enumerator_96621.hasCurrentObject ()) {
    GALGAS_string var_name_96672 = constinArgument_inName.add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2237)).add_operation (index_96608.getter_string (SOURCE_FILE ("auto-layout-view.ggs", 2237)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2237)) ;
    result_result.plusAssign_operation(callExtensionGetter_generate ((const cPtr_abstractViewInstructionGeneration *) enumerator_96621.current_mInstruction (HERE).ptr (), constinArgument_inPreferences, var_name_96672, var_indentation_96579, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2238)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2238)) ;
    result_result.plusAssign_operation(var_indentation_96579.add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2239)).add_operation (GALGAS_string (".appendView ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2239)).add_operation (var_name_96672, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2239)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2239)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2239)) ;
    enumerator_96621.gotoNextObject () ;
    index_96608.increment_operation (inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2236)) ;
  }
  result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2241)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2241)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@stackViewReferenceInstructionGeneration generate'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_stackViewReferenceInstructionGeneration::getter_generate (const GALGAS_bool /* constinArgument_inPreferences */,
                                                                             const GALGAS_string constinArgument_inName,
                                                                             const GALGAS_string constinArgument_inIndentation,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_stackViewReferenceInstructionGeneration temp_0 = this ;
  result_result = constinArgument_inIndentation.add_operation (GALGAS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2250)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2250)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2250)).add_operation (temp_0.readProperty_mStackViewName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2250)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 2250)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outletClassDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_outletClassDeclarationAST::method_enterInPrecedenceGraph (GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_outletClassDeclarationAST temp_0 = this ;
  const GALGAS_outletClassDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mClassName (), temp_1, inCompiler COMMA_SOURCE_FILE ("outlet-class.ggs", 18)) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_outletClassDeclarationAST temp_3 = this ;
    test_2 = GALGAS_bool (kIsNotEqual, temp_3.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      const GALGAS_outletClassDeclarationAST temp_4 = this ;
      const GALGAS_outletClassDeclarationAST temp_5 = this ;
      ioArgument_ioGraph.setter_addEdge (temp_4.readProperty_mClassName (), temp_5.readProperty_mSuperClassName () COMMA_SOURCE_FILE ("outlet-class.ggs", 20)) ;
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@outletClassDeclarationAST nodeKey'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_outletClassDeclarationAST::getter_nodeKey (C_Compiler */* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result_result ; // Returned variable
  const GALGAS_outletClassDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mClassName () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outletClassDeclarationAST firstAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_outletClassDeclarationAST::method_firstAnalysisPhase (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_outletClassDeclarationAST temp_1 = this ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      const GALGAS_outletClassDeclarationAST temp_2 = this ;
      const GALGAS_outletClassDeclarationAST temp_3 = this ;
      const GALGAS_outletClassDeclarationAST temp_4 = this ;
      const GALGAS_outletClassDeclarationAST temp_5 = this ;
      const GALGAS_outletClassDeclarationAST temp_6 = this ;
      const GALGAS_outletClassDeclarationAST temp_7 = this ;
      const GALGAS_outletClassDeclarationAST temp_8 = this ;
      ioArgument_ioSemanticContext.mProperty_mOutletClassMap.setter_insertKey (temp_2.readProperty_mClassName (), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("outlet-class.ggs", 106)), temp_3.readProperty_mHasRunAction (), temp_4.readProperty_mHandlesTableValueBinding (), temp_5.readProperty_mHasEnabled (), temp_6.readProperty_mHasHidden (), temp_7.readProperty_mHandlesGraphicControllerBinding (), temp_8.readProperty_mUserDefined (), inCompiler COMMA_SOURCE_FILE ("outlet-class.ggs", 104)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_bool var_hasRunAction_3840 ;
    GALGAS_bool var_handlesTableValueBinding_3876 ;
    GALGAS_bool var_hasEnabled_3898 ;
    GALGAS_bool var_hasHidden_3919 ;
    GALGAS_bool var_handlesGraphicControllerBinding_3962 ;
    const GALGAS_outletClassDeclarationAST temp_9 = this ;
    GALGAS_lstring joker_3815 ; // Joker input parameter
    GALGAS_bool joker_3970 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mOutletClassMap ().method_searchKey (temp_9.readProperty_mSuperClassName (), joker_3815, var_hasRunAction_3840, var_handlesTableValueBinding_3876, var_hasEnabled_3898, var_hasHidden_3919, var_handlesGraphicControllerBinding_3962, joker_3970, inCompiler COMMA_SOURCE_FILE ("outlet-class.ggs", 115)) ;
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      const GALGAS_outletClassDeclarationAST temp_11 = this ;
      test_10 = temp_11.readProperty_mHasRunAction ().operator_and (var_hasRunAction_3840 COMMA_SOURCE_FILE ("outlet-class.ggs", 125)).boolEnum () ;
      if (kBoolTrue == test_10) {
        const GALGAS_outletClassDeclarationAST temp_12 = this ;
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (temp_12.readProperty_mClassName ().readProperty_location (), GALGAS_string ("$run binding already defined in superclass"), fixItArray13  COMMA_SOURCE_FILE ("outlet-class.ggs", 126)) ;
      }
    }
    enumGalgasBool test_14 = kBoolTrue ;
    if (kBoolTrue == test_14) {
      const GALGAS_outletClassDeclarationAST temp_15 = this ;
      test_14 = temp_15.readProperty_mHandlesTableValueBinding ().operator_and (var_handlesTableValueBinding_3876 COMMA_SOURCE_FILE ("outlet-class.ggs", 128)).boolEnum () ;
      if (kBoolTrue == test_14) {
        const GALGAS_outletClassDeclarationAST temp_16 = this ;
        TC_Array <C_FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticError (temp_16.readProperty_mClassName ().readProperty_location (), GALGAS_string ("$tableview binding already defined in superclass"), fixItArray17  COMMA_SOURCE_FILE ("outlet-class.ggs", 129)) ;
      }
    }
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      const GALGAS_outletClassDeclarationAST temp_19 = this ;
      test_18 = temp_19.readProperty_mHasEnabled ().operator_and (var_hasEnabled_3898 COMMA_SOURCE_FILE ("outlet-class.ggs", 131)).boolEnum () ;
      if (kBoolTrue == test_18) {
        const GALGAS_outletClassDeclarationAST temp_20 = this ;
        TC_Array <C_FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (temp_20.readProperty_mClassName ().readProperty_location (), GALGAS_string ("$enabled binding already defined in superclass"), fixItArray21  COMMA_SOURCE_FILE ("outlet-class.ggs", 132)) ;
      }
    }
    enumGalgasBool test_22 = kBoolTrue ;
    if (kBoolTrue == test_22) {
      const GALGAS_outletClassDeclarationAST temp_23 = this ;
      test_22 = temp_23.readProperty_mHasHidden ().operator_and (var_hasHidden_3919 COMMA_SOURCE_FILE ("outlet-class.ggs", 134)).boolEnum () ;
      if (kBoolTrue == test_22) {
        const GALGAS_outletClassDeclarationAST temp_24 = this ;
        TC_Array <C_FixItDescription> fixItArray25 ;
        inCompiler->emitSemanticError (temp_24.readProperty_mClassName ().readProperty_location (), GALGAS_string ("$hidden binding already defined in superclass"), fixItArray25  COMMA_SOURCE_FILE ("outlet-class.ggs", 135)) ;
      }
    }
    enumGalgasBool test_26 = kBoolTrue ;
    if (kBoolTrue == test_26) {
      const GALGAS_outletClassDeclarationAST temp_27 = this ;
      test_26 = temp_27.readProperty_mHandlesGraphicControllerBinding ().operator_and (var_handlesGraphicControllerBinding_3962 COMMA_SOURCE_FILE ("outlet-class.ggs", 137)).boolEnum () ;
      if (kBoolTrue == test_26) {
        const GALGAS_outletClassDeclarationAST temp_28 = this ;
        TC_Array <C_FixItDescription> fixItArray29 ;
        inCompiler->emitSemanticError (temp_28.readProperty_mClassName ().readProperty_location (), GALGAS_string ("$graphicController binding already defined in superclass"), fixItArray29  COMMA_SOURCE_FILE ("outlet-class.ggs", 138)) ;
      }
    }
    {
    const GALGAS_outletClassDeclarationAST temp_30 = this ;
    const GALGAS_outletClassDeclarationAST temp_31 = this ;
    const GALGAS_outletClassDeclarationAST temp_32 = this ;
    const GALGAS_outletClassDeclarationAST temp_33 = this ;
    const GALGAS_outletClassDeclarationAST temp_34 = this ;
    const GALGAS_outletClassDeclarationAST temp_35 = this ;
    const GALGAS_outletClassDeclarationAST temp_36 = this ;
    const GALGAS_outletClassDeclarationAST temp_37 = this ;
    ioArgument_ioSemanticContext.mProperty_mOutletClassMap.setter_insertKey (temp_30.readProperty_mClassName (), temp_31.readProperty_mSuperClassName (), temp_32.readProperty_mHasRunAction ().operator_or (var_hasRunAction_3840 COMMA_SOURCE_FILE ("outlet-class.ggs", 143)), temp_33.readProperty_mHandlesTableValueBinding ().operator_or (var_handlesTableValueBinding_3876 COMMA_SOURCE_FILE ("outlet-class.ggs", 144)), temp_34.readProperty_mHasEnabled ().operator_or (var_hasEnabled_3898 COMMA_SOURCE_FILE ("outlet-class.ggs", 145)), temp_35.readProperty_mHasHidden ().operator_or (var_hasHidden_3919 COMMA_SOURCE_FILE ("outlet-class.ggs", 146)), temp_36.readProperty_mHandlesGraphicControllerBinding ().operator_or (var_handlesGraphicControllerBinding_3962 COMMA_SOURCE_FILE ("outlet-class.ggs", 147)), temp_37.readProperty_mUserDefined (), inCompiler COMMA_SOURCE_FILE ("outlet-class.ggs", 140)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildBindingSpecificationMap'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildBindingSpecificationMap (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                           const GALGAS_outletClassBindingSpecificationList constinArgument_inBindingSpecificationListMap,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_outletClassBindingSpecificationList enumerator_4784 (constinArgument_inBindingSpecificationListMap, kENUMERATION_UP) ;
  while (enumerator_4784.hasCurrentObject ()) {
    GALGAS_outletBindingSpecificationModelList var_outletBindingSpecificationModelList_4902 = GALGAS_outletBindingSpecificationModelList::constructor_emptyList (SOURCE_FILE ("outlet-binding-specification.ggs", 129)) ;
    cEnumerator_outletClassBindingSpecificationModelList enumerator_4962 (enumerator_4784.current_mOutletClassBindingSpecificationModelList (HERE), kENUMERATION_UP) ;
    while (enumerator_4962.hasCurrentObject ()) {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (kIsEqual, enumerator_4962.current_mModelTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string ("enum"))).boolEnum () ;
        if (kBoolTrue == test_0) {
          var_outletBindingSpecificationModelList_4902.addAssign_operation (GALGAS_typeKind::constructor_enumType (GALGAS_string::makeEmptyString (), GALGAS_enumConstantMap::constructor_emptyMap (SOURCE_FILE ("outlet-binding-specification.ggs", 133)), GALGAS_enumFuncMap::constructor_emptyMap (SOURCE_FILE ("outlet-binding-specification.ggs", 133))  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 133)), enumerator_4962.current_mModelShouldBeWritableProperty (HERE)  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 132)) ;
        }
      }
      if (kBoolFalse == test_0) {
        GALGAS_classKind var_classKind_5333 ;
        GALGAS_propertyMap joker_5335_3 ; // Joker input parameter
        GALGAS_actionMap joker_5335_2 ; // Joker input parameter
        GALGAS_propertyGenerationList joker_5335_1 ; // Joker input parameter
        ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (enumerator_4962.current_mModelTypeName (HERE), var_classKind_5333, joker_5335_3, joker_5335_2, joker_5335_1, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 136)) ;
        GALGAS_typeKind var_typeKind_5369 ;
        switch (var_classKind_5333.enumValue ()) {
        case GALGAS_classKind::kNotBuilt:
          break ;
        case GALGAS_classKind::kEnum_prefs:
          {
            TC_Array <C_FixItDescription> fixItArray1 ;
            inCompiler->emitSemanticError (enumerator_4962.current_mModelTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray1  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 140)) ;
            var_typeKind_5369.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_classKind::kEnum_atomic:
          {
            const cEnumAssociatedValues_classKind_atomic * extractPtr_5559 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_5333.unsafePointer ()) ;
            const GALGAS_typeKind extractedValue_5530_kind = extractPtr_5559->mAssociatedValue0 ;
            var_typeKind_5369 = extractedValue_5530_kind ;
          }
          break ;
        case GALGAS_classKind::kEnum_document:
          {
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (enumerator_4962.current_mModelTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray2  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 144)) ;
            var_typeKind_5369.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_classKind::kEnum_entity:
          {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (enumerator_4962.current_mModelTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray3  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 146)) ;
            var_typeKind_5369.drop () ; // Release error dropped variable
          }
          break ;
        }
        var_outletBindingSpecificationModelList_4902.addAssign_operation (var_typeKind_5369, enumerator_4962.current_mModelShouldBeWritableProperty (HERE)  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 148)) ;
      }
      enumerator_4962.gotoNextObject () ;
    }
    GALGAS_controllerBindingOptionDecoratedList var_controllerBindingOptionDecoratedList_5974 = GALGAS_controllerBindingOptionDecoratedList::constructor_emptyList (SOURCE_FILE ("outlet-binding-specification.ggs", 151)) ;
    cEnumerator_controllerBindingOptionList enumerator_6016 (enumerator_4784.current_mBindingOptionList (HERE), kENUMERATION_UP) ;
    while (enumerator_6016.hasCurrentObject ()) {
      GALGAS_classKind var_classKind_6130 ;
      GALGAS_propertyMap joker_6132_3 ; // Joker input parameter
      GALGAS_actionMap joker_6132_2 ; // Joker input parameter
      GALGAS_propertyGenerationList joker_6132_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (enumerator_6016.current_mOptionTypeName (HERE), var_classKind_6130, joker_6132_3, joker_6132_2, joker_6132_1, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 153)) ;
      GALGAS_typeKind var_typeKind_6164 ;
      switch (var_classKind_6130.enumValue ()) {
      case GALGAS_classKind::kNotBuilt:
        break ;
      case GALGAS_classKind::kEnum_prefs:
        {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_6016.current_mOptionTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray4  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 157)) ;
          var_typeKind_6164.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_classKind::kEnum_atomic:
        {
          const cEnumAssociatedValues_classKind_atomic * extractPtr_6345 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_6130.unsafePointer ()) ;
          const GALGAS_typeKind extractedValue_6318_kind = extractPtr_6345->mAssociatedValue0 ;
          var_typeKind_6164 = extractedValue_6318_kind ;
        }
        break ;
      case GALGAS_classKind::kEnum_document:
        {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (enumerator_6016.current_mOptionTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray5  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 161)) ;
          var_typeKind_6164.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_classKind::kEnum_entity:
        {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (enumerator_6016.current_mOptionTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 163)) ;
          var_typeKind_6164.drop () ; // Release error dropped variable
        }
        break ;
      }
      var_controllerBindingOptionDecoratedList_5974.addAssign_operation (var_typeKind_6164, enumerator_6016.current_mOptionName (HERE)  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 165)) ;
      enumerator_6016.gotoNextObject () ;
    }
    GALGAS_outletBindingSpecificationMap var_bindingMap_6718 ;
    GALGAS_lstring var_outletSuperClassName_6756 ;
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = ioArgument_ioSemanticContext.readProperty_mBindingSpecificationMap ().getter_hasKey (enumerator_4784.current_mOutletClassName (HERE).readProperty_string () COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 170)).boolEnum () ;
      if (kBoolTrue == test_7) {
        {
        ioArgument_ioSemanticContext.mProperty_mBindingSpecificationMap.setter_removeKey (enumerator_4784.current_mOutletClassName (HERE), var_outletSuperClassName_6756, var_bindingMap_6718, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 171)) ;
        }
      }
    }
    if (kBoolFalse == test_7) {
      var_bindingMap_6718 = GALGAS_outletBindingSpecificationMap::constructor_emptyMap (SOURCE_FILE ("outlet-binding-specification.ggs", 173)) ;
      GALGAS_bool joker_7084_6 ; // Joker input parameter
      GALGAS_bool joker_7084_5 ; // Joker input parameter
      GALGAS_bool joker_7084_4 ; // Joker input parameter
      GALGAS_bool joker_7084_3 ; // Joker input parameter
      GALGAS_bool joker_7084_2 ; // Joker input parameter
      GALGAS_bool joker_7084_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mOutletClassMap ().method_searchKey (enumerator_4784.current_mOutletClassName (HERE), var_outletSuperClassName_6756, joker_7084_6, joker_7084_5, joker_7084_4, joker_7084_3, joker_7084_2, joker_7084_1, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 174)) ;
    }
    {
    var_bindingMap_6718.setter_insertKey (enumerator_4784.current_mBindingName (HERE), var_outletBindingSpecificationModelList_4902, var_controllerBindingOptionDecoratedList_5974, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 176)) ;
    }
    {
    ioArgument_ioSemanticContext.mProperty_mBindingSpecificationMap.setter_insertKey (enumerator_4784.current_mOutletClassName (HERE), var_outletSuperClassName_6756, var_bindingMap_6718, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 181)) ;
    }
    enumerator_4784.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeOutlets'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeOutlets (const GALGAS_bool constinArgument_inPreferences,
                             const GALGAS_propertyMap constinArgument_inRootObservablePropertyMap,
                             const GALGAS_propertyMap constinArgument_inPreferencesPropertyMap,
                             const GALGAS_string /* constinArgument_inRootEntityName */,
                             const GALGAS_semanticContext constinArgument_inSemanticContext,
                             const GALGAS_outletDeclarationList constinArgument_inOutletDeclarationList,
                             const GALGAS_propertyMap constinArgument_inObservablePropertyMap,
                             const GALGAS_actionMap constinArgument_inActionMap,
                             const GALGAS_string constinArgument_inReceiverSwiftTypeName,
                             GALGAS_generationStruct & ioArgument_ioGeneration,
                             GALGAS_regularBindingsGenerationList & outArgument_outRegularBindingsGenerationList,
                             GALGAS_multipleBindingGenerationList & outArgument_outMultipleBindingGenerationList,
                             GALGAS_actionBindingListForGeneration & outArgument_outTargetActionList,
                             GALGAS_decoratedOutletMap & outArgument_outletMap,
                             GALGAS_tableViewBindingGenerationList & outArgument_outTableViewBindingGenerationList,
                             GALGAS_ebViewGraphicControllerBindingGenerationList & outArgument_outEBViewGraphicControllerBindingGenerationList,
                             C_Compiler * inCompiler
                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRegularBindingsGenerationList.drop () ; // Release 'out' argument
  outArgument_outMultipleBindingGenerationList.drop () ; // Release 'out' argument
  outArgument_outTargetActionList.drop () ; // Release 'out' argument
  outArgument_outletMap.drop () ; // Release 'out' argument
  outArgument_outTableViewBindingGenerationList.drop () ; // Release 'out' argument
  outArgument_outEBViewGraphicControllerBindingGenerationList.drop () ; // Release 'out' argument
  outArgument_outRegularBindingsGenerationList = GALGAS_regularBindingsGenerationList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.ggs", 201)) ;
  outArgument_outTargetActionList = GALGAS_actionBindingListForGeneration::constructor_emptyList (SOURCE_FILE ("outlet-declaration.ggs", 202)) ;
  outArgument_outMultipleBindingGenerationList = GALGAS_multipleBindingGenerationList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.ggs", 203)) ;
  outArgument_outletMap = GALGAS_decoratedOutletMap::constructor_emptyMap (SOURCE_FILE ("outlet-declaration.ggs", 204)) ;
  outArgument_outTableViewBindingGenerationList = GALGAS_tableViewBindingGenerationList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.ggs", 205)) ;
  outArgument_outEBViewGraphicControllerBindingGenerationList = GALGAS_ebViewGraphicControllerBindingGenerationList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.ggs", 206)) ;
  cEnumerator_outletDeclarationList enumerator_8343 (constinArgument_inOutletDeclarationList, kENUMERATION_UP) ;
  while (enumerator_8343.hasCurrentObject ()) {
    {
    outArgument_outletMap.setter_insertKey (enumerator_8343.current_mOutletName (HERE), enumerator_8343.current_mOutletTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 208)) ;
    }
    GALGAS_bool var_handlesRunAction_8575 ;
    GALGAS_bool var_handlesTableViewBinding_8616 ;
    GALGAS_bool var_handlesEnabledBinding_8655 ;
    GALGAS_bool var_handlesHiddenBinding_8693 ;
    GALGAS_bool var_handleGraphicControllerBinding_8741 ;
    GALGAS_bool var_outletClassIsUserDefined_8783 ;
    GALGAS_lstring joker_8540 ; // Joker input parameter
    constinArgument_inSemanticContext.readProperty_mOutletClassMap ().method_searchKey (enumerator_8343.current_mOutletTypeName (HERE), joker_8540, var_handlesRunAction_8575, var_handlesTableViewBinding_8616, var_handlesEnabledBinding_8655, var_handlesHiddenBinding_8693, var_handleGraphicControllerBinding_8741, var_outletClassIsUserDefined_8783, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 209)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = var_outletClassIsUserDefined_8783.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 219)).boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioGeneration.mProperty_mNeededOutletClasses.addAssign_operation (enumerator_8343.current_mOutletTypeName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 220)) ;
      }
    }
    switch (enumerator_8343.current_mGraphicController (HERE).enumValue ()) {
    case GALGAS_graphicController::kNotBuilt:
      break ;
    case GALGAS_graphicController::kEnum_none:
      {
      }
      break ;
    case GALGAS_graphicController::kEnum_defined:
      {
        const cEnumAssociatedValues_graphicController_defined * extractPtr_11249 = (const cEnumAssociatedValues_graphicController_defined *) (enumerator_8343.current_mGraphicController (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_9033_controllerName = extractPtr_11249->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_9055_propertyName = extractPtr_11249->mAssociatedValue1 ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_handleGraphicControllerBinding_8741.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 226)).boolEnum () ;
          if (kBoolTrue == test_1) {
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (enumerator_8343.current_mOutletTypeName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_8343.current_mOutletTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 227)).add_operation (GALGAS_string ("' type does not handle the $graphicController binding"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 227)), fixItArray2  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 227)) ;
          }
        }
        if (kBoolFalse == test_1) {
          GALGAS_propertyKind var_kind_9351 ;
          GALGAS_actionMap joker_9363_2 ; // Joker input parameter
          GALGAS_bool joker_9363_1 ; // Joker input parameter
          constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_9033_controllerName, var_kind_9351, joker_9363_2, joker_9363_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 229)) ;
          switch (var_kind_9351.enumValue ()) {
          case GALGAS_propertyKind::kNotBuilt:
            break ;
          case GALGAS_propertyKind::kEnum_property:
            {
              TC_Array <C_FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (extractedValue_9033_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray3  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 236)) ;
            }
            break ;
          case GALGAS_propertyKind::kEnum_toMany:
            {
              TC_Array <C_FixItDescription> fixItArray4 ;
              inCompiler->emitSemanticError (extractedValue_9033_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray4  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 238)) ;
            }
            break ;
          case GALGAS_propertyKind::kEnum_toOne:
            {
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (extractedValue_9033_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray5  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 240)) ;
            }
            break ;
          case GALGAS_propertyKind::kEnum_arrayController:
            {
              const cEnumAssociatedValues_propertyKind_arrayController * extractPtr_10998 = (const cEnumAssociatedValues_propertyKind_arrayController *) (var_kind_9351.unsafePointer ()) ;
              const GALGAS_lstring extractedValue_9762_entityName = extractPtr_10998->mAssociatedValue0 ;
              const GALGAS_bool extractedValue_9770_graphic = extractPtr_10998->mAssociatedValue1 ;
              enumGalgasBool test_6 = kBoolTrue ;
              if (kBoolTrue == test_6) {
                test_6 = GALGAS_bool (kIsEqual, extractedValue_9055_propertyName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_6) {
                  enumGalgasBool test_7 = kBoolTrue ;
                  if (kBoolTrue == test_7) {
                    test_7 = extractedValue_9770_graphic.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 243)).boolEnum () ;
                    if (kBoolTrue == test_7) {
                      TC_Array <C_FixItDescription> fixItArray8 ;
                      inCompiler->emitSemanticError (extractedValue_9033_controllerName.readProperty_location (), GALGAS_string ("the controlled entity (").add_operation (extractedValue_9762_entityName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 244)).add_operation (GALGAS_string (") should be a graphic entity"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 244)), fixItArray8  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 244)) ;
                    }
                  }
                }
              }
              if (kBoolFalse == test_6) {
                GALGAS_propertyMap var_observablePropertyMap_10124 ;
                GALGAS_classKind joker_10082 ; // Joker input parameter
                GALGAS_actionMap joker_10140_2 ; // Joker input parameter
                GALGAS_propertyGenerationList joker_10140_1 ; // Joker input parameter
                constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_9762_entityName, joker_10082, var_observablePropertyMap_10124, joker_10140_2, joker_10140_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 247)) ;
                GALGAS_propertyKind var_propertyKind_10233 ;
                GALGAS_actionMap joker_10235_2 ; // Joker input parameter
                GALGAS_bool joker_10235_1 ; // Joker input parameter
                var_observablePropertyMap_10124.method_searchKey (extractedValue_9055_propertyName, var_propertyKind_10233, joker_10235_2, joker_10235_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 253)) ;
                switch (var_propertyKind_10233.enumValue ()) {
                case GALGAS_propertyKind::kNotBuilt:
                  break ;
                case GALGAS_propertyKind::kEnum_property:
                  {
                    TC_Array <C_FixItDescription> fixItArray9 ;
                    inCompiler->emitSemanticError (extractedValue_9033_controllerName.readProperty_location (), GALGAS_string ("the bound model should be a toMany property"), fixItArray9  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 256)) ;
                  }
                  break ;
                case GALGAS_propertyKind::kEnum_toMany:
                  {
                    const cEnumAssociatedValues_propertyKind_toMany * extractPtr_10607 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_propertyKind_10233.unsafePointer ()) ;
                    const GALGAS_lstring extractedValue_10424_kEntityName = extractPtr_10607->mAssociatedValue0 ;
                    const GALGAS_bool extractedValue_10436_isGraphic = extractPtr_10607->mAssociatedValue2 ;
                    enumGalgasBool test_10 = kBoolTrue ;
                    if (kBoolTrue == test_10) {
                      test_10 = extractedValue_10436_isGraphic.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 258)).boolEnum () ;
                      if (kBoolTrue == test_10) {
                        TC_Array <C_FixItDescription> fixItArray11 ;
                        inCompiler->emitSemanticError (extractedValue_9033_controllerName.readProperty_location (), GALGAS_string ("the controlled entity (").add_operation (extractedValue_10424_kEntityName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 259)).add_operation (GALGAS_string (") should be a graphic entity"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 259)), fixItArray11  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 259)) ;
                      }
                    }
                  }
                  break ;
                case GALGAS_propertyKind::kEnum_toOne:
                  {
                    TC_Array <C_FixItDescription> fixItArray12 ;
                    inCompiler->emitSemanticError (extractedValue_9033_controllerName.readProperty_location (), GALGAS_string ("the bound model should be a toMany property"), fixItArray12  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 262)) ;
                  }
                  break ;
                case GALGAS_propertyKind::kEnum_arrayController:
                  {
                    TC_Array <C_FixItDescription> fixItArray13 ;
                    inCompiler->emitSemanticError (extractedValue_9033_controllerName.readProperty_location (), GALGAS_string ("the bound model should be a toMany property"), fixItArray13  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 264)) ;
                  }
                  break ;
                case GALGAS_propertyKind::kEnum_selectionController:
                  {
                    TC_Array <C_FixItDescription> fixItArray14 ;
                    inCompiler->emitSemanticError (extractedValue_9033_controllerName.readProperty_location (), GALGAS_string ("the bound model should be a toMany property"), fixItArray14  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 266)) ;
                  }
                  break ;
                }
              }
            }
            break ;
          case GALGAS_propertyKind::kEnum_selectionController:
            {
              TC_Array <C_FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (extractedValue_9033_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray15  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 270)) ;
            }
            break ;
          }
          outArgument_outEBViewGraphicControllerBindingGenerationList.addAssign_operation (enumerator_8343.current_mOutletName (HERE).readProperty_string (), extractedValue_9033_controllerName.readProperty_string ()  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 272)) ;
        }
      }
      break ;
    }
    switch (enumerator_8343.current_mTableValueBindingDescriptor (HERE).enumValue ()) {
    case GALGAS_tableValueBinding::kNotBuilt:
      break ;
    case GALGAS_tableValueBinding::kEnum_noTableValueBinding:
      {
      }
      break ;
    case GALGAS_tableValueBinding::kEnum_tableValueBinding:
      {
        const cEnumAssociatedValues_tableValueBinding_tableValueBinding * extractPtr_11960 = (const cEnumAssociatedValues_tableValueBinding_tableValueBinding *) (enumerator_8343.current_mTableValueBindingDescriptor (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_11405_controllerName = extractPtr_11960->mAssociatedValue0 ;
        enumGalgasBool test_16 = kBoolTrue ;
        if (kBoolTrue == test_16) {
          test_16 = var_handlesTableViewBinding_8616.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 279)).boolEnum () ;
          if (kBoolTrue == test_16) {
            TC_Array <C_FixItDescription> fixItArray17 ;
            inCompiler->emitSemanticError (enumerator_8343.current_mOutletTypeName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_8343.current_mOutletTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 280)).add_operation (GALGAS_string ("' type does not handle the $tableView binding"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 280)), fixItArray17  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 280)) ;
          }
        }
        if (kBoolFalse == test_16) {
          GALGAS_propertyKind var_kind_11693 ;
          GALGAS_actionMap joker_11705_2 ; // Joker input parameter
          GALGAS_bool joker_11705_1 ; // Joker input parameter
          constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_11405_controllerName, var_kind_11693, joker_11705_2, joker_11705_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 282)) ;
          enumGalgasBool test_18 = kBoolTrue ;
          if (kBoolTrue == test_18) {
            test_18 = var_kind_11693.getter_isArrayController (SOURCE_FILE ("outlet-declaration.ggs", 287)).operator_not (SOURCE_FILE ("outlet-declaration.ggs", 287)).boolEnum () ;
            if (kBoolTrue == test_18) {
              TC_Array <C_FixItDescription> fixItArray19 ;
              inCompiler->emitSemanticError (extractedValue_11405_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray19  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 288)) ;
            }
          }
          outArgument_outTableViewBindingGenerationList.addAssign_operation (enumerator_8343.current_mOutletName (HERE).readProperty_string (), extractedValue_11405_controllerName.readProperty_string ()  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 290)) ;
        }
      }
      break ;
    }
    switch (enumerator_8343.current_mRunDescriptor (HERE).enumValue ()) {
    case GALGAS_runActionDescriptor::kNotBuilt:
      break ;
    case GALGAS_runActionDescriptor::kEnum_noAction:
      {
      }
      break ;
    case GALGAS_runActionDescriptor::kEnum_action:
      {
        const cEnumAssociatedValues_runActionDescriptor_action * extractPtr_12925 = (const cEnumAssociatedValues_runActionDescriptor_action *) (enumerator_8343.current_mRunDescriptor (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_12066_target = extractPtr_12925->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_12082_action = extractPtr_12925->mAssociatedValue1 ;
        enumGalgasBool test_20 = kBoolTrue ;
        if (kBoolTrue == test_20) {
          test_20 = var_handlesRunAction_8575.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 297)).boolEnum () ;
          if (kBoolTrue == test_20) {
            TC_Array <C_FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticError (enumerator_8343.current_mOutletTypeName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_8343.current_mOutletTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 298)).add_operation (GALGAS_string ("' type does not handle run action"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 298)), fixItArray21  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 298)) ;
          }
        }
        if (kBoolFalse == test_20) {
          enumGalgasBool test_22 = kBoolTrue ;
          if (kBoolTrue == test_22) {
            test_22 = GALGAS_bool (kIsEqual, extractedValue_12066_target.readProperty_string ().objectCompare (GALGAS_string ("self"))).boolEnum () ;
            if (kBoolTrue == test_22) {
              constinArgument_inActionMap.method_searchKey (extractedValue_12082_action, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 300)) ;
              outArgument_outTargetActionList.addAssign_operation (enumerator_8343.current_mOutletName (HERE).readProperty_string (), GALGAS_string ("self"), extractedValue_12082_action.readProperty_string (), constinArgument_inReceiverSwiftTypeName  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 301)) ;
            }
          }
          if (kBoolFalse == test_22) {
            GALGAS_actionMap var_controllerActionMap_12609 ;
            GALGAS_propertyKind joker_12562 ; // Joker input parameter
            GALGAS_bool joker_12621 ; // Joker input parameter
            constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_12066_target, joker_12562, var_controllerActionMap_12609, joker_12621, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 307)) ;
            var_controllerActionMap_12609.method_searchKey (extractedValue_12082_action, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 313)) ;
            GALGAS_string temp_23 ;
            const enumGalgasBool test_24 = constinArgument_inPreferences.boolEnum () ;
            if (kBoolTrue == test_24) {
              temp_23 = GALGAS_string ("preferences_") ;
            }else if (kBoolFalse == test_24) {
              temp_23 = GALGAS_string::makeEmptyString () ;
            }
            outArgument_outTargetActionList.addAssign_operation (enumerator_8343.current_mOutletName (HERE).readProperty_string (), temp_23.add_operation (extractedValue_12066_target.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 316)), extractedValue_12082_action.readProperty_string (), GALGAS_string ("Controller_").add_operation (constinArgument_inReceiverSwiftTypeName, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 318)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 318)).add_operation (extractedValue_12066_target.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 318))  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 314)) ;
          }
        }
      }
      break ;
    }
    switch (enumerator_8343.current_mEnabledBindingDescriptor (HERE).enumValue ()) {
    case GALGAS_multipleBindingDescriptor::kNotBuilt:
      break ;
    case GALGAS_multipleBindingDescriptor::kEnum_noBinding:
      {
      }
      break ;
    case GALGAS_multipleBindingDescriptor::kEnum_binding:
      {
        const cEnumAssociatedValues_multipleBindingDescriptor_binding * extractPtr_13816 = (const cEnumAssociatedValues_multipleBindingDescriptor_binding *) (enumerator_8343.current_mEnabledBindingDescriptor (HERE).unsafePointer ()) ;
        const GALGAS_abstractBooleanMultipleBindingExpressionAST extractedValue_13087_expression = extractPtr_13816->mAssociatedValue0 ;
        GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_enableExpression_13390 ;
        GALGAS_typeKind var_type_13418 ;
        GALGAS_location var_errorLocation_13455 ;
        callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_13087_expression.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_enableExpression_13390, var_type_13418, var_errorLocation_13455, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 325)) ;
        enumGalgasBool test_25 = kBoolTrue ;
        if (kBoolTrue == test_25) {
          test_25 = var_handlesEnabledBinding_8655.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 335)).boolEnum () ;
          if (kBoolTrue == test_25) {
            TC_Array <C_FixItDescription> fixItArray26 ;
            inCompiler->emitSemanticError (var_errorLocation_13455, GALGAS_string ("cet outlet n'accepte pas le binding $enabled"), fixItArray26  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 336)) ;
          }
        }
        enumGalgasBool test_27 = kBoolTrue ;
        if (kBoolTrue == test_27) {
          test_27 = var_type_13418.getter_isBoolType (SOURCE_FILE ("outlet-declaration.ggs", 338)).operator_not (SOURCE_FILE ("outlet-declaration.ggs", 338)).boolEnum () ;
          if (kBoolTrue == test_27) {
            TC_Array <C_FixItDescription> fixItArray28 ;
            inCompiler->emitSemanticError (var_errorLocation_13455, GALGAS_string ("expression is not boolean"), fixItArray28  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 339)) ;
          }
        }
        outArgument_outMultipleBindingGenerationList.addAssign_operation (enumerator_8343.current_mOutletName (HERE).readProperty_string (), GALGAS_string ("enabled"), var_enableExpression_13390  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 341)) ;
      }
      break ;
    }
    switch (enumerator_8343.current_mHiddenBindingDescriptor (HERE).enumValue ()) {
    case GALGAS_multipleBindingDescriptor::kNotBuilt:
      break ;
    case GALGAS_multipleBindingDescriptor::kEnum_noBinding:
      {
      }
      break ;
    case GALGAS_multipleBindingDescriptor::kEnum_binding:
      {
        const cEnumAssociatedValues_multipleBindingDescriptor_binding * extractPtr_14702 = (const cEnumAssociatedValues_multipleBindingDescriptor_binding *) (enumerator_8343.current_mHiddenBindingDescriptor (HERE).unsafePointer ()) ;
        const GALGAS_abstractBooleanMultipleBindingExpressionAST extractedValue_13976_expression = extractPtr_14702->mAssociatedValue0 ;
        GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_14279 ;
        GALGAS_typeKind var_type_14307 ;
        GALGAS_location var_errorLocation_14344 ;
        callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_13976_expression.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_hiddenExpression_14279, var_type_14307, var_errorLocation_14344, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 350)) ;
        enumGalgasBool test_29 = kBoolTrue ;
        if (kBoolTrue == test_29) {
          test_29 = var_type_14307.getter_isBoolType (SOURCE_FILE ("outlet-declaration.ggs", 360)).operator_not (SOURCE_FILE ("outlet-declaration.ggs", 360)).boolEnum () ;
          if (kBoolTrue == test_29) {
            TC_Array <C_FixItDescription> fixItArray30 ;
            inCompiler->emitSemanticError (var_errorLocation_14344, GALGAS_string ("expression is not boolean"), fixItArray30  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 361)) ;
          }
        }
        enumGalgasBool test_31 = kBoolTrue ;
        if (kBoolTrue == test_31) {
          test_31 = var_handlesHiddenBinding_8693.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 363)).boolEnum () ;
          if (kBoolTrue == test_31) {
            TC_Array <C_FixItDescription> fixItArray32 ;
            inCompiler->emitSemanticError (var_errorLocation_14344, GALGAS_string ("cet outlet n'accepte pas le binding $hidden"), fixItArray32  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 364)) ;
          }
        }
        outArgument_outMultipleBindingGenerationList.addAssign_operation (enumerator_8343.current_mOutletName (HERE).readProperty_string (), GALGAS_string ("hidden"), var_hiddenExpression_14279  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 366)) ;
      }
      break ;
    }
    {
    GALGAS_string temp_33 ;
    const enumGalgasBool test_34 = constinArgument_inPreferences.boolEnum () ;
    if (kBoolTrue == test_34) {
      temp_33 = GALGAS_string ("preferences_") ;
    }else if (kBoolFalse == test_34) {
      temp_33 = GALGAS_string ("self.") ;
    }
    routine_analyzeRegularBinding (constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, enumerator_8343.current_mOutletTypeName (HERE), enumerator_8343.current_mOutletName (HERE).readProperty_string (), enumerator_8343.current_mRegularBindingList (HERE), temp_33, outArgument_outRegularBindingsGenerationList, inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 372)) ;
    }
    enumerator_8343.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeRegularBinding'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeRegularBinding (const GALGAS_propertyMap constinArgument_inRootPropertyMap,
                                    const GALGAS_propertyMap constinArgument_inPreferencesPropertyMap,
                                    const GALGAS_semanticContext constinArgument_inSemanticContext,
                                    const GALGAS_propertyMap constinArgument_inBoundModelPropertyMap,
                                    const GALGAS_lstring constinArgument_inOutletTypeName,
                                    const GALGAS_string constinArgument_inOutletName,
                                    const GALGAS_regularBindingList constinArgument_inRegularBindingList,
                                    const GALGAS_string constinArgument_inSelfSwiftName,
                                    GALGAS_regularBindingsGenerationList & ioArgument_ioRegularBindingsGenerationList,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_regularBindingList enumerator_15722 (constinArgument_inRegularBindingList, kENUMERATION_UP) ;
  while (enumerator_15722.hasCurrentObject ()) {
    GALGAS_outletBindingModelList var_boundModelTypeList_15822 = GALGAS_outletBindingModelList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.ggs", 401)) ;
    GALGAS_boundObjectList var_boundModelListForGeneration_15880 = GALGAS_boundObjectList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.ggs", 402)) ;
    cEnumerator_observablePropertyList enumerator_15914 (enumerator_15722.current_mObservablePropertyList (HERE), kENUMERATION_UP) ;
    while (enumerator_15914.hasCurrentObject ()) {
      GALGAS_propertyKind var_kind_16117 ;
      GALGAS_string var_swiftTypeStringForTransientFunctionArgument_16189 ;
      GALGAS_string var_defaultValueAsString_16238 ;
      extensionMethod_analyzeObservableProperty (enumerator_15914.current_mObservableProperty (HERE), constinArgument_inRootPropertyMap, constinArgument_inSemanticContext, constinArgument_inBoundModelPropertyMap, var_kind_16117, var_swiftTypeStringForTransientFunctionArgument_16189, var_defaultValueAsString_16238, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 404)) ;
      switch (var_kind_16117.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          TC_Array <C_FixItDescription> fixItArray0 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_15914.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 415)), GALGAS_string ("a toMany property cannot be bound"), fixItArray0  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 415)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_15914.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 417)), GALGAS_string ("a toOne property cannot be bound"), fixItArray1  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 417)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_15914.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 419)), GALGAS_string ("an array controller cannot be bound"), fixItArray2  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 419)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_15914.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 421)), GALGAS_string ("a selection controller cannot be bound"), fixItArray3  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 421)) ;
        }
        break ;
      }
      var_boundModelListForGeneration_15880.addAssign_operation (extensionGetter_modelStringForSelf (enumerator_15914.current_mObservableProperty (HERE), constinArgument_inSelfSwiftName, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 423)), var_kind_16117  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 423)) ;
      var_boundModelTypeList_15822.addAssign_operation (var_kind_16117, extensionGetter_location (enumerator_15914.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 424))  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 424)) ;
      enumerator_15914.gotoNextObject () ;
    }
    GALGAS_outletBindingSpecificationModelList var_outletBindingSpecificationModelList_17043 = GALGAS_outletBindingSpecificationModelList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.ggs", 427)) ;
    GALGAS_controllerBindingOptionDecoratedList var_controllerBindingOptionDecoratedList_17131 = GALGAS_controllerBindingOptionDecoratedList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.ggs", 428)) ;
    GALGAS_lstring var_outletTypeName_17159 = constinArgument_inOutletTypeName ;
    GALGAS_bool var_continues_17196 = GALGAS_bool (true) ;
    if (constinArgument_inSemanticContext.readProperty_mBindingSpecificationMap ().getter_count (SOURCE_FILE ("outlet-declaration.ggs", 431)).add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 431)).getter_uint (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 431)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 431)).isValid ()) {
      uint32_t variant_17212 = constinArgument_inSemanticContext.readProperty_mBindingSpecificationMap ().getter_count (SOURCE_FILE ("outlet-declaration.ggs", 431)).add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 431)).getter_uint (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 431)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 431)).uintValue () ;
      bool loop_17212 = true ;
      while (loop_17212) {
        loop_17212 = GALGAS_bool (kIsNotEqual, var_outletTypeName_17159.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).operator_and (var_continues_17196 COMMA_SOURCE_FILE ("outlet-declaration.ggs", 431)).isValid () ;
        if (loop_17212) {
          loop_17212 = GALGAS_bool (kIsNotEqual, var_outletTypeName_17159.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).operator_and (var_continues_17196 COMMA_SOURCE_FILE ("outlet-declaration.ggs", 431)).boolValue () ;
        }
        if (loop_17212 && (0 == variant_17212)) {
          loop_17212 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("outlet-declaration.ggs", 431)) ;
        }
        if (loop_17212) {
          variant_17212 -- ;
          var_continues_17196 = GALGAS_bool (false) ;
          GALGAS_lstring var_superOutletClassName_17462 ;
          GALGAS_outletBindingSpecificationMap var_bindingMap_17517 ;
          constinArgument_inSemanticContext.readProperty_mBindingSpecificationMap ().method_searchKey (var_outletTypeName_17159, var_superOutletClassName_17462, var_bindingMap_17517, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 433)) ;
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            test_4 = var_bindingMap_17517.getter_hasKey (enumerator_15722.current_mBindingName (HERE).readProperty_string () COMMA_SOURCE_FILE ("outlet-declaration.ggs", 438)).boolEnum () ;
            if (kBoolTrue == test_4) {
              var_bindingMap_17517.method_searchKey (enumerator_15722.current_mBindingName (HERE), var_outletBindingSpecificationModelList_17043, var_controllerBindingOptionDecoratedList_17131, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 439)) ;
            }
          }
          if (kBoolFalse == test_4) {
            var_continues_17196 = GALGAS_bool (true) ;
            var_outletTypeName_17159 = var_superOutletClassName_17462 ;
          }
        }
      }
    }
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = var_continues_17196.boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (enumerator_15722.current_mBindingName (HERE).readProperty_location (), GALGAS_string ("this binding is not defined"), fixItArray6  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 450)) ;
      }
    }
    if (kBoolFalse == test_5) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = GALGAS_bool (kIsNotEqual, var_boundModelTypeList_15822.getter_length (SOURCE_FILE ("outlet-declaration.ggs", 451)).objectCompare (var_outletBindingSpecificationModelList_17043.getter_length (SOURCE_FILE ("outlet-declaration.ggs", 451)))).boolEnum () ;
        if (kBoolTrue == test_7) {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (enumerator_15722.current_mBindingName (HERE).readProperty_location (), var_outletBindingSpecificationModelList_17043.getter_length (SOURCE_FILE ("outlet-declaration.ggs", 453)).getter_string (SOURCE_FILE ("outlet-declaration.ggs", 453)).add_operation (GALGAS_string (" model(s) required for this binding (found: "), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 453)).add_operation (var_boundModelTypeList_15822.getter_length (SOURCE_FILE ("outlet-declaration.ggs", 455)).getter_string (SOURCE_FILE ("outlet-declaration.ggs", 454)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 454)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 455)), fixItArray8  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 452)) ;
        }
      }
      if (kBoolFalse == test_7) {
        cEnumerator_outletBindingSpecificationModelList enumerator_18277 (var_outletBindingSpecificationModelList_17043, kENUMERATION_UP) ;
        cEnumerator_outletBindingModelList enumerator_18352 (var_boundModelTypeList_15822, kENUMERATION_UP) ;
        while (enumerator_18277.hasCurrentObject () && enumerator_18352.hasCurrentObject ()) {
          enumGalgasBool test_9 = kBoolTrue ;
          if (kBoolTrue == test_9) {
            GALGAS_bool test_10 = enumerator_18277.current_mModelShouldBeWritableProperty (HERE) ;
            if (kBoolTrue == test_10.boolEnum ()) {
              test_10 = extensionGetter_isTransient (enumerator_18352.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 458)) ;
            }
            test_9 = test_10.boolEnum () ;
            if (kBoolTrue == test_9) {
              TC_Array <C_FixItDescription> fixItArray11 ;
              inCompiler->emitSemanticError (enumerator_18352.current_mErrorLocation (HERE), GALGAS_string ("the model is transient and the binding requires an writable model"), fixItArray11  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 459)) ;
            }
          }
          enumGalgasBool test_12 = kBoolTrue ;
          if (kBoolTrue == test_12) {
            GALGAS_bool test_13 = enumerator_18277.current_mModelType (HERE).getter_isEnumType (SOURCE_FILE ("outlet-declaration.ggs", 461)) ;
            if (kBoolTrue == test_13.boolEnum ()) {
              test_13 = extensionGetter_isEnumType (enumerator_18352.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 461)) ;
            }
            test_12 = test_13.boolEnum () ;
            if (kBoolTrue == test_12) {
            }
          }
          if (kBoolFalse == test_12) {
            enumGalgasBool test_14 = kBoolTrue ;
            if (kBoolTrue == test_14) {
              test_14 = GALGAS_bool (kIsNotEqual, extensionGetter_swiftTypeName (enumerator_18277.current_mModelType (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 462)).objectCompare (extensionGetter_swiftTypeName (enumerator_18352.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 462)))).boolEnum () ;
              if (kBoolTrue == test_14) {
                TC_Array <C_FixItDescription> fixItArray15 ;
                inCompiler->emitSemanticError (enumerator_18352.current_mErrorLocation (HERE), GALGAS_string ("the model type should be ").add_operation (extensionGetter_swiftTypeName (enumerator_18277.current_mModelType (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 463)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 463)), fixItArray15  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 463)) ;
              }
            }
          }
          enumerator_18277.gotoNextObject () ;
          enumerator_18352.gotoNextObject () ;
        }
      }
    }
    GALGAS_string var_bindingOptionString_18934 = GALGAS_string::makeEmptyString () ;
    enumGalgasBool test_16 = kBoolTrue ;
    if (kBoolTrue == test_16) {
      test_16 = GALGAS_bool (kIsNotEqual, var_controllerBindingOptionDecoratedList_17131.getter_length (SOURCE_FILE ("outlet-declaration.ggs", 469)).objectCompare (enumerator_15722.current_mBindingOptionList (HERE).getter_length (SOURCE_FILE ("outlet-declaration.ggs", 469)))).boolEnum () ;
      if (kBoolTrue == test_16) {
        GALGAS_string var_s_19048 ;
        enumGalgasBool test_17 = kBoolTrue ;
        if (kBoolTrue == test_17) {
          test_17 = GALGAS_bool (kIsEqual, var_controllerBindingOptionDecoratedList_17131.getter_length (SOURCE_FILE ("outlet-declaration.ggs", 471)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 471)).getter_uint (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 471)))).boolEnum () ;
          if (kBoolTrue == test_17) {
            var_s_19048 = GALGAS_string ("this binding has no option") ;
          }
        }
        if (kBoolFalse == test_17) {
          var_s_19048 = GALGAS_string ("this binding requires the following options:") ;
          cEnumerator_controllerBindingOptionDecoratedList enumerator_19262 (var_controllerBindingOptionDecoratedList_17131, kENUMERATION_UP) ;
          while (enumerator_19262.hasCurrentObject ()) {
            var_s_19048.plusAssign_operation(GALGAS_string ("\n"
              "  - ").add_operation (enumerator_19262.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 476)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 476)).add_operation (extensionGetter_swiftTypeName (enumerator_19262.current_mOptionType (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 476)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 476)), inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 476)) ;
            enumerator_19262.gotoNextObject () ;
          }
        }
        TC_Array <C_FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticError (enumerator_15722.current_mBindingName (HERE).readProperty_location (), var_s_19048, fixItArray18  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 479)) ;
      }
    }
    if (kBoolFalse == test_16) {
      cEnumerator_controllerBindingOptionDecoratedList enumerator_19499 (var_controllerBindingOptionDecoratedList_17131, kENUMERATION_UP) ;
      cEnumerator_bindingOptionList enumerator_19593 (enumerator_15722.current_mBindingOptionList (HERE), kENUMERATION_UP) ;
      while (enumerator_19499.hasCurrentObject () && enumerator_19593.hasCurrentObject ()) {
        enumGalgasBool test_19 = kBoolTrue ;
        if (kBoolTrue == test_19) {
          test_19 = GALGAS_bool (kIsNotEqual, enumerator_19499.current_mOptionName (HERE).readProperty_string ().objectCompare (enumerator_19593.current_mOptionName (HERE).readProperty_string ())).boolEnum () ;
          if (kBoolTrue == test_19) {
            TC_Array <C_FixItDescription> fixItArray20 ;
            inCompiler->emitSemanticError (enumerator_19593.current_mOptionName (HERE).readProperty_location (), GALGAS_string ("the option name should be '").add_operation (enumerator_19499.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 484)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 484)), fixItArray20  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 484)) ;
          }
        }
        GALGAS_string var_optionValueAsString_19977 ;
        GALGAS_typeKindList temp_21 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.ggs", 487)) ;
        temp_21.addAssign_operation (enumerator_19499.current_mOptionType (HERE)  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 487)) ;
        callExtensionMethod_analyzeDefaultValueType ((cPtr_abstractDefaultValue *) enumerator_19593.current_mOptionValue (HERE).ptr (), temp_21, constinArgument_inPreferencesPropertyMap, var_optionValueAsString_19977, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 486)) ;
        var_bindingOptionString_18934.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_19499.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 491)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 491)).add_operation (var_optionValueAsString_19977, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 491)), inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 491)) ;
        enumerator_19499.gotoNextObject () ;
        enumerator_19593.gotoNextObject () ;
      }
    }
    ioArgument_ioRegularBindingsGenerationList.addAssign_operation (constinArgument_inOutletName, enumerator_15722.current_mBindingName (HERE).readProperty_string (), var_boundModelListForGeneration_15880, var_bindingOptionString_18934  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 495)) ;
    enumerator_15722.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@computedPropertyDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_computedPropertyDeclarationAST::method_enterInPrecedenceGraph (GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_computedPropertyDeclarationAST temp_0 = this ;
  const GALGAS_computedPropertyDeclarationAST temp_1 = this ;
  const GALGAS_computedPropertyDeclarationAST temp_2 = this ;
  GALGAS_lstring var_node_771 = GALGAS_lstring::constructor_new (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 16)).add_operation (temp_1.readProperty_mComputedPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 16)), temp_2.readProperty_mComputedPropertyName ().readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 16)) ;
  {
  const GALGAS_computedPropertyDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_771, temp_3, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 17)) ;
  }
  {
  const GALGAS_computedPropertyDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_771, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("computed-property.ggs", 18)) ;
  }
  {
  const GALGAS_computedPropertyDeclarationAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_771, temp_5.readProperty_mComputedPropertyTypeName () COMMA_SOURCE_FILE ("computed-property.ggs", 19)) ;
  }
  const GALGAS_computedPropertyDeclarationAST temp_6 = this ;
  cEnumerator_observablePropertyList enumerator_1064 (temp_6.readProperty_mDependencyList (), kENUMERATION_UP) ;
  while (enumerator_1064.hasCurrentObject ()) {
    switch (enumerator_1064.current (HERE).readProperty_mObservableProperty ().enumValue ()) {
    case GALGAS_observablePropertyAST::kNotBuilt:
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_1321 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (enumerator_1064.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_1145_propertyName = extractPtr_1321->mAssociatedValue0 ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GALGAS_computedPropertyDeclarationAST temp_8 = this ;
          test_7 = GALGAS_bool (kIsNotEqual, temp_8.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_7) {
            {
            const GALGAS_computedPropertyDeclarationAST temp_9 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_771, GALGAS_lstring::constructor_new (temp_9.readProperty_mRootEntityName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 24)).add_operation (extractedValue_1145_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 24)), extractedValue_1145_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 24)) COMMA_SOURCE_FILE ("computed-property.ggs", 24)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_1545 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (enumerator_1064.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_1367_propertyName = extractPtr_1545->mAssociatedValue0 ;
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          const GALGAS_computedPropertyDeclarationAST temp_11 = this ;
          test_10 = GALGAS_bool (kIsNotEqual, temp_11.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_10) {
            {
            const GALGAS_computedPropertyDeclarationAST temp_12 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_771, GALGAS_lstring::constructor_new (temp_12.readProperty_mRootEntityName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 28)).add_operation (extractedValue_1367_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 28)), extractedValue_1367_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 28)) COMMA_SOURCE_FILE ("computed-property.ggs", 28)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_1783 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (enumerator_1064.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_1597_relationshipName = extractPtr_1783->mAssociatedValue0 ;
        enumGalgasBool test_13 = kBoolTrue ;
        if (kBoolTrue == test_13) {
          const GALGAS_computedPropertyDeclarationAST temp_14 = this ;
          test_13 = GALGAS_bool (kIsNotEqual, temp_14.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_13) {
            {
            const GALGAS_computedPropertyDeclarationAST temp_15 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_771, GALGAS_lstring::constructor_new (temp_15.readProperty_mRootEntityName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 32)).add_operation (extractedValue_1597_relationshipName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 32)), extractedValue_1597_relationshipName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 32)) COMMA_SOURCE_FILE ("computed-property.ggs", 32)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootPropertyNone:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone * extractPtr_2011 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone *) (enumerator_1064.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_1827_relationshipName = extractPtr_2011->mAssociatedValue0 ;
        enumGalgasBool test_16 = kBoolTrue ;
        if (kBoolTrue == test_16) {
          const GALGAS_computedPropertyDeclarationAST temp_17 = this ;
          test_16 = GALGAS_bool (kIsNotEqual, temp_17.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_16) {
            {
            const GALGAS_computedPropertyDeclarationAST temp_18 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_771, GALGAS_lstring::constructor_new (temp_18.readProperty_mRootEntityName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 36)).add_operation (extractedValue_1827_relationshipName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 36)), extractedValue_1827_relationshipName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 36)) COMMA_SOURCE_FILE ("computed-property.ggs", 36)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfWithoutProperty:
      {
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_2193 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (enumerator_1064.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2082_propertyName = extractPtr_2193->mAssociatedValue0 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_19 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_771, GALGAS_lstring::constructor_new (temp_19.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 40)).add_operation (extractedValue_2082_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 40)), extractedValue_2082_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 40)) COMMA_SOURCE_FILE ("computed-property.ggs", 40)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyWithOption:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption * extractPtr_2361 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *) (enumerator_1064.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2248_propertyName = extractPtr_2361->mAssociatedValue0 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_20 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_771, GALGAS_lstring::constructor_new (temp_20.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 42)).add_operation (extractedValue_2248_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 42)), extractedValue_2248_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 42)) COMMA_SOURCE_FILE ("computed-property.ggs", 42)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyArray:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray * extractPtr_2524 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *) (enumerator_1064.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2411_propertyName = extractPtr_2524->mAssociatedValue0 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_21 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_771, GALGAS_lstring::constructor_new (temp_21.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 44)).add_operation (extractedValue_2411_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 44)), extractedValue_2411_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 44)) COMMA_SOURCE_FILE ("computed-property.ggs", 44)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyObject:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject * extractPtr_2688 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject *) (enumerator_1064.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2575_propertyName = extractPtr_2688->mAssociatedValue0 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_22 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_771, GALGAS_lstring::constructor_new (temp_22.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 46)).add_operation (extractedValue_2575_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 46)), extractedValue_2575_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 46)) COMMA_SOURCE_FILE ("computed-property.ggs", 46)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyNone:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone * extractPtr_2848 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone *) (enumerator_1064.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2737_propertyName = extractPtr_2848->mAssociatedValue0 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_23 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_771, GALGAS_lstring::constructor_new (temp_23.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 48)).add_operation (extractedValue_2737_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 48)), extractedValue_2737_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 48)) COMMA_SOURCE_FILE ("computed-property.ggs", 48)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_prefsProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_3001 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (enumerator_1064.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2894_propertyName = extractPtr_3001->mAssociatedValue0 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_771, GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 50)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 50)).add_operation (extractedValue_2894_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 50)), extractedValue_2894_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 50)) COMMA_SOURCE_FILE ("computed-property.ggs", 50)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_prefsPropertyWithOption:
      {
        const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption * extractPtr_3166 = (const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *) (enumerator_1064.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3057_propertyName = extractPtr_3166->mAssociatedValue0 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_771, GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 52)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 52)).add_operation (extractedValue_3057_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 52)), extractedValue_3057_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 52)) COMMA_SOURCE_FILE ("computed-property.ggs", 52)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty * extractPtr_3359 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty *) (enumerator_1064.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3223_controllerName = extractPtr_3359->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_3243_propertyName = extractPtr_3359->mAssociatedValue1 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_24 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_771, GALGAS_lstring::constructor_new (temp_24.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 54)).add_operation (extractedValue_3223_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 54)), extractedValue_3223_controllerName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 54)) COMMA_SOURCE_FILE ("computed-property.ggs", 54)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerSecondaryProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty * extractPtr_3590 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty *) (enumerator_1064.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3425_controllerName = extractPtr_3590->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_3445_propertyName = extractPtr_3590->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_3474_secondaryPropertyName = extractPtr_3590->mAssociatedValue2 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_25 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_771, GALGAS_lstring::constructor_new (temp_25.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 56)).add_operation (extractedValue_3425_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 56)), extractedValue_3425_controllerName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 56)) COMMA_SOURCE_FILE ("computed-property.ggs", 56)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerAllProperties:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties * extractPtr_3817 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties *) (enumerator_1064.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3652_controllerName = extractPtr_3817->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_3672_propertyName = extractPtr_3817->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_3701_secondaryPropertyName = extractPtr_3817->mAssociatedValue2 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_26 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_771, GALGAS_lstring::constructor_new (temp_26.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 58)).add_operation (extractedValue_3652_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 58)), extractedValue_3652_controllerName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 58)) COMMA_SOURCE_FILE ("computed-property.ggs", 58)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerOneProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty * extractPtr_4013 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty *) (enumerator_1064.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3877_controllerName = extractPtr_4013->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_3897_propertyName = extractPtr_4013->mAssociatedValue1 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_27 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_771, GALGAS_lstring::constructor_new (temp_27.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 60)).add_operation (extractedValue_3877_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 60)), extractedValue_3877_controllerName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 60)) COMMA_SOURCE_FILE ("computed-property.ggs", 60)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_signatureProperty:
      {
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_versionProperty:
      {
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_versionShouldChangeProperty:
      {
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_superProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_superProperty * extractPtr_4302 = (const cEnumAssociatedValues_observablePropertyAST_superProperty *) (enumerator_1064.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_4169_superEntityName = extractPtr_4302->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_4191_propertyName = extractPtr_4302->mAssociatedValue1 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_771, GALGAS_lstring::constructor_new (extractedValue_4169_superEntityName.readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 65)).add_operation (extractedValue_4191_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 65)), extractedValue_4191_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 65)) COMMA_SOURCE_FILE ("computed-property.ggs", 65)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_superPropertyWithDefaultValue:
      {
        const cEnumAssociatedValues_observablePropertyAST_superPropertyWithDefaultValue * extractPtr_4502 = (const cEnumAssociatedValues_observablePropertyAST_superPropertyWithDefaultValue *) (enumerator_1064.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_4367_superEntityName = extractPtr_4502->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_4389_propertyName = extractPtr_4502->mAssociatedValue1 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_771, GALGAS_lstring::constructor_new (extractedValue_4367_superEntityName.readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 67)).add_operation (extractedValue_4389_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 67)), extractedValue_4389_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 67)) COMMA_SOURCE_FILE ("computed-property.ggs", 67)) ;
        }
      }
      break ;
    }
    enumerator_1064.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedPropertyDeclarationAST nodeKey'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_computedPropertyDeclarationAST::getter_nodeKey (C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result_result ; // Returned variable
  const GALGAS_computedPropertyDeclarationAST temp_0 = this ;
  const GALGAS_computedPropertyDeclarationAST temp_1 = this ;
  const GALGAS_computedPropertyDeclarationAST temp_2 = this ;
  result_result = GALGAS_lstring::constructor_new (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 75)).add_operation (temp_1.readProperty_mComputedPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 75)), temp_2.readProperty_mComputedPropertyName ().readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 75)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@computedPropertyDeclarationAST firstAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_computedPropertyDeclarationAST::method_firstAnalysisPhase (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                     GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_computedPropertyDeclarationAST temp_0 = this ;
  cMapElement_classMap * objectArray_7241 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("computed-property.ggs", 151)) ;
  if (NULL != objectArray_7241) {
    macroValidSharedObject (objectArray_7241, cMapElement_classMap) ;
    GALGAS_classKind var_classKind_7414 ;
    const GALGAS_computedPropertyDeclarationAST temp_1 = this ;
    GALGAS_propertyMap joker_7416_3 ; // Joker input parameter
    GALGAS_actionMap joker_7416_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_7416_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mComputedPropertyTypeName (), var_classKind_7414, joker_7416_3, joker_7416_2, joker_7416_1, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 154)) ;
    switch (var_classKind_7414.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
      {
        const GALGAS_computedPropertyDeclarationAST temp_2 = this ;
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (temp_2.readProperty_mComputedPropertyTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray3  COMMA_SOURCE_FILE ("computed-property.ggs", 157)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
        const cEnumAssociatedValues_classKind_atomic * extractPtr_7724 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_7414.unsafePointer ()) ;
        const GALGAS_typeKind extractedValue_7559_kind = extractPtr_7724->mAssociatedValue0 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_4 = this ;
        objectArray_7241->mProperty_mPropertyMap.setter_insertKey (temp_4.readProperty_mComputedPropertyName (), GALGAS_propertyKind::constructor_property (extractedValue_7559_kind, GALGAS_propertyAccessibility::constructor_computed (SOURCE_FILE ("computed-property.ggs", 161))  COMMA_SOURCE_FILE ("computed-property.ggs", 161)), GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("computed-property.ggs", 162)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 159)) ;
        }
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
        const GALGAS_computedPropertyDeclarationAST temp_5 = this ;
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mComputedPropertyTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("computed-property.ggs", 166)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        const GALGAS_computedPropertyDeclarationAST temp_7 = this ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mComputedPropertyTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray8  COMMA_SOURCE_FILE ("computed-property.ggs", 168)) ;
      }
      break ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@computedPropertyDeclarationAST thirdAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_computedPropertyDeclarationAST::method_thirdAnalysisPhase (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                     GALGAS_generationStruct & ioArgument_ioGeneration,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_classKind var_classKind_8477 ;
  const GALGAS_computedPropertyDeclarationAST temp_0 = this ;
  GALGAS_propertyMap joker_8479_3 ; // Joker input parameter
  GALGAS_actionMap joker_8479_2 ; // Joker input parameter
  GALGAS_propertyGenerationList joker_8479_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_0.readProperty_mComputedPropertyTypeName (), var_classKind_8477, joker_8479_3, joker_8479_2, joker_8479_1, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 182)) ;
  GALGAS_typeKind var_typeKind_8523 ;
  switch (var_classKind_8477.enumValue ()) {
  case GALGAS_classKind::kNotBuilt:
    break ;
  case GALGAS_classKind::kEnum_prefs:
    {
      const GALGAS_computedPropertyDeclarationAST temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mComputedPropertyTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray2  COMMA_SOURCE_FILE ("computed-property.ggs", 187)) ;
      var_typeKind_8523.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_classKind::kEnum_atomic:
    {
      const cEnumAssociatedValues_classKind_atomic * extractPtr_8698 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_8477.unsafePointer ()) ;
      const GALGAS_typeKind extractedValue_8675_kind = extractPtr_8698->mAssociatedValue0 ;
      var_typeKind_8523 = extractedValue_8675_kind ;
    }
    break ;
  case GALGAS_classKind::kEnum_document:
    {
      const GALGAS_computedPropertyDeclarationAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mComputedPropertyTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray4  COMMA_SOURCE_FILE ("computed-property.ggs", 191)) ;
      var_typeKind_8523.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_classKind::kEnum_entity:
    {
      const GALGAS_computedPropertyDeclarationAST temp_5 = this ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mComputedPropertyTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("computed-property.ggs", 193)) ;
      var_typeKind_8523.drop () ; // Release error dropped variable
    }
    break ;
  }
  GALGAS_propertyMap var_rootProperties_8978 ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GALGAS_computedPropertyDeclarationAST temp_8 = this ;
    test_7 = GALGAS_bool (kIsEqual, temp_8.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      var_rootProperties_8978 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("computed-property.ggs", 198)) ;
    }
  }
  if (kBoolFalse == test_7) {
    const GALGAS_computedPropertyDeclarationAST temp_9 = this ;
    GALGAS_classKind joker_9120 ; // Joker input parameter
    GALGAS_actionMap joker_9139_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_9139_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_9.readProperty_mRootEntityName (), joker_9120, var_rootProperties_8978, joker_9139_2, joker_9139_1, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 200)) ;
  }
  GALGAS_classKind var_currentClassKind_9258 ;
  GALGAS_propertyMap var_properties_9274 ;
  const GALGAS_computedPropertyDeclarationAST temp_10 = this ;
  GALGAS_actionMap joker_9276_2 ; // Joker input parameter
  GALGAS_propertyGenerationList joker_9276_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_10.readProperty_mClassName (), var_currentClassKind_9258, var_properties_9274, joker_9276_2, joker_9276_1, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 203)) ;
  GALGAS_transientDependencyListForGeneration var_dependencies_9367 = GALGAS_transientDependencyListForGeneration::constructor_emptyList (SOURCE_FILE ("computed-property.ggs", 205)) ;
  const GALGAS_computedPropertyDeclarationAST temp_11 = this ;
  cEnumerator_observablePropertyList enumerator_9399 (temp_11.readProperty_mDependencyList (), kENUMERATION_UP) ;
  while (enumerator_9399.hasCurrentObject ()) {
    GALGAS_propertyKind var_dependencyKind_9583 ;
    GALGAS_string var_swiftTypeStringForTransientFunctionArgument_9646 ;
    GALGAS_string var_defaultValueAsString_9686 ;
    extensionMethod_analyzeObservableProperty (enumerator_9399.current_mObservableProperty (HERE), var_rootProperties_8978, ioArgument_ioSemanticContext, var_properties_9274, var_dependencyKind_9583, var_swiftTypeStringForTransientFunctionArgument_9646, var_defaultValueAsString_9686, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 207)) ;
    switch (var_dependencyKind_9583.enumValue ()) {
    case GALGAS_propertyKind::kNotBuilt:
      break ;
    case GALGAS_propertyKind::kEnum_property:
      {
      }
      break ;
    case GALGAS_propertyKind::kEnum_toMany:
      {
      }
      break ;
    case GALGAS_propertyKind::kEnum_toOne:
      {
      }
      break ;
    case GALGAS_propertyKind::kEnum_arrayController:
      {
        TC_Array <C_FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_9399.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 220)), GALGAS_string ("only an atomic property can be observed"), fixItArray12  COMMA_SOURCE_FILE ("computed-property.ggs", 220)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_selectionController:
      {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_9399.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 222)), GALGAS_string ("only an atomic property can be observed"), fixItArray13  COMMA_SOURCE_FILE ("computed-property.ggs", 222)) ;
      }
      break ;
    }
    var_dependencies_9367.addAssign_operation (enumerator_9399.current_mObservableProperty (HERE), extensionGetter_modelStringFunctionArgument (enumerator_9399.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 226)), var_swiftTypeStringForTransientFunctionArgument_9646, var_defaultValueAsString_9686  COMMA_SOURCE_FILE ("computed-property.ggs", 224)) ;
    enumerator_9399.gotoNextObject () ;
  }
  const GALGAS_computedPropertyDeclarationAST temp_14 = this ;
  const GALGAS_computedPropertyDeclarationAST temp_15 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_transientRoutineGeneration::constructor_new (temp_14.readProperty_mClassName ().readProperty_string (), temp_15.readProperty_mComputedPropertyName ().readProperty_string (), var_typeKind_8523, GALGAS_string ("computed"), var_dependencies_9367  COMMA_SOURCE_FILE ("computed-property.ggs", 230))  COMMA_SOURCE_FILE ("computed-property.ggs", 230)) ;
  const GALGAS_computedPropertyDeclarationAST temp_16 = this ;
  const GALGAS_computedPropertyDeclarationAST temp_17 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_computeRoutineGeneration::constructor_new (temp_16.readProperty_mClassName ().readProperty_string (), temp_17.readProperty_mComputedPropertyName ().readProperty_string (), var_typeKind_8523, var_dependencies_9367  COMMA_SOURCE_FILE ("computed-property.ggs", 237))  COMMA_SOURCE_FILE ("computed-property.ggs", 237)) ;
  const GALGAS_computedPropertyDeclarationAST temp_18 = this ;
  cMapElement_classMap * objectArray_10586 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_18.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("computed-property.ggs", 243)) ;
  if (NULL != objectArray_10586) {
    macroValidSharedObject (objectArray_10586, cMapElement_classMap) ;
    GALGAS_bool var_generate_10692 ;
    switch (var_currentClassKind_9258.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
      {
        var_generate_10692 = GALGAS_bool (true) ;
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
        var_generate_10692 = GALGAS_bool (true) ;
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
        var_generate_10692 = GALGAS_bool (true) ;
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        const cEnumAssociatedValues_classKind_entity * extractPtr_11081 = (const cEnumAssociatedValues_classKind_entity *) (var_currentClassKind_9258.unsafePointer ()) ;
        const GALGAS_bool extractedValue_10876_graphic = extractPtr_11081->mAssociatedValue1 ;
        enumGalgasBool test_19 = kBoolTrue ;
        if (kBoolTrue == test_19) {
          test_19 = extractedValue_10876_graphic.boolEnum () ;
          if (kBoolTrue == test_19) {
            const GALGAS_computedPropertyDeclarationAST temp_20 = this ;
            const GALGAS_computedPropertyDeclarationAST temp_21 = this ;
            var_generate_10692 = GALGAS_bool (kIsNotEqual, temp_20.readProperty_mComputedPropertyName ().readProperty_string ().objectCompare (GALGAS_string ("selectionDisplay"))).operator_and (GALGAS_bool (kIsNotEqual, temp_21.readProperty_mComputedPropertyName ().readProperty_string ().objectCompare (GALGAS_string ("objectDisplay"))) COMMA_SOURCE_FILE ("computed-property.ggs", 256)) ;
          }
        }
        if (kBoolFalse == test_19) {
          var_generate_10692 = GALGAS_bool (true) ;
        }
      }
      break ;
    }
    const GALGAS_computedPropertyDeclarationAST temp_22 = this ;
    const GALGAS_computedPropertyDeclarationAST temp_23 = this ;
    objectArray_10586->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_computedPropertyGeneration::constructor_new (temp_22.readProperty_mComputedPropertyName ().readProperty_string (), temp_23.readProperty_mClassName ().readProperty_string (), var_typeKind_8523, var_dependencies_9367, var_generate_10692  COMMA_SOURCE_FILE ("computed-property.ggs", 261))  COMMA_SOURCE_FILE ("computed-property.ggs", 261)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedPropertyGeneration declarationInSelectionControllerCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_computedPropertyGeneration::getter_declarationInSelectionControllerCode (C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("computed-property.ggs", 291)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 291)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 291)) ;
  const GALGAS_computedPropertyGeneration temp_0 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  //   Selection observable property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 292)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 292)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 292)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("computed-property.ggs", 293)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 293)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 293)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 293)) ;
  const GALGAS_computedPropertyGeneration temp_1 = this ;
  const GALGAS_computedPropertyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  final let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 294)).add_operation (GALGAS_string ("_property = EBPropertyProxy_"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 294)).add_operation (extensionGetter_swiftTypeName (temp_2.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 294)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 294)).add_operation (GALGAS_string (" ()\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 294)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 294)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedPropertyGeneration initCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_computedPropertyGeneration::getter_initCode (C_Compiler */* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedPropertyGeneration bindPropertyInSelectionController'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_computedPropertyGeneration::getter_bindPropertyInSelectionController (C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("computed-property.ggs", 306)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 306)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 306)) ;
  const GALGAS_computedPropertyGeneration temp_0 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  private final func bind_property_").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 307)).add_operation (GALGAS_string (" () {\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 307)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 307)) ;
  const GALGAS_computedPropertyGeneration temp_1 = this ;
  const GALGAS_computedPropertyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    self.selectedArray_property.addEBObserverOf_").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 308)).add_operation (GALGAS_string (" (self."), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 308)).add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 308)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 308)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 308)) ;
  const GALGAS_computedPropertyGeneration temp_3 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 309)).add_operation (GALGAS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 309)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 309)) ;
  result_result.plusAssign_operation(GALGAS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 310)) ;
  result_result.plusAssign_operation(GALGAS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 311)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 312)) ;
  result_result.plusAssign_operation(GALGAS_string ("          return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 313)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 314)) ;
  result_result.plusAssign_operation(GALGAS_string ("          return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 315)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 316)) ;
  const GALGAS_computedPropertyGeneration temp_4 = this ;
  result_result.plusAssign_operation(GALGAS_string ("          var s = Set <").add_operation (extensionGetter_swiftTypeName (temp_4.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 317)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 317)).add_operation (GALGAS_string ("> ()\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 317)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 317)) ;
  result_result.plusAssign_operation(GALGAS_string ("          var isMultipleSelection = false\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 318)) ;
  result_result.plusAssign_operation(GALGAS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 319)) ;
  const GALGAS_computedPropertyGeneration temp_5 = this ;
  result_result.plusAssign_operation(GALGAS_string ("            switch object.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 320)).add_operation (GALGAS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 320)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 320)) ;
  result_result.plusAssign_operation(GALGAS_string ("            case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 321)) ;
  result_result.plusAssign_operation(GALGAS_string ("              return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 322)) ;
  result_result.plusAssign_operation(GALGAS_string ("            case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 323)) ;
  result_result.plusAssign_operation(GALGAS_string ("              isMultipleSelection = true\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 324)) ;
  result_result.plusAssign_operation(GALGAS_string ("            case .single (let vProp) :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 325)) ;
  result_result.plusAssign_operation(GALGAS_string ("              s.insert (vProp)\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 326)) ;
  result_result.plusAssign_operation(GALGAS_string ("            }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 327)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 328)) ;
  result_result.plusAssign_operation(GALGAS_string ("          if isMultipleSelection {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 329)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 330)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }else if s.count == 0 {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 331)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 332)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }else if s.count == 1 {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 333)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .single (s.first!)\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 334)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }else{\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 335)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 336)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 337)) ;
  result_result.plusAssign_operation(GALGAS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 338)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 339)) ;
  result_result.plusAssign_operation(GALGAS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 340)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 341)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 342)) ;
  const GALGAS_computedPropertyGeneration temp_6 = this ;
  const GALGAS_computedPropertyGeneration temp_7 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 344)).add_operation (GALGAS_string ("_property.mWriteModelFunction = { [weak self] (inValue : "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 344)).add_operation (extensionGetter_swiftTypeName (temp_7.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 344)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 344)).add_operation (GALGAS_string (") in\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 344)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 344)) ;
  result_result.plusAssign_operation(GALGAS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 345)) ;
  result_result.plusAssign_operation(GALGAS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 346)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 347)) ;
  result_result.plusAssign_operation(GALGAS_string ("          break\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 348)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 349)) ;
  result_result.plusAssign_operation(GALGAS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 350)) ;
  const GALGAS_computedPropertyGeneration temp_8 = this ;
  result_result.plusAssign_operation(GALGAS_string ("            object.").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 351)).add_operation (GALGAS_string ("_property.setProp (inValue)\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 351)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 351)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 352)) ;
  result_result.plusAssign_operation(GALGAS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 353)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 354)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 355)) ;
  result_result.plusAssign_operation(GALGAS_string ("  }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 356)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedPropertyGeneration propertyDeclarationCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_computedPropertyGeneration::getter_propertyDeclarationCode (const GALGAS_bool constinArgument_inPreferences,
                                                                               const GALGAS_stringset constinArgument_inOverriddenTransients,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_computedPropertyGeneration temp_1 = this ;
    const GALGAS_computedPropertyGeneration temp_2 = this ;
    test_0 = temp_1.readProperty_mGenerate ().operator_and (constinArgument_inOverriddenTransients.getter_hasKey (temp_2.readProperty_mPropertyName () COMMA_SOURCE_FILE ("computed-property.ggs", 366)).operator_not (SOURCE_FILE ("computed-property.ggs", 366)) COMMA_SOURCE_FILE ("computed-property.ggs", 366)).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = constinArgument_inPreferences.boolEnum () ;
        if (kBoolTrue == test_3) {
          result_result.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("computed-property.ggs", 368)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 368)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 368)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 368)) ;
          const GALGAS_computedPropertyGeneration temp_4 = this ;
          result_result.plusAssign_operation(GALGAS_string ("//   Transient property: ").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 369)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 369)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 369)) ;
          result_result.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("computed-property.ggs", 370)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 370)).add_operation (GALGAS_string ("\n"
            "\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 370)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 370)) ;
          const GALGAS_computedPropertyGeneration temp_5 = this ;
          const GALGAS_computedPropertyGeneration temp_6 = this ;
          result_result.plusAssign_operation(GALGAS_string ("  let preferences_").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 371)).add_operation (GALGAS_string ("_property = EBComputedProperty_"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 371)).add_operation (extensionGetter_swiftTypeName (temp_6.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 371)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 371)).add_operation (GALGAS_string (" ()\n"
            "\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 371)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 371)) ;
          result_result.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("computed-property.ggs", 372)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 372)).add_operation (GALGAS_string ("\n"
            "\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 372)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 372)) ;
          const GALGAS_computedPropertyGeneration temp_7 = this ;
          const GALGAS_computedPropertyGeneration temp_8 = this ;
          result_result.plusAssign_operation(GALGAS_string ("  var preferences_").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 373)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 373)).add_operation (extensionGetter_swiftTypeName (temp_8.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 373)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 373)).add_operation (GALGAS_string ("\? {\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 373)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 373)) ;
          const GALGAS_computedPropertyGeneration temp_9 = this ;
          result_result.plusAssign_operation(GALGAS_string ("    switch preferences_").add_operation (temp_9.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 374)).add_operation (GALGAS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 374)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 374)) ;
          result_result.plusAssign_operation(GALGAS_string ("    case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 375)) ;
          result_result.plusAssign_operation(GALGAS_string ("      return nil\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 376)) ;
          result_result.plusAssign_operation(GALGAS_string ("    case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 377)) ;
          result_result.plusAssign_operation(GALGAS_string ("      return v\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 378)) ;
          result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 379)) ;
          result_result.plusAssign_operation(GALGAS_string ("  }\n"
            "\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 380)) ;
        }
      }
      if (kBoolFalse == test_3) {
        result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("computed-property.ggs", 382)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 382)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 382)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 382)) ;
        const GALGAS_computedPropertyGeneration temp_10 = this ;
        result_result.plusAssign_operation(GALGAS_string ("  //   Transient property: ").add_operation (temp_10.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 383)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 383)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 383)) ;
        result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("computed-property.ggs", 384)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 384)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 384)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 384)) ;
        const GALGAS_computedPropertyGeneration temp_11 = this ;
        const GALGAS_computedPropertyGeneration temp_12 = this ;
        result_result.plusAssign_operation(GALGAS_string ("  final let ").add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 385)).add_operation (GALGAS_string ("_property = EBComputedProperty_"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 385)).add_operation (extensionGetter_swiftTypeName (temp_12.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 385)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 385)).add_operation (GALGAS_string (" ()\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 385)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 385)) ;
        result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("computed-property.ggs", 386)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 386)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 386)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 386)) ;
        const GALGAS_computedPropertyGeneration temp_13 = this ;
        const GALGAS_computedPropertyGeneration temp_14 = this ;
        result_result.plusAssign_operation(GALGAS_string ("  final var ").add_operation (temp_13.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 387)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 387)).add_operation (extensionGetter_swiftTypeName (temp_14.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 387)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 387)).add_operation (GALGAS_string ("\? {\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 387)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 387)) ;
        const GALGAS_computedPropertyGeneration temp_15 = this ;
        result_result.plusAssign_operation(GALGAS_string ("    switch self.").add_operation (temp_15.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 388)).add_operation (GALGAS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 388)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 388)) ;
        result_result.plusAssign_operation(GALGAS_string ("    case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 389)) ;
        result_result.plusAssign_operation(GALGAS_string ("      return nil\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 390)) ;
        result_result.plusAssign_operation(GALGAS_string ("    case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 391)) ;
        result_result.plusAssign_operation(GALGAS_string ("      return v\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 392)) ;
        result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 393)) ;
        result_result.plusAssign_operation(GALGAS_string ("  }\n"
          "\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 394)) ;
      }
    }
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedPropertyGeneration configurationCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_computedPropertyGeneration::getter_configurationCode (const GALGAS_bool constinArgument_inPreferences,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inPreferences.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("preferences_") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("self.") ;
  }
  GALGAS_string var_prefix_17936 = temp_0 ;
  result_result = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_computedPropertyGeneration temp_3 = this ;
    test_2 = GALGAS_bool (kIsStrictSup, temp_3.readProperty_mDependencyList ().getter_length (SOURCE_FILE ("computed-property.ggs", 404)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 404)).getter_uint (inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 404)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_computedPropertyGeneration temp_4 = this ;
      GALGAS_bool var_needs_5F_unwSelf_18073 = extensionGetter_needs_5F_unwSelf (temp_4.readProperty_mDependencyList (), constinArgument_inPreferences, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 405)) ;
      const GALGAS_computedPropertyGeneration temp_5 = this ;
      result_result.plusAssign_operation(GALGAS_string ("  //--- Computed property: ").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 406)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 406)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 406)) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = var_needs_5F_unwSelf_18073.boolEnum () ;
        if (kBoolTrue == test_6) {
          const GALGAS_computedPropertyGeneration temp_7 = this ;
          result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_prefix_17936, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 408)).add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 408)).add_operation (GALGAS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 408)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 408)) ;
          result_result.plusAssign_operation(GALGAS_string ("      if let unwSelf = self {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 409)) ;
          const GALGAS_computedPropertyGeneration temp_8 = this ;
          const GALGAS_computedPropertyGeneration temp_9 = this ;
          const GALGAS_computedPropertyGeneration temp_10 = this ;
          result_result.plusAssign_operation(extensionGetter_transientComputeFunctionCall (temp_8.readProperty_mDependencyList (), constinArgument_inPreferences, temp_9.readProperty_mClassName (), temp_10.readProperty_mPropertyName (), GALGAS_string ("computed"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 410)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 410)) ;
          result_result.plusAssign_operation(GALGAS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 411)) ;
          result_result.plusAssign_operation(GALGAS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 412)) ;
          result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 413)) ;
        }
      }
      if (kBoolFalse == test_6) {
        const GALGAS_computedPropertyGeneration temp_11 = this ;
        result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_prefix_17936, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 415)).add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 415)).add_operation (GALGAS_string ("_property.mReadModelFunction = {\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 415)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 415)) ;
        const GALGAS_computedPropertyGeneration temp_12 = this ;
        const GALGAS_computedPropertyGeneration temp_13 = this ;
        const GALGAS_computedPropertyGeneration temp_14 = this ;
        result_result.plusAssign_operation(extensionGetter_transientComputeFunctionCall (temp_12.readProperty_mDependencyList (), constinArgument_inPreferences, temp_13.readProperty_mClassName (), temp_14.readProperty_mPropertyName (), GALGAS_string ("computed"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 416)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 416)) ;
      }
      result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 418)) ;
      const GALGAS_computedPropertyGeneration temp_15 = this ;
      const GALGAS_computedPropertyGeneration temp_16 = this ;
      result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_prefix_17936, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 419)).add_operation (temp_15.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 419)).add_operation (GALGAS_string ("_property.mStoreFunction = { [weak self] in self\?.compute_"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 419)).add_operation (temp_16.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 419)).add_operation (GALGAS_string ("_property ($0) }\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 419)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 419)) ;
      const GALGAS_computedPropertyGeneration temp_17 = this ;
      cEnumerator_transientDependencyListForGeneration enumerator_19064 (temp_17.readProperty_mDependencyList (), kENUMERATION_UP) ;
      while (enumerator_19064.hasCurrentObject ()) {
        GALGAS_string var_s_19104 = extensionGetter_generateAddObserverCall (enumerator_19064.current_mDependency (HERE), constinArgument_inPreferences, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 421)) ;
        enumGalgasBool test_18 = kBoolTrue ;
        if (kBoolTrue == test_18) {
          test_18 = GALGAS_bool (kIsNotEqual, var_s_19104.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_18) {
            const GALGAS_computedPropertyGeneration temp_19 = this ;
            result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_s_19104, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 423)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 423)).add_operation (var_prefix_17936, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 423)).add_operation (temp_19.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 423)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 423)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 423)) ;
          }
        }
        enumerator_19064.gotoNextObject () ;
      }
    }
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedPropertyGeneration terminationCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_computedPropertyGeneration::getter_terminationCode (const GALGAS_bool /* constinArgument_inPreferences */,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
  const GALGAS_computedPropertyGeneration temp_0 = this ;
  cEnumerator_transientDependencyListForGeneration enumerator_19554 (temp_0.readProperty_mDependencyList (), kENUMERATION_UP) ;
  while (enumerator_19554.hasCurrentObject ()) {
    GALGAS_string var_s_19592 = extensionGetter_generateRemoveObserverCall (enumerator_19554.current_mDependency (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 434)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, var_s_19592.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        const GALGAS_computedPropertyGeneration temp_2 = this ;
        result_result.plusAssign_operation(GALGAS_string ("    // ").add_operation (var_s_19592, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 436)).add_operation (GALGAS_string (" (self."), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 436)).add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 436)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 436)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 436)) ;
      }
    }
    enumerator_19554.gotoNextObject () ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@computeRoutineGeneration generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_computeRoutineGeneration::method_generateCode (const GALGAS_string constinArgument_inOutputDirectory,
                                                         GALGAS_stringset /* inArgument_inToOneEntities */,
                                                         GALGAS_stringset /* inArgument_inToManyEntities */,
                                                         GALGAS_stringset & ioArgument_ioGeneratedFileSet,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_computeRoutineGeneration temp_1 = this ;
    test_0 = GALGAS_bool (kIsStrictSup, temp_1.readProperty_mDependencyList ().getter_length (SOURCE_FILE ("computed-property.ggs", 460)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 460)).getter_uint (inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 460)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_computeRoutineGeneration temp_2 = this ;
      const GALGAS_computeRoutineGeneration temp_3 = this ;
      const GALGAS_computeRoutineGeneration temp_4 = this ;
      GALGAS_string var_s_20670 = GALGAS_string (filewrapperTemplate_computedPropertyManager_computedComputationFunctionFile (inCompiler, temp_2.readProperty_mOwnerName (), temp_3.readProperty_mTransientName (), temp_4.readProperty_mTransientType () COMMA_SOURCE_FILE ("computed-property.ggs", 461))) ;
      const GALGAS_computeRoutineGeneration temp_5 = this ;
      const GALGAS_computeRoutineGeneration temp_6 = this ;
      GALGAS_string var_fileName_20841 = GALGAS_string ("compute-").add_operation (temp_5.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 466)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 466)).add_operation (temp_6.readProperty_mTransientName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 466)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 466)) ;
      ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_20841  COMMA_SOURCE_FILE ("computed-property.ggs", 467)) ;
      GALGAS_string var_header_20962 = GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("computed-property.ggs", 468)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 468)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 468)) ;
      var_header_20962.plusAssign_operation(GALGAS_string ("//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 469)) ;
      var_header_20962.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("computed-property.ggs", 470)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 470)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 470)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 470)) ;
      var_header_20962.plusAssign_operation(GALGAS_string ("import Cocoa\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 471)) ;
      var_header_20962.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("computed-property.ggs", 472)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 472)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 472)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 472)) ;
      GALGAS_string var_generatedZone_33__21345 = GALGAS_string ("  }\n"
        "\n") ;
      var_generatedZone_33__21345.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("computed-property.ggs", 474)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 474)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 474)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 474)) ;
      var_generatedZone_33__21345.plusAssign_operation(GALGAS_string ("}\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 475)) ;
      var_generatedZone_33__21345.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("computed-property.ggs", 476)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 476)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 476)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 476)) ;
      {
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_20841, GALGAS_string ("//"), var_header_20962, GALGAS_string ("\n"
        "\n"), var_s_20670, GALGAS_string ("\n"), var_generatedZone_33__21345, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 477)) ;
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'computedPropertyManager'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_computedPropertyManager_3 [1] = {
  NULL
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_computedPropertyManager_3 [1] = {
  NULL
} ;

//--- Directory 'controllers'

const cDirectoryWrapper gWrapperDirectory_3_computedPropertyManager (
  "controllers",
  0,
  gWrapperAllFiles_computedPropertyManager_3,
  0,
  gWrapperAllDirectories_computedPropertyManager_3
) ;

//--- All files of 'standard-properties' directory

static const cRegularFileWrapper * gWrapperAllFiles_computedPropertyManager_1 [1] = {
  NULL
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_computedPropertyManager_1 [1] = {
  NULL
} ;

//--- Directory 'standard-properties'

const cDirectoryWrapper gWrapperDirectory_1_computedPropertyManager (
  "standard-properties",
  0,
  gWrapperAllFiles_computedPropertyManager_1,
  0,
  gWrapperAllDirectories_computedPropertyManager_1
) ;

//--- All files of 'xcode-project' directory

static const cRegularFileWrapper * gWrapperAllFiles_computedPropertyManager_2 [1] = {
  NULL
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_computedPropertyManager_2 [1] = {
  NULL
} ;

//--- Directory 'xcode-project'

const cDirectoryWrapper gWrapperDirectory_2_computedPropertyManager (
  "xcode-project",
  0,
  gWrapperAllFiles_computedPropertyManager_2,
  0,
  gWrapperAllDirectories_computedPropertyManager_2
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_computedPropertyManager_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_computedPropertyManager_0 [4] = {
  & gWrapperDirectory_3_computedPropertyManager,
  & gWrapperDirectory_1_computedPropertyManager,
  & gWrapperDirectory_2_computedPropertyManager,
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_computedPropertyManager (
  "",
  0,
  gWrapperAllFiles_computedPropertyManager_0,
  3,
  gWrapperAllDirectories_computedPropertyManager_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'computedPropertyManager computedComputationFunctionFile'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_computedPropertyManager_computedComputationFunctionFile (C_Compiler * inCompiler,
                                                                                           const GALGAS_string & in_OWNER_5F_NAME,
                                                                                           const GALGAS_string & in_COMPUTED_5F_PROPERTY_5F_NAME,
                                                                                           const GALGAS_typeKind & in_TRANSIENT_5F_TYPE
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "extension " ;
  result << in_OWNER_5F_NAME.stringValue () ;
  result << " {\n"
    "\n"
    "  //\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\xC2""\xB7""\n"
    "\n"
    "  func compute_" ;
  result << in_COMPUTED_5F_PROPERTY_5F_NAME.stringValue () ;
  result << "_property (_ inValue : " ;
  result << extensionGetter_swiftTypeName (in_TRANSIENT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("compute-property-function.swift.galgasTemplate", 8)).stringValue () ;
  result << ") {\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@transientDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_transientDeclarationAST::method_enterInPrecedenceGraph (GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_transientDeclarationAST temp_0 = this ;
  const GALGAS_transientDeclarationAST temp_1 = this ;
  const GALGAS_transientDeclarationAST temp_2 = this ;
  GALGAS_lstring var_node_753 = GALGAS_lstring::constructor_new (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 16)).add_operation (temp_1.readProperty_mTransientName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 16)), temp_2.readProperty_mTransientName ().readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 16)) ;
  {
  const GALGAS_transientDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_753, temp_3, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 17)) ;
  }
  {
  const GALGAS_transientDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_753, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("transient-property.ggs", 18)) ;
  }
  {
  const GALGAS_transientDeclarationAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_753, temp_5.readProperty_mTransientTypeName () COMMA_SOURCE_FILE ("transient-property.ggs", 19)) ;
  }
  const GALGAS_transientDeclarationAST temp_6 = this ;
  cEnumerator_observablePropertyList enumerator_1025 (temp_6.readProperty_mDependencyList (), kENUMERATION_UP) ;
  while (enumerator_1025.hasCurrentObject ()) {
    switch (enumerator_1025.current (HERE).readProperty_mObservableProperty ().enumValue ()) {
    case GALGAS_observablePropertyAST::kNotBuilt:
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_1282 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (enumerator_1025.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_1106_propertyName = extractPtr_1282->mAssociatedValue0 ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GALGAS_transientDeclarationAST temp_8 = this ;
          test_7 = GALGAS_bool (kIsNotEqual, temp_8.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_7) {
            {
            const GALGAS_transientDeclarationAST temp_9 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_753, GALGAS_lstring::constructor_new (temp_9.readProperty_mRootEntityName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 24)).add_operation (extractedValue_1106_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 24)), extractedValue_1106_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 24)) COMMA_SOURCE_FILE ("transient-property.ggs", 24)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_1506 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (enumerator_1025.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_1328_propertyName = extractPtr_1506->mAssociatedValue0 ;
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          const GALGAS_transientDeclarationAST temp_11 = this ;
          test_10 = GALGAS_bool (kIsNotEqual, temp_11.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_10) {
            {
            const GALGAS_transientDeclarationAST temp_12 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_753, GALGAS_lstring::constructor_new (temp_12.readProperty_mRootEntityName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 28)).add_operation (extractedValue_1328_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 28)), extractedValue_1328_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 28)) COMMA_SOURCE_FILE ("transient-property.ggs", 28)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_1744 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (enumerator_1025.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_1558_relationshipName = extractPtr_1744->mAssociatedValue0 ;
        enumGalgasBool test_13 = kBoolTrue ;
        if (kBoolTrue == test_13) {
          const GALGAS_transientDeclarationAST temp_14 = this ;
          test_13 = GALGAS_bool (kIsNotEqual, temp_14.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_13) {
            {
            const GALGAS_transientDeclarationAST temp_15 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_753, GALGAS_lstring::constructor_new (temp_15.readProperty_mRootEntityName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 32)).add_operation (extractedValue_1558_relationshipName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 32)), extractedValue_1558_relationshipName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 32)) COMMA_SOURCE_FILE ("transient-property.ggs", 32)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootPropertyNone:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone * extractPtr_1972 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone *) (enumerator_1025.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_1788_relationshipName = extractPtr_1972->mAssociatedValue0 ;
        enumGalgasBool test_16 = kBoolTrue ;
        if (kBoolTrue == test_16) {
          const GALGAS_transientDeclarationAST temp_17 = this ;
          test_16 = GALGAS_bool (kIsNotEqual, temp_17.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_16) {
            {
            const GALGAS_transientDeclarationAST temp_18 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_753, GALGAS_lstring::constructor_new (temp_18.readProperty_mRootEntityName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 36)).add_operation (extractedValue_1788_relationshipName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 36)), extractedValue_1788_relationshipName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 36)) COMMA_SOURCE_FILE ("transient-property.ggs", 36)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfWithoutProperty:
      {
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_2154 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (enumerator_1025.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2043_propertyName = extractPtr_2154->mAssociatedValue0 ;
        {
        const GALGAS_transientDeclarationAST temp_19 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_753, GALGAS_lstring::constructor_new (temp_19.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 40)).add_operation (extractedValue_2043_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 40)), extractedValue_2043_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 40)) COMMA_SOURCE_FILE ("transient-property.ggs", 40)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyWithOption:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption * extractPtr_2322 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *) (enumerator_1025.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2209_propertyName = extractPtr_2322->mAssociatedValue0 ;
        {
        const GALGAS_transientDeclarationAST temp_20 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_753, GALGAS_lstring::constructor_new (temp_20.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 42)).add_operation (extractedValue_2209_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 42)), extractedValue_2209_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 42)) COMMA_SOURCE_FILE ("transient-property.ggs", 42)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyArray:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray * extractPtr_2485 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *) (enumerator_1025.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2372_propertyName = extractPtr_2485->mAssociatedValue0 ;
        {
        const GALGAS_transientDeclarationAST temp_21 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_753, GALGAS_lstring::constructor_new (temp_21.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 44)).add_operation (extractedValue_2372_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 44)), extractedValue_2372_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 44)) COMMA_SOURCE_FILE ("transient-property.ggs", 44)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyObject:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject * extractPtr_2649 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject *) (enumerator_1025.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2536_propertyName = extractPtr_2649->mAssociatedValue0 ;
        {
        const GALGAS_transientDeclarationAST temp_22 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_753, GALGAS_lstring::constructor_new (temp_22.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 46)).add_operation (extractedValue_2536_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 46)), extractedValue_2536_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 46)) COMMA_SOURCE_FILE ("transient-property.ggs", 46)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyNone:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone * extractPtr_2809 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone *) (enumerator_1025.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2698_propertyName = extractPtr_2809->mAssociatedValue0 ;
        {
        const GALGAS_transientDeclarationAST temp_23 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_753, GALGAS_lstring::constructor_new (temp_23.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 48)).add_operation (extractedValue_2698_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 48)), extractedValue_2698_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 48)) COMMA_SOURCE_FILE ("transient-property.ggs", 48)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_prefsProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_2962 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (enumerator_1025.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2855_propertyName = extractPtr_2962->mAssociatedValue0 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_753, GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 50)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 50)).add_operation (extractedValue_2855_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 50)), extractedValue_2855_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 50)) COMMA_SOURCE_FILE ("transient-property.ggs", 50)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_prefsPropertyWithOption:
      {
        const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption * extractPtr_3127 = (const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *) (enumerator_1025.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3018_propertyName = extractPtr_3127->mAssociatedValue0 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_753, GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 52)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 52)).add_operation (extractedValue_3018_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 52)), extractedValue_3018_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 52)) COMMA_SOURCE_FILE ("transient-property.ggs", 52)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty * extractPtr_3320 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty *) (enumerator_1025.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3184_controllerName = extractPtr_3320->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_3204_propertyName = extractPtr_3320->mAssociatedValue1 ;
        {
        const GALGAS_transientDeclarationAST temp_24 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_753, GALGAS_lstring::constructor_new (temp_24.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 54)).add_operation (extractedValue_3184_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 54)), extractedValue_3184_controllerName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 54)) COMMA_SOURCE_FILE ("transient-property.ggs", 54)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerSecondaryProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty * extractPtr_3551 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty *) (enumerator_1025.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3386_controllerName = extractPtr_3551->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_3406_propertyName = extractPtr_3551->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_3435_secondaryPropertyName = extractPtr_3551->mAssociatedValue2 ;
        {
        const GALGAS_transientDeclarationAST temp_25 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_753, GALGAS_lstring::constructor_new (temp_25.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 56)).add_operation (extractedValue_3386_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 56)), extractedValue_3386_controllerName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 56)) COMMA_SOURCE_FILE ("transient-property.ggs", 56)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerAllProperties:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties * extractPtr_3778 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties *) (enumerator_1025.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3613_controllerName = extractPtr_3778->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_3633_propertyName = extractPtr_3778->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_3662_secondaryPropertyName = extractPtr_3778->mAssociatedValue2 ;
        {
        const GALGAS_transientDeclarationAST temp_26 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_753, GALGAS_lstring::constructor_new (temp_26.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 58)).add_operation (extractedValue_3613_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 58)), extractedValue_3613_controllerName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 58)) COMMA_SOURCE_FILE ("transient-property.ggs", 58)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerOneProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty * extractPtr_3974 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty *) (enumerator_1025.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3838_controllerName = extractPtr_3974->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_3858_propertyName = extractPtr_3974->mAssociatedValue1 ;
        {
        const GALGAS_transientDeclarationAST temp_27 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_753, GALGAS_lstring::constructor_new (temp_27.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 60)).add_operation (extractedValue_3838_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 60)), extractedValue_3838_controllerName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 60)) COMMA_SOURCE_FILE ("transient-property.ggs", 60)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_signatureProperty:
      {
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_versionProperty:
      {
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_versionShouldChangeProperty:
      {
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_superProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_superProperty * extractPtr_4263 = (const cEnumAssociatedValues_observablePropertyAST_superProperty *) (enumerator_1025.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_4130_superEntityName = extractPtr_4263->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_4152_propertyName = extractPtr_4263->mAssociatedValue1 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_753, GALGAS_lstring::constructor_new (extractedValue_4130_superEntityName.readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 65)).add_operation (extractedValue_4152_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 65)), extractedValue_4152_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 65)) COMMA_SOURCE_FILE ("transient-property.ggs", 65)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_superPropertyWithDefaultValue:
      {
        const cEnumAssociatedValues_observablePropertyAST_superPropertyWithDefaultValue * extractPtr_4463 = (const cEnumAssociatedValues_observablePropertyAST_superPropertyWithDefaultValue *) (enumerator_1025.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_4328_superEntityName = extractPtr_4463->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_4350_propertyName = extractPtr_4463->mAssociatedValue1 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_753, GALGAS_lstring::constructor_new (extractedValue_4328_superEntityName.readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 67)).add_operation (extractedValue_4350_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 67)), extractedValue_4350_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 67)) COMMA_SOURCE_FILE ("transient-property.ggs", 67)) ;
        }
      }
      break ;
    }
    enumerator_1025.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@transientDeclarationAST nodeKey'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_transientDeclarationAST::getter_nodeKey (C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result_result ; // Returned variable
  const GALGAS_transientDeclarationAST temp_0 = this ;
  const GALGAS_transientDeclarationAST temp_1 = this ;
  const GALGAS_transientDeclarationAST temp_2 = this ;
  result_result = GALGAS_lstring::constructor_new (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 75)).add_operation (temp_1.readProperty_mTransientName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 75)), temp_2.readProperty_mTransientName ().readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 75)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@transientDeclarationAST firstAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_transientDeclarationAST::method_firstAnalysisPhase (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                              GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_transientDeclarationAST temp_0 = this ;
  cMapElement_classMap * objectArray_7154 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("transient-property.ggs", 151)) ;
  if (NULL != objectArray_7154) {
    macroValidSharedObject (objectArray_7154, cMapElement_classMap) ;
    GALGAS_classKind var_classKind_7320 ;
    const GALGAS_transientDeclarationAST temp_1 = this ;
    GALGAS_propertyMap joker_7322_3 ; // Joker input parameter
    GALGAS_actionMap joker_7322_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_7322_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mTransientTypeName (), var_classKind_7320, joker_7322_3, joker_7322_2, joker_7322_1, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 154)) ;
    switch (var_classKind_7320.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
      {
        const GALGAS_transientDeclarationAST temp_2 = this ;
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (temp_2.readProperty_mTransientTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray3  COMMA_SOURCE_FILE ("transient-property.ggs", 157)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
        const cEnumAssociatedValues_classKind_atomic * extractPtr_7679 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_7320.unsafePointer ()) ;
        const GALGAS_typeKind extractedValue_7458_kind = extractPtr_7679->mAssociatedValue0 ;
        {
        const GALGAS_transientDeclarationAST temp_4 = this ;
        const GALGAS_transientDeclarationAST temp_5 = this ;
        const GALGAS_transientDeclarationAST temp_6 = this ;
        objectArray_7154->mProperty_mPropertyMap.setter_insertKey (temp_4.readProperty_mTransientName (), GALGAS_propertyKind::constructor_property (extractedValue_7458_kind, GALGAS_propertyAccessibility::constructor_transient (GALGAS_bool (kIsEqual, temp_5.readProperty_mDependencyList ().getter_length (SOURCE_FILE ("transient-property.ggs", 161)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 161)).getter_uint (inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 161))))  COMMA_SOURCE_FILE ("transient-property.ggs", 161))  COMMA_SOURCE_FILE ("transient-property.ggs", 161)), GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("transient-property.ggs", 162)), temp_6.readProperty_mIsOverriding (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 159)) ;
        }
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
        const GALGAS_transientDeclarationAST temp_7 = this ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mTransientTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray8  COMMA_SOURCE_FILE ("transient-property.ggs", 166)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        const GALGAS_transientDeclarationAST temp_9 = this ;
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (temp_9.readProperty_mTransientTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray10  COMMA_SOURCE_FILE ("transient-property.ggs", 168)) ;
      }
      break ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@transientDeclarationAST thirdAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_transientDeclarationAST::method_thirdAnalysisPhase (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                              GALGAS_generationStruct & ioArgument_ioGeneration,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_classKind var_classKind_8404 ;
  const GALGAS_transientDeclarationAST temp_0 = this ;
  GALGAS_propertyMap joker_8406_3 ; // Joker input parameter
  GALGAS_actionMap joker_8406_2 ; // Joker input parameter
  GALGAS_propertyGenerationList joker_8406_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_0.readProperty_mTransientTypeName (), var_classKind_8404, joker_8406_3, joker_8406_2, joker_8406_1, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 181)) ;
  GALGAS_typeKind var_typeKind_8450 ;
  switch (var_classKind_8404.enumValue ()) {
  case GALGAS_classKind::kNotBuilt:
    break ;
  case GALGAS_classKind::kEnum_prefs:
    {
      const GALGAS_transientDeclarationAST temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mTransientTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray2  COMMA_SOURCE_FILE ("transient-property.ggs", 186)) ;
      var_typeKind_8450.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_classKind::kEnum_atomic:
    {
      const cEnumAssociatedValues_classKind_atomic * extractPtr_8618 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_8404.unsafePointer ()) ;
      const GALGAS_typeKind extractedValue_8595_kind = extractPtr_8618->mAssociatedValue0 ;
      var_typeKind_8450 = extractedValue_8595_kind ;
    }
    break ;
  case GALGAS_classKind::kEnum_document:
    {
      const GALGAS_transientDeclarationAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mTransientTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray4  COMMA_SOURCE_FILE ("transient-property.ggs", 190)) ;
      var_typeKind_8450.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_classKind::kEnum_entity:
    {
      const GALGAS_transientDeclarationAST temp_5 = this ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mTransientTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("transient-property.ggs", 192)) ;
      var_typeKind_8450.drop () ; // Release error dropped variable
    }
    break ;
  }
  GALGAS_propertyMap var_rootProperties_8884 ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GALGAS_transientDeclarationAST temp_8 = this ;
    test_7 = GALGAS_bool (kIsEqual, temp_8.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      var_rootProperties_8884 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("transient-property.ggs", 197)) ;
    }
  }
  if (kBoolFalse == test_7) {
    const GALGAS_transientDeclarationAST temp_9 = this ;
    GALGAS_classKind joker_9026 ; // Joker input parameter
    GALGAS_actionMap joker_9045_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_9045_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_9.readProperty_mRootEntityName (), joker_9026, var_rootProperties_8884, joker_9045_2, joker_9045_1, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 199)) ;
  }
  GALGAS_classKind var_currentClassKind_9164 ;
  GALGAS_propertyMap var_properties_9180 ;
  const GALGAS_transientDeclarationAST temp_10 = this ;
  GALGAS_actionMap joker_9182_2 ; // Joker input parameter
  GALGAS_propertyGenerationList joker_9182_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_10.readProperty_mClassName (), var_currentClassKind_9164, var_properties_9180, joker_9182_2, joker_9182_1, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 202)) ;
  GALGAS_transientDependencyListForGeneration var_dependencies_9273 = GALGAS_transientDependencyListForGeneration::constructor_emptyList (SOURCE_FILE ("transient-property.ggs", 204)) ;
  const GALGAS_transientDeclarationAST temp_11 = this ;
  cEnumerator_observablePropertyList enumerator_9305 (temp_11.readProperty_mDependencyList (), kENUMERATION_UP) ;
  while (enumerator_9305.hasCurrentObject ()) {
    GALGAS_propertyKind var_dependencyKind_9489 ;
    GALGAS_string var_swiftTypeStringForTransientFunctionArgument_9552 ;
    GALGAS_string var_defaultValueAsString_9592 ;
    extensionMethod_analyzeObservableProperty (enumerator_9305.current_mObservableProperty (HERE), var_rootProperties_8884, ioArgument_ioSemanticContext, var_properties_9180, var_dependencyKind_9489, var_swiftTypeStringForTransientFunctionArgument_9552, var_defaultValueAsString_9592, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 206)) ;
    switch (var_dependencyKind_9489.enumValue ()) {
    case GALGAS_propertyKind::kNotBuilt:
      break ;
    case GALGAS_propertyKind::kEnum_property:
      {
      }
      break ;
    case GALGAS_propertyKind::kEnum_toMany:
      {
      }
      break ;
    case GALGAS_propertyKind::kEnum_toOne:
      {
      }
      break ;
    case GALGAS_propertyKind::kEnum_arrayController:
      {
        TC_Array <C_FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_9305.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 220)), GALGAS_string ("only an atomic property can be observed"), fixItArray12  COMMA_SOURCE_FILE ("transient-property.ggs", 220)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_selectionController:
      {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_9305.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 222)), GALGAS_string ("only an atomic property can be observed"), fixItArray13  COMMA_SOURCE_FILE ("transient-property.ggs", 222)) ;
      }
      break ;
    }
    var_dependencies_9273.addAssign_operation (enumerator_9305.current_mObservableProperty (HERE), extensionGetter_modelStringFunctionArgument (enumerator_9305.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 226)), var_swiftTypeStringForTransientFunctionArgument_9552, var_defaultValueAsString_9592  COMMA_SOURCE_FILE ("transient-property.ggs", 224)) ;
    enumerator_9305.gotoNextObject () ;
  }
  const GALGAS_transientDeclarationAST temp_14 = this ;
  const GALGAS_transientDeclarationAST temp_15 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_transientRoutineGeneration::constructor_new (temp_14.readProperty_mClassName ().readProperty_string (), temp_15.readProperty_mTransientName ().readProperty_string (), var_typeKind_8450, GALGAS_string ("transient"), var_dependencies_9273  COMMA_SOURCE_FILE ("transient-property.ggs", 230))  COMMA_SOURCE_FILE ("transient-property.ggs", 230)) ;
  const GALGAS_transientDeclarationAST temp_16 = this ;
  cMapElement_classMap * objectArray_10386 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_16.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("transient-property.ggs", 237)) ;
  if (NULL != objectArray_10386) {
    macroValidSharedObject (objectArray_10386, cMapElement_classMap) ;
    GALGAS_bool var_generate_10492 ;
    switch (var_currentClassKind_9164.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
      {
        var_generate_10492 = GALGAS_bool (true) ;
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
        var_generate_10492 = GALGAS_bool (true) ;
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
        var_generate_10492 = GALGAS_bool (true) ;
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        const cEnumAssociatedValues_classKind_entity * extractPtr_10867 = (const cEnumAssociatedValues_classKind_entity *) (var_currentClassKind_9164.unsafePointer ()) ;
        const GALGAS_bool extractedValue_10676_graphic = extractPtr_10867->mAssociatedValue1 ;
        enumGalgasBool test_17 = kBoolTrue ;
        if (kBoolTrue == test_17) {
          test_17 = extractedValue_10676_graphic.boolEnum () ;
          if (kBoolTrue == test_17) {
            const GALGAS_transientDeclarationAST temp_18 = this ;
            const GALGAS_transientDeclarationAST temp_19 = this ;
            var_generate_10492 = GALGAS_bool (kIsNotEqual, temp_18.readProperty_mTransientName ().readProperty_string ().objectCompare (GALGAS_string ("selectionDisplay"))).operator_and (GALGAS_bool (kIsNotEqual, temp_19.readProperty_mTransientName ().readProperty_string ().objectCompare (GALGAS_string ("objectDisplay"))) COMMA_SOURCE_FILE ("transient-property.ggs", 250)) ;
          }
        }
        if (kBoolFalse == test_17) {
          var_generate_10492 = GALGAS_bool (true) ;
        }
      }
      break ;
    }
    const GALGAS_transientDeclarationAST temp_20 = this ;
    const GALGAS_transientDeclarationAST temp_21 = this ;
    objectArray_10386->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_transientPropertyGeneration::constructor_new (temp_20.readProperty_mTransientName ().readProperty_string (), temp_21.readProperty_mClassName ().readProperty_string (), var_typeKind_8450, var_dependencies_9273, var_generate_10492  COMMA_SOURCE_FILE ("transient-property.ggs", 255))  COMMA_SOURCE_FILE ("transient-property.ggs", 255)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@transientPropertyGeneration declarationInSelectionControllerCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_transientPropertyGeneration::getter_declarationInSelectionControllerCode (C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("transient-property.ggs", 285)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 285)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 285)) ;
  const GALGAS_transientPropertyGeneration temp_0 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  //   Selection observable property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 286)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 286)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 286)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("transient-property.ggs", 287)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 287)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 287)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 287)) ;
  const GALGAS_transientPropertyGeneration temp_1 = this ;
  const GALGAS_transientPropertyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 288)).add_operation (GALGAS_string ("_property = EBTransientProperty_"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 288)).add_operation (extensionGetter_swiftTypeName (temp_2.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 288)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 288)).add_operation (GALGAS_string (" ()\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 288)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 288)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@transientPropertyGeneration initCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_transientPropertyGeneration::getter_initCode (C_Compiler */* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@transientPropertyGeneration bindPropertyInSelectionController'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_transientPropertyGeneration::getter_bindPropertyInSelectionController (C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("transient-property.ggs", 300)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 300)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 300)) ;
  const GALGAS_transientPropertyGeneration temp_0 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  private final func bind_property_").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 301)).add_operation (GALGAS_string (" () {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 301)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 301)) ;
  const GALGAS_transientPropertyGeneration temp_1 = this ;
  const GALGAS_transientPropertyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    self.selectedArray_property.addEBObserverOf_").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 302)).add_operation (GALGAS_string (" (self."), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 302)).add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 302)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 302)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 302)) ;
  const GALGAS_transientPropertyGeneration temp_3 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 303)).add_operation (GALGAS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 303)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 303)) ;
  result_result.plusAssign_operation(GALGAS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 304)) ;
  result_result.plusAssign_operation(GALGAS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 305)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 306)) ;
  result_result.plusAssign_operation(GALGAS_string ("          return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 307)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 308)) ;
  result_result.plusAssign_operation(GALGAS_string ("          return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 309)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 310)) ;
  const GALGAS_transientPropertyGeneration temp_4 = this ;
  result_result.plusAssign_operation(GALGAS_string ("          var s = Set <").add_operation (extensionGetter_swiftTypeName (temp_4.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 311)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 311)).add_operation (GALGAS_string ("> ()\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 311)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 311)) ;
  result_result.plusAssign_operation(GALGAS_string ("          var isMultipleSelection = false\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 312)) ;
  result_result.plusAssign_operation(GALGAS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 313)) ;
  const GALGAS_transientPropertyGeneration temp_5 = this ;
  result_result.plusAssign_operation(GALGAS_string ("            switch object.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 314)).add_operation (GALGAS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 314)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 314)) ;
  result_result.plusAssign_operation(GALGAS_string ("            case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 315)) ;
  result_result.plusAssign_operation(GALGAS_string ("              return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 316)) ;
  result_result.plusAssign_operation(GALGAS_string ("            case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 317)) ;
  result_result.plusAssign_operation(GALGAS_string ("              isMultipleSelection = true\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 318)) ;
  result_result.plusAssign_operation(GALGAS_string ("            case .single (let vProp) :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 319)) ;
  result_result.plusAssign_operation(GALGAS_string ("              s.insert (vProp)\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 320)) ;
  result_result.plusAssign_operation(GALGAS_string ("            }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 321)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 322)) ;
  result_result.plusAssign_operation(GALGAS_string ("          if isMultipleSelection {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 323)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 324)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }else if s.count == 0 {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 325)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 326)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }else if s.count == 1 {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 327)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .single (s.first!)\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 328)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }else{\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 329)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 330)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 331)) ;
  result_result.plusAssign_operation(GALGAS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 332)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 333)) ;
  result_result.plusAssign_operation(GALGAS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 334)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 335)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 336)) ;
  result_result.plusAssign_operation(GALGAS_string ("  }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 337)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@transientPropertyGeneration propertyDeclarationCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_transientPropertyGeneration::getter_propertyDeclarationCode (const GALGAS_bool constinArgument_inPreferences,
                                                                                const GALGAS_stringset constinArgument_inOverriddenTransients,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_transientPropertyGeneration temp_1 = this ;
    const GALGAS_transientPropertyGeneration temp_2 = this ;
    test_0 = temp_1.readProperty_mGenerate ().operator_and (constinArgument_inOverriddenTransients.getter_hasKey (temp_2.readProperty_mPropertyName () COMMA_SOURCE_FILE ("transient-property.ggs", 347)).operator_not (SOURCE_FILE ("transient-property.ggs", 347)) COMMA_SOURCE_FILE ("transient-property.ggs", 347)).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = constinArgument_inPreferences.boolEnum () ;
        if (kBoolTrue == test_3) {
          result_result.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("transient-property.ggs", 349)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 349)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 349)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 349)) ;
          const GALGAS_transientPropertyGeneration temp_4 = this ;
          result_result.plusAssign_operation(GALGAS_string ("//   Transient property: ").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 350)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 350)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 350)) ;
          result_result.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("transient-property.ggs", 351)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 351)).add_operation (GALGAS_string ("\n"
            "\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 351)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 351)) ;
          const GALGAS_transientPropertyGeneration temp_5 = this ;
          const GALGAS_transientPropertyGeneration temp_6 = this ;
          result_result.plusAssign_operation(GALGAS_string ("  let preferences_").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 352)).add_operation (GALGAS_string ("_property = EBTransientProperty_"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 352)).add_operation (extensionGetter_swiftTypeName (temp_6.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 352)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 352)).add_operation (GALGAS_string (" ()\n"
            "\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 352)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 352)) ;
          result_result.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("transient-property.ggs", 353)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 353)).add_operation (GALGAS_string ("\n"
            "\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 353)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 353)) ;
          const GALGAS_transientPropertyGeneration temp_7 = this ;
          const GALGAS_transientPropertyGeneration temp_8 = this ;
          result_result.plusAssign_operation(GALGAS_string ("  var preferences_").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 354)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 354)).add_operation (extensionGetter_swiftTypeName (temp_8.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 354)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 354)).add_operation (GALGAS_string ("\? {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 354)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 354)) ;
          const GALGAS_transientPropertyGeneration temp_9 = this ;
          result_result.plusAssign_operation(GALGAS_string ("    switch preferences_").add_operation (temp_9.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 355)).add_operation (GALGAS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 355)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 355)) ;
          result_result.plusAssign_operation(GALGAS_string ("    case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 356)) ;
          result_result.plusAssign_operation(GALGAS_string ("      return nil\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 357)) ;
          result_result.plusAssign_operation(GALGAS_string ("    case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 358)) ;
          result_result.plusAssign_operation(GALGAS_string ("      return v\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 359)) ;
          result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 360)) ;
          result_result.plusAssign_operation(GALGAS_string ("  }\n"
            "\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 361)) ;
        }
      }
      if (kBoolFalse == test_3) {
        result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("transient-property.ggs", 363)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 363)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 363)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 363)) ;
        const GALGAS_transientPropertyGeneration temp_10 = this ;
        result_result.plusAssign_operation(GALGAS_string ("  //   Transient property: ").add_operation (temp_10.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 364)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 364)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 364)) ;
        result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("transient-property.ggs", 365)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 365)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 365)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 365)) ;
        const GALGAS_transientPropertyGeneration temp_11 = this ;
        const GALGAS_transientPropertyGeneration temp_12 = this ;
        result_result.plusAssign_operation(GALGAS_string ("  final let ").add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 366)).add_operation (GALGAS_string ("_property = EBTransientProperty_"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 366)).add_operation (extensionGetter_swiftTypeName (temp_12.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 366)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 366)).add_operation (GALGAS_string (" ()\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 366)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 366)) ;
        result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("transient-property.ggs", 367)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 367)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 367)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 367)) ;
        const GALGAS_transientPropertyGeneration temp_13 = this ;
        const GALGAS_transientPropertyGeneration temp_14 = this ;
        result_result.plusAssign_operation(GALGAS_string ("  final var ").add_operation (temp_13.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 368)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 368)).add_operation (extensionGetter_swiftTypeName (temp_14.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 368)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 368)).add_operation (GALGAS_string ("\? {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 368)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 368)) ;
        const GALGAS_transientPropertyGeneration temp_15 = this ;
        result_result.plusAssign_operation(GALGAS_string ("    switch self.").add_operation (temp_15.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 369)).add_operation (GALGAS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 369)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 369)) ;
        result_result.plusAssign_operation(GALGAS_string ("    case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 370)) ;
        result_result.plusAssign_operation(GALGAS_string ("      return nil\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 371)) ;
        result_result.plusAssign_operation(GALGAS_string ("    case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 372)) ;
        result_result.plusAssign_operation(GALGAS_string ("      return v\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 373)) ;
        result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 374)) ;
        result_result.plusAssign_operation(GALGAS_string ("  }\n"
          "\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 375)) ;
      }
    }
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@transientPropertyGeneration configurationCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_transientPropertyGeneration::getter_configurationCode (const GALGAS_bool constinArgument_inPreferences,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inPreferences.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("preferences_") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("self.") ;
  }
  GALGAS_string var_prefix_17098 = temp_0 ;
  result_result = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_transientPropertyGeneration temp_3 = this ;
    test_2 = GALGAS_bool (kIsStrictSup, temp_3.readProperty_mDependencyList ().getter_length (SOURCE_FILE ("transient-property.ggs", 385)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 385)).getter_uint (inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 385)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_transientPropertyGeneration temp_4 = this ;
      GALGAS_bool var_needs_5F_unwSelf_17235 = extensionGetter_needs_5F_unwSelf (temp_4.readProperty_mDependencyList (), constinArgument_inPreferences, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 386)) ;
      const GALGAS_transientPropertyGeneration temp_5 = this ;
      result_result.plusAssign_operation(GALGAS_string ("  //--- Atomic property: ").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 387)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 387)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 387)) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = var_needs_5F_unwSelf_17235.boolEnum () ;
        if (kBoolTrue == test_6) {
          const GALGAS_transientPropertyGeneration temp_7 = this ;
          result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_prefix_17098, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 389)).add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 389)).add_operation (GALGAS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 389)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 389)) ;
          result_result.plusAssign_operation(GALGAS_string ("      if let unwSelf = self {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 390)) ;
          const GALGAS_transientPropertyGeneration temp_8 = this ;
          const GALGAS_transientPropertyGeneration temp_9 = this ;
          const GALGAS_transientPropertyGeneration temp_10 = this ;
          result_result.plusAssign_operation(extensionGetter_transientComputeFunctionCall (temp_8.readProperty_mDependencyList (), constinArgument_inPreferences, temp_9.readProperty_mClassName (), temp_10.readProperty_mPropertyName (), GALGAS_string ("transient"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 391)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 391)) ;
          result_result.plusAssign_operation(GALGAS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 392)) ;
          result_result.plusAssign_operation(GALGAS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 393)) ;
          result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 394)) ;
        }
      }
      if (kBoolFalse == test_6) {
        const GALGAS_transientPropertyGeneration temp_11 = this ;
        result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_prefix_17098, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 396)).add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 396)).add_operation (GALGAS_string ("_property.mReadModelFunction = {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 396)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 396)) ;
        const GALGAS_transientPropertyGeneration temp_12 = this ;
        const GALGAS_transientPropertyGeneration temp_13 = this ;
        const GALGAS_transientPropertyGeneration temp_14 = this ;
        result_result.plusAssign_operation(extensionGetter_transientComputeFunctionCall (temp_12.readProperty_mDependencyList (), constinArgument_inPreferences, temp_13.readProperty_mClassName (), temp_14.readProperty_mPropertyName (), GALGAS_string ("transient"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 397)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 397)) ;
      }
      result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 399)) ;
      const GALGAS_transientPropertyGeneration temp_15 = this ;
      cEnumerator_transientDependencyListForGeneration enumerator_18068 (temp_15.readProperty_mDependencyList (), kENUMERATION_UP) ;
      while (enumerator_18068.hasCurrentObject ()) {
        GALGAS_string var_s_18108 = extensionGetter_generateAddObserverCall (enumerator_18068.current_mDependency (HERE), constinArgument_inPreferences, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 401)) ;
        enumGalgasBool test_16 = kBoolTrue ;
        if (kBoolTrue == test_16) {
          test_16 = GALGAS_bool (kIsNotEqual, var_s_18108.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_16) {
            const GALGAS_transientPropertyGeneration temp_17 = this ;
            result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_s_18108, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 403)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 403)).add_operation (var_prefix_17098, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 403)).add_operation (temp_17.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 403)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 403)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 403)) ;
          }
        }
        enumerator_18068.gotoNextObject () ;
      }
    }
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@transientPropertyGeneration terminationCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_transientPropertyGeneration::getter_terminationCode (const GALGAS_bool /* constinArgument_inPreferences */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
  const GALGAS_transientPropertyGeneration temp_0 = this ;
  cEnumerator_transientDependencyListForGeneration enumerator_18559 (temp_0.readProperty_mDependencyList (), kENUMERATION_UP) ;
  while (enumerator_18559.hasCurrentObject ()) {
    GALGAS_string var_s_18597 = extensionGetter_generateRemoveObserverCall (enumerator_18559.current_mDependency (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 414)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, var_s_18597.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        const GALGAS_transientPropertyGeneration temp_2 = this ;
        result_result.plusAssign_operation(GALGAS_string ("    // ").add_operation (var_s_18597, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 416)).add_operation (GALGAS_string (" (self."), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 416)).add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 416)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 416)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 416)) ;
      }
    }
    enumerator_18559.gotoNextObject () ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@transientRoutineGeneration generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_transientRoutineGeneration::method_generateCode (const GALGAS_string constinArgument_inOutputDirectory,
                                                           GALGAS_stringset /* inArgument_inToOneEntities */,
                                                           GALGAS_stringset /* inArgument_inToManyEntities */,
                                                           GALGAS_stringset & ioArgument_ioGeneratedFileSet,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_transientRoutineGeneration temp_1 = this ;
    test_0 = GALGAS_bool (kIsStrictSup, temp_1.readProperty_mDependencyList ().getter_length (SOURCE_FILE ("transient-property.ggs", 625)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 625)).getter_uint (inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 625)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_transientRoutineGeneration temp_2 = this ;
      const GALGAS_transientRoutineGeneration temp_3 = this ;
      const GALGAS_transientRoutineGeneration temp_4 = this ;
      const GALGAS_transientRoutineGeneration temp_5 = this ;
      const GALGAS_transientRoutineGeneration temp_6 = this ;
      GALGAS_string var_s_29497 = GALGAS_string (filewrapperTemplate_transientManager_transientComputationFunctionFile (inCompiler, temp_2.readProperty_mOwnerName (), temp_3.readProperty_mTransientName (), temp_4.readProperty_mDependencyList (), temp_5.readProperty_mTransientType (), temp_6.readProperty_mGeneratedFunctionNamePrefix () COMMA_SOURCE_FILE ("transient-property.ggs", 626))) ;
      GALGAS_string var_header_29729 = GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("transient-property.ggs", 633)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 633)).add_operation (GALGAS_string ("\n"
        "//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n"
        "//"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 633)).add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("transient-property.ggs", 635)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 635)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 635)).add_operation (GALGAS_string ("import Cocoa\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 635)).add_operation (GALGAS_string ("//"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 636)).add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("transient-property.ggs", 637)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 637)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 637)) ;
      const GALGAS_transientRoutineGeneration temp_7 = this ;
      const GALGAS_transientRoutineGeneration temp_8 = this ;
      const GALGAS_transientRoutineGeneration temp_9 = this ;
      GALGAS_string var_fileName_30077 = temp_7.readProperty_mGeneratedFunctionNamePrefix ().add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 638)).add_operation (temp_8.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 638)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 638)).add_operation (temp_9.readProperty_mTransientName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 638)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 638)) ;
      ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_30077  COMMA_SOURCE_FILE ("transient-property.ggs", 639)) ;
      {
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_30077, GALGAS_string ("//"), var_header_29729, GALGAS_string ("\n"
        "\n"), var_s_29497, GALGAS_string ("\n"), GALGAS_string ("}\n"
        "\n"
        "//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("transient-property.ggs", 648)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 648)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 648)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 640)) ;
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'transientManager'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_transientManager_3 [1] = {
  NULL
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_transientManager_3 [1] = {
  NULL
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
  NULL
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_transientManager_1 [1] = {
  NULL
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
  NULL
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_transientManager_2 [1] = {
  NULL
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
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_transientManager_0 [4] = {
  & gWrapperDirectory_3_transientManager,
  & gWrapperDirectory_1_transientManager,
  & gWrapperDirectory_2_transientManager,
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_transientManager (
  "",
  0,
  gWrapperAllFiles_transientManager_0,
  3,
  gWrapperAllDirectories_transientManager_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'transientManager transientComputationFunctionFile'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_transientManager_transientComputationFunctionFile (C_Compiler * inCompiler,
                                                                                     const GALGAS_string & in_OWNER_5F_NAME,
                                                                                     const GALGAS_string & in_TRANSIENT_5F_NAME,
                                                                                     const GALGAS_transientDependencyListForGeneration & in_DEPENDENCY_5F_LIST,
                                                                                     const GALGAS_typeKind & in_TRANSIENT_5F_TYPE,
                                                                                     const GALGAS_string & in_TRANSIENT_5F_FUNCTION_5F_NAME_5F_PREFIX
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "func " ;
  result << in_TRANSIENT_5F_FUNCTION_5F_NAME_5F_PREFIX.stringValue () ;
  result << "_" ;
  result << in_OWNER_5F_NAME.stringValue () ;
  result << "_" ;
  result << in_TRANSIENT_5F_NAME.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_289_ (0) ;
  if (in_DEPENDENCY_5F_LIST.isValid ()) {
    cEnumerator_transientDependencyListForGeneration enumerator_289 (in_DEPENDENCY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_289.hasCurrentObject ()) {
      result << "\n"
        "       _ " ;
      result << enumerator_289.current_mFunctionArgumentName (HERE).stringValue () ;
      result << " : " ;
      result << enumerator_289.current_mFunctionArgumentTypeString (HERE).stringValue () ;
      if (enumerator_289.hasNextObject ()) {
        result << "," ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_289_.increment () ;
      enumerator_289.gotoNextObject () ;
    }
  }
  result << "\n"
    ") -> " ;
  result << extensionGetter_swiftTypeName (in_TRANSIENT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("transient-computation-function.swift.galgasTemplate", 10)).stringValue () ;
  result << " {\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@proxyDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_proxyDeclarationAST::method_enterInPrecedenceGraph (GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_proxyDeclarationAST temp_0 = this ;
  const GALGAS_proxyDeclarationAST temp_1 = this ;
  const GALGAS_proxyDeclarationAST temp_2 = this ;
  GALGAS_lstring var_node_909 = GALGAS_lstring::constructor_new (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 23)).add_operation (temp_1.readProperty_mProxyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 23)), temp_2.readProperty_mProxyName ().readProperty_location ()  COMMA_SOURCE_FILE ("proxy.ggs", 23)) ;
  {
  const GALGAS_proxyDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_909, temp_3, inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 24)) ;
  }
  {
  const GALGAS_proxyDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_909, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("proxy.ggs", 25)) ;
  }
  {
  const GALGAS_proxyDeclarationAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_909, temp_5.readProperty_mProxyTypeName () COMMA_SOURCE_FILE ("proxy.ggs", 26)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@proxyDeclarationAST nodeKey'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_proxyDeclarationAST::getter_nodeKey (C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result_result ; // Returned variable
  const GALGAS_proxyDeclarationAST temp_0 = this ;
  const GALGAS_proxyDeclarationAST temp_1 = this ;
  const GALGAS_proxyDeclarationAST temp_2 = this ;
  result_result = GALGAS_lstring::constructor_new (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 32)).add_operation (temp_1.readProperty_mProxyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 32)), temp_2.readProperty_mProxyName ().readProperty_location ()  COMMA_SOURCE_FILE ("proxy.ggs", 32)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@proxyDeclarationAST firstAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_proxyDeclarationAST::method_firstAnalysisPhase (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                          GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_proxyDeclarationAST temp_0 = this ;
  cMapElement_classMap * objectArray_3268 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("proxy.ggs", 87)) ;
  if (NULL != objectArray_3268) {
    macroValidSharedObject (objectArray_3268, cMapElement_classMap) ;
    GALGAS_classKind var_proxyKind_3430 ;
    const GALGAS_proxyDeclarationAST temp_1 = this ;
    GALGAS_propertyMap joker_3432_3 ; // Joker input parameter
    GALGAS_actionMap joker_3432_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_3432_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mProxyTypeName (), var_proxyKind_3430, joker_3432_3, joker_3432_2, joker_3432_1, inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 90)) ;
    switch (var_proxyKind_3430.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
      {
        const GALGAS_proxyDeclarationAST temp_2 = this ;
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (temp_2.readProperty_mProxyTypeName ().readProperty_location (), GALGAS_string ("an atomic type is required here"), fixItArray3  COMMA_SOURCE_FILE ("proxy.ggs", 93)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        const cEnumAssociatedValues_classKind_entity * extractPtr_3976 = (const cEnumAssociatedValues_classKind_entity *) (var_proxyKind_3430.unsafePointer ()) ;
        const GALGAS_bool extractedValue_3576_isGraphic = extractPtr_3976->mAssociatedValue1 ;
        const GALGAS_proxyDeclarationAST temp_4 = this ;
        switch (temp_4.readProperty_mProxyKind ().enumValue ()) {
        case GALGAS_proxyKind::kNotBuilt:
          break ;
        case GALGAS_proxyKind::kEnum_toManyProxy:
          {
            const GALGAS_proxyDeclarationAST temp_5 = this ;
            GALGAS_propertyKind var_k_3648 = GALGAS_propertyKind::constructor_toMany (temp_5.readProperty_mProxyTypeName (), GALGAS_propertyAccessibility::constructor_stored (SOURCE_FILE ("proxy.ggs", 99)), extractedValue_3576_isGraphic, GALGAS_toManyRelationshipOptionAST::constructor_none (SOURCE_FILE ("proxy.ggs", 101))  COMMA_SOURCE_FILE ("proxy.ggs", 97)) ;
            {
            const GALGAS_proxyDeclarationAST temp_6 = this ;
            objectArray_3268->mProperty_mPropertyMap.setter_insertKey (temp_6.readProperty_mProxyName (), var_k_3648, GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("proxy.ggs", 103)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 103)) ;
            }
          }
          break ;
        case GALGAS_proxyKind::kEnum_propertyProxy:
          {
            const GALGAS_proxyDeclarationAST temp_7 = this ;
            TC_Array <C_FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (temp_7.readProperty_mProxyTypeName ().readProperty_location (), GALGAS_string ("this type should be an entity"), fixItArray8  COMMA_SOURCE_FILE ("proxy.ggs", 105)) ;
          }
          break ;
        }
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
        const GALGAS_proxyDeclarationAST temp_9 = this ;
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (temp_9.readProperty_mProxyTypeName ().readProperty_location (), GALGAS_string ("an atomic type is required here"), fixItArray10  COMMA_SOURCE_FILE ("proxy.ggs", 108)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
        const cEnumAssociatedValues_classKind_atomic * extractPtr_4203 = (const cEnumAssociatedValues_classKind_atomic *) (var_proxyKind_3430.unsafePointer ()) ;
        const GALGAS_typeKind extractedValue_4090_type = extractPtr_4203->mAssociatedValue0 ;
        {
        const GALGAS_proxyDeclarationAST temp_11 = this ;
        objectArray_3268->mProperty_mPropertyMap.setter_insertKey (temp_11.readProperty_mProxyName (), GALGAS_propertyKind::constructor_property (extractedValue_4090_type, GALGAS_propertyAccessibility::constructor_stored (SOURCE_FILE ("proxy.ggs", 110))  COMMA_SOURCE_FILE ("proxy.ggs", 110)), GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("proxy.ggs", 110)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 110)) ;
        }
      }
      break ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@proxyDeclarationAST secondAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_proxyDeclarationAST::method_secondAnalysisPhase (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                           GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_proxyDeclarationAST temp_0 = this ;
  cMapElement_classMap * objectArray_4499 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("proxy.ggs", 121)) ;
  if (NULL != objectArray_4499) {
    macroValidSharedObject (objectArray_4499, cMapElement_classMap) ;
    GALGAS_propertyKind var_relationshipKind_4661 ;
    const GALGAS_proxyDeclarationAST temp_1 = this ;
    GALGAS_actionMap joker_4663_2 ; // Joker input parameter
    GALGAS_bool joker_4663_1 ; // Joker input parameter
    objectArray_4499->mProperty_mPropertyMap.method_searchKey (temp_1.readProperty_mToOneRelationshipName (), var_relationshipKind_4661, joker_4663_2, joker_4663_1, inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 124)) ;
    switch (var_relationshipKind_4661.enumValue ()) {
    case GALGAS_propertyKind::kNotBuilt:
      break ;
    case GALGAS_propertyKind::kEnum_arrayController:
      {
        const GALGAS_proxyDeclarationAST temp_2 = this ;
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (temp_2.readProperty_mToOneRelationshipName ().readProperty_location (), GALGAS_string ("a toOne relationship is required here"), fixItArray3  COMMA_SOURCE_FILE ("proxy.ggs", 127)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_selectionController:
      {
        const GALGAS_proxyDeclarationAST temp_4 = this ;
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (temp_4.readProperty_mToOneRelationshipName ().readProperty_location (), GALGAS_string ("a toOne relationship is required here"), fixItArray5  COMMA_SOURCE_FILE ("proxy.ggs", 129)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_property:
      {
        const GALGAS_proxyDeclarationAST temp_6 = this ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mToOneRelationshipName ().readProperty_location (), GALGAS_string ("a toOne relationship is required here"), fixItArray7  COMMA_SOURCE_FILE ("proxy.ggs", 131)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_toMany:
      {
        const GALGAS_proxyDeclarationAST temp_8 = this ;
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (temp_8.readProperty_mToOneRelationshipName ().readProperty_location (), GALGAS_string ("a toOne relationship is required here"), fixItArray9  COMMA_SOURCE_FILE ("proxy.ggs", 133)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_toOne:
      {
        const cEnumAssociatedValues_propertyKind_toOne * extractPtr_7097 = (const cEnumAssociatedValues_propertyKind_toOne *) (var_relationshipKind_4661.unsafePointer ()) ;
        const GALGAS_lstring extractedValue_5167_toOneTypeName = extractPtr_7097->mAssociatedValue0 ;
        GALGAS_propertyMap var_propertyMap_5253 ;
        GALGAS_classKind joker_5235 ; // Joker input parameter
        GALGAS_actionMap joker_5255_2 ; // Joker input parameter
        GALGAS_propertyGenerationList joker_5255_1 ; // Joker input parameter
        ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_5167_toOneTypeName, joker_5235, var_propertyMap_5253, joker_5255_2, joker_5255_1, inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 135)) ;
        GALGAS_propertyKind var_propertyKind_5325 ;
        const GALGAS_proxyDeclarationAST temp_10 = this ;
        GALGAS_actionMap joker_5327_2 ; // Joker input parameter
        GALGAS_bool joker_5327_1 ; // Joker input parameter
        var_propertyMap_5253.method_searchKey (temp_10.readProperty_mPropertyName (), var_propertyKind_5325, joker_5327_2, joker_5327_1, inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 136)) ;
        switch (var_propertyKind_5325.enumValue ()) {
        case GALGAS_propertyKind::kNotBuilt:
          break ;
        case GALGAS_propertyKind::kEnum_property:
          {
            const cEnumAssociatedValues_propertyKind_property * extractPtr_5768 = (const cEnumAssociatedValues_propertyKind_property *) (var_propertyKind_5325.unsafePointer ()) ;
            const GALGAS_typeKind extractedValue_5390_propertyType = extractPtr_5768->mAssociatedValue0 ;
            const GALGAS_proxyDeclarationAST temp_11 = this ;
            const GALGAS_proxyDeclarationAST temp_12 = this ;
            const GALGAS_proxyDeclarationAST temp_13 = this ;
            const GALGAS_proxyDeclarationAST temp_14 = this ;
            objectArray_4499->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_atomicProxyGeneration::constructor_new (temp_11.readProperty_mProxyName ().readProperty_string (), temp_12.readProperty_mProxyKind (), extractedValue_5390_propertyType, temp_13.readProperty_mToOneRelationshipName ().readProperty_string (), temp_14.readProperty_mPropertyName ().readProperty_string ()  COMMA_SOURCE_FILE ("proxy.ggs", 139))  COMMA_SOURCE_FILE ("proxy.ggs", 139)) ;
            enumGalgasBool test_15 = kBoolTrue ;
            if (kBoolTrue == test_15) {
              const GALGAS_proxyDeclarationAST temp_16 = this ;
              test_15 = GALGAS_bool (kIsNotEqual, temp_16.readProperty_mProxyKind ().objectCompare (GALGAS_proxyKind::constructor_propertyProxy (SOURCE_FILE ("proxy.ggs", 146)))).boolEnum () ;
              if (kBoolTrue == test_15) {
                const GALGAS_proxyDeclarationAST temp_17 = this ;
                TC_Array <C_FixItDescription> fixItArray18 ;
                inCompiler->emitSemanticError (temp_17.readProperty_mPropertyName ().readProperty_location (), GALGAS_string ("this property is not atomic"), fixItArray18  COMMA_SOURCE_FILE ("proxy.ggs", 147)) ;
              }
            }
          }
          break ;
        case GALGAS_propertyKind::kEnum_toMany:
          {
            const cEnumAssociatedValues_propertyKind_toMany * extractPtr_6248 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_propertyKind_5325.unsafePointer ()) ;
            const GALGAS_lstring extractedValue_5802_toManyTypeName = extractPtr_6248->mAssociatedValue0 ;
            GALGAS_classKind joker_5873_4 ; // Joker input parameter
            GALGAS_propertyMap joker_5873_3 ; // Joker input parameter
            GALGAS_actionMap joker_5873_2 ; // Joker input parameter
            GALGAS_propertyGenerationList joker_5873_1 ; // Joker input parameter
            ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_5802_toManyTypeName, joker_5873_4, joker_5873_3, joker_5873_2, joker_5873_1, inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 150)) ;
            const GALGAS_proxyDeclarationAST temp_19 = this ;
            const GALGAS_proxyDeclarationAST temp_20 = this ;
            const GALGAS_proxyDeclarationAST temp_21 = this ;
            const GALGAS_proxyDeclarationAST temp_22 = this ;
            objectArray_4499->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_toManyProxyGeneration::constructor_new (temp_19.readProperty_mProxyName ().readProperty_string (), temp_20.readProperty_mProxyKind (), extractedValue_5802_toManyTypeName.readProperty_string (), temp_21.readProperty_mToOneRelationshipName ().readProperty_string (), temp_22.readProperty_mPropertyName ().readProperty_string ()  COMMA_SOURCE_FILE ("proxy.ggs", 151))  COMMA_SOURCE_FILE ("proxy.ggs", 151)) ;
            enumGalgasBool test_23 = kBoolTrue ;
            if (kBoolTrue == test_23) {
              const GALGAS_proxyDeclarationAST temp_24 = this ;
              test_23 = GALGAS_bool (kIsNotEqual, temp_24.readProperty_mProxyKind ().objectCompare (GALGAS_proxyKind::constructor_toManyProxy (SOURCE_FILE ("proxy.ggs", 158)))).boolEnum () ;
              if (kBoolTrue == test_23) {
                const GALGAS_proxyDeclarationAST temp_25 = this ;
                TC_Array <C_FixItDescription> fixItArray26 ;
                inCompiler->emitSemanticError (temp_25.readProperty_mPropertyName ().readProperty_location (), GALGAS_string ("this property is not atomic"), fixItArray26  COMMA_SOURCE_FILE ("proxy.ggs", 159)) ;
              }
            }
          }
          break ;
        case GALGAS_propertyKind::kEnum_toOne:
          {
            const GALGAS_proxyDeclarationAST temp_27 = this ;
            switch (temp_27.readProperty_mProxyKind ().enumValue ()) {
            case GALGAS_proxyKind::kNotBuilt:
              break ;
            case GALGAS_proxyKind::kEnum_propertyProxy:
              {
                const GALGAS_proxyDeclarationAST temp_28 = this ;
                TC_Array <C_FixItDescription> fixItArray29 ;
                inCompiler->emitSemanticError (temp_28.readProperty_mPropertyName ().readProperty_location (), GALGAS_string ("an atomic property is required here"), fixItArray29  COMMA_SOURCE_FILE ("proxy.ggs", 164)) ;
              }
              break ;
            case GALGAS_proxyKind::kEnum_toManyProxy:
              {
                const GALGAS_proxyDeclarationAST temp_30 = this ;
                TC_Array <C_FixItDescription> fixItArray31 ;
                inCompiler->emitSemanticError (temp_30.readProperty_mPropertyName ().readProperty_location (), GALGAS_string ("a toMany property is required here"), fixItArray31  COMMA_SOURCE_FILE ("proxy.ggs", 166)) ;
              }
              break ;
            }
          }
          break ;
        case GALGAS_propertyKind::kEnum_arrayController:
          {
            const GALGAS_proxyDeclarationAST temp_32 = this ;
            switch (temp_32.readProperty_mProxyKind ().enumValue ()) {
            case GALGAS_proxyKind::kNotBuilt:
              break ;
            case GALGAS_proxyKind::kEnum_propertyProxy:
              {
                const GALGAS_proxyDeclarationAST temp_33 = this ;
                TC_Array <C_FixItDescription> fixItArray34 ;
                inCompiler->emitSemanticError (temp_33.readProperty_mPropertyName ().readProperty_location (), GALGAS_string ("an atomic property is required here"), fixItArray34  COMMA_SOURCE_FILE ("proxy.ggs", 171)) ;
              }
              break ;
            case GALGAS_proxyKind::kEnum_toManyProxy:
              {
                const GALGAS_proxyDeclarationAST temp_35 = this ;
                TC_Array <C_FixItDescription> fixItArray36 ;
                inCompiler->emitSemanticError (temp_35.readProperty_mPropertyName ().readProperty_location (), GALGAS_string ("a toMany property is required here"), fixItArray36  COMMA_SOURCE_FILE ("proxy.ggs", 173)) ;
              }
              break ;
            }
          }
          break ;
        case GALGAS_propertyKind::kEnum_selectionController:
          {
            const GALGAS_proxyDeclarationAST temp_37 = this ;
            switch (temp_37.readProperty_mProxyKind ().enumValue ()) {
            case GALGAS_proxyKind::kNotBuilt:
              break ;
            case GALGAS_proxyKind::kEnum_propertyProxy:
              {
                const GALGAS_proxyDeclarationAST temp_38 = this ;
                TC_Array <C_FixItDescription> fixItArray39 ;
                inCompiler->emitSemanticError (temp_38.readProperty_mPropertyName ().readProperty_location (), GALGAS_string ("an atomic property is required here"), fixItArray39  COMMA_SOURCE_FILE ("proxy.ggs", 178)) ;
              }
              break ;
            case GALGAS_proxyKind::kEnum_toManyProxy:
              {
                const GALGAS_proxyDeclarationAST temp_40 = this ;
                TC_Array <C_FixItDescription> fixItArray41 ;
                inCompiler->emitSemanticError (temp_40.readProperty_mPropertyName ().readProperty_location (), GALGAS_string ("a toMany property is required here"), fixItArray41  COMMA_SOURCE_FILE ("proxy.ggs", 180)) ;
              }
              break ;
            }
          }
          break ;
        }
      }
      break ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyProxyGeneration declarationInSelectionControllerCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toManyProxyGeneration::getter_declarationInSelectionControllerCode (C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("proxy.ggs", 207)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 207)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 207)) ;
  const GALGAS_toManyProxyGeneration temp_0 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  //   ToMany proxy: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 208)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 208)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 208)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("proxy.ggs", 209)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 209)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 209)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 209)) ;
  const GALGAS_toManyProxyGeneration temp_1 = this ;
  const GALGAS_toManyProxyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 210)).add_operation (GALGAS_string ("_property = ProxyArrayOf_"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 210)).add_operation (temp_2.readProperty_mToManyTypeName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 210)).add_operation (GALGAS_string (" ()\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 210)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 210)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyProxyGeneration initCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toManyProxyGeneration::getter_initCode (C_Compiler */* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyProxyGeneration bindPropertyInSelectionController'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toManyProxyGeneration::getter_bindPropertyInSelectionController (C_Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyProxyGeneration propertyDeclarationCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toManyProxyGeneration::getter_propertyDeclarationCode (const GALGAS_bool /* constinArgument_inPreferences */,
                                                                          const GALGAS_stringset /* constinArgument_inOverriddenTransients */,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("proxy.ggs", 231)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 231)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 231)) ;
  const GALGAS_toManyProxyGeneration temp_0 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  //   ToMany proxy: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 232)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 232)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 232)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("proxy.ggs", 233)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 233)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 233)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 233)) ;
  const GALGAS_toManyProxyGeneration temp_1 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  var ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 234)).add_operation (GALGAS_string ("_modelDidChangeController : EBObservablePropertyController\? = nil\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 234)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 234)) ;
  const GALGAS_toManyProxyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  // var ").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 235)).add_operation (GALGAS_string ("_boundObjectDidChangeController : EBObservablePropertyController\? = nil\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 235)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 235)) ;
  const GALGAS_toManyProxyGeneration temp_3 = this ;
  const GALGAS_toManyProxyGeneration temp_4 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  let ").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 236)).add_operation (GALGAS_string ("_property = ProxyArrayOf_"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 236)).add_operation (temp_4.readProperty_mToManyTypeName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 236)).add_operation (GALGAS_string (" ()\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 236)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 236)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("proxy.ggs", 237)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 237)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 237)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 237)) ;
  const GALGAS_toManyProxyGeneration temp_5 = this ;
  const GALGAS_toManyProxyGeneration temp_6 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  var ").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 238)).add_operation (GALGAS_string (" : EBReferenceArray <"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 238)).add_operation (temp_6.readProperty_mToManyTypeName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 238)).add_operation (GALGAS_string ("> {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 238)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 238)) ;
  result_result.plusAssign_operation(GALGAS_string ("    get {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 239)) ;
  const GALGAS_toManyProxyGeneration temp_7 = this ;
  result_result.plusAssign_operation(GALGAS_string ("      switch self.").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 240)).add_operation (GALGAS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 240)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 240)) ;
  result_result.plusAssign_operation(GALGAS_string ("      case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 241)) ;
  result_result.plusAssign_operation(GALGAS_string ("        return EBReferenceArray ()\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 242)) ;
  result_result.plusAssign_operation(GALGAS_string ("      case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 243)) ;
  result_result.plusAssign_operation(GALGAS_string ("        return EBReferenceArray (v)\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 244)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 245)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 246)) ;
  result_result.plusAssign_operation(GALGAS_string ("    set {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 247)) ;
  const GALGAS_toManyProxyGeneration temp_8 = this ;
  result_result.plusAssign_operation(GALGAS_string ("      self.").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 248)).add_operation (GALGAS_string ("_property.setProp (newValue)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 248)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 248)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 249)) ;
  result_result.plusAssign_operation(GALGAS_string ("  }\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 250)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyProxyGeneration configurationCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toManyProxyGeneration::getter_configurationCode (const GALGAS_bool /* constinArgument_inPreferences */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_toManyProxyGeneration temp_0 = this ;
  result_result = GALGAS_string ("  //--- ToMany proxy: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 256)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 256)) ;
  result_result.plusAssign_operation(GALGAS_string ("    do{\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 257)) ;
  result_result.plusAssign_operation(GALGAS_string ("      let controller = EBObservablePropertyController (\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 258)) ;
  const GALGAS_toManyProxyGeneration temp_1 = this ;
  result_result.plusAssign_operation(GALGAS_string ("        observedObjects: [self.").add_operation (temp_1.readProperty_mObservedRelationshipName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 259)).add_operation (GALGAS_string ("_property],\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 259)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 259)) ;
  result_result.plusAssign_operation(GALGAS_string ("        callBack: { [weak self] in\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 260)) ;
  const GALGAS_toManyProxyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("          if let me = self, let model = me.").add_operation (temp_2.readProperty_mObservedRelationshipName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 261)).add_operation (GALGAS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 261)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 261)) ;
  const GALGAS_toManyProxyGeneration temp_3 = this ;
  const GALGAS_toManyProxyGeneration temp_4 = this ;
  result_result.plusAssign_operation(GALGAS_string ("            me.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 262)).add_operation (GALGAS_string ("_property.setModel (model."), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 262)).add_operation (temp_4.readProperty_mObservedPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 262)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 262)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 262)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 263)) ;
  result_result.plusAssign_operation(GALGAS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 264)) ;
  result_result.plusAssign_operation(GALGAS_string ("      )\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 265)) ;
  const GALGAS_toManyProxyGeneration temp_5 = this ;
  const GALGAS_toManyProxyGeneration temp_6 = this ;
  result_result.plusAssign_operation(GALGAS_string ("      self.").add_operation (temp_5.readProperty_mObservedRelationshipName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 266)).add_operation (GALGAS_string ("_property.addEBObserverOf_"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 266)).add_operation (temp_6.readProperty_mObservedPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 266)).add_operation (GALGAS_string (" (controller)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 266)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 266)) ;
  const GALGAS_toManyProxyGeneration temp_7 = this ;
  result_result.plusAssign_operation(GALGAS_string ("      self.").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 267)).add_operation (GALGAS_string ("_modelDidChangeController = controller\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 267)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 267)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 268)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyProxyGeneration terminationCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toManyProxyGeneration::getter_terminationCode (const GALGAS_bool /* constinArgument_inPreferences */,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_toManyProxyGeneration temp_0 = this ;
  result_result = GALGAS_string ("  //--- ToMany proxy: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 274)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 274)) ;
  const GALGAS_toManyProxyGeneration temp_1 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 275)).add_operation (GALGAS_string ("_property.setModel (nil)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 275)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 275)) ;
  const GALGAS_toManyProxyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 276)).add_operation (GALGAS_string ("_modelDidChangeController\?.unregister ()\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 276)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 276)) ;
  const GALGAS_toManyProxyGeneration temp_3 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 277)).add_operation (GALGAS_string ("_modelDidChangeController = nil\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 277)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 277)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyProxyGeneration clearObjectExplorerCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toManyProxyGeneration::getter_clearObjectExplorerCode (C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_toManyProxyGeneration temp_0 = this ;
  result_result = GALGAS_string ("    //--- ToMany proxy: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 283)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 283)) ;
  const GALGAS_toManyProxyGeneration temp_1 = this ;
  result_result.plusAssign_operation(GALGAS_string ("      self.").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 284)).add_operation (GALGAS_string ("_property.mObserverExplorer = nil\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 284)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 284)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicProxyGeneration declarationInSelectionControllerCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_atomicProxyGeneration::getter_declarationInSelectionControllerCode (C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("proxy.ggs", 307)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 307)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 307)) ;
  const GALGAS_atomicProxyGeneration temp_0 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  //   Atomic proxy property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 308)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 308)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 308)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("proxy.ggs", 309)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 309)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 309)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 309)) ;
  const GALGAS_atomicProxyGeneration temp_1 = this ;
  const GALGAS_atomicProxyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 310)).add_operation (GALGAS_string ("_property = EBPropertyProxy_"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 310)).add_operation (extensionGetter_swiftTypeName (temp_2.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 310)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 310)).add_operation (GALGAS_string (" ()\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 310)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 310)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicProxyGeneration initCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_atomicProxyGeneration::getter_initCode (C_Compiler */* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicProxyGeneration bindPropertyInSelectionController'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_atomicProxyGeneration::getter_bindPropertyInSelectionController (C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("proxy.ggs", 322)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 322)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 322)) ;
  const GALGAS_atomicProxyGeneration temp_0 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  private final func bind_property_").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 323)).add_operation (GALGAS_string (" () {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 323)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 323)) ;
  const GALGAS_atomicProxyGeneration temp_1 = this ;
  const GALGAS_atomicProxyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    self.selectedArray_property.addEBObserverOf_").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 324)).add_operation (GALGAS_string (" (self."), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 324)).add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 324)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 324)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 324)) ;
  const GALGAS_atomicProxyGeneration temp_3 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 325)).add_operation (GALGAS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 325)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 325)) ;
  result_result.plusAssign_operation(GALGAS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 326)) ;
  result_result.plusAssign_operation(GALGAS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 327)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 328)) ;
  result_result.plusAssign_operation(GALGAS_string ("          return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 329)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 330)) ;
  result_result.plusAssign_operation(GALGAS_string ("          return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 331)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 332)) ;
  const GALGAS_atomicProxyGeneration temp_4 = this ;
  result_result.plusAssign_operation(GALGAS_string ("          var s = Set <").add_operation (extensionGetter_swiftTypeName (temp_4.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 333)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 333)).add_operation (GALGAS_string ("> ()\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 333)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 333)) ;
  result_result.plusAssign_operation(GALGAS_string ("          var isMultipleSelection = false\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 334)) ;
  result_result.plusAssign_operation(GALGAS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 335)) ;
  const GALGAS_atomicProxyGeneration temp_5 = this ;
  result_result.plusAssign_operation(GALGAS_string ("            switch object.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 336)).add_operation (GALGAS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 336)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 336)) ;
  result_result.plusAssign_operation(GALGAS_string ("            case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 337)) ;
  result_result.plusAssign_operation(GALGAS_string ("              return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 338)) ;
  result_result.plusAssign_operation(GALGAS_string ("            case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 339)) ;
  result_result.plusAssign_operation(GALGAS_string ("              isMultipleSelection = true\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 340)) ;
  result_result.plusAssign_operation(GALGAS_string ("            case .single (let vProp) :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 341)) ;
  result_result.plusAssign_operation(GALGAS_string ("              s.insert (vProp)\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 342)) ;
  result_result.plusAssign_operation(GALGAS_string ("            }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 343)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 344)) ;
  result_result.plusAssign_operation(GALGAS_string ("          if isMultipleSelection {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 345)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 346)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }else if s.count == 0 {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 347)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 348)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }else if s.count == 1 {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 349)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .single (s.first!)\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 350)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }else{\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 351)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 352)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 353)) ;
  result_result.plusAssign_operation(GALGAS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 354)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 355)) ;
  result_result.plusAssign_operation(GALGAS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 356)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 357)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 358)) ;
  const GALGAS_atomicProxyGeneration temp_6 = this ;
  const GALGAS_atomicProxyGeneration temp_7 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 360)).add_operation (GALGAS_string ("_property.mWriteModelFunction = { [weak self] (inValue : "), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 360)).add_operation (extensionGetter_swiftTypeName (temp_7.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 360)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 360)).add_operation (GALGAS_string (") in\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 360)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 360)) ;
  result_result.plusAssign_operation(GALGAS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 361)) ;
  result_result.plusAssign_operation(GALGAS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 362)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 363)) ;
  result_result.plusAssign_operation(GALGAS_string ("          break\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 364)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 365)) ;
  result_result.plusAssign_operation(GALGAS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 366)) ;
  const GALGAS_atomicProxyGeneration temp_8 = this ;
  result_result.plusAssign_operation(GALGAS_string ("            object.").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 367)).add_operation (GALGAS_string ("_property.setProp (inValue)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 367)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 367)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 368)) ;
  result_result.plusAssign_operation(GALGAS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 369)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 370)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 371)) ;
  result_result.plusAssign_operation(GALGAS_string ("  }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 372)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicProxyGeneration propertyDeclarationCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_atomicProxyGeneration::getter_propertyDeclarationCode (const GALGAS_bool /* constinArgument_inPreferences */,
                                                                          const GALGAS_stringset /* constinArgument_inOverriddenTransients */,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("proxy.ggs", 381)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 381)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 381)) ;
  const GALGAS_atomicProxyGeneration temp_0 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  //   Atomic proxy property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 382)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 382)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 382)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("proxy.ggs", 383)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 383)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 383)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 383)) ;
  const GALGAS_atomicProxyGeneration temp_1 = this ;
  const GALGAS_atomicProxyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 384)).add_operation (GALGAS_string ("_property = EBPropertyProxy_"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 384)).add_operation (extensionGetter_swiftTypeName (temp_2.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 384)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 384)).add_operation (GALGAS_string (" ()\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 384)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 384)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("proxy.ggs", 385)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 385)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 385)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 385)) ;
  const GALGAS_atomicProxyGeneration temp_3 = this ;
  const GALGAS_atomicProxyGeneration temp_4 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  var ").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 386)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 386)).add_operation (extensionGetter_swiftTypeName (temp_4.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 386)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 386)).add_operation (GALGAS_string ("\? {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 386)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 386)) ;
  result_result.plusAssign_operation(GALGAS_string ("    get {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 387)) ;
  const GALGAS_atomicProxyGeneration temp_5 = this ;
  result_result.plusAssign_operation(GALGAS_string ("      switch self.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 388)).add_operation (GALGAS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 388)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 388)) ;
  result_result.plusAssign_operation(GALGAS_string ("      case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 389)) ;
  result_result.plusAssign_operation(GALGAS_string ("        return nil\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 390)) ;
  result_result.plusAssign_operation(GALGAS_string ("      case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 391)) ;
  result_result.plusAssign_operation(GALGAS_string ("        return v\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 392)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 393)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 394)) ;
  result_result.plusAssign_operation(GALGAS_string ("    set {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 395)) ;
  result_result.plusAssign_operation(GALGAS_string ("      if let unwrappedNewValue = newValue {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 396)) ;
  const GALGAS_atomicProxyGeneration temp_6 = this ;
  result_result.plusAssign_operation(GALGAS_string ("        self.").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 397)).add_operation (GALGAS_string ("_property.setProp (unwrappedNewValue)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 397)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 397)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 398)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 399)) ;
  result_result.plusAssign_operation(GALGAS_string ("  }\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 400)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicProxyGeneration configurationCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_atomicProxyGeneration::getter_configurationCode (const GALGAS_bool /* constinArgument_inPreferences */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_atomicProxyGeneration temp_0 = this ;
  result_result = GALGAS_string ("  //--- Atomic proxy property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 406)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 406)) ;
  const GALGAS_atomicProxyGeneration temp_1 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 407)).add_operation (GALGAS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 407)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 407)) ;
  const GALGAS_atomicProxyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("      if let object = self\?.").add_operation (temp_2.readProperty_mObservedRelationshipName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 408)).add_operation (GALGAS_string ("_property {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 408)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 408)) ;
  const GALGAS_atomicProxyGeneration temp_3 = this ;
  result_result.plusAssign_operation(GALGAS_string ("        switch object.").add_operation (temp_3.readProperty_mObservedPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 409)).add_operation (GALGAS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 409)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 409)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 410)) ;
  result_result.plusAssign_operation(GALGAS_string ("          return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 411)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 412)) ;
  result_result.plusAssign_operation(GALGAS_string ("          return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 413)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .single (let optionalV) :\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 414)) ;
  result_result.plusAssign_operation(GALGAS_string ("          if let v = optionalV {\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 415)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .single (v)\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 416)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }else{\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 417)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 418)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 419)) ;
  result_result.plusAssign_operation(GALGAS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 420)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 421)) ;
  result_result.plusAssign_operation(GALGAS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 422)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 423)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 424)) ;
  const GALGAS_atomicProxyGeneration temp_4 = this ;
  const GALGAS_atomicProxyGeneration temp_5 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 425)).add_operation (GALGAS_string ("_property.mWriteModelFunction = { [weak self] (_ inValue : "), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 425)).add_operation (extensionGetter_swiftTypeName (temp_5.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 425)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 425)).add_operation (GALGAS_string (") in\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 425)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 425)) ;
  const GALGAS_atomicProxyGeneration temp_6 = this ;
  const GALGAS_atomicProxyGeneration temp_7 = this ;
  result_result.plusAssign_operation(GALGAS_string ("      self\?.").add_operation (temp_6.readProperty_mObservedRelationshipName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 426)).add_operation (GALGAS_string ("\?."), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 426)).add_operation (temp_7.readProperty_mObservedPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 426)).add_operation (GALGAS_string (" = inValue\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 426)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 426)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 427)) ;
  const GALGAS_atomicProxyGeneration temp_8 = this ;
  const GALGAS_atomicProxyGeneration temp_9 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_8.readProperty_mObservedRelationshipName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 428)).add_operation (GALGAS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 428)).add_operation (temp_9.readProperty_mObservedPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 428)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 428)) ;
  const GALGAS_atomicProxyGeneration temp_10 = this ;
  result_result.plusAssign_operation(GALGAS_string ("_property.addEBObserver (self.").add_operation (temp_10.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 429)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 429)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 429)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicProxyGeneration terminationCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_atomicProxyGeneration::getter_terminationCode (const GALGAS_bool /* constinArgument_inPreferences */,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_atomicProxyGeneration temp_0 = this ;
  result_result = GALGAS_string ("  //--- Atomic proxy property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 435)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 435)) ;
  const GALGAS_atomicProxyGeneration temp_1 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 436)).add_operation (GALGAS_string ("_property.mReadModelFunction = nil\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 436)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 436)) ;
  const GALGAS_atomicProxyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 437)).add_operation (GALGAS_string ("_property.mWriteModelFunction = nil\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 437)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 437)) ;
  const GALGAS_atomicProxyGeneration temp_3 = this ;
  const GALGAS_atomicProxyGeneration temp_4 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_3.readProperty_mObservedRelationshipName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 438)).add_operation (GALGAS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 438)).add_operation (temp_4.readProperty_mObservedPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 438)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 438)) ;
  const GALGAS_atomicProxyGeneration temp_5 = this ;
  result_result.plusAssign_operation(GALGAS_string ("_property.removeEBObserver (self.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 439)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 439)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 439)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicProxyGeneration clearObjectExplorerCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_atomicProxyGeneration::getter_clearObjectExplorerCode (C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_atomicProxyGeneration temp_0 = this ;
  result_result = GALGAS_string ("    //--- Atomic proxy property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 445)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 445)) ;
  const GALGAS_atomicProxyGeneration temp_1 = this ;
  result_result.plusAssign_operation(GALGAS_string ("      self.").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 446)).add_operation (GALGAS_string ("_property.mObserverExplorer = nil\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 446)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 446)) ;
  const GALGAS_atomicProxyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("      self.").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 447)).add_operation (GALGAS_string ("_property.mValueExplorer = nil\n"), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 447)), inCompiler  COMMA_SOURCE_FILE ("proxy.ggs", 447)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@atomicPropertyDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_atomicPropertyDeclarationAST::method_enterInPrecedenceGraph (GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_atomicPropertyDeclarationAST temp_0 = this ;
  const GALGAS_atomicPropertyDeclarationAST temp_1 = this ;
  const GALGAS_atomicPropertyDeclarationAST temp_2 = this ;
  GALGAS_lstring var_node_1043 = GALGAS_lstring::constructor_new (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 24)).add_operation (temp_1.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 24)), temp_2.readProperty_mPropertyName ().readProperty_location ()  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 24)) ;
  {
  const GALGAS_atomicPropertyDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_1043, temp_3, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 25)) ;
  }
  {
  const GALGAS_atomicPropertyDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_1043, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("simple-stored-property.ggs", 26)) ;
  }
  {
  const GALGAS_atomicPropertyDeclarationAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_1043, temp_5.readProperty_mPropertyTypeName () COMMA_SOURCE_FILE ("simple-stored-property.ggs", 27)) ;
  }
  const GALGAS_atomicPropertyDeclarationAST temp_6 = this ;
  callExtensionMethod_enterDefaultValuePrecedence ((cPtr_abstractDefaultValue *) temp_6.readProperty_mDefaultValue ().ptr (), var_node_1043, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 28)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyDeclarationAST nodeKey'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_atomicPropertyDeclarationAST::getter_nodeKey (C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result_result ; // Returned variable
  const GALGAS_atomicPropertyDeclarationAST temp_0 = this ;
  const GALGAS_atomicPropertyDeclarationAST temp_1 = this ;
  const GALGAS_atomicPropertyDeclarationAST temp_2 = this ;
  result_result = GALGAS_lstring::constructor_new (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 34)).add_operation (temp_1.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 34)), temp_2.readProperty_mPropertyName ().readProperty_location ()  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 34)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@atomicPropertyDeclarationAST firstAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_atomicPropertyDeclarationAST::method_firstAnalysisPhase (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                   GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_atomicPropertyDeclarationAST temp_0 = this ;
  cMapElement_classMap * objectArray_4080 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 103)) ;
  if (NULL != objectArray_4080) {
    macroValidSharedObject (objectArray_4080, cMapElement_classMap) ;
    GALGAS_classKind var_classKind_4245 ;
    const GALGAS_atomicPropertyDeclarationAST temp_1 = this ;
    GALGAS_propertyMap joker_4247_3 ; // Joker input parameter
    GALGAS_actionMap joker_4247_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_4247_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mPropertyTypeName (), var_classKind_4245, joker_4247_3, joker_4247_2, joker_4247_1, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 106)) ;
    GALGAS_propertyMap var_preferencesPropertyMap_4380 ;
    GALGAS_classKind joker_4345 ; // Joker input parameter
    GALGAS_actionMap joker_4388_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_4388_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 108)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("simple-stored-property.ggs", 108))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 108)), joker_4345, var_preferencesPropertyMap_4380, joker_4388_2, joker_4388_1, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 107)) ;
    switch (var_classKind_4245.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
      {
        const GALGAS_atomicPropertyDeclarationAST temp_2 = this ;
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (temp_2.readProperty_mPropertyTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray3  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 115)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
        const cEnumAssociatedValues_classKind_atomic * extractPtr_5082 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_4245.unsafePointer ()) ;
        const GALGAS_typeKind extractedValue_4528_kind = extractPtr_5082->mAssociatedValue0 ;
        {
        const GALGAS_atomicPropertyDeclarationAST temp_4 = this ;
        objectArray_4080->mProperty_mPropertyMap.setter_insertKey (temp_4.readProperty_mPropertyName (), GALGAS_propertyKind::constructor_property (extractedValue_4528_kind, GALGAS_propertyAccessibility::constructor_stored (SOURCE_FILE ("simple-stored-property.ggs", 117))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 117)), GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("simple-stored-property.ggs", 117)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 117)) ;
        }
        GALGAS_string var_swiftDefaultValueAsString_4797 ;
        const GALGAS_atomicPropertyDeclarationAST temp_5 = this ;
        GALGAS_typeKindList temp_6 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("simple-stored-property.ggs", 119)) ;
        temp_6.addAssign_operation (extractedValue_4528_kind  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 119)) ;
        callExtensionMethod_analyzeDefaultValueType ((cPtr_abstractDefaultValue *) temp_5.readProperty_mDefaultValue ().ptr (), temp_6, var_preferencesPropertyMap_4380, var_swiftDefaultValueAsString_4797, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 119)) ;
        const GALGAS_atomicPropertyDeclarationAST temp_7 = this ;
        const GALGAS_atomicPropertyDeclarationAST temp_8 = this ;
        objectArray_4080->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_atomicPropertyGeneration::constructor_new (temp_7.readProperty_mPropertyName ().readProperty_string (), extractedValue_4528_kind, GALGAS_bool (false), var_swiftDefaultValueAsString_4797, GALGAS_bool (kIsEqual, temp_8.readProperty_mClassName ().readProperty_string ().objectCompare (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 127))))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 121))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 121)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
        const GALGAS_atomicPropertyDeclarationAST temp_9 = this ;
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (temp_9.readProperty_mPropertyTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray10  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 137)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        const GALGAS_atomicPropertyDeclarationAST temp_11 = this ;
        TC_Array <C_FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (temp_11.readProperty_mPropertyTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray12  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 139)) ;
      }
      break ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyGeneration prefKeyDefinitionCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_atomicPropertyGeneration::getter_prefKeyDefinitionCode (C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_atomicPropertyGeneration temp_0 = this ;
  const GALGAS_atomicPropertyGeneration temp_1 = this ;
  result_result = GALGAS_string ("let Preferences_").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 165)).add_operation (GALGAS_string (" = \"Preferences:"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 165)).add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 165)).add_operation (GALGAS_string ("\"\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 165)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyGeneration declarationInSelectionControllerCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_atomicPropertyGeneration::getter_declarationInSelectionControllerCode (C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 171)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 171)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 171)) ;
  const GALGAS_atomicPropertyGeneration temp_0 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  //   Selection observable property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 172)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 172)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 172)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 173)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 173)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 173)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 173)) ;
  const GALGAS_atomicPropertyGeneration temp_1 = this ;
  const GALGAS_atomicPropertyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 174)).add_operation (GALGAS_string ("_property = EBPropertyProxy_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 174)).add_operation (extensionGetter_swiftTypeName (temp_2.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 174)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 174)).add_operation (GALGAS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 174)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 174)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyGeneration bindPropertyInSelectionController'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_atomicPropertyGeneration::getter_bindPropertyInSelectionController (C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 180)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 180)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 180)) ;
  const GALGAS_atomicPropertyGeneration temp_0 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  private final func bind_property_").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 181)).add_operation (GALGAS_string (" () {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 181)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 181)) ;
  const GALGAS_atomicPropertyGeneration temp_1 = this ;
  const GALGAS_atomicPropertyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    self.selectedArray_property.addEBObserverOf_").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 182)).add_operation (GALGAS_string (" (self."), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 182)).add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 182)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 182)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 182)) ;
  const GALGAS_atomicPropertyGeneration temp_3 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 183)).add_operation (GALGAS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 183)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 183)) ;
  result_result.plusAssign_operation(GALGAS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 184)) ;
  result_result.plusAssign_operation(GALGAS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 185)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 186)) ;
  result_result.plusAssign_operation(GALGAS_string ("          return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 187)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 188)) ;
  result_result.plusAssign_operation(GALGAS_string ("          return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 189)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 190)) ;
  const GALGAS_atomicPropertyGeneration temp_4 = this ;
  result_result.plusAssign_operation(GALGAS_string ("          var s = Set <").add_operation (extensionGetter_swiftTypeName (temp_4.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 191)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 191)).add_operation (GALGAS_string ("> ()\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 191)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 191)) ;
  result_result.plusAssign_operation(GALGAS_string ("          var isMultipleSelection = false\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 192)) ;
  result_result.plusAssign_operation(GALGAS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 193)) ;
  const GALGAS_atomicPropertyGeneration temp_5 = this ;
  result_result.plusAssign_operation(GALGAS_string ("            switch object.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 194)).add_operation (GALGAS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 194)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 194)) ;
  result_result.plusAssign_operation(GALGAS_string ("            case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 195)) ;
  result_result.plusAssign_operation(GALGAS_string ("              return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 196)) ;
  result_result.plusAssign_operation(GALGAS_string ("            case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 197)) ;
  result_result.plusAssign_operation(GALGAS_string ("              isMultipleSelection = true\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 198)) ;
  result_result.plusAssign_operation(GALGAS_string ("            case .single (let vProp) :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 199)) ;
  result_result.plusAssign_operation(GALGAS_string ("              s.insert (vProp)\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 200)) ;
  result_result.plusAssign_operation(GALGAS_string ("            }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 201)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 202)) ;
  result_result.plusAssign_operation(GALGAS_string ("          if isMultipleSelection {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 203)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 204)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }else if s.count == 0 {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 205)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 206)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }else if s.count == 1 {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 207)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .single (s.first!)\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 208)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }else{\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 209)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 210)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 211)) ;
  result_result.plusAssign_operation(GALGAS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 212)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 213)) ;
  result_result.plusAssign_operation(GALGAS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 214)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 215)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 216)) ;
  const GALGAS_atomicPropertyGeneration temp_6 = this ;
  const GALGAS_atomicPropertyGeneration temp_7 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 218)).add_operation (GALGAS_string ("_property.mWriteModelFunction = { [weak self] (inValue : "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 218)).add_operation (extensionGetter_swiftTypeName (temp_7.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 218)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 218)).add_operation (GALGAS_string (") in\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 218)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 218)) ;
  result_result.plusAssign_operation(GALGAS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 219)) ;
  result_result.plusAssign_operation(GALGAS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 220)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 221)) ;
  result_result.plusAssign_operation(GALGAS_string ("          break\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 222)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 223)) ;
  result_result.plusAssign_operation(GALGAS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 224)) ;
  const GALGAS_atomicPropertyGeneration temp_8 = this ;
  result_result.plusAssign_operation(GALGAS_string ("            object.").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 225)).add_operation (GALGAS_string ("_property.setProp (inValue)\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 225)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 225)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 226)) ;
  result_result.plusAssign_operation(GALGAS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 227)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 228)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 229)) ;
  result_result.plusAssign_operation(GALGAS_string ("  }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 230)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyGeneration propertyDeclarationCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_atomicPropertyGeneration::getter_propertyDeclarationCode (const GALGAS_bool /* constinArgument_inPreferences */,
                                                                             const GALGAS_stringset /* constinArgument_inOverriddenTransients */,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_atomicPropertyGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mInPreferences ().boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 240)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 240)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 240)) ;
      const GALGAS_atomicPropertyGeneration temp_2 = this ;
      result_result.plusAssign_operation(GALGAS_string ("//   Atomic property: ").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 241)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 241)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 241)) ;
      result_result.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 242)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 242)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 242)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 242)) ;
      const GALGAS_atomicPropertyGeneration temp_3 = this ;
      const GALGAS_atomicPropertyGeneration temp_4 = this ;
      result_result.plusAssign_operation(GALGAS_string ("  let preferences_").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 243)).add_operation (GALGAS_string ("_property = EBPreferencesProperty_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 243)).add_operation (extensionGetter_swiftTypeName (temp_4.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 243)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 243)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 243)) ;
      const GALGAS_atomicPropertyGeneration temp_5 = this ;
      const GALGAS_atomicPropertyGeneration temp_6 = this ;
      result_result.plusAssign_operation(GALGAS_string (" (defaultValue: ").add_operation (temp_5.readProperty_mDefaultValueInSwift (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 244)).add_operation (GALGAS_string (", prefKey: Preferences_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 244)).add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 244)).add_operation (GALGAS_string (")\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 244)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 244)) ;
      result_result.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 245)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 245)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 245)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 245)) ;
      const GALGAS_atomicPropertyGeneration temp_7 = this ;
      const GALGAS_atomicPropertyGeneration temp_8 = this ;
      result_result.plusAssign_operation(GALGAS_string ("  var preferences_").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 246)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 246)).add_operation (extensionGetter_swiftTypeName (temp_8.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 246)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 246)).add_operation (GALGAS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 246)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 246)) ;
      const GALGAS_atomicPropertyGeneration temp_9 = this ;
      result_result.plusAssign_operation(GALGAS_string ("    get { return preferences_").add_operation (temp_9.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 247)).add_operation (GALGAS_string ("_property.propval }\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 247)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 247)) ;
      const GALGAS_atomicPropertyGeneration temp_10 = this ;
      result_result.plusAssign_operation(GALGAS_string ("    set { preferences_").add_operation (temp_10.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 248)).add_operation (GALGAS_string ("_property.setProp (newValue) }\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 248)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 248)) ;
      result_result.plusAssign_operation(GALGAS_string ("  }\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 249)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 251)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 251)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 251)) ;
    const GALGAS_atomicPropertyGeneration temp_11 = this ;
    result_result.plusAssign_operation(GALGAS_string ("  //   Atomic property: ").add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 252)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 252)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 252)) ;
    result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 253)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 253)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 253)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 253)) ;
    const GALGAS_atomicPropertyGeneration temp_12 = this ;
    const GALGAS_atomicPropertyGeneration temp_13 = this ;
    result_result.plusAssign_operation(GALGAS_string ("  final let ").add_operation (temp_12.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 254)).add_operation (GALGAS_string ("_property : EBStoredProperty_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 254)).add_operation (extensionGetter_swiftTypeName (temp_13.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 254)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 254)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 254)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 254)) ;
    result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 255)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 255)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 255)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 255)) ;
    const GALGAS_atomicPropertyGeneration temp_14 = this ;
    result_result.plusAssign_operation(GALGAS_string ("  final func reset_").add_operation (temp_14.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 256)).add_operation (GALGAS_string ("_toDefaultValue () {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 256)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 256)) ;
    const GALGAS_atomicPropertyGeneration temp_15 = this ;
    const GALGAS_atomicPropertyGeneration temp_16 = this ;
    result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_15.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 257)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 257)).add_operation (temp_16.readProperty_mDefaultValueInSwift (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 257)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 257)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 257)) ;
    result_result.plusAssign_operation(GALGAS_string ("  }\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 258)) ;
    result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 259)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 259)).add_operation (GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 259)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 259)) ;
    const GALGAS_atomicPropertyGeneration temp_17 = this ;
    const GALGAS_atomicPropertyGeneration temp_18 = this ;
    result_result.plusAssign_operation(GALGAS_string ("  final var ").add_operation (temp_17.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 260)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 260)).add_operation (extensionGetter_swiftTypeName (temp_18.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 260)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 260)).add_operation (GALGAS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 260)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 260)) ;
    const GALGAS_atomicPropertyGeneration temp_19 = this ;
    result_result.plusAssign_operation(GALGAS_string ("    get { return self.").add_operation (temp_19.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 261)).add_operation (GALGAS_string ("_property.propval }\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 261)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 261)) ;
    const GALGAS_atomicPropertyGeneration temp_20 = this ;
    result_result.plusAssign_operation(GALGAS_string ("    set { self.").add_operation (temp_20.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 262)).add_operation (GALGAS_string ("_property.setProp (newValue) }\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 262)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 262)) ;
    result_result.plusAssign_operation(GALGAS_string ("  }\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 263)) ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyGeneration initCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_atomicPropertyGeneration::getter_initCode (C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_atomicPropertyGeneration temp_0 = this ;
  const GALGAS_atomicPropertyGeneration temp_1 = this ;
  result_result = GALGAS_string ("    self.").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 276)).add_operation (GALGAS_string ("_property = EBStoredProperty_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 276)).add_operation (extensionGetter_swiftTypeName (temp_1.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 276)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 276)) ;
  const GALGAS_atomicPropertyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string (" (defaultValue: ").add_operation (temp_2.readProperty_mDefaultValueInSwift (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 277)).add_operation (GALGAS_string (", undoManager: ebUndoManager)\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 277)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 277)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyGeneration configurationCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_atomicPropertyGeneration::getter_configurationCode (const GALGAS_bool /* constinArgument_inPreferences */,
                                                                       C_Compiler */* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyGeneration setupAtomicPropertyFromDictionaryCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_atomicPropertyGeneration::getter_setupAtomicPropertyFromDictionaryCode (C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_atomicPropertyGeneration temp_0 = this ;
  result_result = GALGAS_string ("  //--- Atomic property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 295)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 295)) ;
  const GALGAS_atomicPropertyGeneration temp_1 = this ;
  const GALGAS_atomicPropertyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 296)).add_operation (GALGAS_string ("_property.readFrom (dictionary: inDictionary, forKey: \""), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 296)).add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 296)).add_operation (GALGAS_string ("\")\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 296)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 296)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyGeneration saveIntoDictionaryCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_atomicPropertyGeneration::getter_saveIntoDictionaryCode (C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_atomicPropertyGeneration temp_0 = this ;
  result_result = GALGAS_string ("    //--- Atomic property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 302)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 302)) ;
  const GALGAS_atomicPropertyGeneration temp_1 = this ;
  const GALGAS_atomicPropertyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("      self.").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 303)).add_operation (GALGAS_string ("_property.storeIn (dictionary: ioDictionary, forKey: \""), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 303)).add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 303)).add_operation (GALGAS_string ("\")\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 303)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 303)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyGeneration clearObjectExplorerCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_atomicPropertyGeneration::getter_clearObjectExplorerCode (C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_atomicPropertyGeneration temp_0 = this ;
  result_result = GALGAS_string ("  //--- Atomic property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 309)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 309)) ;
  const GALGAS_atomicPropertyGeneration temp_1 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 310)).add_operation (GALGAS_string ("_property.mObserverExplorer = nil\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 310)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 310)) ;
  const GALGAS_atomicPropertyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 311)).add_operation (GALGAS_string ("_property.mValueExplorer = nil\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 311)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 311)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@toOneRelationshipAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_toOneRelationshipAST::method_enterInPrecedenceGraph (GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_toOneRelationshipAST temp_0 = this ;
  const GALGAS_toOneRelationshipAST temp_1 = this ;
  const GALGAS_toOneRelationshipAST temp_2 = this ;
  GALGAS_lstring var_node_1012 = GALGAS_lstring::constructor_new (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 23)).add_operation (temp_1.readProperty_mToOneRelationshipName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 23)), temp_2.readProperty_mToOneRelationshipName ().readProperty_location ()  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 23)) ;
  {
  const GALGAS_toOneRelationshipAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_1012, temp_3, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 24)) ;
  }
  {
  const GALGAS_toOneRelationshipAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_1012, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("to-one-relationship.ggs", 25)) ;
  }
  {
  const GALGAS_toOneRelationshipAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_1012, temp_5.readProperty_mDestinationEntityName () COMMA_SOURCE_FILE ("to-one-relationship.ggs", 26)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toOneRelationshipAST nodeKey'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_toOneRelationshipAST::getter_nodeKey (C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result_result ; // Returned variable
  const GALGAS_toOneRelationshipAST temp_0 = this ;
  const GALGAS_toOneRelationshipAST temp_1 = this ;
  const GALGAS_toOneRelationshipAST temp_2 = this ;
  result_result = GALGAS_lstring::constructor_new (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 32)).add_operation (temp_1.readProperty_mToOneRelationshipName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 32)), temp_2.readProperty_mToOneRelationshipName ().readProperty_location ()  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 32)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@toOneRelationshipAST firstAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_toOneRelationshipAST::method_firstAnalysisPhase (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                           GALGAS_generationStruct & ioArgument_ioGeneration,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_toOneRelationshipAST temp_0 = this ;
  cMapElement_classMap * objectArray_3854 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 97)) ;
  if (NULL != objectArray_3854) {
    macroValidSharedObject (objectArray_3854, cMapElement_classMap) ;
    const GALGAS_toOneRelationshipAST temp_1 = this ;
    ioArgument_ioGeneration.mProperty_mToOneClassImplementations.addAssign_operation (temp_1.readProperty_mDestinationEntityName ().readProperty_string ()  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 100)) ;
    GALGAS_classKind var_classKind_4100 ;
    const GALGAS_toOneRelationshipAST temp_2 = this ;
    GALGAS_propertyMap joker_4102_3 ; // Joker input parameter
    GALGAS_actionMap joker_4102_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_4102_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_2.readProperty_mDestinationEntityName (), var_classKind_4100, joker_4102_3, joker_4102_2, joker_4102_1, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 101)) ;
    switch (var_classKind_4100.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
      {
        const GALGAS_toOneRelationshipAST temp_3 = this ;
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (temp_3.readProperty_mDestinationEntityName ().readProperty_location (), GALGAS_string ("an entity is required here"), fixItArray4  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 104)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
        const GALGAS_toOneRelationshipAST temp_5 = this ;
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mDestinationEntityName ().readProperty_location (), GALGAS_string ("an entity is required here"), fixItArray6  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 106)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
        const GALGAS_toOneRelationshipAST temp_7 = this ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mDestinationEntityName ().readProperty_location (), GALGAS_string ("an entity is required here"), fixItArray8  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 108)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        const cEnumAssociatedValues_classKind_entity * extractPtr_4699 = (const cEnumAssociatedValues_classKind_entity *) (var_classKind_4100.unsafePointer ()) ;
        const GALGAS_bool extractedValue_4429_graphic = extractPtr_4699->mAssociatedValue1 ;
        const GALGAS_toOneRelationshipAST temp_9 = this ;
        const GALGAS_toOneRelationshipAST temp_10 = this ;
        GALGAS_propertyKind var_kind_4449 = GALGAS_propertyKind::constructor_toOne (temp_9.readProperty_mDestinationEntityName (), GALGAS_propertyAccessibility::constructor_stored (SOURCE_FILE ("to-one-relationship.ggs", 112)), extractedValue_4429_graphic, temp_10.readProperty_mOpposite ()  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 110)) ;
        {
        const GALGAS_toOneRelationshipAST temp_11 = this ;
        objectArray_3854->mProperty_mPropertyMap.setter_insertKey (temp_11.readProperty_mToOneRelationshipName (), var_kind_4449, GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("to-one-relationship.ggs", 116)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 116)) ;
        }
      }
      break ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@toOneRelationshipAST thirdAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_toOneRelationshipAST::method_thirdAnalysisPhase (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                           GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_toOneRelationshipAST temp_0 = this ;
  cMapElement_classMap * objectArray_4996 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 127)) ;
  if (NULL != objectArray_4996) {
    macroValidSharedObject (objectArray_4996, cMapElement_classMap) ;
    GALGAS_classKind var_classKind_5166 ;
    GALGAS_propertyMap var_destinationEntityPropertyMap_5200 ;
    const GALGAS_toOneRelationshipAST temp_1 = this ;
    GALGAS_actionMap joker_5202_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_5202_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mDestinationEntityName (), var_classKind_5166, var_destinationEntityPropertyMap_5200, joker_5202_2, joker_5202_1, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 130)) ;
    switch (var_classKind_5166.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
      {
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        const cEnumAssociatedValues_classKind_entity * extractPtr_5782 = (const cEnumAssociatedValues_classKind_entity *) (var_classKind_5166.unsafePointer ()) ;
        const GALGAS_bool extractedValue_5316_graphic = extractPtr_5782->mAssociatedValue1 ;
        const GALGAS_toOneRelationshipAST temp_2 = this ;
        const GALGAS_toOneRelationshipAST temp_3 = this ;
        GALGAS_propertyKind var_kind_5336 = GALGAS_propertyKind::constructor_toOne (temp_2.readProperty_mDestinationEntityName (), GALGAS_propertyAccessibility::constructor_stored (SOURCE_FILE ("to-one-relationship.ggs", 138)), extractedValue_5316_graphic, temp_3.readProperty_mOpposite ()  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 136)) ;
        const GALGAS_toOneRelationshipAST temp_4 = this ;
        const GALGAS_toOneRelationshipAST temp_5 = this ;
        const GALGAS_toOneRelationshipAST temp_6 = this ;
        const GALGAS_toOneRelationshipAST temp_7 = this ;
        objectArray_4996->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_toOnePropertyGeneration::constructor_new (temp_4.readProperty_mToOneRelationshipName ().readProperty_string (), temp_5.readProperty_mClassName ().readProperty_string (), var_kind_5336, temp_6.readProperty_mOpposite (), var_destinationEntityPropertyMap_5200, temp_7.readProperty_mUsedForSignature ()  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 143))  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 143)) ;
      }
      break ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toOnePropertyGeneration propertyDeclarationCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toOnePropertyGeneration::getter_propertyDeclarationCode (const GALGAS_bool /* constinArgument_inPreferences */,
                                                                            const GALGAS_stringset /* constinArgument_inOverriddenTransients */,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 179)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 179)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 179)) ;
  const GALGAS_toOnePropertyGeneration temp_0 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  //   To one property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 180)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 180)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 180)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 181)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 181)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 181)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 181)) ;
  const GALGAS_toOnePropertyGeneration temp_1 = this ;
  const GALGAS_toOnePropertyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  final let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 182)).add_operation (GALGAS_string ("_property = StoredObject_"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 182)).add_operation (extensionGetter_swiftTypeName (temp_2.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 182)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 182)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 182)) ;
  const GALGAS_toOnePropertyGeneration temp_3 = this ;
  result_result.plusAssign_operation(GALGAS_string (" (usedForSignature: ").add_operation (temp_3.readProperty_mUsedForSignature ().getter_cString (SOURCE_FILE ("to-one-relationship.ggs", 183)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 183)).add_operation (GALGAS_string (")\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 183)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 183)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 184)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 184)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 184)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 184)) ;
  const GALGAS_toOnePropertyGeneration temp_4 = this ;
  const GALGAS_toOnePropertyGeneration temp_5 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  final var ").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 185)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 185)).add_operation (extensionGetter_swiftTypeName (temp_5.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 185)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 185)).add_operation (GALGAS_string ("\? {\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 185)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 185)) ;
  result_result.plusAssign_operation(GALGAS_string ("    get {\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 186)) ;
  const GALGAS_toOnePropertyGeneration temp_6 = this ;
  result_result.plusAssign_operation(GALGAS_string ("      return self.").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 187)).add_operation (GALGAS_string ("_property.propval\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 187)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 187)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 188)) ;
  result_result.plusAssign_operation(GALGAS_string ("    set {\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 189)) ;
  const GALGAS_toOnePropertyGeneration temp_7 = this ;
  result_result.plusAssign_operation(GALGAS_string ("      if self.").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 190)).add_operation (GALGAS_string ("_property.propval != nil {\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 190)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 190)) ;
  const GALGAS_toOnePropertyGeneration temp_8 = this ;
  result_result.plusAssign_operation(GALGAS_string ("        self.").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 191)).add_operation (GALGAS_string ("_property.setProp (nil)\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 191)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 191)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 192)) ;
  result_result.plusAssign_operation(GALGAS_string ("      if newValue != nil {\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 193)) ;
  const GALGAS_toOnePropertyGeneration temp_9 = this ;
  result_result.plusAssign_operation(GALGAS_string ("        self.").add_operation (temp_9.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 194)).add_operation (GALGAS_string ("_property.setProp (newValue)\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 194)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 194)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 195)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 196)) ;
  result_result.plusAssign_operation(GALGAS_string ("  }\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 197)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 198)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 198)).add_operation (GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 198)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 198)) ;
  const GALGAS_toOnePropertyGeneration temp_10 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  final let ").add_operation (temp_10.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 199)).add_operation (GALGAS_string ("_none = EBGenericTransientProperty <Bool> ()\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 199)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 199)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toOnePropertyGeneration initCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toOnePropertyGeneration::getter_initCode (C_Compiler */* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toOnePropertyGeneration configurationCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toOnePropertyGeneration::getter_configurationCode (const GALGAS_bool /* constinArgument_inPreferences */,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_toOnePropertyGeneration temp_0 = this ;
  switch (temp_0.readProperty_mOpposite ().enumValue ()) {
  case GALGAS_toOneOppositeRelationship::kNotBuilt:
    break ;
  case GALGAS_toOneOppositeRelationship::kEnum_oppositeIsToMany:
    {
      const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToMany * extractPtr_9313 = (const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToMany *) (temp_0.readProperty_mOpposite ().unsafePointer ()) ;
      const GALGAS_lstring extractedValue_8698_oppositeName = extractPtr_9313->mAssociatedValue0 ;
      const GALGAS_toOnePropertyGeneration temp_1 = this ;
      result_result = GALGAS_string ("  //--- To one property: ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 213)).add_operation (GALGAS_string (" (has opposite to many relationship: "), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 213)).add_operation (extractedValue_8698_oppositeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 213)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 213)) ;
      const GALGAS_toOnePropertyGeneration temp_2 = this ;
      result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 214)).add_operation (GALGAS_string ("_property.ebUndoManager = self.ebUndoManager\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 214)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 214)) ;
      const GALGAS_toOnePropertyGeneration temp_3 = this ;
      result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 215)).add_operation (GALGAS_string ("_property.setOppositeRelationShipFunctions (\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 215)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 215)) ;
      result_result.plusAssign_operation(GALGAS_string ("      setter: { [weak self] inObject in if let me = self { inObject.").add_operation (extractedValue_8698_oppositeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 216)).add_operation (GALGAS_string ("_property.add (me) } },\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 216)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 216)) ;
      result_result.plusAssign_operation(GALGAS_string ("      resetter: { [weak self] inObject in if let me = self { inObject.").add_operation (extractedValue_8698_oppositeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 217)).add_operation (GALGAS_string ("_property.remove (me) } }\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 217)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 217)) ;
      result_result.plusAssign_operation(GALGAS_string ("    )\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 218)) ;
    }
    break ;
  case GALGAS_toOneOppositeRelationship::kEnum_none:
    {
      const GALGAS_toOnePropertyGeneration temp_4 = this ;
      result_result = GALGAS_string ("  //--- To one property: ").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 220)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 220)) ;
      const GALGAS_toOnePropertyGeneration temp_5 = this ;
      result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 221)).add_operation (GALGAS_string ("_property.ebUndoManager = self.ebUndoManager\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 221)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 221)) ;
    }
    break ;
  case GALGAS_toOneOppositeRelationship::kEnum_oppositeIsToOne:
    {
      const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne * extractPtr_10119 = (const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne *) (temp_0.readProperty_mOpposite ().unsafePointer ()) ;
      const GALGAS_lstring extractedValue_9532_oppositeName = extractPtr_10119->mAssociatedValue0 ;
      const GALGAS_toOnePropertyGeneration temp_6 = this ;
      result_result = GALGAS_string ("  //--- To one property: ").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 223)).add_operation (GALGAS_string (" (has opposite to one relationship: "), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 223)).add_operation (extractedValue_9532_oppositeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 223)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 223)) ;
      const GALGAS_toOnePropertyGeneration temp_7 = this ;
      result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 224)).add_operation (GALGAS_string ("_property.ebUndoManager = self.ebUndoManager\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 224)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 224)) ;
      const GALGAS_toOnePropertyGeneration temp_8 = this ;
      result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 225)).add_operation (GALGAS_string ("_property.setOppositeRelationShipFunctions (\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 225)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 225)) ;
      result_result.plusAssign_operation(GALGAS_string ("      setter: { [weak self] inObject in if let me = self { inObject.").add_operation (extractedValue_9532_oppositeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 226)).add_operation (GALGAS_string ("_property.setProp (me) } },\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 226)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 226)) ;
      result_result.plusAssign_operation(GALGAS_string ("      resetter: { inObject in inObject.").add_operation (extractedValue_9532_oppositeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 227)).add_operation (GALGAS_string ("_property.setProp (nil) }\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 227)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 227)) ;
      result_result.plusAssign_operation(GALGAS_string ("    )\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 228)) ;
    }
    break ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toOnePropertyGeneration setupRelationshipFromDictionaryCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toOnePropertyGeneration::getter_setupRelationshipFromDictionaryCode (C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_toOnePropertyGeneration temp_0 = this ;
  result_result = GALGAS_string ("  //--- To one property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 235)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 235)) ;
  result_result.plusAssign_operation(GALGAS_string ("    do{\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 236)) ;
  result_result.plusAssign_operation(GALGAS_string ("      let possibleEntity = readEntityFromDictionary (\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 237)) ;
  const GALGAS_toOnePropertyGeneration temp_1 = this ;
  result_result.plusAssign_operation(GALGAS_string ("        inRelationshipName: \"").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 238)).add_operation (GALGAS_string ("\",\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 238)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 238)) ;
  result_result.plusAssign_operation(GALGAS_string ("        inDictionary: inDictionary,\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 239)) ;
  result_result.plusAssign_operation(GALGAS_string ("        managedObjectArray: &managedObjectArray\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 240)) ;
  result_result.plusAssign_operation(GALGAS_string ("      )\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 241)) ;
  const GALGAS_toOnePropertyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("      if let entity = possibleEntity as\? ").add_operation (extensionGetter_swiftTypeName (temp_2.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 242)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 242)).add_operation (GALGAS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 242)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 242)) ;
  const GALGAS_toOnePropertyGeneration temp_3 = this ;
  result_result.plusAssign_operation(GALGAS_string ("        self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 243)).add_operation (GALGAS_string ("_property.setProp (entity)\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 243)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 243)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 244)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 245)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toOnePropertyGeneration saveIntoDictionaryCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toOnePropertyGeneration::getter_saveIntoDictionaryCode (C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
  const GALGAS_toOnePropertyGeneration temp_0 = this ;
  switch (temp_0.readProperty_mOpposite ().enumValue ()) {
  case GALGAS_toOneOppositeRelationship::kNotBuilt:
    break ;
  case GALGAS_toOneOppositeRelationship::kEnum_oppositeIsToMany:
    {
    }
    break ;
  case GALGAS_toOneOppositeRelationship::kEnum_none:
    {
      const GALGAS_toOnePropertyGeneration temp_1 = this ;
      result_result.plusAssign_operation(GALGAS_string ("  //--- To one property: ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 255)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 255)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 255)) ;
      const GALGAS_toOnePropertyGeneration temp_2 = this ;
      result_result.plusAssign_operation(GALGAS_string ("    self.store (managedObject:self.").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 256)).add_operation (GALGAS_string ("_property.propval,\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 256)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 256)) ;
      const GALGAS_toOnePropertyGeneration temp_3 = this ;
      result_result.plusAssign_operation(GALGAS_string ("      relationshipName: \"").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 257)).add_operation (GALGAS_string ("\",\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 257)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 257)) ;
      result_result.plusAssign_operation(GALGAS_string ("      intoDictionary: ioDictionary)\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 258)) ;
    }
    break ;
  case GALGAS_toOneOppositeRelationship::kEnum_oppositeIsToOne:
    {
      const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne * extractPtr_11909 = (const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne *) (temp_0.readProperty_mOpposite ().unsafePointer ()) ;
      const GALGAS_lstring extractedValue_11569_oppositeName = extractPtr_11909->mAssociatedValue0 ;
      const GALGAS_toOnePropertyGeneration temp_4 = this ;
      result_result.plusAssign_operation(GALGAS_string ("  //--- To one property: ").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 260)).add_operation (GALGAS_string (" // Opposite is toOne "), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 260)).add_operation (extractedValue_11569_oppositeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 260)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 260)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 260)) ;
      const GALGAS_toOnePropertyGeneration temp_5 = this ;
      result_result.plusAssign_operation(GALGAS_string ("    self.store (managedObject:self.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 261)).add_operation (GALGAS_string ("_property.propval,\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 261)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 261)) ;
      const GALGAS_toOnePropertyGeneration temp_6 = this ;
      result_result.plusAssign_operation(GALGAS_string ("      relationshipName: \"").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 262)).add_operation (GALGAS_string ("\",\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 262)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 262)) ;
      result_result.plusAssign_operation(GALGAS_string ("      intoDictionary: ioDictionary)\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 263)) ;
    }
    break ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toOnePropertyGeneration objectAccessibilityCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toOnePropertyGeneration::getter_objectAccessibilityCode (C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_toOnePropertyGeneration temp_0 = this ;
  result_result = GALGAS_string ("  //--- To one property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 270)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 270)) ;
  const GALGAS_toOnePropertyGeneration temp_1 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    if let object = self.").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 271)).add_operation (GALGAS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 271)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 271)) ;
  result_result.plusAssign_operation(GALGAS_string ("      objects.append (object)\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 272)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 273)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toOnePropertyGeneration objectAccessibilityCodeForSaveOperation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toOnePropertyGeneration::getter_objectAccessibilityCodeForSaveOperation (C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_toOnePropertyGeneration temp_0 = this ;
  result_result = GALGAS_string ("  //--- To one property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 279)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 279)) ;
  const GALGAS_toOnePropertyGeneration temp_1 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    if let object = self.").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 280)).add_operation (GALGAS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 280)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 280)) ;
  result_result.plusAssign_operation(GALGAS_string ("      objects.append (object)\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 281)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 282)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toOnePropertyGeneration clearObjectExplorerCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toOnePropertyGeneration::getter_clearObjectExplorerCode (C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_toOnePropertyGeneration temp_0 = this ;
  result_result = GALGAS_string ("    //--- To one property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 288)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 288)) ;
  const GALGAS_toOnePropertyGeneration temp_1 = this ;
  result_result.plusAssign_operation(GALGAS_string ("      self.").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 289)).add_operation (GALGAS_string ("_property.mObserverExplorer = nil\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 289)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 289)) ;
  const GALGAS_toOnePropertyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("      self.").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 290)).add_operation (GALGAS_string ("_property.mValueExplorer = nil\n"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 290)), inCompiler  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 290)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@toManyRelationshipAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_toManyRelationshipAST::method_enterInPrecedenceGraph (GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_toManyRelationshipAST temp_0 = this ;
  const GALGAS_toManyRelationshipAST temp_1 = this ;
  const GALGAS_toManyRelationshipAST temp_2 = this ;
  GALGAS_lstring var_node_1024 = GALGAS_lstring::constructor_new (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 24)).add_operation (temp_1.readProperty_mToManyRelationshipName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 24)), temp_2.readProperty_mToManyRelationshipName ().readProperty_location ()  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 24)) ;
  {
  const GALGAS_toManyRelationshipAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_1024, temp_3, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 25)) ;
  }
  {
  const GALGAS_toManyRelationshipAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_1024, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("to-many-relationship.ggs", 26)) ;
  }
  {
  const GALGAS_toManyRelationshipAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_1024, temp_5.readProperty_mDestinationEntityName () COMMA_SOURCE_FILE ("to-many-relationship.ggs", 27)) ;
  }
  const GALGAS_toManyRelationshipAST temp_6 = this ;
  switch (temp_6.readProperty_mOption ().enumValue ()) {
  case GALGAS_toManyRelationshipOptionAST::kNotBuilt:
    break ;
  case GALGAS_toManyRelationshipOptionAST::kEnum_hasDependance:
    {
      const cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance * extractPtr_1509 = (const cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance *) (temp_6.readProperty_mOption ().unsafePointer ()) ;
      const GALGAS_lstring extractedValue_1340_masterPropertyName = extractPtr_1509->mAssociatedValue0 ;
      const GALGAS_toManyRelationshipAST temp_7 = this ;
      GALGAS_lstring var_dependanceNode_1366 = GALGAS_lstring::constructor_new (temp_7.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 30)).add_operation (extractedValue_1340_masterPropertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 30)), extractedValue_1340_masterPropertyName.readProperty_location ()  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 30)) ;
      {
      ioArgument_ioGraph.setter_addEdge (var_node_1024, var_dependanceNode_1366 COMMA_SOURCE_FILE ("to-many-relationship.ggs", 31)) ;
      }
    }
    break ;
  case GALGAS_toManyRelationshipOptionAST::kEnum_hasOpposite:
    {
    }
    break ;
  case GALGAS_toManyRelationshipOptionAST::kEnum_none:
    {
    }
    break ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyRelationshipAST nodeKey'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_toManyRelationshipAST::getter_nodeKey (C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result_result ; // Returned variable
  const GALGAS_toManyRelationshipAST temp_0 = this ;
  const GALGAS_toManyRelationshipAST temp_1 = this ;
  const GALGAS_toManyRelationshipAST temp_2 = this ;
  result_result = GALGAS_lstring::constructor_new (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 40)).add_operation (temp_1.readProperty_mToManyRelationshipName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 40)), temp_2.readProperty_mToManyRelationshipName ().readProperty_location ()  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 40)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@toManyRelationshipAST firstAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_toManyRelationshipAST::method_firstAnalysisPhase (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                            GALGAS_generationStruct & ioArgument_ioGeneration,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_toManyRelationshipAST temp_0 = this ;
  cMapElement_classMap * objectArray_4615 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 119)) ;
  if (NULL != objectArray_4615) {
    macroValidSharedObject (objectArray_4615, cMapElement_classMap) ;
    const GALGAS_toManyRelationshipAST temp_1 = this ;
    ioArgument_ioGeneration.mProperty_mToManyClassImplementations.addAssign_operation (temp_1.readProperty_mDestinationEntityName ().readProperty_string ()  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 122)) ;
    GALGAS_classKind var_classKind_4862 ;
    const GALGAS_toManyRelationshipAST temp_2 = this ;
    GALGAS_propertyMap joker_4864_3 ; // Joker input parameter
    GALGAS_actionMap joker_4864_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_4864_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_2.readProperty_mDestinationEntityName (), var_classKind_4862, joker_4864_3, joker_4864_2, joker_4864_1, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 123)) ;
    switch (var_classKind_4862.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
      {
        const GALGAS_toManyRelationshipAST temp_3 = this ;
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (temp_3.readProperty_mDestinationEntityName ().readProperty_location (), GALGAS_string ("an entity is required here"), fixItArray4  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 126)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
        const GALGAS_toManyRelationshipAST temp_5 = this ;
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mDestinationEntityName ().readProperty_location (), GALGAS_string ("an entity is required here"), fixItArray6  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 128)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
        const GALGAS_toManyRelationshipAST temp_7 = this ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mDestinationEntityName ().readProperty_location (), GALGAS_string ("an entity is required here"), fixItArray8  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 130)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        const cEnumAssociatedValues_classKind_entity * extractPtr_6441 = (const cEnumAssociatedValues_classKind_entity *) (var_classKind_4862.unsafePointer ()) ;
        const GALGAS_bool extractedValue_5191_graphic = extractPtr_6441->mAssociatedValue1 ;
        const GALGAS_toManyRelationshipAST temp_9 = this ;
        const GALGAS_toManyRelationshipAST temp_10 = this ;
        GALGAS_propertyKind var_kind_5211 = GALGAS_propertyKind::constructor_toMany (temp_9.readProperty_mDestinationEntityName (), GALGAS_propertyAccessibility::constructor_stored (SOURCE_FILE ("to-many-relationship.ggs", 134)), extractedValue_5191_graphic, temp_10.readProperty_mOption ()  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 132)) ;
        {
        const GALGAS_toManyRelationshipAST temp_11 = this ;
        objectArray_4615->mProperty_mPropertyMap.setter_insertKey (temp_11.readProperty_mToManyRelationshipName (), var_kind_5211, GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("to-many-relationship.ggs", 138)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 138)) ;
        }
        const GALGAS_toManyRelationshipAST temp_12 = this ;
        GALGAS_bool var_inPrefs_5521 = GALGAS_bool (kIsEqual, temp_12.readProperty_mClassName ().readProperty_string ().objectCompare (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 140)))) ;
        GALGAS_toManyRelationshipOptionGeneration var_optionForGeneration_5650 ;
        const GALGAS_toManyRelationshipAST temp_13 = this ;
        switch (temp_13.readProperty_mOption ().enumValue ()) {
        case GALGAS_toManyRelationshipOptionAST::kNotBuilt:
          break ;
        case GALGAS_toManyRelationshipOptionAST::kEnum_hasDependance:
          {
            const cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance * extractPtr_5994 = (const cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance *) (temp_13.readProperty_mOption ().unsafePointer ()) ;
            const GALGAS_lstring extractedValue_5721_masterPropertyName = extractPtr_5994->mAssociatedValue0 ;
            GALGAS_propertyKind var_masterPropertyKind_5800 ;
            GALGAS_actionMap joker_5802_2 ; // Joker input parameter
            GALGAS_bool joker_5802_1 ; // Joker input parameter
            objectArray_4615->mProperty_mPropertyMap.method_searchKey (extractedValue_5721_masterPropertyName, var_masterPropertyKind_5800, joker_5802_2, joker_5802_1, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 145)) ;
            var_optionForGeneration_5650 = GALGAS_toManyRelationshipOptionGeneration::constructor_hasDependance (extractedValue_5721_masterPropertyName.readProperty_string (), extensionGetter_swiftTypeName (var_masterPropertyKind_5800, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 148))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 146)) ;
          }
          break ;
        case GALGAS_toManyRelationshipOptionAST::kEnum_hasOpposite:
          {
            const cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite * extractPtr_6114 = (const cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite *) (temp_13.readProperty_mOption ().unsafePointer ()) ;
            const GALGAS_lstring extractedValue_6031_oppositeName = extractPtr_6114->mAssociatedValue0 ;
            var_optionForGeneration_5650 = GALGAS_toManyRelationshipOptionGeneration::constructor_hasOpposite (extractedValue_6031_oppositeName.readProperty_string ()  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 151)) ;
          }
          break ;
        case GALGAS_toManyRelationshipOptionAST::kEnum_none:
          {
            var_optionForGeneration_5650 = GALGAS_toManyRelationshipOptionGeneration::constructor_none (SOURCE_FILE ("to-many-relationship.ggs", 153)) ;
          }
          break ;
        }
        const GALGAS_toManyRelationshipAST temp_14 = this ;
        const GALGAS_toManyRelationshipAST temp_15 = this ;
        const GALGAS_toManyRelationshipAST temp_16 = this ;
        objectArray_4615->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_toManyPropertyGeneration::constructor_new (temp_14.readProperty_mToManyRelationshipName ().readProperty_string (), var_kind_5211, var_optionForGeneration_5650, var_inPrefs_5521, temp_15.readProperty_mCustomStore (), temp_16.readProperty_mUsedForSignature ()  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 156))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 156)) ;
      }
      break ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyPropertyGeneration propertyDeclarationCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toManyPropertyGeneration::getter_propertyDeclarationCode (const GALGAS_bool /* constinArgument_inPreferences */,
                                                                             const GALGAS_stringset /* constinArgument_inOverriddenTransients */,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_toManyPropertyGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mOption ().getter_isHasDependance (SOURCE_FILE ("to-many-relationship.ggs", 198)).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 199)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 199)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 199)) ;
      const GALGAS_toManyPropertyGeneration temp_2 = this ;
      result_result.plusAssign_operation(GALGAS_string ("  //   To many property: ").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 200)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 200)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 200)) ;
      result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 201)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 201)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 201)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 201)) ;
      GALGAS_string var_masterPropertyTypeName_8018 ;
      const GALGAS_toManyPropertyGeneration temp_3 = this ;
      GALGAS_string joker_7959_1 ; // Joker input parameter
      temp_3.readProperty_mOption ().method_hasDependance (joker_7959_1, var_masterPropertyTypeName_8018, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 202)) ;
      const GALGAS_toManyPropertyGeneration temp_4 = this ;
      const GALGAS_toManyPropertyGeneration temp_5 = this ;
      result_result.plusAssign_operation(GALGAS_string ("  final let ").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 203)).add_operation (GALGAS_string ("_property = TransientArrayOfSuperOf_"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 203)).add_operation (extensionGetter_swiftTypeName (temp_5.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 203)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 203)).add_operation (GALGAS_string (" <"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 203)).add_operation (var_masterPropertyTypeName_8018, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 204)).add_operation (GALGAS_string ("> ()\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 204)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 203)) ;
      result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 205)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 205)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 205)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 205)) ;
      const GALGAS_toManyPropertyGeneration temp_6 = this ;
      const GALGAS_toManyPropertyGeneration temp_7 = this ;
      result_result.plusAssign_operation(GALGAS_string ("  final var ").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 206)).add_operation (GALGAS_string (" : EBReferenceArray <"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 206)).add_operation (extensionGetter_swiftTypeName (temp_7.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 206)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 206)).add_operation (GALGAS_string ("> {\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 206)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 206)) ;
      const GALGAS_toManyPropertyGeneration temp_8 = this ;
      result_result.plusAssign_operation(GALGAS_string ("    get { return self.").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 207)).add_operation (GALGAS_string ("_property.propval }\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 207)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 207)) ;
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        const GALGAS_toManyPropertyGeneration temp_10 = this ;
        test_9 = temp_10.readProperty_mOption ().getter_isHasDependance (SOURCE_FILE ("to-many-relationship.ggs", 208)).operator_not (SOURCE_FILE ("to-many-relationship.ggs", 208)).boolEnum () ;
        if (kBoolTrue == test_9) {
          const GALGAS_toManyPropertyGeneration temp_11 = this ;
          result_result.plusAssign_operation(GALGAS_string ("    set { self.").add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 209)).add_operation (GALGAS_string ("_property.setProp (newValue) }\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 209)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 209)) ;
        }
      }
      result_result.plusAssign_operation(GALGAS_string ("  }\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 211)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      const GALGAS_toManyPropertyGeneration temp_13 = this ;
      test_12 = temp_13.readProperty_mInPreferences ().boolEnum () ;
      if (kBoolTrue == test_12) {
        result_result = GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 213)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 213)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 213)) ;
        const GALGAS_toManyPropertyGeneration temp_14 = this ;
        result_result.plusAssign_operation(GALGAS_string ("//   To many property: ").add_operation (temp_14.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 214)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 214)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 214)) ;
        result_result.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 215)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 215)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 215)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 215)) ;
        const GALGAS_toManyPropertyGeneration temp_15 = this ;
        const GALGAS_toManyPropertyGeneration temp_16 = this ;
        result_result.plusAssign_operation(GALGAS_string ("  let preferences_").add_operation (temp_15.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 216)).add_operation (GALGAS_string ("_property = PreferencesArrayOf_"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 216)).add_operation (extensionGetter_swiftTypeName (temp_16.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 216)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 216)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 216)) ;
        const GALGAS_toManyPropertyGeneration temp_17 = this ;
        result_result.plusAssign_operation(GALGAS_string (" (prefKey: Preferences_").add_operation (temp_17.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 217)).add_operation (GALGAS_string (")\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 217)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 217)) ;
        result_result.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 218)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 218)).add_operation (GALGAS_string ("\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 218)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 218)) ;
        const GALGAS_toManyPropertyGeneration temp_18 = this ;
        const GALGAS_toManyPropertyGeneration temp_19 = this ;
        result_result.plusAssign_operation(GALGAS_string ("  var preferences_").add_operation (temp_18.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 219)).add_operation (GALGAS_string (" : EBReferenceArray <"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 219)).add_operation (extensionGetter_swiftTypeName (temp_19.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 219)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 219)).add_operation (GALGAS_string ("> {\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 219)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 219)) ;
        const GALGAS_toManyPropertyGeneration temp_20 = this ;
        result_result.plusAssign_operation(GALGAS_string ("    get { return preferences_").add_operation (temp_20.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 220)).add_operation (GALGAS_string ("_property.propval }\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 220)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 220)) ;
        enumGalgasBool test_21 = kBoolTrue ;
        if (kBoolTrue == test_21) {
          const GALGAS_toManyPropertyGeneration temp_22 = this ;
          test_21 = temp_22.readProperty_mOption ().getter_isHasDependance (SOURCE_FILE ("to-many-relationship.ggs", 221)).operator_not (SOURCE_FILE ("to-many-relationship.ggs", 221)).boolEnum () ;
          if (kBoolTrue == test_21) {
            const GALGAS_toManyPropertyGeneration temp_23 = this ;
            result_result.plusAssign_operation(GALGAS_string ("    set { preferences_").add_operation (temp_23.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 222)).add_operation (GALGAS_string ("_property.setProp (newValue) }\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 222)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 222)) ;
          }
        }
        result_result.plusAssign_operation(GALGAS_string ("  }\n"
          "\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 224)) ;
      }
    }
    if (kBoolFalse == test_12) {
      result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 226)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 226)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 226)) ;
      const GALGAS_toManyPropertyGeneration temp_24 = this ;
      result_result.plusAssign_operation(GALGAS_string ("  //   To many property: ").add_operation (temp_24.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 227)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 227)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 227)) ;
      result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 228)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 228)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 228)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 228)) ;
      const GALGAS_toManyPropertyGeneration temp_25 = this ;
      const GALGAS_toManyPropertyGeneration temp_26 = this ;
      result_result.plusAssign_operation(GALGAS_string ("  final let ").add_operation (temp_25.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 229)).add_operation (GALGAS_string ("_property = StoredArrayOf_"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 229)).add_operation (extensionGetter_swiftTypeName (temp_26.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 229)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 229)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 229)) ;
      const GALGAS_toManyPropertyGeneration temp_27 = this ;
      result_result.plusAssign_operation(GALGAS_string (" (usedForSignature: ").add_operation (temp_27.readProperty_mUsedForSignature ().getter_cString (SOURCE_FILE ("to-many-relationship.ggs", 230)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 230)).add_operation (GALGAS_string (")\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 230)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 230)) ;
      result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 231)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 231)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 231)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 231)) ;
      result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 232)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 232)).add_operation (GALGAS_string ("\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 232)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 232)) ;
      const GALGAS_toManyPropertyGeneration temp_28 = this ;
      const GALGAS_toManyPropertyGeneration temp_29 = this ;
      result_result.plusAssign_operation(GALGAS_string ("  final var ").add_operation (temp_28.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 233)).add_operation (GALGAS_string (" : EBReferenceArray <"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 233)).add_operation (extensionGetter_swiftTypeName (temp_29.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 233)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 233)).add_operation (GALGAS_string ("> {\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 233)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 233)) ;
      const GALGAS_toManyPropertyGeneration temp_30 = this ;
      result_result.plusAssign_operation(GALGAS_string ("    get { return self.").add_operation (temp_30.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 234)).add_operation (GALGAS_string ("_property.propval }\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 234)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 234)) ;
      enumGalgasBool test_31 = kBoolTrue ;
      if (kBoolTrue == test_31) {
        const GALGAS_toManyPropertyGeneration temp_32 = this ;
        test_31 = temp_32.readProperty_mOption ().getter_isHasDependance (SOURCE_FILE ("to-many-relationship.ggs", 235)).operator_not (SOURCE_FILE ("to-many-relationship.ggs", 235)).boolEnum () ;
        if (kBoolTrue == test_31) {
          const GALGAS_toManyPropertyGeneration temp_33 = this ;
          result_result.plusAssign_operation(GALGAS_string ("    set { self.").add_operation (temp_33.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 236)).add_operation (GALGAS_string ("_property.setProp (newValue) }\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 236)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 236)) ;
        }
      }
      result_result.plusAssign_operation(GALGAS_string ("  }\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 238)) ;
    }
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyPropertyGeneration initCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toManyPropertyGeneration::getter_initCode (C_Compiler */* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyPropertyGeneration prefKeyDefinitionCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toManyPropertyGeneration::getter_prefKeyDefinitionCode (C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_toManyPropertyGeneration temp_0 = this ;
  const GALGAS_toManyPropertyGeneration temp_1 = this ;
  result_result = GALGAS_string ("fileprivate let Preferences_").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 251)).add_operation (GALGAS_string (" = \"Preferences:"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 251)).add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 251)).add_operation (GALGAS_string ("\"\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 251)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyPropertyGeneration configurationCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toManyPropertyGeneration::getter_configurationCode (const GALGAS_bool constinArgument_inPreferences,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inPreferences.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("preferences_") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("self.") ;
  }
  GALGAS_string var_prefix_11388 = temp_0 ;
  const GALGAS_toManyPropertyGeneration temp_2 = this ;
  switch (temp_2.readProperty_mOption ().enumValue ()) {
  case GALGAS_toManyRelationshipOptionGeneration::kNotBuilt:
    break ;
  case GALGAS_toManyRelationshipOptionGeneration::kEnum_none:
    {
      const GALGAS_toManyPropertyGeneration temp_3 = this ;
      result_result = GALGAS_string ("  //--- To many property: ").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 260)).add_operation (GALGAS_string (" (no option)\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 260)) ;
      const GALGAS_toManyPropertyGeneration temp_4 = this ;
      result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_prefix_11388, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 261)).add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 261)).add_operation (GALGAS_string ("_property.ebUndoManager = self.ebUndoManager\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 261)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 261)) ;
    }
    break ;
  case GALGAS_toManyRelationshipOptionGeneration::kEnum_hasDependance:
    {
      result_result = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_toManyRelationshipOptionGeneration::kEnum_hasOpposite:
    {
      const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasOpposite * extractPtr_12317 = (const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasOpposite *) (temp_2.readProperty_mOption ().unsafePointer ()) ;
      const GALGAS_string extractedValue_11750_oppositeName = extractPtr_12317->mAssociatedValue0 ;
      const GALGAS_toManyPropertyGeneration temp_5 = this ;
      result_result = GALGAS_string ("  //--- To many property: ").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 265)).add_operation (GALGAS_string (" (has opposite relationship)\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 265)) ;
      const GALGAS_toManyPropertyGeneration temp_6 = this ;
      result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_prefix_11388, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 266)).add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 266)).add_operation (GALGAS_string ("_property.ebUndoManager = self.ebUndoManager\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 266)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 266)) ;
      const GALGAS_toManyPropertyGeneration temp_7 = this ;
      result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_prefix_11388, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 267)).add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 267)).add_operation (GALGAS_string ("_property.setOppositeRelationShipFunctions (\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 267)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 267)) ;
      result_result.plusAssign_operation(GALGAS_string ("      setter: { [weak self] inObject in if let me = self { inObject.").add_operation (extractedValue_11750_oppositeName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 268)).add_operation (GALGAS_string ("_property.setProp (me) } },\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 268)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 268)) ;
      result_result.plusAssign_operation(GALGAS_string ("      resetter: { inObject in inObject.").add_operation (extractedValue_11750_oppositeName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 269)).add_operation (GALGAS_string ("_property.setProp (nil) }\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 269)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 269)) ;
      result_result.plusAssign_operation(GALGAS_string ("    )\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 270)) ;
    }
    break ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyPropertyGeneration setupRelationshipFromDictionaryCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toManyPropertyGeneration::getter_setupRelationshipFromDictionaryCode (C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_toManyPropertyGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mOption ().getter_isHasDependance (SOURCE_FILE ("to-many-relationship.ggs", 277)).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_string::makeEmptyString () ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      const GALGAS_toManyPropertyGeneration temp_3 = this ;
      test_2 = temp_3.readProperty_mCustomStore ().boolEnum () ;
      if (kBoolTrue == test_2) {
        const GALGAS_toManyPropertyGeneration temp_4 = this ;
        result_result = GALGAS_string ("  //--- To many property: ").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 280)).add_operation (GALGAS_string (" (Custom store)\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 280)) ;
        const GALGAS_toManyPropertyGeneration temp_5 = this ;
        const GALGAS_toManyPropertyGeneration temp_6 = this ;
        const GALGAS_toManyPropertyGeneration temp_7 = this ;
        result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 281)).add_operation (GALGAS_string ("_property.setProp (EBReferenceArray (customRead_"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 281)).add_operation (extensionGetter_swiftTypeName (temp_6.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 281)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 281)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 281)).add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 281)).add_operation (GALGAS_string (" (from: inDictionary, with: self.ebUndoManager)))\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 281)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 281)) ;
      }
    }
    if (kBoolFalse == test_2) {
      const GALGAS_toManyPropertyGeneration temp_8 = this ;
      result_result = GALGAS_string ("  //--- To many property: ").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 283)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 283)) ;
      result_result.plusAssign_operation(GALGAS_string ("    do{\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 284)) ;
      result_result.plusAssign_operation(GALGAS_string ("      let array = readEntityArrayFromDictionary (\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 285)) ;
      const GALGAS_toManyPropertyGeneration temp_9 = this ;
      result_result.plusAssign_operation(GALGAS_string ("        inRelationshipName: \"").add_operation (temp_9.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 286)).add_operation (GALGAS_string ("\",\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 286)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 286)) ;
      result_result.plusAssign_operation(GALGAS_string ("        inDictionary: inDictionary,\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 287)) ;
      result_result.plusAssign_operation(GALGAS_string ("        managedObjectArray: &managedObjectArray\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 288)) ;
      const GALGAS_toManyPropertyGeneration temp_10 = this ;
      result_result.plusAssign_operation(GALGAS_string ("      ) as! [").add_operation (extensionGetter_swiftTypeName (temp_10.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 289)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 289)).add_operation (GALGAS_string ("]\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 289)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 289)) ;
      const GALGAS_toManyPropertyGeneration temp_11 = this ;
      result_result.plusAssign_operation(GALGAS_string ("      self.").add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 290)).add_operation (GALGAS_string ("_property.setProp (EBReferenceArray (array))\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 290)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 290)) ;
      result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 291)) ;
    }
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyPropertyGeneration saveIntoDictionaryCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toManyPropertyGeneration::getter_saveIntoDictionaryCode (C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_toManyPropertyGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mOption ().getter_isHasDependance (SOURCE_FILE ("to-many-relationship.ggs", 298)).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_string::makeEmptyString () ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      const GALGAS_toManyPropertyGeneration temp_3 = this ;
      test_2 = temp_3.readProperty_mCustomStore ().boolEnum () ;
      if (kBoolTrue == test_2) {
        const GALGAS_toManyPropertyGeneration temp_4 = this ;
        result_result = GALGAS_string ("  //--- To many property: ").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 301)).add_operation (GALGAS_string (" (Custom store)\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 301)) ;
        const GALGAS_toManyPropertyGeneration temp_5 = this ;
        const GALGAS_toManyPropertyGeneration temp_6 = this ;
        const GALGAS_toManyPropertyGeneration temp_7 = this ;
        result_result.plusAssign_operation(GALGAS_string ("    customStore_").add_operation (extensionGetter_swiftTypeName (temp_5.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 302)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 302)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 302)).add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 302)).add_operation (GALGAS_string (" (self."), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 302)).add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 302)).add_operation (GALGAS_string ("_property.propval.values, intoDictionary: ioDictionary)\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 302)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 302)) ;
      }
    }
    if (kBoolFalse == test_2) {
      const GALGAS_toManyPropertyGeneration temp_8 = this ;
      result_result = GALGAS_string ("  //--- To many property: ").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 304)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 304)) ;
      result_result.plusAssign_operation(GALGAS_string ("    self.store (\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 305)) ;
      const GALGAS_toManyPropertyGeneration temp_9 = this ;
      result_result.plusAssign_operation(GALGAS_string ("      managedObjectArray: self.").add_operation (temp_9.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 306)).add_operation (GALGAS_string ("_property.propval.values,\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 306)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 306)) ;
      const GALGAS_toManyPropertyGeneration temp_10 = this ;
      result_result.plusAssign_operation(GALGAS_string ("      relationshipName: \"").add_operation (temp_10.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 307)).add_operation (GALGAS_string ("\",\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 307)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 307)) ;
      result_result.plusAssign_operation(GALGAS_string ("      intoDictionary: ioDictionary\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 308)) ;
      result_result.plusAssign_operation(GALGAS_string ("    )\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 309)) ;
    }
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyPropertyGeneration objectAccessibilityCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toManyPropertyGeneration::getter_objectAccessibilityCode (C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_toManyPropertyGeneration temp_0 = this ;
  result_result = GALGAS_string ("  //--- To many property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 316)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 316)) ;
  const GALGAS_toManyPropertyGeneration temp_1 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    for managedObject in self.").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 317)).add_operation (GALGAS_string (".values {\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 317)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 317)) ;
  result_result.plusAssign_operation(GALGAS_string ("      objects.append (managedObject)\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 318)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 319)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyPropertyGeneration objectAccessibilityCodeForSaveOperation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toManyPropertyGeneration::getter_objectAccessibilityCodeForSaveOperation (C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_toManyPropertyGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mCustomStore ().boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_toManyPropertyGeneration temp_2 = this ;
      result_result = GALGAS_string ("  //--- To many property: ").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 325)).add_operation (GALGAS_string (" (custom store)\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 325)) ;
      const GALGAS_toManyPropertyGeneration temp_3 = this ;
      result_result.plusAssign_operation(GALGAS_string ("    /* for managedObject in self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 326)).add_operation (GALGAS_string ("_property.propval.values {\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 326)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 326)) ;
      result_result.plusAssign_operation(GALGAS_string ("      objects.append (managedObject)\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 327)) ;
      result_result.plusAssign_operation(GALGAS_string ("    } */\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 328)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_toManyPropertyGeneration temp_4 = this ;
    result_result = GALGAS_string ("  //--- To many property: ").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 330)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 330)) ;
    const GALGAS_toManyPropertyGeneration temp_5 = this ;
    result_result.plusAssign_operation(GALGAS_string ("    for managedObject in self.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 331)).add_operation (GALGAS_string (".values {\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 331)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 331)) ;
    result_result.plusAssign_operation(GALGAS_string ("      objects.append (managedObject)\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 332)) ;
    result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 333)) ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyPropertyGeneration clearObjectExplorerCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toManyPropertyGeneration::getter_clearObjectExplorerCode (C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_toManyPropertyGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mOption ().getter_isHasDependance (SOURCE_FILE ("to-many-relationship.ggs", 340)).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_string::makeEmptyString () ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_toManyPropertyGeneration temp_2 = this ;
    result_result = GALGAS_string ("    //--- To many property: ").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 343)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 343)) ;
    const GALGAS_toManyPropertyGeneration temp_3 = this ;
    result_result.plusAssign_operation(GALGAS_string ("      self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 344)).add_operation (GALGAS_string ("_property.mValueExplorer = nil\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 344)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 344)) ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyPropertyGeneration resetToManyRelationships'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toManyPropertyGeneration::getter_resetToManyRelationships (C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_toManyPropertyGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mOption ().getter_isHasDependance (SOURCE_FILE ("to-many-relationship.ggs", 351)).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_string::makeEmptyString () ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_toManyPropertyGeneration temp_2 = this ;
    result_result = GALGAS_string ("  //--- To many property: ").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 354)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 354)) ;
    const GALGAS_toManyPropertyGeneration temp_3 = this ;
    result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 355)).add_operation (GALGAS_string ("_property.setProp ([])\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 355)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 355)) ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyPropertyGeneration terminationCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toManyPropertyGeneration::getter_terminationCode (const GALGAS_bool /* constinArgument_inPreferences */,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_toManyPropertyGeneration temp_0 = this ;
  switch (temp_0.readProperty_mOption ().enumValue ()) {
  case GALGAS_toManyRelationshipOptionGeneration::kNotBuilt:
    break ;
  case GALGAS_toManyRelationshipOptionGeneration::kEnum_hasDependance:
    {
      const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasDependance * extractPtr_17001 = (const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasDependance *) (temp_0.readProperty_mOption ().unsafePointer ()) ;
      const GALGAS_string extractedValue_16802_masterPropertyName = extractPtr_17001->mAssociatedValue0 ;
      const GALGAS_toManyPropertyGeneration temp_1 = this ;
      result_result = GALGAS_string ("  //--- To many property: ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 363)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 363)) ;
      const GALGAS_toManyPropertyGeneration temp_2 = this ;
      result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (extractedValue_16802_masterPropertyName, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 364)).add_operation (GALGAS_string ("_property.removeEBObserver (self."), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 364)).add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 364)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 364)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 364)) ;
    }
    break ;
  case GALGAS_toManyRelationshipOptionGeneration::kEnum_none:
    {
      result_result = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_toManyRelationshipOptionGeneration::kEnum_hasOpposite:
    {
      result_result = GALGAS_string::makeEmptyString () ;
    }
    break ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'validationStubExtension'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_validationStubExtension_3 [1] = {
  NULL
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_validationStubExtension_3 [1] = {
  NULL
} ;

//--- Directory 'controllers'

const cDirectoryWrapper gWrapperDirectory_3_validationStubExtension (
  "controllers",
  0,
  gWrapperAllFiles_validationStubExtension_3,
  0,
  gWrapperAllDirectories_validationStubExtension_3
) ;

//--- All files of 'standard-properties' directory

static const cRegularFileWrapper * gWrapperAllFiles_validationStubExtension_1 [1] = {
  NULL
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_validationStubExtension_1 [1] = {
  NULL
} ;

//--- Directory 'standard-properties'

const cDirectoryWrapper gWrapperDirectory_1_validationStubExtension (
  "standard-properties",
  0,
  gWrapperAllFiles_validationStubExtension_1,
  0,
  gWrapperAllDirectories_validationStubExtension_1
) ;

//--- All files of 'xcode-project' directory

static const cRegularFileWrapper * gWrapperAllFiles_validationStubExtension_2 [1] = {
  NULL
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_validationStubExtension_2 [1] = {
  NULL
} ;

//--- Directory 'xcode-project'

const cDirectoryWrapper gWrapperDirectory_2_validationStubExtension (
  "xcode-project",
  0,
  gWrapperAllFiles_validationStubExtension_2,
  0,
  gWrapperAllDirectories_validationStubExtension_2
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_validationStubExtension_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_validationStubExtension_0 [4] = {
  & gWrapperDirectory_3_validationStubExtension,
  & gWrapperDirectory_1_validationStubExtension,
  & gWrapperDirectory_2_validationStubExtension,
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_validationStubExtension (
  "",
  0,
  gWrapperAllFiles_validationStubExtension_0,
  3,
  gWrapperAllDirectories_validationStubExtension_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'validationStubExtension actionGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_validationStubExtension_actionGeneration (C_Compiler * /* inCompiler */,
                                                                            const GALGAS_string & in_OBJECT_5F_TYPE_5F_NAME,
                                                                            const GALGAS_string & in_MODEL_5F_NAME,
                                                                            const GALGAS_string & in_MODEL_5F_TYPE_5F_NAME
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "import Cocoa\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\n"
    "\n"
    "extension " ;
  result << in_OBJECT_5F_TYPE_5F_NAME.stringValue () ;
  result << " {\n"
    "  func validate_" ;
  result << in_MODEL_5F_NAME.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "currentValue : " ;
  result << in_MODEL_5F_TYPE_5F_NAME.stringValue () ;
  result << ",\n"
    "                 " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "proposedValue : " ;
  result << in_MODEL_5F_TYPE_5F_NAME.stringValue () ;
  result << ") -> EBValidationResult <" ;
  result << in_MODEL_5F_TYPE_5F_NAME.stringValue () ;
  result << "> {\n" ;
  return GALGAS_string (result) ;
}


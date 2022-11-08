#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-10.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateTestFile'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateTestFile (const GALGAS_string constinArgument_inBundleIdentifier,
                               const GALGAS_string constinArgument_inProjectName,
                               const GALGAS_mainXibDescriptorList constinArgument_inMainXibDescriptorList,
                               const GALGAS_string constinArgument_inOutputDirectory,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_bool test_1 = GALGAS_bool (kIsStrictSup, constinArgument_inMainXibDescriptorList.getter_length (SOURCE_FILE ("main-xib.ggs", 135)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
    if (kBoolTrue == test_1.boolEnum ()) {
      test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inBundleIdentifier.objectCompare (GALGAS_string::makeEmptyString ())) ;
    }
    test_0 = test_1.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_stringlist var_outlet_5F_identifier_5F_list_5342 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("main-xib.ggs", 136)) ;
      cEnumerator_mainXibDescriptorList enumerator_5362 (constinArgument_inMainXibDescriptorList, kENUMERATION_UP) ;
      while (enumerator_5362.hasCurrentObject ()) {
        cEnumerator_mainXibLineDescriptorList enumerator_5413 (enumerator_5362.current_mLine (HERE), kENUMERATION_UP) ;
        while (enumerator_5413.hasCurrentObject ()) {
          switch (enumerator_5413.current_mElement (HERE).enumValue ()) {
          case GALGAS_mainXibElement::kNotBuilt:
            break ;
          case GALGAS_mainXibElement::kEnum_text:
            {
            }
            break ;
          case GALGAS_mainXibElement::kEnum_outlet:
            {
              const cEnumAssociatedValues_mainXibElement_outlet * extractPtr_5566 = (const cEnumAssociatedValues_mainXibElement_outlet *) (enumerator_5413.current_mElement (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_5508_outletName = extractPtr_5566->mAssociatedValue1 ;
              var_outlet_5F_identifier_5F_list_5342.addAssign_operation (extractedValue_5508_outletName.readProperty_string ()  COMMA_SOURCE_FILE ("main-xib.ggs", 142)) ;
            }
            break ;
          }
          enumerator_5413.gotoNextObject () ;
        }
        enumerator_5362.gotoNextObject () ;
      }
      GALGAS_string var_s_5606 = GALGAS_string (filewrapperTemplate_testFiles_test_5F_py (inCompiler, constinArgument_inBundleIdentifier, constinArgument_inProjectName, var_outlet_5F_identifier_5F_list_5342 COMMA_SOURCE_FILE ("main-xib.ggs", 146))) ;
      GALGAS_string var_header_5737 = GALGAS_string ("#!/usr/bin/python\n"
        "# coding=utf-8\n"
        "\n"
        "# https://pypi.python.org/pypi/atomac\n"
        "# https://github.com/pyatom/pyatom/blob/master/atomac/AXClasses.py\n"
        "\n") ;
      {
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, GALGAS_string ("test.py"), GALGAS_string ("#"), var_header_5737, GALGAS_string::makeEmptyString (), var_s_5606, GALGAS_string ("#    ENTER USER CODE HERE\n"), GALGAS_string ("\n"
        "quitApplication ()\n"
        "\n"
        "#----------------------------------------------------------------------------*\n"), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 155)) ;
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'testFiles'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_testFiles_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_testFiles_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_testFiles (
  "",
  0,
  gWrapperAllFiles_testFiles_0,
  0,
  gWrapperAllDirectories_testFiles_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'testFiles test_py'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_testFiles_test_5F_py (C_Compiler * /* inCompiler */,
                                                        const GALGAS_string & in_BUNDLE_5F_IDENTIFIER,
                                                        const GALGAS_string & in_PROJECT_5F_NAME,
                                                        const GALGAS_stringlist & in_OUTLET_5F_IDENTIFIER_5F_LIST
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#------------------------------------------------------------------------------*\n"
    "\n"
    "import random, string\n"
    "\n"
    "import subprocess, os, sys, atexit\n"
    "import atomac, sys, time, inspect\n"
    "\n"
    "#------------------------------------------------------------------------------*\n"
    "#   GET SOURCE LINE NUMBER                                                     *\n"
    "#------------------------------------------------------------------------------*\n"
    "\n"
    "def lineno():\n"
    "  return inspect.currentframe().f_back.f_lineno\n"
    "\n"
    "#------------------------------------------------------------------------------*\n"
    "#   LAUNCH APPLICATION                                                         *\n"
    "#------------------------------------------------------------------------------*\n"
    "\n"
    "def launchApplication ():\n"
    "  scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
    "  atomac.launchAppByBundlePath (scriptDir + \"/build/Default/" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << ".app\")\n"
    "  time.sleep (0.5)\n"
    "  application = atomac.getAppRefByBundleId ('" ;
  result << in_BUNDLE_5F_IDENTIFIER.stringValue () ;
  result << "." ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "')\n"
    "  return application\n"
    "\n"
    "#------------------------------------------------------------------------------*\n"
    "#   QUIT APPLICATION                                                           *\n"
    "#------------------------------------------------------------------------------*\n"
    "\n"
    "def quitApplication ():\n"
    "  atomac.terminateAppByBundleId ('" ;
  result << in_BUNDLE_5F_IDENTIFIER.stringValue () ;
  result << "." ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "')\n"
    "  time.sleep (0.5)\n"
    "\n"
    "#------------------------------------------------------------------------------*\n"
    "#   PREFERENCES WINDOW                                                         *\n"
    "#------------------------------------------------------------------------------*\n"
    "\n"
    "def setUpPreferencesWindow (application) :\n"
    "  time.sleep (0.5)\n"
    "  window = application.windows ('" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "')[0]\n" ;
  GALGAS_uint index_1785_ (0) ;
  if (in_OUTLET_5F_IDENTIFIER_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_1785 (in_OUTLET_5F_IDENTIFIER_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1785.hasCurrentObject ()) {
      result << "  global " ;
      result << enumerator_1785.current_mValue (HERE).stringValue () ;
      result << "\n"
        "  " ;
      result << enumerator_1785.current_mValue (HERE).stringValue () ;
      result << " = window.findFirst (AXIdentifier='" ;
      result << enumerator_1785.current_mValue (HERE).stringValue () ;
      result << "')\n" ;
      index_1785_.increment () ;
      enumerator_1785.gotoNextObject () ;
    }
  }
  result << "\n"
    "#------------------------------------------------------------------------------*\n"
    "#   CHECK TEXT FIELD VALUE                                                     *\n"
    "#------------------------------------------------------------------------------*\n"
    "\n"
    "def checkTextFieldValue (textField, expectedValue, line):\n"
    "  if textField.AXValue != expectedValue :\n"
    "    print '*** Check error at line ' + str (line) + ' ***'\n"
    "    sys.exit (1)\n"
    "\n"
    "#------------------------------------------------------------------------------*\n"
    "#   SET TEXT FIELD                                                             *\n"
    "#------------------------------------------------------------------------------*\n"
    "\n"
    "def setTextFieldValue (textField, value):\n"
    "  textField.AXFocused = True\n"
    "  textField.AXValue = value\n"
    "  textField.Confirm ()\n"
    "  time.sleep (0.5)\n"
    "\n"
    "#------------------------------------------------------------------------------*\n"
    "#   MAIN                                                                       *\n"
    "#------------------------------------------------------------------------------*\n"
    "\n"
    "application = launchApplication ()\n"
    "setUpPreferencesWindow (application)\n"
    "\n"
    "\n" ;
  return GALGAS_string (result) ;
}

#include "project_header.h"
#include "command_line_interface/F_mainForLIBPM.h"
#include "command_line_interface/F_Analyze_CLI_Options.h"
#include "utilities/F_DisplayException.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "galgas2/F_verbose_output.h"
#include "galgas2/cLexiqueIntrospection.h"
#include "command_line_interface/C_builtin_CLI_Options.h"

//----------------------------------------------------------------------------------------------------------------------
//
//                      print_tool_help_message                                                  
//
//----------------------------------------------------------------------------------------------------------------------

static void print_tool_help_message (void) {
  co << "Compiled with GALGAS revision NUMERO_REVISION_GALGAS\n" ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * kSourceFileExtensions [] = {
  "eb",
  NULL
} ;    

//----------------------------------------------------------------------------------------------------------------------

static const char * kSourceFileHelpMessages [] = {
  "a source text file with the .easyBindings extension",
  NULL
} ;    

//----------------------------------------------------------------------------------------------------------------------

const char * projectVersionString (void) {
  return "0.0.1" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'before'
//
//----------------------------------------------------------------------------------------------------------------------

static void routine_before (C_Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'after'
//
//----------------------------------------------------------------------------------------------------------------------

static void routine_after (C_Compiler * /* inCompiler */
                           COMMA_UNUSED_LOCATION_ARGS) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'programRule_0'
//
//----------------------------------------------------------------------------------------------------------------------

static void routine_programRule_5F__30_ (const GALGAS_lstring constinArgument_inSourceFile,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_astDeclarationStruct var_declarationStruct_1127 = GALGAS_astDeclarationStruct::constructor_default (SOURCE_FILE ("program.ggs", 23)) ;
  GALGAS_location joker_1266 ; // Joker input parameter
  cGrammar_easyBindings_5F_grammar::_performSourceStringParsing_ (inCompiler, GALGAS_string (filewrapperTemplate_predefinedOutletClasses_sourceFile (inCompiler COMMA_SOURCE_FILE ("program.ggs", 25))), GALGAS_string::makeEmptyString (), var_declarationStruct_1127, joker_1266  COMMA_SOURCE_FILE ("program.ggs", 25)) ;
  GALGAS_location var_endOfSourceFile_1474 ;
  var_endOfSourceFile_1474.drop () ;
  cGrammar_easyBindings_5F_grammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile, var_declarationStruct_1127, var_endOfSourceFile_1474  COMMA_SOURCE_FILE ("program.ggs", 27)) ;
  var_declarationStruct_1127.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_prefsDeclarationAST::constructor_new (GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("program.ggs", 30)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("program.ggs", 30))  COMMA_SOURCE_FILE ("program.ggs", 30)), var_declarationStruct_1127.readProperty_mPreferences ()  COMMA_SOURCE_FILE ("program.ggs", 29))  COMMA_SOURCE_FILE ("program.ggs", 29)) ;
  {
  routine_enterAtomicClassesIn (var_declarationStruct_1127.mProperty_mUnifiedDeclarationList, inCompiler  COMMA_SOURCE_FILE ("program.ggs", 34)) ;
  }
  GALGAS_declarationListAST var_sortedDeclarationListAST_2020 ;
  {
  routine_sortProperties (constinArgument_inSourceFile.readProperty_string (), var_declarationStruct_1127.readProperty_mUnifiedDeclarationList (), var_sortedDeclarationListAST_2020, inCompiler  COMMA_SOURCE_FILE ("program.ggs", 36)) ;
  }
  GALGAS_semanticContext var_semanticContext_2134 = GALGAS_semanticContext::constructor_default (SOURCE_FILE ("program.ggs", 38)) ;
  var_semanticContext_2134.setter_setMAutoLayoutVStackFunctionMap (var_declarationStruct_1127.readProperty_mAutoLayoutVStackFunctionMap () COMMA_SOURCE_FILE ("program.ggs", 39)) ;
  var_semanticContext_2134.setter_setMAutoLayoutHStackFunctionMap (var_declarationStruct_1127.readProperty_mAutoLayoutHStackFunctionMap () COMMA_SOURCE_FILE ("program.ggs", 40)) ;
  var_semanticContext_2134.setter_setMEnumerationFunctionListAST (var_declarationStruct_1127.readProperty_mEnumerationFunctionListAST () COMMA_SOURCE_FILE ("program.ggs", 41)) ;
  GALGAS_generationStruct var_generation_2466 = GALGAS_generationStruct::constructor_default (SOURCE_FILE ("program.ggs", 42)) ;
  cEnumerator_declarationListAST enumerator_2496 (var_sortedDeclarationListAST_2020, kENUMERATION_UP) ;
  bool bool_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.ggs", 43)).objectCompare (GALGAS_uint (uint32_t (0U)))).isValidAndTrue () ;
  if (enumerator_2496.hasCurrentObject () && bool_0) {
    while (enumerator_2496.hasCurrentObject () && bool_0) {
      callExtensionMethod_firstAnalysisPhase ((cPtr_abstractDeclarationAST *) enumerator_2496.current_mPropertyDeclaration (HERE).ptr (), var_semanticContext_2134, var_generation_2466, inCompiler COMMA_SOURCE_FILE ("program.ggs", 44)) ;
      enumerator_2496.gotoNextObject () ;
      if (enumerator_2496.hasCurrentObject ()) {
        bool_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.ggs", 43)).objectCompare (GALGAS_uint (uint32_t (0U)))).isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.ggs", 47)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      routine_buildBindingSpecificationMap (var_semanticContext_2134, var_declarationStruct_1127.readProperty_mBindingSpecificationListMap (), inCompiler  COMMA_SOURCE_FILE ("program.ggs", 48)) ;
      }
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.ggs", 53)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      routine_buildAutoLayoutBindingSpecificationMap (var_semanticContext_2134, var_declarationStruct_1127.readProperty_mAutoLayoutBindingSpecificationList (), inCompiler  COMMA_SOURCE_FILE ("program.ggs", 54)) ;
      }
    }
  }
  cEnumerator_declarationListAST enumerator_3130 (var_sortedDeclarationListAST_2020, kENUMERATION_UP) ;
  bool bool_3 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.ggs", 60)).objectCompare (GALGAS_uint (uint32_t (0U)))).isValidAndTrue () ;
  if (enumerator_3130.hasCurrentObject () && bool_3) {
    while (enumerator_3130.hasCurrentObject () && bool_3) {
      callExtensionMethod_secondAnalysisPhase ((cPtr_abstractDeclarationAST *) enumerator_3130.current_mPropertyDeclaration (HERE).ptr (), var_semanticContext_2134, var_generation_2466, inCompiler COMMA_SOURCE_FILE ("program.ggs", 61)) ;
      enumerator_3130.gotoNextObject () ;
      if (enumerator_3130.hasCurrentObject ()) {
        bool_3 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.ggs", 60)).objectCompare (GALGAS_uint (uint32_t (0U)))).isValidAndTrue () ;
      }
    }
  }
  cEnumerator_declarationListAST enumerator_3358 (var_sortedDeclarationListAST_2020, kENUMERATION_UP) ;
  bool bool_4 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.ggs", 64)).objectCompare (GALGAS_uint (uint32_t (0U)))).isValidAndTrue () ;
  if (enumerator_3358.hasCurrentObject () && bool_4) {
    while (enumerator_3358.hasCurrentObject () && bool_4) {
      callExtensionMethod_thirdAnalysisPhase ((cPtr_abstractDeclarationAST *) enumerator_3358.current_mPropertyDeclaration (HERE).ptr (), var_semanticContext_2134, var_generation_2466, inCompiler COMMA_SOURCE_FILE ("program.ggs", 65)) ;
      enumerator_3358.gotoNextObject () ;
      if (enumerator_3358.hasCurrentObject ()) {
        bool_4 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.ggs", 64)).objectCompare (GALGAS_uint (uint32_t (0U)))).isValidAndTrue () ;
      }
    }
  }
  cEnumerator_declarationListAST enumerator_3586 (var_sortedDeclarationListAST_2020, kENUMERATION_UP) ;
  bool bool_5 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.ggs", 68)).objectCompare (GALGAS_uint (uint32_t (0U)))).isValidAndTrue () ;
  if (enumerator_3586.hasCurrentObject () && bool_5) {
    while (enumerator_3586.hasCurrentObject () && bool_5) {
      callExtensionMethod_fourthAnalysisPhase ((cPtr_abstractDeclarationAST *) enumerator_3586.current_mPropertyDeclaration (HERE).ptr (), var_semanticContext_2134, var_generation_2466, inCompiler COMMA_SOURCE_FILE ("program.ggs", 69)) ;
      enumerator_3586.gotoNextObject () ;
      if (enumerator_3586.hasCurrentObject ()) {
        bool_5 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.ggs", 68)).objectCompare (GALGAS_uint (uint32_t (0U)))).isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.ggs", 72)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_6) {
      cEnumerator_enumerationFunctionListAST enumerator_3874 (var_semanticContext_2134.readProperty_mEnumerationFunctionListAST (), kENUMERATION_UP) ;
      while (enumerator_3874.hasCurrentObject ()) {
        GALGAS_classKind var_type_3992 ;
        GALGAS_propertyMap joker_3994_3 ; // Joker input parameter
        GALGAS_actionMap joker_3994_2 ; // Joker input parameter
        GALGAS_propertyGenerationList joker_3994_1 ; // Joker input parameter
        var_semanticContext_2134.readProperty_mClassMap ().method_searchKey (enumerator_3874.current_mEnumName (HERE), var_type_3992, joker_3994_3, joker_3994_2, joker_3994_1, inCompiler COMMA_SOURCE_FILE ("program.ggs", 74)) ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          test_7 = var_type_3992.getter_isAtomic (SOURCE_FILE ("program.ggs", 75)).operator_not (SOURCE_FILE ("program.ggs", 75)).boolEnum () ;
          if (kBoolTrue == test_7) {
            TC_Array <C_FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (enumerator_3874.current_mEnumName (HERE).readProperty_location (), GALGAS_string ("this type should be an enum type"), fixItArray8  COMMA_SOURCE_FILE ("program.ggs", 76)) ;
          }
        }
        if (kBoolFalse == test_7) {
          GALGAS_typeKind var_typeKind_4146 ;
          var_type_3992.method_atomic (var_typeKind_4146, inCompiler COMMA_SOURCE_FILE ("program.ggs", 78)) ;
          enumGalgasBool test_9 = kBoolTrue ;
          if (kBoolTrue == test_9) {
            test_9 = var_typeKind_4146.getter_isEnumType (SOURCE_FILE ("program.ggs", 79)).operator_not (SOURCE_FILE ("program.ggs", 79)).boolEnum () ;
            if (kBoolTrue == test_9) {
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (enumerator_3874.current_mEnumName (HERE).readProperty_location (), GALGAS_string ("this type should be an enum type"), fixItArray10  COMMA_SOURCE_FILE ("program.ggs", 80)) ;
            }
          }
        }
        enumerator_3874.gotoNextObject () ;
      }
    }
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.ggs", 86)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_11) {
      {
      routine_graphvizAnalysis (constinArgument_inSourceFile.readProperty_string ().getter_stringByDeletingLastPathComponent (SOURCE_FILE ("program.ggs", 87)), var_semanticContext_2134, var_declarationStruct_1127.readProperty_mGraphvizList (), inCompiler  COMMA_SOURCE_FILE ("program.ggs", 87)) ;
      }
    }
  }
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    test_12 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.ggs", 90)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_12) {
      {
      routine_generateCode (var_declarationStruct_1127.readProperty_mXcodeProject ().readProperty_string (), var_generation_2466, constinArgument_inSourceFile.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("program.ggs", 91)) ;
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//                      M A I N    F O R    L I B P M                                            
//
//----------------------------------------------------------------------------------------------------------------------

int mainForLIBPM (int inArgc, const char * inArgv []) {
//--- Analyze Command Line Options
  TC_UniqueArray <C_String> sourceFilesArray ;
  F_Analyze_CLI_Options (inArgc, inArgv,
                         sourceFilesArray,
                         kSourceFileExtensions,
                         kSourceFileHelpMessages,
                         print_tool_help_message) ;
//---
  int returnCode = 0 ; // No error
//--- Set Execution mode
  C_String executionModeOptionErrorMessage ;
  setExecutionMode (executionModeOptionErrorMessage) ;
  if (executionModeOptionErrorMessage.length () > 0) {
    co << executionModeOptionErrorMessage ;
    returnCode = 1 ;
  }else{
  //--- Common lexique object
    C_Compiler * commonCompiler = NULL ;
    macroMyNew (commonCompiler, C_Compiler (NULL COMMA_HERE)) ;
    try{
      routine_before (commonCompiler COMMA_HERE) ;
      cLexiqueIntrospection::handleGetKeywordListOption (commonCompiler) ;
      const bool verboseOptionOn = verboseOutput () ;
      for (int32_t i=0 ; i<sourceFilesArray.count () ; i++) {
        const C_String fileExtension = sourceFilesArray (i COMMA_HERE).pathExtension () ;
        const GALGAS_string sfp = GALGAS_string (sourceFilesArray (i COMMA_HERE)) ;
        const GALGAS_location location = commonCompiler->here () ;
        const GALGAS_lstring sourceFilePath (sfp, location) ;
        int r = 0 ;
        if (fileExtension == "eb") {
          switch (executionMode ()) {
          case kExecutionModeNormal :
            routine_programRule_5F__30_ (sourceFilePath, commonCompiler COMMA_HERE) ;
            break ;
          case kExecutionModeLexicalAnalysisOnly :
            cGrammar_easyBindings_5F_grammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeSyntaxAnalysisOnly :
            cGrammar_easyBindings_5F_grammar::performOnlySyntaxAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeIndexing :
            cGrammar_easyBindings_5F_grammar::performIndexing (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeLatex :
            cGrammar_easyBindings_5F_grammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          }
        }else{
          printf ("*** Error: unhandled extension for file '%s' ***\n", sourceFilesArray (i COMMA_HERE).cString (HERE)) ;
          r = 1 ;
        }
        if (r != 0) {
          returnCode = r ;
        }
      }
    //--- Error or warnings ?
      if (totalErrorCount () > 0) {
        returnCode = 1 ; // Error code
      }else if (totalWarningCount () > 0) {
        if (gOption_galgas_5F_builtin_5F_options_treat_5F_warnings_5F_as_5F_error.mValue) {
          returnCode = 1 ; // Error code
          if (verboseOptionOn) {
            printf ("** Note: warnings are treated as errors. **\n") ;
          }
        }
      }
    //--- Epilogue
      routine_after (commonCompiler COMMA_HERE) ;
    //--- Emit JSON issue file ?
      if (gOption_generic_5F_cli_5F_options_emit_5F_issue_5F_json_5F_file.mValue != "") {
        commonCompiler->writeIssueJSONFile (gOption_generic_5F_cli_5F_options_emit_5F_issue_5F_json_5F_file.mValue) ;
      }
    //--- Display error and warnings count
      if (verboseOptionOn || (totalWarningCount () > 0) || (totalErrorCount () > 0)) {
        C_String message ;
        if (totalWarningCount () == 0) {
          message << "No warning" ;
        }else if (totalWarningCount () == 1) {
          message << "1 warning" ;
        }else{
          message << cStringWithSigned (totalWarningCount ()) << " warnings" ;
        }
        message << ", " ;
        if (totalErrorCount () == 0) {
          message << "no error" ;
        }else if (totalErrorCount () == 1) {
          message << "1 error" ;
        }else{
          message << cStringWithSigned (totalErrorCount ()) << " errors" ;
        }
        message << ".\n" ;
        ggs_printMessage (message COMMA_HERE) ;
      }
    }catch (const ::std::exception & e) {
      F_default_display_exception (e) ;
      returnCode = 1 ; // Error code
    }catch (...) {
      printf ("**** Unknow exception ****\n") ;
      throw ;
    }
    macroDetachSharedObject (commonCompiler) ;
  }
  return returnCode ;
}


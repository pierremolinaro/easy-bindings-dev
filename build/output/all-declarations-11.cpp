#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-11.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateSwiftApplicationFiles'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateSwiftApplicationFiles (const GALGAS_string constinArgument_inOutputDirectory,
                                            const GALGAS_bool constinArgument_inHasEntities,
                                            GALGAS_stringset & ioArgument_ioGeneratedFileSet,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist temp_0 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("code-generation.galgas", 208)) ;
  temp_0.addAssign_operation (GALGAS_string ("main")  COMMA_SOURCE_FILE ("code-generation.galgas", 147)) ;
  temp_0.addAssign_operation (GALGAS_string ("EBAllocationDebug-debug")  COMMA_SOURCE_FILE ("code-generation.galgas", 148)) ;
  temp_0.addAssign_operation (GALGAS_string ("EBAllocationDebug-release")  COMMA_SOURCE_FILE ("code-generation.galgas", 149)) ;
  temp_0.addAssign_operation (GALGAS_string ("EBUndoManager")  COMMA_SOURCE_FILE ("code-generation.galgas", 150)) ;
  temp_0.addAssign_operation (GALGAS_string ("property-explorer")  COMMA_SOURCE_FILE ("code-generation.galgas", 151)) ;
  temp_0.addAssign_operation (GALGAS_string ("EBSignatureObserverProtocol")  COMMA_SOURCE_FILE ("code-generation.galgas", 152)) ;
  temp_0.addAssign_operation (GALGAS_string ("EBWeakEventSet")  COMMA_SOURCE_FILE ("code-generation.galgas", 153)) ;
  temp_0.addAssign_operation (GALGAS_string ("EBModelNotifierEvent")  COMMA_SOURCE_FILE ("code-generation.galgas", 154)) ;
  temp_0.addAssign_operation (GALGAS_string ("EBAbstractProperty")  COMMA_SOURCE_FILE ("code-generation.galgas", 155)) ;
  temp_0.addAssign_operation (GALGAS_string ("func-presentErrorWindow")  COMMA_SOURCE_FILE ("code-generation.galgas", 156)) ;
  temp_0.addAssign_operation (GALGAS_string ("func-checkOutletConnection")  COMMA_SOURCE_FILE ("code-generation.galgas", 157)) ;
  temp_0.addAssign_operation (GALGAS_string ("ReadOnlyAbstractGenericRelationshipProperty")  COMMA_SOURCE_FILE ("code-generation.galgas", 158)) ;
  temp_0.addAssign_operation (GALGAS_string ("ReadOnlyAbstractArrayProperty")  COMMA_SOURCE_FILE ("code-generation.galgas", 159)) ;
  temp_0.addAssign_operation (GALGAS_string ("ReadOnlyAbstractObjectProperty")  COMMA_SOURCE_FILE ("code-generation.galgas", 160)) ;
  temp_0.addAssign_operation (GALGAS_string ("EBReadOnlyPropertyController")  COMMA_SOURCE_FILE ("code-generation.galgas", 161)) ;
  temp_0.addAssign_operation (GALGAS_string ("EBGenericReadWritePropertyController")  COMMA_SOURCE_FILE ("code-generation.galgas", 162)) ;
  temp_0.addAssign_operation (GALGAS_string ("EBTableCellView")  COMMA_SOURCE_FILE ("code-generation.galgas", 163)) ;
  temp_0.addAssign_operation (GALGAS_string ("BezierPathArray")  COMMA_SOURCE_FILE ("code-generation.galgas", 164)) ;
  temp_0.addAssign_operation (GALGAS_string ("extension-Data-EBPropertyProtocol")  COMMA_SOURCE_FILE ("code-generation.galgas", 165)) ;
  temp_0.addAssign_operation (GALGAS_string ("extension-NSFont-EBPropertyProtocol")  COMMA_SOURCE_FILE ("code-generation.galgas", 166)) ;
  temp_0.addAssign_operation (GALGAS_string ("extension-Date-EBPropertyProtocol")  COMMA_SOURCE_FILE ("code-generation.galgas", 167)) ;
  temp_0.addAssign_operation (GALGAS_string ("extension-NSColor-EBPropertyProtocol")  COMMA_SOURCE_FILE ("code-generation.galgas", 168)) ;
  temp_0.addAssign_operation (GALGAS_string ("extension-Bool-EBPropertyProtocol")  COMMA_SOURCE_FILE ("code-generation.galgas", 169)) ;
  temp_0.addAssign_operation (GALGAS_string ("extension-Double-EBPropertyProtocol")  COMMA_SOURCE_FILE ("code-generation.galgas", 170)) ;
  temp_0.addAssign_operation (GALGAS_string ("extension-NSBezierPath-EBPropertyProtocol")  COMMA_SOURCE_FILE ("code-generation.galgas", 171)) ;
  temp_0.addAssign_operation (GALGAS_string ("EBValidationResult")  COMMA_SOURCE_FILE ("code-generation.galgas", 172)) ;
  temp_0.addAssign_operation (GALGAS_string ("EBObject")  COMMA_SOURCE_FILE ("code-generation.galgas", 173)) ;
  temp_0.addAssign_operation (GALGAS_string ("extension-Int-EBPropertyProtocol")  COMMA_SOURCE_FILE ("code-generation.galgas", 174)) ;
  temp_0.addAssign_operation (GALGAS_string ("extension-UInt32-EBPropertyProtocol")  COMMA_SOURCE_FILE ("code-generation.galgas", 175)) ;
  temp_0.addAssign_operation (GALGAS_string ("extension-String-EBPropertyProtocol")  COMMA_SOURCE_FILE ("code-generation.galgas", 176)) ;
  temp_0.addAssign_operation (GALGAS_string ("EBEnumTransientProperty")  COMMA_SOURCE_FILE ("code-generation.galgas", 177)) ;
  temp_0.addAssign_operation (GALGAS_string ("EBEnumStoredProperty")  COMMA_SOURCE_FILE ("code-generation.galgas", 178)) ;
  temp_0.addAssign_operation (GALGAS_string ("EBEnumPropertyProxy")  COMMA_SOURCE_FILE ("code-generation.galgas", 179)) ;
  temp_0.addAssign_operation (GALGAS_string ("EBEnumReadWriteProperty")  COMMA_SOURCE_FILE ("code-generation.galgas", 180)) ;
  temp_0.addAssign_operation (GALGAS_string ("EBEnumReadOnlyProperty")  COMMA_SOURCE_FILE ("code-generation.galgas", 181)) ;
  temp_0.addAssign_operation (GALGAS_string ("EBObservableObjectProtocol")  COMMA_SOURCE_FILE ("code-generation.galgas", 182)) ;
  temp_0.addAssign_operation (GALGAS_string ("EnumPropertyProtocol")  COMMA_SOURCE_FILE ("code-generation.galgas", 183)) ;
  temp_0.addAssign_operation (GALGAS_string ("EBEnumProtocol")  COMMA_SOURCE_FILE ("code-generation.galgas", 184)) ;
  temp_0.addAssign_operation (GALGAS_string ("EBGenericTransientProperty")  COMMA_SOURCE_FILE ("code-generation.galgas", 185)) ;
  temp_0.addAssign_operation (GALGAS_string ("EBGenericPreferenceProperty")  COMMA_SOURCE_FILE ("code-generation.galgas", 186)) ;
  temp_0.addAssign_operation (GALGAS_string ("EBGenericComputedProperty")  COMMA_SOURCE_FILE ("code-generation.galgas", 187)) ;
  temp_0.addAssign_operation (GALGAS_string ("EBGenericStoredProperty")  COMMA_SOURCE_FILE ("code-generation.galgas", 188)) ;
  temp_0.addAssign_operation (GALGAS_string ("EBGenericPropertyProxy")  COMMA_SOURCE_FILE ("code-generation.galgas", 189)) ;
  temp_0.addAssign_operation (GALGAS_string ("EBGenericReadWriteProperty")  COMMA_SOURCE_FILE ("code-generation.galgas", 190)) ;
  temp_0.addAssign_operation (GALGAS_string ("EBGenericReadOnlyProperty")  COMMA_SOURCE_FILE ("code-generation.galgas", 191)) ;
  temp_0.addAssign_operation (GALGAS_string ("EBPropertyProtocol")  COMMA_SOURCE_FILE ("code-generation.galgas", 192)) ;
  temp_0.addAssign_operation (GALGAS_string ("extension-Data-Comparable")  COMMA_SOURCE_FILE ("code-generation.galgas", 193)) ;
  temp_0.addAssign_operation (GALGAS_string ("PropertyKind")  COMMA_SOURCE_FILE ("code-generation.galgas", 194)) ;
  temp_0.addAssign_operation (GALGAS_string ("EBSelection")  COMMA_SOURCE_FILE ("code-generation.galgas", 195)) ;
  temp_0.addAssign_operation (GALGAS_string ("func-defaultValidationFunction")  COMMA_SOURCE_FILE ("code-generation.galgas", 196)) ;
  temp_0.addAssign_operation (GALGAS_string ("multiple-binding-controllers")  COMMA_SOURCE_FILE ("code-generation.galgas", 197)) ;
  temp_0.addAssign_operation (GALGAS_string ("Application")  COMMA_SOURCE_FILE ("code-generation.galgas", 198)) ;
  temp_0.addAssign_operation (GALGAS_string ("model-events")  COMMA_SOURCE_FILE ("code-generation.galgas", 199)) ;
  temp_0.addAssign_operation (GALGAS_string ("outlet-events")  COMMA_SOURCE_FILE ("code-generation.galgas", 200)) ;
  temp_0.addAssign_operation (GALGAS_string ("file-format-binary")  COMMA_SOURCE_FILE ("code-generation.galgas", 201)) ;
  temp_0.addAssign_operation (GALGAS_string ("file-metadata-binary-format")  COMMA_SOURCE_FILE ("code-generation.galgas", 202)) ;
  temp_0.addAssign_operation (GALGAS_string ("file-format-text-utilities")  COMMA_SOURCE_FILE ("code-generation.galgas", 203)) ;
  temp_0.addAssign_operation (GALGAS_string ("file-metadata-get")  COMMA_SOURCE_FILE ("code-generation.galgas", 204)) ;
  temp_0.addAssign_operation (GALGAS_string ("file-format-text")  COMMA_SOURCE_FILE ("code-generation.galgas", 205)) ;
  temp_0.addAssign_operation (GALGAS_string ("file-metadata-text-format")  COMMA_SOURCE_FILE ("code-generation.galgas", 206)) ;
  temp_0.addAssign_operation (GALGAS_string ("file-format-utilities")  COMMA_SOURCE_FILE ("code-generation.galgas", 207)) ;
  temp_0.addAssign_operation (GALGAS_string ("file-operations-facade")  COMMA_SOURCE_FILE ("code-generation.galgas", 208)) ;
  GALGAS_stringlist var_swiftFiles_4983 = temp_0 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = constinArgument_inHasEntities.boolEnum () ;
    if (kBoolTrue == test_1) {
      var_swiftFiles_4983.addAssign_operation (GALGAS_string ("EBManagedObject")  COMMA_SOURCE_FILE ("code-generation.galgas", 211)) ;
      var_swiftFiles_4983.addAssign_operation (GALGAS_string ("EBDataScanner")  COMMA_SOURCE_FILE ("code-generation.galgas", 212)) ;
      var_swiftFiles_4983.addAssign_operation (GALGAS_string ("EBGraphicManagedObject")  COMMA_SOURCE_FILE ("code-generation.galgas", 213)) ;
      var_swiftFiles_4983.addAssign_operation (GALGAS_string ("buildPDFimage")  COMMA_SOURCE_FILE ("code-generation.galgas", 214)) ;
      var_swiftFiles_4983.addAssign_operation (GALGAS_string ("EBScrollView")  COMMA_SOURCE_FILE ("code-generation.galgas", 216)) ;
      var_swiftFiles_4983.addAssign_operation (GALGAS_string ("EBFocusRingView")  COMMA_SOURCE_FILE ("code-generation.galgas", 217)) ;
      var_swiftFiles_4983.addAssign_operation (GALGAS_string ("EBGraphicView")  COMMA_SOURCE_FILE ("code-generation.galgas", 218)) ;
      var_swiftFiles_4983.addAssign_operation (GALGAS_string ("EBGraphicView-binding-arrowKeyMagnitude")  COMMA_SOURCE_FILE ("code-generation.galgas", 219)) ;
      var_swiftFiles_4983.addAssign_operation (GALGAS_string ("EBGraphicView-binding-backColor")  COMMA_SOURCE_FILE ("code-generation.galgas", 220)) ;
      var_swiftFiles_4983.addAssign_operation (GALGAS_string ("EBGraphicView-binding-backgroundImage")  COMMA_SOURCE_FILE ("code-generation.galgas", 221)) ;
      var_swiftFiles_4983.addAssign_operation (GALGAS_string ("EBGraphicView-binding-foregroundImage")  COMMA_SOURCE_FILE ("code-generation.galgas", 222)) ;
      var_swiftFiles_4983.addAssign_operation (GALGAS_string ("EBGraphicView-binding-gridCrossColor")  COMMA_SOURCE_FILE ("code-generation.galgas", 223)) ;
      var_swiftFiles_4983.addAssign_operation (GALGAS_string ("EBGraphicView-binding-gridDisplayFactor")  COMMA_SOURCE_FILE ("code-generation.galgas", 224)) ;
      var_swiftFiles_4983.addAssign_operation (GALGAS_string ("EBGraphicView-binding-gridLineColor")  COMMA_SOURCE_FILE ("code-generation.galgas", 225)) ;
      var_swiftFiles_4983.addAssign_operation (GALGAS_string ("EBGraphicView-binding-gridStep")  COMMA_SOURCE_FILE ("code-generation.galgas", 226)) ;
      var_swiftFiles_4983.addAssign_operation (GALGAS_string ("EBGraphicView-binding-gridStyle")  COMMA_SOURCE_FILE ("code-generation.galgas", 227)) ;
      var_swiftFiles_4983.addAssign_operation (GALGAS_string ("EBGraphicView-binding-horizontalFlip")  COMMA_SOURCE_FILE ("code-generation.galgas", 228)) ;
      var_swiftFiles_4983.addAssign_operation (GALGAS_string ("EBGraphicView-binding-mouseGrid")  COMMA_SOURCE_FILE ("code-generation.galgas", 229)) ;
      var_swiftFiles_4983.addAssign_operation (GALGAS_string ("EBGraphicView-binding-overObjectsDisplay")  COMMA_SOURCE_FILE ("code-generation.galgas", 230)) ;
      var_swiftFiles_4983.addAssign_operation (GALGAS_string ("EBGraphicView-binding-shiftArrowKeyMagnitude")  COMMA_SOURCE_FILE ("code-generation.galgas", 231)) ;
      var_swiftFiles_4983.addAssign_operation (GALGAS_string ("EBGraphicView-binding-underObjectsDisplay")  COMMA_SOURCE_FILE ("code-generation.galgas", 232)) ;
      var_swiftFiles_4983.addAssign_operation (GALGAS_string ("EBGraphicView-binding-verticalFlip")  COMMA_SOURCE_FILE ("code-generation.galgas", 233)) ;
      var_swiftFiles_4983.addAssign_operation (GALGAS_string ("EBGraphicView-binding-xPlacardUnit")  COMMA_SOURCE_FILE ("code-generation.galgas", 234)) ;
      var_swiftFiles_4983.addAssign_operation (GALGAS_string ("EBGraphicView-binding-yPlacardUnit")  COMMA_SOURCE_FILE ("code-generation.galgas", 235)) ;
      var_swiftFiles_4983.addAssign_operation (GALGAS_string ("EBGraphicView-binding-zoom")  COMMA_SOURCE_FILE ("code-generation.galgas", 236)) ;
      var_swiftFiles_4983.addAssign_operation (GALGAS_string ("EBGraphicView-dragging-source")  COMMA_SOURCE_FILE ("code-generation.galgas", 237)) ;
      var_swiftFiles_4983.addAssign_operation (GALGAS_string ("EBGraphicView-draw")  COMMA_SOURCE_FILE ("code-generation.galgas", 238)) ;
      var_swiftFiles_4983.addAssign_operation (GALGAS_string ("EBGraphicView-guide")  COMMA_SOURCE_FILE ("code-generation.galgas", 239)) ;
      var_swiftFiles_4983.addAssign_operation (GALGAS_string ("EBGraphicView-issue")  COMMA_SOURCE_FILE ("code-generation.galgas", 240)) ;
      var_swiftFiles_4983.addAssign_operation (GALGAS_string ("EBGraphicView-key-down")  COMMA_SOURCE_FILE ("code-generation.galgas", 241)) ;
      var_swiftFiles_4983.addAssign_operation (GALGAS_string ("EBGraphicView-magnify-and-zoom")  COMMA_SOURCE_FILE ("code-generation.galgas", 242)) ;
      var_swiftFiles_4983.addAssign_operation (GALGAS_string ("EBGraphicView-menu-actions")  COMMA_SOURCE_FILE ("code-generation.galgas", 243)) ;
      var_swiftFiles_4983.addAssign_operation (GALGAS_string ("EBGraphicView-mouse-down-behaviours")  COMMA_SOURCE_FILE ("code-generation.galgas", 244)) ;
      var_swiftFiles_4983.addAssign_operation (GALGAS_string ("EBGraphicView-mouse-moved-exited")  COMMA_SOURCE_FILE ("code-generation.galgas", 245)) ;
      var_swiftFiles_4983.addAssign_operation (GALGAS_string ("EBGraphicView-mouse")  COMMA_SOURCE_FILE ("code-generation.galgas", 246)) ;
      var_swiftFiles_4983.addAssign_operation (GALGAS_string ("EBGraphicView-helpers")  COMMA_SOURCE_FILE ("code-generation.galgas", 247)) ;
      var_swiftFiles_4983.addAssign_operation (GALGAS_string ("EBGraphicView-tool-tips")  COMMA_SOURCE_FILE ("code-generation.galgas", 248)) ;
      var_swiftFiles_4983.addAssign_operation (GALGAS_string ("EBGraphicView-tracking-areas")  COMMA_SOURCE_FILE ("code-generation.galgas", 249)) ;
      var_swiftFiles_4983.addAssign_operation (GALGAS_string ("EBGraphicViewControllerProtocol")  COMMA_SOURCE_FILE ("code-generation.galgas", 250)) ;
      var_swiftFiles_4983.addAssign_operation (GALGAS_string ("EBGraphicViewScaleProvider")  COMMA_SOURCE_FILE ("code-generation.galgas", 251)) ;
      var_swiftFiles_4983.addAssign_operation (GALGAS_string ("EBEnclosingGraphicView")  COMMA_SOURCE_FILE ("code-generation.galgas", 252)) ;
      var_swiftFiles_4983.addAssign_operation (GALGAS_string ("NSControl-extension-enable-binding")  COMMA_SOURCE_FILE ("code-generation.galgas", 253)) ;
      var_swiftFiles_4983.addAssign_operation (GALGAS_string ("extension-CGPoint-NSPoint")  COMMA_SOURCE_FILE ("code-generation.galgas", 255)) ;
      var_swiftFiles_4983.addAssign_operation (GALGAS_string ("extension-CGRect-NSRect")  COMMA_SOURCE_FILE ("code-generation.galgas", 256)) ;
      var_swiftFiles_4983.addAssign_operation (GALGAS_string ("extension-CGSize-NSSize")  COMMA_SOURCE_FILE ("code-generation.galgas", 257)) ;
      var_swiftFiles_4983.addAssign_operation (GALGAS_string ("extension-Data")  COMMA_SOURCE_FILE ("code-generation.galgas", 258)) ;
      var_swiftFiles_4983.addAssign_operation (GALGAS_string ("extension-NSBezierPath")  COMMA_SOURCE_FILE ("code-generation.galgas", 259)) ;
      var_swiftFiles_4983.addAssign_operation (GALGAS_string ("extension-NSObject")  COMMA_SOURCE_FILE ("code-generation.galgas", 260)) ;
      var_swiftFiles_4983.addAssign_operation (GALGAS_string ("extension-NSTextView")  COMMA_SOURCE_FILE ("code-generation.galgas", 261)) ;
      var_swiftFiles_4983.addAssign_operation (GALGAS_string ("extension-String")  COMMA_SOURCE_FILE ("code-generation.galgas", 262)) ;
      var_swiftFiles_4983.addAssign_operation (GALGAS_string ("extension-UInt32")  COMMA_SOURCE_FILE ("code-generation.galgas", 263)) ;
      var_swiftFiles_4983.addAssign_operation (GALGAS_string ("EBBezierPath")  COMMA_SOURCE_FILE ("code-generation.galgas", 265)) ;
      var_swiftFiles_4983.addAssign_operation (GALGAS_string ("EBLinePath")  COMMA_SOURCE_FILE ("code-generation.galgas", 266)) ;
      var_swiftFiles_4983.addAssign_operation (GALGAS_string ("EBShape")  COMMA_SOURCE_FILE ("code-generation.galgas", 267)) ;
    }
  }
  GALGAS_stringlist temp_2 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("code-generation.galgas", 269)) ;
  temp_2.addAssign_operation (GALGAS_string ("EBAllocationDebug")  COMMA_SOURCE_FILE ("code-generation.galgas", 269)) ;
  GALGAS_stringlist var_xibFiles_9672 = temp_2 ;
  GALGAS_filewrapper var_fw_9706 = GALGAS_filewrapper (gWrapperDirectory_0_swift_5F_sources) ;
  cEnumerator_stringlist enumerator_9768 (var_swiftFiles_4983, kENUMERATION_UP) ;
  while (enumerator_9768.hasCurrentObject ()) {
    GALGAS_string var_fileName_9788 = enumerator_9768.current_mValue (HERE).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 272)) ;
    GALGAS_string var_contents_9820 = var_fw_9706.getter_textFileContentsAtPath (var_fileName_9788, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 273)) ;
    ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_9788  COMMA_SOURCE_FILE ("code-generation.galgas", 274)) ;
    {
    GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_9788, var_contents_9820, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 275)) ;
    }
    enumerator_9768.gotoNextObject () ;
  }
  cEnumerator_stringlist enumerator_10021 (var_xibFiles_9672, kENUMERATION_UP) ;
  while (enumerator_10021.hasCurrentObject ()) {
    GALGAS_string var_contents_10041 = var_fw_9706.getter_textFileContentsAtPath (enumerator_10021.current_mValue (HERE).add_operation (GALGAS_string (".xib"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 282)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 282)) ;
    GALGAS_string var_fileName_10100 = enumerator_10021.current_mValue (HERE).add_operation (GALGAS_string (".xib"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 283)) ;
    ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_10100  COMMA_SOURCE_FILE ("code-generation.galgas", 284)) ;
    {
    GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_10100, var_contents_10041, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 285)) ;
    }
    enumerator_10021.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'standard_properties'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_standard_5F_properties_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_standard_5F_properties_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_standard_5F_properties (
  "",
  0,
  gWrapperAllFiles_standard_5F_properties_0,
  0,
  gWrapperAllDirectories_standard_5F_properties_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'standard_properties stub'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_standard_5F_properties_stub (C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "import Cocoa\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'standard_properties scalarProperty'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_standard_5F_properties_scalarProperty (C_Compiler * /* inCompiler */,
                                                                         const GALGAS_string & in_TYPE,
                                                                         const GALGAS_bool & in_TRANSIENT,
                                                                         const GALGAS_string & in_COMPARISON_5F_METHOD
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//   Scalar property " ;
  result << in_TYPE.stringValue () ;
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "typealias EBReadOnlyProperty_" ;
  result << in_TYPE.stringValue () ;
  result << "    = EBGenericReadOnlyProperty <" ;
  result << in_TYPE.stringValue () ;
  result << ">\n"
    "typealias EBTransientProperty_" ;
  result << in_TYPE.stringValue () ;
  result << "   = EBGenericTransientProperty <" ;
  result << in_TYPE.stringValue () ;
  result << ">\n" ;
  const enumGalgasBool test_0 = in_TRANSIENT.operator_not (SOURCE_FILE ("scalar-standard-property.swift.galgasTemplate", 7)).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "typealias EBReadWriteProperty_" ;
    result << in_TYPE.stringValue () ;
    result << "   = EBGenericReadWriteProperty <" ;
    result << in_TYPE.stringValue () ;
    result << ">\n"
      "typealias EBPropertyProxy_" ;
    result << in_TYPE.stringValue () ;
    result << "       = EBGenericPropertyProxy <" ;
    result << in_TYPE.stringValue () ;
    result << ">\n"
      "typealias EBComputedProperty_" ;
    result << in_TYPE.stringValue () ;
    result << "    = EBGenericComputedProperty <" ;
    result << in_TYPE.stringValue () ;
    result << ">\n"
      "typealias EBStoredProperty_" ;
    result << in_TYPE.stringValue () ;
    result << "      = EBGenericStoredProperty <" ;
    result << in_TYPE.stringValue () ;
    result << ">\n"
      "typealias EBPreferencesProperty_" ;
    result << in_TYPE.stringValue () ;
    result << " = EBGenericPreferenceProperty <" ;
    result << in_TYPE.stringValue () ;
    result << ">\n"
      "\n"
      "//----------------------------------------------------------------------------------------------------------------------\n"
      "\n"
      "func compare_" ;
    result << in_TYPE.stringValue () ;
    result << "_properties (_ left : EBReadOnlyProperty_" ;
    result << in_TYPE.stringValue () ;
    result << ", _ right : EBReadOnlyProperty_" ;
    result << in_TYPE.stringValue () ;
    result << ") -> ComparisonResult {\n"
      "  switch left.selection {\n"
      "  case .empty :\n"
      "    switch right.selection {\n"
      "    case .empty :\n"
      "      return .orderedSame\n"
      "    default:\n"
      "      return .orderedAscending\n"
      "    }\n"
      "  case .multiple :\n"
      "    switch right.selection {\n"
      "    case .empty :\n"
      "      return .orderedDescending\n"
      "    case .multiple :\n"
      "      return .orderedSame\n"
      "   case .single (_) :\n"
      "      return .orderedAscending\n"
      "   }\n"
      " case .single (let currentValue) :\n"
      "    switch right.selection {\n"
      "    case .empty, .multiple :\n"
      "      return .orderedDescending\n"
      "    case .single (let otherValue) :\n" ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, in_COMPARISON_5F_METHOD.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      result << "      return currentValue." ;
      result << in_COMPARISON_5F_METHOD.stringValue () ;
      result << " (otherValue)\n" ;
    }else if (kBoolFalse == test_1) {
      result << "      if currentValue < otherValue {\n"
        "        return .orderedAscending\n"
        "      }else if currentValue > otherValue {\n"
        "        return .orderedDescending\n"
        "      }else{\n"
        "        return .orderedSame\n"
        "      }\n" ;
    }
    result << "    }\n"
      "  }\n"
      "}\n" ;
  }else if (kBoolFalse == test_0) {
  }
  result << "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'standard_properties classProperty'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_standard_5F_properties_classProperty (C_Compiler * /* inCompiler */,
                                                                        const GALGAS_string & in_CLASS_5F_NAME,
                                                                        const GALGAS_bool & in_COMPARABLE,
                                                                        const GALGAS_bool & in_TRANSIENT
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n" ;
  const enumGalgasBool test_0 = in_TRANSIENT.boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "//   Transient property class " ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << "\n" ;
  }else if (kBoolFalse == test_0) {
    result << "//   Property class " ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << "\n" ;
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  const enumGalgasBool test_1 = in_TRANSIENT.boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "typealias EBReadOnlyProperty_" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << "       = EBGenericReadOnlyProperty <" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << ">\n"
      "typealias EBTransientProperty_" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << "      = EBGenericTransientProperty <" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << ">\n"
      "typealias EBReadOnlyPropertyArray_" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << "  = EBGenericReadOnlyProperty <[" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << "]>\n"
      "typealias EBTransientPropertyArray_" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << " = EBGenericTransientProperty <[" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << "]>\n" ;
  }else if (kBoolFalse == test_1) {
    result << "typealias EBReadOnlyProperty_" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << "    = EBGenericReadOnlyProperty <" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << ">\n"
      "typealias EBTransientProperty_" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << "   = EBGenericTransientProperty <" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << ">\n"
      "typealias EBReadWriteProperty_" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << "   = EBGenericReadWriteProperty <" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << ">\n"
      "typealias EBPropertyProxy_" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << "       = EBGenericPropertyProxy <" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << ">\n"
      "typealias EBComputedProperty_" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << "    = EBGenericComputedProperty <" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << ">\n"
      "typealias EBStoredProperty_" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << "      = EBGenericStoredProperty <" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << ">\n"
      "typealias EBPreferencesProperty_" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << " = EBGenericPreferenceProperty <" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << ">\n" ;
  }
  result << "\n" ;
  const enumGalgasBool test_2 = in_COMPARABLE.boolEnum () ;
  if (kBoolTrue == test_2) {
    result << "\n"
      "//----------------------------------------------------------------------------------------------------------------------\n"
      "\n"
      "func compare_" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << "_properties (_ left : EBReadOnlyProperty_" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << ", _ right : EBReadOnlyProperty_" ;
    result << in_CLASS_5F_NAME.stringValue () ;
    result << ") -> ComparisonResult {\n"
      "  switch left.prop {\n"
      "  case .empty :\n"
      "    switch right.prop {\n"
      "    case .empty :\n"
      "      return .orderedSame\n"
      "    default:\n"
      "      return .orderedAscending\n"
      "    }\n"
      "  case .multiple :\n"
      "    switch right.prop {\n"
      "    case .empty :\n"
      "      return .OrderedDescending\n"
      "    case .multiple :\n"
      "      return .OrderedSame\n"
      "   case .single (_) :\n"
      "      return .OrderedAscending\n"
      "   }\n"
      " case .single (let currentValue) :\n"
      "    switch right.prop {\n"
      "    case .empty, .multiple :\n"
      "      return .orderedDescending\n"
      "    case .single (let otherValue) :\n"
      "      if currentValue < otherValue {\n"
      "        return .orderedAscending\n"
      "      }else if currentValue > otherValue {\n"
      "        return .orderedDescending\n"
      "      }else{\n"
      "        return .orderedSame\n"
      "      }\n"
      "    }\n"
      "  }\n"
      "}\n" ;
  }else if (kBoolFalse == test_2) {
  }
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateStandardProperties'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateStandardProperties (const GALGAS_string constinArgument_inOutputDirectory,
                                         const GALGAS_stringlist constinArgument_inPropertyClassList,
                                         const GALGAS_transientExternTypeList constinArgument_inTransientPropertyExternTypeList,
                                         GALGAS_stringset & ioArgument_ioGeneratedFileSet,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_contents_11161 = GALGAS_string (filewrapperTemplate_standard_5F_properties_stub (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 319))) ;
  var_contents_11161.plusAssign_operation(GALGAS_string (filewrapperTemplate_standard_5F_properties_scalarProperty (inCompiler, GALGAS_string ("UInt32"), GALGAS_bool (false), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("code-generation.galgas", 321))), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 321)) ;
  var_contents_11161.plusAssign_operation(GALGAS_string (filewrapperTemplate_standard_5F_properties_scalarProperty (inCompiler, GALGAS_string ("Int"), GALGAS_bool (false), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("code-generation.galgas", 322))), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 322)) ;
  var_contents_11161.plusAssign_operation(GALGAS_string (filewrapperTemplate_standard_5F_properties_scalarProperty (inCompiler, GALGAS_string ("Bool"), GALGAS_bool (false), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("code-generation.galgas", 323))), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 323)) ;
  var_contents_11161.plusAssign_operation(GALGAS_string (filewrapperTemplate_standard_5F_properties_scalarProperty (inCompiler, GALGAS_string ("Double"), GALGAS_bool (false), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("code-generation.galgas", 324))), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 324)) ;
  var_contents_11161.plusAssign_operation(GALGAS_string (filewrapperTemplate_standard_5F_properties_scalarProperty (inCompiler, GALGAS_string ("String"), GALGAS_bool (false), GALGAS_string ("localizedStandardCompare") COMMA_SOURCE_FILE ("code-generation.galgas", 325))), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 325)) ;
  var_contents_11161.plusAssign_operation(GALGAS_string (filewrapperTemplate_standard_5F_properties_scalarProperty (inCompiler, GALGAS_string ("Data"), GALGAS_bool (false), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("code-generation.galgas", 326))), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 326)) ;
  var_contents_11161.plusAssign_operation(GALGAS_string (filewrapperTemplate_standard_5F_properties_scalarProperty (inCompiler, GALGAS_string ("Date"), GALGAS_bool (false), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("code-generation.galgas", 327))), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 327)) ;
  var_contents_11161.plusAssign_operation(GALGAS_string (filewrapperTemplate_standard_5F_properties_scalarProperty (inCompiler, GALGAS_string ("BezierPathArray"), GALGAS_bool (false), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("code-generation.galgas", 328))), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 328)) ;
  cEnumerator_stringlist enumerator_12013 (constinArgument_inPropertyClassList, kENUMERATION_UP) ;
  while (enumerator_12013.hasCurrentObject ()) {
    var_contents_11161.plusAssign_operation(GALGAS_string (filewrapperTemplate_standard_5F_properties_classProperty (inCompiler, enumerator_12013.current_mValue (HERE), GALGAS_bool (false), GALGAS_bool (false) COMMA_SOURCE_FILE ("code-generation.galgas", 331))), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 331)) ;
    enumerator_12013.gotoNextObject () ;
  }
  cEnumerator_transientExternTypeList enumerator_12181 (constinArgument_inTransientPropertyExternTypeList, kENUMERATION_UP) ;
  while (enumerator_12181.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = enumerator_12181.current_mIsClass (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_contents_11161.plusAssign_operation(GALGAS_string (filewrapperTemplate_standard_5F_properties_classProperty (inCompiler, enumerator_12181.current_mTypeName (HERE), GALGAS_bool (false), GALGAS_bool (true) COMMA_SOURCE_FILE ("code-generation.galgas", 335))), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 335)) ;
      }
    }
    if (kBoolFalse == test_0) {
      var_contents_11161.plusAssign_operation(GALGAS_string (filewrapperTemplate_standard_5F_properties_scalarProperty (inCompiler, enumerator_12181.current_mTypeName (HERE), GALGAS_bool (true), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("code-generation.galgas", 337))), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 337)) ;
    }
    enumerator_12181.gotoNextObject () ;
  }
  var_contents_11161.plusAssign_operation(GALGAS_string (filewrapperTemplate_standard_5F_properties_classProperty (inCompiler, GALGAS_string ("NSBezierPath"), GALGAS_bool (false), GALGAS_bool (false) COMMA_SOURCE_FILE ("code-generation.galgas", 340))), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 340)) ;
  var_contents_11161.plusAssign_operation(GALGAS_string (filewrapperTemplate_standard_5F_properties_classProperty (inCompiler, GALGAS_string ("NSFont"), GALGAS_bool (false), GALGAS_bool (false) COMMA_SOURCE_FILE ("code-generation.galgas", 341))), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 341)) ;
  var_contents_11161.plusAssign_operation(GALGAS_string (filewrapperTemplate_standard_5F_properties_classProperty (inCompiler, GALGAS_string ("NSColor"), GALGAS_bool (false), GALGAS_bool (false) COMMA_SOURCE_FILE ("code-generation.galgas", 342))), inCompiler  COMMA_SOURCE_FILE ("code-generation.galgas", 342)) ;
  GALGAS_string var_fileName_12711 = GALGAS_string ("standard-properties.swift") ;
  ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_12711  COMMA_SOURCE_FILE ("code-generation.galgas", 345)) ;
  {
  GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_12711, var_contents_11161, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 346)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateXcodeProject'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateXcodeProject (const GALGAS_string constinArgument_inOutputDirectory,
                                   const GALGAS_string constinArgument_inXcodeProjectString,
                                   const GALGAS_stringset constinArgument_inGeneratedFileSet,
                                   const GALGAS_string constinArgument_projectName,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inXcodeProjectString.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      routine_generateXcodeProjectInternal (constinArgument_inOutputDirectory, constinArgument_inXcodeProjectString, constinArgument_inGeneratedFileSet, constinArgument_projectName, inCompiler  COMMA_SOURCE_FILE ("xcode-project.galgas", 39)) ;
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateXcodeProjectInternal'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateXcodeProjectInternal (const GALGAS_string constinArgument_inOutputDirectory,
                                           const GALGAS_string constinArgument_inXcodeProjectString,
                                           const GALGAS_stringset constinArgument_inGeneratedFileSet,
                                           const GALGAS_string constinArgument_projectName,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_XcodeProjectDescriptor var_xcodeProject_1600 = GALGAS_XcodeProjectDescriptor::constructor_default (SOURCE_FILE ("xcode-project.galgas", 51)) ;
  GALGAS_string var_SDK_1677 = GALGAS_string ("macosx") ;
  GALGAS_string var_DEPLOYMENT_1705 = GALGAS_string ("10.10") ;
  {
  GALGAS_stringlist temp_0 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("xcode-project.galgas", 93)) ;
  temp_0.addAssign_operation (GALGAS_string ("ALWAYS_SEARCH_USER_PATHS = NO")  COMMA_SOURCE_FILE ("xcode-project.galgas", 56)) ;
  temp_0.addAssign_operation (GALGAS_string ("ARCHS = \"$(ARCHS_STANDARD_64_BIT)\"")  COMMA_SOURCE_FILE ("xcode-project.galgas", 57)) ;
  temp_0.addAssign_operation (GALGAS_string ("CLANG_ENABLE_OBJC_ARC = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas", 58)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_GENERATE_DEBUGGING_SYMBOLS = NO")  COMMA_SOURCE_FILE ("xcode-project.galgas", 59)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_PRECOMPILE_PREFIX_HEADER = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas", 60)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_THREADSAFE_STATICS = NO")  COMMA_SOURCE_FILE ("xcode-project.galgas", 61)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_TREAT_IMPLICIT_FUNCTION_DECLARATIONS_AS_ERRORS = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas", 62)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_TREAT_WARNINGS_AS_ERRORS = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas", 63)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_64_TO_32_BIT_CONVERSION = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas", 64)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_ABOUT_DEPRECATED_FUNCTIONS = NO")  COMMA_SOURCE_FILE ("xcode-project.galgas", 65)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_ABOUT_INVALID_OFFSETOF_MACRO = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas", 66)) ;
  temp_0.addAssign_operation (GALGAS_string ("CLANG_WARN_SUSPICIOUS_IMPLICIT_CONVERSION = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas", 67)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_ABOUT_MISSING_NEWLINE = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas", 68)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_ABOUT_MISSING_PROTOTYPES = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas", 69)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_ABOUT_RETURN_TYPE = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas", 70)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_CHECK_SWITCH_STATEMENTS = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas", 71)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_FOUR_CHARACTER_CONSTANTS = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas", 72)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_HIDDEN_VIRTUAL_FUNCTIONS = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas", 73)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_INHIBIT_ALL_WARNINGS = NO")  COMMA_SOURCE_FILE ("xcode-project.galgas", 74)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_INITIALIZER_NOT_FULLY_BRACKETED = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas", 75)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_MISSING_PARENTHESES = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas", 76)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_NON_VIRTUAL_DESTRUCTOR = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas", 77)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_PEDANTIC = NO")  COMMA_SOURCE_FILE ("xcode-project.galgas", 78)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_SHADOW = NO")  COMMA_SOURCE_FILE ("xcode-project.galgas", 79)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_SIGN_COMPARE = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas", 80)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_TYPECHECK_CALLS_TO_PRINTF = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas", 81)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_UNINITIALIZED_AUTOS = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas", 82)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_UNKNOWN_PRAGMAS = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas", 83)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_UNUSED_FUNCTION = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas", 84)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_UNUSED_LABEL = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas", 85)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_UNUSED_VALUE = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas", 86)) ;
  temp_0.addAssign_operation (GALGAS_string ("GCC_WARN_UNUSED_VARIABLE = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas", 87)) ;
  temp_0.addAssign_operation (GALGAS_string ("HEADER_SEARCH_PATHS = ()")  COMMA_SOURCE_FILE ("xcode-project.galgas", 88)) ;
  temp_0.addAssign_operation (GALGAS_string ("MACOSX_DEPLOYMENT_TARGET = ").add_operation (var_DEPLOYMENT_1705, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas", 89))  COMMA_SOURCE_FILE ("xcode-project.galgas", 89)) ;
  temp_0.addAssign_operation (GALGAS_string ("SDKROOT = ").add_operation (var_SDK_1677, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas", 90))  COMMA_SOURCE_FILE ("xcode-project.galgas", 90)) ;
  temp_0.addAssign_operation (GALGAS_string ("COPY_PHASE_STRIP = NO")  COMMA_SOURCE_FILE ("xcode-project.galgas", 91)) ;
  temp_0.addAssign_operation (GALGAS_string ("SWIFT_VERSION = 4.2")  COMMA_SOURCE_FILE ("xcode-project.galgas", 92)) ;
  temp_0.addAssign_operation (GALGAS_string ("LD_RUNPATH_SEARCH_PATHS = \"$(inherited) @executable_path/../Frameworks\"")  COMMA_SOURCE_FILE ("xcode-project.galgas", 93)) ;
  extensionSetter_addSettingsToDefaultConfiguration (var_xcodeProject_1600, temp_0, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas", 55)) ;
  }
  GALGAS_stringlist var_swiftFileRefList_3501 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("xcode-project.galgas", 96)) ;
  GALGAS_stringlist var_resourceFileRefList_3540 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("xcode-project.galgas", 97)) ;
  GALGAS_stringset var_generatedFileSet_3568 = constinArgument_inGeneratedFileSet ;
  var_generatedFileSet_3568.addAssign_operation (GALGAS_string ("MainMenu.xib")  COMMA_SOURCE_FILE ("xcode-project.galgas", 99)) ;
  GALGAS_stringlist joker_3766 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("xcode-project.galgas", 104)) ;
  GALGAS_stringlist joker_3784 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("xcode-project.galgas", 105)) ;
  GALGAS_stringlist joker_3803 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("xcode-project.galgas", 106)) ;
  GALGAS_stringlist joker_3866 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("xcode-project.galgas", 108)) ;
  GALGAS_string var_groupRef_3941 ;
  {
  extensionSetter_addGroupWithFiles (var_xcodeProject_1600, GALGAS_string ("Sources"), constinArgument_projectName, var_generatedFileSet_3568, joker_3766, joker_3784, joker_3803, var_swiftFileRefList_3501, joker_3866, var_resourceFileRefList_3540, var_groupRef_3941, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas", 100)) ;
  }
  {
  extensionSetter_placeGroupAsMainGroup (var_xcodeProject_1600, var_groupRef_3941, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas", 112)) ;
  }
  GALGAS_stringlist joker_4145 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("xcode-project.galgas", 117)) ;
  GALGAS_stringlist joker_4163 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("xcode-project.galgas", 118)) ;
  GALGAS_stringlist joker_4182 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("xcode-project.galgas", 119)) ;
  GALGAS_stringlist joker_4245 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("xcode-project.galgas", 121)) ;
  {
  GALGAS_stringset temp_1 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("xcode-project.galgas", 116)) ;
  temp_1.addAssign_operation (GALGAS_string ("Info.plist")  COMMA_SOURCE_FILE ("xcode-project.galgas", 116)) ;
  extensionSetter_addGroupWithFiles (var_xcodeProject_1600, GALGAS_string ("Resources"), constinArgument_projectName, temp_1, joker_4145, joker_4163, joker_4182, var_swiftFileRefList_3501, joker_4245, var_resourceFileRefList_3540, var_groupRef_3941, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas", 113)) ;
  }
  {
  extensionSetter_placeGroupAsMainGroup (var_xcodeProject_1600, var_groupRef_3941, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas", 125)) ;
  }
  {
  GALGAS_stringlist temp_2 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("xcode-project.galgas", 135)) ;
  temp_2.addAssign_operation (GALGAS_string ("GCC_OPTIMIZATION_LEVEL = 0")  COMMA_SOURCE_FILE ("xcode-project.galgas", 134)) ;
  temp_2.addAssign_operation (GALGAS_string ("GCC_PREPROCESSOR_DEFINITIONS = ()")  COMMA_SOURCE_FILE ("xcode-project.galgas", 135)) ;
  GALGAS__32_stringlist temp_3 = GALGAS__32_stringlist::constructor_emptyList (SOURCE_FILE ("xcode-project.galgas", 138)) ;
  temp_3.addAssign_operation (GALGAS_string ("MainMenu.xib"), GALGAS_string ("EBAllocationDebug.xib")  COMMA_SOURCE_FILE ("xcode-project.galgas", 138)) ;
  GALGAS_string joker_4867 ; // Joker input parameter
  extensionSetter_addAppTarget (var_xcodeProject_1600, constinArgument_projectName, constinArgument_projectName, var_swiftFileRefList_3501, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("xcode-project.galgas", 131)), var_resourceFileRefList_3540, temp_2, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("xcode-project.galgas", 137)), temp_3, constinArgument_projectName.add_operation (GALGAS_string ("/Info.plist"), inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas", 139)), joker_4867, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas", 127)) ;
  }
  GALGAS_string var_sourceDir_4910 = constinArgument_inOutputDirectory.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas", 143)).add_operation (constinArgument_projectName, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas", 143)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas", 143)) ;
  extensionMethod_generateAtPath (var_xcodeProject_1600, constinArgument_inOutputDirectory.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas", 145)).add_operation (constinArgument_projectName, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas", 145)).add_operation (GALGAS_string (".xcodeproj"), inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas", 145)), var_sourceDir_4910.add_operation (constinArgument_projectName, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas", 146)).add_operation (GALGAS_string (".xcodeproj.txt"), inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas", 144)) ;
  GALGAS_stringset temp_4 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("xcode-project.galgas", 153)) ;
  temp_4.addAssign_operation (constinArgument_projectName  COMMA_SOURCE_FILE ("xcode-project.galgas", 153)) ;
  GALGAS_string var_s_5164 = GALGAS_string (filewrapperTemplate_additionalXcodeFiles_info_5F_plist (inCompiler, constinArgument_projectName, constinArgument_inXcodeProjectString, GALGAS_string ("1.0.0"), temp_4 COMMA_SOURCE_FILE ("xcode-project.galgas", 149))) ;
  {
  GALGAS_string::class_method_generateFile (var_sourceDir_4910, GALGAS_string ("Info.plist"), var_s_5164, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas", 155)) ;
  }
  var_s_5164 = GALGAS_string (filewrapperTemplate_additionalXcodeFiles_main_5F_xib (inCompiler, constinArgument_projectName COMMA_SOURCE_FILE ("xcode-project.galgas", 160))) ;
  {
  GALGAS_string::class_method_generateFile (var_sourceDir_4910, GALGAS_string ("MainMenu.xib"), var_s_5164, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas", 163)) ;
  }
  var_s_5164 = GALGAS_string (filewrapperTemplate_additionalXcodeFiles_build_5F_command (inCompiler, constinArgument_projectName COMMA_SOURCE_FILE ("xcode-project.galgas", 168))) ;
  GALGAS_bool joker_5665 ; // Joker input parameter
  var_s_5164.method_writeToExecutableFileWhenDifferentContents (constinArgument_inOutputDirectory.add_operation (GALGAS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas", 172)), joker_5665, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas", 171)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'additionalXcodeFiles'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_additionalXcodeFiles_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_additionalXcodeFiles_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_additionalXcodeFiles (
  "",
  0,
  gWrapperAllFiles_additionalXcodeFiles_0,
  0,
  gWrapperAllDirectories_additionalXcodeFiles_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'additionalXcodeFiles main_xib'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_additionalXcodeFiles_main_5F_xib (C_Compiler * /* inCompiler */,
                                                                    const GALGAS_string & in_PROJECT_5F_NAME
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "<\?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"no\"\?>\n"
    "<document type=\"com.apple.InterfaceBuilder3.Cocoa.XIB\" version=\"3.0\" toolsVersion=\"7528.3\" systemVersion=\"14C1514\" targetRuntime=\"MacOSX.Cocoa\" proper"
    "tyAccessControl=\"none\">\n"
    "    <dependencies>\n"
    "        <deployment version=\"1090\" identifier=\"macosx\"/>\n"
    "        <plugIn identifier=\"com.apple.InterfaceBuilder.CocoaPlugin\" version=\"7528.3\"/>\n"
    "    </dependencies>\n"
    "    <objects>\n"
    "        <customObject id=\"-2\" userLabel=\"File's Owner\" customClass=\"NSApplication\"/>\n"
    "        <customObject id=\"-1\" userLabel=\"First Responder\" customClass=\"FirstResponder\"/>\n"
    "        <customObject id=\"-3\" userLabel=\"Application\" customClass=\"NSObject\"/>\n"
    "        <menu title=\"AMainMenu\" systemMenu=\"main\" id=\"29\">\n"
    "            <items>\n"
    "                <menuItem title=\"" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "\" id=\"56\">\n"
    "                    <menu key=\"submenu\" title=\"" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "\" systemMenu=\"apple\" id=\"57\">\n"
    "                        <items>\n"
    "                            <menuItem title=\"About " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "\" id=\"58\">\n"
    "                                <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                <connections>\n"
    "                                    <action selector=\"orderFrontStandardAboutPanel:\" target=\"-2\" id=\"142\"/>\n"
    "                                </connections>\n"
    "                            </menuItem>\n"
    "                            <menuItem isSeparatorItem=\"YES\" id=\"236\">\n"
    "                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Preferences\xE2""\x80""\xA6""\" keyEquivalent=\",\" id=\"129\"/>\n"
    "                            <menuItem isSeparatorItem=\"YES\" id=\"143\">\n"
    "                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Services\" id=\"131\">\n"
    "                                <menu key=\"submenu\" title=\"Services\" systemMenu=\"services\" id=\"130\"/>\n"
    "                            </menuItem>\n"
    "                            <menuItem isSeparatorItem=\"YES\" id=\"144\">\n"
    "                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Hide " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "\" keyEquivalent=\"h\" id=\"134\">\n"
    "                                <connections>\n"
    "                                    <action selector=\"hide:\" target=\"-1\" id=\"367\"/>\n"
    "                                </connections>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Hide Others\" keyEquivalent=\"h\" id=\"145\">\n"
    "                                <modifierMask key=\"keyEquivalentModifierMask\" option=\"YES\" command=\"YES\"/>\n"
    "                                <connections>\n"
    "                                    <action selector=\"hideOtherApplications:\" target=\"-1\" id=\"368\"/>\n"
    "                                </connections>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Show All\" id=\"150\">\n"
    "                                <connections>\n"
    "                                    <action selector=\"unhideAllApplications:\" target=\"-1\" id=\"370\"/>\n"
    "                                </connections>\n"
    "                            </menuItem>\n"
    "                            <menuItem isSeparatorItem=\"YES\" id=\"149\">\n"
    "                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Quit " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "\" keyEquivalent=\"q\" id=\"136\">\n"
    "                                <connections>\n"
    "                                    <action selector=\"terminate:\" target=\"-3\" id=\"449\"/>\n"
    "                                </connections>\n"
    "                            </menuItem>\n"
    "                        </items>\n"
    "                    </menu>\n"
    "                </menuItem>\n"
    "                <menuItem title=\"File\" id=\"83\">\n"
    "                    <menu key=\"submenu\" title=\"File\" id=\"81\">\n"
    "                        <items>\n"
    "                            <menuItem title=\"New\" keyEquivalent=\"n\" id=\"82\">\n"
    "                                <connections>\n"
    "                                    <action selector=\"newDocument:\" target=\"-1\" id=\"373\"/>\n"
    "                                </connections>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Open\xE2""\x80""\xA6""\" keyEquivalent=\"o\" id=\"72\">\n"
    "                                <connections>\n"
    "                                    <action selector=\"openDocument:\" target=\"-1\" id=\"374\"/>\n"
    "                                </connections>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Open Recent\" id=\"124\">\n"
    "                                <menu key=\"submenu\" title=\"Open Recent\" systemMenu=\"recentDocuments\" id=\"125\">\n"
    "                                    <items>\n"
    "                                        <menuItem title=\"Clear Menu\" id=\"126\">\n"
    "                                            <connections>\n"
    "                                                <action selector=\"clearRecentDocuments:\" target=\"-1\" id=\"127\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                    </items>\n"
    "                                </menu>\n"
    "                            </menuItem>\n"
    "                            <menuItem isSeparatorItem=\"YES\" id=\"79\">\n"
    "                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Close\" keyEquivalent=\"w\" id=\"73\">\n"
    "                                <connections>\n"
    "                                    <action selector=\"performClose:\" target=\"-1\" id=\"193\"/>\n"
    "                                </connections>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Save\xE2""\x80""\xA6""\" keyEquivalent=\"s\" id=\"75\">\n"
    "                                <connections>\n"
    "                                    <action selector=\"saveDocument:\" target=\"-1\" id=\"362\"/>\n"
    "                                </connections>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Revert to Saved\" id=\"112\">\n"
    "                                <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                <connections>\n"
    "                                    <action selector=\"revertDocumentToSaved:\" target=\"-1\" id=\"364\"/>\n"
    "                                </connections>\n"
    "                            </menuItem>\n"
    "                            <menuItem isSeparatorItem=\"YES\" id=\"74\">\n"
    "                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Page Setup...\" keyEquivalent=\"P\" id=\"77\">\n"
    "                                <modifierMask key=\"keyEquivalentModifierMask\" shift=\"YES\" command=\"YES\"/>\n"
    "                                <connections>\n"
    "                                    <action selector=\"runPageLayout:\" target=\"-1\" id=\"87\"/>\n"
    "                                </connections>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Print\xE2""\x80""\xA6""\" keyEquivalent=\"p\" id=\"78\">\n"
    "                                <connections>\n"
    "                                    <action selector=\"print:\" target=\"-1\" id=\"86\"/>\n"
    "                                </connections>\n"
    "                            </menuItem>\n"
    "                        </items>\n"
    "                    </menu>\n"
    "                </menuItem>\n"
    "                <menuItem title=\"Edit\" id=\"217\">\n"
    "                    <menu key=\"submenu\" title=\"Edit\" id=\"205\">\n"
    "                        <items>\n"
    "                            <menuItem title=\"Undo\" keyEquivalent=\"z\" id=\"207\">\n"
    "                                <connections>\n"
    "                                    <action selector=\"undo:\" target=\"-1\" id=\"223\"/>\n"
    "                                </connections>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Redo\" keyEquivalent=\"Z\" id=\"215\">\n"
    "                                <modifierMask key=\"keyEquivalentModifierMask\" shift=\"YES\" command=\"YES\"/>\n"
    "                                <connections>\n"
    "                                    <action selector=\"redo:\" target=\"-1\" id=\"231\"/>\n"
    "                                </connections>\n"
    "                            </menuItem>\n"
    "                            <menuItem isSeparatorItem=\"YES\" id=\"206\">\n"
    "                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Cut\" keyEquivalent=\"x\" id=\"199\">\n"
    "                                <connections>\n"
    "                                    <action selector=\"cut:\" target=\"-1\" id=\"228\"/>\n"
    "                                </connections>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Copy\" keyEquivalent=\"c\" id=\"197\">\n"
    "                                <connections>\n"
    "                                    <action selector=\"copy:\" target=\"-1\" id=\"224\"/>\n"
    "                                </connections>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Paste\" keyEquivalent=\"v\" id=\"203\">\n"
    "                                <connections>\n"
    "                                    <action selector=\"paste:\" target=\"-1\" id=\"226\"/>\n"
    "                                </connections>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Paste and Match Style\" keyEquivalent=\"V\" id=\"485\">\n"
    "                                <modifierMask key=\"keyEquivalentModifierMask\" option=\"YES\" command=\"YES\"/>\n"
    "                                <connections>\n"
    "                                    <action selector=\"pasteAsPlainText:\" target=\"-1\" id=\"486\"/>\n"
    "                                </connections>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Delete\" id=\"202\">\n"
    "                                <connections>\n"
    "                                    <action selector=\"delete:\" target=\"-1\" id=\"235\"/>\n"
    "                                </connections>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Select All\" keyEquivalent=\"a\" id=\"198\">\n"
    "                                <connections>\n"
    "                                    <action selector=\"selectAll:\" target=\"-1\" id=\"232\"/>\n"
    "                                </connections>\n"
    "                            </menuItem>\n"
    "                            <menuItem isSeparatorItem=\"YES\" id=\"214\">\n"
    "                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Find\" id=\"218\">\n"
    "                                <menu key=\"submenu\" title=\"Find\" id=\"220\">\n"
    "                                    <items>\n"
    "                                        <menuItem title=\"Find\xE2""\x80""\xA6""\" tag=\"1\" keyEquivalent=\"f\" id=\"209\">\n"
    "                                            <connections>\n"
    "                                                <action selector=\"performFindPanelAction:\" target=\"-1\" id=\"241\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem title=\"Find and Replace\xE2""\x80""\xA6""\" tag=\"12\" keyEquivalent=\"f\" id=\"534\">\n"
    "                                            <modifierMask key=\"keyEquivalentModifierMask\" option=\"YES\" command=\"YES\"/>\n"
    "                                            <connections>\n"
    "                                                <action selector=\"performFindPanelAction:\" target=\"-1\" id=\"535\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem title=\"Find Next\" tag=\"2\" keyEquivalent=\"g\" id=\"208\">\n"
    "                                            <connections>\n"
    "                                                <action selector=\"performFindPanelAction:\" target=\"-1\" id=\"487\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem title=\"Find Previous\" tag=\"3\" keyEquivalent=\"G\" id=\"213\">\n"
    "                                            <modifierMask key=\"keyEquivalentModifierMask\" shift=\"YES\" command=\"YES\"/>\n"
    "                                            <connections>\n"
    "                                                <action selector=\"performFindPanelAction:\" target=\"-1\" id=\"488\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem title=\"Use Selection for Find\" tag=\"7\" keyEquivalent=\"e\" id=\"221\">\n"
    "                                            <connections>\n"
    "                                                <action selector=\"performFindPanelAction:\" target=\"-1\" id=\"489\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem title=\"Jump to Selection\" keyEquivalent=\"j\" id=\"210\">\n"
    "                                            <connections>\n"
    "                                                <action selector=\"centerSelectionInVisibleArea:\" target=\"-1\" id=\"245\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                    </items>\n"
    "                                </menu>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Spelling and Grammar\" id=\"216\">\n"
    "                                <menu key=\"submenu\" title=\"Spelling and Grammar\" id=\"200\">\n"
    "                                    <items>\n"
    "                                        <menuItem title=\"Show Spelling and Grammar\" keyEquivalent=\":\" id=\"204\">\n"
    "                                            <connections>\n"
    "                                                <action selector=\"showGuessPanel:\" target=\"-1\" id=\"230\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem title=\"Check Document Now\" keyEquivalent=\";\" id=\"201\">\n"
    "                                            <connections>\n"
    "                                                <action selector=\"checkSpelling:\" target=\"-1\" id=\"225\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem isSeparatorItem=\"YES\" id=\"453\"/>\n"
    "                                        <menuItem title=\"Check Spelling While Typing\" id=\"219\">\n"
    "                                            <connections>\n"
    "                                                <action selector=\"toggleContinuousSpellChecking:\" target=\"-1\" id=\"222\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem title=\"Check Grammar With Spelling\" id=\"346\">\n"
    "                                            <connections>\n"
    "                                                <action selector=\"toggleGrammarChecking:\" target=\"-1\" id=\"347\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem title=\"Correct Spelling Automatically\" id=\"454\">\n"
    "                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                            <connections>\n"
    "                                                <action selector=\"toggleAutomaticSpellingCorrection:\" target=\"-1\" id=\"456\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                    </items>\n"
    "                                </menu>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Substitutions\" id=\"348\">\n"
    "                                <menu key=\"submenu\" title=\"Substitutions\" id=\"349\">\n"
    "                                    <items>\n"
    "                                        <menuItem title=\"Show Substitutions\" id=\"457\">\n"
    "                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                            <connections>\n"
    "                                                <action selector=\"orderFrontSubstitutionsPanel:\" target=\"-1\" id=\"458\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem isSeparatorItem=\"YES\" id=\"459\"/>\n"
    "                                        <menuItem title=\"Smart Copy/Paste\" tag=\"1\" keyEquivalent=\"f\" id=\"350\">\n"
    "                                            <connections>\n"
    "                                                <action selector=\"toggleSmartInsertDelete:\" target=\"-1\" id=\"355\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem title=\"Smart Quotes\" tag=\"2\" keyEquivalent=\"g\" id=\"351\">\n"
    "                                            <connections>\n"
    "                                                <action selector=\"toggleAutomaticQuoteSubstitution:\" target=\"-1\" id=\"356\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem title=\"Smart Dashes\" id=\"460\">\n"
    "                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                            <connections>\n"
    "                                                <action selector=\"toggleAutomaticDashSubstitution:\" target=\"-1\" id=\"461\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem title=\"Smart Links\" tag=\"3\" keyEquivalent=\"G\" id=\"354\">\n"
    "                                            <modifierMask key=\"keyEquivalentModifierMask\" shift=\"YES\" command=\"YES\"/>\n"
    "                                            <connections>\n"
    "                                                <action selector=\"toggleAutomaticLinkDetection:\" target=\"-1\" id=\"357\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem title=\"Text Replacement\" id=\"462\">\n"
    "                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                            <connections>\n"
    "                                                <action selector=\"toggleAutomaticTextReplacement:\" target=\"-1\" id=\"463\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                    </items>\n"
    "                                </menu>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Transformations\" id=\"450\">\n"
    "                                <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                <menu key=\"submenu\" title=\"Transformations\" id=\"451\">\n"
    "                                    <items>\n"
    "                                        <menuItem title=\"Make Upper Case\" id=\"452\">\n"
    "                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                            <connections>\n"
    "                                                <action selector=\"uppercaseWord:\" target=\"-1\" id=\"464\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem title=\"Make Lower Case\" id=\"465\">\n"
    "                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                            <connections>\n"
    "                                                <action selector=\"lowercaseWord:\" target=\"-1\" id=\"468\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem title=\"Capitalize\" id=\"466\">\n"
    "                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                            <connections>\n"
    "                                                <action selector=\"capitalizeWord:\" target=\"-1\" id=\"467\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                    </items>\n"
    "                                </menu>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Speech\" id=\"211\">\n"
    "                                <menu key=\"submenu\" title=\"Speech\" id=\"212\">\n"
    "                                    <items>\n"
    "                                        <menuItem title=\"Start Speaking\" id=\"196\">\n"
    "                                            <connections>\n"
    "                                                <action selector=\"startSpeaking:\" target=\"-1\" id=\"233\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem title=\"Stop Speaking\" id=\"195\">\n"
    "                                            <connections>\n"
    "                                                <action selector=\"stopSpeaking:\" target=\"-1\" id=\"227\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                    </items>\n"
    "                                </menu>\n"
    "                            </menuItem>\n"
    "                        </items>\n"
    "                    </menu>\n"
    "                </menuItem>\n"
    "                <menuItem title=\"Format\" id=\"375\">\n"
    "                    <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                    <menu key=\"submenu\" title=\"Format\" id=\"376\">\n"
    "                        <items>\n"
    "                            <menuItem title=\"Font\" id=\"377\">\n"
    "                                <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                <menu key=\"submenu\" title=\"Font\" systemMenu=\"font\" id=\"388\">\n"
    "                                    <items>\n"
    "                                        <menuItem title=\"Show Fonts\" keyEquivalent=\"t\" id=\"389\">\n"
    "                                            <connections>\n"
    "                                                <action selector=\"orderFrontFontPanel:\" target=\"420\" id=\"424\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem title=\"Bold\" tag=\"2\" keyEquivalent=\"b\" id=\"390\">\n"
    "                                            <connections>\n"
    "                                                <action selector=\"addFontTrait:\" target=\"420\" id=\"421\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem title=\"Italic\" tag=\"1\" keyEquivalent=\"i\" id=\"391\">\n"
    "                                            <connections>\n"
    "                                                <action selector=\"addFontTrait:\" target=\"420\" id=\"422\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem title=\"Underline\" keyEquivalent=\"u\" id=\"392\">\n"
    "                                            <connections>\n"
    "                                                <action selector=\"underline:\" target=\"-1\" id=\"432\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem isSeparatorItem=\"YES\" id=\"393\"/>\n"
    "                                        <menuItem title=\"Bigger\" tag=\"3\" keyEquivalent=\"+\" id=\"394\">\n"
    "                                            <connections>\n"
    "                                                <action selector=\"modifyFont:\" target=\"420\" id=\"425\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem title=\"Smaller\" tag=\"4\" keyEquivalent=\"-\" id=\"395\">\n"
    "                                            <connections>\n"
    "                                                <action selector=\"modifyFont:\" target=\"420\" id=\"423\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem isSeparatorItem=\"YES\" id=\"396\"/>\n"
    "                                        <menuItem title=\"Kern\" id=\"397\">\n"
    "                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                            <menu key=\"submenu\" title=\"Kern\" id=\"415\">\n"
    "                                                <items>\n"
    "                                                    <menuItem title=\"Use Default\" id=\"416\">\n"
    "                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                                        <connections>\n"
    "                                                            <action selector=\"useStandardKerning:\" target=\"-1\" id=\"438\"/>\n"
    "                                                        </connections>\n"
    "                                                    </menuItem>\n"
    "                                                    <menuItem title=\"Use None\" id=\"417\">\n"
    "                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                                        <connections>\n"
    "                                                            <action selector=\"turnOffKerning:\" target=\"-1\" id=\"441\"/>\n"
    "                                                        </connections>\n"
    "                                                    </menuItem>\n"
    "                                                    <menuItem title=\"Tighten\" id=\"418\">\n"
    "                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                                        <connections>\n"
    "                                                            <action selector=\"tightenKerning:\" target=\"-1\" id=\"431\"/>\n"
    "                                                        </connections>\n"
    "                                                    </menuItem>\n"
    "                                                    <menuItem title=\"Loosen\" id=\"419\">\n"
    "                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                                        <connections>\n"
    "                                                            <action selector=\"loosenKerning:\" target=\"-1\" id=\"435\"/>\n"
    "                                                        </connections>\n"
    "                                                    </menuItem>\n"
    "                                                </items>\n"
    "                                            </menu>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem title=\"Ligature\" id=\"398\">\n"
    "                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                            <menu key=\"submenu\" title=\"Ligature\" id=\"411\">\n"
    "                                                <items>\n"
    "                                                    <menuItem title=\"Use Default\" id=\"412\">\n"
    "                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                                        <connections>\n"
    "                                                            <action selector=\"useStandardLigatures:\" target=\"-1\" id=\"439\"/>\n"
    "                                                        </connections>\n"
    "                                                    </menuItem>\n"
    "                                                    <menuItem title=\"Use None\" id=\"413\">\n"
    "                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                                        <connections>\n"
    "                                                            <action selector=\"turnOffLigatures:\" target=\"-1\" id=\"440\"/>\n"
    "                                                        </connections>\n"
    "                                                    </menuItem>\n"
    "                                                    <menuItem title=\"Use All\" id=\"414\">\n"
    "                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                                        <connections>\n"
    "                                                            <action selector=\"useAllLigatures:\" target=\"-1\" id=\"434\"/>\n"
    "                                                        </connections>\n"
    "                                                    </menuItem>\n"
    "                                                </items>\n"
    "                                            </menu>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem title=\"Baseline\" id=\"399\">\n"
    "                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                            <menu key=\"submenu\" title=\"Baseline\" id=\"405\">\n"
    "                                                <items>\n"
    "                                                    <menuItem title=\"Use Default\" id=\"406\">\n"
    "                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                                        <connections>\n"
    "                                                            <action selector=\"unscript:\" target=\"-1\" id=\"437\"/>\n"
    "                                                        </connections>\n"
    "                                                    </menuItem>\n"
    "                                                    <menuItem title=\"Superscript\" id=\"407\">\n"
    "                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                                        <connections>\n"
    "                                                            <action selector=\"superscript:\" target=\"-1\" id=\"430\"/>\n"
    "                                                        </connections>\n"
    "                                                    </menuItem>\n"
    "                                                    <menuItem title=\"Subscript\" id=\"408\">\n"
    "                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                                        <connections>\n"
    "                                                            <action selector=\"subscript:\" target=\"-1\" id=\"429\"/>\n"
    "                                                        </connections>\n"
    "                                                    </menuItem>\n"
    "                                                    <menuItem title=\"Raise\" id=\"409\">\n"
    "                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                                        <connections>\n"
    "                                                            <action selector=\"raiseBaseline:\" target=\"-1\" id=\"426\"/>\n"
    "                                                        </connections>\n"
    "                                                    </menuItem>\n"
    "                                                    <menuItem title=\"Lower\" id=\"410\">\n"
    "                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                                        <connections>\n"
    "                                                            <action selector=\"lowerBaseline:\" target=\"-1\" id=\"427\"/>\n"
    "                                                        </connections>\n"
    "                                                    </menuItem>\n"
    "                                                </items>\n"
    "                                            </menu>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem isSeparatorItem=\"YES\" id=\"400\"/>\n"
    "                                        <menuItem title=\"Show Colors\" keyEquivalent=\"C\" id=\"401\">\n"
    "                                            <connections>\n"
    "                                                <action selector=\"orderFrontColorPanel:\" target=\"-1\" id=\"433\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem isSeparatorItem=\"YES\" id=\"402\"/>\n"
    "                                        <menuItem title=\"Copy Style\" keyEquivalent=\"c\" id=\"403\">\n"
    "                                            <modifierMask key=\"keyEquivalentModifierMask\" option=\"YES\" command=\"YES\"/>\n"
    "                                            <connections>\n"
    "                                                <action selector=\"copyFont:\" target=\"-1\" id=\"428\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem title=\"Paste Style\" keyEquivalent=\"v\" id=\"404\">\n"
    "                                            <modifierMask key=\"keyEquivalentModifierMask\" option=\"YES\" command=\"YES\"/>\n"
    "                                            <connections>\n"
    "                                                <action selector=\"pasteFont:\" target=\"-1\" id=\"436\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                    </items>\n"
    "                                </menu>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Text\" id=\"496\">\n"
    "                                <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                <menu key=\"submenu\" title=\"Text\" id=\"497\">\n"
    "                                    <items>\n"
    "                                        <menuItem title=\"Align Left\" keyEquivalent=\"{\" id=\"498\">\n"
    "                                            <connections>\n"
    "                                                <action selector=\"alignLeft:\" target=\"-1\" id=\"524\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem title=\"Center\" keyEquivalent=\"|\" id=\"499\">\n"
    "                                            <connections>\n"
    "                                                <action selector=\"alignCenter:\" target=\"-1\" id=\"518\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem title=\"Justify\" id=\"500\">\n"
    "                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                            <connections>\n"
    "                                                <action selector=\"alignJustified:\" target=\"-1\" id=\"523\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem title=\"Align Right\" keyEquivalent=\"}\" id=\"501\">\n"
    "                                            <connections>\n"
    "                                                <action selector=\"alignRight:\" target=\"-1\" id=\"521\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem isSeparatorItem=\"YES\" id=\"502\"/>\n"
    "                                        <menuItem title=\"Writing Direction\" id=\"503\">\n"
    "                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                            <menu key=\"submenu\" title=\"Writing Direction\" id=\"508\">\n"
    "                                                <items>\n"
    "                                                    <menuItem title=\"Paragraph\" enabled=\"NO\" id=\"509\">\n"
    "                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                                    </menuItem>\n"
    "                                                    <menuItem id=\"510\">\n"
    "                                                        <string key=\"title\"> Default</string>\n"
    "                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                                        <connections>\n"
    "                                                            <action selector=\"makeBaseWritingDirectionNatural:\" target=\"-1\" id=\"525\"/>\n"
    "                                                        </connections>\n"
    "                                                    </menuItem>\n"
    "                                                    <menuItem id=\"511\">\n"
    "                                                        <string key=\"title\"> Left to Right</string>\n"
    "                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                                        <connections>\n"
    "                                                            <action selector=\"makeBaseWritingDirectionLeftToRight:\" target=\"-1\" id=\"526\"/>\n"
    "                                                        </connections>\n"
    "                                                    </menuItem>\n"
    "                                                    <menuItem id=\"512\">\n"
    "                                                        <string key=\"title\"> Right to Left</string>\n"
    "                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                                        <connections>\n"
    "                                                            <action selector=\"makeBaseWritingDirectionRightToLeft:\" target=\"-1\" id=\"527\"/>\n"
    "                                                        </connections>\n"
    "                                                    </menuItem>\n"
    "                                                    <menuItem isSeparatorItem=\"YES\" id=\"513\"/>\n"
    "                                                    <menuItem title=\"Selection\" enabled=\"NO\" id=\"514\">\n"
    "                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                                    </menuItem>\n"
    "                                                    <menuItem id=\"515\">\n"
    "                                                        <string key=\"title\"> Default</string>\n"
    "                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                                        <connections>\n"
    "                                                            <action selector=\"makeTextWritingDirectionNatural:\" target=\"-1\" id=\"528\"/>\n"
    "                                                        </connections>\n"
    "                                                    </menuItem>\n"
    "                                                    <menuItem id=\"516\">\n"
    "                                                        <string key=\"title\"> Left to Right</string>\n"
    "                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                                        <connections>\n"
    "                                                            <action selector=\"makeTextWritingDirectionLeftToRight:\" target=\"-1\" id=\"529\"/>\n"
    "                                                        </connections>\n"
    "                                                    </menuItem>\n"
    "                                                    <menuItem id=\"517\">\n"
    "                                                        <string key=\"title\"> Right to Left</string>\n"
    "                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                                        <connections>\n"
    "                                                            <action selector=\"makeTextWritingDirectionRightToLeft:\" target=\"-1\" id=\"530\"/>\n"
    "                                                        </connections>\n"
    "                                                    </menuItem>\n"
    "                                                </items>\n"
    "                                            </menu>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem isSeparatorItem=\"YES\" id=\"504\"/>\n"
    "                                        <menuItem title=\"Show Ruler\" id=\"505\">\n"
    "                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                                            <connections>\n"
    "                                                <action selector=\"toggleRuler:\" target=\"-1\" id=\"520\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem title=\"Copy Ruler\" keyEquivalent=\"c\" id=\"506\">\n"
    "                                            <modifierMask key=\"keyEquivalentModifierMask\" control=\"YES\" command=\"YES\"/>\n"
    "                                            <connections>\n"
    "                                                <action selector=\"copyRuler:\" target=\"-1\" id=\"522\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                        <menuItem title=\"Paste Ruler\" keyEquivalent=\"v\" id=\"507\">\n"
    "                                            <modifierMask key=\"keyEquivalentModifierMask\" control=\"YES\" command=\"YES\"/>\n"
    "                                            <connections>\n"
    "                                                <action selector=\"pasteRuler:\" target=\"-1\" id=\"519\"/>\n"
    "                                            </connections>\n"
    "                                        </menuItem>\n"
    "                                    </items>\n"
    "                                </menu>\n"
    "                            </menuItem>\n"
    "                        </items>\n"
    "                    </menu>\n"
    "                </menuItem>\n"
    "                <menuItem title=\"View\" id=\"295\">\n"
    "                    <menu key=\"submenu\" title=\"View\" id=\"296\">\n"
    "                        <items>\n"
    "                            <menuItem title=\"Show Toolbar\" keyEquivalent=\"t\" id=\"297\">\n"
    "                                <modifierMask key=\"keyEquivalentModifierMask\" option=\"YES\" command=\"YES\"/>\n"
    "                                <connections>\n"
    "                                    <action selector=\"toggleToolbarShown:\" target=\"-1\" id=\"366\"/>\n"
    "                                </connections>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Customize Toolbar\xE2""\x80""\xA6""\" id=\"298\">\n"
    "                                <connections>\n"
    "                                    <action selector=\"runToolbarCustomizationPalette:\" target=\"-1\" id=\"365\"/>\n"
    "                                </connections>\n"
    "                            </menuItem>\n"
    "                        </items>\n"
    "                    </menu>\n"
    "                </menuItem>\n"
    "                <menuItem title=\"Window\" id=\"19\">\n"
    "                    <menu key=\"submenu\" title=\"Window\" systemMenu=\"window\" id=\"24\">\n"
    "                        <items>\n"
    "                            <menuItem title=\"Minimize\" keyEquivalent=\"m\" id=\"23\">\n"
    "                                <connections>\n"
    "                                    <action selector=\"performMiniaturize:\" target=\"-1\" id=\"37\"/>\n"
    "                                </connections>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Zoom\" id=\"239\">\n"
    "                                <connections>\n"
    "                                    <action selector=\"performZoom:\" target=\"-1\" id=\"240\"/>\n"
    "                                </connections>\n"
    "                            </menuItem>\n"
    "                            <menuItem isSeparatorItem=\"YES\" id=\"92\">\n"
    "                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n"
    "                            </menuItem>\n"
    "                            <menuItem title=\"Bring All to Front\" id=\"5\">\n"
    "                                <connections>\n"
    "                                    <action selector=\"arrangeInFront:\" target=\"-1\" id=\"39\"/>\n"
    "                                </connections>\n"
    "                            </menuItem>\n"
    "                        </items>\n"
    "                    </menu>\n"
    "                </menuItem>\n"
    "                <menuItem title=\"Help\" id=\"490\">\n"
    "                    <modifierMask key=\"keyEquivalentModifierMask\"/>\n"
    "                    <menu key=\"submenu\" title=\"Help\" systemMenu=\"help\" id=\"491\">\n"
    "                        <items>\n"
    "                            <menuItem title=\"" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << " Help\" keyEquivalent=\"\?\" id=\"492\">\n"
    "                                <connections>\n"
    "                                    <action selector=\"showHelp:\" target=\"-1\" id=\"493\"/>\n"
    "                                </connections>\n"
    "                            </menuItem>\n"
    "                        </items>\n"
    "                    </menu>\n"
    "                </menuItem>\n"
    "            </items>\n"
    "        </menu>\n"
    "        <window identifier=\"PrefWindow\" title=\"" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "\" allowsToolTipsWhenApplicationIsInactive=\"NO\" autorecalculatesKeyViewLoop=\"NO\" releasedWhenClosed=\"NO\" animationBehavior=\"default\" id=\"371\">\n"
    "            <windowStyleMask key=\"styleMask\" titled=\"YES\"/>\n"
    "            <windowPositionMask key=\"initialPositionMask\" leftStrut=\"YES\" rightStrut=\"YES\" topStrut=\"YES\" bottomStrut=\"YES\"/>\n"
    "            <rect key=\"contentRect\" x=\"335\" y=\"390\" width=\"615\" height=\"409\"/>\n"
    "            <rect key=\"screenRect\" x=\"0.0\" y=\"0.0\" width=\"2560\" height=\"1418\"/>\n"
    "            <view key=\"contentView\" id=\"372\">\n"
    "                <rect key=\"frame\" x=\"0.0\" y=\"0.0\" width=\"615\" height=\"409\"/>\n"
    "                <autoresizingMask key=\"autoresizingMask\"/>\n"
    "            </view>\n"
    "        </window>\n"
    "        <customObject id=\"536\" userLabel=\"Prefs\" customClass=\"Preferences\">\n"
    "            <connections>\n"
    "                <outlet property=\"window\" destination=\"371\" id=\"MyW-LM-hi6\"/>\n"
    "            </connections>\n"
    "        </customObject>\n"
    "        <customObject id=\"420\" customClass=\"NSFontManager\"/>\n"
    "    </objects>\n"
    "</document>\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'additionalXcodeFiles info_plist'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_additionalXcodeFiles_info_5F_plist (C_Compiler * /* inCompiler */,
                                                                      const GALGAS_string & in_PROJECT_5F_NAME,
                                                                      const GALGAS_string & in_APPLICATION_5F_BUNDLE_5F_BASE,
                                                                      const GALGAS_string & in_VERSION_5F_STRING,
                                                                      const GALGAS_stringset & in_HANDLED_5F_EXTENSION_5F_SET
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "<\?xml version=\"1.0\" encoding=\"UTF-8\"\?>\n"
    "<!DOCTYPE plist PUBLIC \"-//Apple//DTD PLIST 1.0//EN\" \"http://www.apple.com/DTDs/PropertyList-1.0.dtd\">\n"
    "<plist version=\"1.0\">\n"
    "<dict>\n"
    " <key>CFBundleDevelopmentRegion</key>\n"
    " <string>English</string>\n"
    " <key>CFBundleExecutable</key>\n"
    " <string>${EXECUTABLE_NAME}</string>\n"
    " <key>CFBundleIconFile</key>\n"
    " <string>application_icns</string>\n"
    " <key>CFBundleIdentifier</key>\n"
    " <string>" ;
  result << in_APPLICATION_5F_BUNDLE_5F_BASE.stringValue () ;
  result << "." ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << "</string>\n"
    " <key>CFBundleInfoDictionaryVersion</key>\n"
    " <string>6.0</string>\n"
    " <key>CFBundleName</key>\n"
    " <string>${PRODUCT_NAME}</string>\n"
    " <key>CFBundlePackageType</key>\n"
    " <string>APPL</string>\n"
    " <key>CFBundleSignature</key>\n"
    " <string>\?\?\?\?</string>\n"
    " <key>LSMinimumSystemVersion</key>\n"
    " <string>10.9</string>\n"
    " <key>CFBundleShortVersionString</key>\n"
    " <string>" ;
  result << in_VERSION_5F_STRING.stringValue () ;
  result << "</string>\n"
    " <key>NSMainNibFile</key>\n"
    " <string>MainMenu</string>\n"
    " <key>NSPrincipalClass</key>\n"
    " <string>EBApplication</string>\n"
    " <key>CFBundleDocumentTypes</key>\n"
    " <array>\n" ;
  GALGAS_uint index_1014_ (0) ;
  if (in_HANDLED_5F_EXTENSION_5F_SET.isValid ()) {
    cEnumerator_stringset enumerator_1014 (in_HANDLED_5F_EXTENSION_5F_SET, kENUMERATION_UP) ;
    while (enumerator_1014.hasCurrentObject ()) {
      result << "  <dict>\n"
        "   <key>CFBundleTypeIconFile</key>\n"
        "   <string>" ;
      result << enumerator_1014.current_key (HERE).stringValue () ;
      result << "_icns</string>\n"
        "   <key>CFBundleTypeExtensions</key>\n"
        "   <array>\n"
        "    <string>" ;
      result << enumerator_1014.current_key (HERE).stringValue () ;
      result << "</string>\n"
        "   </array>\n"
        "   <key>CFBundleTypeName</key>\n"
        "   <string>" ;
      result << in_PROJECT_5F_NAME.stringValue () ;
      result << " Source</string>\n"
        "   <key>CFBundleTypeOSTypes</key>\n"
        "   <array>\n"
        "    <string>TEXT</string>\n"
        "   </array>\n"
        "   <key>CFBundleTypeRole</key>\n"
        "   <string>Editor</string>\n"
        "   <key>LSTypeIsPackage</key>\n"
        "   <false/>\n"
        "   <key>NSDocumentClass</key>\n"
        "   <string>OC_GGS_Document</string>\n"
        "  </dict>\n" ;
      index_1014_.increment () ;
      enumerator_1014.gotoNextObject () ;
    }
  }
  result << "\n"
    " </array>\n"
    "</dict>\n"
    "</plist>\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'additionalXcodeFiles build_command'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_additionalXcodeFiles_build_5F_command (C_Compiler * /* inCompiler */,
                                                                         const GALGAS_string & in_PROJECT_5F_NAME
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#! /usr/bin/env python\n"
    "# -*- coding: UTF-8 -*-\n"
    "\n"
    "#------------------------------------------------------------------------------*\n"
    "\n"
    "import subprocess, os, sys, atexit\n"
    "\n"
    "#------------------------------------------------------------------------------*\n"
    "\n"
    "def cleanup () :\n"
    "  if buildProcess.poll () == None :\n"
    "    buildProcess.kill ()\n"
    "    print 'Build process killed'\n"
    "\n"
    "#------------------------------------------------------------------------------*\n"
    "\n"
    "#------------------- Register a function for killing build subprocess\n"
    "atexit.register (cleanup)\n"
    "#------------------- Get compiler as first argument\n"
    "compiler = \"eb\" # Default compiler\n"
    "if len (sys.argv) > 1 :\n"
    "  compiler = sys.argv [1]\n"
    "#------------------- Get script absolute path\n"
    "scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n"
    "os.chdir (scriptDir)\n"
    "#------------------- Build\n"
    "print \"+ \" + compiler + \" " ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << ".eb\"\n"
    "buildProcess = subprocess.Popen ([compiler, \"" ;
  result << in_PROJECT_5F_NAME.stringValue () ;
  result << ".eb\"])\n"
    "buildProcess.wait ()\n"
    "#------------------- Xcode build\n"
    "if buildProcess.returncode == 0 :\n"
    "  buildProcess = subprocess.Popen ([\"/Applications/Xcode.app/Contents/Developer/usr/bin/xcodebuild\"])\n"
    "  buildProcess.wait ()\n"
    "#------------------- Result\n"
    "if buildProcess.returncode != 0 :\n"
    "  sys.exit (buildProcess.returncode)\n"
    "\n"
    "#------------------------------------------------------------------------------*\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'xcodeProjectGenerationFilewrapper'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_xcodeProjectGenerationFilewrapper_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_xcodeProjectGenerationFilewrapper_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_xcodeProjectGenerationFilewrapper (
  "",
  0,
  gWrapperAllFiles_xcodeProjectGenerationFilewrapper_0,
  0,
  gWrapperAllDirectories_xcodeProjectGenerationFilewrapper_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'xcodeProjectGenerationFilewrapper xcodeproj'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_xcodeProjectGenerationFilewrapper_xcodeproj (C_Compiler * /* inCompiler */,
                                                                               const GALGAS_string & in_PROJECT_5F_REF,
                                                                               const GALGAS_string & in_MAIN_5F_GROUP_5F_REF,
                                                                               const GALGAS_XCodeGroupList & in_GROUPS,
                                                                               const GALGAS_stringlist & in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS,
                                                                               const GALGAS_XCodeToolTargetList & in_TOOL_5F_TARGET_5F_LIST,
                                                                               const GALGAS_XCodeAppTargetList & in_APP_5F_TARGET_5F_LIST,
                                                                               const GALGAS__32_stringlist & in_CPP_5F_FILE_5F_LIST,
                                                                               const GALGAS__32_stringlist & in_M_5F_FILE_5F_LIST,
                                                                               const GALGAS__32_stringlist & in_MM_5F_FILE_5F_LIST,
                                                                               const GALGAS__32_stringlist & in_SWIFT_5F_FILE_5F_LIST,
                                                                               const GALGAS__32_stringlist & in_FRAMEWORK_5F_FILE_5F_LIST,
                                                                               const GALGAS__32_stringlist & in_HEADER_5F_FILE_5F_LIST,
                                                                               const GALGAS__32_stringlist & in_PLIST_5F_FILE_5F_LIST,
                                                                               const GALGAS__32_stringlist & in_TIFF_5F_FILE_5F_LIST,
                                                                               const GALGAS__32_stringlist & in_ICNS_5F_FILE_5F_LIST,
                                                                               const GALGAS__32_stringlist & in_XIB_5F_FILE_5F_LIST,
                                                                               const GALGAS_BuildFileList & in_BUILD_5F_FILE_5F_LIST,
                                                                               const GALGAS_string & in_DEFAULT_5F_CONFIGURATION_5F_REF,
                                                                               const GALGAS_stringlist & in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST,
                                                                               const GALGAS_string & in_PROJECT_5F_BUILD_5F_DEFAULT_5F_CONFIGURATION_5F_REF
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "// !$*UTF8*$!\n"
    "{\n"
    "  archiveVersion = 1;\n"
    "  classes = {\n"
    "  };\n"
    "  objectVersion = 42;\n"
    "  objects = {\n"
    "\n"
    "  /*------------------------------------------------------------------ PBXBuildFile */\n" ;
  GALGAS_uint index_210_ (0) ;
  if (in_BUILD_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator_BuildFileList enumerator_210 (in_BUILD_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_210.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_210.current_mBuildReference (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_210.current_mFileName (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXBuildFile;\n"
        "    fileRef = " ;
      result << enumerator_210.current_mFileReference (HERE).stringValue () ;
      result << " ;\n"
        "    settings = {ATTRIBUTES = (); };\n"
        "  };\n"
        "\n" ;
      index_210_.increment () ;
      enumerator_210.gotoNextObject () ;
    }
  }
  result << "  /*------------------------------------------------------------------ PBXFileReference */\n" ;
  GALGAS_uint index_500_ (0) ;
  if (in_CPP_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_500 (in_CPP_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_500.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_500.current_mValue_30_ (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_500.current_mValue_31_ (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXFileReference;\n"
        "    fileEncoding = 4;\n"
        "    lastKnownFileType = sourcecode.cpp.cpp;\n"
        "    name = " ;
      result << enumerator_500.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 25)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 25)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_500.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 26)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_500_.increment () ;
      enumerator_500.gotoNextObject () ;
    }
  }
  GALGAS_uint index_832_ (0) ;
  if (in_M_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_832 (in_M_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_832.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_832.current_mValue_30_ (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_832.current_mValue_31_ (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXFileReference;\n"
        "    fileEncoding = 4;\n"
        "    lastKnownFileType = sourcecode.c.obj;\n"
        "    name = " ;
      result << enumerator_832.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 35)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 35)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_832.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 36)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_832_.increment () ;
      enumerator_832.gotoNextObject () ;
    }
  }
  GALGAS_uint index_1163_ (0) ;
  if (in_MM_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_1163 (in_MM_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1163.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_1163.current_mValue_30_ (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_1163.current_mValue_31_ (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXFileReference;\n"
        "    fileEncoding = 4;\n"
        "    lastKnownFileType = sourcecode.cpp.objcpp;\n"
        "    name = " ;
      result << enumerator_1163.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 45)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 45)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_1163.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 46)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_1163_.increment () ;
      enumerator_1163.gotoNextObject () ;
    }
  }
  GALGAS_uint index_1502_ (0) ;
  if (in_SWIFT_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_1502 (in_SWIFT_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1502.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_1502.current_mValue_30_ (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_1502.current_mValue_31_ (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXFileReference;\n"
        "    fileEncoding = 4;\n"
        "    lastKnownFileType = sourcecode.swift;\n"
        "    name = " ;
      result << enumerator_1502.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 55)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 55)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_1502.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 56)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_1502_.increment () ;
      enumerator_1502.gotoNextObject () ;
    }
  }
  GALGAS_uint index_1837_ (0) ;
  if (in_HEADER_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_1837 (in_HEADER_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1837.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_1837.current_mValue_30_ (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_1837.current_mValue_31_ (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXFileReference;\n"
        "    fileEncoding = 4;\n"
        "    lastKnownFileType = sourcecode.c.h;\n"
        "    name = " ;
      result << enumerator_1837.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 65)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 65)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_1837.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 66)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_1837_.increment () ;
      enumerator_1837.gotoNextObject () ;
    }
  }
  GALGAS_uint index_2173_ (0) ;
  if (in_FRAMEWORK_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_2173 (in_FRAMEWORK_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2173.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_2173.current_mValue_30_ (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_2173.current_mValue_31_ (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXFileReference;\n"
        "    lastKnownFileType = wrapper.framework;\n"
        "    name = " ;
      result << enumerator_2173.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 74)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 74)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_2173.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 75)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_2173_.increment () ;
      enumerator_2173.gotoNextObject () ;
    }
  }
  GALGAS_uint index_2483_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_2483 (in_TOOL_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2483.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_2483.current_mProductFileReference (HERE).stringValue () ;
      result << " = {\n"
        "    isa = PBXFileReference;\n"
        "    explicitFileType = \"compiled.mach-o.executable\";\n"
        "    includeInIndex = 0;\n"
        "    path = " ;
      result << enumerator_2483.current_mProductFileName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 84)).stringValue () ;
      result << ";\n"
        "    sourceTree = BUILT_PRODUCTS_DIR;\n"
        "  };\n"
        "\n" ;
      index_2483_.increment () ;
      enumerator_2483.gotoNextObject () ;
    }
  }
  GALGAS_uint index_2777_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_2777 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2777.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_2777.current_mProductFileReference (HERE).stringValue () ;
      result << " = {\n"
        "    isa = PBXFileReference;\n"
        "    explicitFileType = \"compiled.mach-o.executable\";\n"
        "    includeInIndex = 0;\n"
        "    path = " ;
      result << enumerator_2777.current_mProductFileName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 93)).stringValue () ;
      result << ";\n"
        "    sourceTree = BUILT_PRODUCTS_DIR;\n"
        "  };\n"
        "\n" ;
      index_2777_.increment () ;
      enumerator_2777.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3071_ (0) ;
  if (in_PLIST_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_3071 (in_PLIST_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3071.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_3071.current_mValue_30_ (HERE).stringValue () ;
      result << " = {\n"
        "    isa = PBXFileReference;\n"
        "    fileEncoding = 4;\n"
        "    lastKnownFileType = text.plist;\n"
        "    name = " ;
      result << enumerator_3071.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 102)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 102)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_3071.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 103)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_3071_.increment () ;
      enumerator_3071.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3380_ (0) ;
  if (in_XIB_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_3380 (in_XIB_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3380.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_3380.current_mValue_30_ (HERE).stringValue () ;
      result << " = {\n"
        "    isa = PBXFileReference;\n"
        "    fileEncoding = 4;\n"
        "    lastKnownFileType = wrapper.xib;\n"
        "    name = " ;
      result << enumerator_3380.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 112)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 112)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_3380.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 113)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_3380_.increment () ;
      enumerator_3380.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3691_ (0) ;
  if (in_TIFF_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_3691 (in_TIFF_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3691.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_3691.current_mValue_30_ (HERE).stringValue () ;
      result << " = {\n"
        "    isa = PBXFileReference;\n"
        "    lastKnownFileType = image.tiff;\n"
        "    name = " ;
      result << enumerator_3691.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 121)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 121)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_3691.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 122)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_3691_.increment () ;
      enumerator_3691.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3975_ (0) ;
  if (in_ICNS_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_3975 (in_ICNS_5F_FILE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3975.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_3975.current_mValue_30_ (HERE).stringValue () ;
      result << " = {\n"
        "    isa = PBXFileReference;\n"
        "    lastKnownFileType = image.icns;\n"
        "    name = " ;
      result << enumerator_3975.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 130)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 130)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_3975.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 131)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n"
        "\n" ;
      index_3975_.increment () ;
      enumerator_3975.gotoNextObject () ;
    }
  }
  result << "  /*------------------------------------------------------------------ PBXFrameworksBuildPhase */\n"
    "\n" ;
  GALGAS_uint index_4363_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_4363 (in_TOOL_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4363.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_4363.current_mFrameworksFileRefList (HERE).getter_length (SOURCE_FILE ("project.pbxproj.galgasTemplate", 139)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "  " ;
        result << enumerator_4363.current_mFrameworkBuildPhaseRef (HERE).stringValue () ;
        result << " = {\n"
          "    isa = PBXFrameworksBuildPhase;\n"
          "    buildActionMask = 2147483647;\n"
          "    files = (\n" ;
        GALGAS_uint index_4597_ (0) ;
        if (enumerator_4363.current_mFrameworksFileRefList (HERE).isValid ()) {
          cEnumerator_stringlist enumerator_4597 (enumerator_4363.current_mFrameworksFileRefList (HERE), kENUMERATION_UP) ;
          while (enumerator_4597.hasCurrentObject ()) {
            result << "      " ;
            result << enumerator_4597.current_mValue (HERE).stringValue () ;
            result << ",\n" ;
            index_4597_.increment () ;
            enumerator_4597.gotoNextObject () ;
          }
        }
        result << "    );\n"
          "    runOnlyForDeploymentPostprocessing = 0;\n"
          "  };\n"
          "\n" ;
      }else if (kBoolFalse == test_0) {
      }
      index_4363_.increment () ;
      enumerator_4363.gotoNextObject () ;
    }
  }
  GALGAS_uint index_4753_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_4753 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4753.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_4753.current_mFrameworkBuildPhaseRef (HERE).stringValue () ;
      result << " = {\n"
        "    isa = PBXFrameworksBuildPhase;\n"
        "    buildActionMask = 2147483647;\n"
        "    files = (\n" ;
      GALGAS_uint index_4931_ (0) ;
      if (enumerator_4753.current_mFrameworksFileRefList (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_4931 (enumerator_4753.current_mFrameworksFileRefList (HERE), kENUMERATION_UP) ;
        while (enumerator_4931.hasCurrentObject ()) {
          result << "      " ;
          result << enumerator_4931.current_mValue (HERE).stringValue () ;
          result << ",\n" ;
          index_4931_.increment () ;
          enumerator_4931.gotoNextObject () ;
        }
      }
      result << "    );\n"
        "    runOnlyForDeploymentPostprocessing = 0;\n"
        "  };\n"
        "\n" ;
      index_4753_.increment () ;
      enumerator_4753.gotoNextObject () ;
    }
  }
  result << "  /*------------------------------------------------------------------ PBXGroup section */\n" ;
  GALGAS_uint index_5156_ (0) ;
  if (in_GROUPS.isValid ()) {
    cEnumerator_XCodeGroupList enumerator_5156 (in_GROUPS, kENUMERATION_UP) ;
    while (enumerator_5156.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_5156.current_mGroupReference (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_5156.current_mGroupName (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXGroup;\n"
        "    children = (\n" ;
      GALGAS_uint index_5277_ (0) ;
      if (enumerator_5156.current_mChildrenRefs (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_5277 (enumerator_5156.current_mChildrenRefs (HERE), kENUMERATION_UP) ;
        while (enumerator_5277.hasCurrentObject ()) {
          result << "      " ;
          result << enumerator_5277.current_mValue (HERE).stringValue () ;
          result << ", \n" ;
          index_5277_.increment () ;
          enumerator_5277.gotoNextObject () ;
        }
      }
      result << "    );\n"
        "    name = " ;
      result << enumerator_5156.current_mGroupName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 174)).stringValue () ;
      result << ";\n"
        "    path = " ;
      result << enumerator_5156.current_mGroupPath (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 175)).stringValue () ;
      result << ";\n"
        "    sourceTree = \"<group>\";\n"
        "  };\n" ;
      index_5156_.increment () ;
      enumerator_5156.gotoNextObject () ;
    }
  }
  result << "\n"
    "  " ;
  result << in_MAIN_5F_GROUP_5F_REF.stringValue () ;
  result << " /* Main Group */ = {\n"
    "    isa = PBXGroup;\n"
    "    children = (\n" ;
  GALGAS_uint index_5583_ (0) ;
  if (in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS.isValid ()) {
    cEnumerator_stringlist enumerator_5583 (in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS, kENUMERATION_UP) ;
    while (enumerator_5583.hasCurrentObject ()) {
      result << "      " ;
      result << enumerator_5583.current_mValue (HERE).stringValue () ;
      result << ",\n" ;
      index_5583_.increment () ;
      enumerator_5583.gotoNextObject () ;
    }
  }
  result << "    );\n"
    "    sourceTree = \"<group>\";\n"
    "  };\n"
    "\n"
    "  /*------------------------------------------------------------------ PBXNativeTarget */\n" ;
  GALGAS_uint index_5774_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_5774 (in_TOOL_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5774.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_5774.current_mTargetRef (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_5774.current_mTargetName (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXNativeTarget;\n"
        "    buildConfigurationList = " ;
      result << enumerator_5774.current_mBuildConfigurationListRef (HERE).stringValue () ;
      result << " ;\n"
        "    buildPhases = (\n"
        "      " ;
      result << enumerator_5774.current_mBuildPhaseRef (HERE).stringValue () ;
      result << " ,\n" ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, enumerator_5774.current_mFrameworksFileRefList (HERE).getter_length (SOURCE_FILE ("project.pbxproj.galgasTemplate", 200)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << "      " ;
        result << enumerator_5774.current_mFrameworkBuildPhaseRef (HERE).stringValue () ;
        result << " , /* Frameworks */\n" ;
      }else if (kBoolFalse == test_1) {
      }
      result << "    );\n"
        "    buildRules = (\n"
        "    );\n"
        "    dependencies = (\n"
        "    );\n"
        "    name = " ;
      result << enumerator_5774.current_mTargetName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 208)).stringValue () ;
      result << ";\n"
        "    productInstallPath = \"$(HOME)/bin\";\n"
        "    productName = " ;
      result << enumerator_5774.current_mTargetName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 210)).stringValue () ;
      result << ";\n"
        "    productReference = " ;
      result << enumerator_5774.current_mProductFileReference (HERE).stringValue () ;
      result << " ;\n"
        "    productType = \"com.apple.product-type.tool\";\n"
        "  };\n"
        " \n" ;
      index_5774_.increment () ;
      enumerator_5774.gotoNextObject () ;
    }
  }
  GALGAS_uint index_6410_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_6410 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6410.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_6410.current_mTargetRef (HERE).stringValue () ;
      result << " /* " ;
      result << enumerator_6410.current_mTargetName (HERE).stringValue () ;
      result << " */ = {\n"
        "    isa = PBXNativeTarget;\n"
        "    buildConfigurationList = " ;
      result << enumerator_6410.current_mBuildConfigurationListRef (HERE).stringValue () ;
      result << " ;\n"
        "    buildPhases = (\n"
        "      " ;
      result << enumerator_6410.current_mResourceBuildRef (HERE).stringValue () ;
      result << " , /* Resources */\n"
        "      " ;
      result << enumerator_6410.current_mFrameworkBuildPhaseRef (HERE).stringValue () ;
      result << " , /* Frameworks */\n"
        "      " ;
      result << enumerator_6410.current_mBuildPhaseRef (HERE).stringValue () ;
      result << " , /* Sources */\n"
        "    );\n"
        "    buildRules = (\n"
        "    );\n"
        "    dependencies = (\n" ;
      GALGAS_uint index_6784_ (0) ;
      if (enumerator_6410.current_mDependentTargets (HERE).isValid ()) {
        cEnumerator__32_stringlist enumerator_6784 (enumerator_6410.current_mDependentTargets (HERE), kENUMERATION_UP) ;
        while (enumerator_6784.hasCurrentObject ()) {
          result << "      " ;
          result << enumerator_6784.current_mValue_30_ (HERE).stringValue () ;
          result << " ,\n" ;
          index_6784_.increment () ;
          enumerator_6784.gotoNextObject () ;
        }
      }
      result << "    );\n"
        "    name = " ;
      result << enumerator_6410.current_mTargetName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 234)).stringValue () ;
      result << ";\n"
        "    productInstallPath = \"$(HOME)/bin\";\n"
        "    productName = " ;
      result << enumerator_6410.current_mTargetName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 236)).stringValue () ;
      result << ";\n"
        "    productReference = " ;
      result << enumerator_6410.current_mProductFileReference (HERE).stringValue () ;
      result << " ;\n"
        "    productType = \"com.apple.product-type.application\";\n"
        "  };\n"
        "\n" ;
      index_6410_.increment () ;
      enumerator_6410.gotoNextObject () ;
    }
  }
  result << "  /*------------------------------------------------------------------ PBXProject */\n"
    "  " ;
  result << in_PROJECT_5F_REF.stringValue () ;
  result << " /* Project object */ = {\n"
    "   isa = PBXProject;\n"
    "   attributes = {\n"
    "     LastSwiftUpdateCheck = 0700;\n"
    "     LastUpgradeCheck = 0700;\n"
    "   };\n"
    "   buildConfigurationList = " ;
  result << in_PROJECT_5F_BUILD_5F_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue () ;
  result << " /* Build configuration list for PBXProject */;\n"
    "   compatibilityVersion = \"Xcode 2.4\";\n"
    "   hasScannedForEncodings = 1;\n"
    "   mainGroup = " ;
  result << in_MAIN_5F_GROUP_5F_REF.stringValue () ;
  result << ";\n"
    "   projectDirPath = \"\";\n"
    "   projectRoot = \"\";\n"
    "   targets = (\n" ;
  GALGAS_uint index_7633_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_7633 (in_TOOL_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7633.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_7633.current_mTargetRef (HERE).stringValue () ;
      result << ", \n" ;
      index_7633_.increment () ;
      enumerator_7633.gotoNextObject () ;
    }
  }
  GALGAS_uint index_7690_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_7690 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7690.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_7690.current_mTargetRef (HERE).stringValue () ;
      result << ", \n" ;
      index_7690_.increment () ;
      enumerator_7690.gotoNextObject () ;
    }
  }
  result << "   );\n"
    "  };\n"
    "\n"
    "  /*------------------------------------------------------------------ PBXResourcesBuildPhase */\n"
    "\n" ;
  GALGAS_uint index_7860_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_7860 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7860.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_7860.current_mResourceBuildRef (HERE).stringValue () ;
      result << " /* Resources */ = {\n"
        "    isa = PBXResourcesBuildPhase;\n"
        "    buildActionMask = 2147483647;\n"
        "    files = (\n" ;
      GALGAS_uint index_8037_ (0) ;
      if (enumerator_7860.current_mResourceFileBuildRefs (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_8037 (enumerator_7860.current_mResourceFileBuildRefs (HERE), kENUMERATION_UP) ;
        while (enumerator_8037.hasCurrentObject ()) {
          result << "      " ;
          result << enumerator_8037.current_mValue (HERE).stringValue () ;
          result << ",\n" ;
          index_8037_.increment () ;
          enumerator_8037.gotoNextObject () ;
        }
      }
      result << "    );\n"
        "    runOnlyForDeploymentPostprocessing = 0;\n"
        "  };\n"
        "\n" ;
      index_7860_.increment () ;
      enumerator_7860.gotoNextObject () ;
    }
  }
  result << "  /*------------------------------------------------------------------ PBXSourcesBuildPhase */\n" ;
  GALGAS_uint index_8264_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_8264 (in_TOOL_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8264.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_8264.current_mBuildPhaseRef (HERE).stringValue () ;
      result << " /* Sources */ = {\n"
        "      isa = PBXSourcesBuildPhase;\n"
        "      buildActionMask = 2147483647;\n"
        "      files = (\n" ;
      GALGAS_uint index_8425_ (0) ;
      if (enumerator_8264.current_mBuildPhaseRefList (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_8425 (enumerator_8264.current_mBuildPhaseRefList (HERE), kENUMERATION_UP) ;
        while (enumerator_8425.hasCurrentObject ()) {
          result << "        " ;
          result << enumerator_8425.current_mValue (HERE).stringValue () ;
          result << ",\n" ;
          index_8425_.increment () ;
          enumerator_8425.gotoNextObject () ;
        }
      }
      result << "      );\n"
        "      runOnlyForDeploymentPostprocessing = 0;\n"
        "    };\n" ;
      index_8264_.increment () ;
      enumerator_8264.gotoNextObject () ;
    }
  }
  GALGAS_uint index_8549_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_8549 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8549.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_8549.current_mBuildPhaseRef (HERE).stringValue () ;
      result << " /* Sources */ = {\n"
        "      isa = PBXSourcesBuildPhase;\n"
        "      buildActionMask = 2147483647;\n"
        "      files = (\n" ;
      GALGAS_uint index_8710_ (0) ;
      if (enumerator_8549.current_mBuildPhaseRefList (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_8710 (enumerator_8549.current_mBuildPhaseRefList (HERE), kENUMERATION_UP) ;
        while (enumerator_8710.hasCurrentObject ()) {
          result << "        " ;
          result << enumerator_8710.current_mValue (HERE).stringValue () ;
          result << ",\n" ;
          index_8710_.increment () ;
          enumerator_8710.gotoNextObject () ;
        }
      }
      result << "      );\n"
        "      runOnlyForDeploymentPostprocessing = 0;\n"
        "    };\n" ;
      index_8549_.increment () ;
      enumerator_8549.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "  /*------------------------------------------------------------------ PBXTargetDependency */\n"
    " \n" ;
  GALGAS_uint index_8935_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_8935 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8935.hasCurrentObject ()) {
      GALGAS_uint index_8968_ (0) ;
      if (enumerator_8935.current_mDependentTargets (HERE).isValid ()) {
        cEnumerator__32_stringlist enumerator_8968 (enumerator_8935.current_mDependentTargets (HERE), kENUMERATION_UP) ;
        while (enumerator_8968.hasCurrentObject ()) {
          result << "  " ;
          result << enumerator_8968.current_mValue_30_ (HERE).stringValue () ;
          result << " = {\n"
            "    isa = PBXTargetDependency;\n"
            "    target = " ;
          result << enumerator_8968.current_mValue_31_ (HERE).stringValue () ;
          result << ";\n"
            "  };\n"
            "\n" ;
          index_8968_.increment () ;
          enumerator_8968.gotoNextObject () ;
        }
      }
      index_8935_.increment () ;
      enumerator_8935.gotoNextObject () ;
    }
  }
  result << "  /*------------------------------------------------------------------ PBXVariantGroup */\n"
    " \n"
    "  /*------------------------------------------------------------------ XCBuildConfiguration */\n"
    "    " ;
  result << in_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue () ;
  result << " /* Default */ = {\n"
    "      isa = XCBuildConfiguration;\n"
    "      buildSettings = {\n" ;
  GALGAS_uint index_9439_ (0) ;
  if (in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_9439 (in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9439.hasCurrentObject ()) {
      result << "      " ;
      result << enumerator_9439.current_mValue (HERE).stringValue () ;
      result << " ;\n" ;
      index_9439_.increment () ;
      enumerator_9439.gotoNextObject () ;
    }
  }
  result << "    };\n"
    "    name = Default;\n"
    "  };\n"
    "\n" ;
  GALGAS_uint index_9531_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_9531 (in_TOOL_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9531.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_9531.current_mBuildConfigurationRef (HERE).stringValue () ;
      result << " /* Default */ = {\n"
        "      isa = XCBuildConfiguration;\n"
        "      buildSettings = {\n" ;
      GALGAS_uint index_9693_ (0) ;
      if (enumerator_9531.current_mBuildConfigurationSettingList (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_9693 (enumerator_9531.current_mBuildConfigurationSettingList (HERE), kENUMERATION_UP) ;
        while (enumerator_9693.hasCurrentObject ()) {
          result << "      " ;
          result << enumerator_9693.current_mValue (HERE).stringValue () ;
          result << " ;\n" ;
          index_9693_.increment () ;
          enumerator_9693.gotoNextObject () ;
        }
      }
      result << "      PRODUCT_NAME = " ;
      result << enumerator_9531.current_mProductFileName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 347)).stringValue () ;
      result << " ;\n"
        "    };\n"
        "    name = Default;\n"
        "  };\n"
        "\n" ;
      index_9531_.increment () ;
      enumerator_9531.gotoNextObject () ;
    }
  }
  GALGAS_uint index_9866_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_9866 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9866.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_9866.current_mBuildConfigurationRef (HERE).stringValue () ;
      result << " /* Default */ = {\n"
        "      isa = XCBuildConfiguration;\n"
        "      buildSettings = {\n" ;
      GALGAS_uint index_10028_ (0) ;
      if (enumerator_9866.current_mBuildConfigurationSettingList (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_10028 (enumerator_9866.current_mBuildConfigurationSettingList (HERE), kENUMERATION_UP) ;
        while (enumerator_10028.hasCurrentObject ()) {
          result << "      " ;
          result << enumerator_10028.current_mValue (HERE).stringValue () ;
          result << " ;\n" ;
          index_10028_.increment () ;
          enumerator_10028.gotoNextObject () ;
        }
      }
      result << "      INFOPLIST_FILE = " ;
      result << enumerator_9866.current_mInfoPListFile (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 359)).stringValue () ;
      result << ";\n"
        "      PRODUCT_NAME = " ;
      result << enumerator_9866.current_mProductFileName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 360)).stringValue () ;
      result << " ;\n"
        "    };\n"
        "    name = Default;\n"
        "  };\n"
        "\n" ;
      index_9866_.increment () ;
      enumerator_9866.gotoNextObject () ;
    }
  }
  result << "  /*------------------------------------------------------------------ XCConfigurationList section */\n"
    "\n"
    "    " ;
  result << in_PROJECT_5F_BUILD_5F_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue () ;
  result << " /* Build configuration list for PBXProject */ = {\n"
    "      isa = XCConfigurationList;\n"
    "      buildConfigurations = (\n"
    "        " ;
  result << in_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue () ;
  result << " /* Default */,\n"
    "      );\n"
    "      defaultConfigurationIsVisible = 0;\n"
    "      defaultConfigurationName = Default;\n"
    "    };\n"
    "\n" ;
  GALGAS_uint index_10687_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_10687 (in_TOOL_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10687.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_10687.current_mBuildConfigurationListRef (HERE).stringValue () ;
      result << " /* Default */ = {\n"
        "      isa = XCConfigurationList;\n"
        "      buildConfigurations = (\n"
        "        " ;
      result << enumerator_10687.current_mBuildConfigurationRef (HERE).stringValue () ;
      result << " /* Default */,\n"
        "      );\n"
        "      defaultConfigurationIsVisible = 0;\n"
        "      defaultConfigurationName = Default;\n"
        "    };\n"
        "\n" ;
      index_10687_.increment () ;
      enumerator_10687.gotoNextObject () ;
    }
  }
  GALGAS_uint index_10987_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_10987 (in_APP_5F_TARGET_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10987.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_10987.current_mBuildConfigurationListRef (HERE).stringValue () ;
      result << " /* Default */ = {\n"
        "      isa = XCConfigurationList;\n"
        "      buildConfigurations = (\n"
        "        " ;
      result << enumerator_10987.current_mBuildConfigurationRef (HERE).stringValue () ;
      result << " /* Default */,\n"
        "      );\n"
        "      defaultConfigurationIsVisible = 0;\n"
        "      defaultConfigurationName = Default;\n"
        "    };\n"
        "\n" ;
      index_10987_.increment () ;
      enumerator_10987.gotoNextObject () ;
    }
  }
  result << "/*------------------------------------------------------------------ End */\n"
    "  };\n"
    "\n"
    "  rootObject = " ;
  result << in_PROJECT_5F_REF.stringValue () ;
  result << " /* Project object */;\n"
    "}\n" ;
  return GALGAS_string (result) ;
}

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
    GALGAS_bool test_1 = GALGAS_bool (kIsStrictSup, constinArgument_inMainXibDescriptorList.getter_length (SOURCE_FILE ("main-xib.galgas", 135)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
    if (kBoolTrue == test_1.boolEnum ()) {
      test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inBundleIdentifier.objectCompare (GALGAS_string::makeEmptyString ())) ;
    }
    test_0 = test_1.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_stringlist var_outlet_5F_identifier_5F_list_5279 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("main-xib.galgas", 136)) ;
      cEnumerator_mainXibDescriptorList enumerator_5322 (constinArgument_inMainXibDescriptorList, kENUMERATION_UP) ;
      while (enumerator_5322.hasCurrentObject ()) {
        cEnumerator_mainXibLineDescriptorList enumerator_5347 (enumerator_5322.current_mLine (HERE), kENUMERATION_UP) ;
        while (enumerator_5347.hasCurrentObject ()) {
          switch (enumerator_5347.current_mElement (HERE).enumValue ()) {
          case GALGAS_mainXibElement::kNotBuilt:
            break ;
          case GALGAS_mainXibElement::kEnum_text:
            {
            }
            break ;
          case GALGAS_mainXibElement::kEnum_outlet:
            {
              const cEnumAssociatedValues_mainXibElement_outlet * extractPtr_5490 = (const cEnumAssociatedValues_mainXibElement_outlet *) (enumerator_5347.current_mElement (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_outletName = extractPtr_5490->mAssociatedValue1 ;
              var_outlet_5F_identifier_5F_list_5279.addAssign_operation (extractedValue_outletName.getter_string (HERE)  COMMA_SOURCE_FILE ("main-xib.galgas", 142)) ;
            }
            break ;
          }
          enumerator_5347.gotoNextObject () ;
        }
        enumerator_5322.gotoNextObject () ;
      }
      GALGAS_string var_s_5530 = GALGAS_string (filewrapperTemplate_testFiles_test_5F_py (inCompiler, constinArgument_inBundleIdentifier, constinArgument_inProjectName, var_outlet_5F_identifier_5F_list_5279 COMMA_SOURCE_FILE ("main-xib.galgas", 146))) ;
      GALGAS_string var_header_5661 = GALGAS_string ("#!/usr/bin/python\n"
        "# coding=utf-8\n"
        "\n"
        "# https://pypi.python.org/pypi/atomac\n"
        "# https://github.com/pyatom/pyatom/blob/master/atomac/AXClasses.py\n"
        "\n") ;
      {
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, GALGAS_string ("test.py"), GALGAS_string ("#"), var_header_5661, GALGAS_string::makeEmptyString (), var_s_5530, GALGAS_string ("#    ENTER USER CODE HERE\n"), GALGAS_string ("\n"
        "quitApplication ()\n"
        "\n"
        "#----------------------------------------------------------------------------*\n"), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 155)) ;
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
  GALGAS_uint index_1779_ (0) ;
  if (in_OUTLET_5F_IDENTIFIER_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_1779 (in_OUTLET_5F_IDENTIFIER_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1779.hasCurrentObject ()) {
      result << "  global " ;
      result << enumerator_1779.current_mValue (HERE).stringValue () ;
      result << "\n"
        "  " ;
      result << enumerator_1779.current_mValue (HERE).stringValue () ;
      result << " = window.findFirst (AXIdentifier='" ;
      result << enumerator_1779.current_mValue (HERE).stringValue () ;
      result << "')\n" ;
      index_1779_.increment () ;
      enumerator_1779.gotoNextObject () ;
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
  GALGAS_astDeclarationStruct var_declarationStruct_1036 = GALGAS_astDeclarationStruct::constructor_default (SOURCE_FILE ("program.galgas", 23)) ;
  GALGAS_location joker_1240 ; // Joker input parameter
  cGrammar_easyBindings_5F_grammar::_performSourceStringParsing_ (inCompiler, GALGAS_string (filewrapperTemplate_predefinedOutletClasses_sourceFile (inCompiler COMMA_SOURCE_FILE ("program.galgas", 25))), GALGAS_string::makeEmptyString (), var_declarationStruct_1036, joker_1240  COMMA_SOURCE_FILE ("program.galgas", 25)) ;
  GALGAS_location var_endOfSourceFile_1408 ;
  var_endOfSourceFile_1408.drop () ;
  cGrammar_easyBindings_5F_grammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile, var_declarationStruct_1036, var_endOfSourceFile_1408  COMMA_SOURCE_FILE ("program.galgas", 29)) ;
  var_declarationStruct_1036.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_prefsDeclarationAST::constructor_new (GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("program.galgas", 34)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("program.galgas", 34))  COMMA_SOURCE_FILE ("program.galgas", 34)), var_declarationStruct_1036.getter_mPreferences (HERE)  COMMA_SOURCE_FILE ("program.galgas", 33))  COMMA_SOURCE_FILE ("program.galgas", 33)) ;
  {
  routine_enterAtomicClassesIn (var_declarationStruct_1036.mProperty_mUnifiedDeclarationList, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 38)) ;
  }
  GALGAS_declarationListAST var_sortedDeclarationListAST_1941 ;
  {
  routine_sortProperties (constinArgument_inSourceFile.getter_string (HERE), var_declarationStruct_1036.getter_mUnifiedDeclarationList (HERE), var_sortedDeclarationListAST_1941, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 40)) ;
  }
  GALGAS_semanticContext var_semanticContext_2051 = GALGAS_semanticContext::constructor_default (SOURCE_FILE ("program.galgas", 42)) ;
  var_semanticContext_2051.mProperty_mAutoLayoutVStackFunctionMap = var_declarationStruct_1036.getter_mAutoLayoutVStackFunctionMap (HERE) ;
  var_semanticContext_2051.mProperty_mAutoLayoutHStackFunctionMap = var_declarationStruct_1036.getter_mAutoLayoutHStackFunctionMap (HERE) ;
  var_semanticContext_2051.mProperty_mEnumerationFunctionListAST = var_declarationStruct_1036.getter_mEnumerationFunctionListAST (HERE) ;
  GALGAS_generationStruct var_generation_2379 = GALGAS_generationStruct::constructor_default (SOURCE_FILE ("program.galgas", 46)) ;
  cEnumerator_declarationListAST enumerator_2438 (var_sortedDeclarationListAST_1941, kENUMERATION_UP) ;
  bool bool_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 47)).objectCompare (GALGAS_uint ((uint32_t) 0U))).isValidAndTrue () ;
  if (enumerator_2438.hasCurrentObject () && bool_0) {
    while (enumerator_2438.hasCurrentObject () && bool_0) {
      callExtensionMethod_firstAnalysisPhase ((const cPtr_abstractDeclarationAST *) enumerator_2438.current_mPropertyDeclaration (HERE).ptr (), var_semanticContext_2051, var_generation_2379, inCompiler COMMA_SOURCE_FILE ("program.galgas", 48)) ;
      enumerator_2438.gotoNextObject () ;
      if (enumerator_2438.hasCurrentObject ()) {
        bool_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 47)).objectCompare (GALGAS_uint ((uint32_t) 0U))).isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 51)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      routine_buildBindingSpecificationMap (var_semanticContext_2051, var_declarationStruct_1036.getter_mBindingSpecificationListMap (HERE), inCompiler  COMMA_SOURCE_FILE ("program.galgas", 52)) ;
      }
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 57)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      routine_buildAutoLayoutBindingSpecificationMap (var_semanticContext_2051, var_declarationStruct_1036.getter_mAutoLayoutBindingSpecificationList (HERE), inCompiler  COMMA_SOURCE_FILE ("program.galgas", 58)) ;
      }
    }
  }
  cEnumerator_declarationListAST enumerator_3072 (var_sortedDeclarationListAST_1941, kENUMERATION_UP) ;
  bool bool_3 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 64)).objectCompare (GALGAS_uint ((uint32_t) 0U))).isValidAndTrue () ;
  if (enumerator_3072.hasCurrentObject () && bool_3) {
    while (enumerator_3072.hasCurrentObject () && bool_3) {
      callExtensionMethod_secondAnalysisPhase ((const cPtr_abstractDeclarationAST *) enumerator_3072.current_mPropertyDeclaration (HERE).ptr (), var_semanticContext_2051, var_generation_2379, inCompiler COMMA_SOURCE_FILE ("program.galgas", 65)) ;
      enumerator_3072.gotoNextObject () ;
      if (enumerator_3072.hasCurrentObject ()) {
        bool_3 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 64)).objectCompare (GALGAS_uint ((uint32_t) 0U))).isValidAndTrue () ;
      }
    }
  }
  cEnumerator_declarationListAST enumerator_3300 (var_sortedDeclarationListAST_1941, kENUMERATION_UP) ;
  bool bool_4 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 68)).objectCompare (GALGAS_uint ((uint32_t) 0U))).isValidAndTrue () ;
  if (enumerator_3300.hasCurrentObject () && bool_4) {
    while (enumerator_3300.hasCurrentObject () && bool_4) {
      callExtensionMethod_thirdAnalysisPhase ((const cPtr_abstractDeclarationAST *) enumerator_3300.current_mPropertyDeclaration (HERE).ptr (), var_semanticContext_2051, var_generation_2379, inCompiler COMMA_SOURCE_FILE ("program.galgas", 69)) ;
      enumerator_3300.gotoNextObject () ;
      if (enumerator_3300.hasCurrentObject ()) {
        bool_4 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 68)).objectCompare (GALGAS_uint ((uint32_t) 0U))).isValidAndTrue () ;
      }
    }
  }
  cEnumerator_declarationListAST enumerator_3528 (var_sortedDeclarationListAST_1941, kENUMERATION_UP) ;
  bool bool_5 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 72)).objectCompare (GALGAS_uint ((uint32_t) 0U))).isValidAndTrue () ;
  if (enumerator_3528.hasCurrentObject () && bool_5) {
    while (enumerator_3528.hasCurrentObject () && bool_5) {
      callExtensionMethod_fourthAnalysisPhase ((const cPtr_abstractDeclarationAST *) enumerator_3528.current_mPropertyDeclaration (HERE).ptr (), var_semanticContext_2051, var_generation_2379, inCompiler COMMA_SOURCE_FILE ("program.galgas", 73)) ;
      enumerator_3528.gotoNextObject () ;
      if (enumerator_3528.hasCurrentObject ()) {
        bool_5 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 72)).objectCompare (GALGAS_uint ((uint32_t) 0U))).isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 76)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_6) {
      cEnumerator_enumerationFunctionListAST enumerator_3835 (var_semanticContext_2051.getter_mEnumerationFunctionListAST (HERE), kENUMERATION_UP) ;
      while (enumerator_3835.hasCurrentObject ()) {
        GALGAS_classKind var_type_3905 ;
        GALGAS_propertyMap joker_3907_3 ; // Joker input parameter
        GALGAS_actionMap joker_3907_2 ; // Joker input parameter
        GALGAS_propertyGenerationList joker_3907_1 ; // Joker input parameter
        var_semanticContext_2051.getter_mClassMap (HERE).method_searchKey (enumerator_3835.current_mEnumName (HERE), var_type_3905, joker_3907_3, joker_3907_2, joker_3907_1, inCompiler COMMA_SOURCE_FILE ("program.galgas", 78)) ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          test_7 = var_type_3905.getter_isAtomic (SOURCE_FILE ("program.galgas", 79)).operator_not (SOURCE_FILE ("program.galgas", 79)).boolEnum () ;
          if (kBoolTrue == test_7) {
            TC_Array <C_FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (enumerator_3835.current_mEnumName (HERE).getter_location (SOURCE_FILE ("program.galgas", 80)), GALGAS_string ("this type should be an enum type"), fixItArray8  COMMA_SOURCE_FILE ("program.galgas", 80)) ;
          }
        }
        if (kBoolFalse == test_7) {
          GALGAS_typeKind var_typeKind_4059 ;
          var_type_3905.method_atomic (var_typeKind_4059, inCompiler COMMA_SOURCE_FILE ("program.galgas", 82)) ;
          enumGalgasBool test_9 = kBoolTrue ;
          if (kBoolTrue == test_9) {
            test_9 = var_typeKind_4059.getter_isEnumType (SOURCE_FILE ("program.galgas", 83)).operator_not (SOURCE_FILE ("program.galgas", 83)).boolEnum () ;
            if (kBoolTrue == test_9) {
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (enumerator_3835.current_mEnumName (HERE).getter_location (SOURCE_FILE ("program.galgas", 84)), GALGAS_string ("this type should be an enum type"), fixItArray10  COMMA_SOURCE_FILE ("program.galgas", 84)) ;
            }
          }
        }
        enumerator_3835.gotoNextObject () ;
      }
    }
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 90)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_11) {
      {
      routine_graphvizAnalysis (constinArgument_inSourceFile.getter_string (HERE).getter_stringByDeletingLastPathComponent (SOURCE_FILE ("program.galgas", 91)), var_semanticContext_2051, var_declarationStruct_1036.getter_mGraphvizList (HERE), inCompiler  COMMA_SOURCE_FILE ("program.galgas", 91)) ;
      }
    }
  }
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    test_12 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 94)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_12) {
      {
      routine_generateCode (var_declarationStruct_1036.getter_mXcodeProject (HERE).getter_string (HERE), var_generation_2379, constinArgument_inSourceFile.getter_string (HERE), inCompiler  COMMA_SOURCE_FILE ("program.galgas", 95)) ;
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
    }catch (const ::std:: exception & e) {
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

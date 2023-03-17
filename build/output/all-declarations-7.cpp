#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-7.h"

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astDeclarationStruct::GALGAS_astDeclarationStruct (void) :
mProperty_mUnifiedDeclarationList (),
mProperty_mBindingSpecificationListMap (),
mProperty_mAutoLayoutBindingSpecificationList (),
mProperty_mPreferences (),
mProperty_mXcodeProject (),
mProperty_mGraphvizList (),
mProperty_mAutoLayoutVStackFunctionMap (),
mProperty_mAutoLayoutHStackFunctionMap (),
mProperty_mEnumerationFunctionListAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astDeclarationStruct::~ GALGAS_astDeclarationStruct (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astDeclarationStruct::GALGAS_astDeclarationStruct (const GALGAS_declarationListAST & inOperand0,
                                                          const GALGAS_outletClassBindingSpecificationList & inOperand1,
                                                          const GALGAS_autoLayoutViewClassBindingSpecificationList & inOperand2,
                                                          const GALGAS_prefDeclaration & inOperand3,
                                                          const GALGAS_lstring & inOperand4,
                                                          const GALGAS_lstringlist & inOperand5,
                                                          const GALGAS_astAutoLayoutViewFunctionMap & inOperand6,
                                                          const GALGAS_astAutoLayoutViewFunctionMap & inOperand7,
                                                          const GALGAS_enumerationFunctionListAST & inOperand8) :
mProperty_mUnifiedDeclarationList (inOperand0),
mProperty_mBindingSpecificationListMap (inOperand1),
mProperty_mAutoLayoutBindingSpecificationList (inOperand2),
mProperty_mPreferences (inOperand3),
mProperty_mXcodeProject (inOperand4),
mProperty_mGraphvizList (inOperand5),
mProperty_mAutoLayoutVStackFunctionMap (inOperand6),
mProperty_mAutoLayoutHStackFunctionMap (inOperand7),
mProperty_mEnumerationFunctionListAST (inOperand8) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astDeclarationStruct GALGAS_astDeclarationStruct::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_astDeclarationStruct (GALGAS_declarationListAST::constructor_emptyList (HERE),
                                      GALGAS_outletClassBindingSpecificationList::constructor_emptyList (HERE),
                                      GALGAS_autoLayoutViewClassBindingSpecificationList::constructor_emptyList (HERE),
                                      GALGAS_prefDeclaration::constructor_default (HERE),
                                      GALGAS_lstring::constructor_default (HERE),
                                      GALGAS_lstringlist::constructor_emptyList (HERE),
                                      GALGAS_astAutoLayoutViewFunctionMap::constructor_emptyMap (HERE),
                                      GALGAS_astAutoLayoutViewFunctionMap::constructor_emptyMap (HERE),
                                      GALGAS_enumerationFunctionListAST::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astDeclarationStruct GALGAS_astDeclarationStruct::constructor_new (const GALGAS_declarationListAST & in_mUnifiedDeclarationList,
                                                                          const GALGAS_outletClassBindingSpecificationList & in_mBindingSpecificationListMap,
                                                                          const GALGAS_autoLayoutViewClassBindingSpecificationList & in_mAutoLayoutBindingSpecificationList,
                                                                          const GALGAS_prefDeclaration & in_mPreferences,
                                                                          const GALGAS_lstring & in_mXcodeProject,
                                                                          const GALGAS_lstringlist & in_mGraphvizList,
                                                                          const GALGAS_astAutoLayoutViewFunctionMap & in_mAutoLayoutVStackFunctionMap,
                                                                          const GALGAS_astAutoLayoutViewFunctionMap & in_mAutoLayoutHStackFunctionMap,
                                                                          const GALGAS_enumerationFunctionListAST & in_mEnumerationFunctionListAST 
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_astDeclarationStruct result ;
  if (in_mUnifiedDeclarationList.isValid () && in_mBindingSpecificationListMap.isValid () && in_mAutoLayoutBindingSpecificationList.isValid () && in_mPreferences.isValid () && in_mXcodeProject.isValid () && in_mGraphvizList.isValid () && in_mAutoLayoutVStackFunctionMap.isValid () && in_mAutoLayoutHStackFunctionMap.isValid () && in_mEnumerationFunctionListAST.isValid ()) {
    result = GALGAS_astDeclarationStruct (in_mUnifiedDeclarationList, in_mBindingSpecificationListMap, in_mAutoLayoutBindingSpecificationList, in_mPreferences, in_mXcodeProject, in_mGraphvizList, in_mAutoLayoutVStackFunctionMap, in_mAutoLayoutHStackFunctionMap, in_mEnumerationFunctionListAST) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_astDeclarationStruct::objectCompare (const GALGAS_astDeclarationStruct & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mUnifiedDeclarationList.objectCompare (inOperand.mProperty_mUnifiedDeclarationList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBindingSpecificationListMap.objectCompare (inOperand.mProperty_mBindingSpecificationListMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAutoLayoutBindingSpecificationList.objectCompare (inOperand.mProperty_mAutoLayoutBindingSpecificationList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPreferences.objectCompare (inOperand.mProperty_mPreferences) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mXcodeProject.objectCompare (inOperand.mProperty_mXcodeProject) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGraphvizList.objectCompare (inOperand.mProperty_mGraphvizList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAutoLayoutVStackFunctionMap.objectCompare (inOperand.mProperty_mAutoLayoutVStackFunctionMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAutoLayoutHStackFunctionMap.objectCompare (inOperand.mProperty_mAutoLayoutHStackFunctionMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEnumerationFunctionListAST.objectCompare (inOperand.mProperty_mEnumerationFunctionListAST) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_astDeclarationStruct::isValid (void) const {
  return mProperty_mUnifiedDeclarationList.isValid () && mProperty_mBindingSpecificationListMap.isValid () && mProperty_mAutoLayoutBindingSpecificationList.isValid () && mProperty_mPreferences.isValid () && mProperty_mXcodeProject.isValid () && mProperty_mGraphvizList.isValid () && mProperty_mAutoLayoutVStackFunctionMap.isValid () && mProperty_mAutoLayoutHStackFunctionMap.isValid () && mProperty_mEnumerationFunctionListAST.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astDeclarationStruct::drop (void) {
  mProperty_mUnifiedDeclarationList.drop () ;
  mProperty_mBindingSpecificationListMap.drop () ;
  mProperty_mAutoLayoutBindingSpecificationList.drop () ;
  mProperty_mPreferences.drop () ;
  mProperty_mXcodeProject.drop () ;
  mProperty_mGraphvizList.drop () ;
  mProperty_mAutoLayoutVStackFunctionMap.drop () ;
  mProperty_mAutoLayoutHStackFunctionMap.drop () ;
  mProperty_mEnumerationFunctionListAST.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astDeclarationStruct::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "<struct @astDeclarationStruct:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mUnifiedDeclarationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBindingSpecificationListMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAutoLayoutBindingSpecificationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPreferences.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mXcodeProject.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGraphvizList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAutoLayoutVStackFunctionMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAutoLayoutHStackFunctionMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEnumerationFunctionListAST.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@astDeclarationStruct type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_astDeclarationStruct ("astDeclarationStruct",
                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astDeclarationStruct::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astDeclarationStruct ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astDeclarationStruct::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astDeclarationStruct (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astDeclarationStruct GALGAS_astDeclarationStruct::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_astDeclarationStruct result ;
  const GALGAS_astDeclarationStruct * p = (const GALGAS_astDeclarationStruct *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_astDeclarationStruct *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astDeclarationStruct", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @doubleAsDefaultValue reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_doubleAsDefaultValue::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_doubleAsDefaultValue * p = (const cPtr_doubleAsDefaultValue *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_doubleAsDefaultValue) ;
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_doubleAsDefaultValue::objectCompare (const GALGAS_doubleAsDefaultValue & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_doubleAsDefaultValue::GALGAS_doubleAsDefaultValue (void) :
GALGAS_abstractDefaultValue () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_doubleAsDefaultValue GALGAS_doubleAsDefaultValue::constructor_default (LOCATION_ARGS) {
  return GALGAS_doubleAsDefaultValue::constructor_new (GALGAS_ldouble::constructor_default (HERE)
                                                       COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_doubleAsDefaultValue::GALGAS_doubleAsDefaultValue (const cPtr_doubleAsDefaultValue * inSourcePtr) :
GALGAS_abstractDefaultValue (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_doubleAsDefaultValue) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_doubleAsDefaultValue GALGAS_doubleAsDefaultValue::constructor_new (const GALGAS_ldouble & inAttribute_mValue
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_doubleAsDefaultValue result ;
  if (inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_doubleAsDefaultValue (inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_doubleAsDefaultValue::setter_setMValue (GALGAS_ldouble inValue
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_doubleAsDefaultValue * p = (cPtr_doubleAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_doubleAsDefaultValue) ;
    p->mProperty_mValue = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ldouble GALGAS_doubleAsDefaultValue::readProperty_mValue (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_ldouble () ;
  }else{
    cPtr_doubleAsDefaultValue * p = (cPtr_doubleAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_doubleAsDefaultValue) ;
    return p->mProperty_mValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @doubleAsDefaultValue class
//----------------------------------------------------------------------------------------------------------------------

cPtr_doubleAsDefaultValue::cPtr_doubleAsDefaultValue (const GALGAS_ldouble & in_mValue
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (THERE),
mProperty_mValue (in_mValue) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_doubleAsDefaultValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_doubleAsDefaultValue ;
}

void cPtr_doubleAsDefaultValue::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@doubleAsDefaultValue:" ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_doubleAsDefaultValue::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_doubleAsDefaultValue (mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@doubleAsDefaultValue type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_doubleAsDefaultValue ("doubleAsDefaultValue",
                                             & kTypeDescriptor_GALGAS_abstractDefaultValue) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_doubleAsDefaultValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_doubleAsDefaultValue ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_doubleAsDefaultValue::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_doubleAsDefaultValue (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_doubleAsDefaultValue GALGAS_doubleAsDefaultValue::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_doubleAsDefaultValue result ;
  const GALGAS_doubleAsDefaultValue * p = (const GALGAS_doubleAsDefaultValue *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_doubleAsDefaultValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("doubleAsDefaultValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@propertyMap-element isAbstract'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool extensionGetter_isAbstract (const GALGAS_propertyMap_2D_element & inObject,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_propertyMap_2D_element temp_1 = inObject ;
    GALGAS_typeKind var_unused_0_6162 ;
    GALGAS_propertyAccessibility var_accessibility_6218 ;
    const bool optionalResult6158 = temp_1.readProperty_mKind ().optional_property (var_unused_0_6162, var_accessibility_6218) ;
    if (!optionalResult6158) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_accessibility_6218.getter_isTransient (SOURCE_FILE ("semantic-analysis.ggs", 145)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_bool var_ab_6315 ;
          var_accessibility_6218.method_transient (var_ab_6315, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.ggs", 146)) ;
          result_result = var_ab_6315 ;
        }
      }
    }
  }
//---
  return result_result ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addICNS_file'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addICNS_5F_file (GALGAS_XcodeProjectDescriptor & ioObject,
                                      const GALGAS_string constinArgument_inFileName,
                                      GALGAS_string & outArgument_outFileRef,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 6)) ;
  }
  ioObject.mProperty_mICNS_5F_fileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 7)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//                               Bool options                                                    
//
//----------------------------------------------------------------------------------------------------------------------

C_BoolCommandLineOption gOption_easyBindings_5F_options_outputDeclarationDependencyGraph ("easyBindings_options",
                                         "outputDeclarationDependencyGraph",
                                         103,
                                         "output-declaration-graph",
                                         "Output a declaration dependancy graph graphviz file") ;

//----------------------------------------------------------------------------------------------------------------------
//
//                               UInt options                                                    
//
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
//
//                              String options                                                   
//
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
//
//                              String List options                                              
//
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'predefinedOutletClasses'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of 'indexes' directory

static const cRegularFileWrapper * gWrapperAllFiles_predefinedOutletClasses_4 [1] = {
  NULL
} ;

//--- All sub-directories of 'indexes' directory

static const cDirectoryWrapper * gWrapperAllDirectories_predefinedOutletClasses_4 [1] = {
  NULL
} ;

//--- Directory 'indexes'

const cDirectoryWrapper gWrapperDirectory_4_predefinedOutletClasses (
  "indexes",
  0,
  gWrapperAllFiles_predefinedOutletClasses_4,
  0,
  gWrapperAllDirectories_predefinedOutletClasses_4
) ;

//--- All files of 'build' directory

static const cRegularFileWrapper * gWrapperAllFiles_predefinedOutletClasses_3 [1] = {
  NULL
} ;

//--- All sub-directories of 'build' directory

static const cDirectoryWrapper * gWrapperAllDirectories_predefinedOutletClasses_3 [2] = {
  & gWrapperDirectory_4_predefinedOutletClasses,
  NULL
} ;

//--- Directory 'build'

const cDirectoryWrapper gWrapperDirectory_3_predefinedOutletClasses (
  "build",
  0,
  gWrapperAllFiles_predefinedOutletClasses_3,
  1,
  gWrapperAllDirectories_predefinedOutletClasses_3
) ;

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_predefinedOutletClasses_5 [1] = {
  NULL
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_predefinedOutletClasses_5 [1] = {
  NULL
} ;

//--- Directory 'controllers'

const cDirectoryWrapper gWrapperDirectory_5_predefinedOutletClasses (
  "controllers",
  0,
  gWrapperAllFiles_predefinedOutletClasses_5,
  0,
  gWrapperAllDirectories_predefinedOutletClasses_5
) ;

//--- All files of 'standard-properties' directory

static const cRegularFileWrapper * gWrapperAllFiles_predefinedOutletClasses_1 [1] = {
  NULL
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_predefinedOutletClasses_1 [1] = {
  NULL
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
  NULL
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_predefinedOutletClasses_2 [1] = {
  NULL
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
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_predefinedOutletClasses_0 [5] = {
  & gWrapperDirectory_3_predefinedOutletClasses,
  & gWrapperDirectory_5_predefinedOutletClasses,
  & gWrapperDirectory_1_predefinedOutletClasses,
  & gWrapperDirectory_2_predefinedOutletClasses,
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_predefinedOutletClasses (
  "",
  0,
  gWrapperAllFiles_predefinedOutletClasses_0,
  4,
  gWrapperAllDirectories_predefinedOutletClasses_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedOutletClasses sourceFile'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_predefinedOutletClasses_sourceFile (C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "\nenum GridStyle {\n  noGrid, cross, line\n}\n\n//----------------------------------------------------------------------------------------\n\ntransient property struct CGFloat ;\n\ntransient property class NSImage ;\n\ntransient property class EBShape ;\n\nextern outlet class EBGraphicView : NSView $graphicController ;\nbinding EBGraphicView $underObjectsDisplay : transient EBShape ;\nbinding EBGraphicView $overObjectsDisplay : transient EBShape ;\nbinding EBGraphicView $arrowKeyMagnitude : transient Int ;\nbinding EBGraphicView $shiftArrowKeyMagnitude : transient Int ;\nbinding EBGraphicView $backColor : transient NSColor ;\nbinding EBGraphicView $mouseGrid : transient Int ;\nbinding EBGraphicView $gridStep : transient Int ;\nbinding EBGraphicView $gridStyle : transient GridStyle ;\nbinding EBGraphicView $gridDisplayFactor : transient Int ;\nbinding EBGraphicView $gridLineColor : transient NSColor ;\nbinding EBGraphicView $gridCrossColor : transient NSColor ;\nbinding EBGraphicView $zoom : property Int ;\nbinding EBGraphicView $horizontalFlip : transient Bool ;\nbinding EBGraphicView $verticalFlip : transient Bool ;\nbinding EBGraphicView $xPlacardUnit : transient Int ;\nbinding EBGraphicView $yPlacardUnit : transient Int ;\nbinding EBGraphicView $backgroundImageData : transient Data ;\nbinding EBGraphicView $backgroundImageOpacity : transient Double ;\nbinding EBGraphicView $foregroundImageData : transient Data ;\nbinding EBGraphicView $foregroundImageOpacity : transient Double ;\n\nextern outlet class EBEnclosingGraphicView : NSView $graphicController ;\nbinding EBEnclosingGraphicView $underObjectsDisplay : transient EBShape ;\nbinding EBEnclosingGraphicView $overObjectsDisplay : transient EBShape ;\nbinding EBEnclosingGraphicView $arrowKeyMagnitude : transient Int ;\nbinding EBEnclosingGraphicView $shiftArrowKeyMagnitude : transient Int ;\nbinding EBEnclosingGraphicView $backColor : transient NSColor ;\nbinding EBEnclosingGraphicView $mouseGrid : transient Int ;\nbinding EBEnclosingGraphicView $gridStep : transient Int ;\nbinding EBEnclosingGraphicView $gridStyle : transient GridStyle ;\nbinding EBEnclosingGraphicView $gridDisplayFactor : transient Int ;\nbinding EBEnclosingGraphicView $gridLineColor : transient NSColor ;\nbinding EBEnclosingGraphicView $gridCrossColor : transient NSColor ;\nbinding EBEnclosingGraphicView $zoom : property Int ;\nbinding EBEnclosingGraphicView $horizontalFlip : transient Bool ;\nbinding EBEnclosingGraphicView $verticalFlip : transient Bool ;\nbinding EBEnclosingGraphicView $xPlacardUnit : transient Int ;\nbinding EBEnclosingGraphicView $yPlacardUnit : transient Int ;\nbinding EBEnclosingGraphicView $backgroundImageData : transient Data ;\nbinding EBEnclosingGraphicView $backgroundImageOpacity : transient Double ;\nbinding EBEnclosingGraphicView $foregroundImageData : transient Data ;\nbinding EBEnclosingGraphicView $foregroundImageOpacity : transient Double ;\n\nextern outlet class NSView $hidden ;\n\nextern outlet class NSControl : NSView $enabled $run ;\n\noutlet class EBButton : NSControl ;\nbinding EBButton $title : transient String ;\n\noutlet class EBColorObserverWell : NSControl ;\nbinding EBColorObserverWell $colorObserver : transient NSColor ;\n\noutlet class EBColorWell : NSControl ;\nbinding EBColorWell $color : property NSColor {sendContinously : Bool} ;\n\n\noutlet class EBDatePicker : NSControl ;\nbinding EBDatePicker $date : property Date ;\n\noutlet class EBDoubleField : NSControl ;\nbinding EBDoubleField $value : property Double {sendContinously : Bool, autoFormatter:Bool} ;\n\n\noutlet class EBDoubleObserverField : NSControl ;\nbinding EBDoubleObserverField $valueObserver : transient Double {autoFormatter:Bool} ;\n\n\noutlet class EBIntField : NSControl ;\nbinding EBIntField $value : property Int {sendContinously : Bool, autoFormatter:Bool} ;\n\n\noutlet class EBIntObserverField : NSControl ;\nbinding EBIntObserverField $valueObserver : transient Int {autoFormatter:Bool} ;\n\n\noutlet class EBFontButton : NSControl ;\nbinding EBFontButton $fontValue : property NSFont ;\n\n\noutlet class EBPopUpButton : NSControl ;\nbinding EBPopUpButton $selectedTag : property Int ;\nbinding EBPopUpButton $selectedIndex : property enum ;\n\n\noutlet class EBGroupButton : NSControl ;\nbinding EBGroupButton $selectedIndex : property Int ;\n\n\noutlet class EBImageObserverView : NSView ;\nbinding EBImageObserverView $image : transient NSImage ;\nbinding EBImageObserverView $tooltip : transient String ;\n\n\noutlet class EBMenu ;\n\n\noutlet class EBMenuItem $enabled $run ;\n\n\noutlet class EBCheckedMenuItem ;\nbinding EBCheckedMenuItem $checked : property Bool ;\n\n\noutlet class EBProgressIndicator : NSView ;\n\n\noutlet class EBSegmentedControl : NSControl ;\nbinding EBSegmentedControl $selectedIndex : property Int ;\n\n\noutlet class EBSlider : NSControl ;\nbinding EBSlider $doubleValue : property Double {sendContinously:Bool} ;\nbinding EBSlider $intValue : property Int {sendContinously:Bool} ;\n\n\noutlet class EBStepper : NSControl ;\nbinding EBStepper $value : property Int {sendContinously:Bool} ;\n\n\noutlet class EBSwitch : NSControl ;\nbinding EBSwitch $value : property Bool ;\n\n\noutlet class EBTableView : NSControl $tableValue ;\n\n\noutlet class EBTextField : NSControl ;\nbinding EBTextField $value : property String {sendContinously : Bool} ;\n\noutlet class EBTextObserverField : NSView ;\nbinding EBTextObserverField $valueObserver : transient String ;\nbinding EBTextObserverField $backColor : transient NSColor ;\n\n\noutlet class EBTextObserverView : NSView ;\nbinding EBTextObserverView $valueObserver : transient String ;\n\n\noutlet class EBTextView : NSControl ;\nbinding EBTextView $value : property String ;\n\noutlet class EBWindow ;\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'sortProperties'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_sortProperties (const GALGAS_string constinArgument_inSourceFile,
                             const GALGAS_declarationListAST constinArgument_inDeclarationListAST,
                             GALGAS_declarationListAST & outArgument_outSortedDeclarationListAST,
                             C_Compiler * inCompiler
                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSortedDeclarationListAST.drop () ; // Release 'out' argument
  GALGAS_declarationPrecedenceGraph var_declarationPrecedenceGraph_2670 = GALGAS_declarationPrecedenceGraph::constructor_emptyGraph (SOURCE_FILE ("declaration-graph.ggs", 67)) ;
  cEnumerator_declarationListAST enumerator_2703 (constinArgument_inDeclarationListAST, kENUMERATION_UP) ;
  while (enumerator_2703.hasCurrentObject ()) {
    callExtensionMethod_enterInPrecedenceGraph ((cPtr_abstractDeclarationAST *) enumerator_2703.current_mPropertyDeclaration (HERE).ptr (), var_declarationPrecedenceGraph_2670, inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 69)) ;
    enumerator_2703.gotoNextObject () ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (gOption_easyBindings_5F_options_outputDeclarationDependencyGraph.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_s_2932 = var_declarationPrecedenceGraph_2670.getter_graphviz (SOURCE_FILE ("declaration-graph.ggs", 73)) ;
      GALGAS_string var_path_2985 = constinArgument_inSourceFile.add_operation (GALGAS_string (".declarationDependancy.dot"), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 74)) ;
      GALGAS_bool joker_3079 ; // Joker input parameter
      var_s_2932.method_writeToFileWhenDifferentContents (var_path_2985, joker_3079, inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 75)) ;
    }
  }
  outArgument_outSortedDeclarationListAST = GALGAS_declarationListAST::constructor_emptyList (SOURCE_FILE ("declaration-graph.ggs", 78)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsStrictSup, var_declarationPrecedenceGraph_2670.getter_undefinedNodeCount (SOURCE_FILE ("declaration-graph.ggs", 79)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      cEnumerator_lstringlist enumerator_3256 (var_declarationPrecedenceGraph_2670.getter_undefinedNodeReferenceList (SOURCE_FILE ("declaration-graph.ggs", 80)), kENUMERATION_UP) ;
      while (enumerator_3256.hasCurrentObject ()) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_3256.current_mValue (HERE).readProperty_location (), GALGAS_string ("the property ").add_operation (enumerator_3256.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 81)).add_operation (GALGAS_string (" is not defined"), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 81)), fixItArray2  COMMA_SOURCE_FILE ("declaration-graph.ggs", 81)) ;
        enumerator_3256.gotoNextObject () ;
      }
    }
  }
  if (kBoolFalse == test_1) {
    GALGAS_declarationListAST var_unsortedSemanticDeclarationListAST_3546 ;
    GALGAS_lstringlist joker_3499 ; // Joker input parameter
    GALGAS_lstringlist joker_3554 ; // Joker input parameter
    var_declarationPrecedenceGraph_2670.method_topologicalSort (outArgument_outSortedDeclarationListAST, joker_3499, var_unsortedSemanticDeclarationListAST_3546, joker_3554, inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 84)) ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (kIsStrictSup, var_unsortedSemanticDeclarationListAST_3546.getter_length (SOURCE_FILE ("declaration-graph.ggs", 90)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string var_s_3633 = GALGAS_string ("semantic analysis not performed, ").add_operation (var_unsortedSemanticDeclarationListAST_3546.getter_length (SOURCE_FILE ("declaration-graph.ggs", 92)).getter_string (SOURCE_FILE ("declaration-graph.ggs", 91)), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 91)).add_operation (GALGAS_string (" declarations are involved in circular definition:"), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 92)) ;
        cEnumerator_declarationListAST enumerator_3819 (var_unsortedSemanticDeclarationListAST_3546, kENUMERATION_UP) ;
        while (enumerator_3819.hasCurrentObject ()) {
          var_s_3633.plusAssign_operation(GALGAS_string ("\n-  ").add_operation (callExtensionGetter_nodeKey ((const cPtr_abstractDeclarationAST *) enumerator_3819.current_mPropertyDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 95)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 95)), inCompiler  COMMA_SOURCE_FILE ("declaration-graph.ggs", 95)) ;
          enumerator_3819.gotoNextObject () ;
        }
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("declaration-graph.ggs", 97)), var_s_3633, fixItArray4  COMMA_SOURCE_FILE ("declaration-graph.ggs", 97)) ;
        cEnumerator_declarationListAST enumerator_3965 (var_unsortedSemanticDeclarationListAST_3546, kENUMERATION_UP) ;
        while (enumerator_3965.hasCurrentObject ()) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (callExtensionGetter_nodeKey ((const cPtr_abstractDeclarationAST *) enumerator_3965.current_mPropertyDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 99)).readProperty_location (), GALGAS_string ("the ").add_operation (callExtensionGetter_nodeKey ((const cPtr_abstractDeclarationAST *) enumerator_3965.current_mPropertyDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 99)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 99)).add_operation (GALGAS_string (" property is declared here"), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 99)), fixItArray5  COMMA_SOURCE_FILE ("declaration-graph.ggs", 99)) ;
          enumerator_3965.gotoNextObject () ;
        }
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@transientClassDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_transientClassDeclarationAST::method_enterInPrecedenceGraph (GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_transientClassDeclarationAST temp_0 = this ;
  const GALGAS_transientClassDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mClassName (), temp_1, inCompiler COMMA_SOURCE_FILE ("transient-property-class.ggs", 12)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@transientClassDeclarationAST nodeKey'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_transientClassDeclarationAST::getter_nodeKey (C_Compiler */* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result_result ; // Returned variable
  const GALGAS_transientClassDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mClassName () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@transientClassDeclarationAST firstAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_transientClassDeclarationAST::method_firstAnalysisPhase (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                   GALGAS_generationStruct & ioArgument_ioGeneration,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_transientClassDeclarationAST temp_0 = this ;
  const GALGAS_transientClassDeclarationAST temp_1 = this ;
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (temp_0.readProperty_mClassName (), GALGAS_classKind::constructor_atomic (GALGAS_typeKind::constructor_transientPropertyExternType (temp_1.readProperty_mClassName ().readProperty_string ()  COMMA_SOURCE_FILE ("transient-property-class.ggs", 62))  COMMA_SOURCE_FILE ("transient-property-class.ggs", 62)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("transient-property-class.ggs", 63)), GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("transient-property-class.ggs", 64)), GALGAS_propertyGenerationList::constructor_emptyList (SOURCE_FILE ("transient-property-class.ggs", 65)), inCompiler COMMA_SOURCE_FILE ("transient-property-class.ggs", 60)) ;
  }
  const GALGAS_transientClassDeclarationAST temp_2 = this ;
  const GALGAS_transientClassDeclarationAST temp_3 = this ;
  ioArgument_ioGeneration.mProperty_mTransientPropertyTypeList.addAssign_operation (temp_2.readProperty_mClassName ().readProperty_string (), temp_3.readProperty_mIsClass ()  COMMA_SOURCE_FILE ("transient-property-class.ggs", 67)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumerationDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_enumerationDeclarationAST::method_enterInPrecedenceGraph (GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_enumerationDeclarationAST temp_0 = this ;
  const GALGAS_enumerationDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mClassName (), temp_1, inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 12)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@enumerationDeclarationAST nodeKey'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_enumerationDeclarationAST::getter_nodeKey (C_Compiler */* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result_result ; // Returned variable
  const GALGAS_enumerationDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mClassName () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumerationDeclarationAST firstAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_enumerationDeclarationAST::method_firstAnalysisPhase (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                GALGAS_generationStruct & ioArgument_ioGeneration,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_enumConstantMap var_enumConstantMap_4179 = GALGAS_enumConstantMap::constructor_emptyMap (SOURCE_FILE ("enumeration.ggs", 111)) ;
  const GALGAS_enumerationDeclarationAST temp_0 = this ;
  cEnumerator_lstringlist enumerator_4193 (temp_0.readProperty_mEnumConstantNameList (), kENUMERATION_UP) ;
  while (enumerator_4193.hasCurrentObject ()) {
    {
    var_enumConstantMap_4179.setter_insertKey (enumerator_4193.current_mValue (HERE), var_enumConstantMap_4179.getter_count (SOURCE_FILE ("enumeration.ggs", 113)), inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 113)) ;
    }
    enumerator_4193.gotoNextObject () ;
  }
  GALGAS_enumFuncMap var_enumFuncMap_4326 = GALGAS_enumFuncMap::constructor_emptyMap (SOURCE_FILE ("enumeration.ggs", 115)) ;
  cEnumerator_enumerationFunctionListAST enumerator_4376 (ioArgument_ioSemanticContext.readProperty_mEnumerationFunctionListAST (), kENUMERATION_UP) ;
  while (enumerator_4376.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      const GALGAS_enumerationDeclarationAST temp_2 = this ;
      test_1 = GALGAS_bool (kIsEqual, enumerator_4376.current_mEnumName (HERE).readProperty_string ().objectCompare (temp_2.readProperty_mClassName ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_stringset var_definedConstantNameSet_4531 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("enumeration.ggs", 118)) ;
        GALGAS_enumFunAssociationSortedList var_associationSortedList_4598 = GALGAS_enumFunAssociationSortedList::constructor_emptySortedList (SOURCE_FILE ("enumeration.ggs", 119)) ;
        cEnumerator__32_lstringlist enumerator_4644 (enumerator_4376.current_mAssociationList (HERE), kENUMERATION_UP) ;
        while (enumerator_4644.hasCurrentObject ()) {
          GALGAS_uint var_idx_4725 ;
          var_enumConstantMap_4179.method_searchKey (enumerator_4644.current_mValue_30_ (HERE), var_idx_4725, inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 121)) ;
          var_associationSortedList_4598.addAssign_operation (var_idx_4725, enumerator_4644.current_mValue_31_ (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("enumeration.ggs", 122)) ;
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_definedConstantNameSet_4531.getter_hasKey (enumerator_4644.current_mValue_30_ (HERE).readProperty_string () COMMA_SOURCE_FILE ("enumeration.ggs", 123)).boolEnum () ;
            if (kBoolTrue == test_3) {
              TC_Array <C_FixItDescription> fixItArray4 ;
              inCompiler->emitSemanticError (enumerator_4644.current_mValue_30_ (HERE).readProperty_location (), GALGAS_string ("Duplicated constant"), fixItArray4  COMMA_SOURCE_FILE ("enumeration.ggs", 124)) ;
            }
          }
          var_definedConstantNameSet_4531.addAssign_operation (enumerator_4644.current_mValue_30_ (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("enumeration.ggs", 126)) ;
          enumerator_4644.gotoNextObject () ;
        }
        const GALGAS_enumerationDeclarationAST temp_5 = this ;
        cEnumerator_lstringlist enumerator_4987 (temp_5.readProperty_mEnumConstantNameList (), kENUMERATION_UP) ;
        while (enumerator_4987.hasCurrentObject ()) {
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = var_definedConstantNameSet_4531.getter_hasKey (enumerator_4987.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("enumeration.ggs", 129)).operator_not (SOURCE_FILE ("enumeration.ggs", 129)).boolEnum () ;
            if (kBoolTrue == test_6) {
              TC_Array <C_FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (enumerator_4376.current_mFunctionName (HERE).readProperty_location (), GALGAS_string ("No association for '").add_operation (enumerator_4987.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 130)).add_operation (GALGAS_string ("' constant"), inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 130)), fixItArray7  COMMA_SOURCE_FILE ("enumeration.ggs", 130)) ;
            }
          }
          enumerator_4987.gotoNextObject () ;
        }
        {
        var_enumFuncMap_4326.setter_insertKey (enumerator_4376.current_mFunctionName (HERE), var_associationSortedList_4598, inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 133)) ;
        }
      }
    }
    enumerator_4376.gotoNextObject () ;
  }
  {
  const GALGAS_enumerationDeclarationAST temp_8 = this ;
  const GALGAS_enumerationDeclarationAST temp_9 = this ;
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (temp_8.readProperty_mClassName (), GALGAS_classKind::constructor_atomic (GALGAS_typeKind::constructor_enumType (temp_9.readProperty_mClassName ().readProperty_string (), var_enumConstantMap_4179, var_enumFuncMap_4326  COMMA_SOURCE_FILE ("enumeration.ggs", 138))  COMMA_SOURCE_FILE ("enumeration.ggs", 138)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("enumeration.ggs", 139)), GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("enumeration.ggs", 140)), GALGAS_propertyGenerationList::constructor_emptyList (SOURCE_FILE ("enumeration.ggs", 141)), inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 136)) ;
  }
  const GALGAS_enumerationDeclarationAST temp_10 = this ;
  const GALGAS_enumerationDeclarationAST temp_11 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_enumForGeneration::constructor_new (temp_10.readProperty_mClassName ().readProperty_string (), temp_11.readProperty_mEnumConstantNameList (), var_enumFuncMap_4326  COMMA_SOURCE_FILE ("enumeration.ggs", 144))  COMMA_SOURCE_FILE ("enumeration.ggs", 144)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'enumGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of 'indexes' directory

static const cRegularFileWrapper * gWrapperAllFiles_enumGenerationTemplate_4 [1] = {
  NULL
} ;

//--- All sub-directories of 'indexes' directory

static const cDirectoryWrapper * gWrapperAllDirectories_enumGenerationTemplate_4 [1] = {
  NULL
} ;

//--- Directory 'indexes'

const cDirectoryWrapper gWrapperDirectory_4_enumGenerationTemplate (
  "indexes",
  0,
  gWrapperAllFiles_enumGenerationTemplate_4,
  0,
  gWrapperAllDirectories_enumGenerationTemplate_4
) ;

//--- All files of 'build' directory

static const cRegularFileWrapper * gWrapperAllFiles_enumGenerationTemplate_3 [1] = {
  NULL
} ;

//--- All sub-directories of 'build' directory

static const cDirectoryWrapper * gWrapperAllDirectories_enumGenerationTemplate_3 [2] = {
  & gWrapperDirectory_4_enumGenerationTemplate,
  NULL
} ;

//--- Directory 'build'

const cDirectoryWrapper gWrapperDirectory_3_enumGenerationTemplate (
  "build",
  0,
  gWrapperAllFiles_enumGenerationTemplate_3,
  1,
  gWrapperAllDirectories_enumGenerationTemplate_3
) ;

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_enumGenerationTemplate_5 [1] = {
  NULL
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_enumGenerationTemplate_5 [1] = {
  NULL
} ;

//--- Directory 'controllers'

const cDirectoryWrapper gWrapperDirectory_5_enumGenerationTemplate (
  "controllers",
  0,
  gWrapperAllFiles_enumGenerationTemplate_5,
  0,
  gWrapperAllDirectories_enumGenerationTemplate_5
) ;

//--- All files of 'standard-properties' directory

static const cRegularFileWrapper * gWrapperAllFiles_enumGenerationTemplate_1 [1] = {
  NULL
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_enumGenerationTemplate_1 [1] = {
  NULL
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
  NULL
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_enumGenerationTemplate_2 [1] = {
  NULL
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
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_enumGenerationTemplate_0 [5] = {
  & gWrapperDirectory_3_enumGenerationTemplate,
  & gWrapperDirectory_5_enumGenerationTemplate,
  & gWrapperDirectory_1_enumGenerationTemplate,
  & gWrapperDirectory_2_enumGenerationTemplate,
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_enumGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_enumGenerationTemplate_0,
  4,
  gWrapperAllDirectories_enumGenerationTemplate_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'enumGenerationTemplate enumGenerationInSwift'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_enumGenerationTemplate_enumGenerationInSwift (C_Compiler * inCompiler,
                                                                                const GALGAS_string & in_ENUM_5F_TYPE_5F_NAME,
                                                                                const GALGAS_lstringlist & in_CONSTANT_5F_ORDERED_5F_LIST,
                                                                                const GALGAS_enumFuncMap & in_FUNCTION_5F_MAP
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nimport AppKit\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nenum " ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << " : Int, EnumPropertyProtocol, Hashable, CaseIterable {\n" ;
  GALGAS_uint index_565_idx (0) ;
  if (in_CONSTANT_5F_ORDERED_5F_LIST.isValid ()) {
    cEnumerator_lstringlist enumerator_565 (in_CONSTANT_5F_ORDERED_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_565.hasCurrentObject ()) {
      result << "  case " ;
      result << enumerator_565.current_mValue (HERE).readProperty_string ().stringValue () ;
      result << " = " ;
      result << index_565_idx.getter_string (SOURCE_FILE ("enum.swift.galgasTemplate", 12)).stringValue () ;
      result << "\n" ;
      index_565_idx.increment () ;
      enumerator_565.gotoNextObject () ;
    }
  }
  result << "\n" ;
  GALGAS_uint index_676_ (0) ;
  if (in_FUNCTION_5F_MAP.isValid ()) {
    cEnumerator_enumFuncMap enumerator_676 (in_FUNCTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_676.hasCurrentObject ()) {
      result << "  //····················································································································\n  // Function " ;
      result << enumerator_676.current_lkey (HERE).readProperty_string ().stringValue () ;
      result << "\n  //····················································································································\n\n  static func " ;
      result << enumerator_676.current_lkey (HERE).readProperty_string ().stringValue () ;
      result << " () -> [String] {\n    return [" ;
      GALGAS_uint index_1088_ (0) ;
      if (enumerator_676.current_mAssociationSortedList (HERE).isValid ()) {
        cEnumerator_enumFunAssociationSortedList enumerator_1088 (enumerator_676.current_mAssociationSortedList (HERE), kENUMERATION_UP) ;
        while (enumerator_1088.hasCurrentObject ()) {
          result << enumerator_1088.current_mAssociatedString (HERE).getter_utf_38_Representation (SOURCE_FILE ("enum.swift.galgasTemplate", 23)).stringValue () ;
          if (enumerator_1088.hasNextObject ()) {
            result << ", " ;
          }
          index_1088_.increment () ;
          enumerator_1088.gotoNextObject () ;
        }
      }
      result << "]\n  }\n\n" ;
      index_676_.increment () ;
      enumerator_676.gotoNextObject () ;
    }
  }
  result << "  //····················································································································\n  //  Enum generic bindings utility functions\n  //····················································································································\n\n  static func buildfromRawValue (rawValue : Int) -> " ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << "\? {\n    if let v = " ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << " (rawValue:rawValue) {\n      return v\n    }else{\n      return nil\n    }\n  }\n\n  //····················································································································\n\n  func enumfromRawValue (rawValue : Int) -> " ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << " {\n    var result = self\n    let v : " ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << "\? = " ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << " (rawValue:rawValue) ;\n    if let unwrappedV = v {\n      result = unwrappedV\n    }\n    return result\n  }\n\n  //····················································································································\n  //  EBStoredPropertyProtocol\n  //····················································································································\n\n  func ebHashValue () -> UInt32 {\n    return UInt32 (self.rawValue)\n  }\n\n  //····················································································································\n\n  func convertToNSObject () -> NSObject {\n    return NSNumber (value: self.rawValue)\n  }\n\n  //····················································································································\n\n  static func convertFromNSObject (object : NSObject) -> " ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << " {\n    var result = " ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << "." ;
  result << in_CONSTANT_5F_ORDERED_5F_LIST.getter_mValueAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("enum.swift.galgasTemplate", 70)).readProperty_string ().stringValue () ;
  result << "\n    if let number = object as\? NSNumber, let v = " ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << " (rawValue: number.intValue) {\n      result = v\n    }\n    return result\n  }\n\n  //····················································································································\n\n  static func unarchiveFromDataRange (_ inData : Data, _ inRange : NSRange) -> " ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << "\? {\n    if let rawValue = inData.base62EncodedInt (range: inRange), let enumValue = " ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << " (rawValue: rawValue) {\n      return enumValue\n    }else{\n      return nil\n    }\n  }\n\n  //····················································································································\n\n  func appendPropertyValueTo (_ ioData : inout Data) {\n    ioData.append (base62Encoded: self.rawValue)\n  }\n\n  //····················································································································\n\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntypealias EBReadOnlyProperty_" ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << " = EBReadOnlyEnumProperty <" ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << ">\ntypealias EBTransientProperty_" ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << " = EBTransientEnumProperty <" ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << ">\ntypealias EBReadWriteProperty_" ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << " = EBReadWriteEnumProperty <" ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << ">\ntypealias EBStoredProperty_" ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << " = EBStoredEnumProperty <" ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << ">\ntypealias EBComputedProperty_" ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << " = EBGenericComputedEnumProperty <" ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << ">\ntypealias EBPreferencesProperty_" ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << " = EBStoredEnumProperty <" ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << ">\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumForGeneration generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_enumForGeneration::method_generateCode (const GALGAS_string constinArgument_inOutputDirectory,
                                                  const GALGAS_generationStruct /* constinArgument_inGenerationStruct */,
                                                  GALGAS_stringset & ioArgument_ioGeneratedFileSet,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_enumForGeneration temp_1 = this ;
    test_0 = GALGAS_bool (kIsStrictSup, temp_1.readProperty_mEnumConstantList ().getter_length (SOURCE_FILE ("enumeration.ggs", 178)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_enumForGeneration temp_2 = this ;
      const GALGAS_enumForGeneration temp_3 = this ;
      const GALGAS_enumForGeneration temp_4 = this ;
      GALGAS_string var_s_6789 = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumGenerationInSwift (inCompiler, temp_2.readProperty_mEnumName (), temp_3.readProperty_mEnumConstantList (), temp_4.readProperty_mEnumFuncMap () COMMA_SOURCE_FILE ("enumeration.ggs", 179))) ;
      const GALGAS_enumForGeneration temp_5 = this ;
      GALGAS_string var_fileName_6949 = GALGAS_string ("enum-").add_operation (temp_5.readProperty_mEnumName (), inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 184)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 184)) ;
      ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_6949  COMMA_SOURCE_FILE ("enumeration.ggs", 185)) ;
      {
      GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_6949, var_s_6789, inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 186)) ;
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@atomicClassDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_atomicClassDeclarationAST::method_enterInPrecedenceGraph (GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_atomicClassDeclarationAST temp_0 = this ;
  const GALGAS_atomicClassDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mClassName (), temp_1, inCompiler COMMA_SOURCE_FILE ("atomic-class.ggs", 12)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicClassDeclarationAST nodeKey'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_atomicClassDeclarationAST::getter_nodeKey (C_Compiler */* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result_result ; // Returned variable
  const GALGAS_atomicClassDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mClassName () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterAtomicClassesIn'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterAtomicClassesIn (GALGAS_declarationListAST & ioArgument_ioDeclarationListAST,
                                   C_Compiler * /* inCompiler */
                                   COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioDeclarationListAST.addAssign_operation (GALGAS_atomicClassDeclarationAST::constructor_new (GALGAS_string ("Double").getter_nowhere (SOURCE_FILE ("atomic-class.ggs", 26)), GALGAS_typeKind::constructor_doubleType (SOURCE_FILE ("atomic-class.ggs", 26))  COMMA_SOURCE_FILE ("atomic-class.ggs", 26))  COMMA_SOURCE_FILE ("atomic-class.ggs", 26)) ;
  ioArgument_ioDeclarationListAST.addAssign_operation (GALGAS_atomicClassDeclarationAST::constructor_new (GALGAS_string ("String").getter_nowhere (SOURCE_FILE ("atomic-class.ggs", 27)), GALGAS_typeKind::constructor_stringType (SOURCE_FILE ("atomic-class.ggs", 27))  COMMA_SOURCE_FILE ("atomic-class.ggs", 27))  COMMA_SOURCE_FILE ("atomic-class.ggs", 27)) ;
  ioArgument_ioDeclarationListAST.addAssign_operation (GALGAS_atomicClassDeclarationAST::constructor_new (GALGAS_string ("Int").getter_nowhere (SOURCE_FILE ("atomic-class.ggs", 28)), GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("atomic-class.ggs", 28))  COMMA_SOURCE_FILE ("atomic-class.ggs", 28))  COMMA_SOURCE_FILE ("atomic-class.ggs", 28)) ;
  ioArgument_ioDeclarationListAST.addAssign_operation (GALGAS_atomicClassDeclarationAST::constructor_new (GALGAS_string ("UInt32").getter_nowhere (SOURCE_FILE ("atomic-class.ggs", 29)), GALGAS_typeKind::constructor_uint_33__32_Type (SOURCE_FILE ("atomic-class.ggs", 29))  COMMA_SOURCE_FILE ("atomic-class.ggs", 29))  COMMA_SOURCE_FILE ("atomic-class.ggs", 29)) ;
  ioArgument_ioDeclarationListAST.addAssign_operation (GALGAS_atomicClassDeclarationAST::constructor_new (GALGAS_string ("Bool").getter_nowhere (SOURCE_FILE ("atomic-class.ggs", 30)), GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("atomic-class.ggs", 30))  COMMA_SOURCE_FILE ("atomic-class.ggs", 30))  COMMA_SOURCE_FILE ("atomic-class.ggs", 30)) ;
  ioArgument_ioDeclarationListAST.addAssign_operation (GALGAS_atomicClassDeclarationAST::constructor_new (GALGAS_string ("NSColor").getter_nowhere (SOURCE_FILE ("atomic-class.ggs", 32)), GALGAS_typeKind::constructor_colorType (SOURCE_FILE ("atomic-class.ggs", 32))  COMMA_SOURCE_FILE ("atomic-class.ggs", 32))  COMMA_SOURCE_FILE ("atomic-class.ggs", 32)) ;
  ioArgument_ioDeclarationListAST.addAssign_operation (GALGAS_atomicClassDeclarationAST::constructor_new (GALGAS_string ("NSFont").getter_nowhere (SOURCE_FILE ("atomic-class.ggs", 33)), GALGAS_typeKind::constructor_fontType (SOURCE_FILE ("atomic-class.ggs", 33))  COMMA_SOURCE_FILE ("atomic-class.ggs", 33))  COMMA_SOURCE_FILE ("atomic-class.ggs", 33)) ;
  ioArgument_ioDeclarationListAST.addAssign_operation (GALGAS_atomicClassDeclarationAST::constructor_new (GALGAS_string ("Date").getter_nowhere (SOURCE_FILE ("atomic-class.ggs", 34)), GALGAS_typeKind::constructor_dateType (SOURCE_FILE ("atomic-class.ggs", 34))  COMMA_SOURCE_FILE ("atomic-class.ggs", 34))  COMMA_SOURCE_FILE ("atomic-class.ggs", 34)) ;
  ioArgument_ioDeclarationListAST.addAssign_operation (GALGAS_atomicClassDeclarationAST::constructor_new (GALGAS_string ("Data").getter_nowhere (SOURCE_FILE ("atomic-class.ggs", 35)), GALGAS_typeKind::constructor_dataType (SOURCE_FILE ("atomic-class.ggs", 35))  COMMA_SOURCE_FILE ("atomic-class.ggs", 35))  COMMA_SOURCE_FILE ("atomic-class.ggs", 35)) ;
  ioArgument_ioDeclarationListAST.addAssign_operation (GALGAS_atomicClassDeclarationAST::constructor_new (GALGAS_string ("NSBezierPath").getter_nowhere (SOURCE_FILE ("atomic-class.ggs", 36)), GALGAS_typeKind::constructor_bezierPathType (SOURCE_FILE ("atomic-class.ggs", 36))  COMMA_SOURCE_FILE ("atomic-class.ggs", 36))  COMMA_SOURCE_FILE ("atomic-class.ggs", 36)) ;
  ioArgument_ioDeclarationListAST.addAssign_operation (GALGAS_atomicClassDeclarationAST::constructor_new (GALGAS_string ("BezierPathArray").getter_nowhere (SOURCE_FILE ("atomic-class.ggs", 37)), GALGAS_typeKind::constructor_bezierPathArrayType (SOURCE_FILE ("atomic-class.ggs", 37))  COMMA_SOURCE_FILE ("atomic-class.ggs", 37))  COMMA_SOURCE_FILE ("atomic-class.ggs", 37)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@atomicClassDeclarationAST firstAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_atomicClassDeclarationAST::method_firstAnalysisPhase (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_atomicClassDeclarationAST temp_0 = this ;
  const GALGAS_atomicClassDeclarationAST temp_1 = this ;
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (temp_0.readProperty_mClassName (), GALGAS_classKind::constructor_atomic (temp_1.readProperty_mKind ()  COMMA_SOURCE_FILE ("atomic-class.ggs", 50)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("atomic-class.ggs", 51)), GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("atomic-class.ggs", 52)), GALGAS_propertyGenerationList::constructor_emptyList (SOURCE_FILE ("atomic-class.ggs", 53)), inCompiler COMMA_SOURCE_FILE ("atomic-class.ggs", 48)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@entityDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_entityDeclarationAST::method_enterInPrecedenceGraph (GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_entityDeclarationAST temp_0 = this ;
  const GALGAS_entityDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mClassName (), temp_1, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 21)) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_entityDeclarationAST temp_3 = this ;
    test_2 = GALGAS_bool (kIsNotEqual, temp_3.readProperty_mSuperEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      const GALGAS_entityDeclarationAST temp_4 = this ;
      const GALGAS_entityDeclarationAST temp_5 = this ;
      ioArgument_ioGraph.setter_addEdge (temp_4.readProperty_mClassName (), temp_5.readProperty_mSuperEntityName () COMMA_SOURCE_FILE ("entity.ggs", 23)) ;
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@entityDeclarationAST nodeKey'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_entityDeclarationAST::getter_nodeKey (C_Compiler */* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result_result ; // Returned variable
  const GALGAS_entityDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mClassName () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@entityDeclarationAST firstAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_entityDeclarationAST::method_firstAnalysisPhase (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                           GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_actionMap var_actionMap_5397 ;
  {
  const GALGAS_entityDeclarationAST temp_0 = this ;
  routine_buildActionMap (temp_0.readProperty_mActionDeclarationList (), var_actionMap_5397, inCompiler  COMMA_SOURCE_FILE ("entity.ggs", 159)) ;
  }
  {
  const GALGAS_entityDeclarationAST temp_1 = this ;
  const GALGAS_entityDeclarationAST temp_2 = this ;
  const GALGAS_entityDeclarationAST temp_3 = this ;
  const GALGAS_entityDeclarationAST temp_4 = this ;
  const GALGAS_entityDeclarationAST temp_5 = this ;
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (temp_1.readProperty_mClassName (), GALGAS_classKind::constructor_entity (temp_2.readProperty_mSuperEntityName ().readProperty_string (), temp_3.readProperty_mIsGraphicEntity (), temp_4.readProperty_mIsAbstract (), temp_5.readProperty_mHandlingOpposite ()  COMMA_SOURCE_FILE ("entity.ggs", 162)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("entity.ggs", 168)), var_actionMap_5397, GALGAS_propertyGenerationList::constructor_emptyList (SOURCE_FILE ("entity.ggs", 170)), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 160)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@entityDeclarationAST secondAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_entityDeclarationAST::method_secondAnalysisPhase (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                            GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_entityDeclarationAST temp_1 = this ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.readProperty_mSuperEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_propertyMap var_inheritedPropertyMap_6230 ;
      const GALGAS_entityDeclarationAST temp_2 = this ;
      GALGAS_classKind joker_6184 ; // Joker input parameter
      GALGAS_actionMap joker_6238_2 ; // Joker input parameter
      GALGAS_propertyGenerationList joker_6238_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_2.readProperty_mSuperEntityName (), joker_6184, var_inheritedPropertyMap_6230, joker_6238_2, joker_6238_1, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 180)) ;
      GALGAS_propertyMap var_propertyMap_6405 ;
      const GALGAS_entityDeclarationAST temp_3 = this ;
      GALGAS_classKind joker_6368 ; // Joker input parameter
      GALGAS_actionMap joker_6413_2 ; // Joker input parameter
      GALGAS_propertyGenerationList joker_6413_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_3.readProperty_mClassName (), joker_6368, var_propertyMap_6405, joker_6413_2, joker_6413_1, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 187)) ;
      GALGAS_propertyMap var_newPropertyMap_6468 = var_inheritedPropertyMap_6230 ;
      cEnumerator_propertyMap enumerator_6634 (var_propertyMap_6405, kENUMERATION_UP) ;
      while (enumerator_6634.hasCurrentObject ()) {
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = enumerator_6634.current_mIsOverriding (HERE).boolEnum () ;
          if (kBoolTrue == test_4) {
            GALGAS_propertyKind joker_6728_3 ; // Joker input parameter
            GALGAS_actionMap joker_6728_2 ; // Joker input parameter
            GALGAS_bool joker_6728_1 ; // Joker input parameter
            var_inheritedPropertyMap_6230.method_searchKey (enumerator_6634.current_lkey (HERE), joker_6728_3, joker_6728_2, joker_6728_1, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 200)) ;
          }
        }
        if (kBoolFalse == test_4) {
          {
          var_newPropertyMap_6468.setter_insertKey (enumerator_6634.current_lkey (HERE), enumerator_6634.current_mKind (HERE), enumerator_6634.current_mActionMap (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 203)) ;
          }
        }
        enumerator_6634.gotoNextObject () ;
      }
      const GALGAS_entityDeclarationAST temp_5 = this ;
      cMapElement_classMap * objectArray_6909 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_5.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("entity.ggs", 207)) ;
      if (NULL != objectArray_6909) {
        macroValidSharedObject (objectArray_6909, cMapElement_classMap) ;
        objectArray_6909->mProperty_mPropertyMap = var_newPropertyMap_6468 ;
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@entityDeclarationAST fourthAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_entityDeclarationAST::method_fourthAnalysisPhase (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                            GALGAS_generationStruct & ioArgument_ioGeneration,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyMap var_propertyMap_7461 ;
  GALGAS_propertyGenerationList var_propertyGenerationList_7524 ;
  const GALGAS_entityDeclarationAST temp_0 = this ;
  GALGAS_classKind joker_7426 ; // Joker input parameter
  GALGAS_actionMap joker_7467 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_0.readProperty_mClassName (), joker_7426, var_propertyMap_7461, joker_7467, var_propertyGenerationList_7524, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 219)) ;
  GALGAS_stringset var_overridenTransients_7666 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("entity.ggs", 227)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_entityDeclarationAST temp_2 = this ;
    const GALGAS_entityDeclarationAST temp_3 = this ;
    test_1 = GALGAS_bool (kIsNotEqual, temp_2.readProperty_mSuperEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).operator_and (temp_3.readProperty_mIsAbstract ().operator_not (SOURCE_FILE ("entity.ggs", 228)) COMMA_SOURCE_FILE ("entity.ggs", 228)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_classKind var_superClassKind_7850 ;
      GALGAS_propertyMap var_superPropertyMap_7891 ;
      const GALGAS_entityDeclarationAST temp_4 = this ;
      GALGAS_actionMap joker_7899_2 ; // Joker input parameter
      GALGAS_propertyGenerationList joker_7899_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_4.readProperty_mSuperEntityName (), var_superClassKind_7850, var_superPropertyMap_7891, joker_7899_2, joker_7899_1, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 229)) ;
      switch (var_superClassKind_7850.enumValue ()) {
      case GALGAS_classKind::kNotBuilt:
        break ;
      case GALGAS_classKind::kEnum_prefs:
        {
          const GALGAS_entityDeclarationAST temp_5 = this ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mSuperEntityName ().readProperty_location (), GALGAS_string ("prefs cannot be a super entity"), fixItArray6  COMMA_SOURCE_FILE ("entity.ggs", 237)) ;
        }
        break ;
      case GALGAS_classKind::kEnum_atomic:
        {
          const GALGAS_entityDeclarationAST temp_7 = this ;
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_7.readProperty_mSuperEntityName ().readProperty_location (), GALGAS_string ("an atomic class cannot be a super entity"), fixItArray8  COMMA_SOURCE_FILE ("entity.ggs", 239)) ;
        }
        break ;
      case GALGAS_classKind::kEnum_document:
        {
          const GALGAS_entityDeclarationAST temp_9 = this ;
          TC_Array <C_FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (temp_9.readProperty_mSuperEntityName ().readProperty_location (), GALGAS_string ("a document cannot be a super entity"), fixItArray10  COMMA_SOURCE_FILE ("entity.ggs", 241)) ;
        }
        break ;
      case GALGAS_classKind::kEnum_entity:
        {
          const cEnumAssociatedValues_classKind_entity * extractPtr_9429 = (const cEnumAssociatedValues_classKind_entity *) (var_superClassKind_7850.unsafePointer ()) ;
          const GALGAS_bool extractedValue_8253_isGraphic = extractPtr_9429->mAssociatedValue1 ;
          const GALGAS_bool extractedValue_8270_isAbstract = extractPtr_9429->mAssociatedValue2 ;
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            const GALGAS_entityDeclarationAST temp_12 = this ;
            test_11 = extractedValue_8253_isGraphic.operator_and (temp_12.readProperty_mIsGraphicEntity ().operator_not (SOURCE_FILE ("entity.ggs", 243)) COMMA_SOURCE_FILE ("entity.ggs", 243)).boolEnum () ;
            if (kBoolTrue == test_11) {
              const GALGAS_entityDeclarationAST temp_13 = this ;
              TC_Array <C_FixItDescription> fixItArray14 ;
              inCompiler->emitSemanticError (temp_13.readProperty_mClassName ().readProperty_location (), GALGAS_string ("this entity should be declared with 'graphic', as super entity is graphic"), fixItArray14  COMMA_SOURCE_FILE ("entity.ggs", 244)) ;
            }
          }
          enumGalgasBool test_15 = kBoolTrue ;
          if (kBoolTrue == test_15) {
            const GALGAS_entityDeclarationAST temp_16 = this ;
            test_15 = extractedValue_8270_isAbstract.operator_and (temp_16.readProperty_mIsAbstract ().operator_not (SOURCE_FILE ("entity.ggs", 246)) COMMA_SOURCE_FILE ("entity.ggs", 246)).boolEnum () ;
            if (kBoolTrue == test_15) {
              cEnumerator_propertyMap enumerator_8583 (var_superPropertyMap_7891, kENUMERATION_UP) ;
              while (enumerator_8583.hasCurrentObject ()) {
                enumGalgasBool test_17 = kBoolTrue ;
                if (kBoolTrue == test_17) {
                  test_17 = extensionGetter_isAbstract (enumerator_8583.current (HERE), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 248)).boolEnum () ;
                  if (kBoolTrue == test_17) {
                    enumGalgasBool test_18 = kBoolTrue ;
                    if (kBoolTrue == test_18) {
                      test_18 = var_propertyMap_7461.getter_hasKey (enumerator_8583.current (HERE).readProperty_lkey ().readProperty_string () COMMA_SOURCE_FILE ("entity.ggs", 249)).boolEnum () ;
                      if (kBoolTrue == test_18) {
                        var_overridenTransients_7666.addAssign_operation (enumerator_8583.current (HERE).readProperty_lkey ().readProperty_string ()  COMMA_SOURCE_FILE ("entity.ggs", 250)) ;
                        GALGAS_propertyKind var_propertyKind_8852 ;
                        GALGAS_actionMap joker_8854_2 ; // Joker input parameter
                        GALGAS_bool joker_8854_1 ; // Joker input parameter
                        var_propertyMap_7461.method_searchKey (enumerator_8583.current (HERE).readProperty_lkey (), var_propertyKind_8852, joker_8854_2, joker_8854_1, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 251)) ;
                        GALGAS_string var_typeName_8884 = extensionGetter_typeName (var_propertyKind_8852, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 252)) ;
                        GALGAS_string var_superTypeName_8942 = extensionGetter_typeName (enumerator_8583.current (HERE).readProperty_mKind (), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 253)) ;
                        enumGalgasBool test_19 = kBoolTrue ;
                        if (kBoolTrue == test_19) {
                          test_19 = GALGAS_bool (kIsNotEqual, var_typeName_8884.objectCompare (var_superTypeName_8942)).boolEnum () ;
                          if (kBoolTrue == test_19) {
                            TC_Array <C_FixItDescription> fixItArray20 ;
                            inCompiler->emitSemanticError (var_propertyMap_7461.getter_locationForKey (enumerator_8583.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 255)), GALGAS_string ("type '").add_operation (var_superTypeName_8942, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 256)).add_operation (GALGAS_string ("' is required by declaration in super entity"), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 256)), fixItArray20  COMMA_SOURCE_FILE ("entity.ggs", 255)) ;
                          }
                        }
                      }
                    }
                    if (kBoolFalse == test_18) {
                      const GALGAS_entityDeclarationAST temp_21 = this ;
                      TC_Array <C_FixItDescription> fixItArray22 ;
                      inCompiler->emitSemanticError (temp_21.readProperty_mClassName ().readProperty_location (), GALGAS_string ("transient '").add_operation (enumerator_8583.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 260)).add_operation (GALGAS_string ("' should be defined, it is declared abstract in super entity"), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 260)), fixItArray22  COMMA_SOURCE_FILE ("entity.ggs", 259)) ;
                    }
                  }
                }
                enumerator_8583.gotoNextObject () ;
              }
            }
          }
        }
        break ;
      }
    }
  }
  GALGAS_bool var_canCopyAndPaste_5F_option_9493 = GALGAS_bool (false) ;
  GALGAS_bool var_cannotBeDeleted_5F_option_9530 = GALGAS_bool (false) ;
  const GALGAS_entityDeclarationAST temp_23 = this ;
  cEnumerator_lstringlist enumerator_9562 (temp_23.readProperty_mGraphicOptionArray (), kENUMERATION_UP) ;
  while (enumerator_9562.hasCurrentObject ()) {
    enumGalgasBool test_24 = kBoolTrue ;
    if (kBoolTrue == test_24) {
      test_24 = GALGAS_bool (kIsEqual, enumerator_9562.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("canCopyAndPaste"))).boolEnum () ;
      if (kBoolTrue == test_24) {
        enumGalgasBool test_25 = kBoolTrue ;
        if (kBoolTrue == test_25) {
          test_25 = var_canCopyAndPaste_5F_option_9493.boolEnum () ;
          if (kBoolTrue == test_25) {
            TC_Array <C_FixItDescription> fixItArray26 ;
            inCompiler->emitSemanticError (enumerator_9562.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated option"), fixItArray26  COMMA_SOURCE_FILE ("entity.ggs", 274)) ;
          }
        }
        var_canCopyAndPaste_5F_option_9493 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_24) {
      enumGalgasBool test_27 = kBoolTrue ;
      if (kBoolTrue == test_27) {
        test_27 = GALGAS_bool (kIsEqual, enumerator_9562.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("cannotBeDeleted"))).boolEnum () ;
        if (kBoolTrue == test_27) {
          enumGalgasBool test_28 = kBoolTrue ;
          if (kBoolTrue == test_28) {
            test_28 = var_cannotBeDeleted_5F_option_9530.boolEnum () ;
            if (kBoolTrue == test_28) {
              TC_Array <C_FixItDescription> fixItArray29 ;
              inCompiler->emitSemanticError (enumerator_9562.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated option"), fixItArray29  COMMA_SOURCE_FILE ("entity.ggs", 279)) ;
            }
          }
          var_cannotBeDeleted_5F_option_9530 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_27) {
        TC_Array <C_FixItDescription> fixItArray30 ;
        appendFixItActions (fixItArray30, kFixItReplace, GALGAS_string ("acceptedTranslation")) ;
        appendFixItActions (fixItArray30, kFixItReplace, GALGAS_string ("canCopyAndPaste")) ;
        appendFixItActions (fixItArray30, kFixItReplace, GALGAS_string ("cannotBeDeleted")) ;
        inCompiler->emitSemanticError (enumerator_9562.current_mValue (HERE).readProperty_location (), GALGAS_string ("unkown graphic option"), fixItArray30  COMMA_SOURCE_FILE ("entity.ggs", 283)) ;
      }
    }
    enumerator_9562.gotoNextObject () ;
  }
  GALGAS_bool var_hasSubClass_10215 = GALGAS_bool (false) ;
  cEnumerator_classMap enumerator_10277 (ioArgument_ioSemanticContext.readProperty_mClassMap (), kENUMERATION_UP) ;
  bool bool_31 = var_hasSubClass_10215.operator_not (SOURCE_FILE ("entity.ggs", 292)).isValidAndTrue () ;
  if (enumerator_10277.hasCurrentObject () && bool_31) {
    while (enumerator_10277.hasCurrentObject () && bool_31) {
      enumGalgasBool test_32 = kBoolTrue ;
      if (kBoolTrue == test_32) {
        test_32 = enumerator_10277.current (HERE).readProperty_mClassKind ().getter_isEntity (SOURCE_FILE ("entity.ggs", 293)).boolEnum () ;
        if (kBoolTrue == test_32) {
          GALGAS_string var_superEntityName_10433 ;
          GALGAS_bool joker_10435_3 ; // Joker input parameter
          GALGAS_bool joker_10435_2 ; // Joker input parameter
          GALGAS_bool joker_10435_1 ; // Joker input parameter
          enumerator_10277.current (HERE).readProperty_mClassKind ().method_entity (var_superEntityName_10433, joker_10435_3, joker_10435_2, joker_10435_1, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 294)) ;
          const GALGAS_entityDeclarationAST temp_33 = this ;
          var_hasSubClass_10215 = GALGAS_bool (kIsEqual, temp_33.readProperty_mClassName ().readProperty_string ().objectCompare (var_superEntityName_10433)) ;
        }
      }
      enumerator_10277.gotoNextObject () ;
      if (enumerator_10277.hasCurrentObject ()) {
        bool_31 = var_hasSubClass_10215.operator_not (SOURCE_FILE ("entity.ggs", 292)).isValidAndTrue () ;
      }
    }
  }
  const GALGAS_entityDeclarationAST temp_34 = this ;
  const GALGAS_entityDeclarationAST temp_35 = this ;
  ioArgument_ioGeneration.mProperty_mEntityListForGeneration.addAssign_operation (temp_34.readProperty_mClassName ().readProperty_string (), temp_35.readProperty_mObsoleteEntityNames ()  COMMA_SOURCE_FILE ("entity.ggs", 299)) ;
  const GALGAS_entityDeclarationAST temp_36 = this ;
  const GALGAS_entityDeclarationAST temp_37 = this ;
  const GALGAS_entityDeclarationAST temp_38 = this ;
  const GALGAS_entityDeclarationAST temp_39 = this ;
  const GALGAS_entityDeclarationAST temp_40 = this ;
  const GALGAS_entityDeclarationAST temp_41 = this ;
  const GALGAS_entityDeclarationAST temp_42 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_entityForGeneration::constructor_new (temp_36.readProperty_mClassName ().readProperty_string (), temp_37.readProperty_mSuperEntityName ().readProperty_string (), temp_38.readProperty_mHandlingOpposite (), var_propertyGenerationList_7524, temp_39.readProperty_mSignatureList (), temp_40.readProperty_mIsGraphicEntity (), temp_41.readProperty_mIsAbstract (), var_overridenTransients_7666, temp_42.readProperty_mExternSwiftDelegateList (), var_hasSubClass_10215, var_canCopyAndPaste_5F_option_9493, var_cannotBeDeleted_5F_option_9530  COMMA_SOURCE_FILE ("entity.ggs", 302))  COMMA_SOURCE_FILE ("entity.ggs", 302)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@entityForGeneration generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_entityForGeneration::method_generateCode (const GALGAS_string constinArgument_inOutputDirectory,
                                                    const GALGAS_generationStruct constinArgument_inGenerationStruct,
                                                    GALGAS_stringset & ioArgument_ioGeneratedFileSet,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_atomicPropertyGenerationList var_atomicPropertyGenerationList_13039 = GALGAS_atomicPropertyGenerationList::constructor_emptyList (SOURCE_FILE ("entity.ggs", 357)) ;
  GALGAS_transientPropertyGenerationList var_transientPropertyGenerationList_13115 = GALGAS_transientPropertyGenerationList::constructor_emptyList (SOURCE_FILE ("entity.ggs", 358)) ;
  GALGAS_computedPropertyGenerationList var_computedPropertyGenerationList_13189 = GALGAS_computedPropertyGenerationList::constructor_emptyList (SOURCE_FILE ("entity.ggs", 359)) ;
  GALGAS_toOnePropertyGenerationList var_toOnePropertyGenerationList_13257 = GALGAS_toOnePropertyGenerationList::constructor_emptyList (SOURCE_FILE ("entity.ggs", 360)) ;
  GALGAS_toManyPropertyGenerationList var_toManyPropertyGenerationList_13327 = GALGAS_toManyPropertyGenerationList::constructor_emptyList (SOURCE_FILE ("entity.ggs", 361)) ;
  GALGAS_atomicProxyGenerationList var_proxyGenerationList_13385 = GALGAS_atomicProxyGenerationList::constructor_emptyList (SOURCE_FILE ("entity.ggs", 362)) ;
  GALGAS_toManyProxyGenerationList var_toManyProxyGenerationList_13449 = GALGAS_toManyProxyGenerationList::constructor_emptyList (SOURCE_FILE ("entity.ggs", 363)) ;
  const GALGAS_entityForGeneration temp_0 = this ;
  cEnumerator_propertyGenerationList enumerator_13470 (temp_0.readProperty_mPropertyGenerationList (), kENUMERATION_UP) ;
  while (enumerator_13470.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      GALGAS_atomicPropertyGeneration var_atomicProperty_13532 (dynamic_cast <const cPtr_atomicPropertyGeneration *> (enumerator_13470.current_mProperty (HERE).ptr ())) ;
      if (NULL == var_atomicProperty_13532.ptr ()) {
        test_1 = kBoolFalse ;
      }
      if (kBoolTrue == test_1) {
        var_atomicPropertyGenerationList_13039.addAssign_operation (var_atomicProperty_13532  COMMA_SOURCE_FILE ("entity.ggs", 366)) ;
      }
    }
    if (kBoolFalse == test_1) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_transientPropertyGeneration var_transientProperty_13663 (dynamic_cast <const cPtr_transientPropertyGeneration *> (enumerator_13470.current_mProperty (HERE).ptr ())) ;
        if (NULL == var_transientProperty_13663.ptr ()) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          var_transientPropertyGenerationList_13115.addAssign_operation (var_transientProperty_13663  COMMA_SOURCE_FILE ("entity.ggs", 368)) ;
        }
      }
      if (kBoolFalse == test_2) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          GALGAS_computedPropertyGeneration var_computedProperty_13802 (dynamic_cast <const cPtr_computedPropertyGeneration *> (enumerator_13470.current_mProperty (HERE).ptr ())) ;
          if (NULL == var_computedProperty_13802.ptr ()) {
            test_3 = kBoolFalse ;
          }
          if (kBoolTrue == test_3) {
            var_computedPropertyGenerationList_13189.addAssign_operation (var_computedProperty_13802  COMMA_SOURCE_FILE ("entity.ggs", 370)) ;
          }
        }
        if (kBoolFalse == test_3) {
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            GALGAS_toManyProxyGeneration var_toManyProxy_13933 (dynamic_cast <const cPtr_toManyProxyGeneration *> (enumerator_13470.current_mProperty (HERE).ptr ())) ;
            if (NULL == var_toManyProxy_13933.ptr ()) {
              test_4 = kBoolFalse ;
            }
            if (kBoolTrue == test_4) {
              var_toManyProxyGenerationList_13449.addAssign_operation (var_toManyProxy_13933  COMMA_SOURCE_FILE ("entity.ggs", 372)) ;
            }
          }
          if (kBoolFalse == test_4) {
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              GALGAS_atomicProxyGeneration var_proxyProperty_14051 (dynamic_cast <const cPtr_atomicProxyGeneration *> (enumerator_13470.current_mProperty (HERE).ptr ())) ;
              if (NULL == var_proxyProperty_14051.ptr ()) {
                test_5 = kBoolFalse ;
              }
              if (kBoolTrue == test_5) {
                var_proxyGenerationList_13385.addAssign_operation (var_proxyProperty_14051  COMMA_SOURCE_FILE ("entity.ggs", 374)) ;
              }
            }
            if (kBoolFalse == test_5) {
              enumGalgasBool test_6 = kBoolTrue ;
              if (kBoolTrue == test_6) {
                GALGAS_toOnePropertyGeneration var_toOneProperty_14165 (dynamic_cast <const cPtr_toOnePropertyGeneration *> (enumerator_13470.current_mProperty (HERE).ptr ())) ;
                if (NULL == var_toOneProperty_14165.ptr ()) {
                  test_6 = kBoolFalse ;
                }
                if (kBoolTrue == test_6) {
                  var_toOnePropertyGenerationList_13257.addAssign_operation (var_toOneProperty_14165  COMMA_SOURCE_FILE ("entity.ggs", 376)) ;
                }
              }
              if (kBoolFalse == test_6) {
                enumGalgasBool test_7 = kBoolTrue ;
                if (kBoolTrue == test_7) {
                  GALGAS_toManyPropertyGeneration var_toOneProperty_14289 (dynamic_cast <const cPtr_toManyPropertyGeneration *> (enumerator_13470.current_mProperty (HERE).ptr ())) ;
                  if (NULL == var_toOneProperty_14289.ptr ()) {
                    test_7 = kBoolFalse ;
                  }
                  if (kBoolTrue == test_7) {
                    var_toManyPropertyGenerationList_13327.addAssign_operation (var_toOneProperty_14289  COMMA_SOURCE_FILE ("entity.ggs", 378)) ;
                  }
                }
              }
            }
          }
        }
      }
    }
    enumerator_13470.gotoNextObject () ;
  }
  GALGAS_string var_superEntityName_14423 = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    const GALGAS_entityForGeneration temp_9 = this ;
    test_8 = GALGAS_bool (kIsNotEqual, temp_9.readProperty_mSuperEntityName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_entityForGeneration temp_10 = this ;
      var_superEntityName_14423 = temp_10.readProperty_mSuperEntityName () ;
    }
  }
  if (kBoolFalse == test_8) {
    enumGalgasBool test_11 = kBoolTrue ;
    if (kBoolTrue == test_11) {
      const GALGAS_entityForGeneration temp_12 = this ;
      test_11 = temp_12.readProperty_mIsGraphicEntity ().boolEnum () ;
      if (kBoolTrue == test_11) {
        var_superEntityName_14423 = GALGAS_string ("EBGraphicManagedObject") ;
      }
    }
    if (kBoolFalse == test_11) {
      var_superEntityName_14423 = GALGAS_string ("EBManagedObject") ;
    }
  }
  const GALGAS_entityForGeneration temp_13 = this ;
  const GALGAS_entityForGeneration temp_14 = this ;
  const GALGAS_entityForGeneration temp_15 = this ;
  const GALGAS_entityForGeneration temp_16 = this ;
  const GALGAS_entityForGeneration temp_17 = this ;
  const GALGAS_entityForGeneration temp_18 = this ;
  const GALGAS_entityForGeneration temp_19 = this ;
  const GALGAS_entityForGeneration temp_20 = this ;
  const GALGAS_entityForGeneration temp_21 = this ;
  const GALGAS_entityForGeneration temp_22 = this ;
  GALGAS_string var_s_14653 = GALGAS_string (filewrapperTemplate_entityGenerationTemplate_entityImplementationInSwift (inCompiler, temp_13.readProperty_mEntityName (), var_superEntityName_14423, temp_14.readProperty_mPropertyGenerationList (), var_proxyGenerationList_13385, var_toManyProxyGenerationList_13449, var_atomicPropertyGenerationList_13039, var_transientPropertyGenerationList_13115, var_computedPropertyGenerationList_13189, var_toOnePropertyGenerationList_13257, var_toManyPropertyGenerationList_13327, temp_15.readProperty_mSignatureSet (), temp_16.readProperty_mIsGraphicEntity (), temp_17.readProperty_mIsAbstract (), temp_18.readProperty_mOverridenTransients (), temp_19.readProperty_mExternSwiftDelegateList (), temp_20.readProperty_mHasSubEntity (), temp_21.readProperty_mCanCopyAndPaste_5F_option (), temp_22.readProperty_mCannotBeDeleted_5F_option () COMMA_SOURCE_FILE ("entity.ggs", 389))) ;
  const GALGAS_entityForGeneration temp_23 = this ;
  GALGAS_string var_fileName_15278 = GALGAS_string ("entity-").add_operation (temp_23.readProperty_mEntityName (), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 409)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 409)) ;
  ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_15278  COMMA_SOURCE_FILE ("entity.ggs", 410)) ;
  {
  GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_15278, var_s_14653, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 411)) ;
  }
  enumGalgasBool test_24 = kBoolTrue ;
  if (kBoolTrue == test_24) {
    const GALGAS_entityForGeneration temp_25 = this ;
    test_24 = constinArgument_inGenerationStruct.readProperty_mToOneClassImplementations ().getter_hasKey (temp_25.readProperty_mEntityName () COMMA_SOURCE_FILE ("entity.ggs", 416)).boolEnum () ;
    if (kBoolTrue == test_24) {
      const GALGAS_entityForGeneration temp_26 = this ;
      const GALGAS_entityForGeneration temp_27 = this ;
      const GALGAS_entityForGeneration temp_28 = this ;
      const GALGAS_entityForGeneration temp_29 = this ;
      const GALGAS_entityForGeneration temp_30 = this ;
      const GALGAS_entityForGeneration temp_31 = this ;
      const GALGAS_entityForGeneration temp_32 = this ;
      const GALGAS_entityForGeneration temp_33 = this ;
      var_s_14653 = GALGAS_string (filewrapperTemplate_entityGenerationTemplate_entityToOneImplementationInSwift (inCompiler, temp_26.readProperty_mEntityName (), var_superEntityName_14423, temp_27.readProperty_mHandlingOpposite (), temp_28.readProperty_mPropertyGenerationList (), var_proxyGenerationList_13385, var_toManyProxyGenerationList_13449, var_atomicPropertyGenerationList_13039, var_transientPropertyGenerationList_13115, var_computedPropertyGenerationList_13189, var_toOnePropertyGenerationList_13257, var_toManyPropertyGenerationList_13327, temp_29.readProperty_mSignatureSet (), temp_30.readProperty_mIsGraphicEntity (), temp_31.readProperty_mIsAbstract (), temp_32.readProperty_mOverridenTransients (), temp_33.readProperty_mExternSwiftDelegateList () COMMA_SOURCE_FILE ("entity.ggs", 417))) ;
    }
  }
  if (kBoolFalse == test_24) {
    var_s_14653 = GALGAS_string ("// Unused code, not generated by EasyBinding compiler\n") ;
  }
  const GALGAS_entityForGeneration temp_34 = this ;
  var_fileName_15278 = GALGAS_string ("toone-").add_operation (temp_34.readProperty_mEntityName (), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 438)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 438)) ;
  ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_15278  COMMA_SOURCE_FILE ("entity.ggs", 439)) ;
  {
  GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_15278, var_s_14653, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 440)) ;
  }
  enumGalgasBool test_35 = kBoolTrue ;
  if (kBoolTrue == test_35) {
    const GALGAS_entityForGeneration temp_36 = this ;
    test_35 = constinArgument_inGenerationStruct.readProperty_mToManyClassImplementations ().getter_hasKey (temp_36.readProperty_mEntityName () COMMA_SOURCE_FILE ("entity.ggs", 445)).boolEnum () ;
    if (kBoolTrue == test_35) {
      const GALGAS_entityForGeneration temp_37 = this ;
      const GALGAS_entityForGeneration temp_38 = this ;
      const GALGAS_entityForGeneration temp_39 = this ;
      const GALGAS_entityForGeneration temp_40 = this ;
      const GALGAS_entityForGeneration temp_41 = this ;
      const GALGAS_entityForGeneration temp_42 = this ;
      const GALGAS_entityForGeneration temp_43 = this ;
      const GALGAS_entityForGeneration temp_44 = this ;
      const GALGAS_entityForGeneration temp_45 = this ;
      const GALGAS_entityForGeneration temp_46 = this ;
      const GALGAS_entityForGeneration temp_47 = this ;
      const GALGAS_entityForGeneration temp_48 = this ;
      const GALGAS_entityForGeneration temp_49 = this ;
      var_s_14653 = GALGAS_string (filewrapperTemplate_entityGenerationTemplate_entityToManyImplementationInSwift (inCompiler, temp_37.readProperty_mEntityName (), var_superEntityName_14423, temp_38.readProperty_mHandlingOpposite (), temp_39.readProperty_mPropertyGenerationList (), var_proxyGenerationList_13385, var_toManyProxyGenerationList_13449, var_atomicPropertyGenerationList_13039, var_transientPropertyGenerationList_13115, var_computedPropertyGenerationList_13189, var_toOnePropertyGenerationList_13257, var_toManyPropertyGenerationList_13327, temp_40.readProperty_mSignatureSet (), temp_41.readProperty_mIsGraphicEntity (), temp_42.readProperty_mIsAbstract (), temp_43.readProperty_mOverridenTransients (), temp_44.readProperty_mExternSwiftDelegateList (), constinArgument_inGenerationStruct.readProperty_mGenerateClass_5F_PreferencesArrayOf_5F_ ().getter_hasKey (temp_45.readProperty_mEntityName () COMMA_SOURCE_FILE ("entity.ggs", 463)), constinArgument_inGenerationStruct.readProperty_mGenerateClass_5F_ProxyArrayOf_5F_ ().getter_hasKey (temp_46.readProperty_mEntityName () COMMA_SOURCE_FILE ("entity.ggs", 464)), constinArgument_inGenerationStruct.readProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_ ().getter_hasKey (temp_47.readProperty_mEntityName () COMMA_SOURCE_FILE ("entity.ggs", 465)), constinArgument_inGenerationStruct.readProperty_mGenerateClass_5F_TransientArrayOf_5F_ ().getter_hasKey (temp_48.readProperty_mEntityName () COMMA_SOURCE_FILE ("entity.ggs", 466)), constinArgument_inGenerationStruct.readProperty_mGenerateClass_5F_StoredArrayOf_5F_ ().getter_hasKey (temp_49.readProperty_mEntityName () COMMA_SOURCE_FILE ("entity.ggs", 467)) COMMA_SOURCE_FILE ("entity.ggs", 446))) ;
    }
  }
  if (kBoolFalse == test_35) {
    var_s_14653 = GALGAS_string ("// Unused code, not generated by EasyBinding compiler\n") ;
  }
  const GALGAS_entityForGeneration temp_50 = this ;
  var_fileName_15278 = GALGAS_string ("tomany-").add_operation (temp_50.readProperty_mEntityName (), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 472)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 472)) ;
  ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_15278  COMMA_SOURCE_FILE ("entity.ggs", 473)) ;
  {
  GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_15278, var_s_14653, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 474)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateEBManagedObjectContext'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateEBManagedObjectContext (const GALGAS_entityListForGeneratingEBManagedObjectContext constinArgument_inEntityListForGeneration,
                                             const GALGAS_string constinArgument_inOutputDirectory,
                                             GALGAS_stringset & ioArgument_ioGeneratedFileSet,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, constinArgument_inEntityListForGeneration.getter_length (SOURCE_FILE ("entity.ggs", 488)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_fileName_18061 = GALGAS_string ("EBManagedObjectFactory.swift") ;
      ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_18061  COMMA_SOURCE_FILE ("entity.ggs", 490)) ;
      GALGAS_string var_s_18140 = GALGAS_string (filewrapperTemplate_entityGenerationTemplate_managedObjectFactory (inCompiler, constinArgument_inEntityListForGeneration COMMA_SOURCE_FILE ("entity.ggs", 491))) ;
      {
      GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_18061, var_s_18140, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 494)) ;
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'entityGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of 'indexes' directory

static const cRegularFileWrapper * gWrapperAllFiles_entityGenerationTemplate_4 [1] = {
  NULL
} ;

//--- All sub-directories of 'indexes' directory

static const cDirectoryWrapper * gWrapperAllDirectories_entityGenerationTemplate_4 [1] = {
  NULL
} ;

//--- Directory 'indexes'

const cDirectoryWrapper gWrapperDirectory_4_entityGenerationTemplate (
  "indexes",
  0,
  gWrapperAllFiles_entityGenerationTemplate_4,
  0,
  gWrapperAllDirectories_entityGenerationTemplate_4
) ;

//--- All files of 'build' directory

static const cRegularFileWrapper * gWrapperAllFiles_entityGenerationTemplate_3 [1] = {
  NULL
} ;

//--- All sub-directories of 'build' directory

static const cDirectoryWrapper * gWrapperAllDirectories_entityGenerationTemplate_3 [2] = {
  & gWrapperDirectory_4_entityGenerationTemplate,
  NULL
} ;

//--- Directory 'build'

const cDirectoryWrapper gWrapperDirectory_3_entityGenerationTemplate (
  "build",
  0,
  gWrapperAllFiles_entityGenerationTemplate_3,
  1,
  gWrapperAllDirectories_entityGenerationTemplate_3
) ;

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_entityGenerationTemplate_5 [1] = {
  NULL
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_entityGenerationTemplate_5 [1] = {
  NULL
} ;

//--- Directory 'controllers'

const cDirectoryWrapper gWrapperDirectory_5_entityGenerationTemplate (
  "controllers",
  0,
  gWrapperAllFiles_entityGenerationTemplate_5,
  0,
  gWrapperAllDirectories_entityGenerationTemplate_5
) ;

//--- All files of 'standard-properties' directory

static const cRegularFileWrapper * gWrapperAllFiles_entityGenerationTemplate_1 [1] = {
  NULL
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_entityGenerationTemplate_1 [1] = {
  NULL
} ;

//--- Directory 'standard-properties'

const cDirectoryWrapper gWrapperDirectory_1_entityGenerationTemplate (
  "standard-properties",
  0,
  gWrapperAllFiles_entityGenerationTemplate_1,
  0,
  gWrapperAllDirectories_entityGenerationTemplate_1
) ;

//--- All files of 'xcode-project' directory

static const cRegularFileWrapper * gWrapperAllFiles_entityGenerationTemplate_2 [1] = {
  NULL
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_entityGenerationTemplate_2 [1] = {
  NULL
} ;

//--- Directory 'xcode-project'

const cDirectoryWrapper gWrapperDirectory_2_entityGenerationTemplate (
  "xcode-project",
  0,
  gWrapperAllFiles_entityGenerationTemplate_2,
  0,
  gWrapperAllDirectories_entityGenerationTemplate_2
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_entityGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_entityGenerationTemplate_0 [5] = {
  & gWrapperDirectory_3_entityGenerationTemplate,
  & gWrapperDirectory_5_entityGenerationTemplate,
  & gWrapperDirectory_1_entityGenerationTemplate,
  & gWrapperDirectory_2_entityGenerationTemplate,
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_entityGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_entityGenerationTemplate_0,
  4,
  gWrapperAllDirectories_entityGenerationTemplate_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'entityGenerationTemplate entityImplementationInSwift'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_entityGenerationTemplate_entityImplementationInSwift (C_Compiler * inCompiler,
                                                                                        const GALGAS_string & in_ENTITY_5F_NAME,
                                                                                        const GALGAS_string & in_SUPER_5F_CLASS_5F_NAME,
                                                                                        const GALGAS_propertyGenerationList & in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                        const GALGAS_atomicProxyGenerationList & in_PROXY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                        const GALGAS_toManyProxyGenerationList & /* in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION */,
                                                                                        const GALGAS_atomicPropertyGenerationList & in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                        const GALGAS_transientPropertyGenerationList & in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                        const GALGAS_computedPropertyGenerationList & /* in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION */,
                                                                                        const GALGAS_toOnePropertyGenerationList & in_TO_5F_ONE_5F_RELATIONSHIP_5F_LIST,
                                                                                        const GALGAS_toManyPropertyGenerationList & in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST,
                                                                                        const GALGAS_stringset & in_SIGNATURE_5F_SET,
                                                                                        const GALGAS_bool & in_IS_5F_GRAPHIC_5F_ENTITY,
                                                                                        const GALGAS_bool & in_IS_5F_ABSTRACT,
                                                                                        const GALGAS_stringset & in_OVERRIDEN_5F_TRANSIENTS,
                                                                                        const GALGAS_externSwiftDelegateList & in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                        const GALGAS_bool & in_HAS_5F_SUB_5F_ENTITY,
                                                                                        const GALGAS_bool & in_OPTION_5F_CanCopyAndPaste,
                                                                                        const GALGAS_bool & in_OPTION_5F_CannotBeDeleted
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nimport AppKit\n\n" ;
  GALGAS_uint index_385_ (0) ;
  if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_atomicPropertyGenerationList enumerator_385 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_385.hasCurrentObject ()) {
      result << "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\n@MainActor protocol " ;
      result << in_ENTITY_5F_NAME.stringValue () ;
      result << "_" ;
      result << enumerator_385.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " : AnyObject {\n  var " ;
      result << enumerator_385.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " : " ;
      result << extensionGetter_swiftTypeName (enumerator_385.current_mProperty (HERE).readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 12)).stringValue () ;
      result << " { get }\n}\n\n" ;
      index_385_.increment () ;
      enumerator_385.gotoNextObject () ;
    }
  }
  GALGAS_uint index_719_ (0) ;
  if (in_PROXY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_atomicProxyGenerationList enumerator_719 (in_PROXY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_719.hasCurrentObject ()) {
      result << "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\n@MainActor protocol " ;
      result << in_ENTITY_5F_NAME.stringValue () ;
      result << "_" ;
      result << enumerator_719.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " : AnyObject {\n  var " ;
      result << enumerator_719.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " : " ;
      result << extensionGetter_swiftTypeName (enumerator_719.current_mProperty (HERE).readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 21)).stringValue () ;
      result << "\? { get }\n}\n\n" ;
      index_719_.increment () ;
      enumerator_719.gotoNextObject () ;
    }
  }
  GALGAS_uint index_1062_ (0) ;
  if (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    cEnumerator_transientPropertyGenerationList enumerator_1062 (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kENUMERATION_UP) ;
    while (enumerator_1062.hasCurrentObject ()) {
      result << "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\n@MainActor protocol " ;
      result << in_ENTITY_5F_NAME.stringValue () ;
      result << "_" ;
      result << enumerator_1062.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " : AnyObject {\n  var " ;
      result << enumerator_1062.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " : " ;
      result << extensionGetter_swiftTypeName (enumerator_1062.current_mProperty (HERE).readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 30)).stringValue () ;
      result << "\? { get }\n}\n\n" ;
      index_1062_.increment () ;
      enumerator_1062.gotoNextObject () ;
    }
  }
  result << "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n//    " ;
  result << GALGAS_string ("Entity: ").add_operation (in_ENTITY_5F_NAME, inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 36)).stringValue () ;
  result << "\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\n" ;
  const enumGalgasBool test_0 = in_HAS_5F_SUB_5F_ENTITY.operator_not (SOURCE_FILE ("entity.swift.galgasTemplate", 40)).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "final " ;
  }else if (kBoolFalse == test_0) {
  }
  result << "class " ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << " : " ;
  result << in_SUPER_5F_CLASS_5F_NAME.stringValue () ;
  GALGAS_uint index_1765_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_1765 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_1765.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (enumerator_1765.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_atomicPropertyGeneration).operator_or (GALGAS_bool (enumerator_1765.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_transientPropertyGeneration) COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 45)).operator_or (GALGAS_bool (enumerator_1765.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_atomicProxyGeneration) COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 45)).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << ",\n         " ;
        result << in_ENTITY_5F_NAME.stringValue () ;
        result << "_" ;
        result << enumerator_1765.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      }else if (kBoolFalse == test_1) {
      }
      index_1765_.increment () ;
      enumerator_1765.gotoNextObject () ;
    }
  }
  result << " {\n\n" ;
  GALGAS_uint index_2038_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_2038 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_2038.hasCurrentObject ()) {
      result << callExtensionGetter_propertyDeclarationCode ((const cPtr_propertyGeneration *) enumerator_2038.current_mProperty (HERE).ptr (), GALGAS_bool (false), in_OVERRIDEN_5F_TRANSIENTS, inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 53)).stringValue () ;
      index_2038_.increment () ;
      enumerator_2038.gotoNextObject () ;
    }
  }
  result << "  //····················································································································\n  //    init\n  //····················································································································\n\n  required init (_ inUndoManager : UndoManager\?) {\n" ;
  GALGAS_uint index_2471_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_2471 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_2471.hasCurrentObject ()) {
      result << callExtensionGetter_initCode ((const cPtr_propertyGeneration *) enumerator_2471.current_mProperty (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 62)).stringValue () ;
      index_2471_.increment () ;
      enumerator_2471.gotoNextObject () ;
    }
  }
  result << "    super.init (inUndoManager)\n" ;
  GALGAS_uint index_2580_ (0) ;
  if (in_TO_5F_ONE_5F_RELATIONSHIP_5F_LIST.isValid ()) {
    cEnumerator_toOnePropertyGenerationList enumerator_2580 (in_TO_5F_ONE_5F_RELATIONSHIP_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2580.hasCurrentObject ()) {
      result << "    self." ;
      result << enumerator_2580.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_none.mReadModelFunction = { [weak self] in\n      if let uwSelf = self {\n        return .single (uwSelf." ;
      result << enumerator_2580.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_property.propval == nil)\n      }else{\n        return .empty\n      }\n    }\n    self." ;
      result << enumerator_2580.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_property.startsToBeObserved (by: self." ;
      result << enumerator_2580.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_none)\n" ;
      index_2580_.increment () ;
      enumerator_2580.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3014_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_3014 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_3014.hasCurrentObject ()) {
      result << callExtensionGetter_configurationCode ((const cPtr_propertyGeneration *) enumerator_3014.current_mProperty (HERE).ptr (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 77)).stringValue () ;
      index_3014_.increment () ;
      enumerator_3014.gotoNextObject () ;
    }
  }
  result << "  //--- Install undoers and opposite setter for relationships\n" ;
  GALGAS_uint index_3171_ (0) ;
  if (in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST.isValid ()) {
    cEnumerator_toManyPropertyGenerationList enumerator_3171 (in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3171.hasCurrentObject ()) {
      switch (enumerator_3171.current_mProperty (HERE).readProperty_mOption ().enumValue ()) {
      case GALGAS_toManyRelationshipOptionGeneration::kNotBuilt :
        break ;
      case GALGAS_toManyRelationshipOptionGeneration::kEnum_none :
        {
        }
        break ;
      case GALGAS_toManyRelationshipOptionGeneration::kEnum_hasDependance :
        {
          const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasDependance * extractPtr_3360 = (const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasDependance *) (enumerator_3171.current_mProperty (HERE).readProperty_mOption ().unsafePointer ()) ;
          const GALGAS_string extractedValue_3262_masterPropertyName = extractPtr_3360->mAssociatedValue0 ;
          result << "    self." ;
          result << enumerator_3171.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
          result << "_property.setDataProvider (self." ;
          result << extractedValue_3262_masterPropertyName.stringValue () ;
          result << "_property)\n" ;
        }
        break ;
      case GALGAS_toManyRelationshipOptionGeneration::kEnum_hasOpposite :
        {
          const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasOpposite * extractPtr_3684 = (const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasOpposite *) (enumerator_3171.current_mProperty (HERE).readProperty_mOption ().unsafePointer ()) ;
          const GALGAS_string extractedValue_3415_oppositeName = extractPtr_3684->mAssociatedValue0 ;
          result << "    self." ;
          result << enumerator_3171.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
          result << "_property.setOppositeRelationShipFunctions (\n      setter: { [weak self] inObject in if let me = self { inObject." ;
          result << extractedValue_3415_oppositeName.stringValue () ;
          result << "_property.setProp (me) } },\n      resetter: { inObject in inObject." ;
          result << extractedValue_3415_oppositeName.stringValue () ;
          result << "_property.setProp (nil) }\n    )\n" ;
        }
        break ;
      }
      index_3171_.increment () ;
      enumerator_3171.gotoNextObject () ;
    }
  }
  result << "  //--- Register properties for handling signature\n" ;
  GALGAS_uint index_3821_ (0) ;
  if (in_SIGNATURE_5F_SET.isValid ()) {
    cEnumerator_stringset enumerator_3821 (in_SIGNATURE_5F_SET, kENUMERATION_UP) ;
    while (enumerator_3821.hasCurrentObject ()) {
      result << "    self." ;
      result << enumerator_3821.current_key (HERE).stringValue () ;
      result << "_property.setSignatureObserver (observer: self)\n" ;
      index_3821_.increment () ;
      enumerator_3821.gotoNextObject () ;
    }
  }
  result << "  //--- Extern delegates\n" ;
  GALGAS_uint index_4006_idx (0) ;
  if (in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    cEnumerator_externSwiftDelegateList enumerator_4006 (in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kENUMERATION_UP) ;
    while (enumerator_4006.hasCurrentObject ()) {
      result << "    self.mExternDelegate" ;
      result << index_4006_idx.getter_string (SOURCE_FILE ("entity.swift.galgasTemplate", 102)).stringValue () ;
      result << " = " ;
      result << enumerator_4006.current_mExternSwiftDelegateName (HERE).readProperty_string ().stringValue () ;
      result << " (object: self)\n" ;
      index_4006_idx.increment () ;
      enumerator_4006.gotoNextObject () ;
    }
  }
  result << "   }\n  \n  //····················································································································\n  //    Extern delegates\n  //····················································································································\n\n" ;
  GALGAS_uint index_4476_idx (0) ;
  if (in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    cEnumerator_externSwiftDelegateList enumerator_4476 (in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kENUMERATION_UP) ;
    while (enumerator_4476.hasCurrentObject ()) {
      result << "  final var mExternDelegate" ;
      result << index_4476_idx.getter_string (SOURCE_FILE ("entity.swift.galgasTemplate", 112)).stringValue () ;
      result << " : " ;
      result << enumerator_4476.current_mExternSwiftDelegateName (HERE).readProperty_string ().stringValue () ;
      result << "\? = nil\n" ;
      index_4476_idx.increment () ;
      enumerator_4476.gotoNextObject () ;
    }
  }
  result << "\n" ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, in_SIGNATURE_5F_SET.getter_count (SOURCE_FILE ("entity.swift.galgasTemplate", 116)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    result << "  //····················································································································\n  //   computeSignature\n  //····················································································································\n\n  override func computeSignature () -> UInt32 {\n    var crc = super.computeSignature ()\n" ;
    GALGAS_uint index_5004_ (0) ;
    if (in_SIGNATURE_5F_SET.isValid ()) {
      cEnumerator_stringset enumerator_5004 (in_SIGNATURE_5F_SET, kENUMERATION_UP) ;
      while (enumerator_5004.hasCurrentObject ()) {
        result << "    crc.accumulate (u32: self." ;
        result << enumerator_5004.current_key (HERE).stringValue () ;
        result << "_property.signature ())\n" ;
        index_5004_.increment () ;
        enumerator_5004.gotoNextObject () ;
      }
    }
    result << "    return crc\n  }\n\n" ;
  }else if (kBoolFalse == test_2) {
  }
  const enumGalgasBool test_3 = in_IS_5F_GRAPHIC_5F_ENTITY.operator_and (in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("entity.swift.galgasTemplate", 132)) COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 132)).boolEnum () ;
  if (kBoolTrue == test_3) {
    result << "  //····················································································································\n\n  override func cursorForKnob (knob inKnobIndex: Int) -> NSCursor\? {\n    return self.cursorForKnob_" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << " (knob: inKnobIndex)\n  }\n\n  //····················································································································\n  //  Translate\n  //····················································································································\n\n  override func acceptedTranslation (xBy inDx: Int, yBy inDy: Int) -> CanariPoint {\n    return self.acceptedTranslation_" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << " (xBy: inDx, yBy: inDy)\n  }\n\n  //····················································································································\n\n  override func acceptToTranslate (xBy inDx: Int, yBy inDy: Int) -> Bool {\n    return self.acceptToTranslate_" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << " (xBy: inDx, yBy: inDy)\n  }\n\n  //····················································································································\n\n  override func translate (xBy inDx: Int, yBy inDy: Int,\n                           userSet ioSet : inout EBReferenceSet <EBManagedObject>) {\n    self.translate_" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << " (xBy: inDx, yBy: inDy, userSet: &ioSet)\n  }\n\n  //····················································································································\n  //   Move\n  //····················································································································\n\n  override func canMove (knob inKnobIndex : Int,\n                         proposedUnalignedAlignedTranslation inProposedUnalignedTranslation : CanariPoint,\n                         proposedAlignedTranslation inProposedAlignedTranslation : CanariPoint,\n                         unalignedMouseDraggedLocation inUnalignedMouseDraggedLocation : CanariPoint,\n                         shift inShift : Bool) -> CanariPoint {\n    return self.canMove_" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << " (\n      knob: inKnobIndex,\n      proposedUnalignedAlignedTranslation: inProposedUnalignedTranslation,\n      proposedAlignedTranslation: inProposedAlignedTranslation,\n      unalignedMouseDraggedLocation: inUnalignedMouseDraggedLocation,\n      shift: inShift\n    )\n  }\n\n  //····················································································································\n\n  override func move (knob inKnobIndex: Int,\n                      proposedDx inDx: Int,\n                      proposedDy inDy: Int,\n                      unalignedMouseLocationX inUnlignedMouseLocationX : Int,\n                      unalignedMouseLocationY inUnlignedMouseLocationY : Int,\n                      alignedMouseLocationX inAlignedMouseLocationX : Int,\n                      alignedMouseLocationY inAlignedMouseLocationY : Int,\n                      shift inShift : Bool) {\n    self.move_" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << " (\n      knob: inKnobIndex,\n      proposedDx: inDx,\n      proposedDy: inDy,\n      unalignedMouseLocationX: inUnlignedMouseLocationX,\n      unalignedMouseLocationY: inUnlignedMouseLocationY,\n      alignedMouseLocationX: inAlignedMouseLocationX,\n      alignedMouseLocationY: inAlignedMouseLocationY,\n      shift: inShift\n    )\n  }\n\n  //····················································································································\n  //  Snap to grid\n  //····················································································································\n\n  override func snapToGrid (_ inGrid : Int) {\n    self.snapToGrid_" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << " (inGrid)\n  }\n\n  //····················································································································\n\n  override func canSnapToGrid (_ inGrid : Int) -> Bool {\n    return self.canSnapToGrid_" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << " (inGrid)\n  }\n\n  //····················································································································\n  //  HORIZONTAL FLIP\n  //····················································································································\n\n  override func flipHorizontally () {\n    self.flipHorizontally_" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << " ()\n  }\n\n  //····················································································································\n\n  override func canFlipHorizontally () -> Bool {\n    return self.canFlipHorizontally_" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << " ()\n  }\n\n  //····················································································································\n  //  VERTICAL FLIP\n  //····················································································································\n\n  override func flipVertically () {\n    self.flipVertically_" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << " ()\n  }\n\n  //····················································································································\n\n  override func canFlipVertically () -> Bool {\n    return self.canFlipVertically_" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << " ()\n  }\n\n  //····················································································································\n  //  ROTATE 90\n  //····················································································································\n\n  override func canRotate90 (accumulatedPoints : inout Set <CanariPoint>) -> Bool {\n    return self.canRotate90_" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << " (accumulatedPoints: &accumulatedPoints)\n  }\n\n  //····················································································································\n\n  override func rotate90Clockwise (from inRotationCenter : CanariPoint,\n                                   userSet ioSet : inout EBReferenceSet <EBManagedObject>) {\n    self.rotate90Clockwise_" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << " (from: inRotationCenter, userSet: &ioSet)\n  }\n\n  //····················································································································\n\n  override func rotate90CounterClockwise (from inRotationCenter : CanariPoint,\n                                          userSet ioSet : inout EBReferenceSet <EBManagedObject>) {\n    self.rotate90CounterClockwise_" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << " (from: inRotationCenter, userSet: &ioSet)\n  }\n\n  //····················································································································\n  //  Save into additional dictionary\n  //····················································································································\n\n  override func saveIntoAdditionalDictionary (_ ioDictionary : inout [String : Any]) {\n    self.saveIntoAdditionalDictionary_" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << " (&ioDictionary)\n  }\n\n  //····················································································································\n  //  operationAfterPasting\n  //····················································································································\n\n  override func operationAfterPasting (additionalDictionary inDictionary : [String : Any],\n                                       optionalDocument inOptionalDocument : EBAutoLayoutManagedDocument\?,\n                                       objectArray inObjectArray : [EBGraphicManagedObject]) -> String {\n    return self.operationAfterPasting_" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << " (additionalDictionary: inDictionary,\n                                                      optionalDocument: inOptionalDocument,\n                                                      objectArray: inObjectArray)\n  }\n\n  //····················································································································\n  //  Alignment Points\n  //····················································································································\n\n  override func alignmentPoints () -> Set <CanariPoint> {\n    return self.alignmentPoints_" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << " ()\n  }\n\n  //····················································································································\n  //  operationBeforeRemoving\n  //····················································································································\n\n  override func operationBeforeRemoving () {\n    self.operationBeforeRemoving_" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << " ()\n  }\n\n" ;
    const enumGalgasBool test_4 = in_OPTION_5F_CanCopyAndPaste.boolEnum () ;
    if (kBoolTrue == test_4) {
      result << "  //····················································································································\n  //  COPY AND PASTE\n  //····················································································································\n\n  override func canCopyAndPaste () -> Bool {\n    return true\n  }\n\n" ;
    }else if (kBoolFalse == test_4) {
    }
    const enumGalgasBool test_5 = in_OPTION_5F_CannotBeDeleted.boolEnum () ;
    if (kBoolTrue == test_5) {
      result << "  //····················································································································\n  //  Can be deleted\n  //····················································································································\n\n  override func canBeDeleted () -> Bool {\n    return false\n  }\n\n" ;
    }else if (kBoolFalse == test_5) {
    }
  }else if (kBoolFalse == test_3) {
  }
  result << "  //····················································································································\n\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'entityGenerationTemplate entityToManyImplementationInSwift'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_entityGenerationTemplate_entityToManyImplementationInSwift (C_Compiler * inCompiler,
                                                                                              const GALGAS_string & in_ENTITY_5F_NAME,
                                                                                              const GALGAS_string & /* in_SUPER_5F_CLASS_5F_NAME */,
                                                                                              const GALGAS_bool & in_HANDLING_5F_OPPOSITE,
                                                                                              const GALGAS_propertyGenerationList & /* in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION */,
                                                                                              const GALGAS_atomicProxyGenerationList & in_PROXY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                              const GALGAS_toManyProxyGenerationList & in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                              const GALGAS_atomicPropertyGenerationList & in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                              const GALGAS_transientPropertyGenerationList & in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                              const GALGAS_computedPropertyGenerationList & in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                              const GALGAS_toOnePropertyGenerationList & /* in_TO_5F_ONE_5F_RELATIONSHIP_5F_LIST */,
                                                                                              const GALGAS_toManyPropertyGenerationList & /* in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST */,
                                                                                              const GALGAS_stringset & /* in_SIGNATURE_5F_SET */,
                                                                                              const GALGAS_bool & /* in_IS_5F_GRAPHIC_5F_ENTITY */,
                                                                                              const GALGAS_bool & /* in_IS_5F_ABSTRACT */,
                                                                                              const GALGAS_stringset & /* in_OVERRIDEN_5F_TRANSIENTS */,
                                                                                              const GALGAS_externSwiftDelegateList & /* in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION */,
                                                                                              const GALGAS_bool & in_GENERATE_5F_CLASS_5F_PreferencesArrayOf_5F_,
                                                                                              const GALGAS_bool & in_GENERATE_5F_CLASS_5F_ProxyArrayOf_5F_,
                                                                                              const GALGAS_bool & in_GENERATE_5F_CLASS_5F_TransientArrayOfSuperOf_5F_,
                                                                                              const GALGAS_bool & in_GENERATE_5F_CLASS_5F_TransientArrayOf_5F_,
                                                                                              const GALGAS_bool & in_GENERATE_5F_CLASS_5F_StoredArrayOf_5F_
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nimport AppKit\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n//    " ;
  result << GALGAS_string ("ReadOnlyArrayOf_").add_operation (in_ENTITY_5F_NAME, inCompiler COMMA_SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 8)).stringValue () ;
  result << "\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nclass ReadOnlyArrayOf_" ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << " : ReadOnlyAbstractArrayProperty <" ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << "> {\n\n  //····················································································································\n\n  override func updateObservers (removedSet inRemovedSet : EBReferenceSet <" ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << ">,                            \n                                 addedSet inAddedSet : EBReferenceSet <" ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << ">) {\n    super.updateObservers (removedSet: inRemovedSet, addedSet: inAddedSet)\n  //--- Remove observers from removed objects\n    for managedObject in inRemovedSet.values {\n" ;
  GALGAS_uint index_1258_ (0) ;
  if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_atomicPropertyGenerationList enumerator_1258 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_1258.hasCurrentObject ()) {
      result << "      if let relay = self.mObserversOf_" ;
      result << enumerator_1258.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " { // Stored property\n        managedObject." ;
      result << enumerator_1258.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_property.stopsBeingObserved (by: relay)\n      }\n" ;
      index_1258_.increment () ;
      enumerator_1258.gotoNextObject () ;
    }
  }
  GALGAS_uint index_1520_ (0) ;
  if (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    cEnumerator_transientPropertyGenerationList enumerator_1520 (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kENUMERATION_UP) ;
    while (enumerator_1520.hasCurrentObject ()) {
      result << "      if let relay = self.mObserversOf_" ;
      result << enumerator_1520.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " { // Transient property\n        managedObject." ;
      result << enumerator_1520.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_property.stopsBeingObserved (by: relay)\n      }\n" ;
      index_1520_.increment () ;
      enumerator_1520.gotoNextObject () ;
    }
  }
  GALGAS_uint index_1793_ (0) ;
  if (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    cEnumerator_computedPropertyGenerationList enumerator_1793 (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kENUMERATION_UP) ;
    while (enumerator_1793.hasCurrentObject ()) {
      result << "      if let relay = self.mObserversOf_" ;
      result << enumerator_1793.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " { // Computed property\n        managedObject." ;
      result << enumerator_1793.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_property.stopsBeingObserved (by: relay)\n      }\n" ;
      index_1793_.increment () ;
      enumerator_1793.gotoNextObject () ;
    }
  }
  GALGAS_uint index_2057_ (0) ;
  if (in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_toManyProxyGenerationList enumerator_2057 (in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_2057.hasCurrentObject ()) {
      result << "      if let relay = self.mObserversOf_" ;
      result << enumerator_2057.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " { // Tomany proxy\n        managedObject." ;
      result << enumerator_2057.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_property.stopsBeingObserved (by: relay)\n      }\n" ;
      index_2057_.increment () ;
      enumerator_2057.gotoNextObject () ;
    }
  }
  result << "    }\n  //--- Add observers to added objects\n    for managedObject in inAddedSet.values {\n" ;
  GALGAS_uint index_2417_ (0) ;
  if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_atomicPropertyGenerationList enumerator_2417 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_2417.hasCurrentObject ()) {
      result << "      if let relay = self.mObserversOf_" ;
      result << enumerator_2417.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " { // Stored property\n        managedObject." ;
      result << enumerator_2417.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_property.startsToBeObserved (by: relay)\n      }\n" ;
      index_2417_.increment () ;
      enumerator_2417.gotoNextObject () ;
    }
  }
  GALGAS_uint index_2679_ (0) ;
  if (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    cEnumerator_transientPropertyGenerationList enumerator_2679 (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kENUMERATION_UP) ;
    while (enumerator_2679.hasCurrentObject ()) {
      result << "      if let relay = self.mObserversOf_" ;
      result << enumerator_2679.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " { // Transient property\n        managedObject." ;
      result << enumerator_2679.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_property.startsToBeObserved (by: relay)\n      }\n" ;
      index_2679_.increment () ;
      enumerator_2679.gotoNextObject () ;
    }
  }
  GALGAS_uint index_2952_ (0) ;
  if (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    cEnumerator_computedPropertyGenerationList enumerator_2952 (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kENUMERATION_UP) ;
    while (enumerator_2952.hasCurrentObject ()) {
      result << "      if let relay = self.mObserversOf_" ;
      result << enumerator_2952.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " { // Computed property\n        managedObject." ;
      result << enumerator_2952.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_property.startsToBeObserved (by: relay)\n      }\n" ;
      index_2952_.increment () ;
      enumerator_2952.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3216_ (0) ;
  if (in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_toManyProxyGenerationList enumerator_3216 (in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_3216.hasCurrentObject ()) {
      result << "      if let relay = self.mObserversOf_" ;
      result << enumerator_3216.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " { // Tomany proxy\n        managedObject." ;
      result << enumerator_3216.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_property.startsToBeObserved (by: relay)\n      }\n" ;
      index_3216_.increment () ;
      enumerator_3216.gotoNextObject () ;
    }
  }
  result << "    }\n  }\n\n" ;
  GALGAS_uint index_3498_ (0) ;
  if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_atomicPropertyGenerationList enumerator_3498 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_3498.hasCurrentObject ()) {
      result << "  //····················································································································\n  //   Observers of '" ;
      result << enumerator_3498.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "' stored property\n  //····················································································································\n\n  private final var mObserversOf_" ;
      result << enumerator_3498.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " : EBObservedObserver\? = nil\n\n  //····················································································································\n\n  final func toMany_" ;
      result << enumerator_3498.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_StartsToBeObserved (by inObserver : EBObserverProtocol) {\n    let relay : EBObservedObserver\n    if let r = self.mObserversOf_" ;
      result << enumerator_3498.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " {\n      relay = r\n    }else{\n      relay = EBObservedObserver ()\n      self.startsToBeObserved (by: relay)\n      for managedObject in self.propval.values {\n        managedObject." ;
      result << enumerator_3498.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_property.startsToBeObserved (by: relay)\n      }\n      self.mObserversOf_" ;
      result << enumerator_3498.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " = relay\n    }\n    relay.startsToBeObserved (by: inObserver)\n  }\n\n  //····················································································································\n\n  final func toMany_" ;
      result << enumerator_3498.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_StopsBeingObserved (by inObserver : EBObserverProtocol) {\n    self.mObserversOf_" ;
      result << enumerator_3498.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "\?.stopsBeingObserved (by: inObserver)\n  }\n\n" ;
      index_3498_.increment () ;
      enumerator_3498.gotoNextObject () ;
    }
  }
  GALGAS_uint index_4967_ (0) ;
  if (in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_toManyProxyGenerationList enumerator_4967 (in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_4967.hasCurrentObject ()) {
      result << "  //····················································································································\n  //   Observers of '" ;
      result << enumerator_4967.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "' toMany proxy\n  //····················································································································\n\n  private final var mObserversOf_" ;
      result << enumerator_4967.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " : EBObservedObserver\? = nil\n\n  //····················································································································\n\n  final func toMany_" ;
      result << enumerator_4967.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_StartsToBeObserved (by inObserver : EBObserverProtocol) {\n    let relay : EBObservedObserver\n    if let r = self.mObserversOf_" ;
      result << enumerator_4967.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " {\n      relay = r\n    }else{\n      relay = EBObservedObserver ()\n      self.startsToBeObserved (by: relay)\n      for managedObject in self.propval.values {\n        managedObject." ;
      result << enumerator_4967.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_property.startsToBeObserved (by: relay)\n      }\n      self.mObserversOf_" ;
      result << enumerator_4967.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " = relay\n    }\n    relay.startsToBeObserved (by: inObserver)\n  }\n\n  //····················································································································\n\n  final func toMany_" ;
      result << enumerator_4967.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_StopsBeingObserved (by inObserver : EBObserverProtocol) {\n    self.mObserversOf_" ;
      result << enumerator_4967.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "\?.stopsBeingObserved (by: inObserver)\n  }\n\n" ;
      index_4967_.increment () ;
      enumerator_4967.gotoNextObject () ;
    }
  }
  GALGAS_uint index_6425_ (0) ;
  if (in_PROXY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_atomicProxyGenerationList enumerator_6425 (in_PROXY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_6425.hasCurrentObject ()) {
      result << "  //····················································································································\n  //   Observers of '" ;
      result << enumerator_6425.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "' proxy property\n  //····················································································································\n\n  private final var mObserversOf_" ;
      result << enumerator_6425.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " : EBObservedObserver\? = nil\n\n  //····················································································································\n\n  final func toMany_" ;
      result << enumerator_6425.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_StartsToBeObserved (by inObserver : EBObserverProtocol) {\n    let relay : EBObservedObserver\n    if let r = self.mObserversOf_" ;
      result << enumerator_6425.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " {\n      relay = r\n    }else{\n      relay = EBObservedObserver ()\n      self.startsToBeObserved (by: relay)\n      for managedObject in self.propval.values {\n        managedObject." ;
      result << enumerator_6425.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_property.startsToBeObserved (by: relay)\n      }\n      self.mObserversOf_" ;
      result << enumerator_6425.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " = relay\n    }\n    relay.startsToBeObserved (by: inObserver)\n  }\n\n  //····················································································································\n\n  final func toMany_" ;
      result << enumerator_6425.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_StopsBeingObserved (by inObserver : EBObserverProtocol) {\n    self.mObserversOf_" ;
      result << enumerator_6425.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "\?.stopsBeingObserved (by: inObserver)\n  }\n\n" ;
      index_6425_.increment () ;
      enumerator_6425.gotoNextObject () ;
    }
  }
  GALGAS_uint index_7893_ (0) ;
  if (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    cEnumerator_transientPropertyGenerationList enumerator_7893 (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kENUMERATION_UP) ;
    while (enumerator_7893.hasCurrentObject ()) {
      result << "  //····················································································································\n  //   Observers of '" ;
      result << enumerator_7893.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "' transient property\n  //····················································································································\n\n  private final var mObserversOf_" ;
      result << enumerator_7893.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " : EBObservedObserver\? = nil\n\n  //····················································································································\n\n  final func toMany_" ;
      result << enumerator_7893.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_StartsToBeObserved (by inObserver : EBObserverProtocol) {\n    let relay : EBObservedObserver\n    if let r = self.mObserversOf_" ;
      result << enumerator_7893.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " {\n      relay = r\n    }else{\n      relay = EBObservedObserver ()\n      self.startsToBeObserved (by: relay)\n      for managedObject in self.propval.values {\n        managedObject." ;
      result << enumerator_7893.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_property.startsToBeObserved (by: relay)\n      }\n      self.mObserversOf_" ;
      result << enumerator_7893.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " = relay\n    }\n    relay.startsToBeObserved (by:  inObserver)\n  }\n\n  //····················································································································\n\n  final func toMany_" ;
      result << enumerator_7893.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_StopsBeingObserved (by inObserver : EBObserverProtocol) {\n    self.mObserversOf_" ;
      result << enumerator_7893.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "\?.stopsBeingObserved (by: inObserver)\n  }\n\n" ;
      index_7893_.increment () ;
      enumerator_7893.gotoNextObject () ;
    }
  }
  GALGAS_uint index_9374_ (0) ;
  if (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    cEnumerator_computedPropertyGenerationList enumerator_9374 (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kENUMERATION_UP) ;
    while (enumerator_9374.hasCurrentObject ()) {
      result << "  //····················································································································\n  //   Observers of '" ;
      result << enumerator_9374.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "' computed property\n  //····················································································································\n\n  private final var mObserversOf_" ;
      result << enumerator_9374.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " : EBObservedObserver\? = nil\n\n  //····················································································································\n\n  final func toMany_" ;
      result << enumerator_9374.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_StartsToBeObserved (by inObserver : EBObserverProtocol) {\n    let relay : EBObservedObserver\n    if let r = self.mObserversOf_" ;
      result << enumerator_9374.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " {\n      relay = r\n    }else{\n      relay = EBObservedObserver ()\n      self.startsToBeObserved (by: relay)\n      for managedObject in self.propval.values {\n        managedObject." ;
      result << enumerator_9374.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_property.startsToBeObserved (by: relay)\n      }\n      self.mObserversOf_" ;
      result << enumerator_9374.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " = relay\n    }\n    relay.startsToBeObserved (by: inObserver)\n  }\n\n  //····················································································································\n\n  final func toMany_" ;
      result << enumerator_9374.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_StopsBeingObserved (by inObserver : EBObserverProtocol) {\n    self.mObserversOf_" ;
      result << enumerator_9374.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "\?.stopsBeingObserved (by: inObserver)\n  }\n\n" ;
      index_9374_.increment () ;
      enumerator_9374.gotoNextObject () ;
    }
  }
  result << "  //····················································································································\n\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n//    TransientArrayOf " ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << "\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\n" ;
  const enumGalgasBool test_0 = in_GENERATE_5F_CLASS_5F_TransientArrayOf_5F_.operator_not (SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 235)).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "// TransientArrayOf_" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << " is useless.\n" ;
  }else if (kBoolFalse == test_0) {
    result << "final class TransientArrayOf_" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << " : ReadOnlyArrayOf_" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << " {\n\n  //····················································································································\n  //   Sort\n  //····················································································································\n\n  private var mIsOrderedBefore : Optional < (_ left : " ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << ", _ right : " ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << ") -> Bool > = nil\n  private var mSortObserver : EBModelNotifierEvent\? = nil\n  private let mModelEvent = EBModelEvent ()\n\n  //····················································································································\n\n  override init () {\n    super.init ()\n    self.mModelEvent.mEventCallBack = { [weak self] in self\?.computeModelArray () }\n  }\n\n  //····················································································································\n  //   Data provider\n  //····················································································································\n\n  private weak var mDataProvider : ReadOnlyArrayOf_" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << "\? = nil // SHOULD BE WEAK\n  private var mTransientKind : PropertyKind = .empty\n  private var mModelArrayShouldBeComputed = true\n\n  //····················································································································\n\n  func setDataProvider (_ inProvider : ReadOnlyArrayOf_" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << ",\n                        sortCallback inSortCallBack : Optional < (_ left : " ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << ", _ right : " ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << ") -> Bool >,\n                        addSortObserversCallback inAddSortObserversCallback : (EBModelNotifierEvent) -> Void,\n                        removeSortObserversCallback inRemoveSortObserversCallback : @escaping (EBModelNotifierEvent) -> Void) {\n    if self.mDataProvider !== inProvider {\n      self.mSortObserver\?.removeSortObservers ()\n      self.mSortObserver = nil\n      self.mDataProvider\?.detachClient (self)\n      self.mDataProvider = inProvider\n      self.mIsOrderedBefore = inSortCallBack\n      self.mDataProvider\?.attachClient (self)\n      if inSortCallBack != nil {\n        self.mSortObserver = EBModelNotifierEvent (\n          self,\n          addSortObserversCallback: inAddSortObserversCallback,\n          removeSortObserversCallback: inRemoveSortObserversCallback\n        )\n      }else{\n        self.mInternalArrayValue = EBReferenceArray ()\n      }\n    }\n  }\n\n  //····················································································································\n\n  func resetDataProvider () {\n    if self.mDataProvider != nil {\n      self.mSortObserver = nil\n      self.mDataProvider\?.detachClient (self)\n      self.mDataProvider = nil\n      self.mIsOrderedBefore = nil\n    }\n  }\n\n  //····················································································································\n\n  override func notifyModelDidChange () {\n    self.mModelEvent.observedObjectDidChange ()\n    self.mModelArrayShouldBeComputed = true\n    super.notifyModelDidChange ()\n  }\n\n  //····················································································································\n\n  private final func computeModelArray () {\n    if self.mModelArrayShouldBeComputed {\n      self.mModelArrayShouldBeComputed = false\n      let newArray : EBReferenceArray <" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << ">\n      if let dataProvider = self.mDataProvider {\n        switch dataProvider.selection {\n        case .empty :\n          newArray = EBReferenceArray ()\n          self.mTransientKind = .empty\n        case .single (let v) :\n          if let sortFunction = self.mIsOrderedBefore {\n            newArray = EBReferenceArray (v.sorted { sortFunction ($0, $1) })\n          }else{\n            newArray = EBReferenceArray (v)\n          }\n          self.mTransientKind = .single\n        case .multiple :\n          newArray = EBReferenceArray ()\n          self.mTransientKind = .multiple\n        }\n      }else{\n        newArray = EBReferenceArray ()\n        self.mTransientKind = .empty\n      }\n      self.mInternalArrayValue = newArray\n    }\n  }\n\n  //····················································································································\n\n  override var selection : EBSelection < [" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << "] > {\n    self.computeModelArray ()\n    switch self.mTransientKind {\n    case .empty :\n      return .empty\n    case .single :\n      return .single (self.propval.values)\n    case .multiple :\n      return .multiple\n    }\n  }\n\n  //····················································································································\n\n  override var propval : EBReferenceArray <" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << "> {\n    self.computeModelArray ()\n    return self.mInternalArrayValue\n  }\n\n  //····················································································································\n\n}\n" ;
  }
  result << "\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n//    TransientArrayOfSuperOf " ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << "\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\n" ;
  const enumGalgasBool test_1 = in_GENERATE_5F_CLASS_5F_TransientArrayOfSuperOf_5F_.operator_not (SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 366)).boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "// TransientArrayOfSuperOf_" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << " is useless.\n" ;
  }else if (kBoolFalse == test_1) {
    result << "final class TransientArrayOfSuperOf_" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << " <SUPER : EBManagedObject> : ReadOnlyArrayOf_" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << " {\n\n  //····················································································································\n  //   Data provider\n  //····················································································································\n\n  private weak var mDataProvider : ReadOnlyAbstractArrayProperty <SUPER>\? = nil // SHOULD BE WEAK\n  private var mTransientKind : PropertyKind = .empty\n  private var mModelArrayShouldBeComputed = true\n  private let mModelEvent = EBModelEvent ()\n\n  //····················································································································\n\n  override init () {\n    super.init ()\n    self.mModelEvent.mEventCallBack = { [weak self] in self\?.computeModelArray () }\n  }\n\n  //····················································································································\n\n  func setDataProvider (_ inProvider : ReadOnlyAbstractArrayProperty <SUPER>\?) {\n    if self.mDataProvider !== inProvider {\n      self.mDataProvider\?.detachClient (self)\n      self.mDataProvider = inProvider\n      self.mDataProvider\?.attachClient (self)\n    }\n  }\n\n  //····················································································································\n\n  override func notifyModelDidChange () {\n    self.mModelEvent.observedObjectDidChange ()\n    self.mModelArrayShouldBeComputed = true\n    super.notifyModelDidChange ()\n  }\n\n  //····················································································································\n\n  private final func computeModelArray () {\n    if self.mModelArrayShouldBeComputed {\n      self.mModelArrayShouldBeComputed = false\n      var newModelArray : EBReferenceArray <SUPER>\n      if let dataProvider = self.mDataProvider {\n        switch dataProvider.selection {\n        case .empty :\n          newModelArray = EBReferenceArray ()\n          self.mTransientKind = .empty\n        case .single (let v) :\n          newModelArray = EBReferenceArray (v)\n          self.mTransientKind = .single\n         case .multiple :\n          newModelArray = EBReferenceArray ()\n          self.mTransientKind = .multiple\n        }\n      }else{\n        newModelArray = EBReferenceArray ()\n        self.mTransientKind = .empty\n      }\n      var newArray = EBReferenceArray <" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << "> ()\n      for superObject in newModelArray.values {\n        if let object = superObject as\? " ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << " {\n          newArray.append (object)\n        }\n      }\n      self.mInternalArrayValue = newArray\n    }\n  }\n\n  //····················································································································\n\n  override var selection : EBSelection < [" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << "] > {\n    self.computeModelArray ()\n    switch self.mTransientKind {\n    case .empty :\n      return .empty\n    case .single :\n      return .single (self.mInternalArrayValue.values)\n    case .multiple :\n      return .multiple\n    }\n  }\n\n  //····················································································································\n\n  override var propval : EBReferenceArray <" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << "> {\n    self.computeModelArray ()\n    return self.mInternalArrayValue\n  }\n\n  //····················································································································\n\n}\n" ;
  }
  result << "\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n//    " ;
  result << GALGAS_string ("To many relationship read write: ").add_operation (in_ENTITY_5F_NAME, inCompiler COMMA_SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 463)).stringValue () ;
  result << "\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\n" ;
  const enumGalgasBool test_2 = in_GENERATE_5F_CLASS_5F_ProxyArrayOf_5F_.operator_not (SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 466)).operator_and (in_GENERATE_5F_CLASS_5F_StoredArrayOf_5F_.operator_not (SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 466)) COMMA_SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 466)).operator_and (in_GENERATE_5F_CLASS_5F_PreferencesArrayOf_5F_.operator_not (SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 466)) COMMA_SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 466)).boolEnum () ;
  if (kBoolTrue == test_2) {
    result << "// ReadWriteArrayOf_" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << " is useless.\n" ;
  }else if (kBoolFalse == test_2) {
    result << "class ReadWriteArrayOf_" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << " : ReadOnlyArrayOf_" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << " {\n\n  //····················································································································\n\n  func setProp (_ value :  EBReferenceArray <" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << ">) { } // Abstract method\n\n  //····················································································································\n\n}\n" ;
  }
  result << "\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n//    Proxy: ProxyArrayOf_" ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << "\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\n" ;
  const enumGalgasBool test_3 = in_GENERATE_5F_CLASS_5F_ProxyArrayOf_5F_.operator_not (SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 483)).boolEnum () ;
  if (kBoolTrue == test_3) {
    result << "// ProxyArrayOf_" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << " is useless.\n" ;
  }else if (kBoolFalse == test_3) {
    result << "final class ProxyArrayOf_" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << " : ReadWriteArrayOf_" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << " {\n\n  //····················································································································\n\n  private weak var mModel : ReadWriteArrayOf_" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << "\? = nil // SHOULD BE WEAK\n\n  //····················································································································\n\n  func setModel (_ inModel : ReadWriteArrayOf_" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << "\?) {\n    if self.mModel !== inModel {\n      self.mModel\?.detachClient (self)\n      self.mModel = inModel\n      self.mModel\?.attachClient (self)\n    }\n  }\n\n  //····················································································································\n\n  override func notifyModelDidChange () {\n    let newModelArray : EBReferenceArray <" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << ">\n    if let model = self.mModel {\n      switch model.selection {\n      case .empty :\n        newModelArray = EBReferenceArray ()\n      case .single (let v) :\n        newModelArray = EBReferenceArray <" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << "> (v)\n      case .multiple :\n        newModelArray = EBReferenceArray ()\n      }\n    }else{\n      newModelArray = EBReferenceArray ()\n    }\n    self.mInternalArrayValue = newModelArray\n    super.notifyModelDidChange ()\n  }\n\n  //····················································································································\n\n  override func setProp (_ inArrayValue : EBReferenceArray <" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << ">) {\n    self.mModel\?.setProp (inArrayValue)\n  }\n\n  //····················································································································\n\n  override var selection : EBSelection < [" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << "] > {\n    if let model = self.mModel {\n      return model.selection\n    }else{\n      return .empty\n    }\n  }\n\n  //····················································································································\n\n  override var propval : EBReferenceArray <" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << "> {\n    if let model = self.mModel {\n      switch model.selection {\n      case .empty, .multiple :\n        return EBReferenceArray ()\n      case .single (let v) :\n        return EBReferenceArray (v)\n      }\n    }else{\n      return EBReferenceArray ()\n    }\n  }\n\n  //····················································································································\n\n}\n" ;
  }
  result << "\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n//    " ;
  result << GALGAS_string ("Stored Array: ").add_operation (in_ENTITY_5F_NAME, inCompiler COMMA_SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 558)).stringValue () ;
  result << "\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\n" ;
  const enumGalgasBool test_4 = in_GENERATE_5F_CLASS_5F_StoredArrayOf_5F_.operator_not (SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 561)).boolEnum () ;
  if (kBoolTrue == test_4) {
    result << "// StoredArrayOf_" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << " is useless.\n" ;
  }else if (kBoolFalse == test_4) {
    result << "class StoredArrayOf_" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << " : ReadWriteArrayOf_" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << ", EBSignatureObserverProtocol, DocumentStorablePropertyAndRelationshipProtocol {\n\n  //····················································································································\n\n  init (usedForSignature inUsedForSignature : Bool, key inKey : String\?) {\n    self.mUsedForSignature = inUsedForSignature\n    self.mKey = inKey\n    super.init ()\n  }\n\n  //····················································································································\n  \n  private final let mKey : String\?\n  final var key : String\? { return self.mKey }\n  \n  //····················································································································\n\n  func initialize (fromDictionary inDictionary : [String : Any],\n                   managedObjectArray inManagedObjectArray : [EBManagedObject]) {\n    if let key = self.mKey, let objectSavingIndexArray = inDictionary [key] as\? [Int] {\n      var objectArray = EBReferenceArray <" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << "> ()\n      for idx in objectSavingIndexArray {\n        objectArray.append (inManagedObjectArray [idx] as! " ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << ")\n      }\n      self.setProp (objectArray)\n    }\n  }\n\n  //····················································································································\n\n  func initialize (fromRange inRange : NSRange, ofData inData : Data, _ inRawObjectArray : [RawObject]) {\n    var objectArray = EBReferenceArray <" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << "> ()\n    let indexArray = inData.base62EncodedIntArray (fromRange: inRange)\n    for idx in indexArray {\n      objectArray.append (inRawObjectArray [idx].object as! " ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << ")\n    }\n    self.setProp (objectArray)\n  }\n\n  //····················································································································\n\n  func store (inDictionary ioDictionary : inout [String : Any]) {\n    if let key = self.mKey, self.mInternalArrayValue.count > 0 {\n      var array = [Int] ()\n      for object in self.mInternalArrayValue.values {\n        array.append (object.savingIndex)\n      }\n      ioDictionary [key] = array\n    }\n  }\n\n  //····················································································································\n\n  func enterRelationshipObjects (intoArray ioArray : inout [EBManagedObject]) {\n    if self.mKey != nil, self.mInternalArrayValue.count > 0 {\n      for object in self.mInternalArrayValue.values {\n        ioArray.append (object)\n      }\n    }\n  }\n\n  //····················································································································\n\n  func appendValueTo (data ioData : inout Data) {\n    enterToManyRelationshipObjectIndexes (from: self.propval.values, into: &ioData)\n  }\n\n  //····················································································································\n  //   Signature \?\n  //····················································································································\n\n  final private let mUsedForSignature : Bool\n\n  //····················································································································\n  //   Undo manager\n  //····················································································································\n\n  weak final var undoManager : UndoManager\? = nil // SOULD BE WEAK\n\n" ;
    const enumGalgasBool test_5 = in_HANDLING_5F_OPPOSITE.boolEnum () ;
    if (kBoolTrue == test_5) {
      result << "  //····················································································································\n  //   Opposite relationship management\n  //····················································································································\n\n  private final var mSetOppositeRelationship : Optional < (_ inManagedObject : " ;
      result << in_ENTITY_5F_NAME.stringValue () ;
      result << ") -> Void > = nil\n  private final var mResetOppositeRelationship : Optional < (_ inManagedObject : " ;
      result << in_ENTITY_5F_NAME.stringValue () ;
      result << ") -> Void > = nil\n\n  //····················································································································\n\n  final func setOppositeRelationShipFunctions (setter inSetter : @escaping (_ inManagedObject : " ;
      result << in_ENTITY_5F_NAME.stringValue () ;
      result << ") -> Void,\n                                               resetter inResetter : @escaping (_ inManagedObject : " ;
      result << in_ENTITY_5F_NAME.stringValue () ;
      result << ") -> Void) {\n    self.mSetOppositeRelationship = inSetter\n    self.mResetOppositeRelationship = inResetter\n  }\n\n" ;
    }else if (kBoolFalse == test_5) {
    }
    result << "  //····················································································································\n  // Model will change\n  //····················································································································\n\n  override func notifyModelDidChangeFrom (oldValue inOldValue : EBReferenceArray <" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << ">) {\n  //--- Register old value in undo manager\n    self.undoManager\?.registerUndo (withTarget: self) { $0.mInternalArrayValue = inOldValue }\n  //---\n    super.notifyModelDidChangeFrom (oldValue: inOldValue)\n  }\n\n  //····················································································································\n  // Model did change\n  //····················································································································\n\n  override func notifyModelDidChange () {\n  //--- Notify observers\n    self.observedObjectDidChange ()\n  //---\n    super.notifyModelDidChange ()\n  }\n\n  //····················································································································\n  // Update observers\n  //····················································································································\n\n  override func updateObservers (removedSet inRemovedSet : EBReferenceSet <" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << ">,\n                                 addedSet inAddedSet : EBReferenceSet <" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << ">) {\n    for managedObject in inRemovedSet.values {\n      if self.mUsedForSignature {\n        managedObject.setSignatureObserver (observer: nil)\n      }\n" ;
    const enumGalgasBool test_6 = in_HANDLING_5F_OPPOSITE.boolEnum () ;
    if (kBoolTrue == test_6) {
      result << "      self.mResetOppositeRelationship\? (managedObject)\n" ;
    }else if (kBoolFalse == test_6) {
    }
    result << "   }\n  //---\n    for managedObject in inAddedSet.values {\n      if self.mUsedForSignature {\n        managedObject.setSignatureObserver (observer: self)\n      }\n" ;
    const enumGalgasBool test_7 = in_HANDLING_5F_OPPOSITE.boolEnum () ;
    if (kBoolTrue == test_7) {
      result << "      self.mSetOppositeRelationship\? (managedObject)\n" ;
    }else if (kBoolFalse == test_7) {
    }
    result << "    }\n  //---\n    super.updateObservers (removedSet: inRemovedSet, addedSet: inAddedSet)\n }\n\n  //····················································································································\n\n  override final var selection : EBSelection < [" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << "] > { return .single (self.mInternalArrayValue.values) }\n\n  //····················································································································\n\n  override func setProp (_ inValue : EBReferenceArray <" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << ">) { self.mInternalArrayValue = inValue }\n\n  //····················································································································\n\n  final override var propval : EBReferenceArray <" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << "> { return self.mInternalArrayValue }\n\n  //····················································································································\n\n  final func remove (_ object : " ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << ") {\n    if let idx = self.mInternalArrayValue.firstIndex (of: object) {\n      self.mInternalArrayValue.remove (at: idx)\n    }\n  }\n\n  //····················································································································\n\n  final func add (_ object : " ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << ") {\n    if !self.internalSetValue.contains (object) {\n      self.mInternalArrayValue.append (object)\n    }\n  }\n\n  //····················································································································\n  //   signature\n  //····················································································································\n\n  private weak final var mSignatureObserver : EBSignatureObserverProtocol\? = nil // SOULD BE WEAK\n\n  //····················································································································\n\n  private final var mSignatureCache : UInt32\? = nil\n\n  //····················································································································\n\n  final func setSignatureObserver (observer : EBSignatureObserverProtocol\?) {\n    self.mSignatureObserver\?.clearSignatureCache ()\n    self.mSignatureObserver = observer\n    observer\?.clearSignatureCache ()\n    self.clearSignatureCache ()\n }\n\n  //····················································································································\n\n  final func signature () -> UInt32 {\n    let computedSignature : UInt32\n    if let s = self.mSignatureCache {\n      computedSignature = s\n    }else{\n      computedSignature = self.computeSignature ()\n      self.mSignatureCache = computedSignature\n    }\n    return computedSignature\n  }\n\n  //····················································································································\n\n  final private func computeSignature () -> UInt32 {\n    var crc : UInt32 = 0\n    for object in self.mInternalArrayValue.values {\n      crc.accumulate (u32: object.signature ())\n    }\n    return crc\n  }\n\n  //····················································································································\n\n  final func clearSignatureCache () {\n    if self.mSignatureCache != nil {\n      self.mSignatureCache = nil\n      self.mSignatureObserver\?.clearSignatureCache ()\n    }\n  }\n\n  //····················································································································\n\n}\n" ;
  }
  result << "\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n//    " ;
  result << GALGAS_string ("Preferences array: ").add_operation (in_ENTITY_5F_NAME, inCompiler COMMA_SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 793)).stringValue () ;
  result << "\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\n" ;
  const enumGalgasBool test_8 = in_GENERATE_5F_CLASS_5F_PreferencesArrayOf_5F_.operator_not (SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 796)).boolEnum () ;
  if (kBoolTrue == test_8) {
    result << "// PreferencesArrayOf_" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << " is useless.\n" ;
  }else if (kBoolFalse == test_8) {
    result << "final class PreferencesArrayOf_" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << " : StoredArrayOf_" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << " {\n\n  //····················································································································\n\n  private let mPrefKey : String\n  private let mObserverForWritingPreferences = EBOutletEvent ()\n\n  //····················································································································\n\n  init (prefKey inPrefKey : String) {\n    self.mPrefKey = inPrefKey\n    super.init (usedForSignature: false, key: nil)\n    if let array = UserDefaults.standard.array (forKey: inPrefKey) as\? [[String : Any]] {\n      var objectArray = EBReferenceArray <" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << "> ()\n      for dictionary in array {\n        let object = newInstanceOfEntityNamed (self.undoManager, \"" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << "\") as! " ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << "\n        object.setUpProperties (withDictionary: dictionary, managedObjectArray: [])\n        objectArray.append (object)\n      }\n      self.setProp (objectArray)\n    }\n" ;
    GALGAS_uint index_35375_ (0) ;
    if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
      cEnumerator_atomicPropertyGenerationList enumerator_35375 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
      while (enumerator_35375.hasCurrentObject ()) {
        result << "    toMany_" ;
        result << enumerator_35375.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << "_StartsToBeObserved (by: self.mObserverForWritingPreferences)\n" ;
        index_35375_.increment () ;
        enumerator_35375.gotoNextObject () ;
      }
    }
    result << "    self.mObserverForWritingPreferences.mEventCallBack = { [weak self] in self\?.writeInPreferences () }\n }\n\n  //····················································································································\n\n  private func writeInPreferences () {\n    var dictionaryArray = [[String  : Any]] ()\n    for object in self.mInternalArrayValue.values {\n      var d = [String  : Any] ()\n      object.savePropertiesAndRelationshipsIntoDictionary (&d)\n      d [ENTITY_KEY] = nil // Remove entity key, not used in preferences\n      dictionaryArray.append (d)\n    }\n    UserDefaults.standard.set (dictionaryArray, forKey: self.mPrefKey)\n  }\n\n  //····················································································································\n\n}\n" ;
  }
  result << "\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'entityGenerationTemplate entityToOneImplementationInSwift'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_entityGenerationTemplate_entityToOneImplementationInSwift (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & in_ENTITY_5F_NAME,
                                                                                             const GALGAS_string & /* in_SUPER_5F_CLASS_5F_NAME */,
                                                                                             const GALGAS_bool & in_HANDLING_5F_OPPOSITE,
                                                                                             const GALGAS_propertyGenerationList & /* in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION */,
                                                                                             const GALGAS_atomicProxyGenerationList & /* in_PROXY_5F_LIST_5F_FOR_5F_GENERATION */,
                                                                                             const GALGAS_toManyProxyGenerationList & /* in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION */,
                                                                                             const GALGAS_atomicPropertyGenerationList & in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                             const GALGAS_transientPropertyGenerationList & in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                             const GALGAS_computedPropertyGenerationList & in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                             const GALGAS_toOnePropertyGenerationList & /* in_TO_5F_ONE_5F_RELATIONSHIP_5F_LIST */,
                                                                                             const GALGAS_toManyPropertyGenerationList & in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST,
                                                                                             const GALGAS_stringset & /* in_SIGNATURE_5F_SET */,
                                                                                             const GALGAS_bool & /* in_IS_5F_GRAPHIC_5F_ENTITY */,
                                                                                             const GALGAS_bool & /* in_IS_5F_ABSTRACT */,
                                                                                             const GALGAS_stringset & /* in_OVERRIDEN_5F_TRANSIENTS */,
                                                                                             const GALGAS_externSwiftDelegateList & /* in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nimport AppKit\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n//    ReadOnlyObject_" ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << "\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nclass ReadOnlyObject_" ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << " : ReadOnlyAbstractObjectProperty <" ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << "> {\n\n  //····················································································································\n\n  override func notifyModelDidChangeFrom (oldValue inOldValue : " ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << "\?) {\n    super.notifyModelDidChangeFrom (oldValue: inOldValue)\n  //--- Remove observers from removed objects\n" ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.getter_length (SOURCE_FILE ("entity-toone.swift.galgasTemplate", 18)).add_operation (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.getter_length (SOURCE_FILE ("entity-toone.swift.galgasTemplate", 18)), inCompiler COMMA_SOURCE_FILE ("entity-toone.swift.galgasTemplate", 18)).add_operation (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION.getter_length (SOURCE_FILE ("entity-toone.swift.galgasTemplate", 18)), inCompiler COMMA_SOURCE_FILE ("entity-toone.swift.galgasTemplate", 18)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "    if let oldValue = inOldValue {\n" ;
    GALGAS_uint index_1263_ (0) ;
    if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
      cEnumerator_atomicPropertyGenerationList enumerator_1263 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
      while (enumerator_1263.hasCurrentObject ()) {
        result << "      oldValue." ;
        result << enumerator_1263.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << "_property.stopsBeingObserved (by: self." ;
        result << enumerator_1263.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << "_property) // Stored property\n" ;
        index_1263_.increment () ;
        enumerator_1263.gotoNextObject () ;
      }
    }
    GALGAS_uint index_1465_ (0) ;
    if (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
      cEnumerator_transientPropertyGenerationList enumerator_1465 (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kENUMERATION_UP) ;
      while (enumerator_1465.hasCurrentObject ()) {
        result << "      oldValue." ;
        result << enumerator_1465.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << "_property.stopsBeingObserved (by: self." ;
        result << enumerator_1465.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << "_property) // Transient property\n" ;
        index_1465_.increment () ;
        enumerator_1465.gotoNextObject () ;
      }
    }
    GALGAS_uint index_1678_ (0) ;
    if (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
      cEnumerator_computedPropertyGenerationList enumerator_1678 (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kENUMERATION_UP) ;
      while (enumerator_1678.hasCurrentObject ()) {
        result << "      oldValue." ;
        result << enumerator_1678.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << "_property.stopsBeingObserved (by: self." ;
        result << enumerator_1678.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << "_property) // Computed property\n" ;
        index_1678_.increment () ;
        enumerator_1678.gotoNextObject () ;
      }
    }
    GALGAS_uint index_1874_ (0) ;
    if (in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST.isValid ()) {
      cEnumerator_toManyPropertyGenerationList enumerator_1874 (in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_1874.hasCurrentObject ()) {
        result << "      if let relay = self.mObserversOf_" ;
        result << enumerator_1874.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << " { // to Many\n        oldValue." ;
        result << enumerator_1874.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << "_property.stopsBeingObserved (by: relay)\n      }\n" ;
        index_1874_.increment () ;
        enumerator_1874.gotoNextObject () ;
      }
    }
    result << "    }\n" ;
  }else if (kBoolFalse == test_0) {
  }
  result << "  //--- Add observers to added objects\n" ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.getter_length (SOURCE_FILE ("entity-toone.swift.galgasTemplate", 37)).add_operation (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.getter_length (SOURCE_FILE ("entity-toone.swift.galgasTemplate", 37)), inCompiler COMMA_SOURCE_FILE ("entity-toone.swift.galgasTemplate", 37)).add_operation (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION.getter_length (SOURCE_FILE ("entity-toone.swift.galgasTemplate", 37)), inCompiler COMMA_SOURCE_FILE ("entity-toone.swift.galgasTemplate", 37)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "    if let newValue = self.mWeakInternalValue {\n" ;
    GALGAS_uint index_2402_ (0) ;
    if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
      cEnumerator_atomicPropertyGenerationList enumerator_2402 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
      while (enumerator_2402.hasCurrentObject ()) {
        result << "      newValue." ;
        result << enumerator_2402.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << "_property.startsToBeObserved (by: self." ;
        result << enumerator_2402.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << "_property) // Stored property\n" ;
        index_2402_.increment () ;
        enumerator_2402.gotoNextObject () ;
      }
    }
    GALGAS_uint index_2604_ (0) ;
    if (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
      cEnumerator_transientPropertyGenerationList enumerator_2604 (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kENUMERATION_UP) ;
      while (enumerator_2604.hasCurrentObject ()) {
        result << "      newValue." ;
        result << enumerator_2604.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << "_property.startsToBeObserved (by: self." ;
        result << enumerator_2604.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << "_property) // Transient property\n" ;
        index_2604_.increment () ;
        enumerator_2604.gotoNextObject () ;
      }
    }
    GALGAS_uint index_2817_ (0) ;
    if (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
      cEnumerator_computedPropertyGenerationList enumerator_2817 (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kENUMERATION_UP) ;
      while (enumerator_2817.hasCurrentObject ()) {
        result << "      newValue." ;
        result << enumerator_2817.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << "_property.startsToBeObserved (by: self." ;
        result << enumerator_2817.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << "_property) // Computed property\n" ;
        index_2817_.increment () ;
        enumerator_2817.gotoNextObject () ;
      }
    }
    GALGAS_uint index_3013_ (0) ;
    if (in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST.isValid ()) {
      cEnumerator_toManyPropertyGenerationList enumerator_3013 (in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_3013.hasCurrentObject ()) {
        result << "      if let relay = self.mObserversOf_" ;
        result << enumerator_3013.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << " { // to Many\n        newValue." ;
        result << enumerator_3013.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << "_property.startsToBeObserved (by: relay)\n      }\n" ;
        index_3013_.increment () ;
        enumerator_3013.gotoNextObject () ;
      }
    }
    result << "    }\n" ;
  }else if (kBoolFalse == test_1) {
  }
  result << "  }\n\n" ;
  GALGAS_uint index_3293_ (0) ;
  if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_atomicPropertyGenerationList enumerator_3293 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_3293.hasCurrentObject ()) {
      result << "  //····················································································································\n  //   Observers of '" ;
      result << enumerator_3293.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "' stored property\n  //····················································································································\n\n  final let " ;
      result << enumerator_3293.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_property = EBTransientProperty <" ;
      result << extensionGetter_swiftTypeName (enumerator_3293.current_mProperty (HERE).readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("entity-toone.swift.galgasTemplate", 64)).stringValue () ;
      result << "\?> ()\n\n" ;
      index_3293_.increment () ;
      enumerator_3293.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3777_ (0) ;
  if (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    cEnumerator_transientPropertyGenerationList enumerator_3777 (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kENUMERATION_UP) ;
    while (enumerator_3777.hasCurrentObject ()) {
      result << "  //····················································································································\n  //   Observers of '" ;
      result << enumerator_3777.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "' transient property\n  //····················································································································\n\n  final let " ;
      result << enumerator_3777.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_property = EBTransientProperty <" ;
      result << extensionGetter_swiftTypeName (enumerator_3777.current_mProperty (HERE).readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("entity-toone.swift.galgasTemplate", 73)).stringValue () ;
      result << "\?> ()\n\n" ;
      index_3777_.increment () ;
      enumerator_3777.gotoNextObject () ;
    }
  }
  GALGAS_uint index_4271_ (0) ;
  if (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    cEnumerator_computedPropertyGenerationList enumerator_4271 (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kENUMERATION_UP) ;
    while (enumerator_4271.hasCurrentObject ()) {
      result << "  //····················································································································\n  //   Observers of '" ;
      result << enumerator_4271.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "' computed property\n  //····················································································································\n\n  final let " ;
      result << enumerator_4271.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_property = EBTransientProperty <" ;
      result << extensionGetter_swiftTypeName (enumerator_4271.current_mProperty (HERE).readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("entity-toone.swift.galgasTemplate", 82)).stringValue () ;
      result << "\?> ()\n\n" ;
      index_4271_.increment () ;
      enumerator_4271.gotoNextObject () ;
    }
  }
  GALGAS_uint index_4748_ (0) ;
  if (in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST.isValid ()) {
    cEnumerator_toManyPropertyGenerationList enumerator_4748 (in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4748.hasCurrentObject ()) {
      result << "  //····················································································································\n  //   Observable toMany property: " ;
      result << enumerator_4748.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "\n  //····················································································································\n\n  private final var mObserversOf_" ;
      result << enumerator_4748.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " : EBObservedObserver\? = nil\n\n  //····················································································································\n\n  final func toMany_" ;
      result << enumerator_4748.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_StartsToBeObserved (by inObserver : EBObserverProtocol) {\n    let relay : EBObservedObserver\n    if let r = self.mObserversOf_" ;
      result << enumerator_4748.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " {\n      relay = r\n    }else{\n      relay = EBObservedObserver ()\n      self.mWeakInternalValue\?." ;
      result << enumerator_4748.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_property.startsToBeObserved (by: relay)\n      self.mObserversOf_" ;
      result << enumerator_4748.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " = relay\n    }\n    relay.startsToBeObserved (by: inObserver)\n  }\n\n  //····················································································································\n\n  final func toMany_" ;
      result << enumerator_4748.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_StopsBeingObserved (by inObserver : EBObserverProtocol) {\n    self.mObserversOf_" ;
      result << enumerator_4748.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "\?.stopsBeingObserved (by: inObserver)\n  }\n\n" ;
      index_4748_.increment () ;
      enumerator_4748.gotoNextObject () ;
    }
  }
  result << "  //····················································································································\n  //   INIT\n  //····················································································································\n\n  override init () {\n    super.init ()\n" ;
  GALGAS_uint index_6552_ (0) ;
  if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_atomicPropertyGenerationList enumerator_6552 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_6552.hasCurrentObject ()) {
      result << "  //--- Configure " ;
      result << enumerator_6552.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " simple stored property\n    self." ;
      result << enumerator_6552.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_property.mReadModelFunction = { [weak self] in\n      return self\?.mWeakInternalValue\?." ;
      result << enumerator_6552.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_property.optionalSelection \?\? .single (nil)\n    }\n" ;
      index_6552_.increment () ;
      enumerator_6552.gotoNextObject () ;
    }
  }
  GALGAS_uint index_6895_ (0) ;
  if (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    cEnumerator_transientPropertyGenerationList enumerator_6895 (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kENUMERATION_UP) ;
    while (enumerator_6895.hasCurrentObject ()) {
      result << "  //--- Configure " ;
      result << enumerator_6895.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " transient property\n    self." ;
      result << enumerator_6895.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_property.mReadModelFunction = { [weak self] in\n      return self\?.mWeakInternalValue\?." ;
      result << enumerator_6895.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_property.optionalSelection \?\? .single (nil)\n    }\n" ;
      index_6895_.increment () ;
      enumerator_6895.gotoNextObject () ;
    }
  }
  GALGAS_uint index_7242_ (0) ;
  if (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    cEnumerator_computedPropertyGenerationList enumerator_7242 (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kENUMERATION_UP) ;
    while (enumerator_7242.hasCurrentObject ()) {
      result << "  //--- Configure " ;
      result << enumerator_7242.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " computed property\n    self." ;
      result << enumerator_7242.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_property.mReadModelFunction = { [weak self] in\n      return self\?.mWeakInternalValue\?." ;
      result << enumerator_7242.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_property.optionalSelection \?\? .single (nil)\n    }\n" ;
      index_7242_.increment () ;
      enumerator_7242.gotoNextObject () ;
    }
  }
  result << "  }\n\n  //····················································································································\n\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n//    StoredObject_" ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << "\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nfinal class StoredObject_" ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << " : ReadOnlyObject_" ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << ", EBSignatureObserverProtocol, DocumentStorablePropertyAndRelationshipProtocol {\n\n //····················································································································\n\n  init (usedForSignature inUsedForSignature : Bool, strongRef inStrongReference : Bool, key inKey : String\?) {\n    self.mUsedForSignature = inUsedForSignature\n    self.mIsStrongReference = inStrongReference\n    self.mKey = inKey\n    super.init ()\n  }\n\n  //····················································································································\n\n  private let mKey : String\?\n  var key : String\? { return self.mKey }\n  \n  //····················································································································\n\n  func initialize (fromDictionary inDictionary : [String : Any],\n                   managedObjectArray inManagedObjectArray : [EBManagedObject]) {\n    if let key = self.mKey, let objectSavingIndex = inDictionary [key] as\? Int {\n      let object = inManagedObjectArray [objectSavingIndex] as! " ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << "\n      self.setProp (object)\n    }\n  }\n\n  //····················································································································\n\n  func initialize (fromRange inRange : NSRange, ofData inData : Data, _ inRawObjectArray : [RawObject]) {\n    if let idx = inData.base62EncodedInt (range: inRange) {\n      let object = inRawObjectArray [idx].object as! " ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << "\n      self.setProp (object)\n    }\n  }\n\n  //····················································································································\n\n  func store (inDictionary ioDictionary : inout [String : Any]) {\n    if let key = self.mKey, let idx = self.mWeakInternalValue\?.savingIndex {\n      ioDictionary [key] = idx\n    }\n  }\n\n  //····················································································································\n\n  func enterRelationshipObjects (intoArray ioArray : inout [EBManagedObject]) {\n    if self.mKey != nil, let object = self.mWeakInternalValue {\n      ioArray.append (object)\n    }\n  }\n\n  //····················································································································\n\n  func appendValueTo (data ioData : inout Data) {\n    if let object = self.propval {\n      ioData.append (base62Encoded: object.savingIndex)\n    }\n  }\n\n  //····················································································································\n  //   Signature \?\n  //····················································································································\n\n  private let mUsedForSignature : Bool\n\n  //····················································································································\n  //   Undo manager\n  //····················································································································\n\n  weak var undoManager : UndoManager\? = nil // SOULD BE WEAK\n\n" ;
  const enumGalgasBool test_2 = in_HANDLING_5F_OPPOSITE.boolEnum () ;
  if (kBoolTrue == test_2) {
    result << "  //····················································································································\n  //   Opposite relationship management\n  //····················································································································\n\n  private var mSetOppositeRelationship : Optional < (_ inManagedObject : " ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << ") -> Void > = nil\n  private var mResetOppositeRelationship : Optional < (_ inManagedObject : " ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << ") -> Void > = nil\n\n  //····················································································································\n\n  func setOppositeRelationShipFunctions (setter inSetter : @escaping (_ inManagedObject : " ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << ") -> Void,\n                                         resetter inResetter : @escaping (_ inManagedObject : " ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << ") -> Void) {\n    self.mSetOppositeRelationship = inSetter\n    self.mResetOppositeRelationship = inResetter\n  }\n\n" ;
  }else if (kBoolFalse == test_2) {
  }
  result << "  //····················································································································\n  // Model will change\n  //····················································································································\n\n  override func notifyModelDidChangeFrom (oldValue inOldValue : " ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << "\?) {\n  //--- Register old value in undo manager\n    self.undoManager\?.registerUndo (withTarget: self) { $0.mWeakInternalValue = inOldValue }\n  //---\n    if let object = inOldValue {\n      if self.mUsedForSignature {\n        object.setSignatureObserver (observer: nil)\n      }\n" ;
  const enumGalgasBool test_3 = in_HANDLING_5F_OPPOSITE.boolEnum () ;
  if (kBoolTrue == test_3) {
    result << "      self.mResetOppositeRelationship\? (object)\n" ;
  }else if (kBoolFalse == test_3) {
  }
  result << "    }\n  //---\n    if let object = self.mWeakInternalValue {\n      if self.mUsedForSignature {\n        object.setSignatureObserver (observer: self)\n      }\n" ;
  const enumGalgasBool test_4 = in_HANDLING_5F_OPPOSITE.boolEnum () ;
  if (kBoolTrue == test_4) {
    result << "      self.mSetOppositeRelationship\? (object)\n" ;
  }else if (kBoolFalse == test_4) {
  }
  result << "    }\n  //---\n    super.notifyModelDidChangeFrom (oldValue: inOldValue)\n  }\n\n  //····················································································································\n  // Model did change\n  //····················································································································\n\n  override func notifyModelDidChange () {\n  //--- Notify observers\n    self.observedObjectDidChange ()\n    self.clearSignatureCache ()\n  //---\n    super.notifyModelDidChange ()\n  }\n\n  //····················································································································\n\n  override var selection : EBSelection < " ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << "\? > {\n    if let object = self.mWeakInternalValue {\n      return .single (object)\n    }else{\n      return .empty\n    }\n  }\n\n  //····················································································································\n\n  override var propval : " ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << "\? { return self.mWeakInternalValue }\n\n  //····················································································································\n  //   setProp\n  //····················································································································\n\n  private let mIsStrongReference : Bool\n  private var mStrongInternalValue : EBManagedObject\? = nil // Only used for retaining\n\n  //····················································································································\n\n  func setProp (_ inValue : " ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << "\?) {\n    self.mWeakInternalValue = inValue\n    if self.mIsStrongReference {\n      self.mStrongInternalValue = inValue\n    }\n  }\n\n  //····················································································································\n  //   signature\n  //····················································································································\n\n  private weak var mSignatureObserver : EBSignatureObserverProtocol\? = nil // SOULD BE WEAK\n\n  //····················································································································\n\n  private var mSignatureCache : UInt32\? = nil\n\n  //····················································································································\n\n  func setSignatureObserver (observer inObserver : EBSignatureObserverProtocol\?) {\n    self.mSignatureObserver\?.clearSignatureCache ()\n    self.mSignatureObserver = inObserver\n    inObserver\?.clearSignatureCache ()\n    self.clearSignatureCache ()\n  }\n\n  //····················································································································\n\n  func signature () -> UInt32 {\n    let computedSignature : UInt32\n    if let s = self.mSignatureCache {\n      computedSignature = s\n    }else{\n      computedSignature = self.computeSignature ()\n      self.mSignatureCache = computedSignature\n    }\n    return computedSignature\n  }\n\n  //····················································································································\n\n  final private func computeSignature () -> UInt32 {\n    var crc : UInt32 = 0\n    if let object = self.mWeakInternalValue {\n      crc.accumulate (u32: object.signature ())\n    }\n    return crc\n  }\n\n  //····················································································································\n\n  func clearSignatureCache () {\n    if self.mSignatureCache != nil {\n      self.mSignatureCache = nil\n      self.mSignatureObserver\?.clearSignatureCache ()\n    }\n  }\n\n  //····················································································································\n\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'entityGenerationTemplate managedObjectFactory'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_entityGenerationTemplate_managedObjectFactory (C_Compiler * /* inCompiler */,
                                                                                 const GALGAS_entityListForGeneratingEBManagedObjectContext & in_ENTITY_5F_LIST
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nimport AppKit\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nlet ENTITY_KEY = \"--entity\"\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nfileprivate let kEntityDictionary : [String : EBManagedObject.Type] = [\n" ;
  GALGAS_uint index_722_ (0) ;
  if (in_ENTITY_5F_LIST.isValid ()) {
    cEnumerator_entityListForGeneratingEBManagedObjectContext enumerator_722 (in_ENTITY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_722.hasCurrentObject ()) {
      result << "  \"" ;
      result << enumerator_722.current_mEntityName (HERE).stringValue () ;
      result << "\" : " ;
      result << enumerator_722.current_mEntityName (HERE).stringValue () ;
      result << ".self" ;
      GALGAS_uint index_809_ (0) ;
      if (enumerator_722.current_mObsoleteEntityNames (HERE).isValid ()) {
        cEnumerator_lstringlist enumerator_809 (enumerator_722.current_mObsoleteEntityNames (HERE), kENUMERATION_UP) ;
        while (enumerator_809.hasCurrentObject ()) {
          result << ",\n  \"" ;
          result << enumerator_809.current_mValue (HERE).readProperty_string ().stringValue () ;
          result << "\" : " ;
          result << enumerator_722.current_mEntityName (HERE).stringValue () ;
          result << ".self" ;
          index_809_.increment () ;
          enumerator_809.gotoNextObject () ;
        }
      }
      if (enumerator_722.hasNextObject ()) {
        result << ",\n" ;
      }
      index_722_.increment () ;
      enumerator_722.gotoNextObject () ;
    }
  }
  result << "\n]\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n//  newInstanceOfEntityNamed\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\n@MainActor func newInstanceOfEntityNamed (_ inUndoManager : UndoManager\?,\n                                          _ inEntityTypeName : String) -> EBManagedObject {\n  let T = kEntityDictionary [inEntityTypeName]!\n  return T.init (inUndoManager)\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n//   makeManagedObjectFromDictionary\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\n@MainActor func makeManagedObjectFromDictionary (_ inUndoManager : UndoManager\?,\n                                                 _ inDictionary : [String : Any]) -> EBManagedObject {\n  let entityName = inDictionary [ENTITY_KEY] as! String\n  let object = newInstanceOfEntityNamed (inUndoManager, entityName)\n  object.setUpProperties (withDictionary: inDictionary, managedObjectArray: [])\n  //  object.setUpAtomicPropertiesWithDictionary (inDictionary)\n  return object\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@autoLayoutDocumentDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_autoLayoutDocumentDeclarationAST::method_enterInPrecedenceGraph (GALGAS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_autoLayoutDocumentDeclarationAST temp_0 = this ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mClassName (), temp_1, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 47)) ;
  }
  {
  const GALGAS_autoLayoutDocumentDeclarationAST temp_2 = this ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addEdge (temp_2.readProperty_mClassName (), temp_3.readProperty_mRootEntityName () COMMA_SOURCE_FILE ("document-auto-layout.ggs", 48)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutDocumentDeclarationAST nodeKey'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_autoLayoutDocumentDeclarationAST::getter_nodeKey (C_Compiler */* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result_result ; // Returned variable
  const GALGAS_autoLayoutDocumentDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mClassName () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@autoLayoutDocumentDeclarationAST firstAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_autoLayoutDocumentDeclarationAST::method_firstAnalysisPhase (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                       GALGAS_generationStruct & ioArgument_ioGeneration,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_actionMap var_actionMap_5943 ;
  {
  const GALGAS_autoLayoutDocumentDeclarationAST temp_0 = this ;
  routine_buildActionMap (temp_0.readProperty_mActionDeclarationList (), var_actionMap_5943, inCompiler  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 159)) ;
  }
  {
  const GALGAS_autoLayoutDocumentDeclarationAST temp_1 = this ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (temp_1.readProperty_mClassName (), GALGAS_classKind::constructor_document (temp_2.readProperty_mRootEntityName ()  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 162)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("document-auto-layout.ggs", 163)), var_actionMap_5943, GALGAS_propertyGenerationList::constructor_emptyList (SOURCE_FILE ("document-auto-layout.ggs", 165)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 160)) ;
  }
  cEnumerator_actionMap enumerator_6110 (var_actionMap_5943, kENUMERATION_UP) ;
  while (enumerator_6110.hasCurrentObject ()) {
    const GALGAS_autoLayoutDocumentDeclarationAST temp_3 = this ;
    ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_actionFileGeneration::constructor_new (temp_3.readProperty_mClassName ().readProperty_string (), enumerator_6110.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 168))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 168)) ;
    enumerator_6110.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@autoLayoutDocumentDeclarationAST fourthAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_autoLayoutDocumentDeclarationAST::method_fourthAnalysisPhase (GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        GALGAS_generationStruct & ioArgument_ioGeneration,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyMap var_preferencesPropertyMap_6656 ;
  GALGAS_classKind joker_6623 ; // Joker input parameter
  GALGAS_actionMap joker_6662_2 ; // Joker input parameter
  GALGAS_propertyGenerationList joker_6662_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 182)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("document-auto-layout.ggs", 182))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 182)), joker_6623, var_preferencesPropertyMap_6656, joker_6662_2, joker_6662_1, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 181)) ;
  GALGAS_propertyMap var_documentPropertyMap_6815 ;
  GALGAS_actionMap var_documentActionMap_6842 ;
  GALGAS_propertyGenerationList var_documentPropertyGenerationList_6882 ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_0 = this ;
  GALGAS_classKind joker_6785 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (GALGAS_lstring::constructor_new (temp_0.readProperty_mClassName ().readProperty_string (), GALGAS_location::constructor_nowhere (SOURCE_FILE ("document-auto-layout.ggs", 189))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 189)), joker_6785, var_documentPropertyMap_6815, var_documentActionMap_6842, var_documentPropertyGenerationList_6882, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 188)) ;
  GALGAS_propertyMap var_rootPropertyMap_7019 ;
  GALGAS_actionMap var_rootActionMap_7049 ;
  GALGAS_propertyGenerationList var_rootPropertyGenerationList_7092 ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_1 = this ;
  GALGAS_classKind joker_6993 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mRootEntityName (), joker_6993, var_rootPropertyMap_7019, var_rootActionMap_7049, var_rootPropertyGenerationList_7092, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 196)) ;
  GALGAS_regularBindingsGenerationList var_regularBindingsGenerationList_7456 ;
  GALGAS_multipleBindingGenerationList var_multipleBindingGenerationList_7522 ;
  GALGAS_actionBindingListForGeneration var_actionBindingListForGeneration_7594 ;
  GALGAS_decoratedOutletMap var_outletMap_7633 ;
  GALGAS_tableViewBindingGenerationList var_tableViewBindingGenerationList_7705 ;
  GALGAS_ebViewGraphicControllerBindingGenerationList var_ebViewGraphicControllerBindingGenerationList_7805 ;
  {
  const GALGAS_autoLayoutDocumentDeclarationAST temp_2 = this ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_3 = this ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_4 = this ;
  routine_analyzeOutlets (GALGAS_bool (false), var_rootPropertyMap_7019, var_preferencesPropertyMap_6656, temp_2.readProperty_mRootEntityName ().readProperty_string (), ioArgument_ioSemanticContext, temp_3.readProperty_mOutletDeclarationList (), var_documentPropertyMap_6815, var_documentActionMap_6842, temp_4.readProperty_mClassName ().readProperty_string (), ioArgument_ioGeneration, var_regularBindingsGenerationList_7456, var_multipleBindingGenerationList_7522, var_actionBindingListForGeneration_7594, var_outletMap_7633, var_tableViewBindingGenerationList_7705, var_ebViewGraphicControllerBindingGenerationList_7805, inCompiler  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 204)) ;
  }
  const GALGAS_autoLayoutDocumentDeclarationAST temp_5 = this ;
  cEnumerator_arrayControllerBindingListAST enumerator_7878 (temp_5.readProperty_mArrayControllerBindingListAST (), kENUMERATION_UP) ;
  while (enumerator_7878.hasCurrentObject ()) {
    switch (enumerator_7878.current_mHiddenSelectionViewBindingDescriptor (HERE).enumValue ()) {
    case GALGAS_multipleBindingDescriptor::kNotBuilt:
      break ;
    case GALGAS_multipleBindingDescriptor::kEnum_noBinding:
      {
      }
      break ;
    case GALGAS_multipleBindingDescriptor::kEnum_binding:
      {
        const cEnumAssociatedValues_multipleBindingDescriptor_binding * extractPtr_8623 = (const cEnumAssociatedValues_multipleBindingDescriptor_binding *) (enumerator_7878.current_mHiddenSelectionViewBindingDescriptor (HERE).unsafePointer ()) ;
        const GALGAS_abstractBooleanMultipleBindingExpressionAST extractedValue_8055_expression = extractPtr_8623->mAssociatedValue0 ;
        GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_8332 ;
        GALGAS_typeKind var_type_8360 ;
        GALGAS_location var_errorLocation_8397 ;
        callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_8055_expression.ptr (), GALGAS_bool (false), var_rootPropertyMap_7019, ioArgument_ioSemanticContext, var_documentPropertyMap_6815, var_preferencesPropertyMap_6656, var_hiddenExpression_8332, var_type_8360, var_errorLocation_8397, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 228)) ;
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = var_type_8360.getter_isBoolType (SOURCE_FILE ("document-auto-layout.ggs", 238)).operator_not (SOURCE_FILE ("document-auto-layout.ggs", 238)).boolEnum () ;
          if (kBoolTrue == test_6) {
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (var_errorLocation_8397, GALGAS_string ("expression is not boolean"), fixItArray7  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 239)) ;
          }
        }
        var_multipleBindingGenerationList_7522.addAssign_operation (enumerator_7878.current_mControllerName (HERE).readProperty_string (), GALGAS_string ("hidden"), var_hiddenExpression_8332  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 241)) ;
      }
      break ;
    }
    enumerator_7878.gotoNextObject () ;
  }
  GALGAS_autoLayoutViewDeclarationMap var_viewDeclarationMap_8733 = GALGAS_autoLayoutViewDeclarationMap::constructor_emptyMap (SOURCE_FILE ("document-auto-layout.ggs", 248)) ;
  GALGAS_viewGenerationList var_viewGenerationList_8783 = GALGAS_viewGenerationList::constructor_emptyList (SOURCE_FILE ("document-auto-layout.ggs", 249)) ;
  GALGAS_implicitViewFunctionGenerationList var_implicitViewFunctionGenerationList_8865 = GALGAS_implicitViewFunctionGenerationList::constructor_emptyList (SOURCE_FILE ("document-auto-layout.ggs", 250)) ;
  GALGAS_autoLayoutConfiguratorMap var_configuratorMap_8919 = GALGAS_autoLayoutConfiguratorMap::constructor_emptyMap (SOURCE_FILE ("document-auto-layout.ggs", 251)) ;
  GALGAS_autoLayoutOutletMap var_autoLayoutOutletMap_8971 = GALGAS_autoLayoutOutletMap::constructor_emptyMap (SOURCE_FILE ("document-auto-layout.ggs", 252)) ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_8 = this ;
  cEnumerator_astViewDeclarationList enumerator_9008 (temp_8.readProperty_mViewDeclarationList (), kENUMERATION_UP) ;
  while (enumerator_9008.hasCurrentObject ()) {
    {
    var_viewDeclarationMap_8733.setter_insertKey (enumerator_9008.current_mViewName (HERE), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 254)) ;
    }
    GALGAS_abstractViewGeneration var_viewGeneration_9490 ;
    const GALGAS_autoLayoutDocumentDeclarationAST temp_9 = this ;
    callExtensionMethod_checkView ((cPtr_astAbstractViewDeclaration *) enumerator_9008.current_mView (HERE).ptr (), enumerator_9008.current_mViewName (HERE).readProperty_string (), var_viewDeclarationMap_8733, GALGAS_bool (false), var_rootPropertyMap_7019, var_preferencesPropertyMap_6656, ioArgument_ioSemanticContext, var_documentPropertyMap_6815, var_documentActionMap_6842, temp_9.readProperty_mClassName ().readProperty_string (), ioArgument_ioSemanticContext.readProperty_mClassMap (), var_implicitViewFunctionGenerationList_8865, var_configuratorMap_8919, var_autoLayoutOutletMap_8971, var_viewGeneration_9490, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 255)) ;
    var_viewGenerationList_8783.addAssign_operation (enumerator_9008.current_mViewName (HERE).readProperty_string (), var_viewGeneration_9490  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 271)) ;
    enumerator_9008.gotoNextObject () ;
  }
  const GALGAS_autoLayoutDocumentDeclarationAST temp_10 = this ;
  var_viewDeclarationMap_8733.method_searchKey (temp_10.readProperty_mMainViewName (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 273)) ;
  ioArgument_ioGeneration.setter_setMGenerateEBManagedAutoLayoutDocumentSwift (GALGAS_bool (true) COMMA_SOURCE_FILE ("document-auto-layout.ggs", 300)) ;
  GALGAS_autoLayoutOutletLinkerGenerationList var_outletLinkerGenerationList_10698 = GALGAS_autoLayoutOutletLinkerGenerationList::constructor_emptyList (SOURCE_FILE ("document-auto-layout.ggs", 302)) ;
  GALGAS_stringset var_linkerNameSet_10734 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("document-auto-layout.ggs", 303)) ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_11 = this ;
  cEnumerator_astAutoLayoutOutletLinkerList enumerator_10771 (temp_11.readProperty_mOutletLinkerList (), kENUMERATION_UP) ;
  while (enumerator_10771.hasCurrentObject ()) {
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = var_linkerNameSet_10734.getter_hasKey (enumerator_10771.current_mLinkerName (HERE).readProperty_string () COMMA_SOURCE_FILE ("document-auto-layout.ggs", 305)).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_10771.current_mLinkerName (HERE).readProperty_location (), GALGAS_string ("duplicated linker name"), fixItArray13  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 306)) ;
      }
    }
    var_linkerNameSet_10734.addAssign_operation (enumerator_10771.current_mLinkerName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 308)) ;
    GALGAS__32_stringlist var_outletNameAndTypeNameList_11000 = GALGAS__32_stringlist::constructor_emptyList (SOURCE_FILE ("document-auto-layout.ggs", 309)) ;
    cEnumerator_lstringlist enumerator_11025 (enumerator_10771.current_mOutletNameList (HERE), kENUMERATION_UP) ;
    while (enumerator_11025.hasCurrentObject ()) {
      GALGAS_string var_outletTypeName_11115 ;
      GALGAS_bool var_outletIsArray_11141 ;
      var_autoLayoutOutletMap_8971.method_searchKey (enumerator_11025.current_mValue (HERE), var_outletTypeName_11115, var_outletIsArray_11141, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 311)) ;
      var_outletNameAndTypeNameList_11000.addAssign_operation (enumerator_11025.current_mValue (HERE).readProperty_string (), var_outletTypeName_11115  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 312)) ;
      enumerator_11025.gotoNextObject () ;
    }
    var_outletLinkerGenerationList_10698.addAssign_operation (enumerator_10771.current_mLinkerName (HERE).readProperty_string (), var_outletNameAndTypeNameList_11000  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 314)) ;
    enumerator_10771.gotoNextObject () ;
  }
  const GALGAS_autoLayoutDocumentDeclarationAST temp_14 = this ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_15 = this ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_16 = this ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_17 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_autoLayoutDocumentFileGeneration::constructor_new (temp_14.readProperty_mClassName ().readProperty_string (), temp_15.readProperty_mRootEntityName ().readProperty_string (), temp_16.readProperty_mMainViewName ().readProperty_string (), var_documentPropertyGenerationList_6882, var_outletMap_7633, var_autoLayoutOutletMap_8971, var_actionBindingListForGeneration_7594, var_regularBindingsGenerationList_7456, var_multipleBindingGenerationList_7522, var_tableViewBindingGenerationList_7705, var_ebViewGraphicControllerBindingGenerationList_7805, var_viewGenerationList_8783, var_implicitViewFunctionGenerationList_8865, var_configuratorMap_8919, temp_17.readProperty_mCustomSuperClassName (), var_outletLinkerGenerationList_10698  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 317))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 317)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@autoLayoutDocumentFileGeneration generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_autoLayoutDocumentFileGeneration::method_generateCode (const GALGAS_string constinArgument_inOutputDirectory,
                                                                 const GALGAS_generationStruct /* constinArgument_inGenerationStruct */,
                                                                 GALGAS_stringset & ioArgument_ioGeneratedFileSet,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_autoLayoutDocumentFileGeneration temp_0 = this ;
  const GALGAS_autoLayoutDocumentFileGeneration temp_1 = this ;
  const GALGAS_autoLayoutDocumentFileGeneration temp_2 = this ;
  const GALGAS_autoLayoutDocumentFileGeneration temp_3 = this ;
  const GALGAS_autoLayoutDocumentFileGeneration temp_4 = this ;
  const GALGAS_autoLayoutDocumentFileGeneration temp_5 = this ;
  const GALGAS_autoLayoutDocumentFileGeneration temp_6 = this ;
  const GALGAS_autoLayoutDocumentFileGeneration temp_7 = this ;
  const GALGAS_autoLayoutDocumentFileGeneration temp_8 = this ;
  const GALGAS_autoLayoutDocumentFileGeneration temp_9 = this ;
  const GALGAS_autoLayoutDocumentFileGeneration temp_10 = this ;
  const GALGAS_autoLayoutDocumentFileGeneration temp_11 = this ;
  const GALGAS_autoLayoutDocumentFileGeneration temp_12 = this ;
  const GALGAS_autoLayoutDocumentFileGeneration temp_13 = this ;
  GALGAS_string temp_14 ;
  const enumGalgasBool test_15 = GALGAS_bool (kIsEqual, temp_13.readProperty_mCustomSuperClassName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_15) {
    temp_14 = GALGAS_string ("EBAutoLayoutManagedDocument") ;
  }else if (kBoolFalse == test_15) {
    const GALGAS_autoLayoutDocumentFileGeneration temp_16 = this ;
    temp_14 = temp_16.readProperty_mCustomSuperClassName () ;
  }
  const GALGAS_autoLayoutDocumentFileGeneration temp_17 = this ;
  GALGAS_string var_s_14238 = GALGAS_string (filewrapperTemplate_autoLayoutDocumentGenerationTemplate_documentImplementation (inCompiler, temp_0.readProperty_mDocumentName (), temp_1.readProperty_mRootEntityName (), temp_2.readProperty_mMainViewName (), temp_3.readProperty_mDocumentPropertyGenearionList (), temp_4.readProperty_mOutletMap (), temp_5.readProperty_mAutoLayoutOutletMap (), temp_6.readProperty_mTargetActionList (), temp_7.readProperty_mRegularBindingsGenerationList (), temp_8.readProperty_multipleBindingGenerationList (), temp_9.readProperty_mTableViewBindingGenerationList (), temp_10.readProperty_mEBViewBindingGenerationList (), temp_11.readProperty_mViewDeclarationList (), temp_12.readProperty_mImplicitViewFunctionGenerationList (), temp_14, temp_17.readProperty_mOutletLinkerGenerationList () COMMA_SOURCE_FILE ("document-auto-layout.ggs", 381))) ;
  const GALGAS_autoLayoutDocumentFileGeneration temp_18 = this ;
  GALGAS_string var_fileName_14964 = GALGAS_string ("document-").add_operation (temp_18.readProperty_mDocumentName (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 399)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 399)) ;
  ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_14964  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 400)) ;
  {
  GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_14964, var_s_14238, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 401)) ;
  }
  const GALGAS_autoLayoutDocumentFileGeneration temp_19 = this ;
  cEnumerator_autoLayoutConfiguratorMap enumerator_15149 (temp_19.readProperty_mConfiguratorMap (), kENUMERATION_UP) ;
  while (enumerator_15149.hasCurrentObject ()) {
    const GALGAS_autoLayoutDocumentFileGeneration temp_20 = this ;
    GALGAS_string var_s_15188 = GALGAS_string (filewrapperTemplate_autoLayoutDocumentGenerationTemplate_documentOutletConfiguratorImplementation (inCompiler, temp_20.readProperty_mDocumentName (), enumerator_15149.current_lkey (HERE).readProperty_string (), enumerator_15149.current_mAutoLayoutOutletTypeName (HERE) COMMA_SOURCE_FILE ("document-auto-layout.ggs", 407))) ;
    GALGAS_string var_header_15375 = GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 412)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 412)).add_operation (GALGAS_string ("\n//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n//"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 412)).add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 414)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 414)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 414)).add_operation (GALGAS_string ("import AppKit\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 414)).add_operation (GALGAS_string ("//"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 415)).add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 416)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 416)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 416)) ;
    const GALGAS_autoLayoutDocumentFileGeneration temp_21 = this ;
    GALGAS_string var_fileName_15725 = GALGAS_string ("configurator-").add_operation (temp_21.readProperty_mDocumentName (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 417)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 417)).add_operation (enumerator_15149.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 417)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 417)) ;
    ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_15725  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 418)) ;
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_15725, GALGAS_string ("//"), var_header_15375, GALGAS_string ("\n\n"), var_s_15188, GALGAS_string ("INSERT CONFIGURATION CODE\n"), GALGAS_string ("  }\n}\n\n//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 427)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 427)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 427)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 419)) ;
    }
    enumerator_15149.gotoNextObject () ;
  }
  const GALGAS_autoLayoutDocumentFileGeneration temp_22 = this ;
  cEnumerator_autoLayoutOutletLinkerGenerationList enumerator_16304 (temp_22.readProperty_mOutletLinkerGenerationList (), kENUMERATION_UP) ;
  while (enumerator_16304.hasCurrentObject ()) {
    const GALGAS_autoLayoutDocumentFileGeneration temp_23 = this ;
    GALGAS_string var_s_16354 = GALGAS_string (filewrapperTemplate_autoLayoutDocumentGenerationTemplate_outletLinkerImplementation (inCompiler, temp_23.readProperty_mDocumentName (), enumerator_16304.current_mLinkerName (HERE), enumerator_16304.current_mOutletNameAndTypeNameList (HERE) COMMA_SOURCE_FILE ("document-auto-layout.ggs", 432))) ;
    GALGAS_string var_header_16531 = GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 437)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 437)).add_operation (GALGAS_string ("\n//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n//"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 437)).add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 439)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 439)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 439)).add_operation (GALGAS_string ("import AppKit\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 439)).add_operation (GALGAS_string ("//"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 440)).add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 441)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 441)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 441)) ;
    const GALGAS_autoLayoutDocumentFileGeneration temp_24 = this ;
    GALGAS_string var_fileName_16881 = GALGAS_string ("linker-").add_operation (temp_24.readProperty_mDocumentName (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 442)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 442)).add_operation (enumerator_16304.current_mLinkerName (HERE), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 442)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 442)) ;
    ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_16881  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 443)) ;
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_16881, GALGAS_string ("//"), var_header_16531, GALGAS_string ("\n\n"), var_s_16354, GALGAS_string ("INSERT CONFIGURATION CODE\n"), GALGAS_string ("  }\n}\n\n//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 452)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 452)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 452)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 444)) ;
    }
    enumerator_16304.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'autoLayoutDocumentGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of 'indexes' directory

static const cRegularFileWrapper * gWrapperAllFiles_autoLayoutDocumentGenerationTemplate_4 [1] = {
  NULL
} ;

//--- All sub-directories of 'indexes' directory

static const cDirectoryWrapper * gWrapperAllDirectories_autoLayoutDocumentGenerationTemplate_4 [1] = {
  NULL
} ;

//--- Directory 'indexes'

const cDirectoryWrapper gWrapperDirectory_4_autoLayoutDocumentGenerationTemplate (
  "indexes",
  0,
  gWrapperAllFiles_autoLayoutDocumentGenerationTemplate_4,
  0,
  gWrapperAllDirectories_autoLayoutDocumentGenerationTemplate_4
) ;

//--- All files of 'build' directory

static const cRegularFileWrapper * gWrapperAllFiles_autoLayoutDocumentGenerationTemplate_3 [1] = {
  NULL
} ;

//--- All sub-directories of 'build' directory

static const cDirectoryWrapper * gWrapperAllDirectories_autoLayoutDocumentGenerationTemplate_3 [2] = {
  & gWrapperDirectory_4_autoLayoutDocumentGenerationTemplate,
  NULL
} ;

//--- Directory 'build'

const cDirectoryWrapper gWrapperDirectory_3_autoLayoutDocumentGenerationTemplate (
  "build",
  0,
  gWrapperAllFiles_autoLayoutDocumentGenerationTemplate_3,
  1,
  gWrapperAllDirectories_autoLayoutDocumentGenerationTemplate_3
) ;

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_autoLayoutDocumentGenerationTemplate_5 [1] = {
  NULL
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_autoLayoutDocumentGenerationTemplate_5 [1] = {
  NULL
} ;

//--- Directory 'controllers'

const cDirectoryWrapper gWrapperDirectory_5_autoLayoutDocumentGenerationTemplate (
  "controllers",
  0,
  gWrapperAllFiles_autoLayoutDocumentGenerationTemplate_5,
  0,
  gWrapperAllDirectories_autoLayoutDocumentGenerationTemplate_5
) ;

//--- All files of 'standard-properties' directory

static const cRegularFileWrapper * gWrapperAllFiles_autoLayoutDocumentGenerationTemplate_1 [1] = {
  NULL
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_autoLayoutDocumentGenerationTemplate_1 [1] = {
  NULL
} ;

//--- Directory 'standard-properties'

const cDirectoryWrapper gWrapperDirectory_1_autoLayoutDocumentGenerationTemplate (
  "standard-properties",
  0,
  gWrapperAllFiles_autoLayoutDocumentGenerationTemplate_1,
  0,
  gWrapperAllDirectories_autoLayoutDocumentGenerationTemplate_1
) ;

//--- All files of 'xcode-project' directory

static const cRegularFileWrapper * gWrapperAllFiles_autoLayoutDocumentGenerationTemplate_2 [1] = {
  NULL
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_autoLayoutDocumentGenerationTemplate_2 [1] = {
  NULL
} ;

//--- Directory 'xcode-project'

const cDirectoryWrapper gWrapperDirectory_2_autoLayoutDocumentGenerationTemplate (
  "xcode-project",
  0,
  gWrapperAllFiles_autoLayoutDocumentGenerationTemplate_2,
  0,
  gWrapperAllDirectories_autoLayoutDocumentGenerationTemplate_2
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_autoLayoutDocumentGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_autoLayoutDocumentGenerationTemplate_0 [5] = {
  & gWrapperDirectory_3_autoLayoutDocumentGenerationTemplate,
  & gWrapperDirectory_5_autoLayoutDocumentGenerationTemplate,
  & gWrapperDirectory_1_autoLayoutDocumentGenerationTemplate,
  & gWrapperDirectory_2_autoLayoutDocumentGenerationTemplate,
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_autoLayoutDocumentGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_autoLayoutDocumentGenerationTemplate_0,
  4,
  gWrapperAllDirectories_autoLayoutDocumentGenerationTemplate_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'autoLayoutDocumentGenerationTemplate documentImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_autoLayoutDocumentGenerationTemplate_documentImplementation (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & in_DOCUMENT_5F_CLASS_5F_NAME,
                                                                                               const GALGAS_string & in_ROOT_5F_ENTITY_5F_NAME,
                                                                                               const GALGAS_string & in_MAIN_5F_VIEW_5F_NAME,
                                                                                               const GALGAS_propertyGenerationList & in_DOCUMENT_5F_PROPERTY_5F_LIST,
                                                                                               const GALGAS_decoratedOutletMap & in_OUTLET_5F_GENERATION_5F_MAP,
                                                                                               const GALGAS_autoLayoutOutletMap & in_AUTO_5F_LAYOUT_5F_OUTLET_5F_MAP,
                                                                                               const GALGAS_actionBindingListForGeneration & /* in_TARGET_5F_ACTION_5F_LIST */,
                                                                                               const GALGAS_regularBindingsGenerationList & /* in_REGULAR_5F_BINDINGS_5F_GENERATION_5F_LIST */,
                                                                                               const GALGAS_multipleBindingGenerationList & in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST,
                                                                                               const GALGAS_tableViewBindingGenerationList & /* in_TABLE_5F_VALUE_5F_BINDING_5F_GENERATION_5F_LIST */,
                                                                                               const GALGAS_ebViewGraphicControllerBindingGenerationList & /* in_EB_5F_VIEW_5F_GRAPHIC_5F_CONTROLLER_5F_BINDING_5F_GENERATION_5F_LIST */,
                                                                                               const GALGAS_viewGenerationList & in_VIEW_5F_GENERATION_5F_LIST,
                                                                                               const GALGAS_implicitViewFunctionGenerationList & in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST,
                                                                                               const GALGAS_string & in_DOCUMENT_5F_SUPER_5F_CLASS_5F_NAME,
                                                                                               const GALGAS_autoLayoutOutletLinkerGenerationList & in_AUTO_5F_LAYOUT_5F_LINKER_5F_LIST
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nimport AppKit\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\n@objc(" ;
  result << in_DOCUMENT_5F_CLASS_5F_NAME.stringValue () ;
  result << ") class " ;
  result << in_DOCUMENT_5F_CLASS_5F_NAME.stringValue () ;
  result << " : " ;
  result << in_DOCUMENT_5F_SUPER_5F_CLASS_5F_NAME.stringValue () ;
  result << " {\n  \n" ;
  GALGAS_uint index_582_ (0) ;
  if (in_DOCUMENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_582 (in_DOCUMENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_582.hasCurrentObject ()) {
      result << callExtensionGetter_propertyDeclarationCode ((const cPtr_propertyGeneration *) enumerator_582.current_mProperty (HERE).ptr (), GALGAS_bool (false), GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 13)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 13)).stringValue () ;
      index_582_.increment () ;
      enumerator_582.gotoNextObject () ;
    }
  }
  result << "  //····················································································································\n  //    Outlets\n  //····················································································································\n\n" ;
  GALGAS_uint index_996_ (0) ;
  if (in_AUTO_5F_LAYOUT_5F_OUTLET_5F_MAP.isValid ()) {
    cEnumerator_autoLayoutOutletMap enumerator_996 (in_AUTO_5F_LAYOUT_5F_OUTLET_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_996.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_996.current_mOutletIsArray (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "  final var " ;
        result << enumerator_996.current_lkey (HERE).readProperty_string ().stringValue () ;
        result << " = EBWeakReferenceArray <AutoLayout" ;
        result << enumerator_996.current_mAutoLayoutOutletTypeName (HERE).stringValue () ;
        result << "> ()\n" ;
      }else if (kBoolFalse == test_0) {
        result << "  weak final var " ;
        result << enumerator_996.current_lkey (HERE).readProperty_string ().stringValue () ;
        result << " : AutoLayout" ;
        result << enumerator_996.current_mAutoLayoutOutletTypeName (HERE).stringValue () ;
        result << "\? = nil\n" ;
      }
      index_996_.increment () ;
      enumerator_996.gotoNextObject () ;
    }
  }
  result << "\n  //····················································································································\n  //    Outlets\n  //····················································································································\n\n" ;
  GALGAS_uint index_1543_ (0) ;
  if (in_OUTLET_5F_GENERATION_5F_MAP.isValid ()) {
    cEnumerator_decoratedOutletMap enumerator_1543 (in_OUTLET_5F_GENERATION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1543.hasCurrentObject ()) {
      result << "  @IBOutlet final var " ;
      result << enumerator_1543.current_lkey (HERE).readProperty_string ().stringValue () ;
      result << " : " ;
      result << enumerator_1543.current_mOutletTypeName (HERE).stringValue () ;
      result << "\? = nil\n" ;
      index_1543_.increment () ;
      enumerator_1543.gotoNextObject () ;
    }
  }
  result << "\n  //····················································································································\n  //    Multiple bindings controllers\n  //····················································································································\n\n" ;
  GALGAS_uint index_1993_ (0) ;
  if (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_multipleBindingGenerationList enumerator_1993 (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1993.hasCurrentObject ()) {
      result << "//  final var mController_" ;
      result << enumerator_1993.current_mOutletName (HERE).stringValue () ;
      result << "_" ;
      result << enumerator_1993.current_mBindingName (HERE).stringValue () ;
      result << " : MultipleBindingController_" ;
      result << enumerator_1993.current_mBindingName (HERE).stringValue () ;
      result << "\? = nil\n" ;
      index_1993_.increment () ;
      enumerator_1993.gotoNextObject () ;
    }
  }
  result << "\n  //····················································································································\n  //    displayName\n  //····················································································································\n\n  override var displayName : String\? {\n    get {\n      return super.displayName\n    }\n    set {\n      super.displayName = newValue\n      self.documentFileName_property.observedObjectDidChange ()\n    }\n  }\n\n  //····················································································································\n  //    rootEntityClassName\n  //····················································································································\n\n  override final func rootEntityClassName () -> String {\n    return \"" ;
  result << in_ROOT_5F_ENTITY_5F_NAME.stringValue () ;
  result << "\"\n  }\n\n  //····················································································································\n  //    rootObject\n  //····················································································································\n\n  final var rootObject : " ;
  result << in_ROOT_5F_ENTITY_5F_NAME.stringValue () ;
  result << " { return self.mRootObject as! " ;
  result << in_ROOT_5F_ENTITY_5F_NAME.stringValue () ;
  result << " }\n\n" ;
  GALGAS_uint index_3359_ (0) ;
  if (in_VIEW_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_viewGenerationList enumerator_3359 (in_VIEW_5F_GENERATION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3359.hasCurrentObject ()) {
      result << "  //····················································································································\n  //    VIEW " ;
      result << enumerator_3359.current_mViewName (HERE).stringValue () ;
      result << "\n  //····················································································································\n\n" ;
      result << callExtensionGetter_generateViewBuilder ((const cPtr_abstractViewGeneration *) enumerator_3359.current_mView (HERE).ptr (), GALGAS_bool (false), enumerator_3359.current_mViewName (HERE), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 78)).stringValue () ;
      index_3359_.increment () ;
      enumerator_3359.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3776_idx (0) ;
  if (in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST.isValid ()) {
    cEnumerator_implicitViewFunctionGenerationList enumerator_3776 (in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3776.hasCurrentObject ()) {
      result << "  //····················································································································\n  //    IMPLICIT VIEW " ;
      result << index_3776_idx.getter_string (SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 82)).stringValue () ;
      result << "\n  //····················································································································\n\n  private final func computeImplicitView_" ;
      result << index_3776_idx.getter_string (SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 84)).stringValue () ;
      result << " () -> NSView {\n" ;
      result << callExtensionGetter_generateViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_3776.current_mInstruction (HERE).ptr (), GALGAS_bool (false), GALGAS_string ("view"), GALGAS_string ("    "), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 85)).stringValue () ;
      result << "    return view\n  }\n\n" ;
      index_3776_idx.increment () ;
      enumerator_3776.gotoNextObject () ;
    }
  }
  result << "  //····················································································································\n  //    Build User Interface\n  //····················································································································\n\n  override func ebBuildUserInterface () {\n  //--------------------------- Read documentFileName model\n    self.documentFileName_property.mReadModelFunction = { [weak self] in\n      if let r = self\?.displayName {\n        return .single (r)\n      }else{\n        return .single (\"\")\n      }\n    }\n  //--- Build window content view\n    self.configureProperties ()\n    let mainView = self." ;
  result << in_MAIN_5F_VIEW_5F_NAME.stringValue () ;
  result << " ()\n  //--- Call outlet linkers\n" ;
  GALGAS_uint index_5046_ (0) ;
  if (in_AUTO_5F_LAYOUT_5F_LINKER_5F_LIST.isValid ()) {
    cEnumerator_autoLayoutOutletLinkerGenerationList enumerator_5046 (in_AUTO_5F_LAYOUT_5F_LINKER_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5046.hasCurrentObject ()) {
      result << "    self.linker_" ;
      result << enumerator_5046.current_mLinkerName (HERE).stringValue () ;
      result << " (" ;
      GALGAS_uint index_5155_ (0) ;
      if (enumerator_5046.current_mOutletNameAndTypeNameList (HERE).isValid ()) {
        cEnumerator__32_stringlist enumerator_5155 (enumerator_5046.current_mOutletNameAndTypeNameList (HERE), kENUMERATION_UP) ;
        while (enumerator_5155.hasCurrentObject ()) {
          result << "self." ;
          result << enumerator_5155.current_mValue_30_ (HERE).stringValue () ;
          if (enumerator_5155.hasNextObject ()) {
            result << ", " ;
          }
          index_5155_.increment () ;
          enumerator_5155.gotoNextObject () ;
        }
      }
      result << ")\n" ;
      index_5046_.increment () ;
      enumerator_5046.gotoNextObject () ;
    }
  }
  result << "  //--- Assign main view to window\n    self.windowForSheet\?.contentView = AutoLayoutWindowContentView (view: mainView)\n  }\n\n  //····················································································································\n  //    configureProperties\n  //····················································································································\n\n  final private func configureProperties () {\n" ;
  GALGAS_uint index_5712_ (0) ;
  if (in_DOCUMENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_5712 (in_DOCUMENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5712.hasCurrentObject ()) {
      result << callExtensionGetter_configurationCode ((const cPtr_propertyGeneration *) enumerator_5712.current_mProperty (HERE).ptr (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 125)).stringValue () ;
      result << "\n" ;
      index_5712_.increment () ;
      enumerator_5712.gotoNextObject () ;
    }
  }
  result << "  }\n\n  //····················································································································\n\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'autoLayoutDocumentGenerationTemplate documentOutletConfiguratorImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_autoLayoutDocumentGenerationTemplate_documentOutletConfiguratorImplementation (C_Compiler * /* inCompiler */,
                                                                                                                 const GALGAS_string & in_DOCUMENT_5F_TYPE_5F_NAME,
                                                                                                                 const GALGAS_string & in_OUTLET_5F_NAME,
                                                                                                                 const GALGAS_string & in_OUTLET_5F_TYPE_5F_NAME
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nextension " ;
  result << in_DOCUMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << " {\n  final func configure_" ;
  result << in_OUTLET_5F_NAME.stringValue () ;
  result << " (_ inOutlet : AutoLayout" ;
  result << in_OUTLET_5F_TYPE_5F_NAME.stringValue () ;
  result << ") {\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'autoLayoutDocumentGenerationTemplate outletLinkerImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_autoLayoutDocumentGenerationTemplate_outletLinkerImplementation (C_Compiler * /* inCompiler */,
                                                                                                   const GALGAS_string & in_DOCUMENT_5F_TYPE_5F_NAME,
                                                                                                   const GALGAS_string & in_LINKER_5F_NAME,
                                                                                                   const GALGAS__32_stringlist & in_OUTLET_5F_NAME_5F_AND_5F_TYPE_5F_NAME_5F_LIST
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nextension " ;
  result << in_DOCUMENT_5F_TYPE_5F_NAME.stringValue () ;
  result << " {\n  final func linker_" ;
  result << in_LINKER_5F_NAME.stringValue () ;
  result << " (" ;
  GALGAS_uint index_256_ (0) ;
  if (in_OUTLET_5F_NAME_5F_AND_5F_TYPE_5F_NAME_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_256 (in_OUTLET_5F_NAME_5F_AND_5F_TYPE_5F_NAME_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_256.hasCurrentObject ()) {
      result << "_ in_" ;
      result << enumerator_256.current_mValue_30_ (HERE).stringValue () ;
      result << " : AutoLayout" ;
      result << enumerator_256.current_mValue_31_ (HERE).stringValue () ;
      result << "\?" ;
      if (enumerator_256.hasNextObject ()) {
        result << ", " ;
      }
      index_256_.increment () ;
      enumerator_256.gotoNextObject () ;
    }
  }
  result << ") {\n" ;
  return GALGAS_string (result) ;
}

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
  GALGAS_actionMap var_actionMap_4081 ;
  {
  const GALGAS_prefsDeclarationAST temp_0 = this ;
  routine_buildActionMap (temp_0.readProperty_mDeclaration ().readProperty_mActionDeclarationList (), var_actionMap_4081, inCompiler  COMMA_SOURCE_FILE ("preferences.ggs", 95)) ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 97)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("preferences.ggs", 97))  COMMA_SOURCE_FILE ("preferences.ggs", 97)), GALGAS_classKind::constructor_prefs (SOURCE_FILE ("preferences.ggs", 98)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("preferences.ggs", 99)), var_actionMap_4081, GALGAS_propertyGenerationList::constructor_emptyList (SOURCE_FILE ("preferences.ggs", 101)), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 96)) ;
  }
  cEnumerator_actionMap enumerator_4223 (var_actionMap_4081, kENUMERATION_UP) ;
  while (enumerator_4223.hasCurrentObject ()) {
    const GALGAS_prefsDeclarationAST temp_1 = this ;
    ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_actionFileGeneration::constructor_new (temp_1.readProperty_mClassName ().readProperty_string (), enumerator_4223.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("preferences.ggs", 104))  COMMA_SOURCE_FILE ("preferences.ggs", 104)) ;
    enumerator_4223.gotoNextObject () ;
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
  GALGAS_stringset var_availableCallers_4925 = temp_0 ;
  GALGAS_externFunctionMap var_externFunctionMap_4997 = GALGAS_externFunctionMap::constructor_emptyMap (SOURCE_FILE ("preferences.ggs", 122)) ;
  const GALGAS_prefsDeclarationAST temp_1 = this ;
  cEnumerator_externSwiftFunctionList enumerator_5046 (temp_1.readProperty_mDeclaration ().readProperty_mExternSwiftFunctionList (), kENUMERATION_UP) ;
  while (enumerator_5046.hasCurrentObject ()) {
    {
    var_externFunctionMap_4997.setter_insertKey (enumerator_5046.current_mExternSwiftFunctionName (HERE), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 124)) ;
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_availableCallers_4925.getter_hasKey (enumerator_5046.current_mCallerName (HERE).readProperty_string () COMMA_SOURCE_FILE ("preferences.ggs", 125)).operator_not (SOURCE_FILE ("preferences.ggs", 125)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_string var_s_5232 = GALGAS_string ("invalid caller; available callers:") ;
        cEnumerator_stringset enumerator_5286 (var_availableCallers_4925, kENUMERATION_UP) ;
        while (enumerator_5286.hasCurrentObject ()) {
          var_s_5232.plusAssign_operation(GALGAS_string ("\n  - ").add_operation (enumerator_5286.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 128)), inCompiler  COMMA_SOURCE_FILE ("preferences.ggs", 128)) ;
          enumerator_5286.gotoNextObject () ;
        }
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_5046.current_mCallerName (HERE).readProperty_location (), var_s_5232, fixItArray3  COMMA_SOURCE_FILE ("preferences.ggs", 130)) ;
      }
    }
    enumerator_5046.gotoNextObject () ;
  }
  GALGAS_propertyMap var_preferencesPropertyMap_5545 ;
  GALGAS_actionMap var_actionMap_5564 ;
  GALGAS_propertyGenerationList var_propertyGenerationList_5596 ;
  GALGAS_classKind joker_5512 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 135)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("preferences.ggs", 135))  COMMA_SOURCE_FILE ("preferences.ggs", 135)), joker_5512, var_preferencesPropertyMap_5545, var_actionMap_5564, var_propertyGenerationList_5596, inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 134)) ;
  GALGAS_regularBindingsGenerationList var_regularBindingsGenerationList_5966 ;
  GALGAS_multipleBindingGenerationList var_multipleBindingGenerationList_6036 ;
  GALGAS_actionBindingListForGeneration var_actionBindingListForGeneration_6108 ;
  GALGAS_decoratedOutletMap var_outletMap_6147 ;
  GALGAS_tableViewBindingGenerationList var_tableViewBindingGenerationList_6219 ;
  GALGAS_ebViewGraphicControllerBindingGenerationList var_ebViewGraphicControllerBindingGenerationList_6319 ;
  {
  const GALGAS_prefsDeclarationAST temp_4 = this ;
  routine_analyzeOutlets (GALGAS_bool (true), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("preferences.ggs", 144)), var_preferencesPropertyMap_5545, GALGAS_string::makeEmptyString (), ioArgument_ioSemanticContext, temp_4.readProperty_mDeclaration ().readProperty_mOutletDeclarationList (), var_preferencesPropertyMap_5545, var_actionMap_5564, function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 151)), ioArgument_ioGeneration, var_regularBindingsGenerationList_5966, var_multipleBindingGenerationList_6036, var_actionBindingListForGeneration_6108, var_outletMap_6147, var_tableViewBindingGenerationList_6219, var_ebViewGraphicControllerBindingGenerationList_6319, inCompiler  COMMA_SOURCE_FILE ("preferences.ggs", 142)) ;
  }
  GALGAS_autoLayoutViewDeclarationMap var_viewDeclarationMap_6419 = GALGAS_autoLayoutViewDeclarationMap::constructor_emptyMap (SOURCE_FILE ("preferences.ggs", 161)) ;
  GALGAS_viewGenerationList var_viewGenerationList_6469 = GALGAS_viewGenerationList::constructor_emptyList (SOURCE_FILE ("preferences.ggs", 162)) ;
  GALGAS_implicitViewFunctionGenerationList var_implicitViewFunctionGenerationList_6551 = GALGAS_implicitViewFunctionGenerationList::constructor_emptyList (SOURCE_FILE ("preferences.ggs", 163)) ;
  GALGAS_autoLayoutConfiguratorMap var_configuratorMap_6605 = GALGAS_autoLayoutConfiguratorMap::constructor_emptyMap (SOURCE_FILE ("preferences.ggs", 164)) ;
  GALGAS_autoLayoutOutletMap var_autoLayoutOutletMap_6657 = GALGAS_autoLayoutOutletMap::constructor_emptyMap (SOURCE_FILE ("preferences.ggs", 165)) ;
  const GALGAS_prefsDeclarationAST temp_5 = this ;
  cEnumerator_astViewDeclarationList enumerator_6694 (temp_5.readProperty_mDeclaration ().readProperty_mViewDeclarationList (), kENUMERATION_UP) ;
  while (enumerator_6694.hasCurrentObject ()) {
    {
    var_viewDeclarationMap_6419.setter_insertKey (enumerator_6694.current_mViewName (HERE), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 167)) ;
    }
    GALGAS_abstractViewGeneration var_viewGeneration_7190 ;
    const GALGAS_prefsDeclarationAST temp_6 = this ;
    callExtensionMethod_checkView ((cPtr_astAbstractViewDeclaration *) enumerator_6694.current_mView (HERE).ptr (), enumerator_6694.current_mViewName (HERE).readProperty_string (), var_viewDeclarationMap_6419, GALGAS_bool (true), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("preferences.ggs", 172)), var_preferencesPropertyMap_5545, ioArgument_ioSemanticContext, GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("preferences.ggs", 175)), var_actionMap_5564, temp_6.readProperty_mClassName ().readProperty_string (), ioArgument_ioSemanticContext.readProperty_mClassMap (), var_implicitViewFunctionGenerationList_6551, var_configuratorMap_6605, var_autoLayoutOutletMap_6657, var_viewGeneration_7190, inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 168)) ;
    var_viewGenerationList_6469.addAssign_operation (enumerator_6694.current_mViewName (HERE).readProperty_string (), var_viewGeneration_7190  COMMA_SOURCE_FILE ("preferences.ggs", 184)) ;
    enumerator_6694.gotoNextObject () ;
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_viewDeclarationMap_6419.getter_hasKey (GALGAS_string ("mPrefsMainView") COMMA_SOURCE_FILE ("preferences.ggs", 186)).operator_not (SOURCE_FILE ("preferences.ggs", 186)).boolEnum () ;
    if (kBoolTrue == test_7) {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("preferences.ggs", 187)), GALGAS_string ("Preferences should define 'mPrefsMainView' stack view"), fixItArray8  COMMA_SOURCE_FILE ("preferences.ggs", 187)) ;
    }
  }
  const GALGAS_prefsDeclarationAST temp_9 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_preferencesForGeneration::constructor_new (var_propertyGenerationList_5596, ioArgument_ioGeneration.readProperty_mMainXibDescriptorList (), var_regularBindingsGenerationList_5966, var_multipleBindingGenerationList_6036, var_actionBindingListForGeneration_6108, var_outletMap_6147, temp_9.readProperty_mDeclaration ().readProperty_mExternSwiftFunctionList (), var_tableViewBindingGenerationList_6219, var_ebViewGraphicControllerBindingGenerationList_6319, var_viewGenerationList_6469, var_implicitViewFunctionGenerationList_6551, var_configuratorMap_6605, var_autoLayoutOutletMap_6657  COMMA_SOURCE_FILE ("preferences.ggs", 190))  COMMA_SOURCE_FILE ("preferences.ggs", 190)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'prefsGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of 'indexes' directory

static const cRegularFileWrapper * gWrapperAllFiles_prefsGenerationTemplate_4 [1] = {
  NULL
} ;

//--- All sub-directories of 'indexes' directory

static const cDirectoryWrapper * gWrapperAllDirectories_prefsGenerationTemplate_4 [1] = {
  NULL
} ;

//--- Directory 'indexes'

const cDirectoryWrapper gWrapperDirectory_4_prefsGenerationTemplate (
  "indexes",
  0,
  gWrapperAllFiles_prefsGenerationTemplate_4,
  0,
  gWrapperAllDirectories_prefsGenerationTemplate_4
) ;

//--- All files of 'build' directory

static const cRegularFileWrapper * gWrapperAllFiles_prefsGenerationTemplate_3 [1] = {
  NULL
} ;

//--- All sub-directories of 'build' directory

static const cDirectoryWrapper * gWrapperAllDirectories_prefsGenerationTemplate_3 [2] = {
  & gWrapperDirectory_4_prefsGenerationTemplate,
  NULL
} ;

//--- Directory 'build'

const cDirectoryWrapper gWrapperDirectory_3_prefsGenerationTemplate (
  "build",
  0,
  gWrapperAllFiles_prefsGenerationTemplate_3,
  1,
  gWrapperAllDirectories_prefsGenerationTemplate_3
) ;

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_prefsGenerationTemplate_5 [1] = {
  NULL
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_prefsGenerationTemplate_5 [1] = {
  NULL
} ;

//--- Directory 'controllers'

const cDirectoryWrapper gWrapperDirectory_5_prefsGenerationTemplate (
  "controllers",
  0,
  gWrapperAllFiles_prefsGenerationTemplate_5,
  0,
  gWrapperAllDirectories_prefsGenerationTemplate_5
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

static const cDirectoryWrapper * gWrapperAllDirectories_prefsGenerationTemplate_0 [5] = {
  & gWrapperDirectory_3_prefsGenerationTemplate,
  & gWrapperDirectory_5_prefsGenerationTemplate,
  & gWrapperDirectory_1_prefsGenerationTemplate,
  & gWrapperDirectory_2_prefsGenerationTemplate,
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_prefsGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_prefsGenerationTemplate_0,
  4,
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
  result << "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nimport AppKit\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\n@MainActor var g_" ;
  result << function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 9)).stringValue () ;
  result << " : " ;
  result << function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 9)).stringValue () ;
  result << "\? = nil\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\n@objc(" ;
  result << function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 13)).stringValue () ;
  result << ") final class " ;
  result << function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 13)).stringValue () ;
  result << " : " ;
  result << function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 13)).stringValue () ;
  result << "_SuperClass, NSWindowDelegate {\n\n  //····················································································································\n\n  private final var mWindow : CanariWindow\? = nil\n\n  //····················································································································\n  //    Show Preferences window\n  //····················································································································\n\n  @IBAction func showPreferencesWindowAction (_ inSender : Any\?) {\n    let window : CanariWindow\n    if let w = self.mWindow {\n      window = w\n    }else{\n      window = CanariWindow (\n        contentRect: .zero,\n        styleMask: [.closable, .resizable, .titled],\n        backing: .buffered,\n        defer: false\n      )\n      self.mWindow = window\n      window.setFrameAutosaveName (\"PrefsWindowSettings\")\n      window.title = \"Preferences\"\n      window.isReleasedWhenClosed = false\n      window.contentView = AutoLayoutWindowContentView (view: self.mPrefsMainView ())\n    //--- Contrôler le comportement en plein écran\n      window.collectionBehavior = [.fullScreenAuxiliary, .fullScreenNone]\n      let zoomButton = window.standardWindowButton (.zoomButton)\n      zoomButton\?.isEnabled = false\n    }\n    window.makeKeyAndOrderFront (nil)\n  }\n\n" ;
  GALGAS_uint index_2098_ (0) ;
  if (in_VIEW_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_viewGenerationList enumerator_2098 (in_VIEW_5F_GENERATION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2098.hasCurrentObject ()) {
      result << "  //····················································································································\n  //    VIEW " ;
      result << enumerator_2098.current_mViewName (HERE).stringValue () ;
      result << "\n  //····················································································································\n\n" ;
      result << callExtensionGetter_generateViewBuilder ((const cPtr_abstractViewGeneration *) enumerator_2098.current_mView (HERE).ptr (), GALGAS_bool (true), enumerator_2098.current_mViewName (HERE), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 52)).stringValue () ;
      index_2098_.increment () ;
      enumerator_2098.gotoNextObject () ;
    }
  }
  GALGAS_uint index_2514_idx (0) ;
  if (in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST.isValid ()) {
    cEnumerator_implicitViewFunctionGenerationList enumerator_2514 (in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2514.hasCurrentObject ()) {
      result << "  //····················································································································\n  //    IMPLICIT VIEW " ;
      result << index_2514_idx.getter_string (SOURCE_FILE ("preferences.swift.galgasTemplate", 56)).stringValue () ;
      result << "\n  //····················································································································\n\n  fileprivate final func computeImplicitView_" ;
      result << index_2514_idx.getter_string (SOURCE_FILE ("preferences.swift.galgasTemplate", 58)).stringValue () ;
      result << " () -> NSView {\n" ;
      result << callExtensionGetter_generateViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_2514.current_mInstruction (HERE).ptr (), GALGAS_bool (true), GALGAS_string ("view"), GALGAS_string ("    "), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 59)).stringValue () ;
      result << "    return view\n  }\n\n" ;
      index_2514_idx.increment () ;
      enumerator_2514.gotoNextObject () ;
    }
  }
  result << "  //····················································································································\n  //    Outlets\n  //····················································································································\n\n" ;
  GALGAS_uint index_3339_ (0) ;
  if (in_AUTO_5F_LAYOUT_5F_OUTLET_5F_MAP.isValid ()) {
    cEnumerator_autoLayoutOutletMap enumerator_3339 (in_AUTO_5F_LAYOUT_5F_OUTLET_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_3339.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_3339.current_mOutletIsArray (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "  final var " ;
        result << enumerator_3339.current_lkey (HERE).readProperty_string ().stringValue () ;
        result << " = EBWeakReferenceArray <AutoLayout" ;
        result << enumerator_3339.current_mAutoLayoutOutletTypeName (HERE).stringValue () ;
        result << "> ()\n" ;
      }else if (kBoolFalse == test_0) {
        result << "  weak final var " ;
        result << enumerator_3339.current_lkey (HERE).readProperty_string ().stringValue () ;
        result << " : AutoLayout" ;
        result << enumerator_3339.current_mAutoLayoutOutletTypeName (HERE).stringValue () ;
        result << "\? = nil\n" ;
      }
      index_3339_.increment () ;
      enumerator_3339.gotoNextObject () ;
    }
  }
  result << "\n  //····················································································································\n  //    Outlets (EX)\n  //····················································································································\n\n" ;
  GALGAS_uint index_3880_ (0) ;
  if (in_OUTLET_5F_MAP.isValid ()) {
    cEnumerator_decoratedOutletMap enumerator_3880 (in_OUTLET_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_3880.hasCurrentObject ()) {
      result << "  @IBOutlet var " ;
      result << enumerator_3880.current_lkey (HERE).readProperty_string ().stringValue () ;
      result << " : " ;
      result << enumerator_3880.current_mOutletTypeName (HERE).stringValue () ;
      result << "\? = nil\n" ;
      index_3880_.increment () ;
      enumerator_3880.gotoNextObject () ;
    }
  }
  result << "\n  //····················································································································\n  //    Multiple bindings controllers\n  //····················································································································\n\n" ;
  GALGAS_uint index_4324_ (0) ;
  if (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_multipleBindingGenerationList enumerator_4324 (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4324.hasCurrentObject ()) {
      result << "  private var mController_" ;
      result << enumerator_4324.current_mOutletName (HERE).stringValue () ;
      result << "_" ;
      result << enumerator_4324.current_mBindingName (HERE).stringValue () ;
      result << " : MultipleBindingController_" ;
      result << enumerator_4324.current_mBindingName (HERE).stringValue () ;
      result << "\?\n" ;
      index_4324_.increment () ;
      enumerator_4324.gotoNextObject () ;
    }
  }
  result << "\n  //····················································································································\n  //    Undo Manager\n  //····················································································································\n\n  private var mUndoManager = EBUndoManager ()\n\n  //····················································································································\n\n  var undoManager : UndoManager { return self.mUndoManager }\n\n  //····················································································································\n  // The preferences window should register this object as delegate (do it in Interface Builder)\n  //····················································································································\n\n  @objc func windowWillReturnUndoManager (_ window: NSWindow) -> UndoManager\? {\n    return self.undoManager\n  }\n\n  //····················································································································\n  //    Init\n  //····················································································································\n\n  override init () {\n    super.init ()\n    g_" ;
  result << function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 117)).stringValue () ;
  result << " = self ;\n  //--- Read from preferences\n" ;
  GALGAS_uint index_5801_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_5801 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_5801.hasCurrentObject ()) {
      result << callExtensionGetter_configurationCode ((const cPtr_propertyGeneration *) enumerator_5801.current_mProperty (HERE).ptr (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 121)).stringValue () ;
      index_5801_.increment () ;
      enumerator_5801.gotoNextObject () ;
    }
  }
  result << "  //--- Notify application will terminate\n    /* NotificationCenter.default.addObserver (self,\n      selector:#selector(Preferences.applicationWillTerminateAction(_:)),\n      name:NSApplication.willTerminateNotification,\n      object:nil\n    ) */\n  //--- Extern functions\n" ;
  GALGAS_uint index_6197_ (0) ;
  if (in_EXTERN_5F_SWIFT_5F_FUNCTION_5F_LIST.isValid ()) {
    cEnumerator_externSwiftFunctionList enumerator_6197 (in_EXTERN_5F_SWIFT_5F_FUNCTION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6197.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_6197.current_mCallerName (HERE).readProperty_string ().objectCompare (GALGAS_string ("init"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << "    self." ;
        result << enumerator_6197.current_mExternSwiftFunctionName (HERE).readProperty_string ().stringValue () ;
        result << " ()\n" ;
      }else if (kBoolFalse == test_1) {
      }
      index_6197_.increment () ;
      enumerator_6197.gotoNextObject () ;
    }
  }
  result << "  }\n\n" ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, in_MAIN_5F_XIB_5F_DESCRIPTOR_5F_LIST.getter_length (SOURCE_FILE ("preferences.swift.galgasTemplate", 139)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    result << "  //····················································································································\n\n  @IBOutlet private final var window : NSWindow\?\n  let OUTLET_WIDTH = 200.0\n  let OUTLET_HEIGHT = 22.0\n\n" ;
  }else if (kBoolFalse == test_2) {
  }
  result << "  //····················································································································\n  //    awakeFromNib\n  //····················································································································\n\n  override func awakeFromNib () {\n" ;
  result << extensionGetter_generateCode (in_MAIN_5F_XIB_5F_DESCRIPTOR_5F_LIST, inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 154)).stringValue () ;
  GALGAS_uint index_6982_ (0) ;
  if (in_OUTLET_5F_MAP.isValid ()) {
    cEnumerator_decoratedOutletMap enumerator_6982 (in_OUTLET_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_6982.hasCurrentObject ()) {
      result << "    checkOutletConnection (self." ;
      result << enumerator_6982.current_lkey (HERE).readProperty_string ().stringValue () ;
      result << ", \"" ;
      result << enumerator_6982.current_lkey (HERE).readProperty_string ().stringValue () ;
      result << "\", " ;
      result << enumerator_6982.current_mOutletTypeName (HERE).stringValue () ;
      result << ".self, #file, #line)\n" ;
      index_6982_.increment () ;
      enumerator_6982.gotoNextObject () ;
    }
  }
  result << "  //--------------------------- Install bindings\n" ;
  GALGAS_uint index_7256_ (0) ;
  if (in_REGULAR_5F_BINDINGS_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_regularBindingsGenerationList enumerator_7256 (in_REGULAR_5F_BINDINGS_5F_GENERATION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7256.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_7256.current_mOutletName (HERE).stringValue () ;
      result << "\?.bind_" ;
      result << enumerator_7256.current_mBindingName (HERE).stringValue () ;
      result << " (" ;
      GALGAS_uint index_7363_ (0) ;
      if (enumerator_7256.current_mBoundObjectList (HERE).isValid ()) {
        cEnumerator_boundObjectList enumerator_7363 (enumerator_7256.current_mBoundObjectList (HERE), kENUMERATION_UP) ;
        while (enumerator_7363.hasCurrentObject ()) {
          result << enumerator_7363.current_mBoundObjectString (HERE).stringValue () ;
          if (enumerator_7363.hasNextObject ()) {
            result << ", " ;
          }
          index_7363_.increment () ;
          enumerator_7363.gotoNextObject () ;
        }
      }
      result << enumerator_7256.current_mBindingOptionsString (HERE).stringValue () ;
      result << ")\n" ;
      index_7256_.increment () ;
      enumerator_7256.gotoNextObject () ;
    }
  }
  result << "  //--------------------------- Install multiple bindings\n" ;
  GALGAS_uint index_7594_ (0) ;
  if (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_multipleBindingGenerationList enumerator_7594 (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7594.hasCurrentObject ()) {
      result << "    do{\n      let controller = MultipleBindingController_" ;
      result << enumerator_7594.current_mBindingName (HERE).stringValue () ;
      result << " (\n        computeFunction: " ;
      result << callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_7594.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 173)).stringValue () ;
      result << ",\n        outlet: self." ;
      result << enumerator_7594.current_mOutletName (HERE).stringValue () ;
      result << "\n      )\n      self.mController_" ;
      result << enumerator_7594.current_mOutletName (HERE).stringValue () ;
      result << "_" ;
      result << enumerator_7594.current_mBindingName (HERE).stringValue () ;
      result << " = controller\n    }\n" ;
      index_7594_.increment () ;
      enumerator_7594.gotoNextObject () ;
    }
  }
  result << "  //--------------------------- Array controller\n" ;
  GALGAS_uint index_8065_ (0) ;
  if (in_TABLE_5F_VALUE_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_tableViewBindingGenerationList enumerator_8065 (in_TABLE_5F_VALUE_5F_BINDING_5F_GENERATION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8065.hasCurrentObject ()) {
      result << "    preferences_" ;
      result << enumerator_8065.current_mTableValueBindingControllerName (HERE).stringValue () ;
      result << ".bind_tableView (self." ;
      result << enumerator_8065.current_mTableValueBindingOutletName (HERE).stringValue () ;
      result << ")\n" ;
      index_8065_.increment () ;
      enumerator_8065.gotoNextObject () ;
    }
  }
  GALGAS_uint index_8293_ (0) ;
  if (in_EB_5F_VIEW_5F_GRAPHIC_5F_CONTROLLER_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_ebViewGraphicControllerBindingGenerationList enumerator_8293 (in_EB_5F_VIEW_5F_GRAPHIC_5F_CONTROLLER_5F_BINDING_5F_GENERATION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8293.hasCurrentObject ()) {
      result << "    preferences_" ;
      result << enumerator_8293.current_mArrayControllerControllerName (HERE).stringValue () ;
      result << ".bind_ebView (self." ;
      result << enumerator_8293.current_mEBViewOutletName (HERE).stringValue () ;
      result << ")\n" ;
      index_8293_.increment () ;
      enumerator_8293.gotoNextObject () ;
    }
  }
  result << "  //--------------------------- Set targets / actions\n" ;
  GALGAS_uint index_8532_ (0) ;
  if (in_TARGET_5F_ACTION_5F_LIST.isValid ()) {
    cEnumerator_actionBindingListForGeneration enumerator_8532 (in_TARGET_5F_ACTION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8532.hasCurrentObject ()) {
      result << "    self." ;
      result << enumerator_8532.current_mOutletName (HERE).stringValue () ;
      result << "\?.target = " ;
      result << enumerator_8532.current_mTargetName (HERE).stringValue () ;
      result << "\n    self." ;
      result << enumerator_8532.current_mOutletName (HERE).stringValue () ;
      result << "\?.action = #selector (" ;
      result << enumerator_8532.current_mTargetTypeName (HERE).stringValue () ;
      result << "." ;
      result << enumerator_8532.current_mActionName (HERE).stringValue () ;
      result << " (_:))\n" ;
      index_8532_.increment () ;
      enumerator_8532.gotoNextObject () ;
    }
  }
  result << "  //--------------------------- Extern functions\n" ;
  GALGAS_uint index_8808_ (0) ;
  if (in_EXTERN_5F_SWIFT_5F_FUNCTION_5F_LIST.isValid ()) {
    cEnumerator_externSwiftFunctionList enumerator_8808 (in_EXTERN_5F_SWIFT_5F_FUNCTION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8808.hasCurrentObject ()) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_8808.current_mCallerName (HERE).readProperty_string ().objectCompare (GALGAS_string ("awakeFromNib"))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "    self." ;
        result << enumerator_8808.current_mExternSwiftFunctionName (HERE).readProperty_string ().stringValue () ;
        result << " ()\n" ;
      }else if (kBoolFalse == test_3) {
      }
      index_8808_.increment () ;
      enumerator_8808.gotoNextObject () ;
    }
  }
  result << "  }\n\n  //····················································································································\n\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\n" ;
  GALGAS_uint index_9233_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_9233 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_9233.hasCurrentObject ()) {
      result << callExtensionGetter_prefKeyDefinitionCode ((const cPtr_propertyGeneration *) enumerator_9233.current_mProperty (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 208)).stringValue () ;
      index_9233_.increment () ;
      enumerator_9233.gotoNextObject () ;
    }
  }
  result << "\n" ;
  GALGAS_uint index_9329_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_9329 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_9329.hasCurrentObject ()) {
      result << callExtensionGetter_propertyDeclarationCode ((const cPtr_propertyGeneration *) enumerator_9329.current_mProperty (HERE).ptr (), GALGAS_bool (true), GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("preferences.swift.galgasTemplate", 213)), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 213)).stringValue () ;
      index_9329_.increment () ;
      enumerator_9329.gotoNextObject () ;
    }
  }
  result << "\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@preferencesForGeneration generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_preferencesForGeneration::method_generateCode (const GALGAS_string constinArgument_inOutputDirectory,
                                                         const GALGAS_generationStruct /* constinArgument_inGenerationStruct */,
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
  GALGAS_string var_s_10468 = GALGAS_string (filewrapperTemplate_prefsGenerationTemplate_preferences (inCompiler, temp_0.readProperty_mPropertyListForGeneration (), temp_1.readProperty_mMainXibDescriptorList (), temp_2.readProperty_mOutletMap (), temp_3.readProperty_mRegularBindingsGenerationList (), temp_4.readProperty_mActionBindingListForGeneration (), temp_5.readProperty_mMultipleBindingGenerationList (), temp_6.readProperty_mExternSwiftFunctionList (), temp_7.readProperty_mTableViewBindingGenerationList (), temp_8.readProperty_mEBViewBindingGenerationList (), temp_9.readProperty_mViewGenerationList (), temp_10.readProperty_mImplicitViewFunctionGenerationList (), temp_11.readProperty_mAutoLayoutOutletMap () COMMA_SOURCE_FILE ("preferences.ggs", 253))) ;
  GALGAS_string var_fileName_10976 = function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 267)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 267)) ;
  ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_10976  COMMA_SOURCE_FILE ("preferences.ggs", 268)) ;
  {
  GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_10976, var_s_10468, inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 269)) ;
  }
  const GALGAS_preferencesForGeneration temp_12 = this ;
  cEnumerator_autoLayoutConfiguratorMap enumerator_11166 (temp_12.readProperty_mConfiguratorMap (), kENUMERATION_UP) ;
  while (enumerator_11166.hasCurrentObject ()) {
    GALGAS_string var_s_11205 = GALGAS_string (filewrapperTemplate_autoLayoutDocumentGenerationTemplate_documentOutletConfiguratorImplementation (inCompiler, GALGAS_string ("Preferences"), enumerator_11166.current_lkey (HERE).readProperty_string (), enumerator_11166.current_mAutoLayoutOutletTypeName (HERE) COMMA_SOURCE_FILE ("preferences.ggs", 276))) ;
    GALGAS_string var_header_11387 = GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("preferences.ggs", 281)), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 281)).add_operation (GALGAS_string ("\n//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n//"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 281)).add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("preferences.ggs", 283)), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 283)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 283)).add_operation (GALGAS_string ("import AppKit\n\n"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 283)).add_operation (GALGAS_string ("//"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 284)).add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("preferences.ggs", 285)), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 285)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 285)) ;
    GALGAS_string var_fileName_11737 = GALGAS_string ("configurator-Preferences-").add_operation (enumerator_11166.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 286)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 286)) ;
    ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_11737  COMMA_SOURCE_FILE ("preferences.ggs", 287)) ;
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_11737, GALGAS_string ("//"), var_header_11387, GALGAS_string ("\n\n"), var_s_11205, GALGAS_string ("INSERT CONFIGURATION CODE\n"), GALGAS_string ("  }\n}\n\n//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("preferences.ggs", 296)), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 296)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 296)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 288)) ;
    }
    enumerator_11166.gotoNextObject () ;
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
    test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("graphviz.ggs", 29)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      cEnumerator_lstringlist enumerator_1221 (constinArgument_inGraphvizList, kENUMERATION_UP) ;
      while (enumerator_1221.hasCurrentObject ()) {
        {
        routine_graphvizRootEntityAnalysis (constinArgument_inSourceFileDirectory, constinArgument_inSemanticContext, enumerator_1221.current_mValue (HERE).readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 31)) ;
        }
        {
        routine_graphvizRootEntityStrongAnalysis (constinArgument_inSourceFileDirectory, constinArgument_inSemanticContext, enumerator_1221.current_mValue (HERE).readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 32)) ;
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
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("graphviz.ggs", 42)) ;
  temp_0.addAssign_operation (constinArgument_inRootEntityName  COMMA_SOURCE_FILE ("graphviz.ggs", 42)) ;
  GALGAS_stringset var_reachableEntityNameSet_1859 = temp_0 ;
  GALGAS_stringlist temp_1 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("graphviz.ggs", 43)) ;
  temp_1.addAssign_operation (constinArgument_inRootEntityName  COMMA_SOURCE_FILE ("graphviz.ggs", 43)) ;
  GALGAS_stringlist var_exploreArray_1912 = temp_1 ;
  GALGAS_stringlist var_nodeList_1961 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("graphviz.ggs", 44)) ;
  GALGAS_stringlist var_arrowList_1994 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("graphviz.ggs", 45)) ;
  if (constinArgument_inSemanticContext.readProperty_mClassMap ().getter_count (SOURCE_FILE ("graphviz.ggs", 46)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 46)).isValid ()) {
    uint32_t variant_2006 = constinArgument_inSemanticContext.readProperty_mClassMap ().getter_count (SOURCE_FILE ("graphviz.ggs", 46)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 46)).uintValue () ;
    bool loop_2006 = true ;
    while (loop_2006) {
      loop_2006 = GALGAS_bool (kIsStrictSup, var_exploreArray_1912.getter_length (SOURCE_FILE ("graphviz.ggs", 46)).objectCompare (GALGAS_uint (uint32_t (0U)))).isValid () ;
      if (loop_2006) {
        loop_2006 = GALGAS_bool (kIsStrictSup, var_exploreArray_1912.getter_length (SOURCE_FILE ("graphviz.ggs", 46)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_2006 && (0 == variant_2006)) {
        loop_2006 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("graphviz.ggs", 46)) ;
      }
      if (loop_2006) {
        variant_2006 -- ;
        GALGAS_string var_entityName_2135 ;
        {
        var_exploreArray_1912.setter_popLast (var_entityName_2135, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 47)) ;
        }
        GALGAS_string var_node_2149 = GALGAS_string ("  ").add_operation (var_entityName_2135, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 48)).add_operation (GALGAS_string ("[label=\"<"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 48)).add_operation (var_entityName_2135, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 48)).add_operation (GALGAS_string (">"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 48)).add_operation (var_entityName_2135, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 48)) ;
        GALGAS_classKind var_entityKind_2297 ;
        GALGAS_propertyMap var_propertyMap_2327 ;
        GALGAS_actionMap joker_2329_2 ; // Joker input parameter
        GALGAS_propertyGenerationList joker_2329_1 ; // Joker input parameter
        constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (var_entityName_2135.getter_nowhere (SOURCE_FILE ("graphviz.ggs", 49)), var_entityKind_2297, var_propertyMap_2327, joker_2329_2, joker_2329_1, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 49)) ;
        GALGAS_string var_superEntityName_2393 ;
        GALGAS_bool joker_2395_3 ; // Joker input parameter
        GALGAS_bool joker_2395_2 ; // Joker input parameter
        GALGAS_bool joker_2395_1 ; // Joker input parameter
        var_entityKind_2297.method_entity (var_superEntityName_2393, joker_2395_3, joker_2395_2, joker_2395_1, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 50)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (kIsNotEqual, var_superEntityName_2393.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_2) {
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = var_reachableEntityNameSet_1859.getter_hasKey (var_superEntityName_2393 COMMA_SOURCE_FILE ("graphviz.ggs", 52)).operator_not (SOURCE_FILE ("graphviz.ggs", 52)).boolEnum () ;
              if (kBoolTrue == test_3) {
                var_reachableEntityNameSet_1859.addAssign_operation (var_superEntityName_2393  COMMA_SOURCE_FILE ("graphviz.ggs", 53)) ;
                var_exploreArray_1912.addAssign_operation (var_superEntityName_2393  COMMA_SOURCE_FILE ("graphviz.ggs", 54)) ;
              }
            }
            var_arrowList_1994.addAssign_operation (GALGAS_string ("  ").add_operation (var_entityName_2135, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 56)).add_operation (GALGAS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 56)).add_operation (var_superEntityName_2393, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 56)).add_operation (GALGAS_string (" [dir=both arrowtail=dot arrowhead=normal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 56))  COMMA_SOURCE_FILE ("graphviz.ggs", 56)) ;
          }
        }
        cEnumerator_propertyMap enumerator_2760 (var_propertyMap_2327, kENUMERATION_UP) ;
        while (enumerator_2760.hasCurrentObject ()) {
          switch (enumerator_2760.current_mKind (HERE).enumValue ()) {
          case GALGAS_propertyKind::kNotBuilt:
            break ;
          case GALGAS_propertyKind::kEnum_property:
            {
              const cEnumAssociatedValues_propertyKind_property * extractPtr_3031 = (const cEnumAssociatedValues_propertyKind_property *) (enumerator_2760.current_mKind (HERE).unsafePointer ()) ;
              const GALGAS_typeKind extractedValue_2831_type = extractPtr_3031->mAssociatedValue0 ;
              const GALGAS_propertyAccessibility extractedValue_2845_accessibility = extractPtr_3031->mAssociatedValue1 ;
              switch (extractedValue_2845_accessibility.enumValue ()) {
              case GALGAS_propertyAccessibility::kNotBuilt:
                break ;
              case GALGAS_propertyAccessibility::kEnum_stored:
                {
                  var_node_2149.plusAssign_operation(GALGAS_string ("|").add_operation (extensionGetter_swiftTypeName (extractedValue_2831_type, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 63)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 63)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 63)).add_operation (enumerator_2760.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 63)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 63)) ;
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
              const cEnumAssociatedValues_propertyKind_toMany * extractPtr_4427 = (const cEnumAssociatedValues_propertyKind_toMany *) (enumerator_2760.current_mKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_3139_typeName = extractPtr_4427->mAssociatedValue0 ;
              const GALGAS_propertyAccessibility extractedValue_3176_accessibility = extractPtr_4427->mAssociatedValue1 ;
              const GALGAS_toManyRelationshipOptionAST extractedValue_3189_optionKind = extractPtr_4427->mAssociatedValue3 ;
              enumGalgasBool test_4 = kBoolTrue ;
              if (kBoolTrue == test_4) {
                test_4 = extractedValue_3176_accessibility.getter_isStored (SOURCE_FILE ("graphviz.ggs", 70)).boolEnum () ;
                if (kBoolTrue == test_4) {
                  var_node_2149.plusAssign_operation(GALGAS_string ("|<").add_operation (enumerator_2760.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 71)).add_operation (GALGAS_string (">["), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 71)).add_operation (extractedValue_3139_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 71)).add_operation (GALGAS_string ("] "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 71)).add_operation (enumerator_2760.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 71)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 71)) ;
                  switch (extractedValue_3189_optionKind.enumValue ()) {
                  case GALGAS_toManyRelationshipOptionAST::kNotBuilt:
                    break ;
                  case GALGAS_toManyRelationshipOptionAST::kEnum_none:
                    {
                      enumGalgasBool test_5 = kBoolTrue ;
                      if (kBoolTrue == test_5) {
                        test_5 = var_reachableEntityNameSet_1859.getter_hasKey (extractedValue_3139_typeName.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 74)).operator_not (SOURCE_FILE ("graphviz.ggs", 74)).boolEnum () ;
                        if (kBoolTrue == test_5) {
                          var_reachableEntityNameSet_1859.addAssign_operation (extractedValue_3139_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.ggs", 75)) ;
                          var_exploreArray_1912.addAssign_operation (extractedValue_3139_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.ggs", 76)) ;
                        }
                      }
                      var_arrowList_1994.addAssign_operation (GALGAS_string ("  ").add_operation (var_entityName_2135, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 78)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 78)).add_operation (enumerator_2760.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 78)).add_operation (GALGAS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 78)).add_operation (extractedValue_3139_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 79)).add_operation (GALGAS_string (" [dir=both arrowtail=none arrowhead=veevee]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 79))  COMMA_SOURCE_FILE ("graphviz.ggs", 78)) ;
                    }
                    break ;
                  case GALGAS_toManyRelationshipOptionAST::kEnum_hasOpposite:
                    {
                      const cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite * extractPtr_4054 = (const cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite *) (extractedValue_3189_optionKind.unsafePointer ()) ;
                      const GALGAS_lstring extractedValue_3713_oppositeName = extractPtr_4054->mAssociatedValue0 ;
                      enumGalgasBool test_6 = kBoolTrue ;
                      if (kBoolTrue == test_6) {
                        test_6 = var_reachableEntityNameSet_1859.getter_hasKey (extractedValue_3139_typeName.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 81)).operator_not (SOURCE_FILE ("graphviz.ggs", 81)).boolEnum () ;
                        if (kBoolTrue == test_6) {
                          var_reachableEntityNameSet_1859.addAssign_operation (extractedValue_3139_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.ggs", 82)) ;
                          var_exploreArray_1912.addAssign_operation (extractedValue_3139_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.ggs", 83)) ;
                        }
                      }
                      var_arrowList_1994.addAssign_operation (GALGAS_string ("  ").add_operation (var_entityName_2135, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 85)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 85)).add_operation (enumerator_2760.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 85)).add_operation (GALGAS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 85)).add_operation (extractedValue_3139_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 86)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 86)).add_operation (extractedValue_3713_oppositeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 86)).add_operation (GALGAS_string (" [dir=both arrowtail=onormal arrowhead=veevee]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 86))  COMMA_SOURCE_FILE ("graphviz.ggs", 85)) ;
                    }
                    break ;
                  case GALGAS_toManyRelationshipOptionAST::kEnum_hasDependance:
                    {
                      enumGalgasBool test_7 = kBoolTrue ;
                      if (kBoolTrue == test_7) {
                        test_7 = var_reachableEntityNameSet_1859.getter_hasKey (extractedValue_3139_typeName.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 88)).operator_not (SOURCE_FILE ("graphviz.ggs", 88)).boolEnum () ;
                        if (kBoolTrue == test_7) {
                          var_reachableEntityNameSet_1859.addAssign_operation (extractedValue_3139_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.ggs", 89)) ;
                          var_exploreArray_1912.addAssign_operation (extractedValue_3139_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.ggs", 90)) ;
                        }
                      }
                      var_arrowList_1994.addAssign_operation (GALGAS_string ("  ").add_operation (var_entityName_2135, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 92)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 92)).add_operation (enumerator_2760.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 92)).add_operation (GALGAS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 92)).add_operation (extractedValue_3139_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 93)).add_operation (GALGAS_string (" [dir=both arrowtail=none arrowhead=veevee]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 93))  COMMA_SOURCE_FILE ("graphviz.ggs", 92)) ;
                    }
                    break ;
                  }
                }
              }
            }
            break ;
          case GALGAS_propertyKind::kEnum_toOne:
            {
              const cEnumAssociatedValues_propertyKind_toOne * extractPtr_5579 = (const cEnumAssociatedValues_propertyKind_toOne *) (enumerator_2760.current_mKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_4463_typeName = extractPtr_5579->mAssociatedValue0 ;
              const GALGAS_propertyAccessibility extractedValue_4500_accessibility = extractPtr_5579->mAssociatedValue1 ;
              const GALGAS_toOneOppositeRelationship extractedValue_4511_opposite = extractPtr_5579->mAssociatedValue3 ;
              enumGalgasBool test_8 = kBoolTrue ;
              if (kBoolTrue == test_8) {
                test_8 = extractedValue_4500_accessibility.getter_isStored (SOURCE_FILE ("graphviz.ggs", 97)).boolEnum () ;
                if (kBoolTrue == test_8) {
                  var_node_2149.plusAssign_operation(GALGAS_string ("|<").add_operation (enumerator_2760.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 98)).add_operation (GALGAS_string (">"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 98)).add_operation (extractedValue_4463_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 98)).add_operation (GALGAS_string ("\? "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 98)).add_operation (enumerator_2760.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 98)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 98)) ;
                  switch (extractedValue_4511_opposite.enumValue ()) {
                  case GALGAS_toOneOppositeRelationship::kNotBuilt:
                    break ;
                  case GALGAS_toOneOppositeRelationship::kEnum_none:
                    {
                      enumGalgasBool test_9 = kBoolTrue ;
                      if (kBoolTrue == test_9) {
                        test_9 = var_reachableEntityNameSet_1859.getter_hasKey (extractedValue_4463_typeName.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 101)).operator_not (SOURCE_FILE ("graphviz.ggs", 101)).boolEnum () ;
                        if (kBoolTrue == test_9) {
                          var_reachableEntityNameSet_1859.addAssign_operation (extractedValue_4463_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.ggs", 102)) ;
                          var_exploreArray_1912.addAssign_operation (extractedValue_4463_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.ggs", 103)) ;
                        }
                      }
                      var_arrowList_1994.addAssign_operation (GALGAS_string ("  ").add_operation (var_entityName_2135, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 105)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 105)).add_operation (enumerator_2760.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 105)).add_operation (GALGAS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 105)).add_operation (extractedValue_4463_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 106)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 106)).add_operation (extractedValue_4463_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 106)).add_operation (GALGAS_string (" [dir=both arrowtail=none arrowhead=onormal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 106))  COMMA_SOURCE_FILE ("graphviz.ggs", 105)) ;
                    }
                    break ;
                  case GALGAS_toOneOppositeRelationship::kEnum_oppositeIsToMany:
                    {
                    }
                    break ;
                  case GALGAS_toOneOppositeRelationship::kEnum_oppositeIsToOne:
                    {
                      const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne * extractPtr_5553 = (const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne *) (extractedValue_4511_opposite.unsafePointer ()) ;
                      const GALGAS_lstring extractedValue_5120_oppositeName = extractPtr_5553->mAssociatedValue0 ;
                      enumGalgasBool test_10 = kBoolTrue ;
                      if (kBoolTrue == test_10) {
                        test_10 = var_reachableEntityNameSet_1859.getter_hasKey (extractedValue_4463_typeName.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 109)).operator_not (SOURCE_FILE ("graphviz.ggs", 109)).boolEnum () ;
                        if (kBoolTrue == test_10) {
                          var_reachableEntityNameSet_1859.addAssign_operation (extractedValue_4463_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.ggs", 110)) ;
                          var_exploreArray_1912.addAssign_operation (extractedValue_4463_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.ggs", 111)) ;
                        }
                      }
                      enumGalgasBool test_11 = kBoolTrue ;
                      if (kBoolTrue == test_11) {
                        test_11 = GALGAS_bool (kIsStrictSup, enumerator_2760.current_lkey (HERE).readProperty_string ().objectCompare (extractedValue_5120_oppositeName.readProperty_string ())).boolEnum () ;
                        if (kBoolTrue == test_11) {
                          var_arrowList_1994.addAssign_operation (GALGAS_string ("  ").add_operation (var_entityName_2135, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 114)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 114)).add_operation (enumerator_2760.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 114)).add_operation (GALGAS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 114)).add_operation (extractedValue_4463_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 115)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 115)).add_operation (extractedValue_5120_oppositeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 115)).add_operation (GALGAS_string (" [dir=both arrowtail=onormal arrowhead=onormal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 115))  COMMA_SOURCE_FILE ("graphviz.ggs", 114)) ;
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
          enumerator_2760.gotoNextObject () ;
        }
        var_node_2149.plusAssign_operation(GALGAS_string ("\"]"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 121)) ;
        var_nodeList_1961.addAssign_operation (var_node_2149  COMMA_SOURCE_FILE ("graphviz.ggs", 122)) ;
      }
    }
  }
  GALGAS_string var_s_5667 = GALGAS_string ("digraph G {\n") ;
  var_s_5667.plusAssign_operation(GALGAS_string ("  rankdir=LR ;\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 126)) ;
  var_s_5667.plusAssign_operation(GALGAS_string ("  node [shape=record fontname=helvetica style=rounded] ;\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 127)) ;
  cEnumerator_stringlist enumerator_5791 (var_nodeList_1961, kENUMERATION_UP) ;
  while (enumerator_5791.hasCurrentObject ()) {
    var_s_5667.plusAssign_operation(enumerator_5791.current_mValue (HERE).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 129)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 129)) ;
    enumerator_5791.gotoNextObject () ;
  }
  cEnumerator_stringlist enumerator_5849 (var_arrowList_1994, kENUMERATION_UP) ;
  while (enumerator_5849.hasCurrentObject ()) {
    var_s_5667.plusAssign_operation(enumerator_5849.current_mValue (HERE).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 132)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 132)) ;
    enumerator_5849.gotoNextObject () ;
  }
  var_s_5667.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 134)) ;
  GALGAS_string var_filePath_5924 = constinArgument_inSourceFileDirectory.add_operation (GALGAS_string ("/models/graph-"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 135)).add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 135)).add_operation (GALGAS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 135)) ;
  var_filePath_5924.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("graphviz.ggs", 136)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 136)) ;
  GALGAS_bool joker_6108 ; // Joker input parameter
  var_s_5667.method_writeToFileWhenDifferentContents (var_filePath_5924, joker_6108, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 137)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'graphvizRootEntityStrongAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_graphvizRootEntityStrongAnalysis (const GALGAS_string constinArgument_inSourceFileDirectory,
                                               const GALGAS_semanticContext constinArgument_inSemanticContext,
                                               const GALGAS_string constinArgument_inRootEntityName,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("graphviz.ggs", 151)) ;
  temp_0.addAssign_operation (constinArgument_inRootEntityName  COMMA_SOURCE_FILE ("graphviz.ggs", 151)) ;
  GALGAS_stringset var_reachableEntityNameSet_6774 = temp_0 ;
  GALGAS_stringlist temp_1 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("graphviz.ggs", 152)) ;
  temp_1.addAssign_operation (constinArgument_inRootEntityName  COMMA_SOURCE_FILE ("graphviz.ggs", 152)) ;
  GALGAS_stringlist var_exploreArray_6827 = temp_1 ;
  GALGAS_stringlist var_nodeList_6876 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("graphviz.ggs", 153)) ;
  GALGAS_stringlist var_arrowList_6909 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("graphviz.ggs", 154)) ;
  GALGAS_entityStrongReferenceGraph var_entityStrongReferenceGraph_6975 = GALGAS_entityStrongReferenceGraph::constructor_emptyGraph (SOURCE_FILE ("graphviz.ggs", 155)) ;
  if (constinArgument_inSemanticContext.readProperty_mClassMap ().getter_count (SOURCE_FILE ("graphviz.ggs", 156)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 156)).isValid ()) {
    uint32_t variant_6996 = constinArgument_inSemanticContext.readProperty_mClassMap ().getter_count (SOURCE_FILE ("graphviz.ggs", 156)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 156)).uintValue () ;
    bool loop_6996 = true ;
    while (loop_6996) {
      loop_6996 = GALGAS_bool (kIsStrictSup, var_exploreArray_6827.getter_length (SOURCE_FILE ("graphviz.ggs", 156)).objectCompare (GALGAS_uint (uint32_t (0U)))).isValid () ;
      if (loop_6996) {
        loop_6996 = GALGAS_bool (kIsStrictSup, var_exploreArray_6827.getter_length (SOURCE_FILE ("graphviz.ggs", 156)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_6996 && (0 == variant_6996)) {
        loop_6996 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("graphviz.ggs", 156)) ;
      }
      if (loop_6996) {
        variant_6996 -- ;
        GALGAS_string var_entityName_7125 ;
        {
        var_exploreArray_6827.setter_popLast (var_entityName_7125, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 157)) ;
        }
        var_nodeList_6876.addAssign_operation (var_entityName_7125  COMMA_SOURCE_FILE ("graphviz.ggs", 158)) ;
        {
        var_entityStrongReferenceGraph_6975.setter_addNode (GALGAS_lstring::constructor_new (var_entityName_7125, GALGAS_location::constructor_nowhere (SOURCE_FILE ("graphviz.ggs", 159))  COMMA_SOURCE_FILE ("graphviz.ggs", 159)), var_entityName_7125, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 159)) ;
        }
        GALGAS_classKind var_entityKind_7320 ;
        GALGAS_propertyMap var_propertyMap_7350 ;
        GALGAS_actionMap joker_7352_2 ; // Joker input parameter
        GALGAS_propertyGenerationList joker_7352_1 ; // Joker input parameter
        constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (var_entityName_7125.getter_nowhere (SOURCE_FILE ("graphviz.ggs", 160)), var_entityKind_7320, var_propertyMap_7350, joker_7352_2, joker_7352_1, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 160)) ;
        GALGAS_string var_superEntityName_7416 ;
        GALGAS_bool joker_7418_3 ; // Joker input parameter
        GALGAS_bool joker_7418_2 ; // Joker input parameter
        GALGAS_bool joker_7418_1 ; // Joker input parameter
        var_entityKind_7320.method_entity (var_superEntityName_7416, joker_7418_3, joker_7418_2, joker_7418_1, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 161)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (kIsNotEqual, var_superEntityName_7416.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_2) {
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = var_reachableEntityNameSet_6774.getter_hasKey (var_superEntityName_7416 COMMA_SOURCE_FILE ("graphviz.ggs", 163)).operator_not (SOURCE_FILE ("graphviz.ggs", 163)).boolEnum () ;
              if (kBoolTrue == test_3) {
                var_reachableEntityNameSet_6774.addAssign_operation (var_superEntityName_7416  COMMA_SOURCE_FILE ("graphviz.ggs", 164)) ;
                var_exploreArray_6827.addAssign_operation (var_superEntityName_7416  COMMA_SOURCE_FILE ("graphviz.ggs", 165)) ;
              }
            }
            var_arrowList_6909.addAssign_operation (var_superEntityName_7416.add_operation (GALGAS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 167)).add_operation (var_entityName_7125, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 167)).add_operation (GALGAS_string (" [arrowtail=dot arrowhead=normal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 167))  COMMA_SOURCE_FILE ("graphviz.ggs", 167)) ;
            {
            var_entityStrongReferenceGraph_6975.setter_addEdge (GALGAS_lstring::constructor_new (var_superEntityName_7416, GALGAS_location::constructor_nowhere (SOURCE_FILE ("graphviz.ggs", 168))  COMMA_SOURCE_FILE ("graphviz.ggs", 168)), GALGAS_lstring::constructor_new (var_entityName_7125, GALGAS_location::constructor_nowhere (SOURCE_FILE ("graphviz.ggs", 168))  COMMA_SOURCE_FILE ("graphviz.ggs", 168)) COMMA_SOURCE_FILE ("graphviz.ggs", 168)) ;
            }
          }
        }
        cEnumerator_propertyMap enumerator_7866 (var_propertyMap_7350, kENUMERATION_UP) ;
        while (enumerator_7866.hasCurrentObject ()) {
          switch (enumerator_7866.current_mKind (HERE).enumValue ()) {
          case GALGAS_propertyKind::kNotBuilt:
            break ;
          case GALGAS_propertyKind::kEnum_property:
            {
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
              const cEnumAssociatedValues_propertyKind_toMany * extractPtr_8840 = (const cEnumAssociatedValues_propertyKind_toMany *) (enumerator_7866.current_mKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_8047_typeName = extractPtr_8840->mAssociatedValue0 ;
              const GALGAS_propertyAccessibility extractedValue_8084_accessibility = extractPtr_8840->mAssociatedValue1 ;
              var_arrowList_6909.addAssign_operation (var_entityName_7125.add_operation (GALGAS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 176)).add_operation (extractedValue_8047_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 176)).add_operation (GALGAS_string (" [dir=both arrowtail=none arrowhead=veevee]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 176))  COMMA_SOURCE_FILE ("graphviz.ggs", 176)) ;
              {
              var_entityStrongReferenceGraph_6975.setter_addEdge (GALGAS_lstring::constructor_new (var_entityName_7125, GALGAS_location::constructor_nowhere (SOURCE_FILE ("graphviz.ggs", 177))  COMMA_SOURCE_FILE ("graphviz.ggs", 177)), GALGAS_lstring::constructor_new (extractedValue_8047_typeName.readProperty_string (), GALGAS_location::constructor_nowhere (SOURCE_FILE ("graphviz.ggs", 177))  COMMA_SOURCE_FILE ("graphviz.ggs", 177)) COMMA_SOURCE_FILE ("graphviz.ggs", 177)) ;
              }
              enumGalgasBool test_4 = kBoolTrue ;
              if (kBoolTrue == test_4) {
                test_4 = extractedValue_8084_accessibility.getter_isStored (SOURCE_FILE ("graphviz.ggs", 178)).boolEnum () ;
                if (kBoolTrue == test_4) {
                  enumGalgasBool test_5 = kBoolTrue ;
                  if (kBoolTrue == test_5) {
                    test_5 = var_reachableEntityNameSet_6774.getter_hasKey (extractedValue_8047_typeName.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 181)).operator_not (SOURCE_FILE ("graphviz.ggs", 181)).boolEnum () ;
                    if (kBoolTrue == test_5) {
                      var_reachableEntityNameSet_6774.addAssign_operation (extractedValue_8047_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.ggs", 182)) ;
                      var_exploreArray_6827.addAssign_operation (extractedValue_8047_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.ggs", 183)) ;
                    }
                  }
                }
              }
            }
            break ;
          case GALGAS_propertyKind::kEnum_toOne:
            {
              const cEnumAssociatedValues_propertyKind_toOne * extractPtr_9730 = (const cEnumAssociatedValues_propertyKind_toOne *) (enumerator_7866.current_mKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_8876_typeName = extractPtr_9730->mAssociatedValue0 ;
              const GALGAS_propertyAccessibility extractedValue_8913_accessibility = extractPtr_9730->mAssociatedValue1 ;
              const GALGAS_toOneOppositeRelationship extractedValue_8924_opposite = extractPtr_9730->mAssociatedValue3 ;
              const GALGAS_bool extractedValue_8929_weak = extractPtr_9730->mAssociatedValue4 ;
              enumGalgasBool test_6 = kBoolTrue ;
              if (kBoolTrue == test_6) {
                test_6 = extractedValue_8929_weak.operator_not (SOURCE_FILE ("graphviz.ggs", 195)).boolEnum () ;
                if (kBoolTrue == test_6) {
                  var_arrowList_6909.addAssign_operation (var_entityName_7125.add_operation (GALGAS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 196)).add_operation (extractedValue_8876_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 196)).add_operation (GALGAS_string (" [dir=both arrowtail=none arrowhead=onormal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 196))  COMMA_SOURCE_FILE ("graphviz.ggs", 196)) ;
                  {
                  var_entityStrongReferenceGraph_6975.setter_addEdge (GALGAS_lstring::constructor_new (var_entityName_7125, GALGAS_location::constructor_nowhere (SOURCE_FILE ("graphviz.ggs", 197))  COMMA_SOURCE_FILE ("graphviz.ggs", 197)), GALGAS_lstring::constructor_new (extractedValue_8876_typeName.readProperty_string (), GALGAS_location::constructor_nowhere (SOURCE_FILE ("graphviz.ggs", 197))  COMMA_SOURCE_FILE ("graphviz.ggs", 197)) COMMA_SOURCE_FILE ("graphviz.ggs", 197)) ;
                  }
                }
              }
              enumGalgasBool test_7 = kBoolTrue ;
              if (kBoolTrue == test_7) {
                test_7 = extractedValue_8913_accessibility.getter_isStored (SOURCE_FILE ("graphviz.ggs", 199)).boolEnum () ;
                if (kBoolTrue == test_7) {
                  switch (extractedValue_8924_opposite.enumValue ()) {
                  case GALGAS_toOneOppositeRelationship::kNotBuilt:
                    break ;
                  case GALGAS_toOneOppositeRelationship::kEnum_none:
                    {
                      enumGalgasBool test_8 = kBoolTrue ;
                      if (kBoolTrue == test_8) {
                        test_8 = var_reachableEntityNameSet_6774.getter_hasKey (extractedValue_8876_typeName.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 202)).operator_not (SOURCE_FILE ("graphviz.ggs", 202)).boolEnum () ;
                        if (kBoolTrue == test_8) {
                          var_reachableEntityNameSet_6774.addAssign_operation (extractedValue_8876_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.ggs", 203)) ;
                          var_exploreArray_6827.addAssign_operation (extractedValue_8876_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.ggs", 204)) ;
                        }
                      }
                    }
                    break ;
                  case GALGAS_toOneOppositeRelationship::kEnum_oppositeIsToMany:
                    {
                    }
                    break ;
                  case GALGAS_toOneOppositeRelationship::kEnum_oppositeIsToOne:
                    {
                      enumGalgasBool test_9 = kBoolTrue ;
                      if (kBoolTrue == test_9) {
                        test_9 = var_reachableEntityNameSet_6774.getter_hasKey (extractedValue_8876_typeName.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 208)).operator_not (SOURCE_FILE ("graphviz.ggs", 208)).boolEnum () ;
                        if (kBoolTrue == test_9) {
                          var_reachableEntityNameSet_6774.addAssign_operation (extractedValue_8876_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.ggs", 209)) ;
                          var_exploreArray_6827.addAssign_operation (extractedValue_8876_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.ggs", 210)) ;
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
          enumerator_7866.gotoNextObject () ;
        }
      }
    }
  }
  GALGAS_string var_s_9778 = GALGAS_string ("digraph G {\n") ;
  var_s_9778.plusAssign_operation(GALGAS_string ("  rankdir=LR ;\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 219)) ;
  var_s_9778.plusAssign_operation(GALGAS_string ("  node [shape=record fontname=helvetica style=rounded] ;\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 220)) ;
  cEnumerator_stringlist enumerator_9902 (var_nodeList_6876, kENUMERATION_UP) ;
  while (enumerator_9902.hasCurrentObject ()) {
    var_s_9778.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_9902.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 222)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 222)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 222)) ;
    enumerator_9902.gotoNextObject () ;
  }
  cEnumerator_stringlist enumerator_9967 (var_arrowList_6909, kENUMERATION_UP) ;
  while (enumerator_9967.hasCurrentObject ()) {
    var_s_9778.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_9967.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 225)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 225)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 225)) ;
    enumerator_9967.gotoNextObject () ;
  }
  var_s_9778.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 227)) ;
  GALGAS_string var_filePath_10049 = constinArgument_inSourceFileDirectory.add_operation (GALGAS_string ("/models/strong-"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 228)).add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 228)).add_operation (GALGAS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 228)) ;
  var_filePath_10049.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("graphviz.ggs", 229)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 229)) ;
  GALGAS_bool joker_10234 ; // Joker input parameter
  var_s_9778.method_writeToFileWhenDifferentContents (var_filePath_10049, joker_10234, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 230)) ;
  var_filePath_10049 = constinArgument_inSourceFileDirectory.add_operation (GALGAS_string ("/models/strong-dep-"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 232)).add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 232)).add_operation (GALGAS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 232)) ;
  GALGAS_bool joker_10426 ; // Joker input parameter
  var_entityStrongReferenceGraph_6975.getter_graphviz (SOURCE_FILE ("graphviz.ggs", 233)).method_writeToFileWhenDifferentContents (var_filePath_10049, joker_10426, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 233)) ;
  GALGAS_stringlist var_undefinedNodeList_10484 = var_entityStrongReferenceGraph_6975.getter_undefinedNodeKeyList (SOURCE_FILE ("graphviz.ggs", 235)) ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = GALGAS_bool (kIsStrictSup, var_undefinedNodeList_10484.getter_length (SOURCE_FILE ("graphviz.ggs", 236)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_10) {
      GALGAS_string var_s_10587 = GALGAS_string ("for ").add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 237)).add_operation (GALGAS_string (" graph , the following entities are not defined"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 237)) ;
      cEnumerator_stringlist enumerator_10681 (var_undefinedNodeList_10484, kENUMERATION_UP) ;
      while (enumerator_10681.hasCurrentObject ()) {
        var_s_10587.plusAssign_operation(GALGAS_string ("\n -- ").add_operation (enumerator_10681.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 239)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 239)) ;
        enumerator_10681.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("graphviz.ggs", 241)), var_s_10587, fixItArray11  COMMA_SOURCE_FILE ("graphviz.ggs", 241)) ;
    }
  }
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    test_12 = GALGAS_bool (kIsEqual, var_undefinedNodeList_10484.getter_length (SOURCE_FILE ("graphviz.ggs", 244)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_12) {
      GALGAS_lstringlist temp_13 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("graphviz.ggs", 245)) ;
      temp_13.addAssign_operation (GALGAS_lstring::constructor_new (constinArgument_inRootEntityName, GALGAS_location::constructor_nowhere (SOURCE_FILE ("graphviz.ggs", 245))  COMMA_SOURCE_FILE ("graphviz.ggs", 245))  COMMA_SOURCE_FILE ("graphviz.ggs", 245)) ;
      GALGAS_lstringlist var_accessibleNodeList_10864 = var_entityStrongReferenceGraph_6975.getter_accessibleNodesFrom (temp_13, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("graphviz.ggs", 245)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 245)) ;
      GALGAS_stringset var_accessibleNodeSet_10984 = GALGAS_stringset::constructor_setWithLStringList (var_accessibleNodeList_10864  COMMA_SOURCE_FILE ("graphviz.ggs", 246)) ;
      cEnumerator_stringlist enumerator_11052 (var_nodeList_6876, kENUMERATION_UP) ;
      while (enumerator_11052.hasCurrentObject ()) {
        enumGalgasBool test_14 = kBoolTrue ;
        if (kBoolTrue == test_14) {
          test_14 = var_accessibleNodeSet_10984.getter_hasKey (enumerator_11052.current_mValue (HERE) COMMA_SOURCE_FILE ("graphviz.ggs", 248)).operator_not (SOURCE_FILE ("graphviz.ggs", 248)).boolEnum () ;
          if (kBoolTrue == test_14) {
            TC_Array <C_FixItDescription> fixItArray15 ;
            inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("graphviz.ggs", 249)), enumerator_11052.current_mValue (HERE).add_operation (GALGAS_string (" entity is not reachable via strong reference from "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 249)).add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 249)), fixItArray15  COMMA_SOURCE_FILE ("graphviz.ggs", 249)) ;
          }
        }
        enumerator_11052.gotoNextObject () ;
      }
    }
  }
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    test_16 = GALGAS_bool (kIsEqual, var_undefinedNodeList_10484.getter_length (SOURCE_FILE ("graphviz.ggs", 254)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_16) {
      GALGAS_lstringlist var_unsortedNodeList_11403 ;
      GALGAS_stringlist joker_11367 ; // Joker input parameter
      var_entityStrongReferenceGraph_6975.method_circularities (joker_11367, var_unsortedNodeList_11403 COMMA_SOURCE_FILE ("graphviz.ggs", 255)) ;
      enumGalgasBool test_17 = kBoolTrue ;
      if (kBoolTrue == test_17) {
        test_17 = GALGAS_bool (kIsStrictSup, var_unsortedNodeList_11403.getter_length (SOURCE_FILE ("graphviz.ggs", 256)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_17) {
          GALGAS_string var_s_11458 = GALGAS_string ("for ").add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 257)).add_operation (GALGAS_string (" graph, "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 257)).add_operation (var_unsortedNodeList_11403.getter_length (SOURCE_FILE ("graphviz.ggs", 257)).getter_string (SOURCE_FILE ("graphviz.ggs", 257)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 257)) ;
          var_s_11458.plusAssign_operation(GALGAS_string (" entities are involved in a strong reference cycle"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 258)) ;
          cEnumerator_lstringlist enumerator_11607 (var_unsortedNodeList_11403, kENUMERATION_UP) ;
          while (enumerator_11607.hasCurrentObject ()) {
            var_s_11458.plusAssign_operation(GALGAS_string ("\n -- ").add_operation (enumerator_11607.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 260)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 260)) ;
            enumerator_11607.gotoNextObject () ;
          }
          TC_Array <C_FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticWarning (GALGAS_location::constructor_nowhere (SOURCE_FILE ("graphviz.ggs", 262)), var_s_11458, fixItArray18  COMMA_SOURCE_FILE ("graphviz.ggs", 262)) ;
        }
      }
    }
  }
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
    GALGAS_bool var_hasRunAction_8814 ;
    GALGAS_bool var_handlesTableValueBinding_8850 ;
    GALGAS_bool var_hasEnabled_8872 ;
    GALGAS_bool var_hasHidden_8893 ;
    GALGAS_bool var_handlesGraphicControllerBinding_8936 ;
    const GALGAS_autoLayoutViewClassDeclarationAST temp_11 = this ;
    GALGAS_lstring joker_8789 ; // Joker input parameter
    GALGAS_bool joker_8944_3 ; // Joker input parameter
    GALGAS_autoLayoutClassParameterList joker_8944_2 ; // Joker input parameter
    GALGAS_astAutoLayoutViewFunctionMap joker_8944_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mAutolayoutViewClassMap ().method_searchKey (temp_11.readProperty_mSuperClassName (), joker_8789, var_hasRunAction_8814, var_handlesTableValueBinding_8850, var_hasEnabled_8872, var_hasHidden_8893, var_handlesGraphicControllerBinding_8936, joker_8944_3, joker_8944_2, joker_8944_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 249)) ;
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      const GALGAS_autoLayoutViewClassDeclarationAST temp_13 = this ;
      test_12 = temp_13.readProperty_mHasRunAction ().operator_and (var_hasRunAction_8814 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 259)).boolEnum () ;
      if (kBoolTrue == test_12) {
        const GALGAS_autoLayoutViewClassDeclarationAST temp_14 = this ;
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mClassName ().readProperty_location (), GALGAS_string ("$run binding already defined in superclass"), fixItArray15  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 260)) ;
      }
    }
    enumGalgasBool test_16 = kBoolTrue ;
    if (kBoolTrue == test_16) {
      const GALGAS_autoLayoutViewClassDeclarationAST temp_17 = this ;
      test_16 = temp_17.readProperty_mHandlesTableValueBinding ().operator_and (var_handlesTableValueBinding_8850 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 262)).boolEnum () ;
      if (kBoolTrue == test_16) {
        const GALGAS_autoLayoutViewClassDeclarationAST temp_18 = this ;
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (temp_18.readProperty_mClassName ().readProperty_location (), GALGAS_string ("$tableview binding already defined in superclass"), fixItArray19  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 263)) ;
      }
    }
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      const GALGAS_autoLayoutViewClassDeclarationAST temp_21 = this ;
      test_20 = temp_21.readProperty_mHasEnabled ().operator_and (var_hasEnabled_8872 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 265)).boolEnum () ;
      if (kBoolTrue == test_20) {
        const GALGAS_autoLayoutViewClassDeclarationAST temp_22 = this ;
        TC_Array <C_FixItDescription> fixItArray23 ;
        inCompiler->emitSemanticError (temp_22.readProperty_mClassName ().readProperty_location (), GALGAS_string ("$enabled binding already defined in superclass"), fixItArray23  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 266)) ;
      }
    }
    enumGalgasBool test_24 = kBoolTrue ;
    if (kBoolTrue == test_24) {
      const GALGAS_autoLayoutViewClassDeclarationAST temp_25 = this ;
      test_24 = temp_25.readProperty_mHasHidden ().operator_and (var_hasHidden_8893 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 268)).boolEnum () ;
      if (kBoolTrue == test_24) {
        const GALGAS_autoLayoutViewClassDeclarationAST temp_26 = this ;
        TC_Array <C_FixItDescription> fixItArray27 ;
        inCompiler->emitSemanticError (temp_26.readProperty_mClassName ().readProperty_location (), GALGAS_string ("$hidden binding already defined in superclass"), fixItArray27  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 269)) ;
      }
    }
    enumGalgasBool test_28 = kBoolTrue ;
    if (kBoolTrue == test_28) {
      const GALGAS_autoLayoutViewClassDeclarationAST temp_29 = this ;
      test_28 = temp_29.readProperty_mHandlesGraphicControllerBinding ().operator_and (var_handlesGraphicControllerBinding_8936 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 271)).boolEnum () ;
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
    ioArgument_ioSemanticContext.mProperty_mAutolayoutViewClassMap.setter_insertKey (temp_32.readProperty_mClassName (), temp_33.readProperty_mSuperClassName (), temp_34.readProperty_mHasRunAction ().operator_or (var_hasRunAction_8814 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 278)), temp_35.readProperty_mHandlesTableValueBinding ().operator_or (var_handlesTableValueBinding_8850 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 279)), temp_36.readProperty_mHasEnabled ().operator_or (var_hasEnabled_8872 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 280)), temp_37.readProperty_mHasHidden ().operator_or (var_hasHidden_8893 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 281)), temp_38.readProperty_mHandlesGraphicControllerBinding ().operator_or (var_handlesGraphicControllerBinding_8936 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 282)), temp_39.readProperty_mUserDefined (), temp_40.readProperty_mParameterList (), temp_41.readProperty_mAutoLayoutViewFunctionMap (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 275)) ;
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
            const cEnumAssociatedValues_classKind_atomic * extractPtr_4616 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_4386.unsafePointer ()) ;
            const GALGAS_typeKind extractedValue_4587_kind = extractPtr_4616->mAssociatedValue0 ;
            var_typeKind_4422 = extractedValue_4587_kind ;
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
    GALGAS_controllerBindingOptionDecoratedList var_controllerBindingOptionDecoratedList_5039 = GALGAS_controllerBindingOptionDecoratedList::constructor_emptyList (SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 119)) ;
    cEnumerator_controllerBindingOptionList enumerator_5081 (enumerator_3837.current_mBindingOptionList (HERE), kENUMERATION_UP) ;
    while (enumerator_5081.hasCurrentObject ()) {
      GALGAS_classKind var_classKind_5195 ;
      GALGAS_propertyMap joker_5197_3 ; // Joker input parameter
      GALGAS_actionMap joker_5197_2 ; // Joker input parameter
      GALGAS_propertyGenerationList joker_5197_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (enumerator_5081.current_mOptionTypeName (HERE), var_classKind_5195, joker_5197_3, joker_5197_2, joker_5197_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 121)) ;
      GALGAS_typeKind var_typeKind_5229 ;
      switch (var_classKind_5195.enumValue ()) {
      case GALGAS_classKind::kNotBuilt:
        break ;
      case GALGAS_classKind::kEnum_prefs:
        {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_5081.current_mOptionTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray4  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 125)) ;
          var_typeKind_5229.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_classKind::kEnum_atomic:
        {
          const cEnumAssociatedValues_classKind_atomic * extractPtr_5414 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_5195.unsafePointer ()) ;
          const GALGAS_typeKind extractedValue_5387_kind = extractPtr_5414->mAssociatedValue0 ;
          var_typeKind_5229 = extractedValue_5387_kind ;
        }
        break ;
      case GALGAS_classKind::kEnum_document:
        {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (enumerator_5081.current_mOptionTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray5  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 129)) ;
          var_typeKind_5229.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_classKind::kEnum_entity:
        {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (enumerator_5081.current_mOptionTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 131)) ;
          var_typeKind_5229.drop () ; // Release error dropped variable
        }
        break ;
      }
      var_controllerBindingOptionDecoratedList_5039.addAssign_operation (var_typeKind_5229, enumerator_5081.current_mOptionName (HERE)  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 133)) ;
      enumerator_5081.gotoNextObject () ;
    }
    GALGAS_autoLayoutViewBindingSpecificationMap var_bindingMap_5803 ;
    GALGAS_lstring var_outletSuperClassName_5841 ;
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = ioArgument_ioSemanticContext.readProperty_mAutoLayoutBindingSpecificationMap ().getter_hasKey (enumerator_3837.current_mOutletClassName (HERE).readProperty_string () COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 138)).boolEnum () ;
      if (kBoolTrue == test_7) {
        {
        ioArgument_ioSemanticContext.mProperty_mAutoLayoutBindingSpecificationMap.setter_removeKey (enumerator_3837.current_mOutletClassName (HERE), var_outletSuperClassName_5841, var_bindingMap_5803, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 139)) ;
        }
      }
    }
    if (kBoolFalse == test_7) {
      var_bindingMap_5803 = GALGAS_autoLayoutViewBindingSpecificationMap::constructor_emptyMap (SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 141)) ;
      GALGAS_bool joker_6197_8 ; // Joker input parameter
      GALGAS_bool joker_6197_7 ; // Joker input parameter
      GALGAS_bool joker_6197_6 ; // Joker input parameter
      GALGAS_bool joker_6197_5 ; // Joker input parameter
      GALGAS_bool joker_6197_4 ; // Joker input parameter
      GALGAS_bool joker_6197_3 ; // Joker input parameter
      GALGAS_autoLayoutClassParameterList joker_6197_2 ; // Joker input parameter
      GALGAS_astAutoLayoutViewFunctionMap joker_6197_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mAutolayoutViewClassMap ().method_searchKey (enumerator_3837.current_mOutletClassName (HERE), var_outletSuperClassName_5841, joker_6197_8, joker_6197_7, joker_6197_6, joker_6197_5, joker_6197_4, joker_6197_3, joker_6197_2, joker_6197_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 142)) ;
    }
    {
    var_bindingMap_5803.setter_insertKey (enumerator_3837.current_mBindingName (HERE), var_outletBindingSpecificationModelList_3955, var_controllerBindingOptionDecoratedList_5039, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 144)) ;
    }
    {
    ioArgument_ioSemanticContext.mProperty_mAutoLayoutBindingSpecificationMap.setter_insertKey (enumerator_3837.current_mOutletClassName (HERE), var_outletSuperClassName_5841, var_bindingMap_5803, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 149)) ;
    }
    enumerator_3837.gotoNextObject () ;
  }
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
  GALGAS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_29041 ;
  const GALGAS_astComputedHorizontalViewDeclaration temp_0 = this ;
  extensionMethod_checkViewFunctionCallList (temp_0.readProperty_mFunctionCallList (), constinArgument_inSemanticContext.readProperty_mAutoLayoutHStackFunctionMap (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_29041, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 661)) ;
  GALGAS_autoLayoutViewInstructionGenerationList var_instructionList_29108 = GALGAS_autoLayoutViewInstructionGenerationList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 677)) ;
  const GALGAS_astComputedHorizontalViewDeclaration temp_1 = this ;
  cEnumerator_astViewInstructionList enumerator_29132 (temp_1.readProperty_mInstructionList (), kENUMERATION_UP) ;
  while (enumerator_29132.hasCurrentObject ()) {
    GALGAS_abstractViewInstructionGeneration var_generatedInstruction_29565 ;
    callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) enumerator_29132.current_mInstruction (HERE).ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_generatedInstruction_29565, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 679)) ;
    var_instructionList_29108.addAssign_operation (var_generatedInstruction_29565  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 694)) ;
    enumerator_29132.gotoNextObject () ;
  }
  const GALGAS_astComputedHorizontalViewDeclaration temp_2 = this ;
  outArgument_outGeneration = GALGAS_computedHorizontalViewGeneration::constructor_new (var_funcCallList_29041, var_instructionList_29108, temp_2.readProperty_mNewStackViewDeclarationList ()  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 696)) ;
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
  GALGAS_autoLayoutViewInstructionGenerationList var_instructionList_31047 = GALGAS_autoLayoutViewInstructionGenerationList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 716)) ;
  GALGAS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_31548 ;
  const GALGAS_astComputedVerticalViewDeclaration temp_0 = this ;
  extensionMethod_checkViewFunctionCallList (temp_0.readProperty_mFunctionCallList (), constinArgument_inSemanticContext.readProperty_mAutoLayoutVStackFunctionMap (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_31548, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 717)) ;
  const GALGAS_astComputedVerticalViewDeclaration temp_1 = this ;
  cEnumerator_astViewInstructionList enumerator_31571 (temp_1.readProperty_mInstructionList (), kENUMERATION_UP) ;
  while (enumerator_31571.hasCurrentObject ()) {
    GALGAS_abstractViewInstructionGeneration var_generatedInstruction_32003 ;
    callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) enumerator_31571.current_mInstruction (HERE).ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_generatedInstruction_32003, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 734)) ;
    var_instructionList_31047.addAssign_operation (var_generatedInstruction_32003  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 749)) ;
    enumerator_31571.gotoNextObject () ;
  }
  const GALGAS_astComputedVerticalViewDeclaration temp_2 = this ;
  outArgument_outGeneration = GALGAS_computedVerticalViewGeneration::constructor_new (var_funcCallList_31548, var_instructionList_31047, temp_2.readProperty_mNewStackViewDeclarationList ()  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 751)) ;
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
  outArgument_outInstruction = GALGAS_autoLayoutSpaceViewInstructionGeneration::constructor_new (SOURCE_FILE ("auto-layout-view.ggs", 787)) ;
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
  outArgument_outInstruction = GALGAS_autoLayoutSeparatorInstructionGeneration::constructor_new (temp_0.readProperty_horizontal ()  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 806)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@astDividerInstructionDeclaration generateViewCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_astDividerInstructionDeclaration::method_generateViewCode (const GALGAS_autoLayoutViewDeclarationMap /* constinArgument_inViewDeclarationMap */,
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
  const GALGAS_astDividerInstructionDeclaration temp_0 = this ;
  outArgument_outInstruction = GALGAS_autoLayoutDividerInstructionGeneration::constructor_new (temp_0.readProperty_horizontal ()  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 825)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@astLocalViewInstruction generateViewCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_astLocalViewInstruction::method_generateViewCode (const GALGAS_autoLayoutViewDeclarationMap /* constinArgument_inViewDeclarationMap */,
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
  const GALGAS_astLocalViewInstruction temp_0 = this ;
  outArgument_outInstruction = GALGAS_autoLayoutLocalViewInstructionGeneration::constructor_new (temp_0.readProperty_mLocalView ().readProperty_string ()  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 845)) ;
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
  GALGAS_autoLayoutClassParameterList var_formalParameterList_40012 ;
  GALGAS_astAutoLayoutViewFunctionMap var_functionMap_40034 ;
  const GALGAS_astComputedViewInstruction temp_0 = this ;
  GALGAS_lstring joker_39980_7 ; // Joker input parameter
  GALGAS_bool joker_39980_6 ; // Joker input parameter
  GALGAS_bool joker_39980_5 ; // Joker input parameter
  GALGAS_bool joker_39980_4 ; // Joker input parameter
  GALGAS_bool joker_39980_3 ; // Joker input parameter
  GALGAS_bool joker_39980_2 ; // Joker input parameter
  GALGAS_bool joker_39980_1 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mAutolayoutViewClassMap ().method_searchKey (temp_0.readProperty_mAutoLayoutViewClassName (), joker_39980_7, joker_39980_6, joker_39980_5, joker_39980_4, joker_39980_3, joker_39980_2, joker_39980_1, var_formalParameterList_40012, var_functionMap_40034, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 864)) ;
  GALGAS_autoLayoutViewInstructionGenerationParameterList var_parameterList_40108 = GALGAS_autoLayoutViewInstructionGenerationParameterList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 869)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_astComputedViewInstruction temp_2 = this ;
    test_1 = GALGAS_bool (kIsNotEqual, var_formalParameterList_40012.getter_length (SOURCE_FILE ("auto-layout-view.ggs", 870)).objectCompare (temp_2.readProperty_mParameterList ().getter_length (SOURCE_FILE ("auto-layout-view.ggs", 870)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_astComputedViewInstruction temp_3 = this ;
      const GALGAS_astComputedViewInstruction temp_4 = this ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mAutoLayoutViewClassName ().readProperty_location (), var_formalParameterList_40012.getter_length (SOURCE_FILE ("auto-layout-view.ggs", 872)).getter_string (SOURCE_FILE ("auto-layout-view.ggs", 872)).add_operation (GALGAS_string (" parameter(s) required, "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 872)).add_operation (temp_4.readProperty_mParameterList ().getter_length (SOURCE_FILE ("auto-layout-view.ggs", 872)).getter_string (SOURCE_FILE ("auto-layout-view.ggs", 872)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 872)).add_operation (GALGAS_string (" provided"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 872)), fixItArray5  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 871)) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_astComputedViewInstruction temp_6 = this ;
    cEnumerator_astAutoLayoutViewInstructionParameterList enumerator_40375 (temp_6.readProperty_mParameterList (), kENUMERATION_UP) ;
    cEnumerator_autoLayoutClassParameterList enumerator_40423 (var_formalParameterList_40012, kENUMERATION_UP) ;
    while (enumerator_40375.hasCurrentObject () && enumerator_40423.hasCurrentObject ()) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        GALGAS_lstring var_enumTypeName_40508 ;
        const bool optionalResult40484 = enumerator_40423.current_mParameterType (HERE).optional_typeEnum (var_enumTypeName_40508) ;
        if (!optionalResult40484) {
          test_7 = kBoolFalse ;
        }
        if (kBoolTrue == test_7) {
          GALGAS_lstring var_constantName_40553 ;
          const bool optionalResult40529 = enumerator_40375.current_mParameterType (HERE).optional_typeEnum (var_constantName_40553) ;
          if (!optionalResult40529) {
            test_7 = kBoolFalse ;
          }
          if (kBoolTrue == test_7) {
            GALGAS_classKind var_typeKind_40617 ;
            GALGAS_propertyMap joker_40619_3 ; // Joker input parameter
            GALGAS_actionMap joker_40619_2 ; // Joker input parameter
            GALGAS_propertyGenerationList joker_40619_1 ; // Joker input parameter
            constinArgument_inClassMap.method_searchKey (var_enumTypeName_40508, var_typeKind_40617, joker_40619_3, joker_40619_2, joker_40619_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 876)) ;
            enumGalgasBool test_8 = kBoolTrue ;
            if (kBoolTrue == test_8) {
              GALGAS_typeKind var_classKind_40675 ;
              const bool optionalResult40654 = var_typeKind_40617.optional_atomic (var_classKind_40675) ;
              if (!optionalResult40654) {
                test_8 = kBoolFalse ;
              }
              if (kBoolTrue == test_8) {
                GALGAS_string var_unused_0_40705 ;
                GALGAS_enumConstantMap var_constantMap_40735 ;
                GALGAS_enumFuncMap var_unused_0_40739 ;
                const bool optionalResult40701 = var_classKind_40675.optional_enumType (var_unused_0_40705, var_constantMap_40735, var_unused_0_40739) ;
                if (!optionalResult40701) {
                  test_8 = kBoolFalse ;
                }
                if (kBoolTrue == test_8) {
                  GALGAS_uint joker_40794 ; // Joker input parameter
                  var_constantMap_40735.method_searchKey (var_constantName_40553, joker_40794, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 878)) ;
                }
              }
            }
            if (kBoolFalse == test_8) {
              TC_Array <C_FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (var_enumTypeName_40508.readProperty_location (), GALGAS_string ("this type name is not an enum"), fixItArray9  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 880)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_7) {
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          test_10 = GALGAS_bool (kIsNotEqual, enumerator_40375.current_mParameterType (HERE).objectCompare (enumerator_40423.current_mParameterType (HERE))).boolEnum () ;
          if (kBoolTrue == test_10) {
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (enumerator_40375.current_mParameterName (HERE).readProperty_location (), GALGAS_string ("the formal parameter requires ").add_operation (extensionGetter_string (enumerator_40423.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 883)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 883)).add_operation (GALGAS_string (", actual parameter is "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 883)).add_operation (extensionGetter_string (enumerator_40375.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 883)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 883)), fixItArray11  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 883)) ;
          }
        }
      }
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = GALGAS_bool (kIsNotEqual, enumerator_40375.current_mParameterName (HERE).readProperty_string ().objectCompare (enumerator_40423.current_mParameterName (HERE).readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_12) {
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (enumerator_40375.current_mParameterName (HERE).readProperty_location (), GALGAS_string ("the parameter name should be '").add_operation (enumerator_40423.current_mParameterName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 886)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 886)), fixItArray13  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 886)) ;
        }
      }
      switch (enumerator_40375.current_mParameter (HERE).enumValue ()) {
      case GALGAS_astAutoLayoutViewInstructionParameterValue::kNotBuilt:
        break ;
      case GALGAS_astAutoLayoutViewInstructionParameterValue::kEnum_viewFunc:
        {
          const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_viewFunc * extractPtr_41934 = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_viewFunc *) (enumerator_40375.current_mParameter (HERE).unsafePointer ()) ;
          const GALGAS_astAbstractViewInstructionDeclaration extractedValue_41215_instruction = extractPtr_41934->mAssociatedValue0 ;
          GALGAS_abstractViewInstructionGeneration var_viewInstruction_41737 ;
          callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) extractedValue_41215_instruction.ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_viewInstruction_41737, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 890)) ;
          var_parameterList_40108.addAssign_operation (enumerator_40375.current_mParameterName (HERE).readProperty_string (), GALGAS_string ("self.computeImplicitView_").add_operation (ioArgument_ioImplicitViewFunctionGenerationList.getter_length (SOURCE_FILE ("auto-layout-view.ggs", 905)).getter_string (SOURCE_FILE ("auto-layout-view.ggs", 905)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 905)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 905))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 905)) ;
          ioArgument_ioImplicitViewFunctionGenerationList.addAssign_operation (var_viewInstruction_41737  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 906)) ;
        }
        break ;
      case GALGAS_astAutoLayoutViewInstructionParameterValue::kEnum_entity:
        {
          const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_entity * extractPtr_42199 = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_entity *) (enumerator_40375.current_mParameter (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_41964_entityName = extractPtr_42199->mAssociatedValue0 ;
          GALGAS_classKind var_classKind_42024 ;
          GALGAS_propertyMap joker_42026_3 ; // Joker input parameter
          GALGAS_actionMap joker_42026_2 ; // Joker input parameter
          GALGAS_propertyGenerationList joker_42026_1 ; // Joker input parameter
          constinArgument_inClassMap.method_searchKey (extractedValue_41964_entityName, var_classKind_42024, joker_42026_3, joker_42026_2, joker_42026_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 908)) ;
          enumGalgasBool test_14 = kBoolTrue ;
          if (kBoolTrue == test_14) {
            test_14 = var_classKind_42024.getter_isEntity (SOURCE_FILE ("auto-layout-view.ggs", 909)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 909)).boolEnum () ;
            if (kBoolTrue == test_14) {
              TC_Array <C_FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (extractedValue_41964_entityName.readProperty_location (), GALGAS_string ("an entity is required here"), fixItArray15  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 910)) ;
            }
          }
          var_parameterList_40108.addAssign_operation (enumerator_40375.current_mParameterName (HERE).readProperty_string (), extractedValue_41964_entityName.readProperty_string ().add_operation (GALGAS_string (".self"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 912))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 912)) ;
        }
        break ;
      case GALGAS_astAutoLayoutViewInstructionParameterValue::kEnum_string:
        {
          const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_string * extractPtr_42277 = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_string *) (enumerator_40375.current_mParameter (HERE).unsafePointer ()) ;
          const GALGAS_string extractedValue_42230_stringValue = extractPtr_42277->mAssociatedValue0 ;
          var_parameterList_40108.addAssign_operation (enumerator_40375.current_mParameterName (HERE).readProperty_string (), extractedValue_42230_stringValue  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 914)) ;
        }
        break ;
      case GALGAS_astAutoLayoutViewInstructionParameterValue::kEnum_menuItem:
        {
          const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_menuItem * extractPtr_43617 = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_menuItem *) (enumerator_40375.current_mParameter (HERE).unsafePointer ()) ;
          const GALGAS_string extractedValue_42304_title = extractPtr_43617->mAssociatedValue0 ;
          const GALGAS_runActionDescriptor extractedValue_42308_run = extractPtr_43617->mAssociatedValue1 ;
          const GALGAS_multipleBindingDescriptor extractedValue_42323_enabledBinding = extractPtr_43617->mAssociatedValue2 ;
          GALGAS_autolayoutRunBindingForGeneration var_runBindingGeneration_42631 ;
          {
          routine_analyzeAutoLayoutRunBinding (extractedValue_42308_run, GALGAS_bool (true), constinArgument_inPreferences, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-view.ggs", 920)), constinArgument_inActionMap, constinArgument_inObservablePropertyMap, constinArgument_inReceiverSwiftTypeName, var_runBindingGeneration_42631, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 916)) ;
          }
          GALGAS_autolayoutEnabledBindingForGeneration var_enabledBindingGeneration_42968 ;
          {
          routine_analyzeAutoLayoutEnableBinding (extractedValue_42323_enabledBinding, GALGAS_bool (true), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_enabledBindingGeneration_42968, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 926)) ;
          }
          GALGAS_string var_s_42992 = GALGAS_string ("AutoLayoutMenuItemDescriptor (title: ").add_operation (extractedValue_42304_title.getter_utf_38_Representation (SOURCE_FILE ("auto-layout-view.ggs", 936)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 936)) ;
          switch (var_runBindingGeneration_42631.enumValue ()) {
          case GALGAS_autolayoutRunBindingForGeneration::kNotBuilt:
            break ;
          case GALGAS_autolayoutRunBindingForGeneration::kEnum_none:
            {
              var_s_42992.plusAssign_operation(GALGAS_string (", target: nil, selector: nil"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 939)) ;
            }
            break ;
          case GALGAS_autolayoutRunBindingForGeneration::kEnum_run:
            {
              const cEnumAssociatedValues_autolayoutRunBindingForGeneration_run * extractPtr_43338 = (const cEnumAssociatedValues_autolayoutRunBindingForGeneration_run *) (var_runBindingGeneration_42631.unsafePointer ()) ;
              const GALGAS_string extractedValue_43195_targetName = extractPtr_43338->mAssociatedValue0 ;
              const GALGAS_string extractedValue_43206_actionName = extractPtr_43338->mAssociatedValue1 ;
              const GALGAS_string extractedValue_43220_runTargetName = extractPtr_43338->mAssociatedValue2 ;
              var_s_42992.plusAssign_operation(GALGAS_string (", target: ").add_operation (extractedValue_43195_targetName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 941)).add_operation (GALGAS_string (", selector: #selector ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 941)).add_operation (extractedValue_43220_runTargetName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 941)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 941)).add_operation (extractedValue_43206_actionName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 941)).add_operation (GALGAS_string (" (_:))"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 941)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 941)) ;
            }
            break ;
          }
          switch (var_enabledBindingGeneration_42968.enumValue ()) {
          case GALGAS_autolayoutEnabledBindingForGeneration::kNotBuilt:
            break ;
          case GALGAS_autolayoutEnabledBindingForGeneration::kEnum_none:
            {
              var_s_42992.plusAssign_operation(GALGAS_string (", enableBinding: .alwaysTrue"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 945)) ;
            }
            break ;
          case GALGAS_autolayoutEnabledBindingForGeneration::kEnum_enabled:
            {
              const cEnumAssociatedValues_autolayoutEnabledBindingForGeneration_enabled * extractPtr_43554 = (const cEnumAssociatedValues_autolayoutEnabledBindingForGeneration_enabled *) (var_enabledBindingGeneration_42968.unsafePointer ()) ;
              const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration extractedValue_43487_binding = extractPtr_43554->mAssociatedValue0 ;
              var_s_42992.plusAssign_operation(GALGAS_string (", enableBinding: ").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) extractedValue_43487_binding.ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 947)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 947)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 947)) ;
            }
            break ;
          }
          var_s_42992.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 949)) ;
          var_parameterList_40108.addAssign_operation (enumerator_40375.current_mParameterName (HERE).readProperty_string (), var_s_42992  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 950)) ;
        }
        break ;
      case GALGAS_astAutoLayoutViewInstructionParameterValue::kEnum_enumFunc:
        {
          const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_enumFunc * extractPtr_44225 = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_enumFunc *) (enumerator_40375.current_mParameter (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_43651_enumTypeName = extractPtr_44225->mAssociatedValue0 ;
          const GALGAS_lstring extractedValue_43660_funcName = extractPtr_44225->mAssociatedValue1 ;
          GALGAS_classKind var_type_43734 ;
          GALGAS_propertyMap joker_43736_3 ; // Joker input parameter
          GALGAS_actionMap joker_43736_2 ; // Joker input parameter
          GALGAS_propertyGenerationList joker_43736_1 ; // Joker input parameter
          constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_43651_enumTypeName, var_type_43734, joker_43736_3, joker_43736_2, joker_43736_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 952)) ;
          enumGalgasBool test_16 = kBoolTrue ;
          if (kBoolTrue == test_16) {
            test_16 = var_type_43734.getter_isAtomic (SOURCE_FILE ("auto-layout-view.ggs", 953)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 953)).boolEnum () ;
            if (kBoolTrue == test_16) {
              TC_Array <C_FixItDescription> fixItArray17 ;
              inCompiler->emitSemanticError (extractedValue_43651_enumTypeName.readProperty_location (), GALGAS_string ("this type should be an enum type"), fixItArray17  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 954)) ;
            }
          }
          if (kBoolFalse == test_16) {
            GALGAS_typeKind var_typeKind_43896 ;
            var_type_43734.method_atomic (var_typeKind_43896, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 956)) ;
            enumGalgasBool test_18 = kBoolTrue ;
            if (kBoolTrue == test_18) {
              test_18 = var_typeKind_43896.getter_isEnumType (SOURCE_FILE ("auto-layout-view.ggs", 957)).boolEnum () ;
              if (kBoolTrue == test_18) {
                GALGAS_enumFuncMap var_funcMap_43993 ;
                GALGAS_string joker_43970_2 ; // Joker input parameter
                GALGAS_enumConstantMap joker_43970_1 ; // Joker input parameter
                var_typeKind_43896.method_enumType (joker_43970_2, joker_43970_1, var_funcMap_43993, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 958)) ;
                GALGAS_enumFunAssociationSortedList joker_44037 ; // Joker input parameter
                var_funcMap_43993.method_searchKey (extractedValue_43660_funcName, joker_44037, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 959)) ;
              }
            }
            if (kBoolFalse == test_18) {
              TC_Array <C_FixItDescription> fixItArray19 ;
              inCompiler->emitSemanticError (extractedValue_43651_enumTypeName.readProperty_location (), GALGAS_string ("this type should be an enum type"), fixItArray19  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 961)) ;
            }
          }
          var_parameterList_40108.addAssign_operation (enumerator_40375.current_mParameterName (HERE).readProperty_string (), extractedValue_43651_enumTypeName.readProperty_string ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 964)).add_operation (extractedValue_43660_funcName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 964)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 964))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 964)) ;
        }
        break ;
      }
      enumerator_40375.gotoNextObject () ;
      enumerator_40423.gotoNextObject () ;
    }
  }
  GALGAS_autoLayoutRegularBindingsGenerationList var_regularBindingsGenerationList_44786 ;
  GALGAS_autoLayoutMultipleBindingGenerationList var_multipleBindingGenerationList_44866 ;
  GALGAS_autolayoutRunBindingForGeneration var_runBindingGeneration_44931 ;
  GALGAS_string var_inTableViewBindingGeneration_44977 ;
  GALGAS_autoLayoutViewGraphicControllerBindingGeneration var_ebViewGraphicControllerBindingGeneration_45077 ;
  {
  const GALGAS_astComputedViewInstruction temp_20 = this ;
  const GALGAS_astComputedViewInstruction temp_21 = this ;
  const GALGAS_astComputedViewInstruction temp_22 = this ;
  const GALGAS_astComputedViewInstruction temp_23 = this ;
  const GALGAS_astComputedViewInstruction temp_24 = this ;
  const GALGAS_astComputedViewInstruction temp_25 = this ;
  const GALGAS_astComputedViewInstruction temp_26 = this ;
  routine_analyzeAutoLayoutBinding (constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, temp_20.readProperty_mAutoLayoutViewClassName (), temp_21.readProperty_mTableValueBinding (), temp_22.readProperty_mRunActionDescriptor (), temp_23.readProperty_mEnabledBindingDescriptor (), temp_24.readProperty_mHiddenBindingDescriptor (), temp_25.readProperty_mGraphicController (), temp_26.readProperty_mRegularBindingList (), var_regularBindingsGenerationList_44786, var_multipleBindingGenerationList_44866, var_runBindingGeneration_44931, var_inTableViewBindingGeneration_44977, var_ebViewGraphicControllerBindingGeneration_45077, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 969)) ;
  }
  GALGAS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_45542 ;
  const GALGAS_astComputedViewInstruction temp_27 = this ;
  extensionMethod_checkViewFunctionCallList (temp_27.readProperty_mFunctionCallList (), var_functionMap_40034, constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_45542, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 993)) ;
  enumGalgasBool test_28 = kBoolTrue ;
  if (kBoolTrue == test_28) {
    const GALGAS_astComputedViewInstruction temp_29 = this ;
    test_28 = GALGAS_bool (kIsNotEqual, temp_29.readProperty_mOutletName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_28) {
      {
      const GALGAS_astComputedViewInstruction temp_30 = this ;
      const GALGAS_astComputedViewInstruction temp_31 = this ;
      const GALGAS_astComputedViewInstruction temp_32 = this ;
      ioArgument_ioOutletMap.setter_insertKey (temp_30.readProperty_mOutletName (), temp_31.readProperty_mAutoLayoutViewClassName ().readProperty_string (), temp_32.readProperty_mOutletIsArray (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1011)) ;
      }
    }
  }
  enumGalgasBool test_33 = kBoolTrue ;
  if (kBoolTrue == test_33) {
    const GALGAS_astComputedViewInstruction temp_34 = this ;
    test_33 = GALGAS_bool (kIsNotEqual, temp_34.readProperty_mConfiguratorName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_33) {
      {
      const GALGAS_astComputedViewInstruction temp_35 = this ;
      const GALGAS_astComputedViewInstruction temp_36 = this ;
      ioArgument_ioConfiguratorMap.setter_insertKey (temp_35.readProperty_mConfiguratorName (), temp_36.readProperty_mAutoLayoutViewClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1015)) ;
      }
    }
  }
  const GALGAS_astComputedViewInstruction temp_37 = this ;
  const GALGAS_astComputedViewInstruction temp_38 = this ;
  const GALGAS_astComputedViewInstruction temp_39 = this ;
  const GALGAS_astComputedViewInstruction temp_40 = this ;
  outArgument_outInstruction = GALGAS_autoLayoutComputedViewInstructionGeneration::constructor_new (temp_37.readProperty_mAutoLayoutViewClassName (), var_parameterList_40108, var_funcCallList_45542, var_regularBindingsGenerationList_44786, var_multipleBindingGenerationList_44866, var_runBindingGeneration_44931, var_inTableViewBindingGeneration_44977, var_ebViewGraphicControllerBindingGeneration_45077, temp_38.readProperty_mConfiguratorName ().readProperty_string (), temp_39.readProperty_mOutletName ().readProperty_string (), temp_40.readProperty_mOutletIsArray ()  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1018)) ;
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
  outArgument_outRegularBindingsGenerationList = GALGAS_autoLayoutRegularBindingsGenerationList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 1059)) ;
  outArgument_outMultipleBindingGenerationList = GALGAS_autoLayoutMultipleBindingGenerationList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 1060)) ;
  outArgument_outTableViewBindingGeneration = GALGAS_string::makeEmptyString () ;
  GALGAS_bool var_handlesRunAction_47679 ;
  GALGAS_bool var_handlesTableViewBinding_47718 ;
  GALGAS_bool var_handlesEnabledBinding_47755 ;
  GALGAS_bool var_handlesHiddenBinding_47791 ;
  GALGAS_bool var_handleGraphicControllerBinding_47837 ;
  GALGAS_lstring joker_47646 ; // Joker input parameter
  GALGAS_bool joker_47843_3 ; // Joker input parameter
  GALGAS_autoLayoutClassParameterList joker_47843_2 ; // Joker input parameter
  GALGAS_astAutoLayoutViewFunctionMap joker_47843_1 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mAutolayoutViewClassMap ().method_searchKey (constinArgument_inTypeName, joker_47646, var_handlesRunAction_47679, var_handlesTableViewBinding_47718, var_handlesEnabledBinding_47755, var_handlesHiddenBinding_47791, var_handleGraphicControllerBinding_47837, joker_47843_3, joker_47843_2, joker_47843_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1062)) ;
  outArgument_outEBViewGraphicControllerBindingGeneration = GALGAS_autoLayoutViewGraphicControllerBindingGeneration::constructor_none (SOURCE_FILE ("auto-layout-view.ggs", 1073)) ;
  switch (constinArgument_inGraphicController.enumValue ()) {
  case GALGAS_graphicController::kNotBuilt:
    break ;
  case GALGAS_graphicController::kEnum_none:
    {
    }
    break ;
  case GALGAS_graphicController::kEnum_defined:
    {
      const cEnumAssociatedValues_graphicController_defined * extractPtr_50116 = (const cEnumAssociatedValues_graphicController_defined *) (constinArgument_inGraphicController.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_48010_controllerName = extractPtr_50116->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_48032_propertyName = extractPtr_50116->mAssociatedValue1 ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = var_handleGraphicControllerBinding_47837.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1077)).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1078)).add_operation (GALGAS_string ("' type does not handle the $graphicController binding"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1078)), fixItArray1  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1078)) ;
        }
      }
      if (kBoolFalse == test_0) {
        GALGAS_propertyKind var_kind_48292 ;
        GALGAS_actionMap joker_48302_2 ; // Joker input parameter
        GALGAS_bool joker_48302_1 ; // Joker input parameter
        constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_48010_controllerName, var_kind_48292, joker_48302_2, joker_48302_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1080)) ;
        switch (var_kind_48292.enumValue ()) {
        case GALGAS_propertyKind::kNotBuilt:
          break ;
        case GALGAS_propertyKind::kEnum_property:
          {
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (extractedValue_48010_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray2  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1087)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_toMany:
          {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (extractedValue_48010_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray3  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1089)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_toOne:
          {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (extractedValue_48010_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray4  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1091)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_arrayController:
          {
            const cEnumAssociatedValues_propertyKind_arrayController * extractPtr_49865 = (const cEnumAssociatedValues_propertyKind_arrayController *) (var_kind_48292.unsafePointer ()) ;
            const GALGAS_lstring extractedValue_48683_entityName = extractPtr_49865->mAssociatedValue0 ;
            const GALGAS_bool extractedValue_48691_graphic = extractPtr_49865->mAssociatedValue1 ;
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = GALGAS_bool (kIsEqual, extractedValue_48032_propertyName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_5) {
                enumGalgasBool test_6 = kBoolTrue ;
                if (kBoolTrue == test_6) {
                  test_6 = extractedValue_48691_graphic.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1094)).boolEnum () ;
                  if (kBoolTrue == test_6) {
                    TC_Array <C_FixItDescription> fixItArray7 ;
                    inCompiler->emitSemanticError (extractedValue_48010_controllerName.readProperty_location (), GALGAS_string ("the controlled entity (").add_operation (extractedValue_48683_entityName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1095)).add_operation (GALGAS_string (") should be a graphic entity"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1095)), fixItArray7  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1095)) ;
                  }
                }
              }
            }
            if (kBoolFalse == test_5) {
              GALGAS_propertyMap var_observablePropertyMap_49027 ;
              GALGAS_classKind joker_48987 ; // Joker input parameter
              GALGAS_actionMap joker_49041_2 ; // Joker input parameter
              GALGAS_propertyGenerationList joker_49041_1 ; // Joker input parameter
              constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_48683_entityName, joker_48987, var_observablePropertyMap_49027, joker_49041_2, joker_49041_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1098)) ;
              GALGAS_propertyKind var_propertyKind_49130 ;
              GALGAS_actionMap joker_49132_2 ; // Joker input parameter
              GALGAS_bool joker_49132_1 ; // Joker input parameter
              var_observablePropertyMap_49027.method_searchKey (extractedValue_48032_propertyName, var_propertyKind_49130, joker_49132_2, joker_49132_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1104)) ;
              switch (var_propertyKind_49130.enumValue ()) {
              case GALGAS_propertyKind::kNotBuilt:
                break ;
              case GALGAS_propertyKind::kEnum_property:
                {
                  TC_Array <C_FixItDescription> fixItArray8 ;
                  inCompiler->emitSemanticError (extractedValue_48010_controllerName.readProperty_location (), GALGAS_string ("the bound model should be a toMany property"), fixItArray8  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1107)) ;
                }
                break ;
              case GALGAS_propertyKind::kEnum_toMany:
                {
                  const cEnumAssociatedValues_propertyKind_toMany * extractPtr_49490 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_propertyKind_49130.unsafePointer ()) ;
                  const GALGAS_lstring extractedValue_49313_kEntityName = extractPtr_49490->mAssociatedValue0 ;
                  const GALGAS_bool extractedValue_49325_isGraphic = extractPtr_49490->mAssociatedValue2 ;
                  enumGalgasBool test_9 = kBoolTrue ;
                  if (kBoolTrue == test_9) {
                    test_9 = extractedValue_49325_isGraphic.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1109)).boolEnum () ;
                    if (kBoolTrue == test_9) {
                      TC_Array <C_FixItDescription> fixItArray10 ;
                      inCompiler->emitSemanticError (extractedValue_48010_controllerName.readProperty_location (), GALGAS_string ("the controlled entity (").add_operation (extractedValue_49313_kEntityName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1110)).add_operation (GALGAS_string (") should be a graphic entity"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1110)), fixItArray10  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1110)) ;
                    }
                  }
                }
                break ;
              case GALGAS_propertyKind::kEnum_toOne:
                {
                  TC_Array <C_FixItDescription> fixItArray11 ;
                  inCompiler->emitSemanticError (extractedValue_48010_controllerName.readProperty_location (), GALGAS_string ("the bound model should be a toMany property"), fixItArray11  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1113)) ;
                }
                break ;
              case GALGAS_propertyKind::kEnum_arrayController:
                {
                  TC_Array <C_FixItDescription> fixItArray12 ;
                  inCompiler->emitSemanticError (extractedValue_48010_controllerName.readProperty_location (), GALGAS_string ("the bound model should be a toMany property"), fixItArray12  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1115)) ;
                }
                break ;
              case GALGAS_propertyKind::kEnum_selectionController:
                {
                  TC_Array <C_FixItDescription> fixItArray13 ;
                  inCompiler->emitSemanticError (extractedValue_48010_controllerName.readProperty_location (), GALGAS_string ("the bound model should be a toMany property"), fixItArray13  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1117)) ;
                }
                break ;
              }
            }
          }
          break ;
        case GALGAS_propertyKind::kEnum_selectionController:
          {
            TC_Array <C_FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (extractedValue_48010_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray14  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1121)) ;
          }
          break ;
        }
        outArgument_outEBViewGraphicControllerBindingGeneration = GALGAS_autoLayoutViewGraphicControllerBindingGeneration::constructor_binding (extractedValue_48010_controllerName.readProperty_string ()  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1123)) ;
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
      const cEnumAssociatedValues_tableValueBinding_tableValueBinding * extractPtr_51050 = (const cEnumAssociatedValues_tableValueBinding_tableValueBinding *) (constinArgument_inTableValueBinding.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_50246_controllerName = extractPtr_51050->mAssociatedValue0 ;
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = var_handlesTableViewBinding_47718.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1130)).boolEnum () ;
        if (kBoolTrue == test_15) {
          TC_Array <C_FixItDescription> fixItArray16 ;
          inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1131)).add_operation (GALGAS_string ("' type does not handle the $tableView binding"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1131)), fixItArray16  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1131)) ;
        }
      }
      if (kBoolFalse == test_15) {
        enumGalgasBool test_17 = kBoolTrue ;
        if (kBoolTrue == test_17) {
          test_17 = constinArgument_inPreferences.boolEnum () ;
          if (kBoolTrue == test_17) {
            GALGAS_propertyKind var_kind_50512 ;
            GALGAS_actionMap joker_50522_2 ; // Joker input parameter
            GALGAS_bool joker_50522_1 ; // Joker input parameter
            constinArgument_inPreferencesPropertyMap.method_searchKey (extractedValue_50246_controllerName, var_kind_50512, joker_50522_2, joker_50522_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1133)) ;
            enumGalgasBool test_18 = kBoolTrue ;
            if (kBoolTrue == test_18) {
              test_18 = var_kind_50512.getter_isArrayController (SOURCE_FILE ("auto-layout-view.ggs", 1138)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1138)).boolEnum () ;
              if (kBoolTrue == test_18) {
                TC_Array <C_FixItDescription> fixItArray19 ;
                inCompiler->emitSemanticError (extractedValue_50246_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray19  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1139)) ;
              }
            }
            outArgument_outTableViewBindingGeneration = extractedValue_50246_controllerName.readProperty_string () ;
          }
        }
        if (kBoolFalse == test_17) {
          GALGAS_propertyKind var_kind_50830 ;
          GALGAS_actionMap joker_50840_2 ; // Joker input parameter
          GALGAS_bool joker_50840_1 ; // Joker input parameter
          constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_50246_controllerName, var_kind_50830, joker_50840_2, joker_50840_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1143)) ;
          enumGalgasBool test_20 = kBoolTrue ;
          if (kBoolTrue == test_20) {
            test_20 = var_kind_50830.getter_isArrayController (SOURCE_FILE ("auto-layout-view.ggs", 1148)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1148)).boolEnum () ;
            if (kBoolTrue == test_20) {
              TC_Array <C_FixItDescription> fixItArray21 ;
              inCompiler->emitSemanticError (extractedValue_50246_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray21  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1149)) ;
            }
          }
          outArgument_outTableViewBindingGeneration = extractedValue_50246_controllerName.readProperty_string () ;
        }
      }
    }
    break ;
  }
  {
  routine_analyzeAutoLayoutRunBinding (constinArgument_inRunActionDescriptor, var_handlesRunAction_47679, constinArgument_inPreferences, constinArgument_inTypeName, constinArgument_inActionMap, constinArgument_inObservablePropertyMap, constinArgument_inReceiverSwiftTypeName, outArgument_outRunBindingGeneration, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1155)) ;
  }
  GALGAS_autolayoutEnabledBindingForGeneration var_enabledBindingGeneration_51623 ;
  {
  routine_analyzeAutoLayoutEnableBinding (constinArgument_inEnabledBindingDescriptor, var_handlesEnabledBinding_47755, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_enabledBindingGeneration_51623, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1166)) ;
  }
  switch (var_enabledBindingGeneration_51623.enumValue ()) {
  case GALGAS_autolayoutEnabledBindingForGeneration::kNotBuilt:
    break ;
  case GALGAS_autolayoutEnabledBindingForGeneration::kEnum_none:
    {
    }
    break ;
  case GALGAS_autolayoutEnabledBindingForGeneration::kEnum_enabled:
    {
      const cEnumAssociatedValues_autolayoutEnabledBindingForGeneration_enabled * extractPtr_51762 = (const cEnumAssociatedValues_autolayoutEnabledBindingForGeneration_enabled *) (var_enabledBindingGeneration_51623.unsafePointer ()) ;
      const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration extractedValue_51699_binding = extractPtr_51762->mAssociatedValue0 ;
      outArgument_outMultipleBindingGenerationList.addAssign_operation (GALGAS_string ("enabled"), extractedValue_51699_binding  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1179)) ;
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
      const cEnumAssociatedValues_multipleBindingDescriptor_binding * extractPtr_52559 = (const cEnumAssociatedValues_multipleBindingDescriptor_binding *) (constinArgument_inHiddenBindingDescriptor.unsafePointer ()) ;
      const GALGAS_abstractBooleanMultipleBindingExpressionAST extractedValue_51906_expression = extractPtr_52559->mAssociatedValue0 ;
      GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_52195 ;
      GALGAS_typeKind var_type_52221 ;
      GALGAS_location var_errorLocation_52256 ;
      callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_51906_expression.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_hiddenExpression_52195, var_type_52221, var_errorLocation_52256, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1185)) ;
      enumGalgasBool test_22 = kBoolTrue ;
      if (kBoolTrue == test_22) {
        test_22 = var_type_52221.getter_isBoolType (SOURCE_FILE ("auto-layout-view.ggs", 1195)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1195)).boolEnum () ;
        if (kBoolTrue == test_22) {
          TC_Array <C_FixItDescription> fixItArray23 ;
          inCompiler->emitSemanticError (var_errorLocation_52256, GALGAS_string ("expression is not boolean"), fixItArray23  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1196)) ;
        }
      }
      enumGalgasBool test_24 = kBoolTrue ;
      if (kBoolTrue == test_24) {
        test_24 = var_handlesHiddenBinding_47791.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1198)).boolEnum () ;
        if (kBoolTrue == test_24) {
          TC_Array <C_FixItDescription> fixItArray25 ;
          inCompiler->emitSemanticError (var_errorLocation_52256, GALGAS_string ("cet outlet n'accepte pas le binding $hidden"), fixItArray25  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1199)) ;
        }
      }
      outArgument_outMultipleBindingGenerationList.addAssign_operation (GALGAS_string ("hidden"), var_hiddenExpression_52195  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1201)) ;
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
  routine_analyzeAutoLayoutRegularBinding (constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inTypeName, constinArgument_inRegularBindingList, temp_26, outArgument_outRegularBindingsGenerationList, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1206)) ;
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
      outArgument_outEnabledBindingGeneration = GALGAS_autolayoutEnabledBindingForGeneration::constructor_none (SOURCE_FILE ("auto-layout-view.ggs", 1233)) ;
    }
    break ;
  case GALGAS_multipleBindingDescriptor::kEnum_binding:
    {
      const cEnumAssociatedValues_multipleBindingDescriptor_binding * extractPtr_54334 = (const cEnumAssociatedValues_multipleBindingDescriptor_binding *) (constinArgument_inEnabledBindingDescriptor.unsafePointer ()) ;
      const GALGAS_abstractBooleanMultipleBindingExpressionAST extractedValue_53685_expression = extractPtr_54334->mAssociatedValue0 ;
      GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_enableExpression_53974 ;
      GALGAS_typeKind var_type_54000 ;
      GALGAS_location var_errorLocation_54035 ;
      callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_53685_expression.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_enableExpression_53974, var_type_54000, var_errorLocation_54035, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1235)) ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = constinArgument_inHandlesEnabledBinding.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1245)).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (var_errorLocation_54035, GALGAS_string ("cet outlet n'accepte pas le binding $enabled"), fixItArray1  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1246)) ;
        }
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_type_54000.getter_isBoolType (SOURCE_FILE ("auto-layout-view.ggs", 1248)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1248)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_errorLocation_54035, GALGAS_string ("expression is not boolean"), fixItArray3  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1249)) ;
        }
      }
      outArgument_outEnabledBindingGeneration = GALGAS_autolayoutEnabledBindingForGeneration::constructor_enabled (var_enableExpression_53974  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1251)) ;
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
      outArgument_outRunBindingGeneration = GALGAS_autolayoutRunBindingForGeneration::constructor_none (SOURCE_FILE ("auto-layout-view.ggs", 1269)) ;
    }
    break ;
  case GALGAS_runActionDescriptor::kEnum_action:
    {
      const cEnumAssociatedValues_runActionDescriptor_action * extractPtr_55820 = (const cEnumAssociatedValues_runActionDescriptor_action *) (constinArgument_inRunActionDescriptor.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_54947_target = extractPtr_55820->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_54963_action = extractPtr_55820->mAssociatedValue1 ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = constinArgument_inHandlesRunAction.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1271)).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1272)).add_operation (GALGAS_string ("' type does not handle run action"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1272)), fixItArray1  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1272)) ;
          outArgument_outRunBindingGeneration.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_0) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (kIsEqual, extractedValue_54947_target.readProperty_string ().objectCompare (GALGAS_string ("self"))).boolEnum () ;
          if (kBoolTrue == test_2) {
            constinArgument_inActionMap.method_searchKey (extractedValue_54963_action, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1275)) ;
            outArgument_outRunBindingGeneration = GALGAS_autolayoutRunBindingForGeneration::constructor_run (GALGAS_string ("self"), extractedValue_54963_action.readProperty_string (), constinArgument_inReceiverSwiftTypeName  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1276)) ;
          }
        }
        if (kBoolFalse == test_2) {
          GALGAS_actionMap var_controllerActionMap_55499 ;
          GALGAS_propertyKind joker_55454 ; // Joker input parameter
          GALGAS_bool joker_55509 ; // Joker input parameter
          constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_54947_target, joker_55454, var_controllerActionMap_55499, joker_55509, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1282)) ;
          var_controllerActionMap_55499.method_searchKey (extractedValue_54963_action, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1288)) ;
          GALGAS_string temp_3 ;
          const enumGalgasBool test_4 = constinArgument_inPreferences.boolEnum () ;
          if (kBoolTrue == test_4) {
            temp_3 = GALGAS_string ("preferences_") ;
          }else if (kBoolFalse == test_4) {
            temp_3 = GALGAS_string::makeEmptyString () ;
          }
          outArgument_outRunBindingGeneration = GALGAS_autolayoutRunBindingForGeneration::constructor_run (temp_3.add_operation (extractedValue_54947_target.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1290)), extractedValue_54963_action.readProperty_string (), GALGAS_string ("Controller_").add_operation (constinArgument_inReceiverSwiftTypeName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1292)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1292)).add_operation (extractedValue_54947_target.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1292))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1289)) ;
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
  cEnumerator_regularBindingList enumerator_56447 (constinArgument_inRegularBindingList, kENUMERATION_UP) ;
  while (enumerator_56447.hasCurrentObject ()) {
    GALGAS_outletBindingModelList var_boundModelTypeList_56547 = GALGAS_outletBindingModelList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 1313)) ;
    GALGAS_boundObjectList var_boundModelListForGeneration_56605 = GALGAS_boundObjectList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 1314)) ;
    cEnumerator_observablePropertyList enumerator_56639 (enumerator_56447.current_mObservablePropertyList (HERE), kENUMERATION_UP) ;
    while (enumerator_56639.hasCurrentObject ()) {
      GALGAS_propertyKind var_kind_56898 ;
      GALGAS_string var_swiftTypeStringForTransientFunctionArgument_56970 ;
      GALGAS_string var_defaultValueAsString_57019 ;
      GALGAS_propertyMap temp_0 ;
      const enumGalgasBool test_1 = constinArgument_inPreferences.boolEnum () ;
      if (kBoolTrue == test_1) {
        temp_0 = constinArgument_inPreferencesPropertyMap ;
      }else if (kBoolFalse == test_1) {
        temp_0 = constinArgument_inBoundModelPropertyMap ;
      }
      extensionMethod_analyzeObservableProperty (enumerator_56639.current_mObservableProperty (HERE), constinArgument_inRootPropertyMap, constinArgument_inSemanticContext, temp_0, var_kind_56898, var_swiftTypeStringForTransientFunctionArgument_56970, var_defaultValueAsString_57019, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1316)) ;
      switch (var_kind_56898.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_56639.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1327)), GALGAS_string ("a toMany property cannot be bound"), fixItArray2  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1327)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_56639.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1329)), GALGAS_string ("a toOne property cannot be bound"), fixItArray3  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1329)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_56639.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1331)), GALGAS_string ("an array controller cannot be bound"), fixItArray4  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1331)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_56639.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1333)), GALGAS_string ("a selection controller cannot be bound"), fixItArray5  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1333)) ;
        }
        break ;
      }
      var_boundModelListForGeneration_56605.addAssign_operation (extensionGetter_modelStringForSelf (enumerator_56639.current_mObservableProperty (HERE), constinArgument_inSelfSwiftName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1335)), var_kind_56898  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1335)) ;
      var_boundModelTypeList_56547.addAssign_operation (var_kind_56898, extensionGetter_location (enumerator_56639.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1336))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1336)) ;
      enumerator_56639.gotoNextObject () ;
    }
    GALGAS_outletBindingSpecificationModelList var_outletBindingSpecificationModelList_57824 = GALGAS_outletBindingSpecificationModelList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 1339)) ;
    GALGAS_controllerBindingOptionDecoratedList var_controllerBindingOptionDecoratedList_57912 = GALGAS_controllerBindingOptionDecoratedList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 1340)) ;
    GALGAS_lstring var_outletTypeName_57940 = constinArgument_inOutletTypeName ;
    GALGAS_bool var_continues_57977 = GALGAS_bool (true) ;
    if (constinArgument_inSemanticContext.readProperty_mBindingSpecificationMap ().getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1343)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1343)).isValid ()) {
      uint32_t variant_57993 = constinArgument_inSemanticContext.readProperty_mBindingSpecificationMap ().getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1343)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1343)).uintValue () ;
      bool loop_57993 = true ;
      while (loop_57993) {
        loop_57993 = GALGAS_bool (kIsNotEqual, var_outletTypeName_57940.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).operator_and (var_continues_57977 COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1343)).isValid () ;
        if (loop_57993) {
          loop_57993 = GALGAS_bool (kIsNotEqual, var_outletTypeName_57940.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).operator_and (var_continues_57977 COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1343)).boolValue () ;
        }
        if (loop_57993 && (0 == variant_57993)) {
          loop_57993 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("auto-layout-view.ggs", 1343)) ;
        }
        if (loop_57993) {
          variant_57993 -- ;
          var_continues_57977 = GALGAS_bool (false) ;
          GALGAS_lstring var_superOutletClassName_58253 ;
          GALGAS_autoLayoutViewBindingSpecificationMap var_bindingMap_58277 ;
          constinArgument_inSemanticContext.readProperty_mAutoLayoutBindingSpecificationMap ().method_searchKey (var_outletTypeName_57940, var_superOutletClassName_58253, var_bindingMap_58277, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1345)) ;
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = var_bindingMap_58277.getter_hasKey (enumerator_56447.current_mBindingName (HERE).readProperty_string () COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1350)).boolEnum () ;
            if (kBoolTrue == test_6) {
              var_bindingMap_58277.method_searchKey (enumerator_56447.current_mBindingName (HERE), var_outletBindingSpecificationModelList_57824, var_controllerBindingOptionDecoratedList_57912, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1351)) ;
            }
          }
          if (kBoolFalse == test_6) {
            var_continues_57977 = GALGAS_bool (true) ;
            var_outletTypeName_57940 = var_superOutletClassName_58253 ;
          }
        }
      }
    }
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = var_continues_57977.boolEnum () ;
      if (kBoolTrue == test_7) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_56447.current_mBindingName (HERE).readProperty_location (), GALGAS_string ("this binding is not defined"), fixItArray8  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1362)) ;
      }
    }
    if (kBoolFalse == test_7) {
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = GALGAS_bool (kIsNotEqual, var_boundModelTypeList_56547.getter_length (SOURCE_FILE ("auto-layout-view.ggs", 1363)).objectCompare (var_outletBindingSpecificationModelList_57824.getter_length (SOURCE_FILE ("auto-layout-view.ggs", 1363)))).boolEnum () ;
        if (kBoolTrue == test_9) {
          TC_Array <C_FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (enumerator_56447.current_mBindingName (HERE).readProperty_location (), var_outletBindingSpecificationModelList_57824.getter_length (SOURCE_FILE ("auto-layout-view.ggs", 1365)).getter_string (SOURCE_FILE ("auto-layout-view.ggs", 1365)).add_operation (GALGAS_string (" model(s) required for this binding (found: "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1365)).add_operation (var_boundModelTypeList_56547.getter_length (SOURCE_FILE ("auto-layout-view.ggs", 1367)).getter_string (SOURCE_FILE ("auto-layout-view.ggs", 1366)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1366)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1367)), fixItArray10  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1364)) ;
        }
      }
      if (kBoolFalse == test_9) {
        cEnumerator_outletBindingSpecificationModelList enumerator_59037 (var_outletBindingSpecificationModelList_57824, kENUMERATION_UP) ;
        cEnumerator_outletBindingModelList enumerator_59112 (var_boundModelTypeList_56547, kENUMERATION_UP) ;
        while (enumerator_59037.hasCurrentObject () && enumerator_59112.hasCurrentObject ()) {
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            GALGAS_bool test_12 = enumerator_59037.current_mModelShouldBeWritableProperty (HERE) ;
            if (kBoolTrue == test_12.boolEnum ()) {
              test_12 = extensionGetter_isTransient (enumerator_59112.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1370)) ;
            }
            test_11 = test_12.boolEnum () ;
            if (kBoolTrue == test_11) {
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (enumerator_59112.current_mErrorLocation (HERE), GALGAS_string ("the model is transient and the binding requires an writable model"), fixItArray13  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1371)) ;
            }
          }
          enumGalgasBool test_14 = kBoolTrue ;
          if (kBoolTrue == test_14) {
            GALGAS_bool test_15 = enumerator_59037.current_mModelType (HERE).getter_isEnumType (SOURCE_FILE ("auto-layout-view.ggs", 1373)) ;
            if (kBoolTrue == test_15.boolEnum ()) {
              test_15 = extensionGetter_isEnumType (enumerator_59112.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1373)) ;
            }
            test_14 = test_15.boolEnum () ;
            if (kBoolTrue == test_14) {
            }
          }
          if (kBoolFalse == test_14) {
            enumGalgasBool test_16 = kBoolTrue ;
            if (kBoolTrue == test_16) {
              test_16 = GALGAS_bool (kIsNotEqual, extensionGetter_swiftTypeName (enumerator_59037.current_mModelType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1374)).objectCompare (extensionGetter_swiftTypeName (enumerator_59112.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1374)))).boolEnum () ;
              if (kBoolTrue == test_16) {
                TC_Array <C_FixItDescription> fixItArray17 ;
                inCompiler->emitSemanticError (enumerator_59112.current_mErrorLocation (HERE), GALGAS_string ("the model type should be ").add_operation (extensionGetter_swiftTypeName (enumerator_59037.current_mModelType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1375)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1375)), fixItArray17  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1375)) ;
              }
            }
          }
          enumerator_59037.gotoNextObject () ;
          enumerator_59112.gotoNextObject () ;
        }
      }
    }
    GALGAS_string var_bindingOptionString_59694 = GALGAS_string::makeEmptyString () ;
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = GALGAS_bool (kIsNotEqual, var_controllerBindingOptionDecoratedList_57912.getter_length (SOURCE_FILE ("auto-layout-view.ggs", 1381)).objectCompare (enumerator_56447.current_mBindingOptionList (HERE).getter_length (SOURCE_FILE ("auto-layout-view.ggs", 1381)))).boolEnum () ;
      if (kBoolTrue == test_18) {
        GALGAS_string var_s_59808 ;
        enumGalgasBool test_19 = kBoolTrue ;
        if (kBoolTrue == test_19) {
          test_19 = GALGAS_bool (kIsEqual, var_controllerBindingOptionDecoratedList_57912.getter_length (SOURCE_FILE ("auto-layout-view.ggs", 1383)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_19) {
            var_s_59808 = GALGAS_string ("this binding has no option") ;
          }
        }
        if (kBoolFalse == test_19) {
          var_s_59808 = GALGAS_string ("this binding requires the following options:") ;
          cEnumerator_controllerBindingOptionDecoratedList enumerator_60022 (var_controllerBindingOptionDecoratedList_57912, kENUMERATION_UP) ;
          while (enumerator_60022.hasCurrentObject ()) {
            var_s_59808.plusAssign_operation(GALGAS_string ("\n  - ").add_operation (enumerator_60022.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1388)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1388)).add_operation (extensionGetter_swiftTypeName (enumerator_60022.current_mOptionType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1388)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1388)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1388)) ;
            enumerator_60022.gotoNextObject () ;
          }
        }
        TC_Array <C_FixItDescription> fixItArray20 ;
        inCompiler->emitSemanticError (enumerator_56447.current_mBindingName (HERE).readProperty_location (), var_s_59808, fixItArray20  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1391)) ;
      }
    }
    if (kBoolFalse == test_18) {
      cEnumerator_controllerBindingOptionDecoratedList enumerator_60259 (var_controllerBindingOptionDecoratedList_57912, kENUMERATION_UP) ;
      cEnumerator_bindingOptionList enumerator_60343 (enumerator_56447.current_mBindingOptionList (HERE), kENUMERATION_UP) ;
      while (enumerator_60259.hasCurrentObject () && enumerator_60343.hasCurrentObject ()) {
        enumGalgasBool test_21 = kBoolTrue ;
        if (kBoolTrue == test_21) {
          test_21 = GALGAS_bool (kIsNotEqual, enumerator_60259.current_mOptionName (HERE).readProperty_string ().objectCompare (enumerator_60343.current_mOptionName (HERE).readProperty_string ())).boolEnum () ;
          if (kBoolTrue == test_21) {
            TC_Array <C_FixItDescription> fixItArray22 ;
            inCompiler->emitSemanticError (enumerator_60343.current_mOptionName (HERE).readProperty_location (), GALGAS_string ("the option name should be '").add_operation (enumerator_60259.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1395)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1395)), fixItArray22  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1395)) ;
          }
        }
        GALGAS_string var_optionValueAsString_60727 ;
        GALGAS_typeKindList temp_23 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 1398)) ;
        temp_23.addAssign_operation (enumerator_60259.current_mOptionType (HERE)  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1398)) ;
        callExtensionMethod_analyzeDefaultValueType ((cPtr_abstractDefaultValue *) enumerator_60343.current_mOptionValue (HERE).ptr (), temp_23, constinArgument_inPreferencesPropertyMap, var_optionValueAsString_60727, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1397)) ;
        var_bindingOptionString_59694.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_60259.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1402)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1402)).add_operation (var_optionValueAsString_60727, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1402)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1402)) ;
        enumerator_60259.gotoNextObject () ;
        enumerator_60343.gotoNextObject () ;
      }
    }
    ioArgument_ioRegularBindingsGenerationList.addAssign_operation (enumerator_56447.current_mBindingName (HERE).readProperty_string (), var_boundModelListForGeneration_56605, var_bindingOptionString_59694  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1406)) ;
    enumerator_56447.gotoNextObject () ;
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
  GALGAS_autoLayoutViewInstructionGenerationList var_instructionList_62139 = GALGAS_autoLayoutViewInstructionGenerationList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 1429)) ;
  GALGAS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_62640 ;
  const GALGAS_astHStackViewInstructionDeclaration temp_0 = this ;
  extensionMethod_checkViewFunctionCallList (temp_0.readProperty_mFunctionCallList (), constinArgument_inSemanticContext.readProperty_mAutoLayoutHStackFunctionMap (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_62640, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1430)) ;
  GALGAS_autoLayoutMultipleBindingGenerationList var_multipleBindingGenerationList_62721 = GALGAS_autoLayoutMultipleBindingGenerationList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 1446)) ;
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
      const cEnumAssociatedValues_optionalHiddenBinding_binding * extractPtr_63367 = (const cEnumAssociatedValues_optionalHiddenBinding_binding *) (temp_1.readProperty_mOptionalHiddenBinding ().unsafePointer ()) ;
      const GALGAS_abstractBooleanMultipleBindingExpressionAST extractedValue_62823_hiddenBindingExpression = extractPtr_63367->mAssociatedValue0 ;
      GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_63125 ;
      GALGAS_typeKind var_type_63151 ;
      GALGAS_location var_errorLocation_63186 ;
      callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_62823_hiddenBindingExpression.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_hiddenExpression_63125, var_type_63151, var_errorLocation_63186, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1450)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_type_63151.getter_isBoolType (SOURCE_FILE ("auto-layout-view.ggs", 1460)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1460)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_errorLocation_63186, GALGAS_string ("expression is not boolean"), fixItArray3  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1461)) ;
        }
      }
      var_multipleBindingGenerationList_62721.addAssign_operation (GALGAS_string ("hidden"), var_hiddenExpression_63125  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1463)) ;
    }
    break ;
  }
  const GALGAS_astHStackViewInstructionDeclaration temp_4 = this ;
  cEnumerator_astViewInstructionList enumerator_63392 (temp_4.readProperty_mInstructionList (), kENUMERATION_UP) ;
  while (enumerator_63392.hasCurrentObject ()) {
    GALGAS_abstractViewInstructionGeneration var_generatedInstruction_63824 ;
    callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) enumerator_63392.current_mInstruction (HERE).ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_generatedInstruction_63824, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1468)) ;
    var_instructionList_62139.addAssign_operation (var_generatedInstruction_63824  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1483)) ;
    enumerator_63392.gotoNextObject () ;
  }
  const GALGAS_astHStackViewInstructionDeclaration temp_5 = this ;
  outArgument_outInstruction = GALGAS_hStackViewInstructionGeneration::constructor_new (var_funcCallList_62640, var_instructionList_62139, var_multipleBindingGenerationList_62721, temp_5.readProperty_mAstNewStackViewDeclarationList ()  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1485)) ;
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
  GALGAS_autoLayoutViewInstructionGenerationList var_instructionList_65185 = GALGAS_autoLayoutViewInstructionGenerationList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 1509)) ;
  GALGAS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_65686 ;
  const GALGAS_astVStackViewInstructionDeclaration temp_0 = this ;
  extensionMethod_checkViewFunctionCallList (temp_0.readProperty_mFunctionCallList (), constinArgument_inSemanticContext.readProperty_mAutoLayoutVStackFunctionMap (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_65686, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1510)) ;
  GALGAS_autoLayoutMultipleBindingGenerationList var_multipleBindingGenerationList_65767 = GALGAS_autoLayoutMultipleBindingGenerationList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 1526)) ;
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
      const cEnumAssociatedValues_optionalHiddenBinding_binding * extractPtr_66413 = (const cEnumAssociatedValues_optionalHiddenBinding_binding *) (temp_1.readProperty_mOptionalHiddenBinding ().unsafePointer ()) ;
      const GALGAS_abstractBooleanMultipleBindingExpressionAST extractedValue_65869_hiddenBindingExpression = extractPtr_66413->mAssociatedValue0 ;
      GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_66171 ;
      GALGAS_typeKind var_type_66197 ;
      GALGAS_location var_errorLocation_66232 ;
      callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_65869_hiddenBindingExpression.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_hiddenExpression_66171, var_type_66197, var_errorLocation_66232, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1530)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_type_66197.getter_isBoolType (SOURCE_FILE ("auto-layout-view.ggs", 1540)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1540)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_errorLocation_66232, GALGAS_string ("expression is not boolean"), fixItArray3  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1541)) ;
        }
      }
      var_multipleBindingGenerationList_65767.addAssign_operation (GALGAS_string ("hidden"), var_hiddenExpression_66171  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1543)) ;
    }
    break ;
  }
  const GALGAS_astVStackViewInstructionDeclaration temp_4 = this ;
  cEnumerator_astViewInstructionList enumerator_66438 (temp_4.readProperty_mInstructionList (), kENUMERATION_UP) ;
  while (enumerator_66438.hasCurrentObject ()) {
    GALGAS_abstractViewInstructionGeneration var_generatedInstruction_66870 ;
    callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) enumerator_66438.current_mInstruction (HERE).ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_generatedInstruction_66870, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1548)) ;
    var_instructionList_65185.addAssign_operation (var_generatedInstruction_66870  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1563)) ;
    enumerator_66438.gotoNextObject () ;
  }
  const GALGAS_astVStackViewInstructionDeclaration temp_5 = this ;
  outArgument_outInstruction = GALGAS_vStackViewInstructionGeneration::constructor_new (var_funcCallList_65686, var_instructionList_65185, var_multipleBindingGenerationList_65767, temp_5.readProperty_mAstNewStackViewDeclarationList ()  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1565)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedHorizontalViewGeneration generateViewBuilder'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_computedHorizontalViewGeneration::getter_generateViewBuilder (const GALGAS_bool constinArgument_inPreferences,
                                                                                 const GALGAS_string constinArgument_inViewName,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("  final func ").add_operation (constinArgument_inViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1743)).add_operation (GALGAS_string (" () -> AutoLayoutHorizontalStackView {\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1743)) ;
  result_result.plusAssign_operation(GALGAS_string ("    let hStackView = AutoLayoutHorizontalStackView ()\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1744)) ;
  const GALGAS_computedHorizontalViewGeneration temp_0 = this ;
  extensionMethod_generate (temp_0.readProperty_mFuncCallList (), GALGAS_string ("    "), result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1745)) ;
  const GALGAS_computedHorizontalViewGeneration temp_1 = this ;
  cEnumerator_astNewStackViewDeclarationList enumerator_75201 (temp_1.readProperty_mNewStackViewDeclarationList (), kENUMERATION_UP) ;
  while (enumerator_75201.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string ("    let ").add_operation (enumerator_75201.current_mInstanciedStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1747)).add_operation (GALGAS_string (" = self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1747)).add_operation (enumerator_75201.current_mTypeStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1747)).add_operation (GALGAS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1747)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1747)) ;
    enumerator_75201.gotoNextObject () ;
  }
  const GALGAS_computedHorizontalViewGeneration temp_2 = this ;
  cEnumerator_autoLayoutViewInstructionGenerationList enumerator_75333 (temp_2.readProperty_mInstructionList (), kENUMERATION_UP) ;
  GALGAS_uint index_75320 ((uint32_t) 0) ;
  while (enumerator_75333.hasCurrentObject ()) {
    GALGAS_string var_name_75383 = GALGAS_string ("view_").add_operation (index_75320.getter_string (SOURCE_FILE ("auto-layout-view.ggs", 1750)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1750)) ;
    result_result.plusAssign_operation(callExtensionGetter_generateViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_75333.current_mInstruction (HERE).ptr (), constinArgument_inPreferences, var_name_75383, GALGAS_string ("    "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1751)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1751)) ;
    result_result.plusAssign_operation(GALGAS_string ("    _ = hStackView.appendView (").add_operation (var_name_75383, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1752)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1752)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1752)) ;
    enumerator_75333.gotoNextObject () ;
    index_75320.increment_operation (inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1749)) ;
  }
  result_result.plusAssign_operation(GALGAS_string ("    return hStackView\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1754)) ;
  result_result.plusAssign_operation(GALGAS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1755)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@computedVerticalViewGeneration generateViewBuilder'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_computedVerticalViewGeneration::getter_generateViewBuilder (const GALGAS_bool constinArgument_inPreferences,
                                                                               const GALGAS_string constinArgument_inViewName,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("  final func ").add_operation (constinArgument_inViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1762)).add_operation (GALGAS_string (" () -> AutoLayoutVerticalStackView {\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1762)) ;
  result_result.plusAssign_operation(GALGAS_string ("    let vStackView = AutoLayoutVerticalStackView ()\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1763)) ;
  const GALGAS_computedVerticalViewGeneration temp_0 = this ;
  extensionMethod_generate (temp_0.readProperty_mFuncCallList (), GALGAS_string ("    "), result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1764)) ;
  const GALGAS_computedVerticalViewGeneration temp_1 = this ;
  cEnumerator_astNewStackViewDeclarationList enumerator_76168 (temp_1.readProperty_mNewStackViewDeclarationList (), kENUMERATION_UP) ;
  while (enumerator_76168.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string ("    let ").add_operation (enumerator_76168.current_mInstanciedStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1766)).add_operation (GALGAS_string (" = self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1766)).add_operation (enumerator_76168.current_mTypeStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1766)).add_operation (GALGAS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1766)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1766)) ;
    enumerator_76168.gotoNextObject () ;
  }
  const GALGAS_computedVerticalViewGeneration temp_2 = this ;
  cEnumerator_autoLayoutViewInstructionGenerationList enumerator_76300 (temp_2.readProperty_mInstructionList (), kENUMERATION_UP) ;
  GALGAS_uint index_76287 ((uint32_t) 0) ;
  while (enumerator_76300.hasCurrentObject ()) {
    GALGAS_string var_name_76350 = GALGAS_string ("view_").add_operation (index_76287.getter_string (SOURCE_FILE ("auto-layout-view.ggs", 1769)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1769)) ;
    result_result.plusAssign_operation(callExtensionGetter_generateViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_76300.current_mInstruction (HERE).ptr (), constinArgument_inPreferences, var_name_76350, GALGAS_string ("    "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1770)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1770)) ;
    result_result.plusAssign_operation(GALGAS_string ("    _ = vStackView.appendView (").add_operation (var_name_76350, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1771)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1771)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1771)) ;
    enumerator_76300.gotoNextObject () ;
    index_76287.increment_operation (inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1768)) ;
  }
  result_result.plusAssign_operation(GALGAS_string ("    return vStackView\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1773)) ;
  result_result.plusAssign_operation(GALGAS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1774)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutSpaceViewInstructionGeneration generateViewInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_autoLayoutSpaceViewInstructionGeneration::getter_generateViewInstruction (const GALGAS_bool /* constinArgument_inPreferences */,
                                                                                             const GALGAS_string constinArgument_inName,
                                                                                             const GALGAS_string constinArgument_inIndentation,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GALGAS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1790)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1790)).add_operation (GALGAS_string (" = AutoLayoutFlexibleSpace ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1790)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutSeparatorInstructionGeneration generateViewInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_autoLayoutSeparatorInstructionGeneration::getter_generateViewInstruction (const GALGAS_bool /* constinArgument_inPreferences */,
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
      result_result = constinArgument_inIndentation.add_operation (GALGAS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1800)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1800)).add_operation (GALGAS_string (" = AutoLayoutHorizontalStackView.VerticalSeparator ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1800)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = constinArgument_inIndentation.add_operation (GALGAS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1802)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1802)).add_operation (GALGAS_string (" = AutoLayoutVerticalStackView.HorizontalSeparator ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1802)) ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutDividerInstructionGeneration generateViewInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_autoLayoutDividerInstructionGeneration::getter_generateViewInstruction (const GALGAS_bool /* constinArgument_inPreferences */,
                                                                                           const GALGAS_string constinArgument_inName,
                                                                                           const GALGAS_string constinArgument_inIndentation,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_autoLayoutDividerInstructionGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_horizontal ().boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = constinArgument_inIndentation.add_operation (GALGAS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1813)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1813)).add_operation (GALGAS_string (" = AutoLayoutHorizontalStackView.VerticalDivider ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1813)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = constinArgument_inIndentation.add_operation (GALGAS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1815)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1815)).add_operation (GALGAS_string (" = AutoLayoutVerticalStackView.HorizontalDivider ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1815)) ;
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutLocalViewInstructionGeneration generateViewInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_autoLayoutLocalViewInstructionGeneration::getter_generateViewInstruction (const GALGAS_bool /* constinArgument_inPreferences */,
                                                                                             const GALGAS_string constinArgument_inName,
                                                                                             const GALGAS_string constinArgument_inIndentation,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_autoLayoutLocalViewInstructionGeneration temp_0 = this ;
  result_result = constinArgument_inIndentation.add_operation (GALGAS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1825)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1825)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1825)).add_operation (temp_0.readProperty_mLocalView (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1825)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1825)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutComputedViewInstructionGeneration generateViewInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_autoLayoutComputedViewInstructionGeneration::getter_generateViewInstruction (const GALGAS_bool constinArgument_inPreferences,
                                                                                                const GALGAS_string constinArgument_inName,
                                                                                                const GALGAS_string constinArgument_inIndentation,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_autoLayoutComputedViewInstructionGeneration temp_0 = this ;
  result_result = constinArgument_inIndentation.add_operation (GALGAS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1834)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1834)).add_operation (GALGAS_string (" = AutoLayout"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1834)).add_operation (temp_0.readProperty_mAutoLayoutViewClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1834)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1834)) ;
  const GALGAS_autoLayoutComputedViewInstructionGeneration temp_1 = this ;
  cEnumerator_autoLayoutViewInstructionGenerationParameterList enumerator_79648 (temp_1.readProperty_mParameterList (), kENUMERATION_UP) ;
  while (enumerator_79648.hasCurrentObject ()) {
    result_result.plusAssign_operation(enumerator_79648.current (HERE).readProperty_mParameterName ().add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1837)).add_operation (enumerator_79648.current (HERE).readProperty_mParameterValue (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1837)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1837)) ;
    if (enumerator_79648.hasNextObject ()) {
      result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1839)) ;
    }
    enumerator_79648.gotoNextObject () ;
  }
  result_result.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1841)) ;
  const GALGAS_autoLayoutComputedViewInstructionGeneration temp_2 = this ;
  extensionMethod_generate (temp_2.readProperty_mFunctionCallList (), constinArgument_inIndentation, result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1842)) ;
  const GALGAS_autoLayoutComputedViewInstructionGeneration temp_3 = this ;
  cEnumerator_autoLayoutRegularBindingsGenerationList enumerator_79892 (temp_3.readProperty_mRegularBindingsGenerationList (), kENUMERATION_UP) ;
  while (enumerator_79892.hasCurrentObject ()) {
    result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1844)).add_operation (enumerator_79892.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1844)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1844)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1844)) ;
    cEnumerator_boundObjectList enumerator_80026 (enumerator_79892.current_mBoundObjectList (HERE), kENUMERATION_UP) ;
    while (enumerator_80026.hasCurrentObject ()) {
      result_result.plusAssign_operation(enumerator_80026.current_mBoundObjectString (HERE), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1846)) ;
      if (enumerator_80026.hasNextObject ()) {
        result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1847)) ;
      }
      enumerator_80026.gotoNextObject () ;
    }
    result_result.plusAssign_operation(enumerator_79892.current_mBindingOptionsString (HERE).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1849)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1849)) ;
    enumerator_79892.gotoNextObject () ;
  }
  const GALGAS_autoLayoutComputedViewInstructionGeneration temp_4 = this ;
  cEnumerator_autoLayoutMultipleBindingGenerationList enumerator_80192 (temp_4.readProperty_mMultipleBindingGenerationList (), kENUMERATION_UP) ;
  while (enumerator_80192.hasCurrentObject ()) {
    result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1852)).add_operation (enumerator_80192.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1852)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1852)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_80192.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1852)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1852)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1852)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1852)) ;
    enumerator_80192.gotoNextObject () ;
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
      const cEnumAssociatedValues_autolayoutRunBindingForGeneration_run * extractPtr_80702 = (const cEnumAssociatedValues_autolayoutRunBindingForGeneration_run *) (temp_5.readProperty_mRunBindingGeneration ().unsafePointer ()) ;
      const GALGAS_string extractedValue_80414_targetName = extractPtr_80702->mAssociatedValue0 ;
      const GALGAS_string extractedValue_80425_actionName = extractPtr_80702->mAssociatedValue1 ;
      const GALGAS_string extractedValue_80440_targetTypeName = extractPtr_80702->mAssociatedValue2 ;
      result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("  .bind_run (\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1857)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1857)) ;
      result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("    target: "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1858)).add_operation (extractedValue_80414_targetName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1858)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1858)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1858)) ;
      result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("    selector: #selector ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1859)).add_operation (extractedValue_80440_targetTypeName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1859)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1859)).add_operation (extractedValue_80425_actionName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1859)).add_operation (GALGAS_string (" (_:))\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1859)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1859)) ;
      result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("  )\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1860)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1860)) ;
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
      const cEnumAssociatedValues_autoLayoutViewGraphicControllerBindingGeneration_binding * extractPtr_80903 = (const cEnumAssociatedValues_autoLayoutViewGraphicControllerBindingGeneration_binding *) (temp_6.readProperty_mEBViewGraphicControllerBindingGeneration ().unsafePointer ()) ;
      const GALGAS_string extractedValue_80809_controllerName = extractPtr_80903->mAssociatedValue0 ;
      result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("  .bind_graphic_controller (self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1865)).add_operation (extractedValue_80809_controllerName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1865)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1865)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1865)) ;
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
      GALGAS_string var_prefix_80973 = temp_9 ;
      const GALGAS_autoLayoutComputedViewInstructionGeneration temp_11 = this ;
      result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (var_prefix_80973, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1869)).add_operation (temp_11.readProperty_mTableViewBindingGeneration (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1869)).add_operation (GALGAS_string (".bind_tableView ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1869)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1869)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1869)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1869)) ;
    }
  }
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    const GALGAS_autoLayoutComputedViewInstructionGeneration temp_13 = this ;
    test_12 = GALGAS_bool (kIsNotEqual, temp_13.readProperty_mOutletName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_12) {
      enumGalgasBool test_14 = kBoolTrue ;
      if (kBoolTrue == test_14) {
        const GALGAS_autoLayoutComputedViewInstructionGeneration temp_15 = this ;
        test_14 = temp_15.readProperty_mOutletIsArray ().boolEnum () ;
        if (kBoolTrue == test_14) {
          const GALGAS_autoLayoutComputedViewInstructionGeneration temp_16 = this ;
          result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1873)).add_operation (temp_16.readProperty_mOutletName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1873)).add_operation (GALGAS_string (".append ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1873)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1873)).add_operation (GALGAS_string (") // Outlet Array\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1873)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1873)) ;
        }
      }
      if (kBoolFalse == test_14) {
        const GALGAS_autoLayoutComputedViewInstructionGeneration temp_17 = this ;
        result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1875)).add_operation (temp_17.readProperty_mOutletName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1875)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1875)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1875)).add_operation (GALGAS_string (" // Outlet\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1875)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1875)) ;
      }
    }
  }
  enumGalgasBool test_18 = kBoolTrue ;
  if (kBoolTrue == test_18) {
    const GALGAS_autoLayoutComputedViewInstructionGeneration temp_19 = this ;
    test_18 = GALGAS_bool (kIsNotEqual, temp_19.readProperty_mConfiguratorName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_18) {
      const GALGAS_autoLayoutComputedViewInstructionGeneration temp_20 = this ;
      result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("self.configure_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1879)).add_operation (temp_20.readProperty_mConfiguratorName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1879)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1879)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1879)).add_operation (GALGAS_string (") // Configurator\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1879)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1879)) ;
    }
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@hStackViewInstructionGeneration generateViewInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_hStackViewInstructionGeneration::getter_generateViewInstruction (const GALGAS_bool constinArgument_inPreferences,
                                                                                    const GALGAS_string constinArgument_inName,
                                                                                    const GALGAS_string constinArgument_inIndentation,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GALGAS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1889)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1889)).add_operation (GALGAS_string (" = AutoLayoutHorizontalStackView ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1889)) ;
  const GALGAS_hStackViewInstructionGeneration temp_0 = this ;
  extensionMethod_generate (temp_0.readProperty_mFuncCallList (), constinArgument_inIndentation, result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1890)) ;
  const GALGAS_hStackViewInstructionGeneration temp_1 = this ;
  cEnumerator_autoLayoutMultipleBindingGenerationList enumerator_82125 (temp_1.readProperty_mMultipleBindingGenerationList (), kENUMERATION_UP) ;
  while (enumerator_82125.hasCurrentObject ()) {
    result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1892)).add_operation (enumerator_82125.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1892)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1892)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_82125.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1892)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1892)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1892)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1892)) ;
    enumerator_82125.gotoNextObject () ;
  }
  const GALGAS_hStackViewInstructionGeneration temp_2 = this ;
  cEnumerator_astNewStackViewDeclarationList enumerator_82295 (temp_2.readProperty_mNewStackViewDeclarationList (), kENUMERATION_UP) ;
  while (enumerator_82295.hasCurrentObject ()) {
    result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1895)).add_operation (enumerator_82295.current_mInstanciedStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1895)).add_operation (GALGAS_string (" = self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1895)).add_operation (enumerator_82295.current_mTypeStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1895)).add_operation (GALGAS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1895)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1895)) ;
    enumerator_82295.gotoNextObject () ;
  }
  result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("do{\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1897)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1897)) ;
  GALGAS_string var_indentation_82474 = constinArgument_inIndentation.add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1898)) ;
  const GALGAS_hStackViewInstructionGeneration temp_3 = this ;
  cEnumerator_autoLayoutViewInstructionGenerationList enumerator_82516 (temp_3.readProperty_mInstructionList (), kENUMERATION_UP) ;
  GALGAS_uint index_82503 ((uint32_t) 0) ;
  while (enumerator_82516.hasCurrentObject ()) {
    GALGAS_string var_name_82567 = constinArgument_inName.add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1900)).add_operation (index_82503.getter_string (SOURCE_FILE ("auto-layout-view.ggs", 1900)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1900)) ;
    result_result.plusAssign_operation(callExtensionGetter_generateViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_82516.current_mInstruction (HERE).ptr (), constinArgument_inPreferences, var_name_82567, var_indentation_82474, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1901)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1901)) ;
    result_result.plusAssign_operation(var_indentation_82474.add_operation (GALGAS_string ("_ = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1902)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1902)).add_operation (GALGAS_string (".appendView ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1902)).add_operation (var_name_82567, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1902)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1902)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1902)) ;
    enumerator_82516.gotoNextObject () ;
    index_82503.increment_operation (inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1899)) ;
  }
  result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1904)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1904)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@vStackViewInstructionGeneration generateViewInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_vStackViewInstructionGeneration::getter_generateViewInstruction (const GALGAS_bool constinArgument_inPreferences,
                                                                                    const GALGAS_string constinArgument_inName,
                                                                                    const GALGAS_string constinArgument_inIndentation,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = constinArgument_inIndentation.add_operation (GALGAS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1913)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1913)).add_operation (GALGAS_string (" = AutoLayoutVerticalStackView ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1913)) ;
  const GALGAS_vStackViewInstructionGeneration temp_0 = this ;
  extensionMethod_generate (temp_0.readProperty_mFuncCallList (), constinArgument_inIndentation, result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1914)) ;
  const GALGAS_vStackViewInstructionGeneration temp_1 = this ;
  cEnumerator_autoLayoutMultipleBindingGenerationList enumerator_83335 (temp_1.readProperty_mMultipleBindingGenerationList (), kENUMERATION_UP) ;
  while (enumerator_83335.hasCurrentObject ()) {
    result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1916)).add_operation (enumerator_83335.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1916)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1916)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_83335.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1916)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1916)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1916)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1916)) ;
    enumerator_83335.gotoNextObject () ;
  }
  const GALGAS_vStackViewInstructionGeneration temp_2 = this ;
  cEnumerator_astNewStackViewDeclarationList enumerator_83505 (temp_2.readProperty_mNewStackViewDeclarationList (), kENUMERATION_UP) ;
  while (enumerator_83505.hasCurrentObject ()) {
    result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1919)).add_operation (enumerator_83505.current_mInstanciedStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1919)).add_operation (GALGAS_string (" = self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1919)).add_operation (enumerator_83505.current_mTypeStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1919)).add_operation (GALGAS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1919)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1919)) ;
    enumerator_83505.gotoNextObject () ;
  }
  result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("do{\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1921)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1921)) ;
  GALGAS_string var_indentation_83684 = constinArgument_inIndentation.add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1922)) ;
  const GALGAS_vStackViewInstructionGeneration temp_3 = this ;
  cEnumerator_autoLayoutViewInstructionGenerationList enumerator_83726 (temp_3.readProperty_mInstructionList (), kENUMERATION_UP) ;
  GALGAS_uint index_83713 ((uint32_t) 0) ;
  while (enumerator_83726.hasCurrentObject ()) {
    GALGAS_string var_name_83777 = constinArgument_inName.add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1924)).add_operation (index_83713.getter_string (SOURCE_FILE ("auto-layout-view.ggs", 1924)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1924)) ;
    result_result.plusAssign_operation(callExtensionGetter_generateViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_83726.current_mInstruction (HERE).ptr (), constinArgument_inPreferences, var_name_83777, var_indentation_83684, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1925)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1925)) ;
    result_result.plusAssign_operation(var_indentation_83684.add_operation (GALGAS_string ("_ = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1926)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1926)).add_operation (GALGAS_string (".appendView ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1926)).add_operation (var_name_83777, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1926)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1926)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1926)) ;
    enumerator_83726.gotoNextObject () ;
    index_83713.increment_operation (inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1923)) ;
  }
  result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1928)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1928)) ;
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
    GALGAS_bool var_hasRunAction_3836 ;
    GALGAS_bool var_handlesTableValueBinding_3872 ;
    GALGAS_bool var_hasEnabled_3894 ;
    GALGAS_bool var_hasHidden_3915 ;
    GALGAS_bool var_handlesGraphicControllerBinding_3958 ;
    const GALGAS_outletClassDeclarationAST temp_9 = this ;
    GALGAS_lstring joker_3811 ; // Joker input parameter
    GALGAS_bool joker_3966 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mOutletClassMap ().method_searchKey (temp_9.readProperty_mSuperClassName (), joker_3811, var_hasRunAction_3836, var_handlesTableValueBinding_3872, var_hasEnabled_3894, var_hasHidden_3915, var_handlesGraphicControllerBinding_3958, joker_3966, inCompiler COMMA_SOURCE_FILE ("outlet-class.ggs", 115)) ;
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      const GALGAS_outletClassDeclarationAST temp_11 = this ;
      test_10 = temp_11.readProperty_mHasRunAction ().operator_and (var_hasRunAction_3836 COMMA_SOURCE_FILE ("outlet-class.ggs", 125)).boolEnum () ;
      if (kBoolTrue == test_10) {
        const GALGAS_outletClassDeclarationAST temp_12 = this ;
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (temp_12.readProperty_mClassName ().readProperty_location (), GALGAS_string ("$run binding already defined in superclass"), fixItArray13  COMMA_SOURCE_FILE ("outlet-class.ggs", 126)) ;
      }
    }
    enumGalgasBool test_14 = kBoolTrue ;
    if (kBoolTrue == test_14) {
      const GALGAS_outletClassDeclarationAST temp_15 = this ;
      test_14 = temp_15.readProperty_mHandlesTableValueBinding ().operator_and (var_handlesTableValueBinding_3872 COMMA_SOURCE_FILE ("outlet-class.ggs", 128)).boolEnum () ;
      if (kBoolTrue == test_14) {
        const GALGAS_outletClassDeclarationAST temp_16 = this ;
        TC_Array <C_FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticError (temp_16.readProperty_mClassName ().readProperty_location (), GALGAS_string ("$tableview binding already defined in superclass"), fixItArray17  COMMA_SOURCE_FILE ("outlet-class.ggs", 129)) ;
      }
    }
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      const GALGAS_outletClassDeclarationAST temp_19 = this ;
      test_18 = temp_19.readProperty_mHasEnabled ().operator_and (var_hasEnabled_3894 COMMA_SOURCE_FILE ("outlet-class.ggs", 131)).boolEnum () ;
      if (kBoolTrue == test_18) {
        const GALGAS_outletClassDeclarationAST temp_20 = this ;
        TC_Array <C_FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (temp_20.readProperty_mClassName ().readProperty_location (), GALGAS_string ("$enabled binding already defined in superclass"), fixItArray21  COMMA_SOURCE_FILE ("outlet-class.ggs", 132)) ;
      }
    }
    enumGalgasBool test_22 = kBoolTrue ;
    if (kBoolTrue == test_22) {
      const GALGAS_outletClassDeclarationAST temp_23 = this ;
      test_22 = temp_23.readProperty_mHasHidden ().operator_and (var_hasHidden_3915 COMMA_SOURCE_FILE ("outlet-class.ggs", 134)).boolEnum () ;
      if (kBoolTrue == test_22) {
        const GALGAS_outletClassDeclarationAST temp_24 = this ;
        TC_Array <C_FixItDescription> fixItArray25 ;
        inCompiler->emitSemanticError (temp_24.readProperty_mClassName ().readProperty_location (), GALGAS_string ("$hidden binding already defined in superclass"), fixItArray25  COMMA_SOURCE_FILE ("outlet-class.ggs", 135)) ;
      }
    }
    enumGalgasBool test_26 = kBoolTrue ;
    if (kBoolTrue == test_26) {
      const GALGAS_outletClassDeclarationAST temp_27 = this ;
      test_26 = temp_27.readProperty_mHandlesGraphicControllerBinding ().operator_and (var_handlesGraphicControllerBinding_3958 COMMA_SOURCE_FILE ("outlet-class.ggs", 137)).boolEnum () ;
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
    ioArgument_ioSemanticContext.mProperty_mOutletClassMap.setter_insertKey (temp_30.readProperty_mClassName (), temp_31.readProperty_mSuperClassName (), temp_32.readProperty_mHasRunAction ().operator_or (var_hasRunAction_3836 COMMA_SOURCE_FILE ("outlet-class.ggs", 143)), temp_33.readProperty_mHandlesTableValueBinding ().operator_or (var_handlesTableValueBinding_3872 COMMA_SOURCE_FILE ("outlet-class.ggs", 144)), temp_34.readProperty_mHasEnabled ().operator_or (var_hasEnabled_3894 COMMA_SOURCE_FILE ("outlet-class.ggs", 145)), temp_35.readProperty_mHasHidden ().operator_or (var_hasHidden_3915 COMMA_SOURCE_FILE ("outlet-class.ggs", 146)), temp_36.readProperty_mHandlesGraphicControllerBinding ().operator_or (var_handlesGraphicControllerBinding_3958 COMMA_SOURCE_FILE ("outlet-class.ggs", 147)), temp_37.readProperty_mUserDefined (), inCompiler COMMA_SOURCE_FILE ("outlet-class.ggs", 140)) ;
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
            const cEnumAssociatedValues_classKind_atomic * extractPtr_5563 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_5333.unsafePointer ()) ;
            const GALGAS_typeKind extractedValue_5534_kind = extractPtr_5563->mAssociatedValue0 ;
            var_typeKind_5369 = extractedValue_5534_kind ;
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
    GALGAS_controllerBindingOptionDecoratedList var_controllerBindingOptionDecoratedList_5986 = GALGAS_controllerBindingOptionDecoratedList::constructor_emptyList (SOURCE_FILE ("outlet-binding-specification.ggs", 151)) ;
    cEnumerator_controllerBindingOptionList enumerator_6028 (enumerator_4784.current_mBindingOptionList (HERE), kENUMERATION_UP) ;
    while (enumerator_6028.hasCurrentObject ()) {
      GALGAS_classKind var_classKind_6142 ;
      GALGAS_propertyMap joker_6144_3 ; // Joker input parameter
      GALGAS_actionMap joker_6144_2 ; // Joker input parameter
      GALGAS_propertyGenerationList joker_6144_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (enumerator_6028.current_mOptionTypeName (HERE), var_classKind_6142, joker_6144_3, joker_6144_2, joker_6144_1, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 153)) ;
      GALGAS_typeKind var_typeKind_6176 ;
      switch (var_classKind_6142.enumValue ()) {
      case GALGAS_classKind::kNotBuilt:
        break ;
      case GALGAS_classKind::kEnum_prefs:
        {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_6028.current_mOptionTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray4  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 157)) ;
          var_typeKind_6176.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_classKind::kEnum_atomic:
        {
          const cEnumAssociatedValues_classKind_atomic * extractPtr_6361 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_6142.unsafePointer ()) ;
          const GALGAS_typeKind extractedValue_6334_kind = extractPtr_6361->mAssociatedValue0 ;
          var_typeKind_6176 = extractedValue_6334_kind ;
        }
        break ;
      case GALGAS_classKind::kEnum_document:
        {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (enumerator_6028.current_mOptionTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray5  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 161)) ;
          var_typeKind_6176.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_classKind::kEnum_entity:
        {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (enumerator_6028.current_mOptionTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 163)) ;
          var_typeKind_6176.drop () ; // Release error dropped variable
        }
        break ;
      }
      var_controllerBindingOptionDecoratedList_5986.addAssign_operation (var_typeKind_6176, enumerator_6028.current_mOptionName (HERE)  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 165)) ;
      enumerator_6028.gotoNextObject () ;
    }
    GALGAS_outletBindingSpecificationMap var_bindingMap_6742 ;
    GALGAS_lstring var_outletSuperClassName_6780 ;
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = ioArgument_ioSemanticContext.readProperty_mBindingSpecificationMap ().getter_hasKey (enumerator_4784.current_mOutletClassName (HERE).readProperty_string () COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 170)).boolEnum () ;
      if (kBoolTrue == test_7) {
        {
        ioArgument_ioSemanticContext.mProperty_mBindingSpecificationMap.setter_removeKey (enumerator_4784.current_mOutletClassName (HERE), var_outletSuperClassName_6780, var_bindingMap_6742, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 171)) ;
        }
      }
    }
    if (kBoolFalse == test_7) {
      var_bindingMap_6742 = GALGAS_outletBindingSpecificationMap::constructor_emptyMap (SOURCE_FILE ("outlet-binding-specification.ggs", 173)) ;
      GALGAS_bool joker_7108_6 ; // Joker input parameter
      GALGAS_bool joker_7108_5 ; // Joker input parameter
      GALGAS_bool joker_7108_4 ; // Joker input parameter
      GALGAS_bool joker_7108_3 ; // Joker input parameter
      GALGAS_bool joker_7108_2 ; // Joker input parameter
      GALGAS_bool joker_7108_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mOutletClassMap ().method_searchKey (enumerator_4784.current_mOutletClassName (HERE), var_outletSuperClassName_6780, joker_7108_6, joker_7108_5, joker_7108_4, joker_7108_3, joker_7108_2, joker_7108_1, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 174)) ;
    }
    {
    var_bindingMap_6742.setter_insertKey (enumerator_4784.current_mBindingName (HERE), var_outletBindingSpecificationModelList_4902, var_controllerBindingOptionDecoratedList_5986, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 176)) ;
    }
    {
    ioArgument_ioSemanticContext.mProperty_mBindingSpecificationMap.setter_insertKey (enumerator_4784.current_mOutletClassName (HERE), var_outletSuperClassName_6780, var_bindingMap_6742, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 181)) ;
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
  cEnumerator_outletDeclarationList enumerator_8339 (constinArgument_inOutletDeclarationList, kENUMERATION_UP) ;
  while (enumerator_8339.hasCurrentObject ()) {
    {
    outArgument_outletMap.setter_insertKey (enumerator_8339.current_mOutletName (HERE), enumerator_8339.current_mOutletTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 208)) ;
    }
    GALGAS_bool var_handlesRunAction_8571 ;
    GALGAS_bool var_handlesTableViewBinding_8612 ;
    GALGAS_bool var_handlesEnabledBinding_8651 ;
    GALGAS_bool var_handlesHiddenBinding_8689 ;
    GALGAS_bool var_handleGraphicControllerBinding_8737 ;
    GALGAS_bool var_outletClassIsUserDefined_8779 ;
    GALGAS_lstring joker_8536 ; // Joker input parameter
    constinArgument_inSemanticContext.readProperty_mOutletClassMap ().method_searchKey (enumerator_8339.current_mOutletTypeName (HERE), joker_8536, var_handlesRunAction_8571, var_handlesTableViewBinding_8612, var_handlesEnabledBinding_8651, var_handlesHiddenBinding_8689, var_handleGraphicControllerBinding_8737, var_outletClassIsUserDefined_8779, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 209)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = var_outletClassIsUserDefined_8779.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 219)).boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioGeneration.mProperty_mNeededOutletClasses.addAssign_operation (enumerator_8339.current_mOutletTypeName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 220)) ;
      }
    }
    switch (enumerator_8339.current_mGraphicController (HERE).enumValue ()) {
    case GALGAS_graphicController::kNotBuilt:
      break ;
    case GALGAS_graphicController::kEnum_none:
      {
      }
      break ;
    case GALGAS_graphicController::kEnum_defined:
      {
        const cEnumAssociatedValues_graphicController_defined * extractPtr_11245 = (const cEnumAssociatedValues_graphicController_defined *) (enumerator_8339.current_mGraphicController (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_9029_controllerName = extractPtr_11245->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_9051_propertyName = extractPtr_11245->mAssociatedValue1 ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_handleGraphicControllerBinding_8737.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 226)).boolEnum () ;
          if (kBoolTrue == test_1) {
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (enumerator_8339.current_mOutletTypeName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_8339.current_mOutletTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 227)).add_operation (GALGAS_string ("' type does not handle the $graphicController binding"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 227)), fixItArray2  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 227)) ;
          }
        }
        if (kBoolFalse == test_1) {
          GALGAS_propertyKind var_kind_9347 ;
          GALGAS_actionMap joker_9359_2 ; // Joker input parameter
          GALGAS_bool joker_9359_1 ; // Joker input parameter
          constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_9029_controllerName, var_kind_9347, joker_9359_2, joker_9359_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 229)) ;
          switch (var_kind_9347.enumValue ()) {
          case GALGAS_propertyKind::kNotBuilt:
            break ;
          case GALGAS_propertyKind::kEnum_property:
            {
              TC_Array <C_FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (extractedValue_9029_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray3  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 236)) ;
            }
            break ;
          case GALGAS_propertyKind::kEnum_toMany:
            {
              TC_Array <C_FixItDescription> fixItArray4 ;
              inCompiler->emitSemanticError (extractedValue_9029_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray4  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 238)) ;
            }
            break ;
          case GALGAS_propertyKind::kEnum_toOne:
            {
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (extractedValue_9029_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray5  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 240)) ;
            }
            break ;
          case GALGAS_propertyKind::kEnum_arrayController:
            {
              const cEnumAssociatedValues_propertyKind_arrayController * extractPtr_10994 = (const cEnumAssociatedValues_propertyKind_arrayController *) (var_kind_9347.unsafePointer ()) ;
              const GALGAS_lstring extractedValue_9758_entityName = extractPtr_10994->mAssociatedValue0 ;
              const GALGAS_bool extractedValue_9766_graphic = extractPtr_10994->mAssociatedValue1 ;
              enumGalgasBool test_6 = kBoolTrue ;
              if (kBoolTrue == test_6) {
                test_6 = GALGAS_bool (kIsEqual, extractedValue_9051_propertyName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_6) {
                  enumGalgasBool test_7 = kBoolTrue ;
                  if (kBoolTrue == test_7) {
                    test_7 = extractedValue_9766_graphic.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 243)).boolEnum () ;
                    if (kBoolTrue == test_7) {
                      TC_Array <C_FixItDescription> fixItArray8 ;
                      inCompiler->emitSemanticError (extractedValue_9029_controllerName.readProperty_location (), GALGAS_string ("the controlled entity (").add_operation (extractedValue_9758_entityName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 244)).add_operation (GALGAS_string (") should be a graphic entity"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 244)), fixItArray8  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 244)) ;
                    }
                  }
                }
              }
              if (kBoolFalse == test_6) {
                GALGAS_propertyMap var_observablePropertyMap_10120 ;
                GALGAS_classKind joker_10078 ; // Joker input parameter
                GALGAS_actionMap joker_10136_2 ; // Joker input parameter
                GALGAS_propertyGenerationList joker_10136_1 ; // Joker input parameter
                constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_9758_entityName, joker_10078, var_observablePropertyMap_10120, joker_10136_2, joker_10136_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 247)) ;
                GALGAS_propertyKind var_propertyKind_10229 ;
                GALGAS_actionMap joker_10231_2 ; // Joker input parameter
                GALGAS_bool joker_10231_1 ; // Joker input parameter
                var_observablePropertyMap_10120.method_searchKey (extractedValue_9051_propertyName, var_propertyKind_10229, joker_10231_2, joker_10231_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 253)) ;
                switch (var_propertyKind_10229.enumValue ()) {
                case GALGAS_propertyKind::kNotBuilt:
                  break ;
                case GALGAS_propertyKind::kEnum_property:
                  {
                    TC_Array <C_FixItDescription> fixItArray9 ;
                    inCompiler->emitSemanticError (extractedValue_9029_controllerName.readProperty_location (), GALGAS_string ("the bound model should be a toMany property"), fixItArray9  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 256)) ;
                  }
                  break ;
                case GALGAS_propertyKind::kEnum_toMany:
                  {
                    const cEnumAssociatedValues_propertyKind_toMany * extractPtr_10603 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_propertyKind_10229.unsafePointer ()) ;
                    const GALGAS_lstring extractedValue_10420_kEntityName = extractPtr_10603->mAssociatedValue0 ;
                    const GALGAS_bool extractedValue_10432_isGraphic = extractPtr_10603->mAssociatedValue2 ;
                    enumGalgasBool test_10 = kBoolTrue ;
                    if (kBoolTrue == test_10) {
                      test_10 = extractedValue_10432_isGraphic.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 258)).boolEnum () ;
                      if (kBoolTrue == test_10) {
                        TC_Array <C_FixItDescription> fixItArray11 ;
                        inCompiler->emitSemanticError (extractedValue_9029_controllerName.readProperty_location (), GALGAS_string ("the controlled entity (").add_operation (extractedValue_10420_kEntityName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 259)).add_operation (GALGAS_string (") should be a graphic entity"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 259)), fixItArray11  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 259)) ;
                      }
                    }
                  }
                  break ;
                case GALGAS_propertyKind::kEnum_toOne:
                  {
                    TC_Array <C_FixItDescription> fixItArray12 ;
                    inCompiler->emitSemanticError (extractedValue_9029_controllerName.readProperty_location (), GALGAS_string ("the bound model should be a toMany property"), fixItArray12  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 262)) ;
                  }
                  break ;
                case GALGAS_propertyKind::kEnum_arrayController:
                  {
                    TC_Array <C_FixItDescription> fixItArray13 ;
                    inCompiler->emitSemanticError (extractedValue_9029_controllerName.readProperty_location (), GALGAS_string ("the bound model should be a toMany property"), fixItArray13  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 264)) ;
                  }
                  break ;
                case GALGAS_propertyKind::kEnum_selectionController:
                  {
                    TC_Array <C_FixItDescription> fixItArray14 ;
                    inCompiler->emitSemanticError (extractedValue_9029_controllerName.readProperty_location (), GALGAS_string ("the bound model should be a toMany property"), fixItArray14  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 266)) ;
                  }
                  break ;
                }
              }
            }
            break ;
          case GALGAS_propertyKind::kEnum_selectionController:
            {
              TC_Array <C_FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (extractedValue_9029_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray15  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 270)) ;
            }
            break ;
          }
          outArgument_outEBViewGraphicControllerBindingGenerationList.addAssign_operation (enumerator_8339.current_mOutletName (HERE).readProperty_string (), extractedValue_9029_controllerName.readProperty_string ()  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 272)) ;
        }
      }
      break ;
    }
    switch (enumerator_8339.current_mTableValueBindingDescriptor (HERE).enumValue ()) {
    case GALGAS_tableValueBinding::kNotBuilt:
      break ;
    case GALGAS_tableValueBinding::kEnum_noTableValueBinding:
      {
      }
      break ;
    case GALGAS_tableValueBinding::kEnum_tableValueBinding:
      {
        const cEnumAssociatedValues_tableValueBinding_tableValueBinding * extractPtr_11956 = (const cEnumAssociatedValues_tableValueBinding_tableValueBinding *) (enumerator_8339.current_mTableValueBindingDescriptor (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_11401_controllerName = extractPtr_11956->mAssociatedValue0 ;
        enumGalgasBool test_16 = kBoolTrue ;
        if (kBoolTrue == test_16) {
          test_16 = var_handlesTableViewBinding_8612.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 279)).boolEnum () ;
          if (kBoolTrue == test_16) {
            TC_Array <C_FixItDescription> fixItArray17 ;
            inCompiler->emitSemanticError (enumerator_8339.current_mOutletTypeName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_8339.current_mOutletTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 280)).add_operation (GALGAS_string ("' type does not handle the $tableView binding"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 280)), fixItArray17  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 280)) ;
          }
        }
        if (kBoolFalse == test_16) {
          GALGAS_propertyKind var_kind_11689 ;
          GALGAS_actionMap joker_11701_2 ; // Joker input parameter
          GALGAS_bool joker_11701_1 ; // Joker input parameter
          constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_11401_controllerName, var_kind_11689, joker_11701_2, joker_11701_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 282)) ;
          enumGalgasBool test_18 = kBoolTrue ;
          if (kBoolTrue == test_18) {
            test_18 = var_kind_11689.getter_isArrayController (SOURCE_FILE ("outlet-declaration.ggs", 287)).operator_not (SOURCE_FILE ("outlet-declaration.ggs", 287)).boolEnum () ;
            if (kBoolTrue == test_18) {
              TC_Array <C_FixItDescription> fixItArray19 ;
              inCompiler->emitSemanticError (extractedValue_11401_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray19  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 288)) ;
            }
          }
          outArgument_outTableViewBindingGenerationList.addAssign_operation (enumerator_8339.current_mOutletName (HERE).readProperty_string (), extractedValue_11401_controllerName.readProperty_string ()  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 290)) ;
        }
      }
      break ;
    }
    switch (enumerator_8339.current_mRunDescriptor (HERE).enumValue ()) {
    case GALGAS_runActionDescriptor::kNotBuilt:
      break ;
    case GALGAS_runActionDescriptor::kEnum_noAction:
      {
      }
      break ;
    case GALGAS_runActionDescriptor::kEnum_action:
      {
        const cEnumAssociatedValues_runActionDescriptor_action * extractPtr_12921 = (const cEnumAssociatedValues_runActionDescriptor_action *) (enumerator_8339.current_mRunDescriptor (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_12062_target = extractPtr_12921->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_12078_action = extractPtr_12921->mAssociatedValue1 ;
        enumGalgasBool test_20 = kBoolTrue ;
        if (kBoolTrue == test_20) {
          test_20 = var_handlesRunAction_8571.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 297)).boolEnum () ;
          if (kBoolTrue == test_20) {
            TC_Array <C_FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticError (enumerator_8339.current_mOutletTypeName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_8339.current_mOutletTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 298)).add_operation (GALGAS_string ("' type does not handle run action"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 298)), fixItArray21  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 298)) ;
          }
        }
        if (kBoolFalse == test_20) {
          enumGalgasBool test_22 = kBoolTrue ;
          if (kBoolTrue == test_22) {
            test_22 = GALGAS_bool (kIsEqual, extractedValue_12062_target.readProperty_string ().objectCompare (GALGAS_string ("self"))).boolEnum () ;
            if (kBoolTrue == test_22) {
              constinArgument_inActionMap.method_searchKey (extractedValue_12078_action, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 300)) ;
              outArgument_outTargetActionList.addAssign_operation (enumerator_8339.current_mOutletName (HERE).readProperty_string (), GALGAS_string ("self"), extractedValue_12078_action.readProperty_string (), constinArgument_inReceiverSwiftTypeName  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 301)) ;
            }
          }
          if (kBoolFalse == test_22) {
            GALGAS_actionMap var_controllerActionMap_12605 ;
            GALGAS_propertyKind joker_12558 ; // Joker input parameter
            GALGAS_bool joker_12617 ; // Joker input parameter
            constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_12062_target, joker_12558, var_controllerActionMap_12605, joker_12617, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 307)) ;
            var_controllerActionMap_12605.method_searchKey (extractedValue_12078_action, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 313)) ;
            GALGAS_string temp_23 ;
            const enumGalgasBool test_24 = constinArgument_inPreferences.boolEnum () ;
            if (kBoolTrue == test_24) {
              temp_23 = GALGAS_string ("preferences_") ;
            }else if (kBoolFalse == test_24) {
              temp_23 = GALGAS_string::makeEmptyString () ;
            }
            outArgument_outTargetActionList.addAssign_operation (enumerator_8339.current_mOutletName (HERE).readProperty_string (), temp_23.add_operation (extractedValue_12062_target.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 316)), extractedValue_12078_action.readProperty_string (), GALGAS_string ("Controller_").add_operation (constinArgument_inReceiverSwiftTypeName, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 318)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 318)).add_operation (extractedValue_12062_target.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 318))  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 314)) ;
          }
        }
      }
      break ;
    }
    switch (enumerator_8339.current_mEnabledBindingDescriptor (HERE).enumValue ()) {
    case GALGAS_multipleBindingDescriptor::kNotBuilt:
      break ;
    case GALGAS_multipleBindingDescriptor::kEnum_noBinding:
      {
      }
      break ;
    case GALGAS_multipleBindingDescriptor::kEnum_binding:
      {
        const cEnumAssociatedValues_multipleBindingDescriptor_binding * extractPtr_13812 = (const cEnumAssociatedValues_multipleBindingDescriptor_binding *) (enumerator_8339.current_mEnabledBindingDescriptor (HERE).unsafePointer ()) ;
        const GALGAS_abstractBooleanMultipleBindingExpressionAST extractedValue_13083_expression = extractPtr_13812->mAssociatedValue0 ;
        GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_enableExpression_13386 ;
        GALGAS_typeKind var_type_13414 ;
        GALGAS_location var_errorLocation_13451 ;
        callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_13083_expression.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_enableExpression_13386, var_type_13414, var_errorLocation_13451, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 325)) ;
        enumGalgasBool test_25 = kBoolTrue ;
        if (kBoolTrue == test_25) {
          test_25 = var_handlesEnabledBinding_8651.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 335)).boolEnum () ;
          if (kBoolTrue == test_25) {
            TC_Array <C_FixItDescription> fixItArray26 ;
            inCompiler->emitSemanticError (var_errorLocation_13451, GALGAS_string ("cet outlet n'accepte pas le binding $enabled"), fixItArray26  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 336)) ;
          }
        }
        enumGalgasBool test_27 = kBoolTrue ;
        if (kBoolTrue == test_27) {
          test_27 = var_type_13414.getter_isBoolType (SOURCE_FILE ("outlet-declaration.ggs", 338)).operator_not (SOURCE_FILE ("outlet-declaration.ggs", 338)).boolEnum () ;
          if (kBoolTrue == test_27) {
            TC_Array <C_FixItDescription> fixItArray28 ;
            inCompiler->emitSemanticError (var_errorLocation_13451, GALGAS_string ("expression is not boolean"), fixItArray28  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 339)) ;
          }
        }
        outArgument_outMultipleBindingGenerationList.addAssign_operation (enumerator_8339.current_mOutletName (HERE).readProperty_string (), GALGAS_string ("enabled"), var_enableExpression_13386  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 341)) ;
      }
      break ;
    }
    switch (enumerator_8339.current_mHiddenBindingDescriptor (HERE).enumValue ()) {
    case GALGAS_multipleBindingDescriptor::kNotBuilt:
      break ;
    case GALGAS_multipleBindingDescriptor::kEnum_noBinding:
      {
      }
      break ;
    case GALGAS_multipleBindingDescriptor::kEnum_binding:
      {
        const cEnumAssociatedValues_multipleBindingDescriptor_binding * extractPtr_14698 = (const cEnumAssociatedValues_multipleBindingDescriptor_binding *) (enumerator_8339.current_mHiddenBindingDescriptor (HERE).unsafePointer ()) ;
        const GALGAS_abstractBooleanMultipleBindingExpressionAST extractedValue_13972_expression = extractPtr_14698->mAssociatedValue0 ;
        GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_14275 ;
        GALGAS_typeKind var_type_14303 ;
        GALGAS_location var_errorLocation_14340 ;
        callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_13972_expression.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_hiddenExpression_14275, var_type_14303, var_errorLocation_14340, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 350)) ;
        enumGalgasBool test_29 = kBoolTrue ;
        if (kBoolTrue == test_29) {
          test_29 = var_type_14303.getter_isBoolType (SOURCE_FILE ("outlet-declaration.ggs", 360)).operator_not (SOURCE_FILE ("outlet-declaration.ggs", 360)).boolEnum () ;
          if (kBoolTrue == test_29) {
            TC_Array <C_FixItDescription> fixItArray30 ;
            inCompiler->emitSemanticError (var_errorLocation_14340, GALGAS_string ("expression is not boolean"), fixItArray30  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 361)) ;
          }
        }
        enumGalgasBool test_31 = kBoolTrue ;
        if (kBoolTrue == test_31) {
          test_31 = var_handlesHiddenBinding_8689.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 363)).boolEnum () ;
          if (kBoolTrue == test_31) {
            TC_Array <C_FixItDescription> fixItArray32 ;
            inCompiler->emitSemanticError (var_errorLocation_14340, GALGAS_string ("cet outlet n'accepte pas le binding $hidden"), fixItArray32  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 364)) ;
          }
        }
        outArgument_outMultipleBindingGenerationList.addAssign_operation (enumerator_8339.current_mOutletName (HERE).readProperty_string (), GALGAS_string ("hidden"), var_hiddenExpression_14275  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 366)) ;
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
    routine_analyzeRegularBinding (constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, enumerator_8339.current_mOutletTypeName (HERE), enumerator_8339.current_mOutletName (HERE).readProperty_string (), enumerator_8339.current_mRegularBindingList (HERE), temp_33, outArgument_outRegularBindingsGenerationList, inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 372)) ;
    }
    enumerator_8339.gotoNextObject () ;
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
  cEnumerator_regularBindingList enumerator_15718 (constinArgument_inRegularBindingList, kENUMERATION_UP) ;
  while (enumerator_15718.hasCurrentObject ()) {
    GALGAS_outletBindingModelList var_boundModelTypeList_15818 = GALGAS_outletBindingModelList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.ggs", 401)) ;
    GALGAS_boundObjectList var_boundModelListForGeneration_15876 = GALGAS_boundObjectList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.ggs", 402)) ;
    cEnumerator_observablePropertyList enumerator_15910 (enumerator_15718.current_mObservablePropertyList (HERE), kENUMERATION_UP) ;
    while (enumerator_15910.hasCurrentObject ()) {
      GALGAS_propertyKind var_kind_16113 ;
      GALGAS_string var_swiftTypeStringForTransientFunctionArgument_16185 ;
      GALGAS_string var_defaultValueAsString_16234 ;
      extensionMethod_analyzeObservableProperty (enumerator_15910.current_mObservableProperty (HERE), constinArgument_inRootPropertyMap, constinArgument_inSemanticContext, constinArgument_inBoundModelPropertyMap, var_kind_16113, var_swiftTypeStringForTransientFunctionArgument_16185, var_defaultValueAsString_16234, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 404)) ;
      switch (var_kind_16113.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          TC_Array <C_FixItDescription> fixItArray0 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_15910.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 415)), GALGAS_string ("a toMany property cannot be bound"), fixItArray0  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 415)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_15910.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 417)), GALGAS_string ("a toOne property cannot be bound"), fixItArray1  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 417)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_15910.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 419)), GALGAS_string ("an array controller cannot be bound"), fixItArray2  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 419)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_15910.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 421)), GALGAS_string ("a selection controller cannot be bound"), fixItArray3  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 421)) ;
        }
        break ;
      }
      var_boundModelListForGeneration_15876.addAssign_operation (extensionGetter_modelStringForSelf (enumerator_15910.current_mObservableProperty (HERE), constinArgument_inSelfSwiftName, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 423)), var_kind_16113  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 423)) ;
      var_boundModelTypeList_15818.addAssign_operation (var_kind_16113, extensionGetter_location (enumerator_15910.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 424))  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 424)) ;
      enumerator_15910.gotoNextObject () ;
    }
    GALGAS_outletBindingSpecificationModelList var_outletBindingSpecificationModelList_17039 = GALGAS_outletBindingSpecificationModelList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.ggs", 427)) ;
    GALGAS_controllerBindingOptionDecoratedList var_controllerBindingOptionDecoratedList_17127 = GALGAS_controllerBindingOptionDecoratedList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.ggs", 428)) ;
    GALGAS_lstring var_outletTypeName_17155 = constinArgument_inOutletTypeName ;
    GALGAS_bool var_continues_17192 = GALGAS_bool (true) ;
    if (constinArgument_inSemanticContext.readProperty_mBindingSpecificationMap ().getter_count (SOURCE_FILE ("outlet-declaration.ggs", 431)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 431)).isValid ()) {
      uint32_t variant_17208 = constinArgument_inSemanticContext.readProperty_mBindingSpecificationMap ().getter_count (SOURCE_FILE ("outlet-declaration.ggs", 431)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 431)).uintValue () ;
      bool loop_17208 = true ;
      while (loop_17208) {
        loop_17208 = GALGAS_bool (kIsNotEqual, var_outletTypeName_17155.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).operator_and (var_continues_17192 COMMA_SOURCE_FILE ("outlet-declaration.ggs", 431)).isValid () ;
        if (loop_17208) {
          loop_17208 = GALGAS_bool (kIsNotEqual, var_outletTypeName_17155.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).operator_and (var_continues_17192 COMMA_SOURCE_FILE ("outlet-declaration.ggs", 431)).boolValue () ;
        }
        if (loop_17208 && (0 == variant_17208)) {
          loop_17208 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("outlet-declaration.ggs", 431)) ;
        }
        if (loop_17208) {
          variant_17208 -- ;
          var_continues_17192 = GALGAS_bool (false) ;
          GALGAS_lstring var_superOutletClassName_17458 ;
          GALGAS_outletBindingSpecificationMap var_bindingMap_17513 ;
          constinArgument_inSemanticContext.readProperty_mBindingSpecificationMap ().method_searchKey (var_outletTypeName_17155, var_superOutletClassName_17458, var_bindingMap_17513, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 433)) ;
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            test_4 = var_bindingMap_17513.getter_hasKey (enumerator_15718.current_mBindingName (HERE).readProperty_string () COMMA_SOURCE_FILE ("outlet-declaration.ggs", 438)).boolEnum () ;
            if (kBoolTrue == test_4) {
              var_bindingMap_17513.method_searchKey (enumerator_15718.current_mBindingName (HERE), var_outletBindingSpecificationModelList_17039, var_controllerBindingOptionDecoratedList_17127, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 439)) ;
            }
          }
          if (kBoolFalse == test_4) {
            var_continues_17192 = GALGAS_bool (true) ;
            var_outletTypeName_17155 = var_superOutletClassName_17458 ;
          }
        }
      }
    }
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = var_continues_17192.boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (enumerator_15718.current_mBindingName (HERE).readProperty_location (), GALGAS_string ("this binding is not defined"), fixItArray6  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 450)) ;
      }
    }
    if (kBoolFalse == test_5) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = GALGAS_bool (kIsNotEqual, var_boundModelTypeList_15818.getter_length (SOURCE_FILE ("outlet-declaration.ggs", 451)).objectCompare (var_outletBindingSpecificationModelList_17039.getter_length (SOURCE_FILE ("outlet-declaration.ggs", 451)))).boolEnum () ;
        if (kBoolTrue == test_7) {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (enumerator_15718.current_mBindingName (HERE).readProperty_location (), var_outletBindingSpecificationModelList_17039.getter_length (SOURCE_FILE ("outlet-declaration.ggs", 453)).getter_string (SOURCE_FILE ("outlet-declaration.ggs", 453)).add_operation (GALGAS_string (" model(s) required for this binding (found: "), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 453)).add_operation (var_boundModelTypeList_15818.getter_length (SOURCE_FILE ("outlet-declaration.ggs", 455)).getter_string (SOURCE_FILE ("outlet-declaration.ggs", 454)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 454)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 455)), fixItArray8  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 452)) ;
        }
      }
      if (kBoolFalse == test_7) {
        cEnumerator_outletBindingSpecificationModelList enumerator_18273 (var_outletBindingSpecificationModelList_17039, kENUMERATION_UP) ;
        cEnumerator_outletBindingModelList enumerator_18348 (var_boundModelTypeList_15818, kENUMERATION_UP) ;
        while (enumerator_18273.hasCurrentObject () && enumerator_18348.hasCurrentObject ()) {
          enumGalgasBool test_9 = kBoolTrue ;
          if (kBoolTrue == test_9) {
            GALGAS_bool test_10 = enumerator_18273.current_mModelShouldBeWritableProperty (HERE) ;
            if (kBoolTrue == test_10.boolEnum ()) {
              test_10 = extensionGetter_isTransient (enumerator_18348.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 458)) ;
            }
            test_9 = test_10.boolEnum () ;
            if (kBoolTrue == test_9) {
              TC_Array <C_FixItDescription> fixItArray11 ;
              inCompiler->emitSemanticError (enumerator_18348.current_mErrorLocation (HERE), GALGAS_string ("the model is transient and the binding requires an writable model"), fixItArray11  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 459)) ;
            }
          }
          enumGalgasBool test_12 = kBoolTrue ;
          if (kBoolTrue == test_12) {
            GALGAS_bool test_13 = enumerator_18273.current_mModelType (HERE).getter_isEnumType (SOURCE_FILE ("outlet-declaration.ggs", 461)) ;
            if (kBoolTrue == test_13.boolEnum ()) {
              test_13 = extensionGetter_isEnumType (enumerator_18348.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 461)) ;
            }
            test_12 = test_13.boolEnum () ;
            if (kBoolTrue == test_12) {
            }
          }
          if (kBoolFalse == test_12) {
            enumGalgasBool test_14 = kBoolTrue ;
            if (kBoolTrue == test_14) {
              test_14 = GALGAS_bool (kIsNotEqual, extensionGetter_swiftTypeName (enumerator_18273.current_mModelType (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 462)).objectCompare (extensionGetter_swiftTypeName (enumerator_18348.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 462)))).boolEnum () ;
              if (kBoolTrue == test_14) {
                TC_Array <C_FixItDescription> fixItArray15 ;
                inCompiler->emitSemanticError (enumerator_18348.current_mErrorLocation (HERE), GALGAS_string ("the model type should be ").add_operation (extensionGetter_swiftTypeName (enumerator_18273.current_mModelType (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 463)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 463)), fixItArray15  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 463)) ;
              }
            }
          }
          enumerator_18273.gotoNextObject () ;
          enumerator_18348.gotoNextObject () ;
        }
      }
    }
    GALGAS_string var_bindingOptionString_18930 = GALGAS_string::makeEmptyString () ;
    enumGalgasBool test_16 = kBoolTrue ;
    if (kBoolTrue == test_16) {
      test_16 = GALGAS_bool (kIsNotEqual, var_controllerBindingOptionDecoratedList_17127.getter_length (SOURCE_FILE ("outlet-declaration.ggs", 469)).objectCompare (enumerator_15718.current_mBindingOptionList (HERE).getter_length (SOURCE_FILE ("outlet-declaration.ggs", 469)))).boolEnum () ;
      if (kBoolTrue == test_16) {
        GALGAS_string var_s_19044 ;
        enumGalgasBool test_17 = kBoolTrue ;
        if (kBoolTrue == test_17) {
          test_17 = GALGAS_bool (kIsEqual, var_controllerBindingOptionDecoratedList_17127.getter_length (SOURCE_FILE ("outlet-declaration.ggs", 471)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_17) {
            var_s_19044 = GALGAS_string ("this binding has no option") ;
          }
        }
        if (kBoolFalse == test_17) {
          var_s_19044 = GALGAS_string ("this binding requires the following options:") ;
          cEnumerator_controllerBindingOptionDecoratedList enumerator_19258 (var_controllerBindingOptionDecoratedList_17127, kENUMERATION_UP) ;
          while (enumerator_19258.hasCurrentObject ()) {
            var_s_19044.plusAssign_operation(GALGAS_string ("\n  - ").add_operation (enumerator_19258.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 476)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 476)).add_operation (extensionGetter_swiftTypeName (enumerator_19258.current_mOptionType (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 476)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 476)), inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 476)) ;
            enumerator_19258.gotoNextObject () ;
          }
        }
        TC_Array <C_FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticError (enumerator_15718.current_mBindingName (HERE).readProperty_location (), var_s_19044, fixItArray18  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 479)) ;
      }
    }
    if (kBoolFalse == test_16) {
      cEnumerator_controllerBindingOptionDecoratedList enumerator_19495 (var_controllerBindingOptionDecoratedList_17127, kENUMERATION_UP) ;
      cEnumerator_bindingOptionList enumerator_19589 (enumerator_15718.current_mBindingOptionList (HERE), kENUMERATION_UP) ;
      while (enumerator_19495.hasCurrentObject () && enumerator_19589.hasCurrentObject ()) {
        enumGalgasBool test_19 = kBoolTrue ;
        if (kBoolTrue == test_19) {
          test_19 = GALGAS_bool (kIsNotEqual, enumerator_19495.current_mOptionName (HERE).readProperty_string ().objectCompare (enumerator_19589.current_mOptionName (HERE).readProperty_string ())).boolEnum () ;
          if (kBoolTrue == test_19) {
            TC_Array <C_FixItDescription> fixItArray20 ;
            inCompiler->emitSemanticError (enumerator_19589.current_mOptionName (HERE).readProperty_location (), GALGAS_string ("the option name should be '").add_operation (enumerator_19495.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 484)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 484)), fixItArray20  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 484)) ;
          }
        }
        GALGAS_string var_optionValueAsString_19973 ;
        GALGAS_typeKindList temp_21 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.ggs", 487)) ;
        temp_21.addAssign_operation (enumerator_19495.current_mOptionType (HERE)  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 487)) ;
        callExtensionMethod_analyzeDefaultValueType ((cPtr_abstractDefaultValue *) enumerator_19589.current_mOptionValue (HERE).ptr (), temp_21, constinArgument_inPreferencesPropertyMap, var_optionValueAsString_19973, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 486)) ;
        var_bindingOptionString_18930.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_19495.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 491)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 491)).add_operation (var_optionValueAsString_19973, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 491)), inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 491)) ;
        enumerator_19495.gotoNextObject () ;
        enumerator_19589.gotoNextObject () ;
      }
    }
    ioArgument_ioRegularBindingsGenerationList.addAssign_operation (constinArgument_inOutletName, enumerator_15718.current_mBindingName (HERE).readProperty_string (), var_boundModelListForGeneration_15876, var_bindingOptionString_18930  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 495)) ;
    enumerator_15718.gotoNextObject () ;
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
  cEnumerator_observablePropertyList enumerator_1060 (temp_6.readProperty_mDependencyList (), kENUMERATION_UP) ;
  while (enumerator_1060.hasCurrentObject ()) {
    switch (enumerator_1060.current (HERE).readProperty_mObservableProperty ().enumValue ()) {
    case GALGAS_observablePropertyAST::kNotBuilt:
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_1317 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (enumerator_1060.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_1141_propertyName = extractPtr_1317->mAssociatedValue0 ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GALGAS_computedPropertyDeclarationAST temp_8 = this ;
          test_7 = GALGAS_bool (kIsNotEqual, temp_8.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_7) {
            {
            const GALGAS_computedPropertyDeclarationAST temp_9 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_771, GALGAS_lstring::constructor_new (temp_9.readProperty_mRootEntityName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 24)).add_operation (extractedValue_1141_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 24)), extractedValue_1141_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 24)) COMMA_SOURCE_FILE ("computed-property.ggs", 24)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_1541 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (enumerator_1060.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_1363_propertyName = extractPtr_1541->mAssociatedValue0 ;
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          const GALGAS_computedPropertyDeclarationAST temp_11 = this ;
          test_10 = GALGAS_bool (kIsNotEqual, temp_11.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_10) {
            {
            const GALGAS_computedPropertyDeclarationAST temp_12 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_771, GALGAS_lstring::constructor_new (temp_12.readProperty_mRootEntityName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 28)).add_operation (extractedValue_1363_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 28)), extractedValue_1363_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 28)) COMMA_SOURCE_FILE ("computed-property.ggs", 28)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_1779 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (enumerator_1060.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_1593_relationshipName = extractPtr_1779->mAssociatedValue0 ;
        enumGalgasBool test_13 = kBoolTrue ;
        if (kBoolTrue == test_13) {
          const GALGAS_computedPropertyDeclarationAST temp_14 = this ;
          test_13 = GALGAS_bool (kIsNotEqual, temp_14.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_13) {
            {
            const GALGAS_computedPropertyDeclarationAST temp_15 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_771, GALGAS_lstring::constructor_new (temp_15.readProperty_mRootEntityName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 32)).add_operation (extractedValue_1593_relationshipName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 32)), extractedValue_1593_relationshipName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 32)) COMMA_SOURCE_FILE ("computed-property.ggs", 32)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootPropertyNone:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone * extractPtr_2007 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone *) (enumerator_1060.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_1823_relationshipName = extractPtr_2007->mAssociatedValue0 ;
        enumGalgasBool test_16 = kBoolTrue ;
        if (kBoolTrue == test_16) {
          const GALGAS_computedPropertyDeclarationAST temp_17 = this ;
          test_16 = GALGAS_bool (kIsNotEqual, temp_17.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_16) {
            {
            const GALGAS_computedPropertyDeclarationAST temp_18 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_771, GALGAS_lstring::constructor_new (temp_18.readProperty_mRootEntityName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 36)).add_operation (extractedValue_1823_relationshipName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 36)), extractedValue_1823_relationshipName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 36)) COMMA_SOURCE_FILE ("computed-property.ggs", 36)) ;
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
        const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_2189 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (enumerator_1060.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2078_propertyName = extractPtr_2189->mAssociatedValue0 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_19 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_771, GALGAS_lstring::constructor_new (temp_19.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 40)).add_operation (extractedValue_2078_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 40)), extractedValue_2078_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 40)) COMMA_SOURCE_FILE ("computed-property.ggs", 40)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyWithOption:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption * extractPtr_2357 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *) (enumerator_1060.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2244_propertyName = extractPtr_2357->mAssociatedValue0 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_20 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_771, GALGAS_lstring::constructor_new (temp_20.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 42)).add_operation (extractedValue_2244_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 42)), extractedValue_2244_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 42)) COMMA_SOURCE_FILE ("computed-property.ggs", 42)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyArray:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray * extractPtr_2520 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *) (enumerator_1060.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2407_propertyName = extractPtr_2520->mAssociatedValue0 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_21 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_771, GALGAS_lstring::constructor_new (temp_21.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 44)).add_operation (extractedValue_2407_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 44)), extractedValue_2407_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 44)) COMMA_SOURCE_FILE ("computed-property.ggs", 44)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyObject:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject * extractPtr_2684 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject *) (enumerator_1060.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2571_propertyName = extractPtr_2684->mAssociatedValue0 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_22 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_771, GALGAS_lstring::constructor_new (temp_22.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 46)).add_operation (extractedValue_2571_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 46)), extractedValue_2571_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 46)) COMMA_SOURCE_FILE ("computed-property.ggs", 46)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyNone:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone * extractPtr_2844 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone *) (enumerator_1060.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2733_propertyName = extractPtr_2844->mAssociatedValue0 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_23 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_771, GALGAS_lstring::constructor_new (temp_23.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 48)).add_operation (extractedValue_2733_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 48)), extractedValue_2733_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 48)) COMMA_SOURCE_FILE ("computed-property.ggs", 48)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_prefsProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_2997 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (enumerator_1060.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2890_propertyName = extractPtr_2997->mAssociatedValue0 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_771, GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 50)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 50)).add_operation (extractedValue_2890_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 50)), extractedValue_2890_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 50)) COMMA_SOURCE_FILE ("computed-property.ggs", 50)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_prefsPropertyWithOption:
      {
        const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption * extractPtr_3162 = (const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *) (enumerator_1060.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3053_propertyName = extractPtr_3162->mAssociatedValue0 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_771, GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 52)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 52)).add_operation (extractedValue_3053_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 52)), extractedValue_3053_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 52)) COMMA_SOURCE_FILE ("computed-property.ggs", 52)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty * extractPtr_3355 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty *) (enumerator_1060.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3219_controllerName = extractPtr_3355->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_3239_propertyName = extractPtr_3355->mAssociatedValue1 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_24 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_771, GALGAS_lstring::constructor_new (temp_24.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 54)).add_operation (extractedValue_3219_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 54)), extractedValue_3219_controllerName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 54)) COMMA_SOURCE_FILE ("computed-property.ggs", 54)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerSecondaryProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty * extractPtr_3586 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty *) (enumerator_1060.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3421_controllerName = extractPtr_3586->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_3441_propertyName = extractPtr_3586->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_3470_secondaryPropertyName = extractPtr_3586->mAssociatedValue2 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_25 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_771, GALGAS_lstring::constructor_new (temp_25.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 56)).add_operation (extractedValue_3421_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 56)), extractedValue_3421_controllerName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 56)) COMMA_SOURCE_FILE ("computed-property.ggs", 56)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerAllProperties:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties * extractPtr_3813 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties *) (enumerator_1060.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3648_controllerName = extractPtr_3813->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_3668_propertyName = extractPtr_3813->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_3697_secondaryPropertyName = extractPtr_3813->mAssociatedValue2 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_26 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_771, GALGAS_lstring::constructor_new (temp_26.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 58)).add_operation (extractedValue_3648_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 58)), extractedValue_3648_controllerName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 58)) COMMA_SOURCE_FILE ("computed-property.ggs", 58)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerOneProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty * extractPtr_4009 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty *) (enumerator_1060.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3873_controllerName = extractPtr_4009->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_3893_propertyName = extractPtr_4009->mAssociatedValue1 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_27 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_771, GALGAS_lstring::constructor_new (temp_27.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 60)).add_operation (extractedValue_3873_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 60)), extractedValue_3873_controllerName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 60)) COMMA_SOURCE_FILE ("computed-property.ggs", 60)) ;
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
        const cEnumAssociatedValues_observablePropertyAST_superProperty * extractPtr_4298 = (const cEnumAssociatedValues_observablePropertyAST_superProperty *) (enumerator_1060.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_4165_superEntityName = extractPtr_4298->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_4187_propertyName = extractPtr_4298->mAssociatedValue1 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_771, GALGAS_lstring::constructor_new (extractedValue_4165_superEntityName.readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 65)).add_operation (extractedValue_4187_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 65)), extractedValue_4187_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 65)) COMMA_SOURCE_FILE ("computed-property.ggs", 65)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_superPropertyWithDefaultValue:
      {
        const cEnumAssociatedValues_observablePropertyAST_superPropertyWithDefaultValue * extractPtr_4498 = (const cEnumAssociatedValues_observablePropertyAST_superPropertyWithDefaultValue *) (enumerator_1060.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_4363_superEntityName = extractPtr_4498->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_4385_propertyName = extractPtr_4498->mAssociatedValue1 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_771, GALGAS_lstring::constructor_new (extractedValue_4363_superEntityName.readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 67)).add_operation (extractedValue_4385_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 67)), extractedValue_4385_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 67)) COMMA_SOURCE_FILE ("computed-property.ggs", 67)) ;
        }
      }
      break ;
    }
    enumerator_1060.gotoNextObject () ;
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
  cMapElement_classMap * objectArray_6593 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("computed-property.ggs", 129)) ;
  if (NULL != objectArray_6593) {
    macroValidSharedObject (objectArray_6593, cMapElement_classMap) ;
    GALGAS_classKind var_classKind_6766 ;
    const GALGAS_computedPropertyDeclarationAST temp_1 = this ;
    GALGAS_propertyMap joker_6768_3 ; // Joker input parameter
    GALGAS_actionMap joker_6768_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_6768_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mComputedPropertyTypeName (), var_classKind_6766, joker_6768_3, joker_6768_2, joker_6768_1, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 132)) ;
    switch (var_classKind_6766.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
      {
        const GALGAS_computedPropertyDeclarationAST temp_2 = this ;
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (temp_2.readProperty_mComputedPropertyTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray3  COMMA_SOURCE_FILE ("computed-property.ggs", 135)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
        const cEnumAssociatedValues_classKind_atomic * extractPtr_7076 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_6766.unsafePointer ()) ;
        const GALGAS_typeKind extractedValue_6911_kind = extractPtr_7076->mAssociatedValue0 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_4 = this ;
        objectArray_6593->mProperty_mPropertyMap.setter_insertKey (temp_4.readProperty_mComputedPropertyName (), GALGAS_propertyKind::constructor_property (extractedValue_6911_kind, GALGAS_propertyAccessibility::constructor_computed (SOURCE_FILE ("computed-property.ggs", 139))  COMMA_SOURCE_FILE ("computed-property.ggs", 139)), GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("computed-property.ggs", 140)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 137)) ;
        }
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
        const GALGAS_computedPropertyDeclarationAST temp_5 = this ;
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mComputedPropertyTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("computed-property.ggs", 144)) ;
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        const GALGAS_computedPropertyDeclarationAST temp_7 = this ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mComputedPropertyTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray8  COMMA_SOURCE_FILE ("computed-property.ggs", 146)) ;
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
  GALGAS_classKind var_classKind_7829 ;
  const GALGAS_computedPropertyDeclarationAST temp_0 = this ;
  GALGAS_propertyMap joker_7831_3 ; // Joker input parameter
  GALGAS_actionMap joker_7831_2 ; // Joker input parameter
  GALGAS_propertyGenerationList joker_7831_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_0.readProperty_mComputedPropertyTypeName (), var_classKind_7829, joker_7831_3, joker_7831_2, joker_7831_1, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 160)) ;
  GALGAS_typeKind var_typeKind_7875 ;
  switch (var_classKind_7829.enumValue ()) {
  case GALGAS_classKind::kNotBuilt:
    break ;
  case GALGAS_classKind::kEnum_prefs:
    {
      const GALGAS_computedPropertyDeclarationAST temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mComputedPropertyTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray2  COMMA_SOURCE_FILE ("computed-property.ggs", 165)) ;
      var_typeKind_7875.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_classKind::kEnum_atomic:
    {
      const cEnumAssociatedValues_classKind_atomic * extractPtr_8054 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_7829.unsafePointer ()) ;
      const GALGAS_typeKind extractedValue_8031_kind = extractPtr_8054->mAssociatedValue0 ;
      var_typeKind_7875 = extractedValue_8031_kind ;
    }
    break ;
  case GALGAS_classKind::kEnum_document:
    {
      const GALGAS_computedPropertyDeclarationAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mComputedPropertyTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray4  COMMA_SOURCE_FILE ("computed-property.ggs", 169)) ;
      var_typeKind_7875.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_classKind::kEnum_entity:
    {
      const GALGAS_computedPropertyDeclarationAST temp_5 = this ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mComputedPropertyTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("computed-property.ggs", 171)) ;
      var_typeKind_7875.drop () ; // Release error dropped variable
    }
    break ;
  }
  GALGAS_propertyMap var_rootProperties_8342 ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GALGAS_computedPropertyDeclarationAST temp_8 = this ;
    test_7 = GALGAS_bool (kIsEqual, temp_8.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      var_rootProperties_8342 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("computed-property.ggs", 176)) ;
    }
  }
  if (kBoolFalse == test_7) {
    const GALGAS_computedPropertyDeclarationAST temp_9 = this ;
    GALGAS_classKind joker_8484 ; // Joker input parameter
    GALGAS_actionMap joker_8503_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_8503_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_9.readProperty_mRootEntityName (), joker_8484, var_rootProperties_8342, joker_8503_2, joker_8503_1, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 178)) ;
  }
  GALGAS_classKind var_currentClassKind_8622 ;
  GALGAS_propertyMap var_properties_8638 ;
  const GALGAS_computedPropertyDeclarationAST temp_10 = this ;
  GALGAS_actionMap joker_8640_2 ; // Joker input parameter
  GALGAS_propertyGenerationList joker_8640_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_10.readProperty_mClassName (), var_currentClassKind_8622, var_properties_8638, joker_8640_2, joker_8640_1, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 181)) ;
  GALGAS_transientDependencyListForGeneration var_dependencies_8731 = GALGAS_transientDependencyListForGeneration::constructor_emptyList (SOURCE_FILE ("computed-property.ggs", 183)) ;
  const GALGAS_computedPropertyDeclarationAST temp_11 = this ;
  cEnumerator_observablePropertyList enumerator_8763 (temp_11.readProperty_mDependencyList (), kENUMERATION_UP) ;
  while (enumerator_8763.hasCurrentObject ()) {
    GALGAS_propertyKind var_dependencyKind_8947 ;
    GALGAS_string var_swiftTypeStringForTransientFunctionArgument_9010 ;
    GALGAS_string var_defaultValueAsString_9050 ;
    extensionMethod_analyzeObservableProperty (enumerator_8763.current_mObservableProperty (HERE), var_rootProperties_8342, ioArgument_ioSemanticContext, var_properties_8638, var_dependencyKind_8947, var_swiftTypeStringForTransientFunctionArgument_9010, var_defaultValueAsString_9050, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 185)) ;
    switch (var_dependencyKind_8947.enumValue ()) {
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
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_8763.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 198)), GALGAS_string ("only an atomic property can be observed"), fixItArray12  COMMA_SOURCE_FILE ("computed-property.ggs", 198)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_selectionController:
      {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_8763.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 200)), GALGAS_string ("only an atomic property can be observed"), fixItArray13  COMMA_SOURCE_FILE ("computed-property.ggs", 200)) ;
      }
      break ;
    }
    var_dependencies_8731.addAssign_operation (enumerator_8763.current_mObservableProperty (HERE), extensionGetter_modelStringFunctionArgument (enumerator_8763.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 204)), var_swiftTypeStringForTransientFunctionArgument_9010, var_defaultValueAsString_9050  COMMA_SOURCE_FILE ("computed-property.ggs", 202)) ;
    enumerator_8763.gotoNextObject () ;
  }
  const GALGAS_computedPropertyDeclarationAST temp_14 = this ;
  const GALGAS_computedPropertyDeclarationAST temp_15 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_transientRoutineGeneration::constructor_new (temp_14.readProperty_mClassName ().readProperty_string (), temp_15.readProperty_mComputedPropertyName ().readProperty_string (), var_typeKind_7875, GALGAS_string ("computed"), var_dependencies_8731  COMMA_SOURCE_FILE ("computed-property.ggs", 208))  COMMA_SOURCE_FILE ("computed-property.ggs", 208)) ;
  const GALGAS_computedPropertyDeclarationAST temp_16 = this ;
  const GALGAS_computedPropertyDeclarationAST temp_17 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_computeRoutineGeneration::constructor_new (temp_16.readProperty_mClassName ().readProperty_string (), temp_17.readProperty_mComputedPropertyName ().readProperty_string (), var_typeKind_7875, var_dependencies_8731  COMMA_SOURCE_FILE ("computed-property.ggs", 215))  COMMA_SOURCE_FILE ("computed-property.ggs", 215)) ;
  const GALGAS_computedPropertyDeclarationAST temp_18 = this ;
  cMapElement_classMap * objectArray_9942 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_18.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("computed-property.ggs", 221)) ;
  if (NULL != objectArray_9942) {
    macroValidSharedObject (objectArray_9942, cMapElement_classMap) ;
    GALGAS_bool var_generate_10048 ;
    switch (var_currentClassKind_8622.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
      {
        var_generate_10048 = GALGAS_bool (true) ;
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
        var_generate_10048 = GALGAS_bool (true) ;
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
        var_generate_10048 = GALGAS_bool (true) ;
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        const cEnumAssociatedValues_classKind_entity * extractPtr_10438 = (const cEnumAssociatedValues_classKind_entity *) (var_currentClassKind_8622.unsafePointer ()) ;
        const GALGAS_bool extractedValue_10232_graphic = extractPtr_10438->mAssociatedValue1 ;
        enumGalgasBool test_19 = kBoolTrue ;
        if (kBoolTrue == test_19) {
          test_19 = extractedValue_10232_graphic.boolEnum () ;
          if (kBoolTrue == test_19) {
            const GALGAS_computedPropertyDeclarationAST temp_20 = this ;
            const GALGAS_computedPropertyDeclarationAST temp_21 = this ;
            var_generate_10048 = GALGAS_bool (kIsNotEqual, temp_20.readProperty_mComputedPropertyName ().readProperty_string ().objectCompare (GALGAS_string ("selectionDisplay"))).operator_and (GALGAS_bool (kIsNotEqual, temp_21.readProperty_mComputedPropertyName ().readProperty_string ().objectCompare (GALGAS_string ("objectDisplay"))) COMMA_SOURCE_FILE ("computed-property.ggs", 234)) ;
          }
        }
        if (kBoolFalse == test_19) {
          var_generate_10048 = GALGAS_bool (true) ;
        }
      }
      break ;
    }
    const GALGAS_computedPropertyDeclarationAST temp_22 = this ;
    const GALGAS_computedPropertyDeclarationAST temp_23 = this ;
    objectArray_9942->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_computedPropertyGeneration::constructor_new (temp_22.readProperty_mComputedPropertyName ().readProperty_string (), temp_23.readProperty_mClassName ().readProperty_string (), var_typeKind_7875, var_dependencies_8731, var_generate_10048  COMMA_SOURCE_FILE ("computed-property.ggs", 239))  COMMA_SOURCE_FILE ("computed-property.ggs", 239)) ;
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
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("computed-property.ggs", 269)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 269)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 269)) ;
  const GALGAS_computedPropertyGeneration temp_0 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  //   Selection observable property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 270)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 270)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 270)) ;
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("computed-property.ggs", 271)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 271)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 271)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 271)) ;
  const GALGAS_computedPropertyGeneration temp_1 = this ;
  const GALGAS_computedPropertyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  final let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 272)).add_operation (GALGAS_string ("_property = EBComputedProperty_"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 272)).add_operation (extensionGetter_swiftTypeName (temp_2.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 272)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 272)).add_operation (GALGAS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 272)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 272)) ;
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
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("computed-property.ggs", 284)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 284)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 284)) ;
  const GALGAS_computedPropertyGeneration temp_0 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  private final func bind_property_").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 285)).add_operation (GALGAS_string (" () {\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 285)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 285)) ;
  const GALGAS_computedPropertyGeneration temp_1 = this ;
  const GALGAS_computedPropertyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    self.selectedArray_property.toMany_").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 286)).add_operation (GALGAS_string ("_StartsToBeObserved (by: self."), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 286)).add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 286)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 286)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 286)) ;
  const GALGAS_computedPropertyGeneration temp_3 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 287)).add_operation (GALGAS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 287)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 287)) ;
  result_result.plusAssign_operation(GALGAS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 288)) ;
  result_result.plusAssign_operation(GALGAS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 289)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 290)) ;
  result_result.plusAssign_operation(GALGAS_string ("          return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 291)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 292)) ;
  result_result.plusAssign_operation(GALGAS_string ("          return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 293)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 294)) ;
  const GALGAS_computedPropertyGeneration temp_4 = this ;
  result_result.plusAssign_operation(GALGAS_string ("          var s = Set <").add_operation (extensionGetter_swiftTypeName (temp_4.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 295)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 295)).add_operation (GALGAS_string ("> ()\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 295)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 295)) ;
  result_result.plusAssign_operation(GALGAS_string ("          var isMultipleSelection = false\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 296)) ;
  result_result.plusAssign_operation(GALGAS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 297)) ;
  const GALGAS_computedPropertyGeneration temp_5 = this ;
  result_result.plusAssign_operation(GALGAS_string ("            switch object.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 298)).add_operation (GALGAS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 298)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 298)) ;
  result_result.plusAssign_operation(GALGAS_string ("            case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 299)) ;
  result_result.plusAssign_operation(GALGAS_string ("              return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 300)) ;
  result_result.plusAssign_operation(GALGAS_string ("            case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 301)) ;
  result_result.plusAssign_operation(GALGAS_string ("              isMultipleSelection = true\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 302)) ;
  result_result.plusAssign_operation(GALGAS_string ("            case .single (let vProp) :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 303)) ;
  result_result.plusAssign_operation(GALGAS_string ("              s.insert (vProp)\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 304)) ;
  result_result.plusAssign_operation(GALGAS_string ("            }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 305)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 306)) ;
  result_result.plusAssign_operation(GALGAS_string ("          if isMultipleSelection {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 307)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 308)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }else if s.count == 0 {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 309)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 310)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }else if s.count == 1 {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 311)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .single (s.first!)\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 312)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }else{\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 313)) ;
  result_result.plusAssign_operation(GALGAS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 314)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 315)) ;
  result_result.plusAssign_operation(GALGAS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 316)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 317)) ;
  result_result.plusAssign_operation(GALGAS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 318)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 319)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 320)) ;
  const GALGAS_computedPropertyGeneration temp_6 = this ;
  const GALGAS_computedPropertyGeneration temp_7 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    self.").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 322)).add_operation (GALGAS_string ("_property.mWriteModelFunction = { [weak self] (inValue : "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 322)).add_operation (extensionGetter_swiftTypeName (temp_7.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 322)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 322)).add_operation (GALGAS_string (") in\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 322)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 322)) ;
  result_result.plusAssign_operation(GALGAS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 323)) ;
  result_result.plusAssign_operation(GALGAS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 324)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 325)) ;
  result_result.plusAssign_operation(GALGAS_string ("          break\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 326)) ;
  result_result.plusAssign_operation(GALGAS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 327)) ;
  result_result.plusAssign_operation(GALGAS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 328)) ;
  const GALGAS_computedPropertyGeneration temp_8 = this ;
  result_result.plusAssign_operation(GALGAS_string ("            object.").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 329)).add_operation (GALGAS_string ("_property.setProp (inValue)\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 329)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 329)) ;
  result_result.plusAssign_operation(GALGAS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 330)) ;
  result_result.plusAssign_operation(GALGAS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 331)) ;
  result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 332)) ;
  result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 333)) ;
  result_result.plusAssign_operation(GALGAS_string ("  }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 334)) ;
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
    test_0 = temp_1.readProperty_mGenerate ().operator_and (constinArgument_inOverriddenTransients.getter_hasKey (temp_2.readProperty_mPropertyName () COMMA_SOURCE_FILE ("computed-property.ggs", 344)).operator_not (SOURCE_FILE ("computed-property.ggs", 344)) COMMA_SOURCE_FILE ("computed-property.ggs", 344)).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = constinArgument_inPreferences.boolEnum () ;
        if (kBoolTrue == test_3) {
          result_result.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("computed-property.ggs", 346)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 346)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 346)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 346)) ;
          const GALGAS_computedPropertyGeneration temp_4 = this ;
          result_result.plusAssign_operation(GALGAS_string ("//   Transient property: ").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 347)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 347)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 347)) ;
          result_result.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("computed-property.ggs", 348)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 348)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 348)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 348)) ;
          const GALGAS_computedPropertyGeneration temp_5 = this ;
          const GALGAS_computedPropertyGeneration temp_6 = this ;
          result_result.plusAssign_operation(GALGAS_string ("  let preferences_").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 349)).add_operation (GALGAS_string ("_property = EBComputedProperty_"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 349)).add_operation (extensionGetter_swiftTypeName (temp_6.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 349)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 349)).add_operation (GALGAS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 349)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 349)) ;
          result_result.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("computed-property.ggs", 350)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 350)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 350)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 350)) ;
          const GALGAS_computedPropertyGeneration temp_7 = this ;
          const GALGAS_computedPropertyGeneration temp_8 = this ;
          result_result.plusAssign_operation(GALGAS_string ("  var preferences_").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 351)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 351)).add_operation (extensionGetter_swiftTypeName (temp_8.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 351)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 351)).add_operation (GALGAS_string ("\? {\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 351)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 351)) ;
          const GALGAS_computedPropertyGeneration temp_9 = this ;
          result_result.plusAssign_operation(GALGAS_string ("    return preferences_").add_operation (temp_9.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 352)).add_operation (GALGAS_string ("_property.optionalValue\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 352)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 352)) ;
          result_result.plusAssign_operation(GALGAS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 353)) ;
        }
      }
      if (kBoolFalse == test_3) {
        result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("computed-property.ggs", 355)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 355)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 355)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 355)) ;
        const GALGAS_computedPropertyGeneration temp_10 = this ;
        result_result.plusAssign_operation(GALGAS_string ("  //   Transient property: ").add_operation (temp_10.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 356)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 356)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 356)) ;
        result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("computed-property.ggs", 357)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 357)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 357)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 357)) ;
        const GALGAS_computedPropertyGeneration temp_11 = this ;
        const GALGAS_computedPropertyGeneration temp_12 = this ;
        result_result.plusAssign_operation(GALGAS_string ("  final let ").add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 358)).add_operation (GALGAS_string ("_property = EBComputedProperty_"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 358)).add_operation (extensionGetter_swiftTypeName (temp_12.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 358)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 358)).add_operation (GALGAS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 358)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 358)) ;
        result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("computed-property.ggs", 359)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 359)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 359)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 359)) ;
        const GALGAS_computedPropertyGeneration temp_13 = this ;
        const GALGAS_computedPropertyGeneration temp_14 = this ;
        result_result.plusAssign_operation(GALGAS_string ("  final var ").add_operation (temp_13.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 360)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 360)).add_operation (extensionGetter_swiftTypeName (temp_14.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 360)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 360)).add_operation (GALGAS_string ("\? {\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 360)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 360)) ;
        const GALGAS_computedPropertyGeneration temp_15 = this ;
        result_result.plusAssign_operation(GALGAS_string ("    return self.").add_operation (temp_15.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 361)).add_operation (GALGAS_string ("_property.optionalValue\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 361)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 361)) ;
        result_result.plusAssign_operation(GALGAS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 362)) ;
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
  GALGAS_string var_prefix_16922 = temp_0 ;
  result_result = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_computedPropertyGeneration temp_3 = this ;
    test_2 = GALGAS_bool (kIsStrictSup, temp_3.readProperty_mDependencyList ().getter_length (SOURCE_FILE ("computed-property.ggs", 372)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_computedPropertyGeneration temp_4 = this ;
      GALGAS_bool var_needs_5F_unwSelf_17059 = extensionGetter_needs_5F_unwSelf (temp_4.readProperty_mDependencyList (), constinArgument_inPreferences, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 373)) ;
      const GALGAS_computedPropertyGeneration temp_5 = this ;
      result_result.plusAssign_operation(GALGAS_string ("  //--- Computed property: ").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 374)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 374)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 374)) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = var_needs_5F_unwSelf_17059.boolEnum () ;
        if (kBoolTrue == test_6) {
          const GALGAS_computedPropertyGeneration temp_7 = this ;
          result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_prefix_16922, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 376)).add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 376)).add_operation (GALGAS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 376)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 376)) ;
          result_result.plusAssign_operation(GALGAS_string ("      if let unwSelf = self {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 377)) ;
          const GALGAS_computedPropertyGeneration temp_8 = this ;
          const GALGAS_computedPropertyGeneration temp_9 = this ;
          const GALGAS_computedPropertyGeneration temp_10 = this ;
          result_result.plusAssign_operation(extensionGetter_transientComputeFunctionCall (temp_8.readProperty_mDependencyList (), constinArgument_inPreferences, temp_9.readProperty_mClassName (), temp_10.readProperty_mPropertyName (), GALGAS_string ("computed"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 378)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 378)) ;
          result_result.plusAssign_operation(GALGAS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 379)) ;
          result_result.plusAssign_operation(GALGAS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 380)) ;
          result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 381)) ;
        }
      }
      if (kBoolFalse == test_6) {
        const GALGAS_computedPropertyGeneration temp_11 = this ;
        result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_prefix_16922, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 383)).add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 383)).add_operation (GALGAS_string ("_property.mReadModelFunction = {\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 383)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 383)) ;
        const GALGAS_computedPropertyGeneration temp_12 = this ;
        const GALGAS_computedPropertyGeneration temp_13 = this ;
        const GALGAS_computedPropertyGeneration temp_14 = this ;
        result_result.plusAssign_operation(extensionGetter_transientComputeFunctionCall (temp_12.readProperty_mDependencyList (), constinArgument_inPreferences, temp_13.readProperty_mClassName (), temp_14.readProperty_mPropertyName (), GALGAS_string ("computed"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 384)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 384)) ;
      }
      result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 386)) ;
      const GALGAS_computedPropertyGeneration temp_15 = this ;
      const GALGAS_computedPropertyGeneration temp_16 = this ;
      result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_prefix_16922, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 387)).add_operation (temp_15.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 387)).add_operation (GALGAS_string ("_property.mWriteModelFunction = { [weak self] in self\?.compute_"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 387)).add_operation (temp_16.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 387)).add_operation (GALGAS_string ("_property ($0) }\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 387)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 387)) ;
      const GALGAS_computedPropertyGeneration temp_17 = this ;
      cEnumerator_transientDependencyListForGeneration enumerator_18055 (temp_17.readProperty_mDependencyList (), kENUMERATION_UP) ;
      while (enumerator_18055.hasCurrentObject ()) {
        GALGAS_string var_s_18095 = extensionGetter_generateAddObserverCall (enumerator_18055.current_mDependency (HERE), constinArgument_inPreferences, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 389)) ;
        enumGalgasBool test_18 = kBoolTrue ;
        if (kBoolTrue == test_18) {
          test_18 = GALGAS_bool (kIsNotEqual, var_s_18095.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_18) {
            const GALGAS_computedPropertyGeneration temp_19 = this ;
            result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_s_18095, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 391)).add_operation (GALGAS_string (" (by: "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 391)).add_operation (var_prefix_16922, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 391)).add_operation (temp_19.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 391)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 391)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 391)) ;
          }
        }
        enumerator_18055.gotoNextObject () ;
      }
    }
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
                                                         const GALGAS_generationStruct /* constinArgument_inGenerationStruct */,
                                                         GALGAS_stringset & ioArgument_ioGeneratedFileSet,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_computeRoutineGeneration temp_1 = this ;
    test_0 = GALGAS_bool (kIsStrictSup, temp_1.readProperty_mDependencyList ().getter_length (SOURCE_FILE ("computed-property.ggs", 414)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_computeRoutineGeneration temp_2 = this ;
      const GALGAS_computeRoutineGeneration temp_3 = this ;
      const GALGAS_computeRoutineGeneration temp_4 = this ;
      GALGAS_string var_s_19163 = GALGAS_string (filewrapperTemplate_computedPropertyManager_computedComputationFunctionFile (inCompiler, temp_2.readProperty_mOwnerName (), temp_3.readProperty_mTransientName (), temp_4.readProperty_mTransientType () COMMA_SOURCE_FILE ("computed-property.ggs", 415))) ;
      const GALGAS_computeRoutineGeneration temp_5 = this ;
      const GALGAS_computeRoutineGeneration temp_6 = this ;
      GALGAS_string var_fileName_19334 = GALGAS_string ("compute-").add_operation (temp_5.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 420)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 420)).add_operation (temp_6.readProperty_mTransientName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 420)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 420)) ;
      ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_19334  COMMA_SOURCE_FILE ("computed-property.ggs", 421)) ;
      GALGAS_string var_header_19455 = GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("computed-property.ggs", 422)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 422)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 422)) ;
      var_header_19455.plusAssign_operation(GALGAS_string ("//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 423)) ;
      var_header_19455.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("computed-property.ggs", 424)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 424)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 424)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 424)) ;
      var_header_19455.plusAssign_operation(GALGAS_string ("import AppKit\n\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 425)) ;
      var_header_19455.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("computed-property.ggs", 426)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 426)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 426)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 426)) ;
      GALGAS_string var_generatedZone_33__19839 = GALGAS_string ("  }\n\n") ;
      var_generatedZone_33__19839.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("computed-property.ggs", 428)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 428)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 428)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 428)) ;
      var_generatedZone_33__19839.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 429)) ;
      var_generatedZone_33__19839.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("computed-property.ggs", 430)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 430)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 430)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 430)) ;
      {
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_19334, GALGAS_string ("//"), var_header_19455, GALGAS_string ("\n\n"), var_s_19163, GALGAS_string ("\n"), var_generatedZone_33__19839, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 431)) ;
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'computedPropertyManager'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of 'indexes' directory

static const cRegularFileWrapper * gWrapperAllFiles_computedPropertyManager_4 [1] = {
  NULL
} ;

//--- All sub-directories of 'indexes' directory

static const cDirectoryWrapper * gWrapperAllDirectories_computedPropertyManager_4 [1] = {
  NULL
} ;

//--- Directory 'indexes'

const cDirectoryWrapper gWrapperDirectory_4_computedPropertyManager (
  "indexes",
  0,
  gWrapperAllFiles_computedPropertyManager_4,
  0,
  gWrapperAllDirectories_computedPropertyManager_4
) ;

//--- All files of 'build' directory

static const cRegularFileWrapper * gWrapperAllFiles_computedPropertyManager_3 [1] = {
  NULL
} ;

//--- All sub-directories of 'build' directory

static const cDirectoryWrapper * gWrapperAllDirectories_computedPropertyManager_3 [2] = {
  & gWrapperDirectory_4_computedPropertyManager,
  NULL
} ;

//--- Directory 'build'

const cDirectoryWrapper gWrapperDirectory_3_computedPropertyManager (
  "build",
  0,
  gWrapperAllFiles_computedPropertyManager_3,
  1,
  gWrapperAllDirectories_computedPropertyManager_3
) ;

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_computedPropertyManager_5 [1] = {
  NULL
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_computedPropertyManager_5 [1] = {
  NULL
} ;

//--- Directory 'controllers'

const cDirectoryWrapper gWrapperDirectory_5_computedPropertyManager (
  "controllers",
  0,
  gWrapperAllFiles_computedPropertyManager_5,
  0,
  gWrapperAllDirectories_computedPropertyManager_5
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

static const cDirectoryWrapper * gWrapperAllDirectories_computedPropertyManager_0 [5] = {
  & gWrapperDirectory_3_computedPropertyManager,
  & gWrapperDirectory_5_computedPropertyManager,
  & gWrapperDirectory_1_computedPropertyManager,
  & gWrapperDirectory_2_computedPropertyManager,
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_computedPropertyManager (
  "",
  0,
  gWrapperAllFiles_computedPropertyManager_0,
  4,
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
  result << "\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nextension " ;
  result << in_OWNER_5F_NAME.stringValue () ;
  result << " {\n\n  //····················································································································\n\n  func compute_" ;
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
  cEnumerator_observablePropertyList enumerator_1021 (temp_6.readProperty_mDependencyList (), kENUMERATION_UP) ;
  while (enumerator_1021.hasCurrentObject ()) {
    switch (enumerator_1021.current (HERE).readProperty_mObservableProperty ().enumValue ()) {
    case GALGAS_observablePropertyAST::kNotBuilt:
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_1278 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (enumerator_1021.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_1102_propertyName = extractPtr_1278->mAssociatedValue0 ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GALGAS_transientDeclarationAST temp_8 = this ;
          test_7 = GALGAS_bool (kIsNotEqual, temp_8.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_7) {
            {
            const GALGAS_transientDeclarationAST temp_9 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_753, GALGAS_lstring::constructor_new (temp_9.readProperty_mRootEntityName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 24)).add_operation (extractedValue_1102_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 24)), extractedValue_1102_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 24)) COMMA_SOURCE_FILE ("transient-property.ggs", 24)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_1502 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (enumerator_1021.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_1324_propertyName = extractPtr_1502->mAssociatedValue0 ;
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          const GALGAS_transientDeclarationAST temp_11 = this ;
          test_10 = GALGAS_bool (kIsNotEqual, temp_11.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_10) {
            {
            const GALGAS_transientDeclarationAST temp_12 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_753, GALGAS_lstring::constructor_new (temp_12.readProperty_mRootEntityName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 28)).add_operation (extractedValue_1324_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 28)), extractedValue_1324_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 28)) COMMA_SOURCE_FILE ("transient-property.ggs", 28)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_1740 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (enumerator_1021.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_1554_relationshipName = extractPtr_1740->mAssociatedValue0 ;
        enumGalgasBool test_13 = kBoolTrue ;
        if (kBoolTrue == test_13) {
          const GALGAS_transientDeclarationAST temp_14 = this ;
          test_13 = GALGAS_bool (kIsNotEqual, temp_14.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_13) {
            {
            const GALGAS_transientDeclarationAST temp_15 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_753, GALGAS_lstring::constructor_new (temp_15.readProperty_mRootEntityName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 32)).add_operation (extractedValue_1554_relationshipName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 32)), extractedValue_1554_relationshipName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 32)) COMMA_SOURCE_FILE ("transient-property.ggs", 32)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootPropertyNone:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone * extractPtr_1968 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone *) (enumerator_1021.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_1784_relationshipName = extractPtr_1968->mAssociatedValue0 ;
        enumGalgasBool test_16 = kBoolTrue ;
        if (kBoolTrue == test_16) {
          const GALGAS_transientDeclarationAST temp_17 = this ;
          test_16 = GALGAS_bool (kIsNotEqual, temp_17.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_16) {
            {
            const GALGAS_transientDeclarationAST temp_18 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_753, GALGAS_lstring::constructor_new (temp_18.readProperty_mRootEntityName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 36)).add_operation (extractedValue_1784_relationshipName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 36)), extractedValue_1784_relationshipName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 36)) COMMA_SOURCE_FILE ("transient-property.ggs", 36)) ;
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
        const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_2150 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (enumerator_1021.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2039_propertyName = extractPtr_2150->mAssociatedValue0 ;
        {
        const GALGAS_transientDeclarationAST temp_19 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_753, GALGAS_lstring::constructor_new (temp_19.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 40)).add_operation (extractedValue_2039_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 40)), extractedValue_2039_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 40)) COMMA_SOURCE_FILE ("transient-property.ggs", 40)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyWithOption:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption * extractPtr_2318 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *) (enumerator_1021.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2205_propertyName = extractPtr_2318->mAssociatedValue0 ;
        {
        const GALGAS_transientDeclarationAST temp_20 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_753, GALGAS_lstring::constructor_new (temp_20.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 42)).add_operation (extractedValue_2205_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 42)), extractedValue_2205_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 42)) COMMA_SOURCE_FILE ("transient-property.ggs", 42)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyArray:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray * extractPtr_2481 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *) (enumerator_1021.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2368_propertyName = extractPtr_2481->mAssociatedValue0 ;
        {
        const GALGAS_transientDeclarationAST temp_21 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_753, GALGAS_lstring::constructor_new (temp_21.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 44)).add_operation (extractedValue_2368_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 44)), extractedValue_2368_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 44)) COMMA_SOURCE_FILE ("transient-property.ggs", 44)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyObject:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject * extractPtr_2645 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject *) (enumerator_1021.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2532_propertyName = extractPtr_2645->mAssociatedValue0 ;
        {
        const GALGAS_transientDeclarationAST temp_22 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_753, GALGAS_lstring::constructor_new (temp_22.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 46)).add_operation (extractedValue_2532_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 46)), extractedValue_2532_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 46)) COMMA_SOURCE_FILE ("transient-property.ggs", 46)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyNone:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone * extractPtr_2805 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone *) (enumerator_1021.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2694_propertyName = extractPtr_2805->mAssociatedValue0 ;
        {
        const GALGAS_transientDeclarationAST temp_23 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_753, GALGAS_lstring::constructor_new (temp_23.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 48)).add_operation (extractedValue_2694_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 48)), extractedValue_2694_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 48)) COMMA_SOURCE_FILE ("transient-property.ggs", 48)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_prefsProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_2958 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (enumerator_1021.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2851_propertyName = extractPtr_2958->mAssociatedValue0 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_753, GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 50)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 50)).add_operation (extractedValue_2851_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 50)), extractedValue_2851_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 50)) COMMA_SOURCE_FILE ("transient-property.ggs", 50)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_prefsPropertyWithOption:
      {
        const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption * extractPtr_3123 = (const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *) (enumerator_1021.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3014_propertyName = extractPtr_3123->mAssociatedValue0 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_753, GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 52)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 52)).add_operation (extractedValue_3014_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 52)), extractedValue_3014_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 52)) COMMA_SOURCE_FILE ("transient-property.ggs", 52)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty * extractPtr_3316 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty *) (enumerator_1021.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3180_controllerName = extractPtr_3316->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_3200_propertyName = extractPtr_3316->mAssociatedValue1 ;
        {
        const GALGAS_transientDeclarationAST temp_24 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_753, GALGAS_lstring::constructor_new (temp_24.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 54)).add_operation (extractedValue_3180_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 54)), extractedValue_3180_controllerName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 54)) COMMA_SOURCE_FILE ("transient-property.ggs", 54)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerSecondaryProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty * extractPtr_3547 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty *) (enumerator_1021.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3382_controllerName = extractPtr_3547->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_3402_propertyName = extractPtr_3547->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_3431_secondaryPropertyName = extractPtr_3547->mAssociatedValue2 ;
        {
        const GALGAS_transientDeclarationAST temp_25 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_753, GALGAS_lstring::constructor_new (temp_25.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 56)).add_operation (extractedValue_3382_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 56)), extractedValue_3382_controllerName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 56)) COMMA_SOURCE_FILE ("transient-property.ggs", 56)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerAllProperties:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties * extractPtr_3774 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties *) (enumerator_1021.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3609_controllerName = extractPtr_3774->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_3629_propertyName = extractPtr_3774->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_3658_secondaryPropertyName = extractPtr_3774->mAssociatedValue2 ;
        {
        const GALGAS_transientDeclarationAST temp_26 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_753, GALGAS_lstring::constructor_new (temp_26.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 58)).add_operation (extractedValue_3609_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 58)), extractedValue_3609_controllerName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 58)) COMMA_SOURCE_FILE ("transient-property.ggs", 58)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerOneProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty * extractPtr_3970 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty *) (enumerator_1021.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3834_controllerName = extractPtr_3970->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_3854_propertyName = extractPtr_3970->mAssociatedValue1 ;
        {
        const GALGAS_transientDeclarationAST temp_27 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_753, GALGAS_lstring::constructor_new (temp_27.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 60)).add_operation (extractedValue_3834_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 60)), extractedValue_3834_controllerName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 60)) COMMA_SOURCE_FILE ("transient-property.ggs", 60)) ;
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
        const cEnumAssociatedValues_observablePropertyAST_superProperty * extractPtr_4259 = (const cEnumAssociatedValues_observablePropertyAST_superProperty *) (enumerator_1021.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_4126_superEntityName = extractPtr_4259->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_4148_propertyName = extractPtr_4259->mAssociatedValue1 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_753, GALGAS_lstring::constructor_new (extractedValue_4126_superEntityName.readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 65)).add_operation (extractedValue_4148_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 65)), extractedValue_4148_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 65)) COMMA_SOURCE_FILE ("transient-property.ggs", 65)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_superPropertyWithDefaultValue:
      {
        const cEnumAssociatedValues_observablePropertyAST_superPropertyWithDefaultValue * extractPtr_4459 = (const cEnumAssociatedValues_observablePropertyAST_superPropertyWithDefaultValue *) (enumerator_1021.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_4324_superEntityName = extractPtr_4459->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_4346_propertyName = extractPtr_4459->mAssociatedValue1 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_753, GALGAS_lstring::constructor_new (extractedValue_4324_superEntityName.readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 67)).add_operation (extractedValue_4346_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 67)), extractedValue_4346_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 67)) COMMA_SOURCE_FILE ("transient-property.ggs", 67)) ;
        }
      }
      break ;
    }
    enumerator_1021.gotoNextObject () ;
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
  cMapElement_classMap * objectArray_7138 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("transient-property.ggs", 151)) ;
  if (NULL != objectArray_7138) {
    macroValidSharedObject (objectArray_7138, cMapElement_classMap) ;
    GALGAS_classKind var_classKind_7304 ;
    const GALGAS_transientDeclarationAST temp_1 = this ;
    GALGAS_propertyMap joker_7306_3 ; // Joker input parameter
    GALGAS_actionMap joker_7306_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_7306_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mTransientTypeName (), var_classKind_7304, joker_7306_3, joker_7306_2, joker_7306_1, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 154)) ;
    switch (var_classKind_7304.enumValue ()) {
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
        const cEnumAssociatedValues_classKind_atomic * extractPtr_7663 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_7304.unsafePointer ()) ;
        const GALGAS_typeKind extractedValue_7442_kind = extractPtr_7663->mAssociatedValue0 ;
        {
        const GALGAS_transientDeclarationAST temp_4 = this ;
        const GALGAS_transientDeclarationAST temp_5 = this ;
        const GALGAS_transientDeclarationAST temp_6 = this ;
        objectArray_7138->mProperty_mPropertyMap.setter_insertKey (temp_4.readProperty_mTransientName (), GALGAS_propertyKind::constructor_property (extractedValue_7442_kind, GALGAS_propertyAccessibility::constructor_transient (GALGAS_bool (kIsEqual, temp_5.readProperty_mDependencyList ().getter_length (SOURCE_FILE ("transient-property.ggs", 161)).objectCompare (GALGAS_uint (uint32_t (0U))))  COMMA_SOURCE_FILE ("transient-property.ggs", 161))  COMMA_SOURCE_FILE ("transient-property.ggs", 161)), GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("transient-property.ggs", 162)), temp_6.readProperty_mIsOverriding (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 159)) ;
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
  GALGAS_classKind var_classKind_8388 ;
  const GALGAS_transientDeclarationAST temp_0 = this ;
  GALGAS_propertyMap joker_8390_3 ; // Joker input parameter
  GALGAS_actionMap joker_8390_2 ; // Joker input parameter
  GALGAS_propertyGenerationList joker_8390_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_0.readProperty_mTransientTypeName (), var_classKind_8388, joker_8390_3, joker_8390_2, joker_8390_1, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 181)) ;
  GALGAS_typeKind var_typeKind_8434 ;
  switch (var_classKind_8388.enumValue ()) {
  case GALGAS_classKind::kNotBuilt:
    break ;
  case GALGAS_classKind::kEnum_prefs:
    {
      const GALGAS_transientDeclarationAST temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mTransientTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray2  COMMA_SOURCE_FILE ("transient-property.ggs", 186)) ;
      var_typeKind_8434.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_classKind::kEnum_atomic:
    {
      const cEnumAssociatedValues_classKind_atomic * extractPtr_8606 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_8388.unsafePointer ()) ;
      const GALGAS_typeKind extractedValue_8583_kind = extractPtr_8606->mAssociatedValue0 ;
      var_typeKind_8434 = extractedValue_8583_kind ;
    }
    break ;
  case GALGAS_classKind::kEnum_document:
    {
      const GALGAS_transientDeclarationAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mTransientTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray4  COMMA_SOURCE_FILE ("transient-property.ggs", 190)) ;
      var_typeKind_8434.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_classKind::kEnum_entity:
    {
      const GALGAS_transientDeclarationAST temp_5 = this ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mTransientTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("transient-property.ggs", 192)) ;
      var_typeKind_8434.drop () ; // Release error dropped variable
    }
    break ;
  }
  GALGAS_propertyMap var_rootProperties_8880 ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GALGAS_transientDeclarationAST temp_8 = this ;
    test_7 = GALGAS_bool (kIsEqual, temp_8.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      var_rootProperties_8880 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("transient-property.ggs", 197)) ;
    }
  }
  if (kBoolFalse == test_7) {
    const GALGAS_transientDeclarationAST temp_9 = this ;
    GALGAS_classKind joker_9022 ; // Joker input parameter
    GALGAS_actionMap joker_9041_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_9041_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_9.readProperty_mRootEntityName (), joker_9022, var_rootProperties_8880, joker_9041_2, joker_9041_1, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 199)) ;
  }
  GALGAS_classKind var_currentClassKind_9160 ;
  GALGAS_propertyMap var_properties_9176 ;
  const GALGAS_transientDeclarationAST temp_10 = this ;
  GALGAS_actionMap joker_9178_2 ; // Joker input parameter
  GALGAS_propertyGenerationList joker_9178_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_10.readProperty_mClassName (), var_currentClassKind_9160, var_properties_9176, joker_9178_2, joker_9178_1, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 202)) ;
  GALGAS_transientDependencyListForGeneration var_dependencies_9269 = GALGAS_transientDependencyListForGeneration::constructor_emptyList (SOURCE_FILE ("transient-property.ggs", 204)) ;
  const GALGAS_transientDeclarationAST temp_11 = this ;
  cEnumerator_observablePropertyList enumerator_9301 (temp_11.readProperty_mDependencyList (), kENUMERATION_UP) ;
  while (enumerator_9301.hasCurrentObject ()) {
    GALGAS_propertyKind var_dependencyKind_9485 ;
    GALGAS_string var_swiftTypeStringForTransientFunctionArgument_9548 ;
    GALGAS_string var_defaultValueAsString_9588 ;
    extensionMethod_analyzeObservableProperty (enumerator_9301.current_mObservableProperty (HERE), var_rootProperties_8880, ioArgument_ioSemanticContext, var_properties_9176, var_dependencyKind_9485, var_swiftTypeStringForTransientFunctionArgument_9548, var_defaultValueAsString_9588, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 206)) ;
    switch (var_dependencyKind_9485.enumValue ()) {
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
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_9301.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 220)), GALGAS_string ("only an atomic property can be observed"), fixItArray12  COMMA_SOURCE_FILE ("transient-property.ggs", 220)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_selectionController:
      {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_9301.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 222)), GALGAS_string ("only an atomic property can be observed"), fixItArray13  COMMA_SOURCE_FILE ("transient-property.ggs", 222)) ;
      }
      break ;
    }
    var_dependencies_9269.addAssign_operation (enumerator_9301.current_mObservableProperty (HERE), extensionGetter_modelStringFunctionArgument (enumerator_9301.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 226)), var_swiftTypeStringForTransientFunctionArgument_9548, var_defaultValueAsString_9588  COMMA_SOURCE_FILE ("transient-property.ggs", 224)) ;
    enumerator_9301.gotoNextObject () ;
  }
  const GALGAS_transientDeclarationAST temp_14 = this ;
  const GALGAS_transientDeclarationAST temp_15 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_transientRoutineGeneration::constructor_new (temp_14.readProperty_mClassName ().readProperty_string (), temp_15.readProperty_mTransientName ().readProperty_string (), var_typeKind_8434, GALGAS_string ("transient"), var_dependencies_9269  COMMA_SOURCE_FILE ("transient-property.ggs", 230))  COMMA_SOURCE_FILE ("transient-property.ggs", 230)) ;
  const GALGAS_transientDeclarationAST temp_16 = this ;
  cMapElement_classMap * objectArray_10378 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_16.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("transient-property.ggs", 237)) ;
  if (NULL != objectArray_10378) {
    macroValidSharedObject (objectArray_10378, cMapElement_classMap) ;
    GALGAS_bool var_generate_10484 ;
    switch (var_currentClassKind_9160.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
      {
        var_generate_10484 = GALGAS_bool (true) ;
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
        var_generate_10484 = GALGAS_bool (true) ;
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
        var_generate_10484 = GALGAS_bool (true) ;
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        const cEnumAssociatedValues_classKind_entity * extractPtr_10860 = (const cEnumAssociatedValues_classKind_entity *) (var_currentClassKind_9160.unsafePointer ()) ;
        const GALGAS_bool extractedValue_10668_graphic = extractPtr_10860->mAssociatedValue1 ;
        enumGalgasBool test_17 = kBoolTrue ;
        if (kBoolTrue == test_17) {
          test_17 = extractedValue_10668_graphic.boolEnum () ;
          if (kBoolTrue == test_17) {
            const GALGAS_transientDeclarationAST temp_18 = this ;
            const GALGAS_transientDeclarationAST temp_19 = this ;
            var_generate_10484 = GALGAS_bool (kIsNotEqual, temp_18.readProperty_mTransientName ().readProperty_string ().objectCompare (GALGAS_string ("selectionDisplay"))).operator_and (GALGAS_bool (kIsNotEqual, temp_19.readProperty_mTransientName ().readProperty_string ().objectCompare (GALGAS_string ("objectDisplay"))) COMMA_SOURCE_FILE ("transient-property.ggs", 250)) ;
          }
        }
        if (kBoolFalse == test_17) {
          var_generate_10484 = GALGAS_bool (true) ;
        }
      }
      break ;
    }
    const GALGAS_transientDeclarationAST temp_20 = this ;
    const GALGAS_transientDeclarationAST temp_21 = this ;
    objectArray_10378->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_transientPropertyGeneration::constructor_new (temp_20.readProperty_mTransientName ().readProperty_string (), temp_21.readProperty_mClassName ().readProperty_string (), var_typeKind_8434, var_dependencies_9269, var_generate_10484  COMMA_SOURCE_FILE ("transient-property.ggs", 255))  COMMA_SOURCE_FILE ("transient-property.ggs", 255)) ;
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
  result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("transient-property.ggs", 287)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 287)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 287)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 287)) ;
  const GALGAS_transientPropertyGeneration temp_1 = this ;
  const GALGAS_transientPropertyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  final let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 288)).add_operation (GALGAS_string ("_property = EBTransientProperty_"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 288)).add_operation (extensionGetter_swiftTypeName (temp_2.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 288)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 288)).add_operation (GALGAS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 288)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 288)) ;
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
  result_result = GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("transient-property.ggs", 300)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 300)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 300)) ;
  const GALGAS_transientPropertyGeneration temp_0 = this ;
  result_result.plusAssign_operation(GALGAS_string ("  private final func bind_property_").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 301)).add_operation (GALGAS_string (" () {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 301)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 301)) ;
  const GALGAS_transientPropertyGeneration temp_1 = this ;
  const GALGAS_transientPropertyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GALGAS_string ("    self.selectedArray_property.toMany_").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 302)).add_operation (GALGAS_string ("_StartsToBeObserved (by: self."), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 302)).add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 302)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 302)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 302)) ;
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
          result_result.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("transient-property.ggs", 351)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 351)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 351)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 351)) ;
          const GALGAS_transientPropertyGeneration temp_5 = this ;
          const GALGAS_transientPropertyGeneration temp_6 = this ;
          result_result.plusAssign_operation(GALGAS_string ("@MainActor let preferences_").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 352)).add_operation (GALGAS_string ("_property = EBTransientProperty_"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 352)).add_operation (extensionGetter_swiftTypeName (temp_6.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 352)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 352)).add_operation (GALGAS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 352)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 352)) ;
          result_result.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("transient-property.ggs", 353)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 353)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 353)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 353)) ;
          const GALGAS_transientPropertyGeneration temp_7 = this ;
          const GALGAS_transientPropertyGeneration temp_8 = this ;
          result_result.plusAssign_operation(GALGAS_string ("@MainActor var preferences_").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 354)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 354)).add_operation (extensionGetter_swiftTypeName (temp_8.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 354)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 354)).add_operation (GALGAS_string ("\? {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 354)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 354)) ;
          const GALGAS_transientPropertyGeneration temp_9 = this ;
          result_result.plusAssign_operation(GALGAS_string ("  return preferences_").add_operation (temp_9.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 355)).add_operation (GALGAS_string ("_property.optionalValue\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 355)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 355)) ;
          result_result.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 356)) ;
        }
      }
      if (kBoolFalse == test_3) {
        result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("transient-property.ggs", 358)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 358)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 358)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 358)) ;
        const GALGAS_transientPropertyGeneration temp_10 = this ;
        result_result.plusAssign_operation(GALGAS_string ("  //   Transient property: ").add_operation (temp_10.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 359)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 359)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 359)) ;
        result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("transient-property.ggs", 360)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 360)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 360)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 360)) ;
        const GALGAS_transientPropertyGeneration temp_11 = this ;
        const GALGAS_transientPropertyGeneration temp_12 = this ;
        result_result.plusAssign_operation(GALGAS_string ("  final let ").add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 361)).add_operation (GALGAS_string ("_property = EBTransientProperty_"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 361)).add_operation (extensionGetter_swiftTypeName (temp_12.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 361)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 361)).add_operation (GALGAS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 361)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 361)) ;
        result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("transient-property.ggs", 362)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 362)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 362)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 362)) ;
        const GALGAS_transientPropertyGeneration temp_13 = this ;
        const GALGAS_transientPropertyGeneration temp_14 = this ;
        result_result.plusAssign_operation(GALGAS_string ("  final var ").add_operation (temp_13.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 363)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 363)).add_operation (extensionGetter_swiftTypeName (temp_14.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 363)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 363)).add_operation (GALGAS_string ("\? {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 363)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 363)) ;
        const GALGAS_transientPropertyGeneration temp_15 = this ;
        result_result.plusAssign_operation(GALGAS_string ("    return self.").add_operation (temp_15.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 364)).add_operation (GALGAS_string ("_property.optionalValue\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 364)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 364)) ;
        result_result.plusAssign_operation(GALGAS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 365)) ;
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
  GALGAS_string var_prefix_16737 = temp_0 ;
  result_result = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_transientPropertyGeneration temp_3 = this ;
    test_2 = GALGAS_bool (kIsStrictSup, temp_3.readProperty_mDependencyList ().getter_length (SOURCE_FILE ("transient-property.ggs", 375)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_transientPropertyGeneration temp_4 = this ;
      GALGAS_bool var_needs_5F_unwSelf_16874 = extensionGetter_needs_5F_unwSelf (temp_4.readProperty_mDependencyList (), constinArgument_inPreferences, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 376)) ;
      const GALGAS_transientPropertyGeneration temp_5 = this ;
      result_result.plusAssign_operation(GALGAS_string ("  //--- Atomic property: ").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 377)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 377)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 377)) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = var_needs_5F_unwSelf_16874.boolEnum () ;
        if (kBoolTrue == test_6) {
          const GALGAS_transientPropertyGeneration temp_7 = this ;
          result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_prefix_16737, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 379)).add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 379)).add_operation (GALGAS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 379)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 379)) ;
          result_result.plusAssign_operation(GALGAS_string ("      if let unwSelf = self {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 380)) ;
          const GALGAS_transientPropertyGeneration temp_8 = this ;
          const GALGAS_transientPropertyGeneration temp_9 = this ;
          const GALGAS_transientPropertyGeneration temp_10 = this ;
          result_result.plusAssign_operation(extensionGetter_transientComputeFunctionCall (temp_8.readProperty_mDependencyList (), constinArgument_inPreferences, temp_9.readProperty_mClassName (), temp_10.readProperty_mPropertyName (), GALGAS_string ("transient"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 381)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 381)) ;
          result_result.plusAssign_operation(GALGAS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 382)) ;
          result_result.plusAssign_operation(GALGAS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 383)) ;
          result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 384)) ;
        }
      }
      if (kBoolFalse == test_6) {
        const GALGAS_transientPropertyGeneration temp_11 = this ;
        result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_prefix_16737, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 386)).add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 386)).add_operation (GALGAS_string ("_property.mReadModelFunction = {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 386)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 386)) ;
        const GALGAS_transientPropertyGeneration temp_12 = this ;
        const GALGAS_transientPropertyGeneration temp_13 = this ;
        const GALGAS_transientPropertyGeneration temp_14 = this ;
        result_result.plusAssign_operation(extensionGetter_transientComputeFunctionCall (temp_12.readProperty_mDependencyList (), constinArgument_inPreferences, temp_13.readProperty_mClassName (), temp_14.readProperty_mPropertyName (), GALGAS_string ("transient"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 387)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 387)) ;
      }
      result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 389)) ;
      const GALGAS_transientPropertyGeneration temp_15 = this ;
      cEnumerator_transientDependencyListForGeneration enumerator_17707 (temp_15.readProperty_mDependencyList (), kENUMERATION_UP) ;
      while (enumerator_17707.hasCurrentObject ()) {
        GALGAS_string var_s_17747 = extensionGetter_generateAddObserverCall (enumerator_17707.current_mDependency (HERE), constinArgument_inPreferences, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 391)) ;
        enumGalgasBool test_16 = kBoolTrue ;
        if (kBoolTrue == test_16) {
          test_16 = GALGAS_bool (kIsNotEqual, var_s_17747.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_16) {
            const GALGAS_transientPropertyGeneration temp_17 = this ;
            result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_s_17747, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 393)).add_operation (GALGAS_string (" (by: "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 393)).add_operation (var_prefix_16737, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 393)).add_operation (temp_17.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 393)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 393)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 393)) ;
          }
        }
        enumerator_17707.gotoNextObject () ;
      }
    }
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
                                                           const GALGAS_generationStruct /* constinArgument_inGenerationStruct */,
                                                           GALGAS_stringset & ioArgument_ioGeneratedFileSet,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_transientRoutineGeneration temp_1 = this ;
    test_0 = GALGAS_bool (kIsStrictSup, temp_1.readProperty_mDependencyList ().getter_length (SOURCE_FILE ("transient-property.ggs", 601)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_transientRoutineGeneration temp_2 = this ;
      const GALGAS_transientRoutineGeneration temp_3 = this ;
      const GALGAS_transientRoutineGeneration temp_4 = this ;
      const GALGAS_transientRoutineGeneration temp_5 = this ;
      const GALGAS_transientRoutineGeneration temp_6 = this ;
      GALGAS_string var_s_28809 = GALGAS_string (filewrapperTemplate_transientManager_transientComputationFunctionFile (inCompiler, temp_2.readProperty_mOwnerName (), temp_3.readProperty_mTransientName (), temp_4.readProperty_mDependencyList (), temp_5.readProperty_mTransientType (), temp_6.readProperty_mGeneratedFunctionNamePrefix () COMMA_SOURCE_FILE ("transient-property.ggs", 602))) ;
      GALGAS_string var_header_29041 = GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("transient-property.ggs", 609)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 609)).add_operation (GALGAS_string ("\n//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n//"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 609)).add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("transient-property.ggs", 611)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 611)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 611)).add_operation (GALGAS_string ("import AppKit\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 611)).add_operation (GALGAS_string ("//"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 612)).add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("transient-property.ggs", 613)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 613)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 613)) ;
      const GALGAS_transientRoutineGeneration temp_7 = this ;
      const GALGAS_transientRoutineGeneration temp_8 = this ;
      const GALGAS_transientRoutineGeneration temp_9 = this ;
      GALGAS_string var_fileName_29390 = temp_7.readProperty_mGeneratedFunctionNamePrefix ().add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 614)).add_operation (temp_8.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 614)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 614)).add_operation (temp_9.readProperty_mTransientName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 614)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 614)) ;
      ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_29390  COMMA_SOURCE_FILE ("transient-property.ggs", 615)) ;
      {
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_29390, GALGAS_string ("//"), var_header_29041, GALGAS_string ("\n\n"), var_s_28809, GALGAS_string ("\n"), GALGAS_string ("}\n\n//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("transient-property.ggs", 624)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 624)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 624)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 616)) ;
      }
    }
  }
}

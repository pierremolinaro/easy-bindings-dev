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

GALGAS_astDeclarationStruct GALGAS_astDeclarationStruct::constructor_new (UNUSED_LOCATION_ARGS) {
  const GALGAS_declarationListAST in_mUnifiedDeclarationList = GALGAS_declarationListAST::constructor_emptyList (SOURCE_FILE ("grammar-syntax.ggs", 17)) ;
  const GALGAS_outletClassBindingSpecificationList in_mBindingSpecificationListMap = GALGAS_outletClassBindingSpecificationList::constructor_emptyList (SOURCE_FILE ("grammar-syntax.ggs", 18)) ;
  const GALGAS_autoLayoutViewClassBindingSpecificationList in_mAutoLayoutBindingSpecificationList = GALGAS_autoLayoutViewClassBindingSpecificationList::constructor_emptyList (SOURCE_FILE ("grammar-syntax.ggs", 19)) ;
  const GALGAS_prefDeclaration in_mPreferences = GALGAS_prefDeclaration::constructor_new (SOURCE_FILE ("grammar-syntax.ggs", 20)) ;
  const GALGAS_lstring in_mXcodeProject = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("grammar-syntax.ggs", 21)) ;
  const GALGAS_lstringlist in_mGraphvizList = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("grammar-syntax.ggs", 22)) ;
  const GALGAS_astAutoLayoutViewFunctionMap in_mAutoLayoutVStackFunctionMap = GALGAS_astAutoLayoutViewFunctionMap::constructor_emptyMap (SOURCE_FILE ("grammar-syntax.ggs", 23)) ;
  const GALGAS_astAutoLayoutViewFunctionMap in_mAutoLayoutHStackFunctionMap = GALGAS_astAutoLayoutViewFunctionMap::constructor_emptyMap (SOURCE_FILE ("grammar-syntax.ggs", 24)) ;
  const GALGAS_enumerationFunctionListAST in_mEnumerationFunctionListAST = GALGAS_enumerationFunctionListAST::constructor_emptyList (SOURCE_FILE ("grammar-syntax.ggs", 25)) ;
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
//     @astDeclarationStruct generic code implementation
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_doubleAsDefaultValue::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDefaultValue::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

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
      result = kOperandEqual ; // mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
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
//     @doubleAsDefaultValue generic code implementation
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
    GALGAS_typeKind var_unused_0_6259 ;
    GALGAS_propertyAccessibility var_accessibility_6315 ;
    const bool optionalResult6255 = temp_1.readProperty_mKind ().optional_property (var_unused_0_6259, var_accessibility_6315) ;
    if (!optionalResult6255) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_accessibility_6315.getter_isTransient (SOURCE_FILE ("semantic-analysis.ggs", 146)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_bool var_ab_6413 ;
          var_accessibility_6315.method_transient (var_ab_6413, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.ggs", 147)) ;
          result_result = var_ab_6413 ;
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
      GALGAS_string var_path_2986 = constinArgument_inSourceFile.add_operation (GALGAS_string (".declarationDependancy.dot"), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 74)) ;
      GALGAS_bool joker_3080 ; // Joker input parameter
      var_s_2932.method_writeToFileWhenDifferentContents (var_path_2986, joker_3080, inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 75)) ;
    }
  }
  outArgument_outSortedDeclarationListAST = GALGAS_declarationListAST::constructor_emptyList (SOURCE_FILE ("declaration-graph.ggs", 78)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsStrictSup, var_declarationPrecedenceGraph_2670.getter_undefinedNodeCount (SOURCE_FILE ("declaration-graph.ggs", 79)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      cEnumerator_lstringlist enumerator_3258 (var_declarationPrecedenceGraph_2670.getter_undefinedNodeReferenceList (SOURCE_FILE ("declaration-graph.ggs", 80)), kENUMERATION_UP) ;
      while (enumerator_3258.hasCurrentObject ()) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_3258.current_mValue (HERE).readProperty_location (), GALGAS_string ("the property ").add_operation (enumerator_3258.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 81)).add_operation (GALGAS_string (" is not defined"), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 81)), fixItArray2  COMMA_SOURCE_FILE ("declaration-graph.ggs", 81)) ;
        enumerator_3258.gotoNextObject () ;
      }
    }
  }
  if (kBoolFalse == test_1) {
    GALGAS_declarationListAST var_unsortedSemanticDeclarationListAST_3549 ;
    GALGAS_lstringlist joker_3502 ; // Joker input parameter
    GALGAS_lstringlist joker_3557 ; // Joker input parameter
    var_declarationPrecedenceGraph_2670.method_topologicalSort (outArgument_outSortedDeclarationListAST, joker_3502, var_unsortedSemanticDeclarationListAST_3549, joker_3557, inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 84)) ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (kIsStrictSup, var_unsortedSemanticDeclarationListAST_3549.getter_length (SOURCE_FILE ("declaration-graph.ggs", 90)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string var_s_3637 = GALGAS_string ("semantic analysis not performed, ").add_operation (var_unsortedSemanticDeclarationListAST_3549.getter_length (SOURCE_FILE ("declaration-graph.ggs", 92)).getter_string (SOURCE_FILE ("declaration-graph.ggs", 91)), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 91)).add_operation (GALGAS_string (" declarations are involved in circular definition:"), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 92)) ;
        cEnumerator_declarationListAST enumerator_3824 (var_unsortedSemanticDeclarationListAST_3549, kENUMERATION_UP) ;
        while (enumerator_3824.hasCurrentObject ()) {
          var_s_3637.plusAssign_operation(GALGAS_string ("\n-  ").add_operation (callExtensionGetter_nodeKey ((const cPtr_abstractDeclarationAST *) enumerator_3824.current_mPropertyDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 95)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 95)), inCompiler  COMMA_SOURCE_FILE ("declaration-graph.ggs", 95)) ;
          enumerator_3824.gotoNextObject () ;
        }
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("declaration-graph.ggs", 97)), var_s_3637, fixItArray4  COMMA_SOURCE_FILE ("declaration-graph.ggs", 97)) ;
        cEnumerator_declarationListAST enumerator_3971 (var_unsortedSemanticDeclarationListAST_3549, kENUMERATION_UP) ;
        while (enumerator_3971.hasCurrentObject ()) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (callExtensionGetter_nodeKey ((const cPtr_abstractDeclarationAST *) enumerator_3971.current_mPropertyDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 99)).readProperty_location (), GALGAS_string ("the ").add_operation (callExtensionGetter_nodeKey ((const cPtr_abstractDeclarationAST *) enumerator_3971.current_mPropertyDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 99)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 99)).add_operation (GALGAS_string (" property is declared here"), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 99)), fixItArray5  COMMA_SOURCE_FILE ("declaration-graph.ggs", 99)) ;
          enumerator_3971.gotoNextObject () ;
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
  GALGAS_enumConstantMap var_enumConstantMap_4180 = GALGAS_enumConstantMap::constructor_emptyMap (SOURCE_FILE ("enumeration.ggs", 111)) ;
  const GALGAS_enumerationDeclarationAST temp_0 = this ;
  cEnumerator_lstringlist enumerator_4194 (temp_0.readProperty_mEnumConstantNameList (), kENUMERATION_UP) ;
  while (enumerator_4194.hasCurrentObject ()) {
    {
    var_enumConstantMap_4180.setter_insertKey (enumerator_4194.current_mValue (HERE), var_enumConstantMap_4180.getter_count (SOURCE_FILE ("enumeration.ggs", 113)), inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 113)) ;
    }
    enumerator_4194.gotoNextObject () ;
  }
  GALGAS_enumFuncMap var_enumFuncMap_4328 = GALGAS_enumFuncMap::constructor_emptyMap (SOURCE_FILE ("enumeration.ggs", 115)) ;
  cEnumerator_enumerationFunctionListAST enumerator_4378 (ioArgument_ioSemanticContext.readProperty_mEnumerationFunctionListAST (), kENUMERATION_UP) ;
  while (enumerator_4378.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      const GALGAS_enumerationDeclarationAST temp_2 = this ;
      test_1 = GALGAS_bool (kIsEqual, enumerator_4378.current_mEnumName (HERE).readProperty_string ().objectCompare (temp_2.readProperty_mClassName ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_stringset var_definedConstantNameSet_4533 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("enumeration.ggs", 118)) ;
        GALGAS_enumFunAssociationSortedList var_associationSortedList_4600 = GALGAS_enumFunAssociationSortedList::constructor_emptySortedList (SOURCE_FILE ("enumeration.ggs", 119)) ;
        cEnumerator__32_lstringlist enumerator_4646 (enumerator_4378.current_mAssociationList (HERE), kENUMERATION_UP) ;
        while (enumerator_4646.hasCurrentObject ()) {
          GALGAS_uint var_idx_4727 ;
          var_enumConstantMap_4180.method_searchKey (enumerator_4646.current_mValue_30_ (HERE), var_idx_4727, inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 121)) ;
          var_associationSortedList_4600.addAssign_operation (var_idx_4727, enumerator_4646.current_mValue_31_ (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("enumeration.ggs", 122)) ;
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_definedConstantNameSet_4533.getter_hasKey (enumerator_4646.current_mValue_30_ (HERE).readProperty_string () COMMA_SOURCE_FILE ("enumeration.ggs", 123)).boolEnum () ;
            if (kBoolTrue == test_3) {
              TC_Array <C_FixItDescription> fixItArray4 ;
              inCompiler->emitSemanticError (enumerator_4646.current_mValue_30_ (HERE).readProperty_location (), GALGAS_string ("Duplicated constant"), fixItArray4  COMMA_SOURCE_FILE ("enumeration.ggs", 124)) ;
            }
          }
          var_definedConstantNameSet_4533.addAssign_operation (enumerator_4646.current_mValue_30_ (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("enumeration.ggs", 126)) ;
          enumerator_4646.gotoNextObject () ;
        }
        const GALGAS_enumerationDeclarationAST temp_5 = this ;
        cEnumerator_lstringlist enumerator_4988 (temp_5.readProperty_mEnumConstantNameList (), kENUMERATION_UP) ;
        while (enumerator_4988.hasCurrentObject ()) {
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = var_definedConstantNameSet_4533.getter_hasKey (enumerator_4988.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("enumeration.ggs", 129)).operator_not (SOURCE_FILE ("enumeration.ggs", 129)).boolEnum () ;
            if (kBoolTrue == test_6) {
              TC_Array <C_FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (enumerator_4378.current_mFunctionName (HERE).readProperty_location (), GALGAS_string ("No association for '").add_operation (enumerator_4988.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 130)).add_operation (GALGAS_string ("' constant"), inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 130)), fixItArray7  COMMA_SOURCE_FILE ("enumeration.ggs", 130)) ;
            }
          }
          enumerator_4988.gotoNextObject () ;
        }
        {
        var_enumFuncMap_4328.setter_insertKey (enumerator_4378.current_mFunctionName (HERE), var_associationSortedList_4600, inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 133)) ;
        }
      }
    }
    enumerator_4378.gotoNextObject () ;
  }
  {
  const GALGAS_enumerationDeclarationAST temp_8 = this ;
  const GALGAS_enumerationDeclarationAST temp_9 = this ;
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (temp_8.readProperty_mClassName (), GALGAS_classKind::constructor_atomic (GALGAS_typeKind::constructor_enumType (temp_9.readProperty_mClassName ().readProperty_string (), var_enumConstantMap_4180, var_enumFuncMap_4328  COMMA_SOURCE_FILE ("enumeration.ggs", 138))  COMMA_SOURCE_FILE ("enumeration.ggs", 138)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("enumeration.ggs", 139)), GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("enumeration.ggs", 140)), GALGAS_propertyGenerationList::constructor_emptyList (SOURCE_FILE ("enumeration.ggs", 141)), inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 136)) ;
  }
  const GALGAS_enumerationDeclarationAST temp_10 = this ;
  const GALGAS_enumerationDeclarationAST temp_11 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_enumForGeneration::constructor_new (temp_10.readProperty_mClassName ().readProperty_string (), temp_11.readProperty_mEnumConstantNameList (), var_enumFuncMap_4328  COMMA_SOURCE_FILE ("enumeration.ggs", 144))  COMMA_SOURCE_FILE ("enumeration.ggs", 144)) ;
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
      GALGAS_string var_s_6794 = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumGenerationInSwift (inCompiler, temp_2.readProperty_mEnumName (), temp_3.readProperty_mEnumConstantList (), temp_4.readProperty_mEnumFuncMap () COMMA_SOURCE_FILE ("enumeration.ggs", 179))) ;
      const GALGAS_enumForGeneration temp_5 = this ;
      GALGAS_string var_fileName_6957 = GALGAS_string ("enum-").add_operation (temp_5.readProperty_mEnumName (), inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 184)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 184)) ;
      ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_6957  COMMA_SOURCE_FILE ("enumeration.ggs", 185)) ;
      {
      GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_6957, var_s_6794, inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 186)) ;
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
  GALGAS_actionMap var_actionMap_5426 ;
  {
  const GALGAS_entityDeclarationAST temp_0 = this ;
  routine_buildActionMap (temp_0.readProperty_mActionDeclarationList (), var_actionMap_5426, inCompiler  COMMA_SOURCE_FILE ("entity.ggs", 159)) ;
  }
  {
  const GALGAS_entityDeclarationAST temp_1 = this ;
  const GALGAS_entityDeclarationAST temp_2 = this ;
  const GALGAS_entityDeclarationAST temp_3 = this ;
  const GALGAS_entityDeclarationAST temp_4 = this ;
  const GALGAS_entityDeclarationAST temp_5 = this ;
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (temp_1.readProperty_mClassName (), GALGAS_classKind::constructor_entity (temp_2.readProperty_mSuperEntityName ().readProperty_string (), temp_3.readProperty_mIsGraphicEntity (), temp_4.readProperty_mIsAbstract (), temp_5.readProperty_mHandlingOpposite ()  COMMA_SOURCE_FILE ("entity.ggs", 162)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("entity.ggs", 168)), var_actionMap_5426, GALGAS_propertyGenerationList::constructor_emptyList (SOURCE_FILE ("entity.ggs", 170)), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 160)) ;
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
      GALGAS_propertyMap var_inheritedPropertyMap_6262 ;
      const GALGAS_entityDeclarationAST temp_2 = this ;
      GALGAS_classKind joker_6216 ; // Joker input parameter
      GALGAS_actionMap joker_6270_2 ; // Joker input parameter
      GALGAS_propertyGenerationList joker_6270_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_2.readProperty_mSuperEntityName (), joker_6216, var_inheritedPropertyMap_6262, joker_6270_2, joker_6270_1, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 180)) ;
      GALGAS_propertyMap var_propertyMap_6437 ;
      const GALGAS_entityDeclarationAST temp_3 = this ;
      GALGAS_classKind joker_6400 ; // Joker input parameter
      GALGAS_actionMap joker_6445_2 ; // Joker input parameter
      GALGAS_propertyGenerationList joker_6445_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_3.readProperty_mClassName (), joker_6400, var_propertyMap_6437, joker_6445_2, joker_6445_1, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 187)) ;
      GALGAS_propertyMap var_newPropertyMap_6500 = var_inheritedPropertyMap_6262 ;
      cEnumerator_propertyMap enumerator_6666 (var_propertyMap_6437, kENUMERATION_UP) ;
      while (enumerator_6666.hasCurrentObject ()) {
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = enumerator_6666.current_mIsOverriding (HERE).boolEnum () ;
          if (kBoolTrue == test_4) {
            GALGAS_propertyKind joker_6760_3 ; // Joker input parameter
            GALGAS_actionMap joker_6760_2 ; // Joker input parameter
            GALGAS_bool joker_6760_1 ; // Joker input parameter
            var_inheritedPropertyMap_6262.method_searchKey (enumerator_6666.current_lkey (HERE), joker_6760_3, joker_6760_2, joker_6760_1, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 200)) ;
          }
        }
        if (kBoolFalse == test_4) {
          {
          var_newPropertyMap_6500.setter_insertKey (enumerator_6666.current_lkey (HERE), enumerator_6666.current_mKind (HERE), enumerator_6666.current_mActionMap (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 203)) ;
          }
        }
        enumerator_6666.gotoNextObject () ;
      }
      const GALGAS_entityDeclarationAST temp_5 = this ;
      cMapElement_classMap * objectArray_6941 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_5.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("entity.ggs", 207)) ;
      if (NULL != objectArray_6941) {
        macroValidSharedObject (objectArray_6941, cMapElement_classMap) ;
        objectArray_6941->mProperty_mPropertyMap = var_newPropertyMap_6500 ;
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
  GALGAS_propertyMap var_propertyMap_7493 ;
  GALGAS_propertyGenerationList var_propertyGenerationList_7556 ;
  const GALGAS_entityDeclarationAST temp_0 = this ;
  GALGAS_classKind joker_7458 ; // Joker input parameter
  GALGAS_actionMap joker_7499 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_0.readProperty_mClassName (), joker_7458, var_propertyMap_7493, joker_7499, var_propertyGenerationList_7556, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 219)) ;
  GALGAS_stringset var_overridenTransients_7698 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("entity.ggs", 227)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_entityDeclarationAST temp_2 = this ;
    const GALGAS_entityDeclarationAST temp_3 = this ;
    test_1 = GALGAS_bool (kIsNotEqual, temp_2.readProperty_mSuperEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).operator_and (temp_3.readProperty_mIsAbstract ().operator_not (SOURCE_FILE ("entity.ggs", 228)) COMMA_SOURCE_FILE ("entity.ggs", 228)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_classKind var_superClassKind_7882 ;
      GALGAS_propertyMap var_superPropertyMap_7923 ;
      const GALGAS_entityDeclarationAST temp_4 = this ;
      GALGAS_actionMap joker_7931_2 ; // Joker input parameter
      GALGAS_propertyGenerationList joker_7931_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_4.readProperty_mSuperEntityName (), var_superClassKind_7882, var_superPropertyMap_7923, joker_7931_2, joker_7931_1, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 229)) ;
      switch (var_superClassKind_7882.enumValue ()) {
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
          const cEnumAssociatedValues_classKind_entity * extractPtr_9462 = (const cEnumAssociatedValues_classKind_entity *) (var_superClassKind_7882.unsafePointer ()) ;
          const GALGAS_bool extractedValue_8285_isGraphic = extractPtr_9462->mAssociatedValue1 ;
          const GALGAS_bool extractedValue_8302_isAbstract = extractPtr_9462->mAssociatedValue2 ;
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            const GALGAS_entityDeclarationAST temp_12 = this ;
            test_11 = extractedValue_8285_isGraphic.operator_and (temp_12.readProperty_mIsGraphicEntity ().operator_not (SOURCE_FILE ("entity.ggs", 243)) COMMA_SOURCE_FILE ("entity.ggs", 243)).boolEnum () ;
            if (kBoolTrue == test_11) {
              const GALGAS_entityDeclarationAST temp_13 = this ;
              TC_Array <C_FixItDescription> fixItArray14 ;
              inCompiler->emitSemanticError (temp_13.readProperty_mClassName ().readProperty_location (), GALGAS_string ("this entity should be declared with 'graphic', as super entity is graphic"), fixItArray14  COMMA_SOURCE_FILE ("entity.ggs", 244)) ;
            }
          }
          enumGalgasBool test_15 = kBoolTrue ;
          if (kBoolTrue == test_15) {
            const GALGAS_entityDeclarationAST temp_16 = this ;
            test_15 = extractedValue_8302_isAbstract.operator_and (temp_16.readProperty_mIsAbstract ().operator_not (SOURCE_FILE ("entity.ggs", 246)) COMMA_SOURCE_FILE ("entity.ggs", 246)).boolEnum () ;
            if (kBoolTrue == test_15) {
              cEnumerator_propertyMap enumerator_8615 (var_superPropertyMap_7923, kENUMERATION_UP) ;
              while (enumerator_8615.hasCurrentObject ()) {
                enumGalgasBool test_17 = kBoolTrue ;
                if (kBoolTrue == test_17) {
                  test_17 = extensionGetter_isAbstract (enumerator_8615.current (HERE), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 248)).boolEnum () ;
                  if (kBoolTrue == test_17) {
                    enumGalgasBool test_18 = kBoolTrue ;
                    if (kBoolTrue == test_18) {
                      test_18 = var_propertyMap_7493.getter_hasKey (enumerator_8615.current (HERE).readProperty_lkey ().readProperty_string () COMMA_SOURCE_FILE ("entity.ggs", 249)).boolEnum () ;
                      if (kBoolTrue == test_18) {
                        var_overridenTransients_7698.addAssign_operation (enumerator_8615.current (HERE).readProperty_lkey ().readProperty_string ()  COMMA_SOURCE_FILE ("entity.ggs", 250)) ;
                        GALGAS_propertyKind var_propertyKind_8884 ;
                        GALGAS_actionMap joker_8886_2 ; // Joker input parameter
                        GALGAS_bool joker_8886_1 ; // Joker input parameter
                        var_propertyMap_7493.method_searchKey (enumerator_8615.current (HERE).readProperty_lkey (), var_propertyKind_8884, joker_8886_2, joker_8886_1, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 251)) ;
                        GALGAS_string var_typeName_8916 = extensionGetter_typeName (var_propertyKind_8884, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 252)) ;
                        GALGAS_string var_superTypeName_8975 = extensionGetter_typeName (enumerator_8615.current (HERE).readProperty_mKind (), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 253)) ;
                        enumGalgasBool test_19 = kBoolTrue ;
                        if (kBoolTrue == test_19) {
                          test_19 = GALGAS_bool (kIsNotEqual, var_typeName_8916.objectCompare (var_superTypeName_8975)).boolEnum () ;
                          if (kBoolTrue == test_19) {
                            TC_Array <C_FixItDescription> fixItArray20 ;
                            inCompiler->emitSemanticError (var_propertyMap_7493.getter_locationForKey (enumerator_8615.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 255)), GALGAS_string ("type '").add_operation (var_superTypeName_8975, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 256)).add_operation (GALGAS_string ("' is required by declaration in super entity"), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 256)), fixItArray20  COMMA_SOURCE_FILE ("entity.ggs", 255)) ;
                          }
                        }
                      }
                    }
                    if (kBoolFalse == test_18) {
                      const GALGAS_entityDeclarationAST temp_21 = this ;
                      TC_Array <C_FixItDescription> fixItArray22 ;
                      inCompiler->emitSemanticError (temp_21.readProperty_mClassName ().readProperty_location (), GALGAS_string ("transient '").add_operation (enumerator_8615.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 260)).add_operation (GALGAS_string ("' should be defined, it is declared abstract in super entity"), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 260)), fixItArray22  COMMA_SOURCE_FILE ("entity.ggs", 259)) ;
                    }
                  }
                }
                enumerator_8615.gotoNextObject () ;
              }
            }
          }
        }
        break ;
      }
    }
  }
  GALGAS_bool var_canCopyAndPaste_5F_option_9526 = GALGAS_bool (false) ;
  GALGAS_bool var_cannotBeDeleted_5F_option_9563 = GALGAS_bool (false) ;
  const GALGAS_entityDeclarationAST temp_23 = this ;
  cEnumerator_lstringlist enumerator_9595 (temp_23.readProperty_mGraphicOptionArray (), kENUMERATION_UP) ;
  while (enumerator_9595.hasCurrentObject ()) {
    enumGalgasBool test_24 = kBoolTrue ;
    if (kBoolTrue == test_24) {
      test_24 = GALGAS_bool (kIsEqual, enumerator_9595.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("canCopyAndPaste"))).boolEnum () ;
      if (kBoolTrue == test_24) {
        enumGalgasBool test_25 = kBoolTrue ;
        if (kBoolTrue == test_25) {
          test_25 = var_canCopyAndPaste_5F_option_9526.boolEnum () ;
          if (kBoolTrue == test_25) {
            TC_Array <C_FixItDescription> fixItArray26 ;
            inCompiler->emitSemanticError (enumerator_9595.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated option"), fixItArray26  COMMA_SOURCE_FILE ("entity.ggs", 274)) ;
          }
        }
        var_canCopyAndPaste_5F_option_9526 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_24) {
      enumGalgasBool test_27 = kBoolTrue ;
      if (kBoolTrue == test_27) {
        test_27 = GALGAS_bool (kIsEqual, enumerator_9595.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("cannotBeDeleted"))).boolEnum () ;
        if (kBoolTrue == test_27) {
          enumGalgasBool test_28 = kBoolTrue ;
          if (kBoolTrue == test_28) {
            test_28 = var_cannotBeDeleted_5F_option_9563.boolEnum () ;
            if (kBoolTrue == test_28) {
              TC_Array <C_FixItDescription> fixItArray29 ;
              inCompiler->emitSemanticError (enumerator_9595.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated option"), fixItArray29  COMMA_SOURCE_FILE ("entity.ggs", 279)) ;
            }
          }
          var_cannotBeDeleted_5F_option_9563 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_27) {
        TC_Array <C_FixItDescription> fixItArray30 ;
        appendFixItActions (fixItArray30, kFixItReplace, GALGAS_string ("acceptedTranslation")) ;
        appendFixItActions (fixItArray30, kFixItReplace, GALGAS_string ("canCopyAndPaste")) ;
        appendFixItActions (fixItArray30, kFixItReplace, GALGAS_string ("cannotBeDeleted")) ;
        inCompiler->emitSemanticError (enumerator_9595.current_mValue (HERE).readProperty_location (), GALGAS_string ("unkown graphic option"), fixItArray30  COMMA_SOURCE_FILE ("entity.ggs", 283)) ;
      }
    }
    enumerator_9595.gotoNextObject () ;
  }
  GALGAS_bool var_hasSubClass_10248 = GALGAS_bool (false) ;
  cEnumerator_classMap enumerator_10310 (ioArgument_ioSemanticContext.readProperty_mClassMap (), kENUMERATION_UP) ;
  bool bool_31 = var_hasSubClass_10248.operator_not (SOURCE_FILE ("entity.ggs", 292)).isValidAndTrue () ;
  if (enumerator_10310.hasCurrentObject () && bool_31) {
    while (enumerator_10310.hasCurrentObject () && bool_31) {
      enumGalgasBool test_32 = kBoolTrue ;
      if (kBoolTrue == test_32) {
        test_32 = enumerator_10310.current (HERE).readProperty_mClassKind ().getter_isEntity (SOURCE_FILE ("entity.ggs", 293)).boolEnum () ;
        if (kBoolTrue == test_32) {
          GALGAS_string var_superEntityName_10467 ;
          GALGAS_bool joker_10469_3 ; // Joker input parameter
          GALGAS_bool joker_10469_2 ; // Joker input parameter
          GALGAS_bool joker_10469_1 ; // Joker input parameter
          enumerator_10310.current (HERE).readProperty_mClassKind ().method_entity (var_superEntityName_10467, joker_10469_3, joker_10469_2, joker_10469_1, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 294)) ;
          const GALGAS_entityDeclarationAST temp_33 = this ;
          var_hasSubClass_10248 = GALGAS_bool (kIsEqual, temp_33.readProperty_mClassName ().readProperty_string ().objectCompare (var_superEntityName_10467)) ;
        }
      }
      enumerator_10310.gotoNextObject () ;
      if (enumerator_10310.hasCurrentObject ()) {
        bool_31 = var_hasSubClass_10248.operator_not (SOURCE_FILE ("entity.ggs", 292)).isValidAndTrue () ;
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
  ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_entityForGeneration::constructor_new (temp_36.readProperty_mClassName ().readProperty_string (), temp_37.readProperty_mSuperEntityName ().readProperty_string (), temp_38.readProperty_mHandlingOpposite (), var_propertyGenerationList_7556, temp_39.readProperty_mSignatureList (), temp_40.readProperty_mIsGraphicEntity (), temp_41.readProperty_mIsAbstract (), var_overridenTransients_7698, temp_42.readProperty_mExternSwiftDelegateList (), var_hasSubClass_10248, var_canCopyAndPaste_5F_option_9526, var_cannotBeDeleted_5F_option_9563  COMMA_SOURCE_FILE ("entity.ggs", 302))  COMMA_SOURCE_FILE ("entity.ggs", 302)) ;
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
  GALGAS_atomicPropertyGenerationList var_atomicPropertyGenerationList_13084 = GALGAS_atomicPropertyGenerationList::constructor_emptyList (SOURCE_FILE ("entity.ggs", 357)) ;
  GALGAS_transientPropertyGenerationList var_transientPropertyGenerationList_13160 = GALGAS_transientPropertyGenerationList::constructor_emptyList (SOURCE_FILE ("entity.ggs", 358)) ;
  GALGAS_computedPropertyGenerationList var_computedPropertyGenerationList_13234 = GALGAS_computedPropertyGenerationList::constructor_emptyList (SOURCE_FILE ("entity.ggs", 359)) ;
  GALGAS_toOnePropertyGenerationList var_toOnePropertyGenerationList_13302 = GALGAS_toOnePropertyGenerationList::constructor_emptyList (SOURCE_FILE ("entity.ggs", 360)) ;
  GALGAS_toManyPropertyGenerationList var_toManyPropertyGenerationList_13372 = GALGAS_toManyPropertyGenerationList::constructor_emptyList (SOURCE_FILE ("entity.ggs", 361)) ;
  GALGAS_atomicProxyGenerationList var_proxyGenerationList_13430 = GALGAS_atomicProxyGenerationList::constructor_emptyList (SOURCE_FILE ("entity.ggs", 362)) ;
  GALGAS_toManyProxyGenerationList var_toManyProxyGenerationList_13494 = GALGAS_toManyProxyGenerationList::constructor_emptyList (SOURCE_FILE ("entity.ggs", 363)) ;
  const GALGAS_entityForGeneration temp_0 = this ;
  cEnumerator_propertyGenerationList enumerator_13515 (temp_0.readProperty_mPropertyGenerationList (), kENUMERATION_UP) ;
  while (enumerator_13515.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      GALGAS_atomicPropertyGeneration var_atomicProperty_13577 (dynamic_cast <const cPtr_atomicPropertyGeneration *> (enumerator_13515.current_mProperty (HERE).ptr ())) ;
      if (NULL == var_atomicProperty_13577.ptr ()) {
        test_1 = kBoolFalse ;
      }
      if (kBoolTrue == test_1) {
        var_atomicPropertyGenerationList_13084.addAssign_operation (var_atomicProperty_13577  COMMA_SOURCE_FILE ("entity.ggs", 366)) ;
      }
    }
    if (kBoolFalse == test_1) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_transientPropertyGeneration var_transientProperty_13708 (dynamic_cast <const cPtr_transientPropertyGeneration *> (enumerator_13515.current_mProperty (HERE).ptr ())) ;
        if (NULL == var_transientProperty_13708.ptr ()) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          var_transientPropertyGenerationList_13160.addAssign_operation (var_transientProperty_13708  COMMA_SOURCE_FILE ("entity.ggs", 368)) ;
        }
      }
      if (kBoolFalse == test_2) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          GALGAS_computedPropertyGeneration var_computedProperty_13847 (dynamic_cast <const cPtr_computedPropertyGeneration *> (enumerator_13515.current_mProperty (HERE).ptr ())) ;
          if (NULL == var_computedProperty_13847.ptr ()) {
            test_3 = kBoolFalse ;
          }
          if (kBoolTrue == test_3) {
            var_computedPropertyGenerationList_13234.addAssign_operation (var_computedProperty_13847  COMMA_SOURCE_FILE ("entity.ggs", 370)) ;
          }
        }
        if (kBoolFalse == test_3) {
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            GALGAS_toManyProxyGeneration var_toManyProxy_13978 (dynamic_cast <const cPtr_toManyProxyGeneration *> (enumerator_13515.current_mProperty (HERE).ptr ())) ;
            if (NULL == var_toManyProxy_13978.ptr ()) {
              test_4 = kBoolFalse ;
            }
            if (kBoolTrue == test_4) {
              var_toManyProxyGenerationList_13494.addAssign_operation (var_toManyProxy_13978  COMMA_SOURCE_FILE ("entity.ggs", 372)) ;
            }
          }
          if (kBoolFalse == test_4) {
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              GALGAS_atomicProxyGeneration var_proxyProperty_14096 (dynamic_cast <const cPtr_atomicProxyGeneration *> (enumerator_13515.current_mProperty (HERE).ptr ())) ;
              if (NULL == var_proxyProperty_14096.ptr ()) {
                test_5 = kBoolFalse ;
              }
              if (kBoolTrue == test_5) {
                var_proxyGenerationList_13430.addAssign_operation (var_proxyProperty_14096  COMMA_SOURCE_FILE ("entity.ggs", 374)) ;
              }
            }
            if (kBoolFalse == test_5) {
              enumGalgasBool test_6 = kBoolTrue ;
              if (kBoolTrue == test_6) {
                GALGAS_toOnePropertyGeneration var_toOneProperty_14210 (dynamic_cast <const cPtr_toOnePropertyGeneration *> (enumerator_13515.current_mProperty (HERE).ptr ())) ;
                if (NULL == var_toOneProperty_14210.ptr ()) {
                  test_6 = kBoolFalse ;
                }
                if (kBoolTrue == test_6) {
                  var_toOnePropertyGenerationList_13302.addAssign_operation (var_toOneProperty_14210  COMMA_SOURCE_FILE ("entity.ggs", 376)) ;
                }
              }
              if (kBoolFalse == test_6) {
                enumGalgasBool test_7 = kBoolTrue ;
                if (kBoolTrue == test_7) {
                  GALGAS_toManyPropertyGeneration var_toOneProperty_14334 (dynamic_cast <const cPtr_toManyPropertyGeneration *> (enumerator_13515.current_mProperty (HERE).ptr ())) ;
                  if (NULL == var_toOneProperty_14334.ptr ()) {
                    test_7 = kBoolFalse ;
                  }
                  if (kBoolTrue == test_7) {
                    var_toManyPropertyGenerationList_13372.addAssign_operation (var_toOneProperty_14334  COMMA_SOURCE_FILE ("entity.ggs", 378)) ;
                  }
                }
              }
            }
          }
        }
      }
    }
    enumerator_13515.gotoNextObject () ;
  }
  GALGAS_string var_superEntityName_14468 = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    const GALGAS_entityForGeneration temp_9 = this ;
    test_8 = GALGAS_bool (kIsNotEqual, temp_9.readProperty_mSuperEntityName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_entityForGeneration temp_10 = this ;
      var_superEntityName_14468 = temp_10.readProperty_mSuperEntityName () ;
    }
  }
  if (kBoolFalse == test_8) {
    enumGalgasBool test_11 = kBoolTrue ;
    if (kBoolTrue == test_11) {
      const GALGAS_entityForGeneration temp_12 = this ;
      test_11 = temp_12.readProperty_mIsGraphicEntity ().boolEnum () ;
      if (kBoolTrue == test_11) {
        var_superEntityName_14468 = GALGAS_string ("EBGraphicManagedObject") ;
      }
    }
    if (kBoolFalse == test_11) {
      var_superEntityName_14468 = GALGAS_string ("EBManagedObject") ;
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
  const GALGAS_entityForGeneration temp_23 = this ;
  GALGAS_string var_s_14698 = GALGAS_string (filewrapperTemplate_entityGenerationTemplate_entityImplementationInSwift (inCompiler, temp_13.readProperty_mEntityName (), var_superEntityName_14468, temp_14.readProperty_mPropertyGenerationList (), var_proxyGenerationList_13430, var_toManyProxyGenerationList_13494, var_atomicPropertyGenerationList_13084, var_transientPropertyGenerationList_13160, var_computedPropertyGenerationList_13234, var_toOnePropertyGenerationList_13302, var_toManyPropertyGenerationList_13372, temp_15.readProperty_mSignatureSet (), temp_16.readProperty_mIsGraphicEntity (), temp_17.readProperty_mIsAbstract (), temp_18.readProperty_mOverridenTransients (), temp_19.readProperty_mExternSwiftDelegateList (), temp_20.readProperty_mHasSubEntity (), temp_21.readProperty_mCanCopyAndPaste_5F_option (), temp_22.readProperty_mCannotBeDeleted_5F_option (), constinArgument_inGenerationStruct.readProperty_mToManyClassImplementations ().getter_hasKey (temp_23.readProperty_mEntityName () COMMA_SOURCE_FILE ("entity.ggs", 408)) COMMA_SOURCE_FILE ("entity.ggs", 389))) ;
  const GALGAS_entityForGeneration temp_24 = this ;
  GALGAS_string var_fileName_15418 = GALGAS_string ("entity-").add_operation (temp_24.readProperty_mEntityName (), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 410)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 410)) ;
  ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_15418  COMMA_SOURCE_FILE ("entity.ggs", 411)) ;
  {
  GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_15418, var_s_14698, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 412)) ;
  }
  enumGalgasBool test_25 = kBoolTrue ;
  if (kBoolTrue == test_25) {
    const GALGAS_entityForGeneration temp_26 = this ;
    test_25 = constinArgument_inGenerationStruct.readProperty_mToOneClassImplementations ().getter_hasKey (temp_26.readProperty_mEntityName () COMMA_SOURCE_FILE ("entity.ggs", 417)).boolEnum () ;
    if (kBoolTrue == test_25) {
      const GALGAS_entityForGeneration temp_27 = this ;
      const GALGAS_entityForGeneration temp_28 = this ;
      const GALGAS_entityForGeneration temp_29 = this ;
      const GALGAS_entityForGeneration temp_30 = this ;
      const GALGAS_entityForGeneration temp_31 = this ;
      const GALGAS_entityForGeneration temp_32 = this ;
      const GALGAS_entityForGeneration temp_33 = this ;
      const GALGAS_entityForGeneration temp_34 = this ;
      var_s_14698 = GALGAS_string (filewrapperTemplate_entityGenerationTemplate_entityToOneImplementationInSwift (inCompiler, temp_27.readProperty_mEntityName (), var_superEntityName_14468, temp_28.readProperty_mHandlingOpposite (), temp_29.readProperty_mPropertyGenerationList (), var_proxyGenerationList_13430, var_toManyProxyGenerationList_13494, var_atomicPropertyGenerationList_13084, var_transientPropertyGenerationList_13160, var_computedPropertyGenerationList_13234, var_toOnePropertyGenerationList_13302, var_toManyPropertyGenerationList_13372, temp_30.readProperty_mSignatureSet (), temp_31.readProperty_mIsGraphicEntity (), temp_32.readProperty_mIsAbstract (), temp_33.readProperty_mOverridenTransients (), temp_34.readProperty_mExternSwiftDelegateList () COMMA_SOURCE_FILE ("entity.ggs", 418))) ;
    }
  }
  if (kBoolFalse == test_25) {
    var_s_14698 = GALGAS_string ("// Unused code, not generated by EasyBinding compiler\n") ;
  }
  const GALGAS_entityForGeneration temp_35 = this ;
  var_fileName_15418 = GALGAS_string ("toone-").add_operation (temp_35.readProperty_mEntityName (), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 439)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 439)) ;
  ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_15418  COMMA_SOURCE_FILE ("entity.ggs", 440)) ;
  {
  GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_15418, var_s_14698, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 441)) ;
  }
  enumGalgasBool test_36 = kBoolTrue ;
  if (kBoolTrue == test_36) {
    const GALGAS_entityForGeneration temp_37 = this ;
    test_36 = constinArgument_inGenerationStruct.readProperty_mToManyClassImplementations ().getter_hasKey (temp_37.readProperty_mEntityName () COMMA_SOURCE_FILE ("entity.ggs", 446)).boolEnum () ;
    if (kBoolTrue == test_36) {
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
      const GALGAS_entityForGeneration temp_50 = this ;
      var_s_14698 = GALGAS_string (filewrapperTemplate_entityGenerationTemplate_entityToManyImplementationInSwift (inCompiler, temp_38.readProperty_mEntityName (), var_superEntityName_14468, temp_39.readProperty_mHandlingOpposite (), temp_40.readProperty_mPropertyGenerationList (), var_proxyGenerationList_13430, var_toManyProxyGenerationList_13494, var_atomicPropertyGenerationList_13084, var_transientPropertyGenerationList_13160, var_computedPropertyGenerationList_13234, var_toOnePropertyGenerationList_13302, var_toManyPropertyGenerationList_13372, temp_41.readProperty_mSignatureSet (), temp_42.readProperty_mIsGraphicEntity (), temp_43.readProperty_mIsAbstract (), temp_44.readProperty_mOverridenTransients (), temp_45.readProperty_mExternSwiftDelegateList (), constinArgument_inGenerationStruct.readProperty_mGenerateClass_5F_PreferencesArrayOf_5F_ ().getter_hasKey (temp_46.readProperty_mEntityName () COMMA_SOURCE_FILE ("entity.ggs", 464)), constinArgument_inGenerationStruct.readProperty_mGenerateClass_5F_ProxyArrayOf_5F_ ().getter_hasKey (temp_47.readProperty_mEntityName () COMMA_SOURCE_FILE ("entity.ggs", 465)), constinArgument_inGenerationStruct.readProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_ ().getter_hasKey (temp_48.readProperty_mEntityName () COMMA_SOURCE_FILE ("entity.ggs", 466)), constinArgument_inGenerationStruct.readProperty_mGenerateClass_5F_TransientArrayOf_5F_ ().getter_hasKey (temp_49.readProperty_mEntityName () COMMA_SOURCE_FILE ("entity.ggs", 467)), constinArgument_inGenerationStruct.readProperty_mGenerateClass_5F_StoredArrayOf_5F_ ().getter_hasKey (temp_50.readProperty_mEntityName () COMMA_SOURCE_FILE ("entity.ggs", 468)) COMMA_SOURCE_FILE ("entity.ggs", 447))) ;
    }
  }
  if (kBoolFalse == test_36) {
    var_s_14698 = GALGAS_string ("// Unused code, not generated by EasyBinding compiler\n") ;
  }
  const GALGAS_entityForGeneration temp_51 = this ;
  var_fileName_15418 = GALGAS_string ("tomany-").add_operation (temp_51.readProperty_mEntityName (), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 473)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 473)) ;
  ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_15418  COMMA_SOURCE_FILE ("entity.ggs", 474)) ;
  {
  GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_15418, var_s_14698, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 475)) ;
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
    test_0 = GALGAS_bool (kIsStrictSup, constinArgument_inEntityListForGeneration.getter_length (SOURCE_FILE ("entity.ggs", 489)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_fileName_18232 = GALGAS_string ("EBManagedObjectFactory.swift") ;
      ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_18232  COMMA_SOURCE_FILE ("entity.ggs", 491)) ;
      GALGAS_string var_s_18311 = GALGAS_string (filewrapperTemplate_entityGenerationTemplate_managedObjectFactory (inCompiler, constinArgument_inEntityListForGeneration COMMA_SOURCE_FILE ("entity.ggs", 492))) ;
      {
      GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_18232, var_s_18311, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 493)) ;
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
                                                                                        const GALGAS_bool & in_OPTION_5F_CannotBeDeleted,
                                                                                        const GALGAS_bool & in_GENERATE_5F_PROPERTY_5F_ACCESS_5F_PROTOCOLS
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nimport AppKit\n\n" ;
  const enumGalgasBool test_0 = in_GENERATE_5F_PROPERTY_5F_ACCESS_5F_PROTOCOLS.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_uint index_428_ (0) ;
    if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
      cEnumerator_atomicPropertyGenerationList enumerator_428 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
      while (enumerator_428.hasCurrentObject ()) {
        result << "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\n@MainActor protocol " ;
        result << in_ENTITY_5F_NAME.stringValue () ;
        result << "_" ;
        result << enumerator_428.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << " : AnyObject {\n  var " ;
        result << enumerator_428.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << " : " ;
        result << extensionGetter_swiftTypeName (enumerator_428.current_mProperty (HERE).readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 13)).stringValue () ;
        result << " { get }\n}\n\n" ;
        index_428_.increment () ;
        enumerator_428.gotoNextObject () ;
      }
    }
  }else if (kBoolFalse == test_0) {
  }
  const enumGalgasBool test_1 = in_GENERATE_5F_PROPERTY_5F_ACCESS_5F_PROTOCOLS.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_uint index_809_ (0) ;
    if (in_PROXY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
      cEnumerator_atomicProxyGenerationList enumerator_809 (in_PROXY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
      while (enumerator_809.hasCurrentObject ()) {
        result << "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\n@MainActor protocol " ;
        result << in_ENTITY_5F_NAME.stringValue () ;
        result << "_" ;
        result << enumerator_809.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << " : AnyObject {\n  var " ;
        result << enumerator_809.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << " : " ;
        result << extensionGetter_swiftTypeName (enumerator_809.current_mProperty (HERE).readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 24)).stringValue () ;
        result << "\? { get }\n}\n\n" ;
        index_809_.increment () ;
        enumerator_809.gotoNextObject () ;
      }
    }
  }else if (kBoolFalse == test_1) {
  }
  const enumGalgasBool test_2 = in_GENERATE_5F_PROPERTY_5F_ACCESS_5F_PROTOCOLS.boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_uint index_1199_ (0) ;
    if (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
      cEnumerator_transientPropertyGenerationList enumerator_1199 (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kENUMERATION_UP) ;
      while (enumerator_1199.hasCurrentObject ()) {
        result << "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\n@MainActor protocol " ;
        result << in_ENTITY_5F_NAME.stringValue () ;
        result << "_" ;
        result << enumerator_1199.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << " : AnyObject {\n  var " ;
        result << enumerator_1199.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << " : " ;
        result << extensionGetter_swiftTypeName (enumerator_1199.current_mProperty (HERE).readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 35)).stringValue () ;
        result << "\? { get }\n}\n\n" ;
        index_1199_.increment () ;
        enumerator_1199.gotoNextObject () ;
      }
    }
  }else if (kBoolFalse == test_2) {
  }
  result << "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n//    " ;
  result << GALGAS_string ("Entity: ").add_operation (in_ENTITY_5F_NAME, inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 42)).stringValue () ;
  result << "\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\n" ;
  const enumGalgasBool test_3 = in_HAS_5F_SUB_5F_ENTITY.operator_not (SOURCE_FILE ("entity.swift.galgasTemplate", 46)).boolEnum () ;
  if (kBoolTrue == test_3) {
    result << "final " ;
  }else if (kBoolFalse == test_3) {
  }
  result << "class " ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << " : " ;
  result << in_SUPER_5F_CLASS_5F_NAME.stringValue () ;
  const enumGalgasBool test_4 = in_GENERATE_5F_PROPERTY_5F_ACCESS_5F_PROTOCOLS.boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_uint index_1951_ (0) ;
    if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
      cEnumerator_propertyGenerationList enumerator_1951 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
      while (enumerator_1951.hasCurrentObject ()) {
        const enumGalgasBool test_5 = GALGAS_bool (enumerator_1951.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_atomicPropertyGeneration).operator_or (GALGAS_bool (enumerator_1951.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_transientPropertyGeneration) COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 52)).operator_or (GALGAS_bool (enumerator_1951.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_atomicProxyGeneration) COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 52)).boolEnum () ;
        if (kBoolTrue == test_5) {
          result << ",\n         " ;
          result << in_ENTITY_5F_NAME.stringValue () ;
          result << "_" ;
          result << enumerator_1951.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        }else if (kBoolFalse == test_5) {
        }
        index_1951_.increment () ;
        enumerator_1951.gotoNextObject () ;
      }
    }
  }else if (kBoolFalse == test_4) {
  }
  result << " {\n\n" ;
  GALGAS_uint index_2236_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_2236 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_2236.hasCurrentObject ()) {
      result << callExtensionGetter_propertyDeclarationCode ((const cPtr_propertyGeneration *) enumerator_2236.current_mProperty (HERE).ptr (), GALGAS_bool (false), in_GENERATE_5F_PROPERTY_5F_ACCESS_5F_PROTOCOLS, in_OVERRIDEN_5F_TRANSIENTS, inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 61)).stringValue () ;
      index_2236_.increment () ;
      enumerator_2236.gotoNextObject () ;
    }
  }
  result << "  //····················································································································\n  //    init\n  //····················································································································\n\n  required init (_ inUndoManager : UndoManager\?) {\n" ;
  GALGAS_uint index_2705_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_2705 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_2705.hasCurrentObject ()) {
      result << callExtensionGetter_initCode ((const cPtr_propertyGeneration *) enumerator_2705.current_mProperty (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 70)).stringValue () ;
      index_2705_.increment () ;
      enumerator_2705.gotoNextObject () ;
    }
  }
  result << "    super.init (inUndoManager)\n" ;
  GALGAS_uint index_2814_ (0) ;
  if (in_TO_5F_ONE_5F_RELATIONSHIP_5F_LIST.isValid ()) {
    cEnumerator_toOnePropertyGenerationList enumerator_2814 (in_TO_5F_ONE_5F_RELATIONSHIP_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2814.hasCurrentObject ()) {
      result << "    self." ;
      result << enumerator_2814.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_none.mReadModelFunction = { [weak self] in\n      if let uwSelf = self {\n        return .single (uwSelf." ;
      result << enumerator_2814.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_property.propval == nil)\n      }else{\n        return .empty\n      }\n    }\n    self." ;
      result << enumerator_2814.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_property.startsToBeObserved (by: self." ;
      result << enumerator_2814.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_none)\n" ;
      index_2814_.increment () ;
      enumerator_2814.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3248_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_3248 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_3248.hasCurrentObject ()) {
      result << callExtensionGetter_configurationCode ((const cPtr_propertyGeneration *) enumerator_3248.current_mProperty (HERE).ptr (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 85)).stringValue () ;
      index_3248_.increment () ;
      enumerator_3248.gotoNextObject () ;
    }
  }
  result << "  //--- Install undoers and opposite setter for relationships\n" ;
  GALGAS_uint index_3405_ (0) ;
  if (in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST.isValid ()) {
    cEnumerator_toManyPropertyGenerationList enumerator_3405 (in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3405.hasCurrentObject ()) {
      switch (enumerator_3405.current_mProperty (HERE).readProperty_mOption ().enumValue ()) {
      case GALGAS_toManyRelationshipOptionGeneration::kNotBuilt :
        break ;
      case GALGAS_toManyRelationshipOptionGeneration::kEnum_none :
        {
        }
        break ;
      case GALGAS_toManyRelationshipOptionGeneration::kEnum_hasDependance :
        {
          const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasDependance * extractPtr_3594 = (const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasDependance *) (enumerator_3405.current_mProperty (HERE).readProperty_mOption ().unsafePointer ()) ;
          const GALGAS_string extractedValue_3496_masterPropertyName = extractPtr_3594->mAssociatedValue0 ;
          result << "    self." ;
          result << enumerator_3405.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
          result << "_property.setDataProvider (self." ;
          result << extractedValue_3496_masterPropertyName.stringValue () ;
          result << "_property)\n" ;
        }
        break ;
      case GALGAS_toManyRelationshipOptionGeneration::kEnum_hasOpposite :
        {
          const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasOpposite * extractPtr_3918 = (const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasOpposite *) (enumerator_3405.current_mProperty (HERE).readProperty_mOption ().unsafePointer ()) ;
          const GALGAS_string extractedValue_3649_oppositeName = extractPtr_3918->mAssociatedValue0 ;
          result << "    self." ;
          result << enumerator_3405.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
          result << "_property.setOppositeRelationShipFunctions (\n      setter: { [weak self] inObject in if let me = self { inObject." ;
          result << extractedValue_3649_oppositeName.stringValue () ;
          result << "_property.setProp (me) } },\n      resetter: { inObject in inObject." ;
          result << extractedValue_3649_oppositeName.stringValue () ;
          result << "_property.setProp (nil) }\n    )\n" ;
        }
        break ;
      }
      index_3405_.increment () ;
      enumerator_3405.gotoNextObject () ;
    }
  }
  result << "  //--- Register properties for handling signature\n" ;
  GALGAS_uint index_4055_ (0) ;
  if (in_SIGNATURE_5F_SET.isValid ()) {
    cEnumerator_stringset enumerator_4055 (in_SIGNATURE_5F_SET, kENUMERATION_UP) ;
    while (enumerator_4055.hasCurrentObject ()) {
      result << "    self." ;
      result << enumerator_4055.current_key (HERE).stringValue () ;
      result << "_property.setSignatureObserver (observer: self)\n" ;
      index_4055_.increment () ;
      enumerator_4055.gotoNextObject () ;
    }
  }
  result << "  //--- Extern delegates\n" ;
  GALGAS_uint index_4240_idx (0) ;
  if (in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    cEnumerator_externSwiftDelegateList enumerator_4240 (in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kENUMERATION_UP) ;
    while (enumerator_4240.hasCurrentObject ()) {
      result << "    self.mExternDelegate" ;
      result << index_4240_idx.getter_string (SOURCE_FILE ("entity.swift.galgasTemplate", 110)).stringValue () ;
      result << " = " ;
      result << enumerator_4240.current_mExternSwiftDelegateName (HERE).readProperty_string ().stringValue () ;
      result << " (object: self)\n" ;
      index_4240_idx.increment () ;
      enumerator_4240.gotoNextObject () ;
    }
  }
  result << "   }\n  \n  //····················································································································\n  //    Extern delegates\n  //····················································································································\n\n" ;
  GALGAS_uint index_4710_idx (0) ;
  if (in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    cEnumerator_externSwiftDelegateList enumerator_4710 (in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kENUMERATION_UP) ;
    while (enumerator_4710.hasCurrentObject ()) {
      result << "  final var mExternDelegate" ;
      result << index_4710_idx.getter_string (SOURCE_FILE ("entity.swift.galgasTemplate", 120)).stringValue () ;
      result << " : " ;
      result << enumerator_4710.current_mExternSwiftDelegateName (HERE).readProperty_string ().stringValue () ;
      result << "\? = nil\n" ;
      index_4710_idx.increment () ;
      enumerator_4710.gotoNextObject () ;
    }
  }
  result << "\n" ;
  const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, in_SIGNATURE_5F_SET.getter_count (SOURCE_FILE ("entity.swift.galgasTemplate", 124)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_6) {
    result << "  //····················································································································\n  //   computeSignature\n  //····················································································································\n\n  override func computeSignature () -> UInt32 {\n    var crc = super.computeSignature ()\n" ;
    GALGAS_uint index_5238_ (0) ;
    if (in_SIGNATURE_5F_SET.isValid ()) {
      cEnumerator_stringset enumerator_5238 (in_SIGNATURE_5F_SET, kENUMERATION_UP) ;
      while (enumerator_5238.hasCurrentObject ()) {
        result << "    crc.accumulate (u32: self." ;
        result << enumerator_5238.current_key (HERE).stringValue () ;
        result << "_property.signature ())\n" ;
        index_5238_.increment () ;
        enumerator_5238.gotoNextObject () ;
      }
    }
    result << "    return crc\n  }\n\n" ;
  }else if (kBoolFalse == test_6) {
  }
  const enumGalgasBool test_7 = in_IS_5F_GRAPHIC_5F_ENTITY.operator_and (in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("entity.swift.galgasTemplate", 140)) COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 140)).boolEnum () ;
  if (kBoolTrue == test_7) {
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
    const enumGalgasBool test_8 = in_OPTION_5F_CanCopyAndPaste.boolEnum () ;
    if (kBoolTrue == test_8) {
      result << "  //····················································································································\n  //  COPY AND PASTE\n  //····················································································································\n\n  override func canCopyAndPaste () -> Bool {\n    return true\n  }\n\n" ;
    }else if (kBoolFalse == test_8) {
    }
    const enumGalgasBool test_9 = in_OPTION_5F_CannotBeDeleted.boolEnum () ;
    if (kBoolTrue == test_9) {
      result << "  //····················································································································\n  //  Can be deleted\n  //····················································································································\n\n  override func canBeDeleted () -> Bool {\n    return false\n  }\n\n" ;
    }else if (kBoolFalse == test_9) {
    }
  }else if (kBoolFalse == test_7) {
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
    result << ") -> Bool >,\n                        addSortObserversCallback inAddSortObserversCallback : (EBModelNotifierEvent) -> Void,\n                        removeSortObserversCallback inRemoveSortObserversCallback : @escaping (EBModelNotifierEvent) -> Void) {\n    if self.mDataProvider !== inProvider {\n      self.mSortObserver\?.removeSortObservers ()\n      self.mSortObserver = nil\n      self.mDataProvider\?.detachClient (self)\n      self.mDataProvider = inProvider\n      self.mIsOrderedBefore = inSortCallBack\n      self.mDataProvider\?.attachClient (self)\n      if inSortCallBack != nil {\n        self.mSortObserver = EBModelNotifierEvent (\n          self,\n          addSortObserversCallback: inAddSortObserversCallback,\n          removeSortObserversCallback: inRemoveSortObserversCallback\n        )\n      }else{\n        self.mInternalArrayValue = EBReferenceArray ()\n      }\n    }\n  }\n\n  //····················································································································\n\n/*  func resetDataProvider () {\n    if self.mDataProvider != nil {\n      self.mSortObserver = nil\n      self.mDataProvider\?.detachClient (self)\n      self.mDataProvider = nil\n      self.mIsOrderedBefore = nil\n    }\n  } */\n\n  //····················································································································\n\n  override func notifyModelDidChange () {\n    self.mModelEvent.observedObjectDidChange ()\n    self.mModelArrayShouldBeComputed = true\n    super.notifyModelDidChange ()\n  }\n\n  //····················································································································\n\n  private final func computeModelArray () {\n    if self.mModelArrayShouldBeComputed {\n      self.mModelArrayShouldBeComputed = false\n      let newArray : EBReferenceArray <" ;
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
    GALGAS_uint index_35380_ (0) ;
    if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
      cEnumerator_atomicPropertyGenerationList enumerator_35380 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
      while (enumerator_35380.hasCurrentObject ()) {
        result << "    toMany_" ;
        result << enumerator_35380.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << "_StartsToBeObserved (by: self.mObserverForWritingPreferences)\n" ;
        index_35380_.increment () ;
        enumerator_35380.gotoNextObject () ;
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
  GALGAS_actionMap var_actionMap_5924 ;
  {
  const GALGAS_autoLayoutDocumentDeclarationAST temp_0 = this ;
  routine_buildActionMap (temp_0.readProperty_mActionDeclarationList (), var_actionMap_5924, inCompiler  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 158)) ;
  }
  {
  const GALGAS_autoLayoutDocumentDeclarationAST temp_1 = this ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (temp_1.readProperty_mClassName (), GALGAS_classKind::constructor_document (temp_2.readProperty_mRootEntityName ()  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 161)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("document-auto-layout.ggs", 162)), var_actionMap_5924, GALGAS_propertyGenerationList::constructor_emptyList (SOURCE_FILE ("document-auto-layout.ggs", 164)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 159)) ;
  }
  cEnumerator_actionMap enumerator_6091 (var_actionMap_5924, kENUMERATION_UP) ;
  while (enumerator_6091.hasCurrentObject ()) {
    const GALGAS_autoLayoutDocumentDeclarationAST temp_3 = this ;
    ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_actionFileGeneration::constructor_new (temp_3.readProperty_mClassName ().readProperty_string (), enumerator_6091.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 167))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 167)) ;
    enumerator_6091.gotoNextObject () ;
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
  GALGAS_propertyMap var_preferencesPropertyMap_6639 ;
  GALGAS_classKind joker_6606 ; // Joker input parameter
  GALGAS_actionMap joker_6645_2 ; // Joker input parameter
  GALGAS_propertyGenerationList joker_6645_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 181)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("document-auto-layout.ggs", 181))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 181)), joker_6606, var_preferencesPropertyMap_6639, joker_6645_2, joker_6645_1, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 180)) ;
  GALGAS_propertyMap var_documentPropertyMap_6799 ;
  GALGAS_actionMap var_documentActionMap_6826 ;
  GALGAS_propertyGenerationList var_documentPropertyGenerationList_6866 ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_0 = this ;
  GALGAS_classKind joker_6769 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (GALGAS_lstring::constructor_new (temp_0.readProperty_mClassName ().readProperty_string (), GALGAS_location::constructor_nowhere (SOURCE_FILE ("document-auto-layout.ggs", 188))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 188)), joker_6769, var_documentPropertyMap_6799, var_documentActionMap_6826, var_documentPropertyGenerationList_6866, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 187)) ;
  GALGAS_propertyMap var_rootPropertyMap_7003 ;
  GALGAS_actionMap var_rootActionMap_7033 ;
  GALGAS_propertyGenerationList var_rootPropertyGenerationList_7076 ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_1 = this ;
  GALGAS_classKind joker_6977 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mRootEntityName (), joker_6977, var_rootPropertyMap_7003, var_rootActionMap_7033, var_rootPropertyGenerationList_7076, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 195)) ;
  GALGAS_regularBindingsGenerationList var_regularBindingsGenerationList_7440 ;
  GALGAS_multipleBindingGenerationList var_multipleBindingGenerationList_7506 ;
  GALGAS_actionBindingListForGeneration var_actionBindingListForGeneration_7578 ;
  GALGAS_decoratedOutletMap var_outletMap_7617 ;
  GALGAS_tableViewBindingGenerationList var_tableViewBindingGenerationList_7689 ;
  GALGAS_ebViewGraphicControllerBindingGenerationList var_ebViewGraphicControllerBindingGenerationList_7789 ;
  {
  const GALGAS_autoLayoutDocumentDeclarationAST temp_2 = this ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_3 = this ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_4 = this ;
  routine_analyzeOutlets (GALGAS_bool (false), var_rootPropertyMap_7003, var_preferencesPropertyMap_6639, temp_2.readProperty_mRootEntityName ().readProperty_string (), ioArgument_ioSemanticContext, temp_3.readProperty_mOutletDeclarationList (), var_documentPropertyMap_6799, var_documentActionMap_6826, temp_4.readProperty_mClassName ().readProperty_string (), ioArgument_ioGeneration, var_regularBindingsGenerationList_7440, var_multipleBindingGenerationList_7506, var_actionBindingListForGeneration_7578, var_outletMap_7617, var_tableViewBindingGenerationList_7689, var_ebViewGraphicControllerBindingGenerationList_7789, inCompiler  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 203)) ;
  }
  const GALGAS_autoLayoutDocumentDeclarationAST temp_5 = this ;
  cEnumerator_arrayControllerBindingListAST enumerator_7862 (temp_5.readProperty_mArrayControllerBindingListAST (), kENUMERATION_UP) ;
  while (enumerator_7862.hasCurrentObject ()) {
    switch (enumerator_7862.current_mHiddenSelectionViewBindingDescriptor (HERE).enumValue ()) {
    case GALGAS_multipleBindingDescriptor::kNotBuilt:
      break ;
    case GALGAS_multipleBindingDescriptor::kEnum_noBinding:
      {
      }
      break ;
    case GALGAS_multipleBindingDescriptor::kEnum_binding:
      {
        const cEnumAssociatedValues_multipleBindingDescriptor_binding * extractPtr_8608 = (const cEnumAssociatedValues_multipleBindingDescriptor_binding *) (enumerator_7862.current_mHiddenSelectionViewBindingDescriptor (HERE).unsafePointer ()) ;
        const GALGAS_abstractBooleanMultipleBindingExpressionAST extractedValue_8039_expression = extractPtr_8608->mAssociatedValue0 ;
        GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_8316 ;
        GALGAS_typeKind var_type_8344 ;
        GALGAS_location var_errorLocation_8381 ;
        callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_8039_expression.ptr (), GALGAS_bool (false), var_rootPropertyMap_7003, ioArgument_ioSemanticContext, var_documentPropertyMap_6799, var_preferencesPropertyMap_6639, var_hiddenExpression_8316, var_type_8344, var_errorLocation_8381, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 227)) ;
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = var_type_8344.getter_isBoolType (SOURCE_FILE ("document-auto-layout.ggs", 237)).operator_not (SOURCE_FILE ("document-auto-layout.ggs", 237)).boolEnum () ;
          if (kBoolTrue == test_6) {
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (var_errorLocation_8381, GALGAS_string ("expression is not boolean"), fixItArray7  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 238)) ;
          }
        }
        var_multipleBindingGenerationList_7506.addAssign_operation (enumerator_7862.current_mControllerName (HERE).readProperty_string (), GALGAS_string ("hidden"), var_hiddenExpression_8316  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 240)) ;
      }
      break ;
    }
    enumerator_7862.gotoNextObject () ;
  }
  GALGAS_autoLayoutViewDeclarationMap var_viewDeclarationMap_8718 = GALGAS_autoLayoutViewDeclarationMap::constructor_emptyMap (SOURCE_FILE ("document-auto-layout.ggs", 247)) ;
  GALGAS_viewGenerationList var_viewGenerationList_8768 = GALGAS_viewGenerationList::constructor_emptyList (SOURCE_FILE ("document-auto-layout.ggs", 248)) ;
  GALGAS_implicitViewFunctionGenerationList var_implicitViewFunctionGenerationList_8850 = GALGAS_implicitViewFunctionGenerationList::constructor_emptyList (SOURCE_FILE ("document-auto-layout.ggs", 249)) ;
  GALGAS_autoLayoutConfiguratorMap var_configuratorMap_8904 = GALGAS_autoLayoutConfiguratorMap::constructor_emptyMap (SOURCE_FILE ("document-auto-layout.ggs", 250)) ;
  GALGAS_autoLayoutOutletMap var_autoLayoutOutletMap_8956 = GALGAS_autoLayoutOutletMap::constructor_emptyMap (SOURCE_FILE ("document-auto-layout.ggs", 251)) ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_8 = this ;
  cEnumerator_astViewDeclarationList enumerator_8993 (temp_8.readProperty_mViewDeclarationList (), kENUMERATION_UP) ;
  while (enumerator_8993.hasCurrentObject ()) {
    {
    var_viewDeclarationMap_8718.setter_insertKey (enumerator_8993.current_mViewName (HERE), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 253)) ;
    }
    GALGAS_abstractViewGeneration var_viewGeneration_9475 ;
    const GALGAS_autoLayoutDocumentDeclarationAST temp_9 = this ;
    callExtensionMethod_checkView ((cPtr_astAbstractViewDeclaration *) enumerator_8993.current_mView (HERE).ptr (), enumerator_8993.current_mViewName (HERE).readProperty_string (), var_viewDeclarationMap_8718, GALGAS_bool (false), var_rootPropertyMap_7003, var_preferencesPropertyMap_6639, ioArgument_ioSemanticContext, var_documentPropertyMap_6799, var_documentActionMap_6826, temp_9.readProperty_mClassName ().readProperty_string (), ioArgument_ioSemanticContext.readProperty_mClassMap (), var_implicitViewFunctionGenerationList_8850, var_configuratorMap_8904, var_autoLayoutOutletMap_8956, var_viewGeneration_9475, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 254)) ;
    var_viewGenerationList_8768.addAssign_operation (enumerator_8993.current_mViewName (HERE).readProperty_string (), var_viewGeneration_9475  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 270)) ;
    enumerator_8993.gotoNextObject () ;
  }
  const GALGAS_autoLayoutDocumentDeclarationAST temp_10 = this ;
  var_viewDeclarationMap_8718.method_searchKey (temp_10.readProperty_mMainViewName (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 272)) ;
  ioArgument_ioGeneration.setter_setMGenerateEBManagedAutoLayoutDocumentSwift (GALGAS_bool (true) COMMA_SOURCE_FILE ("document-auto-layout.ggs", 299)) ;
  GALGAS_autoLayoutOutletLinkerGenerationList var_outletLinkerGenerationList_10683 = GALGAS_autoLayoutOutletLinkerGenerationList::constructor_emptyList (SOURCE_FILE ("document-auto-layout.ggs", 301)) ;
  GALGAS_stringset var_linkerNameSet_10719 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("document-auto-layout.ggs", 302)) ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_11 = this ;
  cEnumerator_astAutoLayoutOutletLinkerList enumerator_10756 (temp_11.readProperty_mOutletLinkerList (), kENUMERATION_UP) ;
  while (enumerator_10756.hasCurrentObject ()) {
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = var_linkerNameSet_10719.getter_hasKey (enumerator_10756.current_mLinkerName (HERE).readProperty_string () COMMA_SOURCE_FILE ("document-auto-layout.ggs", 304)).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_10756.current_mLinkerName (HERE).readProperty_location (), GALGAS_string ("duplicated linker name"), fixItArray13  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 305)) ;
      }
    }
    var_linkerNameSet_10719.addAssign_operation (enumerator_10756.current_mLinkerName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 307)) ;
    GALGAS__32_stringlist var_outletNameAndTypeNameList_10984 = GALGAS__32_stringlist::constructor_emptyList (SOURCE_FILE ("document-auto-layout.ggs", 308)) ;
    cEnumerator_lstringlist enumerator_11009 (enumerator_10756.current_mOutletNameList (HERE), kENUMERATION_UP) ;
    while (enumerator_11009.hasCurrentObject ()) {
      GALGAS_string var_outletTypeName_11099 ;
      GALGAS_bool var_outletIsArray_11125 ;
      var_autoLayoutOutletMap_8956.method_searchKey (enumerator_11009.current_mValue (HERE), var_outletTypeName_11099, var_outletIsArray_11125, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 310)) ;
      var_outletNameAndTypeNameList_10984.addAssign_operation (enumerator_11009.current_mValue (HERE).readProperty_string (), var_outletTypeName_11099  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 311)) ;
      enumerator_11009.gotoNextObject () ;
    }
    var_outletLinkerGenerationList_10683.addAssign_operation (enumerator_10756.current_mLinkerName (HERE).readProperty_string (), var_outletNameAndTypeNameList_10984  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 313)) ;
    enumerator_10756.gotoNextObject () ;
  }
  const GALGAS_autoLayoutDocumentDeclarationAST temp_14 = this ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_15 = this ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_16 = this ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_17 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_autoLayoutDocumentFileGeneration::constructor_new (temp_14.readProperty_mClassName ().readProperty_string (), temp_15.readProperty_mRootEntityName ().readProperty_string (), temp_16.readProperty_mMainViewName ().readProperty_string (), var_documentPropertyGenerationList_6866, var_outletMap_7617, var_autoLayoutOutletMap_8956, var_actionBindingListForGeneration_7578, var_regularBindingsGenerationList_7440, var_multipleBindingGenerationList_7506, var_tableViewBindingGenerationList_7689, var_ebViewGraphicControllerBindingGenerationList_7789, var_viewGenerationList_8768, var_implicitViewFunctionGenerationList_8850, var_configuratorMap_8904, temp_17.readProperty_mCustomSuperClassName (), var_outletLinkerGenerationList_10683  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 316))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 316)) ;
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
  GALGAS_string var_s_14195 = GALGAS_string (filewrapperTemplate_autoLayoutDocumentGenerationTemplate_documentImplementation (inCompiler, temp_0.readProperty_mDocumentName (), temp_1.readProperty_mRootEntityName (), temp_2.readProperty_mMainViewName (), temp_3.readProperty_mDocumentPropertyGenearionList (), temp_4.readProperty_mOutletMap (), temp_5.readProperty_mAutoLayoutOutletMap (), temp_6.readProperty_mTargetActionList (), temp_7.readProperty_mRegularBindingsGenerationList (), temp_8.readProperty_multipleBindingGenerationList (), temp_9.readProperty_mTableViewBindingGenerationList (), temp_10.readProperty_mEBViewBindingGenerationList (), temp_11.readProperty_mViewDeclarationList (), temp_12.readProperty_mImplicitViewFunctionGenerationList (), temp_14, temp_17.readProperty_mOutletLinkerGenerationList () COMMA_SOURCE_FILE ("document-auto-layout.ggs", 379))) ;
  const GALGAS_autoLayoutDocumentFileGeneration temp_18 = this ;
  GALGAS_string var_fileName_14888 = GALGAS_string ("document-").add_operation (temp_18.readProperty_mDocumentName (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 396)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 396)) ;
  ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_14888  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 397)) ;
  {
  GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_14888, var_s_14195, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 398)) ;
  }
  const GALGAS_autoLayoutDocumentFileGeneration temp_19 = this ;
  cEnumerator_autoLayoutConfiguratorMap enumerator_15073 (temp_19.readProperty_mConfiguratorMap (), kENUMERATION_UP) ;
  while (enumerator_15073.hasCurrentObject ()) {
    const GALGAS_autoLayoutDocumentFileGeneration temp_20 = this ;
    GALGAS_string var_s_15112 = GALGAS_string (filewrapperTemplate_autoLayoutDocumentGenerationTemplate_documentOutletConfiguratorImplementation (inCompiler, temp_20.readProperty_mDocumentName (), enumerator_15073.current_lkey (HERE).readProperty_string (), enumerator_15073.current_mAutoLayoutOutletTypeName (HERE) COMMA_SOURCE_FILE ("document-auto-layout.ggs", 404))) ;
    GALGAS_string var_header_15302 = GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 409)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 409)).add_operation (GALGAS_string ("\n//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n//"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 409)).add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 411)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 411)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 411)).add_operation (GALGAS_string ("import AppKit\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 411)).add_operation (GALGAS_string ("//"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 412)).add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 413)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 413)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 413)) ;
    const GALGAS_autoLayoutDocumentFileGeneration temp_21 = this ;
    GALGAS_string var_fileName_15655 = GALGAS_string ("configurator-").add_operation (temp_21.readProperty_mDocumentName (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 414)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 414)).add_operation (enumerator_15073.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 414)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 414)) ;
    ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_15655  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 415)) ;
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_15655, GALGAS_string ("//"), var_header_15302, GALGAS_string ("\n\n"), var_s_15112, GALGAS_string ("INSERT CONFIGURATION CODE\n"), GALGAS_string ("  }\n}\n\n//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 424)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 424)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 424)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 416)) ;
    }
    enumerator_15073.gotoNextObject () ;
  }
  const GALGAS_autoLayoutDocumentFileGeneration temp_22 = this ;
  cEnumerator_autoLayoutOutletLinkerGenerationList enumerator_16235 (temp_22.readProperty_mOutletLinkerGenerationList (), kENUMERATION_UP) ;
  while (enumerator_16235.hasCurrentObject ()) {
    const GALGAS_autoLayoutDocumentFileGeneration temp_23 = this ;
    GALGAS_string var_s_16285 = GALGAS_string (filewrapperTemplate_autoLayoutDocumentGenerationTemplate_outletLinkerImplementation (inCompiler, temp_23.readProperty_mDocumentName (), enumerator_16235.current_mLinkerName (HERE), enumerator_16235.current_mOutletNameAndTypeNameList (HERE) COMMA_SOURCE_FILE ("document-auto-layout.ggs", 429))) ;
    GALGAS_string var_header_16465 = GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 434)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 434)).add_operation (GALGAS_string ("\n//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n//"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 434)).add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 436)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 436)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 436)).add_operation (GALGAS_string ("import AppKit\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 436)).add_operation (GALGAS_string ("//"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 437)).add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 438)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 438)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 438)) ;
    const GALGAS_autoLayoutDocumentFileGeneration temp_24 = this ;
    GALGAS_string var_fileName_16818 = GALGAS_string ("linker-").add_operation (temp_24.readProperty_mDocumentName (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 439)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 439)).add_operation (enumerator_16235.current_mLinkerName (HERE), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 439)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 439)) ;
    ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_16818  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 440)) ;
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_16818, GALGAS_string ("//"), var_header_16465, GALGAS_string ("\n\n"), var_s_16285, GALGAS_string ("INSERT CONFIGURATION CODE\n"), GALGAS_string ("  }\n}\n\n//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 449)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 449)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 449)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 441)) ;
    }
    enumerator_16235.gotoNextObject () ;
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
      result << callExtensionGetter_propertyDeclarationCode ((const cPtr_propertyGeneration *) enumerator_582.current_mProperty (HERE).ptr (), GALGAS_bool (false), GALGAS_bool (true), GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 13)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 13)).stringValue () ;
      index_582_.increment () ;
      enumerator_582.gotoNextObject () ;
    }
  }
  result << "  //····················································································································\n  //    Outlets\n  //····················································································································\n\n" ;
  GALGAS_uint index_1002_ (0) ;
  if (in_AUTO_5F_LAYOUT_5F_OUTLET_5F_MAP.isValid ()) {
    cEnumerator_autoLayoutOutletMap enumerator_1002 (in_AUTO_5F_LAYOUT_5F_OUTLET_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1002.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_1002.current_mOutletIsArray (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "  final var " ;
        result << enumerator_1002.current_lkey (HERE).readProperty_string ().stringValue () ;
        result << " = EBWeakReferenceArray <AutoLayout" ;
        result << enumerator_1002.current_mAutoLayoutOutletTypeName (HERE).stringValue () ;
        result << "> ()\n" ;
      }else if (kBoolFalse == test_0) {
        result << "  weak final var " ;
        result << enumerator_1002.current_lkey (HERE).readProperty_string ().stringValue () ;
        result << " : AutoLayout" ;
        result << enumerator_1002.current_mAutoLayoutOutletTypeName (HERE).stringValue () ;
        result << "\? = nil\n" ;
      }
      index_1002_.increment () ;
      enumerator_1002.gotoNextObject () ;
    }
  }
  result << "\n  //····················································································································\n  //    Outlets\n  //····················································································································\n\n" ;
  GALGAS_uint index_1549_ (0) ;
  if (in_OUTLET_5F_GENERATION_5F_MAP.isValid ()) {
    cEnumerator_decoratedOutletMap enumerator_1549 (in_OUTLET_5F_GENERATION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1549.hasCurrentObject ()) {
      result << "  @IBOutlet final var " ;
      result << enumerator_1549.current_lkey (HERE).readProperty_string ().stringValue () ;
      result << " : " ;
      result << enumerator_1549.current_mOutletTypeName (HERE).stringValue () ;
      result << "\? = nil\n" ;
      index_1549_.increment () ;
      enumerator_1549.gotoNextObject () ;
    }
  }
  result << "\n  //····················································································································\n  //    Multiple bindings controllers\n  //····················································································································\n\n" ;
  GALGAS_uint index_1999_ (0) ;
  if (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_multipleBindingGenerationList enumerator_1999 (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1999.hasCurrentObject ()) {
      result << "//  final var mController_" ;
      result << enumerator_1999.current_mOutletName (HERE).stringValue () ;
      result << "_" ;
      result << enumerator_1999.current_mBindingName (HERE).stringValue () ;
      result << " : MultipleBindingController_" ;
      result << enumerator_1999.current_mBindingName (HERE).stringValue () ;
      result << "\? = nil\n" ;
      index_1999_.increment () ;
      enumerator_1999.gotoNextObject () ;
    }
  }
  result << "\n  //····················································································································\n  //    displayName\n  //····················································································································\n\n  override var displayName : String\? {\n    get {\n      return super.displayName\n    }\n    set {\n      super.displayName = newValue\n      self.documentFileName_property.observedObjectDidChange ()\n    }\n  }\n\n  //····················································································································\n  //    rootEntityClassName\n  //····················································································································\n\n  override final func rootEntityClassName () -> String {\n    return \"" ;
  result << in_ROOT_5F_ENTITY_5F_NAME.stringValue () ;
  result << "\"\n  }\n\n  //····················································································································\n  //    rootObject\n  //····················································································································\n\n  final var rootObject : " ;
  result << in_ROOT_5F_ENTITY_5F_NAME.stringValue () ;
  result << " { return self.mRootObject as! " ;
  result << in_ROOT_5F_ENTITY_5F_NAME.stringValue () ;
  result << " }\n\n" ;
  GALGAS_uint index_3365_ (0) ;
  if (in_VIEW_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_viewGenerationList enumerator_3365 (in_VIEW_5F_GENERATION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3365.hasCurrentObject ()) {
      result << "  //····················································································································\n  //    VIEW " ;
      result << enumerator_3365.current_mViewName (HERE).stringValue () ;
      result << "\n  //····················································································································\n\n" ;
      result << callExtensionGetter_generateViewBuilder ((const cPtr_abstractViewGeneration *) enumerator_3365.current_mView (HERE).ptr (), GALGAS_bool (false), enumerator_3365.current_mViewName (HERE), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 78)).stringValue () ;
      index_3365_.increment () ;
      enumerator_3365.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3782_idx (0) ;
  if (in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST.isValid ()) {
    cEnumerator_implicitViewFunctionGenerationList enumerator_3782 (in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3782.hasCurrentObject ()) {
      result << "  //····················································································································\n  //    IMPLICIT VIEW " ;
      result << index_3782_idx.getter_string (SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 82)).stringValue () ;
      result << "\n  //····················································································································\n\n  private final func computeImplicitView_" ;
      result << index_3782_idx.getter_string (SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 84)).stringValue () ;
      result << " () -> NSView {\n" ;
      result << callExtensionGetter_generateViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_3782.current_mInstruction (HERE).ptr (), GALGAS_bool (false), GALGAS_string ("view"), GALGAS_string ("    "), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 85)).stringValue () ;
      result << "    return view\n  }\n\n" ;
      index_3782_idx.increment () ;
      enumerator_3782.gotoNextObject () ;
    }
  }
  result << "  //····················································································································\n  //    Build User Interface\n  //····················································································································\n\n  override func ebBuildUserInterface () {\n  //--------------------------- Read documentFileName model\n    self.documentFileName_property.mReadModelFunction = { [weak self] in\n      if let r = self\?.displayName {\n        return .single (r)\n      }else{\n        return .single (\"\")\n      }\n    }\n  //--- Build window content view\n    self.configureProperties ()\n    let mainView = self." ;
  result << in_MAIN_5F_VIEW_5F_NAME.stringValue () ;
  result << " ()\n  //--- Call outlet linkers\n" ;
  GALGAS_uint index_5052_ (0) ;
  if (in_AUTO_5F_LAYOUT_5F_LINKER_5F_LIST.isValid ()) {
    cEnumerator_autoLayoutOutletLinkerGenerationList enumerator_5052 (in_AUTO_5F_LAYOUT_5F_LINKER_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5052.hasCurrentObject ()) {
      result << "    self.linker_" ;
      result << enumerator_5052.current_mLinkerName (HERE).stringValue () ;
      result << " (" ;
      GALGAS_uint index_5161_ (0) ;
      if (enumerator_5052.current_mOutletNameAndTypeNameList (HERE).isValid ()) {
        cEnumerator__32_stringlist enumerator_5161 (enumerator_5052.current_mOutletNameAndTypeNameList (HERE), kENUMERATION_UP) ;
        while (enumerator_5161.hasCurrentObject ()) {
          result << "self." ;
          result << enumerator_5161.current_mValue_30_ (HERE).stringValue () ;
          if (enumerator_5161.hasNextObject ()) {
            result << ", " ;
          }
          index_5161_.increment () ;
          enumerator_5161.gotoNextObject () ;
        }
      }
      result << ")\n" ;
      index_5052_.increment () ;
      enumerator_5052.gotoNextObject () ;
    }
  }
  result << "  //--- Assign main view to window\n    self.windowForSheet\?.contentView = AutoLayoutWindowContentView (view: mainView)\n  }\n\n  //····················································································································\n  //    configureProperties\n  //····················································································································\n\n  final private func configureProperties () {\n" ;
  GALGAS_uint index_5718_ (0) ;
  if (in_DOCUMENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_5718 (in_DOCUMENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5718.hasCurrentObject ()) {
      result << callExtensionGetter_configurationCode ((const cPtr_propertyGeneration *) enumerator_5718.current_mProperty (HERE).ptr (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 125)).stringValue () ;
      result << "\n" ;
      index_5718_.increment () ;
      enumerator_5718.gotoNextObject () ;
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
  GALGAS_actionMap var_actionMap_4119 ;
  {
  const GALGAS_prefsDeclarationAST temp_0 = this ;
  routine_buildActionMap (temp_0.readProperty_mDeclaration ().readProperty_mActionDeclarationList (), var_actionMap_4119, inCompiler  COMMA_SOURCE_FILE ("preferences.ggs", 95)) ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 97)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("preferences.ggs", 97))  COMMA_SOURCE_FILE ("preferences.ggs", 97)), GALGAS_classKind::constructor_prefs (SOURCE_FILE ("preferences.ggs", 98)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("preferences.ggs", 99)), var_actionMap_4119, GALGAS_propertyGenerationList::constructor_emptyList (SOURCE_FILE ("preferences.ggs", 101)), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 96)) ;
  }
  cEnumerator_actionMap enumerator_4262 (var_actionMap_4119, kENUMERATION_UP) ;
  while (enumerator_4262.hasCurrentObject ()) {
    const GALGAS_prefsDeclarationAST temp_1 = this ;
    ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_actionFileGeneration::constructor_new (temp_1.readProperty_mClassName ().readProperty_string (), enumerator_4262.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("preferences.ggs", 104))  COMMA_SOURCE_FILE ("preferences.ggs", 104)) ;
    enumerator_4262.gotoNextObject () ;
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
  GALGAS_stringset var_availableCallers_4965 = temp_0 ;
  GALGAS_externFunctionMap var_externFunctionMap_5037 = GALGAS_externFunctionMap::constructor_emptyMap (SOURCE_FILE ("preferences.ggs", 122)) ;
  const GALGAS_prefsDeclarationAST temp_1 = this ;
  cEnumerator_externSwiftFunctionList enumerator_5086 (temp_1.readProperty_mDeclaration ().readProperty_mExternSwiftFunctionList (), kENUMERATION_UP) ;
  while (enumerator_5086.hasCurrentObject ()) {
    {
    var_externFunctionMap_5037.setter_insertKey (enumerator_5086.current_mExternSwiftFunctionName (HERE), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 124)) ;
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_availableCallers_4965.getter_hasKey (enumerator_5086.current_mCallerName (HERE).readProperty_string () COMMA_SOURCE_FILE ("preferences.ggs", 125)).operator_not (SOURCE_FILE ("preferences.ggs", 125)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_string var_s_5271 = GALGAS_string ("invalid caller; available callers:") ;
        cEnumerator_stringset enumerator_5325 (var_availableCallers_4965, kENUMERATION_UP) ;
        while (enumerator_5325.hasCurrentObject ()) {
          var_s_5271.plusAssign_operation(GALGAS_string ("\n  - ").add_operation (enumerator_5325.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 128)), inCompiler  COMMA_SOURCE_FILE ("preferences.ggs", 128)) ;
          enumerator_5325.gotoNextObject () ;
        }
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_5086.current_mCallerName (HERE).readProperty_location (), var_s_5271, fixItArray3  COMMA_SOURCE_FILE ("preferences.ggs", 130)) ;
      }
    }
    enumerator_5086.gotoNextObject () ;
  }
  GALGAS_propertyMap var_preferencesPropertyMap_5585 ;
  GALGAS_actionMap var_actionMap_5604 ;
  GALGAS_propertyGenerationList var_propertyGenerationList_5636 ;
  GALGAS_classKind joker_5552 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 135)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("preferences.ggs", 135))  COMMA_SOURCE_FILE ("preferences.ggs", 135)), joker_5552, var_preferencesPropertyMap_5585, var_actionMap_5604, var_propertyGenerationList_5636, inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 134)) ;
  GALGAS_regularBindingsGenerationList var_regularBindingsGenerationList_6006 ;
  GALGAS_multipleBindingGenerationList var_multipleBindingGenerationList_6076 ;
  GALGAS_actionBindingListForGeneration var_actionBindingListForGeneration_6148 ;
  GALGAS_decoratedOutletMap var_outletMap_6187 ;
  GALGAS_tableViewBindingGenerationList var_tableViewBindingGenerationList_6259 ;
  GALGAS_ebViewGraphicControllerBindingGenerationList var_ebViewGraphicControllerBindingGenerationList_6359 ;
  {
  const GALGAS_prefsDeclarationAST temp_4 = this ;
  routine_analyzeOutlets (GALGAS_bool (true), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("preferences.ggs", 144)), var_preferencesPropertyMap_5585, GALGAS_string::makeEmptyString (), ioArgument_ioSemanticContext, temp_4.readProperty_mDeclaration ().readProperty_mOutletDeclarationList (), var_preferencesPropertyMap_5585, var_actionMap_5604, function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 151)), ioArgument_ioGeneration, var_regularBindingsGenerationList_6006, var_multipleBindingGenerationList_6076, var_actionBindingListForGeneration_6148, var_outletMap_6187, var_tableViewBindingGenerationList_6259, var_ebViewGraphicControllerBindingGenerationList_6359, inCompiler  COMMA_SOURCE_FILE ("preferences.ggs", 142)) ;
  }
  GALGAS_autoLayoutViewDeclarationMap var_viewDeclarationMap_6459 = GALGAS_autoLayoutViewDeclarationMap::constructor_emptyMap (SOURCE_FILE ("preferences.ggs", 161)) ;
  GALGAS_viewGenerationList var_viewGenerationList_6509 = GALGAS_viewGenerationList::constructor_emptyList (SOURCE_FILE ("preferences.ggs", 162)) ;
  GALGAS_implicitViewFunctionGenerationList var_implicitViewFunctionGenerationList_6591 = GALGAS_implicitViewFunctionGenerationList::constructor_emptyList (SOURCE_FILE ("preferences.ggs", 163)) ;
  GALGAS_autoLayoutConfiguratorMap var_configuratorMap_6645 = GALGAS_autoLayoutConfiguratorMap::constructor_emptyMap (SOURCE_FILE ("preferences.ggs", 164)) ;
  GALGAS_autoLayoutOutletMap var_autoLayoutOutletMap_6697 = GALGAS_autoLayoutOutletMap::constructor_emptyMap (SOURCE_FILE ("preferences.ggs", 165)) ;
  const GALGAS_prefsDeclarationAST temp_5 = this ;
  cEnumerator_astViewDeclarationList enumerator_6734 (temp_5.readProperty_mDeclaration ().readProperty_mViewDeclarationList (), kENUMERATION_UP) ;
  while (enumerator_6734.hasCurrentObject ()) {
    {
    var_viewDeclarationMap_6459.setter_insertKey (enumerator_6734.current_mViewName (HERE), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 167)) ;
    }
    GALGAS_abstractViewGeneration var_viewGeneration_7230 ;
    const GALGAS_prefsDeclarationAST temp_6 = this ;
    callExtensionMethod_checkView ((cPtr_astAbstractViewDeclaration *) enumerator_6734.current_mView (HERE).ptr (), enumerator_6734.current_mViewName (HERE).readProperty_string (), var_viewDeclarationMap_6459, GALGAS_bool (true), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("preferences.ggs", 172)), var_preferencesPropertyMap_5585, ioArgument_ioSemanticContext, GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("preferences.ggs", 175)), var_actionMap_5604, temp_6.readProperty_mClassName ().readProperty_string (), ioArgument_ioSemanticContext.readProperty_mClassMap (), var_implicitViewFunctionGenerationList_6591, var_configuratorMap_6645, var_autoLayoutOutletMap_6697, var_viewGeneration_7230, inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 168)) ;
    var_viewGenerationList_6509.addAssign_operation (enumerator_6734.current_mViewName (HERE).readProperty_string (), var_viewGeneration_7230  COMMA_SOURCE_FILE ("preferences.ggs", 184)) ;
    enumerator_6734.gotoNextObject () ;
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_viewDeclarationMap_6459.getter_hasKey (GALGAS_string ("mPrefsMainView") COMMA_SOURCE_FILE ("preferences.ggs", 186)).operator_not (SOURCE_FILE ("preferences.ggs", 186)).boolEnum () ;
    if (kBoolTrue == test_7) {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("preferences.ggs", 187)), GALGAS_string ("Preferences should define 'mPrefsMainView' stack view"), fixItArray8  COMMA_SOURCE_FILE ("preferences.ggs", 187)) ;
    }
  }
  const GALGAS_prefsDeclarationAST temp_9 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_preferencesForGeneration::constructor_new (var_propertyGenerationList_5636, ioArgument_ioGeneration.readProperty_mMainXibDescriptorList (), var_regularBindingsGenerationList_6006, var_multipleBindingGenerationList_6076, var_actionBindingListForGeneration_6148, var_outletMap_6187, temp_9.readProperty_mDeclaration ().readProperty_mExternSwiftFunctionList (), var_tableViewBindingGenerationList_6259, var_ebViewGraphicControllerBindingGenerationList_6359, var_viewGenerationList_6509, var_implicitViewFunctionGenerationList_6591, var_configuratorMap_6645, var_autoLayoutOutletMap_6697  COMMA_SOURCE_FILE ("preferences.ggs", 190))  COMMA_SOURCE_FILE ("preferences.ggs", 190)) ;
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
      result << callExtensionGetter_propertyDeclarationCode ((const cPtr_propertyGeneration *) enumerator_9329.current_mProperty (HERE).ptr (), GALGAS_bool (true), GALGAS_bool (true), GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("preferences.swift.galgasTemplate", 213)), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 213)).stringValue () ;
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
  GALGAS_string var_s_10519 = GALGAS_string (filewrapperTemplate_prefsGenerationTemplate_preferences (inCompiler, temp_0.readProperty_mPropertyListForGeneration (), temp_1.readProperty_mMainXibDescriptorList (), temp_2.readProperty_mOutletMap (), temp_3.readProperty_mRegularBindingsGenerationList (), temp_4.readProperty_mActionBindingListForGeneration (), temp_5.readProperty_mMultipleBindingGenerationList (), temp_6.readProperty_mExternSwiftFunctionList (), temp_7.readProperty_mTableViewBindingGenerationList (), temp_8.readProperty_mEBViewBindingGenerationList (), temp_9.readProperty_mViewGenerationList (), temp_10.readProperty_mImplicitViewFunctionGenerationList (), temp_11.readProperty_mAutoLayoutOutletMap () COMMA_SOURCE_FILE ("preferences.ggs", 253))) ;
  GALGAS_string var_fileName_11039 = function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 267)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 267)) ;
  ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_11039  COMMA_SOURCE_FILE ("preferences.ggs", 268)) ;
  {
  GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_11039, var_s_10519, inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 269)) ;
  }
  const GALGAS_preferencesForGeneration temp_12 = this ;
  cEnumerator_autoLayoutConfiguratorMap enumerator_11229 (temp_12.readProperty_mConfiguratorMap (), kENUMERATION_UP) ;
  while (enumerator_11229.hasCurrentObject ()) {
    GALGAS_string var_s_11268 = GALGAS_string (filewrapperTemplate_autoLayoutDocumentGenerationTemplate_documentOutletConfiguratorImplementation (inCompiler, GALGAS_string ("Preferences"), enumerator_11229.current_lkey (HERE).readProperty_string (), enumerator_11229.current_mAutoLayoutOutletTypeName (HERE) COMMA_SOURCE_FILE ("preferences.ggs", 276))) ;
    GALGAS_string var_header_11453 = GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("preferences.ggs", 281)), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 281)).add_operation (GALGAS_string ("\n//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n//"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 281)).add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("preferences.ggs", 283)), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 283)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 283)).add_operation (GALGAS_string ("import AppKit\n\n"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 283)).add_operation (GALGAS_string ("//"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 284)).add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("preferences.ggs", 285)), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 285)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 285)) ;
    GALGAS_string var_fileName_11806 = GALGAS_string ("configurator-Preferences-").add_operation (enumerator_11229.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 286)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 286)) ;
    ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_11806  COMMA_SOURCE_FILE ("preferences.ggs", 287)) ;
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_11806, GALGAS_string ("//"), var_header_11453, GALGAS_string ("\n\n"), var_s_11268, GALGAS_string ("INSERT CONFIGURATION CODE\n"), GALGAS_string ("  }\n}\n\n//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("preferences.ggs", 296)), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 296)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 296)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 288)) ;
    }
    enumerator_11229.gotoNextObject () ;
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
        GALGAS_string var_entityName_2137 ;
        {
        var_exploreArray_1912.setter_popLast (var_entityName_2137, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 47)) ;
        }
        GALGAS_string var_node_2151 = GALGAS_string ("  ").add_operation (var_entityName_2137, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 48)).add_operation (GALGAS_string ("[label=\"<"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 48)).add_operation (var_entityName_2137, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 48)).add_operation (GALGAS_string (">"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 48)).add_operation (var_entityName_2137, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 48)) ;
        GALGAS_classKind var_entityKind_2300 ;
        GALGAS_propertyMap var_propertyMap_2330 ;
        GALGAS_actionMap joker_2332_2 ; // Joker input parameter
        GALGAS_propertyGenerationList joker_2332_1 ; // Joker input parameter
        constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (var_entityName_2137.getter_nowhere (SOURCE_FILE ("graphviz.ggs", 49)), var_entityKind_2300, var_propertyMap_2330, joker_2332_2, joker_2332_1, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 49)) ;
        GALGAS_string var_superEntityName_2396 ;
        GALGAS_bool joker_2398_3 ; // Joker input parameter
        GALGAS_bool joker_2398_2 ; // Joker input parameter
        GALGAS_bool joker_2398_1 ; // Joker input parameter
        var_entityKind_2300.method_entity (var_superEntityName_2396, joker_2398_3, joker_2398_2, joker_2398_1, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 50)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (kIsNotEqual, var_superEntityName_2396.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_2) {
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = var_reachableEntityNameSet_1859.getter_hasKey (var_superEntityName_2396 COMMA_SOURCE_FILE ("graphviz.ggs", 52)).operator_not (SOURCE_FILE ("graphviz.ggs", 52)).boolEnum () ;
              if (kBoolTrue == test_3) {
                var_reachableEntityNameSet_1859.addAssign_operation (var_superEntityName_2396  COMMA_SOURCE_FILE ("graphviz.ggs", 53)) ;
                var_exploreArray_1912.addAssign_operation (var_superEntityName_2396  COMMA_SOURCE_FILE ("graphviz.ggs", 54)) ;
              }
            }
            var_arrowList_1994.addAssign_operation (GALGAS_string ("  ").add_operation (var_entityName_2137, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 56)).add_operation (GALGAS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 56)).add_operation (var_superEntityName_2396, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 56)).add_operation (GALGAS_string (" [dir=both arrowtail=dot arrowhead=normal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 56))  COMMA_SOURCE_FILE ("graphviz.ggs", 56)) ;
          }
        }
        cEnumerator_propertyMap enumerator_2762 (var_propertyMap_2330, kENUMERATION_UP) ;
        while (enumerator_2762.hasCurrentObject ()) {
          switch (enumerator_2762.current_mKind (HERE).enumValue ()) {
          case GALGAS_propertyKind::kNotBuilt:
            break ;
          case GALGAS_propertyKind::kEnum_property:
            {
              const cEnumAssociatedValues_propertyKind_property * extractPtr_3034 = (const cEnumAssociatedValues_propertyKind_property *) (enumerator_2762.current_mKind (HERE).unsafePointer ()) ;
              const GALGAS_typeKind extractedValue_2833_type = extractPtr_3034->mAssociatedValue0 ;
              const GALGAS_propertyAccessibility extractedValue_2847_accessibility = extractPtr_3034->mAssociatedValue1 ;
              switch (extractedValue_2847_accessibility.enumValue ()) {
              case GALGAS_propertyAccessibility::kNotBuilt:
                break ;
              case GALGAS_propertyAccessibility::kEnum_stored:
                {
                  var_node_2151.plusAssign_operation(GALGAS_string ("|").add_operation (extensionGetter_swiftTypeName (extractedValue_2833_type, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 63)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 63)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 63)).add_operation (enumerator_2762.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 63)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 63)) ;
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
              const cEnumAssociatedValues_propertyKind_toMany * extractPtr_4428 = (const cEnumAssociatedValues_propertyKind_toMany *) (enumerator_2762.current_mKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_3142_typeName = extractPtr_4428->mAssociatedValue0 ;
              const GALGAS_propertyAccessibility extractedValue_3179_accessibility = extractPtr_4428->mAssociatedValue1 ;
              const GALGAS_toManyRelationshipOptionAST extractedValue_3192_optionKind = extractPtr_4428->mAssociatedValue3 ;
              enumGalgasBool test_4 = kBoolTrue ;
              if (kBoolTrue == test_4) {
                test_4 = extractedValue_3179_accessibility.getter_isStored (SOURCE_FILE ("graphviz.ggs", 70)).boolEnum () ;
                if (kBoolTrue == test_4) {
                  var_node_2151.plusAssign_operation(GALGAS_string ("|<").add_operation (enumerator_2762.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 71)).add_operation (GALGAS_string (">["), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 71)).add_operation (extractedValue_3142_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 71)).add_operation (GALGAS_string ("] "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 71)).add_operation (enumerator_2762.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 71)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 71)) ;
                  switch (extractedValue_3192_optionKind.enumValue ()) {
                  case GALGAS_toManyRelationshipOptionAST::kNotBuilt:
                    break ;
                  case GALGAS_toManyRelationshipOptionAST::kEnum_none:
                    {
                      enumGalgasBool test_5 = kBoolTrue ;
                      if (kBoolTrue == test_5) {
                        test_5 = var_reachableEntityNameSet_1859.getter_hasKey (extractedValue_3142_typeName.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 74)).operator_not (SOURCE_FILE ("graphviz.ggs", 74)).boolEnum () ;
                        if (kBoolTrue == test_5) {
                          var_reachableEntityNameSet_1859.addAssign_operation (extractedValue_3142_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.ggs", 75)) ;
                          var_exploreArray_1912.addAssign_operation (extractedValue_3142_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.ggs", 76)) ;
                        }
                      }
                      var_arrowList_1994.addAssign_operation (GALGAS_string ("  ").add_operation (var_entityName_2137, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 78)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 78)).add_operation (enumerator_2762.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 78)).add_operation (GALGAS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 78)).add_operation (extractedValue_3142_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 79)).add_operation (GALGAS_string (" [dir=both arrowtail=none arrowhead=veevee]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 79))  COMMA_SOURCE_FILE ("graphviz.ggs", 78)) ;
                    }
                    break ;
                  case GALGAS_toManyRelationshipOptionAST::kEnum_hasOpposite:
                    {
                      const cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite * extractPtr_4056 = (const cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite *) (extractedValue_3192_optionKind.unsafePointer ()) ;
                      const GALGAS_lstring extractedValue_3716_oppositeName = extractPtr_4056->mAssociatedValue0 ;
                      enumGalgasBool test_6 = kBoolTrue ;
                      if (kBoolTrue == test_6) {
                        test_6 = var_reachableEntityNameSet_1859.getter_hasKey (extractedValue_3142_typeName.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 81)).operator_not (SOURCE_FILE ("graphviz.ggs", 81)).boolEnum () ;
                        if (kBoolTrue == test_6) {
                          var_reachableEntityNameSet_1859.addAssign_operation (extractedValue_3142_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.ggs", 82)) ;
                          var_exploreArray_1912.addAssign_operation (extractedValue_3142_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.ggs", 83)) ;
                        }
                      }
                      var_arrowList_1994.addAssign_operation (GALGAS_string ("  ").add_operation (var_entityName_2137, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 85)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 85)).add_operation (enumerator_2762.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 85)).add_operation (GALGAS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 85)).add_operation (extractedValue_3142_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 86)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 86)).add_operation (extractedValue_3716_oppositeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 86)).add_operation (GALGAS_string (" [dir=both arrowtail=onormal arrowhead=veevee]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 86))  COMMA_SOURCE_FILE ("graphviz.ggs", 85)) ;
                    }
                    break ;
                  case GALGAS_toManyRelationshipOptionAST::kEnum_hasDependance:
                    {
                      enumGalgasBool test_7 = kBoolTrue ;
                      if (kBoolTrue == test_7) {
                        test_7 = var_reachableEntityNameSet_1859.getter_hasKey (extractedValue_3142_typeName.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 88)).operator_not (SOURCE_FILE ("graphviz.ggs", 88)).boolEnum () ;
                        if (kBoolTrue == test_7) {
                          var_reachableEntityNameSet_1859.addAssign_operation (extractedValue_3142_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.ggs", 89)) ;
                          var_exploreArray_1912.addAssign_operation (extractedValue_3142_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.ggs", 90)) ;
                        }
                      }
                      var_arrowList_1994.addAssign_operation (GALGAS_string ("  ").add_operation (var_entityName_2137, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 92)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 92)).add_operation (enumerator_2762.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 92)).add_operation (GALGAS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 92)).add_operation (extractedValue_3142_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 93)).add_operation (GALGAS_string (" [dir=both arrowtail=none arrowhead=veevee]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 93))  COMMA_SOURCE_FILE ("graphviz.ggs", 92)) ;
                    }
                    break ;
                  }
                }
              }
            }
            break ;
          case GALGAS_propertyKind::kEnum_toOne:
            {
              const cEnumAssociatedValues_propertyKind_toOne * extractPtr_5579 = (const cEnumAssociatedValues_propertyKind_toOne *) (enumerator_2762.current_mKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_4464_typeName = extractPtr_5579->mAssociatedValue0 ;
              const GALGAS_propertyAccessibility extractedValue_4501_accessibility = extractPtr_5579->mAssociatedValue1 ;
              const GALGAS_toOneOppositeRelationship extractedValue_4512_opposite = extractPtr_5579->mAssociatedValue3 ;
              enumGalgasBool test_8 = kBoolTrue ;
              if (kBoolTrue == test_8) {
                test_8 = extractedValue_4501_accessibility.getter_isStored (SOURCE_FILE ("graphviz.ggs", 97)).boolEnum () ;
                if (kBoolTrue == test_8) {
                  var_node_2151.plusAssign_operation(GALGAS_string ("|<").add_operation (enumerator_2762.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 98)).add_operation (GALGAS_string (">"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 98)).add_operation (extractedValue_4464_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 98)).add_operation (GALGAS_string ("\? "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 98)).add_operation (enumerator_2762.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 98)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 98)) ;
                  switch (extractedValue_4512_opposite.enumValue ()) {
                  case GALGAS_toOneOppositeRelationship::kNotBuilt:
                    break ;
                  case GALGAS_toOneOppositeRelationship::kEnum_none:
                    {
                      enumGalgasBool test_9 = kBoolTrue ;
                      if (kBoolTrue == test_9) {
                        test_9 = var_reachableEntityNameSet_1859.getter_hasKey (extractedValue_4464_typeName.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 101)).operator_not (SOURCE_FILE ("graphviz.ggs", 101)).boolEnum () ;
                        if (kBoolTrue == test_9) {
                          var_reachableEntityNameSet_1859.addAssign_operation (extractedValue_4464_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.ggs", 102)) ;
                          var_exploreArray_1912.addAssign_operation (extractedValue_4464_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.ggs", 103)) ;
                        }
                      }
                      var_arrowList_1994.addAssign_operation (GALGAS_string ("  ").add_operation (var_entityName_2137, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 105)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 105)).add_operation (enumerator_2762.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 105)).add_operation (GALGAS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 105)).add_operation (extractedValue_4464_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 106)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 106)).add_operation (extractedValue_4464_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 106)).add_operation (GALGAS_string (" [dir=both arrowtail=none arrowhead=onormal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 106))  COMMA_SOURCE_FILE ("graphviz.ggs", 105)) ;
                    }
                    break ;
                  case GALGAS_toOneOppositeRelationship::kEnum_oppositeIsToMany:
                    {
                    }
                    break ;
                  case GALGAS_toOneOppositeRelationship::kEnum_oppositeIsToOne:
                    {
                      const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne * extractPtr_5553 = (const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne *) (extractedValue_4512_opposite.unsafePointer ()) ;
                      const GALGAS_lstring extractedValue_5121_oppositeName = extractPtr_5553->mAssociatedValue0 ;
                      enumGalgasBool test_10 = kBoolTrue ;
                      if (kBoolTrue == test_10) {
                        test_10 = var_reachableEntityNameSet_1859.getter_hasKey (extractedValue_4464_typeName.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 109)).operator_not (SOURCE_FILE ("graphviz.ggs", 109)).boolEnum () ;
                        if (kBoolTrue == test_10) {
                          var_reachableEntityNameSet_1859.addAssign_operation (extractedValue_4464_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.ggs", 110)) ;
                          var_exploreArray_1912.addAssign_operation (extractedValue_4464_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.ggs", 111)) ;
                        }
                      }
                      enumGalgasBool test_11 = kBoolTrue ;
                      if (kBoolTrue == test_11) {
                        test_11 = GALGAS_bool (kIsStrictSup, enumerator_2762.current_lkey (HERE).readProperty_string ().objectCompare (extractedValue_5121_oppositeName.readProperty_string ())).boolEnum () ;
                        if (kBoolTrue == test_11) {
                          var_arrowList_1994.addAssign_operation (GALGAS_string ("  ").add_operation (var_entityName_2137, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 114)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 114)).add_operation (enumerator_2762.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 114)).add_operation (GALGAS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 114)).add_operation (extractedValue_4464_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 115)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 115)).add_operation (extractedValue_5121_oppositeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 115)).add_operation (GALGAS_string (" [dir=both arrowtail=onormal arrowhead=onormal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 115))  COMMA_SOURCE_FILE ("graphviz.ggs", 114)) ;
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
          enumerator_2762.gotoNextObject () ;
        }
        var_node_2151.plusAssign_operation(GALGAS_string ("\"]"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 121)) ;
        var_nodeList_1961.addAssign_operation (var_node_2151  COMMA_SOURCE_FILE ("graphviz.ggs", 122)) ;
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
  GALGAS_bool joker_6109 ; // Joker input parameter
  var_s_5667.method_writeToFileWhenDifferentContents (var_filePath_5924, joker_6109, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 137)) ;
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
  GALGAS_stringset var_reachableEntityNameSet_6775 = temp_0 ;
  GALGAS_stringlist temp_1 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("graphviz.ggs", 152)) ;
  temp_1.addAssign_operation (constinArgument_inRootEntityName  COMMA_SOURCE_FILE ("graphviz.ggs", 152)) ;
  GALGAS_stringlist var_exploreArray_6828 = temp_1 ;
  GALGAS_stringlist var_nodeList_6877 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("graphviz.ggs", 153)) ;
  GALGAS_stringlist var_arrowList_6910 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("graphviz.ggs", 154)) ;
  GALGAS_entityStrongReferenceGraph var_entityStrongReferenceGraph_6976 = GALGAS_entityStrongReferenceGraph::constructor_emptyGraph (SOURCE_FILE ("graphviz.ggs", 155)) ;
  if (constinArgument_inSemanticContext.readProperty_mClassMap ().getter_count (SOURCE_FILE ("graphviz.ggs", 156)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 156)).isValid ()) {
    uint32_t variant_6997 = constinArgument_inSemanticContext.readProperty_mClassMap ().getter_count (SOURCE_FILE ("graphviz.ggs", 156)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 156)).uintValue () ;
    bool loop_6997 = true ;
    while (loop_6997) {
      loop_6997 = GALGAS_bool (kIsStrictSup, var_exploreArray_6828.getter_length (SOURCE_FILE ("graphviz.ggs", 156)).objectCompare (GALGAS_uint (uint32_t (0U)))).isValid () ;
      if (loop_6997) {
        loop_6997 = GALGAS_bool (kIsStrictSup, var_exploreArray_6828.getter_length (SOURCE_FILE ("graphviz.ggs", 156)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_6997 && (0 == variant_6997)) {
        loop_6997 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("graphviz.ggs", 156)) ;
      }
      if (loop_6997) {
        variant_6997 -- ;
        GALGAS_string var_entityName_7128 ;
        {
        var_exploreArray_6828.setter_popLast (var_entityName_7128, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 157)) ;
        }
        var_nodeList_6877.addAssign_operation (var_entityName_7128  COMMA_SOURCE_FILE ("graphviz.ggs", 158)) ;
        {
        var_entityStrongReferenceGraph_6976.setter_addNode (GALGAS_lstring::constructor_new (var_entityName_7128, GALGAS_location::constructor_nowhere (SOURCE_FILE ("graphviz.ggs", 159))  COMMA_SOURCE_FILE ("graphviz.ggs", 159)), var_entityName_7128, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 159)) ;
        }
        GALGAS_classKind var_entityKind_7325 ;
        GALGAS_propertyMap var_propertyMap_7355 ;
        GALGAS_actionMap joker_7357_2 ; // Joker input parameter
        GALGAS_propertyGenerationList joker_7357_1 ; // Joker input parameter
        constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (var_entityName_7128.getter_nowhere (SOURCE_FILE ("graphviz.ggs", 160)), var_entityKind_7325, var_propertyMap_7355, joker_7357_2, joker_7357_1, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 160)) ;
        GALGAS_string var_superEntityName_7421 ;
        GALGAS_bool joker_7423_3 ; // Joker input parameter
        GALGAS_bool joker_7423_2 ; // Joker input parameter
        GALGAS_bool joker_7423_1 ; // Joker input parameter
        var_entityKind_7325.method_entity (var_superEntityName_7421, joker_7423_3, joker_7423_2, joker_7423_1, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 161)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (kIsNotEqual, var_superEntityName_7421.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_2) {
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = var_reachableEntityNameSet_6775.getter_hasKey (var_superEntityName_7421 COMMA_SOURCE_FILE ("graphviz.ggs", 163)).operator_not (SOURCE_FILE ("graphviz.ggs", 163)).boolEnum () ;
              if (kBoolTrue == test_3) {
                var_reachableEntityNameSet_6775.addAssign_operation (var_superEntityName_7421  COMMA_SOURCE_FILE ("graphviz.ggs", 164)) ;
                var_exploreArray_6828.addAssign_operation (var_superEntityName_7421  COMMA_SOURCE_FILE ("graphviz.ggs", 165)) ;
              }
            }
            var_arrowList_6910.addAssign_operation (var_superEntityName_7421.add_operation (GALGAS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 167)).add_operation (var_entityName_7128, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 167)).add_operation (GALGAS_string (" [arrowtail=dot arrowhead=normal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 167))  COMMA_SOURCE_FILE ("graphviz.ggs", 167)) ;
            {
            var_entityStrongReferenceGraph_6976.setter_addEdge (GALGAS_lstring::constructor_new (var_superEntityName_7421, GALGAS_location::constructor_nowhere (SOURCE_FILE ("graphviz.ggs", 168))  COMMA_SOURCE_FILE ("graphviz.ggs", 168)), GALGAS_lstring::constructor_new (var_entityName_7128, GALGAS_location::constructor_nowhere (SOURCE_FILE ("graphviz.ggs", 168))  COMMA_SOURCE_FILE ("graphviz.ggs", 168)) COMMA_SOURCE_FILE ("graphviz.ggs", 168)) ;
            }
          }
        }
        cEnumerator_propertyMap enumerator_7872 (var_propertyMap_7355, kENUMERATION_UP) ;
        while (enumerator_7872.hasCurrentObject ()) {
          switch (enumerator_7872.current_mKind (HERE).enumValue ()) {
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
              const cEnumAssociatedValues_propertyKind_toMany * extractPtr_8848 = (const cEnumAssociatedValues_propertyKind_toMany *) (enumerator_7872.current_mKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_8053_typeName = extractPtr_8848->mAssociatedValue0 ;
              const GALGAS_propertyAccessibility extractedValue_8090_accessibility = extractPtr_8848->mAssociatedValue1 ;
              var_arrowList_6910.addAssign_operation (var_entityName_7128.add_operation (GALGAS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 176)).add_operation (extractedValue_8053_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 176)).add_operation (GALGAS_string (" [dir=both arrowtail=none arrowhead=veevee]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 176))  COMMA_SOURCE_FILE ("graphviz.ggs", 176)) ;
              {
              var_entityStrongReferenceGraph_6976.setter_addEdge (GALGAS_lstring::constructor_new (var_entityName_7128, GALGAS_location::constructor_nowhere (SOURCE_FILE ("graphviz.ggs", 177))  COMMA_SOURCE_FILE ("graphviz.ggs", 177)), GALGAS_lstring::constructor_new (extractedValue_8053_typeName.readProperty_string (), GALGAS_location::constructor_nowhere (SOURCE_FILE ("graphviz.ggs", 177))  COMMA_SOURCE_FILE ("graphviz.ggs", 177)) COMMA_SOURCE_FILE ("graphviz.ggs", 177)) ;
              }
              enumGalgasBool test_4 = kBoolTrue ;
              if (kBoolTrue == test_4) {
                test_4 = extractedValue_8090_accessibility.getter_isStored (SOURCE_FILE ("graphviz.ggs", 178)).boolEnum () ;
                if (kBoolTrue == test_4) {
                  enumGalgasBool test_5 = kBoolTrue ;
                  if (kBoolTrue == test_5) {
                    test_5 = var_reachableEntityNameSet_6775.getter_hasKey (extractedValue_8053_typeName.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 181)).operator_not (SOURCE_FILE ("graphviz.ggs", 181)).boolEnum () ;
                    if (kBoolTrue == test_5) {
                      var_reachableEntityNameSet_6775.addAssign_operation (extractedValue_8053_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.ggs", 182)) ;
                      var_exploreArray_6828.addAssign_operation (extractedValue_8053_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.ggs", 183)) ;
                    }
                  }
                }
              }
            }
            break ;
          case GALGAS_propertyKind::kEnum_toOne:
            {
              const cEnumAssociatedValues_propertyKind_toOne * extractPtr_9739 = (const cEnumAssociatedValues_propertyKind_toOne *) (enumerator_7872.current_mKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_8884_typeName = extractPtr_9739->mAssociatedValue0 ;
              const GALGAS_propertyAccessibility extractedValue_8921_accessibility = extractPtr_9739->mAssociatedValue1 ;
              const GALGAS_toOneOppositeRelationship extractedValue_8932_opposite = extractPtr_9739->mAssociatedValue3 ;
              const GALGAS_bool extractedValue_8937_weak = extractPtr_9739->mAssociatedValue4 ;
              enumGalgasBool test_6 = kBoolTrue ;
              if (kBoolTrue == test_6) {
                test_6 = extractedValue_8937_weak.operator_not (SOURCE_FILE ("graphviz.ggs", 195)).boolEnum () ;
                if (kBoolTrue == test_6) {
                  var_arrowList_6910.addAssign_operation (var_entityName_7128.add_operation (GALGAS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 196)).add_operation (extractedValue_8884_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 196)).add_operation (GALGAS_string (" [dir=both arrowtail=none arrowhead=onormal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 196))  COMMA_SOURCE_FILE ("graphviz.ggs", 196)) ;
                  {
                  var_entityStrongReferenceGraph_6976.setter_addEdge (GALGAS_lstring::constructor_new (var_entityName_7128, GALGAS_location::constructor_nowhere (SOURCE_FILE ("graphviz.ggs", 197))  COMMA_SOURCE_FILE ("graphviz.ggs", 197)), GALGAS_lstring::constructor_new (extractedValue_8884_typeName.readProperty_string (), GALGAS_location::constructor_nowhere (SOURCE_FILE ("graphviz.ggs", 197))  COMMA_SOURCE_FILE ("graphviz.ggs", 197)) COMMA_SOURCE_FILE ("graphviz.ggs", 197)) ;
                  }
                }
              }
              enumGalgasBool test_7 = kBoolTrue ;
              if (kBoolTrue == test_7) {
                test_7 = extractedValue_8921_accessibility.getter_isStored (SOURCE_FILE ("graphviz.ggs", 199)).boolEnum () ;
                if (kBoolTrue == test_7) {
                  switch (extractedValue_8932_opposite.enumValue ()) {
                  case GALGAS_toOneOppositeRelationship::kNotBuilt:
                    break ;
                  case GALGAS_toOneOppositeRelationship::kEnum_none:
                    {
                      enumGalgasBool test_8 = kBoolTrue ;
                      if (kBoolTrue == test_8) {
                        test_8 = var_reachableEntityNameSet_6775.getter_hasKey (extractedValue_8884_typeName.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 202)).operator_not (SOURCE_FILE ("graphviz.ggs", 202)).boolEnum () ;
                        if (kBoolTrue == test_8) {
                          var_reachableEntityNameSet_6775.addAssign_operation (extractedValue_8884_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.ggs", 203)) ;
                          var_exploreArray_6828.addAssign_operation (extractedValue_8884_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.ggs", 204)) ;
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
                        test_9 = var_reachableEntityNameSet_6775.getter_hasKey (extractedValue_8884_typeName.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 208)).operator_not (SOURCE_FILE ("graphviz.ggs", 208)).boolEnum () ;
                        if (kBoolTrue == test_9) {
                          var_reachableEntityNameSet_6775.addAssign_operation (extractedValue_8884_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.ggs", 209)) ;
                          var_exploreArray_6828.addAssign_operation (extractedValue_8884_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.ggs", 210)) ;
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
          enumerator_7872.gotoNextObject () ;
        }
      }
    }
  }
  GALGAS_string var_s_9787 = GALGAS_string ("digraph G {\n") ;
  var_s_9787.plusAssign_operation(GALGAS_string ("  rankdir=LR ;\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 219)) ;
  var_s_9787.plusAssign_operation(GALGAS_string ("  node [shape=record fontname=helvetica style=rounded] ;\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 220)) ;
  cEnumerator_stringlist enumerator_9911 (var_nodeList_6877, kENUMERATION_UP) ;
  while (enumerator_9911.hasCurrentObject ()) {
    var_s_9787.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_9911.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 222)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 222)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 222)) ;
    enumerator_9911.gotoNextObject () ;
  }
  cEnumerator_stringlist enumerator_9976 (var_arrowList_6910, kENUMERATION_UP) ;
  while (enumerator_9976.hasCurrentObject ()) {
    var_s_9787.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_9976.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 225)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 225)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 225)) ;
    enumerator_9976.gotoNextObject () ;
  }
  var_s_9787.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 227)) ;
  GALGAS_string var_filePath_10058 = constinArgument_inSourceFileDirectory.add_operation (GALGAS_string ("/models/strong-"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 228)).add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 228)).add_operation (GALGAS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 228)) ;
  var_filePath_10058.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("graphviz.ggs", 229)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 229)) ;
  GALGAS_bool joker_10244 ; // Joker input parameter
  var_s_9787.method_writeToFileWhenDifferentContents (var_filePath_10058, joker_10244, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 230)) ;
  var_filePath_10058 = constinArgument_inSourceFileDirectory.add_operation (GALGAS_string ("/models/strong-dep-"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 232)).add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 232)).add_operation (GALGAS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 232)) ;
  GALGAS_bool joker_10437 ; // Joker input parameter
  var_entityStrongReferenceGraph_6976.getter_graphviz (SOURCE_FILE ("graphviz.ggs", 233)).method_writeToFileWhenDifferentContents (var_filePath_10058, joker_10437, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 233)) ;
  GALGAS_stringlist var_undefinedNodeList_10495 = var_entityStrongReferenceGraph_6976.getter_undefinedNodeKeyList (SOURCE_FILE ("graphviz.ggs", 235)) ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = GALGAS_bool (kIsStrictSup, var_undefinedNodeList_10495.getter_length (SOURCE_FILE ("graphviz.ggs", 236)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_10) {
      GALGAS_string var_s_10600 = GALGAS_string ("for ").add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 237)).add_operation (GALGAS_string (" graph , the following entities are not defined"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 237)) ;
      cEnumerator_stringlist enumerator_10694 (var_undefinedNodeList_10495, kENUMERATION_UP) ;
      while (enumerator_10694.hasCurrentObject ()) {
        var_s_10600.plusAssign_operation(GALGAS_string ("\n -- ").add_operation (enumerator_10694.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 239)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 239)) ;
        enumerator_10694.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("graphviz.ggs", 241)), var_s_10600, fixItArray11  COMMA_SOURCE_FILE ("graphviz.ggs", 241)) ;
    }
  }
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    test_12 = GALGAS_bool (kIsEqual, var_undefinedNodeList_10495.getter_length (SOURCE_FILE ("graphviz.ggs", 244)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_12) {
      GALGAS_lstringlist temp_13 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("graphviz.ggs", 245)) ;
      temp_13.addAssign_operation (GALGAS_lstring::constructor_new (constinArgument_inRootEntityName, GALGAS_location::constructor_nowhere (SOURCE_FILE ("graphviz.ggs", 245))  COMMA_SOURCE_FILE ("graphviz.ggs", 245))  COMMA_SOURCE_FILE ("graphviz.ggs", 245)) ;
      GALGAS_lstringlist var_accessibleNodeList_10878 = var_entityStrongReferenceGraph_6976.getter_accessibleNodesFrom (temp_13, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("graphviz.ggs", 245)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 245)) ;
      GALGAS_stringset var_accessibleNodeSet_10999 = GALGAS_stringset::constructor_setWithLStringList (var_accessibleNodeList_10878  COMMA_SOURCE_FILE ("graphviz.ggs", 246)) ;
      cEnumerator_stringlist enumerator_11067 (var_nodeList_6877, kENUMERATION_UP) ;
      while (enumerator_11067.hasCurrentObject ()) {
        enumGalgasBool test_14 = kBoolTrue ;
        if (kBoolTrue == test_14) {
          test_14 = var_accessibleNodeSet_10999.getter_hasKey (enumerator_11067.current_mValue (HERE) COMMA_SOURCE_FILE ("graphviz.ggs", 248)).operator_not (SOURCE_FILE ("graphviz.ggs", 248)).boolEnum () ;
          if (kBoolTrue == test_14) {
            TC_Array <C_FixItDescription> fixItArray15 ;
            inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("graphviz.ggs", 249)), enumerator_11067.current_mValue (HERE).add_operation (GALGAS_string (" entity is not reachable via strong reference from "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 249)).add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 249)), fixItArray15  COMMA_SOURCE_FILE ("graphviz.ggs", 249)) ;
          }
        }
        enumerator_11067.gotoNextObject () ;
      }
    }
  }
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    test_16 = GALGAS_bool (kIsEqual, var_undefinedNodeList_10495.getter_length (SOURCE_FILE ("graphviz.ggs", 254)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_16) {
      GALGAS_lstringlist var_unsortedNodeList_11418 ;
      GALGAS_stringlist joker_11382 ; // Joker input parameter
      var_entityStrongReferenceGraph_6976.method_circularities (joker_11382, var_unsortedNodeList_11418 COMMA_SOURCE_FILE ("graphviz.ggs", 255)) ;
      enumGalgasBool test_17 = kBoolTrue ;
      if (kBoolTrue == test_17) {
        test_17 = GALGAS_bool (kIsStrictSup, var_unsortedNodeList_11418.getter_length (SOURCE_FILE ("graphviz.ggs", 256)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_17) {
          GALGAS_string var_s_11474 = GALGAS_string ("for ").add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 257)).add_operation (GALGAS_string (" graph, "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 257)).add_operation (var_unsortedNodeList_11418.getter_length (SOURCE_FILE ("graphviz.ggs", 257)).getter_string (SOURCE_FILE ("graphviz.ggs", 257)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 257)) ;
          var_s_11474.plusAssign_operation(GALGAS_string (" entities are involved in a strong reference cycle"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 258)) ;
          cEnumerator_lstringlist enumerator_11624 (var_unsortedNodeList_11418, kENUMERATION_UP) ;
          while (enumerator_11624.hasCurrentObject ()) {
            var_s_11474.plusAssign_operation(GALGAS_string ("\n -- ").add_operation (enumerator_11624.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 260)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 260)) ;
            enumerator_11624.gotoNextObject () ;
          }
          TC_Array <C_FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticWarning (GALGAS_location::constructor_nowhere (SOURCE_FILE ("graphviz.ggs", 262)), var_s_11474, fixItArray18  COMMA_SOURCE_FILE ("graphviz.ggs", 262)) ;
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
    GALGAS_bool var_hasRunAction_8827 ;
    GALGAS_bool var_handlesTableValueBinding_8863 ;
    GALGAS_bool var_hasEnabled_8885 ;
    GALGAS_bool var_hasHidden_8906 ;
    GALGAS_bool var_handlesGraphicControllerBinding_8949 ;
    const GALGAS_autoLayoutViewClassDeclarationAST temp_11 = this ;
    GALGAS_lstring joker_8802 ; // Joker input parameter
    GALGAS_bool joker_8957_3 ; // Joker input parameter
    GALGAS_autoLayoutClassParameterList joker_8957_2 ; // Joker input parameter
    GALGAS_astAutoLayoutViewFunctionMap joker_8957_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mAutolayoutViewClassMap ().method_searchKey (temp_11.readProperty_mSuperClassName (), joker_8802, var_hasRunAction_8827, var_handlesTableValueBinding_8863, var_hasEnabled_8885, var_hasHidden_8906, var_handlesGraphicControllerBinding_8949, joker_8957_3, joker_8957_2, joker_8957_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 249)) ;
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      const GALGAS_autoLayoutViewClassDeclarationAST temp_13 = this ;
      test_12 = temp_13.readProperty_mHasRunAction ().operator_and (var_hasRunAction_8827 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 259)).boolEnum () ;
      if (kBoolTrue == test_12) {
        const GALGAS_autoLayoutViewClassDeclarationAST temp_14 = this ;
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mClassName ().readProperty_location (), GALGAS_string ("$run binding already defined in superclass"), fixItArray15  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 260)) ;
      }
    }
    enumGalgasBool test_16 = kBoolTrue ;
    if (kBoolTrue == test_16) {
      const GALGAS_autoLayoutViewClassDeclarationAST temp_17 = this ;
      test_16 = temp_17.readProperty_mHandlesTableValueBinding ().operator_and (var_handlesTableValueBinding_8863 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 262)).boolEnum () ;
      if (kBoolTrue == test_16) {
        const GALGAS_autoLayoutViewClassDeclarationAST temp_18 = this ;
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (temp_18.readProperty_mClassName ().readProperty_location (), GALGAS_string ("$tableview binding already defined in superclass"), fixItArray19  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 263)) ;
      }
    }
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      const GALGAS_autoLayoutViewClassDeclarationAST temp_21 = this ;
      test_20 = temp_21.readProperty_mHasEnabled ().operator_and (var_hasEnabled_8885 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 265)).boolEnum () ;
      if (kBoolTrue == test_20) {
        const GALGAS_autoLayoutViewClassDeclarationAST temp_22 = this ;
        TC_Array <C_FixItDescription> fixItArray23 ;
        inCompiler->emitSemanticError (temp_22.readProperty_mClassName ().readProperty_location (), GALGAS_string ("$enabled binding already defined in superclass"), fixItArray23  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 266)) ;
      }
    }
    enumGalgasBool test_24 = kBoolTrue ;
    if (kBoolTrue == test_24) {
      const GALGAS_autoLayoutViewClassDeclarationAST temp_25 = this ;
      test_24 = temp_25.readProperty_mHasHidden ().operator_and (var_hasHidden_8906 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 268)).boolEnum () ;
      if (kBoolTrue == test_24) {
        const GALGAS_autoLayoutViewClassDeclarationAST temp_26 = this ;
        TC_Array <C_FixItDescription> fixItArray27 ;
        inCompiler->emitSemanticError (temp_26.readProperty_mClassName ().readProperty_location (), GALGAS_string ("$hidden binding already defined in superclass"), fixItArray27  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 269)) ;
      }
    }
    enumGalgasBool test_28 = kBoolTrue ;
    if (kBoolTrue == test_28) {
      const GALGAS_autoLayoutViewClassDeclarationAST temp_29 = this ;
      test_28 = temp_29.readProperty_mHandlesGraphicControllerBinding ().operator_and (var_handlesGraphicControllerBinding_8949 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 271)).boolEnum () ;
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
    ioArgument_ioSemanticContext.mProperty_mAutolayoutViewClassMap.setter_insertKey (temp_32.readProperty_mClassName (), temp_33.readProperty_mSuperClassName (), temp_34.readProperty_mHasRunAction ().operator_or (var_hasRunAction_8827 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 278)), temp_35.readProperty_mHandlesTableValueBinding ().operator_or (var_handlesTableValueBinding_8863 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 279)), temp_36.readProperty_mHasEnabled ().operator_or (var_hasEnabled_8885 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 280)), temp_37.readProperty_mHasHidden ().operator_or (var_hasHidden_8906 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 281)), temp_38.readProperty_mHandlesGraphicControllerBinding ().operator_or (var_handlesGraphicControllerBinding_8949 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 282)), temp_39.readProperty_mUserDefined (), temp_40.readProperty_mParameterList (), temp_41.readProperty_mAutoLayoutViewFunctionMap (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 275)) ;
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
  cEnumerator_autoLayoutViewClassBindingSpecificationList enumerator_3838 (constinArgument_inBindingSpecificationListMap, kENUMERATION_UP) ;
  while (enumerator_3838.hasCurrentObject ()) {
    GALGAS_outletBindingSpecificationModelList var_outletBindingSpecificationModelList_3956 = GALGAS_outletBindingSpecificationModelList::constructor_emptyList (SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 97)) ;
    cEnumerator_outletClassBindingSpecificationModelList enumerator_4016 (enumerator_3838.current_mOutletClassBindingSpecificationModelList (HERE), kENUMERATION_UP) ;
    while (enumerator_4016.hasCurrentObject ()) {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (kIsEqual, enumerator_4016.current_mModelTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string ("enum"))).boolEnum () ;
        if (kBoolTrue == test_0) {
          var_outletBindingSpecificationModelList_3956.addAssign_operation (GALGAS_typeKind::constructor_enumType (GALGAS_string::makeEmptyString (), GALGAS_enumConstantMap::constructor_emptyMap (SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 101)), GALGAS_enumFuncMap::constructor_emptyMap (SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 101))  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 101)), enumerator_4016.current_mModelShouldBeWritableProperty (HERE)  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 100)) ;
        }
      }
      if (kBoolFalse == test_0) {
        GALGAS_classKind var_classKind_4389 ;
        GALGAS_propertyMap joker_4391_3 ; // Joker input parameter
        GALGAS_actionMap joker_4391_2 ; // Joker input parameter
        GALGAS_propertyGenerationList joker_4391_1 ; // Joker input parameter
        ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (enumerator_4016.current_mModelTypeName (HERE), var_classKind_4389, joker_4391_3, joker_4391_2, joker_4391_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 104)) ;
        GALGAS_typeKind var_typeKind_4425 ;
        switch (var_classKind_4389.enumValue ()) {
        case GALGAS_classKind::kNotBuilt:
          break ;
        case GALGAS_classKind::kEnum_prefs:
          {
            TC_Array <C_FixItDescription> fixItArray1 ;
            inCompiler->emitSemanticError (enumerator_4016.current_mModelTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray1  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 108)) ;
            var_typeKind_4425.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_classKind::kEnum_atomic:
          {
            const cEnumAssociatedValues_classKind_atomic * extractPtr_4619 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_4389.unsafePointer ()) ;
            const GALGAS_typeKind extractedValue_4590_kind = extractPtr_4619->mAssociatedValue0 ;
            var_typeKind_4425 = extractedValue_4590_kind ;
          }
          break ;
        case GALGAS_classKind::kEnum_document:
          {
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (enumerator_4016.current_mModelTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray2  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 112)) ;
            var_typeKind_4425.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_classKind::kEnum_entity:
          {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (enumerator_4016.current_mModelTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray3  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 114)) ;
            var_typeKind_4425.drop () ; // Release error dropped variable
          }
          break ;
        }
        var_outletBindingSpecificationModelList_3956.addAssign_operation (var_typeKind_4425, enumerator_4016.current_mModelShouldBeWritableProperty (HERE)  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 116)) ;
      }
      enumerator_4016.gotoNextObject () ;
    }
    GALGAS_controllerBindingOptionDecoratedList var_controllerBindingOptionDecoratedList_5042 = GALGAS_controllerBindingOptionDecoratedList::constructor_emptyList (SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 119)) ;
    cEnumerator_controllerBindingOptionList enumerator_5084 (enumerator_3838.current_mBindingOptionList (HERE), kENUMERATION_UP) ;
    while (enumerator_5084.hasCurrentObject ()) {
      GALGAS_classKind var_classKind_5198 ;
      GALGAS_propertyMap joker_5200_3 ; // Joker input parameter
      GALGAS_actionMap joker_5200_2 ; // Joker input parameter
      GALGAS_propertyGenerationList joker_5200_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (enumerator_5084.current_mOptionTypeName (HERE), var_classKind_5198, joker_5200_3, joker_5200_2, joker_5200_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 121)) ;
      GALGAS_typeKind var_typeKind_5232 ;
      switch (var_classKind_5198.enumValue ()) {
      case GALGAS_classKind::kNotBuilt:
        break ;
      case GALGAS_classKind::kEnum_prefs:
        {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_5084.current_mOptionTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray4  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 125)) ;
          var_typeKind_5232.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_classKind::kEnum_atomic:
        {
          const cEnumAssociatedValues_classKind_atomic * extractPtr_5417 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_5198.unsafePointer ()) ;
          const GALGAS_typeKind extractedValue_5390_kind = extractPtr_5417->mAssociatedValue0 ;
          var_typeKind_5232 = extractedValue_5390_kind ;
        }
        break ;
      case GALGAS_classKind::kEnum_document:
        {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (enumerator_5084.current_mOptionTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray5  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 129)) ;
          var_typeKind_5232.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_classKind::kEnum_entity:
        {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (enumerator_5084.current_mOptionTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 131)) ;
          var_typeKind_5232.drop () ; // Release error dropped variable
        }
        break ;
      }
      var_controllerBindingOptionDecoratedList_5042.addAssign_operation (var_typeKind_5232, enumerator_5084.current_mOptionName (HERE)  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 133)) ;
      enumerator_5084.gotoNextObject () ;
    }
    GALGAS_autoLayoutViewBindingSpecificationMap var_bindingMap_5806 ;
    GALGAS_lstring var_outletSuperClassName_5844 ;
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = ioArgument_ioSemanticContext.readProperty_mAutoLayoutBindingSpecificationMap ().getter_hasKey (enumerator_3838.current_mOutletClassName (HERE).readProperty_string () COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 138)).boolEnum () ;
      if (kBoolTrue == test_7) {
        {
        ioArgument_ioSemanticContext.mProperty_mAutoLayoutBindingSpecificationMap.setter_removeKey (enumerator_3838.current_mOutletClassName (HERE), var_outletSuperClassName_5844, var_bindingMap_5806, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 139)) ;
        }
      }
    }
    if (kBoolFalse == test_7) {
      var_bindingMap_5806 = GALGAS_autoLayoutViewBindingSpecificationMap::constructor_emptyMap (SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 141)) ;
      GALGAS_bool joker_6199_8 ; // Joker input parameter
      GALGAS_bool joker_6199_7 ; // Joker input parameter
      GALGAS_bool joker_6199_6 ; // Joker input parameter
      GALGAS_bool joker_6199_5 ; // Joker input parameter
      GALGAS_bool joker_6199_4 ; // Joker input parameter
      GALGAS_bool joker_6199_3 ; // Joker input parameter
      GALGAS_autoLayoutClassParameterList joker_6199_2 ; // Joker input parameter
      GALGAS_astAutoLayoutViewFunctionMap joker_6199_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mAutolayoutViewClassMap ().method_searchKey (enumerator_3838.current_mOutletClassName (HERE), var_outletSuperClassName_5844, joker_6199_8, joker_6199_7, joker_6199_6, joker_6199_5, joker_6199_4, joker_6199_3, joker_6199_2, joker_6199_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 142)) ;
    }
    {
    var_bindingMap_5806.setter_insertKey (enumerator_3838.current_mBindingName (HERE), var_outletBindingSpecificationModelList_3956, var_controllerBindingOptionDecoratedList_5042, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 144)) ;
    }
    {
    ioArgument_ioSemanticContext.mProperty_mAutoLayoutBindingSpecificationMap.setter_insertKey (enumerator_3838.current_mOutletClassName (HERE), var_outletSuperClassName_5844, var_bindingMap_5806, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 149)) ;
    }
    enumerator_3838.gotoNextObject () ;
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
  GALGAS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_29085 ;
  const GALGAS_astComputedHorizontalViewDeclaration temp_0 = this ;
  extensionMethod_checkViewFunctionCallList (temp_0.readProperty_mFunctionCallList (), constinArgument_inSemanticContext.readProperty_mAutoLayoutHStackFunctionMap (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_29085, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 661)) ;
  GALGAS_autoLayoutViewInstructionGenerationList var_instructionList_29152 = GALGAS_autoLayoutViewInstructionGenerationList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 677)) ;
  const GALGAS_astComputedHorizontalViewDeclaration temp_1 = this ;
  cEnumerator_astViewInstructionList enumerator_29176 (temp_1.readProperty_mInstructionList (), kENUMERATION_UP) ;
  while (enumerator_29176.hasCurrentObject ()) {
    GALGAS_abstractViewInstructionGeneration var_generatedInstruction_29609 ;
    callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) enumerator_29176.current_mInstruction (HERE).ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_generatedInstruction_29609, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 679)) ;
    var_instructionList_29152.addAssign_operation (var_generatedInstruction_29609  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 694)) ;
    enumerator_29176.gotoNextObject () ;
  }
  const GALGAS_astComputedHorizontalViewDeclaration temp_2 = this ;
  outArgument_outGeneration = GALGAS_computedHorizontalViewGeneration::constructor_new (var_funcCallList_29085, var_instructionList_29152, temp_2.readProperty_mNewStackViewDeclarationList ()  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 696)) ;
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
  GALGAS_autoLayoutViewInstructionGenerationList var_instructionList_31093 = GALGAS_autoLayoutViewInstructionGenerationList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 716)) ;
  GALGAS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_31594 ;
  const GALGAS_astComputedVerticalViewDeclaration temp_0 = this ;
  extensionMethod_checkViewFunctionCallList (temp_0.readProperty_mFunctionCallList (), constinArgument_inSemanticContext.readProperty_mAutoLayoutVStackFunctionMap (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_31594, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 717)) ;
  const GALGAS_astComputedVerticalViewDeclaration temp_1 = this ;
  cEnumerator_astViewInstructionList enumerator_31617 (temp_1.readProperty_mInstructionList (), kENUMERATION_UP) ;
  while (enumerator_31617.hasCurrentObject ()) {
    GALGAS_abstractViewInstructionGeneration var_generatedInstruction_32049 ;
    callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) enumerator_31617.current_mInstruction (HERE).ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_generatedInstruction_32049, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 734)) ;
    var_instructionList_31093.addAssign_operation (var_generatedInstruction_32049  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 749)) ;
    enumerator_31617.gotoNextObject () ;
  }
  const GALGAS_astComputedVerticalViewDeclaration temp_2 = this ;
  outArgument_outGeneration = GALGAS_computedVerticalViewGeneration::constructor_new (var_funcCallList_31594, var_instructionList_31093, temp_2.readProperty_mNewStackViewDeclarationList ()  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 751)) ;
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
  GALGAS_autoLayoutClassParameterList var_formalParameterList_40060 ;
  GALGAS_astAutoLayoutViewFunctionMap var_functionMap_40082 ;
  const GALGAS_astComputedViewInstruction temp_0 = this ;
  GALGAS_lstring joker_40028_7 ; // Joker input parameter
  GALGAS_bool joker_40028_6 ; // Joker input parameter
  GALGAS_bool joker_40028_5 ; // Joker input parameter
  GALGAS_bool joker_40028_4 ; // Joker input parameter
  GALGAS_bool joker_40028_3 ; // Joker input parameter
  GALGAS_bool joker_40028_2 ; // Joker input parameter
  GALGAS_bool joker_40028_1 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mAutolayoutViewClassMap ().method_searchKey (temp_0.readProperty_mAutoLayoutViewClassName (), joker_40028_7, joker_40028_6, joker_40028_5, joker_40028_4, joker_40028_3, joker_40028_2, joker_40028_1, var_formalParameterList_40060, var_functionMap_40082, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 864)) ;
  GALGAS_autoLayoutViewInstructionGenerationParameterList var_parameterList_40156 = GALGAS_autoLayoutViewInstructionGenerationParameterList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 869)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_astComputedViewInstruction temp_2 = this ;
    test_1 = GALGAS_bool (kIsNotEqual, var_formalParameterList_40060.getter_length (SOURCE_FILE ("auto-layout-view.ggs", 870)).objectCompare (temp_2.readProperty_mParameterList ().getter_length (SOURCE_FILE ("auto-layout-view.ggs", 870)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_astComputedViewInstruction temp_3 = this ;
      const GALGAS_astComputedViewInstruction temp_4 = this ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mAutoLayoutViewClassName ().readProperty_location (), var_formalParameterList_40060.getter_length (SOURCE_FILE ("auto-layout-view.ggs", 872)).getter_string (SOURCE_FILE ("auto-layout-view.ggs", 872)).add_operation (GALGAS_string (" parameter(s) required, "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 872)).add_operation (temp_4.readProperty_mParameterList ().getter_length (SOURCE_FILE ("auto-layout-view.ggs", 872)).getter_string (SOURCE_FILE ("auto-layout-view.ggs", 872)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 872)).add_operation (GALGAS_string (" provided"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 872)), fixItArray5  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 871)) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_astComputedViewInstruction temp_6 = this ;
    cEnumerator_astAutoLayoutViewInstructionParameterList enumerator_40428 (temp_6.readProperty_mParameterList (), kENUMERATION_UP) ;
    cEnumerator_autoLayoutClassParameterList enumerator_40476 (var_formalParameterList_40060, kENUMERATION_UP) ;
    while (enumerator_40428.hasCurrentObject () && enumerator_40476.hasCurrentObject ()) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        GALGAS_lstring var_enumTypeName_40561 ;
        const bool optionalResult40537 = enumerator_40476.current_mParameterType (HERE).optional_typeEnum (var_enumTypeName_40561) ;
        if (!optionalResult40537) {
          test_7 = kBoolFalse ;
        }
        if (kBoolTrue == test_7) {
          GALGAS_lstring var_constantName_40606 ;
          const bool optionalResult40582 = enumerator_40428.current_mParameterType (HERE).optional_typeEnum (var_constantName_40606) ;
          if (!optionalResult40582) {
            test_7 = kBoolFalse ;
          }
          if (kBoolTrue == test_7) {
            GALGAS_classKind var_typeKind_40670 ;
            GALGAS_propertyMap joker_40672_3 ; // Joker input parameter
            GALGAS_actionMap joker_40672_2 ; // Joker input parameter
            GALGAS_propertyGenerationList joker_40672_1 ; // Joker input parameter
            constinArgument_inClassMap.method_searchKey (var_enumTypeName_40561, var_typeKind_40670, joker_40672_3, joker_40672_2, joker_40672_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 876)) ;
            enumGalgasBool test_8 = kBoolTrue ;
            if (kBoolTrue == test_8) {
              GALGAS_typeKind var_classKind_40728 ;
              const bool optionalResult40707 = var_typeKind_40670.optional_atomic (var_classKind_40728) ;
              if (!optionalResult40707) {
                test_8 = kBoolFalse ;
              }
              if (kBoolTrue == test_8) {
                GALGAS_string var_unused_0_40758 ;
                GALGAS_enumConstantMap var_constantMap_40788 ;
                GALGAS_enumFuncMap var_unused_0_40792 ;
                const bool optionalResult40754 = var_classKind_40728.optional_enumType (var_unused_0_40758, var_constantMap_40788, var_unused_0_40792) ;
                if (!optionalResult40754) {
                  test_8 = kBoolFalse ;
                }
                if (kBoolTrue == test_8) {
                  GALGAS_uint joker_40847 ; // Joker input parameter
                  var_constantMap_40788.method_searchKey (var_constantName_40606, joker_40847, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 878)) ;
                }
              }
            }
            if (kBoolFalse == test_8) {
              TC_Array <C_FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (var_enumTypeName_40561.readProperty_location (), GALGAS_string ("this type name is not an enum"), fixItArray9  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 880)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_7) {
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          test_10 = GALGAS_bool (kIsNotEqual, enumerator_40428.current_mParameterType (HERE).objectCompare (enumerator_40476.current_mParameterType (HERE))).boolEnum () ;
          if (kBoolTrue == test_10) {
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (enumerator_40428.current_mParameterName (HERE).readProperty_location (), GALGAS_string ("the formal parameter requires ").add_operation (extensionGetter_string (enumerator_40476.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 883)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 883)).add_operation (GALGAS_string (", actual parameter is "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 883)).add_operation (extensionGetter_string (enumerator_40428.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 883)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 883)), fixItArray11  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 883)) ;
          }
        }
      }
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = GALGAS_bool (kIsNotEqual, enumerator_40428.current_mParameterName (HERE).readProperty_string ().objectCompare (enumerator_40476.current_mParameterName (HERE).readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_12) {
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (enumerator_40428.current_mParameterName (HERE).readProperty_location (), GALGAS_string ("the parameter name should be '").add_operation (enumerator_40476.current_mParameterName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 886)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 886)), fixItArray13  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 886)) ;
        }
      }
      switch (enumerator_40428.current_mParameter (HERE).enumValue ()) {
      case GALGAS_astAutoLayoutViewInstructionParameterValue::kNotBuilt:
        break ;
      case GALGAS_astAutoLayoutViewInstructionParameterValue::kEnum_viewFunc:
        {
          const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_viewFunc * extractPtr_41988 = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_viewFunc *) (enumerator_40428.current_mParameter (HERE).unsafePointer ()) ;
          const GALGAS_astAbstractViewInstructionDeclaration extractedValue_41268_instruction = extractPtr_41988->mAssociatedValue0 ;
          GALGAS_abstractViewInstructionGeneration var_viewInstruction_41790 ;
          callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) extractedValue_41268_instruction.ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_viewInstruction_41790, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 890)) ;
          var_parameterList_40156.addAssign_operation (enumerator_40428.current_mParameterName (HERE).readProperty_string (), GALGAS_string ("self.computeImplicitView_").add_operation (ioArgument_ioImplicitViewFunctionGenerationList.getter_length (SOURCE_FILE ("auto-layout-view.ggs", 905)).getter_string (SOURCE_FILE ("auto-layout-view.ggs", 905)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 905)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 905))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 905)) ;
          ioArgument_ioImplicitViewFunctionGenerationList.addAssign_operation (var_viewInstruction_41790  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 906)) ;
        }
        break ;
      case GALGAS_astAutoLayoutViewInstructionParameterValue::kEnum_entity:
        {
          const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_entity * extractPtr_42254 = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_entity *) (enumerator_40428.current_mParameter (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_42018_entityName = extractPtr_42254->mAssociatedValue0 ;
          GALGAS_classKind var_classKind_42078 ;
          GALGAS_propertyMap joker_42080_3 ; // Joker input parameter
          GALGAS_actionMap joker_42080_2 ; // Joker input parameter
          GALGAS_propertyGenerationList joker_42080_1 ; // Joker input parameter
          constinArgument_inClassMap.method_searchKey (extractedValue_42018_entityName, var_classKind_42078, joker_42080_3, joker_42080_2, joker_42080_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 908)) ;
          enumGalgasBool test_14 = kBoolTrue ;
          if (kBoolTrue == test_14) {
            test_14 = var_classKind_42078.getter_isEntity (SOURCE_FILE ("auto-layout-view.ggs", 909)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 909)).boolEnum () ;
            if (kBoolTrue == test_14) {
              TC_Array <C_FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (extractedValue_42018_entityName.readProperty_location (), GALGAS_string ("an entity is required here"), fixItArray15  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 910)) ;
            }
          }
          var_parameterList_40156.addAssign_operation (enumerator_40428.current_mParameterName (HERE).readProperty_string (), extractedValue_42018_entityName.readProperty_string ().add_operation (GALGAS_string (".self"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 912))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 912)) ;
        }
        break ;
      case GALGAS_astAutoLayoutViewInstructionParameterValue::kEnum_string:
        {
          const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_string * extractPtr_42332 = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_string *) (enumerator_40428.current_mParameter (HERE).unsafePointer ()) ;
          const GALGAS_string extractedValue_42285_stringValue = extractPtr_42332->mAssociatedValue0 ;
          var_parameterList_40156.addAssign_operation (enumerator_40428.current_mParameterName (HERE).readProperty_string (), extractedValue_42285_stringValue  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 914)) ;
        }
        break ;
      case GALGAS_astAutoLayoutViewInstructionParameterValue::kEnum_menuItem:
        {
          const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_menuItem * extractPtr_43675 = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_menuItem *) (enumerator_40428.current_mParameter (HERE).unsafePointer ()) ;
          const GALGAS_string extractedValue_42359_title = extractPtr_43675->mAssociatedValue0 ;
          const GALGAS_runActionDescriptor extractedValue_42363_run = extractPtr_43675->mAssociatedValue1 ;
          const GALGAS_multipleBindingDescriptor extractedValue_42378_enabledBinding = extractPtr_43675->mAssociatedValue2 ;
          GALGAS_autolayoutRunBindingForGeneration var_runBindingGeneration_42687 ;
          {
          routine_analyzeAutoLayoutRunBinding (extractedValue_42363_run, GALGAS_bool (true), constinArgument_inPreferences, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-view.ggs", 920)), constinArgument_inActionMap, constinArgument_inObservablePropertyMap, constinArgument_inReceiverSwiftTypeName, var_runBindingGeneration_42687, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 916)) ;
          }
          GALGAS_autolayoutEnabledBindingForGeneration var_enabledBindingGeneration_43024 ;
          {
          routine_analyzeAutoLayoutEnableBinding (extractedValue_42378_enabledBinding, GALGAS_bool (true), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_enabledBindingGeneration_43024, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 926)) ;
          }
          GALGAS_string var_s_43048 = GALGAS_string ("AutoLayoutMenuItemDescriptor (title: ").add_operation (extractedValue_42359_title.getter_utf_38_Representation (SOURCE_FILE ("auto-layout-view.ggs", 936)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 936)) ;
          switch (var_runBindingGeneration_42687.enumValue ()) {
          case GALGAS_autolayoutRunBindingForGeneration::kNotBuilt:
            break ;
          case GALGAS_autolayoutRunBindingForGeneration::kEnum_none:
            {
              var_s_43048.plusAssign_operation(GALGAS_string (", target: nil, selector: nil"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 939)) ;
            }
            break ;
          case GALGAS_autolayoutRunBindingForGeneration::kEnum_run:
            {
              const cEnumAssociatedValues_autolayoutRunBindingForGeneration_run * extractPtr_43395 = (const cEnumAssociatedValues_autolayoutRunBindingForGeneration_run *) (var_runBindingGeneration_42687.unsafePointer ()) ;
              const GALGAS_string extractedValue_43252_targetName = extractPtr_43395->mAssociatedValue0 ;
              const GALGAS_string extractedValue_43263_actionName = extractPtr_43395->mAssociatedValue1 ;
              const GALGAS_string extractedValue_43277_runTargetName = extractPtr_43395->mAssociatedValue2 ;
              var_s_43048.plusAssign_operation(GALGAS_string (", target: ").add_operation (extractedValue_43252_targetName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 941)).add_operation (GALGAS_string (", selector: #selector ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 941)).add_operation (extractedValue_43277_runTargetName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 941)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 941)).add_operation (extractedValue_43263_actionName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 941)).add_operation (GALGAS_string (" (_:))"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 941)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 941)) ;
            }
            break ;
          }
          switch (var_enabledBindingGeneration_43024.enumValue ()) {
          case GALGAS_autolayoutEnabledBindingForGeneration::kNotBuilt:
            break ;
          case GALGAS_autolayoutEnabledBindingForGeneration::kEnum_none:
            {
              var_s_43048.plusAssign_operation(GALGAS_string (", enableBinding: .alwaysTrue"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 945)) ;
            }
            break ;
          case GALGAS_autolayoutEnabledBindingForGeneration::kEnum_enabled:
            {
              const cEnumAssociatedValues_autolayoutEnabledBindingForGeneration_enabled * extractPtr_43612 = (const cEnumAssociatedValues_autolayoutEnabledBindingForGeneration_enabled *) (var_enabledBindingGeneration_43024.unsafePointer ()) ;
              const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration extractedValue_43544_binding = extractPtr_43612->mAssociatedValue0 ;
              var_s_43048.plusAssign_operation(GALGAS_string (", enableBinding: ").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) extractedValue_43544_binding.ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 947)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 947)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 947)) ;
            }
            break ;
          }
          var_s_43048.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 949)) ;
          var_parameterList_40156.addAssign_operation (enumerator_40428.current_mParameterName (HERE).readProperty_string (), var_s_43048  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 950)) ;
        }
        break ;
      case GALGAS_astAutoLayoutViewInstructionParameterValue::kEnum_enumFunc:
        {
          const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_enumFunc * extractPtr_44285 = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_enumFunc *) (enumerator_40428.current_mParameter (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_43709_enumTypeName = extractPtr_44285->mAssociatedValue0 ;
          const GALGAS_lstring extractedValue_43718_funcName = extractPtr_44285->mAssociatedValue1 ;
          GALGAS_classKind var_type_43792 ;
          GALGAS_propertyMap joker_43794_3 ; // Joker input parameter
          GALGAS_actionMap joker_43794_2 ; // Joker input parameter
          GALGAS_propertyGenerationList joker_43794_1 ; // Joker input parameter
          constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_43709_enumTypeName, var_type_43792, joker_43794_3, joker_43794_2, joker_43794_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 952)) ;
          enumGalgasBool test_16 = kBoolTrue ;
          if (kBoolTrue == test_16) {
            test_16 = var_type_43792.getter_isAtomic (SOURCE_FILE ("auto-layout-view.ggs", 953)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 953)).boolEnum () ;
            if (kBoolTrue == test_16) {
              TC_Array <C_FixItDescription> fixItArray17 ;
              inCompiler->emitSemanticError (extractedValue_43709_enumTypeName.readProperty_location (), GALGAS_string ("this type should be an enum type"), fixItArray17  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 954)) ;
            }
          }
          if (kBoolFalse == test_16) {
            GALGAS_typeKind var_typeKind_43955 ;
            var_type_43792.method_atomic (var_typeKind_43955, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 956)) ;
            enumGalgasBool test_18 = kBoolTrue ;
            if (kBoolTrue == test_18) {
              test_18 = var_typeKind_43955.getter_isEnumType (SOURCE_FILE ("auto-layout-view.ggs", 957)).boolEnum () ;
              if (kBoolTrue == test_18) {
                GALGAS_enumFuncMap var_funcMap_44053 ;
                GALGAS_string joker_44030_2 ; // Joker input parameter
                GALGAS_enumConstantMap joker_44030_1 ; // Joker input parameter
                var_typeKind_43955.method_enumType (joker_44030_2, joker_44030_1, var_funcMap_44053, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 958)) ;
                GALGAS_enumFunAssociationSortedList joker_44097 ; // Joker input parameter
                var_funcMap_44053.method_searchKey (extractedValue_43718_funcName, joker_44097, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 959)) ;
              }
            }
            if (kBoolFalse == test_18) {
              TC_Array <C_FixItDescription> fixItArray19 ;
              inCompiler->emitSemanticError (extractedValue_43709_enumTypeName.readProperty_location (), GALGAS_string ("this type should be an enum type"), fixItArray19  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 961)) ;
            }
          }
          var_parameterList_40156.addAssign_operation (enumerator_40428.current_mParameterName (HERE).readProperty_string (), extractedValue_43709_enumTypeName.readProperty_string ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 964)).add_operation (extractedValue_43718_funcName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 964)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 964))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 964)) ;
        }
        break ;
      }
      enumerator_40428.gotoNextObject () ;
      enumerator_40476.gotoNextObject () ;
    }
  }
  GALGAS_autoLayoutRegularBindingsGenerationList var_regularBindingsGenerationList_44846 ;
  GALGAS_autoLayoutMultipleBindingGenerationList var_multipleBindingGenerationList_44926 ;
  GALGAS_autolayoutRunBindingForGeneration var_runBindingGeneration_44991 ;
  GALGAS_string var_inTableViewBindingGeneration_45037 ;
  GALGAS_autoLayoutViewGraphicControllerBindingGeneration var_ebViewGraphicControllerBindingGeneration_45137 ;
  {
  const GALGAS_astComputedViewInstruction temp_20 = this ;
  const GALGAS_astComputedViewInstruction temp_21 = this ;
  const GALGAS_astComputedViewInstruction temp_22 = this ;
  const GALGAS_astComputedViewInstruction temp_23 = this ;
  const GALGAS_astComputedViewInstruction temp_24 = this ;
  const GALGAS_astComputedViewInstruction temp_25 = this ;
  const GALGAS_astComputedViewInstruction temp_26 = this ;
  routine_analyzeAutoLayoutBinding (constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, temp_20.readProperty_mAutoLayoutViewClassName (), temp_21.readProperty_mTableValueBinding (), temp_22.readProperty_mRunActionDescriptor (), temp_23.readProperty_mEnabledBindingDescriptor (), temp_24.readProperty_mHiddenBindingDescriptor (), temp_25.readProperty_mGraphicController (), temp_26.readProperty_mRegularBindingList (), var_regularBindingsGenerationList_44846, var_multipleBindingGenerationList_44926, var_runBindingGeneration_44991, var_inTableViewBindingGeneration_45037, var_ebViewGraphicControllerBindingGeneration_45137, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 969)) ;
  }
  GALGAS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_45602 ;
  const GALGAS_astComputedViewInstruction temp_27 = this ;
  extensionMethod_checkViewFunctionCallList (temp_27.readProperty_mFunctionCallList (), var_functionMap_40082, constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_45602, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 993)) ;
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
  outArgument_outInstruction = GALGAS_autoLayoutComputedViewInstructionGeneration::constructor_new (temp_37.readProperty_mAutoLayoutViewClassName (), var_parameterList_40156, var_funcCallList_45602, var_regularBindingsGenerationList_44846, var_multipleBindingGenerationList_44926, var_runBindingGeneration_44991, var_inTableViewBindingGeneration_45037, var_ebViewGraphicControllerBindingGeneration_45137, temp_38.readProperty_mConfiguratorName ().readProperty_string (), temp_39.readProperty_mOutletName ().readProperty_string (), temp_40.readProperty_mOutletIsArray ()  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1018)) ;
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
  GALGAS_bool var_handlesRunAction_47749 ;
  GALGAS_bool var_handlesTableViewBinding_47788 ;
  GALGAS_bool var_handlesEnabledBinding_47825 ;
  GALGAS_bool var_handlesHiddenBinding_47861 ;
  GALGAS_bool var_handleGraphicControllerBinding_47907 ;
  GALGAS_lstring joker_47716 ; // Joker input parameter
  GALGAS_bool joker_47913_3 ; // Joker input parameter
  GALGAS_autoLayoutClassParameterList joker_47913_2 ; // Joker input parameter
  GALGAS_astAutoLayoutViewFunctionMap joker_47913_1 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mAutolayoutViewClassMap ().method_searchKey (constinArgument_inTypeName, joker_47716, var_handlesRunAction_47749, var_handlesTableViewBinding_47788, var_handlesEnabledBinding_47825, var_handlesHiddenBinding_47861, var_handleGraphicControllerBinding_47907, joker_47913_3, joker_47913_2, joker_47913_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1062)) ;
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
      const cEnumAssociatedValues_graphicController_defined * extractPtr_50186 = (const cEnumAssociatedValues_graphicController_defined *) (constinArgument_inGraphicController.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_48080_controllerName = extractPtr_50186->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_48102_propertyName = extractPtr_50186->mAssociatedValue1 ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = var_handleGraphicControllerBinding_47907.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1077)).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1078)).add_operation (GALGAS_string ("' type does not handle the $graphicController binding"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1078)), fixItArray1  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1078)) ;
        }
      }
      if (kBoolFalse == test_0) {
        GALGAS_propertyKind var_kind_48362 ;
        GALGAS_actionMap joker_48372_2 ; // Joker input parameter
        GALGAS_bool joker_48372_1 ; // Joker input parameter
        constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_48080_controllerName, var_kind_48362, joker_48372_2, joker_48372_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1080)) ;
        switch (var_kind_48362.enumValue ()) {
        case GALGAS_propertyKind::kNotBuilt:
          break ;
        case GALGAS_propertyKind::kEnum_property:
          {
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (extractedValue_48080_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray2  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1087)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_toMany:
          {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (extractedValue_48080_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray3  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1089)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_toOne:
          {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (extractedValue_48080_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray4  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1091)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_arrayController:
          {
            const cEnumAssociatedValues_propertyKind_arrayController * extractPtr_49935 = (const cEnumAssociatedValues_propertyKind_arrayController *) (var_kind_48362.unsafePointer ()) ;
            const GALGAS_lstring extractedValue_48753_entityName = extractPtr_49935->mAssociatedValue0 ;
            const GALGAS_bool extractedValue_48761_graphic = extractPtr_49935->mAssociatedValue1 ;
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = GALGAS_bool (kIsEqual, extractedValue_48102_propertyName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_5) {
                enumGalgasBool test_6 = kBoolTrue ;
                if (kBoolTrue == test_6) {
                  test_6 = extractedValue_48761_graphic.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1094)).boolEnum () ;
                  if (kBoolTrue == test_6) {
                    TC_Array <C_FixItDescription> fixItArray7 ;
                    inCompiler->emitSemanticError (extractedValue_48080_controllerName.readProperty_location (), GALGAS_string ("the controlled entity (").add_operation (extractedValue_48753_entityName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1095)).add_operation (GALGAS_string (") should be a graphic entity"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1095)), fixItArray7  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1095)) ;
                  }
                }
              }
            }
            if (kBoolFalse == test_5) {
              GALGAS_propertyMap var_observablePropertyMap_49097 ;
              GALGAS_classKind joker_49057 ; // Joker input parameter
              GALGAS_actionMap joker_49111_2 ; // Joker input parameter
              GALGAS_propertyGenerationList joker_49111_1 ; // Joker input parameter
              constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_48753_entityName, joker_49057, var_observablePropertyMap_49097, joker_49111_2, joker_49111_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1098)) ;
              GALGAS_propertyKind var_propertyKind_49200 ;
              GALGAS_actionMap joker_49202_2 ; // Joker input parameter
              GALGAS_bool joker_49202_1 ; // Joker input parameter
              var_observablePropertyMap_49097.method_searchKey (extractedValue_48102_propertyName, var_propertyKind_49200, joker_49202_2, joker_49202_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1104)) ;
              switch (var_propertyKind_49200.enumValue ()) {
              case GALGAS_propertyKind::kNotBuilt:
                break ;
              case GALGAS_propertyKind::kEnum_property:
                {
                  TC_Array <C_FixItDescription> fixItArray8 ;
                  inCompiler->emitSemanticError (extractedValue_48080_controllerName.readProperty_location (), GALGAS_string ("the bound model should be a toMany property"), fixItArray8  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1107)) ;
                }
                break ;
              case GALGAS_propertyKind::kEnum_toMany:
                {
                  const cEnumAssociatedValues_propertyKind_toMany * extractPtr_49560 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_propertyKind_49200.unsafePointer ()) ;
                  const GALGAS_lstring extractedValue_49383_kEntityName = extractPtr_49560->mAssociatedValue0 ;
                  const GALGAS_bool extractedValue_49395_isGraphic = extractPtr_49560->mAssociatedValue2 ;
                  enumGalgasBool test_9 = kBoolTrue ;
                  if (kBoolTrue == test_9) {
                    test_9 = extractedValue_49395_isGraphic.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1109)).boolEnum () ;
                    if (kBoolTrue == test_9) {
                      TC_Array <C_FixItDescription> fixItArray10 ;
                      inCompiler->emitSemanticError (extractedValue_48080_controllerName.readProperty_location (), GALGAS_string ("the controlled entity (").add_operation (extractedValue_49383_kEntityName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1110)).add_operation (GALGAS_string (") should be a graphic entity"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1110)), fixItArray10  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1110)) ;
                    }
                  }
                }
                break ;
              case GALGAS_propertyKind::kEnum_toOne:
                {
                  TC_Array <C_FixItDescription> fixItArray11 ;
                  inCompiler->emitSemanticError (extractedValue_48080_controllerName.readProperty_location (), GALGAS_string ("the bound model should be a toMany property"), fixItArray11  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1113)) ;
                }
                break ;
              case GALGAS_propertyKind::kEnum_arrayController:
                {
                  TC_Array <C_FixItDescription> fixItArray12 ;
                  inCompiler->emitSemanticError (extractedValue_48080_controllerName.readProperty_location (), GALGAS_string ("the bound model should be a toMany property"), fixItArray12  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1115)) ;
                }
                break ;
              case GALGAS_propertyKind::kEnum_selectionController:
                {
                  TC_Array <C_FixItDescription> fixItArray13 ;
                  inCompiler->emitSemanticError (extractedValue_48080_controllerName.readProperty_location (), GALGAS_string ("the bound model should be a toMany property"), fixItArray13  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1117)) ;
                }
                break ;
              }
            }
          }
          break ;
        case GALGAS_propertyKind::kEnum_selectionController:
          {
            TC_Array <C_FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (extractedValue_48080_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray14  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1121)) ;
          }
          break ;
        }
        outArgument_outEBViewGraphicControllerBindingGeneration = GALGAS_autoLayoutViewGraphicControllerBindingGeneration::constructor_binding (extractedValue_48080_controllerName.readProperty_string ()  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1123)) ;
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
      const cEnumAssociatedValues_tableValueBinding_tableValueBinding * extractPtr_51122 = (const cEnumAssociatedValues_tableValueBinding_tableValueBinding *) (constinArgument_inTableValueBinding.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_50316_controllerName = extractPtr_51122->mAssociatedValue0 ;
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = var_handlesTableViewBinding_47788.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1130)).boolEnum () ;
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
            GALGAS_propertyKind var_kind_50582 ;
            GALGAS_actionMap joker_50592_2 ; // Joker input parameter
            GALGAS_bool joker_50592_1 ; // Joker input parameter
            constinArgument_inPreferencesPropertyMap.method_searchKey (extractedValue_50316_controllerName, var_kind_50582, joker_50592_2, joker_50592_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1133)) ;
            enumGalgasBool test_18 = kBoolTrue ;
            if (kBoolTrue == test_18) {
              test_18 = var_kind_50582.getter_isArrayController (SOURCE_FILE ("auto-layout-view.ggs", 1138)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1138)).boolEnum () ;
              if (kBoolTrue == test_18) {
                TC_Array <C_FixItDescription> fixItArray19 ;
                inCompiler->emitSemanticError (extractedValue_50316_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray19  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1139)) ;
              }
            }
            outArgument_outTableViewBindingGeneration = extractedValue_50316_controllerName.readProperty_string () ;
          }
        }
        if (kBoolFalse == test_17) {
          GALGAS_propertyKind var_kind_50901 ;
          GALGAS_actionMap joker_50911_2 ; // Joker input parameter
          GALGAS_bool joker_50911_1 ; // Joker input parameter
          constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_50316_controllerName, var_kind_50901, joker_50911_2, joker_50911_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1143)) ;
          enumGalgasBool test_20 = kBoolTrue ;
          if (kBoolTrue == test_20) {
            test_20 = var_kind_50901.getter_isArrayController (SOURCE_FILE ("auto-layout-view.ggs", 1148)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1148)).boolEnum () ;
            if (kBoolTrue == test_20) {
              TC_Array <C_FixItDescription> fixItArray21 ;
              inCompiler->emitSemanticError (extractedValue_50316_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray21  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1149)) ;
            }
          }
          outArgument_outTableViewBindingGeneration = extractedValue_50316_controllerName.readProperty_string () ;
        }
      }
    }
    break ;
  }
  {
  routine_analyzeAutoLayoutRunBinding (constinArgument_inRunActionDescriptor, var_handlesRunAction_47749, constinArgument_inPreferences, constinArgument_inTypeName, constinArgument_inActionMap, constinArgument_inObservablePropertyMap, constinArgument_inReceiverSwiftTypeName, outArgument_outRunBindingGeneration, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1155)) ;
  }
  GALGAS_autolayoutEnabledBindingForGeneration var_enabledBindingGeneration_51695 ;
  {
  routine_analyzeAutoLayoutEnableBinding (constinArgument_inEnabledBindingDescriptor, var_handlesEnabledBinding_47825, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_enabledBindingGeneration_51695, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1166)) ;
  }
  switch (var_enabledBindingGeneration_51695.enumValue ()) {
  case GALGAS_autolayoutEnabledBindingForGeneration::kNotBuilt:
    break ;
  case GALGAS_autolayoutEnabledBindingForGeneration::kEnum_none:
    {
    }
    break ;
  case GALGAS_autolayoutEnabledBindingForGeneration::kEnum_enabled:
    {
      const cEnumAssociatedValues_autolayoutEnabledBindingForGeneration_enabled * extractPtr_51834 = (const cEnumAssociatedValues_autolayoutEnabledBindingForGeneration_enabled *) (var_enabledBindingGeneration_51695.unsafePointer ()) ;
      const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration extractedValue_51771_binding = extractPtr_51834->mAssociatedValue0 ;
      outArgument_outMultipleBindingGenerationList.addAssign_operation (GALGAS_string ("enabled"), extractedValue_51771_binding  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1179)) ;
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
      const cEnumAssociatedValues_multipleBindingDescriptor_binding * extractPtr_52632 = (const cEnumAssociatedValues_multipleBindingDescriptor_binding *) (constinArgument_inHiddenBindingDescriptor.unsafePointer ()) ;
      const GALGAS_abstractBooleanMultipleBindingExpressionAST extractedValue_51978_expression = extractPtr_52632->mAssociatedValue0 ;
      GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_52267 ;
      GALGAS_typeKind var_type_52293 ;
      GALGAS_location var_errorLocation_52328 ;
      callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_51978_expression.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_hiddenExpression_52267, var_type_52293, var_errorLocation_52328, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1185)) ;
      enumGalgasBool test_22 = kBoolTrue ;
      if (kBoolTrue == test_22) {
        test_22 = var_type_52293.getter_isBoolType (SOURCE_FILE ("auto-layout-view.ggs", 1195)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1195)).boolEnum () ;
        if (kBoolTrue == test_22) {
          TC_Array <C_FixItDescription> fixItArray23 ;
          inCompiler->emitSemanticError (var_errorLocation_52328, GALGAS_string ("expression is not boolean"), fixItArray23  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1196)) ;
        }
      }
      enumGalgasBool test_24 = kBoolTrue ;
      if (kBoolTrue == test_24) {
        test_24 = var_handlesHiddenBinding_47861.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1198)).boolEnum () ;
        if (kBoolTrue == test_24) {
          TC_Array <C_FixItDescription> fixItArray25 ;
          inCompiler->emitSemanticError (var_errorLocation_52328, GALGAS_string ("cet outlet n'accepte pas le binding $hidden"), fixItArray25  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1199)) ;
        }
      }
      outArgument_outMultipleBindingGenerationList.addAssign_operation (GALGAS_string ("hidden"), var_hiddenExpression_52267  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1201)) ;
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
      const cEnumAssociatedValues_multipleBindingDescriptor_binding * extractPtr_54408 = (const cEnumAssociatedValues_multipleBindingDescriptor_binding *) (constinArgument_inEnabledBindingDescriptor.unsafePointer ()) ;
      const GALGAS_abstractBooleanMultipleBindingExpressionAST extractedValue_53758_expression = extractPtr_54408->mAssociatedValue0 ;
      GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_enableExpression_54047 ;
      GALGAS_typeKind var_type_54073 ;
      GALGAS_location var_errorLocation_54108 ;
      callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_53758_expression.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_enableExpression_54047, var_type_54073, var_errorLocation_54108, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1235)) ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = constinArgument_inHandlesEnabledBinding.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1245)).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (var_errorLocation_54108, GALGAS_string ("cet outlet n'accepte pas le binding $enabled"), fixItArray1  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1246)) ;
        }
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_type_54073.getter_isBoolType (SOURCE_FILE ("auto-layout-view.ggs", 1248)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1248)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_errorLocation_54108, GALGAS_string ("expression is not boolean"), fixItArray3  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1249)) ;
        }
      }
      outArgument_outEnabledBindingGeneration = GALGAS_autolayoutEnabledBindingForGeneration::constructor_enabled (var_enableExpression_54047  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1251)) ;
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
      const cEnumAssociatedValues_runActionDescriptor_action * extractPtr_55898 = (const cEnumAssociatedValues_runActionDescriptor_action *) (constinArgument_inRunActionDescriptor.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_55021_target = extractPtr_55898->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_55037_action = extractPtr_55898->mAssociatedValue1 ;
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
          test_2 = GALGAS_bool (kIsEqual, extractedValue_55021_target.readProperty_string ().objectCompare (GALGAS_string ("self"))).boolEnum () ;
          if (kBoolTrue == test_2) {
            constinArgument_inActionMap.method_searchKey (extractedValue_55037_action, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1275)) ;
            outArgument_outRunBindingGeneration = GALGAS_autolayoutRunBindingForGeneration::constructor_run (GALGAS_string ("self"), extractedValue_55037_action.readProperty_string (), constinArgument_inReceiverSwiftTypeName  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1276)) ;
          }
        }
        if (kBoolFalse == test_2) {
          GALGAS_actionMap var_controllerActionMap_55575 ;
          GALGAS_propertyKind joker_55530 ; // Joker input parameter
          GALGAS_bool joker_55585 ; // Joker input parameter
          constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_55021_target, joker_55530, var_controllerActionMap_55575, joker_55585, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1282)) ;
          var_controllerActionMap_55575.method_searchKey (extractedValue_55037_action, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1288)) ;
          GALGAS_string temp_3 ;
          const enumGalgasBool test_4 = constinArgument_inPreferences.boolEnum () ;
          if (kBoolTrue == test_4) {
            temp_3 = GALGAS_string ("preferences_") ;
          }else if (kBoolFalse == test_4) {
            temp_3 = GALGAS_string::makeEmptyString () ;
          }
          outArgument_outRunBindingGeneration = GALGAS_autolayoutRunBindingForGeneration::constructor_run (temp_3.add_operation (extractedValue_55021_target.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1290)), extractedValue_55037_action.readProperty_string (), GALGAS_string ("Controller_").add_operation (constinArgument_inReceiverSwiftTypeName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1292)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1292)).add_operation (extractedValue_55021_target.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1292))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1289)) ;
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
  cEnumerator_regularBindingList enumerator_56525 (constinArgument_inRegularBindingList, kENUMERATION_UP) ;
  while (enumerator_56525.hasCurrentObject ()) {
    GALGAS_outletBindingModelList var_boundModelTypeList_56625 = GALGAS_outletBindingModelList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 1313)) ;
    GALGAS_boundObjectList var_boundModelListForGeneration_56683 = GALGAS_boundObjectList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 1314)) ;
    cEnumerator_observablePropertyList enumerator_56717 (enumerator_56525.current_mObservablePropertyList (HERE), kENUMERATION_UP) ;
    while (enumerator_56717.hasCurrentObject ()) {
      GALGAS_propertyKind var_kind_56976 ;
      GALGAS_string var_swiftTypeStringForTransientFunctionArgument_57048 ;
      GALGAS_string var_defaultValueAsString_57097 ;
      GALGAS_propertyMap temp_0 ;
      const enumGalgasBool test_1 = constinArgument_inPreferences.boolEnum () ;
      if (kBoolTrue == test_1) {
        temp_0 = constinArgument_inPreferencesPropertyMap ;
      }else if (kBoolFalse == test_1) {
        temp_0 = constinArgument_inBoundModelPropertyMap ;
      }
      extensionMethod_analyzeObservableProperty (enumerator_56717.current_mObservableProperty (HERE), constinArgument_inRootPropertyMap, constinArgument_inSemanticContext, temp_0, var_kind_56976, var_swiftTypeStringForTransientFunctionArgument_57048, var_defaultValueAsString_57097, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1316)) ;
      switch (var_kind_56976.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_56717.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1327)), GALGAS_string ("a toMany property cannot be bound"), fixItArray2  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1327)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_56717.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1329)), GALGAS_string ("a toOne property cannot be bound"), fixItArray3  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1329)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_56717.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1331)), GALGAS_string ("an array controller cannot be bound"), fixItArray4  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1331)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_56717.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1333)), GALGAS_string ("a selection controller cannot be bound"), fixItArray5  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1333)) ;
        }
        break ;
      }
      var_boundModelListForGeneration_56683.addAssign_operation (extensionGetter_modelStringForSelf (enumerator_56717.current_mObservableProperty (HERE), constinArgument_inSelfSwiftName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1335)), var_kind_56976  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1335)) ;
      var_boundModelTypeList_56625.addAssign_operation (var_kind_56976, extensionGetter_location (enumerator_56717.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1336))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1336)) ;
      enumerator_56717.gotoNextObject () ;
    }
    GALGAS_outletBindingSpecificationModelList var_outletBindingSpecificationModelList_57911 = GALGAS_outletBindingSpecificationModelList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 1339)) ;
    GALGAS_controllerBindingOptionDecoratedList var_controllerBindingOptionDecoratedList_57999 = GALGAS_controllerBindingOptionDecoratedList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 1340)) ;
    GALGAS_lstring var_outletTypeName_58027 = constinArgument_inOutletTypeName ;
    GALGAS_bool var_continues_58064 = GALGAS_bool (true) ;
    if (constinArgument_inSemanticContext.readProperty_mBindingSpecificationMap ().getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1343)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1343)).isValid ()) {
      uint32_t variant_58080 = constinArgument_inSemanticContext.readProperty_mBindingSpecificationMap ().getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1343)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1343)).uintValue () ;
      bool loop_58080 = true ;
      while (loop_58080) {
        loop_58080 = GALGAS_bool (kIsNotEqual, var_outletTypeName_58027.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).operator_and (var_continues_58064 COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1343)).isValid () ;
        if (loop_58080) {
          loop_58080 = GALGAS_bool (kIsNotEqual, var_outletTypeName_58027.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).operator_and (var_continues_58064 COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1343)).boolValue () ;
        }
        if (loop_58080 && (0 == variant_58080)) {
          loop_58080 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("auto-layout-view.ggs", 1343)) ;
        }
        if (loop_58080) {
          variant_58080 -- ;
          var_continues_58064 = GALGAS_bool (false) ;
          GALGAS_lstring var_superOutletClassName_58341 ;
          GALGAS_autoLayoutViewBindingSpecificationMap var_bindingMap_58365 ;
          constinArgument_inSemanticContext.readProperty_mAutoLayoutBindingSpecificationMap ().method_searchKey (var_outletTypeName_58027, var_superOutletClassName_58341, var_bindingMap_58365, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1345)) ;
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = var_bindingMap_58365.getter_hasKey (enumerator_56525.current_mBindingName (HERE).readProperty_string () COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1350)).boolEnum () ;
            if (kBoolTrue == test_6) {
              var_bindingMap_58365.method_searchKey (enumerator_56525.current_mBindingName (HERE), var_outletBindingSpecificationModelList_57911, var_controllerBindingOptionDecoratedList_57999, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1351)) ;
            }
          }
          if (kBoolFalse == test_6) {
            var_continues_58064 = GALGAS_bool (true) ;
            var_outletTypeName_58027 = var_superOutletClassName_58341 ;
          }
        }
      }
    }
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = var_continues_58064.boolEnum () ;
      if (kBoolTrue == test_7) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_56525.current_mBindingName (HERE).readProperty_location (), GALGAS_string ("this binding is not defined"), fixItArray8  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1362)) ;
      }
    }
    if (kBoolFalse == test_7) {
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = GALGAS_bool (kIsNotEqual, var_boundModelTypeList_56625.getter_length (SOURCE_FILE ("auto-layout-view.ggs", 1363)).objectCompare (var_outletBindingSpecificationModelList_57911.getter_length (SOURCE_FILE ("auto-layout-view.ggs", 1363)))).boolEnum () ;
        if (kBoolTrue == test_9) {
          TC_Array <C_FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (enumerator_56525.current_mBindingName (HERE).readProperty_location (), var_outletBindingSpecificationModelList_57911.getter_length (SOURCE_FILE ("auto-layout-view.ggs", 1365)).getter_string (SOURCE_FILE ("auto-layout-view.ggs", 1365)).add_operation (GALGAS_string (" model(s) required for this binding (found: "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1365)).add_operation (var_boundModelTypeList_56625.getter_length (SOURCE_FILE ("auto-layout-view.ggs", 1367)).getter_string (SOURCE_FILE ("auto-layout-view.ggs", 1366)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1366)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1367)), fixItArray10  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1364)) ;
        }
      }
      if (kBoolFalse == test_9) {
        cEnumerator_outletBindingSpecificationModelList enumerator_59129 (var_outletBindingSpecificationModelList_57911, kENUMERATION_UP) ;
        cEnumerator_outletBindingModelList enumerator_59204 (var_boundModelTypeList_56625, kENUMERATION_UP) ;
        while (enumerator_59129.hasCurrentObject () && enumerator_59204.hasCurrentObject ()) {
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            GALGAS_bool test_12 = enumerator_59129.current_mModelShouldBeWritableProperty (HERE) ;
            if (kBoolTrue == test_12.boolEnum ()) {
              test_12 = extensionGetter_isTransient (enumerator_59204.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1370)) ;
            }
            test_11 = test_12.boolEnum () ;
            if (kBoolTrue == test_11) {
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (enumerator_59204.current_mErrorLocation (HERE), GALGAS_string ("the model is transient and the binding requires an writable model"), fixItArray13  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1371)) ;
            }
          }
          enumGalgasBool test_14 = kBoolTrue ;
          if (kBoolTrue == test_14) {
            GALGAS_bool test_15 = enumerator_59129.current_mModelType (HERE).getter_isEnumType (SOURCE_FILE ("auto-layout-view.ggs", 1373)) ;
            if (kBoolTrue == test_15.boolEnum ()) {
              test_15 = extensionGetter_isEnumType (enumerator_59204.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1373)) ;
            }
            test_14 = test_15.boolEnum () ;
            if (kBoolTrue == test_14) {
            }
          }
          if (kBoolFalse == test_14) {
            enumGalgasBool test_16 = kBoolTrue ;
            if (kBoolTrue == test_16) {
              test_16 = GALGAS_bool (kIsNotEqual, extensionGetter_swiftTypeName (enumerator_59129.current_mModelType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1374)).objectCompare (extensionGetter_swiftTypeName (enumerator_59204.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1374)))).boolEnum () ;
              if (kBoolTrue == test_16) {
                TC_Array <C_FixItDescription> fixItArray17 ;
                inCompiler->emitSemanticError (enumerator_59204.current_mErrorLocation (HERE), GALGAS_string ("the model type should be ").add_operation (extensionGetter_swiftTypeName (enumerator_59129.current_mModelType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1375)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1375)), fixItArray17  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1375)) ;
              }
            }
          }
          enumerator_59129.gotoNextObject () ;
          enumerator_59204.gotoNextObject () ;
        }
      }
    }
    GALGAS_string var_bindingOptionString_59792 = GALGAS_string::makeEmptyString () ;
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = GALGAS_bool (kIsNotEqual, var_controllerBindingOptionDecoratedList_57999.getter_length (SOURCE_FILE ("auto-layout-view.ggs", 1381)).objectCompare (enumerator_56525.current_mBindingOptionList (HERE).getter_length (SOURCE_FILE ("auto-layout-view.ggs", 1381)))).boolEnum () ;
      if (kBoolTrue == test_18) {
        GALGAS_string var_s_59908 ;
        enumGalgasBool test_19 = kBoolTrue ;
        if (kBoolTrue == test_19) {
          test_19 = GALGAS_bool (kIsEqual, var_controllerBindingOptionDecoratedList_57999.getter_length (SOURCE_FILE ("auto-layout-view.ggs", 1383)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_19) {
            var_s_59908 = GALGAS_string ("this binding has no option") ;
          }
        }
        if (kBoolFalse == test_19) {
          var_s_59908 = GALGAS_string ("this binding requires the following options:") ;
          cEnumerator_controllerBindingOptionDecoratedList enumerator_60123 (var_controllerBindingOptionDecoratedList_57999, kENUMERATION_UP) ;
          while (enumerator_60123.hasCurrentObject ()) {
            var_s_59908.plusAssign_operation(GALGAS_string ("\n  - ").add_operation (enumerator_60123.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1388)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1388)).add_operation (extensionGetter_swiftTypeName (enumerator_60123.current_mOptionType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1388)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1388)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1388)) ;
            enumerator_60123.gotoNextObject () ;
          }
        }
        TC_Array <C_FixItDescription> fixItArray20 ;
        inCompiler->emitSemanticError (enumerator_56525.current_mBindingName (HERE).readProperty_location (), var_s_59908, fixItArray20  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1391)) ;
      }
    }
    if (kBoolFalse == test_18) {
      cEnumerator_controllerBindingOptionDecoratedList enumerator_60361 (var_controllerBindingOptionDecoratedList_57999, kENUMERATION_UP) ;
      cEnumerator_bindingOptionList enumerator_60445 (enumerator_56525.current_mBindingOptionList (HERE), kENUMERATION_UP) ;
      while (enumerator_60361.hasCurrentObject () && enumerator_60445.hasCurrentObject ()) {
        enumGalgasBool test_21 = kBoolTrue ;
        if (kBoolTrue == test_21) {
          test_21 = GALGAS_bool (kIsNotEqual, enumerator_60361.current_mOptionName (HERE).readProperty_string ().objectCompare (enumerator_60445.current_mOptionName (HERE).readProperty_string ())).boolEnum () ;
          if (kBoolTrue == test_21) {
            TC_Array <C_FixItDescription> fixItArray22 ;
            inCompiler->emitSemanticError (enumerator_60445.current_mOptionName (HERE).readProperty_location (), GALGAS_string ("the option name should be '").add_operation (enumerator_60361.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1395)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1395)), fixItArray22  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1395)) ;
          }
        }
        GALGAS_string var_optionValueAsString_60829 ;
        GALGAS_typeKindList temp_23 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 1398)) ;
        temp_23.addAssign_operation (enumerator_60361.current_mOptionType (HERE)  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1398)) ;
        callExtensionMethod_analyzeDefaultValueType ((cPtr_abstractDefaultValue *) enumerator_60445.current_mOptionValue (HERE).ptr (), temp_23, constinArgument_inPreferencesPropertyMap, var_optionValueAsString_60829, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1397)) ;
        var_bindingOptionString_59792.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_60361.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1402)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1402)).add_operation (var_optionValueAsString_60829, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1402)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1402)) ;
        enumerator_60361.gotoNextObject () ;
        enumerator_60445.gotoNextObject () ;
      }
    }
    ioArgument_ioRegularBindingsGenerationList.addAssign_operation (enumerator_56525.current_mBindingName (HERE).readProperty_string (), var_boundModelListForGeneration_56683, var_bindingOptionString_59792  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1406)) ;
    enumerator_56525.gotoNextObject () ;
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
  GALGAS_autoLayoutViewInstructionGenerationList var_instructionList_62241 = GALGAS_autoLayoutViewInstructionGenerationList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 1429)) ;
  GALGAS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_62742 ;
  const GALGAS_astHStackViewInstructionDeclaration temp_0 = this ;
  extensionMethod_checkViewFunctionCallList (temp_0.readProperty_mFunctionCallList (), constinArgument_inSemanticContext.readProperty_mAutoLayoutHStackFunctionMap (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_62742, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1430)) ;
  GALGAS_autoLayoutMultipleBindingGenerationList var_multipleBindingGenerationList_62823 = GALGAS_autoLayoutMultipleBindingGenerationList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 1446)) ;
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
      const cEnumAssociatedValues_optionalHiddenBinding_binding * extractPtr_63470 = (const cEnumAssociatedValues_optionalHiddenBinding_binding *) (temp_1.readProperty_mOptionalHiddenBinding ().unsafePointer ()) ;
      const GALGAS_abstractBooleanMultipleBindingExpressionAST extractedValue_62925_hiddenBindingExpression = extractPtr_63470->mAssociatedValue0 ;
      GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_63227 ;
      GALGAS_typeKind var_type_63253 ;
      GALGAS_location var_errorLocation_63288 ;
      callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_62925_hiddenBindingExpression.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_hiddenExpression_63227, var_type_63253, var_errorLocation_63288, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1450)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_type_63253.getter_isBoolType (SOURCE_FILE ("auto-layout-view.ggs", 1460)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1460)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_errorLocation_63288, GALGAS_string ("expression is not boolean"), fixItArray3  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1461)) ;
        }
      }
      var_multipleBindingGenerationList_62823.addAssign_operation (GALGAS_string ("hidden"), var_hiddenExpression_63227  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1463)) ;
    }
    break ;
  }
  const GALGAS_astHStackViewInstructionDeclaration temp_4 = this ;
  cEnumerator_astViewInstructionList enumerator_63495 (temp_4.readProperty_mInstructionList (), kENUMERATION_UP) ;
  while (enumerator_63495.hasCurrentObject ()) {
    GALGAS_abstractViewInstructionGeneration var_generatedInstruction_63927 ;
    callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) enumerator_63495.current_mInstruction (HERE).ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_generatedInstruction_63927, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1468)) ;
    var_instructionList_62241.addAssign_operation (var_generatedInstruction_63927  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1483)) ;
    enumerator_63495.gotoNextObject () ;
  }
  const GALGAS_astHStackViewInstructionDeclaration temp_5 = this ;
  outArgument_outInstruction = GALGAS_hStackViewInstructionGeneration::constructor_new (var_funcCallList_62742, var_instructionList_62241, var_multipleBindingGenerationList_62823, temp_5.readProperty_mAstNewStackViewDeclarationList ()  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1485)) ;
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
  GALGAS_autoLayoutViewInstructionGenerationList var_instructionList_65291 = GALGAS_autoLayoutViewInstructionGenerationList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 1509)) ;
  GALGAS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_65792 ;
  const GALGAS_astVStackViewInstructionDeclaration temp_0 = this ;
  extensionMethod_checkViewFunctionCallList (temp_0.readProperty_mFunctionCallList (), constinArgument_inSemanticContext.readProperty_mAutoLayoutVStackFunctionMap (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_65792, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1510)) ;
  GALGAS_autoLayoutMultipleBindingGenerationList var_multipleBindingGenerationList_65873 = GALGAS_autoLayoutMultipleBindingGenerationList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 1526)) ;
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
      const cEnumAssociatedValues_optionalHiddenBinding_binding * extractPtr_66520 = (const cEnumAssociatedValues_optionalHiddenBinding_binding *) (temp_1.readProperty_mOptionalHiddenBinding ().unsafePointer ()) ;
      const GALGAS_abstractBooleanMultipleBindingExpressionAST extractedValue_65975_hiddenBindingExpression = extractPtr_66520->mAssociatedValue0 ;
      GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_66277 ;
      GALGAS_typeKind var_type_66303 ;
      GALGAS_location var_errorLocation_66338 ;
      callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_65975_hiddenBindingExpression.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_hiddenExpression_66277, var_type_66303, var_errorLocation_66338, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1530)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_type_66303.getter_isBoolType (SOURCE_FILE ("auto-layout-view.ggs", 1540)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1540)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_errorLocation_66338, GALGAS_string ("expression is not boolean"), fixItArray3  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1541)) ;
        }
      }
      var_multipleBindingGenerationList_65873.addAssign_operation (GALGAS_string ("hidden"), var_hiddenExpression_66277  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1543)) ;
    }
    break ;
  }
  const GALGAS_astVStackViewInstructionDeclaration temp_4 = this ;
  cEnumerator_astViewInstructionList enumerator_66545 (temp_4.readProperty_mInstructionList (), kENUMERATION_UP) ;
  while (enumerator_66545.hasCurrentObject ()) {
    GALGAS_abstractViewInstructionGeneration var_generatedInstruction_66977 ;
    callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) enumerator_66545.current_mInstruction (HERE).ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_generatedInstruction_66977, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1548)) ;
    var_instructionList_65291.addAssign_operation (var_generatedInstruction_66977  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1563)) ;
    enumerator_66545.gotoNextObject () ;
  }
  const GALGAS_astVStackViewInstructionDeclaration temp_5 = this ;
  outArgument_outInstruction = GALGAS_vStackViewInstructionGeneration::constructor_new (var_funcCallList_65792, var_instructionList_65291, var_multipleBindingGenerationList_65873, temp_5.readProperty_mAstNewStackViewDeclarationList ()  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1565)) ;
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
  cEnumerator_astNewStackViewDeclarationList enumerator_75311 (temp_1.readProperty_mNewStackViewDeclarationList (), kENUMERATION_UP) ;
  while (enumerator_75311.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string ("    let ").add_operation (enumerator_75311.current_mInstanciedStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1747)).add_operation (GALGAS_string (" = self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1747)).add_operation (enumerator_75311.current_mTypeStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1747)).add_operation (GALGAS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1747)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1747)) ;
    enumerator_75311.gotoNextObject () ;
  }
  const GALGAS_computedHorizontalViewGeneration temp_2 = this ;
  cEnumerator_autoLayoutViewInstructionGenerationList enumerator_75443 (temp_2.readProperty_mInstructionList (), kENUMERATION_UP) ;
  GALGAS_uint index_75430 ((uint32_t) 0) ;
  while (enumerator_75443.hasCurrentObject ()) {
    GALGAS_string var_name_75493 = GALGAS_string ("view_").add_operation (index_75430.getter_string (SOURCE_FILE ("auto-layout-view.ggs", 1750)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1750)) ;
    result_result.plusAssign_operation(callExtensionGetter_generateViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_75443.current_mInstruction (HERE).ptr (), constinArgument_inPreferences, var_name_75493, GALGAS_string ("    "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1751)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1751)) ;
    result_result.plusAssign_operation(GALGAS_string ("    _ = hStackView.appendView (").add_operation (var_name_75493, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1752)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1752)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1752)) ;
    enumerator_75443.gotoNextObject () ;
    index_75430.increment_operation (inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1749)) ;
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
  cEnumerator_astNewStackViewDeclarationList enumerator_76280 (temp_1.readProperty_mNewStackViewDeclarationList (), kENUMERATION_UP) ;
  while (enumerator_76280.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string ("    let ").add_operation (enumerator_76280.current_mInstanciedStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1766)).add_operation (GALGAS_string (" = self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1766)).add_operation (enumerator_76280.current_mTypeStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1766)).add_operation (GALGAS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1766)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1766)) ;
    enumerator_76280.gotoNextObject () ;
  }
  const GALGAS_computedVerticalViewGeneration temp_2 = this ;
  cEnumerator_autoLayoutViewInstructionGenerationList enumerator_76412 (temp_2.readProperty_mInstructionList (), kENUMERATION_UP) ;
  GALGAS_uint index_76399 ((uint32_t) 0) ;
  while (enumerator_76412.hasCurrentObject ()) {
    GALGAS_string var_name_76462 = GALGAS_string ("view_").add_operation (index_76399.getter_string (SOURCE_FILE ("auto-layout-view.ggs", 1769)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1769)) ;
    result_result.plusAssign_operation(callExtensionGetter_generateViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_76412.current_mInstruction (HERE).ptr (), constinArgument_inPreferences, var_name_76462, GALGAS_string ("    "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1770)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1770)) ;
    result_result.plusAssign_operation(GALGAS_string ("    _ = vStackView.appendView (").add_operation (var_name_76462, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1771)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1771)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1771)) ;
    enumerator_76412.gotoNextObject () ;
    index_76399.increment_operation (inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1768)) ;
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
  cEnumerator_autoLayoutViewInstructionGenerationParameterList enumerator_79762 (temp_1.readProperty_mParameterList (), kENUMERATION_UP) ;
  while (enumerator_79762.hasCurrentObject ()) {
    result_result.plusAssign_operation(enumerator_79762.current (HERE).readProperty_mParameterName ().add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1837)).add_operation (enumerator_79762.current (HERE).readProperty_mParameterValue (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1837)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1837)) ;
    if (enumerator_79762.hasNextObject ()) {
      result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1839)) ;
    }
    enumerator_79762.gotoNextObject () ;
  }
  result_result.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1841)) ;
  const GALGAS_autoLayoutComputedViewInstructionGeneration temp_2 = this ;
  extensionMethod_generate (temp_2.readProperty_mFunctionCallList (), constinArgument_inIndentation, result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1842)) ;
  const GALGAS_autoLayoutComputedViewInstructionGeneration temp_3 = this ;
  cEnumerator_autoLayoutRegularBindingsGenerationList enumerator_80006 (temp_3.readProperty_mRegularBindingsGenerationList (), kENUMERATION_UP) ;
  while (enumerator_80006.hasCurrentObject ()) {
    result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1844)).add_operation (enumerator_80006.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1844)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1844)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1844)) ;
    cEnumerator_boundObjectList enumerator_80140 (enumerator_80006.current_mBoundObjectList (HERE), kENUMERATION_UP) ;
    while (enumerator_80140.hasCurrentObject ()) {
      result_result.plusAssign_operation(enumerator_80140.current_mBoundObjectString (HERE), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1846)) ;
      if (enumerator_80140.hasNextObject ()) {
        result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1847)) ;
      }
      enumerator_80140.gotoNextObject () ;
    }
    result_result.plusAssign_operation(enumerator_80006.current_mBindingOptionsString (HERE).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1849)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1849)) ;
    enumerator_80006.gotoNextObject () ;
  }
  const GALGAS_autoLayoutComputedViewInstructionGeneration temp_4 = this ;
  cEnumerator_autoLayoutMultipleBindingGenerationList enumerator_80306 (temp_4.readProperty_mMultipleBindingGenerationList (), kENUMERATION_UP) ;
  while (enumerator_80306.hasCurrentObject ()) {
    result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1852)).add_operation (enumerator_80306.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1852)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1852)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_80306.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1852)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1852)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1852)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1852)) ;
    enumerator_80306.gotoNextObject () ;
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
      const cEnumAssociatedValues_autolayoutRunBindingForGeneration_run * extractPtr_80817 = (const cEnumAssociatedValues_autolayoutRunBindingForGeneration_run *) (temp_5.readProperty_mRunBindingGeneration ().unsafePointer ()) ;
      const GALGAS_string extractedValue_80529_targetName = extractPtr_80817->mAssociatedValue0 ;
      const GALGAS_string extractedValue_80540_actionName = extractPtr_80817->mAssociatedValue1 ;
      const GALGAS_string extractedValue_80555_targetTypeName = extractPtr_80817->mAssociatedValue2 ;
      result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("  .bind_run (\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1857)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1857)) ;
      result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("    target: "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1858)).add_operation (extractedValue_80529_targetName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1858)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1858)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1858)) ;
      result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("    selector: #selector ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1859)).add_operation (extractedValue_80555_targetTypeName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1859)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1859)).add_operation (extractedValue_80540_actionName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1859)).add_operation (GALGAS_string (" (_:))\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1859)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1859)) ;
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
      const cEnumAssociatedValues_autoLayoutViewGraphicControllerBindingGeneration_binding * extractPtr_81018 = (const cEnumAssociatedValues_autoLayoutViewGraphicControllerBindingGeneration_binding *) (temp_6.readProperty_mEBViewGraphicControllerBindingGeneration ().unsafePointer ()) ;
      const GALGAS_string extractedValue_80924_controllerName = extractPtr_81018->mAssociatedValue0 ;
      result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("  .bind_graphic_controller (self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1865)).add_operation (extractedValue_80924_controllerName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1865)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1865)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1865)) ;
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
      GALGAS_string var_prefix_81088 = temp_9 ;
      const GALGAS_autoLayoutComputedViewInstructionGeneration temp_11 = this ;
      result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (var_prefix_81088, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1869)).add_operation (temp_11.readProperty_mTableViewBindingGeneration (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1869)).add_operation (GALGAS_string (".bind_tableView ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1869)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1869)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1869)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1869)) ;
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
  cEnumerator_autoLayoutMultipleBindingGenerationList enumerator_82240 (temp_1.readProperty_mMultipleBindingGenerationList (), kENUMERATION_UP) ;
  while (enumerator_82240.hasCurrentObject ()) {
    result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1892)).add_operation (enumerator_82240.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1892)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1892)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_82240.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1892)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1892)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1892)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1892)) ;
    enumerator_82240.gotoNextObject () ;
  }
  const GALGAS_hStackViewInstructionGeneration temp_2 = this ;
  cEnumerator_astNewStackViewDeclarationList enumerator_82411 (temp_2.readProperty_mNewStackViewDeclarationList (), kENUMERATION_UP) ;
  while (enumerator_82411.hasCurrentObject ()) {
    result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1895)).add_operation (enumerator_82411.current_mInstanciedStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1895)).add_operation (GALGAS_string (" = self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1895)).add_operation (enumerator_82411.current_mTypeStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1895)).add_operation (GALGAS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1895)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1895)) ;
    enumerator_82411.gotoNextObject () ;
  }
  result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("do{\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1897)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1897)) ;
  GALGAS_string var_indentation_82590 = constinArgument_inIndentation.add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1898)) ;
  const GALGAS_hStackViewInstructionGeneration temp_3 = this ;
  cEnumerator_autoLayoutViewInstructionGenerationList enumerator_82632 (temp_3.readProperty_mInstructionList (), kENUMERATION_UP) ;
  GALGAS_uint index_82619 ((uint32_t) 0) ;
  while (enumerator_82632.hasCurrentObject ()) {
    GALGAS_string var_name_82683 = constinArgument_inName.add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1900)).add_operation (index_82619.getter_string (SOURCE_FILE ("auto-layout-view.ggs", 1900)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1900)) ;
    result_result.plusAssign_operation(callExtensionGetter_generateViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_82632.current_mInstruction (HERE).ptr (), constinArgument_inPreferences, var_name_82683, var_indentation_82590, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1901)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1901)) ;
    result_result.plusAssign_operation(var_indentation_82590.add_operation (GALGAS_string ("_ = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1902)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1902)).add_operation (GALGAS_string (".appendView ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1902)).add_operation (var_name_82683, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1902)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1902)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1902)) ;
    enumerator_82632.gotoNextObject () ;
    index_82619.increment_operation (inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1899)) ;
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
  cEnumerator_autoLayoutMultipleBindingGenerationList enumerator_83452 (temp_1.readProperty_mMultipleBindingGenerationList (), kENUMERATION_UP) ;
  while (enumerator_83452.hasCurrentObject ()) {
    result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1916)).add_operation (enumerator_83452.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1916)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1916)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_83452.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1916)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1916)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1916)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1916)) ;
    enumerator_83452.gotoNextObject () ;
  }
  const GALGAS_vStackViewInstructionGeneration temp_2 = this ;
  cEnumerator_astNewStackViewDeclarationList enumerator_83623 (temp_2.readProperty_mNewStackViewDeclarationList (), kENUMERATION_UP) ;
  while (enumerator_83623.hasCurrentObject ()) {
    result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1919)).add_operation (enumerator_83623.current_mInstanciedStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1919)).add_operation (GALGAS_string (" = self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1919)).add_operation (enumerator_83623.current_mTypeStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1919)).add_operation (GALGAS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1919)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1919)) ;
    enumerator_83623.gotoNextObject () ;
  }
  result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("do{\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1921)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1921)) ;
  GALGAS_string var_indentation_83802 = constinArgument_inIndentation.add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1922)) ;
  const GALGAS_vStackViewInstructionGeneration temp_3 = this ;
  cEnumerator_autoLayoutViewInstructionGenerationList enumerator_83844 (temp_3.readProperty_mInstructionList (), kENUMERATION_UP) ;
  GALGAS_uint index_83831 ((uint32_t) 0) ;
  while (enumerator_83844.hasCurrentObject ()) {
    GALGAS_string var_name_83895 = constinArgument_inName.add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1924)).add_operation (index_83831.getter_string (SOURCE_FILE ("auto-layout-view.ggs", 1924)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1924)) ;
    result_result.plusAssign_operation(callExtensionGetter_generateViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_83844.current_mInstruction (HERE).ptr (), constinArgument_inPreferences, var_name_83895, var_indentation_83802, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1925)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1925)) ;
    result_result.plusAssign_operation(var_indentation_83802.add_operation (GALGAS_string ("_ = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1926)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1926)).add_operation (GALGAS_string (".appendView ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1926)).add_operation (var_name_83895, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1926)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1926)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1926)) ;
    enumerator_83844.gotoNextObject () ;
    index_83831.increment_operation (inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1923)) ;
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
    GALGAS_bool var_hasRunAction_3845 ;
    GALGAS_bool var_handlesTableValueBinding_3881 ;
    GALGAS_bool var_hasEnabled_3903 ;
    GALGAS_bool var_hasHidden_3924 ;
    GALGAS_bool var_handlesGraphicControllerBinding_3967 ;
    const GALGAS_outletClassDeclarationAST temp_9 = this ;
    GALGAS_lstring joker_3820 ; // Joker input parameter
    GALGAS_bool joker_3975 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mOutletClassMap ().method_searchKey (temp_9.readProperty_mSuperClassName (), joker_3820, var_hasRunAction_3845, var_handlesTableValueBinding_3881, var_hasEnabled_3903, var_hasHidden_3924, var_handlesGraphicControllerBinding_3967, joker_3975, inCompiler COMMA_SOURCE_FILE ("outlet-class.ggs", 115)) ;
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      const GALGAS_outletClassDeclarationAST temp_11 = this ;
      test_10 = temp_11.readProperty_mHasRunAction ().operator_and (var_hasRunAction_3845 COMMA_SOURCE_FILE ("outlet-class.ggs", 125)).boolEnum () ;
      if (kBoolTrue == test_10) {
        const GALGAS_outletClassDeclarationAST temp_12 = this ;
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (temp_12.readProperty_mClassName ().readProperty_location (), GALGAS_string ("$run binding already defined in superclass"), fixItArray13  COMMA_SOURCE_FILE ("outlet-class.ggs", 126)) ;
      }
    }
    enumGalgasBool test_14 = kBoolTrue ;
    if (kBoolTrue == test_14) {
      const GALGAS_outletClassDeclarationAST temp_15 = this ;
      test_14 = temp_15.readProperty_mHandlesTableValueBinding ().operator_and (var_handlesTableValueBinding_3881 COMMA_SOURCE_FILE ("outlet-class.ggs", 128)).boolEnum () ;
      if (kBoolTrue == test_14) {
        const GALGAS_outletClassDeclarationAST temp_16 = this ;
        TC_Array <C_FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticError (temp_16.readProperty_mClassName ().readProperty_location (), GALGAS_string ("$tableview binding already defined in superclass"), fixItArray17  COMMA_SOURCE_FILE ("outlet-class.ggs", 129)) ;
      }
    }
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      const GALGAS_outletClassDeclarationAST temp_19 = this ;
      test_18 = temp_19.readProperty_mHasEnabled ().operator_and (var_hasEnabled_3903 COMMA_SOURCE_FILE ("outlet-class.ggs", 131)).boolEnum () ;
      if (kBoolTrue == test_18) {
        const GALGAS_outletClassDeclarationAST temp_20 = this ;
        TC_Array <C_FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (temp_20.readProperty_mClassName ().readProperty_location (), GALGAS_string ("$enabled binding already defined in superclass"), fixItArray21  COMMA_SOURCE_FILE ("outlet-class.ggs", 132)) ;
      }
    }
    enumGalgasBool test_22 = kBoolTrue ;
    if (kBoolTrue == test_22) {
      const GALGAS_outletClassDeclarationAST temp_23 = this ;
      test_22 = temp_23.readProperty_mHasHidden ().operator_and (var_hasHidden_3924 COMMA_SOURCE_FILE ("outlet-class.ggs", 134)).boolEnum () ;
      if (kBoolTrue == test_22) {
        const GALGAS_outletClassDeclarationAST temp_24 = this ;
        TC_Array <C_FixItDescription> fixItArray25 ;
        inCompiler->emitSemanticError (temp_24.readProperty_mClassName ().readProperty_location (), GALGAS_string ("$hidden binding already defined in superclass"), fixItArray25  COMMA_SOURCE_FILE ("outlet-class.ggs", 135)) ;
      }
    }
    enumGalgasBool test_26 = kBoolTrue ;
    if (kBoolTrue == test_26) {
      const GALGAS_outletClassDeclarationAST temp_27 = this ;
      test_26 = temp_27.readProperty_mHandlesGraphicControllerBinding ().operator_and (var_handlesGraphicControllerBinding_3967 COMMA_SOURCE_FILE ("outlet-class.ggs", 137)).boolEnum () ;
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
    ioArgument_ioSemanticContext.mProperty_mOutletClassMap.setter_insertKey (temp_30.readProperty_mClassName (), temp_31.readProperty_mSuperClassName (), temp_32.readProperty_mHasRunAction ().operator_or (var_hasRunAction_3845 COMMA_SOURCE_FILE ("outlet-class.ggs", 143)), temp_33.readProperty_mHandlesTableValueBinding ().operator_or (var_handlesTableValueBinding_3881 COMMA_SOURCE_FILE ("outlet-class.ggs", 144)), temp_34.readProperty_mHasEnabled ().operator_or (var_hasEnabled_3903 COMMA_SOURCE_FILE ("outlet-class.ggs", 145)), temp_35.readProperty_mHasHidden ().operator_or (var_hasHidden_3924 COMMA_SOURCE_FILE ("outlet-class.ggs", 146)), temp_36.readProperty_mHandlesGraphicControllerBinding ().operator_or (var_handlesGraphicControllerBinding_3967 COMMA_SOURCE_FILE ("outlet-class.ggs", 147)), temp_37.readProperty_mUserDefined (), inCompiler COMMA_SOURCE_FILE ("outlet-class.ggs", 140)) ;
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
  cEnumerator_outletClassBindingSpecificationList enumerator_4785 (constinArgument_inBindingSpecificationListMap, kENUMERATION_UP) ;
  while (enumerator_4785.hasCurrentObject ()) {
    GALGAS_outletBindingSpecificationModelList var_outletBindingSpecificationModelList_4903 = GALGAS_outletBindingSpecificationModelList::constructor_emptyList (SOURCE_FILE ("outlet-binding-specification.ggs", 129)) ;
    cEnumerator_outletClassBindingSpecificationModelList enumerator_4963 (enumerator_4785.current_mOutletClassBindingSpecificationModelList (HERE), kENUMERATION_UP) ;
    while (enumerator_4963.hasCurrentObject ()) {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (kIsEqual, enumerator_4963.current_mModelTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string ("enum"))).boolEnum () ;
        if (kBoolTrue == test_0) {
          var_outletBindingSpecificationModelList_4903.addAssign_operation (GALGAS_typeKind::constructor_enumType (GALGAS_string::makeEmptyString (), GALGAS_enumConstantMap::constructor_emptyMap (SOURCE_FILE ("outlet-binding-specification.ggs", 133)), GALGAS_enumFuncMap::constructor_emptyMap (SOURCE_FILE ("outlet-binding-specification.ggs", 133))  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 133)), enumerator_4963.current_mModelShouldBeWritableProperty (HERE)  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 132)) ;
        }
      }
      if (kBoolFalse == test_0) {
        GALGAS_classKind var_classKind_5336 ;
        GALGAS_propertyMap joker_5338_3 ; // Joker input parameter
        GALGAS_actionMap joker_5338_2 ; // Joker input parameter
        GALGAS_propertyGenerationList joker_5338_1 ; // Joker input parameter
        ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (enumerator_4963.current_mModelTypeName (HERE), var_classKind_5336, joker_5338_3, joker_5338_2, joker_5338_1, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 136)) ;
        GALGAS_typeKind var_typeKind_5372 ;
        switch (var_classKind_5336.enumValue ()) {
        case GALGAS_classKind::kNotBuilt:
          break ;
        case GALGAS_classKind::kEnum_prefs:
          {
            TC_Array <C_FixItDescription> fixItArray1 ;
            inCompiler->emitSemanticError (enumerator_4963.current_mModelTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray1  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 140)) ;
            var_typeKind_5372.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_classKind::kEnum_atomic:
          {
            const cEnumAssociatedValues_classKind_atomic * extractPtr_5566 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_5336.unsafePointer ()) ;
            const GALGAS_typeKind extractedValue_5537_kind = extractPtr_5566->mAssociatedValue0 ;
            var_typeKind_5372 = extractedValue_5537_kind ;
          }
          break ;
        case GALGAS_classKind::kEnum_document:
          {
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (enumerator_4963.current_mModelTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray2  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 144)) ;
            var_typeKind_5372.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_classKind::kEnum_entity:
          {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (enumerator_4963.current_mModelTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray3  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 146)) ;
            var_typeKind_5372.drop () ; // Release error dropped variable
          }
          break ;
        }
        var_outletBindingSpecificationModelList_4903.addAssign_operation (var_typeKind_5372, enumerator_4963.current_mModelShouldBeWritableProperty (HERE)  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 148)) ;
      }
      enumerator_4963.gotoNextObject () ;
    }
    GALGAS_controllerBindingOptionDecoratedList var_controllerBindingOptionDecoratedList_5989 = GALGAS_controllerBindingOptionDecoratedList::constructor_emptyList (SOURCE_FILE ("outlet-binding-specification.ggs", 151)) ;
    cEnumerator_controllerBindingOptionList enumerator_6031 (enumerator_4785.current_mBindingOptionList (HERE), kENUMERATION_UP) ;
    while (enumerator_6031.hasCurrentObject ()) {
      GALGAS_classKind var_classKind_6145 ;
      GALGAS_propertyMap joker_6147_3 ; // Joker input parameter
      GALGAS_actionMap joker_6147_2 ; // Joker input parameter
      GALGAS_propertyGenerationList joker_6147_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (enumerator_6031.current_mOptionTypeName (HERE), var_classKind_6145, joker_6147_3, joker_6147_2, joker_6147_1, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 153)) ;
      GALGAS_typeKind var_typeKind_6179 ;
      switch (var_classKind_6145.enumValue ()) {
      case GALGAS_classKind::kNotBuilt:
        break ;
      case GALGAS_classKind::kEnum_prefs:
        {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_6031.current_mOptionTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray4  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 157)) ;
          var_typeKind_6179.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_classKind::kEnum_atomic:
        {
          const cEnumAssociatedValues_classKind_atomic * extractPtr_6364 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_6145.unsafePointer ()) ;
          const GALGAS_typeKind extractedValue_6337_kind = extractPtr_6364->mAssociatedValue0 ;
          var_typeKind_6179 = extractedValue_6337_kind ;
        }
        break ;
      case GALGAS_classKind::kEnum_document:
        {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (enumerator_6031.current_mOptionTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray5  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 161)) ;
          var_typeKind_6179.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_classKind::kEnum_entity:
        {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (enumerator_6031.current_mOptionTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 163)) ;
          var_typeKind_6179.drop () ; // Release error dropped variable
        }
        break ;
      }
      var_controllerBindingOptionDecoratedList_5989.addAssign_operation (var_typeKind_6179, enumerator_6031.current_mOptionName (HERE)  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 165)) ;
      enumerator_6031.gotoNextObject () ;
    }
    GALGAS_outletBindingSpecificationMap var_bindingMap_6745 ;
    GALGAS_lstring var_outletSuperClassName_6783 ;
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = ioArgument_ioSemanticContext.readProperty_mBindingSpecificationMap ().getter_hasKey (enumerator_4785.current_mOutletClassName (HERE).readProperty_string () COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 170)).boolEnum () ;
      if (kBoolTrue == test_7) {
        {
        ioArgument_ioSemanticContext.mProperty_mBindingSpecificationMap.setter_removeKey (enumerator_4785.current_mOutletClassName (HERE), var_outletSuperClassName_6783, var_bindingMap_6745, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 171)) ;
        }
      }
    }
    if (kBoolFalse == test_7) {
      var_bindingMap_6745 = GALGAS_outletBindingSpecificationMap::constructor_emptyMap (SOURCE_FILE ("outlet-binding-specification.ggs", 173)) ;
      GALGAS_bool joker_7110_6 ; // Joker input parameter
      GALGAS_bool joker_7110_5 ; // Joker input parameter
      GALGAS_bool joker_7110_4 ; // Joker input parameter
      GALGAS_bool joker_7110_3 ; // Joker input parameter
      GALGAS_bool joker_7110_2 ; // Joker input parameter
      GALGAS_bool joker_7110_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mOutletClassMap ().method_searchKey (enumerator_4785.current_mOutletClassName (HERE), var_outletSuperClassName_6783, joker_7110_6, joker_7110_5, joker_7110_4, joker_7110_3, joker_7110_2, joker_7110_1, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 174)) ;
    }
    {
    var_bindingMap_6745.setter_insertKey (enumerator_4785.current_mBindingName (HERE), var_outletBindingSpecificationModelList_4903, var_controllerBindingOptionDecoratedList_5989, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 176)) ;
    }
    {
    ioArgument_ioSemanticContext.mProperty_mBindingSpecificationMap.setter_insertKey (enumerator_4785.current_mOutletClassName (HERE), var_outletSuperClassName_6783, var_bindingMap_6745, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 181)) ;
    }
    enumerator_4785.gotoNextObject () ;
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
  cEnumerator_outletDeclarationList enumerator_8342 (constinArgument_inOutletDeclarationList, kENUMERATION_UP) ;
  while (enumerator_8342.hasCurrentObject ()) {
    {
    outArgument_outletMap.setter_insertKey (enumerator_8342.current_mOutletName (HERE), enumerator_8342.current_mOutletTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 208)) ;
    }
    GALGAS_bool var_handlesRunAction_8574 ;
    GALGAS_bool var_handlesTableViewBinding_8615 ;
    GALGAS_bool var_handlesEnabledBinding_8654 ;
    GALGAS_bool var_handlesHiddenBinding_8692 ;
    GALGAS_bool var_handleGraphicControllerBinding_8740 ;
    GALGAS_bool var_outletClassIsUserDefined_8782 ;
    GALGAS_lstring joker_8539 ; // Joker input parameter
    constinArgument_inSemanticContext.readProperty_mOutletClassMap ().method_searchKey (enumerator_8342.current_mOutletTypeName (HERE), joker_8539, var_handlesRunAction_8574, var_handlesTableViewBinding_8615, var_handlesEnabledBinding_8654, var_handlesHiddenBinding_8692, var_handleGraphicControllerBinding_8740, var_outletClassIsUserDefined_8782, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 209)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = var_outletClassIsUserDefined_8782.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 219)).boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioGeneration.mProperty_mNeededOutletClasses.addAssign_operation (enumerator_8342.current_mOutletTypeName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 220)) ;
      }
    }
    switch (enumerator_8342.current_mGraphicController (HERE).enumValue ()) {
    case GALGAS_graphicController::kNotBuilt:
      break ;
    case GALGAS_graphicController::kEnum_none:
      {
      }
      break ;
    case GALGAS_graphicController::kEnum_defined:
      {
        const cEnumAssociatedValues_graphicController_defined * extractPtr_11248 = (const cEnumAssociatedValues_graphicController_defined *) (enumerator_8342.current_mGraphicController (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_9032_controllerName = extractPtr_11248->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_9054_propertyName = extractPtr_11248->mAssociatedValue1 ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_handleGraphicControllerBinding_8740.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 226)).boolEnum () ;
          if (kBoolTrue == test_1) {
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (enumerator_8342.current_mOutletTypeName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_8342.current_mOutletTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 227)).add_operation (GALGAS_string ("' type does not handle the $graphicController binding"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 227)), fixItArray2  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 227)) ;
          }
        }
        if (kBoolFalse == test_1) {
          GALGAS_propertyKind var_kind_9350 ;
          GALGAS_actionMap joker_9362_2 ; // Joker input parameter
          GALGAS_bool joker_9362_1 ; // Joker input parameter
          constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_9032_controllerName, var_kind_9350, joker_9362_2, joker_9362_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 229)) ;
          switch (var_kind_9350.enumValue ()) {
          case GALGAS_propertyKind::kNotBuilt:
            break ;
          case GALGAS_propertyKind::kEnum_property:
            {
              TC_Array <C_FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (extractedValue_9032_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray3  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 236)) ;
            }
            break ;
          case GALGAS_propertyKind::kEnum_toMany:
            {
              TC_Array <C_FixItDescription> fixItArray4 ;
              inCompiler->emitSemanticError (extractedValue_9032_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray4  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 238)) ;
            }
            break ;
          case GALGAS_propertyKind::kEnum_toOne:
            {
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (extractedValue_9032_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray5  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 240)) ;
            }
            break ;
          case GALGAS_propertyKind::kEnum_arrayController:
            {
              const cEnumAssociatedValues_propertyKind_arrayController * extractPtr_10997 = (const cEnumAssociatedValues_propertyKind_arrayController *) (var_kind_9350.unsafePointer ()) ;
              const GALGAS_lstring extractedValue_9761_entityName = extractPtr_10997->mAssociatedValue0 ;
              const GALGAS_bool extractedValue_9769_graphic = extractPtr_10997->mAssociatedValue1 ;
              enumGalgasBool test_6 = kBoolTrue ;
              if (kBoolTrue == test_6) {
                test_6 = GALGAS_bool (kIsEqual, extractedValue_9054_propertyName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_6) {
                  enumGalgasBool test_7 = kBoolTrue ;
                  if (kBoolTrue == test_7) {
                    test_7 = extractedValue_9769_graphic.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 243)).boolEnum () ;
                    if (kBoolTrue == test_7) {
                      TC_Array <C_FixItDescription> fixItArray8 ;
                      inCompiler->emitSemanticError (extractedValue_9032_controllerName.readProperty_location (), GALGAS_string ("the controlled entity (").add_operation (extractedValue_9761_entityName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 244)).add_operation (GALGAS_string (") should be a graphic entity"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 244)), fixItArray8  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 244)) ;
                    }
                  }
                }
              }
              if (kBoolFalse == test_6) {
                GALGAS_propertyMap var_observablePropertyMap_10123 ;
                GALGAS_classKind joker_10081 ; // Joker input parameter
                GALGAS_actionMap joker_10139_2 ; // Joker input parameter
                GALGAS_propertyGenerationList joker_10139_1 ; // Joker input parameter
                constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_9761_entityName, joker_10081, var_observablePropertyMap_10123, joker_10139_2, joker_10139_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 247)) ;
                GALGAS_propertyKind var_propertyKind_10232 ;
                GALGAS_actionMap joker_10234_2 ; // Joker input parameter
                GALGAS_bool joker_10234_1 ; // Joker input parameter
                var_observablePropertyMap_10123.method_searchKey (extractedValue_9054_propertyName, var_propertyKind_10232, joker_10234_2, joker_10234_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 253)) ;
                switch (var_propertyKind_10232.enumValue ()) {
                case GALGAS_propertyKind::kNotBuilt:
                  break ;
                case GALGAS_propertyKind::kEnum_property:
                  {
                    TC_Array <C_FixItDescription> fixItArray9 ;
                    inCompiler->emitSemanticError (extractedValue_9032_controllerName.readProperty_location (), GALGAS_string ("the bound model should be a toMany property"), fixItArray9  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 256)) ;
                  }
                  break ;
                case GALGAS_propertyKind::kEnum_toMany:
                  {
                    const cEnumAssociatedValues_propertyKind_toMany * extractPtr_10606 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_propertyKind_10232.unsafePointer ()) ;
                    const GALGAS_lstring extractedValue_10423_kEntityName = extractPtr_10606->mAssociatedValue0 ;
                    const GALGAS_bool extractedValue_10435_isGraphic = extractPtr_10606->mAssociatedValue2 ;
                    enumGalgasBool test_10 = kBoolTrue ;
                    if (kBoolTrue == test_10) {
                      test_10 = extractedValue_10435_isGraphic.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 258)).boolEnum () ;
                      if (kBoolTrue == test_10) {
                        TC_Array <C_FixItDescription> fixItArray11 ;
                        inCompiler->emitSemanticError (extractedValue_9032_controllerName.readProperty_location (), GALGAS_string ("the controlled entity (").add_operation (extractedValue_10423_kEntityName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 259)).add_operation (GALGAS_string (") should be a graphic entity"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 259)), fixItArray11  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 259)) ;
                      }
                    }
                  }
                  break ;
                case GALGAS_propertyKind::kEnum_toOne:
                  {
                    TC_Array <C_FixItDescription> fixItArray12 ;
                    inCompiler->emitSemanticError (extractedValue_9032_controllerName.readProperty_location (), GALGAS_string ("the bound model should be a toMany property"), fixItArray12  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 262)) ;
                  }
                  break ;
                case GALGAS_propertyKind::kEnum_arrayController:
                  {
                    TC_Array <C_FixItDescription> fixItArray13 ;
                    inCompiler->emitSemanticError (extractedValue_9032_controllerName.readProperty_location (), GALGAS_string ("the bound model should be a toMany property"), fixItArray13  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 264)) ;
                  }
                  break ;
                case GALGAS_propertyKind::kEnum_selectionController:
                  {
                    TC_Array <C_FixItDescription> fixItArray14 ;
                    inCompiler->emitSemanticError (extractedValue_9032_controllerName.readProperty_location (), GALGAS_string ("the bound model should be a toMany property"), fixItArray14  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 266)) ;
                  }
                  break ;
                }
              }
            }
            break ;
          case GALGAS_propertyKind::kEnum_selectionController:
            {
              TC_Array <C_FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (extractedValue_9032_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray15  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 270)) ;
            }
            break ;
          }
          outArgument_outEBViewGraphicControllerBindingGenerationList.addAssign_operation (enumerator_8342.current_mOutletName (HERE).readProperty_string (), extractedValue_9032_controllerName.readProperty_string ()  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 272)) ;
        }
      }
      break ;
    }
    switch (enumerator_8342.current_mTableValueBindingDescriptor (HERE).enumValue ()) {
    case GALGAS_tableValueBinding::kNotBuilt:
      break ;
    case GALGAS_tableValueBinding::kEnum_noTableValueBinding:
      {
      }
      break ;
    case GALGAS_tableValueBinding::kEnum_tableValueBinding:
      {
        const cEnumAssociatedValues_tableValueBinding_tableValueBinding * extractPtr_11960 = (const cEnumAssociatedValues_tableValueBinding_tableValueBinding *) (enumerator_8342.current_mTableValueBindingDescriptor (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_11404_controllerName = extractPtr_11960->mAssociatedValue0 ;
        enumGalgasBool test_16 = kBoolTrue ;
        if (kBoolTrue == test_16) {
          test_16 = var_handlesTableViewBinding_8615.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 279)).boolEnum () ;
          if (kBoolTrue == test_16) {
            TC_Array <C_FixItDescription> fixItArray17 ;
            inCompiler->emitSemanticError (enumerator_8342.current_mOutletTypeName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_8342.current_mOutletTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 280)).add_operation (GALGAS_string ("' type does not handle the $tableView binding"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 280)), fixItArray17  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 280)) ;
          }
        }
        if (kBoolFalse == test_16) {
          GALGAS_propertyKind var_kind_11692 ;
          GALGAS_actionMap joker_11704_2 ; // Joker input parameter
          GALGAS_bool joker_11704_1 ; // Joker input parameter
          constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_11404_controllerName, var_kind_11692, joker_11704_2, joker_11704_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 282)) ;
          enumGalgasBool test_18 = kBoolTrue ;
          if (kBoolTrue == test_18) {
            test_18 = var_kind_11692.getter_isArrayController (SOURCE_FILE ("outlet-declaration.ggs", 287)).operator_not (SOURCE_FILE ("outlet-declaration.ggs", 287)).boolEnum () ;
            if (kBoolTrue == test_18) {
              TC_Array <C_FixItDescription> fixItArray19 ;
              inCompiler->emitSemanticError (extractedValue_11404_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray19  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 288)) ;
            }
          }
          outArgument_outTableViewBindingGenerationList.addAssign_operation (enumerator_8342.current_mOutletName (HERE).readProperty_string (), extractedValue_11404_controllerName.readProperty_string ()  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 290)) ;
        }
      }
      break ;
    }
    switch (enumerator_8342.current_mRunDescriptor (HERE).enumValue ()) {
    case GALGAS_runActionDescriptor::kNotBuilt:
      break ;
    case GALGAS_runActionDescriptor::kEnum_noAction:
      {
      }
      break ;
    case GALGAS_runActionDescriptor::kEnum_action:
      {
        const cEnumAssociatedValues_runActionDescriptor_action * extractPtr_12925 = (const cEnumAssociatedValues_runActionDescriptor_action *) (enumerator_8342.current_mRunDescriptor (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_12066_target = extractPtr_12925->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_12082_action = extractPtr_12925->mAssociatedValue1 ;
        enumGalgasBool test_20 = kBoolTrue ;
        if (kBoolTrue == test_20) {
          test_20 = var_handlesRunAction_8574.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 297)).boolEnum () ;
          if (kBoolTrue == test_20) {
            TC_Array <C_FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticError (enumerator_8342.current_mOutletTypeName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_8342.current_mOutletTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 298)).add_operation (GALGAS_string ("' type does not handle run action"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 298)), fixItArray21  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 298)) ;
          }
        }
        if (kBoolFalse == test_20) {
          enumGalgasBool test_22 = kBoolTrue ;
          if (kBoolTrue == test_22) {
            test_22 = GALGAS_bool (kIsEqual, extractedValue_12066_target.readProperty_string ().objectCompare (GALGAS_string ("self"))).boolEnum () ;
            if (kBoolTrue == test_22) {
              constinArgument_inActionMap.method_searchKey (extractedValue_12082_action, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 300)) ;
              outArgument_outTargetActionList.addAssign_operation (enumerator_8342.current_mOutletName (HERE).readProperty_string (), GALGAS_string ("self"), extractedValue_12082_action.readProperty_string (), constinArgument_inReceiverSwiftTypeName  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 301)) ;
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
            outArgument_outTargetActionList.addAssign_operation (enumerator_8342.current_mOutletName (HERE).readProperty_string (), temp_23.add_operation (extractedValue_12066_target.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 316)), extractedValue_12082_action.readProperty_string (), GALGAS_string ("Controller_").add_operation (constinArgument_inReceiverSwiftTypeName, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 318)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 318)).add_operation (extractedValue_12066_target.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 318))  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 314)) ;
          }
        }
      }
      break ;
    }
    switch (enumerator_8342.current_mEnabledBindingDescriptor (HERE).enumValue ()) {
    case GALGAS_multipleBindingDescriptor::kNotBuilt:
      break ;
    case GALGAS_multipleBindingDescriptor::kEnum_noBinding:
      {
      }
      break ;
    case GALGAS_multipleBindingDescriptor::kEnum_binding:
      {
        const cEnumAssociatedValues_multipleBindingDescriptor_binding * extractPtr_13817 = (const cEnumAssociatedValues_multipleBindingDescriptor_binding *) (enumerator_8342.current_mEnabledBindingDescriptor (HERE).unsafePointer ()) ;
        const GALGAS_abstractBooleanMultipleBindingExpressionAST extractedValue_13087_expression = extractPtr_13817->mAssociatedValue0 ;
        GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_enableExpression_13390 ;
        GALGAS_typeKind var_type_13418 ;
        GALGAS_location var_errorLocation_13455 ;
        callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_13087_expression.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_enableExpression_13390, var_type_13418, var_errorLocation_13455, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 325)) ;
        enumGalgasBool test_25 = kBoolTrue ;
        if (kBoolTrue == test_25) {
          test_25 = var_handlesEnabledBinding_8654.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 335)).boolEnum () ;
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
        outArgument_outMultipleBindingGenerationList.addAssign_operation (enumerator_8342.current_mOutletName (HERE).readProperty_string (), GALGAS_string ("enabled"), var_enableExpression_13390  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 341)) ;
      }
      break ;
    }
    switch (enumerator_8342.current_mHiddenBindingDescriptor (HERE).enumValue ()) {
    case GALGAS_multipleBindingDescriptor::kNotBuilt:
      break ;
    case GALGAS_multipleBindingDescriptor::kEnum_noBinding:
      {
      }
      break ;
    case GALGAS_multipleBindingDescriptor::kEnum_binding:
      {
        const cEnumAssociatedValues_multipleBindingDescriptor_binding * extractPtr_14704 = (const cEnumAssociatedValues_multipleBindingDescriptor_binding *) (enumerator_8342.current_mHiddenBindingDescriptor (HERE).unsafePointer ()) ;
        const GALGAS_abstractBooleanMultipleBindingExpressionAST extractedValue_13977_expression = extractPtr_14704->mAssociatedValue0 ;
        GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_14280 ;
        GALGAS_typeKind var_type_14308 ;
        GALGAS_location var_errorLocation_14345 ;
        callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_13977_expression.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_hiddenExpression_14280, var_type_14308, var_errorLocation_14345, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 350)) ;
        enumGalgasBool test_29 = kBoolTrue ;
        if (kBoolTrue == test_29) {
          test_29 = var_type_14308.getter_isBoolType (SOURCE_FILE ("outlet-declaration.ggs", 360)).operator_not (SOURCE_FILE ("outlet-declaration.ggs", 360)).boolEnum () ;
          if (kBoolTrue == test_29) {
            TC_Array <C_FixItDescription> fixItArray30 ;
            inCompiler->emitSemanticError (var_errorLocation_14345, GALGAS_string ("expression is not boolean"), fixItArray30  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 361)) ;
          }
        }
        enumGalgasBool test_31 = kBoolTrue ;
        if (kBoolTrue == test_31) {
          test_31 = var_handlesHiddenBinding_8692.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 363)).boolEnum () ;
          if (kBoolTrue == test_31) {
            TC_Array <C_FixItDescription> fixItArray32 ;
            inCompiler->emitSemanticError (var_errorLocation_14345, GALGAS_string ("cet outlet n'accepte pas le binding $hidden"), fixItArray32  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 364)) ;
          }
        }
        outArgument_outMultipleBindingGenerationList.addAssign_operation (enumerator_8342.current_mOutletName (HERE).readProperty_string (), GALGAS_string ("hidden"), var_hiddenExpression_14280  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 366)) ;
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
    routine_analyzeRegularBinding (constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, enumerator_8342.current_mOutletTypeName (HERE), enumerator_8342.current_mOutletName (HERE).readProperty_string (), enumerator_8342.current_mRegularBindingList (HERE), temp_33, outArgument_outRegularBindingsGenerationList, inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 372)) ;
    }
    enumerator_8342.gotoNextObject () ;
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
  cEnumerator_regularBindingList enumerator_15724 (constinArgument_inRegularBindingList, kENUMERATION_UP) ;
  while (enumerator_15724.hasCurrentObject ()) {
    GALGAS_outletBindingModelList var_boundModelTypeList_15824 = GALGAS_outletBindingModelList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.ggs", 401)) ;
    GALGAS_boundObjectList var_boundModelListForGeneration_15882 = GALGAS_boundObjectList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.ggs", 402)) ;
    cEnumerator_observablePropertyList enumerator_15916 (enumerator_15724.current_mObservablePropertyList (HERE), kENUMERATION_UP) ;
    while (enumerator_15916.hasCurrentObject ()) {
      GALGAS_propertyKind var_kind_16119 ;
      GALGAS_string var_swiftTypeStringForTransientFunctionArgument_16191 ;
      GALGAS_string var_defaultValueAsString_16240 ;
      extensionMethod_analyzeObservableProperty (enumerator_15916.current_mObservableProperty (HERE), constinArgument_inRootPropertyMap, constinArgument_inSemanticContext, constinArgument_inBoundModelPropertyMap, var_kind_16119, var_swiftTypeStringForTransientFunctionArgument_16191, var_defaultValueAsString_16240, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 404)) ;
      switch (var_kind_16119.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          TC_Array <C_FixItDescription> fixItArray0 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_15916.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 415)), GALGAS_string ("a toMany property cannot be bound"), fixItArray0  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 415)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_15916.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 417)), GALGAS_string ("a toOne property cannot be bound"), fixItArray1  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 417)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_15916.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 419)), GALGAS_string ("an array controller cannot be bound"), fixItArray2  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 419)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_15916.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 421)), GALGAS_string ("a selection controller cannot be bound"), fixItArray3  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 421)) ;
        }
        break ;
      }
      var_boundModelListForGeneration_15882.addAssign_operation (extensionGetter_modelStringForSelf (enumerator_15916.current_mObservableProperty (HERE), constinArgument_inSelfSwiftName, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 423)), var_kind_16119  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 423)) ;
      var_boundModelTypeList_15824.addAssign_operation (var_kind_16119, extensionGetter_location (enumerator_15916.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 424))  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 424)) ;
      enumerator_15916.gotoNextObject () ;
    }
    GALGAS_outletBindingSpecificationModelList var_outletBindingSpecificationModelList_17049 = GALGAS_outletBindingSpecificationModelList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.ggs", 427)) ;
    GALGAS_controllerBindingOptionDecoratedList var_controllerBindingOptionDecoratedList_17137 = GALGAS_controllerBindingOptionDecoratedList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.ggs", 428)) ;
    GALGAS_lstring var_outletTypeName_17165 = constinArgument_inOutletTypeName ;
    GALGAS_bool var_continues_17202 = GALGAS_bool (true) ;
    if (constinArgument_inSemanticContext.readProperty_mBindingSpecificationMap ().getter_count (SOURCE_FILE ("outlet-declaration.ggs", 431)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 431)).isValid ()) {
      uint32_t variant_17218 = constinArgument_inSemanticContext.readProperty_mBindingSpecificationMap ().getter_count (SOURCE_FILE ("outlet-declaration.ggs", 431)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 431)).uintValue () ;
      bool loop_17218 = true ;
      while (loop_17218) {
        loop_17218 = GALGAS_bool (kIsNotEqual, var_outletTypeName_17165.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).operator_and (var_continues_17202 COMMA_SOURCE_FILE ("outlet-declaration.ggs", 431)).isValid () ;
        if (loop_17218) {
          loop_17218 = GALGAS_bool (kIsNotEqual, var_outletTypeName_17165.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).operator_and (var_continues_17202 COMMA_SOURCE_FILE ("outlet-declaration.ggs", 431)).boolValue () ;
        }
        if (loop_17218 && (0 == variant_17218)) {
          loop_17218 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("outlet-declaration.ggs", 431)) ;
        }
        if (loop_17218) {
          variant_17218 -- ;
          var_continues_17202 = GALGAS_bool (false) ;
          GALGAS_lstring var_superOutletClassName_17469 ;
          GALGAS_outletBindingSpecificationMap var_bindingMap_17524 ;
          constinArgument_inSemanticContext.readProperty_mBindingSpecificationMap ().method_searchKey (var_outletTypeName_17165, var_superOutletClassName_17469, var_bindingMap_17524, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 433)) ;
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            test_4 = var_bindingMap_17524.getter_hasKey (enumerator_15724.current_mBindingName (HERE).readProperty_string () COMMA_SOURCE_FILE ("outlet-declaration.ggs", 438)).boolEnum () ;
            if (kBoolTrue == test_4) {
              var_bindingMap_17524.method_searchKey (enumerator_15724.current_mBindingName (HERE), var_outletBindingSpecificationModelList_17049, var_controllerBindingOptionDecoratedList_17137, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 439)) ;
            }
          }
          if (kBoolFalse == test_4) {
            var_continues_17202 = GALGAS_bool (true) ;
            var_outletTypeName_17165 = var_superOutletClassName_17469 ;
          }
        }
      }
    }
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = var_continues_17202.boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (enumerator_15724.current_mBindingName (HERE).readProperty_location (), GALGAS_string ("this binding is not defined"), fixItArray6  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 450)) ;
      }
    }
    if (kBoolFalse == test_5) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = GALGAS_bool (kIsNotEqual, var_boundModelTypeList_15824.getter_length (SOURCE_FILE ("outlet-declaration.ggs", 451)).objectCompare (var_outletBindingSpecificationModelList_17049.getter_length (SOURCE_FILE ("outlet-declaration.ggs", 451)))).boolEnum () ;
        if (kBoolTrue == test_7) {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (enumerator_15724.current_mBindingName (HERE).readProperty_location (), var_outletBindingSpecificationModelList_17049.getter_length (SOURCE_FILE ("outlet-declaration.ggs", 453)).getter_string (SOURCE_FILE ("outlet-declaration.ggs", 453)).add_operation (GALGAS_string (" model(s) required for this binding (found: "), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 453)).add_operation (var_boundModelTypeList_15824.getter_length (SOURCE_FILE ("outlet-declaration.ggs", 455)).getter_string (SOURCE_FILE ("outlet-declaration.ggs", 454)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 454)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 455)), fixItArray8  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 452)) ;
        }
      }
      if (kBoolFalse == test_7) {
        cEnumerator_outletBindingSpecificationModelList enumerator_18288 (var_outletBindingSpecificationModelList_17049, kENUMERATION_UP) ;
        cEnumerator_outletBindingModelList enumerator_18363 (var_boundModelTypeList_15824, kENUMERATION_UP) ;
        while (enumerator_18288.hasCurrentObject () && enumerator_18363.hasCurrentObject ()) {
          enumGalgasBool test_9 = kBoolTrue ;
          if (kBoolTrue == test_9) {
            GALGAS_bool test_10 = enumerator_18288.current_mModelShouldBeWritableProperty (HERE) ;
            if (kBoolTrue == test_10.boolEnum ()) {
              test_10 = extensionGetter_isTransient (enumerator_18363.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 458)) ;
            }
            test_9 = test_10.boolEnum () ;
            if (kBoolTrue == test_9) {
              TC_Array <C_FixItDescription> fixItArray11 ;
              inCompiler->emitSemanticError (enumerator_18363.current_mErrorLocation (HERE), GALGAS_string ("the model is transient and the binding requires an writable model"), fixItArray11  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 459)) ;
            }
          }
          enumGalgasBool test_12 = kBoolTrue ;
          if (kBoolTrue == test_12) {
            GALGAS_bool test_13 = enumerator_18288.current_mModelType (HERE).getter_isEnumType (SOURCE_FILE ("outlet-declaration.ggs", 461)) ;
            if (kBoolTrue == test_13.boolEnum ()) {
              test_13 = extensionGetter_isEnumType (enumerator_18363.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 461)) ;
            }
            test_12 = test_13.boolEnum () ;
            if (kBoolTrue == test_12) {
            }
          }
          if (kBoolFalse == test_12) {
            enumGalgasBool test_14 = kBoolTrue ;
            if (kBoolTrue == test_14) {
              test_14 = GALGAS_bool (kIsNotEqual, extensionGetter_swiftTypeName (enumerator_18288.current_mModelType (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 462)).objectCompare (extensionGetter_swiftTypeName (enumerator_18363.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 462)))).boolEnum () ;
              if (kBoolTrue == test_14) {
                TC_Array <C_FixItDescription> fixItArray15 ;
                inCompiler->emitSemanticError (enumerator_18363.current_mErrorLocation (HERE), GALGAS_string ("the model type should be ").add_operation (extensionGetter_swiftTypeName (enumerator_18288.current_mModelType (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 463)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 463)), fixItArray15  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 463)) ;
              }
            }
          }
          enumerator_18288.gotoNextObject () ;
          enumerator_18363.gotoNextObject () ;
        }
      }
    }
    GALGAS_string var_bindingOptionString_18951 = GALGAS_string::makeEmptyString () ;
    enumGalgasBool test_16 = kBoolTrue ;
    if (kBoolTrue == test_16) {
      test_16 = GALGAS_bool (kIsNotEqual, var_controllerBindingOptionDecoratedList_17137.getter_length (SOURCE_FILE ("outlet-declaration.ggs", 469)).objectCompare (enumerator_15724.current_mBindingOptionList (HERE).getter_length (SOURCE_FILE ("outlet-declaration.ggs", 469)))).boolEnum () ;
      if (kBoolTrue == test_16) {
        GALGAS_string var_s_19067 ;
        enumGalgasBool test_17 = kBoolTrue ;
        if (kBoolTrue == test_17) {
          test_17 = GALGAS_bool (kIsEqual, var_controllerBindingOptionDecoratedList_17137.getter_length (SOURCE_FILE ("outlet-declaration.ggs", 471)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_17) {
            var_s_19067 = GALGAS_string ("this binding has no option") ;
          }
        }
        if (kBoolFalse == test_17) {
          var_s_19067 = GALGAS_string ("this binding requires the following options:") ;
          cEnumerator_controllerBindingOptionDecoratedList enumerator_19282 (var_controllerBindingOptionDecoratedList_17137, kENUMERATION_UP) ;
          while (enumerator_19282.hasCurrentObject ()) {
            var_s_19067.plusAssign_operation(GALGAS_string ("\n  - ").add_operation (enumerator_19282.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 476)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 476)).add_operation (extensionGetter_swiftTypeName (enumerator_19282.current_mOptionType (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 476)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 476)), inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 476)) ;
            enumerator_19282.gotoNextObject () ;
          }
        }
        TC_Array <C_FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticError (enumerator_15724.current_mBindingName (HERE).readProperty_location (), var_s_19067, fixItArray18  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 479)) ;
      }
    }
    if (kBoolFalse == test_16) {
      cEnumerator_controllerBindingOptionDecoratedList enumerator_19520 (var_controllerBindingOptionDecoratedList_17137, kENUMERATION_UP) ;
      cEnumerator_bindingOptionList enumerator_19614 (enumerator_15724.current_mBindingOptionList (HERE), kENUMERATION_UP) ;
      while (enumerator_19520.hasCurrentObject () && enumerator_19614.hasCurrentObject ()) {
        enumGalgasBool test_19 = kBoolTrue ;
        if (kBoolTrue == test_19) {
          test_19 = GALGAS_bool (kIsNotEqual, enumerator_19520.current_mOptionName (HERE).readProperty_string ().objectCompare (enumerator_19614.current_mOptionName (HERE).readProperty_string ())).boolEnum () ;
          if (kBoolTrue == test_19) {
            TC_Array <C_FixItDescription> fixItArray20 ;
            inCompiler->emitSemanticError (enumerator_19614.current_mOptionName (HERE).readProperty_location (), GALGAS_string ("the option name should be '").add_operation (enumerator_19520.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 484)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 484)), fixItArray20  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 484)) ;
          }
        }
        GALGAS_string var_optionValueAsString_19998 ;
        GALGAS_typeKindList temp_21 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.ggs", 487)) ;
        temp_21.addAssign_operation (enumerator_19520.current_mOptionType (HERE)  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 487)) ;
        callExtensionMethod_analyzeDefaultValueType ((cPtr_abstractDefaultValue *) enumerator_19614.current_mOptionValue (HERE).ptr (), temp_21, constinArgument_inPreferencesPropertyMap, var_optionValueAsString_19998, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 486)) ;
        var_bindingOptionString_18951.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_19520.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 491)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 491)).add_operation (var_optionValueAsString_19998, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 491)), inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 491)) ;
        enumerator_19520.gotoNextObject () ;
        enumerator_19614.gotoNextObject () ;
      }
    }
    ioArgument_ioRegularBindingsGenerationList.addAssign_operation (constinArgument_inOutletName, enumerator_15724.current_mBindingName (HERE).readProperty_string (), var_boundModelListForGeneration_15882, var_bindingOptionString_18951  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 495)) ;
    enumerator_15724.gotoNextObject () ;
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
  cEnumerator_observablePropertyList enumerator_1061 (temp_6.readProperty_mDependencyList (), kENUMERATION_UP) ;
  while (enumerator_1061.hasCurrentObject ()) {
    switch (enumerator_1061.current (HERE).readProperty_mObservableProperty ().enumValue ()) {
    case GALGAS_observablePropertyAST::kNotBuilt:
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_1319 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (enumerator_1061.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_1142_propertyName = extractPtr_1319->mAssociatedValue0 ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GALGAS_computedPropertyDeclarationAST temp_8 = this ;
          test_7 = GALGAS_bool (kIsNotEqual, temp_8.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_7) {
            {
            const GALGAS_computedPropertyDeclarationAST temp_9 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_771, GALGAS_lstring::constructor_new (temp_9.readProperty_mRootEntityName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 24)).add_operation (extractedValue_1142_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 24)), extractedValue_1142_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 24)) COMMA_SOURCE_FILE ("computed-property.ggs", 24)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_1544 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (enumerator_1061.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_1365_propertyName = extractPtr_1544->mAssociatedValue0 ;
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          const GALGAS_computedPropertyDeclarationAST temp_11 = this ;
          test_10 = GALGAS_bool (kIsNotEqual, temp_11.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_10) {
            {
            const GALGAS_computedPropertyDeclarationAST temp_12 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_771, GALGAS_lstring::constructor_new (temp_12.readProperty_mRootEntityName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 28)).add_operation (extractedValue_1365_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 28)), extractedValue_1365_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 28)) COMMA_SOURCE_FILE ("computed-property.ggs", 28)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_1783 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (enumerator_1061.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_1596_relationshipName = extractPtr_1783->mAssociatedValue0 ;
        enumGalgasBool test_13 = kBoolTrue ;
        if (kBoolTrue == test_13) {
          const GALGAS_computedPropertyDeclarationAST temp_14 = this ;
          test_13 = GALGAS_bool (kIsNotEqual, temp_14.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_13) {
            {
            const GALGAS_computedPropertyDeclarationAST temp_15 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_771, GALGAS_lstring::constructor_new (temp_15.readProperty_mRootEntityName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 32)).add_operation (extractedValue_1596_relationshipName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 32)), extractedValue_1596_relationshipName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 32)) COMMA_SOURCE_FILE ("computed-property.ggs", 32)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootPropertyNone:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone * extractPtr_2012 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone *) (enumerator_1061.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_1827_relationshipName = extractPtr_2012->mAssociatedValue0 ;
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
        const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_2195 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (enumerator_1061.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2083_propertyName = extractPtr_2195->mAssociatedValue0 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_19 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_771, GALGAS_lstring::constructor_new (temp_19.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 40)).add_operation (extractedValue_2083_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 40)), extractedValue_2083_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 40)) COMMA_SOURCE_FILE ("computed-property.ggs", 40)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyWithOption:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption * extractPtr_2364 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *) (enumerator_1061.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2250_propertyName = extractPtr_2364->mAssociatedValue0 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_20 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_771, GALGAS_lstring::constructor_new (temp_20.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 42)).add_operation (extractedValue_2250_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 42)), extractedValue_2250_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 42)) COMMA_SOURCE_FILE ("computed-property.ggs", 42)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyArray:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray * extractPtr_2528 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *) (enumerator_1061.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2414_propertyName = extractPtr_2528->mAssociatedValue0 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_21 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_771, GALGAS_lstring::constructor_new (temp_21.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 44)).add_operation (extractedValue_2414_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 44)), extractedValue_2414_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 44)) COMMA_SOURCE_FILE ("computed-property.ggs", 44)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyObject:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject * extractPtr_2693 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject *) (enumerator_1061.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2579_propertyName = extractPtr_2693->mAssociatedValue0 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_22 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_771, GALGAS_lstring::constructor_new (temp_22.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 46)).add_operation (extractedValue_2579_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 46)), extractedValue_2579_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 46)) COMMA_SOURCE_FILE ("computed-property.ggs", 46)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyNone:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone * extractPtr_2854 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone *) (enumerator_1061.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2742_propertyName = extractPtr_2854->mAssociatedValue0 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_23 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_771, GALGAS_lstring::constructor_new (temp_23.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 48)).add_operation (extractedValue_2742_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 48)), extractedValue_2742_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 48)) COMMA_SOURCE_FILE ("computed-property.ggs", 48)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_prefsProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_3008 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (enumerator_1061.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2900_propertyName = extractPtr_3008->mAssociatedValue0 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_771, GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 50)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 50)).add_operation (extractedValue_2900_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 50)), extractedValue_2900_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 50)) COMMA_SOURCE_FILE ("computed-property.ggs", 50)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_prefsPropertyWithOption:
      {
        const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption * extractPtr_3174 = (const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *) (enumerator_1061.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3064_propertyName = extractPtr_3174->mAssociatedValue0 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_771, GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 52)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 52)).add_operation (extractedValue_3064_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 52)), extractedValue_3064_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 52)) COMMA_SOURCE_FILE ("computed-property.ggs", 52)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty * extractPtr_3368 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty *) (enumerator_1061.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3231_controllerName = extractPtr_3368->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_3251_propertyName = extractPtr_3368->mAssociatedValue1 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_24 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_771, GALGAS_lstring::constructor_new (temp_24.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 54)).add_operation (extractedValue_3231_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 54)), extractedValue_3231_controllerName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 54)) COMMA_SOURCE_FILE ("computed-property.ggs", 54)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerSecondaryProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty * extractPtr_3600 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty *) (enumerator_1061.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3434_controllerName = extractPtr_3600->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_3454_propertyName = extractPtr_3600->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_3483_secondaryPropertyName = extractPtr_3600->mAssociatedValue2 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_25 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_771, GALGAS_lstring::constructor_new (temp_25.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 56)).add_operation (extractedValue_3434_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 56)), extractedValue_3434_controllerName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 56)) COMMA_SOURCE_FILE ("computed-property.ggs", 56)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerAllProperties:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties * extractPtr_3828 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties *) (enumerator_1061.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3662_controllerName = extractPtr_3828->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_3682_propertyName = extractPtr_3828->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_3711_secondaryPropertyName = extractPtr_3828->mAssociatedValue2 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_26 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_771, GALGAS_lstring::constructor_new (temp_26.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 58)).add_operation (extractedValue_3662_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 58)), extractedValue_3662_controllerName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 58)) COMMA_SOURCE_FILE ("computed-property.ggs", 58)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerOneProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty * extractPtr_4025 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty *) (enumerator_1061.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3888_controllerName = extractPtr_4025->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_3908_propertyName = extractPtr_4025->mAssociatedValue1 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_27 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_771, GALGAS_lstring::constructor_new (temp_27.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 60)).add_operation (extractedValue_3888_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 60)), extractedValue_3888_controllerName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 60)) COMMA_SOURCE_FILE ("computed-property.ggs", 60)) ;
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
        const cEnumAssociatedValues_observablePropertyAST_superProperty * extractPtr_4315 = (const cEnumAssociatedValues_observablePropertyAST_superProperty *) (enumerator_1061.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_4181_superEntityName = extractPtr_4315->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_4203_propertyName = extractPtr_4315->mAssociatedValue1 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_771, GALGAS_lstring::constructor_new (extractedValue_4181_superEntityName.readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 65)).add_operation (extractedValue_4203_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 65)), extractedValue_4203_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 65)) COMMA_SOURCE_FILE ("computed-property.ggs", 65)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_superPropertyWithDefaultValue:
      {
        const cEnumAssociatedValues_observablePropertyAST_superPropertyWithDefaultValue * extractPtr_4516 = (const cEnumAssociatedValues_observablePropertyAST_superPropertyWithDefaultValue *) (enumerator_1061.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_4380_superEntityName = extractPtr_4516->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_4402_propertyName = extractPtr_4516->mAssociatedValue1 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_771, GALGAS_lstring::constructor_new (extractedValue_4380_superEntityName.readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 67)).add_operation (extractedValue_4402_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 67)), extractedValue_4402_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 67)) COMMA_SOURCE_FILE ("computed-property.ggs", 67)) ;
        }
      }
      break ;
    }
    enumerator_1061.gotoNextObject () ;
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
  cMapElement_classMap * objectArray_6616 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("computed-property.ggs", 129)) ;
  if (NULL != objectArray_6616) {
    macroValidSharedObject (objectArray_6616, cMapElement_classMap) ;
    GALGAS_classKind var_classKind_6789 ;
    const GALGAS_computedPropertyDeclarationAST temp_1 = this ;
    GALGAS_propertyMap joker_6791_3 ; // Joker input parameter
    GALGAS_actionMap joker_6791_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_6791_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mComputedPropertyTypeName (), var_classKind_6789, joker_6791_3, joker_6791_2, joker_6791_1, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 132)) ;
    switch (var_classKind_6789.enumValue ()) {
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
        const cEnumAssociatedValues_classKind_atomic * extractPtr_7100 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_6789.unsafePointer ()) ;
        const GALGAS_typeKind extractedValue_6934_kind = extractPtr_7100->mAssociatedValue0 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_4 = this ;
        objectArray_6616->mProperty_mPropertyMap.setter_insertKey (temp_4.readProperty_mComputedPropertyName (), GALGAS_propertyKind::constructor_property (extractedValue_6934_kind, GALGAS_propertyAccessibility::constructor_computed (SOURCE_FILE ("computed-property.ggs", 139))  COMMA_SOURCE_FILE ("computed-property.ggs", 139)), GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("computed-property.ggs", 140)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 137)) ;
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
  GALGAS_classKind var_classKind_7853 ;
  const GALGAS_computedPropertyDeclarationAST temp_0 = this ;
  GALGAS_propertyMap joker_7855_3 ; // Joker input parameter
  GALGAS_actionMap joker_7855_2 ; // Joker input parameter
  GALGAS_propertyGenerationList joker_7855_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_0.readProperty_mComputedPropertyTypeName (), var_classKind_7853, joker_7855_3, joker_7855_2, joker_7855_1, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 160)) ;
  GALGAS_typeKind var_typeKind_7899 ;
  switch (var_classKind_7853.enumValue ()) {
  case GALGAS_classKind::kNotBuilt:
    break ;
  case GALGAS_classKind::kEnum_prefs:
    {
      const GALGAS_computedPropertyDeclarationAST temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mComputedPropertyTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray2  COMMA_SOURCE_FILE ("computed-property.ggs", 165)) ;
      var_typeKind_7899.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_classKind::kEnum_atomic:
    {
      const cEnumAssociatedValues_classKind_atomic * extractPtr_8078 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_7853.unsafePointer ()) ;
      const GALGAS_typeKind extractedValue_8055_kind = extractPtr_8078->mAssociatedValue0 ;
      var_typeKind_7899 = extractedValue_8055_kind ;
    }
    break ;
  case GALGAS_classKind::kEnum_document:
    {
      const GALGAS_computedPropertyDeclarationAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mComputedPropertyTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray4  COMMA_SOURCE_FILE ("computed-property.ggs", 169)) ;
      var_typeKind_7899.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_classKind::kEnum_entity:
    {
      const GALGAS_computedPropertyDeclarationAST temp_5 = this ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mComputedPropertyTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("computed-property.ggs", 171)) ;
      var_typeKind_7899.drop () ; // Release error dropped variable
    }
    break ;
  }
  GALGAS_propertyMap var_rootProperties_8366 ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GALGAS_computedPropertyDeclarationAST temp_8 = this ;
    test_7 = GALGAS_bool (kIsEqual, temp_8.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      var_rootProperties_8366 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("computed-property.ggs", 176)) ;
    }
  }
  if (kBoolFalse == test_7) {
    const GALGAS_computedPropertyDeclarationAST temp_9 = this ;
    GALGAS_classKind joker_8508 ; // Joker input parameter
    GALGAS_actionMap joker_8527_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_8527_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_9.readProperty_mRootEntityName (), joker_8508, var_rootProperties_8366, joker_8527_2, joker_8527_1, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 178)) ;
  }
  GALGAS_classKind var_currentClassKind_8646 ;
  GALGAS_propertyMap var_properties_8662 ;
  const GALGAS_computedPropertyDeclarationAST temp_10 = this ;
  GALGAS_actionMap joker_8664_2 ; // Joker input parameter
  GALGAS_propertyGenerationList joker_8664_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_10.readProperty_mClassName (), var_currentClassKind_8646, var_properties_8662, joker_8664_2, joker_8664_1, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 181)) ;
  GALGAS_transientDependencyListForGeneration var_dependencies_8755 = GALGAS_transientDependencyListForGeneration::constructor_emptyList (SOURCE_FILE ("computed-property.ggs", 183)) ;
  const GALGAS_computedPropertyDeclarationAST temp_11 = this ;
  cEnumerator_observablePropertyList enumerator_8787 (temp_11.readProperty_mDependencyList (), kENUMERATION_UP) ;
  while (enumerator_8787.hasCurrentObject ()) {
    GALGAS_propertyKind var_dependencyKind_8971 ;
    GALGAS_string var_swiftTypeStringForTransientFunctionArgument_9034 ;
    GALGAS_string var_defaultValueAsString_9074 ;
    extensionMethod_analyzeObservableProperty (enumerator_8787.current_mObservableProperty (HERE), var_rootProperties_8366, ioArgument_ioSemanticContext, var_properties_8662, var_dependencyKind_8971, var_swiftTypeStringForTransientFunctionArgument_9034, var_defaultValueAsString_9074, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 185)) ;
    switch (var_dependencyKind_8971.enumValue ()) {
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
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_8787.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 198)), GALGAS_string ("only an atomic property can be observed"), fixItArray12  COMMA_SOURCE_FILE ("computed-property.ggs", 198)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_selectionController:
      {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_8787.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 200)), GALGAS_string ("only an atomic property can be observed"), fixItArray13  COMMA_SOURCE_FILE ("computed-property.ggs", 200)) ;
      }
      break ;
    }
    var_dependencies_8755.addAssign_operation (enumerator_8787.current_mObservableProperty (HERE), extensionGetter_modelStringFunctionArgument (enumerator_8787.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 204)), var_swiftTypeStringForTransientFunctionArgument_9034, var_defaultValueAsString_9074  COMMA_SOURCE_FILE ("computed-property.ggs", 202)) ;
    enumerator_8787.gotoNextObject () ;
  }
  const GALGAS_computedPropertyDeclarationAST temp_14 = this ;
  const GALGAS_computedPropertyDeclarationAST temp_15 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_transientRoutineGeneration::constructor_new (temp_14.readProperty_mClassName ().readProperty_string (), temp_15.readProperty_mComputedPropertyName ().readProperty_string (), var_typeKind_7899, GALGAS_string ("computed"), var_dependencies_8755  COMMA_SOURCE_FILE ("computed-property.ggs", 208))  COMMA_SOURCE_FILE ("computed-property.ggs", 208)) ;
  const GALGAS_computedPropertyDeclarationAST temp_16 = this ;
  const GALGAS_computedPropertyDeclarationAST temp_17 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_computeRoutineGeneration::constructor_new (temp_16.readProperty_mClassName ().readProperty_string (), temp_17.readProperty_mComputedPropertyName ().readProperty_string (), var_typeKind_7899, var_dependencies_8755  COMMA_SOURCE_FILE ("computed-property.ggs", 215))  COMMA_SOURCE_FILE ("computed-property.ggs", 215)) ;
  const GALGAS_computedPropertyDeclarationAST temp_18 = this ;
  cMapElement_classMap * objectArray_9976 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_18.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("computed-property.ggs", 221)) ;
  if (NULL != objectArray_9976) {
    macroValidSharedObject (objectArray_9976, cMapElement_classMap) ;
    GALGAS_bool var_generate_10082 ;
    switch (var_currentClassKind_8646.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
      {
        var_generate_10082 = GALGAS_bool (true) ;
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
        var_generate_10082 = GALGAS_bool (true) ;
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
        var_generate_10082 = GALGAS_bool (true) ;
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        const cEnumAssociatedValues_classKind_entity * extractPtr_10472 = (const cEnumAssociatedValues_classKind_entity *) (var_currentClassKind_8646.unsafePointer ()) ;
        const GALGAS_bool extractedValue_10266_graphic = extractPtr_10472->mAssociatedValue1 ;
        enumGalgasBool test_19 = kBoolTrue ;
        if (kBoolTrue == test_19) {
          test_19 = extractedValue_10266_graphic.boolEnum () ;
          if (kBoolTrue == test_19) {
            const GALGAS_computedPropertyDeclarationAST temp_20 = this ;
            const GALGAS_computedPropertyDeclarationAST temp_21 = this ;
            var_generate_10082 = GALGAS_bool (kIsNotEqual, temp_20.readProperty_mComputedPropertyName ().readProperty_string ().objectCompare (GALGAS_string ("selectionDisplay"))).operator_and (GALGAS_bool (kIsNotEqual, temp_21.readProperty_mComputedPropertyName ().readProperty_string ().objectCompare (GALGAS_string ("objectDisplay"))) COMMA_SOURCE_FILE ("computed-property.ggs", 234)) ;
          }
        }
        if (kBoolFalse == test_19) {
          var_generate_10082 = GALGAS_bool (true) ;
        }
      }
      break ;
    }
    const GALGAS_computedPropertyDeclarationAST temp_22 = this ;
    const GALGAS_computedPropertyDeclarationAST temp_23 = this ;
    objectArray_9976->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_computedPropertyGeneration::constructor_new (temp_22.readProperty_mComputedPropertyName ().readProperty_string (), temp_23.readProperty_mClassName ().readProperty_string (), var_typeKind_7899, var_dependencies_8755, var_generate_10082  COMMA_SOURCE_FILE ("computed-property.ggs", 239))  COMMA_SOURCE_FILE ("computed-property.ggs", 239)) ;
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
                                                                               const GALGAS_bool /* constinArgument_inGenerationDirectAccess */,
                                                                               const GALGAS_stringset constinArgument_inOverriddenTransients,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_computedPropertyGeneration temp_1 = this ;
    const GALGAS_computedPropertyGeneration temp_2 = this ;
    test_0 = temp_1.readProperty_mGenerate ().operator_and (constinArgument_inOverriddenTransients.getter_hasKey (temp_2.readProperty_mPropertyName () COMMA_SOURCE_FILE ("computed-property.ggs", 345)).operator_not (SOURCE_FILE ("computed-property.ggs", 345)) COMMA_SOURCE_FILE ("computed-property.ggs", 345)).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = constinArgument_inPreferences.boolEnum () ;
        if (kBoolTrue == test_3) {
          result_result.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("computed-property.ggs", 347)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 347)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 347)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 347)) ;
          const GALGAS_computedPropertyGeneration temp_4 = this ;
          result_result.plusAssign_operation(GALGAS_string ("//   Transient property: ").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 348)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 348)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 348)) ;
          result_result.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("computed-property.ggs", 349)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 349)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 349)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 349)) ;
          const GALGAS_computedPropertyGeneration temp_5 = this ;
          const GALGAS_computedPropertyGeneration temp_6 = this ;
          result_result.plusAssign_operation(GALGAS_string ("  let preferences_").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 350)).add_operation (GALGAS_string ("_property = EBComputedProperty_"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 350)).add_operation (extensionGetter_swiftTypeName (temp_6.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 350)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 350)).add_operation (GALGAS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 350)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 350)) ;
          result_result.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("computed-property.ggs", 351)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 351)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 351)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 351)) ;
          const GALGAS_computedPropertyGeneration temp_7 = this ;
          const GALGAS_computedPropertyGeneration temp_8 = this ;
          result_result.plusAssign_operation(GALGAS_string ("  var preferences_").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 352)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 352)).add_operation (extensionGetter_swiftTypeName (temp_8.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 352)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 352)).add_operation (GALGAS_string ("\? {\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 352)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 352)) ;
          const GALGAS_computedPropertyGeneration temp_9 = this ;
          result_result.plusAssign_operation(GALGAS_string ("    return preferences_").add_operation (temp_9.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 353)).add_operation (GALGAS_string ("_property.optionalValue\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 353)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 353)) ;
          result_result.plusAssign_operation(GALGAS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 354)) ;
        }
      }
      if (kBoolFalse == test_3) {
        result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("computed-property.ggs", 356)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 356)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 356)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 356)) ;
        const GALGAS_computedPropertyGeneration temp_10 = this ;
        result_result.plusAssign_operation(GALGAS_string ("  //   Transient property: ").add_operation (temp_10.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 357)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 357)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 357)) ;
        result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("computed-property.ggs", 358)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 358)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 358)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 358)) ;
        const GALGAS_computedPropertyGeneration temp_11 = this ;
        const GALGAS_computedPropertyGeneration temp_12 = this ;
        result_result.plusAssign_operation(GALGAS_string ("  final let ").add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 359)).add_operation (GALGAS_string ("_property = EBComputedProperty_"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 359)).add_operation (extensionGetter_swiftTypeName (temp_12.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 359)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 359)).add_operation (GALGAS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 359)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 359)) ;
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
  GALGAS_string var_prefix_16722 = temp_0 ;
  result_result = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_computedPropertyGeneration temp_3 = this ;
    test_2 = GALGAS_bool (kIsStrictSup, temp_3.readProperty_mDependencyList ().getter_length (SOURCE_FILE ("computed-property.ggs", 369)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_computedPropertyGeneration temp_4 = this ;
      GALGAS_bool var_needs_5F_unwSelf_16860 = extensionGetter_needs_5F_unwSelf (temp_4.readProperty_mDependencyList (), constinArgument_inPreferences, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 370)) ;
      const GALGAS_computedPropertyGeneration temp_5 = this ;
      result_result.plusAssign_operation(GALGAS_string ("  //--- Computed property: ").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 371)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 371)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 371)) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = var_needs_5F_unwSelf_16860.boolEnum () ;
        if (kBoolTrue == test_6) {
          const GALGAS_computedPropertyGeneration temp_7 = this ;
          result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_prefix_16722, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 373)).add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 373)).add_operation (GALGAS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 373)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 373)) ;
          result_result.plusAssign_operation(GALGAS_string ("      if let unwSelf = self {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 374)) ;
          const GALGAS_computedPropertyGeneration temp_8 = this ;
          const GALGAS_computedPropertyGeneration temp_9 = this ;
          const GALGAS_computedPropertyGeneration temp_10 = this ;
          result_result.plusAssign_operation(extensionGetter_transientComputeFunctionCall (temp_8.readProperty_mDependencyList (), constinArgument_inPreferences, temp_9.readProperty_mClassName (), temp_10.readProperty_mPropertyName (), GALGAS_string ("computed"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 375)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 375)) ;
          result_result.plusAssign_operation(GALGAS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 376)) ;
          result_result.plusAssign_operation(GALGAS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 377)) ;
          result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 378)) ;
        }
      }
      if (kBoolFalse == test_6) {
        const GALGAS_computedPropertyGeneration temp_11 = this ;
        result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_prefix_16722, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 380)).add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 380)).add_operation (GALGAS_string ("_property.mReadModelFunction = {\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 380)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 380)) ;
        const GALGAS_computedPropertyGeneration temp_12 = this ;
        const GALGAS_computedPropertyGeneration temp_13 = this ;
        const GALGAS_computedPropertyGeneration temp_14 = this ;
        result_result.plusAssign_operation(extensionGetter_transientComputeFunctionCall (temp_12.readProperty_mDependencyList (), constinArgument_inPreferences, temp_13.readProperty_mClassName (), temp_14.readProperty_mPropertyName (), GALGAS_string ("computed"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 381)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 381)) ;
      }
      result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 383)) ;
      const GALGAS_computedPropertyGeneration temp_15 = this ;
      const GALGAS_computedPropertyGeneration temp_16 = this ;
      result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_prefix_16722, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 384)).add_operation (temp_15.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 384)).add_operation (GALGAS_string ("_property.mWriteModelFunction = { [weak self] in self\?.compute_"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 384)).add_operation (temp_16.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 384)).add_operation (GALGAS_string ("_property ($0) }\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 384)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 384)) ;
      const GALGAS_computedPropertyGeneration temp_17 = this ;
      cEnumerator_transientDependencyListForGeneration enumerator_17859 (temp_17.readProperty_mDependencyList (), kENUMERATION_UP) ;
      while (enumerator_17859.hasCurrentObject ()) {
        GALGAS_string var_s_17899 = extensionGetter_generateAddObserverCall (enumerator_17859.current_mDependency (HERE), constinArgument_inPreferences, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 386)) ;
        enumGalgasBool test_18 = kBoolTrue ;
        if (kBoolTrue == test_18) {
          test_18 = GALGAS_bool (kIsNotEqual, var_s_17899.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_18) {
            const GALGAS_computedPropertyGeneration temp_19 = this ;
            result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_s_17899, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 388)).add_operation (GALGAS_string (" (by: "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 388)).add_operation (var_prefix_16722, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 388)).add_operation (temp_19.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 388)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 388)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 388)) ;
          }
        }
        enumerator_17859.gotoNextObject () ;
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
    test_0 = GALGAS_bool (kIsStrictSup, temp_1.readProperty_mDependencyList ().getter_length (SOURCE_FILE ("computed-property.ggs", 411)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_computeRoutineGeneration temp_2 = this ;
      const GALGAS_computeRoutineGeneration temp_3 = this ;
      const GALGAS_computeRoutineGeneration temp_4 = this ;
      GALGAS_string var_s_18967 = GALGAS_string (filewrapperTemplate_computedPropertyManager_computedComputationFunctionFile (inCompiler, temp_2.readProperty_mOwnerName (), temp_3.readProperty_mTransientName (), temp_4.readProperty_mTransientType () COMMA_SOURCE_FILE ("computed-property.ggs", 412))) ;
      const GALGAS_computeRoutineGeneration temp_5 = this ;
      const GALGAS_computeRoutineGeneration temp_6 = this ;
      GALGAS_string var_fileName_19141 = GALGAS_string ("compute-").add_operation (temp_5.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 417)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 417)).add_operation (temp_6.readProperty_mTransientName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 417)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 417)) ;
      ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_19141  COMMA_SOURCE_FILE ("computed-property.ggs", 418)) ;
      GALGAS_string var_header_19262 = GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("computed-property.ggs", 419)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 419)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 419)) ;
      var_header_19262.plusAssign_operation(GALGAS_string ("//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 420)) ;
      var_header_19262.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("computed-property.ggs", 421)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 421)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 421)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 421)) ;
      var_header_19262.plusAssign_operation(GALGAS_string ("import AppKit\n\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 422)) ;
      var_header_19262.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("computed-property.ggs", 423)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 423)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 423)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 423)) ;
      GALGAS_string var_generatedZone_33__19649 = GALGAS_string ("  }\n\n") ;
      var_generatedZone_33__19649.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("computed-property.ggs", 425)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 425)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 425)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 425)) ;
      var_generatedZone_33__19649.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 426)) ;
      var_generatedZone_33__19649.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("computed-property.ggs", 427)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 427)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 427)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 427)) ;
      {
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_19141, GALGAS_string ("//"), var_header_19262, GALGAS_string ("\n\n"), var_s_18967, GALGAS_string ("\n"), var_generatedZone_33__19649, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 428)) ;
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
  cEnumerator_observablePropertyList enumerator_1022 (temp_6.readProperty_mDependencyList (), kENUMERATION_UP) ;
  while (enumerator_1022.hasCurrentObject ()) {
    switch (enumerator_1022.current (HERE).readProperty_mObservableProperty ().enumValue ()) {
    case GALGAS_observablePropertyAST::kNotBuilt:
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_1280 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (enumerator_1022.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_1103_propertyName = extractPtr_1280->mAssociatedValue0 ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GALGAS_transientDeclarationAST temp_8 = this ;
          test_7 = GALGAS_bool (kIsNotEqual, temp_8.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_7) {
            {
            const GALGAS_transientDeclarationAST temp_9 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_753, GALGAS_lstring::constructor_new (temp_9.readProperty_mRootEntityName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 24)).add_operation (extractedValue_1103_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 24)), extractedValue_1103_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 24)) COMMA_SOURCE_FILE ("transient-property.ggs", 24)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_1505 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (enumerator_1022.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_1326_propertyName = extractPtr_1505->mAssociatedValue0 ;
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          const GALGAS_transientDeclarationAST temp_11 = this ;
          test_10 = GALGAS_bool (kIsNotEqual, temp_11.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_10) {
            {
            const GALGAS_transientDeclarationAST temp_12 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_753, GALGAS_lstring::constructor_new (temp_12.readProperty_mRootEntityName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 28)).add_operation (extractedValue_1326_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 28)), extractedValue_1326_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 28)) COMMA_SOURCE_FILE ("transient-property.ggs", 28)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_1744 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (enumerator_1022.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_1557_relationshipName = extractPtr_1744->mAssociatedValue0 ;
        enumGalgasBool test_13 = kBoolTrue ;
        if (kBoolTrue == test_13) {
          const GALGAS_transientDeclarationAST temp_14 = this ;
          test_13 = GALGAS_bool (kIsNotEqual, temp_14.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_13) {
            {
            const GALGAS_transientDeclarationAST temp_15 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_753, GALGAS_lstring::constructor_new (temp_15.readProperty_mRootEntityName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 32)).add_operation (extractedValue_1557_relationshipName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 32)), extractedValue_1557_relationshipName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 32)) COMMA_SOURCE_FILE ("transient-property.ggs", 32)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootPropertyNone:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone * extractPtr_1973 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone *) (enumerator_1022.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_1788_relationshipName = extractPtr_1973->mAssociatedValue0 ;
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
        const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_2156 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (enumerator_1022.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2044_propertyName = extractPtr_2156->mAssociatedValue0 ;
        {
        const GALGAS_transientDeclarationAST temp_19 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_753, GALGAS_lstring::constructor_new (temp_19.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 40)).add_operation (extractedValue_2044_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 40)), extractedValue_2044_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 40)) COMMA_SOURCE_FILE ("transient-property.ggs", 40)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyWithOption:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption * extractPtr_2325 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *) (enumerator_1022.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2211_propertyName = extractPtr_2325->mAssociatedValue0 ;
        {
        const GALGAS_transientDeclarationAST temp_20 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_753, GALGAS_lstring::constructor_new (temp_20.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 42)).add_operation (extractedValue_2211_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 42)), extractedValue_2211_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 42)) COMMA_SOURCE_FILE ("transient-property.ggs", 42)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyArray:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray * extractPtr_2489 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *) (enumerator_1022.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2375_propertyName = extractPtr_2489->mAssociatedValue0 ;
        {
        const GALGAS_transientDeclarationAST temp_21 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_753, GALGAS_lstring::constructor_new (temp_21.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 44)).add_operation (extractedValue_2375_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 44)), extractedValue_2375_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 44)) COMMA_SOURCE_FILE ("transient-property.ggs", 44)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyObject:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject * extractPtr_2654 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject *) (enumerator_1022.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2540_propertyName = extractPtr_2654->mAssociatedValue0 ;
        {
        const GALGAS_transientDeclarationAST temp_22 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_753, GALGAS_lstring::constructor_new (temp_22.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 46)).add_operation (extractedValue_2540_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 46)), extractedValue_2540_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 46)) COMMA_SOURCE_FILE ("transient-property.ggs", 46)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyNone:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone * extractPtr_2815 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone *) (enumerator_1022.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2703_propertyName = extractPtr_2815->mAssociatedValue0 ;
        {
        const GALGAS_transientDeclarationAST temp_23 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_753, GALGAS_lstring::constructor_new (temp_23.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 48)).add_operation (extractedValue_2703_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 48)), extractedValue_2703_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 48)) COMMA_SOURCE_FILE ("transient-property.ggs", 48)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_prefsProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_2969 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (enumerator_1022.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2861_propertyName = extractPtr_2969->mAssociatedValue0 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_753, GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 50)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 50)).add_operation (extractedValue_2861_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 50)), extractedValue_2861_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 50)) COMMA_SOURCE_FILE ("transient-property.ggs", 50)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_prefsPropertyWithOption:
      {
        const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption * extractPtr_3135 = (const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *) (enumerator_1022.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3025_propertyName = extractPtr_3135->mAssociatedValue0 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_753, GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 52)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 52)).add_operation (extractedValue_3025_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 52)), extractedValue_3025_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 52)) COMMA_SOURCE_FILE ("transient-property.ggs", 52)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty * extractPtr_3329 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty *) (enumerator_1022.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3192_controllerName = extractPtr_3329->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_3212_propertyName = extractPtr_3329->mAssociatedValue1 ;
        {
        const GALGAS_transientDeclarationAST temp_24 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_753, GALGAS_lstring::constructor_new (temp_24.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 54)).add_operation (extractedValue_3192_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 54)), extractedValue_3192_controllerName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 54)) COMMA_SOURCE_FILE ("transient-property.ggs", 54)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerSecondaryProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty * extractPtr_3561 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty *) (enumerator_1022.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3395_controllerName = extractPtr_3561->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_3415_propertyName = extractPtr_3561->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_3444_secondaryPropertyName = extractPtr_3561->mAssociatedValue2 ;
        {
        const GALGAS_transientDeclarationAST temp_25 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_753, GALGAS_lstring::constructor_new (temp_25.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 56)).add_operation (extractedValue_3395_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 56)), extractedValue_3395_controllerName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 56)) COMMA_SOURCE_FILE ("transient-property.ggs", 56)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerAllProperties:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties * extractPtr_3789 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties *) (enumerator_1022.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3623_controllerName = extractPtr_3789->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_3643_propertyName = extractPtr_3789->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_3672_secondaryPropertyName = extractPtr_3789->mAssociatedValue2 ;
        {
        const GALGAS_transientDeclarationAST temp_26 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_753, GALGAS_lstring::constructor_new (temp_26.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 58)).add_operation (extractedValue_3623_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 58)), extractedValue_3623_controllerName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 58)) COMMA_SOURCE_FILE ("transient-property.ggs", 58)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerOneProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty * extractPtr_3986 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty *) (enumerator_1022.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3849_controllerName = extractPtr_3986->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_3869_propertyName = extractPtr_3986->mAssociatedValue1 ;
        {
        const GALGAS_transientDeclarationAST temp_27 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_753, GALGAS_lstring::constructor_new (temp_27.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 60)).add_operation (extractedValue_3849_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 60)), extractedValue_3849_controllerName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 60)) COMMA_SOURCE_FILE ("transient-property.ggs", 60)) ;
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
        const cEnumAssociatedValues_observablePropertyAST_superProperty * extractPtr_4276 = (const cEnumAssociatedValues_observablePropertyAST_superProperty *) (enumerator_1022.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_4142_superEntityName = extractPtr_4276->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_4164_propertyName = extractPtr_4276->mAssociatedValue1 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_753, GALGAS_lstring::constructor_new (extractedValue_4142_superEntityName.readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 65)).add_operation (extractedValue_4164_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 65)), extractedValue_4164_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 65)) COMMA_SOURCE_FILE ("transient-property.ggs", 65)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_superPropertyWithDefaultValue:
      {
        const cEnumAssociatedValues_observablePropertyAST_superPropertyWithDefaultValue * extractPtr_4477 = (const cEnumAssociatedValues_observablePropertyAST_superPropertyWithDefaultValue *) (enumerator_1022.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_4341_superEntityName = extractPtr_4477->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_4363_propertyName = extractPtr_4477->mAssociatedValue1 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_753, GALGAS_lstring::constructor_new (extractedValue_4341_superEntityName.readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 67)).add_operation (extractedValue_4363_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 67)), extractedValue_4363_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 67)) COMMA_SOURCE_FILE ("transient-property.ggs", 67)) ;
        }
      }
      break ;
    }
    enumerator_1022.gotoNextObject () ;
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
  cMapElement_classMap * objectArray_7167 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("transient-property.ggs", 151)) ;
  if (NULL != objectArray_7167) {
    macroValidSharedObject (objectArray_7167, cMapElement_classMap) ;
    GALGAS_classKind var_classKind_7333 ;
    const GALGAS_transientDeclarationAST temp_1 = this ;
    GALGAS_propertyMap joker_7335_3 ; // Joker input parameter
    GALGAS_actionMap joker_7335_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_7335_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mTransientTypeName (), var_classKind_7333, joker_7335_3, joker_7335_2, joker_7335_1, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 154)) ;
    switch (var_classKind_7333.enumValue ()) {
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
        const cEnumAssociatedValues_classKind_atomic * extractPtr_7695 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_7333.unsafePointer ()) ;
        const GALGAS_typeKind extractedValue_7471_kind = extractPtr_7695->mAssociatedValue0 ;
        {
        const GALGAS_transientDeclarationAST temp_4 = this ;
        const GALGAS_transientDeclarationAST temp_5 = this ;
        const GALGAS_transientDeclarationAST temp_6 = this ;
        objectArray_7167->mProperty_mPropertyMap.setter_insertKey (temp_4.readProperty_mTransientName (), GALGAS_propertyKind::constructor_property (extractedValue_7471_kind, GALGAS_propertyAccessibility::constructor_transient (GALGAS_bool (kIsEqual, temp_5.readProperty_mDependencyList ().getter_length (SOURCE_FILE ("transient-property.ggs", 161)).objectCompare (GALGAS_uint (uint32_t (0U))))  COMMA_SOURCE_FILE ("transient-property.ggs", 161))  COMMA_SOURCE_FILE ("transient-property.ggs", 161)), GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("transient-property.ggs", 162)), temp_6.readProperty_mIsOverriding (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 159)) ;
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
  GALGAS_classKind var_classKind_8420 ;
  const GALGAS_transientDeclarationAST temp_0 = this ;
  GALGAS_propertyMap joker_8422_3 ; // Joker input parameter
  GALGAS_actionMap joker_8422_2 ; // Joker input parameter
  GALGAS_propertyGenerationList joker_8422_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_0.readProperty_mTransientTypeName (), var_classKind_8420, joker_8422_3, joker_8422_2, joker_8422_1, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 181)) ;
  GALGAS_typeKind var_typeKind_8466 ;
  switch (var_classKind_8420.enumValue ()) {
  case GALGAS_classKind::kNotBuilt:
    break ;
  case GALGAS_classKind::kEnum_prefs:
    {
      const GALGAS_transientDeclarationAST temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mTransientTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray2  COMMA_SOURCE_FILE ("transient-property.ggs", 186)) ;
      var_typeKind_8466.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_classKind::kEnum_atomic:
    {
      const cEnumAssociatedValues_classKind_atomic * extractPtr_8638 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_8420.unsafePointer ()) ;
      const GALGAS_typeKind extractedValue_8615_kind = extractPtr_8638->mAssociatedValue0 ;
      var_typeKind_8466 = extractedValue_8615_kind ;
    }
    break ;
  case GALGAS_classKind::kEnum_document:
    {
      const GALGAS_transientDeclarationAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mTransientTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray4  COMMA_SOURCE_FILE ("transient-property.ggs", 190)) ;
      var_typeKind_8466.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_classKind::kEnum_entity:
    {
      const GALGAS_transientDeclarationAST temp_5 = this ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mTransientTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("transient-property.ggs", 192)) ;
      var_typeKind_8466.drop () ; // Release error dropped variable
    }
    break ;
  }
  GALGAS_propertyMap var_rootProperties_8912 ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GALGAS_transientDeclarationAST temp_8 = this ;
    test_7 = GALGAS_bool (kIsEqual, temp_8.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      var_rootProperties_8912 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("transient-property.ggs", 197)) ;
    }
  }
  if (kBoolFalse == test_7) {
    const GALGAS_transientDeclarationAST temp_9 = this ;
    GALGAS_classKind joker_9054 ; // Joker input parameter
    GALGAS_actionMap joker_9073_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_9073_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_9.readProperty_mRootEntityName (), joker_9054, var_rootProperties_8912, joker_9073_2, joker_9073_1, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 199)) ;
  }
  GALGAS_classKind var_currentClassKind_9192 ;
  GALGAS_propertyMap var_properties_9208 ;
  const GALGAS_transientDeclarationAST temp_10 = this ;
  GALGAS_actionMap joker_9210_2 ; // Joker input parameter
  GALGAS_propertyGenerationList joker_9210_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_10.readProperty_mClassName (), var_currentClassKind_9192, var_properties_9208, joker_9210_2, joker_9210_1, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 202)) ;
  GALGAS_transientDependencyListForGeneration var_dependencies_9301 = GALGAS_transientDependencyListForGeneration::constructor_emptyList (SOURCE_FILE ("transient-property.ggs", 204)) ;
  const GALGAS_transientDeclarationAST temp_11 = this ;
  cEnumerator_observablePropertyList enumerator_9333 (temp_11.readProperty_mDependencyList (), kENUMERATION_UP) ;
  while (enumerator_9333.hasCurrentObject ()) {
    GALGAS_propertyKind var_dependencyKind_9517 ;
    GALGAS_string var_swiftTypeStringForTransientFunctionArgument_9580 ;
    GALGAS_string var_defaultValueAsString_9620 ;
    extensionMethod_analyzeObservableProperty (enumerator_9333.current_mObservableProperty (HERE), var_rootProperties_8912, ioArgument_ioSemanticContext, var_properties_9208, var_dependencyKind_9517, var_swiftTypeStringForTransientFunctionArgument_9580, var_defaultValueAsString_9620, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 206)) ;
    switch (var_dependencyKind_9517.enumValue ()) {
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
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_9333.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 220)), GALGAS_string ("only an atomic property can be observed"), fixItArray12  COMMA_SOURCE_FILE ("transient-property.ggs", 220)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_selectionController:
      {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_9333.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 222)), GALGAS_string ("only an atomic property can be observed"), fixItArray13  COMMA_SOURCE_FILE ("transient-property.ggs", 222)) ;
      }
      break ;
    }
    var_dependencies_9301.addAssign_operation (enumerator_9333.current_mObservableProperty (HERE), extensionGetter_modelStringFunctionArgument (enumerator_9333.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 226)), var_swiftTypeStringForTransientFunctionArgument_9580, var_defaultValueAsString_9620  COMMA_SOURCE_FILE ("transient-property.ggs", 224)) ;
    enumerator_9333.gotoNextObject () ;
  }
  const GALGAS_transientDeclarationAST temp_14 = this ;
  const GALGAS_transientDeclarationAST temp_15 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_transientRoutineGeneration::constructor_new (temp_14.readProperty_mClassName ().readProperty_string (), temp_15.readProperty_mTransientName ().readProperty_string (), var_typeKind_8466, GALGAS_string ("transient"), var_dependencies_9301  COMMA_SOURCE_FILE ("transient-property.ggs", 230))  COMMA_SOURCE_FILE ("transient-property.ggs", 230)) ;
  const GALGAS_transientDeclarationAST temp_16 = this ;
  cMapElement_classMap * objectArray_10417 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_16.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("transient-property.ggs", 237)) ;
  if (NULL != objectArray_10417) {
    macroValidSharedObject (objectArray_10417, cMapElement_classMap) ;
    GALGAS_bool var_generate_10523 ;
    switch (var_currentClassKind_9192.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
      {
        var_generate_10523 = GALGAS_bool (true) ;
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
        var_generate_10523 = GALGAS_bool (true) ;
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
        var_generate_10523 = GALGAS_bool (true) ;
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        const cEnumAssociatedValues_classKind_entity * extractPtr_10899 = (const cEnumAssociatedValues_classKind_entity *) (var_currentClassKind_9192.unsafePointer ()) ;
        const GALGAS_bool extractedValue_10707_graphic = extractPtr_10899->mAssociatedValue1 ;
        enumGalgasBool test_17 = kBoolTrue ;
        if (kBoolTrue == test_17) {
          test_17 = extractedValue_10707_graphic.boolEnum () ;
          if (kBoolTrue == test_17) {
            const GALGAS_transientDeclarationAST temp_18 = this ;
            const GALGAS_transientDeclarationAST temp_19 = this ;
            var_generate_10523 = GALGAS_bool (kIsNotEqual, temp_18.readProperty_mTransientName ().readProperty_string ().objectCompare (GALGAS_string ("selectionDisplay"))).operator_and (GALGAS_bool (kIsNotEqual, temp_19.readProperty_mTransientName ().readProperty_string ().objectCompare (GALGAS_string ("objectDisplay"))) COMMA_SOURCE_FILE ("transient-property.ggs", 250)) ;
          }
        }
        if (kBoolFalse == test_17) {
          var_generate_10523 = GALGAS_bool (true) ;
        }
      }
      break ;
    }
    const GALGAS_transientDeclarationAST temp_20 = this ;
    const GALGAS_transientDeclarationAST temp_21 = this ;
    objectArray_10417->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_transientPropertyGeneration::constructor_new (temp_20.readProperty_mTransientName ().readProperty_string (), temp_21.readProperty_mClassName ().readProperty_string (), var_typeKind_8466, var_dependencies_9301, var_generate_10523  COMMA_SOURCE_FILE ("transient-property.ggs", 255))  COMMA_SOURCE_FILE ("transient-property.ggs", 255)) ;
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
                                                                                const GALGAS_bool /* constinArgument_inGenerationDirectAccess */,
                                                                                const GALGAS_stringset constinArgument_inOverriddenTransients,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_transientPropertyGeneration temp_1 = this ;
    const GALGAS_transientPropertyGeneration temp_2 = this ;
    test_0 = temp_1.readProperty_mGenerate ().operator_and (constinArgument_inOverriddenTransients.getter_hasKey (temp_2.readProperty_mPropertyName () COMMA_SOURCE_FILE ("transient-property.ggs", 348)).operator_not (SOURCE_FILE ("transient-property.ggs", 348)) COMMA_SOURCE_FILE ("transient-property.ggs", 348)).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = constinArgument_inPreferences.boolEnum () ;
        if (kBoolTrue == test_3) {
          result_result.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("transient-property.ggs", 350)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 350)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 350)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 350)) ;
          const GALGAS_transientPropertyGeneration temp_4 = this ;
          result_result.plusAssign_operation(GALGAS_string ("//   Transient property: ").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 351)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 351)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 351)) ;
          result_result.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("transient-property.ggs", 352)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 352)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 352)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 352)) ;
          const GALGAS_transientPropertyGeneration temp_5 = this ;
          const GALGAS_transientPropertyGeneration temp_6 = this ;
          result_result.plusAssign_operation(GALGAS_string ("@MainActor let preferences_").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 353)).add_operation (GALGAS_string ("_property = EBTransientProperty_"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 353)).add_operation (extensionGetter_swiftTypeName (temp_6.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 353)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 353)).add_operation (GALGAS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 353)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 353)) ;
        }
      }
      if (kBoolFalse == test_3) {
        result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("transient-property.ggs", 355)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 355)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 355)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 355)) ;
        const GALGAS_transientPropertyGeneration temp_7 = this ;
        result_result.plusAssign_operation(GALGAS_string ("  //   Transient property: ").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 356)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 356)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 356)) ;
        result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("transient-property.ggs", 357)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 357)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 357)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 357)) ;
        const GALGAS_transientPropertyGeneration temp_8 = this ;
        const GALGAS_transientPropertyGeneration temp_9 = this ;
        result_result.plusAssign_operation(GALGAS_string ("  final let ").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 358)).add_operation (GALGAS_string ("_property = EBTransientProperty_"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 358)).add_operation (extensionGetter_swiftTypeName (temp_9.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 358)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 358)).add_operation (GALGAS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 358)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 358)) ;
        result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("transient-property.ggs", 359)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 359)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 359)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 359)) ;
        const GALGAS_transientPropertyGeneration temp_10 = this ;
        const GALGAS_transientPropertyGeneration temp_11 = this ;
        result_result.plusAssign_operation(GALGAS_string ("  final var ").add_operation (temp_10.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 360)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 360)).add_operation (extensionGetter_swiftTypeName (temp_11.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 360)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 360)).add_operation (GALGAS_string ("\? {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 360)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 360)) ;
        const GALGAS_transientPropertyGeneration temp_12 = this ;
        result_result.plusAssign_operation(GALGAS_string ("    return self.").add_operation (temp_12.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 361)).add_operation (GALGAS_string ("_property.optionalValue\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 361)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 361)) ;
        result_result.plusAssign_operation(GALGAS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 362)) ;
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
  GALGAS_string var_prefix_16525 = temp_0 ;
  result_result = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_transientPropertyGeneration temp_3 = this ;
    test_2 = GALGAS_bool (kIsStrictSup, temp_3.readProperty_mDependencyList ().getter_length (SOURCE_FILE ("transient-property.ggs", 372)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_transientPropertyGeneration temp_4 = this ;
      GALGAS_bool var_needs_5F_unwSelf_16663 = extensionGetter_needs_5F_unwSelf (temp_4.readProperty_mDependencyList (), constinArgument_inPreferences, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 373)) ;
      const GALGAS_transientPropertyGeneration temp_5 = this ;
      result_result.plusAssign_operation(GALGAS_string ("  //--- Atomic property: ").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 374)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 374)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 374)) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = var_needs_5F_unwSelf_16663.boolEnum () ;
        if (kBoolTrue == test_6) {
          const GALGAS_transientPropertyGeneration temp_7 = this ;
          result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_prefix_16525, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 376)).add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 376)).add_operation (GALGAS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 376)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 376)) ;
          result_result.plusAssign_operation(GALGAS_string ("      if let unwSelf = self {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 377)) ;
          const GALGAS_transientPropertyGeneration temp_8 = this ;
          const GALGAS_transientPropertyGeneration temp_9 = this ;
          const GALGAS_transientPropertyGeneration temp_10 = this ;
          result_result.plusAssign_operation(extensionGetter_transientComputeFunctionCall (temp_8.readProperty_mDependencyList (), constinArgument_inPreferences, temp_9.readProperty_mClassName (), temp_10.readProperty_mPropertyName (), GALGAS_string ("transient"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 378)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 378)) ;
          result_result.plusAssign_operation(GALGAS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 379)) ;
          result_result.plusAssign_operation(GALGAS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 380)) ;
          result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 381)) ;
        }
      }
      if (kBoolFalse == test_6) {
        const GALGAS_transientPropertyGeneration temp_11 = this ;
        result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_prefix_16525, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 383)).add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 383)).add_operation (GALGAS_string ("_property.mReadModelFunction = {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 383)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 383)) ;
        const GALGAS_transientPropertyGeneration temp_12 = this ;
        const GALGAS_transientPropertyGeneration temp_13 = this ;
        const GALGAS_transientPropertyGeneration temp_14 = this ;
        result_result.plusAssign_operation(extensionGetter_transientComputeFunctionCall (temp_12.readProperty_mDependencyList (), constinArgument_inPreferences, temp_13.readProperty_mClassName (), temp_14.readProperty_mPropertyName (), GALGAS_string ("transient"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 384)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 384)) ;
      }
      result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 386)) ;
      const GALGAS_transientPropertyGeneration temp_15 = this ;
      cEnumerator_transientDependencyListForGeneration enumerator_17499 (temp_15.readProperty_mDependencyList (), kENUMERATION_UP) ;
      while (enumerator_17499.hasCurrentObject ()) {
        GALGAS_string var_s_17539 = extensionGetter_generateAddObserverCall (enumerator_17499.current_mDependency (HERE), constinArgument_inPreferences, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 388)) ;
        enumGalgasBool test_16 = kBoolTrue ;
        if (kBoolTrue == test_16) {
          test_16 = GALGAS_bool (kIsNotEqual, var_s_17539.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_16) {
            const GALGAS_transientPropertyGeneration temp_17 = this ;
            result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_s_17539, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 390)).add_operation (GALGAS_string (" (by: "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 390)).add_operation (var_prefix_16525, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 390)).add_operation (temp_17.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 390)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 390)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 390)) ;
          }
        }
        enumerator_17499.gotoNextObject () ;
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
    test_0 = GALGAS_bool (kIsStrictSup, temp_1.readProperty_mDependencyList ().getter_length (SOURCE_FILE ("transient-property.ggs", 598)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_transientRoutineGeneration temp_2 = this ;
      const GALGAS_transientRoutineGeneration temp_3 = this ;
      const GALGAS_transientRoutineGeneration temp_4 = this ;
      const GALGAS_transientRoutineGeneration temp_5 = this ;
      const GALGAS_transientRoutineGeneration temp_6 = this ;
      GALGAS_string var_s_28598 = GALGAS_string (filewrapperTemplate_transientManager_transientComputationFunctionFile (inCompiler, temp_2.readProperty_mOwnerName (), temp_3.readProperty_mTransientName (), temp_4.readProperty_mDependencyList (), temp_5.readProperty_mTransientType (), temp_6.readProperty_mGeneratedFunctionNamePrefix () COMMA_SOURCE_FILE ("transient-property.ggs", 599))) ;
      GALGAS_string var_header_28835 = GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("transient-property.ggs", 606)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 606)).add_operation (GALGAS_string ("\n//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n//"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 606)).add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("transient-property.ggs", 608)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 608)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 608)).add_operation (GALGAS_string ("import AppKit\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 608)).add_operation (GALGAS_string ("//"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 609)).add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("transient-property.ggs", 610)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 610)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 610)) ;
      const GALGAS_transientRoutineGeneration temp_7 = this ;
      const GALGAS_transientRoutineGeneration temp_8 = this ;
      const GALGAS_transientRoutineGeneration temp_9 = this ;
      GALGAS_string var_fileName_29187 = temp_7.readProperty_mGeneratedFunctionNamePrefix ().add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 611)).add_operation (temp_8.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 611)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 611)).add_operation (temp_9.readProperty_mTransientName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 611)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 611)) ;
      ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_29187  COMMA_SOURCE_FILE ("transient-property.ggs", 612)) ;
      {
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_29187, GALGAS_string ("//"), var_header_28835, GALGAS_string ("\n\n"), var_s_28598, GALGAS_string ("\n"), GALGAS_string ("}\n\n//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("transient-property.ggs", 621)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 621)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 621)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 613)) ;
      }
    }
  }
}

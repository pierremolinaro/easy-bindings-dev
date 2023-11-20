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
                                             nullptr) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astDeclarationStruct::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astDeclarationStruct ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astDeclarationStruct::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
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
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_astDeclarationStruct *> (p)) {
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
      result = kOperandEqual ;
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
  if (nullptr != mObjectPtr) {
    cPtr_doubleAsDefaultValue * p = (cPtr_doubleAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_doubleAsDefaultValue) ;
    p->mProperty_mValue = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ldouble GALGAS_doubleAsDefaultValue::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
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
  acPtr_class * ptr = nullptr ;
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
  AC_GALGAS_root * result = nullptr ;
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
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_doubleAsDefaultValue *> (p)) {
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
    GALGAS_typeKind var_unused_0_6257 ;
    GALGAS_propertyAccessibility var_accessibility_6301 ;
    const bool optionalResult6246 = temp_1.readProperty_mKind ().optional_property (var_unused_0_6257, var_accessibility_6301) ;
    if (!optionalResult6246) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_accessibility_6301.getter_isTransient (SOURCE_FILE ("semantic-analysis.ggs", 146)).boolEnum () ;
        if (kBoolTrue == test_2) {
          GALGAS_bool var_ab_6410 ;
          var_accessibility_6301.method_transient (var_ab_6410, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.ggs", 147)) ;
          result_result = var_ab_6410 ;
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
  nullptr
} ;

//--- All sub-directories of 'indexes' directory

static const cDirectoryWrapper * gWrapperAllDirectories_predefinedOutletClasses_4 [1] = {
  nullptr
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
  nullptr
} ;

//--- All sub-directories of 'build' directory

static const cDirectoryWrapper * gWrapperAllDirectories_predefinedOutletClasses_3 [2] = {
  & gWrapperDirectory_4_predefinedOutletClasses,
  nullptr
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
  nullptr
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_predefinedOutletClasses_5 [1] = {
  nullptr
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

static const cDirectoryWrapper * gWrapperAllDirectories_predefinedOutletClasses_0 [5] = {
  & gWrapperDirectory_3_predefinedOutletClasses,
  & gWrapperDirectory_5_predefinedOutletClasses,
  & gWrapperDirectory_1_predefinedOutletClasses,
  & gWrapperDirectory_2_predefinedOutletClasses,
  nullptr
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
  GALGAS_declarationPrecedenceGraph var_declarationPrecedenceGraph_2649 = GALGAS_declarationPrecedenceGraph::constructor_emptyGraph (SOURCE_FILE ("declaration-graph.ggs", 67)) ;
  cEnumerator_declarationListAST enumerator_2697 (constinArgument_inDeclarationListAST, kENUMERATION_UP) ;
  while (enumerator_2697.hasCurrentObject ()) {
    callExtensionMethod_enterInPrecedenceGraph ((cPtr_abstractDeclarationAST *) enumerator_2697.current_mPropertyDeclaration (HERE).ptr (), var_declarationPrecedenceGraph_2649, inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 69)) ;
    enumerator_2697.gotoNextObject () ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (gOption_easyBindings_5F_options_outputDeclarationDependencyGraph.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_s_2936 = var_declarationPrecedenceGraph_2649.getter_graphviz (SOURCE_FILE ("declaration-graph.ggs", 73)) ;
      GALGAS_string var_path_2987 = constinArgument_inSourceFile.add_operation (GALGAS_string (".declarationDependancy.dot"), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 74)) ;
      GALGAS_bool joker_3084 ; // Joker input parameter
      var_s_2936.method_writeToFileWhenDifferentContents (var_path_2987, joker_3084, inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 75)) ;
    }
  }
  outArgument_outSortedDeclarationListAST = GALGAS_declarationListAST::constructor_emptyList (SOURCE_FILE ("declaration-graph.ggs", 78)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsStrictSup, var_declarationPrecedenceGraph_2649.getter_undefinedNodeCount (SOURCE_FILE ("declaration-graph.ggs", 79)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      cEnumerator_lstringlist enumerator_3257 (var_declarationPrecedenceGraph_2649.getter_undefinedNodeReferenceList (SOURCE_FILE ("declaration-graph.ggs", 80)), kENUMERATION_UP) ;
      while (enumerator_3257.hasCurrentObject ()) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_3257.current_mValue (HERE).readProperty_location (), GALGAS_string ("the property ").add_operation (enumerator_3257.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 81)).add_operation (GALGAS_string (" is not defined"), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 81)), fixItArray2  COMMA_SOURCE_FILE ("declaration-graph.ggs", 81)) ;
        enumerator_3257.gotoNextObject () ;
      }
    }
  }
  if (kBoolFalse == test_1) {
    GALGAS_declarationListAST var_unsortedSemanticDeclarationListAST_3522 ;
    GALGAS_lstringlist joker_3507 ; // Joker input parameter
    GALGAS_lstringlist joker_3564 ; // Joker input parameter
    var_declarationPrecedenceGraph_2649.method_topologicalSort (outArgument_outSortedDeclarationListAST, joker_3507, var_unsortedSemanticDeclarationListAST_3522, joker_3564, inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 84)) ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (kIsStrictSup, var_unsortedSemanticDeclarationListAST_3522.getter_count (SOURCE_FILE ("declaration-graph.ggs", 90)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string var_s_3643 = GALGAS_string ("semantic analysis not performed, ").add_operation (var_unsortedSemanticDeclarationListAST_3522.getter_count (SOURCE_FILE ("declaration-graph.ggs", 92)).getter_string (SOURCE_FILE ("declaration-graph.ggs", 91)), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 91)).add_operation (GALGAS_string (" declarations are involved in circular definition:"), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 92)) ;
        cEnumerator_declarationListAST enumerator_3819 (var_unsortedSemanticDeclarationListAST_3522, kENUMERATION_UP) ;
        while (enumerator_3819.hasCurrentObject ()) {
          var_s_3643.plusAssign_operation(GALGAS_string ("\n-  ").add_operation (callExtensionGetter_nodeKey ((const cPtr_abstractDeclarationAST *) enumerator_3819.current_mPropertyDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 95)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 95)), inCompiler  COMMA_SOURCE_FILE ("declaration-graph.ggs", 95)) ;
          enumerator_3819.gotoNextObject () ;
        }
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("declaration-graph.ggs", 97)), var_s_3643, fixItArray4  COMMA_SOURCE_FILE ("declaration-graph.ggs", 97)) ;
        cEnumerator_declarationListAST enumerator_3966 (var_unsortedSemanticDeclarationListAST_3522, kENUMERATION_UP) ;
        while (enumerator_3966.hasCurrentObject ()) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (callExtensionGetter_nodeKey ((const cPtr_abstractDeclarationAST *) enumerator_3966.current_mPropertyDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 99)).readProperty_location (), GALGAS_string ("the ").add_operation (callExtensionGetter_nodeKey ((const cPtr_abstractDeclarationAST *) enumerator_3966.current_mPropertyDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 99)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 99)).add_operation (GALGAS_string (" property is declared here"), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 99)), fixItArray5  COMMA_SOURCE_FILE ("declaration-graph.ggs", 99)) ;
          enumerator_3966.gotoNextObject () ;
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
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (temp_0.readProperty_mClassName (), GALGAS_classKind::constructor_atomic (GALGAS_typeKind::constructor_transientPropertyExternType (temp_1.readProperty_mClassName ().readProperty_string ()  COMMA_SOURCE_FILE ("transient-property-class.ggs", 62))  COMMA_SOURCE_FILE ("transient-property-class.ggs", 62)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("transient-property-class.ggs", 62)), GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("transient-property-class.ggs", 63)), GALGAS_propertyGenerationList::constructor_emptyList (SOURCE_FILE ("transient-property-class.ggs", 64)), inCompiler COMMA_SOURCE_FILE ("transient-property-class.ggs", 60)) ;
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
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mClassName (), temp_1, inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 13)) ;
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
  GALGAS_enumConstantMap var_enumConstantMap_4505 = GALGAS_enumConstantMap::constructor_emptyMap (SOURCE_FILE ("enumeration.ggs", 122)) ;
  const GALGAS_enumerationDeclarationAST temp_0 = this ;
  cEnumerator_lstringlist enumerator_4533 (temp_0.readProperty_mEnumConstantNameList (), kENUMERATION_UP) ;
  while (enumerator_4533.hasCurrentObject ()) {
    {
    var_enumConstantMap_4505.setter_insertKey (enumerator_4533.current_mValue (HERE), var_enumConstantMap_4505.getter_count (SOURCE_FILE ("enumeration.ggs", 124)), inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 124)) ;
    }
    enumerator_4533.gotoNextObject () ;
  }
  GALGAS_enumFuncMap var_enumFuncMap_4656 = GALGAS_enumFuncMap::constructor_emptyMap (SOURCE_FILE ("enumeration.ggs", 126)) ;
  cEnumerator_enumerationFunctionListAST enumerator_4702 (ioArgument_ioSemanticContext.readProperty_mEnumerationFunctionListAST (), kENUMERATION_UP) ;
  while (enumerator_4702.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      const GALGAS_enumerationDeclarationAST temp_2 = this ;
      test_1 = GALGAS_bool (kIsEqual, enumerator_4702.current_mEnumName (HERE).readProperty_string ().objectCompare (temp_2.readProperty_mClassName ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_stringset var_definedConstantNameSet_4850 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("enumeration.ggs", 129)) ;
        GALGAS_enumFunAssociationSortedList var_associationSortedList_4918 = GALGAS_enumFunAssociationSortedList::constructor_emptySortedList (SOURCE_FILE ("enumeration.ggs", 130)) ;
        cEnumerator__32_lstringlist enumerator_4969 (enumerator_4702.current_mAssociationList (HERE), kENUMERATION_UP) ;
        while (enumerator_4969.hasCurrentObject ()) {
          GALGAS_uint var_idx_5063 ;
          var_enumConstantMap_4505.method_searchKey (enumerator_4969.current_mValue_30_ (HERE), var_idx_5063, inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 132)) ;
          var_associationSortedList_4918.addAssign_operation (var_idx_5063, enumerator_4969.current_mValue_31_ (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("enumeration.ggs", 133)) ;
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_definedConstantNameSet_4850.getter_hasKey (enumerator_4969.current_mValue_30_ (HERE).readProperty_string () COMMA_SOURCE_FILE ("enumeration.ggs", 134)).boolEnum () ;
            if (kBoolTrue == test_3) {
              TC_Array <C_FixItDescription> fixItArray4 ;
              inCompiler->emitSemanticError (enumerator_4969.current_mValue_30_ (HERE).readProperty_location (), GALGAS_string ("Duplicated constant"), fixItArray4  COMMA_SOURCE_FILE ("enumeration.ggs", 135)) ;
            }
          }
          var_definedConstantNameSet_4850.addAssign_operation (enumerator_4969.current_mValue_30_ (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("enumeration.ggs", 137)) ;
          enumerator_4969.gotoNextObject () ;
        }
        const GALGAS_enumerationDeclarationAST temp_5 = this ;
        cEnumerator_lstringlist enumerator_5326 (temp_5.readProperty_mEnumConstantNameList (), kENUMERATION_UP) ;
        while (enumerator_5326.hasCurrentObject ()) {
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = var_definedConstantNameSet_4850.getter_hasKey (enumerator_5326.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("enumeration.ggs", 140)).operator_not (SOURCE_FILE ("enumeration.ggs", 140)).boolEnum () ;
            if (kBoolTrue == test_6) {
              TC_Array <C_FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (enumerator_4702.current_mFunctionName (HERE).readProperty_location (), GALGAS_string ("No association for '").add_operation (enumerator_5326.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 141)).add_operation (GALGAS_string ("' constant"), inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 141)), fixItArray7  COMMA_SOURCE_FILE ("enumeration.ggs", 141)) ;
            }
          }
          enumerator_5326.gotoNextObject () ;
        }
        {
        var_enumFuncMap_4656.setter_insertKey (enumerator_4702.current_mFunctionName (HERE), var_associationSortedList_4918, inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 144)) ;
        }
      }
    }
    enumerator_4702.gotoNextObject () ;
  }
  {
  const GALGAS_enumerationDeclarationAST temp_8 = this ;
  const GALGAS_enumerationDeclarationAST temp_9 = this ;
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (temp_8.readProperty_mClassName (), GALGAS_classKind::constructor_atomic (GALGAS_typeKind::constructor_enumType (temp_9.readProperty_mClassName ().readProperty_string (), var_enumConstantMap_4505, var_enumFuncMap_4656  COMMA_SOURCE_FILE ("enumeration.ggs", 149))  COMMA_SOURCE_FILE ("enumeration.ggs", 149)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("enumeration.ggs", 149)), GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("enumeration.ggs", 150)), GALGAS_propertyGenerationList::constructor_emptyList (SOURCE_FILE ("enumeration.ggs", 151)), inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 147)) ;
  }
  const GALGAS_enumerationDeclarationAST temp_10 = this ;
  const GALGAS_enumerationDeclarationAST temp_11 = this ;
  const GALGAS_enumerationDeclarationAST temp_12 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_enumForGeneration::constructor_new (temp_10.readProperty_mClassName ().readProperty_string (), temp_11.readProperty_mEnumConstantNameList (), var_enumFuncMap_4656, temp_12.readProperty_mCaseIterable ()  COMMA_SOURCE_FILE ("enumeration.ggs", 155))  COMMA_SOURCE_FILE ("enumeration.ggs", 155)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'enumGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of 'indexes' directory

static const cRegularFileWrapper * gWrapperAllFiles_enumGenerationTemplate_4 [1] = {
  nullptr
} ;

//--- All sub-directories of 'indexes' directory

static const cDirectoryWrapper * gWrapperAllDirectories_enumGenerationTemplate_4 [1] = {
  nullptr
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
  nullptr
} ;

//--- All sub-directories of 'build' directory

static const cDirectoryWrapper * gWrapperAllDirectories_enumGenerationTemplate_3 [2] = {
  & gWrapperDirectory_4_enumGenerationTemplate,
  nullptr
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
  nullptr
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_enumGenerationTemplate_5 [1] = {
  nullptr
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

static const cDirectoryWrapper * gWrapperAllDirectories_enumGenerationTemplate_0 [5] = {
  & gWrapperDirectory_3_enumGenerationTemplate,
  & gWrapperDirectory_5_enumGenerationTemplate,
  & gWrapperDirectory_1_enumGenerationTemplate,
  & gWrapperDirectory_2_enumGenerationTemplate,
  nullptr
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
                                                                                const GALGAS_enumFuncMap & in_FUNCTION_5F_MAP,
                                                                                const GALGAS_bool & in_CASE_5F_ITERABLE
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nimport AppKit\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nenum " ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << " : Int, EBEnumPropertyProtocol, Hashable" ;
  const enumGalgasBool test_0 = in_CASE_5F_ITERABLE.boolEnum () ;
  if (kBoolTrue == test_0) {
    result << ", CaseIterable" ;
  }else if (kBoolFalse == test_0) {
  }
  result << " {\n" ;
  GALGAS_uint index_593_idx (0) ;
  if (in_CONSTANT_5F_ORDERED_5F_LIST.isValid ()) {
    cEnumerator_lstringlist enumerator_593 (in_CONSTANT_5F_ORDERED_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_593.hasCurrentObject ()) {
      result << "  case " ;
      result << enumerator_593.current_mValue (HERE).readProperty_string ().stringValue () ;
      result << " = " ;
      result << index_593_idx.getter_string (SOURCE_FILE ("enum.swift.galgasTemplate", 12)).stringValue () ;
      result << "\n" ;
      index_593_idx.increment () ;
      enumerator_593.gotoNextObject () ;
    }
  }
  result << "\n" ;
  GALGAS_uint index_705_ (0) ;
  if (in_FUNCTION_5F_MAP.isValid ()) {
    cEnumerator_enumFuncMap enumerator_705 (in_FUNCTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_705.hasCurrentObject ()) {
      result << "  //····················································································································\n  // Function " ;
      result << enumerator_705.current_lkey (HERE).readProperty_string ().stringValue () ;
      result << "\n  //····················································································································\n\n  static func " ;
      result << enumerator_705.current_lkey (HERE).readProperty_string ().stringValue () ;
      result << " () -> [String] {\n    return [" ;
      GALGAS_uint index_1117_ (0) ;
      if (enumerator_705.current_mAssociationSortedList (HERE).isValid ()) {
        cEnumerator_enumFunAssociationSortedList enumerator_1117 (enumerator_705.current_mAssociationSortedList (HERE), kENUMERATION_UP) ;
        while (enumerator_1117.hasCurrentObject ()) {
          result << enumerator_1117.current_mAssociatedString (HERE).getter_utf_38_Representation (SOURCE_FILE ("enum.swift.galgasTemplate", 23)).stringValue () ;
          if (enumerator_1117.hasNextObject ()) {
            result << ", " ;
          }
          index_1117_.increment () ;
          enumerator_1117.gotoNextObject () ;
        }
      }
      result << "]\n  }\n\n" ;
      index_705_.increment () ;
      enumerator_705.gotoNextObject () ;
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
  result << " (rawValue: rawValue) {\n      return enumValue\n    }else{\n      return nil\n    }\n  }\n\n  //····················································································································\n\n  func appendPropertyValueTo (_ ioData : inout Data) {\n    ioData.append (base62Encoded: self.rawValue)\n  }\n\n  //····················································································································\n\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\ntypealias EBReadWriteProperty_" ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << " = EBEnumReadWriteProperty <" ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << "> // EBObservableMutableProperty <" ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << ">\ntypealias EBStoredProperty_" ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << " = EBEnumStoredProperty <" ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << ">\ntypealias EBComputedProperty_" ;
  result << in_ENUM_5F_TYPE_5F_NAME.stringValue () ;
  result << " = EBEnumGenericComputedProperty <" ;
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
    test_0 = GALGAS_bool (kIsStrictSup, temp_1.readProperty_mEnumConstantList ().getter_count (SOURCE_FILE ("enumeration.ggs", 193)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_enumForGeneration temp_2 = this ;
      const GALGAS_enumForGeneration temp_3 = this ;
      const GALGAS_enumForGeneration temp_4 = this ;
      const GALGAS_enumForGeneration temp_5 = this ;
      GALGAS_string var_s_7188 = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumGenerationInSwift (inCompiler, temp_2.readProperty_mEnumName (), temp_3.readProperty_mEnumConstantList (), temp_4.readProperty_mEnumFuncMap (), temp_5.readProperty_mCaseIterable () COMMA_SOURCE_FILE ("enumeration.ggs", 194))) ;
      const GALGAS_enumForGeneration temp_6 = this ;
      GALGAS_string var_fileName_7367 = GALGAS_string ("enum-").add_operation (temp_6.readProperty_mEnumName (), inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 200)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 200)) ;
      ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_7367  COMMA_SOURCE_FILE ("enumeration.ggs", 201)) ;
      {
      GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_7367, var_s_7188, inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 202)) ;
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
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (temp_0.readProperty_mClassName (), GALGAS_classKind::constructor_atomic (temp_1.readProperty_mKind ()  COMMA_SOURCE_FILE ("atomic-class.ggs", 50)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("atomic-class.ggs", 50)), GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("atomic-class.ggs", 51)), GALGAS_propertyGenerationList::constructor_emptyList (SOURCE_FILE ("atomic-class.ggs", 52)), inCompiler COMMA_SOURCE_FILE ("atomic-class.ggs", 48)) ;
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
  GALGAS_actionMap var_actionMap_5398 ;
  {
  const GALGAS_entityDeclarationAST temp_0 = this ;
  routine_buildActionMap (temp_0.readProperty_mActionDeclarationList (), var_actionMap_5398, inCompiler  COMMA_SOURCE_FILE ("entity.ggs", 159)) ;
  }
  {
  const GALGAS_entityDeclarationAST temp_1 = this ;
  const GALGAS_entityDeclarationAST temp_2 = this ;
  const GALGAS_entityDeclarationAST temp_3 = this ;
  const GALGAS_entityDeclarationAST temp_4 = this ;
  const GALGAS_entityDeclarationAST temp_5 = this ;
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (temp_1.readProperty_mClassName (), GALGAS_classKind::constructor_entity (temp_2.readProperty_mSuperEntityName ().readProperty_string (), temp_3.readProperty_mIsGraphicEntity (), temp_4.readProperty_mIsAbstract (), temp_5.readProperty_mHandlingOpposite ()  COMMA_SOURCE_FILE ("entity.ggs", 162)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("entity.ggs", 167)), var_actionMap_5398, GALGAS_propertyGenerationList::constructor_emptyList (SOURCE_FILE ("entity.ggs", 169)), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 160)) ;
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
      GALGAS_propertyMap var_inheritedPropertyMap_6225 ;
      const GALGAS_entityDeclarationAST temp_2 = this ;
      GALGAS_classKind joker_6197 ; // Joker input parameter
      GALGAS_actionMap joker_6253_2 ; // Joker input parameter
      GALGAS_propertyGenerationList joker_6253_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_2.readProperty_mSuperEntityName (), joker_6197, var_inheritedPropertyMap_6225, joker_6253_2, joker_6253_1, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 180)) ;
      GALGAS_propertyMap var_propertyMap_6411 ;
      const GALGAS_entityDeclarationAST temp_3 = this ;
      GALGAS_classKind joker_6383 ; // Joker input parameter
      GALGAS_actionMap joker_6430_2 ; // Joker input parameter
      GALGAS_propertyGenerationList joker_6430_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_3.readProperty_mClassName (), joker_6383, var_propertyMap_6411, joker_6430_2, joker_6430_1, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 187)) ;
      GALGAS_propertyMap var_newPropertyMap_6472 = var_inheritedPropertyMap_6225 ;
      cEnumerator_propertyMap enumerator_6640 (var_propertyMap_6411, kENUMERATION_UP) ;
      while (enumerator_6640.hasCurrentObject ()) {
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = enumerator_6640.current_mIsOverriding (HERE).boolEnum () ;
          if (kBoolTrue == test_4) {
            GALGAS_propertyKind joker_6745_3 ; // Joker input parameter
            GALGAS_actionMap joker_6745_2 ; // Joker input parameter
            GALGAS_bool joker_6745_1 ; // Joker input parameter
            var_inheritedPropertyMap_6225.method_searchKey (enumerator_6640.current_lkey (HERE), joker_6745_3, joker_6745_2, joker_6745_1, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 200)) ;
          }
        }
        if (kBoolFalse == test_4) {
          {
          var_newPropertyMap_6472.setter_insertKey (enumerator_6640.current_lkey (HERE), enumerator_6640.current_mKind (HERE), enumerator_6640.current_mActionMap (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 203)) ;
          }
        }
        enumerator_6640.gotoNextObject () ;
      }
      const GALGAS_entityDeclarationAST temp_5 = this ;
      cMapElement_classMap * objectArray_6922 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_5.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("entity.ggs", 207)) ;
      if (nullptr != objectArray_6922) {
        macroValidSharedObject (objectArray_6922, cMapElement_classMap) ;
        objectArray_6922->mProperty_mPropertyMap = var_newPropertyMap_6472 ;
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
  GALGAS_propertyMap var_propertyMap_7469 ;
  GALGAS_propertyGenerationList var_propertyGenerationList_7523 ;
  const GALGAS_entityDeclarationAST temp_0 = this ;
  GALGAS_classKind joker_7443 ; // Joker input parameter
  GALGAS_actionMap joker_7486 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_0.readProperty_mClassName (), joker_7443, var_propertyMap_7469, joker_7486, var_propertyGenerationList_7523, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 219)) ;
  GALGAS_stringset var_overridenTransients_7668 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("entity.ggs", 227)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_entityDeclarationAST temp_2 = this ;
    const GALGAS_entityDeclarationAST temp_3 = this ;
    test_1 = GALGAS_bool (kIsNotEqual, temp_2.readProperty_mSuperEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).operator_and (temp_3.readProperty_mIsAbstract ().operator_not (SOURCE_FILE ("entity.ggs", 228)) COMMA_SOURCE_FILE ("entity.ggs", 228)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_classKind var_superClassKind_7857 ;
      GALGAS_propertyMap var_superPropertyMap_7897 ;
      const GALGAS_entityDeclarationAST temp_4 = this ;
      GALGAS_actionMap joker_7921_2 ; // Joker input parameter
      GALGAS_propertyGenerationList joker_7921_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_4.readProperty_mSuperEntityName (), var_superClassKind_7857, var_superPropertyMap_7897, joker_7921_2, joker_7921_1, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 229)) ;
      switch (var_superClassKind_7857.enumValue ()) {
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
          const cEnumAssociatedValues_classKind_entity * extractPtr_9454 = (const cEnumAssociatedValues_classKind_entity *) (var_superClassKind_7857.unsafePointer ()) ;
          const GALGAS_bool extractedValue_8268_isGraphic = extractPtr_9454->mAssociatedValue1 ;
          const GALGAS_bool extractedValue_8285_isAbstract = extractPtr_9454->mAssociatedValue2 ;
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            const GALGAS_entityDeclarationAST temp_12 = this ;
            test_11 = extractedValue_8268_isGraphic.operator_and (temp_12.readProperty_mIsGraphicEntity ().operator_not (SOURCE_FILE ("entity.ggs", 243)) COMMA_SOURCE_FILE ("entity.ggs", 243)).boolEnum () ;
            if (kBoolTrue == test_11) {
              const GALGAS_entityDeclarationAST temp_13 = this ;
              TC_Array <C_FixItDescription> fixItArray14 ;
              inCompiler->emitSemanticError (temp_13.readProperty_mClassName ().readProperty_location (), GALGAS_string ("this entity should be declared with 'graphic', as super entity is graphic"), fixItArray14  COMMA_SOURCE_FILE ("entity.ggs", 244)) ;
            }
          }
          enumGalgasBool test_15 = kBoolTrue ;
          if (kBoolTrue == test_15) {
            const GALGAS_entityDeclarationAST temp_16 = this ;
            test_15 = extractedValue_8285_isAbstract.operator_and (temp_16.readProperty_mIsAbstract ().operator_not (SOURCE_FILE ("entity.ggs", 246)) COMMA_SOURCE_FILE ("entity.ggs", 246)).boolEnum () ;
            if (kBoolTrue == test_15) {
              cEnumerator_propertyMap enumerator_8593 (var_superPropertyMap_7897, kENUMERATION_UP) ;
              while (enumerator_8593.hasCurrentObject ()) {
                enumGalgasBool test_17 = kBoolTrue ;
                if (kBoolTrue == test_17) {
                  test_17 = extensionGetter_isAbstract (enumerator_8593.current (HERE), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 248)).boolEnum () ;
                  if (kBoolTrue == test_17) {
                    enumGalgasBool test_18 = kBoolTrue ;
                    if (kBoolTrue == test_18) {
                      test_18 = var_propertyMap_7469.getter_hasKey (enumerator_8593.current (HERE).readProperty_lkey ().readProperty_string () COMMA_SOURCE_FILE ("entity.ggs", 249)).boolEnum () ;
                      if (kBoolTrue == test_18) {
                        var_overridenTransients_7668.addAssign_operation (enumerator_8593.current (HERE).readProperty_lkey ().readProperty_string ()  COMMA_SOURCE_FILE ("entity.ggs", 250)) ;
                        GALGAS_propertyKind var_propertyKind_8866 ;
                        GALGAS_actionMap joker_8880_2 ; // Joker input parameter
                        GALGAS_bool joker_8880_1 ; // Joker input parameter
                        var_propertyMap_7469.method_searchKey (enumerator_8593.current (HERE).readProperty_lkey (), var_propertyKind_8866, joker_8880_2, joker_8880_1, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 251)) ;
                        GALGAS_string var_typeName_8903 = extensionGetter_typeName (var_propertyKind_8866, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 252)) ;
                        GALGAS_string var_superTypeName_8957 = extensionGetter_typeName (enumerator_8593.current (HERE).readProperty_mKind (), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 253)) ;
                        enumGalgasBool test_19 = kBoolTrue ;
                        if (kBoolTrue == test_19) {
                          test_19 = GALGAS_bool (kIsNotEqual, var_typeName_8903.objectCompare (var_superTypeName_8957)).boolEnum () ;
                          if (kBoolTrue == test_19) {
                            TC_Array <C_FixItDescription> fixItArray20 ;
                            inCompiler->emitSemanticError (var_propertyMap_7469.getter_locationForKey (enumerator_8593.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 255)), GALGAS_string ("type '").add_operation (var_superTypeName_8957, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 256)).add_operation (GALGAS_string ("' is required by declaration in super entity"), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 256)), fixItArray20  COMMA_SOURCE_FILE ("entity.ggs", 255)) ;
                          }
                        }
                      }
                    }
                    if (kBoolFalse == test_18) {
                      const GALGAS_entityDeclarationAST temp_21 = this ;
                      TC_Array <C_FixItDescription> fixItArray22 ;
                      inCompiler->emitSemanticError (temp_21.readProperty_mClassName ().readProperty_location (), GALGAS_string ("transient '").add_operation (enumerator_8593.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 260)).add_operation (GALGAS_string ("' should be defined, it is declared abstract in super entity"), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 260)), fixItArray22  COMMA_SOURCE_FILE ("entity.ggs", 259)) ;
                    }
                  }
                }
                enumerator_8593.gotoNextObject () ;
              }
            }
          }
        }
        break ;
      }
    }
  }
  GALGAS_bool var_canCopyAndPaste_5F_option_9499 = GALGAS_bool (false) ;
  GALGAS_bool var_cannotBeDeleted_5F_option_9536 = GALGAS_bool (false) ;
  const GALGAS_entityDeclarationAST temp_23 = this ;
  cEnumerator_lstringlist enumerator_9577 (temp_23.readProperty_mGraphicOptionArray (), kENUMERATION_UP) ;
  while (enumerator_9577.hasCurrentObject ()) {
    enumGalgasBool test_24 = kBoolTrue ;
    if (kBoolTrue == test_24) {
      test_24 = GALGAS_bool (kIsEqual, enumerator_9577.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("canCopyAndPaste"))).boolEnum () ;
      if (kBoolTrue == test_24) {
        enumGalgasBool test_25 = kBoolTrue ;
        if (kBoolTrue == test_25) {
          test_25 = var_canCopyAndPaste_5F_option_9499.boolEnum () ;
          if (kBoolTrue == test_25) {
            TC_Array <C_FixItDescription> fixItArray26 ;
            inCompiler->emitSemanticError (enumerator_9577.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated option"), fixItArray26  COMMA_SOURCE_FILE ("entity.ggs", 274)) ;
          }
        }
        var_canCopyAndPaste_5F_option_9499 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_24) {
      enumGalgasBool test_27 = kBoolTrue ;
      if (kBoolTrue == test_27) {
        test_27 = GALGAS_bool (kIsEqual, enumerator_9577.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("cannotBeDeleted"))).boolEnum () ;
        if (kBoolTrue == test_27) {
          enumGalgasBool test_28 = kBoolTrue ;
          if (kBoolTrue == test_28) {
            test_28 = var_cannotBeDeleted_5F_option_9536.boolEnum () ;
            if (kBoolTrue == test_28) {
              TC_Array <C_FixItDescription> fixItArray29 ;
              inCompiler->emitSemanticError (enumerator_9577.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated option"), fixItArray29  COMMA_SOURCE_FILE ("entity.ggs", 279)) ;
            }
          }
          var_cannotBeDeleted_5F_option_9536 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_27) {
        TC_Array <C_FixItDescription> fixItArray30 ;
        appendFixItActions (fixItArray30, kFixItReplace, GALGAS_string ("acceptedTranslation")) ;
        appendFixItActions (fixItArray30, kFixItReplace, GALGAS_string ("canCopyAndPaste")) ;
        appendFixItActions (fixItArray30, kFixItReplace, GALGAS_string ("cannotBeDeleted")) ;
        inCompiler->emitSemanticError (enumerator_9577.current_mValue (HERE).readProperty_location (), GALGAS_string ("unkown graphic option"), fixItArray30  COMMA_SOURCE_FILE ("entity.ggs", 283)) ;
      }
    }
    enumerator_9577.gotoNextObject () ;
  }
  GALGAS_bool var_hasSubClass_10234 = GALGAS_bool (false) ;
  cEnumerator_classMap enumerator_10298 (ioArgument_ioSemanticContext.readProperty_mClassMap (), kENUMERATION_UP) ;
  bool bool_31 = var_hasSubClass_10234.operator_not (SOURCE_FILE ("entity.ggs", 292)).isValidAndTrue () ;
  if (enumerator_10298.hasCurrentObject () && bool_31) {
    while (enumerator_10298.hasCurrentObject () && bool_31) {
      enumGalgasBool test_32 = kBoolTrue ;
      if (kBoolTrue == test_32) {
        test_32 = enumerator_10298.current (HERE).readProperty_mClassKind ().getter_isEntity (SOURCE_FILE ("entity.ggs", 293)).boolEnum () ;
        if (kBoolTrue == test_32) {
          GALGAS_string var_superEntityName_10449 ;
          GALGAS_bool joker_10466_3 ; // Joker input parameter
          GALGAS_bool joker_10466_2 ; // Joker input parameter
          GALGAS_bool joker_10466_1 ; // Joker input parameter
          enumerator_10298.current (HERE).readProperty_mClassKind ().method_entity (var_superEntityName_10449, joker_10466_3, joker_10466_2, joker_10466_1, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 294)) ;
          const GALGAS_entityDeclarationAST temp_33 = this ;
          var_hasSubClass_10234 = GALGAS_bool (kIsEqual, temp_33.readProperty_mClassName ().readProperty_string ().objectCompare (var_superEntityName_10449)) ;
        }
      }
      enumerator_10298.gotoNextObject () ;
      if (enumerator_10298.hasCurrentObject ()) {
        bool_31 = var_hasSubClass_10234.operator_not (SOURCE_FILE ("entity.ggs", 292)).isValidAndTrue () ;
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
  ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_entityForGeneration::constructor_new (temp_36.readProperty_mClassName ().readProperty_string (), temp_37.readProperty_mSuperEntityName ().readProperty_string (), temp_38.readProperty_mHandlingOpposite (), var_propertyGenerationList_7523, temp_39.readProperty_mSignatureList (), temp_40.readProperty_mIsGraphicEntity (), temp_41.readProperty_mIsAbstract (), var_overridenTransients_7668, temp_42.readProperty_mExternSwiftDelegateList (), var_hasSubClass_10234, var_canCopyAndPaste_5F_option_9499, var_cannotBeDeleted_5F_option_9536  COMMA_SOURCE_FILE ("entity.ggs", 302))  COMMA_SOURCE_FILE ("entity.ggs", 302)) ;
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
  GALGAS_atomicPropertyGenerationList var_atomicPropertyGenerationList_12462 = GALGAS_atomicPropertyGenerationList::constructor_emptyList (SOURCE_FILE ("entity.ggs", 349)) ;
  GALGAS_transientPropertyGenerationList var_transientPropertyGenerationList_12535 = GALGAS_transientPropertyGenerationList::constructor_emptyList (SOURCE_FILE ("entity.ggs", 350)) ;
  GALGAS_computedPropertyGenerationList var_computedPropertyGenerationList_12610 = GALGAS_computedPropertyGenerationList::constructor_emptyList (SOURCE_FILE ("entity.ggs", 351)) ;
  GALGAS_toOnePropertyGenerationList var_toOnePropertyGenerationList_12681 = GALGAS_toOnePropertyGenerationList::constructor_emptyList (SOURCE_FILE ("entity.ggs", 352)) ;
  GALGAS_toManyPropertyGenerationList var_toManyPropertyGenerationList_12750 = GALGAS_toManyPropertyGenerationList::constructor_emptyList (SOURCE_FILE ("entity.ggs", 353)) ;
  GALGAS_atomicProxyGenerationList var_proxyGenerationList_12817 = GALGAS_atomicProxyGenerationList::constructor_emptyList (SOURCE_FILE ("entity.ggs", 354)) ;
  GALGAS_toManyProxyGenerationList var_toManyProxyGenerationList_12875 = GALGAS_toManyProxyGenerationList::constructor_emptyList (SOURCE_FILE ("entity.ggs", 355)) ;
  const GALGAS_entityForGeneration temp_0 = this ;
  cEnumerator_propertyGenerationList enumerator_12913 (temp_0.readProperty_mPropertyGenerationList (), kENUMERATION_UP) ;
  while (enumerator_12913.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      GALGAS_atomicPropertyGeneration var_atomicProperty_12969 (dynamic_cast <const cPtr_atomicPropertyGeneration *> (enumerator_12913.current_mProperty (HERE).ptr ())) ;
      if (nullptr == var_atomicProperty_12969.ptr ()) {
        test_1 = kBoolFalse ;
      }
      if (kBoolTrue == test_1) {
        var_atomicPropertyGenerationList_12462.addAssign_operation (var_atomicProperty_12969  COMMA_SOURCE_FILE ("entity.ggs", 358)) ;
      }
    }
    if (kBoolFalse == test_1) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_transientPropertyGeneration var_transientProperty_13097 (dynamic_cast <const cPtr_transientPropertyGeneration *> (enumerator_12913.current_mProperty (HERE).ptr ())) ;
        if (nullptr == var_transientProperty_13097.ptr ()) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          var_transientPropertyGenerationList_12535.addAssign_operation (var_transientProperty_13097  COMMA_SOURCE_FILE ("entity.ggs", 360)) ;
        }
      }
      if (kBoolFalse == test_2) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          GALGAS_computedPropertyGeneration var_computedProperty_13237 (dynamic_cast <const cPtr_computedPropertyGeneration *> (enumerator_12913.current_mProperty (HERE).ptr ())) ;
          if (nullptr == var_computedProperty_13237.ptr ()) {
            test_3 = kBoolFalse ;
          }
          if (kBoolTrue == test_3) {
            var_computedPropertyGenerationList_12610.addAssign_operation (var_computedProperty_13237  COMMA_SOURCE_FILE ("entity.ggs", 362)) ;
          }
        }
        if (kBoolFalse == test_3) {
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            GALGAS_toManyProxyGeneration var_toManyProxy_13373 (dynamic_cast <const cPtr_toManyProxyGeneration *> (enumerator_12913.current_mProperty (HERE).ptr ())) ;
            if (nullptr == var_toManyProxy_13373.ptr ()) {
              test_4 = kBoolFalse ;
            }
            if (kBoolTrue == test_4) {
              var_toManyProxyGenerationList_12875.addAssign_operation (var_toManyProxy_13373  COMMA_SOURCE_FILE ("entity.ggs", 364)) ;
            }
          }
          if (kBoolFalse == test_4) {
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              GALGAS_atomicProxyGeneration var_proxyProperty_13489 (dynamic_cast <const cPtr_atomicProxyGeneration *> (enumerator_12913.current_mProperty (HERE).ptr ())) ;
              if (nullptr == var_proxyProperty_13489.ptr ()) {
                test_5 = kBoolFalse ;
              }
              if (kBoolTrue == test_5) {
                var_proxyGenerationList_12817.addAssign_operation (var_proxyProperty_13489  COMMA_SOURCE_FILE ("entity.ggs", 366)) ;
              }
            }
            if (kBoolFalse == test_5) {
              enumGalgasBool test_6 = kBoolTrue ;
              if (kBoolTrue == test_6) {
                GALGAS_toOnePropertyGeneration var_toOneProperty_13603 (dynamic_cast <const cPtr_toOnePropertyGeneration *> (enumerator_12913.current_mProperty (HERE).ptr ())) ;
                if (nullptr == var_toOneProperty_13603.ptr ()) {
                  test_6 = kBoolFalse ;
                }
                if (kBoolTrue == test_6) {
                  var_toOnePropertyGenerationList_12681.addAssign_operation (var_toOneProperty_13603  COMMA_SOURCE_FILE ("entity.ggs", 368)) ;
                }
              }
              if (kBoolFalse == test_6) {
                enumGalgasBool test_7 = kBoolTrue ;
                if (kBoolTrue == test_7) {
                  GALGAS_toManyPropertyGeneration var_toOneProperty_13727 (dynamic_cast <const cPtr_toManyPropertyGeneration *> (enumerator_12913.current_mProperty (HERE).ptr ())) ;
                  if (nullptr == var_toOneProperty_13727.ptr ()) {
                    test_7 = kBoolFalse ;
                  }
                  if (kBoolTrue == test_7) {
                    var_toManyPropertyGenerationList_12750.addAssign_operation (var_toOneProperty_13727  COMMA_SOURCE_FILE ("entity.ggs", 370)) ;
                  }
                }
              }
            }
          }
        }
      }
    }
    enumerator_12913.gotoNextObject () ;
  }
  GALGAS_string var_superEntityName_13859 = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    const GALGAS_entityForGeneration temp_9 = this ;
    test_8 = GALGAS_bool (kIsNotEqual, temp_9.readProperty_mSuperEntityName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_entityForGeneration temp_10 = this ;
      var_superEntityName_13859 = temp_10.readProperty_mSuperEntityName () ;
    }
  }
  if (kBoolFalse == test_8) {
    enumGalgasBool test_11 = kBoolTrue ;
    if (kBoolTrue == test_11) {
      const GALGAS_entityForGeneration temp_12 = this ;
      test_11 = temp_12.readProperty_mIsGraphicEntity ().boolEnum () ;
      if (kBoolTrue == test_11) {
        var_superEntityName_13859 = GALGAS_string ("EBGraphicManagedObject") ;
      }
    }
    if (kBoolFalse == test_11) {
      var_superEntityName_13859 = GALGAS_string ("EBManagedObject") ;
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
  GALGAS_string var_s_14103 = GALGAS_string (filewrapperTemplate_entityGenerationTemplate_entityImplementationInSwift (inCompiler, temp_13.readProperty_mEntityName (), var_superEntityName_13859, temp_14.readProperty_mPropertyGenerationList (), var_proxyGenerationList_12817, var_toManyProxyGenerationList_12875, var_atomicPropertyGenerationList_12462, var_transientPropertyGenerationList_12535, var_computedPropertyGenerationList_12610, var_toOnePropertyGenerationList_12681, var_toManyPropertyGenerationList_12750, temp_15.readProperty_mSignatureSet (), temp_16.readProperty_mIsGraphicEntity (), temp_17.readProperty_mIsAbstract (), temp_18.readProperty_mOverridenTransients (), temp_19.readProperty_mExternSwiftDelegateList (), temp_20.readProperty_mHasSubEntity (), temp_21.readProperty_mCanCopyAndPaste_5F_option (), temp_22.readProperty_mCannotBeDeleted_5F_option (), constinArgument_inGenerationStruct.readProperty_mToManyClassImplementations ().getter_hasKey (temp_23.readProperty_mEntityName () COMMA_SOURCE_FILE ("entity.ggs", 400)) COMMA_SOURCE_FILE ("entity.ggs", 381))) ;
  const GALGAS_entityForGeneration temp_24 = this ;
  GALGAS_string var_fileName_14799 = GALGAS_string ("entity-").add_operation (temp_24.readProperty_mEntityName (), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 402)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 402)) ;
  ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_14799  COMMA_SOURCE_FILE ("entity.ggs", 403)) ;
  {
  GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_14799, var_s_14103, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 404)) ;
  }
  enumGalgasBool test_25 = kBoolTrue ;
  if (kBoolTrue == test_25) {
    const GALGAS_entityForGeneration temp_26 = this ;
    test_25 = constinArgument_inGenerationStruct.readProperty_mToOneClassImplementations ().getter_hasKey (temp_26.readProperty_mEntityName () COMMA_SOURCE_FILE ("entity.ggs", 409)).boolEnum () ;
    if (kBoolTrue == test_25) {
      const GALGAS_entityForGeneration temp_27 = this ;
      const GALGAS_entityForGeneration temp_28 = this ;
      const GALGAS_entityForGeneration temp_29 = this ;
      const GALGAS_entityForGeneration temp_30 = this ;
      const GALGAS_entityForGeneration temp_31 = this ;
      const GALGAS_entityForGeneration temp_32 = this ;
      const GALGAS_entityForGeneration temp_33 = this ;
      const GALGAS_entityForGeneration temp_34 = this ;
      var_s_14103 = GALGAS_string (filewrapperTemplate_entityGenerationTemplate_entityToOneImplementationInSwift (inCompiler, temp_27.readProperty_mEntityName (), var_superEntityName_13859, temp_28.readProperty_mHandlingOpposite (), temp_29.readProperty_mPropertyGenerationList (), var_proxyGenerationList_12817, var_toManyProxyGenerationList_12875, var_atomicPropertyGenerationList_12462, var_transientPropertyGenerationList_12535, var_computedPropertyGenerationList_12610, var_toOnePropertyGenerationList_12681, var_toManyPropertyGenerationList_12750, temp_30.readProperty_mSignatureSet (), temp_31.readProperty_mIsGraphicEntity (), temp_32.readProperty_mIsAbstract (), temp_33.readProperty_mOverridenTransients (), temp_34.readProperty_mExternSwiftDelegateList () COMMA_SOURCE_FILE ("entity.ggs", 410))) ;
    }
  }
  if (kBoolFalse == test_25) {
    var_s_14103 = GALGAS_string ("// Unused code, not generated by EasyBinding compiler\n") ;
  }
  const GALGAS_entityForGeneration temp_35 = this ;
  var_fileName_14799 = GALGAS_string ("toone-").add_operation (temp_35.readProperty_mEntityName (), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 431)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 431)) ;
  ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_14799  COMMA_SOURCE_FILE ("entity.ggs", 432)) ;
  {
  GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_14799, var_s_14103, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 433)) ;
  }
  enumGalgasBool test_36 = kBoolTrue ;
  if (kBoolTrue == test_36) {
    const GALGAS_entityForGeneration temp_37 = this ;
    test_36 = constinArgument_inGenerationStruct.readProperty_mToManyClassImplementations ().getter_hasKey (temp_37.readProperty_mEntityName () COMMA_SOURCE_FILE ("entity.ggs", 438)).boolEnum () ;
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
      var_s_14103 = GALGAS_string (filewrapperTemplate_entityGenerationTemplate_entityToManyImplementationInSwift (inCompiler, temp_38.readProperty_mEntityName (), var_superEntityName_13859, temp_39.readProperty_mHandlingOpposite (), temp_40.readProperty_mPropertyGenerationList (), var_proxyGenerationList_12817, var_toManyProxyGenerationList_12875, var_atomicPropertyGenerationList_12462, var_transientPropertyGenerationList_12535, var_computedPropertyGenerationList_12610, var_toOnePropertyGenerationList_12681, var_toManyPropertyGenerationList_12750, temp_41.readProperty_mSignatureSet (), temp_42.readProperty_mIsGraphicEntity (), temp_43.readProperty_mIsAbstract (), temp_44.readProperty_mOverridenTransients (), temp_45.readProperty_mExternSwiftDelegateList (), constinArgument_inGenerationStruct.readProperty_mGenerateClass_5F_PreferencesArrayOf_5F_ ().getter_hasKey (temp_46.readProperty_mEntityName () COMMA_SOURCE_FILE ("entity.ggs", 456)), constinArgument_inGenerationStruct.readProperty_mGenerateClass_5F_ProxyArrayOf_5F_ ().getter_hasKey (temp_47.readProperty_mEntityName () COMMA_SOURCE_FILE ("entity.ggs", 457)), constinArgument_inGenerationStruct.readProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_ ().getter_hasKey (temp_48.readProperty_mEntityName () COMMA_SOURCE_FILE ("entity.ggs", 458)), constinArgument_inGenerationStruct.readProperty_mGenerateClass_5F_TransientArrayOf_5F_ ().getter_hasKey (temp_49.readProperty_mEntityName () COMMA_SOURCE_FILE ("entity.ggs", 459)), constinArgument_inGenerationStruct.readProperty_mGenerateClass_5F_StoredArrayOf_5F_ ().getter_hasKey (temp_50.readProperty_mEntityName () COMMA_SOURCE_FILE ("entity.ggs", 460)) COMMA_SOURCE_FILE ("entity.ggs", 439))) ;
    }
  }
  if (kBoolFalse == test_36) {
    var_s_14103 = GALGAS_string ("// Unused code, not generated by EasyBinding compiler\n") ;
  }
  const GALGAS_entityForGeneration temp_51 = this ;
  var_fileName_14799 = GALGAS_string ("tomany-").add_operation (temp_51.readProperty_mEntityName (), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 465)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 465)) ;
  ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_14799  COMMA_SOURCE_FILE ("entity.ggs", 466)) ;
  {
  GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_14799, var_s_14103, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 467)) ;
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
    test_0 = GALGAS_bool (kIsStrictSup, constinArgument_inEntityListForGeneration.getter_count (SOURCE_FILE ("entity.ggs", 481)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_fileName_17575 = GALGAS_string ("EBManagedObjectFactory.swift") ;
      ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_17575  COMMA_SOURCE_FILE ("entity.ggs", 483)) ;
      GALGAS_string var_s_17661 = GALGAS_string (filewrapperTemplate_entityGenerationTemplate_managedObjectFactory (inCompiler, constinArgument_inEntityListForGeneration COMMA_SOURCE_FILE ("entity.ggs", 484))) ;
      {
      GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_17575, var_s_17661, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 485)) ;
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
  nullptr
} ;

//--- All sub-directories of 'indexes' directory

static const cDirectoryWrapper * gWrapperAllDirectories_entityGenerationTemplate_4 [1] = {
  nullptr
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
  nullptr
} ;

//--- All sub-directories of 'build' directory

static const cDirectoryWrapper * gWrapperAllDirectories_entityGenerationTemplate_3 [2] = {
  & gWrapperDirectory_4_entityGenerationTemplate,
  nullptr
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
  nullptr
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_entityGenerationTemplate_5 [1] = {
  nullptr
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
  nullptr
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_entityGenerationTemplate_1 [1] = {
  nullptr
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
  nullptr
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_entityGenerationTemplate_2 [1] = {
  nullptr
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
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_entityGenerationTemplate_0 [5] = {
  & gWrapperDirectory_3_entityGenerationTemplate,
  & gWrapperDirectory_5_entityGenerationTemplate,
  & gWrapperDirectory_1_entityGenerationTemplate,
  & gWrapperDirectory_2_entityGenerationTemplate,
  nullptr
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
    GALGAS_uint index_427_ (0) ;
    if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
      cEnumerator_atomicPropertyGenerationList enumerator_427 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
      while (enumerator_427.hasCurrentObject ()) {
        result << "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\n@MainActor protocol " ;
        result << in_ENTITY_5F_NAME.stringValue () ;
        result << "_" ;
        result << enumerator_427.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << " : AnyObject {\n  var " ;
        result << enumerator_427.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << " : " ;
        result << extensionGetter_swiftTypeName (enumerator_427.current_mProperty (HERE).readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 13)).stringValue () ;
        result << " { get }\n}\n\n" ;
        index_427_.increment () ;
        enumerator_427.gotoNextObject () ;
      }
    }
  }else if (kBoolFalse == test_0) {
  }
  const enumGalgasBool test_1 = in_GENERATE_5F_PROPERTY_5F_ACCESS_5F_PROTOCOLS.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_uint index_808_ (0) ;
    if (in_PROXY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
      cEnumerator_atomicProxyGenerationList enumerator_808 (in_PROXY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
      while (enumerator_808.hasCurrentObject ()) {
        result << "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\n@MainActor protocol " ;
        result << in_ENTITY_5F_NAME.stringValue () ;
        result << "_" ;
        result << enumerator_808.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << " : AnyObject {\n  var " ;
        result << enumerator_808.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << " : " ;
        result << extensionGetter_swiftTypeName (enumerator_808.current_mProperty (HERE).readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 24)).stringValue () ;
        result << "\? { get }\n}\n\n" ;
        index_808_.increment () ;
        enumerator_808.gotoNextObject () ;
      }
    }
  }else if (kBoolFalse == test_1) {
  }
  const enumGalgasBool test_2 = in_GENERATE_5F_PROPERTY_5F_ACCESS_5F_PROTOCOLS.boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_uint index_1198_ (0) ;
    if (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
      cEnumerator_transientPropertyGenerationList enumerator_1198 (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kENUMERATION_UP) ;
      while (enumerator_1198.hasCurrentObject ()) {
        result << "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\n@MainActor protocol " ;
        result << in_ENTITY_5F_NAME.stringValue () ;
        result << "_" ;
        result << enumerator_1198.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << " : AnyObject {\n  var " ;
        result << enumerator_1198.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << " : " ;
        result << extensionGetter_swiftTypeName (enumerator_1198.current_mProperty (HERE).readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 35)).stringValue () ;
        result << "\? { get }\n}\n\n" ;
        index_1198_.increment () ;
        enumerator_1198.gotoNextObject () ;
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
    GALGAS_uint index_1950_ (0) ;
    if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
      cEnumerator_propertyGenerationList enumerator_1950 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
      while (enumerator_1950.hasCurrentObject ()) {
        const enumGalgasBool test_5 = GALGAS_bool (enumerator_1950.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_atomicPropertyGeneration).operator_or (GALGAS_bool (enumerator_1950.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_transientPropertyGeneration) COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 52)).operator_or (GALGAS_bool (enumerator_1950.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_atomicProxyGeneration) COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 52)).boolEnum () ;
        if (kBoolTrue == test_5) {
          result << ",\n         " ;
          result << in_ENTITY_5F_NAME.stringValue () ;
          result << "_" ;
          result << enumerator_1950.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        }else if (kBoolFalse == test_5) {
        }
        index_1950_.increment () ;
        enumerator_1950.gotoNextObject () ;
      }
    }
  }else if (kBoolFalse == test_4) {
  }
  result << " {\n\n" ;
  GALGAS_uint index_2235_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_2235 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_2235.hasCurrentObject ()) {
      result << callExtensionGetter_propertyDeclarationCode ((const cPtr_propertyGeneration *) enumerator_2235.current_mProperty (HERE).ptr (), GALGAS_bool (false), in_GENERATE_5F_PROPERTY_5F_ACCESS_5F_PROTOCOLS, in_OVERRIDEN_5F_TRANSIENTS, inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 61)).stringValue () ;
      index_2235_.increment () ;
      enumerator_2235.gotoNextObject () ;
    }
  }
  result << "  //····················································································································\n  //    init\n  //····················································································································\n\n  required init (_ inUndoManager : UndoManager\?) {\n" ;
  GALGAS_uint index_2704_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_2704 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_2704.hasCurrentObject ()) {
      result << callExtensionGetter_initCode ((const cPtr_propertyGeneration *) enumerator_2704.current_mProperty (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 70)).stringValue () ;
      index_2704_.increment () ;
      enumerator_2704.gotoNextObject () ;
    }
  }
  result << "    super.init (inUndoManager)\n" ;
  GALGAS_uint index_2813_ (0) ;
  if (in_TO_5F_ONE_5F_RELATIONSHIP_5F_LIST.isValid ()) {
    cEnumerator_toOnePropertyGenerationList enumerator_2813 (in_TO_5F_ONE_5F_RELATIONSHIP_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2813.hasCurrentObject ()) {
      result << "    self." ;
      result << enumerator_2813.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_none.mReadModelFunction = { [weak self] in\n      if let uwSelf = self {\n        return .single (uwSelf." ;
      result << enumerator_2813.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_property.propval == nil)\n      }else{\n        return .empty\n      }\n    }\n    self." ;
      result << enumerator_2813.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_property.startsBeingObserved (by: self." ;
      result << enumerator_2813.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_none)\n" ;
      index_2813_.increment () ;
      enumerator_2813.gotoNextObject () ;
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
          const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasDependance * extractPtr_3578 = (const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasDependance *) (enumerator_3405.current_mProperty (HERE).readProperty_mOption ().unsafePointer ()) ;
          const GALGAS_string extractedValue_3480_masterPropertyName = extractPtr_3578->mAssociatedValue0 ;
          result << "    self." ;
          result << enumerator_3405.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
          result << "_property.setDataProvider (self." ;
          result << extractedValue_3480_masterPropertyName.stringValue () ;
          result << "_property)\n" ;
        }
        break ;
      case GALGAS_toManyRelationshipOptionGeneration::kEnum_hasOpposite :
        {
          const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasOpposite * extractPtr_3908 = (const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasOpposite *) (enumerator_3405.current_mProperty (HERE).readProperty_mOption ().unsafePointer ()) ;
          const GALGAS_string extractedValue_3639_oppositeName = extractPtr_3908->mAssociatedValue0 ;
          result << "    self." ;
          result << enumerator_3405.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
          result << "_property.setOppositeRelationShipFunctions (\n      setter: { [weak self] inObject in if let me = self { inObject." ;
          result << extractedValue_3639_oppositeName.stringValue () ;
          result << "_property.setProp (me) } },\n      resetter: { inObject in inObject." ;
          result << extractedValue_3639_oppositeName.stringValue () ;
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
  GALGAS_uint index_4239_idx (0) ;
  if (in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    cEnumerator_externSwiftDelegateList enumerator_4239 (in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kENUMERATION_UP) ;
    while (enumerator_4239.hasCurrentObject ()) {
      result << "    self.mExternDelegate" ;
      result << index_4239_idx.getter_string (SOURCE_FILE ("entity.swift.galgasTemplate", 110)).stringValue () ;
      result << " = " ;
      result << enumerator_4239.current_mExternSwiftDelegateName (HERE).readProperty_string ().stringValue () ;
      result << " (object: self)\n" ;
      index_4239_idx.increment () ;
      enumerator_4239.gotoNextObject () ;
    }
  }
  result << "   }\n  \n  //····················································································································\n  //    Extern delegates\n  //····················································································································\n\n" ;
  GALGAS_uint index_4709_idx (0) ;
  if (in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    cEnumerator_externSwiftDelegateList enumerator_4709 (in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kENUMERATION_UP) ;
    while (enumerator_4709.hasCurrentObject ()) {
      result << "  final var mExternDelegate" ;
      result << index_4709_idx.getter_string (SOURCE_FILE ("entity.swift.galgasTemplate", 120)).stringValue () ;
      result << " : " ;
      result << enumerator_4709.current_mExternSwiftDelegateName (HERE).readProperty_string ().stringValue () ;
      result << "\? = nil\n" ;
      index_4709_idx.increment () ;
      enumerator_4709.gotoNextObject () ;
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
  result << " : EBReadOnlyAbstractArrayProperty <" ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << "> {\n\n  //····················································································································\n\n  override func updateObservers (removedSet inRemovedSet : EBReferenceSet <" ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << ">,                            \n                                 addedSet inAddedSet : EBReferenceSet <" ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << ">) {\n    super.updateObservers (removedSet: inRemovedSet, addedSet: inAddedSet)\n  //--- Remove observers from removed objects\n    for managedObject in inRemovedSet.values {\n" ;
  GALGAS_uint index_1259_ (0) ;
  if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_atomicPropertyGenerationList enumerator_1259 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_1259.hasCurrentObject ()) {
      result << "      if let relay = self.mObserversOf_" ;
      result << enumerator_1259.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " { // Stored property\n        managedObject." ;
      result << enumerator_1259.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_property.stopsBeingObserved (by: relay)\n      }\n" ;
      index_1259_.increment () ;
      enumerator_1259.gotoNextObject () ;
    }
  }
  GALGAS_uint index_1521_ (0) ;
  if (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    cEnumerator_transientPropertyGenerationList enumerator_1521 (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kENUMERATION_UP) ;
    while (enumerator_1521.hasCurrentObject ()) {
      result << "      if let relay = self.mObserversOf_" ;
      result << enumerator_1521.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " { // Transient property\n        managedObject." ;
      result << enumerator_1521.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_property.stopsBeingObserved (by: relay)\n      }\n" ;
      index_1521_.increment () ;
      enumerator_1521.gotoNextObject () ;
    }
  }
  GALGAS_uint index_1794_ (0) ;
  if (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    cEnumerator_computedPropertyGenerationList enumerator_1794 (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kENUMERATION_UP) ;
    while (enumerator_1794.hasCurrentObject ()) {
      result << "      if let relay = self.mObserversOf_" ;
      result << enumerator_1794.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " { // Computed property\n        managedObject." ;
      result << enumerator_1794.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_property.stopsBeingObserved (by: relay)\n      }\n" ;
      index_1794_.increment () ;
      enumerator_1794.gotoNextObject () ;
    }
  }
  GALGAS_uint index_2058_ (0) ;
  if (in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_toManyProxyGenerationList enumerator_2058 (in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_2058.hasCurrentObject ()) {
      result << "      if let relay = self.mObserversOf_" ;
      result << enumerator_2058.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " { // Tomany proxy\n        managedObject." ;
      result << enumerator_2058.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_property.stopsBeingObserved (by: relay)\n      }\n" ;
      index_2058_.increment () ;
      enumerator_2058.gotoNextObject () ;
    }
  }
  result << "    }\n  //--- Add observers to added objects\n    for managedObject in inAddedSet.values {\n" ;
  GALGAS_uint index_2418_ (0) ;
  if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_atomicPropertyGenerationList enumerator_2418 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_2418.hasCurrentObject ()) {
      result << "      if let relay = self.mObserversOf_" ;
      result << enumerator_2418.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " { // Stored property\n        managedObject." ;
      result << enumerator_2418.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_property.startsBeingObserved (by: relay)\n      }\n" ;
      index_2418_.increment () ;
      enumerator_2418.gotoNextObject () ;
    }
  }
  GALGAS_uint index_2681_ (0) ;
  if (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    cEnumerator_transientPropertyGenerationList enumerator_2681 (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kENUMERATION_UP) ;
    while (enumerator_2681.hasCurrentObject ()) {
      result << "      if let relay = self.mObserversOf_" ;
      result << enumerator_2681.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " { // Transient property\n        managedObject." ;
      result << enumerator_2681.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_property.startsBeingObserved (by: relay)\n      }\n" ;
      index_2681_.increment () ;
      enumerator_2681.gotoNextObject () ;
    }
  }
  GALGAS_uint index_2955_ (0) ;
  if (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    cEnumerator_computedPropertyGenerationList enumerator_2955 (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kENUMERATION_UP) ;
    while (enumerator_2955.hasCurrentObject ()) {
      result << "      if let relay = self.mObserversOf_" ;
      result << enumerator_2955.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " { // Computed property\n        managedObject." ;
      result << enumerator_2955.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_property.startsBeingObserved (by: relay)\n      }\n" ;
      index_2955_.increment () ;
      enumerator_2955.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3220_ (0) ;
  if (in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_toManyProxyGenerationList enumerator_3220 (in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_3220.hasCurrentObject ()) {
      result << "      if let relay = self.mObserversOf_" ;
      result << enumerator_3220.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " { // Tomany proxy\n        managedObject." ;
      result << enumerator_3220.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_property.startsBeingObserved (by: relay)\n      }\n" ;
      index_3220_.increment () ;
      enumerator_3220.gotoNextObject () ;
    }
  }
  result << "    }\n  }\n\n" ;
  GALGAS_uint index_3503_ (0) ;
  if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_atomicPropertyGenerationList enumerator_3503 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_3503.hasCurrentObject ()) {
      result << "  //····················································································································\n  //   Observers of '" ;
      result << enumerator_3503.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "' stored property\n  //····················································································································\n\n  private final var mObserversOf_" ;
      result << enumerator_3503.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " : EBObservedObserver\? = nil\n\n  //····················································································································\n\n  final func toMany_" ;
      result << enumerator_3503.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_StartsBeingObserved (by inObserver : EBObserverProtocol) {\n    let relay : EBObservedObserver\n    if let r = self.mObserversOf_" ;
      result << enumerator_3503.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " {\n      relay = r\n    }else{\n      relay = EBObservedObserver ()\n      self.startsBeingObserved (by: relay)\n      for managedObject in self.propval.values {\n        managedObject." ;
      result << enumerator_3503.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_property.startsBeingObserved (by: relay)\n      }\n      self.mObserversOf_" ;
      result << enumerator_3503.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " = relay\n    }\n    relay.startsBeingObserved (by: inObserver)\n  }\n\n  //····················································································································\n\n  final func toMany_" ;
      result << enumerator_3503.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_StopsBeingObserved (by inObserver : EBObserverProtocol) {\n    self.mObserversOf_" ;
      result << enumerator_3503.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "\?.stopsBeingObserved (by: inObserver)\n  }\n\n" ;
      index_3503_.increment () ;
      enumerator_3503.gotoNextObject () ;
    }
  }
  GALGAS_uint index_4976_ (0) ;
  if (in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_toManyProxyGenerationList enumerator_4976 (in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_4976.hasCurrentObject ()) {
      result << "  //····················································································································\n  //   Observers of '" ;
      result << enumerator_4976.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "' toMany proxy\n  //····················································································································\n\n  private final var mObserversOf_" ;
      result << enumerator_4976.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " : EBObservedObserver\? = nil\n\n  //····················································································································\n\n  final func toMany_" ;
      result << enumerator_4976.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_StartsBeingObserved (by inObserver : EBObserverProtocol) {\n    let relay : EBObservedObserver\n    if let r = self.mObserversOf_" ;
      result << enumerator_4976.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " {\n      relay = r\n    }else{\n      relay = EBObservedObserver ()\n      self.startsBeingObserved (by: relay)\n      for managedObject in self.propval.values {\n        managedObject." ;
      result << enumerator_4976.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_property.startsBeingObserved (by: relay)\n      }\n      self.mObserversOf_" ;
      result << enumerator_4976.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " = relay\n    }\n    relay.startsBeingObserved (by: inObserver)\n  }\n\n  //····················································································································\n\n  final func toMany_" ;
      result << enumerator_4976.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_StopsBeingObserved (by inObserver : EBObserverProtocol) {\n    self.mObserversOf_" ;
      result << enumerator_4976.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "\?.stopsBeingObserved (by: inObserver)\n  }\n\n" ;
      index_4976_.increment () ;
      enumerator_4976.gotoNextObject () ;
    }
  }
  GALGAS_uint index_6438_ (0) ;
  if (in_PROXY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_atomicProxyGenerationList enumerator_6438 (in_PROXY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_6438.hasCurrentObject ()) {
      result << "  //····················································································································\n  //   Observers of '" ;
      result << enumerator_6438.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "' proxy property\n  //····················································································································\n\n  private final var mObserversOf_" ;
      result << enumerator_6438.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " : EBObservedObserver\? = nil\n\n  //····················································································································\n\n  final func toMany_" ;
      result << enumerator_6438.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_StartsBeingObserved (by inObserver : EBObserverProtocol) {\n    let relay : EBObservedObserver\n    if let r = self.mObserversOf_" ;
      result << enumerator_6438.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " {\n      relay = r\n    }else{\n      relay = EBObservedObserver ()\n      self.startsBeingObserved (by: relay)\n      for managedObject in self.propval.values {\n        managedObject." ;
      result << enumerator_6438.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_property.startsBeingObserved (by: relay)\n      }\n      self.mObserversOf_" ;
      result << enumerator_6438.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " = relay\n    }\n    relay.startsBeingObserved (by: inObserver)\n  }\n\n  //····················································································································\n\n  final func toMany_" ;
      result << enumerator_6438.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_StopsBeingObserved (by inObserver : EBObserverProtocol) {\n    self.mObserversOf_" ;
      result << enumerator_6438.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "\?.stopsBeingObserved (by: inObserver)\n  }\n\n" ;
      index_6438_.increment () ;
      enumerator_6438.gotoNextObject () ;
    }
  }
  GALGAS_uint index_7910_ (0) ;
  if (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    cEnumerator_transientPropertyGenerationList enumerator_7910 (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kENUMERATION_UP) ;
    while (enumerator_7910.hasCurrentObject ()) {
      result << "  //····················································································································\n  //   Observers of '" ;
      result << enumerator_7910.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "' transient property\n  //····················································································································\n\n  private final var mObserversOf_" ;
      result << enumerator_7910.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " : EBObservedObserver\? = nil\n\n  //····················································································································\n\n  final func toMany_" ;
      result << enumerator_7910.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_StartsBeingObserved (by inObserver : EBObserverProtocol) {\n    let relay : EBObservedObserver\n    if let r = self.mObserversOf_" ;
      result << enumerator_7910.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " {\n      relay = r\n    }else{\n      relay = EBObservedObserver ()\n      self.startsBeingObserved (by: relay)\n      for managedObject in self.propval.values {\n        managedObject." ;
      result << enumerator_7910.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_property.startsBeingObserved (by: relay)\n      }\n      self.mObserversOf_" ;
      result << enumerator_7910.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " = relay\n    }\n    relay.startsBeingObserved (by:  inObserver)\n  }\n\n  //····················································································································\n\n  final func toMany_" ;
      result << enumerator_7910.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_StopsBeingObserved (by inObserver : EBObserverProtocol) {\n    self.mObserversOf_" ;
      result << enumerator_7910.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "\?.stopsBeingObserved (by: inObserver)\n  }\n\n" ;
      index_7910_.increment () ;
      enumerator_7910.gotoNextObject () ;
    }
  }
  GALGAS_uint index_9395_ (0) ;
  if (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    cEnumerator_computedPropertyGenerationList enumerator_9395 (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kENUMERATION_UP) ;
    while (enumerator_9395.hasCurrentObject ()) {
      result << "  //····················································································································\n  //   Observers of '" ;
      result << enumerator_9395.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "' computed property\n  //····················································································································\n\n  private final var mObserversOf_" ;
      result << enumerator_9395.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " : EBObservedObserver\? = nil\n\n  //····················································································································\n\n  final func toMany_" ;
      result << enumerator_9395.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_StartsBeingObserved (by inObserver : EBObserverProtocol) {\n    let relay : EBObservedObserver\n    if let r = self.mObserversOf_" ;
      result << enumerator_9395.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " {\n      relay = r\n    }else{\n      relay = EBObservedObserver ()\n      self.startsBeingObserved (by: relay)\n      for managedObject in self.propval.values {\n        managedObject." ;
      result << enumerator_9395.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_property.startsBeingObserved (by: relay)\n      }\n      self.mObserversOf_" ;
      result << enumerator_9395.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " = relay\n    }\n    relay.startsBeingObserved (by: inObserver)\n  }\n\n  //····················································································································\n\n  final func toMany_" ;
      result << enumerator_9395.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_StopsBeingObserved (by inObserver : EBObserverProtocol) {\n    self.mObserversOf_" ;
      result << enumerator_9395.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "\?.stopsBeingObserved (by: inObserver)\n  }\n\n" ;
      index_9395_.increment () ;
      enumerator_9395.gotoNextObject () ;
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
    result << ") -> Bool > = nil\n  private var mSortObserver : EBModelNotifierEvent\? = nil\n//  private let mModelEvent = EBModelEvent ()\n\n  //····················································································································\n\n/*  override init () {\n    super.init ()\n    self.mModelEvent.mEventCallBack = { [weak self] in self\?.computeModelArray () }\n  } */\n\n  //····················································································································\n  //   Data provider\n  //····················································································································\n\n  private weak var mDataProvider : ReadOnlyArrayOf_" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << "\? = nil // SHOULD BE WEAK\n  private var mTransientKind : PropertyKind = .empty\n  private var mModelArrayShouldBeComputed = true\n\n  //····················································································································\n\n  func setDataProvider (_ inProvider : ReadOnlyArrayOf_" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << ",\n                        sortCallback inSortCallBack : Optional < (_ left : " ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << ", _ right : " ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << ") -> Bool >,\n                        addSortObserversCallback inAddSortObserversCallback : (EBModelNotifierEvent) -> Void,\n                        removeSortObserversCallback inRemoveSortObserversCallback : @escaping (EBModelNotifierEvent) -> Void) {\n    if self.mDataProvider !== inProvider {\n      self.mSortObserver\?.removeSortObservers ()\n      self.mSortObserver = nil\n      self.mDataProvider\?.detachClient (self)\n      self.mDataProvider = inProvider\n      self.mIsOrderedBefore = inSortCallBack\n      self.mDataProvider\?.attachClient (self)\n      if inSortCallBack != nil {\n        self.mSortObserver = EBModelNotifierEvent (\n          self,\n          addSortObserversCallback: inAddSortObserversCallback,\n          removeSortObserversCallback: inRemoveSortObserversCallback\n        )\n      }else{\n        self.mInternalArrayValue = EBReferenceArray ()\n      }\n    }\n  }\n\n  //····················································································································\n\n/*  func resetDataProvider () {\n    if self.mDataProvider != nil {\n      self.mSortObserver = nil\n      self.mDataProvider\?.detachClient (self)\n      self.mDataProvider = nil\n      self.mIsOrderedBefore = nil\n    }\n  } */\n\n  //····················································································································\n\n  override func notifyModelDidChange () {\n    if !self.mModelArrayShouldBeComputed {\n      self.mModelArrayShouldBeComputed = true\n      DispatchQueue.main.async {\n        self.computeModelArray ()\n      }\n    }\n//    self.mModelArrayShouldBeComputed = true\n//    self.mModelEvent.observedObjectDidChange ()\n    super.notifyModelDidChange ()\n  }\n\n  //····················································································································\n\n  private final func computeModelArray () {\n    if self.mModelArrayShouldBeComputed {\n      self.mModelArrayShouldBeComputed = false\n      let newArray : EBReferenceArray <" ;
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
  const enumGalgasBool test_1 = in_GENERATE_5F_CLASS_5F_TransientArrayOfSuperOf_5F_.operator_not (SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 372)).boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "// TransientArrayOfSuperOf_" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << " is useless.\n" ;
  }else if (kBoolFalse == test_1) {
    result << "final class TransientArrayOfSuperOf_" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << " <SUPER : EBManagedObject> : ReadOnlyArrayOf_" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << " {\n\n  //····················································································································\n  //   Data provider\n  //····················································································································\n\n  private weak var mDataProvider : EBReadOnlyAbstractArrayProperty <SUPER>\? = nil // SHOULD BE WEAK\n  private var mTransientKind : PropertyKind = .empty\n  private var mModelArrayShouldBeComputed = true\n//  private let mModelEvent = EBModelEvent ()\n\n  //····················································································································\n\n/*  override init () {\n    super.init ()\n    self.mModelEvent.mEventCallBack = { [weak self] in self\?.computeModelArray () }\n  } */\n\n  //····················································································································\n\n  func setDataProvider (_ inProvider : EBReadOnlyAbstractArrayProperty <SUPER>\?) {\n    if self.mDataProvider !== inProvider {\n      self.mDataProvider\?.detachClient (self)\n      self.mDataProvider = inProvider\n      self.mDataProvider\?.attachClient (self)\n    }\n  }\n\n  //····················································································································\n\n  override func notifyModelDidChange () {\n    if !self.mModelArrayShouldBeComputed {\n      self.mModelArrayShouldBeComputed = true\n      DispatchQueue.main.async {\n        self.computeModelArray ()\n      }\n    }\n//    self.mModelArrayShouldBeComputed = true\n//    self.mModelEvent.observedObjectDidChange ()\n    super.notifyModelDidChange ()\n  }\n\n  //····················································································································\n\n  private final func computeModelArray () {\n    if self.mModelArrayShouldBeComputed {\n      self.mModelArrayShouldBeComputed = false\n      var newModelArray : EBReferenceArray <SUPER>\n      if let dataProvider = self.mDataProvider {\n        switch dataProvider.selection {\n        case .empty :\n          newModelArray = EBReferenceArray ()\n          self.mTransientKind = .empty\n        case .single (let v) :\n          newModelArray = EBReferenceArray (v)\n          self.mTransientKind = .single\n         case .multiple :\n          newModelArray = EBReferenceArray ()\n          self.mTransientKind = .multiple\n        }\n      }else{\n        newModelArray = EBReferenceArray ()\n        self.mTransientKind = .empty\n      }\n      var newArray = EBReferenceArray <" ;
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
  result << GALGAS_string ("To many relationship read write: ").add_operation (in_ENTITY_5F_NAME, inCompiler COMMA_SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 475)).stringValue () ;
  result << "\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\n" ;
  const enumGalgasBool test_2 = in_GENERATE_5F_CLASS_5F_ProxyArrayOf_5F_.operator_not (SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 478)).operator_and (in_GENERATE_5F_CLASS_5F_StoredArrayOf_5F_.operator_not (SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 478)) COMMA_SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 478)).operator_and (in_GENERATE_5F_CLASS_5F_PreferencesArrayOf_5F_.operator_not (SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 478)) COMMA_SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 478)).boolEnum () ;
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
  const enumGalgasBool test_3 = in_GENERATE_5F_CLASS_5F_ProxyArrayOf_5F_.operator_not (SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 495)).boolEnum () ;
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
  result << GALGAS_string ("Stored Array: ").add_operation (in_ENTITY_5F_NAME, inCompiler COMMA_SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 570)).stringValue () ;
  result << "\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\n" ;
  const enumGalgasBool test_4 = in_GENERATE_5F_CLASS_5F_StoredArrayOf_5F_.operator_not (SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 573)).boolEnum () ;
  if (kBoolTrue == test_4) {
    result << "// StoredArrayOf_" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << " is useless.\n" ;
  }else if (kBoolFalse == test_4) {
    result << "class StoredArrayOf_" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << " : ReadWriteArrayOf_" ;
    result << in_ENTITY_5F_NAME.stringValue () ;
    result << ", EBSignatureObserverProtocol, EBDocumentStorablePropertyAndRelationshipProtocol {\n\n  //····················································································································\n\n  init (usedForSignature inUsedForSignature : Bool, key inKey : String\?) {\n    self.mUsedForSignature = inUsedForSignature\n    self.mKey = inKey\n    super.init ()\n  }\n\n  //····················································································································\n  \n  private final let mKey : String\?\n  final var key : String\? { return self.mKey }\n  \n  //····················································································································\n\n  func initialize (fromDictionary inDictionary : [String : Any],\n                   managedObjectArray inManagedObjectArray : [EBManagedObject]) {\n    if let key = self.mKey, let objectSavingIndexArray = inDictionary [key] as\? [Int] {\n      var objectArray = EBReferenceArray <" ;
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
  result << GALGAS_string ("Preferences array: ").add_operation (in_ENTITY_5F_NAME, inCompiler COMMA_SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 805)).stringValue () ;
  result << "\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\n" ;
  const enumGalgasBool test_8 = in_GENERATE_5F_CLASS_5F_PreferencesArrayOf_5F_.operator_not (SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 808)).boolEnum () ;
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
    GALGAS_uint index_35773_ (0) ;
    if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
      cEnumerator_atomicPropertyGenerationList enumerator_35773 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
      while (enumerator_35773.hasCurrentObject ()) {
        result << "    toMany_" ;
        result << enumerator_35773.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << "_StartsBeingObserved (by: self.mObserverForWritingPreferences)\n" ;
        index_35773_.increment () ;
        enumerator_35773.gotoNextObject () ;
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
  result << " : EBReadOnlyAbstractObjectProperty <" ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << "> {\n\n  //····················································································································\n\n  override func notifyModelDidChangeFrom (oldValue inOldValue : " ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << "\?) {\n    super.notifyModelDidChangeFrom (oldValue: inOldValue)\n  //--- Remove observers from removed objects\n" ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.getter_count (SOURCE_FILE ("entity-toone.swift.galgasTemplate", 18)).add_operation (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.getter_count (SOURCE_FILE ("entity-toone.swift.galgasTemplate", 18)), inCompiler COMMA_SOURCE_FILE ("entity-toone.swift.galgasTemplate", 18)).add_operation (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION.getter_count (SOURCE_FILE ("entity-toone.swift.galgasTemplate", 18)), inCompiler COMMA_SOURCE_FILE ("entity-toone.swift.galgasTemplate", 18)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "    if let oldValue = inOldValue {\n" ;
    GALGAS_uint index_1261_ (0) ;
    if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
      cEnumerator_atomicPropertyGenerationList enumerator_1261 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
      while (enumerator_1261.hasCurrentObject ()) {
        result << "      oldValue." ;
        result << enumerator_1261.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << "_property.stopsBeingObserved (by: self." ;
        result << enumerator_1261.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << "_property) // Stored property\n" ;
        index_1261_.increment () ;
        enumerator_1261.gotoNextObject () ;
      }
    }
    GALGAS_uint index_1463_ (0) ;
    if (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
      cEnumerator_transientPropertyGenerationList enumerator_1463 (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kENUMERATION_UP) ;
      while (enumerator_1463.hasCurrentObject ()) {
        result << "      oldValue." ;
        result << enumerator_1463.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << "_property.stopsBeingObserved (by: self." ;
        result << enumerator_1463.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << "_property) // Transient property\n" ;
        index_1463_.increment () ;
        enumerator_1463.gotoNextObject () ;
      }
    }
    GALGAS_uint index_1676_ (0) ;
    if (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
      cEnumerator_computedPropertyGenerationList enumerator_1676 (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kENUMERATION_UP) ;
      while (enumerator_1676.hasCurrentObject ()) {
        result << "      oldValue." ;
        result << enumerator_1676.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << "_property.stopsBeingObserved (by: self." ;
        result << enumerator_1676.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << "_property) // Computed property\n" ;
        index_1676_.increment () ;
        enumerator_1676.gotoNextObject () ;
      }
    }
    GALGAS_uint index_1872_ (0) ;
    if (in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST.isValid ()) {
      cEnumerator_toManyPropertyGenerationList enumerator_1872 (in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_1872.hasCurrentObject ()) {
        result << "      if let relay = self.mObserversOf_" ;
        result << enumerator_1872.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << " { // to Many\n        oldValue." ;
        result << enumerator_1872.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << "_property.stopsBeingObserved (by: relay)\n      }\n" ;
        index_1872_.increment () ;
        enumerator_1872.gotoNextObject () ;
      }
    }
    result << "    }\n" ;
  }else if (kBoolFalse == test_0) {
  }
  result << "  //--- Add observers to added objects\n" ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.getter_count (SOURCE_FILE ("entity-toone.swift.galgasTemplate", 37)).add_operation (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.getter_count (SOURCE_FILE ("entity-toone.swift.galgasTemplate", 37)), inCompiler COMMA_SOURCE_FILE ("entity-toone.swift.galgasTemplate", 37)).add_operation (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION.getter_count (SOURCE_FILE ("entity-toone.swift.galgasTemplate", 37)), inCompiler COMMA_SOURCE_FILE ("entity-toone.swift.galgasTemplate", 37)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "    if let newValue = self.mWeakInternalValue {\n" ;
    GALGAS_uint index_2397_ (0) ;
    if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
      cEnumerator_atomicPropertyGenerationList enumerator_2397 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
      while (enumerator_2397.hasCurrentObject ()) {
        result << "      newValue." ;
        result << enumerator_2397.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << "_property.startsBeingObserved (by: self." ;
        result << enumerator_2397.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << "_property) // Stored property\n" ;
        index_2397_.increment () ;
        enumerator_2397.gotoNextObject () ;
      }
    }
    GALGAS_uint index_2600_ (0) ;
    if (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
      cEnumerator_transientPropertyGenerationList enumerator_2600 (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kENUMERATION_UP) ;
      while (enumerator_2600.hasCurrentObject ()) {
        result << "      newValue." ;
        result << enumerator_2600.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << "_property.startsBeingObserved (by: self." ;
        result << enumerator_2600.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << "_property) // Transient property\n" ;
        index_2600_.increment () ;
        enumerator_2600.gotoNextObject () ;
      }
    }
    GALGAS_uint index_2814_ (0) ;
    if (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
      cEnumerator_computedPropertyGenerationList enumerator_2814 (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kENUMERATION_UP) ;
      while (enumerator_2814.hasCurrentObject ()) {
        result << "      newValue." ;
        result << enumerator_2814.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << "_property.startsBeingObserved (by: self." ;
        result << enumerator_2814.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << "_property) // Computed property\n" ;
        index_2814_.increment () ;
        enumerator_2814.gotoNextObject () ;
      }
    }
    GALGAS_uint index_3011_ (0) ;
    if (in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST.isValid ()) {
      cEnumerator_toManyPropertyGenerationList enumerator_3011 (in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_3011.hasCurrentObject ()) {
        result << "      if let relay = self.mObserversOf_" ;
        result << enumerator_3011.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << " { // to Many\n        newValue." ;
        result << enumerator_3011.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
        result << "_property.startsBeingObserved (by: relay)\n      }\n" ;
        index_3011_.increment () ;
        enumerator_3011.gotoNextObject () ;
      }
    }
    result << "    }\n" ;
  }else if (kBoolFalse == test_1) {
  }
  result << "  }\n\n" ;
  GALGAS_uint index_3292_ (0) ;
  if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_atomicPropertyGenerationList enumerator_3292 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_3292.hasCurrentObject ()) {
      result << "  //····················································································································\n  //   Observers of '" ;
      result << enumerator_3292.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "' stored property\n  //····················································································································\n\n  final let " ;
      result << enumerator_3292.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_property = EBTransientProperty <" ;
      result << extensionGetter_swiftTypeName (enumerator_3292.current_mProperty (HERE).readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("entity-toone.swift.galgasTemplate", 64)).stringValue () ;
      result << "\?> ()\n\n" ;
      index_3292_.increment () ;
      enumerator_3292.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3776_ (0) ;
  if (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    cEnumerator_transientPropertyGenerationList enumerator_3776 (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kENUMERATION_UP) ;
    while (enumerator_3776.hasCurrentObject ()) {
      result << "  //····················································································································\n  //   Observers of '" ;
      result << enumerator_3776.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "' transient property\n  //····················································································································\n\n  final let " ;
      result << enumerator_3776.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_property = EBTransientProperty <" ;
      result << extensionGetter_swiftTypeName (enumerator_3776.current_mProperty (HERE).readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("entity-toone.swift.galgasTemplate", 73)).stringValue () ;
      result << "\?> ()\n\n" ;
      index_3776_.increment () ;
      enumerator_3776.gotoNextObject () ;
    }
  }
  GALGAS_uint index_4270_ (0) ;
  if (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    cEnumerator_computedPropertyGenerationList enumerator_4270 (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kENUMERATION_UP) ;
    while (enumerator_4270.hasCurrentObject ()) {
      result << "  //····················································································································\n  //   Observers of '" ;
      result << enumerator_4270.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "' computed property\n  //····················································································································\n\n  final let " ;
      result << enumerator_4270.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_property = EBTransientProperty <" ;
      result << extensionGetter_swiftTypeName (enumerator_4270.current_mProperty (HERE).readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("entity-toone.swift.galgasTemplate", 82)).stringValue () ;
      result << "\?> ()\n\n" ;
      index_4270_.increment () ;
      enumerator_4270.gotoNextObject () ;
    }
  }
  GALGAS_uint index_4747_ (0) ;
  if (in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST.isValid ()) {
    cEnumerator_toManyPropertyGenerationList enumerator_4747 (in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4747.hasCurrentObject ()) {
      result << "  //····················································································································\n  //   Observable toMany property: " ;
      result << enumerator_4747.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "\n  //····················································································································\n\n  private final var mObserversOf_" ;
      result << enumerator_4747.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " : EBObservedObserver\? = nil\n\n  //····················································································································\n\n  final func toMany_" ;
      result << enumerator_4747.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_StartsBeingObserved (by inObserver : EBObserverProtocol) {\n    let relay : EBObservedObserver\n    if let r = self.mObserversOf_" ;
      result << enumerator_4747.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " {\n      relay = r\n    }else{\n      relay = EBObservedObserver ()\n      self.mWeakInternalValue\?." ;
      result << enumerator_4747.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_property.startsBeingObserved (by: relay)\n      self.mObserversOf_" ;
      result << enumerator_4747.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " = relay\n    }\n    relay.startsBeingObserved (by: inObserver)\n  }\n\n  //····················································································································\n\n  final func toMany_" ;
      result << enumerator_4747.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_StopsBeingObserved (by inObserver : EBObserverProtocol) {\n    self.mObserversOf_" ;
      result << enumerator_4747.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "\?.stopsBeingObserved (by: inObserver)\n  }\n\n" ;
      index_4747_.increment () ;
      enumerator_4747.gotoNextObject () ;
    }
  }
  result << "  //····················································································································\n  //   INIT\n  //····················································································································\n\n  override init () {\n    super.init ()\n" ;
  GALGAS_uint index_6554_ (0) ;
  if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_atomicPropertyGenerationList enumerator_6554 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_6554.hasCurrentObject ()) {
      result << "  //--- Configure " ;
      result << enumerator_6554.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " simple stored property\n    self." ;
      result << enumerator_6554.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_property.mReadModelFunction = { [weak self] in\n      return self\?.mWeakInternalValue\?." ;
      result << enumerator_6554.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_property.optionalSelection \?\? .single (nil)\n    }\n" ;
      index_6554_.increment () ;
      enumerator_6554.gotoNextObject () ;
    }
  }
  GALGAS_uint index_6897_ (0) ;
  if (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    cEnumerator_transientPropertyGenerationList enumerator_6897 (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kENUMERATION_UP) ;
    while (enumerator_6897.hasCurrentObject ()) {
      result << "  //--- Configure " ;
      result << enumerator_6897.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " transient property\n    self." ;
      result << enumerator_6897.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_property.mReadModelFunction = { [weak self] in\n      return self\?.mWeakInternalValue\?." ;
      result << enumerator_6897.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_property.optionalSelection \?\? .single (nil)\n    }\n" ;
      index_6897_.increment () ;
      enumerator_6897.gotoNextObject () ;
    }
  }
  GALGAS_uint index_7244_ (0) ;
  if (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    cEnumerator_computedPropertyGenerationList enumerator_7244 (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION, kENUMERATION_UP) ;
    while (enumerator_7244.hasCurrentObject ()) {
      result << "  //--- Configure " ;
      result << enumerator_7244.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << " computed property\n    self." ;
      result << enumerator_7244.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_property.mReadModelFunction = { [weak self] in\n      return self\?.mWeakInternalValue\?." ;
      result << enumerator_7244.current_mProperty (HERE).readProperty_mPropertyName ().stringValue () ;
      result << "_property.optionalSelection \?\? .single (nil)\n    }\n" ;
      index_7244_.increment () ;
      enumerator_7244.gotoNextObject () ;
    }
  }
  result << "  }\n\n  //····················································································································\n\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n//    StoredObject_" ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << "\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nfinal class StoredObject_" ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << " : ReadOnlyObject_" ;
  result << in_ENTITY_5F_NAME.stringValue () ;
  result << ", EBSignatureObserverProtocol, EBDocumentStorablePropertyAndRelationshipProtocol {\n\n //····················································································································\n\n  init (usedForSignature inUsedForSignature : Bool, strongRef inStrongReference : Bool, key inKey : String\?) {\n    self.mUsedForSignature = inUsedForSignature\n    self.mIsStrongReference = inStrongReference\n    self.mKey = inKey\n    super.init ()\n  }\n\n  //····················································································································\n\n  private let mKey : String\?\n  var key : String\? { return self.mKey }\n  \n  //····················································································································\n\n  func initialize (fromDictionary inDictionary : [String : Any],\n                   managedObjectArray inManagedObjectArray : [EBManagedObject]) {\n    if let key = self.mKey, let objectSavingIndex = inDictionary [key] as\? Int {\n      let object = inManagedObjectArray [objectSavingIndex] as! " ;
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
  result << "\? > {\n    if let object = self.mWeakInternalValue {\n      return .single (object)\n    }else{\n      return .empty\n    }\n  }\n\n  //····················································································································\n\n  var propval : " ;
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
  result << "//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nimport AppKit\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\nfileprivate let kEntityDictionary : [String : EBManagedObject.Type] = [\n" ;
  GALGAS_uint index_570_ (0) ;
  if (in_ENTITY_5F_LIST.isValid ()) {
    cEnumerator_entityListForGeneratingEBManagedObjectContext enumerator_570 (in_ENTITY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_570.hasCurrentObject ()) {
      result << "  \"" ;
      result << enumerator_570.current_mEntityName (HERE).stringValue () ;
      result << "\" : " ;
      result << enumerator_570.current_mEntityName (HERE).stringValue () ;
      result << ".self" ;
      GALGAS_uint index_657_ (0) ;
      if (enumerator_570.current_mObsoleteEntityNames (HERE).isValid ()) {
        cEnumerator_lstringlist enumerator_657 (enumerator_570.current_mObsoleteEntityNames (HERE), kENUMERATION_UP) ;
        while (enumerator_657.hasCurrentObject ()) {
          result << ",\n  \"" ;
          result << enumerator_657.current_mValue (HERE).readProperty_string ().stringValue () ;
          result << "\" : " ;
          result << enumerator_570.current_mEntityName (HERE).stringValue () ;
          result << ".self" ;
          index_657_.increment () ;
          enumerator_657.gotoNextObject () ;
        }
      }
      if (enumerator_570.hasNextObject ()) {
        result << ",\n" ;
      }
      index_570_.increment () ;
      enumerator_570.gotoNextObject () ;
    }
  }
  result << "\n]\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n//  newInstanceOfEntityNamed\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\n@MainActor func newInstanceOfEntityNamed (_ inUndoManager : UndoManager\?,\n                                          _ inEntityTypeName : String) -> EBManagedObject {\n  let T = kEntityDictionary [inEntityTypeName]!\n  return T.init (inUndoManager)\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n//   makeManagedObjectFromDictionary\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\n@MainActor func makeManagedObjectFromDictionary (_ inUndoManager : UndoManager\?,\n                                                 _ inDictionary : [String : Any]) -> EBManagedObject {\n  let entityName = inDictionary [ENTITY_KEY] as! String\n  let object = newInstanceOfEntityNamed (inUndoManager, entityName)\n  object.setUpProperties (withDictionary: inDictionary, managedObjectArray: [])\n  return object\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n" ;
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
  GALGAS_actionMap var_actionMap_5556 ;
  {
  const GALGAS_autoLayoutDocumentDeclarationAST temp_0 = this ;
  routine_buildActionMap (temp_0.readProperty_mActionDeclarationList (), var_actionMap_5556, inCompiler  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 146)) ;
  }
  {
  const GALGAS_autoLayoutDocumentDeclarationAST temp_1 = this ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (temp_1.readProperty_mClassName (), GALGAS_classKind::constructor_document (temp_2.readProperty_mRootEntityName ()  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 149)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("document-auto-layout.ggs", 149)), var_actionMap_5556, GALGAS_propertyGenerationList::constructor_emptyList (SOURCE_FILE ("document-auto-layout.ggs", 151)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 147)) ;
  }
  cEnumerator_actionMap enumerator_5728 (var_actionMap_5556, kENUMERATION_UP) ;
  while (enumerator_5728.hasCurrentObject ()) {
    const GALGAS_autoLayoutDocumentDeclarationAST temp_3 = this ;
    ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_actionFileGeneration::constructor_new (temp_3.readProperty_mClassName ().readProperty_string (), enumerator_5728.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 155))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 155)) ;
    enumerator_5728.gotoNextObject () ;
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
  GALGAS_propertyMap var_preferencesPropertyMap_6257 ;
  GALGAS_classKind joker_6244 ; // Joker input parameter
  GALGAS_actionMap joker_6285_2 ; // Joker input parameter
  GALGAS_propertyGenerationList joker_6285_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 169)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("document-auto-layout.ggs", 169))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 169)), joker_6244, var_preferencesPropertyMap_6257, joker_6285_2, joker_6285_1, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 168)) ;
  GALGAS_propertyMap var_documentPropertyMap_6421 ;
  GALGAS_actionMap var_documentActionMap_6451 ;
  GALGAS_propertyGenerationList var_documentPropertyGenerationList_6479 ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_0 = this ;
  GALGAS_classKind joker_6408 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (GALGAS_lstring::constructor_new (temp_0.readProperty_mClassName ().readProperty_string (), GALGAS_location::constructor_nowhere (SOURCE_FILE ("document-auto-layout.ggs", 176))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 176)), joker_6408, var_documentPropertyMap_6421, var_documentActionMap_6451, var_documentPropertyGenerationList_6479, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 175)) ;
  GALGAS_propertyMap var_rootPropertyMap_6632 ;
  GALGAS_actionMap var_rootActionMap_6665 ;
  GALGAS_propertyGenerationList var_rootPropertyGenerationList_6696 ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_1 = this ;
  GALGAS_classKind joker_6619 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mRootEntityName (), joker_6619, var_rootPropertyMap_6632, var_rootActionMap_6665, var_rootPropertyGenerationList_6696, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 183)) ;
  GALGAS_regularBindingsGenerationList var_regularBindingsGenerationList_7058 ;
  GALGAS_multipleBindingGenerationList var_multipleBindingGenerationList_7125 ;
  GALGAS_actionBindingListForGeneration var_actionBindingListForGeneration_7197 ;
  GALGAS_decoratedOutletMap var_outletMap_7258 ;
  GALGAS_tableViewBindingGenerationList var_tableViewBindingGenerationList_7310 ;
  GALGAS_ebViewGraphicControllerBindingGenerationList var_ebViewGraphicControllerBindingGenerationList_7397 ;
  {
  const GALGAS_autoLayoutDocumentDeclarationAST temp_2 = this ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_3 = this ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_4 = this ;
  routine_analyzeOutlets (GALGAS_bool (false), var_rootPropertyMap_6632, var_preferencesPropertyMap_6257, temp_2.readProperty_mRootEntityName ().readProperty_string (), ioArgument_ioSemanticContext, temp_3.readProperty_mOutletDeclarationList (), var_documentPropertyMap_6421, var_documentActionMap_6451, temp_4.readProperty_mClassName ().readProperty_string (), ioArgument_ioGeneration, var_regularBindingsGenerationList_7058, var_multipleBindingGenerationList_7125, var_actionBindingListForGeneration_7197, var_outletMap_7258, var_tableViewBindingGenerationList_7310, var_ebViewGraphicControllerBindingGenerationList_7397, inCompiler  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 191)) ;
  }
  const GALGAS_autoLayoutDocumentDeclarationAST temp_5 = this ;
  cEnumerator_arrayControllerBindingListAST enumerator_7501 (temp_5.readProperty_mArrayControllerBindingListAST (), kENUMERATION_UP) ;
  while (enumerator_7501.hasCurrentObject ()) {
    switch (enumerator_7501.current_mHiddenSelectionViewBindingDescriptor (HERE).enumValue ()) {
    case GALGAS_multipleBindingDescriptor::kNotBuilt:
      break ;
    case GALGAS_multipleBindingDescriptor::kEnum_noBinding:
      {
      }
      break ;
    case GALGAS_multipleBindingDescriptor::kEnum_binding:
      {
        const cEnumAssociatedValues_multipleBindingDescriptor_binding * extractPtr_8247 = (const cEnumAssociatedValues_multipleBindingDescriptor_binding *) (enumerator_7501.current_mHiddenSelectionViewBindingDescriptor (HERE).unsafePointer ()) ;
        const GALGAS_abstractBooleanMultipleBindingExpressionAST extractedValue_7681_expression = extractPtr_8247->mAssociatedValue0 ;
        GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_7953 ;
        GALGAS_typeKind var_type_7994 ;
        GALGAS_location var_errorLocation_8023 ;
        callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_7681_expression.ptr (), GALGAS_bool (false), var_rootPropertyMap_6632, ioArgument_ioSemanticContext, var_documentPropertyMap_6421, var_preferencesPropertyMap_6257, var_hiddenExpression_7953, var_type_7994, var_errorLocation_8023, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 215)) ;
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = var_type_7994.getter_isBoolType (SOURCE_FILE ("document-auto-layout.ggs", 225)).operator_not (SOURCE_FILE ("document-auto-layout.ggs", 225)).boolEnum () ;
          if (kBoolTrue == test_6) {
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (var_errorLocation_8023, GALGAS_string ("expression is not boolean"), fixItArray7  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 226)) ;
          }
        }
        var_multipleBindingGenerationList_7125.addAssign_operation (enumerator_7501.current_mControllerName (HERE).readProperty_string (), GALGAS_string ("hidden"), var_hiddenExpression_7953  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 228)) ;
      }
      break ;
    }
    enumerator_7501.gotoNextObject () ;
  }
  GALGAS_autoLayoutViewDeclarationMap var_viewDeclarationMap_8355 = GALGAS_autoLayoutViewDeclarationMap::constructor_emptyMap (SOURCE_FILE ("document-auto-layout.ggs", 235)) ;
  GALGAS_viewGenerationList var_viewGenerationList_8405 = GALGAS_viewGenerationList::constructor_emptyList (SOURCE_FILE ("document-auto-layout.ggs", 236)) ;
  GALGAS_implicitViewFunctionGenerationList var_implicitViewFunctionGenerationList_8471 = GALGAS_implicitViewFunctionGenerationList::constructor_emptyList (SOURCE_FILE ("document-auto-layout.ggs", 237)) ;
  GALGAS_autoLayoutConfiguratorMap var_configuratorMap_8544 = GALGAS_autoLayoutConfiguratorMap::constructor_emptyMap (SOURCE_FILE ("document-auto-layout.ggs", 238)) ;
  GALGAS_autoLayoutOutletMap var_autoLayoutOutletMap_8592 = GALGAS_autoLayoutOutletMap::constructor_emptyMap (SOURCE_FILE ("document-auto-layout.ggs", 239)) ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_8 = this ;
  cEnumerator_astViewDeclarationList enumerator_8633 (temp_8.readProperty_mViewDeclarationList (), kENUMERATION_UP) ;
  while (enumerator_8633.hasCurrentObject ()) {
    {
    var_viewDeclarationMap_8355.setter_insertKey (enumerator_8633.current_mViewName (HERE), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 241)) ;
    }
    GALGAS_abstractViewGeneration var_viewGeneration_9119 ;
    const GALGAS_autoLayoutDocumentDeclarationAST temp_9 = this ;
    callExtensionMethod_checkView ((cPtr_astAbstractViewDeclaration *) enumerator_8633.current_mView (HERE).ptr (), enumerator_8633.current_mViewName (HERE).readProperty_string (), var_viewDeclarationMap_8355, GALGAS_bool (false), var_rootPropertyMap_6632, var_preferencesPropertyMap_6257, ioArgument_ioSemanticContext, var_documentPropertyMap_6421, var_documentActionMap_6451, temp_9.readProperty_mClassName ().readProperty_string (), ioArgument_ioSemanticContext.readProperty_mClassMap (), var_implicitViewFunctionGenerationList_8471, var_configuratorMap_8544, var_autoLayoutOutletMap_8592, var_viewGeneration_9119, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 242)) ;
    var_viewGenerationList_8405.addAssign_operation (enumerator_8633.current_mViewName (HERE).readProperty_string (), var_viewGeneration_9119  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 258)) ;
    enumerator_8633.gotoNextObject () ;
  }
  const GALGAS_autoLayoutDocumentDeclarationAST temp_10 = this ;
  var_viewDeclarationMap_8355.method_searchKey (temp_10.readProperty_mMainViewName (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 260)) ;
  ioArgument_ioGeneration.setter_setMGenerateEBManagedAutoLayoutDocumentSwift (GALGAS_bool (true) COMMA_SOURCE_FILE ("document-auto-layout.ggs", 287)) ;
  GALGAS_autoLayoutOutletLinkerGenerationList var_outletLinkerGenerationList_10314 = GALGAS_autoLayoutOutletLinkerGenerationList::constructor_emptyList (SOURCE_FILE ("document-auto-layout.ggs", 289)) ;
  GALGAS_stringset var_linkerNameSet_10363 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("document-auto-layout.ggs", 290)) ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_11 = this ;
  cEnumerator_astAutoLayoutOutletLinkerList enumerator_10400 (temp_11.readProperty_mOutletLinkerList (), kENUMERATION_UP) ;
  while (enumerator_10400.hasCurrentObject ()) {
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = var_linkerNameSet_10363.getter_hasKey (enumerator_10400.current_mLinkerName (HERE).readProperty_string () COMMA_SOURCE_FILE ("document-auto-layout.ggs", 292)).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_10400.current_mLinkerName (HERE).readProperty_location (), GALGAS_string ("duplicated linker name"), fixItArray13  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 293)) ;
      }
    }
    var_linkerNameSet_10363.addAssign_operation (enumerator_10400.current_mLinkerName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 295)) ;
    GALGAS__32_stringlist var_outletNameAndTypeNameList_10616 = GALGAS__32_stringlist::constructor_emptyList (SOURCE_FILE ("document-auto-layout.ggs", 296)) ;
    cEnumerator_lstringlist enumerator_10656 (enumerator_10400.current_mOutletNameList (HERE), kENUMERATION_UP) ;
    while (enumerator_10656.hasCurrentObject ()) {
      GALGAS_string var_outletTypeName_10742 ;
      GALGAS_bool var_outletIsArray_10770 ;
      var_autoLayoutOutletMap_8592.method_searchKey (enumerator_10656.current_mValue (HERE), var_outletTypeName_10742, var_outletIsArray_10770, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 298)) ;
      var_outletNameAndTypeNameList_10616.addAssign_operation (enumerator_10656.current_mValue (HERE).readProperty_string (), var_outletTypeName_10742  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 299)) ;
      enumerator_10656.gotoNextObject () ;
    }
    var_outletLinkerGenerationList_10314.addAssign_operation (enumerator_10400.current_mLinkerName (HERE).readProperty_string (), var_outletNameAndTypeNameList_10616  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 301)) ;
    enumerator_10400.gotoNextObject () ;
  }
  const GALGAS_autoLayoutDocumentDeclarationAST temp_14 = this ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_15 = this ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_16 = this ;
  const GALGAS_autoLayoutDocumentDeclarationAST temp_17 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_autoLayoutDocumentFileGeneration::constructor_new (temp_14.readProperty_mClassName ().readProperty_string (), temp_15.readProperty_mRootEntityName ().readProperty_string (), temp_16.readProperty_mMainViewName ().readProperty_string (), var_documentPropertyGenerationList_6479, var_outletMap_7258, var_autoLayoutOutletMap_8592, var_actionBindingListForGeneration_7197, var_regularBindingsGenerationList_7058, var_multipleBindingGenerationList_7125, var_tableViewBindingGenerationList_7310, var_ebViewGraphicControllerBindingGenerationList_7397, var_viewGenerationList_8405, var_implicitViewFunctionGenerationList_8471, var_configuratorMap_8544, temp_17.readProperty_mCustomSuperClassName (), var_outletLinkerGenerationList_10314  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 304))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 304)) ;
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
  GALGAS_string var_s_13836 = GALGAS_string (filewrapperTemplate_autoLayoutDocumentGenerationTemplate_documentImplementation (inCompiler, temp_0.readProperty_mDocumentName (), temp_1.readProperty_mRootEntityName (), temp_2.readProperty_mMainViewName (), temp_3.readProperty_mDocumentPropertyGenearionList (), temp_4.readProperty_mOutletMap (), temp_5.readProperty_mAutoLayoutOutletMap (), temp_6.readProperty_mTargetActionList (), temp_7.readProperty_mRegularBindingsGenerationList (), temp_8.readProperty_multipleBindingGenerationList (), temp_9.readProperty_mTableViewBindingGenerationList (), temp_10.readProperty_mEBViewBindingGenerationList (), temp_11.readProperty_mViewDeclarationList (), temp_12.readProperty_mImplicitViewFunctionGenerationList (), temp_14, temp_17.readProperty_mOutletLinkerGenerationList () COMMA_SOURCE_FILE ("document-auto-layout.ggs", 367))) ;
  const GALGAS_autoLayoutDocumentFileGeneration temp_18 = this ;
  GALGAS_string var_fileName_14507 = GALGAS_string ("document-").add_operation (temp_18.readProperty_mDocumentName (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 384)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 384)) ;
  ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_14507  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 385)) ;
  {
  GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_14507, var_s_13836, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 386)) ;
  }
  const GALGAS_autoLayoutDocumentFileGeneration temp_19 = this ;
  cEnumerator_autoLayoutConfiguratorMap enumerator_14686 (temp_19.readProperty_mConfiguratorMap (), kENUMERATION_UP) ;
  while (enumerator_14686.hasCurrentObject ()) {
    const GALGAS_autoLayoutDocumentFileGeneration temp_20 = this ;
    GALGAS_string var_s_14738 = GALGAS_string (filewrapperTemplate_autoLayoutDocumentGenerationTemplate_documentOutletConfiguratorImplementation (inCompiler, temp_20.readProperty_mDocumentName (), enumerator_14686.current_lkey (HERE).readProperty_string (), enumerator_14686.current_mAutoLayoutOutletTypeName (HERE) COMMA_SOURCE_FILE ("document-auto-layout.ggs", 392))) ;
    GALGAS_string var_header_14920 = GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 397)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 397)).add_operation (GALGAS_string ("\n//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n//"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 397)).add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 399)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 399)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 399)).add_operation (GALGAS_string ("import AppKit\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 399)).add_operation (GALGAS_string ("//"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 400)).add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 401)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 401)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 401)) ;
    const GALGAS_autoLayoutDocumentFileGeneration temp_21 = this ;
    GALGAS_string var_fileName_15265 = GALGAS_string ("configurator-").add_operation (temp_21.readProperty_mDocumentName (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 402)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 402)).add_operation (enumerator_14686.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 402)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 402)) ;
    ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_15265  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 403)) ;
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_15265, GALGAS_string ("//"), var_header_14920, GALGAS_string ("\n\n"), var_s_14738, GALGAS_string ("INSERT CONFIGURATION CODE\n"), GALGAS_string ("  }\n}\n\n//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 412)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 412)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 412)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 404)) ;
    }
    enumerator_14686.gotoNextObject () ;
  }
  const GALGAS_autoLayoutDocumentFileGeneration temp_22 = this ;
  cEnumerator_autoLayoutOutletLinkerGenerationList enumerator_15835 (temp_22.readProperty_mOutletLinkerGenerationList (), kENUMERATION_UP) ;
  while (enumerator_15835.hasCurrentObject ()) {
    const GALGAS_autoLayoutDocumentFileGeneration temp_23 = this ;
    GALGAS_string var_s_15909 = GALGAS_string (filewrapperTemplate_autoLayoutDocumentGenerationTemplate_outletLinkerImplementation (inCompiler, temp_23.readProperty_mDocumentName (), enumerator_15835.current_mLinkerName (HERE), enumerator_15835.current_mOutletNameAndTypeNameList (HERE) COMMA_SOURCE_FILE ("document-auto-layout.ggs", 417))) ;
    GALGAS_string var_header_16081 = GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 422)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 422)).add_operation (GALGAS_string ("\n//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n//"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 422)).add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 424)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 424)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 424)).add_operation (GALGAS_string ("import AppKit\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 424)).add_operation (GALGAS_string ("//"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 425)).add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 426)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 426)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 426)) ;
    const GALGAS_autoLayoutDocumentFileGeneration temp_24 = this ;
    GALGAS_string var_fileName_16426 = GALGAS_string ("linker-").add_operation (temp_24.readProperty_mDocumentName (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 427)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 427)).add_operation (enumerator_15835.current_mLinkerName (HERE), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 427)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 427)) ;
    ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_16426  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 428)) ;
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_16426, GALGAS_string ("//"), var_header_16081, GALGAS_string ("\n\n"), var_s_15909, GALGAS_string ("INSERT CONFIGURATION CODE\n"), GALGAS_string ("  }\n}\n\n//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 437)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 437)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 437)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 429)) ;
    }
    enumerator_15835.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'autoLayoutDocumentGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of 'indexes' directory

static const cRegularFileWrapper * gWrapperAllFiles_autoLayoutDocumentGenerationTemplate_4 [1] = {
  nullptr
} ;

//--- All sub-directories of 'indexes' directory

static const cDirectoryWrapper * gWrapperAllDirectories_autoLayoutDocumentGenerationTemplate_4 [1] = {
  nullptr
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
  nullptr
} ;

//--- All sub-directories of 'build' directory

static const cDirectoryWrapper * gWrapperAllDirectories_autoLayoutDocumentGenerationTemplate_3 [2] = {
  & gWrapperDirectory_4_autoLayoutDocumentGenerationTemplate,
  nullptr
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
  nullptr
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_autoLayoutDocumentGenerationTemplate_5 [1] = {
  nullptr
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
  nullptr
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_autoLayoutDocumentGenerationTemplate_1 [1] = {
  nullptr
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
  nullptr
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_autoLayoutDocumentGenerationTemplate_2 [1] = {
  nullptr
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
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_autoLayoutDocumentGenerationTemplate_0 [5] = {
  & gWrapperDirectory_3_autoLayoutDocumentGenerationTemplate,
  & gWrapperDirectory_5_autoLayoutDocumentGenerationTemplate,
  & gWrapperDirectory_1_autoLayoutDocumentGenerationTemplate,
  & gWrapperDirectory_2_autoLayoutDocumentGenerationTemplate,
  nullptr
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
  GALGAS_uint index_581_ (0) ;
  if (in_DOCUMENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_581 (in_DOCUMENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_581.hasCurrentObject ()) {
      result << callExtensionGetter_propertyDeclarationCode ((const cPtr_propertyGeneration *) enumerator_581.current_mProperty (HERE).ptr (), GALGAS_bool (false), GALGAS_bool (true), GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 13)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 13)).stringValue () ;
      index_581_.increment () ;
      enumerator_581.gotoNextObject () ;
    }
  }
  result << "  //····················································································································\n  //    Outlets\n  //····················································································································\n\n" ;
  GALGAS_uint index_1001_ (0) ;
  if (in_AUTO_5F_LAYOUT_5F_OUTLET_5F_MAP.isValid ()) {
    cEnumerator_autoLayoutOutletMap enumerator_1001 (in_AUTO_5F_LAYOUT_5F_OUTLET_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1001.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_1001.current_mOutletIsArray (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "  final var " ;
        result << enumerator_1001.current_lkey (HERE).readProperty_string ().stringValue () ;
        result << " = EBWeakReferenceArray <AutoLayout" ;
        result << enumerator_1001.current_mAutoLayoutOutletTypeName (HERE).stringValue () ;
        result << "> ()\n" ;
      }else if (kBoolFalse == test_0) {
        result << "  weak final var " ;
        result << enumerator_1001.current_lkey (HERE).readProperty_string ().stringValue () ;
        result << " : AutoLayout" ;
        result << enumerator_1001.current_mAutoLayoutOutletTypeName (HERE).stringValue () ;
        result << "\? = nil\n" ;
      }
      index_1001_.increment () ;
      enumerator_1001.gotoNextObject () ;
    }
  }
  result << "\n  //····················································································································\n  //    Outlets\n  //····················································································································\n\n" ;
  GALGAS_uint index_1548_ (0) ;
  if (in_OUTLET_5F_GENERATION_5F_MAP.isValid ()) {
    cEnumerator_decoratedOutletMap enumerator_1548 (in_OUTLET_5F_GENERATION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1548.hasCurrentObject ()) {
      result << "  @IBOutlet final var " ;
      result << enumerator_1548.current_lkey (HERE).readProperty_string ().stringValue () ;
      result << " : " ;
      result << enumerator_1548.current_mOutletTypeName (HERE).stringValue () ;
      result << "\? = nil\n" ;
      index_1548_.increment () ;
      enumerator_1548.gotoNextObject () ;
    }
  }
  result << "\n  //····················································································································\n  //    Multiple bindings controllers\n  //····················································································································\n\n" ;
  GALGAS_uint index_1998_ (0) ;
  if (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_multipleBindingGenerationList enumerator_1998 (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1998.hasCurrentObject ()) {
      result << "//  final var mController_" ;
      result << enumerator_1998.current_mOutletName (HERE).stringValue () ;
      result << "_" ;
      result << enumerator_1998.current_mBindingName (HERE).stringValue () ;
      result << " : MultipleBindingController_" ;
      result << enumerator_1998.current_mBindingName (HERE).stringValue () ;
      result << "\? = nil\n" ;
      index_1998_.increment () ;
      enumerator_1998.gotoNextObject () ;
    }
  }
  result << "\n  //····················································································································\n  //    displayName\n  //····················································································································\n\n  override var displayName : String\? {\n    get {\n      return super.displayName\n    }\n    set {\n      super.displayName = newValue\n      self.documentFileName_property.observedObjectDidChange ()\n    }\n  }\n\n  //····················································································································\n  //    rootEntityClassName\n  //····················································································································\n\n  override final func rootEntityClassName () -> String {\n    return \"" ;
  result << in_ROOT_5F_ENTITY_5F_NAME.stringValue () ;
  result << "\"\n  }\n\n  //····················································································································\n  //    rootObject\n  //····················································································································\n\n  final var rootObject : " ;
  result << in_ROOT_5F_ENTITY_5F_NAME.stringValue () ;
  result << " { return self.mRootObject as! " ;
  result << in_ROOT_5F_ENTITY_5F_NAME.stringValue () ;
  result << " }\n\n" ;
  GALGAS_uint index_3364_ (0) ;
  if (in_VIEW_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_viewGenerationList enumerator_3364 (in_VIEW_5F_GENERATION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3364.hasCurrentObject ()) {
      result << "  //····················································································································\n  //    VIEW " ;
      result << enumerator_3364.current_mViewName (HERE).stringValue () ;
      result << "\n  //····················································································································\n\n" ;
      result << callExtensionGetter_generateViewBuilder ((const cPtr_abstractViewGeneration *) enumerator_3364.current_mView (HERE).ptr (), GALGAS_bool (false), enumerator_3364.current_mViewName (HERE), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 78)).stringValue () ;
      index_3364_.increment () ;
      enumerator_3364.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3780_idx (0) ;
  if (in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST.isValid ()) {
    cEnumerator_implicitViewFunctionGenerationList enumerator_3780 (in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3780.hasCurrentObject ()) {
      result << "  //····················································································································\n  //    IMPLICIT VIEW " ;
      result << index_3780_idx.getter_string (SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 82)).stringValue () ;
      result << "\n  //····················································································································\n\n  private final func computeImplicitView_" ;
      result << index_3780_idx.getter_string (SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 84)).stringValue () ;
      result << " () -> NSView {\n" ;
      result << callExtensionGetter_generateViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_3780.current_mInstruction (HERE).ptr (), GALGAS_bool (false), GALGAS_string ("view"), GALGAS_string ("    "), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 85)).stringValue () ;
      result << "    return view\n  }\n\n" ;
      index_3780_idx.increment () ;
      enumerator_3780.gotoNextObject () ;
    }
  }
  result << "  //····················································································································\n  //    Build User Interface\n  //····················································································································\n\n  override func ebBuildUserInterface () {\n  //--------------------------- Read documentFileName model\n    self.documentFileName_property.mReadModelFunction = { [weak self] in\n      if let r = self\?.displayName {\n        return .single (r)\n      }else{\n        return .single (\"\")\n      }\n    }\n  //--- Build window content view\n    self.configureProperties ()\n    let mainView = self." ;
  result << in_MAIN_5F_VIEW_5F_NAME.stringValue () ;
  result << " ()\n  //--- Call outlet linkers\n" ;
  GALGAS_uint index_5051_ (0) ;
  if (in_AUTO_5F_LAYOUT_5F_LINKER_5F_LIST.isValid ()) {
    cEnumerator_autoLayoutOutletLinkerGenerationList enumerator_5051 (in_AUTO_5F_LAYOUT_5F_LINKER_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5051.hasCurrentObject ()) {
      result << "    self.linker_" ;
      result << enumerator_5051.current_mLinkerName (HERE).stringValue () ;
      result << " (" ;
      GALGAS_uint index_5160_ (0) ;
      if (enumerator_5051.current_mOutletNameAndTypeNameList (HERE).isValid ()) {
        cEnumerator__32_stringlist enumerator_5160 (enumerator_5051.current_mOutletNameAndTypeNameList (HERE), kENUMERATION_UP) ;
        while (enumerator_5160.hasCurrentObject ()) {
          result << "self." ;
          result << enumerator_5160.current_mValue_30_ (HERE).stringValue () ;
          if (enumerator_5160.hasNextObject ()) {
            result << ", " ;
          }
          index_5160_.increment () ;
          enumerator_5160.gotoNextObject () ;
        }
      }
      result << ")\n" ;
      index_5051_.increment () ;
      enumerator_5051.gotoNextObject () ;
    }
  }
  result << "  //--- Assign main view to window\n    self.windowForSheet\?.contentView = AutoLayoutWindowContentView (view: mainView)\n  }\n\n  //····················································································································\n  //    configureProperties\n  //····················································································································\n\n  final private func configureProperties () {\n" ;
  GALGAS_uint index_5717_ (0) ;
  if (in_DOCUMENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_5717 (in_DOCUMENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5717.hasCurrentObject ()) {
      result << callExtensionGetter_configurationCode ((const cPtr_propertyGeneration *) enumerator_5717.current_mProperty (HERE).ptr (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 125)).stringValue () ;
      result << "\n" ;
      index_5717_.increment () ;
      enumerator_5717.gotoNextObject () ;
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
  GALGAS_uint index_255_ (0) ;
  if (in_OUTLET_5F_NAME_5F_AND_5F_TYPE_5F_NAME_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_255 (in_OUTLET_5F_NAME_5F_AND_5F_TYPE_5F_NAME_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_255.hasCurrentObject ()) {
      result << "_ in_" ;
      result << enumerator_255.current_mValue_30_ (HERE).stringValue () ;
      result << " : AutoLayout" ;
      result << enumerator_255.current_mValue_31_ (HERE).stringValue () ;
      result << "\?" ;
      if (enumerator_255.hasNextObject ()) {
        result << ", " ;
      }
      index_255_.increment () ;
      enumerator_255.gotoNextObject () ;
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

C_PrologueEpilogue gEpilogueForOnceFunction_preferencesName (nullptr,
                                                             releaseOnceFunctionResult_preferencesName) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_preferencesName [1] = {
  nullptr
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
  GALGAS_actionMap var_actionMap_4113 ;
  {
  const GALGAS_prefsDeclarationAST temp_0 = this ;
  routine_buildActionMap (temp_0.readProperty_mDeclaration ().readProperty_mActionDeclarationList (), var_actionMap_4113, inCompiler  COMMA_SOURCE_FILE ("preferences.ggs", 95)) ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 97)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("preferences.ggs", 97))  COMMA_SOURCE_FILE ("preferences.ggs", 97)), GALGAS_classKind::constructor_prefs (SOURCE_FILE ("preferences.ggs", 98)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("preferences.ggs", 98)), var_actionMap_4113, GALGAS_propertyGenerationList::constructor_emptyList (SOURCE_FILE ("preferences.ggs", 100)), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 96)) ;
  }
  cEnumerator_actionMap enumerator_4259 (var_actionMap_4113, kENUMERATION_UP) ;
  while (enumerator_4259.hasCurrentObject ()) {
    const GALGAS_prefsDeclarationAST temp_1 = this ;
    ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_actionFileGeneration::constructor_new (temp_1.readProperty_mClassName ().readProperty_string (), enumerator_4259.current_lkey (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("preferences.ggs", 104))  COMMA_SOURCE_FILE ("preferences.ggs", 104)) ;
    enumerator_4259.gotoNextObject () ;
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
  GALGAS_stringset var_availableCallers_4949 = temp_0 ;
  GALGAS_externFunctionMap var_externFunctionMap_5019 = GALGAS_externFunctionMap::constructor_emptyMap (SOURCE_FILE ("preferences.ggs", 122)) ;
  const GALGAS_prefsDeclarationAST temp_1 = this ;
  cEnumerator_externSwiftFunctionList enumerator_5074 (temp_1.readProperty_mDeclaration ().readProperty_mExternSwiftFunctionList (), kENUMERATION_UP) ;
  while (enumerator_5074.hasCurrentObject ()) {
    {
    var_externFunctionMap_5019.setter_insertKey (enumerator_5074.current_mExternSwiftFunctionName (HERE), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 124)) ;
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_availableCallers_4949.getter_hasKey (enumerator_5074.current_mCallerName (HERE).readProperty_string () COMMA_SOURCE_FILE ("preferences.ggs", 125)).operator_not (SOURCE_FILE ("preferences.ggs", 125)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_string var_s_5268 = GALGAS_string ("invalid caller; available callers:") ;
        cEnumerator_stringset enumerator_5320 (var_availableCallers_4949, kENUMERATION_UP) ;
        while (enumerator_5320.hasCurrentObject ()) {
          var_s_5268.plusAssign_operation(GALGAS_string ("\n  - ").add_operation (enumerator_5320.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 128)), inCompiler  COMMA_SOURCE_FILE ("preferences.ggs", 128)) ;
          enumerator_5320.gotoNextObject () ;
        }
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_5074.current_mCallerName (HERE).readProperty_location (), var_s_5268, fixItArray3  COMMA_SOURCE_FILE ("preferences.ggs", 130)) ;
      }
    }
    enumerator_5074.gotoNextObject () ;
  }
  GALGAS_propertyMap var_preferencesPropertyMap_5561 ;
  GALGAS_actionMap var_actionMap_5594 ;
  GALGAS_propertyGenerationList var_propertyGenerationList_5614 ;
  GALGAS_classKind joker_5548 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 135)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("preferences.ggs", 135))  COMMA_SOURCE_FILE ("preferences.ggs", 135)), joker_5548, var_preferencesPropertyMap_5561, var_actionMap_5594, var_propertyGenerationList_5614, inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 134)) ;
  GALGAS_regularBindingsGenerationList var_regularBindingsGenerationList_5978 ;
  GALGAS_multipleBindingGenerationList var_multipleBindingGenerationList_6049 ;
  GALGAS_actionBindingListForGeneration var_actionBindingListForGeneration_6121 ;
  GALGAS_decoratedOutletMap var_outletMap_6182 ;
  GALGAS_tableViewBindingGenerationList var_tableViewBindingGenerationList_6234 ;
  GALGAS_ebViewGraphicControllerBindingGenerationList var_ebViewGraphicControllerBindingGenerationList_6321 ;
  {
  const GALGAS_prefsDeclarationAST temp_4 = this ;
  routine_analyzeOutlets (GALGAS_bool (true), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("preferences.ggs", 143)), var_preferencesPropertyMap_5561, GALGAS_string::makeEmptyString (), ioArgument_ioSemanticContext, temp_4.readProperty_mDeclaration ().readProperty_mOutletDeclarationList (), var_preferencesPropertyMap_5561, var_actionMap_5594, function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 151)), ioArgument_ioGeneration, var_regularBindingsGenerationList_5978, var_multipleBindingGenerationList_6049, var_actionBindingListForGeneration_6121, var_outletMap_6182, var_tableViewBindingGenerationList_6234, var_ebViewGraphicControllerBindingGenerationList_6321, inCompiler  COMMA_SOURCE_FILE ("preferences.ggs", 142)) ;
  }
  GALGAS_autoLayoutViewDeclarationMap var_viewDeclarationMap_6447 = GALGAS_autoLayoutViewDeclarationMap::constructor_emptyMap (SOURCE_FILE ("preferences.ggs", 161)) ;
  GALGAS_viewGenerationList var_viewGenerationList_6497 = GALGAS_viewGenerationList::constructor_emptyList (SOURCE_FILE ("preferences.ggs", 162)) ;
  GALGAS_implicitViewFunctionGenerationList var_implicitViewFunctionGenerationList_6563 = GALGAS_implicitViewFunctionGenerationList::constructor_emptyList (SOURCE_FILE ("preferences.ggs", 163)) ;
  GALGAS_autoLayoutConfiguratorMap var_configuratorMap_6636 = GALGAS_autoLayoutConfiguratorMap::constructor_emptyMap (SOURCE_FILE ("preferences.ggs", 164)) ;
  GALGAS_autoLayoutOutletMap var_autoLayoutOutletMap_6684 = GALGAS_autoLayoutOutletMap::constructor_emptyMap (SOURCE_FILE ("preferences.ggs", 165)) ;
  const GALGAS_prefsDeclarationAST temp_5 = this ;
  cEnumerator_astViewDeclarationList enumerator_6725 (temp_5.readProperty_mDeclaration ().readProperty_mViewDeclarationList (), kENUMERATION_UP) ;
  while (enumerator_6725.hasCurrentObject ()) {
    {
    var_viewDeclarationMap_6447.setter_insertKey (enumerator_6725.current_mViewName (HERE), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 167)) ;
    }
    GALGAS_abstractViewGeneration var_viewGeneration_7225 ;
    const GALGAS_prefsDeclarationAST temp_6 = this ;
    callExtensionMethod_checkView ((cPtr_astAbstractViewDeclaration *) enumerator_6725.current_mView (HERE).ptr (), enumerator_6725.current_mViewName (HERE).readProperty_string (), var_viewDeclarationMap_6447, GALGAS_bool (true), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("preferences.ggs", 171)), var_preferencesPropertyMap_5561, ioArgument_ioSemanticContext, GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("preferences.ggs", 174)), var_actionMap_5594, temp_6.readProperty_mClassName ().readProperty_string (), ioArgument_ioSemanticContext.readProperty_mClassMap (), var_implicitViewFunctionGenerationList_6563, var_configuratorMap_6636, var_autoLayoutOutletMap_6684, var_viewGeneration_7225, inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 168)) ;
    var_viewGenerationList_6497.addAssign_operation (enumerator_6725.current_mViewName (HERE).readProperty_string (), var_viewGeneration_7225  COMMA_SOURCE_FILE ("preferences.ggs", 184)) ;
    enumerator_6725.gotoNextObject () ;
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_viewDeclarationMap_6447.getter_hasKey (GALGAS_string ("mPrefsMainView") COMMA_SOURCE_FILE ("preferences.ggs", 186)).operator_not (SOURCE_FILE ("preferences.ggs", 186)).boolEnum () ;
    if (kBoolTrue == test_7) {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("preferences.ggs", 187)), GALGAS_string ("Preferences should define 'mPrefsMainView' stack view"), fixItArray8  COMMA_SOURCE_FILE ("preferences.ggs", 187)) ;
    }
  }
  const GALGAS_prefsDeclarationAST temp_9 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_preferencesForGeneration::constructor_new (var_propertyGenerationList_5614, ioArgument_ioGeneration.readProperty_mMainXibDescriptorList (), var_regularBindingsGenerationList_5978, var_multipleBindingGenerationList_6049, var_actionBindingListForGeneration_6121, var_outletMap_6182, temp_9.readProperty_mDeclaration ().readProperty_mExternSwiftFunctionList (), var_tableViewBindingGenerationList_6234, var_ebViewGraphicControllerBindingGenerationList_6321, var_viewGenerationList_6497, var_implicitViewFunctionGenerationList_6563, var_configuratorMap_6636, var_autoLayoutOutletMap_6684  COMMA_SOURCE_FILE ("preferences.ggs", 190))  COMMA_SOURCE_FILE ("preferences.ggs", 190)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'prefsGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of 'indexes' directory

static const cRegularFileWrapper * gWrapperAllFiles_prefsGenerationTemplate_4 [1] = {
  nullptr
} ;

//--- All sub-directories of 'indexes' directory

static const cDirectoryWrapper * gWrapperAllDirectories_prefsGenerationTemplate_4 [1] = {
  nullptr
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
  nullptr
} ;

//--- All sub-directories of 'build' directory

static const cDirectoryWrapper * gWrapperAllDirectories_prefsGenerationTemplate_3 [2] = {
  & gWrapperDirectory_4_prefsGenerationTemplate,
  nullptr
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
  nullptr
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_prefsGenerationTemplate_5 [1] = {
  nullptr
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
  nullptr
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_prefsGenerationTemplate_1 [1] = {
  nullptr
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
  nullptr
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_prefsGenerationTemplate_2 [1] = {
  nullptr
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
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_prefsGenerationTemplate_0 [5] = {
  & gWrapperDirectory_3_prefsGenerationTemplate,
  & gWrapperDirectory_5_prefsGenerationTemplate,
  & gWrapperDirectory_1_prefsGenerationTemplate,
  & gWrapperDirectory_2_prefsGenerationTemplate,
  nullptr
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
  GALGAS_uint index_2097_ (0) ;
  if (in_VIEW_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_viewGenerationList enumerator_2097 (in_VIEW_5F_GENERATION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2097.hasCurrentObject ()) {
      result << "  //····················································································································\n  //    VIEW " ;
      result << enumerator_2097.current_mViewName (HERE).stringValue () ;
      result << "\n  //····················································································································\n\n" ;
      result << callExtensionGetter_generateViewBuilder ((const cPtr_abstractViewGeneration *) enumerator_2097.current_mView (HERE).ptr (), GALGAS_bool (true), enumerator_2097.current_mViewName (HERE), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 52)).stringValue () ;
      index_2097_.increment () ;
      enumerator_2097.gotoNextObject () ;
    }
  }
  GALGAS_uint index_2512_idx (0) ;
  if (in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST.isValid ()) {
    cEnumerator_implicitViewFunctionGenerationList enumerator_2512 (in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2512.hasCurrentObject ()) {
      result << "  //····················································································································\n  //    IMPLICIT VIEW " ;
      result << index_2512_idx.getter_string (SOURCE_FILE ("preferences.swift.galgasTemplate", 56)).stringValue () ;
      result << "\n  //····················································································································\n\n  fileprivate final func computeImplicitView_" ;
      result << index_2512_idx.getter_string (SOURCE_FILE ("preferences.swift.galgasTemplate", 58)).stringValue () ;
      result << " () -> NSView {\n" ;
      result << callExtensionGetter_generateViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_2512.current_mInstruction (HERE).ptr (), GALGAS_bool (true), GALGAS_string ("view"), GALGAS_string ("    "), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 59)).stringValue () ;
      result << "    return view\n  }\n\n" ;
      index_2512_idx.increment () ;
      enumerator_2512.gotoNextObject () ;
    }
  }
  result << "  //····················································································································\n  //    Outlets\n  //····················································································································\n\n" ;
  GALGAS_uint index_3338_ (0) ;
  if (in_AUTO_5F_LAYOUT_5F_OUTLET_5F_MAP.isValid ()) {
    cEnumerator_autoLayoutOutletMap enumerator_3338 (in_AUTO_5F_LAYOUT_5F_OUTLET_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_3338.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_3338.current_mOutletIsArray (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "  final var " ;
        result << enumerator_3338.current_lkey (HERE).readProperty_string ().stringValue () ;
        result << " = EBWeakReferenceArray <AutoLayout" ;
        result << enumerator_3338.current_mAutoLayoutOutletTypeName (HERE).stringValue () ;
        result << "> ()\n" ;
      }else if (kBoolFalse == test_0) {
        result << "  weak final var " ;
        result << enumerator_3338.current_lkey (HERE).readProperty_string ().stringValue () ;
        result << " : AutoLayout" ;
        result << enumerator_3338.current_mAutoLayoutOutletTypeName (HERE).stringValue () ;
        result << "\? = nil\n" ;
      }
      index_3338_.increment () ;
      enumerator_3338.gotoNextObject () ;
    }
  }
  result << "\n  //····················································································································\n  //    Outlets (EX)\n  //····················································································································\n\n" ;
  GALGAS_uint index_3879_ (0) ;
  if (in_OUTLET_5F_MAP.isValid ()) {
    cEnumerator_decoratedOutletMap enumerator_3879 (in_OUTLET_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_3879.hasCurrentObject ()) {
      result << "  @IBOutlet var " ;
      result << enumerator_3879.current_lkey (HERE).readProperty_string ().stringValue () ;
      result << " : " ;
      result << enumerator_3879.current_mOutletTypeName (HERE).stringValue () ;
      result << "\? = nil\n" ;
      index_3879_.increment () ;
      enumerator_3879.gotoNextObject () ;
    }
  }
  result << "\n  //····················································································································\n  //    Multiple bindings controllers\n  //····················································································································\n\n" ;
  GALGAS_uint index_4323_ (0) ;
  if (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_multipleBindingGenerationList enumerator_4323 (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4323.hasCurrentObject ()) {
      result << "  private var mController_" ;
      result << enumerator_4323.current_mOutletName (HERE).stringValue () ;
      result << "_" ;
      result << enumerator_4323.current_mBindingName (HERE).stringValue () ;
      result << " : MultipleBindingController_" ;
      result << enumerator_4323.current_mBindingName (HERE).stringValue () ;
      result << "\?\n" ;
      index_4323_.increment () ;
      enumerator_4323.gotoNextObject () ;
    }
  }
  result << "\n  //····················································································································\n  //    Undo Manager\n  //····················································································································\n\n  private var mUndoManager = EBUndoManager ()\n\n  //····················································································································\n\n  var undoManager : UndoManager { return self.mUndoManager }\n\n  //····················································································································\n  // The preferences window should register this object as delegate (do it in Interface Builder)\n  //····················································································································\n\n  @objc func windowWillReturnUndoManager (_ window: NSWindow) -> UndoManager\? {\n    return self.undoManager\n  }\n\n  //····················································································································\n  //    Init\n  //····················································································································\n\n  override init () {\n    super.init ()\n    g_" ;
  result << function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 117)).stringValue () ;
  result << " = self ;\n  //--- Read from preferences\n" ;
  GALGAS_uint index_5800_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_5800 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_5800.hasCurrentObject ()) {
      result << callExtensionGetter_configurationCode ((const cPtr_propertyGeneration *) enumerator_5800.current_mProperty (HERE).ptr (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 121)).stringValue () ;
      index_5800_.increment () ;
      enumerator_5800.gotoNextObject () ;
    }
  }
  result << "  //--- Notify application will terminate\n    /* NotificationCenter.default.addObserver (self,\n      selector:#selector(Preferences.applicationWillTerminateAction(_:)),\n      name:NSApplication.willTerminateNotification,\n      object:nil\n    ) */\n  //--- Extern functions\n" ;
  GALGAS_uint index_6196_ (0) ;
  if (in_EXTERN_5F_SWIFT_5F_FUNCTION_5F_LIST.isValid ()) {
    cEnumerator_externSwiftFunctionList enumerator_6196 (in_EXTERN_5F_SWIFT_5F_FUNCTION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6196.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_6196.current_mCallerName (HERE).readProperty_string ().objectCompare (GALGAS_string ("init"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << "    self." ;
        result << enumerator_6196.current_mExternSwiftFunctionName (HERE).readProperty_string ().stringValue () ;
        result << " ()\n" ;
      }else if (kBoolFalse == test_1) {
      }
      index_6196_.increment () ;
      enumerator_6196.gotoNextObject () ;
    }
  }
  result << "  }\n\n" ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, in_MAIN_5F_XIB_5F_DESCRIPTOR_5F_LIST.getter_count (SOURCE_FILE ("preferences.swift.galgasTemplate", 139)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
  if (kBoolTrue == test_2) {
    result << "  //····················································································································\n\n  @IBOutlet private final var window : NSWindow\?\n  let OUTLET_WIDTH = 200.0\n  let OUTLET_HEIGHT = 22.0\n\n" ;
  }else if (kBoolFalse == test_2) {
  }
  result << "  //····················································································································\n  //    awakeFromNib\n  //····················································································································\n\n  override func awakeFromNib () {\n" ;
  result << extensionGetter_generateCode (in_MAIN_5F_XIB_5F_DESCRIPTOR_5F_LIST, inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 154)).stringValue () ;
  GALGAS_uint index_6980_ (0) ;
  if (in_OUTLET_5F_MAP.isValid ()) {
    cEnumerator_decoratedOutletMap enumerator_6980 (in_OUTLET_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_6980.hasCurrentObject ()) {
      result << "    checkOutletConnection (self." ;
      result << enumerator_6980.current_lkey (HERE).readProperty_string ().stringValue () ;
      result << ", \"" ;
      result << enumerator_6980.current_lkey (HERE).readProperty_string ().stringValue () ;
      result << "\", " ;
      result << enumerator_6980.current_mOutletTypeName (HERE).stringValue () ;
      result << ".self, #file, #line)\n" ;
      index_6980_.increment () ;
      enumerator_6980.gotoNextObject () ;
    }
  }
  result << "  //--------------------------- Install bindings\n" ;
  GALGAS_uint index_7254_ (0) ;
  if (in_REGULAR_5F_BINDINGS_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_regularBindingsGenerationList enumerator_7254 (in_REGULAR_5F_BINDINGS_5F_GENERATION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7254.hasCurrentObject ()) {
      result << "    " ;
      result << enumerator_7254.current_mOutletName (HERE).stringValue () ;
      result << "\?.bind_" ;
      result << enumerator_7254.current_mBindingName (HERE).stringValue () ;
      result << " (" ;
      GALGAS_uint index_7361_ (0) ;
      if (enumerator_7254.current_mBoundObjectList (HERE).isValid ()) {
        cEnumerator_boundObjectList enumerator_7361 (enumerator_7254.current_mBoundObjectList (HERE), kENUMERATION_UP) ;
        while (enumerator_7361.hasCurrentObject ()) {
          result << enumerator_7361.current_mBoundObjectString (HERE).stringValue () ;
          if (enumerator_7361.hasNextObject ()) {
            result << ", " ;
          }
          index_7361_.increment () ;
          enumerator_7361.gotoNextObject () ;
        }
      }
      result << enumerator_7254.current_mBindingOptionsString (HERE).stringValue () ;
      result << ")\n" ;
      index_7254_.increment () ;
      enumerator_7254.gotoNextObject () ;
    }
  }
  result << "  //--------------------------- Install multiple bindings\n" ;
  GALGAS_uint index_7592_ (0) ;
  if (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_multipleBindingGenerationList enumerator_7592 (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7592.hasCurrentObject ()) {
      result << "    do{\n      let controller = MultipleBindingController_" ;
      result << enumerator_7592.current_mBindingName (HERE).stringValue () ;
      result << " (\n        computeFunction: " ;
      result << callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_7592.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 173)).stringValue () ;
      result << ",\n        outlet: self." ;
      result << enumerator_7592.current_mOutletName (HERE).stringValue () ;
      result << "\n      )\n      self.mController_" ;
      result << enumerator_7592.current_mOutletName (HERE).stringValue () ;
      result << "_" ;
      result << enumerator_7592.current_mBindingName (HERE).stringValue () ;
      result << " = controller\n    }\n" ;
      index_7592_.increment () ;
      enumerator_7592.gotoNextObject () ;
    }
  }
  result << "  //--------------------------- Array controller\n" ;
  GALGAS_uint index_8063_ (0) ;
  if (in_TABLE_5F_VALUE_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_tableViewBindingGenerationList enumerator_8063 (in_TABLE_5F_VALUE_5F_BINDING_5F_GENERATION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8063.hasCurrentObject ()) {
      result << "    preferences_" ;
      result << enumerator_8063.current_mTableValueBindingControllerName (HERE).stringValue () ;
      result << ".bind_tableView (self." ;
      result << enumerator_8063.current_mTableValueBindingOutletName (HERE).stringValue () ;
      result << ")\n" ;
      index_8063_.increment () ;
      enumerator_8063.gotoNextObject () ;
    }
  }
  GALGAS_uint index_8291_ (0) ;
  if (in_EB_5F_VIEW_5F_GRAPHIC_5F_CONTROLLER_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_ebViewGraphicControllerBindingGenerationList enumerator_8291 (in_EB_5F_VIEW_5F_GRAPHIC_5F_CONTROLLER_5F_BINDING_5F_GENERATION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8291.hasCurrentObject ()) {
      result << "    preferences_" ;
      result << enumerator_8291.current_mArrayControllerControllerName (HERE).stringValue () ;
      result << ".bind_ebView (self." ;
      result << enumerator_8291.current_mEBViewOutletName (HERE).stringValue () ;
      result << ")\n" ;
      index_8291_.increment () ;
      enumerator_8291.gotoNextObject () ;
    }
  }
  result << "  //--------------------------- Set targets / actions\n" ;
  GALGAS_uint index_8530_ (0) ;
  if (in_TARGET_5F_ACTION_5F_LIST.isValid ()) {
    cEnumerator_actionBindingListForGeneration enumerator_8530 (in_TARGET_5F_ACTION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8530.hasCurrentObject ()) {
      result << "    self." ;
      result << enumerator_8530.current_mOutletName (HERE).stringValue () ;
      result << "\?.target = " ;
      result << enumerator_8530.current_mTargetName (HERE).stringValue () ;
      result << "\n    self." ;
      result << enumerator_8530.current_mOutletName (HERE).stringValue () ;
      result << "\?.action = #selector (" ;
      result << enumerator_8530.current_mTargetTypeName (HERE).stringValue () ;
      result << "." ;
      result << enumerator_8530.current_mActionName (HERE).stringValue () ;
      result << " (_:))\n" ;
      index_8530_.increment () ;
      enumerator_8530.gotoNextObject () ;
    }
  }
  result << "  //--------------------------- Extern functions\n" ;
  GALGAS_uint index_8806_ (0) ;
  if (in_EXTERN_5F_SWIFT_5F_FUNCTION_5F_LIST.isValid ()) {
    cEnumerator_externSwiftFunctionList enumerator_8806 (in_EXTERN_5F_SWIFT_5F_FUNCTION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8806.hasCurrentObject ()) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_8806.current_mCallerName (HERE).readProperty_string ().objectCompare (GALGAS_string ("awakeFromNib"))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "    self." ;
        result << enumerator_8806.current_mExternSwiftFunctionName (HERE).readProperty_string ().stringValue () ;
        result << " ()\n" ;
      }else if (kBoolFalse == test_3) {
      }
      index_8806_.increment () ;
      enumerator_8806.gotoNextObject () ;
    }
  }
  result << "  }\n\n  //····················································································································\n\n}\n\n//——————————————————————————————————————————————————————————————————————————————————————————————————————————————————————\n\n" ;
  GALGAS_uint index_9231_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_9231 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_9231.hasCurrentObject ()) {
      result << callExtensionGetter_prefKeyDefinitionCode ((const cPtr_propertyGeneration *) enumerator_9231.current_mProperty (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 208)).stringValue () ;
      index_9231_.increment () ;
      enumerator_9231.gotoNextObject () ;
    }
  }
  result << "\n" ;
  GALGAS_uint index_9327_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_9327 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION, kENUMERATION_UP) ;
    while (enumerator_9327.hasCurrentObject ()) {
      result << callExtensionGetter_propertyDeclarationCode ((const cPtr_propertyGeneration *) enumerator_9327.current_mProperty (HERE).ptr (), GALGAS_bool (true), GALGAS_bool (true), GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("preferences.swift.galgasTemplate", 213)), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 213)).stringValue () ;
      index_9327_.increment () ;
      enumerator_9327.gotoNextObject () ;
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
  GALGAS_string var_s_10520 = GALGAS_string (filewrapperTemplate_prefsGenerationTemplate_preferences (inCompiler, temp_0.readProperty_mPropertyListForGeneration (), temp_1.readProperty_mMainXibDescriptorList (), temp_2.readProperty_mOutletMap (), temp_3.readProperty_mRegularBindingsGenerationList (), temp_4.readProperty_mActionBindingListForGeneration (), temp_5.readProperty_mMultipleBindingGenerationList (), temp_6.readProperty_mExternSwiftFunctionList (), temp_7.readProperty_mTableViewBindingGenerationList (), temp_8.readProperty_mEBViewBindingGenerationList (), temp_9.readProperty_mViewGenerationList (), temp_10.readProperty_mImplicitViewFunctionGenerationList (), temp_11.readProperty_mAutoLayoutOutletMap () COMMA_SOURCE_FILE ("preferences.ggs", 254))) ;
  GALGAS_string var_fileName_11021 = function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 268)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 268)) ;
  ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_11021  COMMA_SOURCE_FILE ("preferences.ggs", 269)) ;
  {
  GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_11021, var_s_10520, inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 270)) ;
  }
  const GALGAS_preferencesForGeneration temp_12 = this ;
  cEnumerator_autoLayoutConfiguratorMap enumerator_11205 (temp_12.readProperty_mConfiguratorMap (), kENUMERATION_UP) ;
  while (enumerator_11205.hasCurrentObject ()) {
    GALGAS_string var_s_11257 = GALGAS_string (filewrapperTemplate_autoLayoutDocumentGenerationTemplate_documentOutletConfiguratorImplementation (inCompiler, GALGAS_string ("Preferences"), enumerator_11205.current_lkey (HERE).readProperty_string (), enumerator_11205.current_mAutoLayoutOutletTypeName (HERE) COMMA_SOURCE_FILE ("preferences.ggs", 277))) ;
    GALGAS_string var_header_11434 = GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("preferences.ggs", 282)), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 282)).add_operation (GALGAS_string ("\n//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n//"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 282)).add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("preferences.ggs", 284)), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 284)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 284)).add_operation (GALGAS_string ("import AppKit\n\n"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 284)).add_operation (GALGAS_string ("//"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 285)).add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("preferences.ggs", 286)), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 286)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 286)) ;
    GALGAS_string var_fileName_11779 = GALGAS_string ("configurator-Preferences-").add_operation (enumerator_11205.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 287)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 287)) ;
    ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_11779  COMMA_SOURCE_FILE ("preferences.ggs", 288)) ;
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_11779, GALGAS_string ("//"), var_header_11434, GALGAS_string ("\n\n"), var_s_11257, GALGAS_string ("INSERT CONFIGURATION CODE\n"), GALGAS_string ("  }\n}\n\n//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("preferences.ggs", 297)), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 297)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 297)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 289)) ;
    }
    enumerator_11205.gotoNextObject () ;
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
      cEnumerator_lstringlist enumerator_1207 (constinArgument_inGraphvizList, kENUMERATION_UP) ;
      while (enumerator_1207.hasCurrentObject ()) {
        {
        routine_graphvizRootEntityAnalysis (constinArgument_inSourceFileDirectory, constinArgument_inSemanticContext, enumerator_1207.current_mValue (HERE).readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 31)) ;
        }
        {
        routine_graphvizRootEntityStrongAnalysis (constinArgument_inSourceFileDirectory, constinArgument_inSemanticContext, enumerator_1207.current_mValue (HERE).readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 32)) ;
        }
        enumerator_1207.gotoNextObject () ;
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
  GALGAS_stringset var_reachableEntityNameSet_1834 = temp_0 ;
  GALGAS_stringlist temp_1 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("graphviz.ggs", 43)) ;
  temp_1.addAssign_operation (constinArgument_inRootEntityName  COMMA_SOURCE_FILE ("graphviz.ggs", 43)) ;
  GALGAS_stringlist var_exploreArray_1896 = temp_1 ;
  GALGAS_stringlist var_nodeList_1948 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("graphviz.ggs", 44)) ;
  GALGAS_stringlist var_arrowList_1980 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("graphviz.ggs", 45)) ;
  if (constinArgument_inSemanticContext.readProperty_mClassMap ().getter_count (SOURCE_FILE ("graphviz.ggs", 46)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 46)).isValid ()) {
    uint32_t variant_1997 = constinArgument_inSemanticContext.readProperty_mClassMap ().getter_count (SOURCE_FILE ("graphviz.ggs", 46)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 46)).uintValue () ;
    bool loop_1997 = true ;
    while (loop_1997) {
      loop_1997 = GALGAS_bool (kIsStrictSup, var_exploreArray_1896.getter_count (SOURCE_FILE ("graphviz.ggs", 46)).objectCompare (GALGAS_uint (uint32_t (0U)))).isValid () ;
      if (loop_1997) {
        loop_1997 = GALGAS_bool (kIsStrictSup, var_exploreArray_1896.getter_count (SOURCE_FILE ("graphviz.ggs", 46)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_1997 && (0 == variant_1997)) {
        loop_1997 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("graphviz.ggs", 46)) ;
      }
      if (loop_1997) {
        variant_1997 -- ;
        GALGAS_string var_entityName_2121 ;
        {
        var_exploreArray_1896.setter_popLast (var_entityName_2121, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 47)) ;
        }
        GALGAS_string var_node_2141 = GALGAS_string ("  ").add_operation (var_entityName_2121, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 48)).add_operation (GALGAS_string ("[label=\"<"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 48)).add_operation (var_entityName_2121, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 48)).add_operation (GALGAS_string (">"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 48)).add_operation (var_entityName_2121, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 48)) ;
        GALGAS_classKind var_entityKind_2284 ;
        GALGAS_propertyMap var_propertyMap_2314 ;
        GALGAS_actionMap joker_2327_2 ; // Joker input parameter
        GALGAS_propertyGenerationList joker_2327_1 ; // Joker input parameter
        constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (var_entityName_2121.getter_nowhere (SOURCE_FILE ("graphviz.ggs", 49)), var_entityKind_2284, var_propertyMap_2314, joker_2327_2, joker_2327_1, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 49)) ;
        GALGAS_string var_superEntityName_2377 ;
        GALGAS_bool joker_2394_3 ; // Joker input parameter
        GALGAS_bool joker_2394_2 ; // Joker input parameter
        GALGAS_bool joker_2394_1 ; // Joker input parameter
        var_entityKind_2284.method_entity (var_superEntityName_2377, joker_2394_3, joker_2394_2, joker_2394_1, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 50)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (kIsNotEqual, var_superEntityName_2377.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_2) {
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = var_reachableEntityNameSet_1834.getter_hasKey (var_superEntityName_2377 COMMA_SOURCE_FILE ("graphviz.ggs", 52)).operator_not (SOURCE_FILE ("graphviz.ggs", 52)).boolEnum () ;
              if (kBoolTrue == test_3) {
                var_reachableEntityNameSet_1834.addAssign_operation (var_superEntityName_2377  COMMA_SOURCE_FILE ("graphviz.ggs", 53)) ;
                var_exploreArray_1896.addAssign_operation (var_superEntityName_2377  COMMA_SOURCE_FILE ("graphviz.ggs", 54)) ;
              }
            }
            var_arrowList_1980.addAssign_operation (GALGAS_string ("  ").add_operation (var_entityName_2121, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 56)).add_operation (GALGAS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 56)).add_operation (var_superEntityName_2377, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 56)).add_operation (GALGAS_string (" [dir=both arrowtail=dot arrowhead=normal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 56))  COMMA_SOURCE_FILE ("graphviz.ggs", 56)) ;
          }
        }
        cEnumerator_propertyMap enumerator_2758 (var_propertyMap_2314, kENUMERATION_UP) ;
        while (enumerator_2758.hasCurrentObject ()) {
          switch (enumerator_2758.current_mKind (HERE).enumValue ()) {
          case GALGAS_propertyKind::kNotBuilt:
            break ;
          case GALGAS_propertyKind::kEnum_property:
            {
              const cEnumAssociatedValues_propertyKind_property * extractPtr_3029 = (const cEnumAssociatedValues_propertyKind_property *) (enumerator_2758.current_mKind (HERE).unsafePointer ()) ;
              const GALGAS_typeKind extractedValue_2826_type = extractPtr_3029->mAssociatedValue0 ;
              const GALGAS_propertyAccessibility extractedValue_2832_accessibility = extractPtr_3029->mAssociatedValue1 ;
              switch (extractedValue_2832_accessibility.enumValue ()) {
              case GALGAS_propertyAccessibility::kNotBuilt:
                break ;
              case GALGAS_propertyAccessibility::kEnum_stored:
                {
                  var_node_2141.plusAssign_operation(GALGAS_string ("|").add_operation (extensionGetter_swiftTypeName (extractedValue_2826_type, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 63)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 63)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 63)).add_operation (enumerator_2758.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 63)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 63)) ;
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
              const cEnumAssociatedValues_propertyKind_toMany * extractPtr_4426 = (const cEnumAssociatedValues_propertyKind_toMany *) (enumerator_2758.current_mKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_3132_typeName = extractPtr_4426->mAssociatedValue0 ;
              const GALGAS_propertyAccessibility extractedValue_3165_accessibility = extractPtr_4426->mAssociatedValue1 ;
              const GALGAS_toManyRelationshipOptionAST extractedValue_3183_optionKind = extractPtr_4426->mAssociatedValue3 ;
              enumGalgasBool test_4 = kBoolTrue ;
              if (kBoolTrue == test_4) {
                test_4 = extractedValue_3165_accessibility.getter_isStored (SOURCE_FILE ("graphviz.ggs", 70)).boolEnum () ;
                if (kBoolTrue == test_4) {
                  var_node_2141.plusAssign_operation(GALGAS_string ("|<").add_operation (enumerator_2758.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 71)).add_operation (GALGAS_string (">["), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 71)).add_operation (extractedValue_3132_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 71)).add_operation (GALGAS_string ("] "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 71)).add_operation (enumerator_2758.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 71)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 71)) ;
                  switch (extractedValue_3183_optionKind.enumValue ()) {
                  case GALGAS_toManyRelationshipOptionAST::kNotBuilt:
                    break ;
                  case GALGAS_toManyRelationshipOptionAST::kEnum_none:
                    {
                      enumGalgasBool test_5 = kBoolTrue ;
                      if (kBoolTrue == test_5) {
                        test_5 = var_reachableEntityNameSet_1834.getter_hasKey (extractedValue_3132_typeName.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 74)).operator_not (SOURCE_FILE ("graphviz.ggs", 74)).boolEnum () ;
                        if (kBoolTrue == test_5) {
                          var_reachableEntityNameSet_1834.addAssign_operation (extractedValue_3132_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.ggs", 75)) ;
                          var_exploreArray_1896.addAssign_operation (extractedValue_3132_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.ggs", 76)) ;
                        }
                      }
                      var_arrowList_1980.addAssign_operation (GALGAS_string ("  ").add_operation (var_entityName_2121, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 78)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 78)).add_operation (enumerator_2758.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 78)).add_operation (GALGAS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 78)).add_operation (extractedValue_3132_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 79)).add_operation (GALGAS_string (" [dir=both arrowtail=none arrowhead=veevee]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 79))  COMMA_SOURCE_FILE ("graphviz.ggs", 78)) ;
                    }
                    break ;
                  case GALGAS_toManyRelationshipOptionAST::kEnum_hasOpposite:
                    {
                      const cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite * extractPtr_4009 = (const cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite *) (extractedValue_3183_optionKind.unsafePointer ()) ;
                      const GALGAS_lstring extractedValue_3705_oppositeName = extractPtr_4009->mAssociatedValue0 ;
                      enumGalgasBool test_6 = kBoolTrue ;
                      if (kBoolTrue == test_6) {
                        test_6 = var_reachableEntityNameSet_1834.getter_hasKey (extractedValue_3132_typeName.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 81)).operator_not (SOURCE_FILE ("graphviz.ggs", 81)).boolEnum () ;
                        if (kBoolTrue == test_6) {
                          var_reachableEntityNameSet_1834.addAssign_operation (extractedValue_3132_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.ggs", 82)) ;
                          var_exploreArray_1896.addAssign_operation (extractedValue_3132_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.ggs", 83)) ;
                        }
                      }
                      var_arrowList_1980.addAssign_operation (GALGAS_string ("  ").add_operation (var_entityName_2121, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 85)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 85)).add_operation (enumerator_2758.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 85)).add_operation (GALGAS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 85)).add_operation (extractedValue_3132_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 86)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 86)).add_operation (extractedValue_3705_oppositeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 86)).add_operation (GALGAS_string (" [dir=both arrowtail=onormal arrowhead=veevee]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 86))  COMMA_SOURCE_FILE ("graphviz.ggs", 85)) ;
                    }
                    break ;
                  case GALGAS_toManyRelationshipOptionAST::kEnum_hasDependance:
                    {
                      enumGalgasBool test_7 = kBoolTrue ;
                      if (kBoolTrue == test_7) {
                        test_7 = var_reachableEntityNameSet_1834.getter_hasKey (extractedValue_3132_typeName.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 88)).operator_not (SOURCE_FILE ("graphviz.ggs", 88)).boolEnum () ;
                        if (kBoolTrue == test_7) {
                          var_reachableEntityNameSet_1834.addAssign_operation (extractedValue_3132_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.ggs", 89)) ;
                          var_exploreArray_1896.addAssign_operation (extractedValue_3132_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.ggs", 90)) ;
                        }
                      }
                      var_arrowList_1980.addAssign_operation (GALGAS_string ("  ").add_operation (var_entityName_2121, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 92)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 92)).add_operation (enumerator_2758.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 92)).add_operation (GALGAS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 92)).add_operation (extractedValue_3132_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 93)).add_operation (GALGAS_string (" [dir=both arrowtail=none arrowhead=veevee]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 93))  COMMA_SOURCE_FILE ("graphviz.ggs", 92)) ;
                    }
                    break ;
                  }
                }
              }
            }
            break ;
          case GALGAS_propertyKind::kEnum_toOne:
            {
              const cEnumAssociatedValues_propertyKind_toOne * extractPtr_5581 = (const cEnumAssociatedValues_propertyKind_toOne *) (enumerator_2758.current_mKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_4457_typeName = extractPtr_5581->mAssociatedValue0 ;
              const GALGAS_propertyAccessibility extractedValue_4490_accessibility = extractPtr_5581->mAssociatedValue1 ;
              const GALGAS_toOneOppositeRelationship extractedValue_4508_opposite = extractPtr_5581->mAssociatedValue3 ;
              enumGalgasBool test_8 = kBoolTrue ;
              if (kBoolTrue == test_8) {
                test_8 = extractedValue_4490_accessibility.getter_isStored (SOURCE_FILE ("graphviz.ggs", 97)).boolEnum () ;
                if (kBoolTrue == test_8) {
                  var_node_2141.plusAssign_operation(GALGAS_string ("|<").add_operation (enumerator_2758.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 98)).add_operation (GALGAS_string (">"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 98)).add_operation (extractedValue_4457_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 98)).add_operation (GALGAS_string ("\? "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 98)).add_operation (enumerator_2758.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 98)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 98)) ;
                  switch (extractedValue_4508_opposite.enumValue ()) {
                  case GALGAS_toOneOppositeRelationship::kNotBuilt:
                    break ;
                  case GALGAS_toOneOppositeRelationship::kEnum_none:
                    {
                      enumGalgasBool test_9 = kBoolTrue ;
                      if (kBoolTrue == test_9) {
                        test_9 = var_reachableEntityNameSet_1834.getter_hasKey (extractedValue_4457_typeName.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 101)).operator_not (SOURCE_FILE ("graphviz.ggs", 101)).boolEnum () ;
                        if (kBoolTrue == test_9) {
                          var_reachableEntityNameSet_1834.addAssign_operation (extractedValue_4457_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.ggs", 102)) ;
                          var_exploreArray_1896.addAssign_operation (extractedValue_4457_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.ggs", 103)) ;
                        }
                      }
                      var_arrowList_1980.addAssign_operation (GALGAS_string ("  ").add_operation (var_entityName_2121, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 105)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 105)).add_operation (enumerator_2758.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 105)).add_operation (GALGAS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 105)).add_operation (extractedValue_4457_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 106)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 106)).add_operation (extractedValue_4457_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 106)).add_operation (GALGAS_string (" [dir=both arrowtail=none arrowhead=onormal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 106))  COMMA_SOURCE_FILE ("graphviz.ggs", 105)) ;
                    }
                    break ;
                  case GALGAS_toOneOppositeRelationship::kEnum_oppositeIsToMany:
                    {
                    }
                    break ;
                  case GALGAS_toOneOppositeRelationship::kEnum_oppositeIsToOne:
                    {
                      const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne * extractPtr_5555 = (const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne *) (extractedValue_4508_opposite.unsafePointer ()) ;
                      const GALGAS_lstring extractedValue_5114_oppositeName = extractPtr_5555->mAssociatedValue0 ;
                      enumGalgasBool test_10 = kBoolTrue ;
                      if (kBoolTrue == test_10) {
                        test_10 = var_reachableEntityNameSet_1834.getter_hasKey (extractedValue_4457_typeName.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 109)).operator_not (SOURCE_FILE ("graphviz.ggs", 109)).boolEnum () ;
                        if (kBoolTrue == test_10) {
                          var_reachableEntityNameSet_1834.addAssign_operation (extractedValue_4457_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.ggs", 110)) ;
                          var_exploreArray_1896.addAssign_operation (extractedValue_4457_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.ggs", 111)) ;
                        }
                      }
                      enumGalgasBool test_11 = kBoolTrue ;
                      if (kBoolTrue == test_11) {
                        test_11 = GALGAS_bool (kIsStrictSup, enumerator_2758.current_lkey (HERE).readProperty_string ().objectCompare (extractedValue_5114_oppositeName.readProperty_string ())).boolEnum () ;
                        if (kBoolTrue == test_11) {
                          var_arrowList_1980.addAssign_operation (GALGAS_string ("  ").add_operation (var_entityName_2121, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 114)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 114)).add_operation (enumerator_2758.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 114)).add_operation (GALGAS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 114)).add_operation (extractedValue_4457_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 115)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 115)).add_operation (extractedValue_5114_oppositeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 115)).add_operation (GALGAS_string (" [dir=both arrowtail=onormal arrowhead=onormal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 115))  COMMA_SOURCE_FILE ("graphviz.ggs", 114)) ;
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
          enumerator_2758.gotoNextObject () ;
        }
        var_node_2141.plusAssign_operation(GALGAS_string ("\"]"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 121)) ;
        var_nodeList_1948.addAssign_operation (var_node_2141  COMMA_SOURCE_FILE ("graphviz.ggs", 122)) ;
      }
    }
  }
  GALGAS_string var_s_5671 = GALGAS_string ("digraph G {\n") ;
  var_s_5671.plusAssign_operation(GALGAS_string ("  rankdir=LR ;\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 126)) ;
  var_s_5671.plusAssign_operation(GALGAS_string ("  node [shape=record fontname=helvetica style=rounded] ;\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 127)) ;
  cEnumerator_stringlist enumerator_5792 (var_nodeList_1948, kENUMERATION_UP) ;
  while (enumerator_5792.hasCurrentObject ()) {
    var_s_5671.plusAssign_operation(enumerator_5792.current_mValue (HERE).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 129)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 129)) ;
    enumerator_5792.gotoNextObject () ;
  }
  cEnumerator_stringlist enumerator_5849 (var_arrowList_1980, kENUMERATION_UP) ;
  while (enumerator_5849.hasCurrentObject ()) {
    var_s_5671.plusAssign_operation(enumerator_5849.current_mValue (HERE).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 132)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 132)) ;
    enumerator_5849.gotoNextObject () ;
  }
  var_s_5671.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 134)) ;
  GALGAS_string var_filePath_5921 = constinArgument_inSourceFileDirectory.add_operation (GALGAS_string ("/models/graph-"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 135)).add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 135)).add_operation (GALGAS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 135)) ;
  GALGAS_string var_temp_6007 = var_filePath_5921.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("graphviz.ggs", 136)) ;
  var_temp_6007.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 136)) ;
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
  GALGAS_stringset var_reachableEntityNameSet_6790 = temp_0 ;
  GALGAS_stringlist temp_1 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("graphviz.ggs", 152)) ;
  temp_1.addAssign_operation (constinArgument_inRootEntityName  COMMA_SOURCE_FILE ("graphviz.ggs", 152)) ;
  GALGAS_stringlist var_exploreArray_6852 = temp_1 ;
  GALGAS_stringlist var_nodeList_6904 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("graphviz.ggs", 153)) ;
  GALGAS_stringlist var_arrowList_6936 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("graphviz.ggs", 154)) ;
  GALGAS_entityStrongReferenceGraph var_entityStrongReferenceGraph_6985 = GALGAS_entityStrongReferenceGraph::constructor_emptyGraph (SOURCE_FILE ("graphviz.ggs", 155)) ;
  if (constinArgument_inSemanticContext.readProperty_mClassMap ().getter_count (SOURCE_FILE ("graphviz.ggs", 156)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 156)).isValid ()) {
    uint32_t variant_7028 = constinArgument_inSemanticContext.readProperty_mClassMap ().getter_count (SOURCE_FILE ("graphviz.ggs", 156)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 156)).uintValue () ;
    bool loop_7028 = true ;
    while (loop_7028) {
      loop_7028 = GALGAS_bool (kIsStrictSup, var_exploreArray_6852.getter_count (SOURCE_FILE ("graphviz.ggs", 156)).objectCompare (GALGAS_uint (uint32_t (0U)))).isValid () ;
      if (loop_7028) {
        loop_7028 = GALGAS_bool (kIsStrictSup, var_exploreArray_6852.getter_count (SOURCE_FILE ("graphviz.ggs", 156)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_7028 && (0 == variant_7028)) {
        loop_7028 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("graphviz.ggs", 156)) ;
      }
      if (loop_7028) {
        variant_7028 -- ;
        GALGAS_string var_entityName_7152 ;
        {
        var_exploreArray_6852.setter_popLast (var_entityName_7152, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 157)) ;
        }
        var_nodeList_6904.addAssign_operation (var_entityName_7152  COMMA_SOURCE_FILE ("graphviz.ggs", 158)) ;
        {
        var_entityStrongReferenceGraph_6985.setter_addNode (GALGAS_lstring::constructor_new (var_entityName_7152, GALGAS_location::constructor_nowhere (SOURCE_FILE ("graphviz.ggs", 159))  COMMA_SOURCE_FILE ("graphviz.ggs", 159)), var_entityName_7152, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 159)) ;
        }
        GALGAS_classKind var_entityKind_7346 ;
        GALGAS_propertyMap var_propertyMap_7376 ;
        GALGAS_actionMap joker_7389_2 ; // Joker input parameter
        GALGAS_propertyGenerationList joker_7389_1 ; // Joker input parameter
        constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (var_entityName_7152.getter_nowhere (SOURCE_FILE ("graphviz.ggs", 160)), var_entityKind_7346, var_propertyMap_7376, joker_7389_2, joker_7389_1, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 160)) ;
        GALGAS_string var_superEntityName_7439 ;
        GALGAS_bool joker_7456_3 ; // Joker input parameter
        GALGAS_bool joker_7456_2 ; // Joker input parameter
        GALGAS_bool joker_7456_1 ; // Joker input parameter
        var_entityKind_7346.method_entity (var_superEntityName_7439, joker_7456_3, joker_7456_2, joker_7456_1, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 161)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (kIsNotEqual, var_superEntityName_7439.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_2) {
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = var_reachableEntityNameSet_6790.getter_hasKey (var_superEntityName_7439 COMMA_SOURCE_FILE ("graphviz.ggs", 163)).operator_not (SOURCE_FILE ("graphviz.ggs", 163)).boolEnum () ;
              if (kBoolTrue == test_3) {
                var_reachableEntityNameSet_6790.addAssign_operation (var_superEntityName_7439  COMMA_SOURCE_FILE ("graphviz.ggs", 164)) ;
                var_exploreArray_6852.addAssign_operation (var_superEntityName_7439  COMMA_SOURCE_FILE ("graphviz.ggs", 165)) ;
              }
            }
            var_arrowList_6936.addAssign_operation (var_superEntityName_7439.add_operation (GALGAS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 167)).add_operation (var_entityName_7152, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 167)).add_operation (GALGAS_string (" [arrowtail=dot arrowhead=normal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 167))  COMMA_SOURCE_FILE ("graphviz.ggs", 167)) ;
            {
            var_entityStrongReferenceGraph_6985.setter_addEdge (GALGAS_lstring::constructor_new (var_superEntityName_7439, GALGAS_location::constructor_nowhere (SOURCE_FILE ("graphviz.ggs", 168))  COMMA_SOURCE_FILE ("graphviz.ggs", 168)), GALGAS_lstring::constructor_new (var_entityName_7152, GALGAS_location::constructor_nowhere (SOURCE_FILE ("graphviz.ggs", 168))  COMMA_SOURCE_FILE ("graphviz.ggs", 168)) COMMA_SOURCE_FILE ("graphviz.ggs", 168)) ;
            }
          }
        }
        cEnumerator_propertyMap enumerator_7900 (var_propertyMap_7376, kENUMERATION_UP) ;
        while (enumerator_7900.hasCurrentObject ()) {
          switch (enumerator_7900.current_mKind (HERE).enumValue ()) {
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
              const cEnumAssociatedValues_propertyKind_toMany * extractPtr_8547 = (const cEnumAssociatedValues_propertyKind_toMany *) (enumerator_7900.current_mKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_8074_typeName = extractPtr_8547->mAssociatedValue0 ;
              const GALGAS_propertyAccessibility extractedValue_8107_accessibility = extractPtr_8547->mAssociatedValue1 ;
              var_arrowList_6936.addAssign_operation (var_entityName_7152.add_operation (GALGAS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 176)).add_operation (extractedValue_8074_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 176)).add_operation (GALGAS_string (" [dir=both arrowtail=none arrowhead=veevee]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 176))  COMMA_SOURCE_FILE ("graphviz.ggs", 176)) ;
              {
              var_entityStrongReferenceGraph_6985.setter_addEdge (GALGAS_lstring::constructor_new (var_entityName_7152, GALGAS_location::constructor_nowhere (SOURCE_FILE ("graphviz.ggs", 177))  COMMA_SOURCE_FILE ("graphviz.ggs", 177)), GALGAS_lstring::constructor_new (extractedValue_8074_typeName.readProperty_string (), GALGAS_location::constructor_nowhere (SOURCE_FILE ("graphviz.ggs", 177))  COMMA_SOURCE_FILE ("graphviz.ggs", 177)) COMMA_SOURCE_FILE ("graphviz.ggs", 177)) ;
              }
              enumGalgasBool test_4 = kBoolTrue ;
              if (kBoolTrue == test_4) {
                test_4 = extractedValue_8107_accessibility.getter_isStored (SOURCE_FILE ("graphviz.ggs", 178)).boolEnum () ;
                if (kBoolTrue == test_4) {
                  enumGalgasBool test_5 = kBoolTrue ;
                  if (kBoolTrue == test_5) {
                    test_5 = var_reachableEntityNameSet_6790.getter_hasKey (extractedValue_8074_typeName.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 179)).operator_not (SOURCE_FILE ("graphviz.ggs", 179)).boolEnum () ;
                    if (kBoolTrue == test_5) {
                      var_reachableEntityNameSet_6790.addAssign_operation (extractedValue_8074_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.ggs", 180)) ;
                      var_exploreArray_6852.addAssign_operation (extractedValue_8074_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.ggs", 181)) ;
                    }
                  }
                }
              }
            }
            break ;
          case GALGAS_propertyKind::kEnum_toOne:
            {
              const cEnumAssociatedValues_propertyKind_toOne * extractPtr_9437 = (const cEnumAssociatedValues_propertyKind_toOne *) (enumerator_7900.current_mKind (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_8578_typeName = extractPtr_9437->mAssociatedValue0 ;
              const GALGAS_propertyAccessibility extractedValue_8611_accessibility = extractPtr_9437->mAssociatedValue1 ;
              const GALGAS_toOneOppositeRelationship extractedValue_8629_opposite = extractPtr_9437->mAssociatedValue3 ;
              const GALGAS_bool extractedValue_8639_weak = extractPtr_9437->mAssociatedValue4 ;
              enumGalgasBool test_6 = kBoolTrue ;
              if (kBoolTrue == test_6) {
                test_6 = extractedValue_8639_weak.operator_not (SOURCE_FILE ("graphviz.ggs", 185)).boolEnum () ;
                if (kBoolTrue == test_6) {
                  var_arrowList_6936.addAssign_operation (var_entityName_7152.add_operation (GALGAS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 186)).add_operation (extractedValue_8578_typeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 186)).add_operation (GALGAS_string (" [dir=both arrowtail=none arrowhead=onormal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 186))  COMMA_SOURCE_FILE ("graphviz.ggs", 186)) ;
                  {
                  var_entityStrongReferenceGraph_6985.setter_addEdge (GALGAS_lstring::constructor_new (var_entityName_7152, GALGAS_location::constructor_nowhere (SOURCE_FILE ("graphviz.ggs", 187))  COMMA_SOURCE_FILE ("graphviz.ggs", 187)), GALGAS_lstring::constructor_new (extractedValue_8578_typeName.readProperty_string (), GALGAS_location::constructor_nowhere (SOURCE_FILE ("graphviz.ggs", 187))  COMMA_SOURCE_FILE ("graphviz.ggs", 187)) COMMA_SOURCE_FILE ("graphviz.ggs", 187)) ;
                  }
                }
              }
              enumGalgasBool test_7 = kBoolTrue ;
              if (kBoolTrue == test_7) {
                test_7 = extractedValue_8611_accessibility.getter_isStored (SOURCE_FILE ("graphviz.ggs", 189)).boolEnum () ;
                if (kBoolTrue == test_7) {
                  switch (extractedValue_8629_opposite.enumValue ()) {
                  case GALGAS_toOneOppositeRelationship::kNotBuilt:
                    break ;
                  case GALGAS_toOneOppositeRelationship::kEnum_none:
                    {
                      enumGalgasBool test_8 = kBoolTrue ;
                      if (kBoolTrue == test_8) {
                        test_8 = var_reachableEntityNameSet_6790.getter_hasKey (extractedValue_8578_typeName.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 192)).operator_not (SOURCE_FILE ("graphviz.ggs", 192)).boolEnum () ;
                        if (kBoolTrue == test_8) {
                          var_reachableEntityNameSet_6790.addAssign_operation (extractedValue_8578_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.ggs", 193)) ;
                          var_exploreArray_6852.addAssign_operation (extractedValue_8578_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.ggs", 194)) ;
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
                        test_9 = var_reachableEntityNameSet_6790.getter_hasKey (extractedValue_8578_typeName.readProperty_string () COMMA_SOURCE_FILE ("graphviz.ggs", 198)).operator_not (SOURCE_FILE ("graphviz.ggs", 198)).boolEnum () ;
                        if (kBoolTrue == test_9) {
                          var_reachableEntityNameSet_6790.addAssign_operation (extractedValue_8578_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.ggs", 199)) ;
                          var_exploreArray_6852.addAssign_operation (extractedValue_8578_typeName.readProperty_string ()  COMMA_SOURCE_FILE ("graphviz.ggs", 200)) ;
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
          enumerator_7900.gotoNextObject () ;
        }
      }
    }
  }
  GALGAS_string var_s_9487 = GALGAS_string ("digraph G {\n") ;
  var_s_9487.plusAssign_operation(GALGAS_string ("  rankdir=LR ;\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 209)) ;
  var_s_9487.plusAssign_operation(GALGAS_string ("  node [shape=record fontname=helvetica style=rounded] ;\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 210)) ;
  cEnumerator_stringlist enumerator_9608 (var_nodeList_6904, kENUMERATION_UP) ;
  while (enumerator_9608.hasCurrentObject ()) {
    var_s_9487.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_9608.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 212)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 212)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 212)) ;
    enumerator_9608.gotoNextObject () ;
  }
  cEnumerator_stringlist enumerator_9672 (var_arrowList_6936, kENUMERATION_UP) ;
  while (enumerator_9672.hasCurrentObject ()) {
    var_s_9487.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_9672.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 215)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 215)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 215)) ;
    enumerator_9672.gotoNextObject () ;
  }
  var_s_9487.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 217)) ;
  GALGAS_string var_filePath_9751 = constinArgument_inSourceFileDirectory.add_operation (GALGAS_string ("/models/strong-"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 218)).add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 218)).add_operation (GALGAS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 218)) ;
  GALGAS_string var_temp_9838 = var_filePath_9751.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("graphviz.ggs", 219)) ;
  var_temp_9838.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 219)) ;
  GALGAS_bool joker_9963 ; // Joker input parameter
  var_s_9487.method_writeToFileWhenDifferentContents (var_filePath_9751, joker_9963, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 220)) ;
  var_filePath_9751 = constinArgument_inSourceFileDirectory.add_operation (GALGAS_string ("/models/strong-dep-"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 222)).add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 222)).add_operation (GALGAS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 222)) ;
  GALGAS_string var_temp_32__10077 = var_entityStrongReferenceGraph_6985.getter_graphviz (SOURCE_FILE ("graphviz.ggs", 223)) ;
  GALGAS_bool joker_10176 ; // Joker input parameter
  var_temp_32__10077.method_writeToFileWhenDifferentContents (var_filePath_9751, joker_10176, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 223)) ;
  GALGAS_stringlist var_undefinedNodeList_10218 = var_entityStrongReferenceGraph_6985.getter_undefinedNodeKeyList (SOURCE_FILE ("graphviz.ggs", 225)) ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = GALGAS_bool (kIsStrictSup, var_undefinedNodeList_10218.getter_count (SOURCE_FILE ("graphviz.ggs", 226)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_10) {
      GALGAS_string var_s_10338 = GALGAS_string ("for ").add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 227)).add_operation (GALGAS_string (" graph , the following entities are not defined"), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 227)) ;
      cEnumerator_stringlist enumerator_10429 (var_undefinedNodeList_10218, kENUMERATION_UP) ;
      while (enumerator_10429.hasCurrentObject ()) {
        var_s_10338.plusAssign_operation(GALGAS_string ("\n -- ").add_operation (enumerator_10429.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 229)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 229)) ;
        enumerator_10429.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("graphviz.ggs", 231)), var_s_10338, fixItArray11  COMMA_SOURCE_FILE ("graphviz.ggs", 231)) ;
    }
  }
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    test_12 = GALGAS_bool (kIsEqual, var_undefinedNodeList_10218.getter_count (SOURCE_FILE ("graphviz.ggs", 234)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_12) {
      GALGAS_lstringlist temp_13 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("graphviz.ggs", 235)) ;
      temp_13.addAssign_operation (GALGAS_lstring::constructor_new (constinArgument_inRootEntityName, GALGAS_location::constructor_nowhere (SOURCE_FILE ("graphviz.ggs", 235))  COMMA_SOURCE_FILE ("graphviz.ggs", 235))  COMMA_SOURCE_FILE ("graphviz.ggs", 235)) ;
      GALGAS_lstringlist var_accessibleNodeList_10598 = var_entityStrongReferenceGraph_6985.getter_accessibleNodesFrom (temp_13, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("graphviz.ggs", 235)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 235)) ;
      GALGAS_stringset var_accessibleNodeSet_10716 = GALGAS_stringset::constructor_setWithLStringList (var_accessibleNodeList_10598  COMMA_SOURCE_FILE ("graphviz.ggs", 236)) ;
      cEnumerator_stringlist enumerator_10796 (var_nodeList_6904, kENUMERATION_UP) ;
      while (enumerator_10796.hasCurrentObject ()) {
        enumGalgasBool test_14 = kBoolTrue ;
        if (kBoolTrue == test_14) {
          test_14 = var_accessibleNodeSet_10716.getter_hasKey (enumerator_10796.current_mValue (HERE) COMMA_SOURCE_FILE ("graphviz.ggs", 238)).operator_not (SOURCE_FILE ("graphviz.ggs", 238)).boolEnum () ;
          if (kBoolTrue == test_14) {
            TC_Array <C_FixItDescription> fixItArray15 ;
            inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("graphviz.ggs", 239)), enumerator_10796.current_mValue (HERE).add_operation (GALGAS_string (" entity is not reachable via strong reference from "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 239)).add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 239)), fixItArray15  COMMA_SOURCE_FILE ("graphviz.ggs", 239)) ;
          }
        }
        enumerator_10796.gotoNextObject () ;
      }
    }
  }
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    test_16 = GALGAS_bool (kIsEqual, var_undefinedNodeList_10218.getter_count (SOURCE_FILE ("graphviz.ggs", 244)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_16) {
      GALGAS_lstringlist var_unsortedNodeList_11135 ;
      GALGAS_stringlist joker_11113 ; // Joker input parameter
      var_entityStrongReferenceGraph_6985.method_circularities (joker_11113, var_unsortedNodeList_11135 COMMA_SOURCE_FILE ("graphviz.ggs", 245)) ;
      enumGalgasBool test_17 = kBoolTrue ;
      if (kBoolTrue == test_17) {
        test_17 = GALGAS_bool (kIsStrictSup, var_unsortedNodeList_11135.getter_count (SOURCE_FILE ("graphviz.ggs", 246)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_17) {
          GALGAS_string var_s_11205 = GALGAS_string ("for ").add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 247)).add_operation (GALGAS_string (" graph, "), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 247)).add_operation (var_unsortedNodeList_11135.getter_count (SOURCE_FILE ("graphviz.ggs", 247)).getter_string (SOURCE_FILE ("graphviz.ggs", 247)), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 247)) ;
          var_s_11205.plusAssign_operation(GALGAS_string (" entities are involved in a strong reference cycle"), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 248)) ;
          cEnumerator_lstringlist enumerator_11351 (var_unsortedNodeList_11135, kENUMERATION_UP) ;
          while (enumerator_11351.hasCurrentObject ()) {
            var_s_11205.plusAssign_operation(GALGAS_string ("\n -- ").add_operation (enumerator_11351.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 250)), inCompiler  COMMA_SOURCE_FILE ("graphviz.ggs", 250)) ;
            enumerator_11351.gotoNextObject () ;
          }
          TC_Array <C_FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticWarning (GALGAS_location::constructor_nowhere (SOURCE_FILE ("graphviz.ggs", 252)), var_s_11205, fixItArray18  COMMA_SOURCE_FILE ("graphviz.ggs", 252)) ;
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
    GALGAS_bool var_hasRunAction_8805 ;
    GALGAS_bool var_handlesTableValueBinding_8830 ;
    GALGAS_bool var_hasEnabled_8867 ;
    GALGAS_bool var_hasHidden_8890 ;
    GALGAS_bool var_handlesGraphicControllerBinding_8912 ;
    const GALGAS_autoLayoutViewClassDeclarationAST temp_11 = this ;
    GALGAS_lstring joker_8790 ; // Joker input parameter
    GALGAS_bool joker_8951_3 ; // Joker input parameter
    GALGAS_autoLayoutClassParameterList joker_8951_2 ; // Joker input parameter
    GALGAS_astAutoLayoutViewFunctionMap joker_8951_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mAutolayoutViewClassMap ().method_searchKey (temp_11.readProperty_mSuperClassName (), joker_8790, var_hasRunAction_8805, var_handlesTableValueBinding_8830, var_hasEnabled_8867, var_hasHidden_8890, var_handlesGraphicControllerBinding_8912, joker_8951_3, joker_8951_2, joker_8951_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 249)) ;
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      const GALGAS_autoLayoutViewClassDeclarationAST temp_13 = this ;
      test_12 = temp_13.readProperty_mHasRunAction ().operator_and (var_hasRunAction_8805 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 259)).boolEnum () ;
      if (kBoolTrue == test_12) {
        const GALGAS_autoLayoutViewClassDeclarationAST temp_14 = this ;
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mClassName ().readProperty_location (), GALGAS_string ("$run binding already defined in superclass"), fixItArray15  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 260)) ;
      }
    }
    enumGalgasBool test_16 = kBoolTrue ;
    if (kBoolTrue == test_16) {
      const GALGAS_autoLayoutViewClassDeclarationAST temp_17 = this ;
      test_16 = temp_17.readProperty_mHandlesTableValueBinding ().operator_and (var_handlesTableValueBinding_8830 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 262)).boolEnum () ;
      if (kBoolTrue == test_16) {
        const GALGAS_autoLayoutViewClassDeclarationAST temp_18 = this ;
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (temp_18.readProperty_mClassName ().readProperty_location (), GALGAS_string ("$tableview binding already defined in superclass"), fixItArray19  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 263)) ;
      }
    }
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      const GALGAS_autoLayoutViewClassDeclarationAST temp_21 = this ;
      test_20 = temp_21.readProperty_mHasEnabled ().operator_and (var_hasEnabled_8867 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 265)).boolEnum () ;
      if (kBoolTrue == test_20) {
        const GALGAS_autoLayoutViewClassDeclarationAST temp_22 = this ;
        TC_Array <C_FixItDescription> fixItArray23 ;
        inCompiler->emitSemanticError (temp_22.readProperty_mClassName ().readProperty_location (), GALGAS_string ("$enabled binding already defined in superclass"), fixItArray23  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 266)) ;
      }
    }
    enumGalgasBool test_24 = kBoolTrue ;
    if (kBoolTrue == test_24) {
      const GALGAS_autoLayoutViewClassDeclarationAST temp_25 = this ;
      test_24 = temp_25.readProperty_mHasHidden ().operator_and (var_hasHidden_8890 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 268)).boolEnum () ;
      if (kBoolTrue == test_24) {
        const GALGAS_autoLayoutViewClassDeclarationAST temp_26 = this ;
        TC_Array <C_FixItDescription> fixItArray27 ;
        inCompiler->emitSemanticError (temp_26.readProperty_mClassName ().readProperty_location (), GALGAS_string ("$hidden binding already defined in superclass"), fixItArray27  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 269)) ;
      }
    }
    enumGalgasBool test_28 = kBoolTrue ;
    if (kBoolTrue == test_28) {
      const GALGAS_autoLayoutViewClassDeclarationAST temp_29 = this ;
      test_28 = temp_29.readProperty_mHandlesGraphicControllerBinding ().operator_and (var_handlesGraphicControllerBinding_8912 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 271)).boolEnum () ;
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
    ioArgument_ioSemanticContext.mProperty_mAutolayoutViewClassMap.setter_insertKey (temp_32.readProperty_mClassName (), temp_33.readProperty_mSuperClassName (), temp_34.readProperty_mHasRunAction ().operator_or (var_hasRunAction_8805 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 278)), temp_35.readProperty_mHandlesTableValueBinding ().operator_or (var_handlesTableValueBinding_8830 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 279)), temp_36.readProperty_mHasEnabled ().operator_or (var_hasEnabled_8867 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 280)), temp_37.readProperty_mHasHidden ().operator_or (var_hasHidden_8890 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 281)), temp_38.readProperty_mHandlesGraphicControllerBinding ().operator_or (var_handlesGraphicControllerBinding_8912 COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 282)), temp_39.readProperty_mUserDefined (), temp_40.readProperty_mParameterList (), temp_41.readProperty_mAutoLayoutViewFunctionMap (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 275)) ;
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
  cEnumerator_autoLayoutViewClassBindingSpecificationList enumerator_3818 (constinArgument_inBindingSpecificationListMap, kENUMERATION_UP) ;
  while (enumerator_3818.hasCurrentObject ()) {
    GALGAS_outletBindingSpecificationModelList var_outletBindingSpecificationModelList_3919 = GALGAS_outletBindingSpecificationModelList::constructor_emptyList (SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 97)) ;
    cEnumerator_outletClassBindingSpecificationModelList enumerator_3984 (enumerator_3818.current_mOutletClassBindingSpecificationModelList (HERE), kENUMERATION_UP) ;
    while (enumerator_3984.hasCurrentObject ()) {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (kIsEqual, enumerator_3984.current_mModelTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string ("enum"))).boolEnum () ;
        if (kBoolTrue == test_0) {
          var_outletBindingSpecificationModelList_3919.addAssign_operation (GALGAS_typeKind::constructor_enumType (GALGAS_string::makeEmptyString (), GALGAS_enumConstantMap::constructor_emptyMap (SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 101)), GALGAS_enumFuncMap::constructor_emptyMap (SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 101))  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 101)), enumerator_3984.current_mModelShouldBeWritableProperty (HERE)  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 100)) ;
        }
      }
      if (kBoolFalse == test_0) {
        GALGAS_classKind var_classKind_4378 ;
        GALGAS_propertyMap joker_4389_3 ; // Joker input parameter
        GALGAS_actionMap joker_4389_2 ; // Joker input parameter
        GALGAS_propertyGenerationList joker_4389_1 ; // Joker input parameter
        ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (enumerator_3984.current_mModelTypeName (HERE), var_classKind_4378, joker_4389_3, joker_4389_2, joker_4389_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 104)) ;
        GALGAS_typeKind var_typeKind_4416 ;
        switch (var_classKind_4378.enumValue ()) {
        case GALGAS_classKind::kNotBuilt:
          break ;
        case GALGAS_classKind::kEnum_prefs:
          {
            TC_Array <C_FixItDescription> fixItArray1 ;
            inCompiler->emitSemanticError (enumerator_3984.current_mModelTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray1  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 108)) ;
            var_typeKind_4416.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_classKind::kEnum_atomic:
          {
            const cEnumAssociatedValues_classKind_atomic * extractPtr_4616 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_4378.unsafePointer ()) ;
            const GALGAS_typeKind extractedValue_4587_kind = extractPtr_4616->mAssociatedValue0 ;
            var_typeKind_4416 = extractedValue_4587_kind ;
          }
          break ;
        case GALGAS_classKind::kEnum_document:
          {
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (enumerator_3984.current_mModelTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray2  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 112)) ;
            var_typeKind_4416.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_classKind::kEnum_entity:
          {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (enumerator_3984.current_mModelTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray3  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 114)) ;
            var_typeKind_4416.drop () ; // Release error dropped variable
          }
          break ;
        }
        var_outletBindingSpecificationModelList_3919.addAssign_operation (var_typeKind_4416, enumerator_3984.current_mModelShouldBeWritableProperty (HERE)  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 116)) ;
      }
      enumerator_3984.gotoNextObject () ;
    }
    GALGAS_controllerBindingOptionDecoratedList var_controllerBindingOptionDecoratedList_5011 = GALGAS_controllerBindingOptionDecoratedList::constructor_emptyList (SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 119)) ;
    cEnumerator_controllerBindingOptionList enumerator_5074 (enumerator_3818.current_mBindingOptionList (HERE), kENUMERATION_UP) ;
    while (enumerator_5074.hasCurrentObject ()) {
      GALGAS_classKind var_classKind_5194 ;
      GALGAS_propertyMap joker_5205_3 ; // Joker input parameter
      GALGAS_actionMap joker_5205_2 ; // Joker input parameter
      GALGAS_propertyGenerationList joker_5205_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (enumerator_5074.current_mOptionTypeName (HERE), var_classKind_5194, joker_5205_3, joker_5205_2, joker_5205_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 121)) ;
      GALGAS_typeKind var_typeKind_5230 ;
      switch (var_classKind_5194.enumValue ()) {
      case GALGAS_classKind::kNotBuilt:
        break ;
      case GALGAS_classKind::kEnum_prefs:
        {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_5074.current_mOptionTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray4  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 125)) ;
          var_typeKind_5230.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_classKind::kEnum_atomic:
        {
          const cEnumAssociatedValues_classKind_atomic * extractPtr_5421 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_5194.unsafePointer ()) ;
          const GALGAS_typeKind extractedValue_5394_kind = extractPtr_5421->mAssociatedValue0 ;
          var_typeKind_5230 = extractedValue_5394_kind ;
        }
        break ;
      case GALGAS_classKind::kEnum_document:
        {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (enumerator_5074.current_mOptionTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray5  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 129)) ;
          var_typeKind_5230.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_classKind::kEnum_entity:
        {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (enumerator_5074.current_mOptionTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 131)) ;
          var_typeKind_5230.drop () ; // Release error dropped variable
        }
        break ;
      }
      var_controllerBindingOptionDecoratedList_5011.addAssign_operation (var_typeKind_5230, enumerator_5074.current_mOptionName (HERE)  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 133)) ;
      enumerator_5074.gotoNextObject () ;
    }
    GALGAS_autoLayoutViewBindingSpecificationMap var_bindingMap_5808 ;
    GALGAS_lstring var_outletSuperClassName_5836 ;
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = ioArgument_ioSemanticContext.readProperty_mAutoLayoutBindingSpecificationMap ().getter_hasKey (enumerator_3818.current_mOutletClassName (HERE).readProperty_string () COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 138)).boolEnum () ;
      if (kBoolTrue == test_7) {
        {
        ioArgument_ioSemanticContext.mProperty_mAutoLayoutBindingSpecificationMap.setter_removeKey (enumerator_3818.current_mOutletClassName (HERE), var_outletSuperClassName_5836, var_bindingMap_5808, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 139)) ;
        }
      }
    }
    if (kBoolFalse == test_7) {
      var_bindingMap_5808 = GALGAS_autoLayoutViewBindingSpecificationMap::constructor_emptyMap (SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 141)) ;
      GALGAS_bool joker_6212_8 ; // Joker input parameter
      GALGAS_bool joker_6212_7 ; // Joker input parameter
      GALGAS_bool joker_6212_6 ; // Joker input parameter
      GALGAS_bool joker_6212_5 ; // Joker input parameter
      GALGAS_bool joker_6212_4 ; // Joker input parameter
      GALGAS_bool joker_6212_3 ; // Joker input parameter
      GALGAS_autoLayoutClassParameterList joker_6212_2 ; // Joker input parameter
      GALGAS_astAutoLayoutViewFunctionMap joker_6212_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mAutolayoutViewClassMap ().method_searchKey (enumerator_3818.current_mOutletClassName (HERE), var_outletSuperClassName_5836, joker_6212_8, joker_6212_7, joker_6212_6, joker_6212_5, joker_6212_4, joker_6212_3, joker_6212_2, joker_6212_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 142)) ;
    }
    {
    var_bindingMap_5808.setter_insertKey (enumerator_3818.current_mBindingName (HERE), var_outletBindingSpecificationModelList_3919, var_controllerBindingOptionDecoratedList_5011, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 144)) ;
    }
    {
    ioArgument_ioSemanticContext.mProperty_mAutoLayoutBindingSpecificationMap.setter_insertKey (enumerator_3818.current_mOutletClassName (HERE), var_outletSuperClassName_5836, var_bindingMap_5808, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 149)) ;
    }
    enumerator_3818.gotoNextObject () ;
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
  GALGAS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_29100 ;
  const GALGAS_astComputedHorizontalViewDeclaration temp_0 = this ;
  extensionMethod_checkViewFunctionCallList (temp_0.readProperty_mFunctionCallList (), constinArgument_inSemanticContext.readProperty_mAutoLayoutHStackFunctionMap (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_29100, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 661)) ;
  GALGAS_autoLayoutViewInstructionGenerationList var_instructionList_29164 = GALGAS_autoLayoutViewInstructionGenerationList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 677)) ;
  const GALGAS_astComputedHorizontalViewDeclaration temp_1 = this ;
  cEnumerator_astViewInstructionList enumerator_29192 (temp_1.readProperty_mInstructionList (), kENUMERATION_UP) ;
  while (enumerator_29192.hasCurrentObject ()) {
    GALGAS_abstractViewInstructionGeneration var_generatedInstruction_29620 ;
    callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) enumerator_29192.current_mInstruction (HERE).ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_generatedInstruction_29620, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 679)) ;
    var_instructionList_29164.addAssign_operation (var_generatedInstruction_29620  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 694)) ;
    enumerator_29192.gotoNextObject () ;
  }
  const GALGAS_astComputedHorizontalViewDeclaration temp_2 = this ;
  outArgument_outGeneration = GALGAS_computedHorizontalViewGeneration::constructor_new (var_funcCallList_29100, var_instructionList_29164, temp_2.readProperty_mNewStackViewDeclarationList ()  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 696)) ;
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
  GALGAS_autoLayoutViewInstructionGenerationList var_instructionList_31110 = GALGAS_autoLayoutViewInstructionGenerationList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 716)) ;
  GALGAS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_31617 ;
  const GALGAS_astComputedVerticalViewDeclaration temp_0 = this ;
  extensionMethod_checkViewFunctionCallList (temp_0.readProperty_mFunctionCallList (), constinArgument_inSemanticContext.readProperty_mAutoLayoutVStackFunctionMap (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_31617, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 717)) ;
  const GALGAS_astComputedVerticalViewDeclaration temp_1 = this ;
  cEnumerator_astViewInstructionList enumerator_31641 (temp_1.readProperty_mInstructionList (), kENUMERATION_UP) ;
  while (enumerator_31641.hasCurrentObject ()) {
    GALGAS_abstractViewInstructionGeneration var_generatedInstruction_32068 ;
    callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) enumerator_31641.current_mInstruction (HERE).ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_generatedInstruction_32068, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 734)) ;
    var_instructionList_31110.addAssign_operation (var_generatedInstruction_32068  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 749)) ;
    enumerator_31641.gotoNextObject () ;
  }
  const GALGAS_astComputedVerticalViewDeclaration temp_2 = this ;
  outArgument_outGeneration = GALGAS_computedVerticalViewGeneration::constructor_new (var_funcCallList_31617, var_instructionList_31110, temp_2.readProperty_mNewStackViewDeclarationList ()  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 751)) ;
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
  outArgument_outInstruction = GALGAS_autoLayoutLocalViewInstructionGeneration::constructor_new (temp_0.readProperty_mLocalView ().readProperty_string ()  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 844)) ;
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
  GALGAS_autoLayoutClassParameterList var_formalParameterList_40053 ;
  GALGAS_astAutoLayoutViewFunctionMap var_functionMap_40084 ;
  const GALGAS_astComputedViewInstruction temp_0 = this ;
  GALGAS_lstring joker_40038_7 ; // Joker input parameter
  GALGAS_bool joker_40038_6 ; // Joker input parameter
  GALGAS_bool joker_40038_5 ; // Joker input parameter
  GALGAS_bool joker_40038_4 ; // Joker input parameter
  GALGAS_bool joker_40038_3 ; // Joker input parameter
  GALGAS_bool joker_40038_2 ; // Joker input parameter
  GALGAS_bool joker_40038_1 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mAutolayoutViewClassMap ().method_searchKey (temp_0.readProperty_mAutoLayoutViewClassName (), joker_40038_7, joker_40038_6, joker_40038_5, joker_40038_4, joker_40038_3, joker_40038_2, joker_40038_1, var_formalParameterList_40053, var_functionMap_40084, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 863)) ;
  GALGAS_autoLayoutViewInstructionGenerationParameterList var_parameterList_40156 = GALGAS_autoLayoutViewInstructionGenerationParameterList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 869)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_astComputedViewInstruction temp_2 = this ;
    test_1 = GALGAS_bool (kIsNotEqual, var_formalParameterList_40053.getter_count (SOURCE_FILE ("auto-layout-view.ggs", 870)).objectCompare (temp_2.readProperty_mParameterList ().getter_count (SOURCE_FILE ("auto-layout-view.ggs", 870)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_astComputedViewInstruction temp_3 = this ;
      const GALGAS_astComputedViewInstruction temp_4 = this ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mAutoLayoutViewClassName ().readProperty_location (), var_formalParameterList_40053.getter_count (SOURCE_FILE ("auto-layout-view.ggs", 872)).getter_string (SOURCE_FILE ("auto-layout-view.ggs", 872)).add_operation (GALGAS_string (" parameter(s) required, "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 872)).add_operation (temp_4.readProperty_mParameterList ().getter_count (SOURCE_FILE ("auto-layout-view.ggs", 872)).getter_string (SOURCE_FILE ("auto-layout-view.ggs", 872)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 872)).add_operation (GALGAS_string (" provided"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 872)), fixItArray5  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 871)) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_astComputedViewInstruction temp_6 = this ;
    cEnumerator_astAutoLayoutViewInstructionParameterList enumerator_40432 (temp_6.readProperty_mParameterList (), kENUMERATION_UP) ;
    cEnumerator_autoLayoutClassParameterList enumerator_40475 (var_formalParameterList_40053, kENUMERATION_UP) ;
    while (enumerator_40432.hasCurrentObject () && enumerator_40475.hasCurrentObject ()) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        GALGAS_lstring var_enumTypeName_40558 ;
        const bool optionalResult40538 = enumerator_40475.current_mParameterType (HERE).optional_typeEnum (var_enumTypeName_40558) ;
        if (!optionalResult40538) {
          test_7 = kBoolFalse ;
        }
        if (kBoolTrue == test_7) {
          GALGAS_lstring var_constantName_40603 ;
          const bool optionalResult40583 = enumerator_40432.current_mParameterType (HERE).optional_typeEnum (var_constantName_40603) ;
          if (!optionalResult40583) {
            test_7 = kBoolFalse ;
          }
          if (kBoolTrue == test_7) {
            GALGAS_classKind var_typeKind_40671 ;
            GALGAS_propertyMap joker_40681_3 ; // Joker input parameter
            GALGAS_actionMap joker_40681_2 ; // Joker input parameter
            GALGAS_propertyGenerationList joker_40681_1 ; // Joker input parameter
            constinArgument_inClassMap.method_searchKey (var_enumTypeName_40558, var_typeKind_40671, joker_40681_3, joker_40681_2, joker_40681_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 876)) ;
            enumGalgasBool test_8 = kBoolTrue ;
            if (kBoolTrue == test_8) {
              GALGAS_typeKind var_classKind_40729 ;
              const bool optionalResult40711 = var_typeKind_40671.optional_atomic (var_classKind_40729) ;
              if (!optionalResult40711) {
                test_8 = kBoolFalse ;
              }
              if (kBoolTrue == test_8) {
                GALGAS_string var_unused_0_40767 ;
                GALGAS_enumConstantMap var_constantMap_40787 ;
                GALGAS_enumFuncMap var_unused_0_40801 ;
                const bool optionalResult40756 = var_classKind_40729.optional_enumType (var_unused_0_40767, var_constantMap_40787, var_unused_0_40801) ;
                if (!optionalResult40756) {
                  test_8 = kBoolFalse ;
                }
                if (kBoolTrue == test_8) {
                  GALGAS_uint joker_40856 ; // Joker input parameter
                  var_constantMap_40787.method_searchKey (var_constantName_40603, joker_40856, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 878)) ;
                }
              }
            }
            if (kBoolFalse == test_8) {
              TC_Array <C_FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (var_enumTypeName_40558.readProperty_location (), GALGAS_string ("this type name is not an enum"), fixItArray9  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 880)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_7) {
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          test_10 = GALGAS_bool (kIsNotEqual, enumerator_40432.current_mParameterType (HERE).objectCompare (enumerator_40475.current_mParameterType (HERE))).boolEnum () ;
          if (kBoolTrue == test_10) {
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (enumerator_40432.current_mParameterName (HERE).readProperty_location (), GALGAS_string ("the formal parameter requires ").add_operation (extensionGetter_string (enumerator_40475.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 883)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 883)).add_operation (GALGAS_string (", actual parameter is "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 883)).add_operation (extensionGetter_string (enumerator_40432.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 883)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 883)), fixItArray11  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 883)) ;
          }
        }
      }
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = GALGAS_bool (kIsNotEqual, enumerator_40432.current_mParameterName (HERE).readProperty_string ().objectCompare (enumerator_40475.current_mParameterName (HERE).readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_12) {
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (enumerator_40432.current_mParameterName (HERE).readProperty_location (), GALGAS_string ("the parameter name should be '").add_operation (enumerator_40475.current_mParameterName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 886)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 886)), fixItArray13  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 886)) ;
        }
      }
      switch (enumerator_40432.current_mParameter (HERE).enumValue ()) {
      case GALGAS_astAutoLayoutViewInstructionParameterValue::kNotBuilt:
        break ;
      case GALGAS_astAutoLayoutViewInstructionParameterValue::kEnum_viewFunc:
        {
          const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_viewFunc * extractPtr_41986 = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_viewFunc *) (enumerator_40432.current_mParameter (HERE).unsafePointer ()) ;
          const GALGAS_astAbstractViewInstructionDeclaration extractedValue_41267_instruction = extractPtr_41986->mAssociatedValue0 ;
          GALGAS_abstractViewInstructionGeneration var_viewInstruction_41789 ;
          callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) extractedValue_41267_instruction.ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_viewInstruction_41789, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 890)) ;
          var_parameterList_40156.addAssign_operation (enumerator_40432.current_mParameterName (HERE).readProperty_string (), GALGAS_string ("self.computeImplicitView_").add_operation (ioArgument_ioImplicitViewFunctionGenerationList.getter_count (SOURCE_FILE ("auto-layout-view.ggs", 905)).getter_string (SOURCE_FILE ("auto-layout-view.ggs", 905)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 905)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 905))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 905)) ;
          ioArgument_ioImplicitViewFunctionGenerationList.addAssign_operation (var_viewInstruction_41789  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 906)) ;
        }
        break ;
      case GALGAS_astAutoLayoutViewInstructionParameterValue::kEnum_entity:
        {
          const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_entity * extractPtr_42261 = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_entity *) (enumerator_40432.current_mParameter (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_42021_entityName = extractPtr_42261->mAssociatedValue0 ;
          GALGAS_classKind var_classKind_42082 ;
          GALGAS_propertyMap joker_42093_3 ; // Joker input parameter
          GALGAS_actionMap joker_42093_2 ; // Joker input parameter
          GALGAS_propertyGenerationList joker_42093_1 ; // Joker input parameter
          constinArgument_inClassMap.method_searchKey (extractedValue_42021_entityName, var_classKind_42082, joker_42093_3, joker_42093_2, joker_42093_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 908)) ;
          enumGalgasBool test_14 = kBoolTrue ;
          if (kBoolTrue == test_14) {
            test_14 = var_classKind_42082.getter_isEntity (SOURCE_FILE ("auto-layout-view.ggs", 909)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 909)).boolEnum () ;
            if (kBoolTrue == test_14) {
              TC_Array <C_FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (extractedValue_42021_entityName.readProperty_location (), GALGAS_string ("an entity is required here"), fixItArray15  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 910)) ;
            }
          }
          var_parameterList_40156.addAssign_operation (enumerator_40432.current_mParameterName (HERE).readProperty_string (), extractedValue_42021_entityName.readProperty_string ().add_operation (GALGAS_string (".self"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 912))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 912)) ;
        }
        break ;
      case GALGAS_astAutoLayoutViewInstructionParameterValue::kEnum_string:
        {
          const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_string * extractPtr_42335 = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_string *) (enumerator_40432.current_mParameter (HERE).unsafePointer ()) ;
          const GALGAS_string extractedValue_42288_stringValue = extractPtr_42335->mAssociatedValue0 ;
          var_parameterList_40156.addAssign_operation (enumerator_40432.current_mParameterName (HERE).readProperty_string (), extractedValue_42288_stringValue  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 914)) ;
        }
        break ;
      case GALGAS_astAutoLayoutViewInstructionParameterValue::kEnum_menuItem:
        {
          const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_menuItem * extractPtr_43696 = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_menuItem *) (enumerator_40432.current_mParameter (HERE).unsafePointer ()) ;
          const GALGAS_string extractedValue_42368_title = extractPtr_43696->mAssociatedValue0 ;
          const GALGAS_runActionDescriptor extractedValue_42375_run = extractPtr_43696->mAssociatedValue1 ;
          const GALGAS_multipleBindingDescriptor extractedValue_42380_enabledBinding = extractPtr_43696->mAssociatedValue2 ;
          GALGAS_autolayoutRunBindingForGeneration var_runBindingGeneration_42684 ;
          {
          routine_analyzeAutoLayoutRunBinding (extractedValue_42375_run, GALGAS_bool (true), constinArgument_inPreferences, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-view.ggs", 920)), constinArgument_inActionMap, constinArgument_inObservablePropertyMap, constinArgument_inReceiverSwiftTypeName, var_runBindingGeneration_42684, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 916)) ;
          }
          GALGAS_autolayoutEnabledBindingForGeneration var_enabledBindingGeneration_43020 ;
          {
          routine_analyzeAutoLayoutEnableBinding (extractedValue_42380_enabledBinding, GALGAS_bool (true), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_enabledBindingGeneration_43020, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 926)) ;
          }
          GALGAS_string var_s_43067 = GALGAS_string ("AutoLayoutMenuItemDescriptor (title: ").add_operation (extractedValue_42368_title.getter_utf_38_Representation (SOURCE_FILE ("auto-layout-view.ggs", 936)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 936)) ;
          switch (var_runBindingGeneration_42684.enumValue ()) {
          case GALGAS_autolayoutRunBindingForGeneration::kNotBuilt:
            break ;
          case GALGAS_autolayoutRunBindingForGeneration::kEnum_none:
            {
              var_s_43067.plusAssign_operation(GALGAS_string (", target: nil, selector: nil"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 939)) ;
            }
            break ;
          case GALGAS_autolayoutRunBindingForGeneration::kEnum_run:
            {
              const cEnumAssociatedValues_autolayoutRunBindingForGeneration_run * extractPtr_43409 = (const cEnumAssociatedValues_autolayoutRunBindingForGeneration_run *) (var_runBindingGeneration_42684.unsafePointer ()) ;
              const GALGAS_string extractedValue_43262_targetName = extractPtr_43409->mAssociatedValue0 ;
              const GALGAS_string extractedValue_43274_actionName = extractPtr_43409->mAssociatedValue1 ;
              const GALGAS_string extractedValue_43286_runTargetName = extractPtr_43409->mAssociatedValue2 ;
              var_s_43067.plusAssign_operation(GALGAS_string (", target: ").add_operation (extractedValue_43262_targetName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 941)).add_operation (GALGAS_string (", selector: #selector ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 941)).add_operation (extractedValue_43286_runTargetName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 941)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 941)).add_operation (extractedValue_43274_actionName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 941)).add_operation (GALGAS_string (" (_:))"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 941)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 941)) ;
            }
            break ;
          }
          switch (var_enabledBindingGeneration_43020.enumValue ()) {
          case GALGAS_autolayoutEnabledBindingForGeneration::kNotBuilt:
            break ;
          case GALGAS_autolayoutEnabledBindingForGeneration::kEnum_none:
            {
              var_s_43067.plusAssign_operation(GALGAS_string (", enableBinding: .alwaysTrue"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 945)) ;
            }
            break ;
          case GALGAS_autolayoutEnabledBindingForGeneration::kEnum_enabled:
            {
              const cEnumAssociatedValues_autolayoutEnabledBindingForGeneration_enabled * extractPtr_43633 = (const cEnumAssociatedValues_autolayoutEnabledBindingForGeneration_enabled *) (var_enabledBindingGeneration_43020.unsafePointer ()) ;
              const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration extractedValue_43559_binding = extractPtr_43633->mAssociatedValue0 ;
              var_s_43067.plusAssign_operation(GALGAS_string (", enableBinding: ").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) extractedValue_43559_binding.ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 947)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 947)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 947)) ;
            }
            break ;
          }
          var_s_43067.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 949)) ;
          var_parameterList_40156.addAssign_operation (enumerator_40432.current_mParameterName (HERE).readProperty_string (), var_s_43067  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 950)) ;
        }
        break ;
      case GALGAS_astAutoLayoutViewInstructionParameterValue::kEnum_enumFunc:
        {
          const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_enumFunc * extractPtr_44305 = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_enumFunc *) (enumerator_40432.current_mParameter (HERE).unsafePointer ()) ;
          const GALGAS_lstring extractedValue_43719_enumTypeName = extractPtr_44305->mAssociatedValue0 ;
          const GALGAS_lstring extractedValue_43733_funcName = extractPtr_44305->mAssociatedValue1 ;
          GALGAS_classKind var_type_43811 ;
          GALGAS_propertyMap joker_43817_3 ; // Joker input parameter
          GALGAS_actionMap joker_43817_2 ; // Joker input parameter
          GALGAS_propertyGenerationList joker_43817_1 ; // Joker input parameter
          constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_43719_enumTypeName, var_type_43811, joker_43817_3, joker_43817_2, joker_43817_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 952)) ;
          enumGalgasBool test_16 = kBoolTrue ;
          if (kBoolTrue == test_16) {
            test_16 = var_type_43811.getter_isAtomic (SOURCE_FILE ("auto-layout-view.ggs", 953)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 953)).boolEnum () ;
            if (kBoolTrue == test_16) {
              TC_Array <C_FixItDescription> fixItArray17 ;
              inCompiler->emitSemanticError (extractedValue_43719_enumTypeName.readProperty_location (), GALGAS_string ("this type should be an enum type"), fixItArray17  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 954)) ;
            }
          }
          if (kBoolFalse == test_16) {
            GALGAS_typeKind var_typeKind_43971 ;
            var_type_43811.method_atomic (var_typeKind_43971, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 956)) ;
            enumGalgasBool test_18 = kBoolTrue ;
            if (kBoolTrue == test_18) {
              test_18 = var_typeKind_43971.getter_isEnumType (SOURCE_FILE ("auto-layout-view.ggs", 957)).boolEnum () ;
              if (kBoolTrue == test_18) {
                GALGAS_enumFuncMap var_funcMap_44071 ;
                GALGAS_string joker_44053_2 ; // Joker input parameter
                GALGAS_enumConstantMap joker_44053_1 ; // Joker input parameter
                var_typeKind_43971.method_enumType (joker_44053_2, joker_44053_1, var_funcMap_44071, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 958)) ;
                GALGAS_enumFunAssociationSortedList joker_44121 ; // Joker input parameter
                var_funcMap_44071.method_searchKey (extractedValue_43733_funcName, joker_44121, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 959)) ;
              }
            }
            if (kBoolFalse == test_18) {
              TC_Array <C_FixItDescription> fixItArray19 ;
              inCompiler->emitSemanticError (extractedValue_43719_enumTypeName.readProperty_location (), GALGAS_string ("this type should be an enum type"), fixItArray19  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 961)) ;
            }
          }
          var_parameterList_40156.addAssign_operation (enumerator_40432.current_mParameterName (HERE).readProperty_string (), extractedValue_43719_enumTypeName.readProperty_string ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 964)).add_operation (extractedValue_43733_funcName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 964)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 964))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 964)) ;
        }
        break ;
      }
      enumerator_40432.gotoNextObject () ;
      enumerator_40475.gotoNextObject () ;
    }
  }
  GALGAS_autoLayoutRegularBindingsGenerationList var_regularBindingsGenerationList_44842 ;
  GALGAS_autoLayoutMultipleBindingGenerationList var_multipleBindingGenerationList_44923 ;
  GALGAS_autolayoutRunBindingForGeneration var_runBindingGeneration_44998 ;
  GALGAS_string var_inTableViewBindingGeneration_45037 ;
  GALGAS_autoLayoutViewGraphicControllerBindingGeneration var_ebViewGraphicControllerBindingGeneration_45126 ;
  {
  const GALGAS_astComputedViewInstruction temp_20 = this ;
  const GALGAS_astComputedViewInstruction temp_21 = this ;
  const GALGAS_astComputedViewInstruction temp_22 = this ;
  const GALGAS_astComputedViewInstruction temp_23 = this ;
  const GALGAS_astComputedViewInstruction temp_24 = this ;
  const GALGAS_astComputedViewInstruction temp_25 = this ;
  const GALGAS_astComputedViewInstruction temp_26 = this ;
  routine_analyzeAutoLayoutBinding (constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, temp_20.readProperty_mAutoLayoutViewClassName (), temp_21.readProperty_mTableValueBinding (), temp_22.readProperty_mRunActionDescriptor (), temp_23.readProperty_mEnabledBindingDescriptor (), temp_24.readProperty_mHiddenBindingDescriptor (), temp_25.readProperty_mGraphicController (), temp_26.readProperty_mRegularBindingList (), var_regularBindingsGenerationList_44842, var_multipleBindingGenerationList_44923, var_runBindingGeneration_44998, var_inTableViewBindingGeneration_45037, var_ebViewGraphicControllerBindingGeneration_45126, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 969)) ;
  }
  GALGAS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_45622 ;
  const GALGAS_astComputedViewInstruction temp_27 = this ;
  extensionMethod_checkViewFunctionCallList (temp_27.readProperty_mFunctionCallList (), var_functionMap_40084, constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_45622, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 993)) ;
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
  outArgument_outInstruction = GALGAS_autoLayoutComputedViewInstructionGeneration::constructor_new (temp_37.readProperty_mAutoLayoutViewClassName (), var_parameterList_40156, var_funcCallList_45622, var_regularBindingsGenerationList_44842, var_multipleBindingGenerationList_44923, var_runBindingGeneration_44998, var_inTableViewBindingGeneration_45037, var_ebViewGraphicControllerBindingGeneration_45126, temp_38.readProperty_mConfiguratorName ().readProperty_string (), temp_39.readProperty_mOutletName ().readProperty_string (), temp_40.readProperty_mOutletIsArray ()  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1018)) ;
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
  outArgument_outRegularBindingsGenerationList = GALGAS_autoLayoutRegularBindingsGenerationList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 1058)) ;
  outArgument_outMultipleBindingGenerationList = GALGAS_autoLayoutMultipleBindingGenerationList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 1059)) ;
  outArgument_outTableViewBindingGeneration = GALGAS_string::makeEmptyString () ;
  GALGAS_bool var_handlesRunAction_47757 ;
  GALGAS_bool var_handlesTableViewBinding_47790 ;
  GALGAS_bool var_handlesEnabledBinding_47830 ;
  GALGAS_bool var_handlesHiddenBinding_47868 ;
  GALGAS_bool var_handleGraphicControllerBinding_47905 ;
  GALGAS_lstring joker_47738 ; // Joker input parameter
  GALGAS_bool joker_47941_3 ; // Joker input parameter
  GALGAS_autoLayoutClassParameterList joker_47941_2 ; // Joker input parameter
  GALGAS_astAutoLayoutViewFunctionMap joker_47941_1 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mAutolayoutViewClassMap ().method_searchKey (constinArgument_inTypeName, joker_47738, var_handlesRunAction_47757, var_handlesTableViewBinding_47790, var_handlesEnabledBinding_47830, var_handlesHiddenBinding_47868, var_handleGraphicControllerBinding_47905, joker_47941_3, joker_47941_2, joker_47941_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1061)) ;
  outArgument_outEBViewGraphicControllerBindingGeneration = GALGAS_autoLayoutViewGraphicControllerBindingGeneration::constructor_none (SOURCE_FILE ("auto-layout-view.ggs", 1072)) ;
  switch (constinArgument_inGraphicController.enumValue ()) {
  case GALGAS_graphicController::kNotBuilt:
    break ;
  case GALGAS_graphicController::kEnum_none:
    {
    }
    break ;
  case GALGAS_graphicController::kEnum_defined:
    {
      const cEnumAssociatedValues_graphicController_defined * extractPtr_50221 = (const cEnumAssociatedValues_graphicController_defined *) (constinArgument_inGraphicController.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_48095_controllerName = extractPtr_50221->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_48120_propertyName = extractPtr_50221->mAssociatedValue1 ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = var_handleGraphicControllerBinding_47905.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1076)).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1077)).add_operation (GALGAS_string ("' type does not handle the $graphicController binding"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1077)), fixItArray1  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1077)) ;
        }
      }
      if (kBoolFalse == test_0) {
        GALGAS_propertyKind var_kind_48388 ;
        GALGAS_actionMap joker_48402_2 ; // Joker input parameter
        GALGAS_bool joker_48402_1 ; // Joker input parameter
        constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_48095_controllerName, var_kind_48388, joker_48402_2, joker_48402_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1079)) ;
        switch (var_kind_48388.enumValue ()) {
        case GALGAS_propertyKind::kNotBuilt:
          break ;
        case GALGAS_propertyKind::kEnum_property:
          {
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (extractedValue_48095_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray2  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1086)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_toMany:
          {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (extractedValue_48095_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray3  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1088)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_toOne:
          {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (extractedValue_48095_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray4  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1090)) ;
          }
          break ;
        case GALGAS_propertyKind::kEnum_arrayController:
          {
            const cEnumAssociatedValues_propertyKind_arrayController * extractPtr_49970 = (const cEnumAssociatedValues_propertyKind_arrayController *) (var_kind_48388.unsafePointer ()) ;
            const GALGAS_lstring extractedValue_48774_entityName = extractPtr_49970->mAssociatedValue0 ;
            const GALGAS_bool extractedValue_48786_graphic = extractPtr_49970->mAssociatedValue1 ;
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = GALGAS_bool (kIsEqual, extractedValue_48120_propertyName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_5) {
                enumGalgasBool test_6 = kBoolTrue ;
                if (kBoolTrue == test_6) {
                  test_6 = extractedValue_48786_graphic.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1093)).boolEnum () ;
                  if (kBoolTrue == test_6) {
                    TC_Array <C_FixItDescription> fixItArray7 ;
                    inCompiler->emitSemanticError (extractedValue_48095_controllerName.readProperty_location (), GALGAS_string ("the controlled entity (").add_operation (extractedValue_48774_entityName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1094)).add_operation (GALGAS_string (") should be a graphic entity"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1094)), fixItArray7  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1094)) ;
                  }
                }
              }
            }
            if (kBoolFalse == test_5) {
              GALGAS_propertyMap var_observablePropertyMap_49109 ;
              GALGAS_classKind joker_49088 ; // Joker input parameter
              GALGAS_actionMap joker_49144_2 ; // Joker input parameter
              GALGAS_propertyGenerationList joker_49144_1 ; // Joker input parameter
              constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_48774_entityName, joker_49088, var_observablePropertyMap_49109, joker_49144_2, joker_49144_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1097)) ;
              GALGAS_propertyKind var_propertyKind_49222 ;
              GALGAS_actionMap joker_49236_2 ; // Joker input parameter
              GALGAS_bool joker_49236_1 ; // Joker input parameter
              var_observablePropertyMap_49109.method_searchKey (extractedValue_48120_propertyName, var_propertyKind_49222, joker_49236_2, joker_49236_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1103)) ;
              switch (var_propertyKind_49222.enumValue ()) {
              case GALGAS_propertyKind::kNotBuilt:
                break ;
              case GALGAS_propertyKind::kEnum_property:
                {
                  TC_Array <C_FixItDescription> fixItArray8 ;
                  inCompiler->emitSemanticError (extractedValue_48095_controllerName.readProperty_location (), GALGAS_string ("the bound model should be a toMany property"), fixItArray8  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1106)) ;
                }
                break ;
              case GALGAS_propertyKind::kEnum_toMany:
                {
                  const cEnumAssociatedValues_propertyKind_toMany * extractPtr_49595 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_propertyKind_49222.unsafePointer ()) ;
                  const GALGAS_lstring extractedValue_49407_kEntityName = extractPtr_49595->mAssociatedValue0 ;
                  const GALGAS_bool extractedValue_49423_isGraphic = extractPtr_49595->mAssociatedValue2 ;
                  enumGalgasBool test_9 = kBoolTrue ;
                  if (kBoolTrue == test_9) {
                    test_9 = extractedValue_49423_isGraphic.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1108)).boolEnum () ;
                    if (kBoolTrue == test_9) {
                      TC_Array <C_FixItDescription> fixItArray10 ;
                      inCompiler->emitSemanticError (extractedValue_48095_controllerName.readProperty_location (), GALGAS_string ("the controlled entity (").add_operation (extractedValue_49407_kEntityName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1109)).add_operation (GALGAS_string (") should be a graphic entity"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1109)), fixItArray10  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1109)) ;
                    }
                  }
                }
                break ;
              case GALGAS_propertyKind::kEnum_toOne:
                {
                  TC_Array <C_FixItDescription> fixItArray11 ;
                  inCompiler->emitSemanticError (extractedValue_48095_controllerName.readProperty_location (), GALGAS_string ("the bound model should be a toMany property"), fixItArray11  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1112)) ;
                }
                break ;
              case GALGAS_propertyKind::kEnum_arrayController:
                {
                  TC_Array <C_FixItDescription> fixItArray12 ;
                  inCompiler->emitSemanticError (extractedValue_48095_controllerName.readProperty_location (), GALGAS_string ("the bound model should be a toMany property"), fixItArray12  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1114)) ;
                }
                break ;
              case GALGAS_propertyKind::kEnum_selectionController:
                {
                  TC_Array <C_FixItDescription> fixItArray13 ;
                  inCompiler->emitSemanticError (extractedValue_48095_controllerName.readProperty_location (), GALGAS_string ("the bound model should be a toMany property"), fixItArray13  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1116)) ;
                }
                break ;
              }
            }
          }
          break ;
        case GALGAS_propertyKind::kEnum_selectionController:
          {
            TC_Array <C_FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (extractedValue_48095_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray14  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1120)) ;
          }
          break ;
        }
        outArgument_outEBViewGraphicControllerBindingGeneration = GALGAS_autoLayoutViewGraphicControllerBindingGeneration::constructor_binding (extractedValue_48095_controllerName.readProperty_string ()  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1122)) ;
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
      const cEnumAssociatedValues_tableValueBinding_tableValueBinding * extractPtr_51159 = (const cEnumAssociatedValues_tableValueBinding_tableValueBinding *) (constinArgument_inTableValueBinding.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_50340_controllerName = extractPtr_51159->mAssociatedValue0 ;
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = var_handlesTableViewBinding_47790.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1129)).boolEnum () ;
        if (kBoolTrue == test_15) {
          TC_Array <C_FixItDescription> fixItArray16 ;
          inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1130)).add_operation (GALGAS_string ("' type does not handle the $tableView binding"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1130)), fixItArray16  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1130)) ;
        }
      }
      if (kBoolFalse == test_15) {
        enumGalgasBool test_17 = kBoolTrue ;
        if (kBoolTrue == test_17) {
          test_17 = constinArgument_inPreferences.boolEnum () ;
          if (kBoolTrue == test_17) {
            GALGAS_propertyKind var_kind_50616 ;
            GALGAS_actionMap joker_50630_2 ; // Joker input parameter
            GALGAS_bool joker_50630_1 ; // Joker input parameter
            constinArgument_inPreferencesPropertyMap.method_searchKey (extractedValue_50340_controllerName, var_kind_50616, joker_50630_2, joker_50630_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1132)) ;
            enumGalgasBool test_18 = kBoolTrue ;
            if (kBoolTrue == test_18) {
              test_18 = var_kind_50616.getter_isArrayController (SOURCE_FILE ("auto-layout-view.ggs", 1137)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1137)).boolEnum () ;
              if (kBoolTrue == test_18) {
                TC_Array <C_FixItDescription> fixItArray19 ;
                inCompiler->emitSemanticError (extractedValue_50340_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray19  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1138)) ;
              }
            }
            outArgument_outTableViewBindingGeneration = extractedValue_50340_controllerName.readProperty_string () ;
          }
        }
        if (kBoolFalse == test_17) {
          GALGAS_propertyKind var_kind_50936 ;
          GALGAS_actionMap joker_50950_2 ; // Joker input parameter
          GALGAS_bool joker_50950_1 ; // Joker input parameter
          constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_50340_controllerName, var_kind_50936, joker_50950_2, joker_50950_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1142)) ;
          enumGalgasBool test_20 = kBoolTrue ;
          if (kBoolTrue == test_20) {
            test_20 = var_kind_50936.getter_isArrayController (SOURCE_FILE ("auto-layout-view.ggs", 1147)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1147)).boolEnum () ;
            if (kBoolTrue == test_20) {
              TC_Array <C_FixItDescription> fixItArray21 ;
              inCompiler->emitSemanticError (extractedValue_50340_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray21  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1148)) ;
            }
          }
          outArgument_outTableViewBindingGeneration = extractedValue_50340_controllerName.readProperty_string () ;
        }
      }
    }
    break ;
  }
  {
  routine_analyzeAutoLayoutRunBinding (constinArgument_inRunActionDescriptor, var_handlesRunAction_47757, constinArgument_inPreferences, constinArgument_inTypeName, constinArgument_inActionMap, constinArgument_inObservablePropertyMap, constinArgument_inReceiverSwiftTypeName, outArgument_outRunBindingGeneration, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1154)) ;
  }
  GALGAS_autolayoutEnabledBindingForGeneration var_enabledBindingGeneration_51715 ;
  {
  routine_analyzeAutoLayoutEnableBinding (constinArgument_inEnabledBindingDescriptor, var_handlesEnabledBinding_47830, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_enabledBindingGeneration_51715, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1165)) ;
  }
  switch (var_enabledBindingGeneration_51715.enumValue ()) {
  case GALGAS_autolayoutEnabledBindingForGeneration::kNotBuilt:
    break ;
  case GALGAS_autolayoutEnabledBindingForGeneration::kEnum_none:
    {
    }
    break ;
  case GALGAS_autolayoutEnabledBindingForGeneration::kEnum_enabled:
    {
      const cEnumAssociatedValues_autolayoutEnabledBindingForGeneration_enabled * extractPtr_51871 = (const cEnumAssociatedValues_autolayoutEnabledBindingForGeneration_enabled *) (var_enabledBindingGeneration_51715.unsafePointer ()) ;
      const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration extractedValue_51808_binding = extractPtr_51871->mAssociatedValue0 ;
      outArgument_outMultipleBindingGenerationList.addAssign_operation (GALGAS_string ("enabled"), extractedValue_51808_binding  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1178)) ;
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
      const cEnumAssociatedValues_multipleBindingDescriptor_binding * extractPtr_52663 = (const cEnumAssociatedValues_multipleBindingDescriptor_binding *) (constinArgument_inHiddenBindingDescriptor.unsafePointer ()) ;
      const GALGAS_abstractBooleanMultipleBindingExpressionAST extractedValue_52012_expression = extractPtr_52663->mAssociatedValue0 ;
      GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_52296 ;
      GALGAS_typeKind var_type_52335 ;
      GALGAS_location var_errorLocation_52362 ;
      callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_52012_expression.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_hiddenExpression_52296, var_type_52335, var_errorLocation_52362, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1184)) ;
      enumGalgasBool test_22 = kBoolTrue ;
      if (kBoolTrue == test_22) {
        test_22 = var_type_52335.getter_isBoolType (SOURCE_FILE ("auto-layout-view.ggs", 1194)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1194)).boolEnum () ;
        if (kBoolTrue == test_22) {
          TC_Array <C_FixItDescription> fixItArray23 ;
          inCompiler->emitSemanticError (var_errorLocation_52362, GALGAS_string ("expression is not boolean"), fixItArray23  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1195)) ;
        }
      }
      enumGalgasBool test_24 = kBoolTrue ;
      if (kBoolTrue == test_24) {
        test_24 = var_handlesHiddenBinding_47868.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1197)).boolEnum () ;
        if (kBoolTrue == test_24) {
          TC_Array <C_FixItDescription> fixItArray25 ;
          inCompiler->emitSemanticError (var_errorLocation_52362, GALGAS_string ("cet outlet n'accepte pas le binding $hidden"), fixItArray25  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1198)) ;
        }
      }
      outArgument_outMultipleBindingGenerationList.addAssign_operation (GALGAS_string ("hidden"), var_hiddenExpression_52296  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1200)) ;
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
  routine_analyzeAutoLayoutRegularBinding (constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inTypeName, constinArgument_inRegularBindingList, temp_26, outArgument_outRegularBindingsGenerationList, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1205)) ;
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
      outArgument_outEnabledBindingGeneration = GALGAS_autolayoutEnabledBindingForGeneration::constructor_none (SOURCE_FILE ("auto-layout-view.ggs", 1232)) ;
    }
    break ;
  case GALGAS_multipleBindingDescriptor::kEnum_binding:
    {
      const cEnumAssociatedValues_multipleBindingDescriptor_binding * extractPtr_54461 = (const cEnumAssociatedValues_multipleBindingDescriptor_binding *) (constinArgument_inEnabledBindingDescriptor.unsafePointer ()) ;
      const GALGAS_abstractBooleanMultipleBindingExpressionAST extractedValue_53799_expression = extractPtr_54461->mAssociatedValue0 ;
      GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_enableExpression_54083 ;
      GALGAS_typeKind var_type_54122 ;
      GALGAS_location var_errorLocation_54149 ;
      callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_53799_expression.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_enableExpression_54083, var_type_54122, var_errorLocation_54149, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1234)) ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = constinArgument_inHandlesEnabledBinding.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1244)).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (var_errorLocation_54149, GALGAS_string ("cet outlet n'accepte pas le binding $enabled"), fixItArray1  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1245)) ;
        }
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_type_54122.getter_isBoolType (SOURCE_FILE ("auto-layout-view.ggs", 1247)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1247)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_errorLocation_54149, GALGAS_string ("expression is not boolean"), fixItArray3  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1248)) ;
        }
      }
      outArgument_outEnabledBindingGeneration = GALGAS_autolayoutEnabledBindingForGeneration::constructor_enabled (var_enableExpression_54083  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1250)) ;
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
      outArgument_outRunBindingGeneration = GALGAS_autolayoutRunBindingForGeneration::constructor_none (SOURCE_FILE ("auto-layout-view.ggs", 1268)) ;
    }
    break ;
  case GALGAS_runActionDescriptor::kEnum_action:
    {
      const cEnumAssociatedValues_runActionDescriptor_action * extractPtr_55953 = (const cEnumAssociatedValues_runActionDescriptor_action *) (constinArgument_inRunActionDescriptor.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_55070_target = extractPtr_55953->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_55087_action = extractPtr_55953->mAssociatedValue1 ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = constinArgument_inHandlesRunAction.operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1270)).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inTypeName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1271)).add_operation (GALGAS_string ("' type does not handle run action"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1271)), fixItArray1  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1271)) ;
          outArgument_outRunBindingGeneration.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_0) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (kIsEqual, extractedValue_55070_target.readProperty_string ().objectCompare (GALGAS_string ("self"))).boolEnum () ;
          if (kBoolTrue == test_2) {
            constinArgument_inActionMap.method_searchKey (extractedValue_55087_action, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1274)) ;
            outArgument_outRunBindingGeneration = GALGAS_autolayoutRunBindingForGeneration::constructor_run (GALGAS_string ("self"), extractedValue_55087_action.readProperty_string (), constinArgument_inReceiverSwiftTypeName  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1275)) ;
          }
        }
        if (kBoolFalse == test_2) {
          GALGAS_actionMap var_controllerActionMap_55614 ;
          GALGAS_propertyKind joker_55586 ; // Joker input parameter
          GALGAS_bool joker_55643 ; // Joker input parameter
          constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_55070_target, joker_55586, var_controllerActionMap_55614, joker_55643, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1281)) ;
          var_controllerActionMap_55614.method_searchKey (extractedValue_55087_action, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1287)) ;
          GALGAS_string temp_3 ;
          const enumGalgasBool test_4 = constinArgument_inPreferences.boolEnum () ;
          if (kBoolTrue == test_4) {
            temp_3 = GALGAS_string ("preferences_") ;
          }else if (kBoolFalse == test_4) {
            temp_3 = GALGAS_string::makeEmptyString () ;
          }
          outArgument_outRunBindingGeneration = GALGAS_autolayoutRunBindingForGeneration::constructor_run (temp_3.add_operation (extractedValue_55070_target.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1289)), extractedValue_55087_action.readProperty_string (), GALGAS_string ("Controller_").add_operation (constinArgument_inReceiverSwiftTypeName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1291)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1291)).add_operation (extractedValue_55070_target.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1291))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1288)) ;
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
  cEnumerator_regularBindingList enumerator_56566 (constinArgument_inRegularBindingList, kENUMERATION_UP) ;
  while (enumerator_56566.hasCurrentObject ()) {
    GALGAS_outletBindingModelList var_boundModelTypeList_56666 = GALGAS_outletBindingModelList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 1312)) ;
    GALGAS_boundObjectList var_boundModelListForGeneration_56715 = GALGAS_boundObjectList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 1313)) ;
    cEnumerator_observablePropertyList enumerator_56757 (enumerator_56566.current_mObservablePropertyList (HERE), kENUMERATION_UP) ;
    while (enumerator_56757.hasCurrentObject ()) {
      GALGAS_propertyKind var_kind_57031 ;
      GALGAS_string var_swiftTypeStringForTransientFunctionArgument_57065 ;
      GALGAS_string var_defaultValueAsString_57138 ;
      GALGAS_propertyMap temp_0 ;
      const enumGalgasBool test_1 = constinArgument_inPreferences.boolEnum () ;
      if (kBoolTrue == test_1) {
        temp_0 = constinArgument_inPreferencesPropertyMap ;
      }else if (kBoolFalse == test_1) {
        temp_0 = constinArgument_inBoundModelPropertyMap ;
      }
      extensionMethod_analyzeObservableProperty (enumerator_56757.current_mObservableProperty (HERE), constinArgument_inRootPropertyMap, constinArgument_inSemanticContext, temp_0, var_kind_57031, var_swiftTypeStringForTransientFunctionArgument_57065, var_defaultValueAsString_57138, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1315)) ;
      switch (var_kind_57031.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_56757.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1326)), GALGAS_string ("a toMany property cannot be bound"), fixItArray2  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1326)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_56757.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1328)), GALGAS_string ("a toOne property cannot be bound"), fixItArray3  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1328)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_56757.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1330)), GALGAS_string ("an array controller cannot be bound"), fixItArray4  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1330)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_56757.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1332)), GALGAS_string ("a selection controller cannot be bound"), fixItArray5  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1332)) ;
        }
        break ;
      }
      var_boundModelListForGeneration_56715.addAssign_operation (extensionGetter_modelStringForSelf (enumerator_56757.current_mObservableProperty (HERE), constinArgument_inSelfSwiftName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1334)), var_kind_57031  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1334)) ;
      var_boundModelTypeList_56666.addAssign_operation (var_kind_57031, extensionGetter_location (enumerator_56757.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1335))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1335)) ;
      enumerator_56757.gotoNextObject () ;
    }
    GALGAS_outletBindingSpecificationModelList var_outletBindingSpecificationModelList_57937 = GALGAS_outletBindingSpecificationModelList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 1338)) ;
    GALGAS_controllerBindingOptionDecoratedList var_controllerBindingOptionDecoratedList_58024 = GALGAS_controllerBindingOptionDecoratedList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 1339)) ;
    GALGAS_lstring var_outletTypeName_58074 = constinArgument_inOutletTypeName ;
    GALGAS_bool var_continues_58116 = GALGAS_bool (true) ;
    if (constinArgument_inSemanticContext.readProperty_mBindingSpecificationMap ().getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1342)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1342)).isValid ()) {
      uint32_t variant_58137 = constinArgument_inSemanticContext.readProperty_mBindingSpecificationMap ().getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1342)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1342)).uintValue () ;
      bool loop_58137 = true ;
      while (loop_58137) {
        loop_58137 = GALGAS_bool (kIsNotEqual, var_outletTypeName_58074.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).operator_and (var_continues_58116 COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1342)).isValid () ;
        if (loop_58137) {
          loop_58137 = GALGAS_bool (kIsNotEqual, var_outletTypeName_58074.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).operator_and (var_continues_58116 COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1342)).boolValue () ;
        }
        if (loop_58137 && (0 == variant_58137)) {
          loop_58137 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("auto-layout-view.ggs", 1342)) ;
        }
        if (loop_58137) {
          variant_58137 -- ;
          var_continues_58116 = GALGAS_bool (false) ;
          GALGAS_lstring var_superOutletClassName_58382 ;
          GALGAS_autoLayoutViewBindingSpecificationMap var_bindingMap_58417 ;
          constinArgument_inSemanticContext.readProperty_mAutoLayoutBindingSpecificationMap ().method_searchKey (var_outletTypeName_58074, var_superOutletClassName_58382, var_bindingMap_58417, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1344)) ;
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = var_bindingMap_58417.getter_hasKey (enumerator_56566.current_mBindingName (HERE).readProperty_string () COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1349)).boolEnum () ;
            if (kBoolTrue == test_6) {
              var_bindingMap_58417.method_searchKey (enumerator_56566.current_mBindingName (HERE), var_outletBindingSpecificationModelList_57937, var_controllerBindingOptionDecoratedList_58024, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1350)) ;
            }
          }
          if (kBoolFalse == test_6) {
            var_continues_58116 = GALGAS_bool (true) ;
            var_outletTypeName_58074 = var_superOutletClassName_58382 ;
          }
        }
      }
    }
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = var_continues_58116.boolEnum () ;
      if (kBoolTrue == test_7) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_56566.current_mBindingName (HERE).readProperty_location (), GALGAS_string ("this binding is not defined"), fixItArray8  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1361)) ;
      }
    }
    if (kBoolFalse == test_7) {
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = GALGAS_bool (kIsNotEqual, var_boundModelTypeList_56666.getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1362)).objectCompare (var_outletBindingSpecificationModelList_57937.getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1362)))).boolEnum () ;
        if (kBoolTrue == test_9) {
          TC_Array <C_FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (enumerator_56566.current_mBindingName (HERE).readProperty_location (), var_outletBindingSpecificationModelList_57937.getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1364)).getter_string (SOURCE_FILE ("auto-layout-view.ggs", 1364)).add_operation (GALGAS_string (" model(s) required for this binding (found: "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1364)).add_operation (var_boundModelTypeList_56666.getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1366)).getter_string (SOURCE_FILE ("auto-layout-view.ggs", 1365)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1365)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1366)), fixItArray10  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1363)) ;
        }
      }
      if (kBoolFalse == test_9) {
        cEnumerator_outletBindingSpecificationModelList enumerator_59149 (var_outletBindingSpecificationModelList_57937, kENUMERATION_UP) ;
        cEnumerator_outletBindingModelList enumerator_59243 (var_boundModelTypeList_56666, kENUMERATION_UP) ;
        while (enumerator_59149.hasCurrentObject () && enumerator_59243.hasCurrentObject ()) {
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            GALGAS_bool test_12 = enumerator_59149.current_mModelShouldBeWritableProperty (HERE) ;
            if (kBoolTrue == test_12.boolEnum ()) {
              test_12 = extensionGetter_isTransient (enumerator_59243.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1369)) ;
            }
            test_11 = test_12.boolEnum () ;
            if (kBoolTrue == test_11) {
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (enumerator_59243.current_mErrorLocation (HERE), GALGAS_string ("the model is transient and the binding requires an writable model"), fixItArray13  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1370)) ;
            }
          }
          enumGalgasBool test_14 = kBoolTrue ;
          if (kBoolTrue == test_14) {
            GALGAS_bool test_15 = enumerator_59149.current_mModelType (HERE).getter_isEnumType (SOURCE_FILE ("auto-layout-view.ggs", 1372)) ;
            if (kBoolTrue == test_15.boolEnum ()) {
              test_15 = extensionGetter_isEnumType (enumerator_59243.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1372)) ;
            }
            test_14 = test_15.boolEnum () ;
            if (kBoolTrue == test_14) {
            }
          }
          if (kBoolFalse == test_14) {
            enumGalgasBool test_16 = kBoolTrue ;
            if (kBoolTrue == test_16) {
              test_16 = GALGAS_bool (kIsNotEqual, extensionGetter_swiftTypeName (enumerator_59149.current_mModelType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1373)).objectCompare (extensionGetter_swiftTypeName (enumerator_59243.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1373)))).boolEnum () ;
              if (kBoolTrue == test_16) {
                TC_Array <C_FixItDescription> fixItArray17 ;
                inCompiler->emitSemanticError (enumerator_59243.current_mErrorLocation (HERE), GALGAS_string ("the model type should be ").add_operation (extensionGetter_swiftTypeName (enumerator_59149.current_mModelType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1374)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1374)), fixItArray17  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1374)) ;
              }
            }
          }
          enumerator_59149.gotoNextObject () ;
          enumerator_59243.gotoNextObject () ;
        }
      }
    }
    GALGAS_string var_bindingOptionString_59832 = GALGAS_string::makeEmptyString () ;
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = GALGAS_bool (kIsNotEqual, var_controllerBindingOptionDecoratedList_58024.getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1380)).objectCompare (enumerator_56566.current_mBindingOptionList (HERE).getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1380)))).boolEnum () ;
      if (kBoolTrue == test_18) {
        GALGAS_string var_s_59964 ;
        enumGalgasBool test_19 = kBoolTrue ;
        if (kBoolTrue == test_19) {
          test_19 = GALGAS_bool (kIsEqual, var_controllerBindingOptionDecoratedList_58024.getter_count (SOURCE_FILE ("auto-layout-view.ggs", 1382)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_19) {
            var_s_59964 = GALGAS_string ("this binding has no option") ;
          }
        }
        if (kBoolFalse == test_19) {
          var_s_59964 = GALGAS_string ("this binding requires the following options:") ;
          cEnumerator_controllerBindingOptionDecoratedList enumerator_60168 (var_controllerBindingOptionDecoratedList_58024, kENUMERATION_UP) ;
          while (enumerator_60168.hasCurrentObject ()) {
            var_s_59964.plusAssign_operation(GALGAS_string ("\n  - ").add_operation (enumerator_60168.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1387)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1387)).add_operation (extensionGetter_swiftTypeName (enumerator_60168.current_mOptionType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1387)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1387)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1387)) ;
            enumerator_60168.gotoNextObject () ;
          }
        }
        TC_Array <C_FixItDescription> fixItArray20 ;
        inCompiler->emitSemanticError (enumerator_56566.current_mBindingName (HERE).readProperty_location (), var_s_59964, fixItArray20  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1390)) ;
      }
    }
    if (kBoolFalse == test_18) {
      cEnumerator_controllerBindingOptionDecoratedList enumerator_60395 (var_controllerBindingOptionDecoratedList_58024, kENUMERATION_UP) ;
      cEnumerator_bindingOptionList enumerator_60481 (enumerator_56566.current_mBindingOptionList (HERE), kENUMERATION_UP) ;
      while (enumerator_60395.hasCurrentObject () && enumerator_60481.hasCurrentObject ()) {
        enumGalgasBool test_21 = kBoolTrue ;
        if (kBoolTrue == test_21) {
          test_21 = GALGAS_bool (kIsNotEqual, enumerator_60395.current_mOptionName (HERE).readProperty_string ().objectCompare (enumerator_60481.current_mOptionName (HERE).readProperty_string ())).boolEnum () ;
          if (kBoolTrue == test_21) {
            TC_Array <C_FixItDescription> fixItArray22 ;
            inCompiler->emitSemanticError (enumerator_60481.current_mOptionName (HERE).readProperty_location (), GALGAS_string ("the option name should be '").add_operation (enumerator_60395.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1394)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1394)), fixItArray22  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1394)) ;
          }
        }
        GALGAS_string var_optionValueAsString_60865 ;
        GALGAS_typeKindList temp_23 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 1397)) ;
        temp_23.addAssign_operation (enumerator_60395.current_mOptionType (HERE)  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1397)) ;
        callExtensionMethod_analyzeDefaultValueType ((cPtr_abstractDefaultValue *) enumerator_60481.current_mOptionValue (HERE).ptr (), temp_23, constinArgument_inPreferencesPropertyMap, var_optionValueAsString_60865, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1396)) ;
        var_bindingOptionString_59832.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_60395.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1401)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1401)).add_operation (var_optionValueAsString_60865, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1401)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1401)) ;
        enumerator_60395.gotoNextObject () ;
        enumerator_60481.gotoNextObject () ;
      }
    }
    ioArgument_ioRegularBindingsGenerationList.addAssign_operation (enumerator_56566.current_mBindingName (HERE).readProperty_string (), var_boundModelListForGeneration_56715, var_bindingOptionString_59832  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1405)) ;
    enumerator_56566.gotoNextObject () ;
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
  GALGAS_autoLayoutViewInstructionGenerationList var_instructionList_62285 = GALGAS_autoLayoutViewInstructionGenerationList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 1428)) ;
  GALGAS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_62792 ;
  const GALGAS_astHStackViewInstructionDeclaration temp_0 = this ;
  extensionMethod_checkViewFunctionCallList (temp_0.readProperty_mFunctionCallList (), constinArgument_inSemanticContext.readProperty_mAutoLayoutHStackFunctionMap (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_62792, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1429)) ;
  GALGAS_autoLayoutMultipleBindingGenerationList var_multipleBindingGenerationList_62856 = GALGAS_autoLayoutMultipleBindingGenerationList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 1445)) ;
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
      const cEnumAssociatedValues_optionalHiddenBinding_binding * extractPtr_63519 = (const cEnumAssociatedValues_optionalHiddenBinding_binding *) (temp_1.readProperty_mOptionalHiddenBinding ().unsafePointer ()) ;
      const GALGAS_abstractBooleanMultipleBindingExpressionAST extractedValue_62964_hiddenBindingExpression = extractPtr_63519->mAssociatedValue0 ;
      GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_63274 ;
      GALGAS_typeKind var_type_63313 ;
      GALGAS_location var_errorLocation_63340 ;
      callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_62964_hiddenBindingExpression.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_hiddenExpression_63274, var_type_63313, var_errorLocation_63340, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1449)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_type_63313.getter_isBoolType (SOURCE_FILE ("auto-layout-view.ggs", 1459)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1459)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_errorLocation_63340, GALGAS_string ("expression is not boolean"), fixItArray3  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1460)) ;
        }
      }
      var_multipleBindingGenerationList_62856.addAssign_operation (GALGAS_string ("hidden"), var_hiddenExpression_63274  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1462)) ;
    }
    break ;
  }
  const GALGAS_astHStackViewInstructionDeclaration temp_4 = this ;
  cEnumerator_astViewInstructionList enumerator_63549 (temp_4.readProperty_mInstructionList (), kENUMERATION_UP) ;
  while (enumerator_63549.hasCurrentObject ()) {
    GALGAS_abstractViewInstructionGeneration var_generatedInstruction_63976 ;
    callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) enumerator_63549.current_mInstruction (HERE).ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_generatedInstruction_63976, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1467)) ;
    var_instructionList_62285.addAssign_operation (var_generatedInstruction_63976  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1482)) ;
    enumerator_63549.gotoNextObject () ;
  }
  const GALGAS_astHStackViewInstructionDeclaration temp_5 = this ;
  outArgument_outInstruction = GALGAS_hStackViewInstructionGeneration::constructor_new (var_funcCallList_62792, var_instructionList_62285, var_multipleBindingGenerationList_62856, temp_5.readProperty_mAstNewStackViewDeclarationList ()  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1484)) ;
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
  GALGAS_autoLayoutViewInstructionGenerationList var_instructionList_65345 = GALGAS_autoLayoutViewInstructionGenerationList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 1508)) ;
  GALGAS_autoLayoutViewInstructionGenerationFuncCallList var_funcCallList_65852 ;
  const GALGAS_astVStackViewInstructionDeclaration temp_0 = this ;
  extensionMethod_checkViewFunctionCallList (temp_0.readProperty_mFunctionCallList (), constinArgument_inSemanticContext.readProperty_mAutoLayoutVStackFunctionMap (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_funcCallList_65852, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1509)) ;
  GALGAS_autoLayoutMultipleBindingGenerationList var_multipleBindingGenerationList_65916 = GALGAS_autoLayoutMultipleBindingGenerationList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 1525)) ;
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
      const cEnumAssociatedValues_optionalHiddenBinding_binding * extractPtr_66579 = (const cEnumAssociatedValues_optionalHiddenBinding_binding *) (temp_1.readProperty_mOptionalHiddenBinding ().unsafePointer ()) ;
      const GALGAS_abstractBooleanMultipleBindingExpressionAST extractedValue_66024_hiddenBindingExpression = extractPtr_66579->mAssociatedValue0 ;
      GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_66334 ;
      GALGAS_typeKind var_type_66373 ;
      GALGAS_location var_errorLocation_66400 ;
      callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_66024_hiddenBindingExpression.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_hiddenExpression_66334, var_type_66373, var_errorLocation_66400, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1529)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_type_66373.getter_isBoolType (SOURCE_FILE ("auto-layout-view.ggs", 1539)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 1539)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_errorLocation_66400, GALGAS_string ("expression is not boolean"), fixItArray3  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1540)) ;
        }
      }
      var_multipleBindingGenerationList_65916.addAssign_operation (GALGAS_string ("hidden"), var_hiddenExpression_66334  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1542)) ;
    }
    break ;
  }
  const GALGAS_astVStackViewInstructionDeclaration temp_4 = this ;
  cEnumerator_astViewInstructionList enumerator_66609 (temp_4.readProperty_mInstructionList (), kENUMERATION_UP) ;
  while (enumerator_66609.hasCurrentObject ()) {
    GALGAS_abstractViewInstructionGeneration var_generatedInstruction_67036 ;
    callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) enumerator_66609.current_mInstruction (HERE).ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_generatedInstruction_67036, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1547)) ;
    var_instructionList_65345.addAssign_operation (var_generatedInstruction_67036  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1562)) ;
    enumerator_66609.gotoNextObject () ;
  }
  const GALGAS_astVStackViewInstructionDeclaration temp_5 = this ;
  outArgument_outInstruction = GALGAS_vStackViewInstructionGeneration::constructor_new (var_funcCallList_65852, var_instructionList_65345, var_multipleBindingGenerationList_65916, temp_5.readProperty_mAstNewStackViewDeclarationList ()  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1564)) ;
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
  result_result = GALGAS_string ("  final func ").add_operation (constinArgument_inViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1742)).add_operation (GALGAS_string (" () -> AutoLayoutHorizontalStackView {\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1742)) ;
  result_result.plusAssign_operation(GALGAS_string ("    let hStackView = AutoLayoutHorizontalStackView ()\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1743)) ;
  const GALGAS_computedHorizontalViewGeneration temp_0 = this ;
  extensionMethod_generate (temp_0.readProperty_mFuncCallList (), GALGAS_string ("    "), result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1744)) ;
  const GALGAS_computedHorizontalViewGeneration temp_1 = this ;
  cEnumerator_astNewStackViewDeclarationList enumerator_75382 (temp_1.readProperty_mNewStackViewDeclarationList (), kENUMERATION_UP) ;
  while (enumerator_75382.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string ("    let ").add_operation (enumerator_75382.current_mInstanciedStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1746)).add_operation (GALGAS_string (" = self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1746)).add_operation (enumerator_75382.current_mTypeStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1746)).add_operation (GALGAS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1746)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1746)) ;
    enumerator_75382.gotoNextObject () ;
  }
  const GALGAS_computedHorizontalViewGeneration temp_2 = this ;
  cEnumerator_autoLayoutViewInstructionGenerationList enumerator_75507 (temp_2.readProperty_mInstructionList (), kENUMERATION_UP) ;
  GALGAS_uint index_75502 ((uint32_t) 0) ;
  while (enumerator_75507.hasCurrentObject ()) {
    GALGAS_string var_name_75564 = GALGAS_string ("view_").add_operation (index_75502.getter_string (SOURCE_FILE ("auto-layout-view.ggs", 1749)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1749)) ;
    result_result.plusAssign_operation(callExtensionGetter_generateViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_75507.current_mInstruction (HERE).ptr (), constinArgument_inPreferences, var_name_75564, GALGAS_string ("    "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1750)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1750)) ;
    result_result.plusAssign_operation(GALGAS_string ("    _ = hStackView.appendView (").add_operation (var_name_75564, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1751)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1751)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1751)) ;
    enumerator_75507.gotoNextObject () ;
    index_75502.increment_operation (inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1748)) ;
  }
  result_result.plusAssign_operation(GALGAS_string ("    return hStackView\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1753)) ;
  result_result.plusAssign_operation(GALGAS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1754)) ;
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
  result_result = GALGAS_string ("  final func ").add_operation (constinArgument_inViewName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1761)).add_operation (GALGAS_string (" () -> AutoLayoutVerticalStackView {\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1761)) ;
  result_result.plusAssign_operation(GALGAS_string ("    let vStackView = AutoLayoutVerticalStackView ()\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1762)) ;
  const GALGAS_computedVerticalViewGeneration temp_0 = this ;
  extensionMethod_generate (temp_0.readProperty_mFuncCallList (), GALGAS_string ("    "), result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1763)) ;
  const GALGAS_computedVerticalViewGeneration temp_1 = this ;
  cEnumerator_astNewStackViewDeclarationList enumerator_76349 (temp_1.readProperty_mNewStackViewDeclarationList (), kENUMERATION_UP) ;
  while (enumerator_76349.hasCurrentObject ()) {
    result_result.plusAssign_operation(GALGAS_string ("    let ").add_operation (enumerator_76349.current_mInstanciedStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1765)).add_operation (GALGAS_string (" = self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1765)).add_operation (enumerator_76349.current_mTypeStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1765)).add_operation (GALGAS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1765)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1765)) ;
    enumerator_76349.gotoNextObject () ;
  }
  const GALGAS_computedVerticalViewGeneration temp_2 = this ;
  cEnumerator_autoLayoutViewInstructionGenerationList enumerator_76474 (temp_2.readProperty_mInstructionList (), kENUMERATION_UP) ;
  GALGAS_uint index_76469 ((uint32_t) 0) ;
  while (enumerator_76474.hasCurrentObject ()) {
    GALGAS_string var_name_76531 = GALGAS_string ("view_").add_operation (index_76469.getter_string (SOURCE_FILE ("auto-layout-view.ggs", 1768)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1768)) ;
    result_result.plusAssign_operation(callExtensionGetter_generateViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_76474.current_mInstruction (HERE).ptr (), constinArgument_inPreferences, var_name_76531, GALGAS_string ("    "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1769)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1769)) ;
    result_result.plusAssign_operation(GALGAS_string ("    _ = vStackView.appendView (").add_operation (var_name_76531, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1770)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1770)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1770)) ;
    enumerator_76474.gotoNextObject () ;
    index_76469.increment_operation (inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1767)) ;
  }
  result_result.plusAssign_operation(GALGAS_string ("    return vStackView\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1772)) ;
  result_result.plusAssign_operation(GALGAS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1773)) ;
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
  result_result = constinArgument_inIndentation.add_operation (GALGAS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1789)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1789)).add_operation (GALGAS_string (" = AutoLayoutFlexibleSpace ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1789)) ;
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
      result_result = constinArgument_inIndentation.add_operation (GALGAS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1799)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1799)).add_operation (GALGAS_string (" = AutoLayoutHorizontalStackView.VerticalSeparator ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1799)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = constinArgument_inIndentation.add_operation (GALGAS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1801)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1801)).add_operation (GALGAS_string (" = AutoLayoutVerticalStackView.HorizontalSeparator ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1801)) ;
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
      result_result = constinArgument_inIndentation.add_operation (GALGAS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1812)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1812)).add_operation (GALGAS_string (" = AutoLayoutHorizontalStackView.VerticalDivider ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1812)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = constinArgument_inIndentation.add_operation (GALGAS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1814)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1814)).add_operation (GALGAS_string (" = AutoLayoutVerticalStackView.HorizontalDivider ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1814)) ;
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
  result_result = constinArgument_inIndentation.add_operation (GALGAS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1824)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1824)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1824)).add_operation (temp_0.readProperty_mLocalView (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1824)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1824)) ;
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
  result_result = constinArgument_inIndentation.add_operation (GALGAS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1833)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1833)).add_operation (GALGAS_string (" = AutoLayout"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1833)).add_operation (temp_0.readProperty_mAutoLayoutViewClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1833)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1833)) ;
  const GALGAS_autoLayoutComputedViewInstructionGeneration temp_1 = this ;
  cEnumerator_autoLayoutViewInstructionGenerationParameterList enumerator_79819 (temp_1.readProperty_mParameterList (), kENUMERATION_UP) ;
  while (enumerator_79819.hasCurrentObject ()) {
    result_result.plusAssign_operation(enumerator_79819.current (HERE).readProperty_mParameterName ().add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1836)).add_operation (enumerator_79819.current (HERE).readProperty_mParameterValue (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1836)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1836)) ;
    if (enumerator_79819.hasNextObject ()) {
      result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1838)) ;
    }
    enumerator_79819.gotoNextObject () ;
  }
  result_result.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1840)) ;
  const GALGAS_autoLayoutComputedViewInstructionGeneration temp_2 = this ;
  extensionMethod_generate (temp_2.readProperty_mFunctionCallList (), constinArgument_inIndentation, result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1841)) ;
  const GALGAS_autoLayoutComputedViewInstructionGeneration temp_3 = this ;
  cEnumerator_autoLayoutRegularBindingsGenerationList enumerator_80061 (temp_3.readProperty_mRegularBindingsGenerationList (), kENUMERATION_UP) ;
  while (enumerator_80061.hasCurrentObject ()) {
    result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1843)).add_operation (enumerator_80061.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1843)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1843)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1843)) ;
    cEnumerator_boundObjectList enumerator_80210 (enumerator_80061.current_mBoundObjectList (HERE), kENUMERATION_UP) ;
    while (enumerator_80210.hasCurrentObject ()) {
      result_result.plusAssign_operation(enumerator_80210.current_mBoundObjectString (HERE), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1845)) ;
      if (enumerator_80210.hasNextObject ()) {
        result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1846)) ;
      }
      enumerator_80210.gotoNextObject () ;
    }
    result_result.plusAssign_operation(enumerator_80061.current_mBindingOptionsString (HERE).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1848)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1848)) ;
    enumerator_80061.gotoNextObject () ;
  }
  const GALGAS_autoLayoutComputedViewInstructionGeneration temp_4 = this ;
  cEnumerator_autoLayoutMultipleBindingGenerationList enumerator_80370 (temp_4.readProperty_mMultipleBindingGenerationList (), kENUMERATION_UP) ;
  while (enumerator_80370.hasCurrentObject ()) {
    result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1851)).add_operation (enumerator_80370.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1851)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1851)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_80370.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1851)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1851)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1851)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1851)) ;
    enumerator_80370.gotoNextObject () ;
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
      const cEnumAssociatedValues_autolayoutRunBindingForGeneration_run * extractPtr_80883 = (const cEnumAssociatedValues_autolayoutRunBindingForGeneration_run *) (temp_5.readProperty_mRunBindingGeneration ().unsafePointer ()) ;
      const GALGAS_string extractedValue_80590_targetName = extractPtr_80883->mAssociatedValue0 ;
      const GALGAS_string extractedValue_80602_actionName = extractPtr_80883->mAssociatedValue1 ;
      const GALGAS_string extractedValue_80614_targetTypeName = extractPtr_80883->mAssociatedValue2 ;
      result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("  .bind_run (\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1856)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1856)) ;
      result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("    target: "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1857)).add_operation (extractedValue_80590_targetName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1857)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1857)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1857)) ;
      result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("    selector: #selector ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1858)).add_operation (extractedValue_80614_targetTypeName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1858)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1858)).add_operation (extractedValue_80602_actionName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1858)).add_operation (GALGAS_string (" (_:))\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1858)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1858)) ;
      result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("  )\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1859)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1859)) ;
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
      const cEnumAssociatedValues_autoLayoutViewGraphicControllerBindingGeneration_binding * extractPtr_81086 = (const cEnumAssociatedValues_autoLayoutViewGraphicControllerBindingGeneration_binding *) (temp_6.readProperty_mEBViewGraphicControllerBindingGeneration ().unsafePointer ()) ;
      const GALGAS_string extractedValue_80983_controllerName = extractPtr_81086->mAssociatedValue0 ;
      result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("  .bind_graphic_controller (self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1864)).add_operation (extractedValue_80983_controllerName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1864)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1864)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1864)) ;
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
      GALGAS_string var_prefix_81155 = temp_9 ;
      const GALGAS_autoLayoutComputedViewInstructionGeneration temp_11 = this ;
      result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (var_prefix_81155, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1868)).add_operation (temp_11.readProperty_mTableViewBindingGeneration (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1868)).add_operation (GALGAS_string (".bind_tableView ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1868)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1868)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1868)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1868)) ;
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
          result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1872)).add_operation (temp_16.readProperty_mOutletName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1872)).add_operation (GALGAS_string (".append ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1872)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1872)).add_operation (GALGAS_string (") // Outlet Array\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1872)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1872)) ;
        }
      }
      if (kBoolFalse == test_14) {
        const GALGAS_autoLayoutComputedViewInstructionGeneration temp_17 = this ;
        result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1874)).add_operation (temp_17.readProperty_mOutletName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1874)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1874)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1874)).add_operation (GALGAS_string (" // Outlet\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1874)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1874)) ;
      }
    }
  }
  enumGalgasBool test_18 = kBoolTrue ;
  if (kBoolTrue == test_18) {
    const GALGAS_autoLayoutComputedViewInstructionGeneration temp_19 = this ;
    test_18 = GALGAS_bool (kIsNotEqual, temp_19.readProperty_mConfiguratorName ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_18) {
      const GALGAS_autoLayoutComputedViewInstructionGeneration temp_20 = this ;
      result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("self.configure_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1878)).add_operation (temp_20.readProperty_mConfiguratorName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1878)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1878)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1878)).add_operation (GALGAS_string (") // Configurator\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1878)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1878)) ;
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
  result_result = constinArgument_inIndentation.add_operation (GALGAS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1888)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1888)).add_operation (GALGAS_string (" = AutoLayoutHorizontalStackView ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1888)) ;
  const GALGAS_hStackViewInstructionGeneration temp_0 = this ;
  extensionMethod_generate (temp_0.readProperty_mFuncCallList (), constinArgument_inIndentation, result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1889)) ;
  const GALGAS_hStackViewInstructionGeneration temp_1 = this ;
  cEnumerator_autoLayoutMultipleBindingGenerationList enumerator_82306 (temp_1.readProperty_mMultipleBindingGenerationList (), kENUMERATION_UP) ;
  while (enumerator_82306.hasCurrentObject ()) {
    result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1891)).add_operation (enumerator_82306.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1891)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1891)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_82306.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1891)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1891)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1891)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1891)) ;
    enumerator_82306.gotoNextObject () ;
  }
  const GALGAS_hStackViewInstructionGeneration temp_2 = this ;
  cEnumerator_astNewStackViewDeclarationList enumerator_82480 (temp_2.readProperty_mNewStackViewDeclarationList (), kENUMERATION_UP) ;
  while (enumerator_82480.hasCurrentObject ()) {
    result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1894)).add_operation (enumerator_82480.current_mInstanciedStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1894)).add_operation (GALGAS_string (" = self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1894)).add_operation (enumerator_82480.current_mTypeStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1894)).add_operation (GALGAS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1894)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1894)) ;
    enumerator_82480.gotoNextObject () ;
  }
  result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("do{\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1896)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1896)) ;
  GALGAS_string var_indentation_82652 = constinArgument_inIndentation.add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1897)) ;
  const GALGAS_hStackViewInstructionGeneration temp_3 = this ;
  cEnumerator_autoLayoutViewInstructionGenerationList enumerator_82694 (temp_3.readProperty_mInstructionList (), kENUMERATION_UP) ;
  GALGAS_uint index_82689 ((uint32_t) 0) ;
  while (enumerator_82694.hasCurrentObject ()) {
    GALGAS_string var_name_82752 = constinArgument_inName.add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1899)).add_operation (index_82689.getter_string (SOURCE_FILE ("auto-layout-view.ggs", 1899)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1899)) ;
    result_result.plusAssign_operation(callExtensionGetter_generateViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_82694.current_mInstruction (HERE).ptr (), constinArgument_inPreferences, var_name_82752, var_indentation_82652, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1900)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1900)) ;
    result_result.plusAssign_operation(var_indentation_82652.add_operation (GALGAS_string ("_ = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1901)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1901)).add_operation (GALGAS_string (".appendView ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1901)).add_operation (var_name_82752, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1901)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1901)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1901)) ;
    enumerator_82694.gotoNextObject () ;
    index_82689.increment_operation (inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1898)) ;
  }
  result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1903)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1903)) ;
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
  result_result = constinArgument_inIndentation.add_operation (GALGAS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1912)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1912)).add_operation (GALGAS_string (" = AutoLayoutVerticalStackView ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1912)) ;
  const GALGAS_vStackViewInstructionGeneration temp_0 = this ;
  extensionMethod_generate (temp_0.readProperty_mFuncCallList (), constinArgument_inIndentation, result_result, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1913)) ;
  const GALGAS_vStackViewInstructionGeneration temp_1 = this ;
  cEnumerator_autoLayoutMultipleBindingGenerationList enumerator_83516 (temp_1.readProperty_mMultipleBindingGenerationList (), kENUMERATION_UP) ;
  while (enumerator_83516.hasCurrentObject ()) {
    result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("  .bind_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1915)).add_operation (enumerator_83516.current_mBindingName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1915)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1915)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_83516.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1915)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1915)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1915)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1915)) ;
    enumerator_83516.gotoNextObject () ;
  }
  const GALGAS_vStackViewInstructionGeneration temp_2 = this ;
  cEnumerator_astNewStackViewDeclarationList enumerator_83690 (temp_2.readProperty_mNewStackViewDeclarationList (), kENUMERATION_UP) ;
  while (enumerator_83690.hasCurrentObject ()) {
    result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("let "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1918)).add_operation (enumerator_83690.current_mInstanciedStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1918)).add_operation (GALGAS_string (" = self."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1918)).add_operation (enumerator_83690.current_mTypeStackViewName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1918)).add_operation (GALGAS_string (" ()\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1918)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1918)) ;
    enumerator_83690.gotoNextObject () ;
  }
  result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("do{\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1920)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1920)) ;
  GALGAS_string var_indentation_83862 = constinArgument_inIndentation.add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1921)) ;
  const GALGAS_vStackViewInstructionGeneration temp_3 = this ;
  cEnumerator_autoLayoutViewInstructionGenerationList enumerator_83904 (temp_3.readProperty_mInstructionList (), kENUMERATION_UP) ;
  GALGAS_uint index_83899 ((uint32_t) 0) ;
  while (enumerator_83904.hasCurrentObject ()) {
    GALGAS_string var_name_83962 = constinArgument_inName.add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1923)).add_operation (index_83899.getter_string (SOURCE_FILE ("auto-layout-view.ggs", 1923)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1923)) ;
    result_result.plusAssign_operation(callExtensionGetter_generateViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_83904.current_mInstruction (HERE).ptr (), constinArgument_inPreferences, var_name_83962, var_indentation_83862, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1924)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1924)) ;
    result_result.plusAssign_operation(var_indentation_83862.add_operation (GALGAS_string ("_ = "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1925)).add_operation (constinArgument_inName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1925)).add_operation (GALGAS_string (".appendView ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1925)).add_operation (var_name_83962, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1925)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1925)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1925)) ;
    enumerator_83904.gotoNextObject () ;
    index_83899.increment_operation (inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1922)) ;
  }
  result_result.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1927)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1927)) ;
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
    GALGAS_bool var_hasRunAction_3826 ;
    GALGAS_bool var_handlesTableValueBinding_3851 ;
    GALGAS_bool var_hasEnabled_3888 ;
    GALGAS_bool var_hasHidden_3911 ;
    GALGAS_bool var_handlesGraphicControllerBinding_3933 ;
    const GALGAS_outletClassDeclarationAST temp_9 = this ;
    GALGAS_lstring joker_3811 ; // Joker input parameter
    GALGAS_bool joker_3972 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mOutletClassMap ().method_searchKey (temp_9.readProperty_mSuperClassName (), joker_3811, var_hasRunAction_3826, var_handlesTableValueBinding_3851, var_hasEnabled_3888, var_hasHidden_3911, var_handlesGraphicControllerBinding_3933, joker_3972, inCompiler COMMA_SOURCE_FILE ("outlet-class.ggs", 115)) ;
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      const GALGAS_outletClassDeclarationAST temp_11 = this ;
      test_10 = temp_11.readProperty_mHasRunAction ().operator_and (var_hasRunAction_3826 COMMA_SOURCE_FILE ("outlet-class.ggs", 125)).boolEnum () ;
      if (kBoolTrue == test_10) {
        const GALGAS_outletClassDeclarationAST temp_12 = this ;
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (temp_12.readProperty_mClassName ().readProperty_location (), GALGAS_string ("$run binding already defined in superclass"), fixItArray13  COMMA_SOURCE_FILE ("outlet-class.ggs", 126)) ;
      }
    }
    enumGalgasBool test_14 = kBoolTrue ;
    if (kBoolTrue == test_14) {
      const GALGAS_outletClassDeclarationAST temp_15 = this ;
      test_14 = temp_15.readProperty_mHandlesTableValueBinding ().operator_and (var_handlesTableValueBinding_3851 COMMA_SOURCE_FILE ("outlet-class.ggs", 128)).boolEnum () ;
      if (kBoolTrue == test_14) {
        const GALGAS_outletClassDeclarationAST temp_16 = this ;
        TC_Array <C_FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticError (temp_16.readProperty_mClassName ().readProperty_location (), GALGAS_string ("$tableview binding already defined in superclass"), fixItArray17  COMMA_SOURCE_FILE ("outlet-class.ggs", 129)) ;
      }
    }
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      const GALGAS_outletClassDeclarationAST temp_19 = this ;
      test_18 = temp_19.readProperty_mHasEnabled ().operator_and (var_hasEnabled_3888 COMMA_SOURCE_FILE ("outlet-class.ggs", 131)).boolEnum () ;
      if (kBoolTrue == test_18) {
        const GALGAS_outletClassDeclarationAST temp_20 = this ;
        TC_Array <C_FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (temp_20.readProperty_mClassName ().readProperty_location (), GALGAS_string ("$enabled binding already defined in superclass"), fixItArray21  COMMA_SOURCE_FILE ("outlet-class.ggs", 132)) ;
      }
    }
    enumGalgasBool test_22 = kBoolTrue ;
    if (kBoolTrue == test_22) {
      const GALGAS_outletClassDeclarationAST temp_23 = this ;
      test_22 = temp_23.readProperty_mHasHidden ().operator_and (var_hasHidden_3911 COMMA_SOURCE_FILE ("outlet-class.ggs", 134)).boolEnum () ;
      if (kBoolTrue == test_22) {
        const GALGAS_outletClassDeclarationAST temp_24 = this ;
        TC_Array <C_FixItDescription> fixItArray25 ;
        inCompiler->emitSemanticError (temp_24.readProperty_mClassName ().readProperty_location (), GALGAS_string ("$hidden binding already defined in superclass"), fixItArray25  COMMA_SOURCE_FILE ("outlet-class.ggs", 135)) ;
      }
    }
    enumGalgasBool test_26 = kBoolTrue ;
    if (kBoolTrue == test_26) {
      const GALGAS_outletClassDeclarationAST temp_27 = this ;
      test_26 = temp_27.readProperty_mHandlesGraphicControllerBinding ().operator_and (var_handlesGraphicControllerBinding_3933 COMMA_SOURCE_FILE ("outlet-class.ggs", 137)).boolEnum () ;
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
    ioArgument_ioSemanticContext.mProperty_mOutletClassMap.setter_insertKey (temp_30.readProperty_mClassName (), temp_31.readProperty_mSuperClassName (), temp_32.readProperty_mHasRunAction ().operator_or (var_hasRunAction_3826 COMMA_SOURCE_FILE ("outlet-class.ggs", 143)), temp_33.readProperty_mHandlesTableValueBinding ().operator_or (var_handlesTableValueBinding_3851 COMMA_SOURCE_FILE ("outlet-class.ggs", 144)), temp_34.readProperty_mHasEnabled ().operator_or (var_hasEnabled_3888 COMMA_SOURCE_FILE ("outlet-class.ggs", 145)), temp_35.readProperty_mHasHidden ().operator_or (var_hasHidden_3911 COMMA_SOURCE_FILE ("outlet-class.ggs", 146)), temp_36.readProperty_mHandlesGraphicControllerBinding ().operator_or (var_handlesGraphicControllerBinding_3933 COMMA_SOURCE_FILE ("outlet-class.ggs", 147)), temp_37.readProperty_mUserDefined (), inCompiler COMMA_SOURCE_FILE ("outlet-class.ggs", 140)) ;
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
  cEnumerator_outletClassBindingSpecificationList enumerator_4766 (constinArgument_inBindingSpecificationListMap, kENUMERATION_UP) ;
  while (enumerator_4766.hasCurrentObject ()) {
    GALGAS_outletBindingSpecificationModelList var_outletBindingSpecificationModelList_4867 = GALGAS_outletBindingSpecificationModelList::constructor_emptyList (SOURCE_FILE ("outlet-binding-specification.ggs", 129)) ;
    cEnumerator_outletClassBindingSpecificationModelList enumerator_4932 (enumerator_4766.current_mOutletClassBindingSpecificationModelList (HERE), kENUMERATION_UP) ;
    while (enumerator_4932.hasCurrentObject ()) {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (kIsEqual, enumerator_4932.current_mModelTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string ("enum"))).boolEnum () ;
        if (kBoolTrue == test_0) {
          var_outletBindingSpecificationModelList_4867.addAssign_operation (GALGAS_typeKind::constructor_enumType (GALGAS_string::makeEmptyString (), GALGAS_enumConstantMap::constructor_emptyMap (SOURCE_FILE ("outlet-binding-specification.ggs", 133)), GALGAS_enumFuncMap::constructor_emptyMap (SOURCE_FILE ("outlet-binding-specification.ggs", 133))  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 133)), enumerator_4932.current_mModelShouldBeWritableProperty (HERE)  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 132)) ;
        }
      }
      if (kBoolFalse == test_0) {
        GALGAS_classKind var_classKind_5326 ;
        GALGAS_propertyMap joker_5337_3 ; // Joker input parameter
        GALGAS_actionMap joker_5337_2 ; // Joker input parameter
        GALGAS_propertyGenerationList joker_5337_1 ; // Joker input parameter
        ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (enumerator_4932.current_mModelTypeName (HERE), var_classKind_5326, joker_5337_3, joker_5337_2, joker_5337_1, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 136)) ;
        GALGAS_typeKind var_typeKind_5364 ;
        switch (var_classKind_5326.enumValue ()) {
        case GALGAS_classKind::kNotBuilt:
          break ;
        case GALGAS_classKind::kEnum_prefs:
          {
            TC_Array <C_FixItDescription> fixItArray1 ;
            inCompiler->emitSemanticError (enumerator_4932.current_mModelTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray1  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 140)) ;
            var_typeKind_5364.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_classKind::kEnum_atomic:
          {
            const cEnumAssociatedValues_classKind_atomic * extractPtr_5564 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_5326.unsafePointer ()) ;
            const GALGAS_typeKind extractedValue_5535_kind = extractPtr_5564->mAssociatedValue0 ;
            var_typeKind_5364 = extractedValue_5535_kind ;
          }
          break ;
        case GALGAS_classKind::kEnum_document:
          {
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (enumerator_4932.current_mModelTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray2  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 144)) ;
            var_typeKind_5364.drop () ; // Release error dropped variable
          }
          break ;
        case GALGAS_classKind::kEnum_entity:
          {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (enumerator_4932.current_mModelTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray3  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 146)) ;
            var_typeKind_5364.drop () ; // Release error dropped variable
          }
          break ;
        }
        var_outletBindingSpecificationModelList_4867.addAssign_operation (var_typeKind_5364, enumerator_4932.current_mModelShouldBeWritableProperty (HERE)  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 148)) ;
      }
      enumerator_4932.gotoNextObject () ;
    }
    GALGAS_controllerBindingOptionDecoratedList var_controllerBindingOptionDecoratedList_5959 = GALGAS_controllerBindingOptionDecoratedList::constructor_emptyList (SOURCE_FILE ("outlet-binding-specification.ggs", 151)) ;
    cEnumerator_controllerBindingOptionList enumerator_6022 (enumerator_4766.current_mBindingOptionList (HERE), kENUMERATION_UP) ;
    while (enumerator_6022.hasCurrentObject ()) {
      GALGAS_classKind var_classKind_6142 ;
      GALGAS_propertyMap joker_6153_3 ; // Joker input parameter
      GALGAS_actionMap joker_6153_2 ; // Joker input parameter
      GALGAS_propertyGenerationList joker_6153_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (enumerator_6022.current_mOptionTypeName (HERE), var_classKind_6142, joker_6153_3, joker_6153_2, joker_6153_1, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 153)) ;
      GALGAS_typeKind var_typeKind_6178 ;
      switch (var_classKind_6142.enumValue ()) {
      case GALGAS_classKind::kNotBuilt:
        break ;
      case GALGAS_classKind::kEnum_prefs:
        {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_6022.current_mOptionTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray4  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 157)) ;
          var_typeKind_6178.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_classKind::kEnum_atomic:
        {
          const cEnumAssociatedValues_classKind_atomic * extractPtr_6369 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_6142.unsafePointer ()) ;
          const GALGAS_typeKind extractedValue_6342_kind = extractPtr_6369->mAssociatedValue0 ;
          var_typeKind_6178 = extractedValue_6342_kind ;
        }
        break ;
      case GALGAS_classKind::kEnum_document:
        {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (enumerator_6022.current_mOptionTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray5  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 161)) ;
          var_typeKind_6178.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_classKind::kEnum_entity:
        {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (enumerator_6022.current_mOptionTypeName (HERE).readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 163)) ;
          var_typeKind_6178.drop () ; // Release error dropped variable
        }
        break ;
      }
      var_controllerBindingOptionDecoratedList_5959.addAssign_operation (var_typeKind_6178, enumerator_6022.current_mOptionName (HERE)  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 165)) ;
      enumerator_6022.gotoNextObject () ;
    }
    GALGAS_outletBindingSpecificationMap var_bindingMap_6748 ;
    GALGAS_lstring var_outletSuperClassName_6776 ;
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = ioArgument_ioSemanticContext.readProperty_mBindingSpecificationMap ().getter_hasKey (enumerator_4766.current_mOutletClassName (HERE).readProperty_string () COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 170)).boolEnum () ;
      if (kBoolTrue == test_7) {
        {
        ioArgument_ioSemanticContext.mProperty_mBindingSpecificationMap.setter_removeKey (enumerator_4766.current_mOutletClassName (HERE), var_outletSuperClassName_6776, var_bindingMap_6748, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 171)) ;
        }
      }
    }
    if (kBoolFalse == test_7) {
      var_bindingMap_6748 = GALGAS_outletBindingSpecificationMap::constructor_emptyMap (SOURCE_FILE ("outlet-binding-specification.ggs", 173)) ;
      GALGAS_bool joker_7124_6 ; // Joker input parameter
      GALGAS_bool joker_7124_5 ; // Joker input parameter
      GALGAS_bool joker_7124_4 ; // Joker input parameter
      GALGAS_bool joker_7124_3 ; // Joker input parameter
      GALGAS_bool joker_7124_2 ; // Joker input parameter
      GALGAS_bool joker_7124_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mOutletClassMap ().method_searchKey (enumerator_4766.current_mOutletClassName (HERE), var_outletSuperClassName_6776, joker_7124_6, joker_7124_5, joker_7124_4, joker_7124_3, joker_7124_2, joker_7124_1, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 174)) ;
    }
    {
    var_bindingMap_6748.setter_insertKey (enumerator_4766.current_mBindingName (HERE), var_outletBindingSpecificationModelList_4867, var_controllerBindingOptionDecoratedList_5959, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 176)) ;
    }
    {
    ioArgument_ioSemanticContext.mProperty_mBindingSpecificationMap.setter_insertKey (enumerator_4766.current_mOutletClassName (HERE), var_outletSuperClassName_6776, var_bindingMap_6748, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 181)) ;
    }
    enumerator_4766.gotoNextObject () ;
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
  cEnumerator_outletDeclarationList enumerator_8332 (constinArgument_inOutletDeclarationList, kENUMERATION_UP) ;
  while (enumerator_8332.hasCurrentObject ()) {
    {
    outArgument_outletMap.setter_insertKey (enumerator_8332.current_mOutletName (HERE), enumerator_8332.current_mOutletTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 208)) ;
    }
    GALGAS_bool var_handlesRunAction_8573 ;
    GALGAS_bool var_handlesTableViewBinding_8608 ;
    GALGAS_bool var_handlesEnabledBinding_8650 ;
    GALGAS_bool var_handlesHiddenBinding_8690 ;
    GALGAS_bool var_handleGraphicControllerBinding_8729 ;
    GALGAS_bool var_outletClassIsUserDefined_8778 ;
    GALGAS_lstring joker_8552 ; // Joker input parameter
    constinArgument_inSemanticContext.readProperty_mOutletClassMap ().method_searchKey (enumerator_8332.current_mOutletTypeName (HERE), joker_8552, var_handlesRunAction_8573, var_handlesTableViewBinding_8608, var_handlesEnabledBinding_8650, var_handlesHiddenBinding_8690, var_handleGraphicControllerBinding_8729, var_outletClassIsUserDefined_8778, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 209)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = var_outletClassIsUserDefined_8778.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 219)).boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioGeneration.mProperty_mNeededOutletClasses.addAssign_operation (enumerator_8332.current_mOutletTypeName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 220)) ;
      }
    }
    switch (enumerator_8332.current_mGraphicController (HERE).enumValue ()) {
    case GALGAS_graphicController::kNotBuilt:
      break ;
    case GALGAS_graphicController::kEnum_none:
      {
      }
      break ;
    case GALGAS_graphicController::kEnum_defined:
      {
        const cEnumAssociatedValues_graphicController_defined * extractPtr_11274 = (const cEnumAssociatedValues_graphicController_defined *) (enumerator_8332.current_mGraphicController (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_9038_controllerName = extractPtr_11274->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_9063_propertyName = extractPtr_11274->mAssociatedValue1 ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_handleGraphicControllerBinding_8729.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 226)).boolEnum () ;
          if (kBoolTrue == test_1) {
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (enumerator_8332.current_mOutletTypeName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_8332.current_mOutletTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 227)).add_operation (GALGAS_string ("' type does not handle the $graphicController binding"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 227)), fixItArray2  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 227)) ;
          }
        }
        if (kBoolFalse == test_1) {
          GALGAS_propertyKind var_kind_9367 ;
          GALGAS_actionMap joker_9383_2 ; // Joker input parameter
          GALGAS_bool joker_9383_1 ; // Joker input parameter
          constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_9038_controllerName, var_kind_9367, joker_9383_2, joker_9383_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 229)) ;
          switch (var_kind_9367.enumValue ()) {
          case GALGAS_propertyKind::kNotBuilt:
            break ;
          case GALGAS_propertyKind::kEnum_property:
            {
              TC_Array <C_FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (extractedValue_9038_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray3  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 236)) ;
            }
            break ;
          case GALGAS_propertyKind::kEnum_toMany:
            {
              TC_Array <C_FixItDescription> fixItArray4 ;
              inCompiler->emitSemanticError (extractedValue_9038_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray4  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 238)) ;
            }
            break ;
          case GALGAS_propertyKind::kEnum_toOne:
            {
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (extractedValue_9038_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray5  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 240)) ;
            }
            break ;
          case GALGAS_propertyKind::kEnum_arrayController:
            {
              const cEnumAssociatedValues_propertyKind_arrayController * extractPtr_11023 = (const cEnumAssociatedValues_propertyKind_arrayController *) (var_kind_9367.unsafePointer ()) ;
              const GALGAS_lstring extractedValue_9773_entityName = extractPtr_11023->mAssociatedValue0 ;
              const GALGAS_bool extractedValue_9785_graphic = extractPtr_11023->mAssociatedValue1 ;
              enumGalgasBool test_6 = kBoolTrue ;
              if (kBoolTrue == test_6) {
                test_6 = GALGAS_bool (kIsEqual, extractedValue_9063_propertyName.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
                if (kBoolTrue == test_6) {
                  enumGalgasBool test_7 = kBoolTrue ;
                  if (kBoolTrue == test_7) {
                    test_7 = extractedValue_9785_graphic.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 243)).boolEnum () ;
                    if (kBoolTrue == test_7) {
                      TC_Array <C_FixItDescription> fixItArray8 ;
                      inCompiler->emitSemanticError (extractedValue_9038_controllerName.readProperty_location (), GALGAS_string ("the controlled entity (").add_operation (extractedValue_9773_entityName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 244)).add_operation (GALGAS_string (") should be a graphic entity"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 244)), fixItArray8  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 244)) ;
                    }
                  }
                }
              }
              if (kBoolFalse == test_6) {
                GALGAS_propertyMap var_observablePropertyMap_10126 ;
                GALGAS_classKind joker_10103 ; // Joker input parameter
                GALGAS_actionMap joker_10163_2 ; // Joker input parameter
                GALGAS_propertyGenerationList joker_10163_1 ; // Joker input parameter
                constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_9773_entityName, joker_10103, var_observablePropertyMap_10126, joker_10163_2, joker_10163_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 247)) ;
                GALGAS_propertyKind var_propertyKind_10245 ;
                GALGAS_actionMap joker_10259_2 ; // Joker input parameter
                GALGAS_bool joker_10259_1 ; // Joker input parameter
                var_observablePropertyMap_10126.method_searchKey (extractedValue_9063_propertyName, var_propertyKind_10245, joker_10259_2, joker_10259_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 253)) ;
                switch (var_propertyKind_10245.enumValue ()) {
                case GALGAS_propertyKind::kNotBuilt:
                  break ;
                case GALGAS_propertyKind::kEnum_property:
                  {
                    TC_Array <C_FixItDescription> fixItArray9 ;
                    inCompiler->emitSemanticError (extractedValue_9038_controllerName.readProperty_location (), GALGAS_string ("the bound model should be a toMany property"), fixItArray9  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 256)) ;
                  }
                  break ;
                case GALGAS_propertyKind::kEnum_toMany:
                  {
                    const cEnumAssociatedValues_propertyKind_toMany * extractPtr_10632 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_propertyKind_10245.unsafePointer ()) ;
                    const GALGAS_lstring extractedValue_10438_kEntityName = extractPtr_10632->mAssociatedValue0 ;
                    const GALGAS_bool extractedValue_10454_isGraphic = extractPtr_10632->mAssociatedValue2 ;
                    enumGalgasBool test_10 = kBoolTrue ;
                    if (kBoolTrue == test_10) {
                      test_10 = extractedValue_10454_isGraphic.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 258)).boolEnum () ;
                      if (kBoolTrue == test_10) {
                        TC_Array <C_FixItDescription> fixItArray11 ;
                        inCompiler->emitSemanticError (extractedValue_9038_controllerName.readProperty_location (), GALGAS_string ("the controlled entity (").add_operation (extractedValue_10438_kEntityName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 259)).add_operation (GALGAS_string (") should be a graphic entity"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 259)), fixItArray11  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 259)) ;
                      }
                    }
                  }
                  break ;
                case GALGAS_propertyKind::kEnum_toOne:
                  {
                    TC_Array <C_FixItDescription> fixItArray12 ;
                    inCompiler->emitSemanticError (extractedValue_9038_controllerName.readProperty_location (), GALGAS_string ("the bound model should be a toMany property"), fixItArray12  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 262)) ;
                  }
                  break ;
                case GALGAS_propertyKind::kEnum_arrayController:
                  {
                    TC_Array <C_FixItDescription> fixItArray13 ;
                    inCompiler->emitSemanticError (extractedValue_9038_controllerName.readProperty_location (), GALGAS_string ("the bound model should be a toMany property"), fixItArray13  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 264)) ;
                  }
                  break ;
                case GALGAS_propertyKind::kEnum_selectionController:
                  {
                    TC_Array <C_FixItDescription> fixItArray14 ;
                    inCompiler->emitSemanticError (extractedValue_9038_controllerName.readProperty_location (), GALGAS_string ("the bound model should be a toMany property"), fixItArray14  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 266)) ;
                  }
                  break ;
                }
              }
            }
            break ;
          case GALGAS_propertyKind::kEnum_selectionController:
            {
              TC_Array <C_FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (extractedValue_9038_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray15  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 270)) ;
            }
            break ;
          }
          outArgument_outEBViewGraphicControllerBindingGenerationList.addAssign_operation (enumerator_8332.current_mOutletName (HERE).readProperty_string (), extractedValue_9038_controllerName.readProperty_string ()  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 272)) ;
        }
      }
      break ;
    }
    switch (enumerator_8332.current_mTableValueBindingDescriptor (HERE).enumValue ()) {
    case GALGAS_tableValueBinding::kNotBuilt:
      break ;
    case GALGAS_tableValueBinding::kEnum_noTableValueBinding:
      {
      }
      break ;
    case GALGAS_tableValueBinding::kEnum_tableValueBinding:
      {
        const cEnumAssociatedValues_tableValueBinding_tableValueBinding * extractPtr_11987 = (const cEnumAssociatedValues_tableValueBinding_tableValueBinding *) (enumerator_8332.current_mTableValueBindingDescriptor (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_11419_controllerName = extractPtr_11987->mAssociatedValue0 ;
        enumGalgasBool test_16 = kBoolTrue ;
        if (kBoolTrue == test_16) {
          test_16 = var_handlesTableViewBinding_8608.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 279)).boolEnum () ;
          if (kBoolTrue == test_16) {
            TC_Array <C_FixItDescription> fixItArray17 ;
            inCompiler->emitSemanticError (enumerator_8332.current_mOutletTypeName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_8332.current_mOutletTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 280)).add_operation (GALGAS_string ("' type does not handle the $tableView binding"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 280)), fixItArray17  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 280)) ;
          }
        }
        if (kBoolFalse == test_16) {
          GALGAS_propertyKind var_kind_11717 ;
          GALGAS_actionMap joker_11733_2 ; // Joker input parameter
          GALGAS_bool joker_11733_1 ; // Joker input parameter
          constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_11419_controllerName, var_kind_11717, joker_11733_2, joker_11733_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 282)) ;
          enumGalgasBool test_18 = kBoolTrue ;
          if (kBoolTrue == test_18) {
            test_18 = var_kind_11717.getter_isArrayController (SOURCE_FILE ("outlet-declaration.ggs", 287)).operator_not (SOURCE_FILE ("outlet-declaration.ggs", 287)).boolEnum () ;
            if (kBoolTrue == test_18) {
              TC_Array <C_FixItDescription> fixItArray19 ;
              inCompiler->emitSemanticError (extractedValue_11419_controllerName.readProperty_location (), GALGAS_string ("the bound model should be an array controller"), fixItArray19  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 288)) ;
            }
          }
          outArgument_outTableViewBindingGenerationList.addAssign_operation (enumerator_8332.current_mOutletName (HERE).readProperty_string (), extractedValue_11419_controllerName.readProperty_string ()  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 290)) ;
        }
      }
      break ;
    }
    switch (enumerator_8332.current_mRunDescriptor (HERE).enumValue ()) {
    case GALGAS_runActionDescriptor::kNotBuilt:
      break ;
    case GALGAS_runActionDescriptor::kEnum_noAction:
      {
      }
      break ;
    case GALGAS_runActionDescriptor::kEnum_action:
      {
        const cEnumAssociatedValues_runActionDescriptor_action * extractPtr_12953 = (const cEnumAssociatedValues_runActionDescriptor_action *) (enumerator_8332.current_mRunDescriptor (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_12090_target = extractPtr_12953->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_12107_action = extractPtr_12953->mAssociatedValue1 ;
        enumGalgasBool test_20 = kBoolTrue ;
        if (kBoolTrue == test_20) {
          test_20 = var_handlesRunAction_8573.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 297)).boolEnum () ;
          if (kBoolTrue == test_20) {
            TC_Array <C_FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticError (enumerator_8332.current_mOutletTypeName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_8332.current_mOutletTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 298)).add_operation (GALGAS_string ("' type does not handle run action"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 298)), fixItArray21  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 298)) ;
          }
        }
        if (kBoolFalse == test_20) {
          enumGalgasBool test_22 = kBoolTrue ;
          if (kBoolTrue == test_22) {
            test_22 = GALGAS_bool (kIsEqual, extractedValue_12090_target.readProperty_string ().objectCompare (GALGAS_string ("self"))).boolEnum () ;
            if (kBoolTrue == test_22) {
              constinArgument_inActionMap.method_searchKey (extractedValue_12107_action, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 300)) ;
              outArgument_outTargetActionList.addAssign_operation (enumerator_8332.current_mOutletName (HERE).readProperty_string (), GALGAS_string ("self"), extractedValue_12107_action.readProperty_string (), constinArgument_inReceiverSwiftTypeName  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 301)) ;
            }
          }
          if (kBoolFalse == test_22) {
            GALGAS_actionMap var_controllerActionMap_12621 ;
            GALGAS_propertyKind joker_12591 ; // Joker input parameter
            GALGAS_bool joker_12652 ; // Joker input parameter
            constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_12090_target, joker_12591, var_controllerActionMap_12621, joker_12652, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 307)) ;
            var_controllerActionMap_12621.method_searchKey (extractedValue_12107_action, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 313)) ;
            GALGAS_string temp_23 ;
            const enumGalgasBool test_24 = constinArgument_inPreferences.boolEnum () ;
            if (kBoolTrue == test_24) {
              temp_23 = GALGAS_string ("preferences_") ;
            }else if (kBoolFalse == test_24) {
              temp_23 = GALGAS_string::makeEmptyString () ;
            }
            outArgument_outTargetActionList.addAssign_operation (enumerator_8332.current_mOutletName (HERE).readProperty_string (), temp_23.add_operation (extractedValue_12090_target.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 316)), extractedValue_12107_action.readProperty_string (), GALGAS_string ("Controller_").add_operation (constinArgument_inReceiverSwiftTypeName, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 318)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 318)).add_operation (extractedValue_12090_target.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 318))  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 314)) ;
          }
        }
      }
      break ;
    }
    switch (enumerator_8332.current_mEnabledBindingDescriptor (HERE).enumValue ()) {
    case GALGAS_multipleBindingDescriptor::kNotBuilt:
      break ;
    case GALGAS_multipleBindingDescriptor::kEnum_noBinding:
      {
      }
      break ;
    case GALGAS_multipleBindingDescriptor::kEnum_binding:
      {
        const cEnumAssociatedValues_multipleBindingDescriptor_binding * extractPtr_13835 = (const cEnumAssociatedValues_multipleBindingDescriptor_binding *) (enumerator_8332.current_mEnabledBindingDescriptor (HERE).unsafePointer ()) ;
        const GALGAS_abstractBooleanMultipleBindingExpressionAST extractedValue_13108_expression = extractPtr_13835->mAssociatedValue0 ;
        GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_enableExpression_13406 ;
        GALGAS_typeKind var_type_13447 ;
        GALGAS_location var_errorLocation_13476 ;
        callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_13108_expression.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_enableExpression_13406, var_type_13447, var_errorLocation_13476, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 325)) ;
        enumGalgasBool test_25 = kBoolTrue ;
        if (kBoolTrue == test_25) {
          test_25 = var_handlesEnabledBinding_8650.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 335)).boolEnum () ;
          if (kBoolTrue == test_25) {
            TC_Array <C_FixItDescription> fixItArray26 ;
            inCompiler->emitSemanticError (var_errorLocation_13476, GALGAS_string ("cet outlet n'accepte pas le binding $enabled"), fixItArray26  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 336)) ;
          }
        }
        enumGalgasBool test_27 = kBoolTrue ;
        if (kBoolTrue == test_27) {
          test_27 = var_type_13447.getter_isBoolType (SOURCE_FILE ("outlet-declaration.ggs", 338)).operator_not (SOURCE_FILE ("outlet-declaration.ggs", 338)).boolEnum () ;
          if (kBoolTrue == test_27) {
            TC_Array <C_FixItDescription> fixItArray28 ;
            inCompiler->emitSemanticError (var_errorLocation_13476, GALGAS_string ("expression is not boolean"), fixItArray28  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 339)) ;
          }
        }
        outArgument_outMultipleBindingGenerationList.addAssign_operation (enumerator_8332.current_mOutletName (HERE).readProperty_string (), GALGAS_string ("enabled"), var_enableExpression_13406  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 341)) ;
      }
      break ;
    }
    switch (enumerator_8332.current_mHiddenBindingDescriptor (HERE).enumValue ()) {
    case GALGAS_multipleBindingDescriptor::kNotBuilt:
      break ;
    case GALGAS_multipleBindingDescriptor::kEnum_noBinding:
      {
      }
      break ;
    case GALGAS_multipleBindingDescriptor::kEnum_binding:
      {
        const cEnumAssociatedValues_multipleBindingDescriptor_binding * extractPtr_14725 = (const cEnumAssociatedValues_multipleBindingDescriptor_binding *) (enumerator_8332.current_mHiddenBindingDescriptor (HERE).unsafePointer ()) ;
        const GALGAS_abstractBooleanMultipleBindingExpressionAST extractedValue_14001_expression = extractPtr_14725->mAssociatedValue0 ;
        GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_14299 ;
        GALGAS_typeKind var_type_14340 ;
        GALGAS_location var_errorLocation_14369 ;
        callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_14001_expression.ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_hiddenExpression_14299, var_type_14340, var_errorLocation_14369, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 350)) ;
        enumGalgasBool test_29 = kBoolTrue ;
        if (kBoolTrue == test_29) {
          test_29 = var_type_14340.getter_isBoolType (SOURCE_FILE ("outlet-declaration.ggs", 360)).operator_not (SOURCE_FILE ("outlet-declaration.ggs", 360)).boolEnum () ;
          if (kBoolTrue == test_29) {
            TC_Array <C_FixItDescription> fixItArray30 ;
            inCompiler->emitSemanticError (var_errorLocation_14369, GALGAS_string ("expression is not boolean"), fixItArray30  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 361)) ;
          }
        }
        enumGalgasBool test_31 = kBoolTrue ;
        if (kBoolTrue == test_31) {
          test_31 = var_handlesHiddenBinding_8690.operator_not (SOURCE_FILE ("outlet-declaration.ggs", 363)).boolEnum () ;
          if (kBoolTrue == test_31) {
            TC_Array <C_FixItDescription> fixItArray32 ;
            inCompiler->emitSemanticError (var_errorLocation_14369, GALGAS_string ("cet outlet n'accepte pas le binding $hidden"), fixItArray32  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 364)) ;
          }
        }
        outArgument_outMultipleBindingGenerationList.addAssign_operation (enumerator_8332.current_mOutletName (HERE).readProperty_string (), GALGAS_string ("hidden"), var_hiddenExpression_14299  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 366)) ;
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
    routine_analyzeRegularBinding (constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, enumerator_8332.current_mOutletTypeName (HERE), enumerator_8332.current_mOutletName (HERE).readProperty_string (), enumerator_8332.current_mRegularBindingList (HERE), temp_33, outArgument_outRegularBindingsGenerationList, inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 372)) ;
    }
    enumerator_8332.gotoNextObject () ;
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
  cEnumerator_regularBindingList enumerator_15743 (constinArgument_inRegularBindingList, kENUMERATION_UP) ;
  while (enumerator_15743.hasCurrentObject ()) {
    GALGAS_outletBindingModelList var_boundModelTypeList_15843 = GALGAS_outletBindingModelList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.ggs", 401)) ;
    GALGAS_boundObjectList var_boundModelListForGeneration_15892 = GALGAS_boundObjectList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.ggs", 402)) ;
    cEnumerator_observablePropertyList enumerator_15934 (enumerator_15743.current_mObservablePropertyList (HERE), kENUMERATION_UP) ;
    while (enumerator_15934.hasCurrentObject ()) {
      GALGAS_propertyKind var_kind_16152 ;
      GALGAS_string var_swiftTypeStringForTransientFunctionArgument_16186 ;
      GALGAS_string var_defaultValueAsString_16259 ;
      extensionMethod_analyzeObservableProperty (enumerator_15934.current_mObservableProperty (HERE), constinArgument_inRootPropertyMap, constinArgument_inSemanticContext, constinArgument_inBoundModelPropertyMap, var_kind_16152, var_swiftTypeStringForTransientFunctionArgument_16186, var_defaultValueAsString_16259, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 404)) ;
      switch (var_kind_16152.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          TC_Array <C_FixItDescription> fixItArray0 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_15934.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 415)), GALGAS_string ("a toMany property cannot be bound"), fixItArray0  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 415)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_15934.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 417)), GALGAS_string ("a toOne property cannot be bound"), fixItArray1  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 417)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_15934.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 419)), GALGAS_string ("an array controller cannot be bound"), fixItArray2  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 419)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (extensionGetter_location (enumerator_15934.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 421)), GALGAS_string ("a selection controller cannot be bound"), fixItArray3  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 421)) ;
        }
        break ;
      }
      var_boundModelListForGeneration_15892.addAssign_operation (extensionGetter_modelStringForSelf (enumerator_15934.current_mObservableProperty (HERE), constinArgument_inSelfSwiftName, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 423)), var_kind_16152  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 423)) ;
      var_boundModelTypeList_15843.addAssign_operation (var_kind_16152, extensionGetter_location (enumerator_15934.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 424))  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 424)) ;
      enumerator_15934.gotoNextObject () ;
    }
    GALGAS_outletBindingSpecificationModelList var_outletBindingSpecificationModelList_17053 = GALGAS_outletBindingSpecificationModelList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.ggs", 427)) ;
    GALGAS_controllerBindingOptionDecoratedList var_controllerBindingOptionDecoratedList_17140 = GALGAS_controllerBindingOptionDecoratedList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.ggs", 428)) ;
    GALGAS_lstring var_outletTypeName_17190 = constinArgument_inOutletTypeName ;
    GALGAS_bool var_continues_17232 = GALGAS_bool (true) ;
    if (constinArgument_inSemanticContext.readProperty_mBindingSpecificationMap ().getter_count (SOURCE_FILE ("outlet-declaration.ggs", 431)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 431)).isValid ()) {
      uint32_t variant_17253 = constinArgument_inSemanticContext.readProperty_mBindingSpecificationMap ().getter_count (SOURCE_FILE ("outlet-declaration.ggs", 431)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 431)).uintValue () ;
      bool loop_17253 = true ;
      while (loop_17253) {
        loop_17253 = GALGAS_bool (kIsNotEqual, var_outletTypeName_17190.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).operator_and (var_continues_17232 COMMA_SOURCE_FILE ("outlet-declaration.ggs", 431)).isValid () ;
        if (loop_17253) {
          loop_17253 = GALGAS_bool (kIsNotEqual, var_outletTypeName_17190.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).operator_and (var_continues_17232 COMMA_SOURCE_FILE ("outlet-declaration.ggs", 431)).boolValue () ;
        }
        if (loop_17253 && (0 == variant_17253)) {
          loop_17253 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("outlet-declaration.ggs", 431)) ;
        }
        if (loop_17253) {
          variant_17253 -- ;
          var_continues_17232 = GALGAS_bool (false) ;
          GALGAS_lstring var_superOutletClassName_17488 ;
          GALGAS_outletBindingSpecificationMap var_bindingMap_17554 ;
          constinArgument_inSemanticContext.readProperty_mBindingSpecificationMap ().method_searchKey (var_outletTypeName_17190, var_superOutletClassName_17488, var_bindingMap_17554, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 433)) ;
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            test_4 = var_bindingMap_17554.getter_hasKey (enumerator_15743.current_mBindingName (HERE).readProperty_string () COMMA_SOURCE_FILE ("outlet-declaration.ggs", 438)).boolEnum () ;
            if (kBoolTrue == test_4) {
              var_bindingMap_17554.method_searchKey (enumerator_15743.current_mBindingName (HERE), var_outletBindingSpecificationModelList_17053, var_controllerBindingOptionDecoratedList_17140, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 439)) ;
            }
          }
          if (kBoolFalse == test_4) {
            var_continues_17232 = GALGAS_bool (true) ;
            var_outletTypeName_17190 = var_superOutletClassName_17488 ;
          }
        }
      }
    }
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = var_continues_17232.boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (enumerator_15743.current_mBindingName (HERE).readProperty_location (), GALGAS_string ("this binding is not defined"), fixItArray6  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 450)) ;
      }
    }
    if (kBoolFalse == test_5) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = GALGAS_bool (kIsNotEqual, var_boundModelTypeList_15843.getter_count (SOURCE_FILE ("outlet-declaration.ggs", 451)).objectCompare (var_outletBindingSpecificationModelList_17053.getter_count (SOURCE_FILE ("outlet-declaration.ggs", 451)))).boolEnum () ;
        if (kBoolTrue == test_7) {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (enumerator_15743.current_mBindingName (HERE).readProperty_location (), var_outletBindingSpecificationModelList_17053.getter_count (SOURCE_FILE ("outlet-declaration.ggs", 453)).getter_string (SOURCE_FILE ("outlet-declaration.ggs", 453)).add_operation (GALGAS_string (" model(s) required for this binding (found: "), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 453)).add_operation (var_boundModelTypeList_15843.getter_count (SOURCE_FILE ("outlet-declaration.ggs", 455)).getter_string (SOURCE_FILE ("outlet-declaration.ggs", 454)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 454)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 455)), fixItArray8  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 452)) ;
        }
      }
      if (kBoolFalse == test_7) {
        cEnumerator_outletBindingSpecificationModelList enumerator_18286 (var_outletBindingSpecificationModelList_17053, kENUMERATION_UP) ;
        cEnumerator_outletBindingModelList enumerator_18380 (var_boundModelTypeList_15843, kENUMERATION_UP) ;
        while (enumerator_18286.hasCurrentObject () && enumerator_18380.hasCurrentObject ()) {
          enumGalgasBool test_9 = kBoolTrue ;
          if (kBoolTrue == test_9) {
            GALGAS_bool test_10 = enumerator_18286.current_mModelShouldBeWritableProperty (HERE) ;
            if (kBoolTrue == test_10.boolEnum ()) {
              test_10 = extensionGetter_isTransient (enumerator_18380.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 458)) ;
            }
            test_9 = test_10.boolEnum () ;
            if (kBoolTrue == test_9) {
              TC_Array <C_FixItDescription> fixItArray11 ;
              inCompiler->emitSemanticError (enumerator_18380.current_mErrorLocation (HERE), GALGAS_string ("the model is transient and the binding requires an writable model"), fixItArray11  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 459)) ;
            }
          }
          enumGalgasBool test_12 = kBoolTrue ;
          if (kBoolTrue == test_12) {
            GALGAS_bool test_13 = enumerator_18286.current_mModelType (HERE).getter_isEnumType (SOURCE_FILE ("outlet-declaration.ggs", 461)) ;
            if (kBoolTrue == test_13.boolEnum ()) {
              test_13 = extensionGetter_isEnumType (enumerator_18380.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 461)) ;
            }
            test_12 = test_13.boolEnum () ;
            if (kBoolTrue == test_12) {
            }
          }
          if (kBoolFalse == test_12) {
            enumGalgasBool test_14 = kBoolTrue ;
            if (kBoolTrue == test_14) {
              test_14 = GALGAS_bool (kIsNotEqual, extensionGetter_swiftTypeName (enumerator_18286.current_mModelType (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 462)).objectCompare (extensionGetter_swiftTypeName (enumerator_18380.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 462)))).boolEnum () ;
              if (kBoolTrue == test_14) {
                TC_Array <C_FixItDescription> fixItArray15 ;
                inCompiler->emitSemanticError (enumerator_18380.current_mErrorLocation (HERE), GALGAS_string ("the model type should be ").add_operation (extensionGetter_swiftTypeName (enumerator_18286.current_mModelType (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 463)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 463)), fixItArray15  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 463)) ;
              }
            }
          }
          enumerator_18286.gotoNextObject () ;
          enumerator_18380.gotoNextObject () ;
        }
      }
    }
    GALGAS_string var_bindingOptionString_18969 = GALGAS_string::makeEmptyString () ;
    enumGalgasBool test_16 = kBoolTrue ;
    if (kBoolTrue == test_16) {
      test_16 = GALGAS_bool (kIsNotEqual, var_controllerBindingOptionDecoratedList_17140.getter_count (SOURCE_FILE ("outlet-declaration.ggs", 469)).objectCompare (enumerator_15743.current_mBindingOptionList (HERE).getter_count (SOURCE_FILE ("outlet-declaration.ggs", 469)))).boolEnum () ;
      if (kBoolTrue == test_16) {
        GALGAS_string var_s_19101 ;
        enumGalgasBool test_17 = kBoolTrue ;
        if (kBoolTrue == test_17) {
          test_17 = GALGAS_bool (kIsEqual, var_controllerBindingOptionDecoratedList_17140.getter_count (SOURCE_FILE ("outlet-declaration.ggs", 471)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_17) {
            var_s_19101 = GALGAS_string ("this binding has no option") ;
          }
        }
        if (kBoolFalse == test_17) {
          var_s_19101 = GALGAS_string ("this binding requires the following options:") ;
          cEnumerator_controllerBindingOptionDecoratedList enumerator_19305 (var_controllerBindingOptionDecoratedList_17140, kENUMERATION_UP) ;
          while (enumerator_19305.hasCurrentObject ()) {
            var_s_19101.plusAssign_operation(GALGAS_string ("\n  - ").add_operation (enumerator_19305.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 476)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 476)).add_operation (extensionGetter_swiftTypeName (enumerator_19305.current_mOptionType (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 476)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 476)), inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 476)) ;
            enumerator_19305.gotoNextObject () ;
          }
        }
        TC_Array <C_FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticError (enumerator_15743.current_mBindingName (HERE).readProperty_location (), var_s_19101, fixItArray18  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 479)) ;
      }
    }
    if (kBoolFalse == test_16) {
      cEnumerator_controllerBindingOptionDecoratedList enumerator_19532 (var_controllerBindingOptionDecoratedList_17140, kENUMERATION_UP) ;
      cEnumerator_bindingOptionList enumerator_19628 (enumerator_15743.current_mBindingOptionList (HERE), kENUMERATION_UP) ;
      while (enumerator_19532.hasCurrentObject () && enumerator_19628.hasCurrentObject ()) {
        enumGalgasBool test_19 = kBoolTrue ;
        if (kBoolTrue == test_19) {
          test_19 = GALGAS_bool (kIsNotEqual, enumerator_19532.current_mOptionName (HERE).readProperty_string ().objectCompare (enumerator_19628.current_mOptionName (HERE).readProperty_string ())).boolEnum () ;
          if (kBoolTrue == test_19) {
            TC_Array <C_FixItDescription> fixItArray20 ;
            inCompiler->emitSemanticError (enumerator_19628.current_mOptionName (HERE).readProperty_location (), GALGAS_string ("the option name should be '").add_operation (enumerator_19532.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 484)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 484)), fixItArray20  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 484)) ;
          }
        }
        GALGAS_string var_optionValueAsString_20012 ;
        GALGAS_typeKindList temp_21 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.ggs", 487)) ;
        temp_21.addAssign_operation (enumerator_19532.current_mOptionType (HERE)  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 487)) ;
        callExtensionMethod_analyzeDefaultValueType ((cPtr_abstractDefaultValue *) enumerator_19628.current_mOptionValue (HERE).ptr (), temp_21, constinArgument_inPreferencesPropertyMap, var_optionValueAsString_20012, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 486)) ;
        var_bindingOptionString_18969.plusAssign_operation(GALGAS_string (", ").add_operation (enumerator_19532.current_mOptionName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 491)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 491)).add_operation (var_optionValueAsString_20012, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 491)), inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 491)) ;
        enumerator_19532.gotoNextObject () ;
        enumerator_19628.gotoNextObject () ;
      }
    }
    ioArgument_ioRegularBindingsGenerationList.addAssign_operation (constinArgument_inOutletName, enumerator_15743.current_mBindingName (HERE).readProperty_string (), var_boundModelListForGeneration_15892, var_bindingOptionString_18969  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 495)) ;
    enumerator_15743.gotoNextObject () ;
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
  GALGAS_lstring var_node_768 = GALGAS_lstring::constructor_new (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 16)).add_operation (temp_1.readProperty_mComputedPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 16)), temp_2.readProperty_mComputedPropertyName ().readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 16)) ;
  {
  const GALGAS_computedPropertyDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_768, temp_3, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 17)) ;
  }
  {
  const GALGAS_computedPropertyDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_768, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("computed-property.ggs", 18)) ;
  }
  {
  const GALGAS_computedPropertyDeclarationAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_768, temp_5.readProperty_mComputedPropertyTypeName () COMMA_SOURCE_FILE ("computed-property.ggs", 19)) ;
  }
  const GALGAS_computedPropertyDeclarationAST temp_6 = this ;
  cEnumerator_observablePropertyList enumerator_1042 (temp_6.readProperty_mDependencyList (), kENUMERATION_UP) ;
  while (enumerator_1042.hasCurrentObject ()) {
    switch (enumerator_1042.current (HERE).readProperty_mObservableProperty ().enumValue ()) {
    case GALGAS_observablePropertyAST::kNotBuilt:
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_1309 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (enumerator_1042.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_1126_propertyName = extractPtr_1309->mAssociatedValue0 ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GALGAS_computedPropertyDeclarationAST temp_8 = this ;
          test_7 = GALGAS_bool (kIsNotEqual, temp_8.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_7) {
            {
            const GALGAS_computedPropertyDeclarationAST temp_9 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_768, GALGAS_lstring::constructor_new (temp_9.readProperty_mRootEntityName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 24)).add_operation (extractedValue_1126_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 24)), extractedValue_1126_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 24)) COMMA_SOURCE_FILE ("computed-property.ggs", 24)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_1532 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (enumerator_1042.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_1346_propertyName = extractPtr_1532->mAssociatedValue0 ;
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          const GALGAS_computedPropertyDeclarationAST temp_11 = this ;
          test_10 = GALGAS_bool (kIsNotEqual, temp_11.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_10) {
            {
            const GALGAS_computedPropertyDeclarationAST temp_12 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_768, GALGAS_lstring::constructor_new (temp_12.readProperty_mRootEntityName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 28)).add_operation (extractedValue_1346_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 28)), extractedValue_1346_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 28)) COMMA_SOURCE_FILE ("computed-property.ggs", 28)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_1769 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (enumerator_1042.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_1571_relationshipName = extractPtr_1769->mAssociatedValue0 ;
        enumGalgasBool test_13 = kBoolTrue ;
        if (kBoolTrue == test_13) {
          const GALGAS_computedPropertyDeclarationAST temp_14 = this ;
          test_13 = GALGAS_bool (kIsNotEqual, temp_14.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_13) {
            {
            const GALGAS_computedPropertyDeclarationAST temp_15 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_768, GALGAS_lstring::constructor_new (temp_15.readProperty_mRootEntityName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 32)).add_operation (extractedValue_1571_relationshipName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 32)), extractedValue_1571_relationshipName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 32)) COMMA_SOURCE_FILE ("computed-property.ggs", 32)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootPropertyNone:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone * extractPtr_1995 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone *) (enumerator_1042.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_1800_relationshipName = extractPtr_1995->mAssociatedValue0 ;
        enumGalgasBool test_16 = kBoolTrue ;
        if (kBoolTrue == test_16) {
          const GALGAS_computedPropertyDeclarationAST temp_17 = this ;
          test_16 = GALGAS_bool (kIsNotEqual, temp_17.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_16) {
            {
            const GALGAS_computedPropertyDeclarationAST temp_18 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_768, GALGAS_lstring::constructor_new (temp_18.readProperty_mRootEntityName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 36)).add_operation (extractedValue_1800_relationshipName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 36)), extractedValue_1800_relationshipName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 36)) COMMA_SOURCE_FILE ("computed-property.ggs", 36)) ;
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
        const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_2177 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (enumerator_1042.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2057_propertyName = extractPtr_2177->mAssociatedValue0 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_19 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_768, GALGAS_lstring::constructor_new (temp_19.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 40)).add_operation (extractedValue_2057_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 40)), extractedValue_2057_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 40)) COMMA_SOURCE_FILE ("computed-property.ggs", 40)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyWithOption:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption * extractPtr_2344 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *) (enumerator_1042.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2221_propertyName = extractPtr_2344->mAssociatedValue0 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_20 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_768, GALGAS_lstring::constructor_new (temp_20.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 42)).add_operation (extractedValue_2221_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 42)), extractedValue_2221_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 42)) COMMA_SOURCE_FILE ("computed-property.ggs", 42)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyArray:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray * extractPtr_2506 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *) (enumerator_1042.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2383_propertyName = extractPtr_2506->mAssociatedValue0 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_21 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_768, GALGAS_lstring::constructor_new (temp_21.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 44)).add_operation (extractedValue_2383_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 44)), extractedValue_2383_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 44)) COMMA_SOURCE_FILE ("computed-property.ggs", 44)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyObject:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject * extractPtr_2669 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject *) (enumerator_1042.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2546_propertyName = extractPtr_2669->mAssociatedValue0 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_22 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_768, GALGAS_lstring::constructor_new (temp_22.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 46)).add_operation (extractedValue_2546_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 46)), extractedValue_2546_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 46)) COMMA_SOURCE_FILE ("computed-property.ggs", 46)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyNone:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone * extractPtr_2827 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone *) (enumerator_1042.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2707_propertyName = extractPtr_2827->mAssociatedValue0 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_23 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_768, GALGAS_lstring::constructor_new (temp_23.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 48)).add_operation (extractedValue_2707_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 48)), extractedValue_2707_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 48)) COMMA_SOURCE_FILE ("computed-property.ggs", 48)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_prefsProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_2978 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (enumerator_1042.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2862_propertyName = extractPtr_2978->mAssociatedValue0 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_768, GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 50)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 50)).add_operation (extractedValue_2862_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 50)), extractedValue_2862_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 50)) COMMA_SOURCE_FILE ("computed-property.ggs", 50)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_prefsPropertyWithOption:
      {
        const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption * extractPtr_3142 = (const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *) (enumerator_1042.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3023_propertyName = extractPtr_3142->mAssociatedValue0 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_768, GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 52)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 52)).add_operation (extractedValue_3023_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 52)), extractedValue_3023_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 52)) COMMA_SOURCE_FILE ("computed-property.ggs", 52)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty * extractPtr_3334 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty *) (enumerator_1042.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3186_controllerName = extractPtr_3334->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_3209_propertyName = extractPtr_3334->mAssociatedValue1 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_24 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_768, GALGAS_lstring::constructor_new (temp_24.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 54)).add_operation (extractedValue_3186_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 54)), extractedValue_3186_controllerName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 54)) COMMA_SOURCE_FILE ("computed-property.ggs", 54)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerSecondaryProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty * extractPtr_3565 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty *) (enumerator_1042.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3387_controllerName = extractPtr_3565->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_3410_propertyName = extractPtr_3565->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_3431_secondaryPropertyName = extractPtr_3565->mAssociatedValue2 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_25 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_768, GALGAS_lstring::constructor_new (temp_25.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 56)).add_operation (extractedValue_3387_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 56)), extractedValue_3387_controllerName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 56)) COMMA_SOURCE_FILE ("computed-property.ggs", 56)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerAllProperties:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties * extractPtr_3792 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties *) (enumerator_1042.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3614_controllerName = extractPtr_3792->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_3637_propertyName = extractPtr_3792->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_3658_secondaryPropertyName = extractPtr_3792->mAssociatedValue2 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_26 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_768, GALGAS_lstring::constructor_new (temp_26.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 58)).add_operation (extractedValue_3614_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 58)), extractedValue_3614_controllerName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 58)) COMMA_SOURCE_FILE ("computed-property.ggs", 58)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerOneProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty * extractPtr_3987 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty *) (enumerator_1042.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3839_controllerName = extractPtr_3987->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_3862_propertyName = extractPtr_3987->mAssociatedValue1 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_27 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_768, GALGAS_lstring::constructor_new (temp_27.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 60)).add_operation (extractedValue_3839_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 60)), extractedValue_3839_controllerName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 60)) COMMA_SOURCE_FILE ("computed-property.ggs", 60)) ;
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
        const cEnumAssociatedValues_observablePropertyAST_superProperty * extractPtr_4275 = (const cEnumAssociatedValues_observablePropertyAST_superProperty *) (enumerator_1042.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_4129_superEntityName = extractPtr_4275->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_4155_propertyName = extractPtr_4275->mAssociatedValue1 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_768, GALGAS_lstring::constructor_new (extractedValue_4129_superEntityName.readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 65)).add_operation (extractedValue_4155_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 65)), extractedValue_4155_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 65)) COMMA_SOURCE_FILE ("computed-property.ggs", 65)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_superPropertyWithDefaultValue:
      {
        const cEnumAssociatedValues_observablePropertyAST_superPropertyWithDefaultValue * extractPtr_4475 = (const cEnumAssociatedValues_observablePropertyAST_superPropertyWithDefaultValue *) (enumerator_1042.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_4326_superEntityName = extractPtr_4475->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_4352_propertyName = extractPtr_4475->mAssociatedValue1 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_768, GALGAS_lstring::constructor_new (extractedValue_4326_superEntityName.readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 67)).add_operation (extractedValue_4352_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 67)), extractedValue_4352_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("computed-property.ggs", 67)) COMMA_SOURCE_FILE ("computed-property.ggs", 67)) ;
        }
      }
      break ;
    }
    enumerator_1042.gotoNextObject () ;
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
  cMapElement_classMap * objectArray_6566 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("computed-property.ggs", 129)) ;
  if (nullptr != objectArray_6566) {
    macroValidSharedObject (objectArray_6566, cMapElement_classMap) ;
    GALGAS_classKind var_classKind_6734 ;
    const GALGAS_computedPropertyDeclarationAST temp_1 = this ;
    GALGAS_propertyMap joker_6745_3 ; // Joker input parameter
    GALGAS_actionMap joker_6745_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_6745_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mComputedPropertyTypeName (), var_classKind_6734, joker_6745_3, joker_6745_2, joker_6745_1, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 132)) ;
    switch (var_classKind_6734.enumValue ()) {
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
        const cEnumAssociatedValues_classKind_atomic * extractPtr_7054 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_6734.unsafePointer ()) ;
        const GALGAS_typeKind extractedValue_6885_kind = extractPtr_7054->mAssociatedValue0 ;
        {
        const GALGAS_computedPropertyDeclarationAST temp_4 = this ;
        objectArray_6566->mProperty_mPropertyMap.setter_insertKey (temp_4.readProperty_mComputedPropertyName (), GALGAS_propertyKind::constructor_property (extractedValue_6885_kind, GALGAS_propertyAccessibility::constructor_computed (SOURCE_FILE ("computed-property.ggs", 139))  COMMA_SOURCE_FILE ("computed-property.ggs", 139)), GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("computed-property.ggs", 139)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 137)) ;
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
  GALGAS_classKind var_classKind_7800 ;
  const GALGAS_computedPropertyDeclarationAST temp_0 = this ;
  GALGAS_propertyMap joker_7811_3 ; // Joker input parameter
  GALGAS_actionMap joker_7811_2 ; // Joker input parameter
  GALGAS_propertyGenerationList joker_7811_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_0.readProperty_mComputedPropertyTypeName (), var_classKind_7800, joker_7811_3, joker_7811_2, joker_7811_1, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 160)) ;
  GALGAS_typeKind var_typeKind_7848 ;
  switch (var_classKind_7800.enumValue ()) {
  case GALGAS_classKind::kNotBuilt:
    break ;
  case GALGAS_classKind::kEnum_prefs:
    {
      const GALGAS_computedPropertyDeclarationAST temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mComputedPropertyTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray2  COMMA_SOURCE_FILE ("computed-property.ggs", 165)) ;
      var_typeKind_7848.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_classKind::kEnum_atomic:
    {
      const cEnumAssociatedValues_classKind_atomic * extractPtr_8033 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_7800.unsafePointer ()) ;
      const GALGAS_typeKind extractedValue_8010_kind = extractPtr_8033->mAssociatedValue0 ;
      var_typeKind_7848 = extractedValue_8010_kind ;
    }
    break ;
  case GALGAS_classKind::kEnum_document:
    {
      const GALGAS_computedPropertyDeclarationAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mComputedPropertyTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray4  COMMA_SOURCE_FILE ("computed-property.ggs", 169)) ;
      var_typeKind_7848.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_classKind::kEnum_entity:
    {
      const GALGAS_computedPropertyDeclarationAST temp_5 = this ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mComputedPropertyTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("computed-property.ggs", 171)) ;
      var_typeKind_7848.drop () ; // Release error dropped variable
    }
    break ;
  }
  GALGAS_propertyMap var_rootProperties_8315 ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GALGAS_computedPropertyDeclarationAST temp_8 = this ;
    test_7 = GALGAS_bool (kIsEqual, temp_8.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      var_rootProperties_8315 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("computed-property.ggs", 176)) ;
    }
  }
  if (kBoolFalse == test_7) {
    const GALGAS_computedPropertyDeclarationAST temp_9 = this ;
    GALGAS_classKind joker_8470 ; // Joker input parameter
    GALGAS_actionMap joker_8491_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_8491_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_9.readProperty_mRootEntityName (), joker_8470, var_rootProperties_8315, joker_8491_2, joker_8491_1, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 178)) ;
  }
  GALGAS_classKind var_currentClassKind_8595 ;
  GALGAS_propertyMap var_properties_8618 ;
  const GALGAS_computedPropertyDeclarationAST temp_10 = this ;
  GALGAS_actionMap joker_8630_2 ; // Joker input parameter
  GALGAS_propertyGenerationList joker_8630_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_10.readProperty_mClassName (), var_currentClassKind_8595, var_properties_8618, joker_8630_2, joker_8630_1, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 181)) ;
  GALGAS_transientDependencyListForGeneration var_dependencies_8710 = GALGAS_transientDependencyListForGeneration::constructor_emptyList (SOURCE_FILE ("computed-property.ggs", 183)) ;
  const GALGAS_computedPropertyDeclarationAST temp_11 = this ;
  cEnumerator_observablePropertyList enumerator_8735 (temp_11.readProperty_mDependencyList (), kENUMERATION_UP) ;
  while (enumerator_8735.hasCurrentObject ()) {
    GALGAS_propertyKind var_dependencyKind_8924 ;
    GALGAS_string var_swiftTypeStringForTransientFunctionArgument_8959 ;
    GALGAS_string var_defaultValueAsString_9023 ;
    extensionMethod_analyzeObservableProperty (enumerator_8735.current_mObservableProperty (HERE), var_rootProperties_8315, ioArgument_ioSemanticContext, var_properties_8618, var_dependencyKind_8924, var_swiftTypeStringForTransientFunctionArgument_8959, var_defaultValueAsString_9023, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 185)) ;
    switch (var_dependencyKind_8924.enumValue ()) {
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
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_8735.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 198)), GALGAS_string ("only an atomic property can be observed"), fixItArray12  COMMA_SOURCE_FILE ("computed-property.ggs", 198)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_selectionController:
      {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_8735.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 200)), GALGAS_string ("only an atomic property can be observed"), fixItArray13  COMMA_SOURCE_FILE ("computed-property.ggs", 200)) ;
      }
      break ;
    }
    var_dependencies_8710.addAssign_operation (enumerator_8735.current_mObservableProperty (HERE), extensionGetter_modelStringFunctionArgument (enumerator_8735.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 204)), var_swiftTypeStringForTransientFunctionArgument_8959, var_defaultValueAsString_9023  COMMA_SOURCE_FILE ("computed-property.ggs", 202)) ;
    enumerator_8735.gotoNextObject () ;
  }
  const GALGAS_computedPropertyDeclarationAST temp_14 = this ;
  const GALGAS_computedPropertyDeclarationAST temp_15 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_transientRoutineGeneration::constructor_new (temp_14.readProperty_mClassName ().readProperty_string (), temp_15.readProperty_mComputedPropertyName ().readProperty_string (), var_typeKind_7848, GALGAS_string ("computed"), var_dependencies_8710  COMMA_SOURCE_FILE ("computed-property.ggs", 208))  COMMA_SOURCE_FILE ("computed-property.ggs", 208)) ;
  const GALGAS_computedPropertyDeclarationAST temp_16 = this ;
  const GALGAS_computedPropertyDeclarationAST temp_17 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_computeRoutineGeneration::constructor_new (temp_16.readProperty_mClassName ().readProperty_string (), temp_17.readProperty_mComputedPropertyName ().readProperty_string (), var_typeKind_7848, var_dependencies_8710  COMMA_SOURCE_FILE ("computed-property.ggs", 215))  COMMA_SOURCE_FILE ("computed-property.ggs", 215)) ;
  const GALGAS_computedPropertyDeclarationAST temp_18 = this ;
  cMapElement_classMap * objectArray_9931 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_18.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("computed-property.ggs", 221)) ;
  if (nullptr != objectArray_9931) {
    macroValidSharedObject (objectArray_9931, cMapElement_classMap) ;
    GALGAS_bool var_generate_10033 ;
    switch (var_currentClassKind_8595.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
      {
        var_generate_10033 = GALGAS_bool (true) ;
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
        var_generate_10033 = GALGAS_bool (true) ;
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
        var_generate_10033 = GALGAS_bool (true) ;
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        const cEnumAssociatedValues_classKind_entity * extractPtr_10430 = (const cEnumAssociatedValues_classKind_entity *) (var_currentClassKind_8595.unsafePointer ()) ;
        const GALGAS_bool extractedValue_10219_graphic = extractPtr_10430->mAssociatedValue1 ;
        enumGalgasBool test_19 = kBoolTrue ;
        if (kBoolTrue == test_19) {
          test_19 = extractedValue_10219_graphic.boolEnum () ;
          if (kBoolTrue == test_19) {
            const GALGAS_computedPropertyDeclarationAST temp_20 = this ;
            const GALGAS_computedPropertyDeclarationAST temp_21 = this ;
            var_generate_10033 = GALGAS_bool (kIsNotEqual, temp_20.readProperty_mComputedPropertyName ().readProperty_string ().objectCompare (GALGAS_string ("selectionDisplay"))).operator_and (GALGAS_bool (kIsNotEqual, temp_21.readProperty_mComputedPropertyName ().readProperty_string ().objectCompare (GALGAS_string ("objectDisplay"))) COMMA_SOURCE_FILE ("computed-property.ggs", 234)) ;
          }
        }
        if (kBoolFalse == test_19) {
          var_generate_10033 = GALGAS_bool (true) ;
        }
      }
      break ;
    }
    const GALGAS_computedPropertyDeclarationAST temp_22 = this ;
    const GALGAS_computedPropertyDeclarationAST temp_23 = this ;
    objectArray_9931->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_computedPropertyGeneration::constructor_new (temp_22.readProperty_mComputedPropertyName ().readProperty_string (), temp_23.readProperty_mClassName ().readProperty_string (), var_typeKind_7848, var_dependencies_8710, var_generate_10033  COMMA_SOURCE_FILE ("computed-property.ggs", 239))  COMMA_SOURCE_FILE ("computed-property.ggs", 239)) ;
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
  result_result.plusAssign_operation(GALGAS_string ("    self.selectedArray_property.toMany_").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 286)).add_operation (GALGAS_string ("_StartsBeingObserved (by: self."), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 286)).add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 286)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 286)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 286)) ;
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
    test_0 = temp_1.readProperty_mGenerate ().operator_and (constinArgument_inOverriddenTransients.getter_hasKey (temp_2.readProperty_mPropertyName () COMMA_SOURCE_FILE ("computed-property.ggs", 343)).operator_not (SOURCE_FILE ("computed-property.ggs", 343)) COMMA_SOURCE_FILE ("computed-property.ggs", 343)).boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = constinArgument_inPreferences.boolEnum () ;
        if (kBoolTrue == test_3) {
          result_result.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("computed-property.ggs", 345)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 345)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 345)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 345)) ;
          const GALGAS_computedPropertyGeneration temp_4 = this ;
          result_result.plusAssign_operation(GALGAS_string ("//   Transient property: ").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 346)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 346)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 346)) ;
          result_result.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("computed-property.ggs", 347)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 347)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 347)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 347)) ;
          const GALGAS_computedPropertyGeneration temp_5 = this ;
          const GALGAS_computedPropertyGeneration temp_6 = this ;
          result_result.plusAssign_operation(GALGAS_string ("  let preferences_").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 348)).add_operation (GALGAS_string ("_property = EBComputedProperty_"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 348)).add_operation (extensionGetter_swiftTypeName (temp_6.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 348)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 348)).add_operation (GALGAS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 348)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 348)) ;
          result_result.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("computed-property.ggs", 349)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 349)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 349)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 349)) ;
          const GALGAS_computedPropertyGeneration temp_7 = this ;
          const GALGAS_computedPropertyGeneration temp_8 = this ;
          result_result.plusAssign_operation(GALGAS_string ("  var preferences_").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 350)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 350)).add_operation (extensionGetter_swiftTypeName (temp_8.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 350)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 350)).add_operation (GALGAS_string ("\? {\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 350)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 350)) ;
          const GALGAS_computedPropertyGeneration temp_9 = this ;
          result_result.plusAssign_operation(GALGAS_string ("    return preferences_").add_operation (temp_9.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 351)).add_operation (GALGAS_string ("_property.optionalValue\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 351)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 351)) ;
          result_result.plusAssign_operation(GALGAS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 352)) ;
        }
      }
      if (kBoolFalse == test_3) {
        result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("computed-property.ggs", 354)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 354)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 354)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 354)) ;
        const GALGAS_computedPropertyGeneration temp_10 = this ;
        result_result.plusAssign_operation(GALGAS_string ("  //   Transient property: ").add_operation (temp_10.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 355)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 355)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 355)) ;
        result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("computed-property.ggs", 356)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 356)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 356)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 356)) ;
        const GALGAS_computedPropertyGeneration temp_11 = this ;
        const GALGAS_computedPropertyGeneration temp_12 = this ;
        result_result.plusAssign_operation(GALGAS_string ("  final let ").add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 357)).add_operation (GALGAS_string ("_property = EBComputedProperty_"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 357)).add_operation (extensionGetter_swiftTypeName (temp_12.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 357)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 357)).add_operation (GALGAS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 357)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 357)) ;
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
  GALGAS_string var_prefix_16780 = temp_0 ;
  result_result = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_computedPropertyGeneration temp_3 = this ;
    test_2 = GALGAS_bool (kIsStrictSup, temp_3.readProperty_mDependencyList ().getter_count (SOURCE_FILE ("computed-property.ggs", 367)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_computedPropertyGeneration temp_4 = this ;
      GALGAS_bool var_needs_5F_unwSelf_16910 = extensionGetter_needs_5F_unwSelf (temp_4.readProperty_mDependencyList (), constinArgument_inPreferences, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 368)) ;
      const GALGAS_computedPropertyGeneration temp_5 = this ;
      result_result.plusAssign_operation(GALGAS_string ("  //--- Computed property: ").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 369)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 369)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 369)) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = var_needs_5F_unwSelf_16910.boolEnum () ;
        if (kBoolTrue == test_6) {
          const GALGAS_computedPropertyGeneration temp_7 = this ;
          result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_prefix_16780, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 371)).add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 371)).add_operation (GALGAS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 371)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 371)) ;
          result_result.plusAssign_operation(GALGAS_string ("      if let unwSelf = self {\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 372)) ;
          const GALGAS_computedPropertyGeneration temp_8 = this ;
          const GALGAS_computedPropertyGeneration temp_9 = this ;
          const GALGAS_computedPropertyGeneration temp_10 = this ;
          result_result.plusAssign_operation(extensionGetter_transientComputeFunctionCall (temp_8.readProperty_mDependencyList (), constinArgument_inPreferences, temp_9.readProperty_mClassName (), temp_10.readProperty_mPropertyName (), GALGAS_string ("computed"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 373)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 373)) ;
          result_result.plusAssign_operation(GALGAS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 374)) ;
          result_result.plusAssign_operation(GALGAS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 375)) ;
          result_result.plusAssign_operation(GALGAS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 376)) ;
        }
      }
      if (kBoolFalse == test_6) {
        const GALGAS_computedPropertyGeneration temp_11 = this ;
        result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_prefix_16780, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 378)).add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 378)).add_operation (GALGAS_string ("_property.mReadModelFunction = {\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 378)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 378)) ;
        const GALGAS_computedPropertyGeneration temp_12 = this ;
        const GALGAS_computedPropertyGeneration temp_13 = this ;
        const GALGAS_computedPropertyGeneration temp_14 = this ;
        result_result.plusAssign_operation(extensionGetter_transientComputeFunctionCall (temp_12.readProperty_mDependencyList (), constinArgument_inPreferences, temp_13.readProperty_mClassName (), temp_14.readProperty_mPropertyName (), GALGAS_string ("computed"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 379)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 379)) ;
      }
      result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 381)) ;
      const GALGAS_computedPropertyGeneration temp_15 = this ;
      const GALGAS_computedPropertyGeneration temp_16 = this ;
      result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_prefix_16780, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 382)).add_operation (temp_15.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 382)).add_operation (GALGAS_string ("_property.mWriteModelFunction = { [weak self] in self\?.compute_"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 382)).add_operation (temp_16.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 382)).add_operation (GALGAS_string ("_property ($0) }\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 382)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 382)) ;
      const GALGAS_computedPropertyGeneration temp_17 = this ;
      cEnumerator_transientDependencyListForGeneration enumerator_17915 (temp_17.readProperty_mDependencyList (), kENUMERATION_UP) ;
      while (enumerator_17915.hasCurrentObject ()) {
        GALGAS_string var_s_17955 = extensionGetter_generateAddObserverCall (enumerator_17915.current_mDependency (HERE), constinArgument_inPreferences, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 384)) ;
        enumGalgasBool test_18 = kBoolTrue ;
        if (kBoolTrue == test_18) {
          test_18 = GALGAS_bool (kIsNotEqual, var_s_17955.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_18) {
            const GALGAS_computedPropertyGeneration temp_19 = this ;
            result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_s_17955, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 386)).add_operation (GALGAS_string (" (by: "), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 386)).add_operation (var_prefix_16780, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 386)).add_operation (temp_19.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 386)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 386)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 386)) ;
          }
        }
        enumerator_17915.gotoNextObject () ;
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
    test_0 = GALGAS_bool (kIsStrictSup, temp_1.readProperty_mDependencyList ().getter_count (SOURCE_FILE ("computed-property.ggs", 409)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_computeRoutineGeneration temp_2 = this ;
      const GALGAS_computeRoutineGeneration temp_3 = this ;
      const GALGAS_computeRoutineGeneration temp_4 = this ;
      GALGAS_string var_s_19022 = GALGAS_string (filewrapperTemplate_computedPropertyManager_computedComputationFunctionFile (inCompiler, temp_2.readProperty_mOwnerName (), temp_3.readProperty_mTransientName (), temp_4.readProperty_mTransientType () COMMA_SOURCE_FILE ("computed-property.ggs", 410))) ;
      const GALGAS_computeRoutineGeneration temp_5 = this ;
      const GALGAS_computeRoutineGeneration temp_6 = this ;
      GALGAS_string var_fileName_19186 = GALGAS_string ("compute-").add_operation (temp_5.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 415)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 415)).add_operation (temp_6.readProperty_mTransientName (), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 415)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 415)) ;
      ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_19186  COMMA_SOURCE_FILE ("computed-property.ggs", 416)) ;
      GALGAS_string var_header_19309 = GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("computed-property.ggs", 417)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 417)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 417)) ;
      var_header_19309.plusAssign_operation(GALGAS_string ("//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 418)) ;
      var_header_19309.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("computed-property.ggs", 419)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 419)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 419)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 419)) ;
      var_header_19309.plusAssign_operation(GALGAS_string ("import AppKit\n\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 420)) ;
      var_header_19309.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("computed-property.ggs", 421)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 421)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 421)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 421)) ;
      GALGAS_string var_generatedZone_33__19682 = GALGAS_string ("  }\n\n") ;
      var_generatedZone_33__19682.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("computed-property.ggs", 423)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 423)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 423)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 423)) ;
      var_generatedZone_33__19682.plusAssign_operation(GALGAS_string ("}\n\n"), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 424)) ;
      var_generatedZone_33__19682.plusAssign_operation(GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("computed-property.ggs", 425)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 425)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 425)), inCompiler  COMMA_SOURCE_FILE ("computed-property.ggs", 425)) ;
      {
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_19186, GALGAS_string ("//"), var_header_19309, GALGAS_string ("\n\n"), var_s_19022, GALGAS_string ("\n"), var_generatedZone_33__19682, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 426)) ;
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
  nullptr
} ;

//--- All sub-directories of 'indexes' directory

static const cDirectoryWrapper * gWrapperAllDirectories_computedPropertyManager_4 [1] = {
  nullptr
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
  nullptr
} ;

//--- All sub-directories of 'build' directory

static const cDirectoryWrapper * gWrapperAllDirectories_computedPropertyManager_3 [2] = {
  & gWrapperDirectory_4_computedPropertyManager,
  nullptr
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
  nullptr
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_computedPropertyManager_5 [1] = {
  nullptr
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
  nullptr
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_computedPropertyManager_1 [1] = {
  nullptr
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
  nullptr
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_computedPropertyManager_2 [1] = {
  nullptr
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
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_computedPropertyManager_0 [5] = {
  & gWrapperDirectory_3_computedPropertyManager,
  & gWrapperDirectory_5_computedPropertyManager,
  & gWrapperDirectory_1_computedPropertyManager,
  & gWrapperDirectory_2_computedPropertyManager,
  nullptr
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
  GALGAS_lstring var_node_750 = GALGAS_lstring::constructor_new (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 16)).add_operation (temp_1.readProperty_mTransientName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 16)), temp_2.readProperty_mTransientName ().readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 16)) ;
  {
  const GALGAS_transientDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_750, temp_3, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 17)) ;
  }
  {
  const GALGAS_transientDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_750, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("transient-property.ggs", 18)) ;
  }
  {
  const GALGAS_transientDeclarationAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_750, temp_5.readProperty_mTransientTypeName () COMMA_SOURCE_FILE ("transient-property.ggs", 19)) ;
  }
  const GALGAS_transientDeclarationAST temp_6 = this ;
  cEnumerator_observablePropertyList enumerator_1003 (temp_6.readProperty_mDependencyList (), kENUMERATION_UP) ;
  while (enumerator_1003.hasCurrentObject ()) {
    switch (enumerator_1003.current (HERE).readProperty_mObservableProperty ().enumValue ()) {
    case GALGAS_observablePropertyAST::kNotBuilt:
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_1270 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (enumerator_1003.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_1087_propertyName = extractPtr_1270->mAssociatedValue0 ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GALGAS_transientDeclarationAST temp_8 = this ;
          test_7 = GALGAS_bool (kIsNotEqual, temp_8.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_7) {
            {
            const GALGAS_transientDeclarationAST temp_9 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_750, GALGAS_lstring::constructor_new (temp_9.readProperty_mRootEntityName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 24)).add_operation (extractedValue_1087_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 24)), extractedValue_1087_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 24)) COMMA_SOURCE_FILE ("transient-property.ggs", 24)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_1493 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (enumerator_1003.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_1307_propertyName = extractPtr_1493->mAssociatedValue0 ;
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          const GALGAS_transientDeclarationAST temp_11 = this ;
          test_10 = GALGAS_bool (kIsNotEqual, temp_11.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_10) {
            {
            const GALGAS_transientDeclarationAST temp_12 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_750, GALGAS_lstring::constructor_new (temp_12.readProperty_mRootEntityName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 28)).add_operation (extractedValue_1307_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 28)), extractedValue_1307_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 28)) COMMA_SOURCE_FILE ("transient-property.ggs", 28)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_1730 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (enumerator_1003.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_1532_relationshipName = extractPtr_1730->mAssociatedValue0 ;
        enumGalgasBool test_13 = kBoolTrue ;
        if (kBoolTrue == test_13) {
          const GALGAS_transientDeclarationAST temp_14 = this ;
          test_13 = GALGAS_bool (kIsNotEqual, temp_14.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_13) {
            {
            const GALGAS_transientDeclarationAST temp_15 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_750, GALGAS_lstring::constructor_new (temp_15.readProperty_mRootEntityName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 32)).add_operation (extractedValue_1532_relationshipName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 32)), extractedValue_1532_relationshipName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 32)) COMMA_SOURCE_FILE ("transient-property.ggs", 32)) ;
            }
          }
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_rootPropertyNone:
      {
        const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone * extractPtr_1956 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone *) (enumerator_1003.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_1761_relationshipName = extractPtr_1956->mAssociatedValue0 ;
        enumGalgasBool test_16 = kBoolTrue ;
        if (kBoolTrue == test_16) {
          const GALGAS_transientDeclarationAST temp_17 = this ;
          test_16 = GALGAS_bool (kIsNotEqual, temp_17.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_16) {
            {
            const GALGAS_transientDeclarationAST temp_18 = this ;
            ioArgument_ioGraph.setter_addEdge (var_node_750, GALGAS_lstring::constructor_new (temp_18.readProperty_mRootEntityName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 36)).add_operation (extractedValue_1761_relationshipName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 36)), extractedValue_1761_relationshipName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 36)) COMMA_SOURCE_FILE ("transient-property.ggs", 36)) ;
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
        const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_2138 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (enumerator_1003.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2018_propertyName = extractPtr_2138->mAssociatedValue0 ;
        {
        const GALGAS_transientDeclarationAST temp_19 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_750, GALGAS_lstring::constructor_new (temp_19.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 40)).add_operation (extractedValue_2018_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 40)), extractedValue_2018_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 40)) COMMA_SOURCE_FILE ("transient-property.ggs", 40)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyWithOption:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption * extractPtr_2305 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *) (enumerator_1003.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2182_propertyName = extractPtr_2305->mAssociatedValue0 ;
        {
        const GALGAS_transientDeclarationAST temp_20 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_750, GALGAS_lstring::constructor_new (temp_20.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 42)).add_operation (extractedValue_2182_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 42)), extractedValue_2182_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 42)) COMMA_SOURCE_FILE ("transient-property.ggs", 42)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyArray:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray * extractPtr_2467 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *) (enumerator_1003.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2344_propertyName = extractPtr_2467->mAssociatedValue0 ;
        {
        const GALGAS_transientDeclarationAST temp_21 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_750, GALGAS_lstring::constructor_new (temp_21.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 44)).add_operation (extractedValue_2344_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 44)), extractedValue_2344_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 44)) COMMA_SOURCE_FILE ("transient-property.ggs", 44)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyObject:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject * extractPtr_2630 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject *) (enumerator_1003.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2507_propertyName = extractPtr_2630->mAssociatedValue0 ;
        {
        const GALGAS_transientDeclarationAST temp_22 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_750, GALGAS_lstring::constructor_new (temp_22.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 46)).add_operation (extractedValue_2507_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 46)), extractedValue_2507_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 46)) COMMA_SOURCE_FILE ("transient-property.ggs", 46)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfPropertyNone:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone * extractPtr_2788 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone *) (enumerator_1003.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2668_propertyName = extractPtr_2788->mAssociatedValue0 ;
        {
        const GALGAS_transientDeclarationAST temp_23 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_750, GALGAS_lstring::constructor_new (temp_23.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 48)).add_operation (extractedValue_2668_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 48)), extractedValue_2668_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 48)) COMMA_SOURCE_FILE ("transient-property.ggs", 48)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_prefsProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_2939 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (enumerator_1003.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2823_propertyName = extractPtr_2939->mAssociatedValue0 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_750, GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 50)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 50)).add_operation (extractedValue_2823_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 50)), extractedValue_2823_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 50)) COMMA_SOURCE_FILE ("transient-property.ggs", 50)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_prefsPropertyWithOption:
      {
        const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption * extractPtr_3103 = (const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *) (enumerator_1003.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_2984_propertyName = extractPtr_3103->mAssociatedValue0 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_750, GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 52)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 52)).add_operation (extractedValue_2984_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 52)), extractedValue_2984_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 52)) COMMA_SOURCE_FILE ("transient-property.ggs", 52)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty * extractPtr_3295 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty *) (enumerator_1003.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3147_controllerName = extractPtr_3295->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_3170_propertyName = extractPtr_3295->mAssociatedValue1 ;
        {
        const GALGAS_transientDeclarationAST temp_24 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_750, GALGAS_lstring::constructor_new (temp_24.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 54)).add_operation (extractedValue_3147_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 54)), extractedValue_3147_controllerName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 54)) COMMA_SOURCE_FILE ("transient-property.ggs", 54)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerSecondaryProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty * extractPtr_3526 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty *) (enumerator_1003.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3348_controllerName = extractPtr_3526->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_3371_propertyName = extractPtr_3526->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_3392_secondaryPropertyName = extractPtr_3526->mAssociatedValue2 ;
        {
        const GALGAS_transientDeclarationAST temp_25 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_750, GALGAS_lstring::constructor_new (temp_25.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 56)).add_operation (extractedValue_3348_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 56)), extractedValue_3348_controllerName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 56)) COMMA_SOURCE_FILE ("transient-property.ggs", 56)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerAllProperties:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties * extractPtr_3753 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties *) (enumerator_1003.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3575_controllerName = extractPtr_3753->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_3598_propertyName = extractPtr_3753->mAssociatedValue1 ;
        const GALGAS_lstring extractedValue_3619_secondaryPropertyName = extractPtr_3753->mAssociatedValue2 ;
        {
        const GALGAS_transientDeclarationAST temp_26 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_750, GALGAS_lstring::constructor_new (temp_26.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 58)).add_operation (extractedValue_3575_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 58)), extractedValue_3575_controllerName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 58)) COMMA_SOURCE_FILE ("transient-property.ggs", 58)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_selfControllerOneProperty:
      {
        const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty * extractPtr_3948 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty *) (enumerator_1003.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_3800_controllerName = extractPtr_3948->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_3823_propertyName = extractPtr_3948->mAssociatedValue1 ;
        {
        const GALGAS_transientDeclarationAST temp_27 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_750, GALGAS_lstring::constructor_new (temp_27.readProperty_mClassName ().readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 60)).add_operation (extractedValue_3800_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 60)), extractedValue_3800_controllerName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 60)) COMMA_SOURCE_FILE ("transient-property.ggs", 60)) ;
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
        const cEnumAssociatedValues_observablePropertyAST_superProperty * extractPtr_4236 = (const cEnumAssociatedValues_observablePropertyAST_superProperty *) (enumerator_1003.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_4090_superEntityName = extractPtr_4236->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_4116_propertyName = extractPtr_4236->mAssociatedValue1 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_750, GALGAS_lstring::constructor_new (extractedValue_4090_superEntityName.readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 65)).add_operation (extractedValue_4116_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 65)), extractedValue_4116_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 65)) COMMA_SOURCE_FILE ("transient-property.ggs", 65)) ;
        }
      }
      break ;
    case GALGAS_observablePropertyAST::kEnum_superPropertyWithDefaultValue:
      {
        const cEnumAssociatedValues_observablePropertyAST_superPropertyWithDefaultValue * extractPtr_4436 = (const cEnumAssociatedValues_observablePropertyAST_superPropertyWithDefaultValue *) (enumerator_1003.current (HERE).readProperty_mObservableProperty ().unsafePointer ()) ;
        const GALGAS_lstring extractedValue_4287_superEntityName = extractPtr_4436->mAssociatedValue0 ;
        const GALGAS_lstring extractedValue_4313_propertyName = extractPtr_4436->mAssociatedValue1 ;
        {
        ioArgument_ioGraph.setter_addEdge (var_node_750, GALGAS_lstring::constructor_new (extractedValue_4287_superEntityName.readProperty_string ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 67)).add_operation (extractedValue_4313_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 67)), extractedValue_4313_propertyName.readProperty_location ()  COMMA_SOURCE_FILE ("transient-property.ggs", 67)) COMMA_SOURCE_FILE ("transient-property.ggs", 67)) ;
        }
      }
      break ;
    }
    enumerator_1003.gotoNextObject () ;
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
  cMapElement_classMap * objectArray_7110 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("transient-property.ggs", 151)) ;
  if (nullptr != objectArray_7110) {
    macroValidSharedObject (objectArray_7110, cMapElement_classMap) ;
    GALGAS_classKind var_classKind_7271 ;
    const GALGAS_transientDeclarationAST temp_1 = this ;
    GALGAS_propertyMap joker_7282_3 ; // Joker input parameter
    GALGAS_actionMap joker_7282_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_7282_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mTransientTypeName (), var_classKind_7271, joker_7282_3, joker_7282_2, joker_7282_1, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 154)) ;
    switch (var_classKind_7271.enumValue ()) {
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
        const cEnumAssociatedValues_classKind_atomic * extractPtr_7641 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_7271.unsafePointer ()) ;
        const GALGAS_typeKind extractedValue_7415_kind = extractPtr_7641->mAssociatedValue0 ;
        {
        const GALGAS_transientDeclarationAST temp_4 = this ;
        const GALGAS_transientDeclarationAST temp_5 = this ;
        const GALGAS_transientDeclarationAST temp_6 = this ;
        objectArray_7110->mProperty_mPropertyMap.setter_insertKey (temp_4.readProperty_mTransientName (), GALGAS_propertyKind::constructor_property (extractedValue_7415_kind, GALGAS_propertyAccessibility::constructor_transient (GALGAS_bool (kIsEqual, temp_5.readProperty_mDependencyList ().getter_count (SOURCE_FILE ("transient-property.ggs", 161)).objectCompare (GALGAS_uint (uint32_t (0U))))  COMMA_SOURCE_FILE ("transient-property.ggs", 161))  COMMA_SOURCE_FILE ("transient-property.ggs", 161)), GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("transient-property.ggs", 161)), temp_6.readProperty_mIsOverriding (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 159)) ;
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
  GALGAS_classKind var_classKind_8359 ;
  const GALGAS_transientDeclarationAST temp_0 = this ;
  GALGAS_propertyMap joker_8370_3 ; // Joker input parameter
  GALGAS_actionMap joker_8370_2 ; // Joker input parameter
  GALGAS_propertyGenerationList joker_8370_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_0.readProperty_mTransientTypeName (), var_classKind_8359, joker_8370_3, joker_8370_2, joker_8370_1, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 181)) ;
  GALGAS_typeKind var_typeKind_8407 ;
  switch (var_classKind_8359.enumValue ()) {
  case GALGAS_classKind::kNotBuilt:
    break ;
  case GALGAS_classKind::kEnum_prefs:
    {
      const GALGAS_transientDeclarationAST temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mTransientTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray2  COMMA_SOURCE_FILE ("transient-property.ggs", 186)) ;
      var_typeKind_8407.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_classKind::kEnum_atomic:
    {
      const cEnumAssociatedValues_classKind_atomic * extractPtr_8585 = (const cEnumAssociatedValues_classKind_atomic *) (var_classKind_8359.unsafePointer ()) ;
      const GALGAS_typeKind extractedValue_8562_kind = extractPtr_8585->mAssociatedValue0 ;
      var_typeKind_8407 = extractedValue_8562_kind ;
    }
    break ;
  case GALGAS_classKind::kEnum_document:
    {
      const GALGAS_transientDeclarationAST temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mTransientTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray4  COMMA_SOURCE_FILE ("transient-property.ggs", 190)) ;
      var_typeKind_8407.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_classKind::kEnum_entity:
    {
      const GALGAS_transientDeclarationAST temp_5 = this ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mTransientTypeName ().readProperty_location (), GALGAS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("transient-property.ggs", 192)) ;
      var_typeKind_8407.drop () ; // Release error dropped variable
    }
    break ;
  }
  GALGAS_propertyMap var_rootProperties_8853 ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GALGAS_transientDeclarationAST temp_8 = this ;
    test_7 = GALGAS_bool (kIsEqual, temp_8.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      var_rootProperties_8853 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("transient-property.ggs", 197)) ;
    }
  }
  if (kBoolFalse == test_7) {
    const GALGAS_transientDeclarationAST temp_9 = this ;
    GALGAS_classKind joker_9008 ; // Joker input parameter
    GALGAS_actionMap joker_9029_2 ; // Joker input parameter
    GALGAS_propertyGenerationList joker_9029_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_9.readProperty_mRootEntityName (), joker_9008, var_rootProperties_8853, joker_9029_2, joker_9029_1, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 199)) ;
  }
  GALGAS_classKind var_currentClassKind_9133 ;
  GALGAS_propertyMap var_properties_9156 ;
  const GALGAS_transientDeclarationAST temp_10 = this ;
  GALGAS_actionMap joker_9168_2 ; // Joker input parameter
  GALGAS_propertyGenerationList joker_9168_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_10.readProperty_mClassName (), var_currentClassKind_9133, var_properties_9156, joker_9168_2, joker_9168_1, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 202)) ;
  GALGAS_transientDependencyListForGeneration var_dependencies_9248 = GALGAS_transientDependencyListForGeneration::constructor_emptyList (SOURCE_FILE ("transient-property.ggs", 204)) ;
  const GALGAS_transientDeclarationAST temp_11 = this ;
  cEnumerator_observablePropertyList enumerator_9273 (temp_11.readProperty_mDependencyList (), kENUMERATION_UP) ;
  while (enumerator_9273.hasCurrentObject ()) {
    GALGAS_propertyKind var_dependencyKind_9462 ;
    GALGAS_string var_swiftTypeStringForTransientFunctionArgument_9497 ;
    GALGAS_string var_defaultValueAsString_9561 ;
    extensionMethod_analyzeObservableProperty (enumerator_9273.current_mObservableProperty (HERE), var_rootProperties_8853, ioArgument_ioSemanticContext, var_properties_9156, var_dependencyKind_9462, var_swiftTypeStringForTransientFunctionArgument_9497, var_defaultValueAsString_9561, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 206)) ;
    switch (var_dependencyKind_9462.enumValue ()) {
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
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_9273.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 220)), GALGAS_string ("only an atomic property can be observed"), fixItArray12  COMMA_SOURCE_FILE ("transient-property.ggs", 220)) ;
      }
      break ;
    case GALGAS_propertyKind::kEnum_selectionController:
      {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (extensionGetter_location (enumerator_9273.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 222)), GALGAS_string ("only an atomic property can be observed"), fixItArray13  COMMA_SOURCE_FILE ("transient-property.ggs", 222)) ;
      }
      break ;
    }
    var_dependencies_9248.addAssign_operation (enumerator_9273.current_mObservableProperty (HERE), extensionGetter_modelStringFunctionArgument (enumerator_9273.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 226)), var_swiftTypeStringForTransientFunctionArgument_9497, var_defaultValueAsString_9561  COMMA_SOURCE_FILE ("transient-property.ggs", 224)) ;
    enumerator_9273.gotoNextObject () ;
  }
  const GALGAS_transientDeclarationAST temp_14 = this ;
  const GALGAS_transientDeclarationAST temp_15 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.addAssign_operation (GALGAS_transientRoutineGeneration::constructor_new (temp_14.readProperty_mClassName ().readProperty_string (), temp_15.readProperty_mTransientName ().readProperty_string (), var_typeKind_8407, GALGAS_string ("transient"), var_dependencies_9248  COMMA_SOURCE_FILE ("transient-property.ggs", 230))  COMMA_SOURCE_FILE ("transient-property.ggs", 230)) ;
  const GALGAS_transientDeclarationAST temp_16 = this ;
  cMapElement_classMap * objectArray_10368 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_16.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("transient-property.ggs", 237)) ;
  if (nullptr != objectArray_10368) {
    macroValidSharedObject (objectArray_10368, cMapElement_classMap) ;
    GALGAS_bool var_generate_10470 ;
    switch (var_currentClassKind_9133.enumValue ()) {
    case GALGAS_classKind::kNotBuilt:
      break ;
    case GALGAS_classKind::kEnum_prefs:
      {
        var_generate_10470 = GALGAS_bool (true) ;
      }
      break ;
    case GALGAS_classKind::kEnum_document:
      {
        var_generate_10470 = GALGAS_bool (true) ;
      }
      break ;
    case GALGAS_classKind::kEnum_atomic:
      {
        var_generate_10470 = GALGAS_bool (true) ;
      }
      break ;
    case GALGAS_classKind::kEnum_entity:
      {
        const cEnumAssociatedValues_classKind_entity * extractPtr_10853 = (const cEnumAssociatedValues_classKind_entity *) (var_currentClassKind_9133.unsafePointer ()) ;
        const GALGAS_bool extractedValue_10656_graphic = extractPtr_10853->mAssociatedValue1 ;
        enumGalgasBool test_17 = kBoolTrue ;
        if (kBoolTrue == test_17) {
          test_17 = extractedValue_10656_graphic.boolEnum () ;
          if (kBoolTrue == test_17) {
            const GALGAS_transientDeclarationAST temp_18 = this ;
            const GALGAS_transientDeclarationAST temp_19 = this ;
            var_generate_10470 = GALGAS_bool (kIsNotEqual, temp_18.readProperty_mTransientName ().readProperty_string ().objectCompare (GALGAS_string ("selectionDisplay"))).operator_and (GALGAS_bool (kIsNotEqual, temp_19.readProperty_mTransientName ().readProperty_string ().objectCompare (GALGAS_string ("objectDisplay"))) COMMA_SOURCE_FILE ("transient-property.ggs", 250)) ;
          }
        }
        if (kBoolFalse == test_17) {
          var_generate_10470 = GALGAS_bool (true) ;
        }
      }
      break ;
    }
    const GALGAS_transientDeclarationAST temp_20 = this ;
    const GALGAS_transientDeclarationAST temp_21 = this ;
    objectArray_10368->mProperty_mPropertyGenerationList.addAssign_operation (GALGAS_transientPropertyGeneration::constructor_new (temp_20.readProperty_mTransientName ().readProperty_string (), temp_21.readProperty_mClassName ().readProperty_string (), var_typeKind_8407, var_dependencies_9248, var_generate_10470  COMMA_SOURCE_FILE ("transient-property.ggs", 255))  COMMA_SOURCE_FILE ("transient-property.ggs", 255)) ;
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
  result_result.plusAssign_operation(GALGAS_string ("  final let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 288)).add_operation (GALGAS_string ("_property = EBTransientProperty <"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 288)).add_operation (extensionGetter_swiftTypeName (temp_2.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 288)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 288)).add_operation (GALGAS_string ("> ()\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 288)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 288)) ;
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
  result_result.plusAssign_operation(GALGAS_string ("    self.selectedArray_property.toMany_").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 302)).add_operation (GALGAS_string ("_StartsBeingObserved (by: self."), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 302)).add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 302)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 302)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 302)) ;
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
          result_result.plusAssign_operation(GALGAS_string ("@MainActor let preferences_").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 353)).add_operation (GALGAS_string ("_property = EBTransientProperty <"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 353)).add_operation (extensionGetter_swiftTypeName (temp_6.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 353)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 353)).add_operation (GALGAS_string ("> ()\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 353)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 353)) ;
        }
      }
      if (kBoolFalse == test_3) {
        result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("transient-property.ggs", 355)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 355)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 355)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 355)) ;
        const GALGAS_transientPropertyGeneration temp_7 = this ;
        result_result.plusAssign_operation(GALGAS_string ("  //   Transient property: ").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 356)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 356)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 356)) ;
        result_result.plusAssign_operation(GALGAS_string ("  //").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (183)), GALGAS_uint (uint32_t (116U))  COMMA_SOURCE_FILE ("transient-property.ggs", 357)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 357)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 357)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 357)) ;
        const GALGAS_transientPropertyGeneration temp_8 = this ;
        const GALGAS_transientPropertyGeneration temp_9 = this ;
        result_result.plusAssign_operation(GALGAS_string ("  final let ").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 358)).add_operation (GALGAS_string ("_property = EBTransientProperty <"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 358)).add_operation (extensionGetter_swiftTypeName (temp_9.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 358)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 358)).add_operation (GALGAS_string ("> ()\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 358)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 358)) ;
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
  GALGAS_string var_prefix_16460 = temp_0 ;
  result_result = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_transientPropertyGeneration temp_3 = this ;
    test_2 = GALGAS_bool (kIsStrictSup, temp_3.readProperty_mDependencyList ().getter_count (SOURCE_FILE ("transient-property.ggs", 372)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_transientPropertyGeneration temp_4 = this ;
      GALGAS_bool var_needs_5F_unwSelf_16590 = extensionGetter_needs_5F_unwSelf (temp_4.readProperty_mDependencyList (), constinArgument_inPreferences, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 373)) ;
      const GALGAS_transientPropertyGeneration temp_5 = this ;
      result_result.plusAssign_operation(GALGAS_string ("  //--- Atomic property: ").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 374)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 374)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 374)) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = var_needs_5F_unwSelf_16590.boolEnum () ;
        if (kBoolTrue == test_6) {
          const GALGAS_transientPropertyGeneration temp_7 = this ;
          result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_prefix_16460, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 376)).add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 376)).add_operation (GALGAS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 376)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 376)) ;
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
        result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_prefix_16460, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 383)).add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 383)).add_operation (GALGAS_string ("_property.mReadModelFunction = {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 383)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 383)) ;
        const GALGAS_transientPropertyGeneration temp_12 = this ;
        const GALGAS_transientPropertyGeneration temp_13 = this ;
        const GALGAS_transientPropertyGeneration temp_14 = this ;
        result_result.plusAssign_operation(extensionGetter_transientComputeFunctionCall (temp_12.readProperty_mDependencyList (), constinArgument_inPreferences, temp_13.readProperty_mClassName (), temp_14.readProperty_mPropertyName (), GALGAS_string ("transient"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 384)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 384)) ;
      }
      result_result.plusAssign_operation(GALGAS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 386)) ;
      const GALGAS_transientPropertyGeneration temp_15 = this ;
      cEnumerator_transientDependencyListForGeneration enumerator_17432 (temp_15.readProperty_mDependencyList (), kENUMERATION_UP) ;
      while (enumerator_17432.hasCurrentObject ()) {
        GALGAS_string var_s_17472 = extensionGetter_generateAddObserverCall (enumerator_17432.current_mDependency (HERE), constinArgument_inPreferences, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 388)) ;
        enumGalgasBool test_16 = kBoolTrue ;
        if (kBoolTrue == test_16) {
          test_16 = GALGAS_bool (kIsNotEqual, var_s_17472.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_16) {
            const GALGAS_transientPropertyGeneration temp_17 = this ;
            result_result.plusAssign_operation(GALGAS_string ("    ").add_operation (var_s_17472, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 390)).add_operation (GALGAS_string (" (by: "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 390)).add_operation (var_prefix_16460, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 390)).add_operation (temp_17.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 390)).add_operation (GALGAS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 390)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 390)) ;
          }
        }
        enumerator_17432.gotoNextObject () ;
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
    test_0 = GALGAS_bool (kIsStrictSup, temp_1.readProperty_mDependencyList ().getter_count (SOURCE_FILE ("transient-property.ggs", 598)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_transientRoutineGeneration temp_2 = this ;
      const GALGAS_transientRoutineGeneration temp_3 = this ;
      const GALGAS_transientRoutineGeneration temp_4 = this ;
      const GALGAS_transientRoutineGeneration temp_5 = this ;
      const GALGAS_transientRoutineGeneration temp_6 = this ;
      GALGAS_string var_s_28573 = GALGAS_string (filewrapperTemplate_transientManager_transientComputationFunctionFile (inCompiler, temp_2.readProperty_mOwnerName (), temp_3.readProperty_mTransientName (), temp_4.readProperty_mDependencyList (), temp_5.readProperty_mTransientType (), temp_6.readProperty_mGeneratedFunctionNamePrefix () COMMA_SOURCE_FILE ("transient-property.ggs", 599))) ;
      GALGAS_string var_header_28800 = GALGAS_string ("//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("transient-property.ggs", 606)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 606)).add_operation (GALGAS_string ("\n//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n//"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 606)).add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("transient-property.ggs", 608)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 608)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 608)).add_operation (GALGAS_string ("import AppKit\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 608)).add_operation (GALGAS_string ("//"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 609)).add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("transient-property.ggs", 610)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 610)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 610)) ;
      const GALGAS_transientRoutineGeneration temp_7 = this ;
      const GALGAS_transientRoutineGeneration temp_8 = this ;
      const GALGAS_transientRoutineGeneration temp_9 = this ;
      GALGAS_string var_fileName_29144 = temp_7.readProperty_mGeneratedFunctionNamePrefix ().add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 611)).add_operation (temp_8.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 611)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 611)).add_operation (temp_9.readProperty_mTransientName (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 611)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 611)) ;
      ioArgument_ioGeneratedFileSet.addAssign_operation (var_fileName_29144  COMMA_SOURCE_FILE ("transient-property.ggs", 612)) ;
      {
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_29144, GALGAS_string ("//"), var_header_28800, GALGAS_string ("\n\n"), var_s_28573, GALGAS_string ("\n"), GALGAS_string ("}\n\n//").add_operation (GALGAS_string::constructor_stringWithSequenceOfCharacters (GALGAS_char (TO_UNICODE (8212)), GALGAS_uint (uint32_t (118U))  COMMA_SOURCE_FILE ("transient-property.ggs", 621)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 621)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 621)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 613)) ;
      }
    }
  }
}

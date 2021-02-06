#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-5.h"

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefDeclaration::GALGAS_prefDeclaration (void) :
mProperty_mOutletDeclarationList (),
mProperty_mSimpleStoredAttributeList (),
mProperty_mActionDeclarationList (),
mProperty_mExternSwiftFunctionList (),
mProperty_mSignatureList (),
mProperty_mMainXibDescriptorList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefDeclaration::~ GALGAS_prefDeclaration (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefDeclaration::GALGAS_prefDeclaration (const GALGAS_outletDeclarationList & inOperand0,
                                                const GALGAS_simpleStoredPropertyList & inOperand1,
                                                const GALGAS_lstringlist & inOperand2,
                                                const GALGAS_externSwiftFunctionList & inOperand3,
                                                const GALGAS_stringset & inOperand4,
                                                const GALGAS_mainXibDescriptorList & inOperand5) :
mProperty_mOutletDeclarationList (inOperand0),
mProperty_mSimpleStoredAttributeList (inOperand1),
mProperty_mActionDeclarationList (inOperand2),
mProperty_mExternSwiftFunctionList (inOperand3),
mProperty_mSignatureList (inOperand4),
mProperty_mMainXibDescriptorList (inOperand5) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefDeclaration GALGAS_prefDeclaration::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_prefDeclaration (GALGAS_outletDeclarationList::constructor_emptyList (HERE),
                                 GALGAS_simpleStoredPropertyList::constructor_emptyList (HERE),
                                 GALGAS_lstringlist::constructor_emptyList (HERE),
                                 GALGAS_externSwiftFunctionList::constructor_emptyList (HERE),
                                 GALGAS_stringset::constructor_emptySet (HERE),
                                 GALGAS_mainXibDescriptorList::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefDeclaration GALGAS_prefDeclaration::constructor_new (const GALGAS_outletDeclarationList & inOperand0,
                                                                const GALGAS_simpleStoredPropertyList & inOperand1,
                                                                const GALGAS_lstringlist & inOperand2,
                                                                const GALGAS_externSwiftFunctionList & inOperand3,
                                                                const GALGAS_stringset & inOperand4,
                                                                const GALGAS_mainXibDescriptorList & inOperand5 
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_prefDeclaration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_prefDeclaration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_prefDeclaration::objectCompare (const GALGAS_prefDeclaration & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mOutletDeclarationList.objectCompare (inOperand.mProperty_mOutletDeclarationList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSimpleStoredAttributeList.objectCompare (inOperand.mProperty_mSimpleStoredAttributeList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mActionDeclarationList.objectCompare (inOperand.mProperty_mActionDeclarationList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExternSwiftFunctionList.objectCompare (inOperand.mProperty_mExternSwiftFunctionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSignatureList.objectCompare (inOperand.mProperty_mSignatureList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mMainXibDescriptorList.objectCompare (inOperand.mProperty_mMainXibDescriptorList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_prefDeclaration::isValid (void) const {
  return mProperty_mOutletDeclarationList.isValid () && mProperty_mSimpleStoredAttributeList.isValid () && mProperty_mActionDeclarationList.isValid () && mProperty_mExternSwiftFunctionList.isValid () && mProperty_mSignatureList.isValid () && mProperty_mMainXibDescriptorList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_prefDeclaration::drop (void) {
  mProperty_mOutletDeclarationList.drop () ;
  mProperty_mSimpleStoredAttributeList.drop () ;
  mProperty_mActionDeclarationList.drop () ;
  mProperty_mExternSwiftFunctionList.drop () ;
  mProperty_mSignatureList.drop () ;
  mProperty_mMainXibDescriptorList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_prefDeclaration::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "<struct @prefDeclaration:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mOutletDeclarationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSimpleStoredAttributeList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mActionDeclarationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExternSwiftFunctionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSignatureList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mMainXibDescriptorList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletDeclarationList GALGAS_prefDeclaration::getter_mOutletDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOutletDeclarationList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_simpleStoredPropertyList GALGAS_prefDeclaration::getter_mSimpleStoredAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSimpleStoredAttributeList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_prefDeclaration::getter_mActionDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActionDeclarationList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externSwiftFunctionList GALGAS_prefDeclaration::getter_mExternSwiftFunctionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternSwiftFunctionList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset GALGAS_prefDeclaration::getter_mSignatureList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSignatureList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mainXibDescriptorList GALGAS_prefDeclaration::getter_mMainXibDescriptorList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMainXibDescriptorList ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@prefDeclaration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_prefDeclaration ("prefDeclaration",
                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_prefDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefDeclaration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_prefDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefDeclaration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefDeclaration GALGAS_prefDeclaration::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_prefDeclaration result ;
  const GALGAS_prefDeclaration * p = (const GALGAS_prefDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_prefDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticContext::GALGAS_semanticContext (void) :
mProperty_mClassMap (),
mProperty_mOutletClassMap (),
mProperty_mBindingSpecificationMap (),
mProperty_mAutolayoutViewClassMap (),
mProperty_mAutoLayoutBindingSpecificationMap (),
mProperty_mAutoLayoutVStackFunctionMap (),
mProperty_mAutoLayoutHStackFunctionMap (),
mProperty_mEnumerationFunctionListAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticContext::~ GALGAS_semanticContext (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticContext::GALGAS_semanticContext (const GALGAS_classMap & inOperand0,
                                                const GALGAS_outletClassMap & inOperand1,
                                                const GALGAS_bindingSpecificationMap & inOperand2,
                                                const GALGAS_autolayoutViewClassMap & inOperand3,
                                                const GALGAS_autoLayoutBindingSpecificationMap & inOperand4,
                                                const GALGAS_astAutoLayoutViewFunctionMap & inOperand5,
                                                const GALGAS_astAutoLayoutViewFunctionMap & inOperand6,
                                                const GALGAS_enumerationFunctionListAST & inOperand7) :
mProperty_mClassMap (inOperand0),
mProperty_mOutletClassMap (inOperand1),
mProperty_mBindingSpecificationMap (inOperand2),
mProperty_mAutolayoutViewClassMap (inOperand3),
mProperty_mAutoLayoutBindingSpecificationMap (inOperand4),
mProperty_mAutoLayoutVStackFunctionMap (inOperand5),
mProperty_mAutoLayoutHStackFunctionMap (inOperand6),
mProperty_mEnumerationFunctionListAST (inOperand7) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticContext GALGAS_semanticContext::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_semanticContext (GALGAS_classMap::constructor_emptyMap (HERE),
                                 GALGAS_outletClassMap::constructor_emptyMap (HERE),
                                 GALGAS_bindingSpecificationMap::constructor_emptyMap (HERE),
                                 GALGAS_autolayoutViewClassMap::constructor_emptyMap (HERE),
                                 GALGAS_autoLayoutBindingSpecificationMap::constructor_emptyMap (HERE),
                                 GALGAS_astAutoLayoutViewFunctionMap::constructor_emptyMap (HERE),
                                 GALGAS_astAutoLayoutViewFunctionMap::constructor_emptyMap (HERE),
                                 GALGAS_enumerationFunctionListAST::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticContext GALGAS_semanticContext::constructor_new (const GALGAS_classMap & inOperand0,
                                                                const GALGAS_outletClassMap & inOperand1,
                                                                const GALGAS_bindingSpecificationMap & inOperand2,
                                                                const GALGAS_autolayoutViewClassMap & inOperand3,
                                                                const GALGAS_autoLayoutBindingSpecificationMap & inOperand4,
                                                                const GALGAS_astAutoLayoutViewFunctionMap & inOperand5,
                                                                const GALGAS_astAutoLayoutViewFunctionMap & inOperand6,
                                                                const GALGAS_enumerationFunctionListAST & inOperand7 
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticContext result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    result = GALGAS_semanticContext (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_semanticContext::objectCompare (const GALGAS_semanticContext & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mClassMap.objectCompare (inOperand.mProperty_mClassMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOutletClassMap.objectCompare (inOperand.mProperty_mOutletClassMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBindingSpecificationMap.objectCompare (inOperand.mProperty_mBindingSpecificationMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAutolayoutViewClassMap.objectCompare (inOperand.mProperty_mAutolayoutViewClassMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAutoLayoutBindingSpecificationMap.objectCompare (inOperand.mProperty_mAutoLayoutBindingSpecificationMap) ;
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

bool GALGAS_semanticContext::isValid (void) const {
  return mProperty_mClassMap.isValid () && mProperty_mOutletClassMap.isValid () && mProperty_mBindingSpecificationMap.isValid () && mProperty_mAutolayoutViewClassMap.isValid () && mProperty_mAutoLayoutBindingSpecificationMap.isValid () && mProperty_mAutoLayoutVStackFunctionMap.isValid () && mProperty_mAutoLayoutHStackFunctionMap.isValid () && mProperty_mEnumerationFunctionListAST.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticContext::drop (void) {
  mProperty_mClassMap.drop () ;
  mProperty_mOutletClassMap.drop () ;
  mProperty_mBindingSpecificationMap.drop () ;
  mProperty_mAutolayoutViewClassMap.drop () ;
  mProperty_mAutoLayoutBindingSpecificationMap.drop () ;
  mProperty_mAutoLayoutVStackFunctionMap.drop () ;
  mProperty_mAutoLayoutHStackFunctionMap.drop () ;
  mProperty_mEnumerationFunctionListAST.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticContext::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "<struct @semanticContext:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mClassMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOutletClassMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBindingSpecificationMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAutolayoutViewClassMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAutoLayoutBindingSpecificationMap.description (ioString, inIndentation+1) ;
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

GALGAS_classMap GALGAS_semanticContext::getter_mClassMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mClassMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletClassMap GALGAS_semanticContext::getter_mOutletClassMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOutletClassMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bindingSpecificationMap GALGAS_semanticContext::getter_mBindingSpecificationMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBindingSpecificationMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autolayoutViewClassMap GALGAS_semanticContext::getter_mAutolayoutViewClassMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAutolayoutViewClassMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutBindingSpecificationMap GALGAS_semanticContext::getter_mAutoLayoutBindingSpecificationMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAutoLayoutBindingSpecificationMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionMap GALGAS_semanticContext::getter_mAutoLayoutVStackFunctionMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAutoLayoutVStackFunctionMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionMap GALGAS_semanticContext::getter_mAutoLayoutHStackFunctionMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAutoLayoutHStackFunctionMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationFunctionListAST GALGAS_semanticContext::getter_mEnumerationFunctionListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumerationFunctionListAST ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@semanticContext type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticContext ("semanticContext",
                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticContext ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticContext (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticContext GALGAS_semanticContext::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_semanticContext result ;
  const GALGAS_semanticContext * p = (const GALGAS_semanticContext *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_abstractDeclarationAST::objectCompare (const GALGAS_abstractDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractDeclarationAST::GALGAS_abstractDeclarationAST (void) :
AC_GALGAS_class (false) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractDeclarationAST::GALGAS_abstractDeclarationAST (const cPtr_abstractDeclarationAST * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractDeclarationAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_abstractDeclarationAST::getter_mClassName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractDeclarationAST * p = (const cPtr_abstractDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractDeclarationAST) ;
    result = p->mProperty_mClassName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_abstractDeclarationAST::getter_mClassName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mClassName ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_abstractDeclarationAST::setter_setMClassName (GALGAS_lstring inValue
                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_abstractDeclarationAST * p = (cPtr_abstractDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractDeclarationAST) ;
    p->mProperty_mClassName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_abstractDeclarationAST::setter_setMClassName (GALGAS_lstring inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mClassName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @abstractDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_abstractDeclarationAST::cPtr_abstractDeclarationAST (const GALGAS_lstring & in_mClassName
                                                          COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mProperty_mClassName (in_mClassName) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@abstractDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractDeclarationAST ("abstractDeclarationAST",
                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractDeclarationAST GALGAS_abstractDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_abstractDeclarationAST result ;
  const GALGAS_abstractDeclarationAST * p = (const GALGAS_abstractDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_abstractDeclarationAST_enterInPrecedenceGraph> gExtensionMethodTable_abstractDeclarationAST_enterInPrecedenceGraph ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_enterInPrecedenceGraph (const int32_t inClassIndex,
                                                  extensionMethodSignature_abstractDeclarationAST_enterInPrecedenceGraph inMethod) {
  gExtensionMethodTable_abstractDeclarationAST_enterInPrecedenceGraph.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_abstractDeclarationAST_enterInPrecedenceGraph (void) {
  gExtensionMethodTable_abstractDeclarationAST_enterInPrecedenceGraph.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractDeclarationAST_enterInPrecedenceGraph (NULL,
                                                                          freeExtensionMethod_abstractDeclarationAST_enterInPrecedenceGraph) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                 GALGAS_declarationPrecedenceGraph & io_ioGraph,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractDeclarationAST_enterInPrecedenceGraph f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractDeclarationAST_enterInPrecedenceGraph.count ()) {
      f = gExtensionMethodTable_abstractDeclarationAST_enterInPrecedenceGraph (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_abstractDeclarationAST_enterInPrecedenceGraph.count ()) {
          f = gExtensionMethodTable_abstractDeclarationAST_enterInPrecedenceGraph (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_abstractDeclarationAST_enterInPrecedenceGraph.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioGraph, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractDeclarationAST nodeKey'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_abstractDeclarationAST_nodeKey> gExtensionGetterTable_abstractDeclarationAST_nodeKey ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_nodeKey (const int32_t inClassIndex,
                                   enterExtensionGetter_abstractDeclarationAST_nodeKey inGetter) {
  gExtensionGetterTable_abstractDeclarationAST_nodeKey.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_abstractDeclarationAST_nodeKey (void) {
  gExtensionGetterTable_abstractDeclarationAST_nodeKey.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_abstractDeclarationAST_nodeKey (NULL,
                                                           freeExtensionGetter_abstractDeclarationAST_nodeKey) ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring callExtensionGetter_nodeKey (const cPtr_abstractDeclarationAST * inObject,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GALGAS_lstring result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_abstractDeclarationAST_nodeKey f = NULL ;
    if (classIndex < gExtensionGetterTable_abstractDeclarationAST_nodeKey.count ()) {
      f = gExtensionGetterTable_abstractDeclarationAST_nodeKey (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_abstractDeclarationAST_nodeKey.count ()) {
           f = gExtensionGetterTable_abstractDeclarationAST_nodeKey (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_abstractDeclarationAST_nodeKey.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractDeclarationAST firstAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_abstractDeclarationAST_firstAnalysisPhase> gExtensionMethodTable_abstractDeclarationAST_firstAnalysisPhase ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_firstAnalysisPhase (const int32_t inClassIndex,
                                              extensionMethodSignature_abstractDeclarationAST_firstAnalysisPhase inMethod) {
  gExtensionMethodTable_abstractDeclarationAST_firstAnalysisPhase.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_abstractDeclarationAST_firstAnalysisPhase (void) {
  gExtensionMethodTable_abstractDeclarationAST_firstAnalysisPhase.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractDeclarationAST_firstAnalysisPhase (NULL,
                                                                      freeExtensionMethod_abstractDeclarationAST_firstAnalysisPhase) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_firstAnalysisPhase (const cPtr_abstractDeclarationAST * inObject,
                                             GALGAS_semanticContext & io_ioSemanticContext,
                                             GALGAS_generationStruct & io_ioGeneration,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractDeclarationAST_firstAnalysisPhase f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractDeclarationAST_firstAnalysisPhase.count ()) {
      f = gExtensionMethodTable_abstractDeclarationAST_firstAnalysisPhase (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_abstractDeclarationAST_firstAnalysisPhase.count ()) {
          f = gExtensionMethodTable_abstractDeclarationAST_firstAnalysisPhase (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_abstractDeclarationAST_firstAnalysisPhase.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioSemanticContext, io_ioGeneration, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@abstractDeclarationAST secondAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_abstractDeclarationAST_secondAnalysisPhase> gExtensionMethodTable_abstractDeclarationAST_secondAnalysisPhase ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_secondAnalysisPhase (const int32_t inClassIndex,
                                               extensionMethodSignature_abstractDeclarationAST_secondAnalysisPhase inMethod) {
  gExtensionMethodTable_abstractDeclarationAST_secondAnalysisPhase.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_secondAnalysisPhase (const cPtr_abstractDeclarationAST * inObject,
                                              GALGAS_semanticContext & io_ioSemanticContext,
                                              GALGAS_generationStruct & io_ioGeneration,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractDeclarationAST_secondAnalysisPhase f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractDeclarationAST_secondAnalysisPhase.count ()) {
      f = gExtensionMethodTable_abstractDeclarationAST_secondAnalysisPhase (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_abstractDeclarationAST_secondAnalysisPhase.count ()) {
           f = gExtensionMethodTable_abstractDeclarationAST_secondAnalysisPhase (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_abstractDeclarationAST_secondAnalysisPhase.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioSemanticContext, io_ioGeneration, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_abstractDeclarationAST_secondAnalysisPhase (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                        GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                        GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_abstractDeclarationAST_secondAnalysisPhase (void) {
  enterExtensionMethod_secondAnalysisPhase (kTypeDescriptor_GALGAS_abstractDeclarationAST.mSlotID,
                                            extensionMethod_abstractDeclarationAST_secondAnalysisPhase) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_abstractDeclarationAST_secondAnalysisPhase (void) {
  gExtensionMethodTable_abstractDeclarationAST_secondAnalysisPhase.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractDeclarationAST_secondAnalysisPhase (defineExtensionMethod_abstractDeclarationAST_secondAnalysisPhase,
                                                                       freeExtensionMethod_abstractDeclarationAST_secondAnalysisPhase) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@abstractDeclarationAST thirdAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_abstractDeclarationAST_thirdAnalysisPhase> gExtensionMethodTable_abstractDeclarationAST_thirdAnalysisPhase ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_thirdAnalysisPhase (const int32_t inClassIndex,
                                              extensionMethodSignature_abstractDeclarationAST_thirdAnalysisPhase inMethod) {
  gExtensionMethodTable_abstractDeclarationAST_thirdAnalysisPhase.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_thirdAnalysisPhase (const cPtr_abstractDeclarationAST * inObject,
                                             GALGAS_semanticContext & io_ioSemanticContext,
                                             GALGAS_generationStruct & io_ioGeneration,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractDeclarationAST_thirdAnalysisPhase f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractDeclarationAST_thirdAnalysisPhase.count ()) {
      f = gExtensionMethodTable_abstractDeclarationAST_thirdAnalysisPhase (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_abstractDeclarationAST_thirdAnalysisPhase.count ()) {
           f = gExtensionMethodTable_abstractDeclarationAST_thirdAnalysisPhase (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_abstractDeclarationAST_thirdAnalysisPhase.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioSemanticContext, io_ioGeneration, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_abstractDeclarationAST_thirdAnalysisPhase (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                       GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                       GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_abstractDeclarationAST_thirdAnalysisPhase (void) {
  enterExtensionMethod_thirdAnalysisPhase (kTypeDescriptor_GALGAS_abstractDeclarationAST.mSlotID,
                                           extensionMethod_abstractDeclarationAST_thirdAnalysisPhase) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_abstractDeclarationAST_thirdAnalysisPhase (void) {
  gExtensionMethodTable_abstractDeclarationAST_thirdAnalysisPhase.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractDeclarationAST_thirdAnalysisPhase (defineExtensionMethod_abstractDeclarationAST_thirdAnalysisPhase,
                                                                      freeExtensionMethod_abstractDeclarationAST_thirdAnalysisPhase) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@abstractDeclarationAST fourthAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_abstractDeclarationAST_fourthAnalysisPhase> gExtensionMethodTable_abstractDeclarationAST_fourthAnalysisPhase ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_fourthAnalysisPhase (const int32_t inClassIndex,
                                               extensionMethodSignature_abstractDeclarationAST_fourthAnalysisPhase inMethod) {
  gExtensionMethodTable_abstractDeclarationAST_fourthAnalysisPhase.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_fourthAnalysisPhase (const cPtr_abstractDeclarationAST * inObject,
                                              GALGAS_semanticContext & io_ioSemanticContext,
                                              GALGAS_generationStruct & io_ioGeneration,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractDeclarationAST_fourthAnalysisPhase f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractDeclarationAST_fourthAnalysisPhase.count ()) {
      f = gExtensionMethodTable_abstractDeclarationAST_fourthAnalysisPhase (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_abstractDeclarationAST_fourthAnalysisPhase.count ()) {
           f = gExtensionMethodTable_abstractDeclarationAST_fourthAnalysisPhase (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_abstractDeclarationAST_fourthAnalysisPhase.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioSemanticContext, io_ioGeneration, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_abstractDeclarationAST_fourthAnalysisPhase (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                        GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                        GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_abstractDeclarationAST_fourthAnalysisPhase (void) {
  enterExtensionMethod_fourthAnalysisPhase (kTypeDescriptor_GALGAS_abstractDeclarationAST.mSlotID,
                                            extensionMethod_abstractDeclarationAST_fourthAnalysisPhase) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_abstractDeclarationAST_fourthAnalysisPhase (void) {
  gExtensionMethodTable_abstractDeclarationAST_fourthAnalysisPhase.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractDeclarationAST_fourthAnalysisPhase (defineExtensionMethod_abstractDeclarationAST_fourthAnalysisPhase,
                                                                       freeExtensionMethod_abstractDeclarationAST_fourthAnalysisPhase) ;

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_transientClassDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_transientClassDeclarationAST * p = (const cPtr_transientClassDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_transientClassDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsClass.objectCompare (p->mProperty_mIsClass) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_transientClassDeclarationAST::objectCompare (const GALGAS_transientClassDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientClassDeclarationAST::GALGAS_transientClassDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientClassDeclarationAST GALGAS_transientClassDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_transientClassDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                               GALGAS_bool::constructor_default (HERE)
                                                               COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientClassDeclarationAST::GALGAS_transientClassDeclarationAST (const cPtr_transientClassDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_transientClassDeclarationAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientClassDeclarationAST GALGAS_transientClassDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                                          const GALGAS_bool & inAttribute_mIsClass
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_transientClassDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mIsClass.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_transientClassDeclarationAST (inAttribute_mClassName, inAttribute_mIsClass COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_transientClassDeclarationAST::getter_mIsClass (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_transientClassDeclarationAST * p = (const cPtr_transientClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientClassDeclarationAST) ;
    result = p->mProperty_mIsClass ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_transientClassDeclarationAST::getter_mIsClass (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsClass ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientClassDeclarationAST::setter_setMIsClass (GALGAS_bool inValue
                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_transientClassDeclarationAST * p = (cPtr_transientClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientClassDeclarationAST) ;
    p->mProperty_mIsClass = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_transientClassDeclarationAST::setter_setMIsClass (GALGAS_bool inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mIsClass = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @transientClassDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_transientClassDeclarationAST::cPtr_transientClassDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                                      const GALGAS_bool & in_mIsClass
                                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mIsClass (in_mIsClass) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_transientClassDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientClassDeclarationAST ;
}

void cPtr_transientClassDeclarationAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@transientClassDeclarationAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsClass.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_transientClassDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_transientClassDeclarationAST (mProperty_mClassName, mProperty_mIsClass COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@transientClassDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transientClassDeclarationAST ("transientClassDeclarationAST",
                                                     & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_transientClassDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientClassDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_transientClassDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientClassDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientClassDeclarationAST GALGAS_transientClassDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_transientClassDeclarationAST result ;
  const GALGAS_transientClassDeclarationAST * p = (const GALGAS_transientClassDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_transientClassDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientClassDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_enumerationDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_enumerationDeclarationAST * p = (const cPtr_enumerationDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_enumerationDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEnumConstantNameList.objectCompare (p->mProperty_mEnumConstantNameList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_enumerationDeclarationAST::objectCompare (const GALGAS_enumerationDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDeclarationAST::GALGAS_enumerationDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDeclarationAST GALGAS_enumerationDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_enumerationDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                            GALGAS_lstringlist::constructor_emptyList (HERE)
                                                            COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDeclarationAST::GALGAS_enumerationDeclarationAST (const cPtr_enumerationDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumerationDeclarationAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDeclarationAST GALGAS_enumerationDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                                    const GALGAS_lstringlist & inAttribute_mEnumConstantNameList
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_enumerationDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mEnumConstantNameList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_enumerationDeclarationAST (inAttribute_mClassName, inAttribute_mEnumConstantNameList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_enumerationDeclarationAST::getter_mEnumConstantNameList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumerationDeclarationAST * p = (const cPtr_enumerationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumerationDeclarationAST) ;
    result = p->mProperty_mEnumConstantNameList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist cPtr_enumerationDeclarationAST::getter_mEnumConstantNameList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumConstantNameList ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumerationDeclarationAST::setter_setMEnumConstantNameList (GALGAS_lstringlist inValue
                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_enumerationDeclarationAST * p = (cPtr_enumerationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumerationDeclarationAST) ;
    p->mProperty_mEnumConstantNameList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_enumerationDeclarationAST::setter_setMEnumConstantNameList (GALGAS_lstringlist inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEnumConstantNameList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @enumerationDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_enumerationDeclarationAST::cPtr_enumerationDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                                const GALGAS_lstringlist & in_mEnumConstantNameList
                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mEnumConstantNameList (in_mEnumConstantNameList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_enumerationDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationDeclarationAST ;
}

void cPtr_enumerationDeclarationAST::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@enumerationDeclarationAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEnumConstantNameList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_enumerationDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_enumerationDeclarationAST (mProperty_mClassName, mProperty_mEnumConstantNameList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@enumerationDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumerationDeclarationAST ("enumerationDeclarationAST",
                                                  & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumerationDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumerationDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumerationDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDeclarationAST GALGAS_enumerationDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_enumerationDeclarationAST result ;
  const GALGAS_enumerationDeclarationAST * p = (const GALGAS_enumerationDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumerationDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumerationDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_enumForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_enumForGeneration * p = (const cPtr_enumForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_enumForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mEnumName.objectCompare (p->mProperty_mEnumName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEnumConstantList.objectCompare (p->mProperty_mEnumConstantList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEnumFuncMap.objectCompare (p->mProperty_mEnumFuncMap) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_enumForGeneration::objectCompare (const GALGAS_enumForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumForGeneration::GALGAS_enumForGeneration (void) :
GALGAS_abstractFileGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumForGeneration GALGAS_enumForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_enumForGeneration::constructor_new (GALGAS_string::constructor_default (HERE),
                                                    GALGAS_lstringlist::constructor_emptyList (HERE),
                                                    GALGAS_enumFuncMap::constructor_emptyMap (HERE)
                                                    COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumForGeneration::GALGAS_enumForGeneration (const cPtr_enumForGeneration * inSourcePtr) :
GALGAS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumForGeneration GALGAS_enumForGeneration::constructor_new (const GALGAS_string & inAttribute_mEnumName,
                                                                    const GALGAS_lstringlist & inAttribute_mEnumConstantList,
                                                                    const GALGAS_enumFuncMap & inAttribute_mEnumFuncMap
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_enumForGeneration result ;
  if (inAttribute_mEnumName.isValid () && inAttribute_mEnumConstantList.isValid () && inAttribute_mEnumFuncMap.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_enumForGeneration (inAttribute_mEnumName, inAttribute_mEnumConstantList, inAttribute_mEnumFuncMap COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_enumForGeneration::getter_mEnumName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumForGeneration * p = (const cPtr_enumForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumForGeneration) ;
    result = p->mProperty_mEnumName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_enumForGeneration::getter_mEnumName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_enumForGeneration::getter_mEnumConstantList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumForGeneration * p = (const cPtr_enumForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumForGeneration) ;
    result = p->mProperty_mEnumConstantList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist cPtr_enumForGeneration::getter_mEnumConstantList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumConstantList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumFuncMap GALGAS_enumForGeneration::getter_mEnumFuncMap (UNUSED_LOCATION_ARGS) const {
  GALGAS_enumFuncMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumForGeneration * p = (const cPtr_enumForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumForGeneration) ;
    result = p->mProperty_mEnumFuncMap ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumFuncMap cPtr_enumForGeneration::getter_mEnumFuncMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumFuncMap ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumForGeneration::setter_setMEnumName (GALGAS_string inValue
                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_enumForGeneration * p = (cPtr_enumForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumForGeneration) ;
    p->mProperty_mEnumName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_enumForGeneration::setter_setMEnumName (GALGAS_string inValue
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEnumName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumForGeneration::setter_setMEnumConstantList (GALGAS_lstringlist inValue
                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_enumForGeneration * p = (cPtr_enumForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumForGeneration) ;
    p->mProperty_mEnumConstantList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_enumForGeneration::setter_setMEnumConstantList (GALGAS_lstringlist inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEnumConstantList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumForGeneration::setter_setMEnumFuncMap (GALGAS_enumFuncMap inValue
                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_enumForGeneration * p = (cPtr_enumForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumForGeneration) ;
    p->mProperty_mEnumFuncMap = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_enumForGeneration::setter_setMEnumFuncMap (GALGAS_enumFuncMap inValue
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEnumFuncMap = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @enumForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_enumForGeneration::cPtr_enumForGeneration (const GALGAS_string & in_mEnumName,
                                                const GALGAS_lstringlist & in_mEnumConstantList,
                                                const GALGAS_enumFuncMap & in_mEnumFuncMap
                                                COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (THERE),
mProperty_mEnumName (in_mEnumName),
mProperty_mEnumConstantList (in_mEnumConstantList),
mProperty_mEnumFuncMap (in_mEnumFuncMap) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_enumForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumForGeneration ;
}

void cPtr_enumForGeneration::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@enumForGeneration:" ;
  mProperty_mEnumName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEnumConstantList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEnumFuncMap.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_enumForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_enumForGeneration (mProperty_mEnumName, mProperty_mEnumConstantList, mProperty_mEnumFuncMap COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@enumForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumForGeneration ("enumForGeneration",
                                          & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumForGeneration GALGAS_enumForGeneration::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_enumForGeneration result ;
  const GALGAS_enumForGeneration * p = (const GALGAS_enumForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_atomicClassDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_atomicClassDeclarationAST * p = (const cPtr_atomicClassDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_atomicClassDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_atomicClassDeclarationAST::objectCompare (const GALGAS_atomicClassDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicClassDeclarationAST::GALGAS_atomicClassDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicClassDeclarationAST::GALGAS_atomicClassDeclarationAST (const cPtr_atomicClassDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_atomicClassDeclarationAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicClassDeclarationAST GALGAS_atomicClassDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                                    const GALGAS_typeKind & inAttribute_mKind
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_atomicClassDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_atomicClassDeclarationAST (inAttribute_mClassName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_atomicClassDeclarationAST::getter_mKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_typeKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_atomicClassDeclarationAST * p = (const cPtr_atomicClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicClassDeclarationAST) ;
    result = p->mProperty_mKind ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind cPtr_atomicClassDeclarationAST::getter_mKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mKind ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicClassDeclarationAST::setter_setMKind (GALGAS_typeKind inValue
                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_atomicClassDeclarationAST * p = (cPtr_atomicClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicClassDeclarationAST) ;
    p->mProperty_mKind = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_atomicClassDeclarationAST::setter_setMKind (GALGAS_typeKind inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mKind = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @atomicClassDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_atomicClassDeclarationAST::cPtr_atomicClassDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                                const GALGAS_typeKind & in_mKind
                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mKind (in_mKind) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_atomicClassDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicClassDeclarationAST ;
}

void cPtr_atomicClassDeclarationAST::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@atomicClassDeclarationAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_atomicClassDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_atomicClassDeclarationAST (mProperty_mClassName, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@atomicClassDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_atomicClassDeclarationAST ("atomicClassDeclarationAST",
                                                  & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_atomicClassDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicClassDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_atomicClassDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_atomicClassDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicClassDeclarationAST GALGAS_atomicClassDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_atomicClassDeclarationAST result ;
  const GALGAS_atomicClassDeclarationAST * p = (const GALGAS_atomicClassDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_atomicClassDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("atomicClassDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_entityDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_entityDeclarationAST * p = (const cPtr_entityDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsAbstract.objectCompare (p->mProperty_mIsAbstract) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSuperEntityName.objectCompare (p->mProperty_mSuperEntityName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSimpleStoredPropertyList.objectCompare (p->mProperty_mSimpleStoredPropertyList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSignatureList.objectCompare (p->mProperty_mSignatureList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActionDeclarationList.objectCompare (p->mProperty_mActionDeclarationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mObsoleteEntityNames.objectCompare (p->mProperty_mObsoleteEntityNames) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsGraphicEntity.objectCompare (p->mProperty_mIsGraphicEntity) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExternSwiftDelegateList.objectCompare (p->mProperty_mExternSwiftDelegateList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_entityDeclarationAST::objectCompare (const GALGAS_entityDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityDeclarationAST::GALGAS_entityDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityDeclarationAST GALGAS_entityDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_entityDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_bool::constructor_default (HERE),
                                                       GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_simpleStoredPropertyList::constructor_emptyList (HERE),
                                                       GALGAS_stringset::constructor_emptySet (HERE),
                                                       GALGAS_lstringlist::constructor_emptyList (HERE),
                                                       GALGAS_lstringlist::constructor_emptyList (HERE),
                                                       GALGAS_bool::constructor_default (HERE),
                                                       GALGAS_externSwiftDelegateList::constructor_emptyList (HERE)
                                                       COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityDeclarationAST::GALGAS_entityDeclarationAST (const cPtr_entityDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_entityDeclarationAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityDeclarationAST GALGAS_entityDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                          const GALGAS_bool & inAttribute_mIsAbstract,
                                                                          const GALGAS_lstring & inAttribute_mSuperEntityName,
                                                                          const GALGAS_simpleStoredPropertyList & inAttribute_mSimpleStoredPropertyList,
                                                                          const GALGAS_stringset & inAttribute_mSignatureList,
                                                                          const GALGAS_lstringlist & inAttribute_mActionDeclarationList,
                                                                          const GALGAS_lstringlist & inAttribute_mObsoleteEntityNames,
                                                                          const GALGAS_bool & inAttribute_mIsGraphicEntity,
                                                                          const GALGAS_externSwiftDelegateList & inAttribute_mExternSwiftDelegateList
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_entityDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mIsAbstract.isValid () && inAttribute_mSuperEntityName.isValid () && inAttribute_mSimpleStoredPropertyList.isValid () && inAttribute_mSignatureList.isValid () && inAttribute_mActionDeclarationList.isValid () && inAttribute_mObsoleteEntityNames.isValid () && inAttribute_mIsGraphicEntity.isValid () && inAttribute_mExternSwiftDelegateList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_entityDeclarationAST (inAttribute_mClassName, inAttribute_mIsAbstract, inAttribute_mSuperEntityName, inAttribute_mSimpleStoredPropertyList, inAttribute_mSignatureList, inAttribute_mActionDeclarationList, inAttribute_mObsoleteEntityNames, inAttribute_mIsGraphicEntity, inAttribute_mExternSwiftDelegateList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_entityDeclarationAST::getter_mIsAbstract (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclarationAST * p = (const cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    result = p->mProperty_mIsAbstract ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_entityDeclarationAST::getter_mIsAbstract (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsAbstract ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_entityDeclarationAST::getter_mSuperEntityName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclarationAST * p = (const cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    result = p->mProperty_mSuperEntityName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_entityDeclarationAST::getter_mSuperEntityName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSuperEntityName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_simpleStoredPropertyList GALGAS_entityDeclarationAST::getter_mSimpleStoredPropertyList (UNUSED_LOCATION_ARGS) const {
  GALGAS_simpleStoredPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclarationAST * p = (const cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    result = p->mProperty_mSimpleStoredPropertyList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_simpleStoredPropertyList cPtr_entityDeclarationAST::getter_mSimpleStoredPropertyList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSimpleStoredPropertyList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset GALGAS_entityDeclarationAST::getter_mSignatureList (UNUSED_LOCATION_ARGS) const {
  GALGAS_stringset result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclarationAST * p = (const cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    result = p->mProperty_mSignatureList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset cPtr_entityDeclarationAST::getter_mSignatureList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSignatureList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_entityDeclarationAST::getter_mActionDeclarationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclarationAST * p = (const cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    result = p->mProperty_mActionDeclarationList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist cPtr_entityDeclarationAST::getter_mActionDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActionDeclarationList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_entityDeclarationAST::getter_mObsoleteEntityNames (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclarationAST * p = (const cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    result = p->mProperty_mObsoleteEntityNames ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist cPtr_entityDeclarationAST::getter_mObsoleteEntityNames (UNUSED_LOCATION_ARGS) const {
  return mProperty_mObsoleteEntityNames ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_entityDeclarationAST::getter_mIsGraphicEntity (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclarationAST * p = (const cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    result = p->mProperty_mIsGraphicEntity ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_entityDeclarationAST::getter_mIsGraphicEntity (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsGraphicEntity ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externSwiftDelegateList GALGAS_entityDeclarationAST::getter_mExternSwiftDelegateList (UNUSED_LOCATION_ARGS) const {
  GALGAS_externSwiftDelegateList result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclarationAST * p = (const cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    result = p->mProperty_mExternSwiftDelegateList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externSwiftDelegateList cPtr_entityDeclarationAST::getter_mExternSwiftDelegateList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternSwiftDelegateList ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityDeclarationAST::setter_setMIsAbstract (GALGAS_bool inValue
                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    p->mProperty_mIsAbstract = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_entityDeclarationAST::setter_setMIsAbstract (GALGAS_bool inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mIsAbstract = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityDeclarationAST::setter_setMSuperEntityName (GALGAS_lstring inValue
                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    p->mProperty_mSuperEntityName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_entityDeclarationAST::setter_setMSuperEntityName (GALGAS_lstring inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSuperEntityName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityDeclarationAST::setter_setMSimpleStoredPropertyList (GALGAS_simpleStoredPropertyList inValue
                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    p->mProperty_mSimpleStoredPropertyList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_entityDeclarationAST::setter_setMSimpleStoredPropertyList (GALGAS_simpleStoredPropertyList inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSimpleStoredPropertyList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityDeclarationAST::setter_setMSignatureList (GALGAS_stringset inValue
                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    p->mProperty_mSignatureList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_entityDeclarationAST::setter_setMSignatureList (GALGAS_stringset inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSignatureList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityDeclarationAST::setter_setMActionDeclarationList (GALGAS_lstringlist inValue
                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    p->mProperty_mActionDeclarationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_entityDeclarationAST::setter_setMActionDeclarationList (GALGAS_lstringlist inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mActionDeclarationList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityDeclarationAST::setter_setMObsoleteEntityNames (GALGAS_lstringlist inValue
                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    p->mProperty_mObsoleteEntityNames = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_entityDeclarationAST::setter_setMObsoleteEntityNames (GALGAS_lstringlist inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mObsoleteEntityNames = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityDeclarationAST::setter_setMIsGraphicEntity (GALGAS_bool inValue
                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    p->mProperty_mIsGraphicEntity = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_entityDeclarationAST::setter_setMIsGraphicEntity (GALGAS_bool inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mIsGraphicEntity = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityDeclarationAST::setter_setMExternSwiftDelegateList (GALGAS_externSwiftDelegateList inValue
                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    p->mProperty_mExternSwiftDelegateList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_entityDeclarationAST::setter_setMExternSwiftDelegateList (GALGAS_externSwiftDelegateList inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExternSwiftDelegateList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @entityDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_entityDeclarationAST::cPtr_entityDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                      const GALGAS_bool & in_mIsAbstract,
                                                      const GALGAS_lstring & in_mSuperEntityName,
                                                      const GALGAS_simpleStoredPropertyList & in_mSimpleStoredPropertyList,
                                                      const GALGAS_stringset & in_mSignatureList,
                                                      const GALGAS_lstringlist & in_mActionDeclarationList,
                                                      const GALGAS_lstringlist & in_mObsoleteEntityNames,
                                                      const GALGAS_bool & in_mIsGraphicEntity,
                                                      const GALGAS_externSwiftDelegateList & in_mExternSwiftDelegateList
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mIsAbstract (in_mIsAbstract),
mProperty_mSuperEntityName (in_mSuperEntityName),
mProperty_mSimpleStoredPropertyList (in_mSimpleStoredPropertyList),
mProperty_mSignatureList (in_mSignatureList),
mProperty_mActionDeclarationList (in_mActionDeclarationList),
mProperty_mObsoleteEntityNames (in_mObsoleteEntityNames),
mProperty_mIsGraphicEntity (in_mIsGraphicEntity),
mProperty_mExternSwiftDelegateList (in_mExternSwiftDelegateList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_entityDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityDeclarationAST ;
}

void cPtr_entityDeclarationAST::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@entityDeclarationAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsAbstract.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSuperEntityName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSimpleStoredPropertyList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSignatureList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActionDeclarationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mObsoleteEntityNames.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsGraphicEntity.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExternSwiftDelegateList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_entityDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_entityDeclarationAST (mProperty_mClassName, mProperty_mIsAbstract, mProperty_mSuperEntityName, mProperty_mSimpleStoredPropertyList, mProperty_mSignatureList, mProperty_mActionDeclarationList, mProperty_mObsoleteEntityNames, mProperty_mIsGraphicEntity, mProperty_mExternSwiftDelegateList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@entityDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_entityDeclarationAST ("entityDeclarationAST",
                                             & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_entityDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_entityDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_entityDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityDeclarationAST GALGAS_entityDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_entityDeclarationAST result ;
  const GALGAS_entityDeclarationAST * p = (const GALGAS_entityDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_entityDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("entityDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_entityForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_entityForGeneration * p = (const cPtr_entityForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_entityForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mEntityName.objectCompare (p->mProperty_mEntityName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSuperEntityName.objectCompare (p->mProperty_mSuperEntityName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPropertyGenerationList.objectCompare (p->mProperty_mPropertyGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSignatureSet.objectCompare (p->mProperty_mSignatureSet) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsGraphicEntity.objectCompare (p->mProperty_mIsGraphicEntity) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsAbstract.objectCompare (p->mProperty_mIsAbstract) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOverridenTransients.objectCompare (p->mProperty_mOverridenTransients) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExternSwiftDelegateList.objectCompare (p->mProperty_mExternSwiftDelegateList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_entityForGeneration::objectCompare (const GALGAS_entityForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityForGeneration::GALGAS_entityForGeneration (void) :
GALGAS_abstractFileGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityForGeneration GALGAS_entityForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_entityForGeneration::constructor_new (GALGAS_string::constructor_default (HERE),
                                                      GALGAS_string::constructor_default (HERE),
                                                      GALGAS_propertyGenerationList::constructor_emptyList (HERE),
                                                      GALGAS_stringset::constructor_emptySet (HERE),
                                                      GALGAS_bool::constructor_default (HERE),
                                                      GALGAS_bool::constructor_default (HERE),
                                                      GALGAS_stringset::constructor_emptySet (HERE),
                                                      GALGAS_externSwiftDelegateList::constructor_emptyList (HERE)
                                                      COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityForGeneration::GALGAS_entityForGeneration (const cPtr_entityForGeneration * inSourcePtr) :
GALGAS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_entityForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityForGeneration GALGAS_entityForGeneration::constructor_new (const GALGAS_string & inAttribute_mEntityName,
                                                                        const GALGAS_string & inAttribute_mSuperEntityName,
                                                                        const GALGAS_propertyGenerationList & inAttribute_mPropertyGenerationList,
                                                                        const GALGAS_stringset & inAttribute_mSignatureSet,
                                                                        const GALGAS_bool & inAttribute_mIsGraphicEntity,
                                                                        const GALGAS_bool & inAttribute_mIsAbstract,
                                                                        const GALGAS_stringset & inAttribute_mOverridenTransients,
                                                                        const GALGAS_externSwiftDelegateList & inAttribute_mExternSwiftDelegateList
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_entityForGeneration result ;
  if (inAttribute_mEntityName.isValid () && inAttribute_mSuperEntityName.isValid () && inAttribute_mPropertyGenerationList.isValid () && inAttribute_mSignatureSet.isValid () && inAttribute_mIsGraphicEntity.isValid () && inAttribute_mIsAbstract.isValid () && inAttribute_mOverridenTransients.isValid () && inAttribute_mExternSwiftDelegateList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_entityForGeneration (inAttribute_mEntityName, inAttribute_mSuperEntityName, inAttribute_mPropertyGenerationList, inAttribute_mSignatureSet, inAttribute_mIsGraphicEntity, inAttribute_mIsAbstract, inAttribute_mOverridenTransients, inAttribute_mExternSwiftDelegateList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_entityForGeneration::getter_mEntityName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityForGeneration * p = (const cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    result = p->mProperty_mEntityName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_entityForGeneration::getter_mEntityName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEntityName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_entityForGeneration::getter_mSuperEntityName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityForGeneration * p = (const cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    result = p->mProperty_mSuperEntityName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_entityForGeneration::getter_mSuperEntityName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSuperEntityName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGenerationList GALGAS_entityForGeneration::getter_mPropertyGenerationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyGenerationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityForGeneration * p = (const cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    result = p->mProperty_mPropertyGenerationList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGenerationList cPtr_entityForGeneration::getter_mPropertyGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyGenerationList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset GALGAS_entityForGeneration::getter_mSignatureSet (UNUSED_LOCATION_ARGS) const {
  GALGAS_stringset result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityForGeneration * p = (const cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    result = p->mProperty_mSignatureSet ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset cPtr_entityForGeneration::getter_mSignatureSet (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSignatureSet ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_entityForGeneration::getter_mIsGraphicEntity (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityForGeneration * p = (const cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    result = p->mProperty_mIsGraphicEntity ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_entityForGeneration::getter_mIsGraphicEntity (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsGraphicEntity ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_entityForGeneration::getter_mIsAbstract (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityForGeneration * p = (const cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    result = p->mProperty_mIsAbstract ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_entityForGeneration::getter_mIsAbstract (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsAbstract ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset GALGAS_entityForGeneration::getter_mOverridenTransients (UNUSED_LOCATION_ARGS) const {
  GALGAS_stringset result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityForGeneration * p = (const cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    result = p->mProperty_mOverridenTransients ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset cPtr_entityForGeneration::getter_mOverridenTransients (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOverridenTransients ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externSwiftDelegateList GALGAS_entityForGeneration::getter_mExternSwiftDelegateList (UNUSED_LOCATION_ARGS) const {
  GALGAS_externSwiftDelegateList result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityForGeneration * p = (const cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    result = p->mProperty_mExternSwiftDelegateList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externSwiftDelegateList cPtr_entityForGeneration::getter_mExternSwiftDelegateList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternSwiftDelegateList ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityForGeneration::setter_setMEntityName (GALGAS_string inValue
                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    p->mProperty_mEntityName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_entityForGeneration::setter_setMEntityName (GALGAS_string inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEntityName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityForGeneration::setter_setMSuperEntityName (GALGAS_string inValue
                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    p->mProperty_mSuperEntityName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_entityForGeneration::setter_setMSuperEntityName (GALGAS_string inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSuperEntityName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityForGeneration::setter_setMPropertyGenerationList (GALGAS_propertyGenerationList inValue
                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    p->mProperty_mPropertyGenerationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_entityForGeneration::setter_setMPropertyGenerationList (GALGAS_propertyGenerationList inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mPropertyGenerationList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityForGeneration::setter_setMSignatureSet (GALGAS_stringset inValue
                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    p->mProperty_mSignatureSet = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_entityForGeneration::setter_setMSignatureSet (GALGAS_stringset inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSignatureSet = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityForGeneration::setter_setMIsGraphicEntity (GALGAS_bool inValue
                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    p->mProperty_mIsGraphicEntity = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_entityForGeneration::setter_setMIsGraphicEntity (GALGAS_bool inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mIsGraphicEntity = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityForGeneration::setter_setMIsAbstract (GALGAS_bool inValue
                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    p->mProperty_mIsAbstract = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_entityForGeneration::setter_setMIsAbstract (GALGAS_bool inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mIsAbstract = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityForGeneration::setter_setMOverridenTransients (GALGAS_stringset inValue
                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    p->mProperty_mOverridenTransients = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_entityForGeneration::setter_setMOverridenTransients (GALGAS_stringset inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOverridenTransients = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityForGeneration::setter_setMExternSwiftDelegateList (GALGAS_externSwiftDelegateList inValue
                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    p->mProperty_mExternSwiftDelegateList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_entityForGeneration::setter_setMExternSwiftDelegateList (GALGAS_externSwiftDelegateList inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExternSwiftDelegateList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @entityForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_entityForGeneration::cPtr_entityForGeneration (const GALGAS_string & in_mEntityName,
                                                    const GALGAS_string & in_mSuperEntityName,
                                                    const GALGAS_propertyGenerationList & in_mPropertyGenerationList,
                                                    const GALGAS_stringset & in_mSignatureSet,
                                                    const GALGAS_bool & in_mIsGraphicEntity,
                                                    const GALGAS_bool & in_mIsAbstract,
                                                    const GALGAS_stringset & in_mOverridenTransients,
                                                    const GALGAS_externSwiftDelegateList & in_mExternSwiftDelegateList
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (THERE),
mProperty_mEntityName (in_mEntityName),
mProperty_mSuperEntityName (in_mSuperEntityName),
mProperty_mPropertyGenerationList (in_mPropertyGenerationList),
mProperty_mSignatureSet (in_mSignatureSet),
mProperty_mIsGraphicEntity (in_mIsGraphicEntity),
mProperty_mIsAbstract (in_mIsAbstract),
mProperty_mOverridenTransients (in_mOverridenTransients),
mProperty_mExternSwiftDelegateList (in_mExternSwiftDelegateList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_entityForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityForGeneration ;
}

void cPtr_entityForGeneration::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@entityForGeneration:" ;
  mProperty_mEntityName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSuperEntityName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPropertyGenerationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSignatureSet.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsGraphicEntity.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsAbstract.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOverridenTransients.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExternSwiftDelegateList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_entityForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_entityForGeneration (mProperty_mEntityName, mProperty_mSuperEntityName, mProperty_mPropertyGenerationList, mProperty_mSignatureSet, mProperty_mIsGraphicEntity, mProperty_mIsAbstract, mProperty_mOverridenTransients, mProperty_mExternSwiftDelegateList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@entityForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_entityForGeneration ("entityForGeneration",
                                            & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_entityForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_entityForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_entityForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityForGeneration GALGAS_entityForGeneration::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_entityForGeneration result ;
  const GALGAS_entityForGeneration * p = (const GALGAS_entityForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_entityForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("entityForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_xibDocumentDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_xibDocumentDeclarationAST * p = (const cPtr_xibDocumentDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_xibDocumentDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRootEntityName.objectCompare (p->mProperty_mRootEntityName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOutletDeclarationList.objectCompare (p->mProperty_mOutletDeclarationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActionDeclarationList.objectCompare (p->mProperty_mActionDeclarationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mArrayControllerBindingListAST.objectCompare (p->mProperty_mArrayControllerBindingListAST) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_xibDocumentDeclarationAST::objectCompare (const GALGAS_xibDocumentDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xibDocumentDeclarationAST::GALGAS_xibDocumentDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xibDocumentDeclarationAST GALGAS_xibDocumentDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_xibDocumentDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                            GALGAS_lstring::constructor_default (HERE),
                                                            GALGAS_outletDeclarationList::constructor_emptyList (HERE),
                                                            GALGAS_lstringlist::constructor_emptyList (HERE),
                                                            GALGAS_arrayControllerBindingListAST::constructor_emptyList (HERE)
                                                            COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xibDocumentDeclarationAST::GALGAS_xibDocumentDeclarationAST (const cPtr_xibDocumentDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_xibDocumentDeclarationAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xibDocumentDeclarationAST GALGAS_xibDocumentDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                                    const GALGAS_lstring & inAttribute_mRootEntityName,
                                                                                    const GALGAS_outletDeclarationList & inAttribute_mOutletDeclarationList,
                                                                                    const GALGAS_lstringlist & inAttribute_mActionDeclarationList,
                                                                                    const GALGAS_arrayControllerBindingListAST & inAttribute_mArrayControllerBindingListAST
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_xibDocumentDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mRootEntityName.isValid () && inAttribute_mOutletDeclarationList.isValid () && inAttribute_mActionDeclarationList.isValid () && inAttribute_mArrayControllerBindingListAST.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_xibDocumentDeclarationAST (inAttribute_mClassName, inAttribute_mRootEntityName, inAttribute_mOutletDeclarationList, inAttribute_mActionDeclarationList, inAttribute_mArrayControllerBindingListAST COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_xibDocumentDeclarationAST::getter_mRootEntityName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_xibDocumentDeclarationAST * p = (const cPtr_xibDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xibDocumentDeclarationAST) ;
    result = p->mProperty_mRootEntityName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_xibDocumentDeclarationAST::getter_mRootEntityName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRootEntityName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletDeclarationList GALGAS_xibDocumentDeclarationAST::getter_mOutletDeclarationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_outletDeclarationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_xibDocumentDeclarationAST * p = (const cPtr_xibDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xibDocumentDeclarationAST) ;
    result = p->mProperty_mOutletDeclarationList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletDeclarationList cPtr_xibDocumentDeclarationAST::getter_mOutletDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOutletDeclarationList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_xibDocumentDeclarationAST::getter_mActionDeclarationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_xibDocumentDeclarationAST * p = (const cPtr_xibDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xibDocumentDeclarationAST) ;
    result = p->mProperty_mActionDeclarationList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist cPtr_xibDocumentDeclarationAST::getter_mActionDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActionDeclarationList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerBindingListAST GALGAS_xibDocumentDeclarationAST::getter_mArrayControllerBindingListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_arrayControllerBindingListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_xibDocumentDeclarationAST * p = (const cPtr_xibDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xibDocumentDeclarationAST) ;
    result = p->mProperty_mArrayControllerBindingListAST ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerBindingListAST cPtr_xibDocumentDeclarationAST::getter_mArrayControllerBindingListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArrayControllerBindingListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_xibDocumentDeclarationAST::setter_setMRootEntityName (GALGAS_lstring inValue
                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_xibDocumentDeclarationAST * p = (cPtr_xibDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xibDocumentDeclarationAST) ;
    p->mProperty_mRootEntityName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_xibDocumentDeclarationAST::setter_setMRootEntityName (GALGAS_lstring inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRootEntityName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_xibDocumentDeclarationAST::setter_setMOutletDeclarationList (GALGAS_outletDeclarationList inValue
                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_xibDocumentDeclarationAST * p = (cPtr_xibDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xibDocumentDeclarationAST) ;
    p->mProperty_mOutletDeclarationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_xibDocumentDeclarationAST::setter_setMOutletDeclarationList (GALGAS_outletDeclarationList inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOutletDeclarationList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_xibDocumentDeclarationAST::setter_setMActionDeclarationList (GALGAS_lstringlist inValue
                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_xibDocumentDeclarationAST * p = (cPtr_xibDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xibDocumentDeclarationAST) ;
    p->mProperty_mActionDeclarationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_xibDocumentDeclarationAST::setter_setMActionDeclarationList (GALGAS_lstringlist inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mActionDeclarationList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_xibDocumentDeclarationAST::setter_setMArrayControllerBindingListAST (GALGAS_arrayControllerBindingListAST inValue
                                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_xibDocumentDeclarationAST * p = (cPtr_xibDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xibDocumentDeclarationAST) ;
    p->mProperty_mArrayControllerBindingListAST = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_xibDocumentDeclarationAST::setter_setMArrayControllerBindingListAST (GALGAS_arrayControllerBindingListAST inValue
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mArrayControllerBindingListAST = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @xibDocumentDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_xibDocumentDeclarationAST::cPtr_xibDocumentDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                                const GALGAS_lstring & in_mRootEntityName,
                                                                const GALGAS_outletDeclarationList & in_mOutletDeclarationList,
                                                                const GALGAS_lstringlist & in_mActionDeclarationList,
                                                                const GALGAS_arrayControllerBindingListAST & in_mArrayControllerBindingListAST
                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mRootEntityName (in_mRootEntityName),
mProperty_mOutletDeclarationList (in_mOutletDeclarationList),
mProperty_mActionDeclarationList (in_mActionDeclarationList),
mProperty_mArrayControllerBindingListAST (in_mArrayControllerBindingListAST) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_xibDocumentDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xibDocumentDeclarationAST ;
}

void cPtr_xibDocumentDeclarationAST::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@xibDocumentDeclarationAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRootEntityName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOutletDeclarationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActionDeclarationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mArrayControllerBindingListAST.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_xibDocumentDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_xibDocumentDeclarationAST (mProperty_mClassName, mProperty_mRootEntityName, mProperty_mOutletDeclarationList, mProperty_mActionDeclarationList, mProperty_mArrayControllerBindingListAST COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@xibDocumentDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_xibDocumentDeclarationAST ("xibDocumentDeclarationAST",
                                                  & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_xibDocumentDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xibDocumentDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_xibDocumentDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_xibDocumentDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xibDocumentDeclarationAST GALGAS_xibDocumentDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_xibDocumentDeclarationAST result ;
  const GALGAS_xibDocumentDeclarationAST * p = (const GALGAS_xibDocumentDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_xibDocumentDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("xibDocumentDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_xibDocumentFileGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_xibDocumentFileGeneration * p = (const cPtr_xibDocumentFileGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_xibDocumentFileGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mDocumentName.objectCompare (p->mProperty_mDocumentName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRootEntityName.objectCompare (p->mProperty_mRootEntityName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDocumentPropertyGenearionList.objectCompare (p->mProperty_mDocumentPropertyGenearionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOutletMap.objectCompare (p->mProperty_mOutletMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetActionList.objectCompare (p->mProperty_mTargetActionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegularBindingsGenerationList.objectCompare (p->mProperty_mRegularBindingsGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_multipleBindingGenerationList.objectCompare (p->mProperty_multipleBindingGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTableViewBindingGenerationList.objectCompare (p->mProperty_mTableViewBindingGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEBViewBindingGenerationList.objectCompare (p->mProperty_mEBViewBindingGenerationList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_xibDocumentFileGeneration::objectCompare (const GALGAS_xibDocumentFileGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xibDocumentFileGeneration::GALGAS_xibDocumentFileGeneration (void) :
GALGAS_abstractFileGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xibDocumentFileGeneration GALGAS_xibDocumentFileGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_xibDocumentFileGeneration::constructor_new (GALGAS_string::constructor_default (HERE),
                                                            GALGAS_string::constructor_default (HERE),
                                                            GALGAS_propertyGenerationList::constructor_emptyList (HERE),
                                                            GALGAS_decoratedOutletMap::constructor_emptyMap (HERE),
                                                            GALGAS_actionBindingListForGeneration::constructor_emptyList (HERE),
                                                            GALGAS_regularBindingsGenerationList::constructor_emptyList (HERE),
                                                            GALGAS_multipleBindingGenerationList::constructor_emptyList (HERE),
                                                            GALGAS_tableViewBindingGenerationList::constructor_emptyList (HERE),
                                                            GALGAS_ebViewGraphicControllerBindingGenerationList::constructor_emptyList (HERE)
                                                            COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xibDocumentFileGeneration::GALGAS_xibDocumentFileGeneration (const cPtr_xibDocumentFileGeneration * inSourcePtr) :
GALGAS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_xibDocumentFileGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xibDocumentFileGeneration GALGAS_xibDocumentFileGeneration::constructor_new (const GALGAS_string & inAttribute_mDocumentName,
                                                                                    const GALGAS_string & inAttribute_mRootEntityName,
                                                                                    const GALGAS_propertyGenerationList & inAttribute_mDocumentPropertyGenearionList,
                                                                                    const GALGAS_decoratedOutletMap & inAttribute_mOutletMap,
                                                                                    const GALGAS_actionBindingListForGeneration & inAttribute_mTargetActionList,
                                                                                    const GALGAS_regularBindingsGenerationList & inAttribute_mRegularBindingsGenerationList,
                                                                                    const GALGAS_multipleBindingGenerationList & inAttribute_multipleBindingGenerationList,
                                                                                    const GALGAS_tableViewBindingGenerationList & inAttribute_mTableViewBindingGenerationList,
                                                                                    const GALGAS_ebViewGraphicControllerBindingGenerationList & inAttribute_mEBViewBindingGenerationList
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_xibDocumentFileGeneration result ;
  if (inAttribute_mDocumentName.isValid () && inAttribute_mRootEntityName.isValid () && inAttribute_mDocumentPropertyGenearionList.isValid () && inAttribute_mOutletMap.isValid () && inAttribute_mTargetActionList.isValid () && inAttribute_mRegularBindingsGenerationList.isValid () && inAttribute_multipleBindingGenerationList.isValid () && inAttribute_mTableViewBindingGenerationList.isValid () && inAttribute_mEBViewBindingGenerationList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_xibDocumentFileGeneration (inAttribute_mDocumentName, inAttribute_mRootEntityName, inAttribute_mDocumentPropertyGenearionList, inAttribute_mOutletMap, inAttribute_mTargetActionList, inAttribute_mRegularBindingsGenerationList, inAttribute_multipleBindingGenerationList, inAttribute_mTableViewBindingGenerationList, inAttribute_mEBViewBindingGenerationList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_xibDocumentFileGeneration::getter_mDocumentName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_xibDocumentFileGeneration * p = (const cPtr_xibDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xibDocumentFileGeneration) ;
    result = p->mProperty_mDocumentName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_xibDocumentFileGeneration::getter_mDocumentName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDocumentName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_xibDocumentFileGeneration::getter_mRootEntityName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_xibDocumentFileGeneration * p = (const cPtr_xibDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xibDocumentFileGeneration) ;
    result = p->mProperty_mRootEntityName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_xibDocumentFileGeneration::getter_mRootEntityName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRootEntityName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGenerationList GALGAS_xibDocumentFileGeneration::getter_mDocumentPropertyGenearionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyGenerationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_xibDocumentFileGeneration * p = (const cPtr_xibDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xibDocumentFileGeneration) ;
    result = p->mProperty_mDocumentPropertyGenearionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGenerationList cPtr_xibDocumentFileGeneration::getter_mDocumentPropertyGenearionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDocumentPropertyGenearionList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedOutletMap GALGAS_xibDocumentFileGeneration::getter_mOutletMap (UNUSED_LOCATION_ARGS) const {
  GALGAS_decoratedOutletMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_xibDocumentFileGeneration * p = (const cPtr_xibDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xibDocumentFileGeneration) ;
    result = p->mProperty_mOutletMap ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedOutletMap cPtr_xibDocumentFileGeneration::getter_mOutletMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOutletMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionBindingListForGeneration GALGAS_xibDocumentFileGeneration::getter_mTargetActionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_actionBindingListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_xibDocumentFileGeneration * p = (const cPtr_xibDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xibDocumentFileGeneration) ;
    result = p->mProperty_mTargetActionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionBindingListForGeneration cPtr_xibDocumentFileGeneration::getter_mTargetActionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetActionList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularBindingsGenerationList GALGAS_xibDocumentFileGeneration::getter_mRegularBindingsGenerationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_regularBindingsGenerationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_xibDocumentFileGeneration * p = (const cPtr_xibDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xibDocumentFileGeneration) ;
    result = p->mProperty_mRegularBindingsGenerationList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularBindingsGenerationList cPtr_xibDocumentFileGeneration::getter_mRegularBindingsGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegularBindingsGenerationList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingGenerationList GALGAS_xibDocumentFileGeneration::getter_multipleBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_multipleBindingGenerationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_xibDocumentFileGeneration * p = (const cPtr_xibDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xibDocumentFileGeneration) ;
    result = p->mProperty_multipleBindingGenerationList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingGenerationList cPtr_xibDocumentFileGeneration::getter_multipleBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_multipleBindingGenerationList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewBindingGenerationList GALGAS_xibDocumentFileGeneration::getter_mTableViewBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_tableViewBindingGenerationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_xibDocumentFileGeneration * p = (const cPtr_xibDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xibDocumentFileGeneration) ;
    result = p->mProperty_mTableViewBindingGenerationList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewBindingGenerationList cPtr_xibDocumentFileGeneration::getter_mTableViewBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTableViewBindingGenerationList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ebViewGraphicControllerBindingGenerationList GALGAS_xibDocumentFileGeneration::getter_mEBViewBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_ebViewGraphicControllerBindingGenerationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_xibDocumentFileGeneration * p = (const cPtr_xibDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xibDocumentFileGeneration) ;
    result = p->mProperty_mEBViewBindingGenerationList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ebViewGraphicControllerBindingGenerationList cPtr_xibDocumentFileGeneration::getter_mEBViewBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEBViewBindingGenerationList ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_xibDocumentFileGeneration::setter_setMDocumentName (GALGAS_string inValue
                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_xibDocumentFileGeneration * p = (cPtr_xibDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xibDocumentFileGeneration) ;
    p->mProperty_mDocumentName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_xibDocumentFileGeneration::setter_setMDocumentName (GALGAS_string inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mDocumentName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_xibDocumentFileGeneration::setter_setMRootEntityName (GALGAS_string inValue
                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_xibDocumentFileGeneration * p = (cPtr_xibDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xibDocumentFileGeneration) ;
    p->mProperty_mRootEntityName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_xibDocumentFileGeneration::setter_setMRootEntityName (GALGAS_string inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRootEntityName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_xibDocumentFileGeneration::setter_setMDocumentPropertyGenearionList (GALGAS_propertyGenerationList inValue
                                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_xibDocumentFileGeneration * p = (cPtr_xibDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xibDocumentFileGeneration) ;
    p->mProperty_mDocumentPropertyGenearionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_xibDocumentFileGeneration::setter_setMDocumentPropertyGenearionList (GALGAS_propertyGenerationList inValue
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mDocumentPropertyGenearionList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_xibDocumentFileGeneration::setter_setMOutletMap (GALGAS_decoratedOutletMap inValue
                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_xibDocumentFileGeneration * p = (cPtr_xibDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xibDocumentFileGeneration) ;
    p->mProperty_mOutletMap = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_xibDocumentFileGeneration::setter_setMOutletMap (GALGAS_decoratedOutletMap inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOutletMap = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_xibDocumentFileGeneration::setter_setMTargetActionList (GALGAS_actionBindingListForGeneration inValue
                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_xibDocumentFileGeneration * p = (cPtr_xibDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xibDocumentFileGeneration) ;
    p->mProperty_mTargetActionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_xibDocumentFileGeneration::setter_setMTargetActionList (GALGAS_actionBindingListForGeneration inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTargetActionList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_xibDocumentFileGeneration::setter_setMRegularBindingsGenerationList (GALGAS_regularBindingsGenerationList inValue
                                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_xibDocumentFileGeneration * p = (cPtr_xibDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xibDocumentFileGeneration) ;
    p->mProperty_mRegularBindingsGenerationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_xibDocumentFileGeneration::setter_setMRegularBindingsGenerationList (GALGAS_regularBindingsGenerationList inValue
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRegularBindingsGenerationList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_xibDocumentFileGeneration::setter_setMultipleBindingGenerationList (GALGAS_multipleBindingGenerationList inValue
                                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_xibDocumentFileGeneration * p = (cPtr_xibDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xibDocumentFileGeneration) ;
    p->mProperty_multipleBindingGenerationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_xibDocumentFileGeneration::setter_setMultipleBindingGenerationList (GALGAS_multipleBindingGenerationList inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_multipleBindingGenerationList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_xibDocumentFileGeneration::setter_setMTableViewBindingGenerationList (GALGAS_tableViewBindingGenerationList inValue
                                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_xibDocumentFileGeneration * p = (cPtr_xibDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xibDocumentFileGeneration) ;
    p->mProperty_mTableViewBindingGenerationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_xibDocumentFileGeneration::setter_setMTableViewBindingGenerationList (GALGAS_tableViewBindingGenerationList inValue
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTableViewBindingGenerationList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_xibDocumentFileGeneration::setter_setMEBViewBindingGenerationList (GALGAS_ebViewGraphicControllerBindingGenerationList inValue
                                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_xibDocumentFileGeneration * p = (cPtr_xibDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xibDocumentFileGeneration) ;
    p->mProperty_mEBViewBindingGenerationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_xibDocumentFileGeneration::setter_setMEBViewBindingGenerationList (GALGAS_ebViewGraphicControllerBindingGenerationList inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEBViewBindingGenerationList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @xibDocumentFileGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_xibDocumentFileGeneration::cPtr_xibDocumentFileGeneration (const GALGAS_string & in_mDocumentName,
                                                                const GALGAS_string & in_mRootEntityName,
                                                                const GALGAS_propertyGenerationList & in_mDocumentPropertyGenearionList,
                                                                const GALGAS_decoratedOutletMap & in_mOutletMap,
                                                                const GALGAS_actionBindingListForGeneration & in_mTargetActionList,
                                                                const GALGAS_regularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                                                const GALGAS_multipleBindingGenerationList & in_multipleBindingGenerationList,
                                                                const GALGAS_tableViewBindingGenerationList & in_mTableViewBindingGenerationList,
                                                                const GALGAS_ebViewGraphicControllerBindingGenerationList & in_mEBViewBindingGenerationList
                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (THERE),
mProperty_mDocumentName (in_mDocumentName),
mProperty_mRootEntityName (in_mRootEntityName),
mProperty_mDocumentPropertyGenearionList (in_mDocumentPropertyGenearionList),
mProperty_mOutletMap (in_mOutletMap),
mProperty_mTargetActionList (in_mTargetActionList),
mProperty_mRegularBindingsGenerationList (in_mRegularBindingsGenerationList),
mProperty_multipleBindingGenerationList (in_multipleBindingGenerationList),
mProperty_mTableViewBindingGenerationList (in_mTableViewBindingGenerationList),
mProperty_mEBViewBindingGenerationList (in_mEBViewBindingGenerationList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_xibDocumentFileGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xibDocumentFileGeneration ;
}

void cPtr_xibDocumentFileGeneration::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@xibDocumentFileGeneration:" ;
  mProperty_mDocumentName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRootEntityName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDocumentPropertyGenearionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOutletMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetActionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegularBindingsGenerationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_multipleBindingGenerationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTableViewBindingGenerationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEBViewBindingGenerationList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_xibDocumentFileGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_xibDocumentFileGeneration (mProperty_mDocumentName, mProperty_mRootEntityName, mProperty_mDocumentPropertyGenearionList, mProperty_mOutletMap, mProperty_mTargetActionList, mProperty_mRegularBindingsGenerationList, mProperty_multipleBindingGenerationList, mProperty_mTableViewBindingGenerationList, mProperty_mEBViewBindingGenerationList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@xibDocumentFileGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_xibDocumentFileGeneration ("xibDocumentFileGeneration",
                                                  & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_xibDocumentFileGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xibDocumentFileGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_xibDocumentFileGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_xibDocumentFileGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xibDocumentFileGeneration GALGAS_xibDocumentFileGeneration::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_xibDocumentFileGeneration result ;
  const GALGAS_xibDocumentFileGeneration * p = (const GALGAS_xibDocumentFileGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_xibDocumentFileGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("xibDocumentFileGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_autoLayoutDocumentDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_autoLayoutDocumentDeclarationAST * p = (const cPtr_autoLayoutDocumentDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRootEntityName.objectCompare (p->mProperty_mRootEntityName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMainViewName.objectCompare (p->mProperty_mMainViewName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOutletDeclarationList.objectCompare (p->mProperty_mOutletDeclarationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActionDeclarationList.objectCompare (p->mProperty_mActionDeclarationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mArrayControllerBindingListAST.objectCompare (p->mProperty_mArrayControllerBindingListAST) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mViewDeclarationList.objectCompare (p->mProperty_mViewDeclarationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAutoLayoutToolbarItemList.objectCompare (p->mProperty_mAutoLayoutToolbarItemList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_autoLayoutDocumentDeclarationAST::objectCompare (const GALGAS_autoLayoutDocumentDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDocumentDeclarationAST::GALGAS_autoLayoutDocumentDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDocumentDeclarationAST GALGAS_autoLayoutDocumentDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_autoLayoutDocumentDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                   GALGAS_lstring::constructor_default (HERE),
                                                                   GALGAS_lstring::constructor_default (HERE),
                                                                   GALGAS_outletDeclarationList::constructor_emptyList (HERE),
                                                                   GALGAS_lstringlist::constructor_emptyList (HERE),
                                                                   GALGAS_arrayControllerBindingListAST::constructor_emptyList (HERE),
                                                                   GALGAS_astViewDeclarationList::constructor_emptyList (HERE),
                                                                   GALGAS_astAutoLayoutToolbarItemList::constructor_emptyList (HERE)
                                                                   COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDocumentDeclarationAST::GALGAS_autoLayoutDocumentDeclarationAST (const cPtr_autoLayoutDocumentDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_autoLayoutDocumentDeclarationAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDocumentDeclarationAST GALGAS_autoLayoutDocumentDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                                                  const GALGAS_lstring & inAttribute_mRootEntityName,
                                                                                                  const GALGAS_lstring & inAttribute_mMainViewName,
                                                                                                  const GALGAS_outletDeclarationList & inAttribute_mOutletDeclarationList,
                                                                                                  const GALGAS_lstringlist & inAttribute_mActionDeclarationList,
                                                                                                  const GALGAS_arrayControllerBindingListAST & inAttribute_mArrayControllerBindingListAST,
                                                                                                  const GALGAS_astViewDeclarationList & inAttribute_mViewDeclarationList,
                                                                                                  const GALGAS_astAutoLayoutToolbarItemList & inAttribute_mAutoLayoutToolbarItemList
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutDocumentDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mRootEntityName.isValid () && inAttribute_mMainViewName.isValid () && inAttribute_mOutletDeclarationList.isValid () && inAttribute_mActionDeclarationList.isValid () && inAttribute_mArrayControllerBindingListAST.isValid () && inAttribute_mViewDeclarationList.isValid () && inAttribute_mAutoLayoutToolbarItemList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_autoLayoutDocumentDeclarationAST (inAttribute_mClassName, inAttribute_mRootEntityName, inAttribute_mMainViewName, inAttribute_mOutletDeclarationList, inAttribute_mActionDeclarationList, inAttribute_mArrayControllerBindingListAST, inAttribute_mViewDeclarationList, inAttribute_mAutoLayoutToolbarItemList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_autoLayoutDocumentDeclarationAST::getter_mRootEntityName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_autoLayoutDocumentDeclarationAST * p = (const cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    result = p->mProperty_mRootEntityName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_autoLayoutDocumentDeclarationAST::getter_mRootEntityName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRootEntityName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_autoLayoutDocumentDeclarationAST::getter_mMainViewName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_autoLayoutDocumentDeclarationAST * p = (const cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    result = p->mProperty_mMainViewName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_autoLayoutDocumentDeclarationAST::getter_mMainViewName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMainViewName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletDeclarationList GALGAS_autoLayoutDocumentDeclarationAST::getter_mOutletDeclarationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_outletDeclarationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_autoLayoutDocumentDeclarationAST * p = (const cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    result = p->mProperty_mOutletDeclarationList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletDeclarationList cPtr_autoLayoutDocumentDeclarationAST::getter_mOutletDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOutletDeclarationList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_autoLayoutDocumentDeclarationAST::getter_mActionDeclarationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_autoLayoutDocumentDeclarationAST * p = (const cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    result = p->mProperty_mActionDeclarationList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist cPtr_autoLayoutDocumentDeclarationAST::getter_mActionDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActionDeclarationList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerBindingListAST GALGAS_autoLayoutDocumentDeclarationAST::getter_mArrayControllerBindingListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_arrayControllerBindingListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_autoLayoutDocumentDeclarationAST * p = (const cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    result = p->mProperty_mArrayControllerBindingListAST ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerBindingListAST cPtr_autoLayoutDocumentDeclarationAST::getter_mArrayControllerBindingListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArrayControllerBindingListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astViewDeclarationList GALGAS_autoLayoutDocumentDeclarationAST::getter_mViewDeclarationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_astViewDeclarationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_autoLayoutDocumentDeclarationAST * p = (const cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    result = p->mProperty_mViewDeclarationList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astViewDeclarationList cPtr_autoLayoutDocumentDeclarationAST::getter_mViewDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mViewDeclarationList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutToolbarItemList GALGAS_autoLayoutDocumentDeclarationAST::getter_mAutoLayoutToolbarItemList (UNUSED_LOCATION_ARGS) const {
  GALGAS_astAutoLayoutToolbarItemList result ;
  if (NULL != mObjectPtr) {
    const cPtr_autoLayoutDocumentDeclarationAST * p = (const cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    result = p->mProperty_mAutoLayoutToolbarItemList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutToolbarItemList cPtr_autoLayoutDocumentDeclarationAST::getter_mAutoLayoutToolbarItemList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAutoLayoutToolbarItemList ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentDeclarationAST::setter_setMRootEntityName (GALGAS_lstring inValue
                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    p->mProperty_mRootEntityName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_autoLayoutDocumentDeclarationAST::setter_setMRootEntityName (GALGAS_lstring inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRootEntityName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentDeclarationAST::setter_setMMainViewName (GALGAS_lstring inValue
                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    p->mProperty_mMainViewName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_autoLayoutDocumentDeclarationAST::setter_setMMainViewName (GALGAS_lstring inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mMainViewName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentDeclarationAST::setter_setMOutletDeclarationList (GALGAS_outletDeclarationList inValue
                                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    p->mProperty_mOutletDeclarationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_autoLayoutDocumentDeclarationAST::setter_setMOutletDeclarationList (GALGAS_outletDeclarationList inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOutletDeclarationList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentDeclarationAST::setter_setMActionDeclarationList (GALGAS_lstringlist inValue
                                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    p->mProperty_mActionDeclarationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_autoLayoutDocumentDeclarationAST::setter_setMActionDeclarationList (GALGAS_lstringlist inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mActionDeclarationList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentDeclarationAST::setter_setMArrayControllerBindingListAST (GALGAS_arrayControllerBindingListAST inValue
                                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    p->mProperty_mArrayControllerBindingListAST = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_autoLayoutDocumentDeclarationAST::setter_setMArrayControllerBindingListAST (GALGAS_arrayControllerBindingListAST inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mArrayControllerBindingListAST = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentDeclarationAST::setter_setMViewDeclarationList (GALGAS_astViewDeclarationList inValue
                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    p->mProperty_mViewDeclarationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_autoLayoutDocumentDeclarationAST::setter_setMViewDeclarationList (GALGAS_astViewDeclarationList inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mViewDeclarationList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentDeclarationAST::setter_setMAutoLayoutToolbarItemList (GALGAS_astAutoLayoutToolbarItemList inValue
                                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    p->mProperty_mAutoLayoutToolbarItemList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_autoLayoutDocumentDeclarationAST::setter_setMAutoLayoutToolbarItemList (GALGAS_astAutoLayoutToolbarItemList inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mAutoLayoutToolbarItemList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @autoLayoutDocumentDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_autoLayoutDocumentDeclarationAST::cPtr_autoLayoutDocumentDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                                              const GALGAS_lstring & in_mRootEntityName,
                                                                              const GALGAS_lstring & in_mMainViewName,
                                                                              const GALGAS_outletDeclarationList & in_mOutletDeclarationList,
                                                                              const GALGAS_lstringlist & in_mActionDeclarationList,
                                                                              const GALGAS_arrayControllerBindingListAST & in_mArrayControllerBindingListAST,
                                                                              const GALGAS_astViewDeclarationList & in_mViewDeclarationList,
                                                                              const GALGAS_astAutoLayoutToolbarItemList & in_mAutoLayoutToolbarItemList
                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mRootEntityName (in_mRootEntityName),
mProperty_mMainViewName (in_mMainViewName),
mProperty_mOutletDeclarationList (in_mOutletDeclarationList),
mProperty_mActionDeclarationList (in_mActionDeclarationList),
mProperty_mArrayControllerBindingListAST (in_mArrayControllerBindingListAST),
mProperty_mViewDeclarationList (in_mViewDeclarationList),
mProperty_mAutoLayoutToolbarItemList (in_mAutoLayoutToolbarItemList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_autoLayoutDocumentDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutDocumentDeclarationAST ;
}

void cPtr_autoLayoutDocumentDeclarationAST::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@autoLayoutDocumentDeclarationAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRootEntityName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMainViewName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOutletDeclarationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActionDeclarationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mArrayControllerBindingListAST.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mViewDeclarationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAutoLayoutToolbarItemList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_autoLayoutDocumentDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_autoLayoutDocumentDeclarationAST (mProperty_mClassName, mProperty_mRootEntityName, mProperty_mMainViewName, mProperty_mOutletDeclarationList, mProperty_mActionDeclarationList, mProperty_mArrayControllerBindingListAST, mProperty_mViewDeclarationList, mProperty_mAutoLayoutToolbarItemList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutDocumentDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutDocumentDeclarationAST ("autoLayoutDocumentDeclarationAST",
                                                         & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutDocumentDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutDocumentDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutDocumentDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutDocumentDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDocumentDeclarationAST GALGAS_autoLayoutDocumentDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutDocumentDeclarationAST result ;
  const GALGAS_autoLayoutDocumentDeclarationAST * p = (const GALGAS_autoLayoutDocumentDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutDocumentDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutDocumentDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_autoLayoutDocumentFileGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_autoLayoutDocumentFileGeneration * p = (const cPtr_autoLayoutDocumentFileGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mDocumentName.objectCompare (p->mProperty_mDocumentName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRootEntityName.objectCompare (p->mProperty_mRootEntityName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMainViewName.objectCompare (p->mProperty_mMainViewName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDocumentPropertyGenearionList.objectCompare (p->mProperty_mDocumentPropertyGenearionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOutletMap.objectCompare (p->mProperty_mOutletMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetActionList.objectCompare (p->mProperty_mTargetActionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegularBindingsGenerationList.objectCompare (p->mProperty_mRegularBindingsGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_multipleBindingGenerationList.objectCompare (p->mProperty_multipleBindingGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTableViewBindingGenerationList.objectCompare (p->mProperty_mTableViewBindingGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEBViewBindingGenerationList.objectCompare (p->mProperty_mEBViewBindingGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mViewDeclarationList.objectCompare (p->mProperty_mViewDeclarationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAutoLayoutToolbarItemGenerationList.objectCompare (p->mProperty_mAutoLayoutToolbarItemGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mImplicitViewFunctionGenerationList.objectCompare (p->mProperty_mImplicitViewFunctionGenerationList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_autoLayoutDocumentFileGeneration::objectCompare (const GALGAS_autoLayoutDocumentFileGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDocumentFileGeneration::GALGAS_autoLayoutDocumentFileGeneration (void) :
GALGAS_abstractFileGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDocumentFileGeneration GALGAS_autoLayoutDocumentFileGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_autoLayoutDocumentFileGeneration::constructor_new (GALGAS_string::constructor_default (HERE),
                                                                   GALGAS_string::constructor_default (HERE),
                                                                   GALGAS_string::constructor_default (HERE),
                                                                   GALGAS_propertyGenerationList::constructor_emptyList (HERE),
                                                                   GALGAS_decoratedOutletMap::constructor_emptyMap (HERE),
                                                                   GALGAS_actionBindingListForGeneration::constructor_emptyList (HERE),
                                                                   GALGAS_regularBindingsGenerationList::constructor_emptyList (HERE),
                                                                   GALGAS_multipleBindingGenerationList::constructor_emptyList (HERE),
                                                                   GALGAS_tableViewBindingGenerationList::constructor_emptyList (HERE),
                                                                   GALGAS_ebViewGraphicControllerBindingGenerationList::constructor_emptyList (HERE),
                                                                   GALGAS_viewGenerationList::constructor_emptyList (HERE),
                                                                   GALGAS_autoLayoutToolbarItemGenerationList::constructor_emptyList (HERE),
                                                                   GALGAS_implicitViewFunctionGenerationList::constructor_emptyList (HERE)
                                                                   COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDocumentFileGeneration::GALGAS_autoLayoutDocumentFileGeneration (const cPtr_autoLayoutDocumentFileGeneration * inSourcePtr) :
GALGAS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_autoLayoutDocumentFileGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDocumentFileGeneration GALGAS_autoLayoutDocumentFileGeneration::constructor_new (const GALGAS_string & inAttribute_mDocumentName,
                                                                                                  const GALGAS_string & inAttribute_mRootEntityName,
                                                                                                  const GALGAS_string & inAttribute_mMainViewName,
                                                                                                  const GALGAS_propertyGenerationList & inAttribute_mDocumentPropertyGenearionList,
                                                                                                  const GALGAS_decoratedOutletMap & inAttribute_mOutletMap,
                                                                                                  const GALGAS_actionBindingListForGeneration & inAttribute_mTargetActionList,
                                                                                                  const GALGAS_regularBindingsGenerationList & inAttribute_mRegularBindingsGenerationList,
                                                                                                  const GALGAS_multipleBindingGenerationList & inAttribute_multipleBindingGenerationList,
                                                                                                  const GALGAS_tableViewBindingGenerationList & inAttribute_mTableViewBindingGenerationList,
                                                                                                  const GALGAS_ebViewGraphicControllerBindingGenerationList & inAttribute_mEBViewBindingGenerationList,
                                                                                                  const GALGAS_viewGenerationList & inAttribute_mViewDeclarationList,
                                                                                                  const GALGAS_autoLayoutToolbarItemGenerationList & inAttribute_mAutoLayoutToolbarItemGenerationList,
                                                                                                  const GALGAS_implicitViewFunctionGenerationList & inAttribute_mImplicitViewFunctionGenerationList
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutDocumentFileGeneration result ;
  if (inAttribute_mDocumentName.isValid () && inAttribute_mRootEntityName.isValid () && inAttribute_mMainViewName.isValid () && inAttribute_mDocumentPropertyGenearionList.isValid () && inAttribute_mOutletMap.isValid () && inAttribute_mTargetActionList.isValid () && inAttribute_mRegularBindingsGenerationList.isValid () && inAttribute_multipleBindingGenerationList.isValid () && inAttribute_mTableViewBindingGenerationList.isValid () && inAttribute_mEBViewBindingGenerationList.isValid () && inAttribute_mViewDeclarationList.isValid () && inAttribute_mAutoLayoutToolbarItemGenerationList.isValid () && inAttribute_mImplicitViewFunctionGenerationList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_autoLayoutDocumentFileGeneration (inAttribute_mDocumentName, inAttribute_mRootEntityName, inAttribute_mMainViewName, inAttribute_mDocumentPropertyGenearionList, inAttribute_mOutletMap, inAttribute_mTargetActionList, inAttribute_mRegularBindingsGenerationList, inAttribute_multipleBindingGenerationList, inAttribute_mTableViewBindingGenerationList, inAttribute_mEBViewBindingGenerationList, inAttribute_mViewDeclarationList, inAttribute_mAutoLayoutToolbarItemGenerationList, inAttribute_mImplicitViewFunctionGenerationList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutDocumentFileGeneration::getter_mDocumentName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_autoLayoutDocumentFileGeneration * p = (const cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    result = p->mProperty_mDocumentName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_autoLayoutDocumentFileGeneration::getter_mDocumentName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDocumentName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutDocumentFileGeneration::getter_mRootEntityName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_autoLayoutDocumentFileGeneration * p = (const cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    result = p->mProperty_mRootEntityName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_autoLayoutDocumentFileGeneration::getter_mRootEntityName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRootEntityName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutDocumentFileGeneration::getter_mMainViewName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_autoLayoutDocumentFileGeneration * p = (const cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    result = p->mProperty_mMainViewName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_autoLayoutDocumentFileGeneration::getter_mMainViewName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMainViewName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGenerationList GALGAS_autoLayoutDocumentFileGeneration::getter_mDocumentPropertyGenearionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyGenerationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_autoLayoutDocumentFileGeneration * p = (const cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    result = p->mProperty_mDocumentPropertyGenearionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGenerationList cPtr_autoLayoutDocumentFileGeneration::getter_mDocumentPropertyGenearionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDocumentPropertyGenearionList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedOutletMap GALGAS_autoLayoutDocumentFileGeneration::getter_mOutletMap (UNUSED_LOCATION_ARGS) const {
  GALGAS_decoratedOutletMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_autoLayoutDocumentFileGeneration * p = (const cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    result = p->mProperty_mOutletMap ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedOutletMap cPtr_autoLayoutDocumentFileGeneration::getter_mOutletMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOutletMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionBindingListForGeneration GALGAS_autoLayoutDocumentFileGeneration::getter_mTargetActionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_actionBindingListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_autoLayoutDocumentFileGeneration * p = (const cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    result = p->mProperty_mTargetActionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionBindingListForGeneration cPtr_autoLayoutDocumentFileGeneration::getter_mTargetActionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetActionList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularBindingsGenerationList GALGAS_autoLayoutDocumentFileGeneration::getter_mRegularBindingsGenerationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_regularBindingsGenerationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_autoLayoutDocumentFileGeneration * p = (const cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    result = p->mProperty_mRegularBindingsGenerationList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularBindingsGenerationList cPtr_autoLayoutDocumentFileGeneration::getter_mRegularBindingsGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegularBindingsGenerationList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingGenerationList GALGAS_autoLayoutDocumentFileGeneration::getter_multipleBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_multipleBindingGenerationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_autoLayoutDocumentFileGeneration * p = (const cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    result = p->mProperty_multipleBindingGenerationList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingGenerationList cPtr_autoLayoutDocumentFileGeneration::getter_multipleBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_multipleBindingGenerationList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewBindingGenerationList GALGAS_autoLayoutDocumentFileGeneration::getter_mTableViewBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_tableViewBindingGenerationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_autoLayoutDocumentFileGeneration * p = (const cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    result = p->mProperty_mTableViewBindingGenerationList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewBindingGenerationList cPtr_autoLayoutDocumentFileGeneration::getter_mTableViewBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTableViewBindingGenerationList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ebViewGraphicControllerBindingGenerationList GALGAS_autoLayoutDocumentFileGeneration::getter_mEBViewBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_ebViewGraphicControllerBindingGenerationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_autoLayoutDocumentFileGeneration * p = (const cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    result = p->mProperty_mEBViewBindingGenerationList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ebViewGraphicControllerBindingGenerationList cPtr_autoLayoutDocumentFileGeneration::getter_mEBViewBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEBViewBindingGenerationList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_viewGenerationList GALGAS_autoLayoutDocumentFileGeneration::getter_mViewDeclarationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_viewGenerationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_autoLayoutDocumentFileGeneration * p = (const cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    result = p->mProperty_mViewDeclarationList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_viewGenerationList cPtr_autoLayoutDocumentFileGeneration::getter_mViewDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mViewDeclarationList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutToolbarItemGenerationList GALGAS_autoLayoutDocumentFileGeneration::getter_mAutoLayoutToolbarItemGenerationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_autoLayoutToolbarItemGenerationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_autoLayoutDocumentFileGeneration * p = (const cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    result = p->mProperty_mAutoLayoutToolbarItemGenerationList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutToolbarItemGenerationList cPtr_autoLayoutDocumentFileGeneration::getter_mAutoLayoutToolbarItemGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAutoLayoutToolbarItemGenerationList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_implicitViewFunctionGenerationList GALGAS_autoLayoutDocumentFileGeneration::getter_mImplicitViewFunctionGenerationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_implicitViewFunctionGenerationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_autoLayoutDocumentFileGeneration * p = (const cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    result = p->mProperty_mImplicitViewFunctionGenerationList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_implicitViewFunctionGenerationList cPtr_autoLayoutDocumentFileGeneration::getter_mImplicitViewFunctionGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mImplicitViewFunctionGenerationList ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentFileGeneration::setter_setMDocumentName (GALGAS_string inValue
                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    p->mProperty_mDocumentName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_autoLayoutDocumentFileGeneration::setter_setMDocumentName (GALGAS_string inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mDocumentName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentFileGeneration::setter_setMRootEntityName (GALGAS_string inValue
                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    p->mProperty_mRootEntityName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_autoLayoutDocumentFileGeneration::setter_setMRootEntityName (GALGAS_string inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRootEntityName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentFileGeneration::setter_setMMainViewName (GALGAS_string inValue
                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    p->mProperty_mMainViewName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_autoLayoutDocumentFileGeneration::setter_setMMainViewName (GALGAS_string inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mMainViewName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentFileGeneration::setter_setMDocumentPropertyGenearionList (GALGAS_propertyGenerationList inValue
                                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    p->mProperty_mDocumentPropertyGenearionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_autoLayoutDocumentFileGeneration::setter_setMDocumentPropertyGenearionList (GALGAS_propertyGenerationList inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mDocumentPropertyGenearionList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentFileGeneration::setter_setMOutletMap (GALGAS_decoratedOutletMap inValue
                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    p->mProperty_mOutletMap = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_autoLayoutDocumentFileGeneration::setter_setMOutletMap (GALGAS_decoratedOutletMap inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOutletMap = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentFileGeneration::setter_setMTargetActionList (GALGAS_actionBindingListForGeneration inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    p->mProperty_mTargetActionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_autoLayoutDocumentFileGeneration::setter_setMTargetActionList (GALGAS_actionBindingListForGeneration inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTargetActionList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentFileGeneration::setter_setMRegularBindingsGenerationList (GALGAS_regularBindingsGenerationList inValue
                                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    p->mProperty_mRegularBindingsGenerationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_autoLayoutDocumentFileGeneration::setter_setMRegularBindingsGenerationList (GALGAS_regularBindingsGenerationList inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRegularBindingsGenerationList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentFileGeneration::setter_setMultipleBindingGenerationList (GALGAS_multipleBindingGenerationList inValue
                                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    p->mProperty_multipleBindingGenerationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_autoLayoutDocumentFileGeneration::setter_setMultipleBindingGenerationList (GALGAS_multipleBindingGenerationList inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_multipleBindingGenerationList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentFileGeneration::setter_setMTableViewBindingGenerationList (GALGAS_tableViewBindingGenerationList inValue
                                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    p->mProperty_mTableViewBindingGenerationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_autoLayoutDocumentFileGeneration::setter_setMTableViewBindingGenerationList (GALGAS_tableViewBindingGenerationList inValue
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTableViewBindingGenerationList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentFileGeneration::setter_setMEBViewBindingGenerationList (GALGAS_ebViewGraphicControllerBindingGenerationList inValue
                                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    p->mProperty_mEBViewBindingGenerationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_autoLayoutDocumentFileGeneration::setter_setMEBViewBindingGenerationList (GALGAS_ebViewGraphicControllerBindingGenerationList inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEBViewBindingGenerationList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentFileGeneration::setter_setMViewDeclarationList (GALGAS_viewGenerationList inValue
                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    p->mProperty_mViewDeclarationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_autoLayoutDocumentFileGeneration::setter_setMViewDeclarationList (GALGAS_viewGenerationList inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mViewDeclarationList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentFileGeneration::setter_setMAutoLayoutToolbarItemGenerationList (GALGAS_autoLayoutToolbarItemGenerationList inValue
                                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    p->mProperty_mAutoLayoutToolbarItemGenerationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_autoLayoutDocumentFileGeneration::setter_setMAutoLayoutToolbarItemGenerationList (GALGAS_autoLayoutToolbarItemGenerationList inValue
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mAutoLayoutToolbarItemGenerationList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentFileGeneration::setter_setMImplicitViewFunctionGenerationList (GALGAS_implicitViewFunctionGenerationList inValue
                                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    p->mProperty_mImplicitViewFunctionGenerationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_autoLayoutDocumentFileGeneration::setter_setMImplicitViewFunctionGenerationList (GALGAS_implicitViewFunctionGenerationList inValue
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mImplicitViewFunctionGenerationList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @autoLayoutDocumentFileGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_autoLayoutDocumentFileGeneration::cPtr_autoLayoutDocumentFileGeneration (const GALGAS_string & in_mDocumentName,
                                                                              const GALGAS_string & in_mRootEntityName,
                                                                              const GALGAS_string & in_mMainViewName,
                                                                              const GALGAS_propertyGenerationList & in_mDocumentPropertyGenearionList,
                                                                              const GALGAS_decoratedOutletMap & in_mOutletMap,
                                                                              const GALGAS_actionBindingListForGeneration & in_mTargetActionList,
                                                                              const GALGAS_regularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                                                              const GALGAS_multipleBindingGenerationList & in_multipleBindingGenerationList,
                                                                              const GALGAS_tableViewBindingGenerationList & in_mTableViewBindingGenerationList,
                                                                              const GALGAS_ebViewGraphicControllerBindingGenerationList & in_mEBViewBindingGenerationList,
                                                                              const GALGAS_viewGenerationList & in_mViewDeclarationList,
                                                                              const GALGAS_autoLayoutToolbarItemGenerationList & in_mAutoLayoutToolbarItemGenerationList,
                                                                              const GALGAS_implicitViewFunctionGenerationList & in_mImplicitViewFunctionGenerationList
                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (THERE),
mProperty_mDocumentName (in_mDocumentName),
mProperty_mRootEntityName (in_mRootEntityName),
mProperty_mMainViewName (in_mMainViewName),
mProperty_mDocumentPropertyGenearionList (in_mDocumentPropertyGenearionList),
mProperty_mOutletMap (in_mOutletMap),
mProperty_mTargetActionList (in_mTargetActionList),
mProperty_mRegularBindingsGenerationList (in_mRegularBindingsGenerationList),
mProperty_multipleBindingGenerationList (in_multipleBindingGenerationList),
mProperty_mTableViewBindingGenerationList (in_mTableViewBindingGenerationList),
mProperty_mEBViewBindingGenerationList (in_mEBViewBindingGenerationList),
mProperty_mViewDeclarationList (in_mViewDeclarationList),
mProperty_mAutoLayoutToolbarItemGenerationList (in_mAutoLayoutToolbarItemGenerationList),
mProperty_mImplicitViewFunctionGenerationList (in_mImplicitViewFunctionGenerationList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_autoLayoutDocumentFileGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutDocumentFileGeneration ;
}

void cPtr_autoLayoutDocumentFileGeneration::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@autoLayoutDocumentFileGeneration:" ;
  mProperty_mDocumentName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRootEntityName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMainViewName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDocumentPropertyGenearionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOutletMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetActionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegularBindingsGenerationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_multipleBindingGenerationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTableViewBindingGenerationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEBViewBindingGenerationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mViewDeclarationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAutoLayoutToolbarItemGenerationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mImplicitViewFunctionGenerationList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_autoLayoutDocumentFileGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_autoLayoutDocumentFileGeneration (mProperty_mDocumentName, mProperty_mRootEntityName, mProperty_mMainViewName, mProperty_mDocumentPropertyGenearionList, mProperty_mOutletMap, mProperty_mTargetActionList, mProperty_mRegularBindingsGenerationList, mProperty_multipleBindingGenerationList, mProperty_mTableViewBindingGenerationList, mProperty_mEBViewBindingGenerationList, mProperty_mViewDeclarationList, mProperty_mAutoLayoutToolbarItemGenerationList, mProperty_mImplicitViewFunctionGenerationList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutDocumentFileGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutDocumentFileGeneration ("autoLayoutDocumentFileGeneration",
                                                         & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutDocumentFileGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutDocumentFileGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutDocumentFileGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutDocumentFileGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDocumentFileGeneration GALGAS_autoLayoutDocumentFileGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutDocumentFileGeneration result ;
  const GALGAS_autoLayoutDocumentFileGeneration * p = (const GALGAS_autoLayoutDocumentFileGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutDocumentFileGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutDocumentFileGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_prefsDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_prefsDeclarationAST * p = (const cPtr_prefsDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_prefsDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDeclaration.objectCompare (p->mProperty_mDeclaration) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_prefsDeclarationAST::objectCompare (const GALGAS_prefsDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefsDeclarationAST::GALGAS_prefsDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefsDeclarationAST GALGAS_prefsDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_prefsDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_prefDeclaration::constructor_default (HERE)
                                                      COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefsDeclarationAST::GALGAS_prefsDeclarationAST (const cPtr_prefsDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_prefsDeclarationAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefsDeclarationAST GALGAS_prefsDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                        const GALGAS_prefDeclaration & inAttribute_mDeclaration
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_prefsDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mDeclaration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_prefsDeclarationAST (inAttribute_mClassName, inAttribute_mDeclaration COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefDeclaration GALGAS_prefsDeclarationAST::getter_mDeclaration (UNUSED_LOCATION_ARGS) const {
  GALGAS_prefDeclaration result ;
  if (NULL != mObjectPtr) {
    const cPtr_prefsDeclarationAST * p = (const cPtr_prefsDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefsDeclarationAST) ;
    result = p->mProperty_mDeclaration ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefDeclaration cPtr_prefsDeclarationAST::getter_mDeclaration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDeclaration ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_prefsDeclarationAST::setter_setMDeclaration (GALGAS_prefDeclaration inValue
                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_prefsDeclarationAST * p = (cPtr_prefsDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefsDeclarationAST) ;
    p->mProperty_mDeclaration = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_prefsDeclarationAST::setter_setMDeclaration (GALGAS_prefDeclaration inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mDeclaration = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @prefsDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_prefsDeclarationAST::cPtr_prefsDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                    const GALGAS_prefDeclaration & in_mDeclaration
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mDeclaration (in_mDeclaration) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_prefsDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefsDeclarationAST ;
}

void cPtr_prefsDeclarationAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@prefsDeclarationAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDeclaration.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_prefsDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_prefsDeclarationAST (mProperty_mClassName, mProperty_mDeclaration COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@prefsDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_prefsDeclarationAST ("prefsDeclarationAST",
                                            & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_prefsDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefsDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_prefsDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefsDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefsDeclarationAST GALGAS_prefsDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_prefsDeclarationAST result ;
  const GALGAS_prefsDeclarationAST * p = (const GALGAS_prefsDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_prefsDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefsDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_autoLayoutViewClassDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_autoLayoutViewClassDeclarationAST * p = (const cPtr_autoLayoutViewClassDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUserDefined.objectCompare (p->mProperty_mUserDefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSuperClassName.objectCompare (p->mProperty_mSuperClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHasRunAction.objectCompare (p->mProperty_mHasRunAction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHasEnabled.objectCompare (p->mProperty_mHasEnabled) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHandlesTableValueBinding.objectCompare (p->mProperty_mHandlesTableValueBinding) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHandlesGraphicControllerBinding.objectCompare (p->mProperty_mHandlesGraphicControllerBinding) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHasHidden.objectCompare (p->mProperty_mHasHidden) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mParameterList.objectCompare (p->mProperty_mParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAutoLayoutViewFunctionMap.objectCompare (p->mProperty_mAutoLayoutViewFunctionMap) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_autoLayoutViewClassDeclarationAST::objectCompare (const GALGAS_autoLayoutViewClassDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewClassDeclarationAST::GALGAS_autoLayoutViewClassDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewClassDeclarationAST GALGAS_autoLayoutViewClassDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_autoLayoutViewClassDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                    GALGAS_bool::constructor_default (HERE),
                                                                    GALGAS_lstring::constructor_default (HERE),
                                                                    GALGAS_bool::constructor_default (HERE),
                                                                    GALGAS_bool::constructor_default (HERE),
                                                                    GALGAS_bool::constructor_default (HERE),
                                                                    GALGAS_bool::constructor_default (HERE),
                                                                    GALGAS_bool::constructor_default (HERE),
                                                                    GALGAS_autoLayoutClassParameterList::constructor_emptyList (HERE),
                                                                    GALGAS_astAutoLayoutViewFunctionMap::constructor_emptyMap (HERE)
                                                                    COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewClassDeclarationAST::GALGAS_autoLayoutViewClassDeclarationAST (const cPtr_autoLayoutViewClassDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_autoLayoutViewClassDeclarationAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewClassDeclarationAST GALGAS_autoLayoutViewClassDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                                                    const GALGAS_bool & inAttribute_mUserDefined,
                                                                                                    const GALGAS_lstring & inAttribute_mSuperClassName,
                                                                                                    const GALGAS_bool & inAttribute_mHasRunAction,
                                                                                                    const GALGAS_bool & inAttribute_mHasEnabled,
                                                                                                    const GALGAS_bool & inAttribute_mHandlesTableValueBinding,
                                                                                                    const GALGAS_bool & inAttribute_mHandlesGraphicControllerBinding,
                                                                                                    const GALGAS_bool & inAttribute_mHasHidden,
                                                                                                    const GALGAS_autoLayoutClassParameterList & inAttribute_mParameterList,
                                                                                                    const GALGAS_astAutoLayoutViewFunctionMap & inAttribute_mAutoLayoutViewFunctionMap
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutViewClassDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mUserDefined.isValid () && inAttribute_mSuperClassName.isValid () && inAttribute_mHasRunAction.isValid () && inAttribute_mHasEnabled.isValid () && inAttribute_mHandlesTableValueBinding.isValid () && inAttribute_mHandlesGraphicControllerBinding.isValid () && inAttribute_mHasHidden.isValid () && inAttribute_mParameterList.isValid () && inAttribute_mAutoLayoutViewFunctionMap.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_autoLayoutViewClassDeclarationAST (inAttribute_mClassName, inAttribute_mUserDefined, inAttribute_mSuperClassName, inAttribute_mHasRunAction, inAttribute_mHasEnabled, inAttribute_mHandlesTableValueBinding, inAttribute_mHandlesGraphicControllerBinding, inAttribute_mHasHidden, inAttribute_mParameterList, inAttribute_mAutoLayoutViewFunctionMap COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutViewClassDeclarationAST::getter_mUserDefined (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_autoLayoutViewClassDeclarationAST * p = (const cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    result = p->mProperty_mUserDefined ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_autoLayoutViewClassDeclarationAST::getter_mUserDefined (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUserDefined ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_autoLayoutViewClassDeclarationAST::getter_mSuperClassName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_autoLayoutViewClassDeclarationAST * p = (const cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    result = p->mProperty_mSuperClassName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_autoLayoutViewClassDeclarationAST::getter_mSuperClassName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSuperClassName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutViewClassDeclarationAST::getter_mHasRunAction (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_autoLayoutViewClassDeclarationAST * p = (const cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    result = p->mProperty_mHasRunAction ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_autoLayoutViewClassDeclarationAST::getter_mHasRunAction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHasRunAction ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutViewClassDeclarationAST::getter_mHasEnabled (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_autoLayoutViewClassDeclarationAST * p = (const cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    result = p->mProperty_mHasEnabled ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_autoLayoutViewClassDeclarationAST::getter_mHasEnabled (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHasEnabled ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutViewClassDeclarationAST::getter_mHandlesTableValueBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_autoLayoutViewClassDeclarationAST * p = (const cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    result = p->mProperty_mHandlesTableValueBinding ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_autoLayoutViewClassDeclarationAST::getter_mHandlesTableValueBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHandlesTableValueBinding ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutViewClassDeclarationAST::getter_mHandlesGraphicControllerBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_autoLayoutViewClassDeclarationAST * p = (const cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    result = p->mProperty_mHandlesGraphicControllerBinding ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_autoLayoutViewClassDeclarationAST::getter_mHandlesGraphicControllerBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHandlesGraphicControllerBinding ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutViewClassDeclarationAST::getter_mHasHidden (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_autoLayoutViewClassDeclarationAST * p = (const cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    result = p->mProperty_mHasHidden ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_autoLayoutViewClassDeclarationAST::getter_mHasHidden (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHasHidden ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterList GALGAS_autoLayoutViewClassDeclarationAST::getter_mParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_autoLayoutClassParameterList result ;
  if (NULL != mObjectPtr) {
    const cPtr_autoLayoutViewClassDeclarationAST * p = (const cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    result = p->mProperty_mParameterList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterList cPtr_autoLayoutViewClassDeclarationAST::getter_mParameterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mParameterList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionMap GALGAS_autoLayoutViewClassDeclarationAST::getter_mAutoLayoutViewFunctionMap (UNUSED_LOCATION_ARGS) const {
  GALGAS_astAutoLayoutViewFunctionMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_autoLayoutViewClassDeclarationAST * p = (const cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    result = p->mProperty_mAutoLayoutViewFunctionMap ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionMap cPtr_autoLayoutViewClassDeclarationAST::getter_mAutoLayoutViewFunctionMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAutoLayoutViewFunctionMap ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewClassDeclarationAST::setter_setMUserDefined (GALGAS_bool inValue
                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    p->mProperty_mUserDefined = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_autoLayoutViewClassDeclarationAST::setter_setMUserDefined (GALGAS_bool inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mUserDefined = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewClassDeclarationAST::setter_setMSuperClassName (GALGAS_lstring inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    p->mProperty_mSuperClassName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_autoLayoutViewClassDeclarationAST::setter_setMSuperClassName (GALGAS_lstring inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSuperClassName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewClassDeclarationAST::setter_setMHasRunAction (GALGAS_bool inValue
                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    p->mProperty_mHasRunAction = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_autoLayoutViewClassDeclarationAST::setter_setMHasRunAction (GALGAS_bool inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mHasRunAction = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewClassDeclarationAST::setter_setMHasEnabled (GALGAS_bool inValue
                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    p->mProperty_mHasEnabled = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_autoLayoutViewClassDeclarationAST::setter_setMHasEnabled (GALGAS_bool inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mHasEnabled = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewClassDeclarationAST::setter_setMHandlesTableValueBinding (GALGAS_bool inValue
                                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    p->mProperty_mHandlesTableValueBinding = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_autoLayoutViewClassDeclarationAST::setter_setMHandlesTableValueBinding (GALGAS_bool inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mHandlesTableValueBinding = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewClassDeclarationAST::setter_setMHandlesGraphicControllerBinding (GALGAS_bool inValue
                                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    p->mProperty_mHandlesGraphicControllerBinding = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_autoLayoutViewClassDeclarationAST::setter_setMHandlesGraphicControllerBinding (GALGAS_bool inValue
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mHandlesGraphicControllerBinding = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewClassDeclarationAST::setter_setMHasHidden (GALGAS_bool inValue
                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    p->mProperty_mHasHidden = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_autoLayoutViewClassDeclarationAST::setter_setMHasHidden (GALGAS_bool inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mHasHidden = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewClassDeclarationAST::setter_setMParameterList (GALGAS_autoLayoutClassParameterList inValue
                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    p->mProperty_mParameterList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_autoLayoutViewClassDeclarationAST::setter_setMParameterList (GALGAS_autoLayoutClassParameterList inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mParameterList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewClassDeclarationAST::setter_setMAutoLayoutViewFunctionMap (GALGAS_astAutoLayoutViewFunctionMap inValue
                                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    p->mProperty_mAutoLayoutViewFunctionMap = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_autoLayoutViewClassDeclarationAST::setter_setMAutoLayoutViewFunctionMap (GALGAS_astAutoLayoutViewFunctionMap inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mAutoLayoutViewFunctionMap = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @autoLayoutViewClassDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_autoLayoutViewClassDeclarationAST::cPtr_autoLayoutViewClassDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                                                const GALGAS_bool & in_mUserDefined,
                                                                                const GALGAS_lstring & in_mSuperClassName,
                                                                                const GALGAS_bool & in_mHasRunAction,
                                                                                const GALGAS_bool & in_mHasEnabled,
                                                                                const GALGAS_bool & in_mHandlesTableValueBinding,
                                                                                const GALGAS_bool & in_mHandlesGraphicControllerBinding,
                                                                                const GALGAS_bool & in_mHasHidden,
                                                                                const GALGAS_autoLayoutClassParameterList & in_mParameterList,
                                                                                const GALGAS_astAutoLayoutViewFunctionMap & in_mAutoLayoutViewFunctionMap
                                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mUserDefined (in_mUserDefined),
mProperty_mSuperClassName (in_mSuperClassName),
mProperty_mHasRunAction (in_mHasRunAction),
mProperty_mHasEnabled (in_mHasEnabled),
mProperty_mHandlesTableValueBinding (in_mHandlesTableValueBinding),
mProperty_mHandlesGraphicControllerBinding (in_mHandlesGraphicControllerBinding),
mProperty_mHasHidden (in_mHasHidden),
mProperty_mParameterList (in_mParameterList),
mProperty_mAutoLayoutViewFunctionMap (in_mAutoLayoutViewFunctionMap) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_autoLayoutViewClassDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewClassDeclarationAST ;
}

void cPtr_autoLayoutViewClassDeclarationAST::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@autoLayoutViewClassDeclarationAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mUserDefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSuperClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mHasRunAction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mHasEnabled.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mHandlesTableValueBinding.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mHandlesGraphicControllerBinding.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mHasHidden.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAutoLayoutViewFunctionMap.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_autoLayoutViewClassDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_autoLayoutViewClassDeclarationAST (mProperty_mClassName, mProperty_mUserDefined, mProperty_mSuperClassName, mProperty_mHasRunAction, mProperty_mHasEnabled, mProperty_mHandlesTableValueBinding, mProperty_mHandlesGraphicControllerBinding, mProperty_mHasHidden, mProperty_mParameterList, mProperty_mAutoLayoutViewFunctionMap COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutViewClassDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutViewClassDeclarationAST ("autoLayoutViewClassDeclarationAST",
                                                          & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutViewClassDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewClassDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutViewClassDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutViewClassDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewClassDeclarationAST GALGAS_autoLayoutViewClassDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutViewClassDeclarationAST result ;
  const GALGAS_autoLayoutViewClassDeclarationAST * p = (const GALGAS_autoLayoutViewClassDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutViewClassDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutViewClassDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_astHorizontalStackViewDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_astHorizontalStackViewDeclaration * p = (const cPtr_astHorizontalStackViewDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_astHorizontalStackViewDeclaration) ;
  if (kOperandEqual == result) {
    result = mProperty_mFunctionCallList.objectCompare (p->mProperty_mFunctionCallList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_astHorizontalStackViewDeclaration::objectCompare (const GALGAS_astHorizontalStackViewDeclaration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astHorizontalStackViewDeclaration::GALGAS_astHorizontalStackViewDeclaration (void) :
GALGAS_astAbstractViewDeclaration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astHorizontalStackViewDeclaration GALGAS_astHorizontalStackViewDeclaration::constructor_default (LOCATION_ARGS) {
  return GALGAS_astHorizontalStackViewDeclaration::constructor_new (GALGAS_astAutoLayoutViewFunctionCallList::constructor_emptyList (HERE)
                                                                    COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astHorizontalStackViewDeclaration::GALGAS_astHorizontalStackViewDeclaration (const cPtr_astHorizontalStackViewDeclaration * inSourcePtr) :
GALGAS_astAbstractViewDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_astHorizontalStackViewDeclaration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astHorizontalStackViewDeclaration GALGAS_astHorizontalStackViewDeclaration::constructor_new (const GALGAS_astAutoLayoutViewFunctionCallList & inAttribute_mFunctionCallList
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_astHorizontalStackViewDeclaration result ;
  if (inAttribute_mFunctionCallList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_astHorizontalStackViewDeclaration (inAttribute_mFunctionCallList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionCallList GALGAS_astHorizontalStackViewDeclaration::getter_mFunctionCallList (UNUSED_LOCATION_ARGS) const {
  GALGAS_astAutoLayoutViewFunctionCallList result ;
  if (NULL != mObjectPtr) {
    const cPtr_astHorizontalStackViewDeclaration * p = (const cPtr_astHorizontalStackViewDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astHorizontalStackViewDeclaration) ;
    result = p->mProperty_mFunctionCallList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionCallList cPtr_astHorizontalStackViewDeclaration::getter_mFunctionCallList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionCallList ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astHorizontalStackViewDeclaration::setter_setMFunctionCallList (GALGAS_astAutoLayoutViewFunctionCallList inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_astHorizontalStackViewDeclaration * p = (cPtr_astHorizontalStackViewDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astHorizontalStackViewDeclaration) ;
    p->mProperty_mFunctionCallList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_astHorizontalStackViewDeclaration::setter_setMFunctionCallList (GALGAS_astAutoLayoutViewFunctionCallList inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mFunctionCallList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @astHorizontalStackViewDeclaration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_astHorizontalStackViewDeclaration::cPtr_astHorizontalStackViewDeclaration (const GALGAS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList
                                                                                COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewDeclaration (THERE),
mProperty_mFunctionCallList (in_mFunctionCallList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_astHorizontalStackViewDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astHorizontalStackViewDeclaration ;
}

void cPtr_astHorizontalStackViewDeclaration::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@astHorizontalStackViewDeclaration:" ;
  mProperty_mFunctionCallList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_astHorizontalStackViewDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_astHorizontalStackViewDeclaration (mProperty_mFunctionCallList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@astHorizontalStackViewDeclaration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_astHorizontalStackViewDeclaration ("astHorizontalStackViewDeclaration",
                                                          & kTypeDescriptor_GALGAS_astAbstractViewDeclaration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astHorizontalStackViewDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astHorizontalStackViewDeclaration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astHorizontalStackViewDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astHorizontalStackViewDeclaration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astHorizontalStackViewDeclaration GALGAS_astHorizontalStackViewDeclaration::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_astHorizontalStackViewDeclaration result ;
  const GALGAS_astHorizontalStackViewDeclaration * p = (const GALGAS_astHorizontalStackViewDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_astHorizontalStackViewDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astHorizontalStackViewDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_astComputedHorizontalViewDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_astComputedHorizontalViewDeclaration * p = (const cPtr_astComputedHorizontalViewDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_astComputedHorizontalViewDeclaration) ;
  if (kOperandEqual == result) {
    result = mProperty_mFunctionCallList.objectCompare (p->mProperty_mFunctionCallList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_astComputedHorizontalViewDeclaration::objectCompare (const GALGAS_astComputedHorizontalViewDeclaration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astComputedHorizontalViewDeclaration::GALGAS_astComputedHorizontalViewDeclaration (void) :
GALGAS_astAbstractViewDeclaration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astComputedHorizontalViewDeclaration GALGAS_astComputedHorizontalViewDeclaration::constructor_default (LOCATION_ARGS) {
  return GALGAS_astComputedHorizontalViewDeclaration::constructor_new (GALGAS_astAutoLayoutViewFunctionCallList::constructor_emptyList (HERE),
                                                                       GALGAS_astViewInstructionList::constructor_emptyList (HERE)
                                                                       COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astComputedHorizontalViewDeclaration::GALGAS_astComputedHorizontalViewDeclaration (const cPtr_astComputedHorizontalViewDeclaration * inSourcePtr) :
GALGAS_astAbstractViewDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_astComputedHorizontalViewDeclaration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astComputedHorizontalViewDeclaration GALGAS_astComputedHorizontalViewDeclaration::constructor_new (const GALGAS_astAutoLayoutViewFunctionCallList & inAttribute_mFunctionCallList,
                                                                                                          const GALGAS_astViewInstructionList & inAttribute_mInstructionList
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_astComputedHorizontalViewDeclaration result ;
  if (inAttribute_mFunctionCallList.isValid () && inAttribute_mInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_astComputedHorizontalViewDeclaration (inAttribute_mFunctionCallList, inAttribute_mInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionCallList GALGAS_astComputedHorizontalViewDeclaration::getter_mFunctionCallList (UNUSED_LOCATION_ARGS) const {
  GALGAS_astAutoLayoutViewFunctionCallList result ;
  if (NULL != mObjectPtr) {
    const cPtr_astComputedHorizontalViewDeclaration * p = (const cPtr_astComputedHorizontalViewDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedHorizontalViewDeclaration) ;
    result = p->mProperty_mFunctionCallList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionCallList cPtr_astComputedHorizontalViewDeclaration::getter_mFunctionCallList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionCallList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astViewInstructionList GALGAS_astComputedHorizontalViewDeclaration::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_astViewInstructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_astComputedHorizontalViewDeclaration * p = (const cPtr_astComputedHorizontalViewDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedHorizontalViewDeclaration) ;
    result = p->mProperty_mInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astViewInstructionList cPtr_astComputedHorizontalViewDeclaration::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astComputedHorizontalViewDeclaration::setter_setMFunctionCallList (GALGAS_astAutoLayoutViewFunctionCallList inValue
                                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_astComputedHorizontalViewDeclaration * p = (cPtr_astComputedHorizontalViewDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedHorizontalViewDeclaration) ;
    p->mProperty_mFunctionCallList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_astComputedHorizontalViewDeclaration::setter_setMFunctionCallList (GALGAS_astAutoLayoutViewFunctionCallList inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mFunctionCallList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astComputedHorizontalViewDeclaration::setter_setMInstructionList (GALGAS_astViewInstructionList inValue
                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_astComputedHorizontalViewDeclaration * p = (cPtr_astComputedHorizontalViewDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedHorizontalViewDeclaration) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_astComputedHorizontalViewDeclaration::setter_setMInstructionList (GALGAS_astViewInstructionList inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mInstructionList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @astComputedHorizontalViewDeclaration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_astComputedHorizontalViewDeclaration::cPtr_astComputedHorizontalViewDeclaration (const GALGAS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                                                      const GALGAS_astViewInstructionList & in_mInstructionList
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewDeclaration (THERE),
mProperty_mFunctionCallList (in_mFunctionCallList),
mProperty_mInstructionList (in_mInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_astComputedHorizontalViewDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astComputedHorizontalViewDeclaration ;
}

void cPtr_astComputedHorizontalViewDeclaration::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@astComputedHorizontalViewDeclaration:" ;
  mProperty_mFunctionCallList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_astComputedHorizontalViewDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_astComputedHorizontalViewDeclaration (mProperty_mFunctionCallList, mProperty_mInstructionList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@astComputedHorizontalViewDeclaration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_astComputedHorizontalViewDeclaration ("astComputedHorizontalViewDeclaration",
                                                             & kTypeDescriptor_GALGAS_astAbstractViewDeclaration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astComputedHorizontalViewDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astComputedHorizontalViewDeclaration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astComputedHorizontalViewDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astComputedHorizontalViewDeclaration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astComputedHorizontalViewDeclaration GALGAS_astComputedHorizontalViewDeclaration::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_astComputedHorizontalViewDeclaration result ;
  const GALGAS_astComputedHorizontalViewDeclaration * p = (const GALGAS_astComputedHorizontalViewDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_astComputedHorizontalViewDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astComputedHorizontalViewDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_astLocalViewInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_astLocalViewInstruction * p = (const cPtr_astLocalViewInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_astLocalViewInstruction) ;
  if (kOperandEqual == result) {
    result = mProperty_mLocalView.objectCompare (p->mProperty_mLocalView) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_astLocalViewInstruction::objectCompare (const GALGAS_astLocalViewInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astLocalViewInstruction::GALGAS_astLocalViewInstruction (void) :
GALGAS_astAbstractViewInstructionDeclaration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astLocalViewInstruction GALGAS_astLocalViewInstruction::constructor_default (LOCATION_ARGS) {
  return GALGAS_astLocalViewInstruction::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                          COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astLocalViewInstruction::GALGAS_astLocalViewInstruction (const cPtr_astLocalViewInstruction * inSourcePtr) :
GALGAS_astAbstractViewInstructionDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_astLocalViewInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astLocalViewInstruction GALGAS_astLocalViewInstruction::constructor_new (const GALGAS_lstring & inAttribute_mLocalView
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_astLocalViewInstruction result ;
  if (inAttribute_mLocalView.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_astLocalViewInstruction (inAttribute_mLocalView COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_astLocalViewInstruction::getter_mLocalView (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_astLocalViewInstruction * p = (const cPtr_astLocalViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astLocalViewInstruction) ;
    result = p->mProperty_mLocalView ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_astLocalViewInstruction::getter_mLocalView (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLocalView ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astLocalViewInstruction::setter_setMLocalView (GALGAS_lstring inValue
                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_astLocalViewInstruction * p = (cPtr_astLocalViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astLocalViewInstruction) ;
    p->mProperty_mLocalView = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_astLocalViewInstruction::setter_setMLocalView (GALGAS_lstring inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLocalView = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @astLocalViewInstruction class
//----------------------------------------------------------------------------------------------------------------------

cPtr_astLocalViewInstruction::cPtr_astLocalViewInstruction (const GALGAS_lstring & in_mLocalView
                                                            COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewInstructionDeclaration (THERE),
mProperty_mLocalView (in_mLocalView) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_astLocalViewInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astLocalViewInstruction ;
}

void cPtr_astLocalViewInstruction::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@astLocalViewInstruction:" ;
  mProperty_mLocalView.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_astLocalViewInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_astLocalViewInstruction (mProperty_mLocalView COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@astLocalViewInstruction type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_astLocalViewInstruction ("astLocalViewInstruction",
                                                & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astLocalViewInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astLocalViewInstruction ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astLocalViewInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astLocalViewInstruction (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astLocalViewInstruction GALGAS_astLocalViewInstruction::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_astLocalViewInstruction result ;
  const GALGAS_astLocalViewInstruction * p = (const GALGAS_astLocalViewInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_astLocalViewInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astLocalViewInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_astComputedViewInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_astComputedViewInstruction * p = (const cPtr_astComputedViewInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
  if (kOperandEqual == result) {
    result = mProperty_mAutoLayoutViewClassName.objectCompare (p->mProperty_mAutoLayoutViewClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mParameterList.objectCompare (p->mProperty_mParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFunctionCallList.objectCompare (p->mProperty_mFunctionCallList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTableValueBinding.objectCompare (p->mProperty_mTableValueBinding) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRunActionDescriptor.objectCompare (p->mProperty_mRunActionDescriptor) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEnabledBindingDescriptor.objectCompare (p->mProperty_mEnabledBindingDescriptor) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHiddenBindingDescriptor.objectCompare (p->mProperty_mHiddenBindingDescriptor) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGraphicController.objectCompare (p->mProperty_mGraphicController) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegularBindingList.objectCompare (p->mProperty_mRegularBindingList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_astComputedViewInstruction::objectCompare (const GALGAS_astComputedViewInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astComputedViewInstruction::GALGAS_astComputedViewInstruction (void) :
GALGAS_astAbstractViewInstructionDeclaration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astComputedViewInstruction::GALGAS_astComputedViewInstruction (const cPtr_astComputedViewInstruction * inSourcePtr) :
GALGAS_astAbstractViewInstructionDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_astComputedViewInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astComputedViewInstruction GALGAS_astComputedViewInstruction::constructor_new (const GALGAS_lstring & inAttribute_mAutoLayoutViewClassName,
                                                                                      const GALGAS_astAutoLayoutViewInstructionParameterList & inAttribute_mParameterList,
                                                                                      const GALGAS_astAutoLayoutViewFunctionCallList & inAttribute_mFunctionCallList,
                                                                                      const GALGAS_tableValueBinding & inAttribute_mTableValueBinding,
                                                                                      const GALGAS_runActionDescriptor & inAttribute_mRunActionDescriptor,
                                                                                      const GALGAS_multipleBindingDescriptor & inAttribute_mEnabledBindingDescriptor,
                                                                                      const GALGAS_multipleBindingDescriptor & inAttribute_mHiddenBindingDescriptor,
                                                                                      const GALGAS_graphicController & inAttribute_mGraphicController,
                                                                                      const GALGAS_regularBindingList & inAttribute_mRegularBindingList
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_astComputedViewInstruction result ;
  if (inAttribute_mAutoLayoutViewClassName.isValid () && inAttribute_mParameterList.isValid () && inAttribute_mFunctionCallList.isValid () && inAttribute_mTableValueBinding.isValid () && inAttribute_mRunActionDescriptor.isValid () && inAttribute_mEnabledBindingDescriptor.isValid () && inAttribute_mHiddenBindingDescriptor.isValid () && inAttribute_mGraphicController.isValid () && inAttribute_mRegularBindingList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_astComputedViewInstruction (inAttribute_mAutoLayoutViewClassName, inAttribute_mParameterList, inAttribute_mFunctionCallList, inAttribute_mTableValueBinding, inAttribute_mRunActionDescriptor, inAttribute_mEnabledBindingDescriptor, inAttribute_mHiddenBindingDescriptor, inAttribute_mGraphicController, inAttribute_mRegularBindingList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_astComputedViewInstruction::getter_mAutoLayoutViewClassName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_astComputedViewInstruction * p = (const cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    result = p->mProperty_mAutoLayoutViewClassName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_astComputedViewInstruction::getter_mAutoLayoutViewClassName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAutoLayoutViewClassName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterList GALGAS_astComputedViewInstruction::getter_mParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_astAutoLayoutViewInstructionParameterList result ;
  if (NULL != mObjectPtr) {
    const cPtr_astComputedViewInstruction * p = (const cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    result = p->mProperty_mParameterList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterList cPtr_astComputedViewInstruction::getter_mParameterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mParameterList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionCallList GALGAS_astComputedViewInstruction::getter_mFunctionCallList (UNUSED_LOCATION_ARGS) const {
  GALGAS_astAutoLayoutViewFunctionCallList result ;
  if (NULL != mObjectPtr) {
    const cPtr_astComputedViewInstruction * p = (const cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    result = p->mProperty_mFunctionCallList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionCallList cPtr_astComputedViewInstruction::getter_mFunctionCallList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionCallList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableValueBinding GALGAS_astComputedViewInstruction::getter_mTableValueBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_tableValueBinding result ;
  if (NULL != mObjectPtr) {
    const cPtr_astComputedViewInstruction * p = (const cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    result = p->mProperty_mTableValueBinding ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableValueBinding cPtr_astComputedViewInstruction::getter_mTableValueBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTableValueBinding ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_runActionDescriptor GALGAS_astComputedViewInstruction::getter_mRunActionDescriptor (UNUSED_LOCATION_ARGS) const {
  GALGAS_runActionDescriptor result ;
  if (NULL != mObjectPtr) {
    const cPtr_astComputedViewInstruction * p = (const cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    result = p->mProperty_mRunActionDescriptor ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_runActionDescriptor cPtr_astComputedViewInstruction::getter_mRunActionDescriptor (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRunActionDescriptor ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingDescriptor GALGAS_astComputedViewInstruction::getter_mEnabledBindingDescriptor (UNUSED_LOCATION_ARGS) const {
  GALGAS_multipleBindingDescriptor result ;
  if (NULL != mObjectPtr) {
    const cPtr_astComputedViewInstruction * p = (const cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    result = p->mProperty_mEnabledBindingDescriptor ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingDescriptor cPtr_astComputedViewInstruction::getter_mEnabledBindingDescriptor (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnabledBindingDescriptor ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingDescriptor GALGAS_astComputedViewInstruction::getter_mHiddenBindingDescriptor (UNUSED_LOCATION_ARGS) const {
  GALGAS_multipleBindingDescriptor result ;
  if (NULL != mObjectPtr) {
    const cPtr_astComputedViewInstruction * p = (const cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    result = p->mProperty_mHiddenBindingDescriptor ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingDescriptor cPtr_astComputedViewInstruction::getter_mHiddenBindingDescriptor (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHiddenBindingDescriptor ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphicController GALGAS_astComputedViewInstruction::getter_mGraphicController (UNUSED_LOCATION_ARGS) const {
  GALGAS_graphicController result ;
  if (NULL != mObjectPtr) {
    const cPtr_astComputedViewInstruction * p = (const cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    result = p->mProperty_mGraphicController ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphicController cPtr_astComputedViewInstruction::getter_mGraphicController (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGraphicController ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularBindingList GALGAS_astComputedViewInstruction::getter_mRegularBindingList (UNUSED_LOCATION_ARGS) const {
  GALGAS_regularBindingList result ;
  if (NULL != mObjectPtr) {
    const cPtr_astComputedViewInstruction * p = (const cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    result = p->mProperty_mRegularBindingList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularBindingList cPtr_astComputedViewInstruction::getter_mRegularBindingList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegularBindingList ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astComputedViewInstruction::setter_setMAutoLayoutViewClassName (GALGAS_lstring inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    p->mProperty_mAutoLayoutViewClassName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_astComputedViewInstruction::setter_setMAutoLayoutViewClassName (GALGAS_lstring inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mAutoLayoutViewClassName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astComputedViewInstruction::setter_setMParameterList (GALGAS_astAutoLayoutViewInstructionParameterList inValue
                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    p->mProperty_mParameterList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_astComputedViewInstruction::setter_setMParameterList (GALGAS_astAutoLayoutViewInstructionParameterList inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mParameterList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astComputedViewInstruction::setter_setMFunctionCallList (GALGAS_astAutoLayoutViewFunctionCallList inValue
                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    p->mProperty_mFunctionCallList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_astComputedViewInstruction::setter_setMFunctionCallList (GALGAS_astAutoLayoutViewFunctionCallList inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mFunctionCallList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astComputedViewInstruction::setter_setMTableValueBinding (GALGAS_tableValueBinding inValue
                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    p->mProperty_mTableValueBinding = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_astComputedViewInstruction::setter_setMTableValueBinding (GALGAS_tableValueBinding inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTableValueBinding = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astComputedViewInstruction::setter_setMRunActionDescriptor (GALGAS_runActionDescriptor inValue
                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    p->mProperty_mRunActionDescriptor = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_astComputedViewInstruction::setter_setMRunActionDescriptor (GALGAS_runActionDescriptor inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRunActionDescriptor = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astComputedViewInstruction::setter_setMEnabledBindingDescriptor (GALGAS_multipleBindingDescriptor inValue
                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    p->mProperty_mEnabledBindingDescriptor = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_astComputedViewInstruction::setter_setMEnabledBindingDescriptor (GALGAS_multipleBindingDescriptor inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEnabledBindingDescriptor = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astComputedViewInstruction::setter_setMHiddenBindingDescriptor (GALGAS_multipleBindingDescriptor inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    p->mProperty_mHiddenBindingDescriptor = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_astComputedViewInstruction::setter_setMHiddenBindingDescriptor (GALGAS_multipleBindingDescriptor inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mHiddenBindingDescriptor = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astComputedViewInstruction::setter_setMGraphicController (GALGAS_graphicController inValue
                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    p->mProperty_mGraphicController = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_astComputedViewInstruction::setter_setMGraphicController (GALGAS_graphicController inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mGraphicController = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astComputedViewInstruction::setter_setMRegularBindingList (GALGAS_regularBindingList inValue
                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    p->mProperty_mRegularBindingList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_astComputedViewInstruction::setter_setMRegularBindingList (GALGAS_regularBindingList inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRegularBindingList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @astComputedViewInstruction class
//----------------------------------------------------------------------------------------------------------------------

cPtr_astComputedViewInstruction::cPtr_astComputedViewInstruction (const GALGAS_lstring & in_mAutoLayoutViewClassName,
                                                                  const GALGAS_astAutoLayoutViewInstructionParameterList & in_mParameterList,
                                                                  const GALGAS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                                  const GALGAS_tableValueBinding & in_mTableValueBinding,
                                                                  const GALGAS_runActionDescriptor & in_mRunActionDescriptor,
                                                                  const GALGAS_multipleBindingDescriptor & in_mEnabledBindingDescriptor,
                                                                  const GALGAS_multipleBindingDescriptor & in_mHiddenBindingDescriptor,
                                                                  const GALGAS_graphicController & in_mGraphicController,
                                                                  const GALGAS_regularBindingList & in_mRegularBindingList
                                                                  COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewInstructionDeclaration (THERE),
mProperty_mAutoLayoutViewClassName (in_mAutoLayoutViewClassName),
mProperty_mParameterList (in_mParameterList),
mProperty_mFunctionCallList (in_mFunctionCallList),
mProperty_mTableValueBinding (in_mTableValueBinding),
mProperty_mRunActionDescriptor (in_mRunActionDescriptor),
mProperty_mEnabledBindingDescriptor (in_mEnabledBindingDescriptor),
mProperty_mHiddenBindingDescriptor (in_mHiddenBindingDescriptor),
mProperty_mGraphicController (in_mGraphicController),
mProperty_mRegularBindingList (in_mRegularBindingList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_astComputedViewInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astComputedViewInstruction ;
}

void cPtr_astComputedViewInstruction::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@astComputedViewInstruction:" ;
  mProperty_mAutoLayoutViewClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFunctionCallList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTableValueBinding.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRunActionDescriptor.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEnabledBindingDescriptor.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mHiddenBindingDescriptor.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGraphicController.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegularBindingList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_astComputedViewInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_astComputedViewInstruction (mProperty_mAutoLayoutViewClassName, mProperty_mParameterList, mProperty_mFunctionCallList, mProperty_mTableValueBinding, mProperty_mRunActionDescriptor, mProperty_mEnabledBindingDescriptor, mProperty_mHiddenBindingDescriptor, mProperty_mGraphicController, mProperty_mRegularBindingList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@astComputedViewInstruction type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_astComputedViewInstruction ("astComputedViewInstruction",
                                                   & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astComputedViewInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astComputedViewInstruction ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astComputedViewInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astComputedViewInstruction (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astComputedViewInstruction GALGAS_astComputedViewInstruction::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_astComputedViewInstruction result ;
  const GALGAS_astComputedViewInstruction * p = (const GALGAS_astComputedViewInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_astComputedViewInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astComputedViewInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_newHorizontalStackViewGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_newHorizontalStackViewGeneration * p = (const cPtr_newHorizontalStackViewGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_newHorizontalStackViewGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mFuncCallList.objectCompare (p->mProperty_mFuncCallList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_newHorizontalStackViewGeneration::objectCompare (const GALGAS_newHorizontalStackViewGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_newHorizontalStackViewGeneration::GALGAS_newHorizontalStackViewGeneration (void) :
GALGAS_abstractViewGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_newHorizontalStackViewGeneration GALGAS_newHorizontalStackViewGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_newHorizontalStackViewGeneration::constructor_new (GALGAS_autoLayoutViewInstructionGenerationFuncCallList::constructor_emptyList (HERE)
                                                                   COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_newHorizontalStackViewGeneration::GALGAS_newHorizontalStackViewGeneration (const cPtr_newHorizontalStackViewGeneration * inSourcePtr) :
GALGAS_abstractViewGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_newHorizontalStackViewGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_newHorizontalStackViewGeneration GALGAS_newHorizontalStackViewGeneration::constructor_new (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & inAttribute_mFuncCallList
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_newHorizontalStackViewGeneration result ;
  if (inAttribute_mFuncCallList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_newHorizontalStackViewGeneration (inAttribute_mFuncCallList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationFuncCallList GALGAS_newHorizontalStackViewGeneration::getter_mFuncCallList (UNUSED_LOCATION_ARGS) const {
  GALGAS_autoLayoutViewInstructionGenerationFuncCallList result ;
  if (NULL != mObjectPtr) {
    const cPtr_newHorizontalStackViewGeneration * p = (const cPtr_newHorizontalStackViewGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_newHorizontalStackViewGeneration) ;
    result = p->mProperty_mFuncCallList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationFuncCallList cPtr_newHorizontalStackViewGeneration::getter_mFuncCallList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFuncCallList ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_newHorizontalStackViewGeneration::setter_setMFuncCallList (GALGAS_autoLayoutViewInstructionGenerationFuncCallList inValue
                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_newHorizontalStackViewGeneration * p = (cPtr_newHorizontalStackViewGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_newHorizontalStackViewGeneration) ;
    p->mProperty_mFuncCallList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_newHorizontalStackViewGeneration::setter_setMFuncCallList (GALGAS_autoLayoutViewInstructionGenerationFuncCallList inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mFuncCallList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @newHorizontalStackViewGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_newHorizontalStackViewGeneration::cPtr_newHorizontalStackViewGeneration (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList
                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractViewGeneration (THERE),
mProperty_mFuncCallList (in_mFuncCallList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_newHorizontalStackViewGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_newHorizontalStackViewGeneration ;
}

void cPtr_newHorizontalStackViewGeneration::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@newHorizontalStackViewGeneration:" ;
  mProperty_mFuncCallList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_newHorizontalStackViewGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_newHorizontalStackViewGeneration (mProperty_mFuncCallList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@newHorizontalStackViewGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_newHorizontalStackViewGeneration ("newHorizontalStackViewGeneration",
                                                         & kTypeDescriptor_GALGAS_abstractViewGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_newHorizontalStackViewGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_newHorizontalStackViewGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_newHorizontalStackViewGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_newHorizontalStackViewGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_newHorizontalStackViewGeneration GALGAS_newHorizontalStackViewGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_newHorizontalStackViewGeneration result ;
  const GALGAS_newHorizontalStackViewGeneration * p = (const GALGAS_newHorizontalStackViewGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_newHorizontalStackViewGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("newHorizontalStackViewGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_computedHorizontalViewGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_computedHorizontalViewGeneration * p = (const cPtr_computedHorizontalViewGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_computedHorizontalViewGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mFuncCallList.objectCompare (p->mProperty_mFuncCallList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_computedHorizontalViewGeneration::objectCompare (const GALGAS_computedHorizontalViewGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedHorizontalViewGeneration::GALGAS_computedHorizontalViewGeneration (void) :
GALGAS_abstractViewGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedHorizontalViewGeneration GALGAS_computedHorizontalViewGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_computedHorizontalViewGeneration::constructor_new (GALGAS_autoLayoutViewInstructionGenerationFuncCallList::constructor_emptyList (HERE),
                                                                   GALGAS_autoLayoutViewInstructionGenerationList::constructor_emptyList (HERE)
                                                                   COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedHorizontalViewGeneration::GALGAS_computedHorizontalViewGeneration (const cPtr_computedHorizontalViewGeneration * inSourcePtr) :
GALGAS_abstractViewGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_computedHorizontalViewGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedHorizontalViewGeneration GALGAS_computedHorizontalViewGeneration::constructor_new (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & inAttribute_mFuncCallList,
                                                                                                  const GALGAS_autoLayoutViewInstructionGenerationList & inAttribute_mInstructionList
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_computedHorizontalViewGeneration result ;
  if (inAttribute_mFuncCallList.isValid () && inAttribute_mInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_computedHorizontalViewGeneration (inAttribute_mFuncCallList, inAttribute_mInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationFuncCallList GALGAS_computedHorizontalViewGeneration::getter_mFuncCallList (UNUSED_LOCATION_ARGS) const {
  GALGAS_autoLayoutViewInstructionGenerationFuncCallList result ;
  if (NULL != mObjectPtr) {
    const cPtr_computedHorizontalViewGeneration * p = (const cPtr_computedHorizontalViewGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedHorizontalViewGeneration) ;
    result = p->mProperty_mFuncCallList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationFuncCallList cPtr_computedHorizontalViewGeneration::getter_mFuncCallList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFuncCallList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationList GALGAS_computedHorizontalViewGeneration::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_autoLayoutViewInstructionGenerationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_computedHorizontalViewGeneration * p = (const cPtr_computedHorizontalViewGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedHorizontalViewGeneration) ;
    result = p->mProperty_mInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationList cPtr_computedHorizontalViewGeneration::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_computedHorizontalViewGeneration::setter_setMFuncCallList (GALGAS_autoLayoutViewInstructionGenerationFuncCallList inValue
                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_computedHorizontalViewGeneration * p = (cPtr_computedHorizontalViewGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedHorizontalViewGeneration) ;
    p->mProperty_mFuncCallList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_computedHorizontalViewGeneration::setter_setMFuncCallList (GALGAS_autoLayoutViewInstructionGenerationFuncCallList inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mFuncCallList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_computedHorizontalViewGeneration::setter_setMInstructionList (GALGAS_autoLayoutViewInstructionGenerationList inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_computedHorizontalViewGeneration * p = (cPtr_computedHorizontalViewGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedHorizontalViewGeneration) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_computedHorizontalViewGeneration::setter_setMInstructionList (GALGAS_autoLayoutViewInstructionGenerationList inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mInstructionList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @computedHorizontalViewGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_computedHorizontalViewGeneration::cPtr_computedHorizontalViewGeneration (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                                                                              const GALGAS_autoLayoutViewInstructionGenerationList & in_mInstructionList
                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractViewGeneration (THERE),
mProperty_mFuncCallList (in_mFuncCallList),
mProperty_mInstructionList (in_mInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_computedHorizontalViewGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedHorizontalViewGeneration ;
}

void cPtr_computedHorizontalViewGeneration::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@computedHorizontalViewGeneration:" ;
  mProperty_mFuncCallList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_computedHorizontalViewGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_computedHorizontalViewGeneration (mProperty_mFuncCallList, mProperty_mInstructionList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@computedHorizontalViewGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_computedHorizontalViewGeneration ("computedHorizontalViewGeneration",
                                                         & kTypeDescriptor_GALGAS_abstractViewGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_computedHorizontalViewGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedHorizontalViewGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_computedHorizontalViewGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_computedHorizontalViewGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedHorizontalViewGeneration GALGAS_computedHorizontalViewGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_computedHorizontalViewGeneration result ;
  const GALGAS_computedHorizontalViewGeneration * p = (const GALGAS_computedHorizontalViewGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_computedHorizontalViewGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computedHorizontalViewGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_autoLayoutComputedViewInstructionGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_autoLayoutComputedViewInstructionGeneration * p = (const cPtr_autoLayoutComputedViewInstructionGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mAutoLayoutViewClassName.objectCompare (p->mProperty_mAutoLayoutViewClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mParameterList.objectCompare (p->mProperty_mParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFunctionCallList.objectCompare (p->mProperty_mFunctionCallList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegularBindingsGenerationList.objectCompare (p->mProperty_mRegularBindingsGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMultipleBindingGenerationList.objectCompare (p->mProperty_mMultipleBindingGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetActionList.objectCompare (p->mProperty_mTargetActionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTableViewBindingGenerationList.objectCompare (p->mProperty_mTableViewBindingGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEBViewGraphicControllerBindingGenerationList.objectCompare (p->mProperty_mEBViewGraphicControllerBindingGenerationList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_autoLayoutComputedViewInstructionGeneration::objectCompare (const GALGAS_autoLayoutComputedViewInstructionGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutComputedViewInstructionGeneration::GALGAS_autoLayoutComputedViewInstructionGeneration (void) :
GALGAS_abstractViewInstructionGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutComputedViewInstructionGeneration GALGAS_autoLayoutComputedViewInstructionGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_autoLayoutComputedViewInstructionGeneration::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                              GALGAS_autoLayoutViewInstructionGenerationParameterList::constructor_emptyList (HERE),
                                                                              GALGAS_autoLayoutViewInstructionGenerationFuncCallList::constructor_emptyList (HERE),
                                                                              GALGAS_autoLayoutRegularBindingsGenerationList::constructor_emptyList (HERE),
                                                                              GALGAS_multipleBindingGenerationList::constructor_emptyList (HERE),
                                                                              GALGAS_actionBindingListForGeneration::constructor_emptyList (HERE),
                                                                              GALGAS_tableViewBindingGenerationList::constructor_emptyList (HERE),
                                                                              GALGAS_ebViewGraphicControllerBindingGenerationList::constructor_emptyList (HERE)
                                                                              COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutComputedViewInstructionGeneration::GALGAS_autoLayoutComputedViewInstructionGeneration (const cPtr_autoLayoutComputedViewInstructionGeneration * inSourcePtr) :
GALGAS_abstractViewInstructionGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_autoLayoutComputedViewInstructionGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutComputedViewInstructionGeneration GALGAS_autoLayoutComputedViewInstructionGeneration::constructor_new (const GALGAS_lstring & inAttribute_mAutoLayoutViewClassName,
                                                                                                                        const GALGAS_autoLayoutViewInstructionGenerationParameterList & inAttribute_mParameterList,
                                                                                                                        const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & inAttribute_mFunctionCallList,
                                                                                                                        const GALGAS_autoLayoutRegularBindingsGenerationList & inAttribute_mRegularBindingsGenerationList,
                                                                                                                        const GALGAS_multipleBindingGenerationList & inAttribute_mMultipleBindingGenerationList,
                                                                                                                        const GALGAS_actionBindingListForGeneration & inAttribute_mTargetActionList,
                                                                                                                        const GALGAS_tableViewBindingGenerationList & inAttribute_mTableViewBindingGenerationList,
                                                                                                                        const GALGAS_ebViewGraphicControllerBindingGenerationList & inAttribute_mEBViewGraphicControllerBindingGenerationList
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutComputedViewInstructionGeneration result ;
  if (inAttribute_mAutoLayoutViewClassName.isValid () && inAttribute_mParameterList.isValid () && inAttribute_mFunctionCallList.isValid () && inAttribute_mRegularBindingsGenerationList.isValid () && inAttribute_mMultipleBindingGenerationList.isValid () && inAttribute_mTargetActionList.isValid () && inAttribute_mTableViewBindingGenerationList.isValid () && inAttribute_mEBViewGraphicControllerBindingGenerationList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_autoLayoutComputedViewInstructionGeneration (inAttribute_mAutoLayoutViewClassName, inAttribute_mParameterList, inAttribute_mFunctionCallList, inAttribute_mRegularBindingsGenerationList, inAttribute_mMultipleBindingGenerationList, inAttribute_mTargetActionList, inAttribute_mTableViewBindingGenerationList, inAttribute_mEBViewGraphicControllerBindingGenerationList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_autoLayoutComputedViewInstructionGeneration::getter_mAutoLayoutViewClassName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_autoLayoutComputedViewInstructionGeneration * p = (const cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    result = p->mProperty_mAutoLayoutViewClassName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_autoLayoutComputedViewInstructionGeneration::getter_mAutoLayoutViewClassName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAutoLayoutViewClassName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationParameterList GALGAS_autoLayoutComputedViewInstructionGeneration::getter_mParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_autoLayoutViewInstructionGenerationParameterList result ;
  if (NULL != mObjectPtr) {
    const cPtr_autoLayoutComputedViewInstructionGeneration * p = (const cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    result = p->mProperty_mParameterList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationParameterList cPtr_autoLayoutComputedViewInstructionGeneration::getter_mParameterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mParameterList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationFuncCallList GALGAS_autoLayoutComputedViewInstructionGeneration::getter_mFunctionCallList (UNUSED_LOCATION_ARGS) const {
  GALGAS_autoLayoutViewInstructionGenerationFuncCallList result ;
  if (NULL != mObjectPtr) {
    const cPtr_autoLayoutComputedViewInstructionGeneration * p = (const cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    result = p->mProperty_mFunctionCallList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationFuncCallList cPtr_autoLayoutComputedViewInstructionGeneration::getter_mFunctionCallList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionCallList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutRegularBindingsGenerationList GALGAS_autoLayoutComputedViewInstructionGeneration::getter_mRegularBindingsGenerationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_autoLayoutRegularBindingsGenerationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_autoLayoutComputedViewInstructionGeneration * p = (const cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    result = p->mProperty_mRegularBindingsGenerationList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutRegularBindingsGenerationList cPtr_autoLayoutComputedViewInstructionGeneration::getter_mRegularBindingsGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegularBindingsGenerationList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingGenerationList GALGAS_autoLayoutComputedViewInstructionGeneration::getter_mMultipleBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_multipleBindingGenerationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_autoLayoutComputedViewInstructionGeneration * p = (const cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    result = p->mProperty_mMultipleBindingGenerationList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingGenerationList cPtr_autoLayoutComputedViewInstructionGeneration::getter_mMultipleBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMultipleBindingGenerationList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionBindingListForGeneration GALGAS_autoLayoutComputedViewInstructionGeneration::getter_mTargetActionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_actionBindingListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_autoLayoutComputedViewInstructionGeneration * p = (const cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    result = p->mProperty_mTargetActionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionBindingListForGeneration cPtr_autoLayoutComputedViewInstructionGeneration::getter_mTargetActionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetActionList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewBindingGenerationList GALGAS_autoLayoutComputedViewInstructionGeneration::getter_mTableViewBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_tableViewBindingGenerationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_autoLayoutComputedViewInstructionGeneration * p = (const cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    result = p->mProperty_mTableViewBindingGenerationList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewBindingGenerationList cPtr_autoLayoutComputedViewInstructionGeneration::getter_mTableViewBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTableViewBindingGenerationList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ebViewGraphicControllerBindingGenerationList GALGAS_autoLayoutComputedViewInstructionGeneration::getter_mEBViewGraphicControllerBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_ebViewGraphicControllerBindingGenerationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_autoLayoutComputedViewInstructionGeneration * p = (const cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    result = p->mProperty_mEBViewGraphicControllerBindingGenerationList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ebViewGraphicControllerBindingGenerationList cPtr_autoLayoutComputedViewInstructionGeneration::getter_mEBViewGraphicControllerBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEBViewGraphicControllerBindingGenerationList ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutComputedViewInstructionGeneration::setter_setMAutoLayoutViewClassName (GALGAS_lstring inValue
                                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    p->mProperty_mAutoLayoutViewClassName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_autoLayoutComputedViewInstructionGeneration::setter_setMAutoLayoutViewClassName (GALGAS_lstring inValue
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mAutoLayoutViewClassName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutComputedViewInstructionGeneration::setter_setMParameterList (GALGAS_autoLayoutViewInstructionGenerationParameterList inValue
                                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    p->mProperty_mParameterList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_autoLayoutComputedViewInstructionGeneration::setter_setMParameterList (GALGAS_autoLayoutViewInstructionGenerationParameterList inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mParameterList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutComputedViewInstructionGeneration::setter_setMFunctionCallList (GALGAS_autoLayoutViewInstructionGenerationFuncCallList inValue
                                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    p->mProperty_mFunctionCallList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_autoLayoutComputedViewInstructionGeneration::setter_setMFunctionCallList (GALGAS_autoLayoutViewInstructionGenerationFuncCallList inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mFunctionCallList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutComputedViewInstructionGeneration::setter_setMRegularBindingsGenerationList (GALGAS_autoLayoutRegularBindingsGenerationList inValue
                                                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    p->mProperty_mRegularBindingsGenerationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_autoLayoutComputedViewInstructionGeneration::setter_setMRegularBindingsGenerationList (GALGAS_autoLayoutRegularBindingsGenerationList inValue
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRegularBindingsGenerationList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutComputedViewInstructionGeneration::setter_setMMultipleBindingGenerationList (GALGAS_multipleBindingGenerationList inValue
                                                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    p->mProperty_mMultipleBindingGenerationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_autoLayoutComputedViewInstructionGeneration::setter_setMMultipleBindingGenerationList (GALGAS_multipleBindingGenerationList inValue
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mMultipleBindingGenerationList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutComputedViewInstructionGeneration::setter_setMTargetActionList (GALGAS_actionBindingListForGeneration inValue
                                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    p->mProperty_mTargetActionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_autoLayoutComputedViewInstructionGeneration::setter_setMTargetActionList (GALGAS_actionBindingListForGeneration inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTargetActionList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutComputedViewInstructionGeneration::setter_setMTableViewBindingGenerationList (GALGAS_tableViewBindingGenerationList inValue
                                                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    p->mProperty_mTableViewBindingGenerationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_autoLayoutComputedViewInstructionGeneration::setter_setMTableViewBindingGenerationList (GALGAS_tableViewBindingGenerationList inValue
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTableViewBindingGenerationList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutComputedViewInstructionGeneration::setter_setMEBViewGraphicControllerBindingGenerationList (GALGAS_ebViewGraphicControllerBindingGenerationList inValue
                                                                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    p->mProperty_mEBViewGraphicControllerBindingGenerationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_autoLayoutComputedViewInstructionGeneration::setter_setMEBViewGraphicControllerBindingGenerationList (GALGAS_ebViewGraphicControllerBindingGenerationList inValue
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEBViewGraphicControllerBindingGenerationList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @autoLayoutComputedViewInstructionGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_autoLayoutComputedViewInstructionGeneration::cPtr_autoLayoutComputedViewInstructionGeneration (const GALGAS_lstring & in_mAutoLayoutViewClassName,
                                                                                                    const GALGAS_autoLayoutViewInstructionGenerationParameterList & in_mParameterList,
                                                                                                    const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & in_mFunctionCallList,
                                                                                                    const GALGAS_autoLayoutRegularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                                                                                    const GALGAS_multipleBindingGenerationList & in_mMultipleBindingGenerationList,
                                                                                                    const GALGAS_actionBindingListForGeneration & in_mTargetActionList,
                                                                                                    const GALGAS_tableViewBindingGenerationList & in_mTableViewBindingGenerationList,
                                                                                                    const GALGAS_ebViewGraphicControllerBindingGenerationList & in_mEBViewGraphicControllerBindingGenerationList
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractViewInstructionGeneration (THERE),
mProperty_mAutoLayoutViewClassName (in_mAutoLayoutViewClassName),
mProperty_mParameterList (in_mParameterList),
mProperty_mFunctionCallList (in_mFunctionCallList),
mProperty_mRegularBindingsGenerationList (in_mRegularBindingsGenerationList),
mProperty_mMultipleBindingGenerationList (in_mMultipleBindingGenerationList),
mProperty_mTargetActionList (in_mTargetActionList),
mProperty_mTableViewBindingGenerationList (in_mTableViewBindingGenerationList),
mProperty_mEBViewGraphicControllerBindingGenerationList (in_mEBViewGraphicControllerBindingGenerationList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_autoLayoutComputedViewInstructionGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutComputedViewInstructionGeneration ;
}

void cPtr_autoLayoutComputedViewInstructionGeneration::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "[@autoLayoutComputedViewInstructionGeneration:" ;
  mProperty_mAutoLayoutViewClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFunctionCallList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegularBindingsGenerationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMultipleBindingGenerationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetActionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTableViewBindingGenerationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEBViewGraphicControllerBindingGenerationList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_autoLayoutComputedViewInstructionGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_autoLayoutComputedViewInstructionGeneration (mProperty_mAutoLayoutViewClassName, mProperty_mParameterList, mProperty_mFunctionCallList, mProperty_mRegularBindingsGenerationList, mProperty_mMultipleBindingGenerationList, mProperty_mTargetActionList, mProperty_mTableViewBindingGenerationList, mProperty_mEBViewGraphicControllerBindingGenerationList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutComputedViewInstructionGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutComputedViewInstructionGeneration ("autoLayoutComputedViewInstructionGeneration",
                                                                    & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutComputedViewInstructionGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutComputedViewInstructionGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutComputedViewInstructionGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutComputedViewInstructionGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutComputedViewInstructionGeneration GALGAS_autoLayoutComputedViewInstructionGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutComputedViewInstructionGeneration result ;
  const GALGAS_autoLayoutComputedViewInstructionGeneration * p = (const GALGAS_autoLayoutComputedViewInstructionGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutComputedViewInstructionGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutComputedViewInstructionGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_outletClassDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_outletClassDeclarationAST * p = (const cPtr_outletClassDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUserDefined.objectCompare (p->mProperty_mUserDefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSuperClassName.objectCompare (p->mProperty_mSuperClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHasRunAction.objectCompare (p->mProperty_mHasRunAction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHasEnabled.objectCompare (p->mProperty_mHasEnabled) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHandlesTableValueBinding.objectCompare (p->mProperty_mHandlesTableValueBinding) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHandlesGraphicControllerBinding.objectCompare (p->mProperty_mHandlesGraphicControllerBinding) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHasHidden.objectCompare (p->mProperty_mHasHidden) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_outletClassDeclarationAST::objectCompare (const GALGAS_outletClassDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletClassDeclarationAST::GALGAS_outletClassDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletClassDeclarationAST GALGAS_outletClassDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_outletClassDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                            GALGAS_bool::constructor_default (HERE),
                                                            GALGAS_lstring::constructor_default (HERE),
                                                            GALGAS_bool::constructor_default (HERE),
                                                            GALGAS_bool::constructor_default (HERE),
                                                            GALGAS_bool::constructor_default (HERE),
                                                            GALGAS_bool::constructor_default (HERE),
                                                            GALGAS_bool::constructor_default (HERE)
                                                            COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletClassDeclarationAST::GALGAS_outletClassDeclarationAST (const cPtr_outletClassDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_outletClassDeclarationAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletClassDeclarationAST GALGAS_outletClassDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                                    const GALGAS_bool & inAttribute_mUserDefined,
                                                                                    const GALGAS_lstring & inAttribute_mSuperClassName,
                                                                                    const GALGAS_bool & inAttribute_mHasRunAction,
                                                                                    const GALGAS_bool & inAttribute_mHasEnabled,
                                                                                    const GALGAS_bool & inAttribute_mHandlesTableValueBinding,
                                                                                    const GALGAS_bool & inAttribute_mHandlesGraphicControllerBinding,
                                                                                    const GALGAS_bool & inAttribute_mHasHidden
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_outletClassDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mUserDefined.isValid () && inAttribute_mSuperClassName.isValid () && inAttribute_mHasRunAction.isValid () && inAttribute_mHasEnabled.isValid () && inAttribute_mHandlesTableValueBinding.isValid () && inAttribute_mHandlesGraphicControllerBinding.isValid () && inAttribute_mHasHidden.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_outletClassDeclarationAST (inAttribute_mClassName, inAttribute_mUserDefined, inAttribute_mSuperClassName, inAttribute_mHasRunAction, inAttribute_mHasEnabled, inAttribute_mHandlesTableValueBinding, inAttribute_mHandlesGraphicControllerBinding, inAttribute_mHasHidden COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_outletClassDeclarationAST::getter_mUserDefined (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_outletClassDeclarationAST * p = (const cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    result = p->mProperty_mUserDefined ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_outletClassDeclarationAST::getter_mUserDefined (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUserDefined ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_outletClassDeclarationAST::getter_mSuperClassName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_outletClassDeclarationAST * p = (const cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    result = p->mProperty_mSuperClassName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_outletClassDeclarationAST::getter_mSuperClassName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSuperClassName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_outletClassDeclarationAST::getter_mHasRunAction (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_outletClassDeclarationAST * p = (const cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    result = p->mProperty_mHasRunAction ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_outletClassDeclarationAST::getter_mHasRunAction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHasRunAction ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_outletClassDeclarationAST::getter_mHasEnabled (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_outletClassDeclarationAST * p = (const cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    result = p->mProperty_mHasEnabled ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_outletClassDeclarationAST::getter_mHasEnabled (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHasEnabled ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_outletClassDeclarationAST::getter_mHandlesTableValueBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_outletClassDeclarationAST * p = (const cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    result = p->mProperty_mHandlesTableValueBinding ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_outletClassDeclarationAST::getter_mHandlesTableValueBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHandlesTableValueBinding ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_outletClassDeclarationAST::getter_mHandlesGraphicControllerBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_outletClassDeclarationAST * p = (const cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    result = p->mProperty_mHandlesGraphicControllerBinding ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_outletClassDeclarationAST::getter_mHandlesGraphicControllerBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHandlesGraphicControllerBinding ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_outletClassDeclarationAST::getter_mHasHidden (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_outletClassDeclarationAST * p = (const cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    result = p->mProperty_mHasHidden ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_outletClassDeclarationAST::getter_mHasHidden (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHasHidden ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletClassDeclarationAST::setter_setMUserDefined (GALGAS_bool inValue
                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    p->mProperty_mUserDefined = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_outletClassDeclarationAST::setter_setMUserDefined (GALGAS_bool inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mUserDefined = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletClassDeclarationAST::setter_setMSuperClassName (GALGAS_lstring inValue
                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    p->mProperty_mSuperClassName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_outletClassDeclarationAST::setter_setMSuperClassName (GALGAS_lstring inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSuperClassName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletClassDeclarationAST::setter_setMHasRunAction (GALGAS_bool inValue
                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    p->mProperty_mHasRunAction = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_outletClassDeclarationAST::setter_setMHasRunAction (GALGAS_bool inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mHasRunAction = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletClassDeclarationAST::setter_setMHasEnabled (GALGAS_bool inValue
                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    p->mProperty_mHasEnabled = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_outletClassDeclarationAST::setter_setMHasEnabled (GALGAS_bool inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mHasEnabled = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletClassDeclarationAST::setter_setMHandlesTableValueBinding (GALGAS_bool inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    p->mProperty_mHandlesTableValueBinding = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_outletClassDeclarationAST::setter_setMHandlesTableValueBinding (GALGAS_bool inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mHandlesTableValueBinding = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletClassDeclarationAST::setter_setMHandlesGraphicControllerBinding (GALGAS_bool inValue
                                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    p->mProperty_mHandlesGraphicControllerBinding = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_outletClassDeclarationAST::setter_setMHandlesGraphicControllerBinding (GALGAS_bool inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mHandlesGraphicControllerBinding = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletClassDeclarationAST::setter_setMHasHidden (GALGAS_bool inValue
                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    p->mProperty_mHasHidden = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_outletClassDeclarationAST::setter_setMHasHidden (GALGAS_bool inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mHasHidden = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @outletClassDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_outletClassDeclarationAST::cPtr_outletClassDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                                const GALGAS_bool & in_mUserDefined,
                                                                const GALGAS_lstring & in_mSuperClassName,
                                                                const GALGAS_bool & in_mHasRunAction,
                                                                const GALGAS_bool & in_mHasEnabled,
                                                                const GALGAS_bool & in_mHandlesTableValueBinding,
                                                                const GALGAS_bool & in_mHandlesGraphicControllerBinding,
                                                                const GALGAS_bool & in_mHasHidden
                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mUserDefined (in_mUserDefined),
mProperty_mSuperClassName (in_mSuperClassName),
mProperty_mHasRunAction (in_mHasRunAction),
mProperty_mHasEnabled (in_mHasEnabled),
mProperty_mHandlesTableValueBinding (in_mHandlesTableValueBinding),
mProperty_mHandlesGraphicControllerBinding (in_mHandlesGraphicControllerBinding),
mProperty_mHasHidden (in_mHasHidden) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_outletClassDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassDeclarationAST ;
}

void cPtr_outletClassDeclarationAST::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@outletClassDeclarationAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mUserDefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSuperClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mHasRunAction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mHasEnabled.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mHandlesTableValueBinding.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mHandlesGraphicControllerBinding.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mHasHidden.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_outletClassDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_outletClassDeclarationAST (mProperty_mClassName, mProperty_mUserDefined, mProperty_mSuperClassName, mProperty_mHasRunAction, mProperty_mHasEnabled, mProperty_mHandlesTableValueBinding, mProperty_mHandlesGraphicControllerBinding, mProperty_mHasHidden COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@outletClassDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletClassDeclarationAST ("outletClassDeclarationAST",
                                                  & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_outletClassDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_outletClassDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletClassDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletClassDeclarationAST GALGAS_outletClassDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_outletClassDeclarationAST result ;
  const GALGAS_outletClassDeclarationAST * p = (const GALGAS_outletClassDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outletClassDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletClassDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_computedPropertyDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_computedPropertyDeclarationAST * p = (const cPtr_computedPropertyDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_computedPropertyDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRootEntityName.objectCompare (p->mProperty_mRootEntityName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mComputedPropertyTypeName.objectCompare (p->mProperty_mComputedPropertyTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mComputedPropertyName.objectCompare (p->mProperty_mComputedPropertyName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDependencyList.objectCompare (p->mProperty_mDependencyList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_computedPropertyDeclarationAST::objectCompare (const GALGAS_computedPropertyDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedPropertyDeclarationAST::GALGAS_computedPropertyDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedPropertyDeclarationAST GALGAS_computedPropertyDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_computedPropertyDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                 GALGAS_lstring::constructor_default (HERE),
                                                                 GALGAS_lstring::constructor_default (HERE),
                                                                 GALGAS_lstring::constructor_default (HERE),
                                                                 GALGAS_observablePropertyList::constructor_emptyList (HERE)
                                                                 COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedPropertyDeclarationAST::GALGAS_computedPropertyDeclarationAST (const cPtr_computedPropertyDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_computedPropertyDeclarationAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedPropertyDeclarationAST GALGAS_computedPropertyDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                                              const GALGAS_lstring & inAttribute_mRootEntityName,
                                                                                              const GALGAS_lstring & inAttribute_mComputedPropertyTypeName,
                                                                                              const GALGAS_lstring & inAttribute_mComputedPropertyName,
                                                                                              const GALGAS_observablePropertyList & inAttribute_mDependencyList
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_computedPropertyDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mRootEntityName.isValid () && inAttribute_mComputedPropertyTypeName.isValid () && inAttribute_mComputedPropertyName.isValid () && inAttribute_mDependencyList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_computedPropertyDeclarationAST (inAttribute_mClassName, inAttribute_mRootEntityName, inAttribute_mComputedPropertyTypeName, inAttribute_mComputedPropertyName, inAttribute_mDependencyList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_computedPropertyDeclarationAST::getter_mRootEntityName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_computedPropertyDeclarationAST * p = (const cPtr_computedPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyDeclarationAST) ;
    result = p->mProperty_mRootEntityName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_computedPropertyDeclarationAST::getter_mRootEntityName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRootEntityName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_computedPropertyDeclarationAST::getter_mComputedPropertyTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_computedPropertyDeclarationAST * p = (const cPtr_computedPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyDeclarationAST) ;
    result = p->mProperty_mComputedPropertyTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_computedPropertyDeclarationAST::getter_mComputedPropertyTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mComputedPropertyTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_computedPropertyDeclarationAST::getter_mComputedPropertyName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_computedPropertyDeclarationAST * p = (const cPtr_computedPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyDeclarationAST) ;
    result = p->mProperty_mComputedPropertyName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_computedPropertyDeclarationAST::getter_mComputedPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mComputedPropertyName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyList GALGAS_computedPropertyDeclarationAST::getter_mDependencyList (UNUSED_LOCATION_ARGS) const {
  GALGAS_observablePropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_computedPropertyDeclarationAST * p = (const cPtr_computedPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyDeclarationAST) ;
    result = p->mProperty_mDependencyList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyList cPtr_computedPropertyDeclarationAST::getter_mDependencyList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDependencyList ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_computedPropertyDeclarationAST::setter_setMRootEntityName (GALGAS_lstring inValue
                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_computedPropertyDeclarationAST * p = (cPtr_computedPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyDeclarationAST) ;
    p->mProperty_mRootEntityName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_computedPropertyDeclarationAST::setter_setMRootEntityName (GALGAS_lstring inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRootEntityName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_computedPropertyDeclarationAST::setter_setMComputedPropertyTypeName (GALGAS_lstring inValue
                                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_computedPropertyDeclarationAST * p = (cPtr_computedPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyDeclarationAST) ;
    p->mProperty_mComputedPropertyTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_computedPropertyDeclarationAST::setter_setMComputedPropertyTypeName (GALGAS_lstring inValue
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mComputedPropertyTypeName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_computedPropertyDeclarationAST::setter_setMComputedPropertyName (GALGAS_lstring inValue
                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_computedPropertyDeclarationAST * p = (cPtr_computedPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyDeclarationAST) ;
    p->mProperty_mComputedPropertyName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_computedPropertyDeclarationAST::setter_setMComputedPropertyName (GALGAS_lstring inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mComputedPropertyName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_computedPropertyDeclarationAST::setter_setMDependencyList (GALGAS_observablePropertyList inValue
                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_computedPropertyDeclarationAST * p = (cPtr_computedPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyDeclarationAST) ;
    p->mProperty_mDependencyList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_computedPropertyDeclarationAST::setter_setMDependencyList (GALGAS_observablePropertyList inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mDependencyList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @computedPropertyDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_computedPropertyDeclarationAST::cPtr_computedPropertyDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                                          const GALGAS_lstring & in_mRootEntityName,
                                                                          const GALGAS_lstring & in_mComputedPropertyTypeName,
                                                                          const GALGAS_lstring & in_mComputedPropertyName,
                                                                          const GALGAS_observablePropertyList & in_mDependencyList
                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mRootEntityName (in_mRootEntityName),
mProperty_mComputedPropertyTypeName (in_mComputedPropertyTypeName),
mProperty_mComputedPropertyName (in_mComputedPropertyName),
mProperty_mDependencyList (in_mDependencyList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_computedPropertyDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedPropertyDeclarationAST ;
}

void cPtr_computedPropertyDeclarationAST::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@computedPropertyDeclarationAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRootEntityName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mComputedPropertyTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mComputedPropertyName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDependencyList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_computedPropertyDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_computedPropertyDeclarationAST (mProperty_mClassName, mProperty_mRootEntityName, mProperty_mComputedPropertyTypeName, mProperty_mComputedPropertyName, mProperty_mDependencyList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@computedPropertyDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_computedPropertyDeclarationAST ("computedPropertyDeclarationAST",
                                                       & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_computedPropertyDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedPropertyDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_computedPropertyDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_computedPropertyDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedPropertyDeclarationAST GALGAS_computedPropertyDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_computedPropertyDeclarationAST result ;
  const GALGAS_computedPropertyDeclarationAST * p = (const GALGAS_computedPropertyDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_computedPropertyDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computedPropertyDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_computedPropertyGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_computedPropertyGeneration * p = (const cPtr_computedPropertyGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_computedPropertyGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mPropertyName.objectCompare (p->mProperty_mPropertyName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mType.objectCompare (p->mProperty_mType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDependencyList.objectCompare (p->mProperty_mDependencyList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGenerate.objectCompare (p->mProperty_mGenerate) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_computedPropertyGeneration::objectCompare (const GALGAS_computedPropertyGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedPropertyGeneration::GALGAS_computedPropertyGeneration (void) :
GALGAS_propertyGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedPropertyGeneration::GALGAS_computedPropertyGeneration (const cPtr_computedPropertyGeneration * inSourcePtr) :
GALGAS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_computedPropertyGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedPropertyGeneration GALGAS_computedPropertyGeneration::constructor_new (const GALGAS_string & inAttribute_mPropertyName,
                                                                                      const GALGAS_string & inAttribute_mClassName,
                                                                                      const GALGAS_typeKind & inAttribute_mType,
                                                                                      const GALGAS_transientDependencyListForGeneration & inAttribute_mDependencyList,
                                                                                      const GALGAS_bool & inAttribute_mGenerate
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_computedPropertyGeneration result ;
  if (inAttribute_mPropertyName.isValid () && inAttribute_mClassName.isValid () && inAttribute_mType.isValid () && inAttribute_mDependencyList.isValid () && inAttribute_mGenerate.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_computedPropertyGeneration (inAttribute_mPropertyName, inAttribute_mClassName, inAttribute_mType, inAttribute_mDependencyList, inAttribute_mGenerate COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_computedPropertyGeneration::getter_mClassName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_computedPropertyGeneration * p = (const cPtr_computedPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyGeneration) ;
    result = p->mProperty_mClassName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_computedPropertyGeneration::getter_mClassName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mClassName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_computedPropertyGeneration::getter_mType (UNUSED_LOCATION_ARGS) const {
  GALGAS_typeKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_computedPropertyGeneration * p = (const cPtr_computedPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyGeneration) ;
    result = p->mProperty_mType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind cPtr_computedPropertyGeneration::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientDependencyListForGeneration GALGAS_computedPropertyGeneration::getter_mDependencyList (UNUSED_LOCATION_ARGS) const {
  GALGAS_transientDependencyListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_computedPropertyGeneration * p = (const cPtr_computedPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyGeneration) ;
    result = p->mProperty_mDependencyList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientDependencyListForGeneration cPtr_computedPropertyGeneration::getter_mDependencyList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDependencyList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_computedPropertyGeneration::getter_mGenerate (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_computedPropertyGeneration * p = (const cPtr_computedPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyGeneration) ;
    result = p->mProperty_mGenerate ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_computedPropertyGeneration::getter_mGenerate (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGenerate ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_computedPropertyGeneration::setter_setMClassName (GALGAS_string inValue
                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_computedPropertyGeneration * p = (cPtr_computedPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyGeneration) ;
    p->mProperty_mClassName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_computedPropertyGeneration::setter_setMClassName (GALGAS_string inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mClassName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_computedPropertyGeneration::setter_setMType (GALGAS_typeKind inValue
                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_computedPropertyGeneration * p = (cPtr_computedPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyGeneration) ;
    p->mProperty_mType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_computedPropertyGeneration::setter_setMType (GALGAS_typeKind inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mType = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_computedPropertyGeneration::setter_setMDependencyList (GALGAS_transientDependencyListForGeneration inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_computedPropertyGeneration * p = (cPtr_computedPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyGeneration) ;
    p->mProperty_mDependencyList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_computedPropertyGeneration::setter_setMDependencyList (GALGAS_transientDependencyListForGeneration inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mDependencyList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_computedPropertyGeneration::setter_setMGenerate (GALGAS_bool inValue
                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_computedPropertyGeneration * p = (cPtr_computedPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyGeneration) ;
    p->mProperty_mGenerate = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_computedPropertyGeneration::setter_setMGenerate (GALGAS_bool inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mGenerate = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @computedPropertyGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_computedPropertyGeneration::cPtr_computedPropertyGeneration (const GALGAS_string & in_mPropertyName,
                                                                  const GALGAS_string & in_mClassName,
                                                                  const GALGAS_typeKind & in_mType,
                                                                  const GALGAS_transientDependencyListForGeneration & in_mDependencyList,
                                                                  const GALGAS_bool & in_mGenerate
                                                                  COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (in_mPropertyName COMMA_THERE),
mProperty_mClassName (in_mClassName),
mProperty_mType (in_mType),
mProperty_mDependencyList (in_mDependencyList),
mProperty_mGenerate (in_mGenerate) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_computedPropertyGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedPropertyGeneration ;
}

void cPtr_computedPropertyGeneration::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@computedPropertyGeneration:" ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDependencyList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGenerate.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_computedPropertyGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_computedPropertyGeneration (mProperty_mPropertyName, mProperty_mClassName, mProperty_mType, mProperty_mDependencyList, mProperty_mGenerate COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@computedPropertyGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_computedPropertyGeneration ("computedPropertyGeneration",
                                                   & kTypeDescriptor_GALGAS_propertyGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_computedPropertyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedPropertyGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_computedPropertyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_computedPropertyGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedPropertyGeneration GALGAS_computedPropertyGeneration::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_computedPropertyGeneration result ;
  const GALGAS_computedPropertyGeneration * p = (const GALGAS_computedPropertyGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_computedPropertyGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computedPropertyGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_transientDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_transientDeclarationAST * p = (const cPtr_transientDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRootEntityName.objectCompare (p->mProperty_mRootEntityName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTransientTypeName.objectCompare (p->mProperty_mTransientTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTransientName.objectCompare (p->mProperty_mTransientName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDependencyList.objectCompare (p->mProperty_mDependencyList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsOverriding.objectCompare (p->mProperty_mIsOverriding) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_transientDeclarationAST::objectCompare (const GALGAS_transientDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientDeclarationAST::GALGAS_transientDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientDeclarationAST GALGAS_transientDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_transientDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_observablePropertyList::constructor_emptyList (HERE),
                                                          GALGAS_bool::constructor_default (HERE)
                                                          COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientDeclarationAST::GALGAS_transientDeclarationAST (const cPtr_transientDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_transientDeclarationAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientDeclarationAST GALGAS_transientDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                                const GALGAS_lstring & inAttribute_mRootEntityName,
                                                                                const GALGAS_lstring & inAttribute_mTransientTypeName,
                                                                                const GALGAS_lstring & inAttribute_mTransientName,
                                                                                const GALGAS_observablePropertyList & inAttribute_mDependencyList,
                                                                                const GALGAS_bool & inAttribute_mIsOverriding
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_transientDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mRootEntityName.isValid () && inAttribute_mTransientTypeName.isValid () && inAttribute_mTransientName.isValid () && inAttribute_mDependencyList.isValid () && inAttribute_mIsOverriding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_transientDeclarationAST (inAttribute_mClassName, inAttribute_mRootEntityName, inAttribute_mTransientTypeName, inAttribute_mTransientName, inAttribute_mDependencyList, inAttribute_mIsOverriding COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_transientDeclarationAST::getter_mRootEntityName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_transientDeclarationAST * p = (const cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    result = p->mProperty_mRootEntityName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_transientDeclarationAST::getter_mRootEntityName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRootEntityName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_transientDeclarationAST::getter_mTransientTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_transientDeclarationAST * p = (const cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    result = p->mProperty_mTransientTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_transientDeclarationAST::getter_mTransientTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTransientTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_transientDeclarationAST::getter_mTransientName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_transientDeclarationAST * p = (const cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    result = p->mProperty_mTransientName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_transientDeclarationAST::getter_mTransientName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTransientName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyList GALGAS_transientDeclarationAST::getter_mDependencyList (UNUSED_LOCATION_ARGS) const {
  GALGAS_observablePropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_transientDeclarationAST * p = (const cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    result = p->mProperty_mDependencyList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyList cPtr_transientDeclarationAST::getter_mDependencyList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDependencyList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_transientDeclarationAST::getter_mIsOverriding (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_transientDeclarationAST * p = (const cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    result = p->mProperty_mIsOverriding ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_transientDeclarationAST::getter_mIsOverriding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsOverriding ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientDeclarationAST::setter_setMRootEntityName (GALGAS_lstring inValue
                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_transientDeclarationAST * p = (cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    p->mProperty_mRootEntityName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_transientDeclarationAST::setter_setMRootEntityName (GALGAS_lstring inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRootEntityName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientDeclarationAST::setter_setMTransientTypeName (GALGAS_lstring inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_transientDeclarationAST * p = (cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    p->mProperty_mTransientTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_transientDeclarationAST::setter_setMTransientTypeName (GALGAS_lstring inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTransientTypeName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientDeclarationAST::setter_setMTransientName (GALGAS_lstring inValue
                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_transientDeclarationAST * p = (cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    p->mProperty_mTransientName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_transientDeclarationAST::setter_setMTransientName (GALGAS_lstring inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTransientName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientDeclarationAST::setter_setMDependencyList (GALGAS_observablePropertyList inValue
                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_transientDeclarationAST * p = (cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    p->mProperty_mDependencyList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_transientDeclarationAST::setter_setMDependencyList (GALGAS_observablePropertyList inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mDependencyList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientDeclarationAST::setter_setMIsOverriding (GALGAS_bool inValue
                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_transientDeclarationAST * p = (cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    p->mProperty_mIsOverriding = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_transientDeclarationAST::setter_setMIsOverriding (GALGAS_bool inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mIsOverriding = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @transientDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_transientDeclarationAST::cPtr_transientDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                            const GALGAS_lstring & in_mRootEntityName,
                                                            const GALGAS_lstring & in_mTransientTypeName,
                                                            const GALGAS_lstring & in_mTransientName,
                                                            const GALGAS_observablePropertyList & in_mDependencyList,
                                                            const GALGAS_bool & in_mIsOverriding
                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mRootEntityName (in_mRootEntityName),
mProperty_mTransientTypeName (in_mTransientTypeName),
mProperty_mTransientName (in_mTransientName),
mProperty_mDependencyList (in_mDependencyList),
mProperty_mIsOverriding (in_mIsOverriding) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_transientDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientDeclarationAST ;
}

void cPtr_transientDeclarationAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@transientDeclarationAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRootEntityName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTransientTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTransientName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDependencyList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsOverriding.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_transientDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_transientDeclarationAST (mProperty_mClassName, mProperty_mRootEntityName, mProperty_mTransientTypeName, mProperty_mTransientName, mProperty_mDependencyList, mProperty_mIsOverriding COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@transientDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transientDeclarationAST ("transientDeclarationAST",
                                                & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_transientDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_transientDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientDeclarationAST GALGAS_transientDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_transientDeclarationAST result ;
  const GALGAS_transientDeclarationAST * p = (const GALGAS_transientDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_transientDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_proxyDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_proxyDeclarationAST * p = (const cPtr_proxyDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mProxyKind.objectCompare (p->mProperty_mProxyKind) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mProxyTypeName.objectCompare (p->mProperty_mProxyTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mProxyName.objectCompare (p->mProperty_mProxyName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mToOneRelationshipName.objectCompare (p->mProperty_mToOneRelationshipName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPropertyName.objectCompare (p->mProperty_mPropertyName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_proxyDeclarationAST::objectCompare (const GALGAS_proxyDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_proxyDeclarationAST::GALGAS_proxyDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_proxyDeclarationAST::GALGAS_proxyDeclarationAST (const cPtr_proxyDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_proxyDeclarationAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_proxyDeclarationAST GALGAS_proxyDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                        const GALGAS_proxyKind & inAttribute_mProxyKind,
                                                                        const GALGAS_lstring & inAttribute_mProxyTypeName,
                                                                        const GALGAS_lstring & inAttribute_mProxyName,
                                                                        const GALGAS_lstring & inAttribute_mToOneRelationshipName,
                                                                        const GALGAS_lstring & inAttribute_mPropertyName
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_proxyDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mProxyKind.isValid () && inAttribute_mProxyTypeName.isValid () && inAttribute_mProxyName.isValid () && inAttribute_mToOneRelationshipName.isValid () && inAttribute_mPropertyName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_proxyDeclarationAST (inAttribute_mClassName, inAttribute_mProxyKind, inAttribute_mProxyTypeName, inAttribute_mProxyName, inAttribute_mToOneRelationshipName, inAttribute_mPropertyName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_proxyKind GALGAS_proxyDeclarationAST::getter_mProxyKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_proxyKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_proxyDeclarationAST * p = (const cPtr_proxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
    result = p->mProperty_mProxyKind ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_proxyKind cPtr_proxyDeclarationAST::getter_mProxyKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProxyKind ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_proxyDeclarationAST::getter_mProxyTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_proxyDeclarationAST * p = (const cPtr_proxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
    result = p->mProperty_mProxyTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_proxyDeclarationAST::getter_mProxyTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProxyTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_proxyDeclarationAST::getter_mProxyName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_proxyDeclarationAST * p = (const cPtr_proxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
    result = p->mProperty_mProxyName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_proxyDeclarationAST::getter_mProxyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProxyName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_proxyDeclarationAST::getter_mToOneRelationshipName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_proxyDeclarationAST * p = (const cPtr_proxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
    result = p->mProperty_mToOneRelationshipName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_proxyDeclarationAST::getter_mToOneRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mToOneRelationshipName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_proxyDeclarationAST::getter_mPropertyName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_proxyDeclarationAST * p = (const cPtr_proxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
    result = p->mProperty_mPropertyName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_proxyDeclarationAST::getter_mPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyName ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_proxyDeclarationAST::setter_setMProxyKind (GALGAS_proxyKind inValue
                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_proxyDeclarationAST * p = (cPtr_proxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
    p->mProperty_mProxyKind = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_proxyDeclarationAST::setter_setMProxyKind (GALGAS_proxyKind inValue
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mProxyKind = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_proxyDeclarationAST::setter_setMProxyTypeName (GALGAS_lstring inValue
                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_proxyDeclarationAST * p = (cPtr_proxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
    p->mProperty_mProxyTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_proxyDeclarationAST::setter_setMProxyTypeName (GALGAS_lstring inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mProxyTypeName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_proxyDeclarationAST::setter_setMProxyName (GALGAS_lstring inValue
                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_proxyDeclarationAST * p = (cPtr_proxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
    p->mProperty_mProxyName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_proxyDeclarationAST::setter_setMProxyName (GALGAS_lstring inValue
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mProxyName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_proxyDeclarationAST::setter_setMToOneRelationshipName (GALGAS_lstring inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_proxyDeclarationAST * p = (cPtr_proxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
    p->mProperty_mToOneRelationshipName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_proxyDeclarationAST::setter_setMToOneRelationshipName (GALGAS_lstring inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mToOneRelationshipName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_proxyDeclarationAST::setter_setMPropertyName (GALGAS_lstring inValue
                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_proxyDeclarationAST * p = (cPtr_proxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
    p->mProperty_mPropertyName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_proxyDeclarationAST::setter_setMPropertyName (GALGAS_lstring inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mPropertyName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @proxyDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_proxyDeclarationAST::cPtr_proxyDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                    const GALGAS_proxyKind & in_mProxyKind,
                                                    const GALGAS_lstring & in_mProxyTypeName,
                                                    const GALGAS_lstring & in_mProxyName,
                                                    const GALGAS_lstring & in_mToOneRelationshipName,
                                                    const GALGAS_lstring & in_mPropertyName
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mProxyKind (in_mProxyKind),
mProperty_mProxyTypeName (in_mProxyTypeName),
mProperty_mProxyName (in_mProxyName),
mProperty_mToOneRelationshipName (in_mToOneRelationshipName),
mProperty_mPropertyName (in_mPropertyName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_proxyDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_proxyDeclarationAST ;
}

void cPtr_proxyDeclarationAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@proxyDeclarationAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mProxyKind.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mProxyTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mProxyName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mToOneRelationshipName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_proxyDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_proxyDeclarationAST (mProperty_mClassName, mProperty_mProxyKind, mProperty_mProxyTypeName, mProperty_mProxyName, mProperty_mToOneRelationshipName, mProperty_mPropertyName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@proxyDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_proxyDeclarationAST ("proxyDeclarationAST",
                                            & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_proxyDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_proxyDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_proxyDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_proxyDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_proxyDeclarationAST GALGAS_proxyDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_proxyDeclarationAST result ;
  const GALGAS_proxyDeclarationAST * p = (const GALGAS_proxyDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_proxyDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("proxyDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_atomicPropertyDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_atomicPropertyDeclarationAST * p = (const cPtr_atomicPropertyDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPropertyTypeName.objectCompare (p->mProperty_mPropertyTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPropertyName.objectCompare (p->mProperty_mPropertyName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDefaultValue.objectCompare (p->mProperty_mDefaultValue) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mNeedsValidation.objectCompare (p->mProperty_mNeedsValidation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_atomicPropertyDeclarationAST::objectCompare (const GALGAS_atomicPropertyDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyDeclarationAST::GALGAS_atomicPropertyDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyDeclarationAST::GALGAS_atomicPropertyDeclarationAST (const cPtr_atomicPropertyDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_atomicPropertyDeclarationAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyDeclarationAST GALGAS_atomicPropertyDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                                          const GALGAS_lstring & inAttribute_mPropertyTypeName,
                                                                                          const GALGAS_lstring & inAttribute_mPropertyName,
                                                                                          const GALGAS_abstractDefaultValue & inAttribute_mDefaultValue,
                                                                                          const GALGAS_bool & inAttribute_mNeedsValidation
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_atomicPropertyDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mPropertyTypeName.isValid () && inAttribute_mPropertyName.isValid () && inAttribute_mDefaultValue.isValid () && inAttribute_mNeedsValidation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_atomicPropertyDeclarationAST (inAttribute_mClassName, inAttribute_mPropertyTypeName, inAttribute_mPropertyName, inAttribute_mDefaultValue, inAttribute_mNeedsValidation COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_atomicPropertyDeclarationAST::getter_mPropertyTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_atomicPropertyDeclarationAST * p = (const cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    result = p->mProperty_mPropertyTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_atomicPropertyDeclarationAST::getter_mPropertyTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_atomicPropertyDeclarationAST::getter_mPropertyName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_atomicPropertyDeclarationAST * p = (const cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    result = p->mProperty_mPropertyName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_atomicPropertyDeclarationAST::getter_mPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractDefaultValue GALGAS_atomicPropertyDeclarationAST::getter_mDefaultValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractDefaultValue result ;
  if (NULL != mObjectPtr) {
    const cPtr_atomicPropertyDeclarationAST * p = (const cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    result = p->mProperty_mDefaultValue ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractDefaultValue cPtr_atomicPropertyDeclarationAST::getter_mDefaultValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDefaultValue ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_atomicPropertyDeclarationAST::getter_mNeedsValidation (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_atomicPropertyDeclarationAST * p = (const cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    result = p->mProperty_mNeedsValidation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_atomicPropertyDeclarationAST::getter_mNeedsValidation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNeedsValidation ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyDeclarationAST::setter_setMPropertyTypeName (GALGAS_lstring inValue
                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_atomicPropertyDeclarationAST * p = (cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    p->mProperty_mPropertyTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_atomicPropertyDeclarationAST::setter_setMPropertyTypeName (GALGAS_lstring inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mPropertyTypeName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyDeclarationAST::setter_setMPropertyName (GALGAS_lstring inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_atomicPropertyDeclarationAST * p = (cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    p->mProperty_mPropertyName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_atomicPropertyDeclarationAST::setter_setMPropertyName (GALGAS_lstring inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mPropertyName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyDeclarationAST::setter_setMDefaultValue (GALGAS_abstractDefaultValue inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_atomicPropertyDeclarationAST * p = (cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    p->mProperty_mDefaultValue = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_atomicPropertyDeclarationAST::setter_setMDefaultValue (GALGAS_abstractDefaultValue inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mDefaultValue = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyDeclarationAST::setter_setMNeedsValidation (GALGAS_bool inValue
                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_atomicPropertyDeclarationAST * p = (cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    p->mProperty_mNeedsValidation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_atomicPropertyDeclarationAST::setter_setMNeedsValidation (GALGAS_bool inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mNeedsValidation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @atomicPropertyDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_atomicPropertyDeclarationAST::cPtr_atomicPropertyDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                                      const GALGAS_lstring & in_mPropertyTypeName,
                                                                      const GALGAS_lstring & in_mPropertyName,
                                                                      const GALGAS_abstractDefaultValue & in_mDefaultValue,
                                                                      const GALGAS_bool & in_mNeedsValidation
                                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mPropertyTypeName (in_mPropertyTypeName),
mProperty_mPropertyName (in_mPropertyName),
mProperty_mDefaultValue (in_mDefaultValue),
mProperty_mNeedsValidation (in_mNeedsValidation) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_atomicPropertyDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicPropertyDeclarationAST ;
}

void cPtr_atomicPropertyDeclarationAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@atomicPropertyDeclarationAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPropertyTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDefaultValue.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mNeedsValidation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_atomicPropertyDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_atomicPropertyDeclarationAST (mProperty_mClassName, mProperty_mPropertyTypeName, mProperty_mPropertyName, mProperty_mDefaultValue, mProperty_mNeedsValidation COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@atomicPropertyDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_atomicPropertyDeclarationAST ("atomicPropertyDeclarationAST",
                                                     & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_atomicPropertyDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicPropertyDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_atomicPropertyDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_atomicPropertyDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyDeclarationAST GALGAS_atomicPropertyDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_atomicPropertyDeclarationAST result ;
  const GALGAS_atomicPropertyDeclarationAST * p = (const GALGAS_atomicPropertyDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_atomicPropertyDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("atomicPropertyDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_toOneRelationshipAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_toOneRelationshipAST * p = (const cPtr_toOneRelationshipAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDestinationEntityName.objectCompare (p->mProperty_mDestinationEntityName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mToOneRelationshipName.objectCompare (p->mProperty_mToOneRelationshipName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOpposite.objectCompare (p->mProperty_mOpposite) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUsedForSignature.objectCompare (p->mProperty_mUsedForSignature) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_toOneRelationshipAST::objectCompare (const GALGAS_toOneRelationshipAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOneRelationshipAST::GALGAS_toOneRelationshipAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOneRelationshipAST::GALGAS_toOneRelationshipAST (const cPtr_toOneRelationshipAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_toOneRelationshipAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOneRelationshipAST GALGAS_toOneRelationshipAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                          const GALGAS_lstring & inAttribute_mDestinationEntityName,
                                                                          const GALGAS_lstring & inAttribute_mToOneRelationshipName,
                                                                          const GALGAS_toOneOppositeRelationship & inAttribute_mOpposite,
                                                                          const GALGAS_bool & inAttribute_mUsedForSignature
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_toOneRelationshipAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mDestinationEntityName.isValid () && inAttribute_mToOneRelationshipName.isValid () && inAttribute_mOpposite.isValid () && inAttribute_mUsedForSignature.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_toOneRelationshipAST (inAttribute_mClassName, inAttribute_mDestinationEntityName, inAttribute_mToOneRelationshipName, inAttribute_mOpposite, inAttribute_mUsedForSignature COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_toOneRelationshipAST::getter_mDestinationEntityName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_toOneRelationshipAST * p = (const cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    result = p->mProperty_mDestinationEntityName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_toOneRelationshipAST::getter_mDestinationEntityName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDestinationEntityName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_toOneRelationshipAST::getter_mToOneRelationshipName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_toOneRelationshipAST * p = (const cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    result = p->mProperty_mToOneRelationshipName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_toOneRelationshipAST::getter_mToOneRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mToOneRelationshipName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOneOppositeRelationship GALGAS_toOneRelationshipAST::getter_mOpposite (UNUSED_LOCATION_ARGS) const {
  GALGAS_toOneOppositeRelationship result ;
  if (NULL != mObjectPtr) {
    const cPtr_toOneRelationshipAST * p = (const cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    result = p->mProperty_mOpposite ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOneOppositeRelationship cPtr_toOneRelationshipAST::getter_mOpposite (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOpposite ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_toOneRelationshipAST::getter_mUsedForSignature (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_toOneRelationshipAST * p = (const cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    result = p->mProperty_mUsedForSignature ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_toOneRelationshipAST::getter_mUsedForSignature (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUsedForSignature ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toOneRelationshipAST::setter_setMDestinationEntityName (GALGAS_lstring inValue
                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_toOneRelationshipAST * p = (cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    p->mProperty_mDestinationEntityName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_toOneRelationshipAST::setter_setMDestinationEntityName (GALGAS_lstring inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mDestinationEntityName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toOneRelationshipAST::setter_setMToOneRelationshipName (GALGAS_lstring inValue
                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_toOneRelationshipAST * p = (cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    p->mProperty_mToOneRelationshipName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_toOneRelationshipAST::setter_setMToOneRelationshipName (GALGAS_lstring inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mToOneRelationshipName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toOneRelationshipAST::setter_setMOpposite (GALGAS_toOneOppositeRelationship inValue
                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_toOneRelationshipAST * p = (cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    p->mProperty_mOpposite = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_toOneRelationshipAST::setter_setMOpposite (GALGAS_toOneOppositeRelationship inValue
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOpposite = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toOneRelationshipAST::setter_setMUsedForSignature (GALGAS_bool inValue
                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_toOneRelationshipAST * p = (cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    p->mProperty_mUsedForSignature = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_toOneRelationshipAST::setter_setMUsedForSignature (GALGAS_bool inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mUsedForSignature = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @toOneRelationshipAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_toOneRelationshipAST::cPtr_toOneRelationshipAST (const GALGAS_lstring & in_mClassName,
                                                      const GALGAS_lstring & in_mDestinationEntityName,
                                                      const GALGAS_lstring & in_mToOneRelationshipName,
                                                      const GALGAS_toOneOppositeRelationship & in_mOpposite,
                                                      const GALGAS_bool & in_mUsedForSignature
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mDestinationEntityName (in_mDestinationEntityName),
mProperty_mToOneRelationshipName (in_mToOneRelationshipName),
mProperty_mOpposite (in_mOpposite),
mProperty_mUsedForSignature (in_mUsedForSignature) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_toOneRelationshipAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOneRelationshipAST ;
}

void cPtr_toOneRelationshipAST::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@toOneRelationshipAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDestinationEntityName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mToOneRelationshipName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOpposite.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mUsedForSignature.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_toOneRelationshipAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_toOneRelationshipAST (mProperty_mClassName, mProperty_mDestinationEntityName, mProperty_mToOneRelationshipName, mProperty_mOpposite, mProperty_mUsedForSignature COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@toOneRelationshipAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toOneRelationshipAST ("toOneRelationshipAST",
                                             & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_toOneRelationshipAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOneRelationshipAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_toOneRelationshipAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toOneRelationshipAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOneRelationshipAST GALGAS_toOneRelationshipAST::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_toOneRelationshipAST result ;
  const GALGAS_toOneRelationshipAST * p = (const GALGAS_toOneRelationshipAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toOneRelationshipAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toOneRelationshipAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_toOnePropertyGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_toOnePropertyGeneration * p = (const cPtr_toOnePropertyGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mPropertyName.objectCompare (p->mProperty_mPropertyName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRelationshipType.objectCompare (p->mProperty_mRelationshipType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOpposite.objectCompare (p->mProperty_mOpposite) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDestinationEntityObservablePropertyMap.objectCompare (p->mProperty_mDestinationEntityObservablePropertyMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUsedForSignature.objectCompare (p->mProperty_mUsedForSignature) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_toOnePropertyGeneration::objectCompare (const GALGAS_toOnePropertyGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOnePropertyGeneration::GALGAS_toOnePropertyGeneration (void) :
GALGAS_propertyGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOnePropertyGeneration::GALGAS_toOnePropertyGeneration (const cPtr_toOnePropertyGeneration * inSourcePtr) :
GALGAS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_toOnePropertyGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOnePropertyGeneration GALGAS_toOnePropertyGeneration::constructor_new (const GALGAS_string & inAttribute_mPropertyName,
                                                                                const GALGAS_string & inAttribute_mClassName,
                                                                                const GALGAS_propertyKind & inAttribute_mRelationshipType,
                                                                                const GALGAS_toOneOppositeRelationship & inAttribute_mOpposite,
                                                                                const GALGAS_propertyMap & inAttribute_mDestinationEntityObservablePropertyMap,
                                                                                const GALGAS_bool & inAttribute_mUsedForSignature
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_toOnePropertyGeneration result ;
  if (inAttribute_mPropertyName.isValid () && inAttribute_mClassName.isValid () && inAttribute_mRelationshipType.isValid () && inAttribute_mOpposite.isValid () && inAttribute_mDestinationEntityObservablePropertyMap.isValid () && inAttribute_mUsedForSignature.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_toOnePropertyGeneration (inAttribute_mPropertyName, inAttribute_mClassName, inAttribute_mRelationshipType, inAttribute_mOpposite, inAttribute_mDestinationEntityObservablePropertyMap, inAttribute_mUsedForSignature COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_toOnePropertyGeneration::getter_mClassName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_toOnePropertyGeneration * p = (const cPtr_toOnePropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
    result = p->mProperty_mClassName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toOnePropertyGeneration::getter_mClassName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mClassName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyKind GALGAS_toOnePropertyGeneration::getter_mRelationshipType (UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_toOnePropertyGeneration * p = (const cPtr_toOnePropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
    result = p->mProperty_mRelationshipType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyKind cPtr_toOnePropertyGeneration::getter_mRelationshipType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRelationshipType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOneOppositeRelationship GALGAS_toOnePropertyGeneration::getter_mOpposite (UNUSED_LOCATION_ARGS) const {
  GALGAS_toOneOppositeRelationship result ;
  if (NULL != mObjectPtr) {
    const cPtr_toOnePropertyGeneration * p = (const cPtr_toOnePropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
    result = p->mProperty_mOpposite ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOneOppositeRelationship cPtr_toOnePropertyGeneration::getter_mOpposite (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOpposite ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyMap GALGAS_toOnePropertyGeneration::getter_mDestinationEntityObservablePropertyMap (UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_toOnePropertyGeneration * p = (const cPtr_toOnePropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
    result = p->mProperty_mDestinationEntityObservablePropertyMap ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyMap cPtr_toOnePropertyGeneration::getter_mDestinationEntityObservablePropertyMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDestinationEntityObservablePropertyMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_toOnePropertyGeneration::getter_mUsedForSignature (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_toOnePropertyGeneration * p = (const cPtr_toOnePropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
    result = p->mProperty_mUsedForSignature ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_toOnePropertyGeneration::getter_mUsedForSignature (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUsedForSignature ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toOnePropertyGeneration::setter_setMClassName (GALGAS_string inValue
                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_toOnePropertyGeneration * p = (cPtr_toOnePropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
    p->mProperty_mClassName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_toOnePropertyGeneration::setter_setMClassName (GALGAS_string inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mClassName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toOnePropertyGeneration::setter_setMRelationshipType (GALGAS_propertyKind inValue
                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_toOnePropertyGeneration * p = (cPtr_toOnePropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
    p->mProperty_mRelationshipType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_toOnePropertyGeneration::setter_setMRelationshipType (GALGAS_propertyKind inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRelationshipType = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toOnePropertyGeneration::setter_setMOpposite (GALGAS_toOneOppositeRelationship inValue
                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_toOnePropertyGeneration * p = (cPtr_toOnePropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
    p->mProperty_mOpposite = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_toOnePropertyGeneration::setter_setMOpposite (GALGAS_toOneOppositeRelationship inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOpposite = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toOnePropertyGeneration::setter_setMDestinationEntityObservablePropertyMap (GALGAS_propertyMap inValue
                                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_toOnePropertyGeneration * p = (cPtr_toOnePropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
    p->mProperty_mDestinationEntityObservablePropertyMap = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_toOnePropertyGeneration::setter_setMDestinationEntityObservablePropertyMap (GALGAS_propertyMap inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mDestinationEntityObservablePropertyMap = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toOnePropertyGeneration::setter_setMUsedForSignature (GALGAS_bool inValue
                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_toOnePropertyGeneration * p = (cPtr_toOnePropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
    p->mProperty_mUsedForSignature = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_toOnePropertyGeneration::setter_setMUsedForSignature (GALGAS_bool inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mUsedForSignature = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @toOnePropertyGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_toOnePropertyGeneration::cPtr_toOnePropertyGeneration (const GALGAS_string & in_mPropertyName,
                                                            const GALGAS_string & in_mClassName,
                                                            const GALGAS_propertyKind & in_mRelationshipType,
                                                            const GALGAS_toOneOppositeRelationship & in_mOpposite,
                                                            const GALGAS_propertyMap & in_mDestinationEntityObservablePropertyMap,
                                                            const GALGAS_bool & in_mUsedForSignature
                                                            COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (in_mPropertyName COMMA_THERE),
mProperty_mClassName (in_mClassName),
mProperty_mRelationshipType (in_mRelationshipType),
mProperty_mOpposite (in_mOpposite),
mProperty_mDestinationEntityObservablePropertyMap (in_mDestinationEntityObservablePropertyMap),
mProperty_mUsedForSignature (in_mUsedForSignature) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_toOnePropertyGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOnePropertyGeneration ;
}

void cPtr_toOnePropertyGeneration::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@toOnePropertyGeneration:" ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRelationshipType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOpposite.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDestinationEntityObservablePropertyMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mUsedForSignature.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_toOnePropertyGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_toOnePropertyGeneration (mProperty_mPropertyName, mProperty_mClassName, mProperty_mRelationshipType, mProperty_mOpposite, mProperty_mDestinationEntityObservablePropertyMap, mProperty_mUsedForSignature COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@toOnePropertyGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toOnePropertyGeneration ("toOnePropertyGeneration",
                                                & kTypeDescriptor_GALGAS_propertyGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_toOnePropertyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOnePropertyGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_toOnePropertyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toOnePropertyGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOnePropertyGeneration GALGAS_toOnePropertyGeneration::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_toOnePropertyGeneration result ;
  const GALGAS_toOnePropertyGeneration * p = (const GALGAS_toOnePropertyGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toOnePropertyGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toOnePropertyGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_toManyRelationshipAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_toManyRelationshipAST * p = (const cPtr_toManyRelationshipAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_toManyRelationshipAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDestinationEntityName.objectCompare (p->mProperty_mDestinationEntityName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mToManyRelationshipName.objectCompare (p->mProperty_mToManyRelationshipName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOption.objectCompare (p->mProperty_mOption) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCustomStore.objectCompare (p->mProperty_mCustomStore) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUsedForSignature.objectCompare (p->mProperty_mUsedForSignature) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_toManyRelationshipAST::objectCompare (const GALGAS_toManyRelationshipAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipAST::GALGAS_toManyRelationshipAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipAST::GALGAS_toManyRelationshipAST (const cPtr_toManyRelationshipAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_toManyRelationshipAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipAST GALGAS_toManyRelationshipAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                            const GALGAS_lstring & inAttribute_mDestinationEntityName,
                                                                            const GALGAS_lstring & inAttribute_mToManyRelationshipName,
                                                                            const GALGAS_toManyRelationshipOptionAST & inAttribute_mOption,
                                                                            const GALGAS_bool & inAttribute_mCustomStore,
                                                                            const GALGAS_bool & inAttribute_mUsedForSignature
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_toManyRelationshipAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mDestinationEntityName.isValid () && inAttribute_mToManyRelationshipName.isValid () && inAttribute_mOption.isValid () && inAttribute_mCustomStore.isValid () && inAttribute_mUsedForSignature.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_toManyRelationshipAST (inAttribute_mClassName, inAttribute_mDestinationEntityName, inAttribute_mToManyRelationshipName, inAttribute_mOption, inAttribute_mCustomStore, inAttribute_mUsedForSignature COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_toManyRelationshipAST::getter_mDestinationEntityName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_toManyRelationshipAST * p = (const cPtr_toManyRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyRelationshipAST) ;
    result = p->mProperty_mDestinationEntityName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_toManyRelationshipAST::getter_mDestinationEntityName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDestinationEntityName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_toManyRelationshipAST::getter_mToManyRelationshipName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_toManyRelationshipAST * p = (const cPtr_toManyRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyRelationshipAST) ;
    result = p->mProperty_mToManyRelationshipName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_toManyRelationshipAST::getter_mToManyRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mToManyRelationshipName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipOptionAST GALGAS_toManyRelationshipAST::getter_mOption (UNUSED_LOCATION_ARGS) const {
  GALGAS_toManyRelationshipOptionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_toManyRelationshipAST * p = (const cPtr_toManyRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyRelationshipAST) ;
    result = p->mProperty_mOption ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipOptionAST cPtr_toManyRelationshipAST::getter_mOption (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOption ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_toManyRelationshipAST::getter_mCustomStore (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_toManyRelationshipAST * p = (const cPtr_toManyRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyRelationshipAST) ;
    result = p->mProperty_mCustomStore ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_toManyRelationshipAST::getter_mCustomStore (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCustomStore ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_toManyRelationshipAST::getter_mUsedForSignature (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_toManyRelationshipAST * p = (const cPtr_toManyRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyRelationshipAST) ;
    result = p->mProperty_mUsedForSignature ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_toManyRelationshipAST::getter_mUsedForSignature (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUsedForSignature ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyRelationshipAST::setter_setMDestinationEntityName (GALGAS_lstring inValue
                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_toManyRelationshipAST * p = (cPtr_toManyRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyRelationshipAST) ;
    p->mProperty_mDestinationEntityName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_toManyRelationshipAST::setter_setMDestinationEntityName (GALGAS_lstring inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mDestinationEntityName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyRelationshipAST::setter_setMToManyRelationshipName (GALGAS_lstring inValue
                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_toManyRelationshipAST * p = (cPtr_toManyRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyRelationshipAST) ;
    p->mProperty_mToManyRelationshipName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_toManyRelationshipAST::setter_setMToManyRelationshipName (GALGAS_lstring inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mToManyRelationshipName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyRelationshipAST::setter_setMOption (GALGAS_toManyRelationshipOptionAST inValue
                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_toManyRelationshipAST * p = (cPtr_toManyRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyRelationshipAST) ;
    p->mProperty_mOption = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_toManyRelationshipAST::setter_setMOption (GALGAS_toManyRelationshipOptionAST inValue
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOption = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyRelationshipAST::setter_setMCustomStore (GALGAS_bool inValue
                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_toManyRelationshipAST * p = (cPtr_toManyRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyRelationshipAST) ;
    p->mProperty_mCustomStore = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_toManyRelationshipAST::setter_setMCustomStore (GALGAS_bool inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mCustomStore = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyRelationshipAST::setter_setMUsedForSignature (GALGAS_bool inValue
                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_toManyRelationshipAST * p = (cPtr_toManyRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyRelationshipAST) ;
    p->mProperty_mUsedForSignature = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_toManyRelationshipAST::setter_setMUsedForSignature (GALGAS_bool inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mUsedForSignature = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @toManyRelationshipAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_toManyRelationshipAST::cPtr_toManyRelationshipAST (const GALGAS_lstring & in_mClassName,
                                                        const GALGAS_lstring & in_mDestinationEntityName,
                                                        const GALGAS_lstring & in_mToManyRelationshipName,
                                                        const GALGAS_toManyRelationshipOptionAST & in_mOption,
                                                        const GALGAS_bool & in_mCustomStore,
                                                        const GALGAS_bool & in_mUsedForSignature
                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mDestinationEntityName (in_mDestinationEntityName),
mProperty_mToManyRelationshipName (in_mToManyRelationshipName),
mProperty_mOption (in_mOption),
mProperty_mCustomStore (in_mCustomStore),
mProperty_mUsedForSignature (in_mUsedForSignature) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_toManyRelationshipAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyRelationshipAST ;
}

void cPtr_toManyRelationshipAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@toManyRelationshipAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDestinationEntityName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mToManyRelationshipName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOption.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCustomStore.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mUsedForSignature.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_toManyRelationshipAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_toManyRelationshipAST (mProperty_mClassName, mProperty_mDestinationEntityName, mProperty_mToManyRelationshipName, mProperty_mOption, mProperty_mCustomStore, mProperty_mUsedForSignature COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@toManyRelationshipAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toManyRelationshipAST ("toManyRelationshipAST",
                                              & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_toManyRelationshipAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyRelationshipAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_toManyRelationshipAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toManyRelationshipAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipAST GALGAS_toManyRelationshipAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_toManyRelationshipAST result ;
  const GALGAS_toManyRelationshipAST * p = (const GALGAS_toManyRelationshipAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toManyRelationshipAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyRelationshipAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_literalIntMultipleBindingExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literalIntMultipleBindingExpressionAST * p = (const cPtr_literalIntMultipleBindingExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalIntMultipleBindingExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_literalIntMultipleBindingExpressionAST::objectCompare (const GALGAS_literalIntMultipleBindingExpressionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalIntMultipleBindingExpressionAST::GALGAS_literalIntMultipleBindingExpressionAST (void) :
GALGAS_abstractBooleanMultipleBindingExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalIntMultipleBindingExpressionAST GALGAS_literalIntMultipleBindingExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_literalIntMultipleBindingExpressionAST::constructor_new (GALGAS_luint::constructor_default (HERE)
                                                                         COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalIntMultipleBindingExpressionAST::GALGAS_literalIntMultipleBindingExpressionAST (const cPtr_literalIntMultipleBindingExpressionAST * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalIntMultipleBindingExpressionAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalIntMultipleBindingExpressionAST GALGAS_literalIntMultipleBindingExpressionAST::constructor_new (const GALGAS_luint & inAttribute_mValue
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_literalIntMultipleBindingExpressionAST result ;
  if (inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literalIntMultipleBindingExpressionAST (inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_literalIntMultipleBindingExpressionAST::getter_mValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_luint result ;
  if (NULL != mObjectPtr) {
    const cPtr_literalIntMultipleBindingExpressionAST * p = (const cPtr_literalIntMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalIntMultipleBindingExpressionAST) ;
    result = p->mProperty_mValue ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint cPtr_literalIntMultipleBindingExpressionAST::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_literalIntMultipleBindingExpressionAST::setter_setMValue (GALGAS_luint inValue
                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_literalIntMultipleBindingExpressionAST * p = (cPtr_literalIntMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalIntMultipleBindingExpressionAST) ;
    p->mProperty_mValue = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_literalIntMultipleBindingExpressionAST::setter_setMValue (GALGAS_luint inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mValue = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @literalIntMultipleBindingExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_literalIntMultipleBindingExpressionAST::cPtr_literalIntMultipleBindingExpressionAST (const GALGAS_luint & in_mValue
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (THERE),
mProperty_mValue (in_mValue) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_literalIntMultipleBindingExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalIntMultipleBindingExpressionAST ;
}

void cPtr_literalIntMultipleBindingExpressionAST::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "[@literalIntMultipleBindingExpressionAST:" ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_literalIntMultipleBindingExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalIntMultipleBindingExpressionAST (mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@literalIntMultipleBindingExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalIntMultipleBindingExpressionAST ("literalIntMultipleBindingExpressionAST",
                                                               & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalIntMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalIntMultipleBindingExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalIntMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalIntMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalIntMultipleBindingExpressionAST GALGAS_literalIntMultipleBindingExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_literalIntMultipleBindingExpressionAST result ;
  const GALGAS_literalIntMultipleBindingExpressionAST * p = (const GALGAS_literalIntMultipleBindingExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalIntMultipleBindingExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalIntMultipleBindingExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_arrayControllerDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_arrayControllerDeclarationAST * p = (const cPtr_arrayControllerDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_arrayControllerDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mControllerName.objectCompare (p->mProperty_mControllerName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mModel.objectCompare (p->mProperty_mModel) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mToManyPropertyName.objectCompare (p->mProperty_mToManyPropertyName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_arrayControllerDeclarationAST::objectCompare (const GALGAS_arrayControllerDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerDeclarationAST::GALGAS_arrayControllerDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerDeclarationAST::GALGAS_arrayControllerDeclarationAST (const cPtr_arrayControllerDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_arrayControllerDeclarationAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerDeclarationAST GALGAS_arrayControllerDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                                            const GALGAS_lstring & inAttribute_mControllerName,
                                                                                            const GALGAS_arrayControllerBoundModelAST & inAttribute_mModel,
                                                                                            const GALGAS_lstring & inAttribute_mToManyPropertyName
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mControllerName.isValid () && inAttribute_mModel.isValid () && inAttribute_mToManyPropertyName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_arrayControllerDeclarationAST (inAttribute_mClassName, inAttribute_mControllerName, inAttribute_mModel, inAttribute_mToManyPropertyName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_arrayControllerDeclarationAST::getter_mControllerName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayControllerDeclarationAST * p = (const cPtr_arrayControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerDeclarationAST) ;
    result = p->mProperty_mControllerName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_arrayControllerDeclarationAST::getter_mControllerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mControllerName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerBoundModelAST GALGAS_arrayControllerDeclarationAST::getter_mModel (UNUSED_LOCATION_ARGS) const {
  GALGAS_arrayControllerBoundModelAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayControllerDeclarationAST * p = (const cPtr_arrayControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerDeclarationAST) ;
    result = p->mProperty_mModel ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerBoundModelAST cPtr_arrayControllerDeclarationAST::getter_mModel (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModel ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_arrayControllerDeclarationAST::getter_mToManyPropertyName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayControllerDeclarationAST * p = (const cPtr_arrayControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerDeclarationAST) ;
    result = p->mProperty_mToManyPropertyName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_arrayControllerDeclarationAST::getter_mToManyPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mToManyPropertyName ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerDeclarationAST::setter_setMControllerName (GALGAS_lstring inValue
                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_arrayControllerDeclarationAST * p = (cPtr_arrayControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerDeclarationAST) ;
    p->mProperty_mControllerName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_arrayControllerDeclarationAST::setter_setMControllerName (GALGAS_lstring inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mControllerName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerDeclarationAST::setter_setMModel (GALGAS_arrayControllerBoundModelAST inValue
                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_arrayControllerDeclarationAST * p = (cPtr_arrayControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerDeclarationAST) ;
    p->mProperty_mModel = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_arrayControllerDeclarationAST::setter_setMModel (GALGAS_arrayControllerBoundModelAST inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mModel = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerDeclarationAST::setter_setMToManyPropertyName (GALGAS_lstring inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_arrayControllerDeclarationAST * p = (cPtr_arrayControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerDeclarationAST) ;
    p->mProperty_mToManyPropertyName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_arrayControllerDeclarationAST::setter_setMToManyPropertyName (GALGAS_lstring inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mToManyPropertyName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @arrayControllerDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_arrayControllerDeclarationAST::cPtr_arrayControllerDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                                        const GALGAS_lstring & in_mControllerName,
                                                                        const GALGAS_arrayControllerBoundModelAST & in_mModel,
                                                                        const GALGAS_lstring & in_mToManyPropertyName
                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mControllerName (in_mControllerName),
mProperty_mModel (in_mModel),
mProperty_mToManyPropertyName (in_mToManyPropertyName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_arrayControllerDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerDeclarationAST ;
}

void cPtr_arrayControllerDeclarationAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@arrayControllerDeclarationAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mControllerName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mModel.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mToManyPropertyName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_arrayControllerDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_arrayControllerDeclarationAST (mProperty_mClassName, mProperty_mControllerName, mProperty_mModel, mProperty_mToManyPropertyName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@arrayControllerDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerDeclarationAST ("arrayControllerDeclarationAST",
                                                      & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_arrayControllerDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_arrayControllerDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerDeclarationAST GALGAS_arrayControllerDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerDeclarationAST result ;
  const GALGAS_arrayControllerDeclarationAST * p = (const GALGAS_arrayControllerDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayControllerDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_arrayControllerGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_arrayControllerGeneration * p = (const cPtr_arrayControllerGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mOwnerName.objectCompare (p->mProperty_mOwnerName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mControllerName.objectCompare (p->mProperty_mControllerName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mModelTypeName.objectCompare (p->mProperty_mModelTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mArrayControllerModelKind.objectCompare (p->mProperty_mArrayControllerModelKind) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElementTypeName.objectCompare (p->mProperty_mElementTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElementTypeIsGraphic.objectCompare (p->mProperty_mElementTypeIsGraphic) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_arrayControllerGeneration::objectCompare (const GALGAS_arrayControllerGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerGeneration::GALGAS_arrayControllerGeneration (void) :
GALGAS_abstractFileGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerGeneration::GALGAS_arrayControllerGeneration (const cPtr_arrayControllerGeneration * inSourcePtr) :
GALGAS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_arrayControllerGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerGeneration GALGAS_arrayControllerGeneration::constructor_new (const GALGAS_string & inAttribute_mOwnerName,
                                                                                    const GALGAS_lstring & inAttribute_mControllerName,
                                                                                    const GALGAS_string & inAttribute_mModelTypeName,
                                                                                    const GALGAS_arrayControllerModelKind & inAttribute_mArrayControllerModelKind,
                                                                                    const GALGAS_string & inAttribute_mElementTypeName,
                                                                                    const GALGAS_bool & inAttribute_mElementTypeIsGraphic
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerGeneration result ;
  if (inAttribute_mOwnerName.isValid () && inAttribute_mControllerName.isValid () && inAttribute_mModelTypeName.isValid () && inAttribute_mArrayControllerModelKind.isValid () && inAttribute_mElementTypeName.isValid () && inAttribute_mElementTypeIsGraphic.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_arrayControllerGeneration (inAttribute_mOwnerName, inAttribute_mControllerName, inAttribute_mModelTypeName, inAttribute_mArrayControllerModelKind, inAttribute_mElementTypeName, inAttribute_mElementTypeIsGraphic COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_arrayControllerGeneration::getter_mOwnerName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayControllerGeneration * p = (const cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    result = p->mProperty_mOwnerName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_arrayControllerGeneration::getter_mOwnerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOwnerName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_arrayControllerGeneration::getter_mControllerName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayControllerGeneration * p = (const cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    result = p->mProperty_mControllerName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_arrayControllerGeneration::getter_mControllerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mControllerName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_arrayControllerGeneration::getter_mModelTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayControllerGeneration * p = (const cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    result = p->mProperty_mModelTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_arrayControllerGeneration::getter_mModelTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModelTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerModelKind GALGAS_arrayControllerGeneration::getter_mArrayControllerModelKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_arrayControllerModelKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayControllerGeneration * p = (const cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    result = p->mProperty_mArrayControllerModelKind ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerModelKind cPtr_arrayControllerGeneration::getter_mArrayControllerModelKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArrayControllerModelKind ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_arrayControllerGeneration::getter_mElementTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayControllerGeneration * p = (const cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    result = p->mProperty_mElementTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_arrayControllerGeneration::getter_mElementTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElementTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_arrayControllerGeneration::getter_mElementTypeIsGraphic (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayControllerGeneration * p = (const cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    result = p->mProperty_mElementTypeIsGraphic ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_arrayControllerGeneration::getter_mElementTypeIsGraphic (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElementTypeIsGraphic ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerGeneration::setter_setMOwnerName (GALGAS_string inValue
                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_arrayControllerGeneration * p = (cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    p->mProperty_mOwnerName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_arrayControllerGeneration::setter_setMOwnerName (GALGAS_string inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOwnerName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerGeneration::setter_setMControllerName (GALGAS_lstring inValue
                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_arrayControllerGeneration * p = (cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    p->mProperty_mControllerName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_arrayControllerGeneration::setter_setMControllerName (GALGAS_lstring inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mControllerName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerGeneration::setter_setMModelTypeName (GALGAS_string inValue
                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_arrayControllerGeneration * p = (cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    p->mProperty_mModelTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_arrayControllerGeneration::setter_setMModelTypeName (GALGAS_string inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mModelTypeName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerGeneration::setter_setMArrayControllerModelKind (GALGAS_arrayControllerModelKind inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_arrayControllerGeneration * p = (cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    p->mProperty_mArrayControllerModelKind = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_arrayControllerGeneration::setter_setMArrayControllerModelKind (GALGAS_arrayControllerModelKind inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mArrayControllerModelKind = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerGeneration::setter_setMElementTypeName (GALGAS_string inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_arrayControllerGeneration * p = (cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    p->mProperty_mElementTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_arrayControllerGeneration::setter_setMElementTypeName (GALGAS_string inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mElementTypeName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerGeneration::setter_setMElementTypeIsGraphic (GALGAS_bool inValue
                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_arrayControllerGeneration * p = (cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    p->mProperty_mElementTypeIsGraphic = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_arrayControllerGeneration::setter_setMElementTypeIsGraphic (GALGAS_bool inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mElementTypeIsGraphic = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @arrayControllerGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_arrayControllerGeneration::cPtr_arrayControllerGeneration (const GALGAS_string & in_mOwnerName,
                                                                const GALGAS_lstring & in_mControllerName,
                                                                const GALGAS_string & in_mModelTypeName,
                                                                const GALGAS_arrayControllerModelKind & in_mArrayControllerModelKind,
                                                                const GALGAS_string & in_mElementTypeName,
                                                                const GALGAS_bool & in_mElementTypeIsGraphic
                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (THERE),
mProperty_mOwnerName (in_mOwnerName),
mProperty_mControllerName (in_mControllerName),
mProperty_mModelTypeName (in_mModelTypeName),
mProperty_mArrayControllerModelKind (in_mArrayControllerModelKind),
mProperty_mElementTypeName (in_mElementTypeName),
mProperty_mElementTypeIsGraphic (in_mElementTypeIsGraphic) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_arrayControllerGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerGeneration ;
}

void cPtr_arrayControllerGeneration::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@arrayControllerGeneration:" ;
  mProperty_mOwnerName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mControllerName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mModelTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mArrayControllerModelKind.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElementTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElementTypeIsGraphic.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_arrayControllerGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_arrayControllerGeneration (mProperty_mOwnerName, mProperty_mControllerName, mProperty_mModelTypeName, mProperty_mArrayControllerModelKind, mProperty_mElementTypeName, mProperty_mElementTypeIsGraphic COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@arrayControllerGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerGeneration ("arrayControllerGeneration",
                                                  & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_arrayControllerGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_arrayControllerGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerGeneration GALGAS_arrayControllerGeneration::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerGeneration result ;
  const GALGAS_arrayControllerGeneration * p = (const GALGAS_arrayControllerGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayControllerGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewColumnBindingAST::GALGAS_tableViewColumnBindingAST (void) :
mProperty_mRunActionName (),
mProperty_mEnabledBindingDescriptor (),
mProperty_mHiddenBindingDescriptor (),
mProperty_mRegularBindingList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewColumnBindingAST::~ GALGAS_tableViewColumnBindingAST (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewColumnBindingAST::GALGAS_tableViewColumnBindingAST (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_multipleBindingDescriptor & inOperand1,
                                                                    const GALGAS_multipleBindingDescriptor & inOperand2,
                                                                    const GALGAS_regularBindingList & inOperand3) :
mProperty_mRunActionName (inOperand0),
mProperty_mEnabledBindingDescriptor (inOperand1),
mProperty_mHiddenBindingDescriptor (inOperand2),
mProperty_mRegularBindingList (inOperand3) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewColumnBindingAST GALGAS_tableViewColumnBindingAST::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_multipleBindingDescriptor & inOperand1,
                                                                                    const GALGAS_multipleBindingDescriptor & inOperand2,
                                                                                    const GALGAS_regularBindingList & inOperand3 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_tableViewColumnBindingAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_tableViewColumnBindingAST (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_tableViewColumnBindingAST::objectCompare (const GALGAS_tableViewColumnBindingAST & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mRunActionName.objectCompare (inOperand.mProperty_mRunActionName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEnabledBindingDescriptor.objectCompare (inOperand.mProperty_mEnabledBindingDescriptor) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mHiddenBindingDescriptor.objectCompare (inOperand.mProperty_mHiddenBindingDescriptor) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRegularBindingList.objectCompare (inOperand.mProperty_mRegularBindingList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_tableViewColumnBindingAST::isValid (void) const {
  return mProperty_mRunActionName.isValid () && mProperty_mEnabledBindingDescriptor.isValid () && mProperty_mHiddenBindingDescriptor.isValid () && mProperty_mRegularBindingList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewColumnBindingAST::drop (void) {
  mProperty_mRunActionName.drop () ;
  mProperty_mEnabledBindingDescriptor.drop () ;
  mProperty_mHiddenBindingDescriptor.drop () ;
  mProperty_mRegularBindingList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewColumnBindingAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @tableViewColumnBindingAST:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mRunActionName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEnabledBindingDescriptor.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mHiddenBindingDescriptor.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRegularBindingList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_tableViewColumnBindingAST::getter_mRunActionName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRunActionName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingDescriptor GALGAS_tableViewColumnBindingAST::getter_mEnabledBindingDescriptor (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnabledBindingDescriptor ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingDescriptor GALGAS_tableViewColumnBindingAST::getter_mHiddenBindingDescriptor (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHiddenBindingDescriptor ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularBindingList GALGAS_tableViewColumnBindingAST::getter_mRegularBindingList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegularBindingList ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@tableViewColumnBindingAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tableViewColumnBindingAST ("tableViewColumnBindingAST",
                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_tableViewColumnBindingAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableViewColumnBindingAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_tableViewColumnBindingAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tableViewColumnBindingAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewColumnBindingAST GALGAS_tableViewColumnBindingAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_tableViewColumnBindingAST result ;
  const GALGAS_tableViewColumnBindingAST * p = (const GALGAS_tableViewColumnBindingAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_tableViewColumnBindingAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tableViewColumnBindingAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_tableViewControllerDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_tableViewControllerDeclarationAST * p = (const cPtr_tableViewControllerDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_tableViewControllerDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mControllerName.objectCompare (p->mProperty_mControllerName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsRoot.objectCompare (p->mProperty_mIsRoot) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRootEntityName.objectCompare (p->mProperty_mRootEntityName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mToManyPropertyName.objectCompare (p->mProperty_mToManyPropertyName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTableViewControllerBoundColumnListAST.objectCompare (p->mProperty_mTableViewControllerBoundColumnListAST) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTableViewControllerAttributListAST.objectCompare (p->mProperty_mTableViewControllerAttributListAST) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_tableViewControllerDeclarationAST::objectCompare (const GALGAS_tableViewControllerDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerDeclarationAST::GALGAS_tableViewControllerDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerDeclarationAST GALGAS_tableViewControllerDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_tableViewControllerDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                    GALGAS_lstring::constructor_default (HERE),
                                                                    GALGAS_bool::constructor_default (HERE),
                                                                    GALGAS_lstring::constructor_default (HERE),
                                                                    GALGAS_lstring::constructor_default (HERE),
                                                                    GALGAS_tableViewControllerBoundColumnListAST::constructor_emptyList (HERE),
                                                                    GALGAS_tableViewControllerAttributListAST::constructor_emptyList (HERE)
                                                                    COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerDeclarationAST::GALGAS_tableViewControllerDeclarationAST (const cPtr_tableViewControllerDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_tableViewControllerDeclarationAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerDeclarationAST GALGAS_tableViewControllerDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                                                    const GALGAS_lstring & inAttribute_mControllerName,
                                                                                                    const GALGAS_bool & inAttribute_mIsRoot,
                                                                                                    const GALGAS_lstring & inAttribute_mRootEntityName,
                                                                                                    const GALGAS_lstring & inAttribute_mToManyPropertyName,
                                                                                                    const GALGAS_tableViewControllerBoundColumnListAST & inAttribute_mTableViewControllerBoundColumnListAST,
                                                                                                    const GALGAS_tableViewControllerAttributListAST & inAttribute_mTableViewControllerAttributListAST
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_tableViewControllerDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mControllerName.isValid () && inAttribute_mIsRoot.isValid () && inAttribute_mRootEntityName.isValid () && inAttribute_mToManyPropertyName.isValid () && inAttribute_mTableViewControllerBoundColumnListAST.isValid () && inAttribute_mTableViewControllerAttributListAST.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_tableViewControllerDeclarationAST (inAttribute_mClassName, inAttribute_mControllerName, inAttribute_mIsRoot, inAttribute_mRootEntityName, inAttribute_mToManyPropertyName, inAttribute_mTableViewControllerBoundColumnListAST, inAttribute_mTableViewControllerAttributListAST COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_tableViewControllerDeclarationAST::getter_mControllerName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_tableViewControllerDeclarationAST * p = (const cPtr_tableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerDeclarationAST) ;
    result = p->mProperty_mControllerName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_tableViewControllerDeclarationAST::getter_mControllerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mControllerName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_tableViewControllerDeclarationAST::getter_mIsRoot (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_tableViewControllerDeclarationAST * p = (const cPtr_tableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerDeclarationAST) ;
    result = p->mProperty_mIsRoot ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_tableViewControllerDeclarationAST::getter_mIsRoot (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsRoot ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_tableViewControllerDeclarationAST::getter_mRootEntityName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_tableViewControllerDeclarationAST * p = (const cPtr_tableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerDeclarationAST) ;
    result = p->mProperty_mRootEntityName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_tableViewControllerDeclarationAST::getter_mRootEntityName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRootEntityName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_tableViewControllerDeclarationAST::getter_mToManyPropertyName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_tableViewControllerDeclarationAST * p = (const cPtr_tableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerDeclarationAST) ;
    result = p->mProperty_mToManyPropertyName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_tableViewControllerDeclarationAST::getter_mToManyPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mToManyPropertyName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerBoundColumnListAST GALGAS_tableViewControllerDeclarationAST::getter_mTableViewControllerBoundColumnListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_tableViewControllerBoundColumnListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_tableViewControllerDeclarationAST * p = (const cPtr_tableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerDeclarationAST) ;
    result = p->mProperty_mTableViewControllerBoundColumnListAST ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerBoundColumnListAST cPtr_tableViewControllerDeclarationAST::getter_mTableViewControllerBoundColumnListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTableViewControllerBoundColumnListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerAttributListAST GALGAS_tableViewControllerDeclarationAST::getter_mTableViewControllerAttributListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_tableViewControllerAttributListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_tableViewControllerDeclarationAST * p = (const cPtr_tableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerDeclarationAST) ;
    result = p->mProperty_mTableViewControllerAttributListAST ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerAttributListAST cPtr_tableViewControllerDeclarationAST::getter_mTableViewControllerAttributListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTableViewControllerAttributListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerDeclarationAST::setter_setMControllerName (GALGAS_lstring inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_tableViewControllerDeclarationAST * p = (cPtr_tableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerDeclarationAST) ;
    p->mProperty_mControllerName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_tableViewControllerDeclarationAST::setter_setMControllerName (GALGAS_lstring inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mControllerName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerDeclarationAST::setter_setMIsRoot (GALGAS_bool inValue
                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_tableViewControllerDeclarationAST * p = (cPtr_tableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerDeclarationAST) ;
    p->mProperty_mIsRoot = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_tableViewControllerDeclarationAST::setter_setMIsRoot (GALGAS_bool inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mIsRoot = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerDeclarationAST::setter_setMRootEntityName (GALGAS_lstring inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_tableViewControllerDeclarationAST * p = (cPtr_tableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerDeclarationAST) ;
    p->mProperty_mRootEntityName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_tableViewControllerDeclarationAST::setter_setMRootEntityName (GALGAS_lstring inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRootEntityName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerDeclarationAST::setter_setMToManyPropertyName (GALGAS_lstring inValue
                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_tableViewControllerDeclarationAST * p = (cPtr_tableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerDeclarationAST) ;
    p->mProperty_mToManyPropertyName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_tableViewControllerDeclarationAST::setter_setMToManyPropertyName (GALGAS_lstring inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mToManyPropertyName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerDeclarationAST::setter_setMTableViewControllerBoundColumnListAST (GALGAS_tableViewControllerBoundColumnListAST inValue
                                                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_tableViewControllerDeclarationAST * p = (cPtr_tableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerDeclarationAST) ;
    p->mProperty_mTableViewControllerBoundColumnListAST = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_tableViewControllerDeclarationAST::setter_setMTableViewControllerBoundColumnListAST (GALGAS_tableViewControllerBoundColumnListAST inValue
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTableViewControllerBoundColumnListAST = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerDeclarationAST::setter_setMTableViewControllerAttributListAST (GALGAS_tableViewControllerAttributListAST inValue
                                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_tableViewControllerDeclarationAST * p = (cPtr_tableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerDeclarationAST) ;
    p->mProperty_mTableViewControllerAttributListAST = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_tableViewControllerDeclarationAST::setter_setMTableViewControllerAttributListAST (GALGAS_tableViewControllerAttributListAST inValue
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTableViewControllerAttributListAST = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @tableViewControllerDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_tableViewControllerDeclarationAST::cPtr_tableViewControllerDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                                                const GALGAS_lstring & in_mControllerName,
                                                                                const GALGAS_bool & in_mIsRoot,
                                                                                const GALGAS_lstring & in_mRootEntityName,
                                                                                const GALGAS_lstring & in_mToManyPropertyName,
                                                                                const GALGAS_tableViewControllerBoundColumnListAST & in_mTableViewControllerBoundColumnListAST,
                                                                                const GALGAS_tableViewControllerAttributListAST & in_mTableViewControllerAttributListAST
                                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mControllerName (in_mControllerName),
mProperty_mIsRoot (in_mIsRoot),
mProperty_mRootEntityName (in_mRootEntityName),
mProperty_mToManyPropertyName (in_mToManyPropertyName),
mProperty_mTableViewControllerBoundColumnListAST (in_mTableViewControllerBoundColumnListAST),
mProperty_mTableViewControllerAttributListAST (in_mTableViewControllerAttributListAST) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_tableViewControllerDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableViewControllerDeclarationAST ;
}

void cPtr_tableViewControllerDeclarationAST::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@tableViewControllerDeclarationAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mControllerName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsRoot.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRootEntityName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mToManyPropertyName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTableViewControllerBoundColumnListAST.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTableViewControllerAttributListAST.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_tableViewControllerDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_tableViewControllerDeclarationAST (mProperty_mClassName, mProperty_mControllerName, mProperty_mIsRoot, mProperty_mRootEntityName, mProperty_mToManyPropertyName, mProperty_mTableViewControllerBoundColumnListAST, mProperty_mTableViewControllerAttributListAST COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@tableViewControllerDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tableViewControllerDeclarationAST ("tableViewControllerDeclarationAST",
                                                          & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_tableViewControllerDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableViewControllerDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_tableViewControllerDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tableViewControllerDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerDeclarationAST GALGAS_tableViewControllerDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_tableViewControllerDeclarationAST result ;
  const GALGAS_tableViewControllerDeclarationAST * p = (const GALGAS_tableViewControllerDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_tableViewControllerDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tableViewControllerDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_tableViewControllerGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_tableViewControllerGeneration * p = (const cPtr_tableViewControllerGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_tableViewControllerGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mOwnerName.objectCompare (p->mProperty_mOwnerName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mControllerName.objectCompare (p->mProperty_mControllerName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mModelString.objectCompare (p->mProperty_mModelString) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTableViewControllerBoundColumnListForGeneration.objectCompare (p->mProperty_mTableViewControllerBoundColumnListForGeneration) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTableViewControllerSortedColumnListForGeneration.objectCompare (p->mProperty_mTableViewControllerSortedColumnListForGeneration) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mModelTypeName.objectCompare (p->mProperty_mModelTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTableViewControllerModelKind.objectCompare (p->mProperty_mTableViewControllerModelKind) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElementTypeName.objectCompare (p->mProperty_mElementTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElementTypeIsGraphic.objectCompare (p->mProperty_mElementTypeIsGraphic) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAttributeListForGeneration.objectCompare (p->mProperty_mAttributeListForGeneration) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_tableViewControllerGeneration::objectCompare (const GALGAS_tableViewControllerGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerGeneration::GALGAS_tableViewControllerGeneration (void) :
GALGAS_abstractFileGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerGeneration::GALGAS_tableViewControllerGeneration (const cPtr_tableViewControllerGeneration * inSourcePtr) :
GALGAS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_tableViewControllerGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerGeneration GALGAS_tableViewControllerGeneration::constructor_new (const GALGAS_string & inAttribute_mOwnerName,
                                                                                            const GALGAS_lstring & inAttribute_mControllerName,
                                                                                            const GALGAS_string & inAttribute_mModelString,
                                                                                            const GALGAS_tableViewControllerBoundColumnListForGeneration & inAttribute_mTableViewControllerBoundColumnListForGeneration,
                                                                                            const GALGAS_tableViewControllerSortedColumnListForGeneration & inAttribute_mTableViewControllerSortedColumnListForGeneration,
                                                                                            const GALGAS_string & inAttribute_mModelTypeName,
                                                                                            const GALGAS_tableViewControllerModelKind & inAttribute_mTableViewControllerModelKind,
                                                                                            const GALGAS_string & inAttribute_mElementTypeName,
                                                                                            const GALGAS_bool & inAttribute_mElementTypeIsGraphic,
                                                                                            const GALGAS__32_stringlist & inAttribute_mAttributeListForGeneration
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_tableViewControllerGeneration result ;
  if (inAttribute_mOwnerName.isValid () && inAttribute_mControllerName.isValid () && inAttribute_mModelString.isValid () && inAttribute_mTableViewControllerBoundColumnListForGeneration.isValid () && inAttribute_mTableViewControllerSortedColumnListForGeneration.isValid () && inAttribute_mModelTypeName.isValid () && inAttribute_mTableViewControllerModelKind.isValid () && inAttribute_mElementTypeName.isValid () && inAttribute_mElementTypeIsGraphic.isValid () && inAttribute_mAttributeListForGeneration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_tableViewControllerGeneration (inAttribute_mOwnerName, inAttribute_mControllerName, inAttribute_mModelString, inAttribute_mTableViewControllerBoundColumnListForGeneration, inAttribute_mTableViewControllerSortedColumnListForGeneration, inAttribute_mModelTypeName, inAttribute_mTableViewControllerModelKind, inAttribute_mElementTypeName, inAttribute_mElementTypeIsGraphic, inAttribute_mAttributeListForGeneration COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_tableViewControllerGeneration::getter_mOwnerName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_tableViewControllerGeneration * p = (const cPtr_tableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerGeneration) ;
    result = p->mProperty_mOwnerName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_tableViewControllerGeneration::getter_mOwnerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOwnerName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_tableViewControllerGeneration::getter_mControllerName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_tableViewControllerGeneration * p = (const cPtr_tableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerGeneration) ;
    result = p->mProperty_mControllerName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_tableViewControllerGeneration::getter_mControllerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mControllerName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_tableViewControllerGeneration::getter_mModelString (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_tableViewControllerGeneration * p = (const cPtr_tableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerGeneration) ;
    result = p->mProperty_mModelString ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_tableViewControllerGeneration::getter_mModelString (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModelString ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerBoundColumnListForGeneration GALGAS_tableViewControllerGeneration::getter_mTableViewControllerBoundColumnListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_tableViewControllerBoundColumnListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_tableViewControllerGeneration * p = (const cPtr_tableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerGeneration) ;
    result = p->mProperty_mTableViewControllerBoundColumnListForGeneration ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerBoundColumnListForGeneration cPtr_tableViewControllerGeneration::getter_mTableViewControllerBoundColumnListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTableViewControllerBoundColumnListForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerSortedColumnListForGeneration GALGAS_tableViewControllerGeneration::getter_mTableViewControllerSortedColumnListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_tableViewControllerSortedColumnListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_tableViewControllerGeneration * p = (const cPtr_tableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerGeneration) ;
    result = p->mProperty_mTableViewControllerSortedColumnListForGeneration ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerSortedColumnListForGeneration cPtr_tableViewControllerGeneration::getter_mTableViewControllerSortedColumnListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTableViewControllerSortedColumnListForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_tableViewControllerGeneration::getter_mModelTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_tableViewControllerGeneration * p = (const cPtr_tableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerGeneration) ;
    result = p->mProperty_mModelTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_tableViewControllerGeneration::getter_mModelTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModelTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerModelKind GALGAS_tableViewControllerGeneration::getter_mTableViewControllerModelKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_tableViewControllerModelKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_tableViewControllerGeneration * p = (const cPtr_tableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerGeneration) ;
    result = p->mProperty_mTableViewControllerModelKind ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerModelKind cPtr_tableViewControllerGeneration::getter_mTableViewControllerModelKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTableViewControllerModelKind ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_tableViewControllerGeneration::getter_mElementTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_tableViewControllerGeneration * p = (const cPtr_tableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerGeneration) ;
    result = p->mProperty_mElementTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_tableViewControllerGeneration::getter_mElementTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElementTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_tableViewControllerGeneration::getter_mElementTypeIsGraphic (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_tableViewControllerGeneration * p = (const cPtr_tableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerGeneration) ;
    result = p->mProperty_mElementTypeIsGraphic ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_tableViewControllerGeneration::getter_mElementTypeIsGraphic (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElementTypeIsGraphic ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS__32_stringlist GALGAS_tableViewControllerGeneration::getter_mAttributeListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS__32_stringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_tableViewControllerGeneration * p = (const cPtr_tableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerGeneration) ;
    result = p->mProperty_mAttributeListForGeneration ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS__32_stringlist cPtr_tableViewControllerGeneration::getter_mAttributeListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAttributeListForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerGeneration::setter_setMOwnerName (GALGAS_string inValue
                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_tableViewControllerGeneration * p = (cPtr_tableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerGeneration) ;
    p->mProperty_mOwnerName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_tableViewControllerGeneration::setter_setMOwnerName (GALGAS_string inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOwnerName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerGeneration::setter_setMControllerName (GALGAS_lstring inValue
                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_tableViewControllerGeneration * p = (cPtr_tableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerGeneration) ;
    p->mProperty_mControllerName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_tableViewControllerGeneration::setter_setMControllerName (GALGAS_lstring inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mControllerName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerGeneration::setter_setMModelString (GALGAS_string inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_tableViewControllerGeneration * p = (cPtr_tableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerGeneration) ;
    p->mProperty_mModelString = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_tableViewControllerGeneration::setter_setMModelString (GALGAS_string inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mModelString = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerGeneration::setter_setMTableViewControllerBoundColumnListForGeneration (GALGAS_tableViewControllerBoundColumnListForGeneration inValue
                                                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_tableViewControllerGeneration * p = (cPtr_tableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerGeneration) ;
    p->mProperty_mTableViewControllerBoundColumnListForGeneration = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_tableViewControllerGeneration::setter_setMTableViewControllerBoundColumnListForGeneration (GALGAS_tableViewControllerBoundColumnListForGeneration inValue
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTableViewControllerBoundColumnListForGeneration = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerGeneration::setter_setMTableViewControllerSortedColumnListForGeneration (GALGAS_tableViewControllerSortedColumnListForGeneration inValue
                                                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_tableViewControllerGeneration * p = (cPtr_tableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerGeneration) ;
    p->mProperty_mTableViewControllerSortedColumnListForGeneration = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_tableViewControllerGeneration::setter_setMTableViewControllerSortedColumnListForGeneration (GALGAS_tableViewControllerSortedColumnListForGeneration inValue
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTableViewControllerSortedColumnListForGeneration = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerGeneration::setter_setMModelTypeName (GALGAS_string inValue
                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_tableViewControllerGeneration * p = (cPtr_tableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerGeneration) ;
    p->mProperty_mModelTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_tableViewControllerGeneration::setter_setMModelTypeName (GALGAS_string inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mModelTypeName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerGeneration::setter_setMTableViewControllerModelKind (GALGAS_tableViewControllerModelKind inValue
                                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_tableViewControllerGeneration * p = (cPtr_tableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerGeneration) ;
    p->mProperty_mTableViewControllerModelKind = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_tableViewControllerGeneration::setter_setMTableViewControllerModelKind (GALGAS_tableViewControllerModelKind inValue
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTableViewControllerModelKind = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerGeneration::setter_setMElementTypeName (GALGAS_string inValue
                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_tableViewControllerGeneration * p = (cPtr_tableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerGeneration) ;
    p->mProperty_mElementTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_tableViewControllerGeneration::setter_setMElementTypeName (GALGAS_string inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mElementTypeName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerGeneration::setter_setMElementTypeIsGraphic (GALGAS_bool inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_tableViewControllerGeneration * p = (cPtr_tableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerGeneration) ;
    p->mProperty_mElementTypeIsGraphic = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_tableViewControllerGeneration::setter_setMElementTypeIsGraphic (GALGAS_bool inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mElementTypeIsGraphic = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerGeneration::setter_setMAttributeListForGeneration (GALGAS__32_stringlist inValue
                                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_tableViewControllerGeneration * p = (cPtr_tableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerGeneration) ;
    p->mProperty_mAttributeListForGeneration = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_tableViewControllerGeneration::setter_setMAttributeListForGeneration (GALGAS__32_stringlist inValue
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mAttributeListForGeneration = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @tableViewControllerGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_tableViewControllerGeneration::cPtr_tableViewControllerGeneration (const GALGAS_string & in_mOwnerName,
                                                                        const GALGAS_lstring & in_mControllerName,
                                                                        const GALGAS_string & in_mModelString,
                                                                        const GALGAS_tableViewControllerBoundColumnListForGeneration & in_mTableViewControllerBoundColumnListForGeneration,
                                                                        const GALGAS_tableViewControllerSortedColumnListForGeneration & in_mTableViewControllerSortedColumnListForGeneration,
                                                                        const GALGAS_string & in_mModelTypeName,
                                                                        const GALGAS_tableViewControllerModelKind & in_mTableViewControllerModelKind,
                                                                        const GALGAS_string & in_mElementTypeName,
                                                                        const GALGAS_bool & in_mElementTypeIsGraphic,
                                                                        const GALGAS__32_stringlist & in_mAttributeListForGeneration
                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (THERE),
mProperty_mOwnerName (in_mOwnerName),
mProperty_mControllerName (in_mControllerName),
mProperty_mModelString (in_mModelString),
mProperty_mTableViewControllerBoundColumnListForGeneration (in_mTableViewControllerBoundColumnListForGeneration),
mProperty_mTableViewControllerSortedColumnListForGeneration (in_mTableViewControllerSortedColumnListForGeneration),
mProperty_mModelTypeName (in_mModelTypeName),
mProperty_mTableViewControllerModelKind (in_mTableViewControllerModelKind),
mProperty_mElementTypeName (in_mElementTypeName),
mProperty_mElementTypeIsGraphic (in_mElementTypeIsGraphic),
mProperty_mAttributeListForGeneration (in_mAttributeListForGeneration) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_tableViewControllerGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableViewControllerGeneration ;
}

void cPtr_tableViewControllerGeneration::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@tableViewControllerGeneration:" ;
  mProperty_mOwnerName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mControllerName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mModelString.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTableViewControllerBoundColumnListForGeneration.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTableViewControllerSortedColumnListForGeneration.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mModelTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTableViewControllerModelKind.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElementTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElementTypeIsGraphic.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAttributeListForGeneration.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_tableViewControllerGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_tableViewControllerGeneration (mProperty_mOwnerName, mProperty_mControllerName, mProperty_mModelString, mProperty_mTableViewControllerBoundColumnListForGeneration, mProperty_mTableViewControllerSortedColumnListForGeneration, mProperty_mModelTypeName, mProperty_mTableViewControllerModelKind, mProperty_mElementTypeName, mProperty_mElementTypeIsGraphic, mProperty_mAttributeListForGeneration COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@tableViewControllerGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tableViewControllerGeneration ("tableViewControllerGeneration",
                                                      & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_tableViewControllerGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableViewControllerGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_tableViewControllerGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tableViewControllerGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerGeneration GALGAS_tableViewControllerGeneration::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_tableViewControllerGeneration result ;
  const GALGAS_tableViewControllerGeneration * p = (const GALGAS_tableViewControllerGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_tableViewControllerGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tableViewControllerGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_selectionControllerDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_selectionControllerDeclarationAST * p = (const cPtr_selectionControllerDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_selectionControllerDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSelectionControllerName.objectCompare (p->mProperty_mSelectionControllerName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mModelControllerName.objectCompare (p->mProperty_mModelControllerName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mModelControllerPropertyName.objectCompare (p->mProperty_mModelControllerPropertyName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSelectionEntityName.objectCompare (p->mProperty_mSelectionEntityName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_selectionControllerDeclarationAST::objectCompare (const GALGAS_selectionControllerDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectionControllerDeclarationAST::GALGAS_selectionControllerDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectionControllerDeclarationAST GALGAS_selectionControllerDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_selectionControllerDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                    GALGAS_lstring::constructor_default (HERE),
                                                                    GALGAS_lstring::constructor_default (HERE),
                                                                    GALGAS_lstring::constructor_default (HERE),
                                                                    GALGAS_lstring::constructor_default (HERE)
                                                                    COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectionControllerDeclarationAST::GALGAS_selectionControllerDeclarationAST (const cPtr_selectionControllerDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selectionControllerDeclarationAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectionControllerDeclarationAST GALGAS_selectionControllerDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                                                    const GALGAS_lstring & inAttribute_mSelectionControllerName,
                                                                                                    const GALGAS_lstring & inAttribute_mModelControllerName,
                                                                                                    const GALGAS_lstring & inAttribute_mModelControllerPropertyName,
                                                                                                    const GALGAS_lstring & inAttribute_mSelectionEntityName
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_selectionControllerDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mSelectionControllerName.isValid () && inAttribute_mModelControllerName.isValid () && inAttribute_mModelControllerPropertyName.isValid () && inAttribute_mSelectionEntityName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_selectionControllerDeclarationAST (inAttribute_mClassName, inAttribute_mSelectionControllerName, inAttribute_mModelControllerName, inAttribute_mModelControllerPropertyName, inAttribute_mSelectionEntityName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_selectionControllerDeclarationAST::getter_mSelectionControllerName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_selectionControllerDeclarationAST * p = (const cPtr_selectionControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerDeclarationAST) ;
    result = p->mProperty_mSelectionControllerName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_selectionControllerDeclarationAST::getter_mSelectionControllerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelectionControllerName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_selectionControllerDeclarationAST::getter_mModelControllerName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_selectionControllerDeclarationAST * p = (const cPtr_selectionControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerDeclarationAST) ;
    result = p->mProperty_mModelControllerName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_selectionControllerDeclarationAST::getter_mModelControllerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModelControllerName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_selectionControllerDeclarationAST::getter_mModelControllerPropertyName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_selectionControllerDeclarationAST * p = (const cPtr_selectionControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerDeclarationAST) ;
    result = p->mProperty_mModelControllerPropertyName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_selectionControllerDeclarationAST::getter_mModelControllerPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModelControllerPropertyName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_selectionControllerDeclarationAST::getter_mSelectionEntityName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_selectionControllerDeclarationAST * p = (const cPtr_selectionControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerDeclarationAST) ;
    result = p->mProperty_mSelectionEntityName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_selectionControllerDeclarationAST::getter_mSelectionEntityName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelectionEntityName ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_selectionControllerDeclarationAST::setter_setMSelectionControllerName (GALGAS_lstring inValue
                                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_selectionControllerDeclarationAST * p = (cPtr_selectionControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerDeclarationAST) ;
    p->mProperty_mSelectionControllerName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_selectionControllerDeclarationAST::setter_setMSelectionControllerName (GALGAS_lstring inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSelectionControllerName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_selectionControllerDeclarationAST::setter_setMModelControllerName (GALGAS_lstring inValue
                                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_selectionControllerDeclarationAST * p = (cPtr_selectionControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerDeclarationAST) ;
    p->mProperty_mModelControllerName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_selectionControllerDeclarationAST::setter_setMModelControllerName (GALGAS_lstring inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mModelControllerName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_selectionControllerDeclarationAST::setter_setMModelControllerPropertyName (GALGAS_lstring inValue
                                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_selectionControllerDeclarationAST * p = (cPtr_selectionControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerDeclarationAST) ;
    p->mProperty_mModelControllerPropertyName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_selectionControllerDeclarationAST::setter_setMModelControllerPropertyName (GALGAS_lstring inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mModelControllerPropertyName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_selectionControllerDeclarationAST::setter_setMSelectionEntityName (GALGAS_lstring inValue
                                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_selectionControllerDeclarationAST * p = (cPtr_selectionControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerDeclarationAST) ;
    p->mProperty_mSelectionEntityName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_selectionControllerDeclarationAST::setter_setMSelectionEntityName (GALGAS_lstring inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSelectionEntityName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @selectionControllerDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_selectionControllerDeclarationAST::cPtr_selectionControllerDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                                                const GALGAS_lstring & in_mSelectionControllerName,
                                                                                const GALGAS_lstring & in_mModelControllerName,
                                                                                const GALGAS_lstring & in_mModelControllerPropertyName,
                                                                                const GALGAS_lstring & in_mSelectionEntityName
                                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mSelectionControllerName (in_mSelectionControllerName),
mProperty_mModelControllerName (in_mModelControllerName),
mProperty_mModelControllerPropertyName (in_mModelControllerPropertyName),
mProperty_mSelectionEntityName (in_mSelectionEntityName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_selectionControllerDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectionControllerDeclarationAST ;
}

void cPtr_selectionControllerDeclarationAST::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@selectionControllerDeclarationAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSelectionControllerName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mModelControllerName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mModelControllerPropertyName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSelectionEntityName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_selectionControllerDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_selectionControllerDeclarationAST (mProperty_mClassName, mProperty_mSelectionControllerName, mProperty_mModelControllerName, mProperty_mModelControllerPropertyName, mProperty_mSelectionEntityName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@selectionControllerDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selectionControllerDeclarationAST ("selectionControllerDeclarationAST",
                                                          & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selectionControllerDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectionControllerDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selectionControllerDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selectionControllerDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectionControllerDeclarationAST GALGAS_selectionControllerDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_selectionControllerDeclarationAST result ;
  const GALGAS_selectionControllerDeclarationAST * p = (const GALGAS_selectionControllerDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_selectionControllerDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectionControllerDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_boolAsDefaultValue::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_boolAsDefaultValue * p = (const cPtr_boolAsDefaultValue *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_boolAsDefaultValue) ;
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_boolAsDefaultValue::objectCompare (const GALGAS_boolAsDefaultValue & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolAsDefaultValue::GALGAS_boolAsDefaultValue (void) :
GALGAS_abstractDefaultValue () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolAsDefaultValue GALGAS_boolAsDefaultValue::constructor_default (LOCATION_ARGS) {
  return GALGAS_boolAsDefaultValue::constructor_new (GALGAS_lbool::constructor_default (HERE)
                                                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolAsDefaultValue::GALGAS_boolAsDefaultValue (const cPtr_boolAsDefaultValue * inSourcePtr) :
GALGAS_abstractDefaultValue (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_boolAsDefaultValue) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolAsDefaultValue GALGAS_boolAsDefaultValue::constructor_new (const GALGAS_lbool & inAttribute_mValue
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_boolAsDefaultValue result ;
  if (inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_boolAsDefaultValue (inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lbool GALGAS_boolAsDefaultValue::getter_mValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_lbool result ;
  if (NULL != mObjectPtr) {
    const cPtr_boolAsDefaultValue * p = (const cPtr_boolAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolAsDefaultValue) ;
    result = p->mProperty_mValue ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lbool cPtr_boolAsDefaultValue::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_boolAsDefaultValue::setter_setMValue (GALGAS_lbool inValue
                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_boolAsDefaultValue * p = (cPtr_boolAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolAsDefaultValue) ;
    p->mProperty_mValue = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_boolAsDefaultValue::setter_setMValue (GALGAS_lbool inValue
                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mValue = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @boolAsDefaultValue class
//----------------------------------------------------------------------------------------------------------------------

cPtr_boolAsDefaultValue::cPtr_boolAsDefaultValue (const GALGAS_lbool & in_mValue
                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (THERE),
mProperty_mValue (in_mValue) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_boolAsDefaultValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolAsDefaultValue ;
}

void cPtr_boolAsDefaultValue::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@boolAsDefaultValue:" ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_boolAsDefaultValue::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_boolAsDefaultValue (mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@boolAsDefaultValue type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_boolAsDefaultValue ("boolAsDefaultValue",
                                           & kTypeDescriptor_GALGAS_abstractDefaultValue) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_boolAsDefaultValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolAsDefaultValue ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_boolAsDefaultValue::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolAsDefaultValue (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolAsDefaultValue GALGAS_boolAsDefaultValue::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_boolAsDefaultValue result ;
  const GALGAS_boolAsDefaultValue * p = (const GALGAS_boolAsDefaultValue *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_boolAsDefaultValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolAsDefaultValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_stringAsDefaultValue::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_stringAsDefaultValue * p = (const cPtr_stringAsDefaultValue *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_stringAsDefaultValue) ;
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_stringAsDefaultValue::objectCompare (const GALGAS_stringAsDefaultValue & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringAsDefaultValue::GALGAS_stringAsDefaultValue (void) :
GALGAS_abstractDefaultValue () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringAsDefaultValue GALGAS_stringAsDefaultValue::constructor_default (LOCATION_ARGS) {
  return GALGAS_stringAsDefaultValue::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                       COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringAsDefaultValue::GALGAS_stringAsDefaultValue (const cPtr_stringAsDefaultValue * inSourcePtr) :
GALGAS_abstractDefaultValue (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_stringAsDefaultValue) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringAsDefaultValue GALGAS_stringAsDefaultValue::constructor_new (const GALGAS_lstring & inAttribute_mValue
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_stringAsDefaultValue result ;
  if (inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_stringAsDefaultValue (inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_stringAsDefaultValue::getter_mValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_stringAsDefaultValue * p = (const cPtr_stringAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_stringAsDefaultValue) ;
    result = p->mProperty_mValue ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_stringAsDefaultValue::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_stringAsDefaultValue::setter_setMValue (GALGAS_lstring inValue
                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_stringAsDefaultValue * p = (cPtr_stringAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_stringAsDefaultValue) ;
    p->mProperty_mValue = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_stringAsDefaultValue::setter_setMValue (GALGAS_lstring inValue
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mValue = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @stringAsDefaultValue class
//----------------------------------------------------------------------------------------------------------------------

cPtr_stringAsDefaultValue::cPtr_stringAsDefaultValue (const GALGAS_lstring & in_mValue
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (THERE),
mProperty_mValue (in_mValue) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_stringAsDefaultValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringAsDefaultValue ;
}

void cPtr_stringAsDefaultValue::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@stringAsDefaultValue:" ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_stringAsDefaultValue::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_stringAsDefaultValue (mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@stringAsDefaultValue type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_stringAsDefaultValue ("stringAsDefaultValue",
                                             & kTypeDescriptor_GALGAS_abstractDefaultValue) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_stringAsDefaultValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringAsDefaultValue ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_stringAsDefaultValue::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_stringAsDefaultValue (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringAsDefaultValue GALGAS_stringAsDefaultValue::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_stringAsDefaultValue result ;
  const GALGAS_stringAsDefaultValue * p = (const GALGAS_stringAsDefaultValue *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_stringAsDefaultValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("stringAsDefaultValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_identifierAsDefaultValue::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_identifierAsDefaultValue * p = (const cPtr_identifierAsDefaultValue *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_identifierAsDefaultValue) ;
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_identifierAsDefaultValue::objectCompare (const GALGAS_identifierAsDefaultValue & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_identifierAsDefaultValue::GALGAS_identifierAsDefaultValue (void) :
GALGAS_abstractDefaultValue () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_identifierAsDefaultValue GALGAS_identifierAsDefaultValue::constructor_default (LOCATION_ARGS) {
  return GALGAS_identifierAsDefaultValue::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                           COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_identifierAsDefaultValue::GALGAS_identifierAsDefaultValue (const cPtr_identifierAsDefaultValue * inSourcePtr) :
GALGAS_abstractDefaultValue (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_identifierAsDefaultValue) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_identifierAsDefaultValue GALGAS_identifierAsDefaultValue::constructor_new (const GALGAS_lstring & inAttribute_mValue
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_identifierAsDefaultValue result ;
  if (inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_identifierAsDefaultValue (inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_identifierAsDefaultValue::getter_mValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_identifierAsDefaultValue * p = (const cPtr_identifierAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_identifierAsDefaultValue) ;
    result = p->mProperty_mValue ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_identifierAsDefaultValue::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_identifierAsDefaultValue::setter_setMValue (GALGAS_lstring inValue
                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_identifierAsDefaultValue * p = (cPtr_identifierAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_identifierAsDefaultValue) ;
    p->mProperty_mValue = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_identifierAsDefaultValue::setter_setMValue (GALGAS_lstring inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mValue = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @identifierAsDefaultValue class
//----------------------------------------------------------------------------------------------------------------------

cPtr_identifierAsDefaultValue::cPtr_identifierAsDefaultValue (const GALGAS_lstring & in_mValue
                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (THERE),
mProperty_mValue (in_mValue) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_identifierAsDefaultValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_identifierAsDefaultValue ;
}

void cPtr_identifierAsDefaultValue::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@identifierAsDefaultValue:" ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_identifierAsDefaultValue::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_identifierAsDefaultValue (mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@identifierAsDefaultValue type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_identifierAsDefaultValue ("identifierAsDefaultValue",
                                                 & kTypeDescriptor_GALGAS_abstractDefaultValue) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_identifierAsDefaultValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_identifierAsDefaultValue ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_identifierAsDefaultValue::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_identifierAsDefaultValue (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_identifierAsDefaultValue GALGAS_identifierAsDefaultValue::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_identifierAsDefaultValue result ;
  const GALGAS_identifierAsDefaultValue * p = (const GALGAS_identifierAsDefaultValue *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_identifierAsDefaultValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("identifierAsDefaultValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_prefsAsDefaultValue::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_prefsAsDefaultValue * p = (const cPtr_prefsAsDefaultValue *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_prefsAsDefaultValue) ;
  if (kOperandEqual == result) {
    result = mProperty_mPrefPropertyName.objectCompare (p->mProperty_mPrefPropertyName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_prefsAsDefaultValue::objectCompare (const GALGAS_prefsAsDefaultValue & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefsAsDefaultValue::GALGAS_prefsAsDefaultValue (void) :
GALGAS_abstractDefaultValue () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefsAsDefaultValue GALGAS_prefsAsDefaultValue::constructor_default (LOCATION_ARGS) {
  return GALGAS_prefsAsDefaultValue::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                      COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefsAsDefaultValue::GALGAS_prefsAsDefaultValue (const cPtr_prefsAsDefaultValue * inSourcePtr) :
GALGAS_abstractDefaultValue (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_prefsAsDefaultValue) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefsAsDefaultValue GALGAS_prefsAsDefaultValue::constructor_new (const GALGAS_lstring & inAttribute_mPrefPropertyName
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_prefsAsDefaultValue result ;
  if (inAttribute_mPrefPropertyName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_prefsAsDefaultValue (inAttribute_mPrefPropertyName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_prefsAsDefaultValue::getter_mPrefPropertyName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_prefsAsDefaultValue * p = (const cPtr_prefsAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefsAsDefaultValue) ;
    result = p->mProperty_mPrefPropertyName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cPtr_prefsAsDefaultValue::getter_mPrefPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPrefPropertyName ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_prefsAsDefaultValue::setter_setMPrefPropertyName (GALGAS_lstring inValue
                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_prefsAsDefaultValue * p = (cPtr_prefsAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefsAsDefaultValue) ;
    p->mProperty_mPrefPropertyName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_prefsAsDefaultValue::setter_setMPrefPropertyName (GALGAS_lstring inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mPrefPropertyName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @prefsAsDefaultValue class
//----------------------------------------------------------------------------------------------------------------------

cPtr_prefsAsDefaultValue::cPtr_prefsAsDefaultValue (const GALGAS_lstring & in_mPrefPropertyName
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (THERE),
mProperty_mPrefPropertyName (in_mPrefPropertyName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_prefsAsDefaultValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefsAsDefaultValue ;
}

void cPtr_prefsAsDefaultValue::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@prefsAsDefaultValue:" ;
  mProperty_mPrefPropertyName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_prefsAsDefaultValue::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_prefsAsDefaultValue (mProperty_mPrefPropertyName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@prefsAsDefaultValue type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_prefsAsDefaultValue ("prefsAsDefaultValue",
                                            & kTypeDescriptor_GALGAS_abstractDefaultValue) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_prefsAsDefaultValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefsAsDefaultValue ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_prefsAsDefaultValue::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefsAsDefaultValue (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefsAsDefaultValue GALGAS_prefsAsDefaultValue::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_prefsAsDefaultValue result ;
  const GALGAS_prefsAsDefaultValue * p = (const GALGAS_prefsAsDefaultValue *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_prefsAsDefaultValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefsAsDefaultValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyMap_2D_element::GALGAS_propertyMap_2D_element (void) :
mProperty_lkey (),
mProperty_mKind (),
mProperty_mActionMap (),
mProperty_mIsOverriding () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyMap_2D_element::~ GALGAS_propertyMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyMap_2D_element::GALGAS_propertyMap_2D_element (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_propertyKind & inOperand1,
                                                              const GALGAS_actionMap & inOperand2,
                                                              const GALGAS_bool & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mKind (inOperand1),
mProperty_mActionMap (inOperand2),
mProperty_mIsOverriding (inOperand3) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyMap_2D_element GALGAS_propertyMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_propertyKind & inOperand1,
                                                                              const GALGAS_actionMap & inOperand2,
                                                                              const GALGAS_bool & inOperand3 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_propertyMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_propertyMap_2D_element::objectCompare (const GALGAS_propertyMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mKind.objectCompare (inOperand.mProperty_mKind) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mActionMap.objectCompare (inOperand.mProperty_mActionMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsOverriding.objectCompare (inOperand.mProperty_mIsOverriding) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_propertyMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mKind.isValid () && mProperty_mActionMap.isValid () && mProperty_mIsOverriding.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mKind.drop () ;
  mProperty_mActionMap.drop () ;
  mProperty_mIsOverriding.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyMap_2D_element::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @propertyMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mActionMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsOverriding.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_propertyMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyKind GALGAS_propertyMap_2D_element::getter_mKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mKind ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionMap GALGAS_propertyMap_2D_element::getter_mActionMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActionMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_propertyMap_2D_element::getter_mIsOverriding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsOverriding ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@propertyMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyMap_2D_element ("propertyMap-element",
                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_propertyMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_propertyMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyMap_2D_element GALGAS_propertyMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_propertyMap_2D_element result ;
  const GALGAS_propertyMap_2D_element * p = (const GALGAS_propertyMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_propertyMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_generationStruct::GALGAS_generationStruct (void) :
mProperty_mValidationStubRoutineListForGeneration (),
mProperty_mFileGenerationList (),
mProperty_mEntityListForGeneration (),
mProperty_mGenerateEBManagedXibDocumentSwift (),
mProperty_mGenerateEBManagedAutoLayoutDocumentSwift (),
mProperty_mNeededOutletClasses (),
mProperty_mMainXibDescriptorList (),
mProperty_mSelectionControllerListForGeneration (),
mProperty_mPropertyClassList (),
mProperty_mTransientPropertyTypeList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_generationStruct::~ GALGAS_generationStruct (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_generationStruct::GALGAS_generationStruct (const GALGAS_validationStubRoutineListForGeneration & inOperand0,
                                                  const GALGAS_fileGenerationList & inOperand1,
                                                  const GALGAS_entityListForGeneratingEBManagedObjectContext & inOperand2,
                                                  const GALGAS_bool & inOperand3,
                                                  const GALGAS_bool & inOperand4,
                                                  const GALGAS_stringset & inOperand5,
                                                  const GALGAS_mainXibDescriptorList & inOperand6,
                                                  const GALGAS_selectionControllerForGeneration & inOperand7,
                                                  const GALGAS_stringlist & inOperand8,
                                                  const GALGAS_transientExternTypeList & inOperand9) :
mProperty_mValidationStubRoutineListForGeneration (inOperand0),
mProperty_mFileGenerationList (inOperand1),
mProperty_mEntityListForGeneration (inOperand2),
mProperty_mGenerateEBManagedXibDocumentSwift (inOperand3),
mProperty_mGenerateEBManagedAutoLayoutDocumentSwift (inOperand4),
mProperty_mNeededOutletClasses (inOperand5),
mProperty_mMainXibDescriptorList (inOperand6),
mProperty_mSelectionControllerListForGeneration (inOperand7),
mProperty_mPropertyClassList (inOperand8),
mProperty_mTransientPropertyTypeList (inOperand9) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_generationStruct GALGAS_generationStruct::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_generationStruct (GALGAS_validationStubRoutineListForGeneration::constructor_emptyList (HERE),
                                  GALGAS_fileGenerationList::constructor_emptyList (HERE),
                                  GALGAS_entityListForGeneratingEBManagedObjectContext::constructor_emptyList (HERE),
                                  GALGAS_bool::constructor_default (HERE),
                                  GALGAS_bool::constructor_default (HERE),
                                  GALGAS_stringset::constructor_emptySet (HERE),
                                  GALGAS_mainXibDescriptorList::constructor_emptyList (HERE),
                                  GALGAS_selectionControllerForGeneration::constructor_emptyList (HERE),
                                  GALGAS_stringlist::constructor_emptyList (HERE),
                                  GALGAS_transientExternTypeList::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_generationStruct GALGAS_generationStruct::constructor_new (const GALGAS_validationStubRoutineListForGeneration & inOperand0,
                                                                  const GALGAS_fileGenerationList & inOperand1,
                                                                  const GALGAS_entityListForGeneratingEBManagedObjectContext & inOperand2,
                                                                  const GALGAS_bool & inOperand3,
                                                                  const GALGAS_bool & inOperand4,
                                                                  const GALGAS_stringset & inOperand5,
                                                                  const GALGAS_mainXibDescriptorList & inOperand6,
                                                                  const GALGAS_selectionControllerForGeneration & inOperand7,
                                                                  const GALGAS_stringlist & inOperand8,
                                                                  const GALGAS_transientExternTypeList & inOperand9 
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_generationStruct result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid ()) {
    result = GALGAS_generationStruct (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_generationStruct::objectCompare (const GALGAS_generationStruct & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mValidationStubRoutineListForGeneration.objectCompare (inOperand.mProperty_mValidationStubRoutineListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFileGenerationList.objectCompare (inOperand.mProperty_mFileGenerationList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEntityListForGeneration.objectCompare (inOperand.mProperty_mEntityListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGenerateEBManagedXibDocumentSwift.objectCompare (inOperand.mProperty_mGenerateEBManagedXibDocumentSwift) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGenerateEBManagedAutoLayoutDocumentSwift.objectCompare (inOperand.mProperty_mGenerateEBManagedAutoLayoutDocumentSwift) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mNeededOutletClasses.objectCompare (inOperand.mProperty_mNeededOutletClasses) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mMainXibDescriptorList.objectCompare (inOperand.mProperty_mMainXibDescriptorList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSelectionControllerListForGeneration.objectCompare (inOperand.mProperty_mSelectionControllerListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPropertyClassList.objectCompare (inOperand.mProperty_mPropertyClassList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTransientPropertyTypeList.objectCompare (inOperand.mProperty_mTransientPropertyTypeList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_generationStruct::isValid (void) const {
  return mProperty_mValidationStubRoutineListForGeneration.isValid () && mProperty_mFileGenerationList.isValid () && mProperty_mEntityListForGeneration.isValid () && mProperty_mGenerateEBManagedXibDocumentSwift.isValid () && mProperty_mGenerateEBManagedAutoLayoutDocumentSwift.isValid () && mProperty_mNeededOutletClasses.isValid () && mProperty_mMainXibDescriptorList.isValid () && mProperty_mSelectionControllerListForGeneration.isValid () && mProperty_mPropertyClassList.isValid () && mProperty_mTransientPropertyTypeList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_generationStruct::drop (void) {
  mProperty_mValidationStubRoutineListForGeneration.drop () ;
  mProperty_mFileGenerationList.drop () ;
  mProperty_mEntityListForGeneration.drop () ;
  mProperty_mGenerateEBManagedXibDocumentSwift.drop () ;
  mProperty_mGenerateEBManagedAutoLayoutDocumentSwift.drop () ;
  mProperty_mNeededOutletClasses.drop () ;
  mProperty_mMainXibDescriptorList.drop () ;
  mProperty_mSelectionControllerListForGeneration.drop () ;
  mProperty_mPropertyClassList.drop () ;
  mProperty_mTransientPropertyTypeList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_generationStruct::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "<struct @generationStruct:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mValidationStubRoutineListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFileGenerationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEntityListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGenerateEBManagedXibDocumentSwift.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGenerateEBManagedAutoLayoutDocumentSwift.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mNeededOutletClasses.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mMainXibDescriptorList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSelectionControllerListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPropertyClassList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTransientPropertyTypeList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_validationStubRoutineListForGeneration GALGAS_generationStruct::getter_mValidationStubRoutineListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mValidationStubRoutineListForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fileGenerationList GALGAS_generationStruct::getter_mFileGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFileGenerationList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityListForGeneratingEBManagedObjectContext GALGAS_generationStruct::getter_mEntityListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEntityListForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_generationStruct::getter_mGenerateEBManagedXibDocumentSwift (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGenerateEBManagedXibDocumentSwift ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_generationStruct::getter_mGenerateEBManagedAutoLayoutDocumentSwift (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGenerateEBManagedAutoLayoutDocumentSwift ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset GALGAS_generationStruct::getter_mNeededOutletClasses (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNeededOutletClasses ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mainXibDescriptorList GALGAS_generationStruct::getter_mMainXibDescriptorList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMainXibDescriptorList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectionControllerForGeneration GALGAS_generationStruct::getter_mSelectionControllerListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelectionControllerListForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_generationStruct::getter_mPropertyClassList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyClassList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientExternTypeList GALGAS_generationStruct::getter_mTransientPropertyTypeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTransientPropertyTypeList ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@generationStruct type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_generationStruct ("generationStruct",
                                         NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_generationStruct::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_generationStruct ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_generationStruct::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_generationStruct (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_generationStruct GALGAS_generationStruct::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_generationStruct result ;
  const GALGAS_generationStruct * p = (const GALGAS_generationStruct *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_generationStruct *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("generationStruct", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XcodeProjectDescriptor::GALGAS_XcodeProjectDescriptor (void) :
mProperty_mSequenceNumber (),
mProperty_mMainGroupReference (),
mProperty_mMainGroupChildrenRefs (),
mProperty_mProjectObjectReference (),
mProperty_mGroupList (),
mProperty_mToolTargetList (),
mProperty_mAppTargetList (),
mProperty_mCppFileList (),
mProperty_m_5F_M_5F_FileList (),
mProperty_m_5F_MM_5F_FileList (),
mProperty_m_5F_SwiftFileList (),
mProperty_mFrameworkFileList (),
mProperty_mHeaderFileList (),
mProperty_mBuildFileList (),
mProperty_mDefaultConfigurationRef (),
mProperty_mDefaultConfigurationSettingList (),
mProperty_mProjectBuildConfigurationRef (),
mProperty_mInfoPlistFileList (),
mProperty_mXIB_5F_fileList (),
mProperty_mTIFF_5F_fileList (),
mProperty_mICNS_5F_fileList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XcodeProjectDescriptor::~ GALGAS_XcodeProjectDescriptor (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XcodeProjectDescriptor::GALGAS_XcodeProjectDescriptor (const GALGAS_uint & inOperand0,
                                                              const GALGAS_string & inOperand1,
                                                              const GALGAS_stringlist & inOperand2,
                                                              const GALGAS_string & inOperand3,
                                                              const GALGAS_XCodeGroupList & inOperand4,
                                                              const GALGAS_XCodeToolTargetList & inOperand5,
                                                              const GALGAS_XCodeAppTargetList & inOperand6,
                                                              const GALGAS__32_stringlist & inOperand7,
                                                              const GALGAS__32_stringlist & inOperand8,
                                                              const GALGAS__32_stringlist & inOperand9,
                                                              const GALGAS__32_stringlist & inOperand10,
                                                              const GALGAS__32_stringlist & inOperand11,
                                                              const GALGAS__32_stringlist & inOperand12,
                                                              const GALGAS_BuildFileList & inOperand13,
                                                              const GALGAS_string & inOperand14,
                                                              const GALGAS_stringlist & inOperand15,
                                                              const GALGAS_string & inOperand16,
                                                              const GALGAS__32_stringlist & inOperand17,
                                                              const GALGAS__32_stringlist & inOperand18,
                                                              const GALGAS__32_stringlist & inOperand19,
                                                              const GALGAS__32_stringlist & inOperand20) :
mProperty_mSequenceNumber (inOperand0),
mProperty_mMainGroupReference (inOperand1),
mProperty_mMainGroupChildrenRefs (inOperand2),
mProperty_mProjectObjectReference (inOperand3),
mProperty_mGroupList (inOperand4),
mProperty_mToolTargetList (inOperand5),
mProperty_mAppTargetList (inOperand6),
mProperty_mCppFileList (inOperand7),
mProperty_m_5F_M_5F_FileList (inOperand8),
mProperty_m_5F_MM_5F_FileList (inOperand9),
mProperty_m_5F_SwiftFileList (inOperand10),
mProperty_mFrameworkFileList (inOperand11),
mProperty_mHeaderFileList (inOperand12),
mProperty_mBuildFileList (inOperand13),
mProperty_mDefaultConfigurationRef (inOperand14),
mProperty_mDefaultConfigurationSettingList (inOperand15),
mProperty_mProjectBuildConfigurationRef (inOperand16),
mProperty_mInfoPlistFileList (inOperand17),
mProperty_mXIB_5F_fileList (inOperand18),
mProperty_mTIFF_5F_fileList (inOperand19),
mProperty_mICNS_5F_fileList (inOperand20) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XcodeProjectDescriptor GALGAS_XcodeProjectDescriptor::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_XcodeProjectDescriptor (GALGAS_uint::constructor_default (HERE),
                                        GALGAS_string::constructor_default (HERE),
                                        GALGAS_stringlist::constructor_emptyList (HERE),
                                        GALGAS_string::constructor_default (HERE),
                                        GALGAS_XCodeGroupList::constructor_emptyList (HERE),
                                        GALGAS_XCodeToolTargetList::constructor_emptyList (HERE),
                                        GALGAS_XCodeAppTargetList::constructor_emptyList (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE),
                                        GALGAS_BuildFileList::constructor_emptyList (HERE),
                                        GALGAS_string::constructor_default (HERE),
                                        GALGAS_stringlist::constructor_emptyList (HERE),
                                        GALGAS_string::constructor_default (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XcodeProjectDescriptor GALGAS_XcodeProjectDescriptor::constructor_new (const GALGAS_uint & inOperand0,
                                                                              const GALGAS_string & inOperand1,
                                                                              const GALGAS_stringlist & inOperand2,
                                                                              const GALGAS_string & inOperand3,
                                                                              const GALGAS_XCodeGroupList & inOperand4,
                                                                              const GALGAS_XCodeToolTargetList & inOperand5,
                                                                              const GALGAS_XCodeAppTargetList & inOperand6,
                                                                              const GALGAS__32_stringlist & inOperand7,
                                                                              const GALGAS__32_stringlist & inOperand8,
                                                                              const GALGAS__32_stringlist & inOperand9,
                                                                              const GALGAS__32_stringlist & inOperand10,
                                                                              const GALGAS__32_stringlist & inOperand11,
                                                                              const GALGAS__32_stringlist & inOperand12,
                                                                              const GALGAS_BuildFileList & inOperand13,
                                                                              const GALGAS_string & inOperand14,
                                                                              const GALGAS_stringlist & inOperand15,
                                                                              const GALGAS_string & inOperand16,
                                                                              const GALGAS__32_stringlist & inOperand17,
                                                                              const GALGAS__32_stringlist & inOperand18,
                                                                              const GALGAS__32_stringlist & inOperand19,
                                                                              const GALGAS__32_stringlist & inOperand20 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_XcodeProjectDescriptor result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid () && inOperand14.isValid () && inOperand15.isValid () && inOperand16.isValid () && inOperand17.isValid () && inOperand18.isValid () && inOperand19.isValid () && inOperand20.isValid ()) {
    result = GALGAS_XcodeProjectDescriptor (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14, inOperand15, inOperand16, inOperand17, inOperand18, inOperand19, inOperand20) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_XcodeProjectDescriptor::objectCompare (const GALGAS_XcodeProjectDescriptor & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mSequenceNumber.objectCompare (inOperand.mProperty_mSequenceNumber) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mMainGroupReference.objectCompare (inOperand.mProperty_mMainGroupReference) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mMainGroupChildrenRefs.objectCompare (inOperand.mProperty_mMainGroupChildrenRefs) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mProjectObjectReference.objectCompare (inOperand.mProperty_mProjectObjectReference) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGroupList.objectCompare (inOperand.mProperty_mGroupList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mToolTargetList.objectCompare (inOperand.mProperty_mToolTargetList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAppTargetList.objectCompare (inOperand.mProperty_mAppTargetList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mCppFileList.objectCompare (inOperand.mProperty_mCppFileList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_m_5F_M_5F_FileList.objectCompare (inOperand.mProperty_m_5F_M_5F_FileList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_m_5F_MM_5F_FileList.objectCompare (inOperand.mProperty_m_5F_MM_5F_FileList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_m_5F_SwiftFileList.objectCompare (inOperand.mProperty_m_5F_SwiftFileList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFrameworkFileList.objectCompare (inOperand.mProperty_mFrameworkFileList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mHeaderFileList.objectCompare (inOperand.mProperty_mHeaderFileList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBuildFileList.objectCompare (inOperand.mProperty_mBuildFileList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDefaultConfigurationRef.objectCompare (inOperand.mProperty_mDefaultConfigurationRef) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDefaultConfigurationSettingList.objectCompare (inOperand.mProperty_mDefaultConfigurationSettingList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mProjectBuildConfigurationRef.objectCompare (inOperand.mProperty_mProjectBuildConfigurationRef) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInfoPlistFileList.objectCompare (inOperand.mProperty_mInfoPlistFileList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mXIB_5F_fileList.objectCompare (inOperand.mProperty_mXIB_5F_fileList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTIFF_5F_fileList.objectCompare (inOperand.mProperty_mTIFF_5F_fileList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mICNS_5F_fileList.objectCompare (inOperand.mProperty_mICNS_5F_fileList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_XcodeProjectDescriptor::isValid (void) const {
  return mProperty_mSequenceNumber.isValid () && mProperty_mMainGroupReference.isValid () && mProperty_mMainGroupChildrenRefs.isValid () && mProperty_mProjectObjectReference.isValid () && mProperty_mGroupList.isValid () && mProperty_mToolTargetList.isValid () && mProperty_mAppTargetList.isValid () && mProperty_mCppFileList.isValid () && mProperty_m_5F_M_5F_FileList.isValid () && mProperty_m_5F_MM_5F_FileList.isValid () && mProperty_m_5F_SwiftFileList.isValid () && mProperty_mFrameworkFileList.isValid () && mProperty_mHeaderFileList.isValid () && mProperty_mBuildFileList.isValid () && mProperty_mDefaultConfigurationRef.isValid () && mProperty_mDefaultConfigurationSettingList.isValid () && mProperty_mProjectBuildConfigurationRef.isValid () && mProperty_mInfoPlistFileList.isValid () && mProperty_mXIB_5F_fileList.isValid () && mProperty_mTIFF_5F_fileList.isValid () && mProperty_mICNS_5F_fileList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XcodeProjectDescriptor::drop (void) {
  mProperty_mSequenceNumber.drop () ;
  mProperty_mMainGroupReference.drop () ;
  mProperty_mMainGroupChildrenRefs.drop () ;
  mProperty_mProjectObjectReference.drop () ;
  mProperty_mGroupList.drop () ;
  mProperty_mToolTargetList.drop () ;
  mProperty_mAppTargetList.drop () ;
  mProperty_mCppFileList.drop () ;
  mProperty_m_5F_M_5F_FileList.drop () ;
  mProperty_m_5F_MM_5F_FileList.drop () ;
  mProperty_m_5F_SwiftFileList.drop () ;
  mProperty_mFrameworkFileList.drop () ;
  mProperty_mHeaderFileList.drop () ;
  mProperty_mBuildFileList.drop () ;
  mProperty_mDefaultConfigurationRef.drop () ;
  mProperty_mDefaultConfigurationSettingList.drop () ;
  mProperty_mProjectBuildConfigurationRef.drop () ;
  mProperty_mInfoPlistFileList.drop () ;
  mProperty_mXIB_5F_fileList.drop () ;
  mProperty_mTIFF_5F_fileList.drop () ;
  mProperty_mICNS_5F_fileList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XcodeProjectDescriptor::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @XcodeProjectDescriptor:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mSequenceNumber.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mMainGroupReference.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mMainGroupChildrenRefs.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mProjectObjectReference.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGroupList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mToolTargetList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAppTargetList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mCppFileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_m_5F_M_5F_FileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_m_5F_MM_5F_FileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_m_5F_SwiftFileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFrameworkFileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mHeaderFileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBuildFileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDefaultConfigurationRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDefaultConfigurationSettingList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mProjectBuildConfigurationRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInfoPlistFileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mXIB_5F_fileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTIFF_5F_fileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mICNS_5F_fileList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_XcodeProjectDescriptor::getter_mSequenceNumber (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSequenceNumber ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XcodeProjectDescriptor::getter_mMainGroupReference (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMainGroupReference ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_XcodeProjectDescriptor::getter_mMainGroupChildrenRefs (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMainGroupChildrenRefs ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XcodeProjectDescriptor::getter_mProjectObjectReference (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProjectObjectReference ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList GALGAS_XcodeProjectDescriptor::getter_mGroupList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGroupList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList GALGAS_XcodeProjectDescriptor::getter_mToolTargetList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mToolTargetList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList GALGAS_XcodeProjectDescriptor::getter_mAppTargetList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAppTargetList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS__32_stringlist GALGAS_XcodeProjectDescriptor::getter_mCppFileList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCppFileList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS__32_stringlist GALGAS_XcodeProjectDescriptor::getter_m_5F_M_5F_FileList (UNUSED_LOCATION_ARGS) const {
  return mProperty_m_5F_M_5F_FileList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS__32_stringlist GALGAS_XcodeProjectDescriptor::getter_m_5F_MM_5F_FileList (UNUSED_LOCATION_ARGS) const {
  return mProperty_m_5F_MM_5F_FileList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS__32_stringlist GALGAS_XcodeProjectDescriptor::getter_m_5F_SwiftFileList (UNUSED_LOCATION_ARGS) const {
  return mProperty_m_5F_SwiftFileList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS__32_stringlist GALGAS_XcodeProjectDescriptor::getter_mFrameworkFileList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFrameworkFileList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS__32_stringlist GALGAS_XcodeProjectDescriptor::getter_mHeaderFileList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHeaderFileList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_BuildFileList GALGAS_XcodeProjectDescriptor::getter_mBuildFileList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuildFileList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XcodeProjectDescriptor::getter_mDefaultConfigurationRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDefaultConfigurationRef ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_XcodeProjectDescriptor::getter_mDefaultConfigurationSettingList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDefaultConfigurationSettingList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XcodeProjectDescriptor::getter_mProjectBuildConfigurationRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProjectBuildConfigurationRef ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS__32_stringlist GALGAS_XcodeProjectDescriptor::getter_mInfoPlistFileList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInfoPlistFileList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS__32_stringlist GALGAS_XcodeProjectDescriptor::getter_mXIB_5F_fileList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mXIB_5F_fileList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS__32_stringlist GALGAS_XcodeProjectDescriptor::getter_mTIFF_5F_fileList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTIFF_5F_fileList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS__32_stringlist GALGAS_XcodeProjectDescriptor::getter_mICNS_5F_fileList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mICNS_5F_fileList ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@XcodeProjectDescriptor type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_XcodeProjectDescriptor ("XcodeProjectDescriptor",
                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_XcodeProjectDescriptor::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XcodeProjectDescriptor ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_XcodeProjectDescriptor::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XcodeProjectDescriptor (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XcodeProjectDescriptor GALGAS_XcodeProjectDescriptor::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_XcodeProjectDescriptor result ;
  const GALGAS_XcodeProjectDescriptor * p = (const GALGAS_XcodeProjectDescriptor *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_XcodeProjectDescriptor *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XcodeProjectDescriptor", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addTIFF_file'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addTIFF_5F_file (GALGAS_XcodeProjectDescriptor & ioObject,
                                      const GALGAS_string constinArgument_inFileName,
                                      GALGAS_string & outArgument_outFileRef,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 15)) ;
  }
  ioObject.mProperty_mTIFF_5F_fileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 16)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addInfoPlistFile'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addInfoPlistFile (GALGAS_XcodeProjectDescriptor & ioObject,
                                       const GALGAS_string constinArgument_inFileName,
                                       GALGAS_string & outArgument_outFileRef,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 24)) ;
  }
  ioObject.mProperty_mInfoPlistFileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 25)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addXIBFile'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addXIBFile (GALGAS_XcodeProjectDescriptor & ioObject,
                                 const GALGAS_string constinArgument_inFileName,
                                 GALGAS_string & outArgument_outFileRef,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 33)) ;
  }
  ioObject.mProperty_mXIB_5F_fileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 34)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addFrameworkFile'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addFrameworkFile (GALGAS_XcodeProjectDescriptor & ioObject,
                                       const GALGAS_string constinArgument_inFileName,
                                       GALGAS_string & outArgument_outFileRef,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 42)) ;
  }
  ioObject.mProperty_mFrameworkFileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 43)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addMFile'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addMFile (GALGAS_XcodeProjectDescriptor & ioObject,
                               const GALGAS_string constinArgument_inFileName,
                               GALGAS_string & outArgument_outFileRef,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 51)) ;
  }
  ioObject.mProperty_m_5F_M_5F_FileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 52)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addSwiftFile'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addSwiftFile (GALGAS_XcodeProjectDescriptor & ioObject,
                                   const GALGAS_string constinArgument_inFileName,
                                   GALGAS_string & outArgument_outFileRef,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 60)) ;
  }
  ioObject.mProperty_m_5F_SwiftFileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 61)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addMMFile'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addMMFile (GALGAS_XcodeProjectDescriptor & ioObject,
                                const GALGAS_string constinArgument_inFileName,
                                GALGAS_string & outArgument_outFileRef,
                                C_Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 69)) ;
  }
  ioObject.mProperty_m_5F_MM_5F_FileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 70)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addCppFile'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addCppFile (GALGAS_XcodeProjectDescriptor & ioObject,
                                 const GALGAS_string constinArgument_inFileName,
                                 GALGAS_string & outArgument_outFileRef,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 78)) ;
  }
  ioObject.mProperty_mCppFileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 79)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addHeaderFile'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addHeaderFile (GALGAS_XcodeProjectDescriptor & ioObject,
                                    const GALGAS_string constinArgument_inFileName,
                                    GALGAS_string & outArgument_outFileRef,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 87)) ;
  }
  ioObject.mProperty_mHeaderFileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 88)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addBuildFile'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addBuildFile (GALGAS_XcodeProjectDescriptor & ioObject,
                                   const GALGAS_string constinArgument_inFileReference,
                                   const GALGAS_string constinArgument_inFileName,
                                   GALGAS_string & outArgument_outBuildRef,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outBuildRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outBuildRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 97)) ;
  }
  ioObject.mProperty_mBuildFileList.addAssign_operation (constinArgument_inFileReference, constinArgument_inFileName, outArgument_outBuildRef  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 98)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addToolTarget'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addToolTarget (GALGAS_XcodeProjectDescriptor & ioObject,
                                    const GALGAS_string constinArgument_inTargetName,
                                    const GALGAS_string constinArgument_inProductFileName,
                                    const GALGAS_stringlist constinArgument_inSourceList,
                                    const GALGAS_stringlist constinArgument_inToolFrameworksFileRefList,
                                    const GALGAS_stringlist constinArgument_inBuildConfigurationSettingList,
                                    GALGAS_string & outArgument_outTargetRef,
                                    GALGAS_string & outArgument_outProductFileRef,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTargetRef.drop () ; // Release 'out' argument
  outArgument_outProductFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outProductFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 111)) ;
  }
  GALGAS_string var_buildPhaseRef_4229 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildPhaseRef_4229, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 112)) ;
  }
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outTargetRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 113)) ;
  }
  GALGAS_string var_buildConfigurationListRef_4336 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildConfigurationListRef_4336, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 114)) ;
  }
  GALGAS_string var_buildConfigurationRef_4394 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildConfigurationRef_4394, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 115)) ;
  }
  GALGAS_string var_frameworkBuildRef_4448 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_frameworkBuildRef_4448, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 116)) ;
  }
  ioObject.mProperty_mToolTargetList.addAssign_operation (outArgument_outTargetRef, constinArgument_inTargetName, outArgument_outProductFileRef, constinArgument_inProductFileName, constinArgument_inSourceList, var_buildPhaseRef_4229, var_buildConfigurationListRef_4336, constinArgument_inBuildConfigurationSettingList, var_buildConfigurationRef_4394, constinArgument_inToolFrameworksFileRefList, var_frameworkBuildRef_4448  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 117)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addAppTarget'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addAppTarget (GALGAS_XcodeProjectDescriptor & ioObject,
                                   const GALGAS_string constinArgument_inTargetName,
                                   const GALGAS_string constinArgument_inProductFileName,
                                   const GALGAS_stringlist constinArgument_inSourceList,
                                   const GALGAS_stringlist constinArgument_inFrameworksFileRefList,
                                   const GALGAS_stringlist constinArgument_inResourceFileBuildRefs,
                                   const GALGAS_stringlist constinArgument_inBuildConfigurationSettingList,
                                   const GALGAS_stringlist constinArgument_inDependentTargetRefList,
                                   const GALGAS__32_stringlist constinArgument_inProductCopyList,
                                   const GALGAS_string constinArgument_inInfoPList,
                                   GALGAS_string & outArgument_outProductFileRef,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outProductFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outProductFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 145)) ;
  }
  GALGAS_string var_buildPhaseRef_5539 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildPhaseRef_5539, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 146)) ;
  }
  GALGAS_string var_targetRef_5585 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_targetRef_5585, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 147)) ;
  }
  GALGAS_string var_buildConfigurationListRef_5647 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildConfigurationListRef_5647, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 148)) ;
  }
  GALGAS_string var_buildConfigurationRef_5705 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildConfigurationRef_5705, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 149)) ;
  }
  GALGAS_string var_frameworkBuildRef_5759 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_frameworkBuildRef_5759, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 150)) ;
  }
  GALGAS_string var_resourceBuildRef_5812 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_resourceBuildRef_5812, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 151)) ;
  }
  GALGAS__32_stringlist var_dependentTargets_5845 = GALGAS__32_stringlist::constructor_emptyList (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 152)) ;
  cEnumerator_stringlist enumerator_5890 (constinArgument_inDependentTargetRefList, kENUMERATION_UP) ;
  while (enumerator_5890.hasCurrentObject ()) {
    GALGAS_string var_dependencyBuildRef_5949 ;
    {
    extensionSetter_getReferenceKey (ioObject, var_dependencyBuildRef_5949, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 154)) ;
    }
    var_dependentTargets_5845.addAssign_operation (var_dependencyBuildRef_5949, enumerator_5890.current_mValue (HERE)  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 155)) ;
    enumerator_5890.gotoNextObject () ;
  }
  GALGAS_stringlist var_resourceFileBuildRefs_6041 = constinArgument_inResourceFileBuildRefs ;
  cEnumerator__32_stringlist enumerator_6105 (constinArgument_inProductCopyList, kENUMERATION_UP) ;
  while (enumerator_6105.hasCurrentObject ()) {
    GALGAS_string var_buildRef_6192 ;
    {
    extensionSetter_addBuildFile (ioObject, enumerator_6105.current_mValue_30_ (HERE), enumerator_6105.current_mValue_31_ (HERE), var_buildRef_6192, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 159)) ;
    }
    var_resourceFileBuildRefs_6041.addAssign_operation (var_buildRef_6192  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 160)) ;
    enumerator_6105.gotoNextObject () ;
  }
  ioObject.mProperty_mAppTargetList.addAssign_operation (var_targetRef_5585, constinArgument_inTargetName, outArgument_outProductFileRef, constinArgument_inProductFileName, constinArgument_inSourceList, var_buildPhaseRef_5539, var_buildConfigurationListRef_5647, constinArgument_inBuildConfigurationSettingList, var_buildConfigurationRef_5705, constinArgument_inFrameworksFileRefList, var_frameworkBuildRef_5759, var_dependentTargets_5845, var_resourceBuildRef_5812, var_resourceFileBuildRefs_6041, constinArgument_inInfoPList  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 162)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addGroup'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_addGroup (GALGAS_XcodeProjectDescriptor & ioObject,
                               const GALGAS_string constinArgument_inGroupName,
                               const GALGAS_string constinArgument_inGroupPath,
                               const GALGAS_stringlist constinArgument_inChildrenRefs,
                               GALGAS_string & outArgument_outGroupRef,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGroupRef.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, ioObject.mProperty_mDefaultConfigurationRef.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mDefaultConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 188)) ;
      }
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsEqual, ioObject.mProperty_mProjectBuildConfigurationRef.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mProjectBuildConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 191)) ;
      }
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, ioObject.mProperty_mMainGroupReference.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mMainGroupReference, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 194)) ;
      }
    }
  }
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outGroupRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 196)) ;
  }
  ioObject.mProperty_mGroupList.addAssign_operation (outArgument_outGroupRef, constinArgument_inGroupName, constinArgument_inGroupPath, constinArgument_inChildrenRefs  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 197)) ;
}



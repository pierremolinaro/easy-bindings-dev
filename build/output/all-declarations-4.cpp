#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-4.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*



typeComparisonResult GALGAS_astDeclaration::objectCompare (const GALGAS_astDeclaration & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclaration::GALGAS_astDeclaration (void) :
AC_GALGAS_class (false) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclaration::GALGAS_astDeclaration (const cPtr_astDeclaration * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_astDeclaration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_astDeclaration::getter_mUserDefined (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_astDeclaration * p = (const cPtr_astDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astDeclaration) ;
    result = p->mProperty_mUserDefined ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_astDeclaration::getter_mUserDefined (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUserDefined ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                       Pointer class for @astDeclaration class                                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_astDeclaration::cPtr_astDeclaration (const GALGAS_bool & in_mUserDefined
                                          COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mProperty_mUserDefined (in_mUserDefined) {
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @astDeclaration type                                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_astDeclaration ("astDeclaration",
                                       NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_astDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astDeclaration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_astDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astDeclaration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclaration GALGAS_astDeclaration::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_astDeclaration result ;
  const GALGAS_astDeclaration * p = (const GALGAS_astDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_astDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefDeclaration::GALGAS_prefDeclaration (void) :
mProperty_mOutletDeclarationList (),
mProperty_mSimpleStoredAttributeList (),
mProperty_mActionDeclarationList (),
mProperty_mSecondaryPropertyList (),
mProperty_mExternSwiftFunctionList (),
mProperty_mStoredArrayList (),
mProperty_mSignatureList () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefDeclaration::~ GALGAS_prefDeclaration (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefDeclaration::GALGAS_prefDeclaration (const GALGAS_outletDeclarationList & inOperand0,
                                                const GALGAS_simpleStoredPropertyList & inOperand1,
                                                const GALGAS_lstringlist & inOperand2,
                                                const GALGAS_secondaryPropertyList & inOperand3,
                                                const GALGAS_externSwiftFunctionList & inOperand4,
                                                const GALGAS_storedArrayPropertyListAST & inOperand5,
                                                const GALGAS_stringset & inOperand6) :
mProperty_mOutletDeclarationList (inOperand0),
mProperty_mSimpleStoredAttributeList (inOperand1),
mProperty_mActionDeclarationList (inOperand2),
mProperty_mSecondaryPropertyList (inOperand3),
mProperty_mExternSwiftFunctionList (inOperand4),
mProperty_mStoredArrayList (inOperand5),
mProperty_mSignatureList (inOperand6) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefDeclaration GALGAS_prefDeclaration::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_prefDeclaration (GALGAS_outletDeclarationList::constructor_emptyList (HERE),
                                 GALGAS_simpleStoredPropertyList::constructor_emptyList (HERE),
                                 GALGAS_lstringlist::constructor_emptyList (HERE),
                                 GALGAS_secondaryPropertyList::constructor_emptyList (HERE),
                                 GALGAS_externSwiftFunctionList::constructor_emptyList (HERE),
                                 GALGAS_storedArrayPropertyListAST::constructor_emptyList (HERE),
                                 GALGAS_stringset::constructor_emptySet (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefDeclaration GALGAS_prefDeclaration::constructor_new (const GALGAS_outletDeclarationList & inOperand0,
                                                                const GALGAS_simpleStoredPropertyList & inOperand1,
                                                                const GALGAS_lstringlist & inOperand2,
                                                                const GALGAS_secondaryPropertyList & inOperand3,
                                                                const GALGAS_externSwiftFunctionList & inOperand4,
                                                                const GALGAS_storedArrayPropertyListAST & inOperand5,
                                                                const GALGAS_stringset & inOperand6 
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_prefDeclaration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_prefDeclaration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
    result = mProperty_mSecondaryPropertyList.objectCompare (inOperand.mProperty_mSecondaryPropertyList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExternSwiftFunctionList.objectCompare (inOperand.mProperty_mExternSwiftFunctionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStoredArrayList.objectCompare (inOperand.mProperty_mStoredArrayList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSignatureList.objectCompare (inOperand.mProperty_mSignatureList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_prefDeclaration::isValid (void) const {
  return mProperty_mOutletDeclarationList.isValid () && mProperty_mSimpleStoredAttributeList.isValid () && mProperty_mActionDeclarationList.isValid () && mProperty_mSecondaryPropertyList.isValid () && mProperty_mExternSwiftFunctionList.isValid () && mProperty_mStoredArrayList.isValid () && mProperty_mSignatureList.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_prefDeclaration::drop (void) {
  mProperty_mOutletDeclarationList.drop () ;
  mProperty_mSimpleStoredAttributeList.drop () ;
  mProperty_mActionDeclarationList.drop () ;
  mProperty_mSecondaryPropertyList.drop () ;
  mProperty_mExternSwiftFunctionList.drop () ;
  mProperty_mStoredArrayList.drop () ;
  mProperty_mSignatureList.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
    mProperty_mSecondaryPropertyList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExternSwiftFunctionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStoredArrayList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSignatureList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletDeclarationList GALGAS_prefDeclaration::getter_mOutletDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOutletDeclarationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyList GALGAS_prefDeclaration::getter_mSimpleStoredAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSimpleStoredAttributeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_prefDeclaration::getter_mActionDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActionDeclarationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_secondaryPropertyList GALGAS_prefDeclaration::getter_mSecondaryPropertyList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSecondaryPropertyList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftFunctionList GALGAS_prefDeclaration::getter_mExternSwiftFunctionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternSwiftFunctionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_storedArrayPropertyListAST GALGAS_prefDeclaration::getter_mStoredArrayList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStoredArrayList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringset GALGAS_prefDeclaration::getter_mSignatureList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSignatureList ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @prefDeclaration type                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_prefDeclaration ("prefDeclaration",
                                        NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_prefDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefDeclaration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_prefDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefDeclaration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticContext::GALGAS_semanticContext (void) :
mProperty_mClassMap (),
mProperty_mOutletClassMap (),
mProperty_mBindingSpecificationMap () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticContext::~ GALGAS_semanticContext (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticContext::GALGAS_semanticContext (const GALGAS_classMap & inOperand0,
                                                const GALGAS_outletClassMap & inOperand1,
                                                const GALGAS_bindingSpecificationMap & inOperand2) :
mProperty_mClassMap (inOperand0),
mProperty_mOutletClassMap (inOperand1),
mProperty_mBindingSpecificationMap (inOperand2) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticContext GALGAS_semanticContext::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_semanticContext (GALGAS_classMap::constructor_emptyMap (HERE),
                                 GALGAS_outletClassMap::constructor_emptyMap (HERE),
                                 GALGAS_bindingSpecificationMap::constructor_emptyMap (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticContext GALGAS_semanticContext::constructor_new (const GALGAS_classMap & inOperand0,
                                                                const GALGAS_outletClassMap & inOperand1,
                                                                const GALGAS_bindingSpecificationMap & inOperand2 
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticContext result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_semanticContext (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_semanticContext::isValid (void) const {
  return mProperty_mClassMap.isValid () && mProperty_mOutletClassMap.isValid () && mProperty_mBindingSpecificationMap.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_semanticContext::drop (void) {
  mProperty_mClassMap.drop () ;
  mProperty_mOutletClassMap.drop () ;
  mProperty_mBindingSpecificationMap.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classMap GALGAS_semanticContext::getter_mClassMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mClassMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassMap GALGAS_semanticContext::getter_mOutletClassMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOutletClassMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingSpecificationMap GALGAS_semanticContext::getter_mBindingSpecificationMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBindingSpecificationMap ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @semanticContext type                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticContext ("semanticContext",
                                        NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_semanticContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticContext ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_semanticContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticContext (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*



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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractDeclarationAST::GALGAS_abstractDeclarationAST (void) :
AC_GALGAS_class (false) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractDeclarationAST::GALGAS_abstractDeclarationAST (const cPtr_abstractDeclarationAST * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_abstractDeclarationAST::getter_mClassName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractDeclarationAST * p = (const cPtr_abstractDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractDeclarationAST) ;
    result = p->mProperty_mClassName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_abstractDeclarationAST::getter_mClassName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mClassName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                   Pointer class for @abstractDeclarationAST class                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_abstractDeclarationAST::cPtr_abstractDeclarationAST (const GALGAS_lstring & in_mClassName
                                                          COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mProperty_mClassName (in_mClassName) {
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @abstractDeclarationAST type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractDeclarationAST ("abstractDeclarationAST",
                                               NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_abstractDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_abstractDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Abstract extension method '@abstractDeclarationAST enterInPrecedenceGraph'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_abstractDeclarationAST_enterInPrecedenceGraph> gExtensionMethodTable_abstractDeclarationAST_enterInPrecedenceGraph ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_enterInPrecedenceGraph (const int32_t inClassIndex,
                                                  extensionMethodSignature_abstractDeclarationAST_enterInPrecedenceGraph inMethod) {
  gExtensionMethodTable_abstractDeclarationAST_enterInPrecedenceGraph.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_abstractDeclarationAST_enterInPrecedenceGraph (void) {
  gExtensionMethodTable_abstractDeclarationAST_enterInPrecedenceGraph.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_abstractDeclarationAST_enterInPrecedenceGraph (NULL,
                                                                          freeExtensionMethod_abstractDeclarationAST_enterInPrecedenceGraph) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Abstract extension getter '@abstractDeclarationAST lkey'                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <enterExtensionGetter_abstractDeclarationAST_lkey> gExtensionGetterTable_abstractDeclarationAST_lkey ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_lkey (const int32_t inClassIndex,
                                enterExtensionGetter_abstractDeclarationAST_lkey inGetter) {
  gExtensionGetterTable_abstractDeclarationAST_lkey.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionGetter_abstractDeclarationAST_lkey (void) {
  gExtensionGetterTable_abstractDeclarationAST_lkey.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_abstractDeclarationAST_lkey (NULL,
                                                        freeExtensionGetter_abstractDeclarationAST_lkey) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring callExtensionGetter_lkey (const cPtr_abstractDeclarationAST * inObject,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GALGAS_lstring result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_abstractDeclarationAST_lkey f = NULL ;
    if (classIndex < gExtensionGetterTable_abstractDeclarationAST_lkey.count ()) {
      f = gExtensionGetterTable_abstractDeclarationAST_lkey (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_abstractDeclarationAST_lkey.count ()) {
           f = gExtensionGetterTable_abstractDeclarationAST_lkey (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_abstractDeclarationAST_lkey.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Abstract extension method '@abstractDeclarationAST firstAnalysisPhase'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_abstractDeclarationAST_firstAnalysisPhase> gExtensionMethodTable_abstractDeclarationAST_firstAnalysisPhase ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_firstAnalysisPhase (const int32_t inClassIndex,
                                              extensionMethodSignature_abstractDeclarationAST_firstAnalysisPhase inMethod) {
  gExtensionMethodTable_abstractDeclarationAST_firstAnalysisPhase.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_abstractDeclarationAST_firstAnalysisPhase (void) {
  gExtensionMethodTable_abstractDeclarationAST_firstAnalysisPhase.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_abstractDeclarationAST_firstAnalysisPhase (NULL,
                                                                      freeExtensionMethod_abstractDeclarationAST_firstAnalysisPhase) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Extension method '@abstractDeclarationAST secondAnalysisPhase'                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_abstractDeclarationAST_secondAnalysisPhase> gExtensionMethodTable_abstractDeclarationAST_secondAnalysisPhase ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_secondAnalysisPhase (const int32_t inClassIndex,
                                               extensionMethodSignature_abstractDeclarationAST_secondAnalysisPhase inMethod) {
  gExtensionMethodTable_abstractDeclarationAST_secondAnalysisPhase.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_abstractDeclarationAST_secondAnalysisPhase (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                        GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                        GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_abstractDeclarationAST_secondAnalysisPhase (void) {
  enterExtensionMethod_secondAnalysisPhase (kTypeDescriptor_GALGAS_abstractDeclarationAST.mSlotID,
                                            extensionMethod_abstractDeclarationAST_secondAnalysisPhase) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_abstractDeclarationAST_secondAnalysisPhase (void) {
  gExtensionMethodTable_abstractDeclarationAST_secondAnalysisPhase.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_abstractDeclarationAST_secondAnalysisPhase (defineExtensionMethod_abstractDeclarationAST_secondAnalysisPhase,
                                                                       freeExtensionMethod_abstractDeclarationAST_secondAnalysisPhase) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Extension method '@abstractDeclarationAST thirdAnalysisPhase'                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_abstractDeclarationAST_thirdAnalysisPhase> gExtensionMethodTable_abstractDeclarationAST_thirdAnalysisPhase ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_thirdAnalysisPhase (const int32_t inClassIndex,
                                              extensionMethodSignature_abstractDeclarationAST_thirdAnalysisPhase inMethod) {
  gExtensionMethodTable_abstractDeclarationAST_thirdAnalysisPhase.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_abstractDeclarationAST_thirdAnalysisPhase (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                       GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                       GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_abstractDeclarationAST_thirdAnalysisPhase (void) {
  enterExtensionMethod_thirdAnalysisPhase (kTypeDescriptor_GALGAS_abstractDeclarationAST.mSlotID,
                                           extensionMethod_abstractDeclarationAST_thirdAnalysisPhase) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_abstractDeclarationAST_thirdAnalysisPhase (void) {
  gExtensionMethodTable_abstractDeclarationAST_thirdAnalysisPhase.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_abstractDeclarationAST_thirdAnalysisPhase (defineExtensionMethod_abstractDeclarationAST_thirdAnalysisPhase,
                                                                      freeExtensionMethod_abstractDeclarationAST_thirdAnalysisPhase) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_transientPropertyTypeDeclarationEX::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_transientPropertyTypeDeclarationEX * p = (const cPtr_transientPropertyTypeDeclarationEX *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_transientPropertyTypeDeclarationEX) ;
  if (kOperandEqual == result) {
    result = mProperty_mUserDefined.objectCompare (p->mProperty_mUserDefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPropertyTypeName.objectCompare (p->mProperty_mPropertyTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsClass.objectCompare (p->mProperty_mIsClass) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_transientPropertyTypeDeclarationEX::objectCompare (const GALGAS_transientPropertyTypeDeclarationEX & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientPropertyTypeDeclarationEX::GALGAS_transientPropertyTypeDeclarationEX (void) :
GALGAS_astDeclaration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientPropertyTypeDeclarationEX GALGAS_transientPropertyTypeDeclarationEX::constructor_default (LOCATION_ARGS) {
  return GALGAS_transientPropertyTypeDeclarationEX::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                     GALGAS_lstring::constructor_default (HERE),
                                                                     GALGAS_bool::constructor_default (HERE)
                                                                     COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientPropertyTypeDeclarationEX::GALGAS_transientPropertyTypeDeclarationEX (const cPtr_transientPropertyTypeDeclarationEX * inSourcePtr) :
GALGAS_astDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_transientPropertyTypeDeclarationEX) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientPropertyTypeDeclarationEX GALGAS_transientPropertyTypeDeclarationEX::constructor_new (const GALGAS_bool & inAttribute_mUserDefined,
                                                                                                      const GALGAS_lstring & inAttribute_mPropertyTypeName,
                                                                                                      const GALGAS_bool & inAttribute_mIsClass
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_transientPropertyTypeDeclarationEX result ;
  if (inAttribute_mUserDefined.isValid () && inAttribute_mPropertyTypeName.isValid () && inAttribute_mIsClass.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_transientPropertyTypeDeclarationEX (inAttribute_mUserDefined, inAttribute_mPropertyTypeName, inAttribute_mIsClass COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_transientPropertyTypeDeclarationEX::getter_mPropertyTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_transientPropertyTypeDeclarationEX * p = (const cPtr_transientPropertyTypeDeclarationEX *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyTypeDeclarationEX) ;
    result = p->mProperty_mPropertyTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_transientPropertyTypeDeclarationEX::getter_mPropertyTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_transientPropertyTypeDeclarationEX::getter_mIsClass (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_transientPropertyTypeDeclarationEX * p = (const cPtr_transientPropertyTypeDeclarationEX *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyTypeDeclarationEX) ;
    result = p->mProperty_mIsClass ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_transientPropertyTypeDeclarationEX::getter_mIsClass (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsClass ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                             Pointer class for @transientPropertyTypeDeclarationEX class                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_transientPropertyTypeDeclarationEX::cPtr_transientPropertyTypeDeclarationEX (const GALGAS_bool & in_mUserDefined,
                                                                                  const GALGAS_lstring & in_mPropertyTypeName,
                                                                                  const GALGAS_bool & in_mIsClass
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_astDeclaration (in_mUserDefined COMMA_THERE),
mProperty_mPropertyTypeName (in_mPropertyTypeName),
mProperty_mIsClass (in_mIsClass) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_transientPropertyTypeDeclarationEX::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientPropertyTypeDeclarationEX ;
}

void cPtr_transientPropertyTypeDeclarationEX::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@transientPropertyTypeDeclarationEX:" ;
  mProperty_mUserDefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPropertyTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsClass.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_transientPropertyTypeDeclarationEX::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_transientPropertyTypeDeclarationEX (mProperty_mUserDefined, mProperty_mPropertyTypeName, mProperty_mIsClass COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @transientPropertyTypeDeclarationEX type                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transientPropertyTypeDeclarationEX ("transientPropertyTypeDeclarationEX",
                                                           & kTypeDescriptor_GALGAS_astDeclaration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_transientPropertyTypeDeclarationEX::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientPropertyTypeDeclarationEX ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_transientPropertyTypeDeclarationEX::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientPropertyTypeDeclarationEX (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientPropertyTypeDeclarationEX GALGAS_transientPropertyTypeDeclarationEX::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_transientPropertyTypeDeclarationEX result ;
  const GALGAS_transientPropertyTypeDeclarationEX * p = (const GALGAS_transientPropertyTypeDeclarationEX *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_transientPropertyTypeDeclarationEX *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientPropertyTypeDeclarationEX", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientClassDeclarationAST::GALGAS_transientClassDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientClassDeclarationAST GALGAS_transientClassDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_transientClassDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                               GALGAS_bool::constructor_default (HERE)
                                                               COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientClassDeclarationAST::GALGAS_transientClassDeclarationAST (const cPtr_transientClassDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_transientClassDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientClassDeclarationAST GALGAS_transientClassDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                                          const GALGAS_bool & inAttribute_mIsClass
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_transientClassDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mIsClass.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_transientClassDeclarationAST (inAttribute_mClassName, inAttribute_mIsClass COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_transientClassDeclarationAST::getter_mIsClass (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_transientClassDeclarationAST * p = (const cPtr_transientClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientClassDeclarationAST) ;
    result = p->mProperty_mIsClass ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_transientClassDeclarationAST::getter_mIsClass (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsClass ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                Pointer class for @transientClassDeclarationAST class                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_transientClassDeclarationAST::cPtr_transientClassDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                                      const GALGAS_bool & in_mIsClass
                                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mIsClass (in_mIsClass) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_transientClassDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_transientClassDeclarationAST (mProperty_mClassName, mProperty_mIsClass COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @transientClassDeclarationAST type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transientClassDeclarationAST ("transientClassDeclarationAST",
                                                     & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_transientClassDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientClassDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_transientClassDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientClassDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_enumDeclarationEX::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_enumDeclarationEX * p = (const cPtr_enumDeclarationEX *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_enumDeclarationEX) ;
  if (kOperandEqual == result) {
    result = mProperty_mUserDefined.objectCompare (p->mProperty_mUserDefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEnumTypeName.objectCompare (p->mProperty_mEnumTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEnumConstantNameList.objectCompare (p->mProperty_mEnumConstantNameList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_enumDeclarationEX::objectCompare (const GALGAS_enumDeclarationEX & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumDeclarationEX::GALGAS_enumDeclarationEX (void) :
GALGAS_astDeclaration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumDeclarationEX GALGAS_enumDeclarationEX::constructor_default (LOCATION_ARGS) {
  return GALGAS_enumDeclarationEX::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                    GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_lstringlist::constructor_emptyList (HERE)
                                                    COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumDeclarationEX::GALGAS_enumDeclarationEX (const cPtr_enumDeclarationEX * inSourcePtr) :
GALGAS_astDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumDeclarationEX) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumDeclarationEX GALGAS_enumDeclarationEX::constructor_new (const GALGAS_bool & inAttribute_mUserDefined,
                                                                    const GALGAS_lstring & inAttribute_mEnumTypeName,
                                                                    const GALGAS_lstringlist & inAttribute_mEnumConstantNameList
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_enumDeclarationEX result ;
  if (inAttribute_mUserDefined.isValid () && inAttribute_mEnumTypeName.isValid () && inAttribute_mEnumConstantNameList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_enumDeclarationEX (inAttribute_mUserDefined, inAttribute_mEnumTypeName, inAttribute_mEnumConstantNameList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_enumDeclarationEX::getter_mEnumTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumDeclarationEX * p = (const cPtr_enumDeclarationEX *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumDeclarationEX) ;
    result = p->mProperty_mEnumTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_enumDeclarationEX::getter_mEnumTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_enumDeclarationEX::getter_mEnumConstantNameList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumDeclarationEX * p = (const cPtr_enumDeclarationEX *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumDeclarationEX) ;
    result = p->mProperty_mEnumConstantNameList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cPtr_enumDeclarationEX::getter_mEnumConstantNameList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumConstantNameList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                     Pointer class for @enumDeclarationEX class                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_enumDeclarationEX::cPtr_enumDeclarationEX (const GALGAS_bool & in_mUserDefined,
                                                const GALGAS_lstring & in_mEnumTypeName,
                                                const GALGAS_lstringlist & in_mEnumConstantNameList
                                                COMMA_LOCATION_ARGS) :
cPtr_astDeclaration (in_mUserDefined COMMA_THERE),
mProperty_mEnumTypeName (in_mEnumTypeName),
mProperty_mEnumConstantNameList (in_mEnumConstantNameList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_enumDeclarationEX::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumDeclarationEX ;
}

void cPtr_enumDeclarationEX::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@enumDeclarationEX:" ;
  mProperty_mUserDefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEnumTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEnumConstantNameList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_enumDeclarationEX::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_enumDeclarationEX (mProperty_mUserDefined, mProperty_mEnumTypeName, mProperty_mEnumConstantNameList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @enumDeclarationEX type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumDeclarationEX ("enumDeclarationEX",
                                          & kTypeDescriptor_GALGAS_astDeclaration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_enumDeclarationEX::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumDeclarationEX ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_enumDeclarationEX::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumDeclarationEX (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumDeclarationEX GALGAS_enumDeclarationEX::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_enumDeclarationEX result ;
  const GALGAS_enumDeclarationEX * p = (const GALGAS_enumDeclarationEX *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumDeclarationEX *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumDeclarationEX", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumerationDeclarationAST::GALGAS_enumerationDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumerationDeclarationAST GALGAS_enumerationDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_enumerationDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                            GALGAS_lstringlist::constructor_emptyList (HERE)
                                                            COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumerationDeclarationAST::GALGAS_enumerationDeclarationAST (const cPtr_enumerationDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumerationDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumerationDeclarationAST GALGAS_enumerationDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                                    const GALGAS_lstringlist & inAttribute_mEnumConstantNameList
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_enumerationDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mEnumConstantNameList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_enumerationDeclarationAST (inAttribute_mClassName, inAttribute_mEnumConstantNameList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_enumerationDeclarationAST::getter_mEnumConstantNameList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumerationDeclarationAST * p = (const cPtr_enumerationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumerationDeclarationAST) ;
    result = p->mProperty_mEnumConstantNameList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cPtr_enumerationDeclarationAST::getter_mEnumConstantNameList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumConstantNameList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                 Pointer class for @enumerationDeclarationAST class                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_enumerationDeclarationAST::cPtr_enumerationDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                                const GALGAS_lstringlist & in_mEnumConstantNameList
                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mEnumConstantNameList (in_mEnumConstantNameList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_enumerationDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_enumerationDeclarationAST (mProperty_mClassName, mProperty_mEnumConstantNameList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @enumerationDeclarationAST type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumerationDeclarationAST ("enumerationDeclarationAST",
                                                  & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_enumerationDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_enumerationDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumerationDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumForGeneration::GALGAS_enumForGeneration (void) :
GALGAS_abstractFileGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumForGeneration GALGAS_enumForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_enumForGeneration::constructor_new (GALGAS_string::constructor_default (HERE),
                                                    GALGAS_lstringlist::constructor_emptyList (HERE)
                                                    COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumForGeneration::GALGAS_enumForGeneration (const cPtr_enumForGeneration * inSourcePtr) :
GALGAS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumForGeneration GALGAS_enumForGeneration::constructor_new (const GALGAS_string & inAttribute_mEnumName,
                                                                    const GALGAS_lstringlist & inAttribute_mEnumConstantList
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_enumForGeneration result ;
  if (inAttribute_mEnumName.isValid () && inAttribute_mEnumConstantList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_enumForGeneration (inAttribute_mEnumName, inAttribute_mEnumConstantList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_enumForGeneration::getter_mEnumName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumForGeneration * p = (const cPtr_enumForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumForGeneration) ;
    result = p->mProperty_mEnumName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_enumForGeneration::getter_mEnumName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_enumForGeneration::getter_mEnumConstantList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumForGeneration * p = (const cPtr_enumForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumForGeneration) ;
    result = p->mProperty_mEnumConstantList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cPtr_enumForGeneration::getter_mEnumConstantList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumConstantList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                     Pointer class for @enumForGeneration class                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_enumForGeneration::cPtr_enumForGeneration (const GALGAS_string & in_mEnumName,
                                                const GALGAS_lstringlist & in_mEnumConstantList
                                                COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (THERE),
mProperty_mEnumName (in_mEnumName),
mProperty_mEnumConstantList (in_mEnumConstantList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_enumForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumForGeneration ;
}

void cPtr_enumForGeneration::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@enumForGeneration:" ;
  mProperty_mEnumName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEnumConstantList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_enumForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_enumForGeneration (mProperty_mEnumName, mProperty_mEnumConstantList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @enumForGeneration type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumForGeneration ("enumForGeneration",
                                          & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_enumForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_enumForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_atomicClassDeclarationAST::GALGAS_atomicClassDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_atomicClassDeclarationAST::GALGAS_atomicClassDeclarationAST (const cPtr_atomicClassDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_atomicClassDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_atomicClassDeclarationAST GALGAS_atomicClassDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                                    const GALGAS_typeKind & inAttribute_mKind
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_atomicClassDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_atomicClassDeclarationAST (inAttribute_mClassName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_atomicClassDeclarationAST::getter_mKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_typeKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_atomicClassDeclarationAST * p = (const cPtr_atomicClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicClassDeclarationAST) ;
    result = p->mProperty_mKind ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind cPtr_atomicClassDeclarationAST::getter_mKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                 Pointer class for @atomicClassDeclarationAST class                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_atomicClassDeclarationAST::cPtr_atomicClassDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                                const GALGAS_typeKind & in_mKind
                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mKind (in_mKind) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_atomicClassDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_atomicClassDeclarationAST (mProperty_mClassName, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @atomicClassDeclarationAST type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_atomicClassDeclarationAST ("atomicClassDeclarationAST",
                                                  & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_atomicClassDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicClassDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_atomicClassDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_atomicClassDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_classDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_classDeclarationAST * p = (const cPtr_classDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_classDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsUserDefined.objectCompare (p->mProperty_mIsUserDefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExternSwiftFunctionList.objectCompare (p->mProperty_mExternSwiftFunctionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExternSwiftDelegateList.objectCompare (p->mProperty_mExternSwiftDelegateList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActionDeclarationList.objectCompare (p->mProperty_mActionDeclarationList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_classDeclarationAST::objectCompare (const GALGAS_classDeclarationAST & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classDeclarationAST::GALGAS_classDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classDeclarationAST GALGAS_classDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_classDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_bool::constructor_default (HERE),
                                                      GALGAS_externSwiftFunctionList::constructor_emptyList (HERE),
                                                      GALGAS_externSwiftDelegateList::constructor_emptyList (HERE),
                                                      GALGAS_lstringlist::constructor_emptyList (HERE)
                                                      COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classDeclarationAST::GALGAS_classDeclarationAST (const cPtr_classDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_classDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classDeclarationAST GALGAS_classDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                        const GALGAS_bool & inAttribute_mIsUserDefined,
                                                                        const GALGAS_externSwiftFunctionList & inAttribute_mExternSwiftFunctionList,
                                                                        const GALGAS_externSwiftDelegateList & inAttribute_mExternSwiftDelegateList,
                                                                        const GALGAS_lstringlist & inAttribute_mActionDeclarationList
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_classDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mIsUserDefined.isValid () && inAttribute_mExternSwiftFunctionList.isValid () && inAttribute_mExternSwiftDelegateList.isValid () && inAttribute_mActionDeclarationList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_classDeclarationAST (inAttribute_mClassName, inAttribute_mIsUserDefined, inAttribute_mExternSwiftFunctionList, inAttribute_mExternSwiftDelegateList, inAttribute_mActionDeclarationList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_classDeclarationAST::getter_mIsUserDefined (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_classDeclarationAST * p = (const cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    result = p->mProperty_mIsUserDefined ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_classDeclarationAST::getter_mIsUserDefined (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsUserDefined ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftFunctionList GALGAS_classDeclarationAST::getter_mExternSwiftFunctionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_externSwiftFunctionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_classDeclarationAST * p = (const cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    result = p->mProperty_mExternSwiftFunctionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftFunctionList cPtr_classDeclarationAST::getter_mExternSwiftFunctionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternSwiftFunctionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftDelegateList GALGAS_classDeclarationAST::getter_mExternSwiftDelegateList (UNUSED_LOCATION_ARGS) const {
  GALGAS_externSwiftDelegateList result ;
  if (NULL != mObjectPtr) {
    const cPtr_classDeclarationAST * p = (const cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    result = p->mProperty_mExternSwiftDelegateList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftDelegateList cPtr_classDeclarationAST::getter_mExternSwiftDelegateList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternSwiftDelegateList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_classDeclarationAST::getter_mActionDeclarationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_classDeclarationAST * p = (const cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    result = p->mProperty_mActionDeclarationList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cPtr_classDeclarationAST::getter_mActionDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActionDeclarationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @classDeclarationAST class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_classDeclarationAST::cPtr_classDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                    const GALGAS_bool & in_mIsUserDefined,
                                                    const GALGAS_externSwiftFunctionList & in_mExternSwiftFunctionList,
                                                    const GALGAS_externSwiftDelegateList & in_mExternSwiftDelegateList,
                                                    const GALGAS_lstringlist & in_mActionDeclarationList
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mIsUserDefined (in_mIsUserDefined),
mProperty_mExternSwiftFunctionList (in_mExternSwiftFunctionList),
mProperty_mExternSwiftDelegateList (in_mExternSwiftDelegateList),
mProperty_mActionDeclarationList (in_mActionDeclarationList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_classDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classDeclarationAST ;
}

void cPtr_classDeclarationAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@classDeclarationAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsUserDefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExternSwiftFunctionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExternSwiftDelegateList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActionDeclarationList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_classDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_classDeclarationAST (mProperty_mClassName, mProperty_mIsUserDefined, mProperty_mExternSwiftFunctionList, mProperty_mExternSwiftDelegateList, mProperty_mActionDeclarationList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @classDeclarationAST type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_classDeclarationAST ("classDeclarationAST",
                                            & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_classDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_classDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_classDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classDeclarationAST GALGAS_classDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_classDeclarationAST result ;
  const GALGAS_classDeclarationAST * p = (const GALGAS_classDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_classDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_classForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_classForGeneration * p = (const cPtr_classForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_classForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPropertyGenerationList.objectCompare (p->mProperty_mPropertyGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExternSwiftFunctionList.objectCompare (p->mProperty_mExternSwiftFunctionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExternSwiftDelegateList.objectCompare (p->mProperty_mExternSwiftDelegateList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_classForGeneration::objectCompare (const GALGAS_classForGeneration & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classForGeneration::GALGAS_classForGeneration (void) :
GALGAS_abstractFileGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classForGeneration GALGAS_classForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_classForGeneration::constructor_new (GALGAS_string::constructor_default (HERE),
                                                     GALGAS_propertyGenerationList::constructor_emptyList (HERE),
                                                     GALGAS_externSwiftFunctionList::constructor_emptyList (HERE),
                                                     GALGAS_externSwiftDelegateList::constructor_emptyList (HERE)
                                                     COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classForGeneration::GALGAS_classForGeneration (const cPtr_classForGeneration * inSourcePtr) :
GALGAS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_classForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classForGeneration GALGAS_classForGeneration::constructor_new (const GALGAS_string & inAttribute_mClassName,
                                                                      const GALGAS_propertyGenerationList & inAttribute_mPropertyGenerationList,
                                                                      const GALGAS_externSwiftFunctionList & inAttribute_mExternSwiftFunctionList,
                                                                      const GALGAS_externSwiftDelegateList & inAttribute_mExternSwiftDelegateList
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_classForGeneration result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mPropertyGenerationList.isValid () && inAttribute_mExternSwiftFunctionList.isValid () && inAttribute_mExternSwiftDelegateList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_classForGeneration (inAttribute_mClassName, inAttribute_mPropertyGenerationList, inAttribute_mExternSwiftFunctionList, inAttribute_mExternSwiftDelegateList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_classForGeneration::getter_mClassName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_classForGeneration * p = (const cPtr_classForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classForGeneration) ;
    result = p->mProperty_mClassName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_classForGeneration::getter_mClassName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mClassName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyGenerationList GALGAS_classForGeneration::getter_mPropertyGenerationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyGenerationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_classForGeneration * p = (const cPtr_classForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classForGeneration) ;
    result = p->mProperty_mPropertyGenerationList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyGenerationList cPtr_classForGeneration::getter_mPropertyGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftFunctionList GALGAS_classForGeneration::getter_mExternSwiftFunctionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_externSwiftFunctionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_classForGeneration * p = (const cPtr_classForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classForGeneration) ;
    result = p->mProperty_mExternSwiftFunctionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftFunctionList cPtr_classForGeneration::getter_mExternSwiftFunctionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternSwiftFunctionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftDelegateList GALGAS_classForGeneration::getter_mExternSwiftDelegateList (UNUSED_LOCATION_ARGS) const {
  GALGAS_externSwiftDelegateList result ;
  if (NULL != mObjectPtr) {
    const cPtr_classForGeneration * p = (const cPtr_classForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classForGeneration) ;
    result = p->mProperty_mExternSwiftDelegateList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftDelegateList cPtr_classForGeneration::getter_mExternSwiftDelegateList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternSwiftDelegateList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                     Pointer class for @classForGeneration class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_classForGeneration::cPtr_classForGeneration (const GALGAS_string & in_mClassName,
                                                  const GALGAS_propertyGenerationList & in_mPropertyGenerationList,
                                                  const GALGAS_externSwiftFunctionList & in_mExternSwiftFunctionList,
                                                  const GALGAS_externSwiftDelegateList & in_mExternSwiftDelegateList
                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (THERE),
mProperty_mClassName (in_mClassName),
mProperty_mPropertyGenerationList (in_mPropertyGenerationList),
mProperty_mExternSwiftFunctionList (in_mExternSwiftFunctionList),
mProperty_mExternSwiftDelegateList (in_mExternSwiftDelegateList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_classForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classForGeneration ;
}

void cPtr_classForGeneration::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@classForGeneration:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPropertyGenerationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExternSwiftFunctionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExternSwiftDelegateList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_classForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_classForGeneration (mProperty_mClassName, mProperty_mPropertyGenerationList, mProperty_mExternSwiftFunctionList, mProperty_mExternSwiftDelegateList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @classForGeneration type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_classForGeneration ("classForGeneration",
                                           & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_classForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_classForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_classForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classForGeneration GALGAS_classForGeneration::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_classForGeneration result ;
  const GALGAS_classForGeneration * p = (const GALGAS_classForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_classForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_entityDeclarationEX::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_entityDeclarationEX * p = (const cPtr_entityDeclarationEX *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_entityDeclarationEX) ;
  if (kOperandEqual == result) {
    result = mProperty_mUserDefined.objectCompare (p->mProperty_mUserDefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEntityName.objectCompare (p->mProperty_mEntityName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSuperEntityName.objectCompare (p->mProperty_mSuperEntityName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSimpleStoredAttributeList.objectCompare (p->mProperty_mSimpleStoredAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mToOneRelationshipList.objectCompare (p->mProperty_mToOneRelationshipList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mToManyRelationshipList.objectCompare (p->mProperty_mToManyRelationshipList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSecondaryPropertyList.objectCompare (p->mProperty_mSecondaryPropertyList) ;
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
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_entityDeclarationEX::objectCompare (const GALGAS_entityDeclarationEX & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityDeclarationEX::GALGAS_entityDeclarationEX (void) :
GALGAS_astDeclaration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityDeclarationEX GALGAS_entityDeclarationEX::constructor_default (LOCATION_ARGS) {
  return GALGAS_entityDeclarationEX::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                      GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_simpleStoredPropertyList::constructor_emptyList (HERE),
                                                      GALGAS_toOneRelationshipListEX::constructor_emptyList (HERE),
                                                      GALGAS_toManyRelationshipListEX::constructor_emptyList (HERE),
                                                      GALGAS_secondaryPropertyList::constructor_emptyList (HERE),
                                                      GALGAS_stringset::constructor_emptySet (HERE),
                                                      GALGAS_lstringlist::constructor_emptyList (HERE),
                                                      GALGAS_lstringlist::constructor_emptyList (HERE),
                                                      GALGAS_bool::constructor_default (HERE)
                                                      COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityDeclarationEX::GALGAS_entityDeclarationEX (const cPtr_entityDeclarationEX * inSourcePtr) :
GALGAS_astDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_entityDeclarationEX) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityDeclarationEX GALGAS_entityDeclarationEX::constructor_new (const GALGAS_bool & inAttribute_mUserDefined,
                                                                        const GALGAS_lstring & inAttribute_mEntityName,
                                                                        const GALGAS_lstring & inAttribute_mSuperEntityName,
                                                                        const GALGAS_simpleStoredPropertyList & inAttribute_mSimpleStoredAttributeList,
                                                                        const GALGAS_toOneRelationshipListEX & inAttribute_mToOneRelationshipList,
                                                                        const GALGAS_toManyRelationshipListEX & inAttribute_mToManyRelationshipList,
                                                                        const GALGAS_secondaryPropertyList & inAttribute_mSecondaryPropertyList,
                                                                        const GALGAS_stringset & inAttribute_mSignatureList,
                                                                        const GALGAS_lstringlist & inAttribute_mActionDeclarationList,
                                                                        const GALGAS_lstringlist & inAttribute_mObsoleteEntityNames,
                                                                        const GALGAS_bool & inAttribute_mIsGraphicEntity
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_entityDeclarationEX result ;
  if (inAttribute_mUserDefined.isValid () && inAttribute_mEntityName.isValid () && inAttribute_mSuperEntityName.isValid () && inAttribute_mSimpleStoredAttributeList.isValid () && inAttribute_mToOneRelationshipList.isValid () && inAttribute_mToManyRelationshipList.isValid () && inAttribute_mSecondaryPropertyList.isValid () && inAttribute_mSignatureList.isValid () && inAttribute_mActionDeclarationList.isValid () && inAttribute_mObsoleteEntityNames.isValid () && inAttribute_mIsGraphicEntity.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_entityDeclarationEX (inAttribute_mUserDefined, inAttribute_mEntityName, inAttribute_mSuperEntityName, inAttribute_mSimpleStoredAttributeList, inAttribute_mToOneRelationshipList, inAttribute_mToManyRelationshipList, inAttribute_mSecondaryPropertyList, inAttribute_mSignatureList, inAttribute_mActionDeclarationList, inAttribute_mObsoleteEntityNames, inAttribute_mIsGraphicEntity COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_entityDeclarationEX::getter_mEntityName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclarationEX * p = (const cPtr_entityDeclarationEX *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationEX) ;
    result = p->mProperty_mEntityName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_entityDeclarationEX::getter_mEntityName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEntityName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_entityDeclarationEX::getter_mSuperEntityName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclarationEX * p = (const cPtr_entityDeclarationEX *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationEX) ;
    result = p->mProperty_mSuperEntityName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_entityDeclarationEX::getter_mSuperEntityName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSuperEntityName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyList GALGAS_entityDeclarationEX::getter_mSimpleStoredAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_simpleStoredPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclarationEX * p = (const cPtr_entityDeclarationEX *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationEX) ;
    result = p->mProperty_mSimpleStoredAttributeList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyList cPtr_entityDeclarationEX::getter_mSimpleStoredAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSimpleStoredAttributeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneRelationshipListEX GALGAS_entityDeclarationEX::getter_mToOneRelationshipList (UNUSED_LOCATION_ARGS) const {
  GALGAS_toOneRelationshipListEX result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclarationEX * p = (const cPtr_entityDeclarationEX *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationEX) ;
    result = p->mProperty_mToOneRelationshipList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneRelationshipListEX cPtr_entityDeclarationEX::getter_mToOneRelationshipList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mToOneRelationshipList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyRelationshipListEX GALGAS_entityDeclarationEX::getter_mToManyRelationshipList (UNUSED_LOCATION_ARGS) const {
  GALGAS_toManyRelationshipListEX result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclarationEX * p = (const cPtr_entityDeclarationEX *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationEX) ;
    result = p->mProperty_mToManyRelationshipList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyRelationshipListEX cPtr_entityDeclarationEX::getter_mToManyRelationshipList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mToManyRelationshipList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_secondaryPropertyList GALGAS_entityDeclarationEX::getter_mSecondaryPropertyList (UNUSED_LOCATION_ARGS) const {
  GALGAS_secondaryPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclarationEX * p = (const cPtr_entityDeclarationEX *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationEX) ;
    result = p->mProperty_mSecondaryPropertyList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_secondaryPropertyList cPtr_entityDeclarationEX::getter_mSecondaryPropertyList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSecondaryPropertyList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringset GALGAS_entityDeclarationEX::getter_mSignatureList (UNUSED_LOCATION_ARGS) const {
  GALGAS_stringset result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclarationEX * p = (const cPtr_entityDeclarationEX *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationEX) ;
    result = p->mProperty_mSignatureList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringset cPtr_entityDeclarationEX::getter_mSignatureList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSignatureList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_entityDeclarationEX::getter_mActionDeclarationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclarationEX * p = (const cPtr_entityDeclarationEX *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationEX) ;
    result = p->mProperty_mActionDeclarationList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cPtr_entityDeclarationEX::getter_mActionDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActionDeclarationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_entityDeclarationEX::getter_mObsoleteEntityNames (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclarationEX * p = (const cPtr_entityDeclarationEX *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationEX) ;
    result = p->mProperty_mObsoleteEntityNames ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cPtr_entityDeclarationEX::getter_mObsoleteEntityNames (UNUSED_LOCATION_ARGS) const {
  return mProperty_mObsoleteEntityNames ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_entityDeclarationEX::getter_mIsGraphicEntity (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclarationEX * p = (const cPtr_entityDeclarationEX *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationEX) ;
    result = p->mProperty_mIsGraphicEntity ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_entityDeclarationEX::getter_mIsGraphicEntity (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsGraphicEntity ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @entityDeclarationEX class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_entityDeclarationEX::cPtr_entityDeclarationEX (const GALGAS_bool & in_mUserDefined,
                                                    const GALGAS_lstring & in_mEntityName,
                                                    const GALGAS_lstring & in_mSuperEntityName,
                                                    const GALGAS_simpleStoredPropertyList & in_mSimpleStoredAttributeList,
                                                    const GALGAS_toOneRelationshipListEX & in_mToOneRelationshipList,
                                                    const GALGAS_toManyRelationshipListEX & in_mToManyRelationshipList,
                                                    const GALGAS_secondaryPropertyList & in_mSecondaryPropertyList,
                                                    const GALGAS_stringset & in_mSignatureList,
                                                    const GALGAS_lstringlist & in_mActionDeclarationList,
                                                    const GALGAS_lstringlist & in_mObsoleteEntityNames,
                                                    const GALGAS_bool & in_mIsGraphicEntity
                                                    COMMA_LOCATION_ARGS) :
cPtr_astDeclaration (in_mUserDefined COMMA_THERE),
mProperty_mEntityName (in_mEntityName),
mProperty_mSuperEntityName (in_mSuperEntityName),
mProperty_mSimpleStoredAttributeList (in_mSimpleStoredAttributeList),
mProperty_mToOneRelationshipList (in_mToOneRelationshipList),
mProperty_mToManyRelationshipList (in_mToManyRelationshipList),
mProperty_mSecondaryPropertyList (in_mSecondaryPropertyList),
mProperty_mSignatureList (in_mSignatureList),
mProperty_mActionDeclarationList (in_mActionDeclarationList),
mProperty_mObsoleteEntityNames (in_mObsoleteEntityNames),
mProperty_mIsGraphicEntity (in_mIsGraphicEntity) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_entityDeclarationEX::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityDeclarationEX ;
}

void cPtr_entityDeclarationEX::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@entityDeclarationEX:" ;
  mProperty_mUserDefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEntityName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSuperEntityName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSimpleStoredAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mToOneRelationshipList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mToManyRelationshipList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSecondaryPropertyList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSignatureList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActionDeclarationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mObsoleteEntityNames.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsGraphicEntity.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_entityDeclarationEX::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_entityDeclarationEX (mProperty_mUserDefined, mProperty_mEntityName, mProperty_mSuperEntityName, mProperty_mSimpleStoredAttributeList, mProperty_mToOneRelationshipList, mProperty_mToManyRelationshipList, mProperty_mSecondaryPropertyList, mProperty_mSignatureList, mProperty_mActionDeclarationList, mProperty_mObsoleteEntityNames, mProperty_mIsGraphicEntity COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @entityDeclarationEX type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_entityDeclarationEX ("entityDeclarationEX",
                                            & kTypeDescriptor_GALGAS_astDeclaration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_entityDeclarationEX::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityDeclarationEX ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_entityDeclarationEX::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_entityDeclarationEX (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityDeclarationEX GALGAS_entityDeclarationEX::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_entityDeclarationEX result ;
  const GALGAS_entityDeclarationEX * p = (const GALGAS_entityDeclarationEX *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_entityDeclarationEX *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("entityDeclarationEX", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_entityDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_entityDeclarationAST * p = (const cPtr_entityDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsUserDefined.objectCompare (p->mProperty_mIsUserDefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSuperEntityName.objectCompare (p->mProperty_mSuperEntityName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSimpleStoredAttributeList.objectCompare (p->mProperty_mSimpleStoredAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mToOneRelationshipList.objectCompare (p->mProperty_mToOneRelationshipList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mToManyRelationshipList.objectCompare (p->mProperty_mToManyRelationshipList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSecondaryPropertyList.objectCompare (p->mProperty_mSecondaryPropertyList) ;
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
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityDeclarationAST::GALGAS_entityDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityDeclarationAST GALGAS_entityDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_entityDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_bool::constructor_default (HERE),
                                                       GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_simpleStoredPropertyList::constructor_emptyList (HERE),
                                                       GALGAS_toOneRelationshipListEX::constructor_emptyList (HERE),
                                                       GALGAS_toManyRelationshipListEX::constructor_emptyList (HERE),
                                                       GALGAS_secondaryPropertyList::constructor_emptyList (HERE),
                                                       GALGAS_stringset::constructor_emptySet (HERE),
                                                       GALGAS_lstringlist::constructor_emptyList (HERE),
                                                       GALGAS_lstringlist::constructor_emptyList (HERE),
                                                       GALGAS_bool::constructor_default (HERE)
                                                       COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityDeclarationAST::GALGAS_entityDeclarationAST (const cPtr_entityDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_entityDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityDeclarationAST GALGAS_entityDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                          const GALGAS_bool & inAttribute_mIsUserDefined,
                                                                          const GALGAS_lstring & inAttribute_mSuperEntityName,
                                                                          const GALGAS_simpleStoredPropertyList & inAttribute_mSimpleStoredAttributeList,
                                                                          const GALGAS_toOneRelationshipListEX & inAttribute_mToOneRelationshipList,
                                                                          const GALGAS_toManyRelationshipListEX & inAttribute_mToManyRelationshipList,
                                                                          const GALGAS_secondaryPropertyList & inAttribute_mSecondaryPropertyList,
                                                                          const GALGAS_stringset & inAttribute_mSignatureList,
                                                                          const GALGAS_lstringlist & inAttribute_mActionDeclarationList,
                                                                          const GALGAS_lstringlist & inAttribute_mObsoleteEntityNames,
                                                                          const GALGAS_bool & inAttribute_mIsGraphicEntity
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_entityDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mIsUserDefined.isValid () && inAttribute_mSuperEntityName.isValid () && inAttribute_mSimpleStoredAttributeList.isValid () && inAttribute_mToOneRelationshipList.isValid () && inAttribute_mToManyRelationshipList.isValid () && inAttribute_mSecondaryPropertyList.isValid () && inAttribute_mSignatureList.isValid () && inAttribute_mActionDeclarationList.isValid () && inAttribute_mObsoleteEntityNames.isValid () && inAttribute_mIsGraphicEntity.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_entityDeclarationAST (inAttribute_mClassName, inAttribute_mIsUserDefined, inAttribute_mSuperEntityName, inAttribute_mSimpleStoredAttributeList, inAttribute_mToOneRelationshipList, inAttribute_mToManyRelationshipList, inAttribute_mSecondaryPropertyList, inAttribute_mSignatureList, inAttribute_mActionDeclarationList, inAttribute_mObsoleteEntityNames, inAttribute_mIsGraphicEntity COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_entityDeclarationAST::getter_mIsUserDefined (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclarationAST * p = (const cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    result = p->mProperty_mIsUserDefined ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_entityDeclarationAST::getter_mIsUserDefined (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsUserDefined ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_entityDeclarationAST::getter_mSuperEntityName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclarationAST * p = (const cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    result = p->mProperty_mSuperEntityName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_entityDeclarationAST::getter_mSuperEntityName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSuperEntityName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyList GALGAS_entityDeclarationAST::getter_mSimpleStoredAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_simpleStoredPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclarationAST * p = (const cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    result = p->mProperty_mSimpleStoredAttributeList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyList cPtr_entityDeclarationAST::getter_mSimpleStoredAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSimpleStoredAttributeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneRelationshipListEX GALGAS_entityDeclarationAST::getter_mToOneRelationshipList (UNUSED_LOCATION_ARGS) const {
  GALGAS_toOneRelationshipListEX result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclarationAST * p = (const cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    result = p->mProperty_mToOneRelationshipList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneRelationshipListEX cPtr_entityDeclarationAST::getter_mToOneRelationshipList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mToOneRelationshipList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyRelationshipListEX GALGAS_entityDeclarationAST::getter_mToManyRelationshipList (UNUSED_LOCATION_ARGS) const {
  GALGAS_toManyRelationshipListEX result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclarationAST * p = (const cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    result = p->mProperty_mToManyRelationshipList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyRelationshipListEX cPtr_entityDeclarationAST::getter_mToManyRelationshipList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mToManyRelationshipList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_secondaryPropertyList GALGAS_entityDeclarationAST::getter_mSecondaryPropertyList (UNUSED_LOCATION_ARGS) const {
  GALGAS_secondaryPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclarationAST * p = (const cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    result = p->mProperty_mSecondaryPropertyList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_secondaryPropertyList cPtr_entityDeclarationAST::getter_mSecondaryPropertyList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSecondaryPropertyList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringset GALGAS_entityDeclarationAST::getter_mSignatureList (UNUSED_LOCATION_ARGS) const {
  GALGAS_stringset result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclarationAST * p = (const cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    result = p->mProperty_mSignatureList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringset cPtr_entityDeclarationAST::getter_mSignatureList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSignatureList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_entityDeclarationAST::getter_mActionDeclarationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclarationAST * p = (const cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    result = p->mProperty_mActionDeclarationList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cPtr_entityDeclarationAST::getter_mActionDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActionDeclarationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_entityDeclarationAST::getter_mObsoleteEntityNames (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclarationAST * p = (const cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    result = p->mProperty_mObsoleteEntityNames ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cPtr_entityDeclarationAST::getter_mObsoleteEntityNames (UNUSED_LOCATION_ARGS) const {
  return mProperty_mObsoleteEntityNames ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_entityDeclarationAST::getter_mIsGraphicEntity (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclarationAST * p = (const cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    result = p->mProperty_mIsGraphicEntity ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_entityDeclarationAST::getter_mIsGraphicEntity (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsGraphicEntity ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @entityDeclarationAST class                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_entityDeclarationAST::cPtr_entityDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                      const GALGAS_bool & in_mIsUserDefined,
                                                      const GALGAS_lstring & in_mSuperEntityName,
                                                      const GALGAS_simpleStoredPropertyList & in_mSimpleStoredAttributeList,
                                                      const GALGAS_toOneRelationshipListEX & in_mToOneRelationshipList,
                                                      const GALGAS_toManyRelationshipListEX & in_mToManyRelationshipList,
                                                      const GALGAS_secondaryPropertyList & in_mSecondaryPropertyList,
                                                      const GALGAS_stringset & in_mSignatureList,
                                                      const GALGAS_lstringlist & in_mActionDeclarationList,
                                                      const GALGAS_lstringlist & in_mObsoleteEntityNames,
                                                      const GALGAS_bool & in_mIsGraphicEntity
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mIsUserDefined (in_mIsUserDefined),
mProperty_mSuperEntityName (in_mSuperEntityName),
mProperty_mSimpleStoredAttributeList (in_mSimpleStoredAttributeList),
mProperty_mToOneRelationshipList (in_mToOneRelationshipList),
mProperty_mToManyRelationshipList (in_mToManyRelationshipList),
mProperty_mSecondaryPropertyList (in_mSecondaryPropertyList),
mProperty_mSignatureList (in_mSignatureList),
mProperty_mActionDeclarationList (in_mActionDeclarationList),
mProperty_mObsoleteEntityNames (in_mObsoleteEntityNames),
mProperty_mIsGraphicEntity (in_mIsGraphicEntity) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_entityDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityDeclarationAST ;
}

void cPtr_entityDeclarationAST::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@entityDeclarationAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsUserDefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSuperEntityName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSimpleStoredAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mToOneRelationshipList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mToManyRelationshipList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSecondaryPropertyList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSignatureList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActionDeclarationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mObsoleteEntityNames.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsGraphicEntity.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_entityDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_entityDeclarationAST (mProperty_mClassName, mProperty_mIsUserDefined, mProperty_mSuperEntityName, mProperty_mSimpleStoredAttributeList, mProperty_mToOneRelationshipList, mProperty_mToManyRelationshipList, mProperty_mSecondaryPropertyList, mProperty_mSignatureList, mProperty_mActionDeclarationList, mProperty_mObsoleteEntityNames, mProperty_mIsGraphicEntity COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @entityDeclarationAST type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_entityDeclarationAST ("entityDeclarationAST",
                                             & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_entityDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_entityDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_entityDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
    result = mProperty_mSimpleStoredPropertyListForGeneration.objectCompare (p->mProperty_mSimpleStoredPropertyListForGeneration) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDecoratedTransientListForGeneration.objectCompare (p->mProperty_mDecoratedTransientListForGeneration) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mToOneEntityRelationshipList.objectCompare (p->mProperty_mToOneEntityRelationshipList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mToManyEntityRelationshipList.objectCompare (p->mProperty_mToManyEntityRelationshipList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSignatureSet.objectCompare (p->mProperty_mSignatureSet) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsGraphicEntity.objectCompare (p->mProperty_mIsGraphicEntity) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTransientsDeclaredInSuperEntity.objectCompare (p->mProperty_mTransientsDeclaredInSuperEntity) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mArrayControllerForGeneration.objectCompare (p->mProperty_mArrayControllerForGeneration) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSelectionControllerListForGeneration.objectCompare (p->mProperty_mSelectionControllerListForGeneration) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityForGeneration::GALGAS_entityForGeneration (void) :
GALGAS_abstractFileGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityForGeneration GALGAS_entityForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_entityForGeneration::constructor_new (GALGAS_string::constructor_default (HERE),
                                                      GALGAS_string::constructor_default (HERE),
                                                      GALGAS_propertyGenerationList::constructor_emptyList (HERE),
                                                      GALGAS_simpleStoredPropertyListForGenerationEX::constructor_emptyList (HERE),
                                                      GALGAS_transientDefinitionListForGenerationEX::constructor_emptyList (HERE),
                                                      GALGAS_toOneEntityRelationshipListForGeneration::constructor_emptyList (HERE),
                                                      GALGAS_toManyEntityRelationshipListForGeneration::constructor_emptyList (HERE),
                                                      GALGAS_stringset::constructor_emptySet (HERE),
                                                      GALGAS_bool::constructor_default (HERE),
                                                      GALGAS_stringset::constructor_emptySet (HERE),
                                                      GALGAS_arrayControllerForGenerationEX::constructor_emptyList (HERE),
                                                      GALGAS_selectionControllerForGeneration::constructor_emptyList (HERE)
                                                      COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityForGeneration::GALGAS_entityForGeneration (const cPtr_entityForGeneration * inSourcePtr) :
GALGAS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_entityForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityForGeneration GALGAS_entityForGeneration::constructor_new (const GALGAS_string & inAttribute_mEntityName,
                                                                        const GALGAS_string & inAttribute_mSuperEntityName,
                                                                        const GALGAS_propertyGenerationList & inAttribute_mPropertyGenerationList,
                                                                        const GALGAS_simpleStoredPropertyListForGenerationEX & inAttribute_mSimpleStoredPropertyListForGeneration,
                                                                        const GALGAS_transientDefinitionListForGenerationEX & inAttribute_mDecoratedTransientListForGeneration,
                                                                        const GALGAS_toOneEntityRelationshipListForGeneration & inAttribute_mToOneEntityRelationshipList,
                                                                        const GALGAS_toManyEntityRelationshipListForGeneration & inAttribute_mToManyEntityRelationshipList,
                                                                        const GALGAS_stringset & inAttribute_mSignatureSet,
                                                                        const GALGAS_bool & inAttribute_mIsGraphicEntity,
                                                                        const GALGAS_stringset & inAttribute_mTransientsDeclaredInSuperEntity,
                                                                        const GALGAS_arrayControllerForGenerationEX & inAttribute_mArrayControllerForGeneration,
                                                                        const GALGAS_selectionControllerForGeneration & inAttribute_mSelectionControllerListForGeneration
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_entityForGeneration result ;
  if (inAttribute_mEntityName.isValid () && inAttribute_mSuperEntityName.isValid () && inAttribute_mPropertyGenerationList.isValid () && inAttribute_mSimpleStoredPropertyListForGeneration.isValid () && inAttribute_mDecoratedTransientListForGeneration.isValid () && inAttribute_mToOneEntityRelationshipList.isValid () && inAttribute_mToManyEntityRelationshipList.isValid () && inAttribute_mSignatureSet.isValid () && inAttribute_mIsGraphicEntity.isValid () && inAttribute_mTransientsDeclaredInSuperEntity.isValid () && inAttribute_mArrayControllerForGeneration.isValid () && inAttribute_mSelectionControllerListForGeneration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_entityForGeneration (inAttribute_mEntityName, inAttribute_mSuperEntityName, inAttribute_mPropertyGenerationList, inAttribute_mSimpleStoredPropertyListForGeneration, inAttribute_mDecoratedTransientListForGeneration, inAttribute_mToOneEntityRelationshipList, inAttribute_mToManyEntityRelationshipList, inAttribute_mSignatureSet, inAttribute_mIsGraphicEntity, inAttribute_mTransientsDeclaredInSuperEntity, inAttribute_mArrayControllerForGeneration, inAttribute_mSelectionControllerListForGeneration COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_entityForGeneration::getter_mEntityName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityForGeneration * p = (const cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    result = p->mProperty_mEntityName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_entityForGeneration::getter_mEntityName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEntityName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_entityForGeneration::getter_mSuperEntityName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityForGeneration * p = (const cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    result = p->mProperty_mSuperEntityName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_entityForGeneration::getter_mSuperEntityName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSuperEntityName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyGenerationList GALGAS_entityForGeneration::getter_mPropertyGenerationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyGenerationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityForGeneration * p = (const cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    result = p->mProperty_mPropertyGenerationList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyGenerationList cPtr_entityForGeneration::getter_mPropertyGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyListForGenerationEX GALGAS_entityForGeneration::getter_mSimpleStoredPropertyListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_simpleStoredPropertyListForGenerationEX result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityForGeneration * p = (const cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    result = p->mProperty_mSimpleStoredPropertyListForGeneration ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyListForGenerationEX cPtr_entityForGeneration::getter_mSimpleStoredPropertyListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSimpleStoredPropertyListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDefinitionListForGenerationEX GALGAS_entityForGeneration::getter_mDecoratedTransientListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_transientDefinitionListForGenerationEX result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityForGeneration * p = (const cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    result = p->mProperty_mDecoratedTransientListForGeneration ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDefinitionListForGenerationEX cPtr_entityForGeneration::getter_mDecoratedTransientListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDecoratedTransientListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneEntityRelationshipListForGeneration GALGAS_entityForGeneration::getter_mToOneEntityRelationshipList (UNUSED_LOCATION_ARGS) const {
  GALGAS_toOneEntityRelationshipListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityForGeneration * p = (const cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    result = p->mProperty_mToOneEntityRelationshipList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneEntityRelationshipListForGeneration cPtr_entityForGeneration::getter_mToOneEntityRelationshipList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mToOneEntityRelationshipList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyEntityRelationshipListForGeneration GALGAS_entityForGeneration::getter_mToManyEntityRelationshipList (UNUSED_LOCATION_ARGS) const {
  GALGAS_toManyEntityRelationshipListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityForGeneration * p = (const cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    result = p->mProperty_mToManyEntityRelationshipList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyEntityRelationshipListForGeneration cPtr_entityForGeneration::getter_mToManyEntityRelationshipList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mToManyEntityRelationshipList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringset GALGAS_entityForGeneration::getter_mSignatureSet (UNUSED_LOCATION_ARGS) const {
  GALGAS_stringset result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityForGeneration * p = (const cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    result = p->mProperty_mSignatureSet ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringset cPtr_entityForGeneration::getter_mSignatureSet (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSignatureSet ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_entityForGeneration::getter_mIsGraphicEntity (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityForGeneration * p = (const cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    result = p->mProperty_mIsGraphicEntity ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_entityForGeneration::getter_mIsGraphicEntity (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsGraphicEntity ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringset GALGAS_entityForGeneration::getter_mTransientsDeclaredInSuperEntity (UNUSED_LOCATION_ARGS) const {
  GALGAS_stringset result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityForGeneration * p = (const cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    result = p->mProperty_mTransientsDeclaredInSuperEntity ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringset cPtr_entityForGeneration::getter_mTransientsDeclaredInSuperEntity (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTransientsDeclaredInSuperEntity ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerForGenerationEX GALGAS_entityForGeneration::getter_mArrayControllerForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_arrayControllerForGenerationEX result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityForGeneration * p = (const cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    result = p->mProperty_mArrayControllerForGeneration ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerForGenerationEX cPtr_entityForGeneration::getter_mArrayControllerForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArrayControllerForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerForGeneration GALGAS_entityForGeneration::getter_mSelectionControllerListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_selectionControllerForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityForGeneration * p = (const cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    result = p->mProperty_mSelectionControllerListForGeneration ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerForGeneration cPtr_entityForGeneration::getter_mSelectionControllerListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelectionControllerListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @entityForGeneration class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_entityForGeneration::cPtr_entityForGeneration (const GALGAS_string & in_mEntityName,
                                                    const GALGAS_string & in_mSuperEntityName,
                                                    const GALGAS_propertyGenerationList & in_mPropertyGenerationList,
                                                    const GALGAS_simpleStoredPropertyListForGenerationEX & in_mSimpleStoredPropertyListForGeneration,
                                                    const GALGAS_transientDefinitionListForGenerationEX & in_mDecoratedTransientListForGeneration,
                                                    const GALGAS_toOneEntityRelationshipListForGeneration & in_mToOneEntityRelationshipList,
                                                    const GALGAS_toManyEntityRelationshipListForGeneration & in_mToManyEntityRelationshipList,
                                                    const GALGAS_stringset & in_mSignatureSet,
                                                    const GALGAS_bool & in_mIsGraphicEntity,
                                                    const GALGAS_stringset & in_mTransientsDeclaredInSuperEntity,
                                                    const GALGAS_arrayControllerForGenerationEX & in_mArrayControllerForGeneration,
                                                    const GALGAS_selectionControllerForGeneration & in_mSelectionControllerListForGeneration
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (THERE),
mProperty_mEntityName (in_mEntityName),
mProperty_mSuperEntityName (in_mSuperEntityName),
mProperty_mPropertyGenerationList (in_mPropertyGenerationList),
mProperty_mSimpleStoredPropertyListForGeneration (in_mSimpleStoredPropertyListForGeneration),
mProperty_mDecoratedTransientListForGeneration (in_mDecoratedTransientListForGeneration),
mProperty_mToOneEntityRelationshipList (in_mToOneEntityRelationshipList),
mProperty_mToManyEntityRelationshipList (in_mToManyEntityRelationshipList),
mProperty_mSignatureSet (in_mSignatureSet),
mProperty_mIsGraphicEntity (in_mIsGraphicEntity),
mProperty_mTransientsDeclaredInSuperEntity (in_mTransientsDeclaredInSuperEntity),
mProperty_mArrayControllerForGeneration (in_mArrayControllerForGeneration),
mProperty_mSelectionControllerListForGeneration (in_mSelectionControllerListForGeneration) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  mProperty_mSimpleStoredPropertyListForGeneration.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDecoratedTransientListForGeneration.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mToOneEntityRelationshipList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mToManyEntityRelationshipList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSignatureSet.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsGraphicEntity.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTransientsDeclaredInSuperEntity.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mArrayControllerForGeneration.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSelectionControllerListForGeneration.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_entityForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_entityForGeneration (mProperty_mEntityName, mProperty_mSuperEntityName, mProperty_mPropertyGenerationList, mProperty_mSimpleStoredPropertyListForGeneration, mProperty_mDecoratedTransientListForGeneration, mProperty_mToOneEntityRelationshipList, mProperty_mToManyEntityRelationshipList, mProperty_mSignatureSet, mProperty_mIsGraphicEntity, mProperty_mTransientsDeclaredInSuperEntity, mProperty_mArrayControllerForGeneration, mProperty_mSelectionControllerListForGeneration COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @entityForGeneration type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_entityForGeneration ("entityForGeneration",
                                            & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_entityForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_entityForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_entityForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_documentDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_documentDeclarationAST * p = (const cPtr_documentDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_documentDeclarationAST) ;
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
    result = mProperty_mSecondaryPropertyList.objectCompare (p->mProperty_mSecondaryPropertyList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_documentDeclarationAST::objectCompare (const GALGAS_documentDeclarationAST & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentDeclarationAST::GALGAS_documentDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentDeclarationAST GALGAS_documentDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_documentDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                         GALGAS_lstring::constructor_default (HERE),
                                                         GALGAS_outletDeclarationList::constructor_emptyList (HERE),
                                                         GALGAS_lstringlist::constructor_emptyList (HERE),
                                                         GALGAS_secondaryPropertyList::constructor_emptyList (HERE)
                                                         COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentDeclarationAST::GALGAS_documentDeclarationAST (const cPtr_documentDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_documentDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentDeclarationAST GALGAS_documentDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                              const GALGAS_lstring & inAttribute_mRootEntityName,
                                                                              const GALGAS_outletDeclarationList & inAttribute_mOutletDeclarationList,
                                                                              const GALGAS_lstringlist & inAttribute_mActionDeclarationList,
                                                                              const GALGAS_secondaryPropertyList & inAttribute_mSecondaryPropertyList
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_documentDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mRootEntityName.isValid () && inAttribute_mOutletDeclarationList.isValid () && inAttribute_mActionDeclarationList.isValid () && inAttribute_mSecondaryPropertyList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_documentDeclarationAST (inAttribute_mClassName, inAttribute_mRootEntityName, inAttribute_mOutletDeclarationList, inAttribute_mActionDeclarationList, inAttribute_mSecondaryPropertyList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_documentDeclarationAST::getter_mRootEntityName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_documentDeclarationAST * p = (const cPtr_documentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_documentDeclarationAST) ;
    result = p->mProperty_mRootEntityName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_documentDeclarationAST::getter_mRootEntityName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRootEntityName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletDeclarationList GALGAS_documentDeclarationAST::getter_mOutletDeclarationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_outletDeclarationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_documentDeclarationAST * p = (const cPtr_documentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_documentDeclarationAST) ;
    result = p->mProperty_mOutletDeclarationList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletDeclarationList cPtr_documentDeclarationAST::getter_mOutletDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOutletDeclarationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_documentDeclarationAST::getter_mActionDeclarationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_documentDeclarationAST * p = (const cPtr_documentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_documentDeclarationAST) ;
    result = p->mProperty_mActionDeclarationList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cPtr_documentDeclarationAST::getter_mActionDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActionDeclarationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_secondaryPropertyList GALGAS_documentDeclarationAST::getter_mSecondaryPropertyList (UNUSED_LOCATION_ARGS) const {
  GALGAS_secondaryPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_documentDeclarationAST * p = (const cPtr_documentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_documentDeclarationAST) ;
    result = p->mProperty_mSecondaryPropertyList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_secondaryPropertyList cPtr_documentDeclarationAST::getter_mSecondaryPropertyList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSecondaryPropertyList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                   Pointer class for @documentDeclarationAST class                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_documentDeclarationAST::cPtr_documentDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                          const GALGAS_lstring & in_mRootEntityName,
                                                          const GALGAS_outletDeclarationList & in_mOutletDeclarationList,
                                                          const GALGAS_lstringlist & in_mActionDeclarationList,
                                                          const GALGAS_secondaryPropertyList & in_mSecondaryPropertyList
                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mRootEntityName (in_mRootEntityName),
mProperty_mOutletDeclarationList (in_mOutletDeclarationList),
mProperty_mActionDeclarationList (in_mActionDeclarationList),
mProperty_mSecondaryPropertyList (in_mSecondaryPropertyList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_documentDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_documentDeclarationAST ;
}

void cPtr_documentDeclarationAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@documentDeclarationAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRootEntityName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOutletDeclarationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActionDeclarationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSecondaryPropertyList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_documentDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_documentDeclarationAST (mProperty_mClassName, mProperty_mRootEntityName, mProperty_mOutletDeclarationList, mProperty_mActionDeclarationList, mProperty_mSecondaryPropertyList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @documentDeclarationAST type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_documentDeclarationAST ("documentDeclarationAST",
                                               & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_documentDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_documentDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_documentDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_documentDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentDeclarationAST GALGAS_documentDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_documentDeclarationAST result ;
  const GALGAS_documentDeclarationAST * p = (const GALGAS_documentDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_documentDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("documentDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_documentFileGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_documentFileGeneration * p = (const cPtr_documentFileGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_documentFileGeneration) ;
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
    result = mProperty_mTransientListForGeneration.objectCompare (p->mProperty_mTransientListForGeneration) ;
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
    result = mProperty_mArrayControllerForGeneration.objectCompare (p->mProperty_mArrayControllerForGeneration) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTableViewBindingGenerationList.objectCompare (p->mProperty_mTableViewBindingGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEBViewBindingGenerationList.objectCompare (p->mProperty_mEBViewBindingGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSelectionControllerListForGeneration.objectCompare (p->mProperty_mSelectionControllerListForGeneration) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_documentFileGeneration::objectCompare (const GALGAS_documentFileGeneration & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentFileGeneration::GALGAS_documentFileGeneration (void) :
GALGAS_abstractFileGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentFileGeneration GALGAS_documentFileGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_documentFileGeneration::constructor_new (GALGAS_string::constructor_default (HERE),
                                                         GALGAS_string::constructor_default (HERE),
                                                         GALGAS_propertyGenerationList::constructor_emptyList (HERE),
                                                         GALGAS_transientDefinitionListForGenerationEX::constructor_emptyList (HERE),
                                                         GALGAS_decoratedOutletMap::constructor_emptyMap (HERE),
                                                         GALGAS_actionBindingListForGeneration::constructor_emptyList (HERE),
                                                         GALGAS_regularBindingsGenerationList::constructor_emptyList (HERE),
                                                         GALGAS_multipleBindingGenerationList::constructor_emptyList (HERE),
                                                         GALGAS_arrayControllerForGenerationEX::constructor_emptyList (HERE),
                                                         GALGAS_tableViewBindingGenerationList::constructor_emptyList (HERE),
                                                         GALGAS_ebViewGraphicControllerBindingGenerationList::constructor_emptyList (HERE),
                                                         GALGAS_selectionControllerForGeneration::constructor_emptyList (HERE)
                                                         COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentFileGeneration::GALGAS_documentFileGeneration (const cPtr_documentFileGeneration * inSourcePtr) :
GALGAS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_documentFileGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentFileGeneration GALGAS_documentFileGeneration::constructor_new (const GALGAS_string & inAttribute_mDocumentName,
                                                                              const GALGAS_string & inAttribute_mRootEntityName,
                                                                              const GALGAS_propertyGenerationList & inAttribute_mDocumentPropertyGenearionList,
                                                                              const GALGAS_transientDefinitionListForGenerationEX & inAttribute_mTransientListForGeneration,
                                                                              const GALGAS_decoratedOutletMap & inAttribute_mOutletMap,
                                                                              const GALGAS_actionBindingListForGeneration & inAttribute_mTargetActionList,
                                                                              const GALGAS_regularBindingsGenerationList & inAttribute_mRegularBindingsGenerationList,
                                                                              const GALGAS_multipleBindingGenerationList & inAttribute_multipleBindingGenerationList,
                                                                              const GALGAS_arrayControllerForGenerationEX & inAttribute_mArrayControllerForGeneration,
                                                                              const GALGAS_tableViewBindingGenerationList & inAttribute_mTableViewBindingGenerationList,
                                                                              const GALGAS_ebViewGraphicControllerBindingGenerationList & inAttribute_mEBViewBindingGenerationList,
                                                                              const GALGAS_selectionControllerForGeneration & inAttribute_mSelectionControllerListForGeneration
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_documentFileGeneration result ;
  if (inAttribute_mDocumentName.isValid () && inAttribute_mRootEntityName.isValid () && inAttribute_mDocumentPropertyGenearionList.isValid () && inAttribute_mTransientListForGeneration.isValid () && inAttribute_mOutletMap.isValid () && inAttribute_mTargetActionList.isValid () && inAttribute_mRegularBindingsGenerationList.isValid () && inAttribute_multipleBindingGenerationList.isValid () && inAttribute_mArrayControllerForGeneration.isValid () && inAttribute_mTableViewBindingGenerationList.isValid () && inAttribute_mEBViewBindingGenerationList.isValid () && inAttribute_mSelectionControllerListForGeneration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_documentFileGeneration (inAttribute_mDocumentName, inAttribute_mRootEntityName, inAttribute_mDocumentPropertyGenearionList, inAttribute_mTransientListForGeneration, inAttribute_mOutletMap, inAttribute_mTargetActionList, inAttribute_mRegularBindingsGenerationList, inAttribute_multipleBindingGenerationList, inAttribute_mArrayControllerForGeneration, inAttribute_mTableViewBindingGenerationList, inAttribute_mEBViewBindingGenerationList, inAttribute_mSelectionControllerListForGeneration COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_documentFileGeneration::getter_mDocumentName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_documentFileGeneration * p = (const cPtr_documentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_documentFileGeneration) ;
    result = p->mProperty_mDocumentName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_documentFileGeneration::getter_mDocumentName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDocumentName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_documentFileGeneration::getter_mRootEntityName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_documentFileGeneration * p = (const cPtr_documentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_documentFileGeneration) ;
    result = p->mProperty_mRootEntityName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_documentFileGeneration::getter_mRootEntityName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRootEntityName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyGenerationList GALGAS_documentFileGeneration::getter_mDocumentPropertyGenearionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyGenerationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_documentFileGeneration * p = (const cPtr_documentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_documentFileGeneration) ;
    result = p->mProperty_mDocumentPropertyGenearionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyGenerationList cPtr_documentFileGeneration::getter_mDocumentPropertyGenearionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDocumentPropertyGenearionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDefinitionListForGenerationEX GALGAS_documentFileGeneration::getter_mTransientListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_transientDefinitionListForGenerationEX result ;
  if (NULL != mObjectPtr) {
    const cPtr_documentFileGeneration * p = (const cPtr_documentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_documentFileGeneration) ;
    result = p->mProperty_mTransientListForGeneration ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDefinitionListForGenerationEX cPtr_documentFileGeneration::getter_mTransientListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTransientListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedOutletMap GALGAS_documentFileGeneration::getter_mOutletMap (UNUSED_LOCATION_ARGS) const {
  GALGAS_decoratedOutletMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_documentFileGeneration * p = (const cPtr_documentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_documentFileGeneration) ;
    result = p->mProperty_mOutletMap ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedOutletMap cPtr_documentFileGeneration::getter_mOutletMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOutletMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionBindingListForGeneration GALGAS_documentFileGeneration::getter_mTargetActionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_actionBindingListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_documentFileGeneration * p = (const cPtr_documentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_documentFileGeneration) ;
    result = p->mProperty_mTargetActionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionBindingListForGeneration cPtr_documentFileGeneration::getter_mTargetActionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetActionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList GALGAS_documentFileGeneration::getter_mRegularBindingsGenerationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_regularBindingsGenerationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_documentFileGeneration * p = (const cPtr_documentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_documentFileGeneration) ;
    result = p->mProperty_mRegularBindingsGenerationList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList cPtr_documentFileGeneration::getter_mRegularBindingsGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegularBindingsGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingGenerationList GALGAS_documentFileGeneration::getter_multipleBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_multipleBindingGenerationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_documentFileGeneration * p = (const cPtr_documentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_documentFileGeneration) ;
    result = p->mProperty_multipleBindingGenerationList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingGenerationList cPtr_documentFileGeneration::getter_multipleBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_multipleBindingGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerForGenerationEX GALGAS_documentFileGeneration::getter_mArrayControllerForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_arrayControllerForGenerationEX result ;
  if (NULL != mObjectPtr) {
    const cPtr_documentFileGeneration * p = (const cPtr_documentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_documentFileGeneration) ;
    result = p->mProperty_mArrayControllerForGeneration ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerForGenerationEX cPtr_documentFileGeneration::getter_mArrayControllerForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArrayControllerForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewBindingGenerationList GALGAS_documentFileGeneration::getter_mTableViewBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_tableViewBindingGenerationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_documentFileGeneration * p = (const cPtr_documentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_documentFileGeneration) ;
    result = p->mProperty_mTableViewBindingGenerationList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewBindingGenerationList cPtr_documentFileGeneration::getter_mTableViewBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTableViewBindingGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ebViewGraphicControllerBindingGenerationList GALGAS_documentFileGeneration::getter_mEBViewBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_ebViewGraphicControllerBindingGenerationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_documentFileGeneration * p = (const cPtr_documentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_documentFileGeneration) ;
    result = p->mProperty_mEBViewBindingGenerationList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ebViewGraphicControllerBindingGenerationList cPtr_documentFileGeneration::getter_mEBViewBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEBViewBindingGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerForGeneration GALGAS_documentFileGeneration::getter_mSelectionControllerListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_selectionControllerForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_documentFileGeneration * p = (const cPtr_documentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_documentFileGeneration) ;
    result = p->mProperty_mSelectionControllerListForGeneration ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerForGeneration cPtr_documentFileGeneration::getter_mSelectionControllerListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelectionControllerListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                   Pointer class for @documentFileGeneration class                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_documentFileGeneration::cPtr_documentFileGeneration (const GALGAS_string & in_mDocumentName,
                                                          const GALGAS_string & in_mRootEntityName,
                                                          const GALGAS_propertyGenerationList & in_mDocumentPropertyGenearionList,
                                                          const GALGAS_transientDefinitionListForGenerationEX & in_mTransientListForGeneration,
                                                          const GALGAS_decoratedOutletMap & in_mOutletMap,
                                                          const GALGAS_actionBindingListForGeneration & in_mTargetActionList,
                                                          const GALGAS_regularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                                          const GALGAS_multipleBindingGenerationList & in_multipleBindingGenerationList,
                                                          const GALGAS_arrayControllerForGenerationEX & in_mArrayControllerForGeneration,
                                                          const GALGAS_tableViewBindingGenerationList & in_mTableViewBindingGenerationList,
                                                          const GALGAS_ebViewGraphicControllerBindingGenerationList & in_mEBViewBindingGenerationList,
                                                          const GALGAS_selectionControllerForGeneration & in_mSelectionControllerListForGeneration
                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (THERE),
mProperty_mDocumentName (in_mDocumentName),
mProperty_mRootEntityName (in_mRootEntityName),
mProperty_mDocumentPropertyGenearionList (in_mDocumentPropertyGenearionList),
mProperty_mTransientListForGeneration (in_mTransientListForGeneration),
mProperty_mOutletMap (in_mOutletMap),
mProperty_mTargetActionList (in_mTargetActionList),
mProperty_mRegularBindingsGenerationList (in_mRegularBindingsGenerationList),
mProperty_multipleBindingGenerationList (in_multipleBindingGenerationList),
mProperty_mArrayControllerForGeneration (in_mArrayControllerForGeneration),
mProperty_mTableViewBindingGenerationList (in_mTableViewBindingGenerationList),
mProperty_mEBViewBindingGenerationList (in_mEBViewBindingGenerationList),
mProperty_mSelectionControllerListForGeneration (in_mSelectionControllerListForGeneration) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_documentFileGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_documentFileGeneration ;
}

void cPtr_documentFileGeneration::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@documentFileGeneration:" ;
  mProperty_mDocumentName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRootEntityName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDocumentPropertyGenearionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTransientListForGeneration.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOutletMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetActionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegularBindingsGenerationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_multipleBindingGenerationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mArrayControllerForGeneration.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTableViewBindingGenerationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEBViewBindingGenerationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSelectionControllerListForGeneration.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_documentFileGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_documentFileGeneration (mProperty_mDocumentName, mProperty_mRootEntityName, mProperty_mDocumentPropertyGenearionList, mProperty_mTransientListForGeneration, mProperty_mOutletMap, mProperty_mTargetActionList, mProperty_mRegularBindingsGenerationList, mProperty_multipleBindingGenerationList, mProperty_mArrayControllerForGeneration, mProperty_mTableViewBindingGenerationList, mProperty_mEBViewBindingGenerationList, mProperty_mSelectionControllerListForGeneration COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @documentFileGeneration type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_documentFileGeneration ("documentFileGeneration",
                                               & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_documentFileGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_documentFileGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_documentFileGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_documentFileGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentFileGeneration GALGAS_documentFileGeneration::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_documentFileGeneration result ;
  const GALGAS_documentFileGeneration * p = (const GALGAS_documentFileGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_documentFileGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("documentFileGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefsDeclarationAST::GALGAS_prefsDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefsDeclarationAST GALGAS_prefsDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_prefsDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_prefDeclaration::constructor_default (HERE)
                                                      COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefsDeclarationAST::GALGAS_prefsDeclarationAST (const cPtr_prefsDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_prefsDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefsDeclarationAST GALGAS_prefsDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                        const GALGAS_prefDeclaration & inAttribute_mDeclaration
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_prefsDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mDeclaration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_prefsDeclarationAST (inAttribute_mClassName, inAttribute_mDeclaration COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefDeclaration GALGAS_prefsDeclarationAST::getter_mDeclaration (UNUSED_LOCATION_ARGS) const {
  GALGAS_prefDeclaration result ;
  if (NULL != mObjectPtr) {
    const cPtr_prefsDeclarationAST * p = (const cPtr_prefsDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefsDeclarationAST) ;
    result = p->mProperty_mDeclaration ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefDeclaration cPtr_prefsDeclarationAST::getter_mDeclaration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDeclaration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @prefsDeclarationAST class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_prefsDeclarationAST::cPtr_prefsDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                    const GALGAS_prefDeclaration & in_mDeclaration
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mDeclaration (in_mDeclaration) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_prefsDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_prefsDeclarationAST (mProperty_mClassName, mProperty_mDeclaration COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @prefsDeclarationAST type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_prefsDeclarationAST ("prefsDeclarationAST",
                                            & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_prefsDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefsDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_prefsDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefsDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Extension method '@prefDeclaration typeInventory'                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_typeInventory (const GALGAS_prefDeclaration inObject,
                                    GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  extensionMethod_typeInventory (inObject.mProperty_mSimpleStoredAttributeList, ioArgument_ioUnifiedTypeMap, inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 177)) ;
  cEnumerator_secondaryPropertyList enumerator_6906 (inObject.mProperty_mSecondaryPropertyList, kENUMERATION_UP) ;
  while (enumerator_6906.hasCurrentObject ()) {
    callExtensionMethod_typeInventory ((const cPtr_abstractSecondaryProperty *) enumerator_6906.current_mSecondaryProperty (HERE).ptr (), ioArgument_ioUnifiedTypeMap, inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 179)) ;
    enumerator_6906.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Extension method '@prefDeclaration buildObservablePropertyMapsFromStoredProperties'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_buildObservablePropertyMapsFromStoredProperties (const GALGAS_prefDeclaration inObject,
                                                                      const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                      GALGAS_semanticContextEX & ioArgument_ioSemanticContext,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  extensionMethod_buildObservablePropertyMap (inObject.mProperty_mSimpleStoredAttributeList, constinArgument_inUnifiedTypeMap, ioArgument_ioSemanticContext.mProperty_mPreferencesObservablePropertyMap, inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 194)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassDeclarationAST::GALGAS_outletClassDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassDeclarationAST::GALGAS_outletClassDeclarationAST (const cPtr_outletClassDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_outletClassDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_outletClassDeclarationAST::getter_mUserDefined (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_outletClassDeclarationAST * p = (const cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    result = p->mProperty_mUserDefined ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_outletClassDeclarationAST::getter_mUserDefined (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUserDefined ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_outletClassDeclarationAST::getter_mSuperClassName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_outletClassDeclarationAST * p = (const cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    result = p->mProperty_mSuperClassName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_outletClassDeclarationAST::getter_mSuperClassName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSuperClassName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_outletClassDeclarationAST::getter_mHasRunAction (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_outletClassDeclarationAST * p = (const cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    result = p->mProperty_mHasRunAction ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_outletClassDeclarationAST::getter_mHasRunAction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHasRunAction ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_outletClassDeclarationAST::getter_mHasEnabled (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_outletClassDeclarationAST * p = (const cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    result = p->mProperty_mHasEnabled ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_outletClassDeclarationAST::getter_mHasEnabled (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHasEnabled ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_outletClassDeclarationAST::getter_mHandlesTableValueBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_outletClassDeclarationAST * p = (const cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    result = p->mProperty_mHandlesTableValueBinding ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_outletClassDeclarationAST::getter_mHandlesTableValueBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHandlesTableValueBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_outletClassDeclarationAST::getter_mHandlesGraphicControllerBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_outletClassDeclarationAST * p = (const cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    result = p->mProperty_mHandlesGraphicControllerBinding ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_outletClassDeclarationAST::getter_mHandlesGraphicControllerBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHandlesGraphicControllerBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_outletClassDeclarationAST::getter_mHasHidden (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_outletClassDeclarationAST * p = (const cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    result = p->mProperty_mHasHidden ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_outletClassDeclarationAST::getter_mHasHidden (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHasHidden ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                 Pointer class for @outletClassDeclarationAST class                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_outletClassDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_outletClassDeclarationAST (mProperty_mClassName, mProperty_mUserDefined, mProperty_mSuperClassName, mProperty_mHasRunAction, mProperty_mHasEnabled, mProperty_mHandlesTableValueBinding, mProperty_mHandlesGraphicControllerBinding, mProperty_mHasHidden COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @outletClassDeclarationAST type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletClassDeclarationAST ("outletClassDeclarationAST",
                                                  & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_outletClassDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_outletClassDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletClassDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_transientAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_transientAST * p = (const cPtr_transientAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_transientAST) ;
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
    result = mProperty_mExternFunctionName.objectCompare (p->mProperty_mExternFunctionName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_transientAST::objectCompare (const GALGAS_transientAST & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientAST::GALGAS_transientAST (void) :
GALGAS_abstractSecondaryProperty () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientAST GALGAS_transientAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_transientAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                               GALGAS_lstring::constructor_default (HERE),
                                               GALGAS_observablePropertyList::constructor_emptyList (HERE),
                                               GALGAS_lstring::constructor_default (HERE)
                                               COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientAST::GALGAS_transientAST (const cPtr_transientAST * inSourcePtr) :
GALGAS_abstractSecondaryProperty (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_transientAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientAST GALGAS_transientAST::constructor_new (const GALGAS_lstring & inAttribute_mTransientTypeName,
                                                          const GALGAS_lstring & inAttribute_mTransientName,
                                                          const GALGAS_observablePropertyList & inAttribute_mDependencyList,
                                                          const GALGAS_lstring & inAttribute_mExternFunctionName
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_transientAST result ;
  if (inAttribute_mTransientTypeName.isValid () && inAttribute_mTransientName.isValid () && inAttribute_mDependencyList.isValid () && inAttribute_mExternFunctionName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_transientAST (inAttribute_mTransientTypeName, inAttribute_mTransientName, inAttribute_mDependencyList, inAttribute_mExternFunctionName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_transientAST::getter_mTransientTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_transientAST * p = (const cPtr_transientAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientAST) ;
    result = p->mProperty_mTransientTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_transientAST::getter_mTransientTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTransientTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_transientAST::getter_mTransientName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_transientAST * p = (const cPtr_transientAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientAST) ;
    result = p->mProperty_mTransientName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_transientAST::getter_mTransientName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTransientName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyList GALGAS_transientAST::getter_mDependencyList (UNUSED_LOCATION_ARGS) const {
  GALGAS_observablePropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_transientAST * p = (const cPtr_transientAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientAST) ;
    result = p->mProperty_mDependencyList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyList cPtr_transientAST::getter_mDependencyList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDependencyList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_transientAST::getter_mExternFunctionName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_transientAST * p = (const cPtr_transientAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientAST) ;
    result = p->mProperty_mExternFunctionName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_transientAST::getter_mExternFunctionName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternFunctionName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                        Pointer class for @transientAST class                                        *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_transientAST::cPtr_transientAST (const GALGAS_lstring & in_mTransientTypeName,
                                      const GALGAS_lstring & in_mTransientName,
                                      const GALGAS_observablePropertyList & in_mDependencyList,
                                      const GALGAS_lstring & in_mExternFunctionName
                                      COMMA_LOCATION_ARGS) :
cPtr_abstractSecondaryProperty (THERE),
mProperty_mTransientTypeName (in_mTransientTypeName),
mProperty_mTransientName (in_mTransientName),
mProperty_mDependencyList (in_mDependencyList),
mProperty_mExternFunctionName (in_mExternFunctionName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_transientAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientAST ;
}

void cPtr_transientAST::description (C_String & ioString,
                                     const int32_t inIndentation) const {
  ioString << "[@transientAST:" ;
  mProperty_mTransientTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTransientName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDependencyList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExternFunctionName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_transientAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_transientAST (mProperty_mTransientTypeName, mProperty_mTransientName, mProperty_mDependencyList, mProperty_mExternFunctionName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                 @transientAST type                                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transientAST ("transientAST",
                                     & kTypeDescriptor_GALGAS_abstractSecondaryProperty) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_transientAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_transientAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientAST GALGAS_transientAST::extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_transientAST result ;
  const GALGAS_transientAST * p = (const GALGAS_transientAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_transientAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
    result = mProperty_mExternFunctionName.objectCompare (p->mProperty_mExternFunctionName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDeclarationAST::GALGAS_transientDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDeclarationAST GALGAS_transientDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_transientDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_observablePropertyList::constructor_emptyList (HERE),
                                                          GALGAS_lstring::constructor_default (HERE)
                                                          COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDeclarationAST::GALGAS_transientDeclarationAST (const cPtr_transientDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_transientDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDeclarationAST GALGAS_transientDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                                const GALGAS_lstring & inAttribute_mRootEntityName,
                                                                                const GALGAS_lstring & inAttribute_mTransientTypeName,
                                                                                const GALGAS_lstring & inAttribute_mTransientName,
                                                                                const GALGAS_observablePropertyList & inAttribute_mDependencyList,
                                                                                const GALGAS_lstring & inAttribute_mExternFunctionName
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_transientDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mRootEntityName.isValid () && inAttribute_mTransientTypeName.isValid () && inAttribute_mTransientName.isValid () && inAttribute_mDependencyList.isValid () && inAttribute_mExternFunctionName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_transientDeclarationAST (inAttribute_mClassName, inAttribute_mRootEntityName, inAttribute_mTransientTypeName, inAttribute_mTransientName, inAttribute_mDependencyList, inAttribute_mExternFunctionName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_transientDeclarationAST::getter_mRootEntityName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_transientDeclarationAST * p = (const cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    result = p->mProperty_mRootEntityName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_transientDeclarationAST::getter_mRootEntityName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRootEntityName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_transientDeclarationAST::getter_mTransientTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_transientDeclarationAST * p = (const cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    result = p->mProperty_mTransientTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_transientDeclarationAST::getter_mTransientTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTransientTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_transientDeclarationAST::getter_mTransientName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_transientDeclarationAST * p = (const cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    result = p->mProperty_mTransientName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_transientDeclarationAST::getter_mTransientName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTransientName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyList GALGAS_transientDeclarationAST::getter_mDependencyList (UNUSED_LOCATION_ARGS) const {
  GALGAS_observablePropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_transientDeclarationAST * p = (const cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    result = p->mProperty_mDependencyList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyList cPtr_transientDeclarationAST::getter_mDependencyList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDependencyList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_transientDeclarationAST::getter_mExternFunctionName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_transientDeclarationAST * p = (const cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    result = p->mProperty_mExternFunctionName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_transientDeclarationAST::getter_mExternFunctionName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternFunctionName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                  Pointer class for @transientDeclarationAST class                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_transientDeclarationAST::cPtr_transientDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                            const GALGAS_lstring & in_mRootEntityName,
                                                            const GALGAS_lstring & in_mTransientTypeName,
                                                            const GALGAS_lstring & in_mTransientName,
                                                            const GALGAS_observablePropertyList & in_mDependencyList,
                                                            const GALGAS_lstring & in_mExternFunctionName
                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mRootEntityName (in_mRootEntityName),
mProperty_mTransientTypeName (in_mTransientTypeName),
mProperty_mTransientName (in_mTransientName),
mProperty_mDependencyList (in_mDependencyList),
mProperty_mExternFunctionName (in_mExternFunctionName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  mProperty_mExternFunctionName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_transientDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_transientDeclarationAST (mProperty_mClassName, mProperty_mRootEntityName, mProperty_mTransientTypeName, mProperty_mTransientName, mProperty_mDependencyList, mProperty_mExternFunctionName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @transientDeclarationAST type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transientDeclarationAST ("transientDeclarationAST",
                                                & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_transientDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_transientDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_transientPropertyGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_transientPropertyGeneration * p = (const cPtr_transientPropertyGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
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
    result = mProperty_mExternFunctionName.objectCompare (p->mProperty_mExternFunctionName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGenerate.objectCompare (p->mProperty_mGenerate) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_transientPropertyGeneration::objectCompare (const GALGAS_transientPropertyGeneration & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientPropertyGeneration::GALGAS_transientPropertyGeneration (void) :
GALGAS_propertyGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientPropertyGeneration::GALGAS_transientPropertyGeneration (const cPtr_transientPropertyGeneration * inSourcePtr) :
GALGAS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_transientPropertyGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientPropertyGeneration GALGAS_transientPropertyGeneration::constructor_new (const GALGAS_string & inAttribute_mPropertyName,
                                                                                        const GALGAS_string & inAttribute_mClassName,
                                                                                        const GALGAS_typeKind & inAttribute_mType,
                                                                                        const GALGAS_transientDependencyListForGeneration & inAttribute_mDependencyList,
                                                                                        const GALGAS_string & inAttribute_mExternFunctionName,
                                                                                        const GALGAS_bool & inAttribute_mGenerate
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_transientPropertyGeneration result ;
  if (inAttribute_mPropertyName.isValid () && inAttribute_mClassName.isValid () && inAttribute_mType.isValid () && inAttribute_mDependencyList.isValid () && inAttribute_mExternFunctionName.isValid () && inAttribute_mGenerate.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_transientPropertyGeneration (inAttribute_mPropertyName, inAttribute_mClassName, inAttribute_mType, inAttribute_mDependencyList, inAttribute_mExternFunctionName, inAttribute_mGenerate COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_transientPropertyGeneration::getter_mClassName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_transientPropertyGeneration * p = (const cPtr_transientPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
    result = p->mProperty_mClassName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_transientPropertyGeneration::getter_mClassName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mClassName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_transientPropertyGeneration::getter_mType (UNUSED_LOCATION_ARGS) const {
  GALGAS_typeKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_transientPropertyGeneration * p = (const cPtr_transientPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
    result = p->mProperty_mType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind cPtr_transientPropertyGeneration::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDependencyListForGeneration GALGAS_transientPropertyGeneration::getter_mDependencyList (UNUSED_LOCATION_ARGS) const {
  GALGAS_transientDependencyListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_transientPropertyGeneration * p = (const cPtr_transientPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
    result = p->mProperty_mDependencyList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDependencyListForGeneration cPtr_transientPropertyGeneration::getter_mDependencyList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDependencyList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_transientPropertyGeneration::getter_mExternFunctionName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_transientPropertyGeneration * p = (const cPtr_transientPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
    result = p->mProperty_mExternFunctionName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_transientPropertyGeneration::getter_mExternFunctionName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternFunctionName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_transientPropertyGeneration::getter_mGenerate (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_transientPropertyGeneration * p = (const cPtr_transientPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
    result = p->mProperty_mGenerate ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_transientPropertyGeneration::getter_mGenerate (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGenerate ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                Pointer class for @transientPropertyGeneration class                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_transientPropertyGeneration::cPtr_transientPropertyGeneration (const GALGAS_string & in_mPropertyName,
                                                                    const GALGAS_string & in_mClassName,
                                                                    const GALGAS_typeKind & in_mType,
                                                                    const GALGAS_transientDependencyListForGeneration & in_mDependencyList,
                                                                    const GALGAS_string & in_mExternFunctionName,
                                                                    const GALGAS_bool & in_mGenerate
                                                                    COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (in_mPropertyName COMMA_THERE),
mProperty_mClassName (in_mClassName),
mProperty_mType (in_mType),
mProperty_mDependencyList (in_mDependencyList),
mProperty_mExternFunctionName (in_mExternFunctionName),
mProperty_mGenerate (in_mGenerate) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_transientPropertyGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientPropertyGeneration ;
}

void cPtr_transientPropertyGeneration::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@transientPropertyGeneration:" ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDependencyList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExternFunctionName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGenerate.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_transientPropertyGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_transientPropertyGeneration (mProperty_mPropertyName, mProperty_mClassName, mProperty_mType, mProperty_mDependencyList, mProperty_mExternFunctionName, mProperty_mGenerate COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @transientPropertyGeneration type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transientPropertyGeneration ("transientPropertyGeneration",
                                                    & kTypeDescriptor_GALGAS_propertyGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_transientPropertyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientPropertyGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_transientPropertyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientPropertyGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientPropertyGeneration GALGAS_transientPropertyGeneration::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_transientPropertyGeneration result ;
  const GALGAS_transientPropertyGeneration * p = (const GALGAS_transientPropertyGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_transientPropertyGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientPropertyGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_atomicPropertyDeclarationAST::GALGAS_atomicPropertyDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_atomicPropertyDeclarationAST::GALGAS_atomicPropertyDeclarationAST (const cPtr_atomicPropertyDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_atomicPropertyDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_atomicPropertyDeclarationAST::getter_mPropertyTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_atomicPropertyDeclarationAST * p = (const cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    result = p->mProperty_mPropertyTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_atomicPropertyDeclarationAST::getter_mPropertyTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_atomicPropertyDeclarationAST::getter_mPropertyName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_atomicPropertyDeclarationAST * p = (const cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    result = p->mProperty_mPropertyName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_atomicPropertyDeclarationAST::getter_mPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractDefaultValue GALGAS_atomicPropertyDeclarationAST::getter_mDefaultValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractDefaultValue result ;
  if (NULL != mObjectPtr) {
    const cPtr_atomicPropertyDeclarationAST * p = (const cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    result = p->mProperty_mDefaultValue ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractDefaultValue cPtr_atomicPropertyDeclarationAST::getter_mDefaultValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDefaultValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_atomicPropertyDeclarationAST::getter_mNeedsValidation (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_atomicPropertyDeclarationAST * p = (const cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    result = p->mProperty_mNeedsValidation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_atomicPropertyDeclarationAST::getter_mNeedsValidation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNeedsValidation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                Pointer class for @atomicPropertyDeclarationAST class                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_atomicPropertyDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_atomicPropertyDeclarationAST (mProperty_mClassName, mProperty_mPropertyTypeName, mProperty_mPropertyName, mProperty_mDefaultValue, mProperty_mNeedsValidation COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @atomicPropertyDeclarationAST type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_atomicPropertyDeclarationAST ("atomicPropertyDeclarationAST",
                                                     & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_atomicPropertyDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicPropertyDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_atomicPropertyDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_atomicPropertyDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
    result = mProperty_mOppositeRelationshipName.objectCompare (p->mProperty_mOppositeRelationshipName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInverseRelationMultiplicity.objectCompare (p->mProperty_mInverseRelationMultiplicity) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCascading.objectCompare (p->mProperty_mCascading) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneRelationshipAST::GALGAS_toOneRelationshipAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneRelationshipAST::GALGAS_toOneRelationshipAST (const cPtr_toOneRelationshipAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_toOneRelationshipAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneRelationshipAST GALGAS_toOneRelationshipAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                          const GALGAS_lstring & inAttribute_mDestinationEntityName,
                                                                          const GALGAS_lstring & inAttribute_mToOneRelationshipName,
                                                                          const GALGAS_lstring & inAttribute_mOppositeRelationshipName,
                                                                          const GALGAS_propertyMultiplicity & inAttribute_mInverseRelationMultiplicity,
                                                                          const GALGAS_bool & inAttribute_mCascading
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_toOneRelationshipAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mDestinationEntityName.isValid () && inAttribute_mToOneRelationshipName.isValid () && inAttribute_mOppositeRelationshipName.isValid () && inAttribute_mInverseRelationMultiplicity.isValid () && inAttribute_mCascading.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_toOneRelationshipAST (inAttribute_mClassName, inAttribute_mDestinationEntityName, inAttribute_mToOneRelationshipName, inAttribute_mOppositeRelationshipName, inAttribute_mInverseRelationMultiplicity, inAttribute_mCascading COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_toOneRelationshipAST::getter_mDestinationEntityName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_toOneRelationshipAST * p = (const cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    result = p->mProperty_mDestinationEntityName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_toOneRelationshipAST::getter_mDestinationEntityName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDestinationEntityName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_toOneRelationshipAST::getter_mToOneRelationshipName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_toOneRelationshipAST * p = (const cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    result = p->mProperty_mToOneRelationshipName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_toOneRelationshipAST::getter_mToOneRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mToOneRelationshipName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_toOneRelationshipAST::getter_mOppositeRelationshipName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_toOneRelationshipAST * p = (const cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    result = p->mProperty_mOppositeRelationshipName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_toOneRelationshipAST::getter_mOppositeRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOppositeRelationshipName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMultiplicity GALGAS_toOneRelationshipAST::getter_mInverseRelationMultiplicity (UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyMultiplicity result ;
  if (NULL != mObjectPtr) {
    const cPtr_toOneRelationshipAST * p = (const cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    result = p->mProperty_mInverseRelationMultiplicity ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMultiplicity cPtr_toOneRelationshipAST::getter_mInverseRelationMultiplicity (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInverseRelationMultiplicity ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_toOneRelationshipAST::getter_mCascading (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_toOneRelationshipAST * p = (const cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    result = p->mProperty_mCascading ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_toOneRelationshipAST::getter_mCascading (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCascading ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @toOneRelationshipAST class                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_toOneRelationshipAST::cPtr_toOneRelationshipAST (const GALGAS_lstring & in_mClassName,
                                                      const GALGAS_lstring & in_mDestinationEntityName,
                                                      const GALGAS_lstring & in_mToOneRelationshipName,
                                                      const GALGAS_lstring & in_mOppositeRelationshipName,
                                                      const GALGAS_propertyMultiplicity & in_mInverseRelationMultiplicity,
                                                      const GALGAS_bool & in_mCascading
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mDestinationEntityName (in_mDestinationEntityName),
mProperty_mToOneRelationshipName (in_mToOneRelationshipName),
mProperty_mOppositeRelationshipName (in_mOppositeRelationshipName),
mProperty_mInverseRelationMultiplicity (in_mInverseRelationMultiplicity),
mProperty_mCascading (in_mCascading) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  mProperty_mOppositeRelationshipName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInverseRelationMultiplicity.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCascading.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_toOneRelationshipAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_toOneRelationshipAST (mProperty_mClassName, mProperty_mDestinationEntityName, mProperty_mToOneRelationshipName, mProperty_mOppositeRelationshipName, mProperty_mInverseRelationMultiplicity, mProperty_mCascading COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @toOneRelationshipAST type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toOneRelationshipAST ("toOneRelationshipAST",
                                             & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_toOneRelationshipAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOneRelationshipAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_toOneRelationshipAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toOneRelationshipAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
    result = mProperty_mOppositeRelationshipName.objectCompare (p->mProperty_mOppositeRelationshipName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInverseRelationMultiplicity.objectCompare (p->mProperty_mInverseRelationMultiplicity) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDestinationEntityObservablePropertyMap.objectCompare (p->mProperty_mDestinationEntityObservablePropertyMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCascading.objectCompare (p->mProperty_mCascading) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOnePropertyGeneration::GALGAS_toOnePropertyGeneration (void) :
GALGAS_propertyGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOnePropertyGeneration::GALGAS_toOnePropertyGeneration (const cPtr_toOnePropertyGeneration * inSourcePtr) :
GALGAS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_toOnePropertyGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOnePropertyGeneration GALGAS_toOnePropertyGeneration::constructor_new (const GALGAS_string & inAttribute_mPropertyName,
                                                                                const GALGAS_string & inAttribute_mClassName,
                                                                                const GALGAS_propertyKind & inAttribute_mRelationshipType,
                                                                                const GALGAS_string & inAttribute_mOppositeRelationshipName,
                                                                                const GALGAS_propertyMultiplicity & inAttribute_mInverseRelationMultiplicity,
                                                                                const GALGAS_propertyMap & inAttribute_mDestinationEntityObservablePropertyMap,
                                                                                const GALGAS_bool & inAttribute_mCascading
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_toOnePropertyGeneration result ;
  if (inAttribute_mPropertyName.isValid () && inAttribute_mClassName.isValid () && inAttribute_mRelationshipType.isValid () && inAttribute_mOppositeRelationshipName.isValid () && inAttribute_mInverseRelationMultiplicity.isValid () && inAttribute_mDestinationEntityObservablePropertyMap.isValid () && inAttribute_mCascading.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_toOnePropertyGeneration (inAttribute_mPropertyName, inAttribute_mClassName, inAttribute_mRelationshipType, inAttribute_mOppositeRelationshipName, inAttribute_mInverseRelationMultiplicity, inAttribute_mDestinationEntityObservablePropertyMap, inAttribute_mCascading COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_toOnePropertyGeneration::getter_mClassName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_toOnePropertyGeneration * p = (const cPtr_toOnePropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
    result = p->mProperty_mClassName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_toOnePropertyGeneration::getter_mClassName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mClassName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyKind GALGAS_toOnePropertyGeneration::getter_mRelationshipType (UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_toOnePropertyGeneration * p = (const cPtr_toOnePropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
    result = p->mProperty_mRelationshipType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyKind cPtr_toOnePropertyGeneration::getter_mRelationshipType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRelationshipType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_toOnePropertyGeneration::getter_mOppositeRelationshipName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_toOnePropertyGeneration * p = (const cPtr_toOnePropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
    result = p->mProperty_mOppositeRelationshipName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_toOnePropertyGeneration::getter_mOppositeRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOppositeRelationshipName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMultiplicity GALGAS_toOnePropertyGeneration::getter_mInverseRelationMultiplicity (UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyMultiplicity result ;
  if (NULL != mObjectPtr) {
    const cPtr_toOnePropertyGeneration * p = (const cPtr_toOnePropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
    result = p->mProperty_mInverseRelationMultiplicity ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMultiplicity cPtr_toOnePropertyGeneration::getter_mInverseRelationMultiplicity (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInverseRelationMultiplicity ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMap GALGAS_toOnePropertyGeneration::getter_mDestinationEntityObservablePropertyMap (UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_toOnePropertyGeneration * p = (const cPtr_toOnePropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
    result = p->mProperty_mDestinationEntityObservablePropertyMap ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMap cPtr_toOnePropertyGeneration::getter_mDestinationEntityObservablePropertyMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDestinationEntityObservablePropertyMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_toOnePropertyGeneration::getter_mCascading (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_toOnePropertyGeneration * p = (const cPtr_toOnePropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
    result = p->mProperty_mCascading ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_toOnePropertyGeneration::getter_mCascading (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCascading ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                  Pointer class for @toOnePropertyGeneration class                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_toOnePropertyGeneration::cPtr_toOnePropertyGeneration (const GALGAS_string & in_mPropertyName,
                                                            const GALGAS_string & in_mClassName,
                                                            const GALGAS_propertyKind & in_mRelationshipType,
                                                            const GALGAS_string & in_mOppositeRelationshipName,
                                                            const GALGAS_propertyMultiplicity & in_mInverseRelationMultiplicity,
                                                            const GALGAS_propertyMap & in_mDestinationEntityObservablePropertyMap,
                                                            const GALGAS_bool & in_mCascading
                                                            COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (in_mPropertyName COMMA_THERE),
mProperty_mClassName (in_mClassName),
mProperty_mRelationshipType (in_mRelationshipType),
mProperty_mOppositeRelationshipName (in_mOppositeRelationshipName),
mProperty_mInverseRelationMultiplicity (in_mInverseRelationMultiplicity),
mProperty_mDestinationEntityObservablePropertyMap (in_mDestinationEntityObservablePropertyMap),
mProperty_mCascading (in_mCascading) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  mProperty_mOppositeRelationshipName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInverseRelationMultiplicity.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDestinationEntityObservablePropertyMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCascading.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_toOnePropertyGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_toOnePropertyGeneration (mProperty_mPropertyName, mProperty_mClassName, mProperty_mRelationshipType, mProperty_mOppositeRelationshipName, mProperty_mInverseRelationMultiplicity, mProperty_mDestinationEntityObservablePropertyMap, mProperty_mCascading COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @toOnePropertyGeneration type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toOnePropertyGeneration ("toOnePropertyGeneration",
                                                & kTypeDescriptor_GALGAS_propertyGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_toOnePropertyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOnePropertyGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_toOnePropertyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toOnePropertyGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
    result = mProperty_mOppositeRelationshipName.objectCompare (p->mProperty_mOppositeRelationshipName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCascading.objectCompare (p->mProperty_mCascading) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyRelationshipAST::GALGAS_toManyRelationshipAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyRelationshipAST GALGAS_toManyRelationshipAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_toManyRelationshipAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_bool::constructor_default (HERE)
                                                        COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyRelationshipAST::GALGAS_toManyRelationshipAST (const cPtr_toManyRelationshipAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_toManyRelationshipAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyRelationshipAST GALGAS_toManyRelationshipAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                            const GALGAS_lstring & inAttribute_mDestinationEntityName,
                                                                            const GALGAS_lstring & inAttribute_mToManyRelationshipName,
                                                                            const GALGAS_lstring & inAttribute_mOppositeRelationshipName,
                                                                            const GALGAS_bool & inAttribute_mCascading
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_toManyRelationshipAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mDestinationEntityName.isValid () && inAttribute_mToManyRelationshipName.isValid () && inAttribute_mOppositeRelationshipName.isValid () && inAttribute_mCascading.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_toManyRelationshipAST (inAttribute_mClassName, inAttribute_mDestinationEntityName, inAttribute_mToManyRelationshipName, inAttribute_mOppositeRelationshipName, inAttribute_mCascading COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_toManyRelationshipAST::getter_mDestinationEntityName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_toManyRelationshipAST * p = (const cPtr_toManyRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyRelationshipAST) ;
    result = p->mProperty_mDestinationEntityName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_toManyRelationshipAST::getter_mDestinationEntityName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDestinationEntityName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_toManyRelationshipAST::getter_mToManyRelationshipName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_toManyRelationshipAST * p = (const cPtr_toManyRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyRelationshipAST) ;
    result = p->mProperty_mToManyRelationshipName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_toManyRelationshipAST::getter_mToManyRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mToManyRelationshipName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_toManyRelationshipAST::getter_mOppositeRelationshipName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_toManyRelationshipAST * p = (const cPtr_toManyRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyRelationshipAST) ;
    result = p->mProperty_mOppositeRelationshipName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_toManyRelationshipAST::getter_mOppositeRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOppositeRelationshipName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_toManyRelationshipAST::getter_mCascading (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_toManyRelationshipAST * p = (const cPtr_toManyRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyRelationshipAST) ;
    result = p->mProperty_mCascading ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_toManyRelationshipAST::getter_mCascading (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCascading ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                   Pointer class for @toManyRelationshipAST class                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_toManyRelationshipAST::cPtr_toManyRelationshipAST (const GALGAS_lstring & in_mClassName,
                                                        const GALGAS_lstring & in_mDestinationEntityName,
                                                        const GALGAS_lstring & in_mToManyRelationshipName,
                                                        const GALGAS_lstring & in_mOppositeRelationshipName,
                                                        const GALGAS_bool & in_mCascading
                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mDestinationEntityName (in_mDestinationEntityName),
mProperty_mToManyRelationshipName (in_mToManyRelationshipName),
mProperty_mOppositeRelationshipName (in_mOppositeRelationshipName),
mProperty_mCascading (in_mCascading) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  mProperty_mOppositeRelationshipName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCascading.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_toManyRelationshipAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_toManyRelationshipAST (mProperty_mClassName, mProperty_mDestinationEntityName, mProperty_mToManyRelationshipName, mProperty_mOppositeRelationshipName, mProperty_mCascading COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @toManyRelationshipAST type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toManyRelationshipAST ("toManyRelationshipAST",
                                              & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_toManyRelationshipAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyRelationshipAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_toManyRelationshipAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toManyRelationshipAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_propertyArrayDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_propertyArrayDeclarationAST * p = (const cPtr_propertyArrayDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_propertyArrayDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElementClassName.objectCompare (p->mProperty_mElementClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStoredArrayPropertyName.objectCompare (p->mProperty_mStoredArrayPropertyName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_propertyArrayDeclarationAST::objectCompare (const GALGAS_propertyArrayDeclarationAST & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyArrayDeclarationAST::GALGAS_propertyArrayDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyArrayDeclarationAST GALGAS_propertyArrayDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_propertyArrayDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_lstring::constructor_default (HERE)
                                                              COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyArrayDeclarationAST::GALGAS_propertyArrayDeclarationAST (const cPtr_propertyArrayDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_propertyArrayDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyArrayDeclarationAST GALGAS_propertyArrayDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                                        const GALGAS_lstring & inAttribute_mElementClassName,
                                                                                        const GALGAS_lstring & inAttribute_mStoredArrayPropertyName
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_propertyArrayDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mElementClassName.isValid () && inAttribute_mStoredArrayPropertyName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_propertyArrayDeclarationAST (inAttribute_mClassName, inAttribute_mElementClassName, inAttribute_mStoredArrayPropertyName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_propertyArrayDeclarationAST::getter_mElementClassName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_propertyArrayDeclarationAST * p = (const cPtr_propertyArrayDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_propertyArrayDeclarationAST) ;
    result = p->mProperty_mElementClassName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_propertyArrayDeclarationAST::getter_mElementClassName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElementClassName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_propertyArrayDeclarationAST::getter_mStoredArrayPropertyName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_propertyArrayDeclarationAST * p = (const cPtr_propertyArrayDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_propertyArrayDeclarationAST) ;
    result = p->mProperty_mStoredArrayPropertyName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_propertyArrayDeclarationAST::getter_mStoredArrayPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStoredArrayPropertyName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                Pointer class for @propertyArrayDeclarationAST class                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_propertyArrayDeclarationAST::cPtr_propertyArrayDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                                    const GALGAS_lstring & in_mElementClassName,
                                                                    const GALGAS_lstring & in_mStoredArrayPropertyName
                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mElementClassName (in_mElementClassName),
mProperty_mStoredArrayPropertyName (in_mStoredArrayPropertyName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_propertyArrayDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyArrayDeclarationAST ;
}

void cPtr_propertyArrayDeclarationAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@propertyArrayDeclarationAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElementClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStoredArrayPropertyName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_propertyArrayDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_propertyArrayDeclarationAST (mProperty_mClassName, mProperty_mElementClassName, mProperty_mStoredArrayPropertyName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @propertyArrayDeclarationAST type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyArrayDeclarationAST ("propertyArrayDeclarationAST",
                                                    & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_propertyArrayDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyArrayDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_propertyArrayDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyArrayDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyArrayDeclarationAST GALGAS_propertyArrayDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_propertyArrayDeclarationAST result ;
  const GALGAS_propertyArrayDeclarationAST * p = (const GALGAS_propertyArrayDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_propertyArrayDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyArrayDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_booleanMultipleBindingLiteralIntForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_booleanMultipleBindingLiteralIntForGeneration * p = (const cPtr_booleanMultipleBindingLiteralIntForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_booleanMultipleBindingLiteralIntForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_booleanMultipleBindingLiteralIntForGeneration::objectCompare (const GALGAS_booleanMultipleBindingLiteralIntForGeneration & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_booleanMultipleBindingLiteralIntForGeneration::GALGAS_booleanMultipleBindingLiteralIntForGeneration (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_booleanMultipleBindingLiteralIntForGeneration GALGAS_booleanMultipleBindingLiteralIntForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_booleanMultipleBindingLiteralIntForGeneration::constructor_new (GALGAS_uint::constructor_default (HERE)
                                                                                COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_booleanMultipleBindingLiteralIntForGeneration::GALGAS_booleanMultipleBindingLiteralIntForGeneration (const cPtr_booleanMultipleBindingLiteralIntForGeneration * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_booleanMultipleBindingLiteralIntForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_booleanMultipleBindingLiteralIntForGeneration GALGAS_booleanMultipleBindingLiteralIntForGeneration::constructor_new (const GALGAS_uint & inAttribute_mValue
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_booleanMultipleBindingLiteralIntForGeneration result ;
  if (inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_booleanMultipleBindingLiteralIntForGeneration (inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint GALGAS_booleanMultipleBindingLiteralIntForGeneration::getter_mValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_booleanMultipleBindingLiteralIntForGeneration * p = (const cPtr_booleanMultipleBindingLiteralIntForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_booleanMultipleBindingLiteralIntForGeneration) ;
    result = p->mProperty_mValue ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_uint cPtr_booleanMultipleBindingLiteralIntForGeneration::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                       Pointer class for @booleanMultipleBindingLiteralIntForGeneration class                        *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_booleanMultipleBindingLiteralIntForGeneration::cPtr_booleanMultipleBindingLiteralIntForGeneration (const GALGAS_uint & in_mValue
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (THERE),
mProperty_mValue (in_mValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_booleanMultipleBindingLiteralIntForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_booleanMultipleBindingLiteralIntForGeneration ;
}

void cPtr_booleanMultipleBindingLiteralIntForGeneration::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "[@booleanMultipleBindingLiteralIntForGeneration:" ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_booleanMultipleBindingLiteralIntForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_booleanMultipleBindingLiteralIntForGeneration (mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 @booleanMultipleBindingLiteralIntForGeneration type                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_booleanMultipleBindingLiteralIntForGeneration ("booleanMultipleBindingLiteralIntForGeneration",
                                                                      & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_booleanMultipleBindingLiteralIntForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_booleanMultipleBindingLiteralIntForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_booleanMultipleBindingLiteralIntForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_booleanMultipleBindingLiteralIntForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_booleanMultipleBindingLiteralIntForGeneration GALGAS_booleanMultipleBindingLiteralIntForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_booleanMultipleBindingLiteralIntForGeneration result ;
  const GALGAS_booleanMultipleBindingLiteralIntForGeneration * p = (const GALGAS_booleanMultipleBindingLiteralIntForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_booleanMultipleBindingLiteralIntForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("booleanMultipleBindingLiteralIntForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_columnBindingAST::GALGAS_columnBindingAST (void) :
mProperty_mRunActionName (),
mProperty_mEnabledBindingDescriptor (),
mProperty_mHiddenBindingDescriptor (),
mProperty_mRegularBindingList () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_columnBindingAST::~ GALGAS_columnBindingAST (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_columnBindingAST::GALGAS_columnBindingAST (const GALGAS_lstring & inOperand0,
                                                  const GALGAS_multipleBindingDescriptor & inOperand1,
                                                  const GALGAS_multipleBindingDescriptor & inOperand2,
                                                  const GALGAS_regularBindingList & inOperand3) :
mProperty_mRunActionName (inOperand0),
mProperty_mEnabledBindingDescriptor (inOperand1),
mProperty_mHiddenBindingDescriptor (inOperand2),
mProperty_mRegularBindingList (inOperand3) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_columnBindingAST GALGAS_columnBindingAST::constructor_new (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_multipleBindingDescriptor & inOperand1,
                                                                  const GALGAS_multipleBindingDescriptor & inOperand2,
                                                                  const GALGAS_regularBindingList & inOperand3 
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_columnBindingAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_columnBindingAST (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_columnBindingAST::objectCompare (const GALGAS_columnBindingAST & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_columnBindingAST::isValid (void) const {
  return mProperty_mRunActionName.isValid () && mProperty_mEnabledBindingDescriptor.isValid () && mProperty_mHiddenBindingDescriptor.isValid () && mProperty_mRegularBindingList.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_columnBindingAST::drop (void) {
  mProperty_mRunActionName.drop () ;
  mProperty_mEnabledBindingDescriptor.drop () ;
  mProperty_mHiddenBindingDescriptor.drop () ;
  mProperty_mRegularBindingList.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_columnBindingAST::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "<struct @columnBindingAST:" ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_columnBindingAST::getter_mRunActionName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRunActionName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingDescriptor GALGAS_columnBindingAST::getter_mEnabledBindingDescriptor (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnabledBindingDescriptor ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingDescriptor GALGAS_columnBindingAST::getter_mHiddenBindingDescriptor (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHiddenBindingDescriptor ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingList GALGAS_columnBindingAST::getter_mRegularBindingList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegularBindingList ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @columnBindingAST type                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_columnBindingAST ("columnBindingAST",
                                         NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_columnBindingAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_columnBindingAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_columnBindingAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_columnBindingAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_columnBindingAST GALGAS_columnBindingAST::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_columnBindingAST result ;
  const GALGAS_columnBindingAST * p = (const GALGAS_columnBindingAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_columnBindingAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("columnBindingAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_arrayControllerDeclarationEX::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_arrayControllerDeclarationEX * p = (const cPtr_arrayControllerDeclarationEX *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_arrayControllerDeclarationEX) ;
  if (kOperandEqual == result) {
    result = mProperty_mControllerName.objectCompare (p->mProperty_mControllerName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsRoot.objectCompare (p->mProperty_mIsRoot) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mToManyPropertyName.objectCompare (p->mProperty_mToManyPropertyName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFilterProperties.objectCompare (p->mProperty_mFilterProperties) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mArrayControllerBoundColumnListAST.objectCompare (p->mProperty_mArrayControllerBoundColumnListAST) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mArrayControllerAttributListAST.objectCompare (p->mProperty_mArrayControllerAttributListAST) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_arrayControllerDeclarationEX::objectCompare (const GALGAS_arrayControllerDeclarationEX & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerDeclarationEX::GALGAS_arrayControllerDeclarationEX (void) :
GALGAS_abstractSecondaryProperty () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerDeclarationEX GALGAS_arrayControllerDeclarationEX::constructor_default (LOCATION_ARGS) {
  return GALGAS_arrayControllerDeclarationEX::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                               GALGAS_bool::constructor_default (HERE),
                                                               GALGAS_lstring::constructor_default (HERE),
                                                               GALGAS_lstringlist::constructor_emptyList (HERE),
                                                               GALGAS_arrayControllerBoundColumnListAST::constructor_emptyList (HERE),
                                                               GALGAS_arrayControllerAttributListAST::constructor_emptyList (HERE)
                                                               COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerDeclarationEX::GALGAS_arrayControllerDeclarationEX (const cPtr_arrayControllerDeclarationEX * inSourcePtr) :
GALGAS_abstractSecondaryProperty (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_arrayControllerDeclarationEX) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerDeclarationEX GALGAS_arrayControllerDeclarationEX::constructor_new (const GALGAS_lstring & inAttribute_mControllerName,
                                                                                          const GALGAS_bool & inAttribute_mIsRoot,
                                                                                          const GALGAS_lstring & inAttribute_mToManyPropertyName,
                                                                                          const GALGAS_lstringlist & inAttribute_mFilterProperties,
                                                                                          const GALGAS_arrayControllerBoundColumnListAST & inAttribute_mArrayControllerBoundColumnListAST,
                                                                                          const GALGAS_arrayControllerAttributListAST & inAttribute_mArrayControllerAttributListAST
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerDeclarationEX result ;
  if (inAttribute_mControllerName.isValid () && inAttribute_mIsRoot.isValid () && inAttribute_mToManyPropertyName.isValid () && inAttribute_mFilterProperties.isValid () && inAttribute_mArrayControllerBoundColumnListAST.isValid () && inAttribute_mArrayControllerAttributListAST.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_arrayControllerDeclarationEX (inAttribute_mControllerName, inAttribute_mIsRoot, inAttribute_mToManyPropertyName, inAttribute_mFilterProperties, inAttribute_mArrayControllerBoundColumnListAST, inAttribute_mArrayControllerAttributListAST COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_arrayControllerDeclarationEX::getter_mControllerName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayControllerDeclarationEX * p = (const cPtr_arrayControllerDeclarationEX *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerDeclarationEX) ;
    result = p->mProperty_mControllerName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_arrayControllerDeclarationEX::getter_mControllerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mControllerName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_arrayControllerDeclarationEX::getter_mIsRoot (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayControllerDeclarationEX * p = (const cPtr_arrayControllerDeclarationEX *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerDeclarationEX) ;
    result = p->mProperty_mIsRoot ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_arrayControllerDeclarationEX::getter_mIsRoot (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsRoot ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_arrayControllerDeclarationEX::getter_mToManyPropertyName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayControllerDeclarationEX * p = (const cPtr_arrayControllerDeclarationEX *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerDeclarationEX) ;
    result = p->mProperty_mToManyPropertyName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_arrayControllerDeclarationEX::getter_mToManyPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mToManyPropertyName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_arrayControllerDeclarationEX::getter_mFilterProperties (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayControllerDeclarationEX * p = (const cPtr_arrayControllerDeclarationEX *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerDeclarationEX) ;
    result = p->mProperty_mFilterProperties ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cPtr_arrayControllerDeclarationEX::getter_mFilterProperties (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFilterProperties ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListAST GALGAS_arrayControllerDeclarationEX::getter_mArrayControllerBoundColumnListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_arrayControllerBoundColumnListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayControllerDeclarationEX * p = (const cPtr_arrayControllerDeclarationEX *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerDeclarationEX) ;
    result = p->mProperty_mArrayControllerBoundColumnListAST ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListAST cPtr_arrayControllerDeclarationEX::getter_mArrayControllerBoundColumnListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArrayControllerBoundColumnListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerAttributListAST GALGAS_arrayControllerDeclarationEX::getter_mArrayControllerAttributListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_arrayControllerAttributListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayControllerDeclarationEX * p = (const cPtr_arrayControllerDeclarationEX *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerDeclarationEX) ;
    result = p->mProperty_mArrayControllerAttributListAST ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerAttributListAST cPtr_arrayControllerDeclarationEX::getter_mArrayControllerAttributListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArrayControllerAttributListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                Pointer class for @arrayControllerDeclarationEX class                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_arrayControllerDeclarationEX::cPtr_arrayControllerDeclarationEX (const GALGAS_lstring & in_mControllerName,
                                                                      const GALGAS_bool & in_mIsRoot,
                                                                      const GALGAS_lstring & in_mToManyPropertyName,
                                                                      const GALGAS_lstringlist & in_mFilterProperties,
                                                                      const GALGAS_arrayControllerBoundColumnListAST & in_mArrayControllerBoundColumnListAST,
                                                                      const GALGAS_arrayControllerAttributListAST & in_mArrayControllerAttributListAST
                                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractSecondaryProperty (THERE),
mProperty_mControllerName (in_mControllerName),
mProperty_mIsRoot (in_mIsRoot),
mProperty_mToManyPropertyName (in_mToManyPropertyName),
mProperty_mFilterProperties (in_mFilterProperties),
mProperty_mArrayControllerBoundColumnListAST (in_mArrayControllerBoundColumnListAST),
mProperty_mArrayControllerAttributListAST (in_mArrayControllerAttributListAST) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_arrayControllerDeclarationEX::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerDeclarationEX ;
}

void cPtr_arrayControllerDeclarationEX::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@arrayControllerDeclarationEX:" ;
  mProperty_mControllerName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsRoot.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mToManyPropertyName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFilterProperties.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mArrayControllerBoundColumnListAST.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mArrayControllerAttributListAST.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_arrayControllerDeclarationEX::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_arrayControllerDeclarationEX (mProperty_mControllerName, mProperty_mIsRoot, mProperty_mToManyPropertyName, mProperty_mFilterProperties, mProperty_mArrayControllerBoundColumnListAST, mProperty_mArrayControllerAttributListAST COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @arrayControllerDeclarationEX type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerDeclarationEX ("arrayControllerDeclarationEX",
                                                     & kTypeDescriptor_GALGAS_abstractSecondaryProperty) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_arrayControllerDeclarationEX::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerDeclarationEX ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_arrayControllerDeclarationEX::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerDeclarationEX (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerDeclarationEX GALGAS_arrayControllerDeclarationEX::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerDeclarationEX result ;
  const GALGAS_arrayControllerDeclarationEX * p = (const GALGAS_arrayControllerDeclarationEX *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayControllerDeclarationEX *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerDeclarationEX", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
    result = mProperty_mIsRoot.objectCompare (p->mProperty_mIsRoot) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRootEntityName.objectCompare (p->mProperty_mRootEntityName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mToManyPropertyName.objectCompare (p->mProperty_mToManyPropertyName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFilterProperties.objectCompare (p->mProperty_mFilterProperties) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mArrayControllerBoundColumnListAST.objectCompare (p->mProperty_mArrayControllerBoundColumnListAST) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mArrayControllerAttributListAST.objectCompare (p->mProperty_mArrayControllerAttributListAST) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerDeclarationAST::GALGAS_arrayControllerDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerDeclarationAST GALGAS_arrayControllerDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_arrayControllerDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_bool::constructor_default (HERE),
                                                                GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_lstringlist::constructor_emptyList (HERE),
                                                                GALGAS_arrayControllerBoundColumnListAST::constructor_emptyList (HERE),
                                                                GALGAS_arrayControllerAttributListAST::constructor_emptyList (HERE)
                                                                COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerDeclarationAST::GALGAS_arrayControllerDeclarationAST (const cPtr_arrayControllerDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_arrayControllerDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerDeclarationAST GALGAS_arrayControllerDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                                            const GALGAS_lstring & inAttribute_mControllerName,
                                                                                            const GALGAS_bool & inAttribute_mIsRoot,
                                                                                            const GALGAS_lstring & inAttribute_mRootEntityName,
                                                                                            const GALGAS_lstring & inAttribute_mToManyPropertyName,
                                                                                            const GALGAS_lstringlist & inAttribute_mFilterProperties,
                                                                                            const GALGAS_arrayControllerBoundColumnListAST & inAttribute_mArrayControllerBoundColumnListAST,
                                                                                            const GALGAS_arrayControllerAttributListAST & inAttribute_mArrayControllerAttributListAST
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mControllerName.isValid () && inAttribute_mIsRoot.isValid () && inAttribute_mRootEntityName.isValid () && inAttribute_mToManyPropertyName.isValid () && inAttribute_mFilterProperties.isValid () && inAttribute_mArrayControllerBoundColumnListAST.isValid () && inAttribute_mArrayControllerAttributListAST.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_arrayControllerDeclarationAST (inAttribute_mClassName, inAttribute_mControllerName, inAttribute_mIsRoot, inAttribute_mRootEntityName, inAttribute_mToManyPropertyName, inAttribute_mFilterProperties, inAttribute_mArrayControllerBoundColumnListAST, inAttribute_mArrayControllerAttributListAST COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_arrayControllerDeclarationAST::getter_mControllerName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayControllerDeclarationAST * p = (const cPtr_arrayControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerDeclarationAST) ;
    result = p->mProperty_mControllerName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_arrayControllerDeclarationAST::getter_mControllerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mControllerName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_arrayControllerDeclarationAST::getter_mIsRoot (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayControllerDeclarationAST * p = (const cPtr_arrayControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerDeclarationAST) ;
    result = p->mProperty_mIsRoot ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_arrayControllerDeclarationAST::getter_mIsRoot (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsRoot ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_arrayControllerDeclarationAST::getter_mRootEntityName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayControllerDeclarationAST * p = (const cPtr_arrayControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerDeclarationAST) ;
    result = p->mProperty_mRootEntityName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_arrayControllerDeclarationAST::getter_mRootEntityName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRootEntityName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_arrayControllerDeclarationAST::getter_mToManyPropertyName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayControllerDeclarationAST * p = (const cPtr_arrayControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerDeclarationAST) ;
    result = p->mProperty_mToManyPropertyName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_arrayControllerDeclarationAST::getter_mToManyPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mToManyPropertyName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_arrayControllerDeclarationAST::getter_mFilterProperties (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayControllerDeclarationAST * p = (const cPtr_arrayControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerDeclarationAST) ;
    result = p->mProperty_mFilterProperties ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cPtr_arrayControllerDeclarationAST::getter_mFilterProperties (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFilterProperties ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListAST GALGAS_arrayControllerDeclarationAST::getter_mArrayControllerBoundColumnListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_arrayControllerBoundColumnListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayControllerDeclarationAST * p = (const cPtr_arrayControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerDeclarationAST) ;
    result = p->mProperty_mArrayControllerBoundColumnListAST ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListAST cPtr_arrayControllerDeclarationAST::getter_mArrayControllerBoundColumnListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArrayControllerBoundColumnListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerAttributListAST GALGAS_arrayControllerDeclarationAST::getter_mArrayControllerAttributListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_arrayControllerAttributListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayControllerDeclarationAST * p = (const cPtr_arrayControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerDeclarationAST) ;
    result = p->mProperty_mArrayControllerAttributListAST ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerAttributListAST cPtr_arrayControllerDeclarationAST::getter_mArrayControllerAttributListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArrayControllerAttributListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                               Pointer class for @arrayControllerDeclarationAST class                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_arrayControllerDeclarationAST::cPtr_arrayControllerDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                                        const GALGAS_lstring & in_mControllerName,
                                                                        const GALGAS_bool & in_mIsRoot,
                                                                        const GALGAS_lstring & in_mRootEntityName,
                                                                        const GALGAS_lstring & in_mToManyPropertyName,
                                                                        const GALGAS_lstringlist & in_mFilterProperties,
                                                                        const GALGAS_arrayControllerBoundColumnListAST & in_mArrayControllerBoundColumnListAST,
                                                                        const GALGAS_arrayControllerAttributListAST & in_mArrayControllerAttributListAST
                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mControllerName (in_mControllerName),
mProperty_mIsRoot (in_mIsRoot),
mProperty_mRootEntityName (in_mRootEntityName),
mProperty_mToManyPropertyName (in_mToManyPropertyName),
mProperty_mFilterProperties (in_mFilterProperties),
mProperty_mArrayControllerBoundColumnListAST (in_mArrayControllerBoundColumnListAST),
mProperty_mArrayControllerAttributListAST (in_mArrayControllerAttributListAST) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  mProperty_mIsRoot.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRootEntityName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mToManyPropertyName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFilterProperties.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mArrayControllerBoundColumnListAST.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mArrayControllerAttributListAST.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_arrayControllerDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_arrayControllerDeclarationAST (mProperty_mClassName, mProperty_mControllerName, mProperty_mIsRoot, mProperty_mRootEntityName, mProperty_mToManyPropertyName, mProperty_mFilterProperties, mProperty_mArrayControllerBoundColumnListAST, mProperty_mArrayControllerAttributListAST COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @arrayControllerDeclarationAST type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerDeclarationAST ("arrayControllerDeclarationAST",
                                                      & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_arrayControllerDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_arrayControllerDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
    result = mProperty_mArrayControllerFilterListForGeneration.objectCompare (p->mProperty_mArrayControllerFilterListForGeneration) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mModelString.objectCompare (p->mProperty_mModelString) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mArrayControllerBoundColumnListForGeneration.objectCompare (p->mProperty_mArrayControllerBoundColumnListForGeneration) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mArrayControllerSortedColumnListForGeneration.objectCompare (p->mProperty_mArrayControllerSortedColumnListForGeneration) ;
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
  if (kOperandEqual == result) {
    result = mProperty_mAttributeListForGeneration.objectCompare (p->mProperty_mAttributeListForGeneration) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerGeneration::GALGAS_arrayControllerGeneration (void) :
GALGAS_abstractFileGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerGeneration::GALGAS_arrayControllerGeneration (const cPtr_arrayControllerGeneration * inSourcePtr) :
GALGAS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_arrayControllerGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerGeneration GALGAS_arrayControllerGeneration::constructor_new (const GALGAS_string & inAttribute_mOwnerName,
                                                                                    const GALGAS_lstring & inAttribute_mControllerName,
                                                                                    const GALGAS_arrayControllerFilterListForGeneration & inAttribute_mArrayControllerFilterListForGeneration,
                                                                                    const GALGAS_string & inAttribute_mModelString,
                                                                                    const GALGAS_arrayControllerBoundColumnListForGeneration & inAttribute_mArrayControllerBoundColumnListForGeneration,
                                                                                    const GALGAS_arrayControllerSortedColumnListForGeneration & inAttribute_mArrayControllerSortedColumnListForGeneration,
                                                                                    const GALGAS_string & inAttribute_mModelTypeName,
                                                                                    const GALGAS_arrayControllerModelKind & inAttribute_mArrayControllerModelKind,
                                                                                    const GALGAS_string & inAttribute_mElementTypeName,
                                                                                    const GALGAS_bool & inAttribute_mElementTypeIsGraphic,
                                                                                    const GALGAS__32_stringlist & inAttribute_mAttributeListForGeneration
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerGeneration result ;
  if (inAttribute_mOwnerName.isValid () && inAttribute_mControllerName.isValid () && inAttribute_mArrayControllerFilterListForGeneration.isValid () && inAttribute_mModelString.isValid () && inAttribute_mArrayControllerBoundColumnListForGeneration.isValid () && inAttribute_mArrayControllerSortedColumnListForGeneration.isValid () && inAttribute_mModelTypeName.isValid () && inAttribute_mArrayControllerModelKind.isValid () && inAttribute_mElementTypeName.isValid () && inAttribute_mElementTypeIsGraphic.isValid () && inAttribute_mAttributeListForGeneration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_arrayControllerGeneration (inAttribute_mOwnerName, inAttribute_mControllerName, inAttribute_mArrayControllerFilterListForGeneration, inAttribute_mModelString, inAttribute_mArrayControllerBoundColumnListForGeneration, inAttribute_mArrayControllerSortedColumnListForGeneration, inAttribute_mModelTypeName, inAttribute_mArrayControllerModelKind, inAttribute_mElementTypeName, inAttribute_mElementTypeIsGraphic, inAttribute_mAttributeListForGeneration COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_arrayControllerGeneration::getter_mOwnerName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayControllerGeneration * p = (const cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    result = p->mProperty_mOwnerName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_arrayControllerGeneration::getter_mOwnerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOwnerName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_arrayControllerGeneration::getter_mControllerName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayControllerGeneration * p = (const cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    result = p->mProperty_mControllerName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_arrayControllerGeneration::getter_mControllerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mControllerName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerFilterListForGeneration GALGAS_arrayControllerGeneration::getter_mArrayControllerFilterListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_arrayControllerFilterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayControllerGeneration * p = (const cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    result = p->mProperty_mArrayControllerFilterListForGeneration ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerFilterListForGeneration cPtr_arrayControllerGeneration::getter_mArrayControllerFilterListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArrayControllerFilterListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_arrayControllerGeneration::getter_mModelString (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayControllerGeneration * p = (const cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    result = p->mProperty_mModelString ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_arrayControllerGeneration::getter_mModelString (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModelString ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListForGeneration GALGAS_arrayControllerGeneration::getter_mArrayControllerBoundColumnListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_arrayControllerBoundColumnListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayControllerGeneration * p = (const cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    result = p->mProperty_mArrayControllerBoundColumnListForGeneration ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListForGeneration cPtr_arrayControllerGeneration::getter_mArrayControllerBoundColumnListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArrayControllerBoundColumnListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerSortedColumnListForGeneration GALGAS_arrayControllerGeneration::getter_mArrayControllerSortedColumnListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_arrayControllerSortedColumnListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayControllerGeneration * p = (const cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    result = p->mProperty_mArrayControllerSortedColumnListForGeneration ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerSortedColumnListForGeneration cPtr_arrayControllerGeneration::getter_mArrayControllerSortedColumnListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArrayControllerSortedColumnListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_arrayControllerGeneration::getter_mModelTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayControllerGeneration * p = (const cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    result = p->mProperty_mModelTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_arrayControllerGeneration::getter_mModelTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModelTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerModelKind GALGAS_arrayControllerGeneration::getter_mArrayControllerModelKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_arrayControllerModelKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayControllerGeneration * p = (const cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    result = p->mProperty_mArrayControllerModelKind ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerModelKind cPtr_arrayControllerGeneration::getter_mArrayControllerModelKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArrayControllerModelKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_arrayControllerGeneration::getter_mElementTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayControllerGeneration * p = (const cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    result = p->mProperty_mElementTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_arrayControllerGeneration::getter_mElementTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElementTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_arrayControllerGeneration::getter_mElementTypeIsGraphic (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayControllerGeneration * p = (const cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    result = p->mProperty_mElementTypeIsGraphic ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_arrayControllerGeneration::getter_mElementTypeIsGraphic (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElementTypeIsGraphic ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS__32_stringlist GALGAS_arrayControllerGeneration::getter_mAttributeListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS__32_stringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayControllerGeneration * p = (const cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    result = p->mProperty_mAttributeListForGeneration ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS__32_stringlist cPtr_arrayControllerGeneration::getter_mAttributeListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAttributeListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                 Pointer class for @arrayControllerGeneration class                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_arrayControllerGeneration::cPtr_arrayControllerGeneration (const GALGAS_string & in_mOwnerName,
                                                                const GALGAS_lstring & in_mControllerName,
                                                                const GALGAS_arrayControllerFilterListForGeneration & in_mArrayControllerFilterListForGeneration,
                                                                const GALGAS_string & in_mModelString,
                                                                const GALGAS_arrayControllerBoundColumnListForGeneration & in_mArrayControllerBoundColumnListForGeneration,
                                                                const GALGAS_arrayControllerSortedColumnListForGeneration & in_mArrayControllerSortedColumnListForGeneration,
                                                                const GALGAS_string & in_mModelTypeName,
                                                                const GALGAS_arrayControllerModelKind & in_mArrayControllerModelKind,
                                                                const GALGAS_string & in_mElementTypeName,
                                                                const GALGAS_bool & in_mElementTypeIsGraphic,
                                                                const GALGAS__32_stringlist & in_mAttributeListForGeneration
                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (THERE),
mProperty_mOwnerName (in_mOwnerName),
mProperty_mControllerName (in_mControllerName),
mProperty_mArrayControllerFilterListForGeneration (in_mArrayControllerFilterListForGeneration),
mProperty_mModelString (in_mModelString),
mProperty_mArrayControllerBoundColumnListForGeneration (in_mArrayControllerBoundColumnListForGeneration),
mProperty_mArrayControllerSortedColumnListForGeneration (in_mArrayControllerSortedColumnListForGeneration),
mProperty_mModelTypeName (in_mModelTypeName),
mProperty_mArrayControllerModelKind (in_mArrayControllerModelKind),
mProperty_mElementTypeName (in_mElementTypeName),
mProperty_mElementTypeIsGraphic (in_mElementTypeIsGraphic),
mProperty_mAttributeListForGeneration (in_mAttributeListForGeneration) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  mProperty_mArrayControllerFilterListForGeneration.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mModelString.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mArrayControllerBoundColumnListForGeneration.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mArrayControllerSortedColumnListForGeneration.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mModelTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mArrayControllerModelKind.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElementTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElementTypeIsGraphic.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAttributeListForGeneration.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_arrayControllerGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_arrayControllerGeneration (mProperty_mOwnerName, mProperty_mControllerName, mProperty_mArrayControllerFilterListForGeneration, mProperty_mModelString, mProperty_mArrayControllerBoundColumnListForGeneration, mProperty_mArrayControllerSortedColumnListForGeneration, mProperty_mModelTypeName, mProperty_mArrayControllerModelKind, mProperty_mElementTypeName, mProperty_mElementTypeIsGraphic, mProperty_mAttributeListForGeneration COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @arrayControllerGeneration type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerGeneration ("arrayControllerGeneration",
                                                  & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_arrayControllerGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_arrayControllerGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_selectionControllerDeclarationEX::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_selectionControllerDeclarationEX * p = (const cPtr_selectionControllerDeclarationEX *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_selectionControllerDeclarationEX) ;
  if (kOperandEqual == result) {
    result = mProperty_mSelectionControllerName.objectCompare (p->mProperty_mSelectionControllerName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mModelControllerName.objectCompare (p->mProperty_mModelControllerName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mModelControllerPropertyName.objectCompare (p->mProperty_mModelControllerPropertyName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_selectionControllerDeclarationEX::objectCompare (const GALGAS_selectionControllerDeclarationEX & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerDeclarationEX::GALGAS_selectionControllerDeclarationEX (void) :
GALGAS_abstractSecondaryProperty () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerDeclarationEX GALGAS_selectionControllerDeclarationEX::constructor_default (LOCATION_ARGS) {
  return GALGAS_selectionControllerDeclarationEX::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                   GALGAS_lstring::constructor_default (HERE),
                                                                   GALGAS_lstring::constructor_default (HERE)
                                                                   COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerDeclarationEX::GALGAS_selectionControllerDeclarationEX (const cPtr_selectionControllerDeclarationEX * inSourcePtr) :
GALGAS_abstractSecondaryProperty (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selectionControllerDeclarationEX) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerDeclarationEX GALGAS_selectionControllerDeclarationEX::constructor_new (const GALGAS_lstring & inAttribute_mSelectionControllerName,
                                                                                                  const GALGAS_lstring & inAttribute_mModelControllerName,
                                                                                                  const GALGAS_lstring & inAttribute_mModelControllerPropertyName
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_selectionControllerDeclarationEX result ;
  if (inAttribute_mSelectionControllerName.isValid () && inAttribute_mModelControllerName.isValid () && inAttribute_mModelControllerPropertyName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_selectionControllerDeclarationEX (inAttribute_mSelectionControllerName, inAttribute_mModelControllerName, inAttribute_mModelControllerPropertyName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_selectionControllerDeclarationEX::getter_mSelectionControllerName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_selectionControllerDeclarationEX * p = (const cPtr_selectionControllerDeclarationEX *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerDeclarationEX) ;
    result = p->mProperty_mSelectionControllerName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_selectionControllerDeclarationEX::getter_mSelectionControllerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelectionControllerName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_selectionControllerDeclarationEX::getter_mModelControllerName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_selectionControllerDeclarationEX * p = (const cPtr_selectionControllerDeclarationEX *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerDeclarationEX) ;
    result = p->mProperty_mModelControllerName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_selectionControllerDeclarationEX::getter_mModelControllerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModelControllerName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_selectionControllerDeclarationEX::getter_mModelControllerPropertyName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_selectionControllerDeclarationEX * p = (const cPtr_selectionControllerDeclarationEX *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerDeclarationEX) ;
    result = p->mProperty_mModelControllerPropertyName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_selectionControllerDeclarationEX::getter_mModelControllerPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModelControllerPropertyName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                              Pointer class for @selectionControllerDeclarationEX class                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_selectionControllerDeclarationEX::cPtr_selectionControllerDeclarationEX (const GALGAS_lstring & in_mSelectionControllerName,
                                                                              const GALGAS_lstring & in_mModelControllerName,
                                                                              const GALGAS_lstring & in_mModelControllerPropertyName
                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractSecondaryProperty (THERE),
mProperty_mSelectionControllerName (in_mSelectionControllerName),
mProperty_mModelControllerName (in_mModelControllerName),
mProperty_mModelControllerPropertyName (in_mModelControllerPropertyName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_selectionControllerDeclarationEX::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectionControllerDeclarationEX ;
}

void cPtr_selectionControllerDeclarationEX::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@selectionControllerDeclarationEX:" ;
  mProperty_mSelectionControllerName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mModelControllerName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mModelControllerPropertyName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_selectionControllerDeclarationEX::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_selectionControllerDeclarationEX (mProperty_mSelectionControllerName, mProperty_mModelControllerName, mProperty_mModelControllerPropertyName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @selectionControllerDeclarationEX type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selectionControllerDeclarationEX ("selectionControllerDeclarationEX",
                                                         & kTypeDescriptor_GALGAS_abstractSecondaryProperty) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_selectionControllerDeclarationEX::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectionControllerDeclarationEX ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_selectionControllerDeclarationEX::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selectionControllerDeclarationEX (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerDeclarationEX GALGAS_selectionControllerDeclarationEX::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_selectionControllerDeclarationEX result ;
  const GALGAS_selectionControllerDeclarationEX * p = (const GALGAS_selectionControllerDeclarationEX *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_selectionControllerDeclarationEX *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectionControllerDeclarationEX", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerDeclarationAST::GALGAS_selectionControllerDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerDeclarationAST GALGAS_selectionControllerDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_selectionControllerDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                    GALGAS_lstring::constructor_default (HERE),
                                                                    GALGAS_lstring::constructor_default (HERE),
                                                                    GALGAS_lstring::constructor_default (HERE)
                                                                    COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerDeclarationAST::GALGAS_selectionControllerDeclarationAST (const cPtr_selectionControllerDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selectionControllerDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerDeclarationAST GALGAS_selectionControllerDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                                                    const GALGAS_lstring & inAttribute_mSelectionControllerName,
                                                                                                    const GALGAS_lstring & inAttribute_mModelControllerName,
                                                                                                    const GALGAS_lstring & inAttribute_mModelControllerPropertyName
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_selectionControllerDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mSelectionControllerName.isValid () && inAttribute_mModelControllerName.isValid () && inAttribute_mModelControllerPropertyName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_selectionControllerDeclarationAST (inAttribute_mClassName, inAttribute_mSelectionControllerName, inAttribute_mModelControllerName, inAttribute_mModelControllerPropertyName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_selectionControllerDeclarationAST::getter_mSelectionControllerName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_selectionControllerDeclarationAST * p = (const cPtr_selectionControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerDeclarationAST) ;
    result = p->mProperty_mSelectionControllerName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_selectionControllerDeclarationAST::getter_mSelectionControllerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelectionControllerName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_selectionControllerDeclarationAST::getter_mModelControllerName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_selectionControllerDeclarationAST * p = (const cPtr_selectionControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerDeclarationAST) ;
    result = p->mProperty_mModelControllerName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_selectionControllerDeclarationAST::getter_mModelControllerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModelControllerName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_selectionControllerDeclarationAST::getter_mModelControllerPropertyName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_selectionControllerDeclarationAST * p = (const cPtr_selectionControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerDeclarationAST) ;
    result = p->mProperty_mModelControllerPropertyName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_selectionControllerDeclarationAST::getter_mModelControllerPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModelControllerPropertyName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                             Pointer class for @selectionControllerDeclarationAST class                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_selectionControllerDeclarationAST::cPtr_selectionControllerDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                                                const GALGAS_lstring & in_mSelectionControllerName,
                                                                                const GALGAS_lstring & in_mModelControllerName,
                                                                                const GALGAS_lstring & in_mModelControllerPropertyName
                                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mSelectionControllerName (in_mSelectionControllerName),
mProperty_mModelControllerName (in_mModelControllerName),
mProperty_mModelControllerPropertyName (in_mModelControllerPropertyName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_selectionControllerDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_selectionControllerDeclarationAST (mProperty_mClassName, mProperty_mSelectionControllerName, mProperty_mModelControllerName, mProperty_mModelControllerPropertyName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @selectionControllerDeclarationAST type                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selectionControllerDeclarationAST ("selectionControllerDeclarationAST",
                                                          & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_selectionControllerDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectionControllerDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_selectionControllerDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selectionControllerDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_proxyDeclarationEX::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_proxyDeclarationEX * p = (const cPtr_proxyDeclarationEX *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_proxyDeclarationEX) ;
  if (kOperandEqual == result) {
    result = mProperty_mProxyName.objectCompare (p->mProperty_mProxyName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mControllerName.objectCompare (p->mProperty_mControllerName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPropertyName.objectCompare (p->mProperty_mPropertyName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_proxyDeclarationEX::objectCompare (const GALGAS_proxyDeclarationEX & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_proxyDeclarationEX::GALGAS_proxyDeclarationEX (void) :
GALGAS_abstractSecondaryProperty () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_proxyDeclarationEX GALGAS_proxyDeclarationEX::constructor_default (LOCATION_ARGS) {
  return GALGAS_proxyDeclarationEX::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_lstring::constructor_default (HERE)
                                                     COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_proxyDeclarationEX::GALGAS_proxyDeclarationEX (const cPtr_proxyDeclarationEX * inSourcePtr) :
GALGAS_abstractSecondaryProperty (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_proxyDeclarationEX) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_proxyDeclarationEX GALGAS_proxyDeclarationEX::constructor_new (const GALGAS_lstring & inAttribute_mProxyName,
                                                                      const GALGAS_lstring & inAttribute_mControllerName,
                                                                      const GALGAS_lstring & inAttribute_mPropertyName
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_proxyDeclarationEX result ;
  if (inAttribute_mProxyName.isValid () && inAttribute_mControllerName.isValid () && inAttribute_mPropertyName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_proxyDeclarationEX (inAttribute_mProxyName, inAttribute_mControllerName, inAttribute_mPropertyName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_proxyDeclarationEX::getter_mProxyName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_proxyDeclarationEX * p = (const cPtr_proxyDeclarationEX *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationEX) ;
    result = p->mProperty_mProxyName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_proxyDeclarationEX::getter_mProxyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProxyName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_proxyDeclarationEX::getter_mControllerName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_proxyDeclarationEX * p = (const cPtr_proxyDeclarationEX *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationEX) ;
    result = p->mProperty_mControllerName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_proxyDeclarationEX::getter_mControllerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mControllerName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_proxyDeclarationEX::getter_mPropertyName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_proxyDeclarationEX * p = (const cPtr_proxyDeclarationEX *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationEX) ;
    result = p->mProperty_mPropertyName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_proxyDeclarationEX::getter_mPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                     Pointer class for @proxyDeclarationEX class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_proxyDeclarationEX::cPtr_proxyDeclarationEX (const GALGAS_lstring & in_mProxyName,
                                                  const GALGAS_lstring & in_mControllerName,
                                                  const GALGAS_lstring & in_mPropertyName
                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractSecondaryProperty (THERE),
mProperty_mProxyName (in_mProxyName),
mProperty_mControllerName (in_mControllerName),
mProperty_mPropertyName (in_mPropertyName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_proxyDeclarationEX::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_proxyDeclarationEX ;
}

void cPtr_proxyDeclarationEX::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@proxyDeclarationEX:" ;
  mProperty_mProxyName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mControllerName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_proxyDeclarationEX::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_proxyDeclarationEX (mProperty_mProxyName, mProperty_mControllerName, mProperty_mPropertyName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @proxyDeclarationEX type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_proxyDeclarationEX ("proxyDeclarationEX",
                                           & kTypeDescriptor_GALGAS_abstractSecondaryProperty) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_proxyDeclarationEX::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_proxyDeclarationEX ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_proxyDeclarationEX::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_proxyDeclarationEX (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_proxyDeclarationEX GALGAS_proxyDeclarationEX::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_proxyDeclarationEX result ;
  const GALGAS_proxyDeclarationEX * p = (const GALGAS_proxyDeclarationEX *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_proxyDeclarationEX *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("proxyDeclarationEX", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_proxyDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_proxyDeclarationAST * p = (const cPtr_proxyDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mProxyName.objectCompare (p->mProperty_mProxyName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mControllerName.objectCompare (p->mProperty_mControllerName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPropertyName.objectCompare (p->mProperty_mPropertyName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_proxyDeclarationAST::GALGAS_proxyDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_proxyDeclarationAST GALGAS_proxyDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_proxyDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_lstring::constructor_default (HERE)
                                                      COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_proxyDeclarationAST::GALGAS_proxyDeclarationAST (const cPtr_proxyDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_proxyDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_proxyDeclarationAST GALGAS_proxyDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                        const GALGAS_lstring & inAttribute_mProxyName,
                                                                        const GALGAS_lstring & inAttribute_mControllerName,
                                                                        const GALGAS_lstring & inAttribute_mPropertyName
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_proxyDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mProxyName.isValid () && inAttribute_mControllerName.isValid () && inAttribute_mPropertyName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_proxyDeclarationAST (inAttribute_mClassName, inAttribute_mProxyName, inAttribute_mControllerName, inAttribute_mPropertyName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_proxyDeclarationAST::getter_mProxyName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_proxyDeclarationAST * p = (const cPtr_proxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
    result = p->mProperty_mProxyName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_proxyDeclarationAST::getter_mProxyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProxyName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_proxyDeclarationAST::getter_mControllerName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_proxyDeclarationAST * p = (const cPtr_proxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
    result = p->mProperty_mControllerName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_proxyDeclarationAST::getter_mControllerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mControllerName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_proxyDeclarationAST::getter_mPropertyName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_proxyDeclarationAST * p = (const cPtr_proxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
    result = p->mProperty_mPropertyName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_proxyDeclarationAST::getter_mPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @proxyDeclarationAST class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_proxyDeclarationAST::cPtr_proxyDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                    const GALGAS_lstring & in_mProxyName,
                                                    const GALGAS_lstring & in_mControllerName,
                                                    const GALGAS_lstring & in_mPropertyName
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mProxyName (in_mProxyName),
mProperty_mControllerName (in_mControllerName),
mProperty_mPropertyName (in_mPropertyName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_proxyDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_proxyDeclarationAST ;
}

void cPtr_proxyDeclarationAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@proxyDeclarationAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mProxyName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mControllerName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_proxyDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_proxyDeclarationAST (mProperty_mClassName, mProperty_mProxyName, mProperty_mControllerName, mProperty_mPropertyName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @proxyDeclarationAST type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_proxyDeclarationAST ("proxyDeclarationAST",
                                            & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_proxyDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_proxyDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_proxyDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_proxyDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_boolAsDefaultValue::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_boolAsDefaultValue * p = (const cPtr_boolAsDefaultValue *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_boolAsDefaultValue) ;
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_boolAsDefaultValue::GALGAS_boolAsDefaultValue (void) :
GALGAS_abstractDefaultValue () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_boolAsDefaultValue GALGAS_boolAsDefaultValue::constructor_default (LOCATION_ARGS) {
  return GALGAS_boolAsDefaultValue::constructor_new (GALGAS_lbool::constructor_default (HERE)
                                                     COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_boolAsDefaultValue::GALGAS_boolAsDefaultValue (const cPtr_boolAsDefaultValue * inSourcePtr) :
GALGAS_abstractDefaultValue (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_boolAsDefaultValue) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_boolAsDefaultValue GALGAS_boolAsDefaultValue::constructor_new (const GALGAS_lbool & inAttribute_mValue
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_boolAsDefaultValue result ;
  if (inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_boolAsDefaultValue (inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lbool GALGAS_boolAsDefaultValue::getter_mValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_lbool result ;
  if (NULL != mObjectPtr) {
    const cPtr_boolAsDefaultValue * p = (const cPtr_boolAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolAsDefaultValue) ;
    result = p->mProperty_mValue ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lbool cPtr_boolAsDefaultValue::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                     Pointer class for @boolAsDefaultValue class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_boolAsDefaultValue::cPtr_boolAsDefaultValue (const GALGAS_lbool & in_mValue
                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (THERE),
mProperty_mValue (in_mValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_boolAsDefaultValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolAsDefaultValue ;
}

void cPtr_boolAsDefaultValue::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@boolAsDefaultValue:" ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_boolAsDefaultValue::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_boolAsDefaultValue (mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @boolAsDefaultValue type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_boolAsDefaultValue ("boolAsDefaultValue",
                                           & kTypeDescriptor_GALGAS_abstractDefaultValue) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_boolAsDefaultValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolAsDefaultValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_boolAsDefaultValue::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolAsDefaultValue (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_integerAsDefaultValue::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_integerAsDefaultValue * p = (const cPtr_integerAsDefaultValue *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_integerAsDefaultValue) ;
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_integerAsDefaultValue::objectCompare (const GALGAS_integerAsDefaultValue & inOperand) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_integerAsDefaultValue::GALGAS_integerAsDefaultValue (void) :
GALGAS_abstractDefaultValue () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_integerAsDefaultValue GALGAS_integerAsDefaultValue::constructor_default (LOCATION_ARGS) {
  return GALGAS_integerAsDefaultValue::constructor_new (GALGAS_luint::constructor_default (HERE)
                                                        COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_integerAsDefaultValue::GALGAS_integerAsDefaultValue (const cPtr_integerAsDefaultValue * inSourcePtr) :
GALGAS_abstractDefaultValue (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_integerAsDefaultValue) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_integerAsDefaultValue GALGAS_integerAsDefaultValue::constructor_new (const GALGAS_luint & inAttribute_mValue
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_integerAsDefaultValue result ;
  if (inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_integerAsDefaultValue (inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_luint GALGAS_integerAsDefaultValue::getter_mValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_luint result ;
  if (NULL != mObjectPtr) {
    const cPtr_integerAsDefaultValue * p = (const cPtr_integerAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerAsDefaultValue) ;
    result = p->mProperty_mValue ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_luint cPtr_integerAsDefaultValue::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                   Pointer class for @integerAsDefaultValue class                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_integerAsDefaultValue::cPtr_integerAsDefaultValue (const GALGAS_luint & in_mValue
                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (THERE),
mProperty_mValue (in_mValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_integerAsDefaultValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerAsDefaultValue ;
}

void cPtr_integerAsDefaultValue::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@integerAsDefaultValue:" ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_integerAsDefaultValue::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_integerAsDefaultValue (mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @integerAsDefaultValue type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_integerAsDefaultValue ("integerAsDefaultValue",
                                              & kTypeDescriptor_GALGAS_abstractDefaultValue) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_integerAsDefaultValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerAsDefaultValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_integerAsDefaultValue::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_integerAsDefaultValue (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_integerAsDefaultValue GALGAS_integerAsDefaultValue::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_integerAsDefaultValue result ;
  const GALGAS_integerAsDefaultValue * p = (const GALGAS_integerAsDefaultValue *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_integerAsDefaultValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("integerAsDefaultValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_stringAsDefaultValue::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_stringAsDefaultValue * p = (const cPtr_stringAsDefaultValue *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_stringAsDefaultValue) ;
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringAsDefaultValue::GALGAS_stringAsDefaultValue (void) :
GALGAS_abstractDefaultValue () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringAsDefaultValue GALGAS_stringAsDefaultValue::constructor_default (LOCATION_ARGS) {
  return GALGAS_stringAsDefaultValue::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                       COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringAsDefaultValue::GALGAS_stringAsDefaultValue (const cPtr_stringAsDefaultValue * inSourcePtr) :
GALGAS_abstractDefaultValue (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_stringAsDefaultValue) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringAsDefaultValue GALGAS_stringAsDefaultValue::constructor_new (const GALGAS_lstring & inAttribute_mValue
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_stringAsDefaultValue result ;
  if (inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_stringAsDefaultValue (inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_stringAsDefaultValue::getter_mValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_stringAsDefaultValue * p = (const cPtr_stringAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_stringAsDefaultValue) ;
    result = p->mProperty_mValue ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_stringAsDefaultValue::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @stringAsDefaultValue class                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_stringAsDefaultValue::cPtr_stringAsDefaultValue (const GALGAS_lstring & in_mValue
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (THERE),
mProperty_mValue (in_mValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_stringAsDefaultValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringAsDefaultValue ;
}

void cPtr_stringAsDefaultValue::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@stringAsDefaultValue:" ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_stringAsDefaultValue::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_stringAsDefaultValue (mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @stringAsDefaultValue type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_stringAsDefaultValue ("stringAsDefaultValue",
                                             & kTypeDescriptor_GALGAS_abstractDefaultValue) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_stringAsDefaultValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringAsDefaultValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_stringAsDefaultValue::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_stringAsDefaultValue (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_identifierAsDefaultValue::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_identifierAsDefaultValue * p = (const cPtr_identifierAsDefaultValue *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_identifierAsDefaultValue) ;
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_identifierAsDefaultValue::GALGAS_identifierAsDefaultValue (void) :
GALGAS_abstractDefaultValue () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_identifierAsDefaultValue GALGAS_identifierAsDefaultValue::constructor_default (LOCATION_ARGS) {
  return GALGAS_identifierAsDefaultValue::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                           COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_identifierAsDefaultValue::GALGAS_identifierAsDefaultValue (const cPtr_identifierAsDefaultValue * inSourcePtr) :
GALGAS_abstractDefaultValue (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_identifierAsDefaultValue) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_identifierAsDefaultValue GALGAS_identifierAsDefaultValue::constructor_new (const GALGAS_lstring & inAttribute_mValue
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_identifierAsDefaultValue result ;
  if (inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_identifierAsDefaultValue (inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_identifierAsDefaultValue::getter_mValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_identifierAsDefaultValue * p = (const cPtr_identifierAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_identifierAsDefaultValue) ;
    result = p->mProperty_mValue ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_identifierAsDefaultValue::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                  Pointer class for @identifierAsDefaultValue class                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_identifierAsDefaultValue::cPtr_identifierAsDefaultValue (const GALGAS_lstring & in_mValue
                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (THERE),
mProperty_mValue (in_mValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_identifierAsDefaultValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_identifierAsDefaultValue ;
}

void cPtr_identifierAsDefaultValue::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@identifierAsDefaultValue:" ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_identifierAsDefaultValue::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_identifierAsDefaultValue (mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @identifierAsDefaultValue type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_identifierAsDefaultValue ("identifierAsDefaultValue",
                                                 & kTypeDescriptor_GALGAS_abstractDefaultValue) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_identifierAsDefaultValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_identifierAsDefaultValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_identifierAsDefaultValue::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_identifierAsDefaultValue (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Extension method '@astDeclaration typeInventory'                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_astDeclaration_typeInventory> gExtensionMethodTable_astDeclaration_typeInventory ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_typeInventory (const int32_t inClassIndex,
                                         extensionMethodSignature_astDeclaration_typeInventory inMethod) {
  gExtensionMethodTable_astDeclaration_typeInventory.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_typeInventory (const cPtr_astDeclaration * inObject,
                                        GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_astDeclaration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_astDeclaration_typeInventory f = NULL ;
    if (classIndex < gExtensionMethodTable_astDeclaration_typeInventory.count ()) {
      f = gExtensionMethodTable_astDeclaration_typeInventory (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_astDeclaration_typeInventory.count ()) {
           f = gExtensionMethodTable_astDeclaration_typeInventory (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_astDeclaration_typeInventory.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioUnifiedTypeMap, inCompiler COMMA_THERE) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_astDeclaration_typeInventory (const cPtr_astDeclaration * /* inObject */,
                                                          GALGAS_unifiedTypeMap & /* ioArgument_ioUnifiedTypeMap */,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
}
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_astDeclaration_typeInventory (void) {
  enterExtensionMethod_typeInventory (kTypeDescriptor_GALGAS_astDeclaration.mSlotID,
                                      extensionMethod_astDeclaration_typeInventory) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_astDeclaration_typeInventory (void) {
  gExtensionMethodTable_astDeclaration_typeInventory.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_astDeclaration_typeInventory (defineExtensionMethod_astDeclaration_typeInventory,
                                                         freeExtensionMethod_astDeclaration_typeInventory) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Extension method '@astDeclaration buildObservablePropertyMapsFromStoredProperties'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_astDeclaration_buildObservablePropertyMapsFromStoredProperties> gExtensionMethodTable_astDeclaration_buildObservablePropertyMapsFromStoredProperties ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_buildObservablePropertyMapsFromStoredProperties (const int32_t inClassIndex,
                                                                           extensionMethodSignature_astDeclaration_buildObservablePropertyMapsFromStoredProperties inMethod) {
  gExtensionMethodTable_astDeclaration_buildObservablePropertyMapsFromStoredProperties.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_buildObservablePropertyMapsFromStoredProperties (const cPtr_astDeclaration * inObject,
                                                                          const GALGAS_unifiedTypeMap constin_inUnifiedTypeMap,
                                                                          GALGAS_semanticContextEX & io_ioSemanticContext,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_astDeclaration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_astDeclaration_buildObservablePropertyMapsFromStoredProperties f = NULL ;
    if (classIndex < gExtensionMethodTable_astDeclaration_buildObservablePropertyMapsFromStoredProperties.count ()) {
      f = gExtensionMethodTable_astDeclaration_buildObservablePropertyMapsFromStoredProperties (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_astDeclaration_buildObservablePropertyMapsFromStoredProperties.count ()) {
           f = gExtensionMethodTable_astDeclaration_buildObservablePropertyMapsFromStoredProperties (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_astDeclaration_buildObservablePropertyMapsFromStoredProperties.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inUnifiedTypeMap, io_ioSemanticContext, inCompiler COMMA_THERE) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_astDeclaration_buildObservablePropertyMapsFromStoredProperties (const cPtr_astDeclaration * /* inObject */,
                                                                                            const GALGAS_unifiedTypeMap /* constinArgument_inUnifiedTypeMap */,
                                                                                            GALGAS_semanticContextEX & /* ioArgument_ioSemanticContext */,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_astDeclaration_buildObservablePropertyMapsFromStoredProperties (void) {
  enterExtensionMethod_buildObservablePropertyMapsFromStoredProperties (kTypeDescriptor_GALGAS_astDeclaration.mSlotID,
                                                                        extensionMethod_astDeclaration_buildObservablePropertyMapsFromStoredProperties) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_astDeclaration_buildObservablePropertyMapsFromStoredProperties (void) {
  gExtensionMethodTable_astDeclaration_buildObservablePropertyMapsFromStoredProperties.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_astDeclaration_buildObservablePropertyMapsFromStoredProperties (defineExtensionMethod_astDeclaration_buildObservablePropertyMapsFromStoredProperties,
                                                                                           freeExtensionMethod_astDeclaration_buildObservablePropertyMapsFromStoredProperties) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Extension method '@astDeclaration semanticAnalysisEX'                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_astDeclaration_semanticAnalysisEX> gExtensionMethodTable_astDeclaration_semanticAnalysisEX ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_semanticAnalysisEX (const int32_t inClassIndex,
                                              extensionMethodSignature_astDeclaration_semanticAnalysisEX inMethod) {
  gExtensionMethodTable_astDeclaration_semanticAnalysisEX.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_semanticAnalysisEX (const cPtr_astDeclaration * inObject,
                                             const GALGAS_semanticContextEX constin_inSemanticContext,
                                             GALGAS_generationStruct & io_ioGeneration,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_astDeclaration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_astDeclaration_semanticAnalysisEX f = NULL ;
    if (classIndex < gExtensionMethodTable_astDeclaration_semanticAnalysisEX.count ()) {
      f = gExtensionMethodTable_astDeclaration_semanticAnalysisEX (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_astDeclaration_semanticAnalysisEX.count ()) {
           f = gExtensionMethodTable_astDeclaration_semanticAnalysisEX (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_astDeclaration_semanticAnalysisEX.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inSemanticContext, io_ioGeneration, inCompiler COMMA_THERE) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_astDeclaration_semanticAnalysisEX (const cPtr_astDeclaration * /* inObject */,
                                                               const GALGAS_semanticContextEX /* constinArgument_inSemanticContext */,
                                                               GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_astDeclaration_semanticAnalysisEX (void) {
  enterExtensionMethod_semanticAnalysisEX (kTypeDescriptor_GALGAS_astDeclaration.mSlotID,
                                           extensionMethod_astDeclaration_semanticAnalysisEX) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_astDeclaration_semanticAnalysisEX (void) {
  gExtensionMethodTable_astDeclaration_semanticAnalysisEX.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_astDeclaration_semanticAnalysisEX (defineExtensionMethod_astDeclaration_semanticAnalysisEX,
                                                              freeExtensionMethod_astDeclaration_semanticAnalysisEX) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Extension method '@astDeclaration buildInitialSecondaryPropertyListMap'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_astDeclaration_buildInitialSecondaryPropertyListMap> gExtensionMethodTable_astDeclaration_buildInitialSecondaryPropertyListMap ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_buildInitialSecondaryPropertyListMap (const int32_t inClassIndex,
                                                                extensionMethodSignature_astDeclaration_buildInitialSecondaryPropertyListMap inMethod) {
  gExtensionMethodTable_astDeclaration_buildInitialSecondaryPropertyListMap.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_buildInitialSecondaryPropertyListMap (const cPtr_astDeclaration * inObject,
                                                               GALGAS_secondaryDeclarationListWorkingList & io_ioSecondaryDeclarationListWorkingList,
                                                               GALGAS_uint & io_ioSecondaryDeclarationCount,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_astDeclaration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_astDeclaration_buildInitialSecondaryPropertyListMap f = NULL ;
    if (classIndex < gExtensionMethodTable_astDeclaration_buildInitialSecondaryPropertyListMap.count ()) {
      f = gExtensionMethodTable_astDeclaration_buildInitialSecondaryPropertyListMap (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_astDeclaration_buildInitialSecondaryPropertyListMap.count ()) {
           f = gExtensionMethodTable_astDeclaration_buildInitialSecondaryPropertyListMap (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_astDeclaration_buildInitialSecondaryPropertyListMap.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioSecondaryDeclarationListWorkingList, io_ioSecondaryDeclarationCount, inCompiler COMMA_THERE) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_astDeclaration_buildInitialSecondaryPropertyListMap (const cPtr_astDeclaration * /* inObject */,
                                                                                 GALGAS_secondaryDeclarationListWorkingList & /* ioArgument_ioSecondaryDeclarationListWorkingList */,
                                                                                 GALGAS_uint & /* ioArgument_ioSecondaryDeclarationCount */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_astDeclaration_buildInitialSecondaryPropertyListMap (void) {
  enterExtensionMethod_buildInitialSecondaryPropertyListMap (kTypeDescriptor_GALGAS_astDeclaration.mSlotID,
                                                             extensionMethod_astDeclaration_buildInitialSecondaryPropertyListMap) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_astDeclaration_buildInitialSecondaryPropertyListMap (void) {
  gExtensionMethodTable_astDeclaration_buildInitialSecondaryPropertyListMap.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_astDeclaration_buildInitialSecondaryPropertyListMap (defineExtensionMethod_astDeclaration_buildInitialSecondaryPropertyListMap,
                                                                                freeExtensionMethod_astDeclaration_buildInitialSecondaryPropertyListMap) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Abstract extension method '@astDeclaration solveSecondaryProperty'                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_astDeclaration_solveSecondaryProperty> gExtensionMethodTable_astDeclaration_solveSecondaryProperty ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_solveSecondaryProperty (const int32_t inClassIndex,
                                                  extensionMethodSignature_astDeclaration_solveSecondaryProperty inMethod) {
  gExtensionMethodTable_astDeclaration_solveSecondaryProperty.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_astDeclaration_solveSecondaryProperty (void) {
  gExtensionMethodTable_astDeclaration_solveSecondaryProperty.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_astDeclaration_solveSecondaryProperty (NULL,
                                                                  freeExtensionMethod_astDeclaration_solveSecondaryProperty) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_solveSecondaryProperty (const cPtr_astDeclaration * inObject,
                                                 GALGAS_semanticContextEX & io_ioSemanticContext,
                                                 const GALGAS_unifiedTypeMap constin_inUnifiedTypeMap,
                                                 const GALGAS_secondaryPropertyList constin_inPropertiesToSolve,
                                                 GALGAS_secondaryPropertyList & out_outUnsolvedProperties,
                                                 GALGAS_simpleStoredPropertyListForGenerationEX & io_ioSimpleStoredPropertyListForGeneration,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outUnsolvedProperties.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_astDeclaration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_astDeclaration_solveSecondaryProperty f = NULL ;
    if (classIndex < gExtensionMethodTable_astDeclaration_solveSecondaryProperty.count ()) {
      f = gExtensionMethodTable_astDeclaration_solveSecondaryProperty (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_astDeclaration_solveSecondaryProperty.count ()) {
          f = gExtensionMethodTable_astDeclaration_solveSecondaryProperty (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_astDeclaration_solveSecondaryProperty.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioSemanticContext, constin_inUnifiedTypeMap, constin_inPropertiesToSolve, out_outUnsolvedProperties, io_ioSimpleStoredPropertyListForGeneration, inCompiler COMMA_THERE) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_generationStruct::GALGAS_generationStruct (void) :
mProperty_mValidationStubRoutineListForGeneration (),
mProperty_mFileGenerationList (),
mProperty_mNeededOutletClasses (),
mProperty_mTransientListForGeneration (),
mProperty_mEntityListForGeneration (),
mProperty_mGenerateEBManagedDocumentSwift (),
mProperty_mArrayControllerListForGeneration (),
mProperty_mSelectionControllerListForGeneration (),
mProperty_mPropertyClassList (),
mProperty_mTransientPropertyTypeList () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_generationStruct::~ GALGAS_generationStruct (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_generationStruct::GALGAS_generationStruct (const GALGAS_validationStubRoutineListForGeneration & inOperand0,
                                                  const GALGAS_fileGenerationList & inOperand1,
                                                  const GALGAS_stringset & inOperand2,
                                                  const GALGAS_transientDefinitionListForGenerationEX & inOperand3,
                                                  const GALGAS_entityListForGeneratingEBManagedObjectContext & inOperand4,
                                                  const GALGAS_bool & inOperand5,
                                                  const GALGAS_arrayControllerForGenerationEX & inOperand6,
                                                  const GALGAS_selectionControllerForGeneration & inOperand7,
                                                  const GALGAS_stringlist & inOperand8,
                                                  const GALGAS_transientExternTypeList & inOperand9) :
mProperty_mValidationStubRoutineListForGeneration (inOperand0),
mProperty_mFileGenerationList (inOperand1),
mProperty_mNeededOutletClasses (inOperand2),
mProperty_mTransientListForGeneration (inOperand3),
mProperty_mEntityListForGeneration (inOperand4),
mProperty_mGenerateEBManagedDocumentSwift (inOperand5),
mProperty_mArrayControllerListForGeneration (inOperand6),
mProperty_mSelectionControllerListForGeneration (inOperand7),
mProperty_mPropertyClassList (inOperand8),
mProperty_mTransientPropertyTypeList (inOperand9) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_generationStruct GALGAS_generationStruct::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_generationStruct (GALGAS_validationStubRoutineListForGeneration::constructor_emptyList (HERE),
                                  GALGAS_fileGenerationList::constructor_emptyList (HERE),
                                  GALGAS_stringset::constructor_emptySet (HERE),
                                  GALGAS_transientDefinitionListForGenerationEX::constructor_emptyList (HERE),
                                  GALGAS_entityListForGeneratingEBManagedObjectContext::constructor_emptyList (HERE),
                                  GALGAS_bool::constructor_default (HERE),
                                  GALGAS_arrayControllerForGenerationEX::constructor_emptyList (HERE),
                                  GALGAS_selectionControllerForGeneration::constructor_emptyList (HERE),
                                  GALGAS_stringlist::constructor_emptyList (HERE),
                                  GALGAS_transientExternTypeList::constructor_emptyList (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_generationStruct GALGAS_generationStruct::constructor_new (const GALGAS_validationStubRoutineListForGeneration & inOperand0,
                                                                  const GALGAS_fileGenerationList & inOperand1,
                                                                  const GALGAS_stringset & inOperand2,
                                                                  const GALGAS_transientDefinitionListForGenerationEX & inOperand3,
                                                                  const GALGAS_entityListForGeneratingEBManagedObjectContext & inOperand4,
                                                                  const GALGAS_bool & inOperand5,
                                                                  const GALGAS_arrayControllerForGenerationEX & inOperand6,
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_generationStruct::objectCompare (const GALGAS_generationStruct & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mValidationStubRoutineListForGeneration.objectCompare (inOperand.mProperty_mValidationStubRoutineListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFileGenerationList.objectCompare (inOperand.mProperty_mFileGenerationList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mNeededOutletClasses.objectCompare (inOperand.mProperty_mNeededOutletClasses) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTransientListForGeneration.objectCompare (inOperand.mProperty_mTransientListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEntityListForGeneration.objectCompare (inOperand.mProperty_mEntityListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGenerateEBManagedDocumentSwift.objectCompare (inOperand.mProperty_mGenerateEBManagedDocumentSwift) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mArrayControllerListForGeneration.objectCompare (inOperand.mProperty_mArrayControllerListForGeneration) ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_generationStruct::isValid (void) const {
  return mProperty_mValidationStubRoutineListForGeneration.isValid () && mProperty_mFileGenerationList.isValid () && mProperty_mNeededOutletClasses.isValid () && mProperty_mTransientListForGeneration.isValid () && mProperty_mEntityListForGeneration.isValid () && mProperty_mGenerateEBManagedDocumentSwift.isValid () && mProperty_mArrayControllerListForGeneration.isValid () && mProperty_mSelectionControllerListForGeneration.isValid () && mProperty_mPropertyClassList.isValid () && mProperty_mTransientPropertyTypeList.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_generationStruct::drop (void) {
  mProperty_mValidationStubRoutineListForGeneration.drop () ;
  mProperty_mFileGenerationList.drop () ;
  mProperty_mNeededOutletClasses.drop () ;
  mProperty_mTransientListForGeneration.drop () ;
  mProperty_mEntityListForGeneration.drop () ;
  mProperty_mGenerateEBManagedDocumentSwift.drop () ;
  mProperty_mArrayControllerListForGeneration.drop () ;
  mProperty_mSelectionControllerListForGeneration.drop () ;
  mProperty_mPropertyClassList.drop () ;
  mProperty_mTransientPropertyTypeList.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
    mProperty_mNeededOutletClasses.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTransientListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEntityListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGenerateEBManagedDocumentSwift.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mArrayControllerListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSelectionControllerListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPropertyClassList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTransientPropertyTypeList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_validationStubRoutineListForGeneration GALGAS_generationStruct::getter_mValidationStubRoutineListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mValidationStubRoutineListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_fileGenerationList GALGAS_generationStruct::getter_mFileGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFileGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringset GALGAS_generationStruct::getter_mNeededOutletClasses (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNeededOutletClasses ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDefinitionListForGenerationEX GALGAS_generationStruct::getter_mTransientListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTransientListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityListForGeneratingEBManagedObjectContext GALGAS_generationStruct::getter_mEntityListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEntityListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_generationStruct::getter_mGenerateEBManagedDocumentSwift (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGenerateEBManagedDocumentSwift ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerForGenerationEX GALGAS_generationStruct::getter_mArrayControllerListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArrayControllerListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerForGeneration GALGAS_generationStruct::getter_mSelectionControllerListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelectionControllerListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringlist GALGAS_generationStruct::getter_mPropertyClassList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyClassList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientExternTypeList GALGAS_generationStruct::getter_mTransientPropertyTypeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTransientPropertyTypeList ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @generationStruct type                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_generationStruct ("generationStruct",
                                         NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_generationStruct::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_generationStruct ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_generationStruct::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_generationStruct (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclarationListEX_2D_element::GALGAS_astDeclarationListEX_2D_element (void) :
mProperty_mDeclaration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclarationListEX_2D_element::~ GALGAS_astDeclarationListEX_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclarationListEX_2D_element::GALGAS_astDeclarationListEX_2D_element (const GALGAS_astDeclaration & inOperand0) :
mProperty_mDeclaration (inOperand0) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclarationListEX_2D_element GALGAS_astDeclarationListEX_2D_element::constructor_new (const GALGAS_astDeclaration & inOperand0 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_astDeclarationListEX_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_astDeclarationListEX_2D_element (inOperand0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_astDeclarationListEX_2D_element::objectCompare (const GALGAS_astDeclarationListEX_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mDeclaration.objectCompare (inOperand.mProperty_mDeclaration) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_astDeclarationListEX_2D_element::isValid (void) const {
  return mProperty_mDeclaration.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_astDeclarationListEX_2D_element::drop (void) {
  mProperty_mDeclaration.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_astDeclarationListEX_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @astDeclarationListEX-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclaration GALGAS_astDeclarationListEX_2D_element::getter_mDeclaration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDeclaration ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @astDeclarationListEX-element type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_astDeclarationListEX_2D_element ("astDeclarationListEX-element",
                                                        NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_astDeclarationListEX_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astDeclarationListEX_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_astDeclarationListEX_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astDeclarationListEX_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclarationListEX_2D_element GALGAS_astDeclarationListEX_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_astDeclarationListEX_2D_element result ;
  const GALGAS_astDeclarationListEX_2D_element * p = (const GALGAS_astDeclarationListEX_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_astDeclarationListEX_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astDeclarationListEX-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationListAST_2D_element::GALGAS_declarationListAST_2D_element (void) :
mProperty_mPropertyDeclaration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationListAST_2D_element::~ GALGAS_declarationListAST_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationListAST_2D_element::GALGAS_declarationListAST_2D_element (const GALGAS_abstractDeclarationAST & inOperand0) :
mProperty_mPropertyDeclaration (inOperand0) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationListAST_2D_element GALGAS_declarationListAST_2D_element::constructor_new (const GALGAS_abstractDeclarationAST & inOperand0 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_declarationListAST_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_declarationListAST_2D_element (inOperand0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_declarationListAST_2D_element::objectCompare (const GALGAS_declarationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mPropertyDeclaration.objectCompare (inOperand.mProperty_mPropertyDeclaration) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_declarationListAST_2D_element::isValid (void) const {
  return mProperty_mPropertyDeclaration.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_declarationListAST_2D_element::drop (void) {
  mProperty_mPropertyDeclaration.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_declarationListAST_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @declarationListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mPropertyDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractDeclarationAST GALGAS_declarationListAST_2D_element::getter_mPropertyDeclaration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyDeclaration ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @declarationListAST-element type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_declarationListAST_2D_element ("declarationListAST-element",
                                                      NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_declarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declarationListAST_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_declarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_declarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_declarationListAST_2D_element GALGAS_declarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_declarationListAST_2D_element result ;
  const GALGAS_declarationListAST_2D_element * p = (const GALGAS_declarationListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_declarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftDelegateList_2D_element::GALGAS_externSwiftDelegateList_2D_element (void) :
mProperty_mExternSwiftDelegateName () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftDelegateList_2D_element::~ GALGAS_externSwiftDelegateList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftDelegateList_2D_element::GALGAS_externSwiftDelegateList_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_mExternSwiftDelegateName (inOperand0) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftDelegateList_2D_element GALGAS_externSwiftDelegateList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_externSwiftDelegateList_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftDelegateList_2D_element GALGAS_externSwiftDelegateList_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_externSwiftDelegateList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_externSwiftDelegateList_2D_element (inOperand0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_externSwiftDelegateList_2D_element::objectCompare (const GALGAS_externSwiftDelegateList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mExternSwiftDelegateName.objectCompare (inOperand.mProperty_mExternSwiftDelegateName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_externSwiftDelegateList_2D_element::isValid (void) const {
  return mProperty_mExternSwiftDelegateName.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externSwiftDelegateList_2D_element::drop (void) {
  mProperty_mExternSwiftDelegateName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externSwiftDelegateList_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @externSwiftDelegateList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mExternSwiftDelegateName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_externSwiftDelegateList_2D_element::getter_mExternSwiftDelegateName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternSwiftDelegateName ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @externSwiftDelegateList-element type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externSwiftDelegateList_2D_element ("externSwiftDelegateList-element",
                                                           NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_externSwiftDelegateList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externSwiftDelegateList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_externSwiftDelegateList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externSwiftDelegateList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftDelegateList_2D_element GALGAS_externSwiftDelegateList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_externSwiftDelegateList_2D_element result ;
  const GALGAS_externSwiftDelegateList_2D_element * p = (const GALGAS_externSwiftDelegateList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externSwiftDelegateList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externSwiftDelegateList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftFunctionList_2D_element::GALGAS_externSwiftFunctionList_2D_element (void) :
mProperty_mExternSwiftFunctionName (),
mProperty_mCallerName () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftFunctionList_2D_element::~ GALGAS_externSwiftFunctionList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftFunctionList_2D_element::GALGAS_externSwiftFunctionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_lstring & inOperand1) :
mProperty_mExternSwiftFunctionName (inOperand0),
mProperty_mCallerName (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftFunctionList_2D_element GALGAS_externSwiftFunctionList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_externSwiftFunctionList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_lstring::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftFunctionList_2D_element GALGAS_externSwiftFunctionList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_lstring & inOperand1 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_externSwiftFunctionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_externSwiftFunctionList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_externSwiftFunctionList_2D_element::objectCompare (const GALGAS_externSwiftFunctionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mExternSwiftFunctionName.objectCompare (inOperand.mProperty_mExternSwiftFunctionName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mCallerName.objectCompare (inOperand.mProperty_mCallerName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_externSwiftFunctionList_2D_element::isValid (void) const {
  return mProperty_mExternSwiftFunctionName.isValid () && mProperty_mCallerName.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externSwiftFunctionList_2D_element::drop (void) {
  mProperty_mExternSwiftFunctionName.drop () ;
  mProperty_mCallerName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externSwiftFunctionList_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @externSwiftFunctionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mExternSwiftFunctionName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mCallerName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_externSwiftFunctionList_2D_element::getter_mExternSwiftFunctionName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternSwiftFunctionName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_externSwiftFunctionList_2D_element::getter_mCallerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCallerName ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @externSwiftFunctionList-element type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externSwiftFunctionList_2D_element ("externSwiftFunctionList-element",
                                                           NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_externSwiftFunctionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externSwiftFunctionList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_externSwiftFunctionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externSwiftFunctionList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftFunctionList_2D_element GALGAS_externSwiftFunctionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_externSwiftFunctionList_2D_element result ;
  const GALGAS_externSwiftFunctionList_2D_element * p = (const GALGAS_externSwiftFunctionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externSwiftFunctionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externSwiftFunctionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externFunctionMap_2D_element::GALGAS_externFunctionMap_2D_element (void) :
mProperty_lkey () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externFunctionMap_2D_element::~ GALGAS_externFunctionMap_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externFunctionMap_2D_element::GALGAS_externFunctionMap_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externFunctionMap_2D_element GALGAS_externFunctionMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_externFunctionMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externFunctionMap_2D_element GALGAS_externFunctionMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_externFunctionMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_externFunctionMap_2D_element (inOperand0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_externFunctionMap_2D_element::objectCompare (const GALGAS_externFunctionMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_externFunctionMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externFunctionMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_externFunctionMap_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @externFunctionMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_externFunctionMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @externFunctionMap-element type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externFunctionMap_2D_element ("externFunctionMap-element",
                                                     NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_externFunctionMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externFunctionMap_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_externFunctionMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externFunctionMap_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externFunctionMap_2D_element GALGAS_externFunctionMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_externFunctionMap_2D_element result ;
  const GALGAS_externFunctionMap_2D_element * p = (const GALGAS_externFunctionMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externFunctionMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externFunctionMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumConstantMap_2D_element::GALGAS_enumConstantMap_2D_element (void) :
mProperty_lkey () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumConstantMap_2D_element::~ GALGAS_enumConstantMap_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumConstantMap_2D_element::GALGAS_enumConstantMap_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumConstantMap_2D_element GALGAS_enumConstantMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_enumConstantMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumConstantMap_2D_element GALGAS_enumConstantMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_enumConstantMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_enumConstantMap_2D_element (inOperand0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_enumConstantMap_2D_element::objectCompare (const GALGAS_enumConstantMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_enumConstantMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumConstantMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumConstantMap_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @enumConstantMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_enumConstantMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @enumConstantMap-element type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumConstantMap_2D_element ("enumConstantMap-element",
                                                   NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_enumConstantMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumConstantMap_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_enumConstantMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumConstantMap_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumConstantMap_2D_element GALGAS_enumConstantMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_enumConstantMap_2D_element result ;
  const GALGAS_enumConstantMap_2D_element * p = (const GALGAS_enumConstantMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumConstantMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumConstantMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityObservablePropertyMap_2D_element::GALGAS_entityObservablePropertyMap_2D_element (void) :
mProperty_lkey (),
mProperty_mObservablePropertyMap (),
mProperty_mObjectKind () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityObservablePropertyMap_2D_element::~ GALGAS_entityObservablePropertyMap_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityObservablePropertyMap_2D_element::GALGAS_entityObservablePropertyMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_observablePropertyMap & inOperand1,
                                                                                              const GALGAS_objectKind & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mObservablePropertyMap (inOperand1),
mProperty_mObjectKind (inOperand2) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityObservablePropertyMap_2D_element GALGAS_entityObservablePropertyMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_observablePropertyMap & inOperand1,
                                                                                                              const GALGAS_objectKind & inOperand2 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_entityObservablePropertyMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_entityObservablePropertyMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_entityObservablePropertyMap_2D_element::objectCompare (const GALGAS_entityObservablePropertyMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mObservablePropertyMap.objectCompare (inOperand.mProperty_mObservablePropertyMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mObjectKind.objectCompare (inOperand.mProperty_mObjectKind) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_entityObservablePropertyMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mObservablePropertyMap.isValid () && mProperty_mObjectKind.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_entityObservablePropertyMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mObservablePropertyMap.drop () ;
  mProperty_mObjectKind.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_entityObservablePropertyMap_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @entityObservablePropertyMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mObservablePropertyMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mObjectKind.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_entityObservablePropertyMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap GALGAS_entityObservablePropertyMap_2D_element::getter_mObservablePropertyMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mObservablePropertyMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectKind GALGAS_entityObservablePropertyMap_2D_element::getter_mObjectKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mObjectKind ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @entityObservablePropertyMap-element type                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_entityObservablePropertyMap_2D_element ("entityObservablePropertyMap-element",
                                                               NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_entityObservablePropertyMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityObservablePropertyMap_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_entityObservablePropertyMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_entityObservablePropertyMap_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityObservablePropertyMap_2D_element GALGAS_entityObservablePropertyMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_entityObservablePropertyMap_2D_element result ;
  const GALGAS_entityObservablePropertyMap_2D_element * p = (const GALGAS_entityObservablePropertyMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_entityObservablePropertyMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("entityObservablePropertyMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentObservablePropertyMap_2D_element::GALGAS_documentObservablePropertyMap_2D_element (void) :
mProperty_lkey (),
mProperty_mObservablePropertyMap () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentObservablePropertyMap_2D_element::~ GALGAS_documentObservablePropertyMap_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentObservablePropertyMap_2D_element::GALGAS_documentObservablePropertyMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_observablePropertyMap & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mObservablePropertyMap (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentObservablePropertyMap_2D_element GALGAS_documentObservablePropertyMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_documentObservablePropertyMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_observablePropertyMap::constructor_emptyMap (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentObservablePropertyMap_2D_element GALGAS_documentObservablePropertyMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                  const GALGAS_observablePropertyMap & inOperand1 
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_documentObservablePropertyMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_documentObservablePropertyMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_documentObservablePropertyMap_2D_element::objectCompare (const GALGAS_documentObservablePropertyMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mObservablePropertyMap.objectCompare (inOperand.mProperty_mObservablePropertyMap) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_documentObservablePropertyMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mObservablePropertyMap.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_documentObservablePropertyMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mObservablePropertyMap.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_documentObservablePropertyMap_2D_element::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "<struct @documentObservablePropertyMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mObservablePropertyMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_documentObservablePropertyMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap GALGAS_documentObservablePropertyMap_2D_element::getter_mObservablePropertyMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mObservablePropertyMap ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @documentObservablePropertyMap-element type                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_documentObservablePropertyMap_2D_element ("documentObservablePropertyMap-element",
                                                                 NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_documentObservablePropertyMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_documentObservablePropertyMap_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_documentObservablePropertyMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_documentObservablePropertyMap_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentObservablePropertyMap_2D_element GALGAS_documentObservablePropertyMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_documentObservablePropertyMap_2D_element result ;
  const GALGAS_documentObservablePropertyMap_2D_element * p = (const GALGAS_documentObservablePropertyMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_documentObservablePropertyMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("documentObservablePropertyMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassDeclarationListEX_2D_element::GALGAS_outletClassDeclarationListEX_2D_element (void) :
mProperty_mUserDefined (),
mProperty_mOutletClassName (),
mProperty_mSuperClassName (),
mProperty_mHasRunAction (),
mProperty_mHasEnabled (),
mProperty_mHandlesTableValueBinding (),
mProperty_mHandlesGraphicControllerBinding (),
mProperty_mHasHidden () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassDeclarationListEX_2D_element::~ GALGAS_outletClassDeclarationListEX_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassDeclarationListEX_2D_element::GALGAS_outletClassDeclarationListEX_2D_element (const GALGAS_bool & inOperand0,
                                                                                                const GALGAS_lstring & inOperand1,
                                                                                                const GALGAS_lstring & inOperand2,
                                                                                                const GALGAS_bool & inOperand3,
                                                                                                const GALGAS_bool & inOperand4,
                                                                                                const GALGAS_bool & inOperand5,
                                                                                                const GALGAS_bool & inOperand6,
                                                                                                const GALGAS_bool & inOperand7) :
mProperty_mUserDefined (inOperand0),
mProperty_mOutletClassName (inOperand1),
mProperty_mSuperClassName (inOperand2),
mProperty_mHasRunAction (inOperand3),
mProperty_mHasEnabled (inOperand4),
mProperty_mHandlesTableValueBinding (inOperand5),
mProperty_mHandlesGraphicControllerBinding (inOperand6),
mProperty_mHasHidden (inOperand7) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassDeclarationListEX_2D_element GALGAS_outletClassDeclarationListEX_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_outletClassDeclarationListEX_2D_element (GALGAS_bool::constructor_default (HERE),
                                                         GALGAS_lstring::constructor_default (HERE),
                                                         GALGAS_lstring::constructor_default (HERE),
                                                         GALGAS_bool::constructor_default (HERE),
                                                         GALGAS_bool::constructor_default (HERE),
                                                         GALGAS_bool::constructor_default (HERE),
                                                         GALGAS_bool::constructor_default (HERE),
                                                         GALGAS_bool::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassDeclarationListEX_2D_element GALGAS_outletClassDeclarationListEX_2D_element::constructor_new (const GALGAS_bool & inOperand0,
                                                                                                                const GALGAS_lstring & inOperand1,
                                                                                                                const GALGAS_lstring & inOperand2,
                                                                                                                const GALGAS_bool & inOperand3,
                                                                                                                const GALGAS_bool & inOperand4,
                                                                                                                const GALGAS_bool & inOperand5,
                                                                                                                const GALGAS_bool & inOperand6,
                                                                                                                const GALGAS_bool & inOperand7 
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletClassDeclarationListEX_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    result = GALGAS_outletClassDeclarationListEX_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_outletClassDeclarationListEX_2D_element::objectCompare (const GALGAS_outletClassDeclarationListEX_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mUserDefined.objectCompare (inOperand.mProperty_mUserDefined) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOutletClassName.objectCompare (inOperand.mProperty_mOutletClassName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSuperClassName.objectCompare (inOperand.mProperty_mSuperClassName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mHasRunAction.objectCompare (inOperand.mProperty_mHasRunAction) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mHasEnabled.objectCompare (inOperand.mProperty_mHasEnabled) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mHandlesTableValueBinding.objectCompare (inOperand.mProperty_mHandlesTableValueBinding) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mHandlesGraphicControllerBinding.objectCompare (inOperand.mProperty_mHandlesGraphicControllerBinding) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mHasHidden.objectCompare (inOperand.mProperty_mHasHidden) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_outletClassDeclarationListEX_2D_element::isValid (void) const {
  return mProperty_mUserDefined.isValid () && mProperty_mOutletClassName.isValid () && mProperty_mSuperClassName.isValid () && mProperty_mHasRunAction.isValid () && mProperty_mHasEnabled.isValid () && mProperty_mHandlesTableValueBinding.isValid () && mProperty_mHandlesGraphicControllerBinding.isValid () && mProperty_mHasHidden.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassDeclarationListEX_2D_element::drop (void) {
  mProperty_mUserDefined.drop () ;
  mProperty_mOutletClassName.drop () ;
  mProperty_mSuperClassName.drop () ;
  mProperty_mHasRunAction.drop () ;
  mProperty_mHasEnabled.drop () ;
  mProperty_mHandlesTableValueBinding.drop () ;
  mProperty_mHandlesGraphicControllerBinding.drop () ;
  mProperty_mHasHidden.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassDeclarationListEX_2D_element::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "<struct @outletClassDeclarationListEX-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mUserDefined.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOutletClassName.description (ioString, inIndentation+1) ;
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
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_outletClassDeclarationListEX_2D_element::getter_mUserDefined (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUserDefined ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_outletClassDeclarationListEX_2D_element::getter_mOutletClassName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOutletClassName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_outletClassDeclarationListEX_2D_element::getter_mSuperClassName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSuperClassName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_outletClassDeclarationListEX_2D_element::getter_mHasRunAction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHasRunAction ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_outletClassDeclarationListEX_2D_element::getter_mHasEnabled (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHasEnabled ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_outletClassDeclarationListEX_2D_element::getter_mHandlesTableValueBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHandlesTableValueBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_outletClassDeclarationListEX_2D_element::getter_mHandlesGraphicControllerBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHandlesGraphicControllerBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_outletClassDeclarationListEX_2D_element::getter_mHasHidden (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHasHidden ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @outletClassDeclarationListEX-element type                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletClassDeclarationListEX_2D_element ("outletClassDeclarationListEX-element",
                                                                NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_outletClassDeclarationListEX_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassDeclarationListEX_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_outletClassDeclarationListEX_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletClassDeclarationListEX_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassDeclarationListEX_2D_element GALGAS_outletClassDeclarationListEX_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_outletClassDeclarationListEX_2D_element result ;
  const GALGAS_outletClassDeclarationListEX_2D_element * p = (const GALGAS_outletClassDeclarationListEX_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outletClassDeclarationListEX_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletClassDeclarationListEX-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassMap_2D_element::GALGAS_outletClassMap_2D_element (void) :
mProperty_lkey (),
mProperty_mSuperClassName (),
mProperty_mHandlesRunAction (),
mProperty_mHandlesTableValueBinding (),
mProperty_mHandleEnabledBinding (),
mProperty_mHandleHiddenBinding (),
mProperty_mHandleGraphicControllerBinding (),
mProperty_mUserDefined () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassMap_2D_element::~ GALGAS_outletClassMap_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassMap_2D_element::GALGAS_outletClassMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_lstring & inOperand1,
                                                                    const GALGAS_bool & inOperand2,
                                                                    const GALGAS_bool & inOperand3,
                                                                    const GALGAS_bool & inOperand4,
                                                                    const GALGAS_bool & inOperand5,
                                                                    const GALGAS_bool & inOperand6,
                                                                    const GALGAS_bool & inOperand7) :
mProperty_lkey (inOperand0),
mProperty_mSuperClassName (inOperand1),
mProperty_mHandlesRunAction (inOperand2),
mProperty_mHandlesTableValueBinding (inOperand3),
mProperty_mHandleEnabledBinding (inOperand4),
mProperty_mHandleHiddenBinding (inOperand5),
mProperty_mHandleGraphicControllerBinding (inOperand6),
mProperty_mUserDefined (inOperand7) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassMap_2D_element GALGAS_outletClassMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_outletClassMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_bool::constructor_default (HERE),
                                           GALGAS_bool::constructor_default (HERE),
                                           GALGAS_bool::constructor_default (HERE),
                                           GALGAS_bool::constructor_default (HERE),
                                           GALGAS_bool::constructor_default (HERE),
                                           GALGAS_bool::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassMap_2D_element GALGAS_outletClassMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_lstring & inOperand1,
                                                                                    const GALGAS_bool & inOperand2,
                                                                                    const GALGAS_bool & inOperand3,
                                                                                    const GALGAS_bool & inOperand4,
                                                                                    const GALGAS_bool & inOperand5,
                                                                                    const GALGAS_bool & inOperand6,
                                                                                    const GALGAS_bool & inOperand7 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletClassMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    result = GALGAS_outletClassMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_outletClassMap_2D_element::objectCompare (const GALGAS_outletClassMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSuperClassName.objectCompare (inOperand.mProperty_mSuperClassName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mHandlesRunAction.objectCompare (inOperand.mProperty_mHandlesRunAction) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mHandlesTableValueBinding.objectCompare (inOperand.mProperty_mHandlesTableValueBinding) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mHandleEnabledBinding.objectCompare (inOperand.mProperty_mHandleEnabledBinding) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mHandleHiddenBinding.objectCompare (inOperand.mProperty_mHandleHiddenBinding) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mHandleGraphicControllerBinding.objectCompare (inOperand.mProperty_mHandleGraphicControllerBinding) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mUserDefined.objectCompare (inOperand.mProperty_mUserDefined) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_outletClassMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mSuperClassName.isValid () && mProperty_mHandlesRunAction.isValid () && mProperty_mHandlesTableValueBinding.isValid () && mProperty_mHandleEnabledBinding.isValid () && mProperty_mHandleHiddenBinding.isValid () && mProperty_mHandleGraphicControllerBinding.isValid () && mProperty_mUserDefined.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mSuperClassName.drop () ;
  mProperty_mHandlesRunAction.drop () ;
  mProperty_mHandlesTableValueBinding.drop () ;
  mProperty_mHandleEnabledBinding.drop () ;
  mProperty_mHandleHiddenBinding.drop () ;
  mProperty_mHandleGraphicControllerBinding.drop () ;
  mProperty_mUserDefined.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassMap_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @outletClassMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSuperClassName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mHandlesRunAction.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mHandlesTableValueBinding.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mHandleEnabledBinding.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mHandleHiddenBinding.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mHandleGraphicControllerBinding.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mUserDefined.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_outletClassMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_outletClassMap_2D_element::getter_mSuperClassName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSuperClassName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_outletClassMap_2D_element::getter_mHandlesRunAction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHandlesRunAction ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_outletClassMap_2D_element::getter_mHandlesTableValueBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHandlesTableValueBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_outletClassMap_2D_element::getter_mHandleEnabledBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHandleEnabledBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_outletClassMap_2D_element::getter_mHandleHiddenBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHandleHiddenBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_outletClassMap_2D_element::getter_mHandleGraphicControllerBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHandleGraphicControllerBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_outletClassMap_2D_element::getter_mUserDefined (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUserDefined ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @outletClassMap-element type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletClassMap_2D_element ("outletClassMap-element",
                                                  NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_outletClassMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassMap_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_outletClassMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletClassMap_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassMap_2D_element GALGAS_outletClassMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_outletClassMap_2D_element result ;
  const GALGAS_outletClassMap_2D_element * p = (const GALGAS_outletClassMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outletClassMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletClassMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionList_2D_element::GALGAS_controllerBindingOptionList_2D_element (void) :
mProperty_mOptionName (),
mProperty_mOptionTypeName () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionList_2D_element::~ GALGAS_controllerBindingOptionList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionList_2D_element::GALGAS_controllerBindingOptionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_lstring & inOperand1) :
mProperty_mOptionName (inOperand0),
mProperty_mOptionTypeName (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionList_2D_element GALGAS_controllerBindingOptionList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_controllerBindingOptionList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_lstring::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionList_2D_element GALGAS_controllerBindingOptionList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_lstring & inOperand1 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controllerBindingOptionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_controllerBindingOptionList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_controllerBindingOptionList_2D_element::objectCompare (const GALGAS_controllerBindingOptionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mOptionName.objectCompare (inOperand.mProperty_mOptionName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOptionTypeName.objectCompare (inOperand.mProperty_mOptionTypeName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_controllerBindingOptionList_2D_element::isValid (void) const {
  return mProperty_mOptionName.isValid () && mProperty_mOptionTypeName.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controllerBindingOptionList_2D_element::drop (void) {
  mProperty_mOptionName.drop () ;
  mProperty_mOptionTypeName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controllerBindingOptionList_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @controllerBindingOptionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mOptionName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOptionTypeName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_controllerBindingOptionList_2D_element::getter_mOptionName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOptionName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_controllerBindingOptionList_2D_element::getter_mOptionTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOptionTypeName ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @controllerBindingOptionList-element type                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controllerBindingOptionList_2D_element ("controllerBindingOptionList-element",
                                                               NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_controllerBindingOptionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controllerBindingOptionList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_controllerBindingOptionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controllerBindingOptionList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionList_2D_element GALGAS_controllerBindingOptionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_controllerBindingOptionList_2D_element result ;
  const GALGAS_controllerBindingOptionList_2D_element * p = (const GALGAS_controllerBindingOptionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controllerBindingOptionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controllerBindingOptionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationModelList_2D_element::GALGAS_outletClassBindingSpecificationModelList_2D_element (void) :
mProperty_mModelTypeName (),
mProperty_mModelShouldBeWritableProperty () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationModelList_2D_element::~ GALGAS_outletClassBindingSpecificationModelList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationModelList_2D_element::GALGAS_outletClassBindingSpecificationModelList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                        const GALGAS_bool & inOperand1) :
mProperty_mModelTypeName (inOperand0),
mProperty_mModelShouldBeWritableProperty (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationModelList_2D_element GALGAS_outletClassBindingSpecificationModelList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_outletClassBindingSpecificationModelList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                     GALGAS_bool::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationModelList_2D_element GALGAS_outletClassBindingSpecificationModelList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                        const GALGAS_bool & inOperand1 
                                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletClassBindingSpecificationModelList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_outletClassBindingSpecificationModelList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_outletClassBindingSpecificationModelList_2D_element::objectCompare (const GALGAS_outletClassBindingSpecificationModelList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mModelTypeName.objectCompare (inOperand.mProperty_mModelTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mModelShouldBeWritableProperty.objectCompare (inOperand.mProperty_mModelShouldBeWritableProperty) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_outletClassBindingSpecificationModelList_2D_element::isValid (void) const {
  return mProperty_mModelTypeName.isValid () && mProperty_mModelShouldBeWritableProperty.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassBindingSpecificationModelList_2D_element::drop (void) {
  mProperty_mModelTypeName.drop () ;
  mProperty_mModelShouldBeWritableProperty.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassBindingSpecificationModelList_2D_element::description (C_String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString << "<struct @outletClassBindingSpecificationModelList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mModelTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mModelShouldBeWritableProperty.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_outletClassBindingSpecificationModelList_2D_element::getter_mModelTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModelTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_outletClassBindingSpecificationModelList_2D_element::getter_mModelShouldBeWritableProperty (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModelShouldBeWritableProperty ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               @outletClassBindingSpecificationModelList-element type                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletClassBindingSpecificationModelList_2D_element ("outletClassBindingSpecificationModelList-element",
                                                                            NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_outletClassBindingSpecificationModelList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassBindingSpecificationModelList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_outletClassBindingSpecificationModelList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletClassBindingSpecificationModelList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationModelList_2D_element GALGAS_outletClassBindingSpecificationModelList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_outletClassBindingSpecificationModelList_2D_element result ;
  const GALGAS_outletClassBindingSpecificationModelList_2D_element * p = (const GALGAS_outletClassBindingSpecificationModelList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outletClassBindingSpecificationModelList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletClassBindingSpecificationModelList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationList_2D_element::GALGAS_outletClassBindingSpecificationList_2D_element (void) :
mProperty_mOutletClassName (),
mProperty_mIsUserDefined (),
mProperty_mBindingName (),
mProperty_mOutletClassBindingSpecificationModelList (),
mProperty_mBindingOptionList () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationList_2D_element::~ GALGAS_outletClassBindingSpecificationList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationList_2D_element::GALGAS_outletClassBindingSpecificationList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_bool & inOperand1,
                                                                                                              const GALGAS_lstring & inOperand2,
                                                                                                              const GALGAS_outletClassBindingSpecificationModelList & inOperand3,
                                                                                                              const GALGAS_controllerBindingOptionList & inOperand4) :
mProperty_mOutletClassName (inOperand0),
mProperty_mIsUserDefined (inOperand1),
mProperty_mBindingName (inOperand2),
mProperty_mOutletClassBindingSpecificationModelList (inOperand3),
mProperty_mBindingOptionList (inOperand4) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationList_2D_element GALGAS_outletClassBindingSpecificationList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_outletClassBindingSpecificationList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_bool::constructor_default (HERE),
                                                                GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_outletClassBindingSpecificationModelList::constructor_emptyList (HERE),
                                                                GALGAS_controllerBindingOptionList::constructor_emptyList (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationList_2D_element GALGAS_outletClassBindingSpecificationList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                              const GALGAS_bool & inOperand1,
                                                                                                                              const GALGAS_lstring & inOperand2,
                                                                                                                              const GALGAS_outletClassBindingSpecificationModelList & inOperand3,
                                                                                                                              const GALGAS_controllerBindingOptionList & inOperand4 
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletClassBindingSpecificationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_outletClassBindingSpecificationList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_outletClassBindingSpecificationList_2D_element::objectCompare (const GALGAS_outletClassBindingSpecificationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mOutletClassName.objectCompare (inOperand.mProperty_mOutletClassName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsUserDefined.objectCompare (inOperand.mProperty_mIsUserDefined) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBindingName.objectCompare (inOperand.mProperty_mBindingName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOutletClassBindingSpecificationModelList.objectCompare (inOperand.mProperty_mOutletClassBindingSpecificationModelList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBindingOptionList.objectCompare (inOperand.mProperty_mBindingOptionList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_outletClassBindingSpecificationList_2D_element::isValid (void) const {
  return mProperty_mOutletClassName.isValid () && mProperty_mIsUserDefined.isValid () && mProperty_mBindingName.isValid () && mProperty_mOutletClassBindingSpecificationModelList.isValid () && mProperty_mBindingOptionList.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassBindingSpecificationList_2D_element::drop (void) {
  mProperty_mOutletClassName.drop () ;
  mProperty_mIsUserDefined.drop () ;
  mProperty_mBindingName.drop () ;
  mProperty_mOutletClassBindingSpecificationModelList.drop () ;
  mProperty_mBindingOptionList.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassBindingSpecificationList_2D_element::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "<struct @outletClassBindingSpecificationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mOutletClassName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsUserDefined.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBindingName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOutletClassBindingSpecificationModelList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBindingOptionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_outletClassBindingSpecificationList_2D_element::getter_mOutletClassName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOutletClassName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_outletClassBindingSpecificationList_2D_element::getter_mIsUserDefined (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsUserDefined ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_outletClassBindingSpecificationList_2D_element::getter_mBindingName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBindingName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationModelList GALGAS_outletClassBindingSpecificationList_2D_element::getter_mOutletClassBindingSpecificationModelList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOutletClassBindingSpecificationModelList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionList GALGAS_outletClassBindingSpecificationList_2D_element::getter_mBindingOptionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBindingOptionList ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  @outletClassBindingSpecificationList-element type                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletClassBindingSpecificationList_2D_element ("outletClassBindingSpecificationList-element",
                                                                       NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_outletClassBindingSpecificationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassBindingSpecificationList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_outletClassBindingSpecificationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletClassBindingSpecificationList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationList_2D_element GALGAS_outletClassBindingSpecificationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_outletClassBindingSpecificationList_2D_element result ;
  const GALGAS_outletClassBindingSpecificationList_2D_element * p = (const GALGAS_outletClassBindingSpecificationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outletClassBindingSpecificationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletClassBindingSpecificationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingSpecificationMap_2D_element::GALGAS_bindingSpecificationMap_2D_element (void) :
mProperty_lkey (),
mProperty_mOutletSuperClassName (),
mProperty_mBindingMap () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingSpecificationMap_2D_element::~ GALGAS_bindingSpecificationMap_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingSpecificationMap_2D_element::GALGAS_bindingSpecificationMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_lstring & inOperand1,
                                                                                      const GALGAS_outletBindingSpecificationMap & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mOutletSuperClassName (inOperand1),
mProperty_mBindingMap (inOperand2) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingSpecificationMap_2D_element GALGAS_bindingSpecificationMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_bindingSpecificationMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_outletBindingSpecificationMap::constructor_emptyMap (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingSpecificationMap_2D_element GALGAS_bindingSpecificationMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_lstring & inOperand1,
                                                                                                      const GALGAS_outletBindingSpecificationMap & inOperand2 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bindingSpecificationMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_bindingSpecificationMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_bindingSpecificationMap_2D_element::objectCompare (const GALGAS_bindingSpecificationMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOutletSuperClassName.objectCompare (inOperand.mProperty_mOutletSuperClassName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBindingMap.objectCompare (inOperand.mProperty_mBindingMap) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_bindingSpecificationMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mOutletSuperClassName.isValid () && mProperty_mBindingMap.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_bindingSpecificationMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mOutletSuperClassName.drop () ;
  mProperty_mBindingMap.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_bindingSpecificationMap_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @bindingSpecificationMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOutletSuperClassName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBindingMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_bindingSpecificationMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_bindingSpecificationMap_2D_element::getter_mOutletSuperClassName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOutletSuperClassName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationMap GALGAS_bindingSpecificationMap_2D_element::getter_mBindingMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBindingMap ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @bindingSpecificationMap-element type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bindingSpecificationMap_2D_element ("bindingSpecificationMap-element",
                                                           NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_bindingSpecificationMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bindingSpecificationMap_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_bindingSpecificationMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bindingSpecificationMap_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingSpecificationMap_2D_element GALGAS_bindingSpecificationMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_bindingSpecificationMap_2D_element result ;
  const GALGAS_bindingSpecificationMap_2D_element * p = (const GALGAS_bindingSpecificationMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bindingSpecificationMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bindingSpecificationMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionDecoratedList_2D_element::GALGAS_controllerBindingOptionDecoratedList_2D_element (void) :
mProperty_mOptionType (),
mProperty_mOptionName () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionDecoratedList_2D_element::~ GALGAS_controllerBindingOptionDecoratedList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionDecoratedList_2D_element::GALGAS_controllerBindingOptionDecoratedList_2D_element (const GALGAS_typeKind & inOperand0,
                                                                                                                const GALGAS_lstring & inOperand1) :
mProperty_mOptionType (inOperand0),
mProperty_mOptionName (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionDecoratedList_2D_element GALGAS_controllerBindingOptionDecoratedList_2D_element::constructor_new (const GALGAS_typeKind & inOperand0,
                                                                                                                                const GALGAS_lstring & inOperand1 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controllerBindingOptionDecoratedList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_controllerBindingOptionDecoratedList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_controllerBindingOptionDecoratedList_2D_element::objectCompare (const GALGAS_controllerBindingOptionDecoratedList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mOptionType.objectCompare (inOperand.mProperty_mOptionType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOptionName.objectCompare (inOperand.mProperty_mOptionName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_controllerBindingOptionDecoratedList_2D_element::isValid (void) const {
  return mProperty_mOptionType.isValid () && mProperty_mOptionName.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controllerBindingOptionDecoratedList_2D_element::drop (void) {
  mProperty_mOptionType.drop () ;
  mProperty_mOptionName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controllerBindingOptionDecoratedList_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @controllerBindingOptionDecoratedList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mOptionType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOptionName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_controllerBindingOptionDecoratedList_2D_element::getter_mOptionType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOptionType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_controllerBindingOptionDecoratedList_2D_element::getter_mOptionName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOptionName ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 @controllerBindingOptionDecoratedList-element type                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controllerBindingOptionDecoratedList_2D_element ("controllerBindingOptionDecoratedList-element",
                                                                        NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_controllerBindingOptionDecoratedList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controllerBindingOptionDecoratedList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_controllerBindingOptionDecoratedList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controllerBindingOptionDecoratedList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionDecoratedList_2D_element GALGAS_controllerBindingOptionDecoratedList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_controllerBindingOptionDecoratedList_2D_element result ;
  const GALGAS_controllerBindingOptionDecoratedList_2D_element * p = (const GALGAS_controllerBindingOptionDecoratedList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controllerBindingOptionDecoratedList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controllerBindingOptionDecoratedList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationMap_2D_element::GALGAS_outletBindingSpecificationMap_2D_element (void) :
mProperty_lkey (),
mProperty_mOutletBindingSpecificationModelList (),
mProperty_mControllerBindingOptionList () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationMap_2D_element::~ GALGAS_outletBindingSpecificationMap_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationMap_2D_element::GALGAS_outletBindingSpecificationMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_outletBindingSpecificationModelList & inOperand1,
                                                                                                  const GALGAS_controllerBindingOptionDecoratedList & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mOutletBindingSpecificationModelList (inOperand1),
mProperty_mControllerBindingOptionList (inOperand2) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationMap_2D_element GALGAS_outletBindingSpecificationMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_outletBindingSpecificationMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_outletBindingSpecificationModelList::constructor_emptyList (HERE),
                                                          GALGAS_controllerBindingOptionDecoratedList::constructor_emptyList (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationMap_2D_element GALGAS_outletBindingSpecificationMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                  const GALGAS_outletBindingSpecificationModelList & inOperand1,
                                                                                                                  const GALGAS_controllerBindingOptionDecoratedList & inOperand2 
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletBindingSpecificationMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_outletBindingSpecificationMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_outletBindingSpecificationMap_2D_element::objectCompare (const GALGAS_outletBindingSpecificationMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOutletBindingSpecificationModelList.objectCompare (inOperand.mProperty_mOutletBindingSpecificationModelList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mControllerBindingOptionList.objectCompare (inOperand.mProperty_mControllerBindingOptionList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_outletBindingSpecificationMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mOutletBindingSpecificationModelList.isValid () && mProperty_mControllerBindingOptionList.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletBindingSpecificationMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mOutletBindingSpecificationModelList.drop () ;
  mProperty_mControllerBindingOptionList.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletBindingSpecificationMap_2D_element::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "<struct @outletBindingSpecificationMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOutletBindingSpecificationModelList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mControllerBindingOptionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_outletBindingSpecificationMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationModelList GALGAS_outletBindingSpecificationMap_2D_element::getter_mOutletBindingSpecificationModelList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOutletBindingSpecificationModelList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionDecoratedList GALGAS_outletBindingSpecificationMap_2D_element::getter_mControllerBindingOptionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mControllerBindingOptionList ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @outletBindingSpecificationMap-element type                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletBindingSpecificationMap_2D_element ("outletBindingSpecificationMap-element",
                                                                 NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_outletBindingSpecificationMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletBindingSpecificationMap_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_outletBindingSpecificationMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletBindingSpecificationMap_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationMap_2D_element GALGAS_outletBindingSpecificationMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_outletBindingSpecificationMap_2D_element result ;
  const GALGAS_outletBindingSpecificationMap_2D_element * p = (const GALGAS_outletBindingSpecificationMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outletBindingSpecificationMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletBindingSpecificationMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingOptionList_2D_element::GALGAS_bindingOptionList_2D_element (void) :
mProperty_mOptionName (),
mProperty_mOptionValue () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingOptionList_2D_element::~ GALGAS_bindingOptionList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingOptionList_2D_element::GALGAS_bindingOptionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_abstractDefaultValue & inOperand1) :
mProperty_mOptionName (inOperand0),
mProperty_mOptionValue (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingOptionList_2D_element GALGAS_bindingOptionList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_abstractDefaultValue & inOperand1 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bindingOptionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_bindingOptionList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_bindingOptionList_2D_element::objectCompare (const GALGAS_bindingOptionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mOptionName.objectCompare (inOperand.mProperty_mOptionName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOptionValue.objectCompare (inOperand.mProperty_mOptionValue) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_bindingOptionList_2D_element::isValid (void) const {
  return mProperty_mOptionName.isValid () && mProperty_mOptionValue.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_bindingOptionList_2D_element::drop (void) {
  mProperty_mOptionName.drop () ;
  mProperty_mOptionValue.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_bindingOptionList_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @bindingOptionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mOptionName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOptionValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_bindingOptionList_2D_element::getter_mOptionName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOptionName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractDefaultValue GALGAS_bindingOptionList_2D_element::getter_mOptionValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOptionValue ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @bindingOptionList-element type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bindingOptionList_2D_element ("bindingOptionList-element",
                                                     NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_bindingOptionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bindingOptionList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_bindingOptionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bindingOptionList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingOptionList_2D_element GALGAS_bindingOptionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_bindingOptionList_2D_element result ;
  const GALGAS_bindingOptionList_2D_element * p = (const GALGAS_bindingOptionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bindingOptionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bindingOptionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletDeclarationList_2D_element::GALGAS_outletDeclarationList_2D_element (void) :
mProperty_mOutletTypeName (),
mProperty_mOutletName (),
mProperty_mTableValueBindingDescriptor (),
mProperty_mRunDescriptor (),
mProperty_mEnabledBindingDescriptor (),
mProperty_mHiddenBindingDescriptor (),
mProperty_mRegularBindingList (),
mProperty_mGraphicController () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletDeclarationList_2D_element::~ GALGAS_outletDeclarationList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletDeclarationList_2D_element::GALGAS_outletDeclarationList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_lstring & inOperand1,
                                                                                  const GALGAS_tableValueBinding & inOperand2,
                                                                                  const GALGAS_runActionDescriptor & inOperand3,
                                                                                  const GALGAS_multipleBindingDescriptor & inOperand4,
                                                                                  const GALGAS_multipleBindingDescriptor & inOperand5,
                                                                                  const GALGAS_regularBindingList & inOperand6,
                                                                                  const GALGAS_graphicController & inOperand7) :
mProperty_mOutletTypeName (inOperand0),
mProperty_mOutletName (inOperand1),
mProperty_mTableValueBindingDescriptor (inOperand2),
mProperty_mRunDescriptor (inOperand3),
mProperty_mEnabledBindingDescriptor (inOperand4),
mProperty_mHiddenBindingDescriptor (inOperand5),
mProperty_mRegularBindingList (inOperand6),
mProperty_mGraphicController (inOperand7) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletDeclarationList_2D_element GALGAS_outletDeclarationList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_lstring & inOperand1,
                                                                                                  const GALGAS_tableValueBinding & inOperand2,
                                                                                                  const GALGAS_runActionDescriptor & inOperand3,
                                                                                                  const GALGAS_multipleBindingDescriptor & inOperand4,
                                                                                                  const GALGAS_multipleBindingDescriptor & inOperand5,
                                                                                                  const GALGAS_regularBindingList & inOperand6,
                                                                                                  const GALGAS_graphicController & inOperand7 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletDeclarationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    result = GALGAS_outletDeclarationList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_outletDeclarationList_2D_element::objectCompare (const GALGAS_outletDeclarationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mOutletTypeName.objectCompare (inOperand.mProperty_mOutletTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOutletName.objectCompare (inOperand.mProperty_mOutletName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTableValueBindingDescriptor.objectCompare (inOperand.mProperty_mTableValueBindingDescriptor) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRunDescriptor.objectCompare (inOperand.mProperty_mRunDescriptor) ;
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
  if (result == kOperandEqual) {
    result = mProperty_mGraphicController.objectCompare (inOperand.mProperty_mGraphicController) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_outletDeclarationList_2D_element::isValid (void) const {
  return mProperty_mOutletTypeName.isValid () && mProperty_mOutletName.isValid () && mProperty_mTableValueBindingDescriptor.isValid () && mProperty_mRunDescriptor.isValid () && mProperty_mEnabledBindingDescriptor.isValid () && mProperty_mHiddenBindingDescriptor.isValid () && mProperty_mRegularBindingList.isValid () && mProperty_mGraphicController.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletDeclarationList_2D_element::drop (void) {
  mProperty_mOutletTypeName.drop () ;
  mProperty_mOutletName.drop () ;
  mProperty_mTableValueBindingDescriptor.drop () ;
  mProperty_mRunDescriptor.drop () ;
  mProperty_mEnabledBindingDescriptor.drop () ;
  mProperty_mHiddenBindingDescriptor.drop () ;
  mProperty_mRegularBindingList.drop () ;
  mProperty_mGraphicController.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletDeclarationList_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @outletDeclarationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mOutletTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOutletName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTableValueBindingDescriptor.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRunDescriptor.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEnabledBindingDescriptor.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mHiddenBindingDescriptor.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRegularBindingList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGraphicController.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_outletDeclarationList_2D_element::getter_mOutletTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOutletTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_outletDeclarationList_2D_element::getter_mOutletName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOutletName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableValueBinding GALGAS_outletDeclarationList_2D_element::getter_mTableValueBindingDescriptor (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTableValueBindingDescriptor ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_runActionDescriptor GALGAS_outletDeclarationList_2D_element::getter_mRunDescriptor (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRunDescriptor ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingDescriptor GALGAS_outletDeclarationList_2D_element::getter_mEnabledBindingDescriptor (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnabledBindingDescriptor ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingDescriptor GALGAS_outletDeclarationList_2D_element::getter_mHiddenBindingDescriptor (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHiddenBindingDescriptor ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingList GALGAS_outletDeclarationList_2D_element::getter_mRegularBindingList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegularBindingList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_graphicController GALGAS_outletDeclarationList_2D_element::getter_mGraphicController (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGraphicController ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @outletDeclarationList-element type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletDeclarationList_2D_element ("outletDeclarationList-element",
                                                         NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_outletDeclarationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletDeclarationList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_outletDeclarationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletDeclarationList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletDeclarationList_2D_element GALGAS_outletDeclarationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_outletDeclarationList_2D_element result ;
  const GALGAS_outletDeclarationList_2D_element * p = (const GALGAS_outletDeclarationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outletDeclarationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletDeclarationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedOutletMap_2D_element::GALGAS_decoratedOutletMap_2D_element (void) :
mProperty_lkey (),
mProperty_mOutletTypeName () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedOutletMap_2D_element::~ GALGAS_decoratedOutletMap_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedOutletMap_2D_element::GALGAS_decoratedOutletMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_string & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mOutletTypeName (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedOutletMap_2D_element GALGAS_decoratedOutletMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_decoratedOutletMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                               GALGAS_string::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedOutletMap_2D_element GALGAS_decoratedOutletMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_string & inOperand1 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_decoratedOutletMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_decoratedOutletMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_decoratedOutletMap_2D_element::objectCompare (const GALGAS_decoratedOutletMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOutletTypeName.objectCompare (inOperand.mProperty_mOutletTypeName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_decoratedOutletMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mOutletTypeName.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedOutletMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mOutletTypeName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedOutletMap_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @decoratedOutletMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOutletTypeName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_decoratedOutletMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_decoratedOutletMap_2D_element::getter_mOutletTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOutletTypeName ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @decoratedOutletMap-element type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedOutletMap_2D_element ("decoratedOutletMap-element",
                                                      NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_decoratedOutletMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedOutletMap_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_decoratedOutletMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedOutletMap_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedOutletMap_2D_element GALGAS_decoratedOutletMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_decoratedOutletMap_2D_element result ;
  const GALGAS_decoratedOutletMap_2D_element * p = (const GALGAS_decoratedOutletMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedOutletMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedOutletMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientPropertyGenerationList_2D_element::GALGAS_transientPropertyGenerationList_2D_element (void) :
mProperty_mProperty () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientPropertyGenerationList_2D_element::~ GALGAS_transientPropertyGenerationList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientPropertyGenerationList_2D_element::GALGAS_transientPropertyGenerationList_2D_element (const GALGAS_transientPropertyGeneration & inOperand0) :
mProperty_mProperty (inOperand0) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientPropertyGenerationList_2D_element GALGAS_transientPropertyGenerationList_2D_element::constructor_new (const GALGAS_transientPropertyGeneration & inOperand0 
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_transientPropertyGenerationList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_transientPropertyGenerationList_2D_element (inOperand0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_transientPropertyGenerationList_2D_element::objectCompare (const GALGAS_transientPropertyGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mProperty.objectCompare (inOperand.mProperty_mProperty) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_transientPropertyGenerationList_2D_element::isValid (void) const {
  return mProperty_mProperty.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_transientPropertyGenerationList_2D_element::drop (void) {
  mProperty_mProperty.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_transientPropertyGenerationList_2D_element::description (C_String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString << "<struct @transientPropertyGenerationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mProperty.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientPropertyGeneration GALGAS_transientPropertyGenerationList_2D_element::getter_mProperty (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProperty ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    @transientPropertyGenerationList-element type                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transientPropertyGenerationList_2D_element ("transientPropertyGenerationList-element",
                                                                   NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_transientPropertyGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientPropertyGenerationList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_transientPropertyGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientPropertyGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientPropertyGenerationList_2D_element GALGAS_transientPropertyGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_transientPropertyGenerationList_2D_element result ;
  const GALGAS_transientPropertyGenerationList_2D_element * p = (const GALGAS_transientPropertyGenerationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_transientPropertyGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientPropertyGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyList_2D_element::GALGAS_simpleStoredPropertyList_2D_element (void) :
mProperty_mPropertyTypeName (),
mProperty_mPropertyName (),
mProperty_mDefaultValue (),
mProperty_mNeedsValidation () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyList_2D_element::~ GALGAS_simpleStoredPropertyList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyList_2D_element::GALGAS_simpleStoredPropertyList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_lstring & inOperand1,
                                                                                        const GALGAS_abstractDefaultValue & inOperand2,
                                                                                        const GALGAS_bool & inOperand3) :
mProperty_mPropertyTypeName (inOperand0),
mProperty_mPropertyName (inOperand1),
mProperty_mDefaultValue (inOperand2),
mProperty_mNeedsValidation (inOperand3) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyList_2D_element GALGAS_simpleStoredPropertyList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_lstring & inOperand1,
                                                                                                        const GALGAS_abstractDefaultValue & inOperand2,
                                                                                                        const GALGAS_bool & inOperand3 
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_simpleStoredPropertyList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_simpleStoredPropertyList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_simpleStoredPropertyList_2D_element::objectCompare (const GALGAS_simpleStoredPropertyList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mPropertyTypeName.objectCompare (inOperand.mProperty_mPropertyTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPropertyName.objectCompare (inOperand.mProperty_mPropertyName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDefaultValue.objectCompare (inOperand.mProperty_mDefaultValue) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mNeedsValidation.objectCompare (inOperand.mProperty_mNeedsValidation) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_simpleStoredPropertyList_2D_element::isValid (void) const {
  return mProperty_mPropertyTypeName.isValid () && mProperty_mPropertyName.isValid () && mProperty_mDefaultValue.isValid () && mProperty_mNeedsValidation.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_simpleStoredPropertyList_2D_element::drop (void) {
  mProperty_mPropertyTypeName.drop () ;
  mProperty_mPropertyName.drop () ;
  mProperty_mDefaultValue.drop () ;
  mProperty_mNeedsValidation.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_simpleStoredPropertyList_2D_element::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "<struct @simpleStoredPropertyList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mPropertyTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPropertyName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDefaultValue.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mNeedsValidation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_simpleStoredPropertyList_2D_element::getter_mPropertyTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_simpleStoredPropertyList_2D_element::getter_mPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractDefaultValue GALGAS_simpleStoredPropertyList_2D_element::getter_mDefaultValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDefaultValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_simpleStoredPropertyList_2D_element::getter_mNeedsValidation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNeedsValidation ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @simpleStoredPropertyList-element type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_simpleStoredPropertyList_2D_element ("simpleStoredPropertyList-element",
                                                            NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_simpleStoredPropertyList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_simpleStoredPropertyList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_simpleStoredPropertyList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_simpleStoredPropertyList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyList_2D_element GALGAS_simpleStoredPropertyList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_simpleStoredPropertyList_2D_element result ;
  const GALGAS_simpleStoredPropertyList_2D_element * p = (const GALGAS_simpleStoredPropertyList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_simpleStoredPropertyList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("simpleStoredPropertyList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneRelationshipListEX_2D_element::GALGAS_toOneRelationshipListEX_2D_element (void) :
mProperty_mCurrentEntityName (),
mProperty_mDestinationEntityName (),
mProperty_mToOneRelationshipName (),
mProperty_mOppositeRelationshipName (),
mProperty_mInverseRelationMultiplicity (),
mProperty_mCascading () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneRelationshipListEX_2D_element::~ GALGAS_toOneRelationshipListEX_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneRelationshipListEX_2D_element::GALGAS_toOneRelationshipListEX_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_lstring & inOperand1,
                                                                                      const GALGAS_lstring & inOperand2,
                                                                                      const GALGAS_lstring & inOperand3,
                                                                                      const GALGAS_propertyMultiplicity & inOperand4,
                                                                                      const GALGAS_bool & inOperand5) :
mProperty_mCurrentEntityName (inOperand0),
mProperty_mDestinationEntityName (inOperand1),
mProperty_mToOneRelationshipName (inOperand2),
mProperty_mOppositeRelationshipName (inOperand3),
mProperty_mInverseRelationMultiplicity (inOperand4),
mProperty_mCascading (inOperand5) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneRelationshipListEX_2D_element GALGAS_toOneRelationshipListEX_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_lstring & inOperand1,
                                                                                                      const GALGAS_lstring & inOperand2,
                                                                                                      const GALGAS_lstring & inOperand3,
                                                                                                      const GALGAS_propertyMultiplicity & inOperand4,
                                                                                                      const GALGAS_bool & inOperand5 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_toOneRelationshipListEX_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_toOneRelationshipListEX_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_toOneRelationshipListEX_2D_element::objectCompare (const GALGAS_toOneRelationshipListEX_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mCurrentEntityName.objectCompare (inOperand.mProperty_mCurrentEntityName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDestinationEntityName.objectCompare (inOperand.mProperty_mDestinationEntityName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mToOneRelationshipName.objectCompare (inOperand.mProperty_mToOneRelationshipName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOppositeRelationshipName.objectCompare (inOperand.mProperty_mOppositeRelationshipName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInverseRelationMultiplicity.objectCompare (inOperand.mProperty_mInverseRelationMultiplicity) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mCascading.objectCompare (inOperand.mProperty_mCascading) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_toOneRelationshipListEX_2D_element::isValid (void) const {
  return mProperty_mCurrentEntityName.isValid () && mProperty_mDestinationEntityName.isValid () && mProperty_mToOneRelationshipName.isValid () && mProperty_mOppositeRelationshipName.isValid () && mProperty_mInverseRelationMultiplicity.isValid () && mProperty_mCascading.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneRelationshipListEX_2D_element::drop (void) {
  mProperty_mCurrentEntityName.drop () ;
  mProperty_mDestinationEntityName.drop () ;
  mProperty_mToOneRelationshipName.drop () ;
  mProperty_mOppositeRelationshipName.drop () ;
  mProperty_mInverseRelationMultiplicity.drop () ;
  mProperty_mCascading.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneRelationshipListEX_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @toOneRelationshipListEX-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mCurrentEntityName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDestinationEntityName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mToOneRelationshipName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOppositeRelationshipName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInverseRelationMultiplicity.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mCascading.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_toOneRelationshipListEX_2D_element::getter_mCurrentEntityName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCurrentEntityName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_toOneRelationshipListEX_2D_element::getter_mDestinationEntityName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDestinationEntityName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_toOneRelationshipListEX_2D_element::getter_mToOneRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mToOneRelationshipName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_toOneRelationshipListEX_2D_element::getter_mOppositeRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOppositeRelationshipName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMultiplicity GALGAS_toOneRelationshipListEX_2D_element::getter_mInverseRelationMultiplicity (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInverseRelationMultiplicity ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_toOneRelationshipListEX_2D_element::getter_mCascading (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCascading ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @toOneRelationshipListEX-element type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toOneRelationshipListEX_2D_element ("toOneRelationshipListEX-element",
                                                           NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_toOneRelationshipListEX_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOneRelationshipListEX_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_toOneRelationshipListEX_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toOneRelationshipListEX_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneRelationshipListEX_2D_element GALGAS_toOneRelationshipListEX_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_toOneRelationshipListEX_2D_element result ;
  const GALGAS_toOneRelationshipListEX_2D_element * p = (const GALGAS_toOneRelationshipListEX_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toOneRelationshipListEX_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toOneRelationshipListEX-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOnePropertyGenerationList_2D_element::GALGAS_toOnePropertyGenerationList_2D_element (void) :
mProperty_mProperty () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOnePropertyGenerationList_2D_element::~ GALGAS_toOnePropertyGenerationList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOnePropertyGenerationList_2D_element::GALGAS_toOnePropertyGenerationList_2D_element (const GALGAS_toOnePropertyGeneration & inOperand0) :
mProperty_mProperty (inOperand0) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOnePropertyGenerationList_2D_element GALGAS_toOnePropertyGenerationList_2D_element::constructor_new (const GALGAS_toOnePropertyGeneration & inOperand0 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_toOnePropertyGenerationList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_toOnePropertyGenerationList_2D_element (inOperand0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_toOnePropertyGenerationList_2D_element::objectCompare (const GALGAS_toOnePropertyGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mProperty.objectCompare (inOperand.mProperty_mProperty) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_toOnePropertyGenerationList_2D_element::isValid (void) const {
  return mProperty_mProperty.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOnePropertyGenerationList_2D_element::drop (void) {
  mProperty_mProperty.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOnePropertyGenerationList_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @toOnePropertyGenerationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mProperty.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOnePropertyGeneration GALGAS_toOnePropertyGenerationList_2D_element::getter_mProperty (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProperty ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @toOnePropertyGenerationList-element type                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toOnePropertyGenerationList_2D_element ("toOnePropertyGenerationList-element",
                                                               NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_toOnePropertyGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOnePropertyGenerationList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_toOnePropertyGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toOnePropertyGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOnePropertyGenerationList_2D_element GALGAS_toOnePropertyGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_toOnePropertyGenerationList_2D_element result ;
  const GALGAS_toOnePropertyGenerationList_2D_element * p = (const GALGAS_toOnePropertyGenerationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toOnePropertyGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toOnePropertyGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyRelationshipListEX_2D_element::GALGAS_toManyRelationshipListEX_2D_element (void) :
mProperty_mCurrentEntityName (),
mProperty_mDestinationEntityName (),
mProperty_mToManyRelationshipName (),
mProperty_mOppositeRelationshipName (),
mProperty_mCascading () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyRelationshipListEX_2D_element::~ GALGAS_toManyRelationshipListEX_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyRelationshipListEX_2D_element::GALGAS_toManyRelationshipListEX_2D_element (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_lstring & inOperand1,
                                                                                        const GALGAS_lstring & inOperand2,
                                                                                        const GALGAS_lstring & inOperand3,
                                                                                        const GALGAS_bool & inOperand4) :
mProperty_mCurrentEntityName (inOperand0),
mProperty_mDestinationEntityName (inOperand1),
mProperty_mToManyRelationshipName (inOperand2),
mProperty_mOppositeRelationshipName (inOperand3),
mProperty_mCascading (inOperand4) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyRelationshipListEX_2D_element GALGAS_toManyRelationshipListEX_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_toManyRelationshipListEX_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_bool::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyRelationshipListEX_2D_element GALGAS_toManyRelationshipListEX_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_lstring & inOperand1,
                                                                                                        const GALGAS_lstring & inOperand2,
                                                                                                        const GALGAS_lstring & inOperand3,
                                                                                                        const GALGAS_bool & inOperand4 
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_toManyRelationshipListEX_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_toManyRelationshipListEX_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_toManyRelationshipListEX_2D_element::objectCompare (const GALGAS_toManyRelationshipListEX_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mCurrentEntityName.objectCompare (inOperand.mProperty_mCurrentEntityName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDestinationEntityName.objectCompare (inOperand.mProperty_mDestinationEntityName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mToManyRelationshipName.objectCompare (inOperand.mProperty_mToManyRelationshipName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOppositeRelationshipName.objectCompare (inOperand.mProperty_mOppositeRelationshipName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mCascading.objectCompare (inOperand.mProperty_mCascading) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_toManyRelationshipListEX_2D_element::isValid (void) const {
  return mProperty_mCurrentEntityName.isValid () && mProperty_mDestinationEntityName.isValid () && mProperty_mToManyRelationshipName.isValid () && mProperty_mOppositeRelationshipName.isValid () && mProperty_mCascading.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyRelationshipListEX_2D_element::drop (void) {
  mProperty_mCurrentEntityName.drop () ;
  mProperty_mDestinationEntityName.drop () ;
  mProperty_mToManyRelationshipName.drop () ;
  mProperty_mOppositeRelationshipName.drop () ;
  mProperty_mCascading.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyRelationshipListEX_2D_element::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "<struct @toManyRelationshipListEX-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mCurrentEntityName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDestinationEntityName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mToManyRelationshipName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOppositeRelationshipName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mCascading.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_toManyRelationshipListEX_2D_element::getter_mCurrentEntityName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCurrentEntityName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_toManyRelationshipListEX_2D_element::getter_mDestinationEntityName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDestinationEntityName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_toManyRelationshipListEX_2D_element::getter_mToManyRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mToManyRelationshipName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_toManyRelationshipListEX_2D_element::getter_mOppositeRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOppositeRelationshipName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_toManyRelationshipListEX_2D_element::getter_mCascading (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCascading ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @toManyRelationshipListEX-element type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toManyRelationshipListEX_2D_element ("toManyRelationshipListEX-element",
                                                            NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_toManyRelationshipListEX_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyRelationshipListEX_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_toManyRelationshipListEX_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toManyRelationshipListEX_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyRelationshipListEX_2D_element GALGAS_toManyRelationshipListEX_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_toManyRelationshipListEX_2D_element result ;
  const GALGAS_toManyRelationshipListEX_2D_element * p = (const GALGAS_toManyRelationshipListEX_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toManyRelationshipListEX_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyRelationshipListEX-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_storedArrayPropertyListAST_2D_element::GALGAS_storedArrayPropertyListAST_2D_element (void) :
mProperty_mElementClassName (),
mProperty_mStoredArrayPropertyName () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_storedArrayPropertyListAST_2D_element::~ GALGAS_storedArrayPropertyListAST_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_storedArrayPropertyListAST_2D_element::GALGAS_storedArrayPropertyListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_lstring & inOperand1) :
mProperty_mElementClassName (inOperand0),
mProperty_mStoredArrayPropertyName (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_storedArrayPropertyListAST_2D_element GALGAS_storedArrayPropertyListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_storedArrayPropertyListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_lstring::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_storedArrayPropertyListAST_2D_element GALGAS_storedArrayPropertyListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_lstring & inOperand1 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_storedArrayPropertyListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_storedArrayPropertyListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_storedArrayPropertyListAST_2D_element::objectCompare (const GALGAS_storedArrayPropertyListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mElementClassName.objectCompare (inOperand.mProperty_mElementClassName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStoredArrayPropertyName.objectCompare (inOperand.mProperty_mStoredArrayPropertyName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_storedArrayPropertyListAST_2D_element::isValid (void) const {
  return mProperty_mElementClassName.isValid () && mProperty_mStoredArrayPropertyName.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_storedArrayPropertyListAST_2D_element::drop (void) {
  mProperty_mElementClassName.drop () ;
  mProperty_mStoredArrayPropertyName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_storedArrayPropertyListAST_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @storedArrayPropertyListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mElementClassName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStoredArrayPropertyName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_storedArrayPropertyListAST_2D_element::getter_mElementClassName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElementClassName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_storedArrayPropertyListAST_2D_element::getter_mStoredArrayPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStoredArrayPropertyName ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @storedArrayPropertyListAST-element type                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_storedArrayPropertyListAST_2D_element ("storedArrayPropertyListAST-element",
                                                              NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_storedArrayPropertyListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storedArrayPropertyListAST_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_storedArrayPropertyListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_storedArrayPropertyListAST_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_storedArrayPropertyListAST_2D_element GALGAS_storedArrayPropertyListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_storedArrayPropertyListAST_2D_element result ;
  const GALGAS_storedArrayPropertyListAST_2D_element * p = (const GALGAS_storedArrayPropertyListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_storedArrayPropertyListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("storedArrayPropertyListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionMap_2D_element::GALGAS_actionMap_2D_element (void) :
mProperty_lkey () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionMap_2D_element::~ GALGAS_actionMap_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionMap_2D_element::GALGAS_actionMap_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionMap_2D_element GALGAS_actionMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_actionMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionMap_2D_element GALGAS_actionMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_actionMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_actionMap_2D_element (inOperand0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_actionMap_2D_element::objectCompare (const GALGAS_actionMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_actionMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_actionMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_actionMap_2D_element::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "<struct @actionMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_actionMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mProperty_lkey ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @actionMap-element type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actionMap_2D_element ("actionMap-element",
                                             NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_actionMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actionMap_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_actionMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actionMap_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionMap_2D_element GALGAS_actionMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_actionMap_2D_element result ;
  const GALGAS_actionMap_2D_element * p = (const GALGAS_actionMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_actionMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actionMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingList_2D_element::GALGAS_regularBindingList_2D_element (void) :
mProperty_mBindingName (),
mProperty_mObservablePropertyList (),
mProperty_mBindingOptionList () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingList_2D_element::~ GALGAS_regularBindingList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingList_2D_element::GALGAS_regularBindingList_2D_element (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_observablePropertyList & inOperand1,
                                                                            const GALGAS_bindingOptionList & inOperand2) :
mProperty_mBindingName (inOperand0),
mProperty_mObservablePropertyList (inOperand1),
mProperty_mBindingOptionList (inOperand2) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingList_2D_element GALGAS_regularBindingList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_regularBindingList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                               GALGAS_observablePropertyList::constructor_emptyList (HERE),
                                               GALGAS_bindingOptionList::constructor_emptyList (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingList_2D_element GALGAS_regularBindingList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_observablePropertyList & inOperand1,
                                                                                            const GALGAS_bindingOptionList & inOperand2 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_regularBindingList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_regularBindingList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_regularBindingList_2D_element::objectCompare (const GALGAS_regularBindingList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mBindingName.objectCompare (inOperand.mProperty_mBindingName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mObservablePropertyList.objectCompare (inOperand.mProperty_mObservablePropertyList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBindingOptionList.objectCompare (inOperand.mProperty_mBindingOptionList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_regularBindingList_2D_element::isValid (void) const {
  return mProperty_mBindingName.isValid () && mProperty_mObservablePropertyList.isValid () && mProperty_mBindingOptionList.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_regularBindingList_2D_element::drop (void) {
  mProperty_mBindingName.drop () ;
  mProperty_mObservablePropertyList.drop () ;
  mProperty_mBindingOptionList.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_regularBindingList_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @regularBindingList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mBindingName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mObservablePropertyList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBindingOptionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_regularBindingList_2D_element::getter_mBindingName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBindingName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyList GALGAS_regularBindingList_2D_element::getter_mObservablePropertyList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mObservablePropertyList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingOptionList GALGAS_regularBindingList_2D_element::getter_mBindingOptionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBindingOptionList ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @regularBindingList-element type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_regularBindingList_2D_element ("regularBindingList-element",
                                                      NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_regularBindingList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_regularBindingList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_regularBindingList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_regularBindingList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingList_2D_element GALGAS_regularBindingList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_regularBindingList_2D_element result ;
  const GALGAS_regularBindingList_2D_element * p = (const GALGAS_regularBindingList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_regularBindingList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("regularBindingList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListAST_2D_element::GALGAS_arrayControllerBoundColumnListAST_2D_element (void) :
mProperty_mColumnName (),
mProperty_mColumnOutletTypeName (),
mProperty_mColumnBindingAST (),
mProperty_mSortPropertyName () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListAST_2D_element::~ GALGAS_arrayControllerBoundColumnListAST_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListAST_2D_element::GALGAS_arrayControllerBoundColumnListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                          const GALGAS_lstring & inOperand1,
                                                                                                          const GALGAS_columnBindingAST & inOperand2,
                                                                                                          const GALGAS_lstring & inOperand3) :
mProperty_mColumnName (inOperand0),
mProperty_mColumnOutletTypeName (inOperand1),
mProperty_mColumnBindingAST (inOperand2),
mProperty_mSortPropertyName (inOperand3) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListAST_2D_element GALGAS_arrayControllerBoundColumnListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                          const GALGAS_lstring & inOperand1,
                                                                                                                          const GALGAS_columnBindingAST & inOperand2,
                                                                                                                          const GALGAS_lstring & inOperand3 
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_arrayControllerBoundColumnListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_arrayControllerBoundColumnListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_arrayControllerBoundColumnListAST_2D_element::objectCompare (const GALGAS_arrayControllerBoundColumnListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mColumnName.objectCompare (inOperand.mProperty_mColumnName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mColumnOutletTypeName.objectCompare (inOperand.mProperty_mColumnOutletTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mColumnBindingAST.objectCompare (inOperand.mProperty_mColumnBindingAST) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSortPropertyName.objectCompare (inOperand.mProperty_mSortPropertyName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_arrayControllerBoundColumnListAST_2D_element::isValid (void) const {
  return mProperty_mColumnName.isValid () && mProperty_mColumnOutletTypeName.isValid () && mProperty_mColumnBindingAST.isValid () && mProperty_mSortPropertyName.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerBoundColumnListAST_2D_element::drop (void) {
  mProperty_mColumnName.drop () ;
  mProperty_mColumnOutletTypeName.drop () ;
  mProperty_mColumnBindingAST.drop () ;
  mProperty_mSortPropertyName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerBoundColumnListAST_2D_element::description (C_String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString << "<struct @arrayControllerBoundColumnListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mColumnName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mColumnOutletTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mColumnBindingAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSortPropertyName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_arrayControllerBoundColumnListAST_2D_element::getter_mColumnName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mColumnName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_arrayControllerBoundColumnListAST_2D_element::getter_mColumnOutletTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mColumnOutletTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_columnBindingAST GALGAS_arrayControllerBoundColumnListAST_2D_element::getter_mColumnBindingAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mColumnBindingAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_arrayControllerBoundColumnListAST_2D_element::getter_mSortPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSortPropertyName ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   @arrayControllerBoundColumnListAST-element type                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerBoundColumnListAST_2D_element ("arrayControllerBoundColumnListAST-element",
                                                                     NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_arrayControllerBoundColumnListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerBoundColumnListAST_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_arrayControllerBoundColumnListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerBoundColumnListAST_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListAST_2D_element GALGAS_arrayControllerBoundColumnListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerBoundColumnListAST_2D_element result ;
  const GALGAS_arrayControllerBoundColumnListAST_2D_element * p = (const GALGAS_arrayControllerBoundColumnListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayControllerBoundColumnListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerBoundColumnListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerAttributListAST_2D_element::GALGAS_arrayControllerAttributListAST_2D_element (void) :
mProperty_mAttributeName (),
mProperty_mAttributeValue () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerAttributListAST_2D_element::~ GALGAS_arrayControllerAttributListAST_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerAttributListAST_2D_element::GALGAS_arrayControllerAttributListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_abstractDefaultValue & inOperand1) :
mProperty_mAttributeName (inOperand0),
mProperty_mAttributeValue (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerAttributListAST_2D_element GALGAS_arrayControllerAttributListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                    const GALGAS_abstractDefaultValue & inOperand1 
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_arrayControllerAttributListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_arrayControllerAttributListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_arrayControllerAttributListAST_2D_element::objectCompare (const GALGAS_arrayControllerAttributListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mAttributeName.objectCompare (inOperand.mProperty_mAttributeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAttributeValue.objectCompare (inOperand.mProperty_mAttributeValue) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_arrayControllerAttributListAST_2D_element::isValid (void) const {
  return mProperty_mAttributeName.isValid () && mProperty_mAttributeValue.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerAttributListAST_2D_element::drop (void) {
  mProperty_mAttributeName.drop () ;
  mProperty_mAttributeValue.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerAttributListAST_2D_element::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "<struct @arrayControllerAttributListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mAttributeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAttributeValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_arrayControllerAttributListAST_2D_element::getter_mAttributeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAttributeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractDefaultValue GALGAS_arrayControllerAttributListAST_2D_element::getter_mAttributeValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAttributeValue ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    @arrayControllerAttributListAST-element type                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerAttributListAST_2D_element ("arrayControllerAttributListAST-element",
                                                                  NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_arrayControllerAttributListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerAttributListAST_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_arrayControllerAttributListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerAttributListAST_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerAttributListAST_2D_element GALGAS_arrayControllerAttributListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerAttributListAST_2D_element result ;
  const GALGAS_arrayControllerAttributListAST_2D_element * p = (const GALGAS_arrayControllerAttributListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayControllerAttributListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerAttributListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}


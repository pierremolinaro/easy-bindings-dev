#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-1.h"

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_computedPropertyDeclarationAST_2E_weak::objectCompare (const GGS_computedPropertyDeclarationAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyDeclarationAST_2E_weak::GGS_computedPropertyDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyDeclarationAST_2E_weak & GGS_computedPropertyDeclarationAST_2E_weak::operator = (const GGS_computedPropertyDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyDeclarationAST_2E_weak::GGS_computedPropertyDeclarationAST_2E_weak (const GGS_computedPropertyDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_computedPropertyDeclarationAST_2E_weak GGS_computedPropertyDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_computedPropertyDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyDeclarationAST GGS_computedPropertyDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_computedPropertyDeclarationAST result ;
  if (isValid ()) {
    const cPtr_computedPropertyDeclarationAST * p = (cPtr_computedPropertyDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_computedPropertyDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyDeclarationAST GGS_computedPropertyDeclarationAST_2E_weak::bang_computedPropertyDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_computedPropertyDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_computedPropertyDeclarationAST) ;
      result = GGS_computedPropertyDeclarationAST ((cPtr_computedPropertyDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @computedPropertyDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_computedPropertyDeclarationAST_2E_weak ("computedPropertyDeclarationAST.weak",
                                                                                           & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_computedPropertyDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedPropertyDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_computedPropertyDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_computedPropertyDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyDeclarationAST_2E_weak GGS_computedPropertyDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_computedPropertyDeclarationAST_2E_weak result ;
  const GGS_computedPropertyDeclarationAST_2E_weak * p = (const GGS_computedPropertyDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_computedPropertyDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computedPropertyDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum typeKind
//--------------------------------------------------------------------------------------------------

GGS_typeKind::GGS_typeKind (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_boolType (UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_boolType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_integerType (UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_integerType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_uint_33__32_Type (UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_uint_33__32_Type ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_doubleType (UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_doubleType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_stringType (UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_stringType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_dataType (UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_dataType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_dateType (UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_dateType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_fontType (UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_fontType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_colorType (UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_colorType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_bezierPathType (UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_bezierPathType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_bezierPathArrayType (UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_bezierPathArrayType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_enumType (const GGS_string & inAssociatedValue0,
                                                const GGS_enumConstantMap & inAssociatedValue1,
                                                const GGS_enumFuncMap & inAssociatedValue2
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_enumType ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_typeKind_2E_enumType (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_entityType (const GGS_string & inAssociatedValue0,
                                                  const GGS_bool & inAssociatedValue1
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_entityType ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_typeKind_2E_entityType (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_classType (const GGS_string & inAssociatedValue0
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_classType ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_typeKind_2E_classType (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_transientPropertyExternType (const GGS_string & inAssociatedValue0
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_transientPropertyExternType ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_typeKind_2E_transientPropertyExternType (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::method_extractEnumType (GGS_string & outAssociatedValue_enumTypeName,
                                           GGS_enumConstantMap & outAssociatedValue_constantMap,
                                           GGS_enumFuncMap & outAssociatedValue_funcMap,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_enumType) {
    outAssociatedValue_enumTypeName.drop () ;
    outAssociatedValue_constantMap.drop () ;
    outAssociatedValue_funcMap.drop () ;
    String s ;
    s.appendCString ("method @typeKind.enumType invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_typeKind_2E_enumType *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_enumTypeName = ptr->mProperty_enumTypeName ;
    outAssociatedValue_constantMap = ptr->mProperty_constantMap ;
    outAssociatedValue_funcMap = ptr->mProperty_funcMap ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::method_extractEntityType (GGS_string & outAssociatedValue_entityName,
                                             GGS_bool & outAssociatedValue_graphic,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_entityType) {
    outAssociatedValue_entityName.drop () ;
    outAssociatedValue_graphic.drop () ;
    String s ;
    s.appendCString ("method @typeKind.entityType invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_typeKind_2E_entityType *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_entityName = ptr->mProperty_entityName ;
    outAssociatedValue_graphic = ptr->mProperty_graphic ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::method_extractClassType (GGS_string & outAssociatedValue_className,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_classType) {
    outAssociatedValue_className.drop () ;
    String s ;
    s.appendCString ("method @typeKind.classType invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_typeKind_2E_classType *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_className = ptr->mProperty_className ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::method_extractTransientPropertyExternType (GGS_string & outAssociatedValue_externTypeName,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_transientPropertyExternType) {
    outAssociatedValue_externTypeName.drop () ;
    String s ;
    s.appendCString ("method @typeKind.transientPropertyExternType invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_typeKind_2E_transientPropertyExternType *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_externTypeName = ptr->mProperty_externTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_enumType_3F_ GGS_typeKind::getter_getEnumType (UNUSED_LOCATION_ARGS) const {
  GGS_typeKind_2E_enumType_3F_ result ;
  if (mEnum == Enumeration::enum_enumType) {
    const auto ptr = (const GGS_typeKind_2E_enumType *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_typeKind_2E_enumType (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::getAssociatedValuesFor_enumType (GGS_string & out_enumTypeName,
                                                    GGS_enumConstantMap & out_constantMap,
                                                    GGS_enumFuncMap & out_funcMap) const {
  const auto ptr = (const GGS_typeKind_2E_enumType *) mAssociatedValues.associatedValuesPointer () ;
  out_enumTypeName = ptr->mProperty_enumTypeName ;
  out_constantMap = ptr->mProperty_constantMap ;
  out_funcMap = ptr->mProperty_funcMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_entityType_3F_ GGS_typeKind::getter_getEntityType (UNUSED_LOCATION_ARGS) const {
  GGS_typeKind_2E_entityType_3F_ result ;
  if (mEnum == Enumeration::enum_entityType) {
    const auto ptr = (const GGS_typeKind_2E_entityType *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_typeKind_2E_entityType (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::getAssociatedValuesFor_entityType (GGS_string & out_entityName,
                                                      GGS_bool & out_graphic) const {
  const auto ptr = (const GGS_typeKind_2E_entityType *) mAssociatedValues.associatedValuesPointer () ;
  out_entityName = ptr->mProperty_entityName ;
  out_graphic = ptr->mProperty_graphic ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_classType_3F_ GGS_typeKind::getter_getClassType (UNUSED_LOCATION_ARGS) const {
  GGS_typeKind_2E_classType_3F_ result ;
  if (mEnum == Enumeration::enum_classType) {
    const auto ptr = (const GGS_typeKind_2E_classType *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_typeKind_2E_classType (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::getAssociatedValuesFor_classType (GGS_string & out_className) const {
  const auto ptr = (const GGS_typeKind_2E_classType *) mAssociatedValues.associatedValuesPointer () ;
  out_className = ptr->mProperty_className ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_transientPropertyExternType_3F_ GGS_typeKind::getter_getTransientPropertyExternType (UNUSED_LOCATION_ARGS) const {
  GGS_typeKind_2E_transientPropertyExternType_3F_ result ;
  if (mEnum == Enumeration::enum_transientPropertyExternType) {
    const auto ptr = (const GGS_typeKind_2E_transientPropertyExternType *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_typeKind_2E_transientPropertyExternType (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::getAssociatedValuesFor_transientPropertyExternType (GGS_string & out_externTypeName) const {
  const auto ptr = (const GGS_typeKind_2E_transientPropertyExternType *) mAssociatedValues.associatedValuesPointer () ;
  out_externTypeName = ptr->mProperty_externTypeName ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_typeKind [16] = {
  "(not built)",
  "boolType",
  "integerType",
  "uint32Type",
  "doubleType",
  "stringType",
  "dataType",
  "dateType",
  "fontType",
  "colorType",
  "bezierPathType",
  "bezierPathArrayType",
  "enumType",
  "entityType",
  "classType",
  "transientPropertyExternType"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isBoolType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_boolType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isIntegerType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_integerType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isUint_33__32_Type (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_uint_33__32_Type == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isDoubleType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_doubleType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isStringType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_stringType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isDataType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_dataType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isDateType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_dateType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isFontType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_fontType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isColorType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_colorType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isBezierPathType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_bezierPathType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isBezierPathArrayType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_bezierPathArrayType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isEnumType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_enumType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isEntityType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_entityType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isClassType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_classType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isTransientPropertyExternType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_transientPropertyExternType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::description (String & ioString,
                                const int32_t inIndentation) const {
  ioString.appendCString ("<enum @typeKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_typeKind [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKind::objectCompare (const GGS_typeKind & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      switch (mEnum) {
      case Enumeration::enum_enumType: {
        const auto left = (GGS_typeKind_2E_enumType *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_typeKind_2E_enumType *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      case Enumeration::enum_entityType: {
        const auto left = (GGS_typeKind_2E_entityType *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_typeKind_2E_entityType *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      case Enumeration::enum_classType: {
        const auto left = (GGS_typeKind_2E_classType *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_typeKind_2E_classType *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      case Enumeration::enum_transientPropertyExternType: {
        const auto left = (GGS_typeKind_2E_transientPropertyExternType *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_typeKind_2E_transientPropertyExternType *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      default:
        result = ComparisonResult::operandEqual ;
        break ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @typeKind generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind ("typeKind",
                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::extractObject (const GGS_object & inObject,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GGS_typeKind result ;
  const GGS_typeKind * p = (const GGS_typeKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@transientDependencyListForGeneration' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_transientDependencyListForGeneration : public cCollectionElement {
  public: GGS_transientDependencyListForGeneration_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_transientDependencyListForGeneration (const GGS_observablePropertyAST & in_mDependency,
                                                                   const GGS_string & in_mFunctionArgumentName,
                                                                   const GGS_string & in_mFunctionArgumentTypeString,
                                                                   const GGS_string & in_mDefaultValueAsString,
                                                                   const GGS_string & in_mProtocolName
                                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_transientDependencyListForGeneration (const GGS_transientDependencyListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_transientDependencyListForGeneration::cCollectionElement_transientDependencyListForGeneration (const GGS_observablePropertyAST & in_mDependency,
                                                                                                                  const GGS_string & in_mFunctionArgumentName,
                                                                                                                  const GGS_string & in_mFunctionArgumentTypeString,
                                                                                                                  const GGS_string & in_mDefaultValueAsString,
                                                                                                                  const GGS_string & in_mProtocolName
                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDependency, in_mFunctionArgumentName, in_mFunctionArgumentTypeString, in_mDefaultValueAsString, in_mProtocolName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_transientDependencyListForGeneration::cCollectionElement_transientDependencyListForGeneration (const GGS_transientDependencyListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mDependency, inElement.mProperty_mFunctionArgumentName, inElement.mProperty_mFunctionArgumentTypeString, inElement.mProperty_mDefaultValueAsString, inElement.mProperty_mProtocolName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_transientDependencyListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_transientDependencyListForGeneration::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_transientDependencyListForGeneration (mObject.mProperty_mDependency, mObject.mProperty_mFunctionArgumentName, mObject.mProperty_mFunctionArgumentTypeString, mObject.mProperty_mDefaultValueAsString, mObject.mProperty_mProtocolName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @transientDependencyListForGeneration
//--------------------------------------------------------------------------------------------------

GGS_transientDependencyListForGeneration::GGS_transientDependencyListForGeneration (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_transientDependencyListForGeneration::GGS_transientDependencyListForGeneration (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_transientDependencyListForGeneration * p = (cCollectionElement_transientDependencyListForGeneration *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_transientDependencyListForGeneration) ;
    const GGS_transientDependencyListForGeneration_2E_element element (p->mObject.mProperty_mDependency, p->mObject.mProperty_mFunctionArgumentName, p->mObject.mProperty_mFunctionArgumentTypeString, p->mObject.mProperty_mDefaultValueAsString, p->mObject.mProperty_mProtocolName) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientDependencyListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                          const GGS_observablePropertyAST & in_mDependency,
                                                                          const GGS_string & in_mFunctionArgumentName,
                                                                          const GGS_string & in_mFunctionArgumentTypeString,
                                                                          const GGS_string & in_mDefaultValueAsString,
                                                                          const GGS_string & in_mProtocolName
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_transientDependencyListForGeneration * p = nullptr ;
  macroMyNew (p, cCollectionElement_transientDependencyListForGeneration (in_mDependency, in_mFunctionArgumentName, in_mFunctionArgumentTypeString, in_mDefaultValueAsString, in_mProtocolName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_transientDependencyListForGeneration::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_transientDependencyListForGeneration::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientDependencyListForGeneration::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mDependency:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mDependency.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFunctionArgumentName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFunctionArgumentName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFunctionArgumentTypeString:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFunctionArgumentTypeString.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mDefaultValueAsString:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mDefaultValueAsString.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mProtocolName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mProtocolName.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientDependencyListForGeneration GGS_transientDependencyListForGeneration::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_transientDependencyListForGeneration result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientDependencyListForGeneration GGS_transientDependencyListForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_transientDependencyListForGeneration result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientDependencyListForGeneration::plusPlusAssignOperation (const GGS_transientDependencyListForGeneration_2E_element & inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_transientDependencyListForGeneration GGS_transientDependencyListForGeneration::class_func_listWithValue (const GGS_observablePropertyAST & inOperand0,
                                                                                                             const GGS_string & inOperand1,
                                                                                                             const GGS_string & inOperand2,
                                                                                                             const GGS_string & inOperand3,
                                                                                                             const GGS_string & inOperand4
                                                                                                             COMMA_LOCATION_ARGS) {
  const GGS_transientDependencyListForGeneration_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  GGS_transientDependencyListForGeneration result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientDependencyListForGeneration::addAssignOperation (const GGS_observablePropertyAST & inOperand0,
                                                                   const GGS_string & inOperand1,
                                                                   const GGS_string & inOperand2,
                                                                   const GGS_string & inOperand3,
                                                                   const GGS_string & inOperand4
                                                                   COMMA_LOCATION_ARGS) {
  const GGS_transientDependencyListForGeneration_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientDependencyListForGeneration::setter_append (const GGS_observablePropertyAST inOperand0,
                                                              const GGS_string inOperand1,
                                                              const GGS_string inOperand2,
                                                              const GGS_string inOperand3,
                                                              const GGS_string inOperand4,
                                                              Compiler * /* inCompiler */
                                                              COMMA_LOCATION_ARGS) {
  const GGS_transientDependencyListForGeneration_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientDependencyListForGeneration::setter_insertAtIndex (const GGS_observablePropertyAST inOperand0,
                                                                     const GGS_string inOperand1,
                                                                     const GGS_string inOperand2,
                                                                     const GGS_string inOperand3,
                                                                     const GGS_string inOperand4,
                                                                     const GGS_uint inInsertionIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  const GGS_transientDependencyListForGeneration_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientDependencyListForGeneration::setter_removeAtIndex (GGS_observablePropertyAST & outOperand0,
                                                                     GGS_string & outOperand1,
                                                                     GGS_string & outOperand2,
                                                                     GGS_string & outOperand3,
                                                                     GGS_string & outOperand4,
                                                                     const GGS_uint inRemoveIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mDependency ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mFunctionArgumentName ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mFunctionArgumentTypeString ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mDefaultValueAsString ;
      outOperand4 = mArray (idx COMMA_HERE).mProperty_mProtocolName ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientDependencyListForGeneration::setter_popFirst (GGS_observablePropertyAST & outOperand0,
                                                                GGS_string & outOperand1,
                                                                GGS_string & outOperand2,
                                                                GGS_string & outOperand3,
                                                                GGS_string & outOperand4,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mDependency ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mFunctionArgumentName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mFunctionArgumentTypeString ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mDefaultValueAsString ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mProtocolName ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientDependencyListForGeneration::setter_popLast (GGS_observablePropertyAST & outOperand0,
                                                               GGS_string & outOperand1,
                                                               GGS_string & outOperand2,
                                                               GGS_string & outOperand3,
                                                               GGS_string & outOperand4,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mDependency ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mFunctionArgumentName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mFunctionArgumentTypeString ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mDefaultValueAsString ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mProtocolName ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientDependencyListForGeneration::method_first (GGS_observablePropertyAST & outOperand0,
                                                             GGS_string & outOperand1,
                                                             GGS_string & outOperand2,
                                                             GGS_string & outOperand3,
                                                             GGS_string & outOperand4,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mDependency ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mFunctionArgumentName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mFunctionArgumentTypeString ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mDefaultValueAsString ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mProtocolName ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientDependencyListForGeneration::method_last (GGS_observablePropertyAST & outOperand0,
                                                            GGS_string & outOperand1,
                                                            GGS_string & outOperand2,
                                                            GGS_string & outOperand3,
                                                            GGS_string & outOperand4,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mDependency ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mFunctionArgumentName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mFunctionArgumentTypeString ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mDefaultValueAsString ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mProtocolName ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_transientDependencyListForGeneration GGS_transientDependencyListForGeneration::add_operation (const GGS_transientDependencyListForGeneration & inOperand,
                                                                                                  Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_transientDependencyListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientDependencyListForGeneration GGS_transientDependencyListForGeneration::subList (const int32_t inStart,
                                                                                            const int32_t inLength,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_transientDependencyListForGeneration result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientDependencyListForGeneration GGS_transientDependencyListForGeneration::getter_subListWithRange (const GGS_range & inRange,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_transientDependencyListForGeneration result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientDependencyListForGeneration GGS_transientDependencyListForGeneration::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_transientDependencyListForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientDependencyListForGeneration GGS_transientDependencyListForGeneration::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_transientDependencyListForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientDependencyListForGeneration::plusAssignOperation (const GGS_transientDependencyListForGeneration inList,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientDependencyListForGeneration::setter_setMDependencyAtIndex (GGS_observablePropertyAST inOperand,
                                                                             GGS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mDependency = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_observablePropertyAST GGS_transientDependencyListForGeneration::getter_mDependencyAtIndex (const GGS_uint & inIndex,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  GGS_observablePropertyAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mDependency ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_transientDependencyListForGeneration::setter_setMFunctionArgumentNameAtIndex (GGS_string inOperand,
                                                                                       GGS_uint inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFunctionArgumentName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_transientDependencyListForGeneration::getter_mFunctionArgumentNameAtIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFunctionArgumentName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_transientDependencyListForGeneration::setter_setMFunctionArgumentTypeStringAtIndex (GGS_string inOperand,
                                                                                             GGS_uint inIndex,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFunctionArgumentTypeString = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_transientDependencyListForGeneration::getter_mFunctionArgumentTypeStringAtIndex (const GGS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFunctionArgumentTypeString ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_transientDependencyListForGeneration::setter_setMDefaultValueAsStringAtIndex (GGS_string inOperand,
                                                                                       GGS_uint inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mDefaultValueAsString = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_transientDependencyListForGeneration::getter_mDefaultValueAsStringAtIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mDefaultValueAsString ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_transientDependencyListForGeneration::setter_setMProtocolNameAtIndex (GGS_string inOperand,
                                                                               GGS_uint inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mProtocolName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_transientDependencyListForGeneration::getter_mProtocolNameAtIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mProtocolName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @transientDependencyListForGeneration
//--------------------------------------------------------------------------------------------------

DownEnumerator_transientDependencyListForGeneration::DownEnumerator_transientDependencyListForGeneration (const GGS_transientDependencyListForGeneration & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientDependencyListForGeneration_2E_element DownEnumerator_transientDependencyListForGeneration::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST DownEnumerator_transientDependencyListForGeneration::current_mDependency (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDependency ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_transientDependencyListForGeneration::current_mFunctionArgumentName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFunctionArgumentName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_transientDependencyListForGeneration::current_mFunctionArgumentTypeString (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFunctionArgumentTypeString ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_transientDependencyListForGeneration::current_mDefaultValueAsString (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDefaultValueAsString ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_transientDependencyListForGeneration::current_mProtocolName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProtocolName ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @transientDependencyListForGeneration
//--------------------------------------------------------------------------------------------------

UpEnumerator_transientDependencyListForGeneration::UpEnumerator_transientDependencyListForGeneration (const GGS_transientDependencyListForGeneration & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_transientDependencyListForGeneration_2E_element UpEnumerator_transientDependencyListForGeneration::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST UpEnumerator_transientDependencyListForGeneration::current_mDependency (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDependency ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_transientDependencyListForGeneration::current_mFunctionArgumentName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFunctionArgumentName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_transientDependencyListForGeneration::current_mFunctionArgumentTypeString (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFunctionArgumentTypeString ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_transientDependencyListForGeneration::current_mDefaultValueAsString (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDefaultValueAsString ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_transientDependencyListForGeneration::current_mProtocolName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProtocolName ;
}




//--------------------------------------------------------------------------------------------------
//     @transientDependencyListForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_transientDependencyListForGeneration ("transientDependencyListForGeneration",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_transientDependencyListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientDependencyListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_transientDependencyListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_transientDependencyListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientDependencyListForGeneration GGS_transientDependencyListForGeneration::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_transientDependencyListForGeneration result ;
  const GGS_transientDependencyListForGeneration * p = (const GGS_transientDependencyListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_transientDependencyListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientDependencyListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_computedPropertyGeneration_2E_weak::objectCompare (const GGS_computedPropertyGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGeneration_2E_weak::GGS_computedPropertyGeneration_2E_weak (void) :
GGS_propertyGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGeneration_2E_weak & GGS_computedPropertyGeneration_2E_weak::operator = (const GGS_computedPropertyGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGeneration_2E_weak::GGS_computedPropertyGeneration_2E_weak (const GGS_computedPropertyGeneration & inSource) :
GGS_propertyGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGeneration_2E_weak GGS_computedPropertyGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_computedPropertyGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGeneration GGS_computedPropertyGeneration_2E_weak::unwrappedValue (void) const {
  GGS_computedPropertyGeneration result ;
  if (isValid ()) {
    const cPtr_computedPropertyGeneration * p = (cPtr_computedPropertyGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_computedPropertyGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGeneration GGS_computedPropertyGeneration_2E_weak::bang_computedPropertyGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_computedPropertyGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_computedPropertyGeneration) ;
      result = GGS_computedPropertyGeneration ((cPtr_computedPropertyGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @computedPropertyGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_computedPropertyGeneration_2E_weak ("computedPropertyGeneration.weak",
                                                                                       & kTypeDescriptor_GALGAS_propertyGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_computedPropertyGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedPropertyGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_computedPropertyGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_computedPropertyGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGeneration_2E_weak GGS_computedPropertyGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_computedPropertyGeneration_2E_weak result ;
  const GGS_computedPropertyGeneration_2E_weak * p = (const GGS_computedPropertyGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_computedPropertyGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computedPropertyGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@computedPropertyGenerationList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_computedPropertyGenerationList : public cCollectionElement {
  public: GGS_computedPropertyGenerationList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_computedPropertyGenerationList (const GGS_computedPropertyGeneration & in_mProperty
                                                             COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_computedPropertyGenerationList (const GGS_computedPropertyGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_computedPropertyGenerationList::cCollectionElement_computedPropertyGenerationList (const GGS_computedPropertyGeneration & in_mProperty
                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mProperty) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_computedPropertyGenerationList::cCollectionElement_computedPropertyGenerationList (const GGS_computedPropertyGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mProperty) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_computedPropertyGenerationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_computedPropertyGenerationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_computedPropertyGenerationList (mObject.mProperty_mProperty COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @computedPropertyGenerationList
//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGenerationList::GGS_computedPropertyGenerationList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGenerationList::GGS_computedPropertyGenerationList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_computedPropertyGenerationList * p = (cCollectionElement_computedPropertyGenerationList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_computedPropertyGenerationList) ;
    const GGS_computedPropertyGenerationList_2E_element element (p->mObject.mProperty_mProperty) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_computedPropertyGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GGS_computedPropertyGeneration & in_mProperty
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_computedPropertyGenerationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_computedPropertyGenerationList (in_mProperty COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_computedPropertyGenerationList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_computedPropertyGenerationList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_computedPropertyGenerationList::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mProperty:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mProperty.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGenerationList GGS_computedPropertyGenerationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_computedPropertyGenerationList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGenerationList GGS_computedPropertyGenerationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_computedPropertyGenerationList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_computedPropertyGenerationList::plusPlusAssignOperation (const GGS_computedPropertyGenerationList_2E_element & inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGenerationList GGS_computedPropertyGenerationList::class_func_listWithValue (const GGS_computedPropertyGeneration & inOperand0
                                                                                                 COMMA_LOCATION_ARGS) {
  const GGS_computedPropertyGenerationList_2E_element element (inOperand0) ;
  GGS_computedPropertyGenerationList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_computedPropertyGenerationList::addAssignOperation (const GGS_computedPropertyGeneration & inOperand0
                                                             COMMA_LOCATION_ARGS) {
  const GGS_computedPropertyGenerationList_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_computedPropertyGenerationList::setter_append (const GGS_computedPropertyGeneration inOperand0,
                                                        Compiler * /* inCompiler */
                                                        COMMA_LOCATION_ARGS) {
  const GGS_computedPropertyGenerationList_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_computedPropertyGenerationList::setter_insertAtIndex (const GGS_computedPropertyGeneration inOperand0,
                                                               const GGS_uint inInsertionIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  const GGS_computedPropertyGenerationList_2E_element newElement (inOperand0) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_computedPropertyGenerationList::setter_removeAtIndex (GGS_computedPropertyGeneration & outOperand0,
                                                               const GGS_uint inRemoveIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mProperty ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_computedPropertyGenerationList::setter_popFirst (GGS_computedPropertyGeneration & outOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mProperty ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_computedPropertyGenerationList::setter_popLast (GGS_computedPropertyGeneration & outOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mProperty ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_computedPropertyGenerationList::method_first (GGS_computedPropertyGeneration & outOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mProperty ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_computedPropertyGenerationList::method_last (GGS_computedPropertyGeneration & outOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mProperty ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGenerationList GGS_computedPropertyGenerationList::add_operation (const GGS_computedPropertyGenerationList & inOperand,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_computedPropertyGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGenerationList GGS_computedPropertyGenerationList::subList (const int32_t inStart,
                                                                                const int32_t inLength,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_computedPropertyGenerationList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGenerationList GGS_computedPropertyGenerationList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_computedPropertyGenerationList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGenerationList GGS_computedPropertyGenerationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_computedPropertyGenerationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGenerationList GGS_computedPropertyGenerationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_computedPropertyGenerationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_computedPropertyGenerationList::plusAssignOperation (const GGS_computedPropertyGenerationList inList,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_computedPropertyGenerationList::setter_setMPropertyAtIndex (GGS_computedPropertyGeneration inOperand,
                                                                     GGS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mProperty = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_computedPropertyGeneration GGS_computedPropertyGenerationList::getter_mPropertyAtIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_computedPropertyGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mProperty ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @computedPropertyGenerationList
//--------------------------------------------------------------------------------------------------

DownEnumerator_computedPropertyGenerationList::DownEnumerator_computedPropertyGenerationList (const GGS_computedPropertyGenerationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGenerationList_2E_element DownEnumerator_computedPropertyGenerationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGeneration DownEnumerator_computedPropertyGenerationList::current_mProperty (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProperty ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @computedPropertyGenerationList
//--------------------------------------------------------------------------------------------------

UpEnumerator_computedPropertyGenerationList::UpEnumerator_computedPropertyGenerationList (const GGS_computedPropertyGenerationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGenerationList_2E_element UpEnumerator_computedPropertyGenerationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGeneration UpEnumerator_computedPropertyGenerationList::current_mProperty (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProperty ;
}




//--------------------------------------------------------------------------------------------------
//     @computedPropertyGenerationList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_computedPropertyGenerationList ("computedPropertyGenerationList",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_computedPropertyGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedPropertyGenerationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_computedPropertyGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_computedPropertyGenerationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGenerationList GGS_computedPropertyGenerationList::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_computedPropertyGenerationList result ;
  const GGS_computedPropertyGenerationList * p = (const GGS_computedPropertyGenerationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_computedPropertyGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computedPropertyGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @computeRoutineGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_computeRoutineGeneration::objectCompare (const GGS_computeRoutineGeneration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computeRoutineGeneration::GGS_computeRoutineGeneration (void) :
GGS_abstractFileGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_computeRoutineGeneration GGS_computeRoutineGeneration::
init_21__21__21__21_ (const GGS_string & in_mOwnerName,
                      const GGS_string & in_mTransientName,
                      const GGS_typeKind & in_mTransientType,
                      const GGS_transientDependencyListForGeneration & in_mDependencyList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_computeRoutineGeneration * object = nullptr ;
  macroMyNew (object, cPtr_computeRoutineGeneration (inCompiler COMMA_THERE)) ;
  object->computeRoutineGeneration_init_21__21__21__21_ (in_mOwnerName, in_mTransientName, in_mTransientType, in_mDependencyList, inCompiler) ;
  const GGS_computeRoutineGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_computeRoutineGeneration::
computeRoutineGeneration_init_21__21__21__21_ (const GGS_string & in_mOwnerName,
                                               const GGS_string & in_mTransientName,
                                               const GGS_typeKind & in_mTransientType,
                                               const GGS_transientDependencyListForGeneration & in_mDependencyList,
                                               Compiler * /* inCompiler */) {
  mProperty_mOwnerName = in_mOwnerName ;
  mProperty_mTransientName = in_mTransientName ;
  mProperty_mTransientType = in_mTransientType ;
  mProperty_mDependencyList = in_mDependencyList ;
}

//--------------------------------------------------------------------------------------------------

GGS_computeRoutineGeneration::GGS_computeRoutineGeneration (const cPtr_computeRoutineGeneration * inSourcePtr) :
GGS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_computeRoutineGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_computeRoutineGeneration GGS_computeRoutineGeneration::class_func_new (const GGS_string & in_mOwnerName,
                                                                           const GGS_string & in_mTransientName,
                                                                           const GGS_typeKind & in_mTransientType,
                                                                           const GGS_transientDependencyListForGeneration & in_mDependencyList,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  GGS_computeRoutineGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_computeRoutineGeneration (in_mOwnerName, in_mTransientName, in_mTransientType, in_mDependencyList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_computeRoutineGeneration::readProperty_mOwnerName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_computeRoutineGeneration * p = (cPtr_computeRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computeRoutineGeneration) ;
    return p->mProperty_mOwnerName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_computeRoutineGeneration::setProperty_mOwnerName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_computeRoutineGeneration * p = (cPtr_computeRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computeRoutineGeneration) ;
    p->mProperty_mOwnerName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_computeRoutineGeneration::readProperty_mTransientName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_computeRoutineGeneration * p = (cPtr_computeRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computeRoutineGeneration) ;
    return p->mProperty_mTransientName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_computeRoutineGeneration::setProperty_mTransientName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_computeRoutineGeneration * p = (cPtr_computeRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computeRoutineGeneration) ;
    p->mProperty_mTransientName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_computeRoutineGeneration::readProperty_mTransientType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_typeKind () ;
  }else{
    cPtr_computeRoutineGeneration * p = (cPtr_computeRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computeRoutineGeneration) ;
    return p->mProperty_mTransientType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_computeRoutineGeneration::setProperty_mTransientType (const GGS_typeKind & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_computeRoutineGeneration * p = (cPtr_computeRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computeRoutineGeneration) ;
    p->mProperty_mTransientType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_transientDependencyListForGeneration GGS_computeRoutineGeneration::readProperty_mDependencyList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_transientDependencyListForGeneration () ;
  }else{
    cPtr_computeRoutineGeneration * p = (cPtr_computeRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computeRoutineGeneration) ;
    return p->mProperty_mDependencyList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_computeRoutineGeneration::setProperty_mDependencyList (const GGS_transientDependencyListForGeneration & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_computeRoutineGeneration * p = (cPtr_computeRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computeRoutineGeneration) ;
    p->mProperty_mDependencyList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @computeRoutineGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_computeRoutineGeneration::cPtr_computeRoutineGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (inCompiler COMMA_THERE),
mProperty_mOwnerName (),
mProperty_mTransientName (),
mProperty_mTransientType (),
mProperty_mDependencyList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_computeRoutineGeneration::cPtr_computeRoutineGeneration (const GGS_string & in_mOwnerName,
                                                              const GGS_string & in_mTransientName,
                                                              const GGS_typeKind & in_mTransientType,
                                                              const GGS_transientDependencyListForGeneration & in_mDependencyList,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (inCompiler COMMA_THERE),
mProperty_mOwnerName (),
mProperty_mTransientName (),
mProperty_mTransientType (),
mProperty_mDependencyList () {
  mProperty_mOwnerName = in_mOwnerName ;
  mProperty_mTransientName = in_mTransientName ;
  mProperty_mTransientType = in_mTransientType ;
  mProperty_mDependencyList = in_mDependencyList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_computeRoutineGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computeRoutineGeneration ;
}

void cPtr_computeRoutineGeneration::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@computeRoutineGeneration:") ;
  mProperty_mOwnerName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTransientName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTransientType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDependencyList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_computeRoutineGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_computeRoutineGeneration (mProperty_mOwnerName, mProperty_mTransientName, mProperty_mTransientType, mProperty_mDependencyList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_computeRoutineGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractFileGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mOwnerName.printNonNullClassInstanceProperties ("mOwnerName") ;
    mProperty_mTransientName.printNonNullClassInstanceProperties ("mTransientName") ;
    mProperty_mTransientType.printNonNullClassInstanceProperties ("mTransientType") ;
    mProperty_mDependencyList.printNonNullClassInstanceProperties ("mDependencyList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @computeRoutineGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_computeRoutineGeneration ("computeRoutineGeneration",
                                                                             & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_computeRoutineGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computeRoutineGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_computeRoutineGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_computeRoutineGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computeRoutineGeneration GGS_computeRoutineGeneration::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_computeRoutineGeneration result ;
  const GGS_computeRoutineGeneration * p = (const GGS_computeRoutineGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_computeRoutineGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computeRoutineGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_computeRoutineGeneration_2E_weak::objectCompare (const GGS_computeRoutineGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computeRoutineGeneration_2E_weak::GGS_computeRoutineGeneration_2E_weak (void) :
GGS_abstractFileGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_computeRoutineGeneration_2E_weak & GGS_computeRoutineGeneration_2E_weak::operator = (const GGS_computeRoutineGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_computeRoutineGeneration_2E_weak::GGS_computeRoutineGeneration_2E_weak (const GGS_computeRoutineGeneration & inSource) :
GGS_abstractFileGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_computeRoutineGeneration_2E_weak GGS_computeRoutineGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_computeRoutineGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computeRoutineGeneration GGS_computeRoutineGeneration_2E_weak::unwrappedValue (void) const {
  GGS_computeRoutineGeneration result ;
  if (isValid ()) {
    const cPtr_computeRoutineGeneration * p = (cPtr_computeRoutineGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_computeRoutineGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computeRoutineGeneration GGS_computeRoutineGeneration_2E_weak::bang_computeRoutineGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_computeRoutineGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_computeRoutineGeneration) ;
      result = GGS_computeRoutineGeneration ((cPtr_computeRoutineGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @computeRoutineGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_computeRoutineGeneration_2E_weak ("computeRoutineGeneration.weak",
                                                                                     & kTypeDescriptor_GALGAS_abstractFileGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_computeRoutineGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computeRoutineGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_computeRoutineGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_computeRoutineGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computeRoutineGeneration_2E_weak GGS_computeRoutineGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_computeRoutineGeneration_2E_weak result ;
  const GGS_computeRoutineGeneration_2E_weak * p = (const GGS_computeRoutineGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_computeRoutineGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computeRoutineGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_transientDeclarationAST_2E_weak::objectCompare (const GGS_transientDeclarationAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientDeclarationAST_2E_weak::GGS_transientDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_transientDeclarationAST_2E_weak & GGS_transientDeclarationAST_2E_weak::operator = (const GGS_transientDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientDeclarationAST_2E_weak::GGS_transientDeclarationAST_2E_weak (const GGS_transientDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_transientDeclarationAST_2E_weak GGS_transientDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_transientDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientDeclarationAST GGS_transientDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_transientDeclarationAST result ;
  if (isValid ()) {
    const cPtr_transientDeclarationAST * p = (cPtr_transientDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_transientDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientDeclarationAST GGS_transientDeclarationAST_2E_weak::bang_transientDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_transientDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_transientDeclarationAST) ;
      result = GGS_transientDeclarationAST ((cPtr_transientDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @transientDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_transientDeclarationAST_2E_weak ("transientDeclarationAST.weak",
                                                                                    & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_transientDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_transientDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_transientDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientDeclarationAST_2E_weak GGS_transientDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_transientDeclarationAST_2E_weak result ;
  const GGS_transientDeclarationAST_2E_weak * p = (const GGS_transientDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_transientDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @transientPropertyGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_transientPropertyGeneration::objectCompare (const GGS_transientPropertyGeneration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGeneration::GGS_transientPropertyGeneration (void) :
GGS_propertyGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_transientPropertyGeneration GGS_transientPropertyGeneration::
init_21__21__21__21__21_ (const GGS_string & in_mPropertyName,
                          const GGS_string & in_mClassName,
                          const GGS_typeKind & in_mType,
                          const GGS_transientDependencyListForGeneration & in_mDependencyList,
                          const GGS_bool & in_mGenerate,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_transientPropertyGeneration * object = nullptr ;
  macroMyNew (object, cPtr_transientPropertyGeneration (inCompiler COMMA_THERE)) ;
  object->transientPropertyGeneration_init_21__21__21__21__21_ (in_mPropertyName, in_mClassName, in_mType, in_mDependencyList, in_mGenerate, inCompiler) ;
  const GGS_transientPropertyGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_transientPropertyGeneration::
transientPropertyGeneration_init_21__21__21__21__21_ (const GGS_string & in_mPropertyName,
                                                      const GGS_string & in_mClassName,
                                                      const GGS_typeKind & in_mType,
                                                      const GGS_transientDependencyListForGeneration & in_mDependencyList,
                                                      const GGS_bool & in_mGenerate,
                                                      Compiler * /* inCompiler */) {
  mProperty_mPropertyName = in_mPropertyName ;
  mProperty_mClassName = in_mClassName ;
  mProperty_mType = in_mType ;
  mProperty_mDependencyList = in_mDependencyList ;
  mProperty_mGenerate = in_mGenerate ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGeneration::GGS_transientPropertyGeneration (const cPtr_transientPropertyGeneration * inSourcePtr) :
GGS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_transientPropertyGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGeneration GGS_transientPropertyGeneration::class_func_new (const GGS_string & in_mPropertyName,
                                                                                 const GGS_string & in_mClassName,
                                                                                 const GGS_typeKind & in_mType,
                                                                                 const GGS_transientDependencyListForGeneration & in_mDependencyList,
                                                                                 const GGS_bool & in_mGenerate,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  GGS_transientPropertyGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_transientPropertyGeneration (in_mPropertyName, in_mClassName, in_mType, in_mDependencyList, in_mGenerate,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_transientPropertyGeneration::readProperty_mClassName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_transientPropertyGeneration * p = (cPtr_transientPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
    return p->mProperty_mClassName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientPropertyGeneration::setProperty_mClassName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_transientPropertyGeneration * p = (cPtr_transientPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
    p->mProperty_mClassName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_transientPropertyGeneration::readProperty_mType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_typeKind () ;
  }else{
    cPtr_transientPropertyGeneration * p = (cPtr_transientPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
    return p->mProperty_mType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientPropertyGeneration::setProperty_mType (const GGS_typeKind & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_transientPropertyGeneration * p = (cPtr_transientPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
    p->mProperty_mType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_transientDependencyListForGeneration GGS_transientPropertyGeneration::readProperty_mDependencyList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_transientDependencyListForGeneration () ;
  }else{
    cPtr_transientPropertyGeneration * p = (cPtr_transientPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
    return p->mProperty_mDependencyList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientPropertyGeneration::setProperty_mDependencyList (const GGS_transientDependencyListForGeneration & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_transientPropertyGeneration * p = (cPtr_transientPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
    p->mProperty_mDependencyList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_transientPropertyGeneration::readProperty_mGenerate (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_transientPropertyGeneration * p = (cPtr_transientPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
    return p->mProperty_mGenerate ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientPropertyGeneration::setProperty_mGenerate (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_transientPropertyGeneration * p = (cPtr_transientPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
    p->mProperty_mGenerate = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @transientPropertyGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_transientPropertyGeneration::cPtr_transientPropertyGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (inCompiler COMMA_THERE),
mProperty_mClassName (),
mProperty_mType (),
mProperty_mDependencyList (),
mProperty_mGenerate () {
}

//--------------------------------------------------------------------------------------------------

cPtr_transientPropertyGeneration::cPtr_transientPropertyGeneration (const GGS_string & in_mPropertyName,
                                                                    const GGS_string & in_mClassName,
                                                                    const GGS_typeKind & in_mType,
                                                                    const GGS_transientDependencyListForGeneration & in_mDependencyList,
                                                                    const GGS_bool & in_mGenerate,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (in_mPropertyName, inCompiler COMMA_THERE),
mProperty_mClassName (),
mProperty_mType (),
mProperty_mDependencyList (),
mProperty_mGenerate () {
  mProperty_mPropertyName = in_mPropertyName ;
  mProperty_mClassName = in_mClassName ;
  mProperty_mType = in_mType ;
  mProperty_mDependencyList = in_mDependencyList ;
  mProperty_mGenerate = in_mGenerate ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_transientPropertyGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientPropertyGeneration ;
}

void cPtr_transientPropertyGeneration::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@transientPropertyGeneration:") ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDependencyList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGenerate.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_transientPropertyGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_transientPropertyGeneration (mProperty_mPropertyName, mProperty_mClassName, mProperty_mType, mProperty_mDependencyList, mProperty_mGenerate, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_transientPropertyGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_propertyGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mClassName.printNonNullClassInstanceProperties ("mClassName") ;
    mProperty_mType.printNonNullClassInstanceProperties ("mType") ;
    mProperty_mDependencyList.printNonNullClassInstanceProperties ("mDependencyList") ;
    mProperty_mGenerate.printNonNullClassInstanceProperties ("mGenerate") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @transientPropertyGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_transientPropertyGeneration ("transientPropertyGeneration",
                                                                                & kTypeDescriptor_GALGAS_propertyGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_transientPropertyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientPropertyGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_transientPropertyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_transientPropertyGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGeneration GGS_transientPropertyGeneration::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_transientPropertyGeneration result ;
  const GGS_transientPropertyGeneration * p = (const GGS_transientPropertyGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_transientPropertyGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientPropertyGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_transientPropertyGeneration_2E_weak::objectCompare (const GGS_transientPropertyGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGeneration_2E_weak::GGS_transientPropertyGeneration_2E_weak (void) :
GGS_propertyGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGeneration_2E_weak & GGS_transientPropertyGeneration_2E_weak::operator = (const GGS_transientPropertyGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGeneration_2E_weak::GGS_transientPropertyGeneration_2E_weak (const GGS_transientPropertyGeneration & inSource) :
GGS_propertyGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGeneration_2E_weak GGS_transientPropertyGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_transientPropertyGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGeneration GGS_transientPropertyGeneration_2E_weak::unwrappedValue (void) const {
  GGS_transientPropertyGeneration result ;
  if (isValid ()) {
    const cPtr_transientPropertyGeneration * p = (cPtr_transientPropertyGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_transientPropertyGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGeneration GGS_transientPropertyGeneration_2E_weak::bang_transientPropertyGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_transientPropertyGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_transientPropertyGeneration) ;
      result = GGS_transientPropertyGeneration ((cPtr_transientPropertyGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @transientPropertyGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_transientPropertyGeneration_2E_weak ("transientPropertyGeneration.weak",
                                                                                        & kTypeDescriptor_GALGAS_propertyGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_transientPropertyGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientPropertyGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_transientPropertyGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_transientPropertyGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGeneration_2E_weak GGS_transientPropertyGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_transientPropertyGeneration_2E_weak result ;
  const GGS_transientPropertyGeneration_2E_weak * p = (const GGS_transientPropertyGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_transientPropertyGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientPropertyGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@transientPropertyGenerationList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_transientPropertyGenerationList : public cCollectionElement {
  public: GGS_transientPropertyGenerationList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_transientPropertyGenerationList (const GGS_transientPropertyGeneration & in_mProperty
                                                              COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_transientPropertyGenerationList (const GGS_transientPropertyGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_transientPropertyGenerationList::cCollectionElement_transientPropertyGenerationList (const GGS_transientPropertyGeneration & in_mProperty
                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mProperty) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_transientPropertyGenerationList::cCollectionElement_transientPropertyGenerationList (const GGS_transientPropertyGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mProperty) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_transientPropertyGenerationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_transientPropertyGenerationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_transientPropertyGenerationList (mObject.mProperty_mProperty COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @transientPropertyGenerationList
//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGenerationList::GGS_transientPropertyGenerationList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGenerationList::GGS_transientPropertyGenerationList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_transientPropertyGenerationList * p = (cCollectionElement_transientPropertyGenerationList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_transientPropertyGenerationList) ;
    const GGS_transientPropertyGenerationList_2E_element element (p->mObject.mProperty_mProperty) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientPropertyGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                     const GGS_transientPropertyGeneration & in_mProperty
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_transientPropertyGenerationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_transientPropertyGenerationList (in_mProperty COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_transientPropertyGenerationList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_transientPropertyGenerationList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientPropertyGenerationList::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mProperty:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mProperty.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGenerationList GGS_transientPropertyGenerationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_transientPropertyGenerationList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGenerationList GGS_transientPropertyGenerationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_transientPropertyGenerationList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientPropertyGenerationList::plusPlusAssignOperation (const GGS_transientPropertyGenerationList_2E_element & inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGenerationList GGS_transientPropertyGenerationList::class_func_listWithValue (const GGS_transientPropertyGeneration & inOperand0
                                                                                                   COMMA_LOCATION_ARGS) {
  const GGS_transientPropertyGenerationList_2E_element element (inOperand0) ;
  GGS_transientPropertyGenerationList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientPropertyGenerationList::addAssignOperation (const GGS_transientPropertyGeneration & inOperand0
                                                              COMMA_LOCATION_ARGS) {
  const GGS_transientPropertyGenerationList_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientPropertyGenerationList::setter_append (const GGS_transientPropertyGeneration inOperand0,
                                                         Compiler * /* inCompiler */
                                                         COMMA_LOCATION_ARGS) {
  const GGS_transientPropertyGenerationList_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientPropertyGenerationList::setter_insertAtIndex (const GGS_transientPropertyGeneration inOperand0,
                                                                const GGS_uint inInsertionIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  const GGS_transientPropertyGenerationList_2E_element newElement (inOperand0) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientPropertyGenerationList::setter_removeAtIndex (GGS_transientPropertyGeneration & outOperand0,
                                                                const GGS_uint inRemoveIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mProperty ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientPropertyGenerationList::setter_popFirst (GGS_transientPropertyGeneration & outOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mProperty ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientPropertyGenerationList::setter_popLast (GGS_transientPropertyGeneration & outOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mProperty ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientPropertyGenerationList::method_first (GGS_transientPropertyGeneration & outOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mProperty ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientPropertyGenerationList::method_last (GGS_transientPropertyGeneration & outOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mProperty ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGenerationList GGS_transientPropertyGenerationList::add_operation (const GGS_transientPropertyGenerationList & inOperand,
                                                                                        Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_transientPropertyGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGenerationList GGS_transientPropertyGenerationList::subList (const int32_t inStart,
                                                                                  const int32_t inLength,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_transientPropertyGenerationList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGenerationList GGS_transientPropertyGenerationList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_transientPropertyGenerationList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGenerationList GGS_transientPropertyGenerationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_transientPropertyGenerationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGenerationList GGS_transientPropertyGenerationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_transientPropertyGenerationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientPropertyGenerationList::plusAssignOperation (const GGS_transientPropertyGenerationList inList,
                                                               Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientPropertyGenerationList::setter_setMPropertyAtIndex (GGS_transientPropertyGeneration inOperand,
                                                                      GGS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mProperty = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_transientPropertyGeneration GGS_transientPropertyGenerationList::getter_mPropertyAtIndex (const GGS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_transientPropertyGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mProperty ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @transientPropertyGenerationList
//--------------------------------------------------------------------------------------------------

DownEnumerator_transientPropertyGenerationList::DownEnumerator_transientPropertyGenerationList (const GGS_transientPropertyGenerationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGenerationList_2E_element DownEnumerator_transientPropertyGenerationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGeneration DownEnumerator_transientPropertyGenerationList::current_mProperty (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProperty ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @transientPropertyGenerationList
//--------------------------------------------------------------------------------------------------

UpEnumerator_transientPropertyGenerationList::UpEnumerator_transientPropertyGenerationList (const GGS_transientPropertyGenerationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGenerationList_2E_element UpEnumerator_transientPropertyGenerationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGeneration UpEnumerator_transientPropertyGenerationList::current_mProperty (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProperty ;
}




//--------------------------------------------------------------------------------------------------
//     @transientPropertyGenerationList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_transientPropertyGenerationList ("transientPropertyGenerationList",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_transientPropertyGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientPropertyGenerationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_transientPropertyGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_transientPropertyGenerationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGenerationList GGS_transientPropertyGenerationList::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_transientPropertyGenerationList result ;
  const GGS_transientPropertyGenerationList * p = (const GGS_transientPropertyGenerationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_transientPropertyGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientPropertyGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@transientDependencyListForGeneration transientComputeFunctionCall'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_transientComputeFunctionCall (const GGS_transientDependencyListForGeneration & inObject,
                                                         const GGS_bool & constinArgument_inPreferences,
                                                         const GGS_string & constinArgument_inOwnerName,
                                                         const GGS_string & constinArgument_inTransientName,
                                                         const GGS_string & constinArgument_inFunctionNamePrefix,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  GGS_string temp_0 ;
  const GalgasBool test_1 = constinArgument_inPreferences.boolEnum () ;
  if (GalgasBool::boolTrue == test_1) {
    temp_0 = GGS_string ("preferences_") ;
  }else if (GalgasBool::boolFalse == test_1) {
    temp_0 = GGS_string ("unwSelf.") ;
  }
  GGS_string var_uwself_18669 = temp_0 ;
  result_result = GGS_string::makeEmptyString () ;
  GGS_string var_ident_18759 = GGS_string ("        ") ;
  const GGS_transientDependencyListForGeneration temp_2 = inObject ;
  UpEnumerator_transientDependencyListForGeneration enumerator_18817 (temp_2) ;
  GGS_uint index_18782 (uint32_t (0)) ;
  while (enumerator_18817.hasCurrentObject ()) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::notEqual, enumerator_18817.current_mDefaultValueAsString (HERE).objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        result_result.plusAssignOperation(var_ident_18759.add_operation (GGS_string ("var s"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 424)).add_operation (index_18782.getter_string (SOURCE_FILE ("transient-property.ggs", 424)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 424)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 424)).add_operation (extensionGetter_modelStringForSelf (enumerator_18817.current_mDependency (HERE), var_uwself_18669, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 424)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 424)).add_operation (GGS_string (".selection"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 424)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 424)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 424)) ;
        result_result.plusAssignOperation(var_ident_18759.add_operation (GGS_string ("switch s"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 425)).add_operation (index_18782.getter_string (SOURCE_FILE ("transient-property.ggs", 425)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 425)).add_operation (GGS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 425)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 425)) ;
        result_result.plusAssignOperation(var_ident_18759.add_operation (GGS_string ("case .single :\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 426)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 426)) ;
        result_result.plusAssignOperation(var_ident_18759.add_operation (GGS_string ("  ()\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 427)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 427)) ;
        result_result.plusAssignOperation(var_ident_18759.add_operation (GGS_string ("case .empty, .multiple :\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 428)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 428)) ;
        result_result.plusAssignOperation(var_ident_18759.add_operation (GGS_string ("  s"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 429)).add_operation (index_18782.getter_string (SOURCE_FILE ("transient-property.ggs", 429)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 429)).add_operation (GGS_string (" = .single ("), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 429)).add_operation (enumerator_18817.current_mDefaultValueAsString (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 429)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 429)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 429)) ;
        result_result.plusAssignOperation(var_ident_18759.add_operation (GGS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 430)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 430)) ;
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      result_result.plusAssignOperation(var_ident_18759.add_operation (GGS_string ("let s"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 432)).add_operation (index_18782.getter_string (SOURCE_FILE ("transient-property.ggs", 432)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 432)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 432)).add_operation (extensionGetter_modelStringForSelf (enumerator_18817.current_mDependency (HERE), var_uwself_18669, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 432)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 432)).add_operation (GGS_string (".selection"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 432)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 432)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 432)) ;
    }
    enumerator_18817.gotoNextObject () ;
    index_18782.increment_operation (inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 422)) ;
  }
  result_result.plusAssignOperation(var_ident_18759.add_operation (GGS_string ("switch ("), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 435)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 435)) ;
  const GGS_transientDependencyListForGeneration temp_4 = inObject ;
  UpEnumerator_transientDependencyListForGeneration enumerator_19461 (temp_4) ;
  GGS_uint index_19455 (uint32_t (0)) ;
  while (enumerator_19461.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string ("s").add_operation (index_19455.getter_string (SOURCE_FILE ("transient-property.ggs", 438)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 438)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 438)) ;
    enumerator_19461.gotoNextObject () ;
    if (enumerator_19461.hasCurrentObject ()) {
      result_result.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 440)) ;
    }
    index_19455.increment_operation (inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 436)) ;
  }
  result_result.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 442)) ;
  result_result.plusAssignOperation(var_ident_18759.add_operation (GGS_string ("case ("), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 443)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 443)) ;
  const GGS_transientDependencyListForGeneration temp_5 = inObject ;
  UpEnumerator_transientDependencyListForGeneration enumerator_19615 (temp_5) ;
  GGS_uint index_19609 (uint32_t (0)) ;
  while (enumerator_19615.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string (".single (let v").add_operation (index_19609.getter_string (SOURCE_FILE ("transient-property.ggs", 446)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 446)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 446)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 446)) ;
    enumerator_19615.gotoNextObject () ;
    if (enumerator_19615.hasCurrentObject ()) {
      result_result.plusAssignOperation(GGS_string (",\n              "), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 448)) ;
    }
    index_19609.increment_operation (inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 444)) ;
  }
  result_result.plusAssignOperation(GGS_string (") :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 450)) ;
  result_result.plusAssignOperation(var_ident_18759.add_operation (GGS_string ("  return .single ("), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 451)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 451)) ;
  result_result.plusAssignOperation(constinArgument_inFunctionNamePrefix.add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 452)).add_operation (constinArgument_inOwnerName, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 452)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 452)).add_operation (constinArgument_inTransientName, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 452)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 452)) ;
  result_result.plusAssignOperation(GGS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 453)) ;
  const GGS_transientDependencyListForGeneration temp_6 = inObject ;
  UpEnumerator_transientDependencyListForGeneration enumerator_19913 (temp_6) ;
  GGS_uint index_19907 (uint32_t (0)) ;
  while (enumerator_19913.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string ("v").add_operation (index_19907.getter_string (SOURCE_FILE ("transient-property.ggs", 456)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 456)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 456)) ;
    enumerator_19913.gotoNextObject () ;
    if (enumerator_19913.hasCurrentObject ()) {
      result_result.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 458)) ;
    }
    index_19907.increment_operation (inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 454)) ;
  }
  result_result.plusAssignOperation(GGS_string ("))\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 460)) ;
  result_result.plusAssignOperation(var_ident_18759.add_operation (GGS_string ("case ("), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 461)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 461)) ;
  const GGS_transientDependencyListForGeneration temp_7 = inObject ;
  UpEnumerator_transientDependencyListForGeneration enumerator_20066 (temp_7) ;
  while (enumerator_20066.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string (".multiple"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 464)) ;
    enumerator_20066.gotoNextObject () ;
    if (enumerator_20066.hasCurrentObject ()) {
      result_result.plusAssignOperation(GGS_string (",\n              "), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 466)) ;
    }
  }
  result_result.plusAssignOperation(GGS_string (") :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 468)) ;
  result_result.plusAssignOperation(var_ident_18759.add_operation (GGS_string ("  return .multiple\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 469)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 469)) ;
  result_result.plusAssignOperation(var_ident_18759.add_operation (GGS_string ("default :\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 470)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 470)) ;
  result_result.plusAssignOperation(var_ident_18759.add_operation (GGS_string ("  return .empty\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 471)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 471)) ;
  result_result.plusAssignOperation(var_ident_18759.add_operation (GGS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 472)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 472)) ;
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@transientDependencyListForGeneration needs_unwSelf'
//--------------------------------------------------------------------------------------------------

GGS_bool extensionGetter_needs_5F_unwSelf (const GGS_transientDependencyListForGeneration & inObject,
                                           const GGS_bool & constinArgument_inPreferences,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
  const GGS_transientDependencyListForGeneration temp_0 = inObject ;
  UpEnumerator_transientDependencyListForGeneration enumerator_20534 (temp_0) ;
  bool bool_1 = result_result.operator_not (SOURCE_FILE ("transient-property.ggs", 479)).isValidAndTrue () ;
  if (enumerator_20534.hasCurrentObject () && bool_1) {
    while (enumerator_20534.hasCurrentObject () && bool_1) {
      result_result = extensionGetter_needs_5F_unwSelf (enumerator_20534.current_mDependency (HERE), constinArgument_inPreferences, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 480)) ;
      enumerator_20534.gotoNextObject () ;
      if (enumerator_20534.hasCurrentObject ()) {
        bool_1 = result_result.operator_not (SOURCE_FILE ("transient-property.ggs", 479)).isValidAndTrue () ;
      }
    }
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Enum observablePropertyAST
//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST::GGS_observablePropertyAST (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_rootProperty (const GGS_lstring & inAssociatedValue0
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_rootProperty ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_rootProperty (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_rootPropertyWithOption (const GGS_lstring & inAssociatedValue0,
                                                                                        const GGS_lstring & inAssociatedValue1
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_rootPropertyWithOption ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_rootPropertyWithOption (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_rootPropertyRelationship (const GGS_lstring & inAssociatedValue0,
                                                                                          const GGS_lstring & inAssociatedValue1
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_rootPropertyRelationship ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_rootPropertyRelationship (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_rootPropertyNone (const GGS_lstring & inAssociatedValue0
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_rootPropertyNone ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_rootPropertyNone (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_selfWithoutProperty (const GGS_location & inAssociatedValue0
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_selfWithoutProperty ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_selfWithoutProperty (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_selfProperty (const GGS_lstring & inAssociatedValue0
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_selfProperty ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_selfProperty (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_selfPropertyWithOption (const GGS_lstring & inAssociatedValue0,
                                                                                        const GGS_lstring & inAssociatedValue1
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_selfPropertyWithOption ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_selfPropertyWithOption (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_selfPropertyArray (const GGS_lstring & inAssociatedValue0,
                                                                                   const GGS_lstring & inAssociatedValue1
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_selfPropertyArray ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_selfPropertyArray (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_selfPropertyObject (const GGS_lstring & inAssociatedValue0,
                                                                                    const GGS_lstring & inAssociatedValue1
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_selfPropertyObject ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_selfPropertyObject (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_selfPropertyNone (const GGS_lstring & inAssociatedValue0
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_selfPropertyNone ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_selfPropertyNone (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_prefsProperty (const GGS_lstring & inAssociatedValue0
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_prefsProperty ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_prefsProperty (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_prefsPropertyWithOption (const GGS_lstring & inAssociatedValue0,
                                                                                         const GGS_lstring & inAssociatedValue1
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_prefsPropertyWithOption ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_prefsPropertyWithOption (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_selfControllerProperty (const GGS_lstring & inAssociatedValue0,
                                                                                        const GGS_lstring & inAssociatedValue1
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_selfControllerProperty ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_selfControllerProperty (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_selfControllerSecondaryProperty (const GGS_lstring & inAssociatedValue0,
                                                                                                 const GGS_lstring & inAssociatedValue1,
                                                                                                 const GGS_lstring & inAssociatedValue2
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_selfControllerSecondaryProperty ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_selfControllerSecondaryProperty (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_selfControllerAllProperties (const GGS_lstring & inAssociatedValue0,
                                                                                             const GGS_lstring & inAssociatedValue1,
                                                                                             const GGS_lstring & inAssociatedValue2
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_selfControllerAllProperties ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_selfControllerAllProperties (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_selfControllerOneProperty (const GGS_lstring & inAssociatedValue0,
                                                                                           const GGS_lstring & inAssociatedValue1
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_selfControllerOneProperty ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_selfControllerOneProperty (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_signatureProperty (const GGS_location & inAssociatedValue0
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_signatureProperty ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_signatureProperty (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_versionProperty (const GGS_location & inAssociatedValue0
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_versionProperty ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_versionProperty (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_versionShouldChangeProperty (const GGS_location & inAssociatedValue0
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_versionShouldChangeProperty ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_versionShouldChangeProperty (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_superProperty (const GGS_lstring & inAssociatedValue0,
                                                                               const GGS_lstring & inAssociatedValue1
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_superProperty ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_superProperty (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_superPropertyWithDefaultValue (const GGS_lstring & inAssociatedValue0,
                                                                                               const GGS_lstring & inAssociatedValue1,
                                                                                               const GGS_abstractDefaultValue & inAssociatedValue2
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_superPropertyWithDefaultValue ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_superPropertyWithDefaultValue (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractRootProperty (GGS_lstring & outAssociatedValue_propertyName,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_rootProperty) {
    outAssociatedValue_propertyName.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.rootProperty invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_rootProperty *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_propertyName = ptr->mProperty_propertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractRootPropertyWithOption (GGS_lstring & outAssociatedValue_propertyName,
                                                                      GGS_lstring & outAssociatedValue_optionName,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_rootPropertyWithOption) {
    outAssociatedValue_propertyName.drop () ;
    outAssociatedValue_optionName.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.rootPropertyWithOption invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_rootPropertyWithOption *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_propertyName = ptr->mProperty_propertyName ;
    outAssociatedValue_optionName = ptr->mProperty_optionName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractRootPropertyRelationship (GGS_lstring & outAssociatedValue_relationshipName,
                                                                        GGS_lstring & outAssociatedValue_propertyName,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_rootPropertyRelationship) {
    outAssociatedValue_relationshipName.drop () ;
    outAssociatedValue_propertyName.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.rootPropertyRelationship invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_rootPropertyRelationship *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_relationshipName = ptr->mProperty_relationshipName ;
    outAssociatedValue_propertyName = ptr->mProperty_propertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractRootPropertyNone (GGS_lstring & outAssociatedValue_relationshipName,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_rootPropertyNone) {
    outAssociatedValue_relationshipName.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.rootPropertyNone invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_rootPropertyNone *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_relationshipName = ptr->mProperty_relationshipName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractSelfWithoutProperty (GGS_location & outAssociatedValue_issueLocation,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_selfWithoutProperty) {
    outAssociatedValue_issueLocation.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.selfWithoutProperty invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_selfWithoutProperty *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_issueLocation = ptr->mProperty_issueLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractSelfProperty (GGS_lstring & outAssociatedValue_propertyName,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_selfProperty) {
    outAssociatedValue_propertyName.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.selfProperty invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_selfProperty *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_propertyName = ptr->mProperty_propertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractSelfPropertyWithOption (GGS_lstring & outAssociatedValue_propertyName,
                                                                      GGS_lstring & outAssociatedValue_optionName,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_selfPropertyWithOption) {
    outAssociatedValue_propertyName.drop () ;
    outAssociatedValue_optionName.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.selfPropertyWithOption invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_selfPropertyWithOption *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_propertyName = ptr->mProperty_propertyName ;
    outAssociatedValue_optionName = ptr->mProperty_optionName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractSelfPropertyArray (GGS_lstring & outAssociatedValue_propertyName,
                                                                 GGS_lstring & outAssociatedValue_elementPropertyName,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_selfPropertyArray) {
    outAssociatedValue_propertyName.drop () ;
    outAssociatedValue_elementPropertyName.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.selfPropertyArray invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_selfPropertyArray *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_propertyName = ptr->mProperty_propertyName ;
    outAssociatedValue_elementPropertyName = ptr->mProperty_elementPropertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractSelfPropertyObject (GGS_lstring & outAssociatedValue_propertyName,
                                                                  GGS_lstring & outAssociatedValue_elementPropertyName,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_selfPropertyObject) {
    outAssociatedValue_propertyName.drop () ;
    outAssociatedValue_elementPropertyName.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.selfPropertyObject invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_selfPropertyObject *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_propertyName = ptr->mProperty_propertyName ;
    outAssociatedValue_elementPropertyName = ptr->mProperty_elementPropertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractSelfPropertyNone (GGS_lstring & outAssociatedValue_propertyName,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_selfPropertyNone) {
    outAssociatedValue_propertyName.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.selfPropertyNone invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_selfPropertyNone *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_propertyName = ptr->mProperty_propertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractPrefsProperty (GGS_lstring & outAssociatedValue_propertyName,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_prefsProperty) {
    outAssociatedValue_propertyName.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.prefsProperty invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_prefsProperty *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_propertyName = ptr->mProperty_propertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractPrefsPropertyWithOption (GGS_lstring & outAssociatedValue_propertyName,
                                                                       GGS_lstring & outAssociatedValue_optionName,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_prefsPropertyWithOption) {
    outAssociatedValue_propertyName.drop () ;
    outAssociatedValue_optionName.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.prefsPropertyWithOption invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_prefsPropertyWithOption *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_propertyName = ptr->mProperty_propertyName ;
    outAssociatedValue_optionName = ptr->mProperty_optionName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractSelfControllerProperty (GGS_lstring & outAssociatedValue_controllerName,
                                                                      GGS_lstring & outAssociatedValue_propertyName,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_selfControllerProperty) {
    outAssociatedValue_controllerName.drop () ;
    outAssociatedValue_propertyName.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.selfControllerProperty invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_selfControllerProperty *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_controllerName = ptr->mProperty_controllerName ;
    outAssociatedValue_propertyName = ptr->mProperty_propertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractSelfControllerSecondaryProperty (GGS_lstring & outAssociatedValue_controllerName,
                                                                               GGS_lstring & outAssociatedValue_propertyName,
                                                                               GGS_lstring & outAssociatedValue_secondaryPropertyName,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_selfControllerSecondaryProperty) {
    outAssociatedValue_controllerName.drop () ;
    outAssociatedValue_propertyName.drop () ;
    outAssociatedValue_secondaryPropertyName.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.selfControllerSecondaryProperty invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_selfControllerSecondaryProperty *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_controllerName = ptr->mProperty_controllerName ;
    outAssociatedValue_propertyName = ptr->mProperty_propertyName ;
    outAssociatedValue_secondaryPropertyName = ptr->mProperty_secondaryPropertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractSelfControllerAllProperties (GGS_lstring & outAssociatedValue_controllerName,
                                                                           GGS_lstring & outAssociatedValue_propertyName,
                                                                           GGS_lstring & outAssociatedValue_secondaryPropertyName,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_selfControllerAllProperties) {
    outAssociatedValue_controllerName.drop () ;
    outAssociatedValue_propertyName.drop () ;
    outAssociatedValue_secondaryPropertyName.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.selfControllerAllProperties invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_selfControllerAllProperties *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_controllerName = ptr->mProperty_controllerName ;
    outAssociatedValue_propertyName = ptr->mProperty_propertyName ;
    outAssociatedValue_secondaryPropertyName = ptr->mProperty_secondaryPropertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractSelfControllerOneProperty (GGS_lstring & outAssociatedValue_controllerName,
                                                                         GGS_lstring & outAssociatedValue_propertyName,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_selfControllerOneProperty) {
    outAssociatedValue_controllerName.drop () ;
    outAssociatedValue_propertyName.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.selfControllerOneProperty invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_selfControllerOneProperty *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_controllerName = ptr->mProperty_controllerName ;
    outAssociatedValue_propertyName = ptr->mProperty_propertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractSignatureProperty (GGS_location & outAssociatedValue_location,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_signatureProperty) {
    outAssociatedValue_location.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.signatureProperty invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_signatureProperty *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_location = ptr->mProperty_location ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractVersionProperty (GGS_location & outAssociatedValue_location,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_versionProperty) {
    outAssociatedValue_location.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.versionProperty invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_versionProperty *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_location = ptr->mProperty_location ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractVersionShouldChangeProperty (GGS_location & outAssociatedValue_location,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_versionShouldChangeProperty) {
    outAssociatedValue_location.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.versionShouldChangeProperty invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_versionShouldChangeProperty *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_location = ptr->mProperty_location ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractSuperProperty (GGS_lstring & outAssociatedValue_superEntityName,
                                                             GGS_lstring & outAssociatedValue_propertyName,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_superProperty) {
    outAssociatedValue_superEntityName.drop () ;
    outAssociatedValue_propertyName.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.superProperty invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_superProperty *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_superEntityName = ptr->mProperty_superEntityName ;
    outAssociatedValue_propertyName = ptr->mProperty_propertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractSuperPropertyWithDefaultValue (GGS_lstring & outAssociatedValue_superEntityName,
                                                                             GGS_lstring & outAssociatedValue_propertyName,
                                                                             GGS_abstractDefaultValue & outAssociatedValue_defaultValue,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_superPropertyWithDefaultValue) {
    outAssociatedValue_superEntityName.drop () ;
    outAssociatedValue_propertyName.drop () ;
    outAssociatedValue_defaultValue.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.superPropertyWithDefaultValue invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_superPropertyWithDefaultValue *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_superEntityName = ptr->mProperty_superEntityName ;
    outAssociatedValue_propertyName = ptr->mProperty_propertyName ;
    outAssociatedValue_defaultValue = ptr->mProperty_defaultValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_rootProperty_3F_ GGS_observablePropertyAST::getter_getRootProperty (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_rootProperty_3F_ result ;
  if (mEnum == Enumeration::enum_rootProperty) {
    const auto ptr = (const GGS_observablePropertyAST_2E_rootProperty *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_rootProperty (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_rootProperty (GGS_lstring & out_propertyName) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_rootProperty *) mAssociatedValues.associatedValuesPointer () ;
  out_propertyName = ptr->mProperty_propertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_rootPropertyWithOption_3F_ GGS_observablePropertyAST::getter_getRootPropertyWithOption (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_rootPropertyWithOption_3F_ result ;
  if (mEnum == Enumeration::enum_rootPropertyWithOption) {
    const auto ptr = (const GGS_observablePropertyAST_2E_rootPropertyWithOption *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_rootPropertyWithOption (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_rootPropertyWithOption (GGS_lstring & out_propertyName,
                                                                               GGS_lstring & out_optionName) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_rootPropertyWithOption *) mAssociatedValues.associatedValuesPointer () ;
  out_propertyName = ptr->mProperty_propertyName ;
  out_optionName = ptr->mProperty_optionName ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_rootPropertyRelationship_3F_ GGS_observablePropertyAST::getter_getRootPropertyRelationship (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_rootPropertyRelationship_3F_ result ;
  if (mEnum == Enumeration::enum_rootPropertyRelationship) {
    const auto ptr = (const GGS_observablePropertyAST_2E_rootPropertyRelationship *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_rootPropertyRelationship (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_rootPropertyRelationship (GGS_lstring & out_relationshipName,
                                                                                 GGS_lstring & out_propertyName) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_rootPropertyRelationship *) mAssociatedValues.associatedValuesPointer () ;
  out_relationshipName = ptr->mProperty_relationshipName ;
  out_propertyName = ptr->mProperty_propertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_rootPropertyNone_3F_ GGS_observablePropertyAST::getter_getRootPropertyNone (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_rootPropertyNone_3F_ result ;
  if (mEnum == Enumeration::enum_rootPropertyNone) {
    const auto ptr = (const GGS_observablePropertyAST_2E_rootPropertyNone *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_rootPropertyNone (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_rootPropertyNone (GGS_lstring & out_relationshipName) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_rootPropertyNone *) mAssociatedValues.associatedValuesPointer () ;
  out_relationshipName = ptr->mProperty_relationshipName ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfWithoutProperty_3F_ GGS_observablePropertyAST::getter_getSelfWithoutProperty (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_selfWithoutProperty_3F_ result ;
  if (mEnum == Enumeration::enum_selfWithoutProperty) {
    const auto ptr = (const GGS_observablePropertyAST_2E_selfWithoutProperty *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_selfWithoutProperty (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_selfWithoutProperty (GGS_location & out_issueLocation) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_selfWithoutProperty *) mAssociatedValues.associatedValuesPointer () ;
  out_issueLocation = ptr->mProperty_issueLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfProperty_3F_ GGS_observablePropertyAST::getter_getSelfProperty (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_selfProperty_3F_ result ;
  if (mEnum == Enumeration::enum_selfProperty) {
    const auto ptr = (const GGS_observablePropertyAST_2E_selfProperty *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_selfProperty (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_selfProperty (GGS_lstring & out_propertyName) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_selfProperty *) mAssociatedValues.associatedValuesPointer () ;
  out_propertyName = ptr->mProperty_propertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfPropertyWithOption_3F_ GGS_observablePropertyAST::getter_getSelfPropertyWithOption (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_selfPropertyWithOption_3F_ result ;
  if (mEnum == Enumeration::enum_selfPropertyWithOption) {
    const auto ptr = (const GGS_observablePropertyAST_2E_selfPropertyWithOption *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_selfPropertyWithOption (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_selfPropertyWithOption (GGS_lstring & out_propertyName,
                                                                               GGS_lstring & out_optionName) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_selfPropertyWithOption *) mAssociatedValues.associatedValuesPointer () ;
  out_propertyName = ptr->mProperty_propertyName ;
  out_optionName = ptr->mProperty_optionName ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfPropertyArray_3F_ GGS_observablePropertyAST::getter_getSelfPropertyArray (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_selfPropertyArray_3F_ result ;
  if (mEnum == Enumeration::enum_selfPropertyArray) {
    const auto ptr = (const GGS_observablePropertyAST_2E_selfPropertyArray *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_selfPropertyArray (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_selfPropertyArray (GGS_lstring & out_propertyName,
                                                                          GGS_lstring & out_elementPropertyName) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_selfPropertyArray *) mAssociatedValues.associatedValuesPointer () ;
  out_propertyName = ptr->mProperty_propertyName ;
  out_elementPropertyName = ptr->mProperty_elementPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfPropertyObject_3F_ GGS_observablePropertyAST::getter_getSelfPropertyObject (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_selfPropertyObject_3F_ result ;
  if (mEnum == Enumeration::enum_selfPropertyObject) {
    const auto ptr = (const GGS_observablePropertyAST_2E_selfPropertyObject *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_selfPropertyObject (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_selfPropertyObject (GGS_lstring & out_propertyName,
                                                                           GGS_lstring & out_elementPropertyName) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_selfPropertyObject *) mAssociatedValues.associatedValuesPointer () ;
  out_propertyName = ptr->mProperty_propertyName ;
  out_elementPropertyName = ptr->mProperty_elementPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfPropertyNone_3F_ GGS_observablePropertyAST::getter_getSelfPropertyNone (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_selfPropertyNone_3F_ result ;
  if (mEnum == Enumeration::enum_selfPropertyNone) {
    const auto ptr = (const GGS_observablePropertyAST_2E_selfPropertyNone *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_selfPropertyNone (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_selfPropertyNone (GGS_lstring & out_propertyName) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_selfPropertyNone *) mAssociatedValues.associatedValuesPointer () ;
  out_propertyName = ptr->mProperty_propertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_prefsProperty_3F_ GGS_observablePropertyAST::getter_getPrefsProperty (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_prefsProperty_3F_ result ;
  if (mEnum == Enumeration::enum_prefsProperty) {
    const auto ptr = (const GGS_observablePropertyAST_2E_prefsProperty *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_prefsProperty (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_prefsProperty (GGS_lstring & out_propertyName) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_prefsProperty *) mAssociatedValues.associatedValuesPointer () ;
  out_propertyName = ptr->mProperty_propertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_prefsPropertyWithOption_3F_ GGS_observablePropertyAST::getter_getPrefsPropertyWithOption (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_prefsPropertyWithOption_3F_ result ;
  if (mEnum == Enumeration::enum_prefsPropertyWithOption) {
    const auto ptr = (const GGS_observablePropertyAST_2E_prefsPropertyWithOption *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_prefsPropertyWithOption (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_prefsPropertyWithOption (GGS_lstring & out_propertyName,
                                                                                GGS_lstring & out_optionName) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_prefsPropertyWithOption *) mAssociatedValues.associatedValuesPointer () ;
  out_propertyName = ptr->mProperty_propertyName ;
  out_optionName = ptr->mProperty_optionName ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfControllerProperty_3F_ GGS_observablePropertyAST::getter_getSelfControllerProperty (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_selfControllerProperty_3F_ result ;
  if (mEnum == Enumeration::enum_selfControllerProperty) {
    const auto ptr = (const GGS_observablePropertyAST_2E_selfControllerProperty *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_selfControllerProperty (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_selfControllerProperty (GGS_lstring & out_controllerName,
                                                                               GGS_lstring & out_propertyName) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_selfControllerProperty *) mAssociatedValues.associatedValuesPointer () ;
  out_controllerName = ptr->mProperty_controllerName ;
  out_propertyName = ptr->mProperty_propertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfControllerSecondaryProperty_3F_ GGS_observablePropertyAST::getter_getSelfControllerSecondaryProperty (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_selfControllerSecondaryProperty_3F_ result ;
  if (mEnum == Enumeration::enum_selfControllerSecondaryProperty) {
    const auto ptr = (const GGS_observablePropertyAST_2E_selfControllerSecondaryProperty *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_selfControllerSecondaryProperty (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_selfControllerSecondaryProperty (GGS_lstring & out_controllerName,
                                                                                        GGS_lstring & out_propertyName,
                                                                                        GGS_lstring & out_secondaryPropertyName) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_selfControllerSecondaryProperty *) mAssociatedValues.associatedValuesPointer () ;
  out_controllerName = ptr->mProperty_controllerName ;
  out_propertyName = ptr->mProperty_propertyName ;
  out_secondaryPropertyName = ptr->mProperty_secondaryPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfControllerAllProperties_3F_ GGS_observablePropertyAST::getter_getSelfControllerAllProperties (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_selfControllerAllProperties_3F_ result ;
  if (mEnum == Enumeration::enum_selfControllerAllProperties) {
    const auto ptr = (const GGS_observablePropertyAST_2E_selfControllerAllProperties *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_selfControllerAllProperties (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_selfControllerAllProperties (GGS_lstring & out_controllerName,
                                                                                    GGS_lstring & out_propertyName,
                                                                                    GGS_lstring & out_secondaryPropertyName) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_selfControllerAllProperties *) mAssociatedValues.associatedValuesPointer () ;
  out_controllerName = ptr->mProperty_controllerName ;
  out_propertyName = ptr->mProperty_propertyName ;
  out_secondaryPropertyName = ptr->mProperty_secondaryPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfControllerOneProperty_3F_ GGS_observablePropertyAST::getter_getSelfControllerOneProperty (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_selfControllerOneProperty_3F_ result ;
  if (mEnum == Enumeration::enum_selfControllerOneProperty) {
    const auto ptr = (const GGS_observablePropertyAST_2E_selfControllerOneProperty *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_selfControllerOneProperty (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_selfControllerOneProperty (GGS_lstring & out_controllerName,
                                                                                  GGS_lstring & out_propertyName) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_selfControllerOneProperty *) mAssociatedValues.associatedValuesPointer () ;
  out_controllerName = ptr->mProperty_controllerName ;
  out_propertyName = ptr->mProperty_propertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_signatureProperty_3F_ GGS_observablePropertyAST::getter_getSignatureProperty (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_signatureProperty_3F_ result ;
  if (mEnum == Enumeration::enum_signatureProperty) {
    const auto ptr = (const GGS_observablePropertyAST_2E_signatureProperty *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_signatureProperty (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_signatureProperty (GGS_location & out_location) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_signatureProperty *) mAssociatedValues.associatedValuesPointer () ;
  out_location = ptr->mProperty_location ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_versionProperty_3F_ GGS_observablePropertyAST::getter_getVersionProperty (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_versionProperty_3F_ result ;
  if (mEnum == Enumeration::enum_versionProperty) {
    const auto ptr = (const GGS_observablePropertyAST_2E_versionProperty *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_versionProperty (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_versionProperty (GGS_location & out_location) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_versionProperty *) mAssociatedValues.associatedValuesPointer () ;
  out_location = ptr->mProperty_location ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_versionShouldChangeProperty_3F_ GGS_observablePropertyAST::getter_getVersionShouldChangeProperty (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_versionShouldChangeProperty_3F_ result ;
  if (mEnum == Enumeration::enum_versionShouldChangeProperty) {
    const auto ptr = (const GGS_observablePropertyAST_2E_versionShouldChangeProperty *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_versionShouldChangeProperty (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_versionShouldChangeProperty (GGS_location & out_location) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_versionShouldChangeProperty *) mAssociatedValues.associatedValuesPointer () ;
  out_location = ptr->mProperty_location ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_superProperty_3F_ GGS_observablePropertyAST::getter_getSuperProperty (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_superProperty_3F_ result ;
  if (mEnum == Enumeration::enum_superProperty) {
    const auto ptr = (const GGS_observablePropertyAST_2E_superProperty *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_superProperty (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_superProperty (GGS_lstring & out_superEntityName,
                                                                      GGS_lstring & out_propertyName) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_superProperty *) mAssociatedValues.associatedValuesPointer () ;
  out_superEntityName = ptr->mProperty_superEntityName ;
  out_propertyName = ptr->mProperty_propertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_superPropertyWithDefaultValue_3F_ GGS_observablePropertyAST::getter_getSuperPropertyWithDefaultValue (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_superPropertyWithDefaultValue_3F_ result ;
  if (mEnum == Enumeration::enum_superPropertyWithDefaultValue) {
    const auto ptr = (const GGS_observablePropertyAST_2E_superPropertyWithDefaultValue *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_superPropertyWithDefaultValue (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_superPropertyWithDefaultValue (GGS_lstring & out_superEntityName,
                                                                                      GGS_lstring & out_propertyName,
                                                                                      GGS_abstractDefaultValue & out_defaultValue) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_superPropertyWithDefaultValue *) mAssociatedValues.associatedValuesPointer () ;
  out_superEntityName = ptr->mProperty_superEntityName ;
  out_propertyName = ptr->mProperty_propertyName ;
  out_defaultValue = ptr->mProperty_defaultValue ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_observablePropertyAST [22] = {
  "(not built)",
  "rootProperty",
  "rootPropertyWithOption",
  "rootPropertyRelationship",
  "rootPropertyNone",
  "selfWithoutProperty",
  "selfProperty",
  "selfPropertyWithOption",
  "selfPropertyArray",
  "selfPropertyObject",
  "selfPropertyNone",
  "prefsProperty",
  "prefsPropertyWithOption",
  "selfControllerProperty",
  "selfControllerSecondaryProperty",
  "selfControllerAllProperties",
  "selfControllerOneProperty",
  "signatureProperty",
  "versionProperty",
  "versionShouldChangeProperty",
  "superProperty",
  "superPropertyWithDefaultValue"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isRootProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_rootProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isRootPropertyWithOption (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_rootPropertyWithOption == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isRootPropertyRelationship (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_rootPropertyRelationship == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isRootPropertyNone (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_rootPropertyNone == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isSelfWithoutProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_selfWithoutProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isSelfProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_selfProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isSelfPropertyWithOption (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_selfPropertyWithOption == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isSelfPropertyArray (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_selfPropertyArray == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isSelfPropertyObject (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_selfPropertyObject == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isSelfPropertyNone (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_selfPropertyNone == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isPrefsProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_prefsProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isPrefsPropertyWithOption (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_prefsPropertyWithOption == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isSelfControllerProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_selfControllerProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isSelfControllerSecondaryProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_selfControllerSecondaryProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isSelfControllerAllProperties (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_selfControllerAllProperties == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isSelfControllerOneProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_selfControllerOneProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isSignatureProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_signatureProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isVersionProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_versionProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isVersionShouldChangeProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_versionShouldChangeProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isSuperProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_superProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isSuperPropertyWithDefaultValue (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_superPropertyWithDefaultValue == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("<enum @observablePropertyAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_observablePropertyAST [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @observablePropertyAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST ("observablePropertyAST",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_observablePropertyAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_observablePropertyAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_observablePropertyAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  const GGS_observablePropertyAST * p = (const GGS_observablePropertyAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_observablePropertyAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@observablePropertyAST generateAddObserverCall'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_generateAddObserverCall (const GGS_observablePropertyAST & inObject,
                                                    const GGS_bool & constinArgument_inPreferences,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  GGS_string temp_0 ;
  const GalgasBool test_1 = constinArgument_inPreferences.boolEnum () ;
  if (GalgasBool::boolTrue == test_1) {
    temp_0 = GGS_string ("preferences_") ;
  }else if (GalgasBool::boolFalse == test_1) {
    temp_0 = GGS_string ("self.") ;
  }
  GGS_string var_prefix_21070 = temp_0 ;
  const GGS_observablePropertyAST temp_2 = inObject ;
  switch (temp_2.enumValue ()) {
  case GGS_observablePropertyAST::Enumeration::invalid:
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerProperty:
    {
      GGS_lstring extractedValue_21187_controllerName_0 ;
      GGS_lstring extractedValue_21212_propertyName_1 ;
      temp_2.getAssociatedValuesFor_selfControllerProperty (extractedValue_21187_controllerName_0, extractedValue_21212_propertyName_1) ;
      result_result = var_prefix_21070.add_operation (extractedValue_21187_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 496)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 496)).add_operation (extractedValue_21212_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 496)).add_operation (GGS_string ("_property.startsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 496)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerSecondaryProperty:
    {
      GGS_lstring extractedValue_21377_controllerName_0 ;
      GGS_lstring extractedValue_21402_propertyName_1 ;
      GGS_lstring extractedValue_21425_secondaryPropertyName_2 ;
      temp_2.getAssociatedValuesFor_selfControllerSecondaryProperty (extractedValue_21377_controllerName_0, extractedValue_21402_propertyName_1, extractedValue_21425_secondaryPropertyName_2) ;
      result_result = var_prefix_21070.add_operation (extractedValue_21377_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 498)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 498)).add_operation (extractedValue_21402_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 498)).add_operation (GGS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 498)).add_operation (extractedValue_21425_secondaryPropertyName_2.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 498)).add_operation (GGS_string ("_property.startsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 498)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerAllProperties:
    {
      GGS_lstring extractedValue_21634_controllerName_0 ;
      GGS_lstring extractedValue_21659_propertyName_1 ;
      GGS_lstring extractedValue_21682_secondaryPropertyName_2 ;
      temp_2.getAssociatedValuesFor_selfControllerAllProperties (extractedValue_21634_controllerName_0, extractedValue_21659_propertyName_1, extractedValue_21682_secondaryPropertyName_2) ;
      result_result = var_prefix_21070.add_operation (extractedValue_21634_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 500)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 500)).add_operation (extractedValue_21659_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 500)).add_operation (GGS_string ("_property.toMany_"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 500)).add_operation (extractedValue_21682_secondaryPropertyName_2.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 500)).add_operation (GGS_string ("_StartsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 500)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerOneProperty:
    {
      GGS_lstring extractedValue_21887_controllerName_0 ;
      GGS_lstring extractedValue_21912_propertyName_1 ;
      temp_2.getAssociatedValuesFor_selfControllerOneProperty (extractedValue_21887_controllerName_0, extractedValue_21912_propertyName_1) ;
      result_result = var_prefix_21070.add_operation (extractedValue_21887_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 502)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 502)).add_operation (extractedValue_21912_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 502)).add_operation (GGS_string ("_property.<<4>>"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 502)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfWithoutProperty:
    {
      GGS_location extractedValue_22043__0 ;
      temp_2.getAssociatedValuesFor_selfWithoutProperty (extractedValue_22043__0) ;
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfProperty:
    {
      GGS_lstring extractedValue_22126_masterName_0 ;
      temp_2.getAssociatedValuesFor_selfProperty (extractedValue_22126_masterName_0) ;
      result_result = var_prefix_21070.add_operation (extractedValue_22126_masterName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 506)).add_operation (GGS_string ("_property.startsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 506)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyWithOption:
    {
      GGS_lstring extractedValue_22254_masterName_0 ;
      GGS_lstring extractedValue_22266__1 ;
      temp_2.getAssociatedValuesFor_selfPropertyWithOption (extractedValue_22254_masterName_0, extractedValue_22266__1) ;
      result_result = var_prefix_21070.add_operation (extractedValue_22254_masterName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 508)).add_operation (GGS_string ("_property.startsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 508)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyArray:
    {
      GGS_lstring extractedValue_22380_masterName_0 ;
      GGS_lstring extractedValue_22401_elementPropertyName_1 ;
      temp_2.getAssociatedValuesFor_selfPropertyArray (extractedValue_22380_masterName_0, extractedValue_22401_elementPropertyName_1) ;
      result_result = var_prefix_21070.add_operation (extractedValue_22380_masterName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 510)).add_operation (GGS_string ("_property.toMany_"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 510)).add_operation (extractedValue_22401_elementPropertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 510)).add_operation (GGS_string ("_StartsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 510)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyObject:
    {
      GGS_lstring extractedValue_22569_masterName_0 ;
      GGS_lstring extractedValue_22590_elementPropertyName_1 ;
      temp_2.getAssociatedValuesFor_selfPropertyObject (extractedValue_22569_masterName_0, extractedValue_22590_elementPropertyName_1) ;
      result_result = var_prefix_21070.add_operation (extractedValue_22569_masterName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 512)).add_operation (GGS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 512)).add_operation (extractedValue_22590_elementPropertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 512)).add_operation (GGS_string ("_property.startsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 512)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyNone:
    {
      GGS_lstring extractedValue_22758_masterName_0 ;
      temp_2.getAssociatedValuesFor_selfPropertyNone (extractedValue_22758_masterName_0) ;
      result_result = var_prefix_21070.add_operation (extractedValue_22758_masterName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 514)).add_operation (GGS_string ("_property.startsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 514)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_prefsProperty:
    {
      GGS_lstring extractedValue_22877_propertyName_0 ;
      temp_2.getAssociatedValuesFor_prefsProperty (extractedValue_22877_propertyName_0) ;
      result_result = GGS_string ("preferences_").add_operation (extractedValue_22877_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 516)).add_operation (GGS_string ("_property.startsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 516)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_prefsPropertyWithOption:
    {
      GGS_lstring extractedValue_23012_propertyName_0 ;
      GGS_lstring extractedValue_23026__1 ;
      temp_2.getAssociatedValuesFor_prefsPropertyWithOption (extractedValue_23012_propertyName_0, extractedValue_23026__1) ;
      result_result = GGS_string ("preferences_").add_operation (extractedValue_23012_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 518)).add_operation (GGS_string ("_property.startsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 518)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootProperty:
    {
      GGS_lstring extractedValue_23139_masterName_0 ;
      temp_2.getAssociatedValuesFor_rootProperty (extractedValue_23139_masterName_0) ;
      result_result = GGS_string ("self.rootObject.").add_operation (extractedValue_23139_masterName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 520)).add_operation (GGS_string ("_property.startsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 520)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyNone:
    {
      GGS_lstring extractedValue_23266_masterName_0 ;
      temp_2.getAssociatedValuesFor_rootPropertyNone (extractedValue_23266_masterName_0) ;
      result_result = GGS_string ("self.rootObject.").add_operation (extractedValue_23266_masterName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 522)).add_operation (GGS_string ("_property.startsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 522)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyWithOption:
    {
      GGS_lstring extractedValue_23399_masterName_0 ;
      GGS_lstring extractedValue_23420_optionName_1 ;
      temp_2.getAssociatedValuesFor_rootPropertyWithOption (extractedValue_23399_masterName_0, extractedValue_23420_optionName_1) ;
      result_result = GGS_string ("self.rootObject.").add_operation (extractedValue_23399_masterName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 524)).add_operation (GGS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 524)).add_operation (extractedValue_23420_optionName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 524)).add_operation (GGS_string ("_property.startsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 524)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyRelationship:
    {
      GGS_lstring extractedValue_23583_relationshipName_0 ;
      GGS_lstring extractedValue_23610_propertyName_1 ;
      temp_2.getAssociatedValuesFor_rootPropertyRelationship (extractedValue_23583_relationshipName_0, extractedValue_23610_propertyName_1) ;
      result_result = GGS_string ("self.rootObject.").add_operation (extractedValue_23583_relationshipName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 526)).add_operation (GGS_string ("_property.toMany_"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 526)).add_operation (extractedValue_23610_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 526)).add_operation (GGS_string ("_StartsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 526)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_signatureProperty:
    {
      GGS_location extractedValue_23765__0 ;
      temp_2.getAssociatedValuesFor_signatureProperty (extractedValue_23765__0) ;
      result_result = GGS_string ("<< ligne 243 >>") ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_versionProperty:
    {
      GGS_location extractedValue_23825__0 ;
      temp_2.getAssociatedValuesFor_versionProperty (extractedValue_23825__0) ;
      result_result = GGS_string ("<< ligne 245 >>") ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_versionShouldChangeProperty:
    {
      GGS_location extractedValue_23897__0 ;
      temp_2.getAssociatedValuesFor_versionShouldChangeProperty (extractedValue_23897__0) ;
      result_result = GGS_string ("<< ligne 247 >>") ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_superProperty:
    {
      GGS_lstring extractedValue_23955__0 ;
      GGS_lstring extractedValue_23967_propertyName_1 ;
      temp_2.getAssociatedValuesFor_superProperty (extractedValue_23955__0, extractedValue_23967_propertyName_1) ;
      result_result = var_prefix_21070.add_operation (extractedValue_23967_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 534)).add_operation (GGS_string ("_property.startsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 534)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_superPropertyWithDefaultValue:
    {
      GGS_lstring extractedValue_24097__0 ;
      GGS_lstring extractedValue_24109_propertyName_1 ;
      GGS_abstractDefaultValue extractedValue_24123__2 ;
      temp_2.getAssociatedValuesFor_superPropertyWithDefaultValue (extractedValue_24097__0, extractedValue_24109_propertyName_1, extractedValue_24123__2) ;
      result_result = var_prefix_21070.add_operation (extractedValue_24109_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 536)).add_operation (GGS_string ("_property.startsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 536)) ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@observablePropertyAST generateRemoveObserverCall'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_generateRemoveObserverCall (const GGS_observablePropertyAST & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_observablePropertyAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_observablePropertyAST::Enumeration::invalid:
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerProperty:
    {
      GGS_lstring extractedValue_24440_controllerName_0 ;
      GGS_lstring extractedValue_24465_propertyName_1 ;
      temp_0.getAssociatedValuesFor_selfControllerProperty (extractedValue_24440_controllerName_0, extractedValue_24465_propertyName_1) ;
      result_result = GGS_string ("self.").add_operation (extractedValue_24440_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 545)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 545)).add_operation (extractedValue_24465_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 545)).add_operation (GGS_string ("_property.stopsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 545)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerSecondaryProperty:
    {
      GGS_lstring extractedValue_24630_controllerName_0 ;
      GGS_lstring extractedValue_24655_propertyName_1 ;
      GGS_lstring extractedValue_24678_secondaryPropertyName_2 ;
      temp_0.getAssociatedValuesFor_selfControllerSecondaryProperty (extractedValue_24630_controllerName_0, extractedValue_24655_propertyName_1, extractedValue_24678_secondaryPropertyName_2) ;
      result_result = GGS_string ("self.").add_operation (extractedValue_24630_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 547)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 547)).add_operation (extractedValue_24655_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 547)).add_operation (GGS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 547)).add_operation (extractedValue_24678_secondaryPropertyName_2.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 547)).add_operation (GGS_string ("_property.stopsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 547)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerAllProperties:
    {
      GGS_lstring extractedValue_24887_controllerName_0 ;
      GGS_lstring extractedValue_24912_propertyName_1 ;
      GGS_lstring extractedValue_24935_secondaryPropertyName_2 ;
      temp_0.getAssociatedValuesFor_selfControllerAllProperties (extractedValue_24887_controllerName_0, extractedValue_24912_propertyName_1, extractedValue_24935_secondaryPropertyName_2) ;
      result_result = GGS_string ("self.").add_operation (extractedValue_24887_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 549)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 549)).add_operation (extractedValue_24912_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 549)).add_operation (GGS_string ("_property.toMany_"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 549)).add_operation (extractedValue_24935_secondaryPropertyName_2.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 549)).add_operation (GGS_string ("_StopsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 549)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerOneProperty:
    {
      GGS_lstring extractedValue_25140_controllerName_0 ;
      GGS_lstring extractedValue_25165_propertyName_1 ;
      temp_0.getAssociatedValuesFor_selfControllerOneProperty (extractedValue_25140_controllerName_0, extractedValue_25165_propertyName_1) ;
      result_result = GGS_string ("self.").add_operation (extractedValue_25140_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 551)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 551)).add_operation (extractedValue_25165_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 551)).add_operation (GGS_string ("_property.toMany_<<5>>_StopsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 551)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfWithoutProperty:
    {
      GGS_location extractedValue_25322__0 ;
      temp_0.getAssociatedValuesFor_selfWithoutProperty (extractedValue_25322__0) ;
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfProperty:
    {
      GGS_lstring extractedValue_25405_masterName_0 ;
      temp_0.getAssociatedValuesFor_selfProperty (extractedValue_25405_masterName_0) ;
      result_result = GGS_string ("self.").add_operation (extractedValue_25405_masterName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 555)).add_operation (GGS_string ("_property.stopsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 555)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyWithOption:
    {
      GGS_lstring extractedValue_25533_masterName_0 ;
      GGS_lstring extractedValue_25545__1 ;
      temp_0.getAssociatedValuesFor_selfPropertyWithOption (extractedValue_25533_masterName_0, extractedValue_25545__1) ;
      result_result = GGS_string ("self.").add_operation (extractedValue_25533_masterName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 557)).add_operation (GGS_string ("_property.stopsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 557)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyArray:
    {
      GGS_lstring extractedValue_25659_masterName_0 ;
      GGS_lstring extractedValue_25680_elementPropertyName_1 ;
      temp_0.getAssociatedValuesFor_selfPropertyArray (extractedValue_25659_masterName_0, extractedValue_25680_elementPropertyName_1) ;
      result_result = GGS_string ("self.").add_operation (extractedValue_25659_masterName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 559)).add_operation (GGS_string ("_property.toMany_"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 559)).add_operation (extractedValue_25680_elementPropertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 559)).add_operation (GGS_string ("_StopsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 559)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyObject:
    {
      GGS_lstring extractedValue_25848_masterName_0 ;
      GGS_lstring extractedValue_25869_elementPropertyName_1 ;
      temp_0.getAssociatedValuesFor_selfPropertyObject (extractedValue_25848_masterName_0, extractedValue_25869_elementPropertyName_1) ;
      result_result = GGS_string ("self.").add_operation (extractedValue_25848_masterName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 561)).add_operation (GGS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 561)).add_operation (extractedValue_25869_elementPropertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 561)).add_operation (GGS_string ("_property.removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 561)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyNone:
    {
      GGS_lstring extractedValue_26035_masterName_0 ;
      temp_0.getAssociatedValuesFor_selfPropertyNone (extractedValue_26035_masterName_0) ;
      result_result = GGS_string ("self.").add_operation (extractedValue_26035_masterName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 563)).add_operation (GGS_string ("_property.stopsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 563)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_prefsProperty:
    {
      GGS_lstring extractedValue_26154_propertyName_0 ;
      temp_0.getAssociatedValuesFor_prefsProperty (extractedValue_26154_propertyName_0) ;
      result_result = GGS_string ("preferences_").add_operation (extractedValue_26154_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 565)).add_operation (GGS_string ("_property.stopsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 565)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_prefsPropertyWithOption:
    {
      GGS_lstring extractedValue_26288_propertyName_0 ;
      GGS_lstring extractedValue_26302__1 ;
      temp_0.getAssociatedValuesFor_prefsPropertyWithOption (extractedValue_26288_propertyName_0, extractedValue_26302__1) ;
      result_result = GGS_string ("preferences_").add_operation (extractedValue_26288_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 567)).add_operation (GGS_string ("_property.stopsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 567)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootProperty:
    {
      GGS_lstring extractedValue_26414_masterName_0 ;
      temp_0.getAssociatedValuesFor_rootProperty (extractedValue_26414_masterName_0) ;
      result_result = GGS_string ("self.rootObject.").add_operation (extractedValue_26414_masterName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 569)).add_operation (GGS_string ("_property.stopsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 569)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyWithOption:
    {
      GGS_lstring extractedValue_26546_masterName_0 ;
      GGS_lstring extractedValue_26567_optionName_1 ;
      temp_0.getAssociatedValuesFor_rootPropertyWithOption (extractedValue_26546_masterName_0, extractedValue_26567_optionName_1) ;
      result_result = GGS_string ("self.rootObject.").add_operation (extractedValue_26546_masterName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 571)).add_operation (GGS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 571)).add_operation (extractedValue_26567_optionName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 571)).add_operation (GGS_string ("_property.stopsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 571)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyNone:
    {
      GGS_lstring extractedValue_26721_masterName_0 ;
      temp_0.getAssociatedValuesFor_rootPropertyNone (extractedValue_26721_masterName_0) ;
      result_result = GGS_string ("self.rootObject.").add_operation (extractedValue_26721_masterName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 573)).add_operation (GGS_string ("_property.stopsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 573)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyRelationship:
    {
      GGS_lstring extractedValue_26855_relationshipName_0 ;
      GGS_lstring extractedValue_26882_propertyName_1 ;
      temp_0.getAssociatedValuesFor_rootPropertyRelationship (extractedValue_26855_relationshipName_0, extractedValue_26882_propertyName_1) ;
      result_result = GGS_string ("self.rootObject.").add_operation (extractedValue_26855_relationshipName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 575)).add_operation (GGS_string ("_property.toMany_"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 575)).add_operation (extractedValue_26882_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 575)).add_operation (GGS_string ("_StopsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 575)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_signatureProperty:
    {
      GGS_location extractedValue_27036__0 ;
      temp_0.getAssociatedValuesFor_signatureProperty (extractedValue_27036__0) ;
      result_result = GGS_string ("<< ligne 270 >>") ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_versionProperty:
    {
      GGS_location extractedValue_27096__0 ;
      temp_0.getAssociatedValuesFor_versionProperty (extractedValue_27096__0) ;
      result_result = GGS_string ("<< ligne 272 >>") ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_versionShouldChangeProperty:
    {
      GGS_location extractedValue_27168__0 ;
      temp_0.getAssociatedValuesFor_versionShouldChangeProperty (extractedValue_27168__0) ;
      result_result = GGS_string ("<< ligne 274 >>") ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_superProperty:
    {
      GGS_lstring extractedValue_27226__0 ;
      GGS_lstring extractedValue_27238_propertyName_1 ;
      temp_0.getAssociatedValuesFor_superProperty (extractedValue_27226__0, extractedValue_27238_propertyName_1) ;
      result_result = GGS_string ("self.").add_operation (extractedValue_27238_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 583)).add_operation (GGS_string ("_property.removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 583)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_superPropertyWithDefaultValue:
    {
      GGS_lstring extractedValue_27366__0 ;
      GGS_lstring extractedValue_27378_propertyName_1 ;
      GGS_abstractDefaultValue extractedValue_27392__2 ;
      temp_0.getAssociatedValuesFor_superPropertyWithDefaultValue (extractedValue_27366__0, extractedValue_27378_propertyName_1, extractedValue_27392__2) ;
      result_result = GGS_string ("self.").add_operation (extractedValue_27378_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 585)).add_operation (GGS_string ("_property.removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 585)) ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
// @transientRoutineGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_transientRoutineGeneration::objectCompare (const GGS_transientRoutineGeneration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientRoutineGeneration::GGS_transientRoutineGeneration (void) :
GGS_abstractFileGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_transientRoutineGeneration GGS_transientRoutineGeneration::
init_21__21__21__21__21_ (const GGS_string & in_mOwnerName,
                          const GGS_string & in_mTransientName,
                          const GGS_typeKind & in_mTransientType,
                          const GGS_string & in_mGeneratedFunctionNamePrefix,
                          const GGS_transientDependencyListForGeneration & in_mDependencyList,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_transientRoutineGeneration * object = nullptr ;
  macroMyNew (object, cPtr_transientRoutineGeneration (inCompiler COMMA_THERE)) ;
  object->transientRoutineGeneration_init_21__21__21__21__21_ (in_mOwnerName, in_mTransientName, in_mTransientType, in_mGeneratedFunctionNamePrefix, in_mDependencyList, inCompiler) ;
  const GGS_transientRoutineGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_transientRoutineGeneration::
transientRoutineGeneration_init_21__21__21__21__21_ (const GGS_string & in_mOwnerName,
                                                     const GGS_string & in_mTransientName,
                                                     const GGS_typeKind & in_mTransientType,
                                                     const GGS_string & in_mGeneratedFunctionNamePrefix,
                                                     const GGS_transientDependencyListForGeneration & in_mDependencyList,
                                                     Compiler * /* inCompiler */) {
  mProperty_mOwnerName = in_mOwnerName ;
  mProperty_mTransientName = in_mTransientName ;
  mProperty_mTransientType = in_mTransientType ;
  mProperty_mGeneratedFunctionNamePrefix = in_mGeneratedFunctionNamePrefix ;
  mProperty_mDependencyList = in_mDependencyList ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientRoutineGeneration::GGS_transientRoutineGeneration (const cPtr_transientRoutineGeneration * inSourcePtr) :
GGS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_transientRoutineGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_transientRoutineGeneration GGS_transientRoutineGeneration::class_func_new (const GGS_string & in_mOwnerName,
                                                                               const GGS_string & in_mTransientName,
                                                                               const GGS_typeKind & in_mTransientType,
                                                                               const GGS_string & in_mGeneratedFunctionNamePrefix,
                                                                               const GGS_transientDependencyListForGeneration & in_mDependencyList,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  GGS_transientRoutineGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_transientRoutineGeneration (in_mOwnerName, in_mTransientName, in_mTransientType, in_mGeneratedFunctionNamePrefix, in_mDependencyList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_transientRoutineGeneration::readProperty_mOwnerName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_transientRoutineGeneration * p = (cPtr_transientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientRoutineGeneration) ;
    return p->mProperty_mOwnerName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_transientRoutineGeneration::readProperty_mTransientName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_transientRoutineGeneration * p = (cPtr_transientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientRoutineGeneration) ;
    return p->mProperty_mTransientName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_transientRoutineGeneration::readProperty_mTransientType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_typeKind () ;
  }else{
    cPtr_transientRoutineGeneration * p = (cPtr_transientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientRoutineGeneration) ;
    return p->mProperty_mTransientType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_transientRoutineGeneration::readProperty_mGeneratedFunctionNamePrefix (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_transientRoutineGeneration * p = (cPtr_transientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientRoutineGeneration) ;
    return p->mProperty_mGeneratedFunctionNamePrefix ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_transientDependencyListForGeneration GGS_transientRoutineGeneration::readProperty_mDependencyList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_transientDependencyListForGeneration () ;
  }else{
    cPtr_transientRoutineGeneration * p = (cPtr_transientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientRoutineGeneration) ;
    return p->mProperty_mDependencyList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @transientRoutineGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_transientRoutineGeneration::cPtr_transientRoutineGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (inCompiler COMMA_THERE),
mProperty_mOwnerName (),
mProperty_mTransientName (),
mProperty_mTransientType (),
mProperty_mGeneratedFunctionNamePrefix (),
mProperty_mDependencyList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_transientRoutineGeneration::cPtr_transientRoutineGeneration (const GGS_string & in_mOwnerName,
                                                                  const GGS_string & in_mTransientName,
                                                                  const GGS_typeKind & in_mTransientType,
                                                                  const GGS_string & in_mGeneratedFunctionNamePrefix,
                                                                  const GGS_transientDependencyListForGeneration & in_mDependencyList,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (inCompiler COMMA_THERE),
mProperty_mOwnerName (),
mProperty_mTransientName (),
mProperty_mTransientType (),
mProperty_mGeneratedFunctionNamePrefix (),
mProperty_mDependencyList () {
  mProperty_mOwnerName = in_mOwnerName ;
  mProperty_mTransientName = in_mTransientName ;
  mProperty_mTransientType = in_mTransientType ;
  mProperty_mGeneratedFunctionNamePrefix = in_mGeneratedFunctionNamePrefix ;
  mProperty_mDependencyList = in_mDependencyList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_transientRoutineGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientRoutineGeneration ;
}

void cPtr_transientRoutineGeneration::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@transientRoutineGeneration:") ;
  mProperty_mOwnerName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTransientName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTransientType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGeneratedFunctionNamePrefix.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDependencyList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_transientRoutineGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_transientRoutineGeneration (mProperty_mOwnerName, mProperty_mTransientName, mProperty_mTransientType, mProperty_mGeneratedFunctionNamePrefix, mProperty_mDependencyList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_transientRoutineGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractFileGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mOwnerName.printNonNullClassInstanceProperties ("mOwnerName") ;
    mProperty_mTransientName.printNonNullClassInstanceProperties ("mTransientName") ;
    mProperty_mTransientType.printNonNullClassInstanceProperties ("mTransientType") ;
    mProperty_mGeneratedFunctionNamePrefix.printNonNullClassInstanceProperties ("mGeneratedFunctionNamePrefix") ;
    mProperty_mDependencyList.printNonNullClassInstanceProperties ("mDependencyList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @transientRoutineGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_transientRoutineGeneration ("transientRoutineGeneration",
                                                                               & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_transientRoutineGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientRoutineGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_transientRoutineGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_transientRoutineGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientRoutineGeneration GGS_transientRoutineGeneration::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_transientRoutineGeneration result ;
  const GGS_transientRoutineGeneration * p = (const GGS_transientRoutineGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_transientRoutineGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientRoutineGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_transientRoutineGeneration_2E_weak::objectCompare (const GGS_transientRoutineGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientRoutineGeneration_2E_weak::GGS_transientRoutineGeneration_2E_weak (void) :
GGS_abstractFileGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_transientRoutineGeneration_2E_weak & GGS_transientRoutineGeneration_2E_weak::operator = (const GGS_transientRoutineGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientRoutineGeneration_2E_weak::GGS_transientRoutineGeneration_2E_weak (const GGS_transientRoutineGeneration & inSource) :
GGS_abstractFileGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_transientRoutineGeneration_2E_weak GGS_transientRoutineGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_transientRoutineGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientRoutineGeneration GGS_transientRoutineGeneration_2E_weak::unwrappedValue (void) const {
  GGS_transientRoutineGeneration result ;
  if (isValid ()) {
    const cPtr_transientRoutineGeneration * p = (cPtr_transientRoutineGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_transientRoutineGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientRoutineGeneration GGS_transientRoutineGeneration_2E_weak::bang_transientRoutineGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_transientRoutineGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_transientRoutineGeneration) ;
      result = GGS_transientRoutineGeneration ((cPtr_transientRoutineGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @transientRoutineGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_transientRoutineGeneration_2E_weak ("transientRoutineGeneration.weak",
                                                                                       & kTypeDescriptor_GALGAS_abstractFileGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_transientRoutineGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientRoutineGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_transientRoutineGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_transientRoutineGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientRoutineGeneration_2E_weak GGS_transientRoutineGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_transientRoutineGeneration_2E_weak result ;
  const GGS_transientRoutineGeneration_2E_weak * p = (const GGS_transientRoutineGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_transientRoutineGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientRoutineGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum toManyRelationshipOptionAST
//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionAST::GGS_toManyRelationshipOptionAST (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionAST GGS_toManyRelationshipOptionAST::class_func_none (UNUSED_LOCATION_ARGS) {
  GGS_toManyRelationshipOptionAST result ;
  result.mEnum = Enumeration::enum_none ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionAST GGS_toManyRelationshipOptionAST::class_func_hasOpposite (const GGS_lstring & inAssociatedValue0
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_toManyRelationshipOptionAST result ;
  result.mEnum = Enumeration::enum_hasOpposite ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_toManyRelationshipOptionAST_2E_hasOpposite (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionAST GGS_toManyRelationshipOptionAST::class_func_hasDependance (const GGS_lstring & inAssociatedValue0
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_toManyRelationshipOptionAST result ;
  result.mEnum = Enumeration::enum_hasDependance ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_toManyRelationshipOptionAST_2E_hasDependance (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyRelationshipOptionAST::method_extractHasOpposite (GGS_lstring & outAssociatedValue_oppositeName,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_hasOpposite) {
    outAssociatedValue_oppositeName.drop () ;
    String s ;
    s.appendCString ("method @toManyRelationshipOptionAST.hasOpposite invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_toManyRelationshipOptionAST_2E_hasOpposite *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_oppositeName = ptr->mProperty_oppositeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyRelationshipOptionAST::method_extractHasDependance (GGS_lstring & outAssociatedValue_masterPropertyName,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_hasDependance) {
    outAssociatedValue_masterPropertyName.drop () ;
    String s ;
    s.appendCString ("method @toManyRelationshipOptionAST.hasDependance invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_toManyRelationshipOptionAST_2E_hasDependance *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_masterPropertyName = ptr->mProperty_masterPropertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionAST_2E_hasOpposite_3F_ GGS_toManyRelationshipOptionAST::getter_getHasOpposite (UNUSED_LOCATION_ARGS) const {
  GGS_toManyRelationshipOptionAST_2E_hasOpposite_3F_ result ;
  if (mEnum == Enumeration::enum_hasOpposite) {
    const auto ptr = (const GGS_toManyRelationshipOptionAST_2E_hasOpposite *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_toManyRelationshipOptionAST_2E_hasOpposite (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyRelationshipOptionAST::getAssociatedValuesFor_hasOpposite (GGS_lstring & out_oppositeName) const {
  const auto ptr = (const GGS_toManyRelationshipOptionAST_2E_hasOpposite *) mAssociatedValues.associatedValuesPointer () ;
  out_oppositeName = ptr->mProperty_oppositeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionAST_2E_hasDependance_3F_ GGS_toManyRelationshipOptionAST::getter_getHasDependance (UNUSED_LOCATION_ARGS) const {
  GGS_toManyRelationshipOptionAST_2E_hasDependance_3F_ result ;
  if (mEnum == Enumeration::enum_hasDependance) {
    const auto ptr = (const GGS_toManyRelationshipOptionAST_2E_hasDependance *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_toManyRelationshipOptionAST_2E_hasDependance (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyRelationshipOptionAST::getAssociatedValuesFor_hasDependance (GGS_lstring & out_masterPropertyName) const {
  const auto ptr = (const GGS_toManyRelationshipOptionAST_2E_hasDependance *) mAssociatedValues.associatedValuesPointer () ;
  out_masterPropertyName = ptr->mProperty_masterPropertyName ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_toManyRelationshipOptionAST [4] = {
  "(not built)",
  "none",
  "hasOpposite",
  "hasDependance"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_toManyRelationshipOptionAST::getter_isNone (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_none == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_toManyRelationshipOptionAST::getter_isHasOpposite (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_hasOpposite == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_toManyRelationshipOptionAST::getter_isHasDependance (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_hasDependance == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyRelationshipOptionAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<enum @toManyRelationshipOptionAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_toManyRelationshipOptionAST [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @toManyRelationshipOptionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionAST ("toManyRelationshipOptionAST",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_toManyRelationshipOptionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyRelationshipOptionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_toManyRelationshipOptionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_toManyRelationshipOptionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionAST GGS_toManyRelationshipOptionAST::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_toManyRelationshipOptionAST result ;
  const GGS_toManyRelationshipOptionAST * p = (const GGS_toManyRelationshipOptionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_toManyRelationshipOptionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyRelationshipOptionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_toManyRelationshipAST_2E_weak::objectCompare (const GGS_toManyRelationshipAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipAST_2E_weak::GGS_toManyRelationshipAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipAST_2E_weak & GGS_toManyRelationshipAST_2E_weak::operator = (const GGS_toManyRelationshipAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipAST_2E_weak::GGS_toManyRelationshipAST_2E_weak (const GGS_toManyRelationshipAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipAST_2E_weak GGS_toManyRelationshipAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_toManyRelationshipAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipAST GGS_toManyRelationshipAST_2E_weak::unwrappedValue (void) const {
  GGS_toManyRelationshipAST result ;
  if (isValid ()) {
    const cPtr_toManyRelationshipAST * p = (cPtr_toManyRelationshipAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_toManyRelationshipAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipAST GGS_toManyRelationshipAST_2E_weak::bang_toManyRelationshipAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_toManyRelationshipAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_toManyRelationshipAST) ;
      result = GGS_toManyRelationshipAST ((cPtr_toManyRelationshipAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @toManyRelationshipAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyRelationshipAST_2E_weak ("toManyRelationshipAST.weak",
                                                                                  & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_toManyRelationshipAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyRelationshipAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_toManyRelationshipAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_toManyRelationshipAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipAST_2E_weak GGS_toManyRelationshipAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_toManyRelationshipAST_2E_weak result ;
  const GGS_toManyRelationshipAST_2E_weak * p = (const GGS_toManyRelationshipAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_toManyRelationshipAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyRelationshipAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum toManyRelationshipOptionGeneration
//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionGeneration::GGS_toManyRelationshipOptionGeneration (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionGeneration GGS_toManyRelationshipOptionGeneration::class_func_none (UNUSED_LOCATION_ARGS) {
  GGS_toManyRelationshipOptionGeneration result ;
  result.mEnum = Enumeration::enum_none ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionGeneration GGS_toManyRelationshipOptionGeneration::class_func_hasOpposite (const GGS_string & inAssociatedValue0
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_toManyRelationshipOptionGeneration result ;
  result.mEnum = Enumeration::enum_hasOpposite ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_toManyRelationshipOptionGeneration_2E_hasOpposite (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionGeneration GGS_toManyRelationshipOptionGeneration::class_func_hasDependance (const GGS_string & inAssociatedValue0,
                                                                                                         const GGS_string & inAssociatedValue1
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_toManyRelationshipOptionGeneration result ;
  result.mEnum = Enumeration::enum_hasDependance ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_toManyRelationshipOptionGeneration_2E_hasDependance (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyRelationshipOptionGeneration::method_extractHasOpposite (GGS_string & outAssociatedValue_oppositeName,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_hasOpposite) {
    outAssociatedValue_oppositeName.drop () ;
    String s ;
    s.appendCString ("method @toManyRelationshipOptionGeneration.hasOpposite invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_toManyRelationshipOptionGeneration_2E_hasOpposite *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_oppositeName = ptr->mProperty_oppositeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyRelationshipOptionGeneration::method_extractHasDependance (GGS_string & outAssociatedValue_masterPropertyName,
                                                                          GGS_string & outAssociatedValue_masterPropertySwiftTypeName,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_hasDependance) {
    outAssociatedValue_masterPropertyName.drop () ;
    outAssociatedValue_masterPropertySwiftTypeName.drop () ;
    String s ;
    s.appendCString ("method @toManyRelationshipOptionGeneration.hasDependance invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_toManyRelationshipOptionGeneration_2E_hasDependance *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_masterPropertyName = ptr->mProperty_masterPropertyName ;
    outAssociatedValue_masterPropertySwiftTypeName = ptr->mProperty_masterPropertySwiftTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionGeneration_2E_hasOpposite_3F_ GGS_toManyRelationshipOptionGeneration::getter_getHasOpposite (UNUSED_LOCATION_ARGS) const {
  GGS_toManyRelationshipOptionGeneration_2E_hasOpposite_3F_ result ;
  if (mEnum == Enumeration::enum_hasOpposite) {
    const auto ptr = (const GGS_toManyRelationshipOptionGeneration_2E_hasOpposite *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_toManyRelationshipOptionGeneration_2E_hasOpposite (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyRelationshipOptionGeneration::getAssociatedValuesFor_hasOpposite (GGS_string & out_oppositeName) const {
  const auto ptr = (const GGS_toManyRelationshipOptionGeneration_2E_hasOpposite *) mAssociatedValues.associatedValuesPointer () ;
  out_oppositeName = ptr->mProperty_oppositeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionGeneration_2E_hasDependance_3F_ GGS_toManyRelationshipOptionGeneration::getter_getHasDependance (UNUSED_LOCATION_ARGS) const {
  GGS_toManyRelationshipOptionGeneration_2E_hasDependance_3F_ result ;
  if (mEnum == Enumeration::enum_hasDependance) {
    const auto ptr = (const GGS_toManyRelationshipOptionGeneration_2E_hasDependance *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_toManyRelationshipOptionGeneration_2E_hasDependance (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyRelationshipOptionGeneration::getAssociatedValuesFor_hasDependance (GGS_string & out_masterPropertyName,
                                                                                   GGS_string & out_masterPropertySwiftTypeName) const {
  const auto ptr = (const GGS_toManyRelationshipOptionGeneration_2E_hasDependance *) mAssociatedValues.associatedValuesPointer () ;
  out_masterPropertyName = ptr->mProperty_masterPropertyName ;
  out_masterPropertySwiftTypeName = ptr->mProperty_masterPropertySwiftTypeName ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_toManyRelationshipOptionGeneration [4] = {
  "(not built)",
  "none",
  "hasOpposite",
  "hasDependance"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_toManyRelationshipOptionGeneration::getter_isNone (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_none == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_toManyRelationshipOptionGeneration::getter_isHasOpposite (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_hasOpposite == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_toManyRelationshipOptionGeneration::getter_isHasDependance (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_hasDependance == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyRelationshipOptionGeneration::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<enum @toManyRelationshipOptionGeneration: ") ;
  ioString.appendCString (gEnumNameArrayFor_toManyRelationshipOptionGeneration [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @toManyRelationshipOptionGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionGeneration ("toManyRelationshipOptionGeneration",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_toManyRelationshipOptionGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyRelationshipOptionGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_toManyRelationshipOptionGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_toManyRelationshipOptionGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionGeneration GGS_toManyRelationshipOptionGeneration::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_toManyRelationshipOptionGeneration result ;
  const GGS_toManyRelationshipOptionGeneration * p = (const GGS_toManyRelationshipOptionGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_toManyRelationshipOptionGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyRelationshipOptionGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum propertyKind
//--------------------------------------------------------------------------------------------------

GGS_propertyKind::GGS_propertyKind (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_propertyKind GGS_propertyKind::class_func_property (const GGS_typeKind & inAssociatedValue0,
                                                        const GGS_propertyAccessibility & inAssociatedValue1
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKind result ;
  result.mEnum = Enumeration::enum_property ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_propertyKind_2E_property (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind GGS_propertyKind::class_func_toMany (const GGS_lstring & inAssociatedValue0,
                                                      const GGS_propertyAccessibility & inAssociatedValue1,
                                                      const GGS_bool & inAssociatedValue2,
                                                      const GGS_toManyRelationshipOptionAST & inAssociatedValue3
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKind result ;
  result.mEnum = Enumeration::enum_toMany ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_propertyKind_2E_toMany (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind GGS_propertyKind::class_func_toOne (const GGS_lstring & inAssociatedValue0,
                                                     const GGS_propertyAccessibility & inAssociatedValue1,
                                                     const GGS_bool & inAssociatedValue2,
                                                     const GGS_toOneOppositeRelationship & inAssociatedValue3,
                                                     const GGS_bool & inAssociatedValue4
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKind result ;
  result.mEnum = Enumeration::enum_toOne ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_propertyKind_2E_toOne (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3, inAssociatedValue4)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind GGS_propertyKind::class_func_arrayController (const GGS_lstring & inAssociatedValue0,
                                                               const GGS_bool & inAssociatedValue1
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKind result ;
  result.mEnum = Enumeration::enum_arrayController ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_propertyKind_2E_arrayController (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind GGS_propertyKind::class_func_selectionController (const GGS_string & inAssociatedValue0
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKind result ;
  result.mEnum = Enumeration::enum_selectionController ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_propertyKind_2E_selectionController (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKind::method_extractProperty (GGS_typeKind & outAssociatedValue_type,
                                               GGS_propertyAccessibility & outAssociatedValue_accessibility,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_property) {
    outAssociatedValue_type.drop () ;
    outAssociatedValue_accessibility.drop () ;
    String s ;
    s.appendCString ("method @propertyKind.property invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_propertyKind_2E_property *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_type = ptr->mProperty_type ;
    outAssociatedValue_accessibility = ptr->mProperty_accessibility ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKind::method_extractToMany (GGS_lstring & outAssociatedValue_typeName,
                                             GGS_propertyAccessibility & outAssociatedValue_accessibility,
                                             GGS_bool & outAssociatedValue_graphic,
                                             GGS_toManyRelationshipOptionAST & outAssociatedValue_optionKind,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_toMany) {
    outAssociatedValue_typeName.drop () ;
    outAssociatedValue_accessibility.drop () ;
    outAssociatedValue_graphic.drop () ;
    outAssociatedValue_optionKind.drop () ;
    String s ;
    s.appendCString ("method @propertyKind.toMany invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_propertyKind_2E_toMany *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_typeName = ptr->mProperty_typeName ;
    outAssociatedValue_accessibility = ptr->mProperty_accessibility ;
    outAssociatedValue_graphic = ptr->mProperty_graphic ;
    outAssociatedValue_optionKind = ptr->mProperty_optionKind ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKind::method_extractToOne (GGS_lstring & outAssociatedValue_typeName,
                                            GGS_propertyAccessibility & outAssociatedValue_accessibility,
                                            GGS_bool & outAssociatedValue_graphic,
                                            GGS_toOneOppositeRelationship & outAssociatedValue_opposite,
                                            GGS_bool & outAssociatedValue_isWeak,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_toOne) {
    outAssociatedValue_typeName.drop () ;
    outAssociatedValue_accessibility.drop () ;
    outAssociatedValue_graphic.drop () ;
    outAssociatedValue_opposite.drop () ;
    outAssociatedValue_isWeak.drop () ;
    String s ;
    s.appendCString ("method @propertyKind.toOne invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_propertyKind_2E_toOne *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_typeName = ptr->mProperty_typeName ;
    outAssociatedValue_accessibility = ptr->mProperty_accessibility ;
    outAssociatedValue_graphic = ptr->mProperty_graphic ;
    outAssociatedValue_opposite = ptr->mProperty_opposite ;
    outAssociatedValue_isWeak = ptr->mProperty_isWeak ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKind::method_extractArrayController (GGS_lstring & outAssociatedValue_typeName,
                                                      GGS_bool & outAssociatedValue_graphic,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_arrayController) {
    outAssociatedValue_typeName.drop () ;
    outAssociatedValue_graphic.drop () ;
    String s ;
    s.appendCString ("method @propertyKind.arrayController invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_propertyKind_2E_arrayController *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_typeName = ptr->mProperty_typeName ;
    outAssociatedValue_graphic = ptr->mProperty_graphic ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKind::method_extractSelectionController (GGS_string & outAssociatedValue_typeName,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_selectionController) {
    outAssociatedValue_typeName.drop () ;
    String s ;
    s.appendCString ("method @propertyKind.selectionController invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_propertyKind_2E_selectionController *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_typeName = ptr->mProperty_typeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_property_3F_ GGS_propertyKind::getter_getProperty (UNUSED_LOCATION_ARGS) const {
  GGS_propertyKind_2E_property_3F_ result ;
  if (mEnum == Enumeration::enum_property) {
    const auto ptr = (const GGS_propertyKind_2E_property *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_propertyKind_2E_property (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKind::getAssociatedValuesFor_property (GGS_typeKind & out_type,
                                                        GGS_propertyAccessibility & out_accessibility) const {
  const auto ptr = (const GGS_propertyKind_2E_property *) mAssociatedValues.associatedValuesPointer () ;
  out_type = ptr->mProperty_type ;
  out_accessibility = ptr->mProperty_accessibility ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_toMany_3F_ GGS_propertyKind::getter_getToMany (UNUSED_LOCATION_ARGS) const {
  GGS_propertyKind_2E_toMany_3F_ result ;
  if (mEnum == Enumeration::enum_toMany) {
    const auto ptr = (const GGS_propertyKind_2E_toMany *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_propertyKind_2E_toMany (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKind::getAssociatedValuesFor_toMany (GGS_lstring & out_typeName,
                                                      GGS_propertyAccessibility & out_accessibility,
                                                      GGS_bool & out_graphic,
                                                      GGS_toManyRelationshipOptionAST & out_optionKind) const {
  const auto ptr = (const GGS_propertyKind_2E_toMany *) mAssociatedValues.associatedValuesPointer () ;
  out_typeName = ptr->mProperty_typeName ;
  out_accessibility = ptr->mProperty_accessibility ;
  out_graphic = ptr->mProperty_graphic ;
  out_optionKind = ptr->mProperty_optionKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_toOne_3F_ GGS_propertyKind::getter_getToOne (UNUSED_LOCATION_ARGS) const {
  GGS_propertyKind_2E_toOne_3F_ result ;
  if (mEnum == Enumeration::enum_toOne) {
    const auto ptr = (const GGS_propertyKind_2E_toOne *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_propertyKind_2E_toOne (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKind::getAssociatedValuesFor_toOne (GGS_lstring & out_typeName,
                                                     GGS_propertyAccessibility & out_accessibility,
                                                     GGS_bool & out_graphic,
                                                     GGS_toOneOppositeRelationship & out_opposite,
                                                     GGS_bool & out_isWeak) const {
  const auto ptr = (const GGS_propertyKind_2E_toOne *) mAssociatedValues.associatedValuesPointer () ;
  out_typeName = ptr->mProperty_typeName ;
  out_accessibility = ptr->mProperty_accessibility ;
  out_graphic = ptr->mProperty_graphic ;
  out_opposite = ptr->mProperty_opposite ;
  out_isWeak = ptr->mProperty_isWeak ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_arrayController_3F_ GGS_propertyKind::getter_getArrayController (UNUSED_LOCATION_ARGS) const {
  GGS_propertyKind_2E_arrayController_3F_ result ;
  if (mEnum == Enumeration::enum_arrayController) {
    const auto ptr = (const GGS_propertyKind_2E_arrayController *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_propertyKind_2E_arrayController (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKind::getAssociatedValuesFor_arrayController (GGS_lstring & out_typeName,
                                                               GGS_bool & out_graphic) const {
  const auto ptr = (const GGS_propertyKind_2E_arrayController *) mAssociatedValues.associatedValuesPointer () ;
  out_typeName = ptr->mProperty_typeName ;
  out_graphic = ptr->mProperty_graphic ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_selectionController_3F_ GGS_propertyKind::getter_getSelectionController (UNUSED_LOCATION_ARGS) const {
  GGS_propertyKind_2E_selectionController_3F_ result ;
  if (mEnum == Enumeration::enum_selectionController) {
    const auto ptr = (const GGS_propertyKind_2E_selectionController *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_propertyKind_2E_selectionController (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKind::getAssociatedValuesFor_selectionController (GGS_string & out_typeName) const {
  const auto ptr = (const GGS_propertyKind_2E_selectionController *) mAssociatedValues.associatedValuesPointer () ;
  out_typeName = ptr->mProperty_typeName ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_propertyKind [6] = {
  "(not built)",
  "property",
  "toMany",
  "toOne",
  "arrayController",
  "selectionController"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyKind::getter_isProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_property == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyKind::getter_isToMany (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_toMany == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyKind::getter_isToOne (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_toOne == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyKind::getter_isArrayController (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_arrayController == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyKind::getter_isSelectionController (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_selectionController == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKind::description (String & ioString,
                                    const int32_t inIndentation) const {
  ioString.appendCString ("<enum @propertyKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_propertyKind [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @propertyKind generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyKind ("propertyKind",
                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind GGS_propertyKind::extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GGS_propertyKind result ;
  const GGS_propertyKind * p = (const GGS_propertyKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_toManyPropertyGeneration_2E_weak::objectCompare (const GGS_toManyPropertyGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyPropertyGeneration_2E_weak::GGS_toManyPropertyGeneration_2E_weak (void) :
GGS_propertyGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_toManyPropertyGeneration_2E_weak & GGS_toManyPropertyGeneration_2E_weak::operator = (const GGS_toManyPropertyGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyPropertyGeneration_2E_weak::GGS_toManyPropertyGeneration_2E_weak (const GGS_toManyPropertyGeneration & inSource) :
GGS_propertyGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_toManyPropertyGeneration_2E_weak GGS_toManyPropertyGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_toManyPropertyGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyPropertyGeneration GGS_toManyPropertyGeneration_2E_weak::unwrappedValue (void) const {
  GGS_toManyPropertyGeneration result ;
  if (isValid ()) {
    const cPtr_toManyPropertyGeneration * p = (cPtr_toManyPropertyGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_toManyPropertyGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyPropertyGeneration GGS_toManyPropertyGeneration_2E_weak::bang_toManyPropertyGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_toManyPropertyGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_toManyPropertyGeneration) ;
      result = GGS_toManyPropertyGeneration ((cPtr_toManyPropertyGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @toManyPropertyGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyPropertyGeneration_2E_weak ("toManyPropertyGeneration.weak",
                                                                                     & kTypeDescriptor_GALGAS_propertyGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_toManyPropertyGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyPropertyGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_toManyPropertyGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_toManyPropertyGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyPropertyGeneration_2E_weak GGS_toManyPropertyGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_toManyPropertyGeneration_2E_weak result ;
  const GGS_toManyPropertyGeneration_2E_weak * p = (const GGS_toManyPropertyGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_toManyPropertyGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyPropertyGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@toManyPropertyGenerationList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_toManyPropertyGenerationList : public cCollectionElement {
  public: GGS_toManyPropertyGenerationList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_toManyPropertyGenerationList (const GGS_toManyPropertyGeneration & in_mProperty
                                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_toManyPropertyGenerationList (const GGS_toManyPropertyGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_toManyPropertyGenerationList::cCollectionElement_toManyPropertyGenerationList (const GGS_toManyPropertyGeneration & in_mProperty
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mProperty) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_toManyPropertyGenerationList::cCollectionElement_toManyPropertyGenerationList (const GGS_toManyPropertyGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mProperty) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_toManyPropertyGenerationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_toManyPropertyGenerationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_toManyPropertyGenerationList (mObject.mProperty_mProperty COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @toManyPropertyGenerationList
//--------------------------------------------------------------------------------------------------

GGS_toManyPropertyGenerationList::GGS_toManyPropertyGenerationList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_toManyPropertyGenerationList::GGS_toManyPropertyGenerationList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_toManyPropertyGenerationList * p = (cCollectionElement_toManyPropertyGenerationList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_toManyPropertyGenerationList) ;
    const GGS_toManyPropertyGenerationList_2E_element element (p->mObject.mProperty_mProperty) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyPropertyGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GGS_toManyPropertyGeneration & in_mProperty
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_toManyPropertyGenerationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_toManyPropertyGenerationList (in_mProperty COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_toManyPropertyGenerationList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_toManyPropertyGenerationList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyPropertyGenerationList::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mProperty:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mProperty.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyPropertyGenerationList GGS_toManyPropertyGenerationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_toManyPropertyGenerationList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyPropertyGenerationList GGS_toManyPropertyGenerationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_toManyPropertyGenerationList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyPropertyGenerationList::plusPlusAssignOperation (const GGS_toManyPropertyGenerationList_2E_element & inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_toManyPropertyGenerationList GGS_toManyPropertyGenerationList::class_func_listWithValue (const GGS_toManyPropertyGeneration & inOperand0
                                                                                             COMMA_LOCATION_ARGS) {
  const GGS_toManyPropertyGenerationList_2E_element element (inOperand0) ;
  GGS_toManyPropertyGenerationList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyPropertyGenerationList::addAssignOperation (const GGS_toManyPropertyGeneration & inOperand0
                                                           COMMA_LOCATION_ARGS) {
  const GGS_toManyPropertyGenerationList_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyPropertyGenerationList::setter_append (const GGS_toManyPropertyGeneration inOperand0,
                                                      Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  const GGS_toManyPropertyGenerationList_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyPropertyGenerationList::setter_insertAtIndex (const GGS_toManyPropertyGeneration inOperand0,
                                                             const GGS_uint inInsertionIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  const GGS_toManyPropertyGenerationList_2E_element newElement (inOperand0) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyPropertyGenerationList::setter_removeAtIndex (GGS_toManyPropertyGeneration & outOperand0,
                                                             const GGS_uint inRemoveIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mProperty ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyPropertyGenerationList::setter_popFirst (GGS_toManyPropertyGeneration & outOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mProperty ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyPropertyGenerationList::setter_popLast (GGS_toManyPropertyGeneration & outOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mProperty ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyPropertyGenerationList::method_first (GGS_toManyPropertyGeneration & outOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mProperty ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyPropertyGenerationList::method_last (GGS_toManyPropertyGeneration & outOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mProperty ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_toManyPropertyGenerationList GGS_toManyPropertyGenerationList::add_operation (const GGS_toManyPropertyGenerationList & inOperand,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_toManyPropertyGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyPropertyGenerationList GGS_toManyPropertyGenerationList::subList (const int32_t inStart,
                                                                            const int32_t inLength,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_toManyPropertyGenerationList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyPropertyGenerationList GGS_toManyPropertyGenerationList::getter_subListWithRange (const GGS_range & inRange,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_toManyPropertyGenerationList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyPropertyGenerationList GGS_toManyPropertyGenerationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_toManyPropertyGenerationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyPropertyGenerationList GGS_toManyPropertyGenerationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_toManyPropertyGenerationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyPropertyGenerationList::plusAssignOperation (const GGS_toManyPropertyGenerationList inList,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyPropertyGenerationList::setter_setMPropertyAtIndex (GGS_toManyPropertyGeneration inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mProperty = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_toManyPropertyGeneration GGS_toManyPropertyGenerationList::getter_mPropertyAtIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_toManyPropertyGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mProperty ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @toManyPropertyGenerationList
//--------------------------------------------------------------------------------------------------

DownEnumerator_toManyPropertyGenerationList::DownEnumerator_toManyPropertyGenerationList (const GGS_toManyPropertyGenerationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyPropertyGenerationList_2E_element DownEnumerator_toManyPropertyGenerationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyPropertyGeneration DownEnumerator_toManyPropertyGenerationList::current_mProperty (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProperty ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @toManyPropertyGenerationList
//--------------------------------------------------------------------------------------------------

UpEnumerator_toManyPropertyGenerationList::UpEnumerator_toManyPropertyGenerationList (const GGS_toManyPropertyGenerationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_toManyPropertyGenerationList_2E_element UpEnumerator_toManyPropertyGenerationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyPropertyGeneration UpEnumerator_toManyPropertyGenerationList::current_mProperty (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProperty ;
}




//--------------------------------------------------------------------------------------------------
//     @toManyPropertyGenerationList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyPropertyGenerationList ("toManyPropertyGenerationList",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_toManyPropertyGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyPropertyGenerationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_toManyPropertyGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_toManyPropertyGenerationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyPropertyGenerationList GGS_toManyPropertyGenerationList::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_toManyPropertyGenerationList result ;
  const GGS_toManyPropertyGenerationList * p = (const GGS_toManyPropertyGenerationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_toManyPropertyGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyPropertyGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_atomicClassDeclarationAST_2E_weak::objectCompare (const GGS_atomicClassDeclarationAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicClassDeclarationAST_2E_weak::GGS_atomicClassDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_atomicClassDeclarationAST_2E_weak & GGS_atomicClassDeclarationAST_2E_weak::operator = (const GGS_atomicClassDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicClassDeclarationAST_2E_weak::GGS_atomicClassDeclarationAST_2E_weak (const GGS_atomicClassDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_atomicClassDeclarationAST_2E_weak GGS_atomicClassDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_atomicClassDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicClassDeclarationAST GGS_atomicClassDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_atomicClassDeclarationAST result ;
  if (isValid ()) {
    const cPtr_atomicClassDeclarationAST * p = (cPtr_atomicClassDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_atomicClassDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicClassDeclarationAST GGS_atomicClassDeclarationAST_2E_weak::bang_atomicClassDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_atomicClassDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_atomicClassDeclarationAST) ;
      result = GGS_atomicClassDeclarationAST ((cPtr_atomicClassDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @atomicClassDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_atomicClassDeclarationAST_2E_weak ("atomicClassDeclarationAST.weak",
                                                                                      & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_atomicClassDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicClassDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_atomicClassDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_atomicClassDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicClassDeclarationAST_2E_weak GGS_atomicClassDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_atomicClassDeclarationAST_2E_weak result ;
  const GGS_atomicClassDeclarationAST_2E_weak * p = (const GGS_atomicClassDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_atomicClassDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("atomicClassDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@mainXibLineDescriptorList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_mainXibLineDescriptorList : public cCollectionElement {
  public: GGS_mainXibLineDescriptorList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_mainXibLineDescriptorList (const GGS_mainXibElement & in_mElement
                                                        COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_mainXibLineDescriptorList (const GGS_mainXibLineDescriptorList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_mainXibLineDescriptorList::cCollectionElement_mainXibLineDescriptorList (const GGS_mainXibElement & in_mElement
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mElement) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_mainXibLineDescriptorList::cCollectionElement_mainXibLineDescriptorList (const GGS_mainXibLineDescriptorList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mElement) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_mainXibLineDescriptorList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_mainXibLineDescriptorList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_mainXibLineDescriptorList (mObject.mProperty_mElement COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @mainXibLineDescriptorList
//--------------------------------------------------------------------------------------------------

GGS_mainXibLineDescriptorList::GGS_mainXibLineDescriptorList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibLineDescriptorList::GGS_mainXibLineDescriptorList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_mainXibLineDescriptorList * p = (cCollectionElement_mainXibLineDescriptorList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_mainXibLineDescriptorList) ;
    const GGS_mainXibLineDescriptorList_2E_element element (p->mObject.mProperty_mElement) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibLineDescriptorList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GGS_mainXibElement & in_mElement
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_mainXibLineDescriptorList * p = nullptr ;
  macroMyNew (p, cCollectionElement_mainXibLineDescriptorList (in_mElement COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_mainXibLineDescriptorList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_mainXibLineDescriptorList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibLineDescriptorList::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mElement:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mElement.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibLineDescriptorList GGS_mainXibLineDescriptorList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_mainXibLineDescriptorList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibLineDescriptorList GGS_mainXibLineDescriptorList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_mainXibLineDescriptorList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibLineDescriptorList::plusPlusAssignOperation (const GGS_mainXibLineDescriptorList_2E_element & inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibLineDescriptorList GGS_mainXibLineDescriptorList::class_func_listWithValue (const GGS_mainXibElement & inOperand0
                                                                                       COMMA_LOCATION_ARGS) {
  const GGS_mainXibLineDescriptorList_2E_element element (inOperand0) ;
  GGS_mainXibLineDescriptorList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibLineDescriptorList::addAssignOperation (const GGS_mainXibElement & inOperand0
                                                        COMMA_LOCATION_ARGS) {
  const GGS_mainXibLineDescriptorList_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibLineDescriptorList::setter_append (const GGS_mainXibElement inOperand0,
                                                   Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  const GGS_mainXibLineDescriptorList_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibLineDescriptorList::setter_insertAtIndex (const GGS_mainXibElement inOperand0,
                                                          const GGS_uint inInsertionIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  const GGS_mainXibLineDescriptorList_2E_element newElement (inOperand0) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibLineDescriptorList::setter_removeAtIndex (GGS_mainXibElement & outOperand0,
                                                          const GGS_uint inRemoveIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mElement ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibLineDescriptorList::setter_popFirst (GGS_mainXibElement & outOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mElement ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibLineDescriptorList::setter_popLast (GGS_mainXibElement & outOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mElement ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibLineDescriptorList::method_first (GGS_mainXibElement & outOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mElement ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibLineDescriptorList::method_last (GGS_mainXibElement & outOperand0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mElement ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibLineDescriptorList GGS_mainXibLineDescriptorList::add_operation (const GGS_mainXibLineDescriptorList & inOperand,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_mainXibLineDescriptorList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibLineDescriptorList GGS_mainXibLineDescriptorList::subList (const int32_t inStart,
                                                                      const int32_t inLength,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_mainXibLineDescriptorList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibLineDescriptorList GGS_mainXibLineDescriptorList::getter_subListWithRange (const GGS_range & inRange,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_mainXibLineDescriptorList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibLineDescriptorList GGS_mainXibLineDescriptorList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_mainXibLineDescriptorList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibLineDescriptorList GGS_mainXibLineDescriptorList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_mainXibLineDescriptorList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibLineDescriptorList::plusAssignOperation (const GGS_mainXibLineDescriptorList inList,
                                                         Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibLineDescriptorList::setter_setMElementAtIndex (GGS_mainXibElement inOperand,
                                                               GGS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mElement = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_mainXibElement GGS_mainXibLineDescriptorList::getter_mElementAtIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_mainXibElement result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mElement ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @mainXibLineDescriptorList
//--------------------------------------------------------------------------------------------------

DownEnumerator_mainXibLineDescriptorList::DownEnumerator_mainXibLineDescriptorList (const GGS_mainXibLineDescriptorList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibLineDescriptorList_2E_element DownEnumerator_mainXibLineDescriptorList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibElement DownEnumerator_mainXibLineDescriptorList::current_mElement (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mElement ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @mainXibLineDescriptorList
//--------------------------------------------------------------------------------------------------

UpEnumerator_mainXibLineDescriptorList::UpEnumerator_mainXibLineDescriptorList (const GGS_mainXibLineDescriptorList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibLineDescriptorList_2E_element UpEnumerator_mainXibLineDescriptorList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibElement UpEnumerator_mainXibLineDescriptorList::current_mElement (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mElement ;
}




//--------------------------------------------------------------------------------------------------
//     @mainXibLineDescriptorList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_mainXibLineDescriptorList ("mainXibLineDescriptorList",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_mainXibLineDescriptorList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mainXibLineDescriptorList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_mainXibLineDescriptorList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_mainXibLineDescriptorList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibLineDescriptorList GGS_mainXibLineDescriptorList::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_mainXibLineDescriptorList result ;
  const GGS_mainXibLineDescriptorList * p = (const GGS_mainXibLineDescriptorList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_mainXibLineDescriptorList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mainXibLineDescriptorList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum mainXibElement
//--------------------------------------------------------------------------------------------------

GGS_mainXibElement::GGS_mainXibElement (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_mainXibElement GGS_mainXibElement::class_func_text (const GGS_lstring & inAssociatedValue0
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_mainXibElement result ;
  result.mEnum = Enumeration::enum_text ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_mainXibElement_2E_text (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibElement GGS_mainXibElement::class_func_outlet (const GGS_lstring & inAssociatedValue0,
                                                          const GGS_lstring & inAssociatedValue1
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_mainXibElement result ;
  result.mEnum = Enumeration::enum_outlet ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_mainXibElement_2E_outlet (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibElement::method_extractText (GGS_lstring & outAssociatedValue_text,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_text) {
    outAssociatedValue_text.drop () ;
    String s ;
    s.appendCString ("method @mainXibElement.text invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_mainXibElement_2E_text *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_text = ptr->mProperty_text ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibElement::method_extractOutlet (GGS_lstring & outAssociatedValue_outletType,
                                               GGS_lstring & outAssociatedValue_outletName,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_outlet) {
    outAssociatedValue_outletType.drop () ;
    outAssociatedValue_outletName.drop () ;
    String s ;
    s.appendCString ("method @mainXibElement.outlet invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_mainXibElement_2E_outlet *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_outletType = ptr->mProperty_outletType ;
    outAssociatedValue_outletName = ptr->mProperty_outletName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibElement_2E_text_3F_ GGS_mainXibElement::getter_getText (UNUSED_LOCATION_ARGS) const {
  GGS_mainXibElement_2E_text_3F_ result ;
  if (mEnum == Enumeration::enum_text) {
    const auto ptr = (const GGS_mainXibElement_2E_text *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_mainXibElement_2E_text (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibElement::getAssociatedValuesFor_text (GGS_lstring & out_text) const {
  const auto ptr = (const GGS_mainXibElement_2E_text *) mAssociatedValues.associatedValuesPointer () ;
  out_text = ptr->mProperty_text ;
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibElement_2E_outlet_3F_ GGS_mainXibElement::getter_getOutlet (UNUSED_LOCATION_ARGS) const {
  GGS_mainXibElement_2E_outlet_3F_ result ;
  if (mEnum == Enumeration::enum_outlet) {
    const auto ptr = (const GGS_mainXibElement_2E_outlet *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_mainXibElement_2E_outlet (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibElement::getAssociatedValuesFor_outlet (GGS_lstring & out_outletType,
                                                        GGS_lstring & out_outletName) const {
  const auto ptr = (const GGS_mainXibElement_2E_outlet *) mAssociatedValues.associatedValuesPointer () ;
  out_outletType = ptr->mProperty_outletType ;
  out_outletName = ptr->mProperty_outletName ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_mainXibElement [3] = {
  "(not built)",
  "text",
  "outlet"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_mainXibElement::getter_isText (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_text == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_mainXibElement::getter_isOutlet (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_outlet == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibElement::description (String & ioString,
                                      const int32_t inIndentation) const {
  ioString.appendCString ("<enum @mainXibElement: ") ;
  ioString.appendCString (gEnumNameArrayFor_mainXibElement [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @mainXibElement generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_mainXibElement ("mainXibElement",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_mainXibElement::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mainXibElement ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_mainXibElement::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_mainXibElement (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibElement GGS_mainXibElement::extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_mainXibElement result ;
  const GGS_mainXibElement * p = (const GGS_mainXibElement *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_mainXibElement *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mainXibElement", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@mainXibDescriptorList generateCode'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_generateCode (const GGS_mainXibDescriptorList & inObject,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outResult ; // Returned variable
  result_outResult = GGS_string::makeEmptyString () ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_mainXibDescriptorList temp_1 = inObject ;
    test_0 = GGS_bool (ComparisonKind::greaterThan, temp_1.getter_count (SOURCE_FILE ("main-xib.ggs", 87)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_mainXibDescriptorList temp_2 = inObject ;
      result_outResult = GGS_string ("    var y = OUTLET_HEIGHT * 1.5 * ").add_operation (temp_2.getter_count (SOURCE_FILE ("main-xib.ggs", 88)).getter_string (SOURCE_FILE ("main-xib.ggs", 88)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 88)).add_operation (GGS_string (".0\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 88)) ;
      result_outResult.plusAssignOperation(GGS_string ("    let view = NSView (frame:NSRect (x:0.0, y:0.0, width:10.0, height:10.0))\n"), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 89)) ;
      GGS_bigint var_idx_2876 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 90)) ;
      GGS_bigint var_columnMax_2892 = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 91)) ;
      const GGS_mainXibDescriptorList temp_3 = inObject ;
      UpEnumerator_mainXibDescriptorList enumerator_2915 (temp_3) ;
      while (enumerator_2915.hasCurrentObject ()) {
        GGS_bigint var_column_2943 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 93)) ;
        result_outResult.plusAssignOperation(GGS_string ("    y -= OUTLET_HEIGHT\n"), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 94)) ;
        UpEnumerator_mainXibLineDescriptorList enumerator_3011 (enumerator_2915.current_mLine (HERE)) ;
        while (enumerator_3011.hasCurrentObject ()) {
          switch (enumerator_3011.current_mElement (HERE).enumValue ()) {
          case GGS_mainXibElement::Enumeration::invalid:
            break ;
          case GGS_mainXibElement::Enumeration::enum_text:
            {
              GGS_lstring extractedValue_3076_t_0 ;
              enumerator_3011.current_mElement (HERE).getAssociatedValuesFor_text (extractedValue_3076_t_0) ;
              var_idx_2876.plusAssignOperation(GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 98)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 98)) ;
              result_outResult.plusAssignOperation(GGS_string ("  //--- Text ").add_operation (extractedValue_3076_t_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 99)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 99)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 99)) ;
              result_outResult.plusAssignOperation(GGS_string ("  //  createTextFieldForText (").add_operation (extractedValue_3076_t_0.readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("main-xib.ggs", 100)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 100)).add_operation (GGS_string (", y:&y, col:0, view:view)\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 100)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 100)) ;
              result_outResult.plusAssignOperation(GGS_string ("    let tf").add_operation (var_idx_2876.getter_string (SOURCE_FILE ("main-xib.ggs", 101)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 101)).add_operation (GGS_string (" = NSTextField (frame:NSRect (x:10.0 + OUTLET_WIDTH * "), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 101)).add_operation (var_column_2943.getter_string (SOURCE_FILE ("main-xib.ggs", 101)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 101)).add_operation (GGS_string (".0, y:y, width:OUTLET_WIDTH, height:OUTLET_HEIGHT))\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 101)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 101)) ;
              result_outResult.plusAssignOperation(GGS_string ("    tf").add_operation (var_idx_2876.getter_string (SOURCE_FILE ("main-xib.ggs", 102)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 102)).add_operation (GGS_string (".stringValue = "), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 102)).add_operation (extractedValue_3076_t_0.readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("main-xib.ggs", 102)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 102)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 102)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 102)) ;
              result_outResult.plusAssignOperation(GGS_string ("    tf").add_operation (var_idx_2876.getter_string (SOURCE_FILE ("main-xib.ggs", 103)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 103)).add_operation (GGS_string (".isEditable = false\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 103)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 103)) ;
              result_outResult.plusAssignOperation(GGS_string ("    tf").add_operation (var_idx_2876.getter_string (SOURCE_FILE ("main-xib.ggs", 104)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 104)).add_operation (GGS_string (".drawsBackground = false\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 104)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 104)) ;
              result_outResult.plusAssignOperation(GGS_string ("    tf").add_operation (var_idx_2876.getter_string (SOURCE_FILE ("main-xib.ggs", 105)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 105)).add_operation (GGS_string (".isBordered = false\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 105)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 105)) ;
              result_outResult.plusAssignOperation(GGS_string ("    view.addSubview (tf").add_operation (var_idx_2876.getter_string (SOURCE_FILE ("main-xib.ggs", 106)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 106)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 106)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 106)) ;
            }
            break ;
          case GGS_mainXibElement::Enumeration::enum_outlet:
            {
              GGS_lstring extractedValue_3804_outletType_0 ;
              GGS_lstring extractedValue_3816_outletName_1 ;
              enumerator_3011.current_mElement (HERE).getAssociatedValuesFor_outlet (extractedValue_3804_outletType_0, extractedValue_3816_outletName_1) ;
              result_outResult.plusAssignOperation(GGS_string ("  //--- Outlet ").add_operation (extractedValue_3816_outletName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 108)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 108)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 108)) ;
              result_outResult.plusAssignOperation(GGS_string ("    ").add_operation (extractedValue_3816_outletName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 109)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 109)).add_operation (extractedValue_3804_outletType_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 109)).add_operation (GGS_string ("(frame:NSRect (x:10.0 + OUTLET_WIDTH * "), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 109)).add_operation (var_column_2943.getter_string (SOURCE_FILE ("main-xib.ggs", 109)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 109)).add_operation (GGS_string (".0, y:y, width:OUTLET_WIDTH, height:OUTLET_HEIGHT))\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 109)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 109)) ;
              result_outResult.plusAssignOperation(GGS_string ("    ").add_operation (extractedValue_3816_outletName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 110)).add_operation (GGS_string ("\?.setAccessibilityIdentifier ("), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 110)).add_operation (extractedValue_3816_outletName_1.readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("main-xib.ggs", 110)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 110)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 110)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 110)) ;
              result_outResult.plusAssignOperation(GGS_string ("    view.addSubview (").add_operation (extractedValue_3816_outletName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 111)).add_operation (GGS_string ("!)\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 111)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 111)) ;
            }
            break ;
          }
          var_column_2943.plusAssignOperation(GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 113)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 113)) ;
          enumerator_3011.gotoNextObject () ;
        }
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = GGS_bool (ComparisonKind::greaterThan, var_column_2943.objectCompare (var_columnMax_2892)).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            var_columnMax_2892 = var_column_2943 ;
          }
        }
        result_outResult.plusAssignOperation(GGS_string ("    y -= OUTLET_HEIGHT / 2.0\n"), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 118)) ;
        enumerator_2915.gotoNextObject () ;
      }
      result_outResult.plusAssignOperation(GGS_string ("  //--- Set pref window content view\n"), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 120)) ;
      const GGS_mainXibDescriptorList temp_5 = inObject ;
      result_outResult.plusAssignOperation(GGS_string ("    window\?.setContentSize (NSSize (width:20.0 + OUTLET_WIDTH * ").add_operation (var_columnMax_2892.getter_string (SOURCE_FILE ("main-xib.ggs", 121)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 121)).add_operation (GGS_string (".0, height:OUTLET_HEIGHT * (1.5 * "), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 121)).add_operation (temp_5.getter_count (SOURCE_FILE ("main-xib.ggs", 121)).getter_string (SOURCE_FILE ("main-xib.ggs", 121)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 121)).add_operation (GGS_string (".0 + 0.5)))\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 121)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 121)) ;
      result_outResult.plusAssignOperation(GGS_string ("    window\?.contentView = view\n"), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 122)) ;
    }
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//  Map type @classMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_classMap::GGS_classMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_classMap::~ GGS_classMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_classMap::GGS_classMap (const GGS_classMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_classMap & GGS_classMap::operator = (const GGS_classMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_classMap GGS_classMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_classMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classMap GGS_classMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_classMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_classMap::getter_hasKey (const GGS_string & inKey
                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_classMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                             const GGS_uint & inLevel
                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_classMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_classMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_classMap::getter_locationForKey (const GGS_string & inKey,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_classMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_classMap::getter_keyList (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_classMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_classMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classMap::performInsert (const GGS_classMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_classMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_classMap_2E_element>
GGS_classMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_classMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_classMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_classMap_2E_element>>
GGS_classMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_classMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_classMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_classMap_2E_element_3F_ GGS_classMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_classMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_classMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_classMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_classMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mClassKind = info->mProperty_mClassKind ;
      element.mProperty_mPropertyMap = info->mProperty_mPropertyMap ;
      element.mProperty_mActionMap = info->mProperty_mActionMap ;
      element.mProperty_mPropertyGenerationList = info->mProperty_mPropertyGenerationList ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classMap_2E_element GGS_classMap
::readSubscript__3F_searchKey (const GGS_lstring & inLKey,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) const {
  GGS_classMap_2E_element result ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_classMap_2E_element> info = infoForKey (key) ;
    if (info.isNotNil ()) {
      result = info.value () ;
    }else{
      const char * kErrorMessage = "there is no '%K' class" ;
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kErrorMessage COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classMap GGS_classMap::class_func_mapWithMapToOverride (const GGS_classMap & inMapToOverride
                                                            COMMA_LOCATION_ARGS) {
  GGS_classMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_classMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classMap GGS_classMap::getter_overriddenMap (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  GGS_classMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classMap::setter_insertKey (GGS_lstring inLKey,
                                     GGS_classKind inArgument0,
                                     GGS_propertyMap inArgument1,
                                     GGS_actionMap inArgument2,
                                     GGS_propertyGenerationList inArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
  const GGS_classMap_2E_element element (inLKey, inArgument0, inArgument1, inArgument2, inArgument3) ;
  const char * kInsertErrorMessage = "the '%K' class is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classMap::method_searchKey (GGS_lstring inLKey,
                                     GGS_classKind & outArgument0,
                                     GGS_propertyMap & outArgument1,
                                     GGS_actionMap & outArgument2,
                                     GGS_propertyGenerationList & outArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_classMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "there is no '%K' class" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }else{
    outArgument0 = info->mProperty_mClassKind ;
    outArgument1 = info->mProperty_mPropertyMap ;
    outArgument2 = info->mProperty_mActionMap ;
    outArgument3 = info->mProperty_mPropertyGenerationList ;
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_classMap::setter_replace (GGS_classMap_2E_element inElement,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    const char * kReplaceErrorMessage = "there is no '%K' class" ;
    const String key = inElement.mProperty_lkey.mProperty_string.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_classMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      inCompiler->semanticErrorWith_K_message (
        inElement.mProperty_lkey,
        nearestKeyArray,
        kReplaceErrorMessage
        COMMA_THERE
      ) ;
    }else{
      node->mSharedInfo = SharedGenericPtrWithValueSemantics <GGS_classMap_2E_element>::make (inElement COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_classKind GGS_classMap::getter_mClassKindForKey (const GGS_string & inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GGS_classKind result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_classMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mClassKind ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_propertyMap GGS_classMap::getter_mPropertyMapForKey (const GGS_string & inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_propertyMap result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_classMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mPropertyMap ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_actionMap GGS_classMap::getter_mActionMapForKey (const GGS_string & inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GGS_actionMap result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_classMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mActionMap ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_propertyGenerationList GGS_classMap::getter_mPropertyGenerationListForKey (const GGS_string & inKey,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GGS_propertyGenerationList result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_classMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mPropertyGenerationList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_classMap::setter_setMClassKindForKey (GGS_classKind inValue,
                                               GGS_string inKey,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_classMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mClassKind = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_classMap::setter_setMPropertyMapForKey (GGS_propertyMap inValue,
                                                 GGS_string inKey,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_classMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mPropertyMap = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_classMap::setter_setMActionMapForKey (GGS_actionMap inValue,
                                               GGS_string inKey,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_classMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mActionMap = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_classMap::setter_setMPropertyGenerationListForKey (GGS_propertyGenerationList inValue,
                                                            GGS_string inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_classMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mPropertyGenerationList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_classMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_classMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mClassKind:") ;
    inArray (i COMMA_HERE)->mProperty_mClassKind.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mPropertyMap:") ;
    inArray (i COMMA_HERE)->mProperty_mPropertyMap.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mActionMap:") ;
    inArray (i COMMA_HERE)->mProperty_mActionMap.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mPropertyGenerationList:") ;
    inArray (i COMMA_HERE)->mProperty_mPropertyGenerationList.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_classMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_classMap_2E_element>> array = sortedInfoArray () ;
    GGS_classMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_classMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_classMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @classMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_classMap::DownEnumerator_classMap (const GGS_classMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_classMap_2E_element DownEnumerator_classMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_classMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_classKind DownEnumerator_classMap::current_mClassKind (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mClassKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap DownEnumerator_classMap::current_mPropertyMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mPropertyMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_actionMap DownEnumerator_classMap::current_mActionMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mActionMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGenerationList DownEnumerator_classMap::current_mPropertyGenerationList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mPropertyGenerationList ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @classMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_classMap::UpEnumerator_classMap (const GGS_classMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_classMap_2E_element UpEnumerator_classMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_classMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_classKind UpEnumerator_classMap::current_mClassKind (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mClassKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap UpEnumerator_classMap::current_mPropertyMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mPropertyMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_actionMap UpEnumerator_classMap::current_mActionMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mActionMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGenerationList UpEnumerator_classMap::current_mPropertyGenerationList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mPropertyGenerationList ;
}


//--------------------------------------------------------------------------------------------------
//     @classMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classMap ("classMap",
                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_classMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_classMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_classMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classMap GGS_classMap::extractObject (const GGS_object & inObject,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GGS_classMap result ;
  const GGS_classMap * p = (const GGS_classMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_classMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @outletClassMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_outletClassMap::GGS_outletClassMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassMap::~ GGS_outletClassMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassMap::GGS_outletClassMap (const GGS_outletClassMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassMap & GGS_outletClassMap::operator = (const GGS_outletClassMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassMap GGS_outletClassMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_outletClassMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassMap GGS_outletClassMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_outletClassMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_outletClassMap::getter_hasKey (const GGS_string & inKey
                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_outletClassMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                   const GGS_uint & inLevel
                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_outletClassMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_outletClassMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_outletClassMap::getter_locationForKey (const GGS_string & inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_outletClassMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_outletClassMap::getter_keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_outletClassMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_outletClassMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassMap::performInsert (const GGS_outletClassMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_outletClassMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_outletClassMap_2E_element>
GGS_outletClassMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_outletClassMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_outletClassMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_outletClassMap_2E_element>>
GGS_outletClassMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_outletClassMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_outletClassMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassMap_2E_element_3F_ GGS_outletClassMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_outletClassMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_outletClassMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_outletClassMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_outletClassMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mSuperClassName = info->mProperty_mSuperClassName ;
      element.mProperty_mHandlesRunAction = info->mProperty_mHandlesRunAction ;
      element.mProperty_mHandlesTableValueBinding = info->mProperty_mHandlesTableValueBinding ;
      element.mProperty_mHandleEnabledBinding = info->mProperty_mHandleEnabledBinding ;
      element.mProperty_mHandleHiddenBinding = info->mProperty_mHandleHiddenBinding ;
      element.mProperty_mHandleGraphicControllerBinding = info->mProperty_mHandleGraphicControllerBinding ;
      element.mProperty_mUserDefined = info->mProperty_mUserDefined ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassMap GGS_outletClassMap::class_func_mapWithMapToOverride (const GGS_outletClassMap & inMapToOverride
                                                                        COMMA_LOCATION_ARGS) {
  GGS_outletClassMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_outletClassMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassMap GGS_outletClassMap::getter_overriddenMap (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_outletClassMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassMap::setter_insertKey (GGS_lstring inLKey,
                                           GGS_lstring inArgument0,
                                           GGS_bool inArgument1,
                                           GGS_bool inArgument2,
                                           GGS_bool inArgument3,
                                           GGS_bool inArgument4,
                                           GGS_bool inArgument5,
                                           GGS_bool inArgument6,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  const GGS_outletClassMap_2E_element element (inLKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6) ;
  const char * kInsertErrorMessage = "the '%K' outlet class is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassMap::method_searchKey (GGS_lstring inLKey,
                                           GGS_lstring & outArgument0,
                                           GGS_bool & outArgument1,
                                           GGS_bool & outArgument2,
                                           GGS_bool & outArgument3,
                                           GGS_bool & outArgument4,
                                           GGS_bool & outArgument5,
                                           GGS_bool & outArgument6,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_outletClassMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "there is no '%K' outlet class" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
    outArgument6.drop () ;
  }else{
    outArgument0 = info->mProperty_mSuperClassName ;
    outArgument1 = info->mProperty_mHandlesRunAction ;
    outArgument2 = info->mProperty_mHandlesTableValueBinding ;
    outArgument3 = info->mProperty_mHandleEnabledBinding ;
    outArgument4 = info->mProperty_mHandleHiddenBinding ;
    outArgument5 = info->mProperty_mHandleGraphicControllerBinding ;
    outArgument6 = info->mProperty_mUserDefined ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_outletClassMap::getter_mSuperClassNameForKey (const GGS_string & inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_outletClassMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mSuperClassName ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_outletClassMap::getter_mHandlesRunActionForKey (const GGS_string & inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_outletClassMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mHandlesRunAction ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_outletClassMap::getter_mHandlesTableValueBindingForKey (const GGS_string & inKey,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_outletClassMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mHandlesTableValueBinding ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_outletClassMap::getter_mHandleEnabledBindingForKey (const GGS_string & inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_outletClassMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mHandleEnabledBinding ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_outletClassMap::getter_mHandleHiddenBindingForKey (const GGS_string & inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_outletClassMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mHandleHiddenBinding ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_outletClassMap::getter_mHandleGraphicControllerBindingForKey (const GGS_string & inKey,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_outletClassMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mHandleGraphicControllerBinding ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_outletClassMap::getter_mUserDefinedForKey (const GGS_string & inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_outletClassMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mUserDefined ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_outletClassMap::setter_setMSuperClassNameForKey (GGS_lstring inValue,
                                                          GGS_string inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_outletClassMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mSuperClassName = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_outletClassMap::setter_setMHandlesRunActionForKey (GGS_bool inValue,
                                                            GGS_string inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_outletClassMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mHandlesRunAction = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_outletClassMap::setter_setMHandlesTableValueBindingForKey (GGS_bool inValue,
                                                                    GGS_string inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_outletClassMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mHandlesTableValueBinding = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_outletClassMap::setter_setMHandleEnabledBindingForKey (GGS_bool inValue,
                                                                GGS_string inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_outletClassMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mHandleEnabledBinding = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_outletClassMap::setter_setMHandleHiddenBindingForKey (GGS_bool inValue,
                                                               GGS_string inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_outletClassMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mHandleHiddenBinding = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_outletClassMap::setter_setMHandleGraphicControllerBindingForKey (GGS_bool inValue,
                                                                          GGS_string inKey,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_outletClassMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mHandleGraphicControllerBinding = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_outletClassMap::setter_setMUserDefinedForKey (GGS_bool inValue,
                                                       GGS_string inKey,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_outletClassMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mUserDefined = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_outletClassMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_outletClassMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mSuperClassName:") ;
    inArray (i COMMA_HERE)->mProperty_mSuperClassName.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mHandlesRunAction:") ;
    inArray (i COMMA_HERE)->mProperty_mHandlesRunAction.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mHandlesTableValueBinding:") ;
    inArray (i COMMA_HERE)->mProperty_mHandlesTableValueBinding.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mHandleEnabledBinding:") ;
    inArray (i COMMA_HERE)->mProperty_mHandleEnabledBinding.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mHandleHiddenBinding:") ;
    inArray (i COMMA_HERE)->mProperty_mHandleHiddenBinding.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mHandleGraphicControllerBinding:") ;
    inArray (i COMMA_HERE)->mProperty_mHandleGraphicControllerBinding.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mUserDefined:") ;
    inArray (i COMMA_HERE)->mProperty_mUserDefined.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_outletClassMap_2E_element>> array = sortedInfoArray () ;
    GGS_outletClassMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_outletClassMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_outletClassMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @outletClassMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_outletClassMap::DownEnumerator_outletClassMap (const GGS_outletClassMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassMap_2E_element DownEnumerator_outletClassMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_outletClassMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_outletClassMap::current_mSuperClassName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mSuperClassName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_outletClassMap::current_mHandlesRunAction (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHandlesRunAction ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_outletClassMap::current_mHandlesTableValueBinding (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHandlesTableValueBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_outletClassMap::current_mHandleEnabledBinding (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHandleEnabledBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_outletClassMap::current_mHandleHiddenBinding (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHandleHiddenBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_outletClassMap::current_mHandleGraphicControllerBinding (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHandleGraphicControllerBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_outletClassMap::current_mUserDefined (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mUserDefined ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @outletClassMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_outletClassMap::UpEnumerator_outletClassMap (const GGS_outletClassMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassMap_2E_element UpEnumerator_outletClassMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_outletClassMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_outletClassMap::current_mSuperClassName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mSuperClassName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_outletClassMap::current_mHandlesRunAction (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHandlesRunAction ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_outletClassMap::current_mHandlesTableValueBinding (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHandlesTableValueBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_outletClassMap::current_mHandleEnabledBinding (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHandleEnabledBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_outletClassMap::current_mHandleHiddenBinding (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHandleHiddenBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_outletClassMap::current_mHandleGraphicControllerBinding (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHandleGraphicControllerBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_outletClassMap::current_mUserDefined (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mUserDefined ;
}


//--------------------------------------------------------------------------------------------------
//     @outletClassMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletClassMap ("outletClassMap",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_outletClassMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_outletClassMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_outletClassMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassMap GGS_outletClassMap::extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_outletClassMap result ;
  const GGS_outletClassMap * p = (const GGS_outletClassMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_outletClassMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletClassMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @bindingSpecificationMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_bindingSpecificationMap::GGS_bindingSpecificationMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_bindingSpecificationMap::~ GGS_bindingSpecificationMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_bindingSpecificationMap::GGS_bindingSpecificationMap (const GGS_bindingSpecificationMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_bindingSpecificationMap & GGS_bindingSpecificationMap::operator = (const GGS_bindingSpecificationMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_bindingSpecificationMap GGS_bindingSpecificationMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_bindingSpecificationMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bindingSpecificationMap GGS_bindingSpecificationMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_bindingSpecificationMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_bindingSpecificationMap::getter_hasKey (const GGS_string & inKey
                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_bindingSpecificationMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                            const GGS_uint & inLevel
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_bindingSpecificationMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_bindingSpecificationMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_bindingSpecificationMap::getter_locationForKey (const GGS_string & inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_bindingSpecificationMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_bindingSpecificationMap::getter_keyList (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_bindingSpecificationMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bindingSpecificationMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bindingSpecificationMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_bindingSpecificationMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bindingSpecificationMap::performInsert (const GGS_bindingSpecificationMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_bindingSpecificationMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_bindingSpecificationMap_2E_element>
GGS_bindingSpecificationMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_bindingSpecificationMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_bindingSpecificationMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_bindingSpecificationMap_2E_element>>
GGS_bindingSpecificationMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_bindingSpecificationMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_bindingSpecificationMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bindingSpecificationMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bindingSpecificationMap_2E_element_3F_ GGS_bindingSpecificationMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bindingSpecificationMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_bindingSpecificationMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_bindingSpecificationMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_bindingSpecificationMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mOutletSuperClassName = info->mProperty_mOutletSuperClassName ;
      element.mProperty_mBindingMap = info->mProperty_mBindingMap ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bindingSpecificationMap GGS_bindingSpecificationMap::class_func_mapWithMapToOverride (const GGS_bindingSpecificationMap & inMapToOverride
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_bindingSpecificationMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_bindingSpecificationMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bindingSpecificationMap GGS_bindingSpecificationMap::getter_overriddenMap (Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GGS_bindingSpecificationMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bindingSpecificationMap::setter_insertKey (GGS_lstring inLKey,
                                                    GGS_lstring inArgument0,
                                                    GGS_outletBindingSpecificationMap inArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  const GGS_bindingSpecificationMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "the '%K' binding is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bindingSpecificationMap::method_searchKey (GGS_lstring inLKey,
                                                    GGS_lstring & outArgument0,
                                                    GGS_outletBindingSpecificationMap & outArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_bindingSpecificationMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "there is no '%K' binding" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    outArgument0 = info->mProperty_mOutletSuperClassName ;
    outArgument1 = info->mProperty_mBindingMap ;
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_bindingSpecificationMap::setter_removeKey (GGS_lstring inLKey,
                                                    GGS_lstring & outArgument0,
                                                    GGS_outletBindingSpecificationMap & outArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  SharedGenericPtrWithValueSemantics <GGS_bindingSpecificationMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const char * kRemoveErrorMessage = "there is no '%K' binding" ;
    const String key = inLKey.mProperty_string.stringValue () ;
    mSharedRoot.insulate (THERE) ;
    info = mSharedRoot->removeAndReturnRemovedInfo (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kRemoveErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    outArgument0 = info->mProperty_mOutletSuperClassName ;
    outArgument1 = info->mProperty_mBindingMap ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_bindingSpecificationMap::getter_mOutletSuperClassNameForKey (const GGS_string & inKey,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_bindingSpecificationMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mOutletSuperClassName ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap GGS_bindingSpecificationMap::getter_mBindingMapForKey (const GGS_string & inKey,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_outletBindingSpecificationMap result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_bindingSpecificationMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mBindingMap ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_bindingSpecificationMap::setter_setMOutletSuperClassNameForKey (GGS_lstring inValue,
                                                                         GGS_string inKey,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_bindingSpecificationMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mOutletSuperClassName = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_bindingSpecificationMap::setter_setMBindingMapForKey (GGS_outletBindingSpecificationMap inValue,
                                                               GGS_string inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_bindingSpecificationMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mBindingMap = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_bindingSpecificationMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_bindingSpecificationMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mOutletSuperClassName:") ;
    inArray (i COMMA_HERE)->mProperty_mOutletSuperClassName.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mBindingMap:") ;
    inArray (i COMMA_HERE)->mProperty_mBindingMap.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_bindingSpecificationMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_bindingSpecificationMap_2E_element>> array = sortedInfoArray () ;
    GGS_bindingSpecificationMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_bindingSpecificationMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_bindingSpecificationMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @bindingSpecificationMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_bindingSpecificationMap::DownEnumerator_bindingSpecificationMap (const GGS_bindingSpecificationMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_bindingSpecificationMap_2E_element DownEnumerator_bindingSpecificationMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_bindingSpecificationMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_bindingSpecificationMap::current_mOutletSuperClassName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mOutletSuperClassName ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap DownEnumerator_bindingSpecificationMap::current_mBindingMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mBindingMap ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @bindingSpecificationMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_bindingSpecificationMap::UpEnumerator_bindingSpecificationMap (const GGS_bindingSpecificationMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_bindingSpecificationMap_2E_element UpEnumerator_bindingSpecificationMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_bindingSpecificationMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_bindingSpecificationMap::current_mOutletSuperClassName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mOutletSuperClassName ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap UpEnumerator_bindingSpecificationMap::current_mBindingMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mBindingMap ;
}


//--------------------------------------------------------------------------------------------------
//     @bindingSpecificationMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bindingSpecificationMap ("bindingSpecificationMap",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_bindingSpecificationMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bindingSpecificationMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bindingSpecificationMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bindingSpecificationMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bindingSpecificationMap GGS_bindingSpecificationMap::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_bindingSpecificationMap result ;
  const GGS_bindingSpecificationMap * p = (const GGS_bindingSpecificationMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bindingSpecificationMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bindingSpecificationMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @autolayoutViewClassMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_autolayoutViewClassMap::GGS_autolayoutViewClassMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutViewClassMap::~ GGS_autolayoutViewClassMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutViewClassMap::GGS_autolayoutViewClassMap (const GGS_autolayoutViewClassMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutViewClassMap & GGS_autolayoutViewClassMap::operator = (const GGS_autolayoutViewClassMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutViewClassMap GGS_autolayoutViewClassMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_autolayoutViewClassMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutViewClassMap GGS_autolayoutViewClassMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_autolayoutViewClassMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autolayoutViewClassMap::getter_hasKey (const GGS_string & inKey
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autolayoutViewClassMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                           const GGS_uint & inLevel
                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_autolayoutViewClassMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_autolayoutViewClassMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_autolayoutViewClassMap::getter_locationForKey (const GGS_string & inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_autolayoutViewClassMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_autolayoutViewClassMap::getter_keyList (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_autolayoutViewClassMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutViewClassMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutViewClassMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_autolayoutViewClassMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutViewClassMap::performInsert (const GGS_autolayoutViewClassMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_autolayoutViewClassMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_autolayoutViewClassMap_2E_element>
GGS_autolayoutViewClassMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_autolayoutViewClassMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_autolayoutViewClassMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_autolayoutViewClassMap_2E_element>>
GGS_autolayoutViewClassMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_autolayoutViewClassMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_autolayoutViewClassMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutViewClassMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutViewClassMap_2E_element_3F_ GGS_autolayoutViewClassMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_autolayoutViewClassMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_autolayoutViewClassMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_autolayoutViewClassMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_autolayoutViewClassMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mSuperClassName = info->mProperty_mSuperClassName ;
      element.mProperty_mHandlesRunAction = info->mProperty_mHandlesRunAction ;
      element.mProperty_mHandlesTableValueBinding = info->mProperty_mHandlesTableValueBinding ;
      element.mProperty_mHandleEnabledBinding = info->mProperty_mHandleEnabledBinding ;
      element.mProperty_mHandleHiddenBinding = info->mProperty_mHandleHiddenBinding ;
      element.mProperty_mHandleGraphicControllerBinding = info->mProperty_mHandleGraphicControllerBinding ;
      element.mProperty_mUserDefined = info->mProperty_mUserDefined ;
      element.mProperty_mParameterList = info->mProperty_mParameterList ;
      element.mProperty_mAutoLayoutViewFunctionMap = info->mProperty_mAutoLayoutViewFunctionMap ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutViewClassMap GGS_autolayoutViewClassMap::class_func_mapWithMapToOverride (const GGS_autolayoutViewClassMap & inMapToOverride
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_autolayoutViewClassMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_autolayoutViewClassMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutViewClassMap GGS_autolayoutViewClassMap::getter_overriddenMap (Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_autolayoutViewClassMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutViewClassMap::setter_insertKey (GGS_lstring inLKey,
                                                   GGS_lstring inArgument0,
                                                   GGS_bool inArgument1,
                                                   GGS_bool inArgument2,
                                                   GGS_bool inArgument3,
                                                   GGS_bool inArgument4,
                                                   GGS_bool inArgument5,
                                                   GGS_bool inArgument6,
                                                   GGS_autoLayoutClassParameterList inArgument7,
                                                   GGS_astAutoLayoutViewFunctionMap inArgument8,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  const GGS_autolayoutViewClassMap_2E_element element (inLKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6, inArgument7, inArgument8) ;
  const char * kInsertErrorMessage = "the '%K' outlet class is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutViewClassMap::method_searchKey (GGS_lstring inLKey,
                                                   GGS_lstring & outArgument0,
                                                   GGS_bool & outArgument1,
                                                   GGS_bool & outArgument2,
                                                   GGS_bool & outArgument3,
                                                   GGS_bool & outArgument4,
                                                   GGS_bool & outArgument5,
                                                   GGS_bool & outArgument6,
                                                   GGS_autoLayoutClassParameterList & outArgument7,
                                                   GGS_astAutoLayoutViewFunctionMap & outArgument8,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_autolayoutViewClassMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "there is no '%K' outlet class" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
    outArgument6.drop () ;
    outArgument7.drop () ;
    outArgument8.drop () ;
  }else{
    outArgument0 = info->mProperty_mSuperClassName ;
    outArgument1 = info->mProperty_mHandlesRunAction ;
    outArgument2 = info->mProperty_mHandlesTableValueBinding ;
    outArgument3 = info->mProperty_mHandleEnabledBinding ;
    outArgument4 = info->mProperty_mHandleHiddenBinding ;
    outArgument5 = info->mProperty_mHandleGraphicControllerBinding ;
    outArgument6 = info->mProperty_mUserDefined ;
    outArgument7 = info->mProperty_mParameterList ;
    outArgument8 = info->mProperty_mAutoLayoutViewFunctionMap ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_autolayoutViewClassMap::getter_mSuperClassNameForKey (const GGS_string & inKey,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_autolayoutViewClassMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mSuperClassName ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autolayoutViewClassMap::getter_mHandlesRunActionForKey (const GGS_string & inKey,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_autolayoutViewClassMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mHandlesRunAction ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autolayoutViewClassMap::getter_mHandlesTableValueBindingForKey (const GGS_string & inKey,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_autolayoutViewClassMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mHandlesTableValueBinding ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autolayoutViewClassMap::getter_mHandleEnabledBindingForKey (const GGS_string & inKey,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_autolayoutViewClassMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mHandleEnabledBinding ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autolayoutViewClassMap::getter_mHandleHiddenBindingForKey (const GGS_string & inKey,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_autolayoutViewClassMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mHandleHiddenBinding ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autolayoutViewClassMap::getter_mHandleGraphicControllerBindingForKey (const GGS_string & inKey,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_autolayoutViewClassMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mHandleGraphicControllerBinding ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autolayoutViewClassMap::getter_mUserDefinedForKey (const GGS_string & inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_autolayoutViewClassMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mUserDefined ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterList GGS_autolayoutViewClassMap::getter_mParameterListForKey (const GGS_string & inKey,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutClassParameterList result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_autolayoutViewClassMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mParameterList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionMap GGS_autolayoutViewClassMap::getter_mAutoLayoutViewFunctionMapForKey (const GGS_string & inKey,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_astAutoLayoutViewFunctionMap result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_autolayoutViewClassMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mAutoLayoutViewFunctionMap ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_autolayoutViewClassMap::setter_setMSuperClassNameForKey (GGS_lstring inValue,
                                                                  GGS_string inKey,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_autolayoutViewClassMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mSuperClassName = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_autolayoutViewClassMap::setter_setMHandlesRunActionForKey (GGS_bool inValue,
                                                                    GGS_string inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_autolayoutViewClassMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mHandlesRunAction = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_autolayoutViewClassMap::setter_setMHandlesTableValueBindingForKey (GGS_bool inValue,
                                                                            GGS_string inKey,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_autolayoutViewClassMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mHandlesTableValueBinding = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_autolayoutViewClassMap::setter_setMHandleEnabledBindingForKey (GGS_bool inValue,
                                                                        GGS_string inKey,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_autolayoutViewClassMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mHandleEnabledBinding = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_autolayoutViewClassMap::setter_setMHandleHiddenBindingForKey (GGS_bool inValue,
                                                                       GGS_string inKey,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_autolayoutViewClassMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mHandleHiddenBinding = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_autolayoutViewClassMap::setter_setMHandleGraphicControllerBindingForKey (GGS_bool inValue,
                                                                                  GGS_string inKey,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_autolayoutViewClassMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mHandleGraphicControllerBinding = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_autolayoutViewClassMap::setter_setMUserDefinedForKey (GGS_bool inValue,
                                                               GGS_string inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_autolayoutViewClassMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mUserDefined = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_autolayoutViewClassMap::setter_setMParameterListForKey (GGS_autoLayoutClassParameterList inValue,
                                                                 GGS_string inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_autolayoutViewClassMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mParameterList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_autolayoutViewClassMap::setter_setMAutoLayoutViewFunctionMapForKey (GGS_astAutoLayoutViewFunctionMap inValue,
                                                                             GGS_string inKey,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_autolayoutViewClassMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mAutoLayoutViewFunctionMap = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_autolayoutViewClassMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_autolayoutViewClassMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mSuperClassName:") ;
    inArray (i COMMA_HERE)->mProperty_mSuperClassName.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mHandlesRunAction:") ;
    inArray (i COMMA_HERE)->mProperty_mHandlesRunAction.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mHandlesTableValueBinding:") ;
    inArray (i COMMA_HERE)->mProperty_mHandlesTableValueBinding.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mHandleEnabledBinding:") ;
    inArray (i COMMA_HERE)->mProperty_mHandleEnabledBinding.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mHandleHiddenBinding:") ;
    inArray (i COMMA_HERE)->mProperty_mHandleHiddenBinding.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mHandleGraphicControllerBinding:") ;
    inArray (i COMMA_HERE)->mProperty_mHandleGraphicControllerBinding.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mUserDefined:") ;
    inArray (i COMMA_HERE)->mProperty_mUserDefined.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mParameterList:") ;
    inArray (i COMMA_HERE)->mProperty_mParameterList.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mAutoLayoutViewFunctionMap:") ;
    inArray (i COMMA_HERE)->mProperty_mAutoLayoutViewFunctionMap.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutViewClassMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_autolayoutViewClassMap_2E_element>> array = sortedInfoArray () ;
    GGS_autolayoutViewClassMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_autolayoutViewClassMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_autolayoutViewClassMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @autolayoutViewClassMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_autolayoutViewClassMap::DownEnumerator_autolayoutViewClassMap (const GGS_autolayoutViewClassMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutViewClassMap_2E_element DownEnumerator_autolayoutViewClassMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_autolayoutViewClassMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_autolayoutViewClassMap::current_mSuperClassName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mSuperClassName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_autolayoutViewClassMap::current_mHandlesRunAction (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHandlesRunAction ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_autolayoutViewClassMap::current_mHandlesTableValueBinding (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHandlesTableValueBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_autolayoutViewClassMap::current_mHandleEnabledBinding (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHandleEnabledBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_autolayoutViewClassMap::current_mHandleHiddenBinding (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHandleHiddenBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_autolayoutViewClassMap::current_mHandleGraphicControllerBinding (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHandleGraphicControllerBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_autolayoutViewClassMap::current_mUserDefined (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mUserDefined ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterList DownEnumerator_autolayoutViewClassMap::current_mParameterList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mParameterList ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionMap DownEnumerator_autolayoutViewClassMap::current_mAutoLayoutViewFunctionMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mAutoLayoutViewFunctionMap ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @autolayoutViewClassMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_autolayoutViewClassMap::UpEnumerator_autolayoutViewClassMap (const GGS_autolayoutViewClassMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutViewClassMap_2E_element UpEnumerator_autolayoutViewClassMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_autolayoutViewClassMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_autolayoutViewClassMap::current_mSuperClassName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mSuperClassName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_autolayoutViewClassMap::current_mHandlesRunAction (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHandlesRunAction ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_autolayoutViewClassMap::current_mHandlesTableValueBinding (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHandlesTableValueBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_autolayoutViewClassMap::current_mHandleEnabledBinding (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHandleEnabledBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_autolayoutViewClassMap::current_mHandleHiddenBinding (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHandleHiddenBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_autolayoutViewClassMap::current_mHandleGraphicControllerBinding (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHandleGraphicControllerBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_autolayoutViewClassMap::current_mUserDefined (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mUserDefined ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterList UpEnumerator_autolayoutViewClassMap::current_mParameterList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mParameterList ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionMap UpEnumerator_autolayoutViewClassMap::current_mAutoLayoutViewFunctionMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mAutoLayoutViewFunctionMap ;
}


//--------------------------------------------------------------------------------------------------
//     @autolayoutViewClassMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autolayoutViewClassMap ("autolayoutViewClassMap",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autolayoutViewClassMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autolayoutViewClassMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autolayoutViewClassMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autolayoutViewClassMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutViewClassMap GGS_autolayoutViewClassMap::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_autolayoutViewClassMap result ;
  const GGS_autolayoutViewClassMap * p = (const GGS_autolayoutViewClassMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autolayoutViewClassMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autolayoutViewClassMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @autoLayoutBindingSpecificationMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutBindingSpecificationMap::GGS_autoLayoutBindingSpecificationMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutBindingSpecificationMap::~ GGS_autoLayoutBindingSpecificationMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutBindingSpecificationMap::GGS_autoLayoutBindingSpecificationMap (const GGS_autoLayoutBindingSpecificationMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutBindingSpecificationMap & GGS_autoLayoutBindingSpecificationMap::operator = (const GGS_autoLayoutBindingSpecificationMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutBindingSpecificationMap GGS_autoLayoutBindingSpecificationMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_autoLayoutBindingSpecificationMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutBindingSpecificationMap GGS_autoLayoutBindingSpecificationMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_autoLayoutBindingSpecificationMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutBindingSpecificationMap::getter_hasKey (const GGS_string & inKey
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutBindingSpecificationMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                                      const GGS_uint & inLevel
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_autoLayoutBindingSpecificationMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_autoLayoutBindingSpecificationMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_autoLayoutBindingSpecificationMap::getter_locationForKey (const GGS_string & inKey,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_autoLayoutBindingSpecificationMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_autoLayoutBindingSpecificationMap::getter_keyList (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_autoLayoutBindingSpecificationMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutBindingSpecificationMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutBindingSpecificationMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_autoLayoutBindingSpecificationMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutBindingSpecificationMap::performInsert (const GGS_autoLayoutBindingSpecificationMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_autoLayoutBindingSpecificationMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_autoLayoutBindingSpecificationMap_2E_element>
GGS_autoLayoutBindingSpecificationMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_autoLayoutBindingSpecificationMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_autoLayoutBindingSpecificationMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutBindingSpecificationMap_2E_element>>
GGS_autoLayoutBindingSpecificationMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutBindingSpecificationMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_autoLayoutBindingSpecificationMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutBindingSpecificationMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutBindingSpecificationMap_2E_element_3F_ GGS_autoLayoutBindingSpecificationMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_autoLayoutBindingSpecificationMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_autoLayoutBindingSpecificationMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_autoLayoutBindingSpecificationMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_autoLayoutBindingSpecificationMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mOutletSuperClassName = info->mProperty_mOutletSuperClassName ;
      element.mProperty_mBindingMap = info->mProperty_mBindingMap ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutBindingSpecificationMap GGS_autoLayoutBindingSpecificationMap::class_func_mapWithMapToOverride (const GGS_autoLayoutBindingSpecificationMap & inMapToOverride
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_autoLayoutBindingSpecificationMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_autoLayoutBindingSpecificationMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutBindingSpecificationMap GGS_autoLayoutBindingSpecificationMap::getter_overriddenMap (Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutBindingSpecificationMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutBindingSpecificationMap::setter_insertKey (GGS_lstring inLKey,
                                                              GGS_lstring inArgument0,
                                                              GGS_autoLayoutViewBindingSpecificationMap inArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutBindingSpecificationMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "the '%K' binding is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutBindingSpecificationMap::method_searchKey (GGS_lstring inLKey,
                                                              GGS_lstring & outArgument0,
                                                              GGS_autoLayoutViewBindingSpecificationMap & outArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_autoLayoutBindingSpecificationMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "there is no '%K' binding" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    outArgument0 = info->mProperty_mOutletSuperClassName ;
    outArgument1 = info->mProperty_mBindingMap ;
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutBindingSpecificationMap::setter_removeKey (GGS_lstring inLKey,
                                                              GGS_lstring & outArgument0,
                                                              GGS_autoLayoutViewBindingSpecificationMap & outArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  SharedGenericPtrWithValueSemantics <GGS_autoLayoutBindingSpecificationMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const char * kRemoveErrorMessage = "there is no '%K' binding" ;
    const String key = inLKey.mProperty_string.stringValue () ;
    mSharedRoot.insulate (THERE) ;
    info = mSharedRoot->removeAndReturnRemovedInfo (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kRemoveErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    outArgument0 = info->mProperty_mOutletSuperClassName ;
    outArgument1 = info->mProperty_mBindingMap ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_autoLayoutBindingSpecificationMap::getter_mOutletSuperClassNameForKey (const GGS_string & inKey,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_autoLayoutBindingSpecificationMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mOutletSuperClassName ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewBindingSpecificationMap GGS_autoLayoutBindingSpecificationMap::getter_mBindingMapForKey (const GGS_string & inKey,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutViewBindingSpecificationMap result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_autoLayoutBindingSpecificationMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mBindingMap ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutBindingSpecificationMap::setter_setMOutletSuperClassNameForKey (GGS_lstring inValue,
                                                                                   GGS_string inKey,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_autoLayoutBindingSpecificationMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mOutletSuperClassName = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutBindingSpecificationMap::setter_setMBindingMapForKey (GGS_autoLayoutViewBindingSpecificationMap inValue,
                                                                         GGS_string inKey,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_autoLayoutBindingSpecificationMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mBindingMap = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_autoLayoutBindingSpecificationMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutBindingSpecificationMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mOutletSuperClassName:") ;
    inArray (i COMMA_HERE)->mProperty_mOutletSuperClassName.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mBindingMap:") ;
    inArray (i COMMA_HERE)->mProperty_mBindingMap.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutBindingSpecificationMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutBindingSpecificationMap_2E_element>> array = sortedInfoArray () ;
    GGS_autoLayoutBindingSpecificationMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_autoLayoutBindingSpecificationMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_autoLayoutBindingSpecificationMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @autoLayoutBindingSpecificationMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_autoLayoutBindingSpecificationMap::DownEnumerator_autoLayoutBindingSpecificationMap (const GGS_autoLayoutBindingSpecificationMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutBindingSpecificationMap_2E_element DownEnumerator_autoLayoutBindingSpecificationMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_autoLayoutBindingSpecificationMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_autoLayoutBindingSpecificationMap::current_mOutletSuperClassName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mOutletSuperClassName ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewBindingSpecificationMap DownEnumerator_autoLayoutBindingSpecificationMap::current_mBindingMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mBindingMap ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @autoLayoutBindingSpecificationMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_autoLayoutBindingSpecificationMap::UpEnumerator_autoLayoutBindingSpecificationMap (const GGS_autoLayoutBindingSpecificationMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutBindingSpecificationMap_2E_element UpEnumerator_autoLayoutBindingSpecificationMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_autoLayoutBindingSpecificationMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_autoLayoutBindingSpecificationMap::current_mOutletSuperClassName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mOutletSuperClassName ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewBindingSpecificationMap UpEnumerator_autoLayoutBindingSpecificationMap::current_mBindingMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mBindingMap ;
}


//--------------------------------------------------------------------------------------------------
//     @autoLayoutBindingSpecificationMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutBindingSpecificationMap ("autoLayoutBindingSpecificationMap",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutBindingSpecificationMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutBindingSpecificationMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutBindingSpecificationMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutBindingSpecificationMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutBindingSpecificationMap GGS_autoLayoutBindingSpecificationMap::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_autoLayoutBindingSpecificationMap result ;
  const GGS_autoLayoutBindingSpecificationMap * p = (const GGS_autoLayoutBindingSpecificationMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutBindingSpecificationMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutBindingSpecificationMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @astAutoLayoutViewFunctionMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionMap::GGS_astAutoLayoutViewFunctionMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionMap::~ GGS_astAutoLayoutViewFunctionMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionMap::GGS_astAutoLayoutViewFunctionMap (const GGS_astAutoLayoutViewFunctionMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionMap & GGS_astAutoLayoutViewFunctionMap::operator = (const GGS_astAutoLayoutViewFunctionMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionMap GGS_astAutoLayoutViewFunctionMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_astAutoLayoutViewFunctionMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionMap GGS_astAutoLayoutViewFunctionMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_astAutoLayoutViewFunctionMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_astAutoLayoutViewFunctionMap::getter_hasKey (const GGS_string & inKey
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_astAutoLayoutViewFunctionMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                                 const GGS_uint & inLevel
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_astAutoLayoutViewFunctionMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_astAutoLayoutViewFunctionMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_astAutoLayoutViewFunctionMap::getter_locationForKey (const GGS_string & inKey,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_astAutoLayoutViewFunctionMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_astAutoLayoutViewFunctionMap::getter_keyList (Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_astAutoLayoutViewFunctionMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewFunctionMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewFunctionMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_astAutoLayoutViewFunctionMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewFunctionMap::performInsert (const GGS_astAutoLayoutViewFunctionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_astAutoLayoutViewFunctionMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_astAutoLayoutViewFunctionMap_2E_element>
GGS_astAutoLayoutViewFunctionMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_astAutoLayoutViewFunctionMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_astAutoLayoutViewFunctionMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_astAutoLayoutViewFunctionMap_2E_element>>
GGS_astAutoLayoutViewFunctionMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_astAutoLayoutViewFunctionMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_astAutoLayoutViewFunctionMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewFunctionMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionMap_2E_element_3F_ GGS_astAutoLayoutViewFunctionMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_astAutoLayoutViewFunctionMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_astAutoLayoutViewFunctionMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_astAutoLayoutViewFunctionMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_astAutoLayoutViewFunctionMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mFomalParameterList = info->mProperty_mFomalParameterList ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionMap GGS_astAutoLayoutViewFunctionMap::class_func_mapWithMapToOverride (const GGS_astAutoLayoutViewFunctionMap & inMapToOverride
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_astAutoLayoutViewFunctionMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_astAutoLayoutViewFunctionMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionMap GGS_astAutoLayoutViewFunctionMap::getter_overriddenMap (Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_astAutoLayoutViewFunctionMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewFunctionMap::setter_insertKey (GGS_lstring inLKey,
                                                         GGS_autoLayoutClassParameterList inArgument0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  const GGS_astAutoLayoutViewFunctionMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the '%K' function is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewFunctionMap::method_searchKey (GGS_lstring inLKey,
                                                         GGS_autoLayoutClassParameterList & outArgument0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_astAutoLayoutViewFunctionMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "there is no '%K' function" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mFomalParameterList ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterList GGS_astAutoLayoutViewFunctionMap::getter_mFomalParameterListForKey (const GGS_string & inKey,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutClassParameterList result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_astAutoLayoutViewFunctionMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mFomalParameterList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewFunctionMap::setter_setMFomalParameterListForKey (GGS_autoLayoutClassParameterList inValue,
                                                                            GGS_string inKey,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_astAutoLayoutViewFunctionMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mFomalParameterList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_astAutoLayoutViewFunctionMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_astAutoLayoutViewFunctionMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mFomalParameterList:") ;
    inArray (i COMMA_HERE)->mProperty_mFomalParameterList.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewFunctionMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_astAutoLayoutViewFunctionMap_2E_element>> array = sortedInfoArray () ;
    GGS_astAutoLayoutViewFunctionMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_astAutoLayoutViewFunctionMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_astAutoLayoutViewFunctionMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @astAutoLayoutViewFunctionMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_astAutoLayoutViewFunctionMap::DownEnumerator_astAutoLayoutViewFunctionMap (const GGS_astAutoLayoutViewFunctionMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionMap_2E_element DownEnumerator_astAutoLayoutViewFunctionMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_astAutoLayoutViewFunctionMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterList DownEnumerator_astAutoLayoutViewFunctionMap::current_mFomalParameterList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mFomalParameterList ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @astAutoLayoutViewFunctionMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_astAutoLayoutViewFunctionMap::UpEnumerator_astAutoLayoutViewFunctionMap (const GGS_astAutoLayoutViewFunctionMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionMap_2E_element UpEnumerator_astAutoLayoutViewFunctionMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_astAutoLayoutViewFunctionMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterList UpEnumerator_astAutoLayoutViewFunctionMap::current_mFomalParameterList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mFomalParameterList ;
}


//--------------------------------------------------------------------------------------------------
//     @astAutoLayoutViewFunctionMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewFunctionMap ("astAutoLayoutViewFunctionMap",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astAutoLayoutViewFunctionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAutoLayoutViewFunctionMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astAutoLayoutViewFunctionMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astAutoLayoutViewFunctionMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionMap GGS_astAutoLayoutViewFunctionMap::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_astAutoLayoutViewFunctionMap result ;
  const GGS_astAutoLayoutViewFunctionMap * p = (const GGS_astAutoLayoutViewFunctionMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astAutoLayoutViewFunctionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astAutoLayoutViewFunctionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@enumerationFunctionListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_enumerationFunctionListAST : public cCollectionElement {
  public: GGS_enumerationFunctionListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_enumerationFunctionListAST (const GGS_lstring & in_mEnumName,
                                                         const GGS_lstring & in_mFunctionName,
                                                         const GGS__32_lstringlist & in_mAssociationList
                                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_enumerationFunctionListAST (const GGS_enumerationFunctionListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_enumerationFunctionListAST::cCollectionElement_enumerationFunctionListAST (const GGS_lstring & in_mEnumName,
                                                                                              const GGS_lstring & in_mFunctionName,
                                                                                              const GGS__32_lstringlist & in_mAssociationList
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEnumName, in_mFunctionName, in_mAssociationList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_enumerationFunctionListAST::cCollectionElement_enumerationFunctionListAST (const GGS_enumerationFunctionListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mEnumName, inElement.mProperty_mFunctionName, inElement.mProperty_mAssociationList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_enumerationFunctionListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_enumerationFunctionListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_enumerationFunctionListAST (mObject.mProperty_mEnumName, mObject.mProperty_mFunctionName, mObject.mProperty_mAssociationList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @enumerationFunctionListAST
//--------------------------------------------------------------------------------------------------

GGS_enumerationFunctionListAST::GGS_enumerationFunctionListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationFunctionListAST::GGS_enumerationFunctionListAST (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_enumerationFunctionListAST * p = (cCollectionElement_enumerationFunctionListAST *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_enumerationFunctionListAST) ;
    const GGS_enumerationFunctionListAST_2E_element element (p->mObject.mProperty_mEnumName, p->mObject.mProperty_mFunctionName, p->mObject.mProperty_mAssociationList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationFunctionListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GGS_lstring & in_mEnumName,
                                                                const GGS_lstring & in_mFunctionName,
                                                                const GGS__32_lstringlist & in_mAssociationList
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_enumerationFunctionListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_enumerationFunctionListAST (in_mEnumName, in_mFunctionName, in_mAssociationList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_enumerationFunctionListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_enumerationFunctionListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationFunctionListAST::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mEnumName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mEnumName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFunctionName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFunctionName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mAssociationList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mAssociationList.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationFunctionListAST GGS_enumerationFunctionListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_enumerationFunctionListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationFunctionListAST GGS_enumerationFunctionListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_enumerationFunctionListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationFunctionListAST::plusPlusAssignOperation (const GGS_enumerationFunctionListAST_2E_element & inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationFunctionListAST GGS_enumerationFunctionListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                         const GGS_lstring & inOperand1,
                                                                                         const GGS__32_lstringlist & inOperand2
                                                                                         COMMA_LOCATION_ARGS) {
  const GGS_enumerationFunctionListAST_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_enumerationFunctionListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationFunctionListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                         const GGS_lstring & inOperand1,
                                                         const GGS__32_lstringlist & inOperand2
                                                         COMMA_LOCATION_ARGS) {
  const GGS_enumerationFunctionListAST_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationFunctionListAST::setter_append (const GGS_lstring inOperand0,
                                                    const GGS_lstring inOperand1,
                                                    const GGS__32_lstringlist inOperand2,
                                                    Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  const GGS_enumerationFunctionListAST_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationFunctionListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                           const GGS_lstring inOperand1,
                                                           const GGS__32_lstringlist inOperand2,
                                                           const GGS_uint inInsertionIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  const GGS_enumerationFunctionListAST_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationFunctionListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                           GGS_lstring & outOperand1,
                                                           GGS__32_lstringlist & outOperand2,
                                                           const GGS_uint inRemoveIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mEnumName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mFunctionName ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mAssociationList ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationFunctionListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                      GGS_lstring & outOperand1,
                                                      GGS__32_lstringlist & outOperand2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mEnumName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mFunctionName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mAssociationList ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationFunctionListAST::setter_popLast (GGS_lstring & outOperand0,
                                                     GGS_lstring & outOperand1,
                                                     GGS__32_lstringlist & outOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mEnumName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mFunctionName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mAssociationList ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationFunctionListAST::method_first (GGS_lstring & outOperand0,
                                                   GGS_lstring & outOperand1,
                                                   GGS__32_lstringlist & outOperand2,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mEnumName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mFunctionName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mAssociationList ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationFunctionListAST::method_last (GGS_lstring & outOperand0,
                                                  GGS_lstring & outOperand1,
                                                  GGS__32_lstringlist & outOperand2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mEnumName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mFunctionName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mAssociationList ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationFunctionListAST GGS_enumerationFunctionListAST::add_operation (const GGS_enumerationFunctionListAST & inOperand,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_enumerationFunctionListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationFunctionListAST GGS_enumerationFunctionListAST::subList (const int32_t inStart,
                                                                        const int32_t inLength,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_enumerationFunctionListAST result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationFunctionListAST GGS_enumerationFunctionListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_enumerationFunctionListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationFunctionListAST GGS_enumerationFunctionListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_enumerationFunctionListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationFunctionListAST GGS_enumerationFunctionListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_enumerationFunctionListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationFunctionListAST::plusAssignOperation (const GGS_enumerationFunctionListAST inList,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationFunctionListAST::setter_setMEnumNameAtIndex (GGS_lstring inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mEnumName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_enumerationFunctionListAST::getter_mEnumNameAtIndex (const GGS_uint & inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mEnumName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_enumerationFunctionListAST::setter_setMFunctionNameAtIndex (GGS_lstring inOperand,
                                                                     GGS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFunctionName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_enumerationFunctionListAST::getter_mFunctionNameAtIndex (const GGS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFunctionName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_enumerationFunctionListAST::setter_setMAssociationListAtIndex (GGS__32_lstringlist inOperand,
                                                                        GGS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mAssociationList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS__32_lstringlist GGS_enumerationFunctionListAST::getter_mAssociationListAtIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS__32_lstringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mAssociationList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @enumerationFunctionListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_enumerationFunctionListAST::DownEnumerator_enumerationFunctionListAST (const GGS_enumerationFunctionListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationFunctionListAST_2E_element DownEnumerator_enumerationFunctionListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_enumerationFunctionListAST::current_mEnumName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEnumName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_enumerationFunctionListAST::current_mFunctionName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFunctionName ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist DownEnumerator_enumerationFunctionListAST::current_mAssociationList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mAssociationList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @enumerationFunctionListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_enumerationFunctionListAST::UpEnumerator_enumerationFunctionListAST (const GGS_enumerationFunctionListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationFunctionListAST_2E_element UpEnumerator_enumerationFunctionListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_enumerationFunctionListAST::current_mEnumName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEnumName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_enumerationFunctionListAST::current_mFunctionName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFunctionName ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist UpEnumerator_enumerationFunctionListAST::current_mAssociationList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mAssociationList ;
}




//--------------------------------------------------------------------------------------------------
//     @enumerationFunctionListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumerationFunctionListAST ("enumerationFunctionListAST",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_enumerationFunctionListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationFunctionListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumerationFunctionListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumerationFunctionListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationFunctionListAST GGS_enumerationFunctionListAST::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_enumerationFunctionListAST result ;
  const GGS_enumerationFunctionListAST * p = (const GGS_enumerationFunctionListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumerationFunctionListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumerationFunctionListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@autoLayoutTableViewControllerBoundColumnListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST : public cCollectionElement {
  public: GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST (const GGS_bool & in_mEditable,
                                                                              const GGS_lstring & in_mPropertyName,
                                                                              const GGS_astAutoLayoutViewInstructionParameterList & in_mColumnParameterListAST,
                                                                              const GGS_lstring & in_mSortPropertyName
                                                                              COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST (const GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST::cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST (const GGS_bool & in_mEditable,
                                                                                                                                        const GGS_lstring & in_mPropertyName,
                                                                                                                                        const GGS_astAutoLayoutViewInstructionParameterList & in_mColumnParameterListAST,
                                                                                                                                        const GGS_lstring & in_mSortPropertyName
                                                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEditable, in_mPropertyName, in_mColumnParameterListAST, in_mSortPropertyName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST::cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST (const GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mEditable, inElement.mProperty_mPropertyName, inElement.mProperty_mColumnParameterListAST, inElement.mProperty_mSortPropertyName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST (mObject.mProperty_mEditable, mObject.mProperty_mPropertyName, mObject.mProperty_mColumnParameterListAST, mObject.mProperty_mSortPropertyName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @autoLayoutTableViewControllerBoundColumnListAST
//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListAST::GGS_autoLayoutTableViewControllerBoundColumnListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListAST::GGS_autoLayoutTableViewControllerBoundColumnListAST (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
    const GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element element (p->mObject.mProperty_mEditable, p->mObject.mProperty_mPropertyName, p->mObject.mProperty_mColumnParameterListAST, p->mObject.mProperty_mSortPropertyName) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                     const GGS_bool & in_mEditable,
                                                                                     const GGS_lstring & in_mPropertyName,
                                                                                     const GGS_astAutoLayoutViewInstructionParameterList & in_mColumnParameterListAST,
                                                                                     const GGS_lstring & in_mSortPropertyName
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST (in_mEditable, in_mPropertyName, in_mColumnParameterListAST, in_mSortPropertyName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_autoLayoutTableViewControllerBoundColumnListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_autoLayoutTableViewControllerBoundColumnListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListAST::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mEditable:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mEditable.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mPropertyName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mPropertyName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mColumnParameterListAST:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mColumnParameterListAST.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mSortPropertyName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSortPropertyName.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListAST GGS_autoLayoutTableViewControllerBoundColumnListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutTableViewControllerBoundColumnListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListAST GGS_autoLayoutTableViewControllerBoundColumnListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutTableViewControllerBoundColumnListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListAST::plusPlusAssignOperation (const GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element & inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListAST GGS_autoLayoutTableViewControllerBoundColumnListAST::class_func_listWithValue (const GGS_bool & inOperand0,
                                                                                                                                   const GGS_lstring & inOperand1,
                                                                                                                                   const GGS_astAutoLayoutViewInstructionParameterList & inOperand2,
                                                                                                                                   const GGS_lstring & inOperand3
                                                                                                                                   COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  GGS_autoLayoutTableViewControllerBoundColumnListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListAST::addAssignOperation (const GGS_bool & inOperand0,
                                                                              const GGS_lstring & inOperand1,
                                                                              const GGS_astAutoLayoutViewInstructionParameterList & inOperand2,
                                                                              const GGS_lstring & inOperand3
                                                                              COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListAST::setter_append (const GGS_bool inOperand0,
                                                                         const GGS_lstring inOperand1,
                                                                         const GGS_astAutoLayoutViewInstructionParameterList inOperand2,
                                                                         const GGS_lstring inOperand3,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListAST::setter_insertAtIndex (const GGS_bool inOperand0,
                                                                                const GGS_lstring inOperand1,
                                                                                const GGS_astAutoLayoutViewInstructionParameterList inOperand2,
                                                                                const GGS_lstring inOperand3,
                                                                                const GGS_uint inInsertionIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListAST::setter_removeAtIndex (GGS_bool & outOperand0,
                                                                                GGS_lstring & outOperand1,
                                                                                GGS_astAutoLayoutViewInstructionParameterList & outOperand2,
                                                                                GGS_lstring & outOperand3,
                                                                                const GGS_uint inRemoveIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mEditable ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mPropertyName ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mColumnParameterListAST ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mSortPropertyName ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListAST::setter_popFirst (GGS_bool & outOperand0,
                                                                           GGS_lstring & outOperand1,
                                                                           GGS_astAutoLayoutViewInstructionParameterList & outOperand2,
                                                                           GGS_lstring & outOperand3,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mEditable ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mPropertyName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mColumnParameterListAST ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mSortPropertyName ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListAST::setter_popLast (GGS_bool & outOperand0,
                                                                          GGS_lstring & outOperand1,
                                                                          GGS_astAutoLayoutViewInstructionParameterList & outOperand2,
                                                                          GGS_lstring & outOperand3,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mEditable ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mPropertyName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mColumnParameterListAST ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mSortPropertyName ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListAST::method_first (GGS_bool & outOperand0,
                                                                        GGS_lstring & outOperand1,
                                                                        GGS_astAutoLayoutViewInstructionParameterList & outOperand2,
                                                                        GGS_lstring & outOperand3,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mEditable ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mPropertyName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mColumnParameterListAST ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mSortPropertyName ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListAST::method_last (GGS_bool & outOperand0,
                                                                       GGS_lstring & outOperand1,
                                                                       GGS_astAutoLayoutViewInstructionParameterList & outOperand2,
                                                                       GGS_lstring & outOperand3,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mEditable ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mPropertyName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mColumnParameterListAST ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mSortPropertyName ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListAST GGS_autoLayoutTableViewControllerBoundColumnListAST::add_operation (const GGS_autoLayoutTableViewControllerBoundColumnListAST & inOperand,
                                                                                                                        Compiler * /* inCompiler */
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_autoLayoutTableViewControllerBoundColumnListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListAST GGS_autoLayoutTableViewControllerBoundColumnListAST::subList (const int32_t inStart,
                                                                                                                  const int32_t inLength,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutTableViewControllerBoundColumnListAST result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListAST GGS_autoLayoutTableViewControllerBoundColumnListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutTableViewControllerBoundColumnListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListAST GGS_autoLayoutTableViewControllerBoundColumnListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutTableViewControllerBoundColumnListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListAST GGS_autoLayoutTableViewControllerBoundColumnListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutTableViewControllerBoundColumnListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListAST::plusAssignOperation (const GGS_autoLayoutTableViewControllerBoundColumnListAST inList,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListAST::setter_setMEditableAtIndex (GGS_bool inOperand,
                                                                                      GGS_uint inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mEditable = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_bool GGS_autoLayoutTableViewControllerBoundColumnListAST::getter_mEditableAtIndex (const GGS_uint & inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mEditable ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListAST::setter_setMPropertyNameAtIndex (GGS_lstring inOperand,
                                                                                          GGS_uint inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mPropertyName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_autoLayoutTableViewControllerBoundColumnListAST::getter_mPropertyNameAtIndex (const GGS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mPropertyName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListAST::setter_setMColumnParameterListASTAtIndex (GGS_astAutoLayoutViewInstructionParameterList inOperand,
                                                                                                    GGS_uint inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mColumnParameterListAST = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_astAutoLayoutViewInstructionParameterList GGS_autoLayoutTableViewControllerBoundColumnListAST::getter_mColumnParameterListASTAtIndex (const GGS_uint & inIndex,
                                                                                                                                          Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_astAutoLayoutViewInstructionParameterList result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mColumnParameterListAST ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListAST::setter_setMSortPropertyNameAtIndex (GGS_lstring inOperand,
                                                                                              GGS_uint inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mSortPropertyName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_autoLayoutTableViewControllerBoundColumnListAST::getter_mSortPropertyNameAtIndex (const GGS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mSortPropertyName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @autoLayoutTableViewControllerBoundColumnListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_autoLayoutTableViewControllerBoundColumnListAST::DownEnumerator_autoLayoutTableViewControllerBoundColumnListAST (const GGS_autoLayoutTableViewControllerBoundColumnListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element DownEnumerator_autoLayoutTableViewControllerBoundColumnListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_autoLayoutTableViewControllerBoundColumnListAST::current_mEditable (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEditable ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_autoLayoutTableViewControllerBoundColumnListAST::current_mPropertyName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterList DownEnumerator_autoLayoutTableViewControllerBoundColumnListAST::current_mColumnParameterListAST (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mColumnParameterListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_autoLayoutTableViewControllerBoundColumnListAST::current_mSortPropertyName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSortPropertyName ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @autoLayoutTableViewControllerBoundColumnListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_autoLayoutTableViewControllerBoundColumnListAST::UpEnumerator_autoLayoutTableViewControllerBoundColumnListAST (const GGS_autoLayoutTableViewControllerBoundColumnListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element UpEnumerator_autoLayoutTableViewControllerBoundColumnListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_autoLayoutTableViewControllerBoundColumnListAST::current_mEditable (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEditable ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_autoLayoutTableViewControllerBoundColumnListAST::current_mPropertyName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterList UpEnumerator_autoLayoutTableViewControllerBoundColumnListAST::current_mColumnParameterListAST (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mColumnParameterListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_autoLayoutTableViewControllerBoundColumnListAST::current_mSortPropertyName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSortPropertyName ;
}




//--------------------------------------------------------------------------------------------------
//     @autoLayoutTableViewControllerBoundColumnListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerBoundColumnListAST ("autoLayoutTableViewControllerBoundColumnListAST",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutTableViewControllerBoundColumnListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerBoundColumnListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutTableViewControllerBoundColumnListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutTableViewControllerBoundColumnListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListAST GGS_autoLayoutTableViewControllerBoundColumnListAST::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_autoLayoutTableViewControllerBoundColumnListAST result ;
  const GGS_autoLayoutTableViewControllerBoundColumnListAST * p = (const GGS_autoLayoutTableViewControllerBoundColumnListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutTableViewControllerBoundColumnListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutTableViewControllerBoundColumnListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@astAutoLayoutViewInstructionParameterList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_astAutoLayoutViewInstructionParameterList : public cCollectionElement {
  public: GGS_astAutoLayoutViewInstructionParameterList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_astAutoLayoutViewInstructionParameterList (const GGS_lstring & in_mParameterName,
                                                                        const GGS_autoLayoutClassParameterType & in_mParameterType,
                                                                        const GGS_astAutoLayoutViewInstructionParameterValue & in_mParameter
                                                                        COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_astAutoLayoutViewInstructionParameterList (const GGS_astAutoLayoutViewInstructionParameterList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_astAutoLayoutViewInstructionParameterList::cCollectionElement_astAutoLayoutViewInstructionParameterList (const GGS_lstring & in_mParameterName,
                                                                                                                            const GGS_autoLayoutClassParameterType & in_mParameterType,
                                                                                                                            const GGS_astAutoLayoutViewInstructionParameterValue & in_mParameter
                                                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mParameterName, in_mParameterType, in_mParameter) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_astAutoLayoutViewInstructionParameterList::cCollectionElement_astAutoLayoutViewInstructionParameterList (const GGS_astAutoLayoutViewInstructionParameterList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mParameterName, inElement.mProperty_mParameterType, inElement.mProperty_mParameter) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_astAutoLayoutViewInstructionParameterList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_astAutoLayoutViewInstructionParameterList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_astAutoLayoutViewInstructionParameterList (mObject.mProperty_mParameterName, mObject.mProperty_mParameterType, mObject.mProperty_mParameter COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @astAutoLayoutViewInstructionParameterList
//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterList::GGS_astAutoLayoutViewInstructionParameterList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterList::GGS_astAutoLayoutViewInstructionParameterList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_astAutoLayoutViewInstructionParameterList * p = (cCollectionElement_astAutoLayoutViewInstructionParameterList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewInstructionParameterList) ;
    const GGS_astAutoLayoutViewInstructionParameterList_2E_element element (p->mObject.mProperty_mParameterName, p->mObject.mProperty_mParameterType, p->mObject.mProperty_mParameter) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                               const GGS_lstring & in_mParameterName,
                                                                               const GGS_autoLayoutClassParameterType & in_mParameterType,
                                                                               const GGS_astAutoLayoutViewInstructionParameterValue & in_mParameter
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_astAutoLayoutViewInstructionParameterList * p = nullptr ;
  macroMyNew (p, cCollectionElement_astAutoLayoutViewInstructionParameterList (in_mParameterName, in_mParameterType, in_mParameter COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_astAutoLayoutViewInstructionParameterList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_astAutoLayoutViewInstructionParameterList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterList::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mParameterName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mParameterName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mParameterType:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mParameterType.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mParameter:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mParameter.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterList GGS_astAutoLayoutViewInstructionParameterList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_astAutoLayoutViewInstructionParameterList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterList GGS_astAutoLayoutViewInstructionParameterList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_astAutoLayoutViewInstructionParameterList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterList::plusPlusAssignOperation (const GGS_astAutoLayoutViewInstructionParameterList_2E_element & inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterList GGS_astAutoLayoutViewInstructionParameterList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                                                       const GGS_autoLayoutClassParameterType & inOperand1,
                                                                                                                       const GGS_astAutoLayoutViewInstructionParameterValue & inOperand2
                                                                                                                       COMMA_LOCATION_ARGS) {
  const GGS_astAutoLayoutViewInstructionParameterList_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_astAutoLayoutViewInstructionParameterList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterList::addAssignOperation (const GGS_lstring & inOperand0,
                                                                        const GGS_autoLayoutClassParameterType & inOperand1,
                                                                        const GGS_astAutoLayoutViewInstructionParameterValue & inOperand2
                                                                        COMMA_LOCATION_ARGS) {
  const GGS_astAutoLayoutViewInstructionParameterList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterList::setter_append (const GGS_lstring inOperand0,
                                                                   const GGS_autoLayoutClassParameterType inOperand1,
                                                                   const GGS_astAutoLayoutViewInstructionParameterValue inOperand2,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_LOCATION_ARGS) {
  const GGS_astAutoLayoutViewInstructionParameterList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                                          const GGS_autoLayoutClassParameterType inOperand1,
                                                                          const GGS_astAutoLayoutViewInstructionParameterValue inOperand2,
                                                                          const GGS_uint inInsertionIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  const GGS_astAutoLayoutViewInstructionParameterList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                                          GGS_autoLayoutClassParameterType & outOperand1,
                                                                          GGS_astAutoLayoutViewInstructionParameterValue & outOperand2,
                                                                          const GGS_uint inRemoveIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mParameterName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mParameterType ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mParameter ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterList::setter_popFirst (GGS_lstring & outOperand0,
                                                                     GGS_autoLayoutClassParameterType & outOperand1,
                                                                     GGS_astAutoLayoutViewInstructionParameterValue & outOperand2,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mParameterName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mParameterType ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mParameter ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterList::setter_popLast (GGS_lstring & outOperand0,
                                                                    GGS_autoLayoutClassParameterType & outOperand1,
                                                                    GGS_astAutoLayoutViewInstructionParameterValue & outOperand2,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mParameterName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mParameterType ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mParameter ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterList::method_first (GGS_lstring & outOperand0,
                                                                  GGS_autoLayoutClassParameterType & outOperand1,
                                                                  GGS_astAutoLayoutViewInstructionParameterValue & outOperand2,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mParameterName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mParameterType ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mParameter ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterList::method_last (GGS_lstring & outOperand0,
                                                                 GGS_autoLayoutClassParameterType & outOperand1,
                                                                 GGS_astAutoLayoutViewInstructionParameterValue & outOperand2,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mParameterName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mParameterType ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mParameter ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterList GGS_astAutoLayoutViewInstructionParameterList::add_operation (const GGS_astAutoLayoutViewInstructionParameterList & inOperand,
                                                                                                            Compiler * /* inCompiler */
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_astAutoLayoutViewInstructionParameterList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterList GGS_astAutoLayoutViewInstructionParameterList::subList (const int32_t inStart,
                                                                                                      const int32_t inLength,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_astAutoLayoutViewInstructionParameterList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterList GGS_astAutoLayoutViewInstructionParameterList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_astAutoLayoutViewInstructionParameterList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterList GGS_astAutoLayoutViewInstructionParameterList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_astAutoLayoutViewInstructionParameterList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterList GGS_astAutoLayoutViewInstructionParameterList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_astAutoLayoutViewInstructionParameterList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterList::plusAssignOperation (const GGS_astAutoLayoutViewInstructionParameterList inList,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterList::setter_setMParameterNameAtIndex (GGS_lstring inOperand,
                                                                                     GGS_uint inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mParameterName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_astAutoLayoutViewInstructionParameterList::getter_mParameterNameAtIndex (const GGS_uint & inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mParameterName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterList::setter_setMParameterTypeAtIndex (GGS_autoLayoutClassParameterType inOperand,
                                                                                     GGS_uint inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mParameterType = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_autoLayoutClassParameterType GGS_astAutoLayoutViewInstructionParameterList::getter_mParameterTypeAtIndex (const GGS_uint & inIndex,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutClassParameterType result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mParameterType ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterList::setter_setMParameterAtIndex (GGS_astAutoLayoutViewInstructionParameterValue inOperand,
                                                                                 GGS_uint inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mParameter = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_astAutoLayoutViewInstructionParameterValue GGS_astAutoLayoutViewInstructionParameterList::getter_mParameterAtIndex (const GGS_uint & inIndex,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_astAutoLayoutViewInstructionParameterValue result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mParameter ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @astAutoLayoutViewInstructionParameterList
//--------------------------------------------------------------------------------------------------

DownEnumerator_astAutoLayoutViewInstructionParameterList::DownEnumerator_astAutoLayoutViewInstructionParameterList (const GGS_astAutoLayoutViewInstructionParameterList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterList_2E_element DownEnumerator_astAutoLayoutViewInstructionParameterList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_astAutoLayoutViewInstructionParameterList::current_mParameterName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mParameterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterType DownEnumerator_astAutoLayoutViewInstructionParameterList::current_mParameterType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mParameterType ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue DownEnumerator_astAutoLayoutViewInstructionParameterList::current_mParameter (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mParameter ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @astAutoLayoutViewInstructionParameterList
//--------------------------------------------------------------------------------------------------

UpEnumerator_astAutoLayoutViewInstructionParameterList::UpEnumerator_astAutoLayoutViewInstructionParameterList (const GGS_astAutoLayoutViewInstructionParameterList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterList_2E_element UpEnumerator_astAutoLayoutViewInstructionParameterList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_astAutoLayoutViewInstructionParameterList::current_mParameterName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mParameterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterType UpEnumerator_astAutoLayoutViewInstructionParameterList::current_mParameterType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mParameterType ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue UpEnumerator_astAutoLayoutViewInstructionParameterList::current_mParameter (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mParameter ;
}




//--------------------------------------------------------------------------------------------------
//     @astAutoLayoutViewInstructionParameterList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterList ("astAutoLayoutViewInstructionParameterList",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astAutoLayoutViewInstructionParameterList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astAutoLayoutViewInstructionParameterList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astAutoLayoutViewInstructionParameterList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterList GGS_astAutoLayoutViewInstructionParameterList::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_astAutoLayoutViewInstructionParameterList result ;
  const GGS_astAutoLayoutViewInstructionParameterList * p = (const GGS_astAutoLayoutViewInstructionParameterList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astAutoLayoutViewInstructionParameterList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astAutoLayoutViewInstructionParameterList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@autoLayoutTableViewControllerAttributListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_autoLayoutTableViewControllerAttributListAST : public cCollectionElement {
  public: GGS_autoLayoutTableViewControllerAttributListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_autoLayoutTableViewControllerAttributListAST (const GGS_lstring & in_mAttributeName,
                                                                           const GGS_abstractDefaultValue & in_mAttributeValue
                                                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_autoLayoutTableViewControllerAttributListAST (const GGS_autoLayoutTableViewControllerAttributListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutTableViewControllerAttributListAST::cCollectionElement_autoLayoutTableViewControllerAttributListAST (const GGS_lstring & in_mAttributeName,
                                                                                                                                  const GGS_abstractDefaultValue & in_mAttributeValue
                                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mAttributeName, in_mAttributeValue) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutTableViewControllerAttributListAST::cCollectionElement_autoLayoutTableViewControllerAttributListAST (const GGS_autoLayoutTableViewControllerAttributListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mAttributeName, inElement.mProperty_mAttributeValue) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_autoLayoutTableViewControllerAttributListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_autoLayoutTableViewControllerAttributListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_autoLayoutTableViewControllerAttributListAST (mObject.mProperty_mAttributeName, mObject.mProperty_mAttributeValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @autoLayoutTableViewControllerAttributListAST
//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerAttributListAST::GGS_autoLayoutTableViewControllerAttributListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerAttributListAST::GGS_autoLayoutTableViewControllerAttributListAST (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = (cCollectionElement_autoLayoutTableViewControllerAttributListAST *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST) ;
    const GGS_autoLayoutTableViewControllerAttributListAST_2E_element element (p->mObject.mProperty_mAttributeName, p->mObject.mProperty_mAttributeValue) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerAttributListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                  const GGS_lstring & in_mAttributeName,
                                                                                  const GGS_abstractDefaultValue & in_mAttributeValue
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST (in_mAttributeName, in_mAttributeValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_autoLayoutTableViewControllerAttributListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_autoLayoutTableViewControllerAttributListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerAttributListAST::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mAttributeName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mAttributeName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mAttributeValue:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mAttributeValue.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerAttributListAST GGS_autoLayoutTableViewControllerAttributListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutTableViewControllerAttributListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerAttributListAST GGS_autoLayoutTableViewControllerAttributListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutTableViewControllerAttributListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerAttributListAST::plusPlusAssignOperation (const GGS_autoLayoutTableViewControllerAttributListAST_2E_element & inValue
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerAttributListAST GGS_autoLayoutTableViewControllerAttributListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                                                             const GGS_abstractDefaultValue & inOperand1
                                                                                                                             COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutTableViewControllerAttributListAST_2E_element element (inOperand0, inOperand1) ;
  GGS_autoLayoutTableViewControllerAttributListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerAttributListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                                           const GGS_abstractDefaultValue & inOperand1
                                                                           COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutTableViewControllerAttributListAST_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerAttributListAST::setter_append (const GGS_lstring inOperand0,
                                                                      const GGS_abstractDefaultValue inOperand1,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutTableViewControllerAttributListAST_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerAttributListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                                             const GGS_abstractDefaultValue inOperand1,
                                                                             const GGS_uint inInsertionIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutTableViewControllerAttributListAST_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerAttributListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                                             GGS_abstractDefaultValue & outOperand1,
                                                                             const GGS_uint inRemoveIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mAttributeName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mAttributeValue ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerAttributListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                                        GGS_abstractDefaultValue & outOperand1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mAttributeName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mAttributeValue ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerAttributListAST::setter_popLast (GGS_lstring & outOperand0,
                                                                       GGS_abstractDefaultValue & outOperand1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mAttributeName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mAttributeValue ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerAttributListAST::method_first (GGS_lstring & outOperand0,
                                                                     GGS_abstractDefaultValue & outOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mAttributeName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mAttributeValue ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerAttributListAST::method_last (GGS_lstring & outOperand0,
                                                                    GGS_abstractDefaultValue & outOperand1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mAttributeName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mAttributeValue ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerAttributListAST GGS_autoLayoutTableViewControllerAttributListAST::add_operation (const GGS_autoLayoutTableViewControllerAttributListAST & inOperand,
                                                                                                                  Compiler * /* inCompiler */
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_autoLayoutTableViewControllerAttributListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerAttributListAST GGS_autoLayoutTableViewControllerAttributListAST::subList (const int32_t inStart,
                                                                                                            const int32_t inLength,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutTableViewControllerAttributListAST result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerAttributListAST GGS_autoLayoutTableViewControllerAttributListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutTableViewControllerAttributListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerAttributListAST GGS_autoLayoutTableViewControllerAttributListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutTableViewControllerAttributListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerAttributListAST GGS_autoLayoutTableViewControllerAttributListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutTableViewControllerAttributListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerAttributListAST::plusAssignOperation (const GGS_autoLayoutTableViewControllerAttributListAST inList,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerAttributListAST::setter_setMAttributeNameAtIndex (GGS_lstring inOperand,
                                                                                        GGS_uint inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mAttributeName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_autoLayoutTableViewControllerAttributListAST::getter_mAttributeNameAtIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mAttributeName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerAttributListAST::setter_setMAttributeValueAtIndex (GGS_abstractDefaultValue inOperand,
                                                                                         GGS_uint inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mAttributeValue = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_abstractDefaultValue GGS_autoLayoutTableViewControllerAttributListAST::getter_mAttributeValueAtIndex (const GGS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_abstractDefaultValue result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mAttributeValue ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @autoLayoutTableViewControllerAttributListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_autoLayoutTableViewControllerAttributListAST::DownEnumerator_autoLayoutTableViewControllerAttributListAST (const GGS_autoLayoutTableViewControllerAttributListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerAttributListAST_2E_element DownEnumerator_autoLayoutTableViewControllerAttributListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_autoLayoutTableViewControllerAttributListAST::current_mAttributeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mAttributeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDefaultValue DownEnumerator_autoLayoutTableViewControllerAttributListAST::current_mAttributeValue (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mAttributeValue ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @autoLayoutTableViewControllerAttributListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_autoLayoutTableViewControllerAttributListAST::UpEnumerator_autoLayoutTableViewControllerAttributListAST (const GGS_autoLayoutTableViewControllerAttributListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerAttributListAST_2E_element UpEnumerator_autoLayoutTableViewControllerAttributListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_autoLayoutTableViewControllerAttributListAST::current_mAttributeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mAttributeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDefaultValue UpEnumerator_autoLayoutTableViewControllerAttributListAST::current_mAttributeValue (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mAttributeValue ;
}




//--------------------------------------------------------------------------------------------------
//     @autoLayoutTableViewControllerAttributListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerAttributListAST ("autoLayoutTableViewControllerAttributListAST",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutTableViewControllerAttributListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerAttributListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutTableViewControllerAttributListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutTableViewControllerAttributListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerAttributListAST GGS_autoLayoutTableViewControllerAttributListAST::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_autoLayoutTableViewControllerAttributListAST result ;
  const GGS_autoLayoutTableViewControllerAttributListAST * p = (const GGS_autoLayoutTableViewControllerAttributListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutTableViewControllerAttributListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutTableViewControllerAttributListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @abstractDefaultValue reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractDefaultValue::objectCompare (const GGS_abstractDefaultValue & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDefaultValue::GGS_abstractDefaultValue (void) :
AC_GALGAS_reference_class () {
}


void cPtr_abstractDefaultValue::
abstractDefaultValue_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDefaultValue::GGS_abstractDefaultValue (const cPtr_abstractDefaultValue * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractDefaultValue) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractDefaultValue class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_abstractDefaultValue::cPtr_abstractDefaultValue (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractDefaultValue::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @abstractDefaultValue generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractDefaultValue ("abstractDefaultValue",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractDefaultValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractDefaultValue ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractDefaultValue::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractDefaultValue (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDefaultValue GGS_abstractDefaultValue::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_abstractDefaultValue result ;
  const GGS_abstractDefaultValue * p = (const GGS_abstractDefaultValue *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractDefaultValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractDefaultValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak::objectCompare (const GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak::GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak & GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak::operator = (const GGS_autoLayoutTableViewControllerDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak::GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak (const GGS_autoLayoutTableViewControllerDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerDeclarationAST GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_autoLayoutTableViewControllerDeclarationAST result ;
  if (isValid ()) {
    const cPtr_autoLayoutTableViewControllerDeclarationAST * p = (cPtr_autoLayoutTableViewControllerDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_autoLayoutTableViewControllerDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerDeclarationAST GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak::bang_autoLayoutTableViewControllerDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutTableViewControllerDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_autoLayoutTableViewControllerDeclarationAST) ;
      result = GGS_autoLayoutTableViewControllerDeclarationAST ((cPtr_autoLayoutTableViewControllerDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @autoLayoutTableViewControllerDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerDeclarationAST_2E_weak ("autoLayoutTableViewControllerDeclarationAST.weak",
                                                                                                        & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak result ;
  const GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak * p = (const GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutTableViewControllerDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @autoLayoutTableViewControllerPropertyGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_autoLayoutTableViewControllerPropertyGeneration::objectCompare (const GGS_autoLayoutTableViewControllerPropertyGeneration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerPropertyGeneration::GGS_autoLayoutTableViewControllerPropertyGeneration (void) :
GGS_propertyGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_autoLayoutTableViewControllerPropertyGeneration GGS_autoLayoutTableViewControllerPropertyGeneration::
init_21__21__21_ (const GGS_string & in_mPropertyName,
                  const GGS_string & in_mModelString,
                  const GGS_string & in_mOwnerName,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_autoLayoutTableViewControllerPropertyGeneration * object = nullptr ;
  macroMyNew (object, cPtr_autoLayoutTableViewControllerPropertyGeneration (inCompiler COMMA_THERE)) ;
  object->autoLayoutTableViewControllerPropertyGeneration_init_21__21__21_ (in_mPropertyName, in_mModelString, in_mOwnerName, inCompiler) ;
  const GGS_autoLayoutTableViewControllerPropertyGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutTableViewControllerPropertyGeneration::
autoLayoutTableViewControllerPropertyGeneration_init_21__21__21_ (const GGS_string & in_mPropertyName,
                                                                  const GGS_string & in_mModelString,
                                                                  const GGS_string & in_mOwnerName,
                                                                  Compiler * /* inCompiler */) {
  mProperty_mPropertyName = in_mPropertyName ;
  mProperty_mModelString = in_mModelString ;
  mProperty_mOwnerName = in_mOwnerName ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerPropertyGeneration::GGS_autoLayoutTableViewControllerPropertyGeneration (const cPtr_autoLayoutTableViewControllerPropertyGeneration * inSourcePtr) :
GGS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_autoLayoutTableViewControllerPropertyGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerPropertyGeneration GGS_autoLayoutTableViewControllerPropertyGeneration::class_func_new (const GGS_string & in_mPropertyName,
                                                                                                                         const GGS_string & in_mModelString,
                                                                                                                         const GGS_string & in_mOwnerName,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) {
  GGS_autoLayoutTableViewControllerPropertyGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_autoLayoutTableViewControllerPropertyGeneration (in_mPropertyName, in_mModelString, in_mOwnerName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_autoLayoutTableViewControllerPropertyGeneration::readProperty_mModelString (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_autoLayoutTableViewControllerPropertyGeneration * p = (cPtr_autoLayoutTableViewControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerPropertyGeneration) ;
    return p->mProperty_mModelString ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_autoLayoutTableViewControllerPropertyGeneration::readProperty_mOwnerName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_autoLayoutTableViewControllerPropertyGeneration * p = (cPtr_autoLayoutTableViewControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerPropertyGeneration) ;
    return p->mProperty_mOwnerName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @autoLayoutTableViewControllerPropertyGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutTableViewControllerPropertyGeneration::cPtr_autoLayoutTableViewControllerPropertyGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (inCompiler COMMA_THERE),
mProperty_mModelString (),
mProperty_mOwnerName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutTableViewControllerPropertyGeneration::cPtr_autoLayoutTableViewControllerPropertyGeneration (const GGS_string & in_mPropertyName,
                                                                                                            const GGS_string & in_mModelString,
                                                                                                            const GGS_string & in_mOwnerName,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (in_mPropertyName, inCompiler COMMA_THERE),
mProperty_mModelString (),
mProperty_mOwnerName () {
  mProperty_mPropertyName = in_mPropertyName ;
  mProperty_mModelString = in_mModelString ;
  mProperty_mOwnerName = in_mOwnerName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_autoLayoutTableViewControllerPropertyGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerPropertyGeneration ;
}

void cPtr_autoLayoutTableViewControllerPropertyGeneration::description (String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@autoLayoutTableViewControllerPropertyGeneration:") ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mModelString.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOwnerName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_autoLayoutTableViewControllerPropertyGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_autoLayoutTableViewControllerPropertyGeneration (mProperty_mPropertyName, mProperty_mModelString, mProperty_mOwnerName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_autoLayoutTableViewControllerPropertyGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_propertyGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mModelString.printNonNullClassInstanceProperties ("mModelString") ;
    mProperty_mOwnerName.printNonNullClassInstanceProperties ("mOwnerName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @autoLayoutTableViewControllerPropertyGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerPropertyGeneration ("autoLayoutTableViewControllerPropertyGeneration",
                                                                                                    & kTypeDescriptor_GALGAS_propertyGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutTableViewControllerPropertyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerPropertyGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutTableViewControllerPropertyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutTableViewControllerPropertyGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerPropertyGeneration GGS_autoLayoutTableViewControllerPropertyGeneration::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_autoLayoutTableViewControllerPropertyGeneration result ;
  const GGS_autoLayoutTableViewControllerPropertyGeneration * p = (const GGS_autoLayoutTableViewControllerPropertyGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutTableViewControllerPropertyGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutTableViewControllerPropertyGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}


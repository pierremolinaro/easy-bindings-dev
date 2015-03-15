#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-2.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'generateSwiftApplicationFiles'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateSwiftApplicationFiles (const GALGAS_string constinArgument_inOutputDirectory,
                                            const GALGAS_bool constinArgument_inHasEntities,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist temp_0 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("code-generation.galgas", 86)) ;
  temp_0.addAssign_operation (GALGAS_string ("main")  COMMA_SOURCE_FILE ("code-generation.galgas", 81)) ;
  temp_0.addAssign_operation (GALGAS_string ("PMAllocationDebug")  COMMA_SOURCE_FILE ("code-generation.galgas", 82)) ;
  temp_0.addAssign_operation (GALGAS_string ("easy-bindings-utilities")  COMMA_SOURCE_FILE ("code-generation.galgas", 83)) ;
  temp_0.addAssign_operation (GALGAS_string ("standard-properties")  COMMA_SOURCE_FILE ("code-generation.galgas", 84)) ;
  temp_0.addAssign_operation (GALGAS_string ("generic-bindings")  COMMA_SOURCE_FILE ("code-generation.galgas", 85)) ;
  temp_0.addAssign_operation (GALGAS_string ("application")  COMMA_SOURCE_FILE ("code-generation.galgas", 86)) ;
  GALGAS_stringlist var_swiftFiles = temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inHasEntities.boolEnum () ;
  if (kBoolTrue == test_1) {
    var_swiftFiles.addAssign_operation (GALGAS_string ("PMManagedObject")  COMMA_SOURCE_FILE ("code-generation.galgas", 89)) ;
    var_swiftFiles.addAssign_operation (GALGAS_string ("PMManagedDocument")  COMMA_SOURCE_FILE ("code-generation.galgas", 90)) ;
    var_swiftFiles.addAssign_operation (GALGAS_string ("PMUndoManager")  COMMA_SOURCE_FILE ("code-generation.galgas", 91)) ;
    var_swiftFiles.addAssign_operation (GALGAS_string ("PMDataScanner")  COMMA_SOURCE_FILE ("code-generation.galgas", 92)) ;
  }
  GALGAS_stringlist temp_2 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("code-generation.galgas", 94)) ;
  temp_2.addAssign_operation (GALGAS_string ("PMAllocationDebug")  COMMA_SOURCE_FILE ("code-generation.galgas", 94)) ;
  GALGAS_stringlist var_xibFiles = temp_2 ;
  GALGAS_filewrapper var_fw = GALGAS_filewrapper (gWrapperDirectory_0_swift_5F_sources) ;
  cEnumerator_stringlist enumerator_3202 (var_swiftFiles, kEnumeration_up) ;
  while (enumerator_3202.hasCurrentObject ()) {
    GALGAS_string var_contents = var_fw.reader_textFileContentsAtPath (enumerator_3202.current_mValue (HERE).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 97)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 97)) ;
    {
    GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, enumerator_3202.current_mValue (HERE).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 100)), var_contents, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 98)) ;
    }
    enumerator_3202.gotoNextObject () ;
  }
  cEnumerator_stringlist enumerator_3395 (var_xibFiles, kEnumeration_up) ;
  while (enumerator_3395.hasCurrentObject ()) {
    GALGAS_string var_contents = var_fw.reader_textFileContentsAtPath (enumerator_3395.current_mValue (HERE).add_operation (GALGAS_string (".xib"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 105)) ;
    {
    GALGAS_string::class_method_generateFile (constinArgument_inOutputDirectory, enumerator_3395.current_mValue (HERE).add_operation (GALGAS_string (".xib"), inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 108)), var_contents, inCompiler COMMA_SOURCE_FILE ("code-generation.galgas", 106)) ;
    }
    enumerator_3395.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Filewrapper 'validationStubExtension'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- All files of 'collection-controller-templates' directory

static const cRegularFileWrapper * gWrapperAllFiles_validationStubExtension_1 [1] = {
  NULL
} ;

//--- All sub-directories of 'collection-controller-templates' directory

static const cDirectoryWrapper * gWrapperAllDirectories_validationStubExtension_1 [1] = {
  NULL
} ;

//--- Directory 'collection-controller-templates'

const cDirectoryWrapper gWrapperDirectory_1_validationStubExtension (
  "collection-controller-templates",
  0,
  gWrapperAllFiles_validationStubExtension_1,
  0,
  gWrapperAllDirectories_validationStubExtension_1
) ;

//--- All files of 'outlet-classes' directory

static const cRegularFileWrapper * gWrapperAllFiles_validationStubExtension_2 [1] = {
  NULL
} ;

//--- All sub-directories of 'outlet-classes' directory

static const cDirectoryWrapper * gWrapperAllDirectories_validationStubExtension_2 [1] = {
  NULL
} ;

//--- Directory 'outlet-classes'

const cDirectoryWrapper gWrapperDirectory_2_validationStubExtension (
  "outlet-classes",
  0,
  gWrapperAllFiles_validationStubExtension_2,
  0,
  gWrapperAllDirectories_validationStubExtension_2
) ;

//--- All files of 'swift-sources' directory

static const cRegularFileWrapper * gWrapperAllFiles_validationStubExtension_3 [1] = {
  NULL
} ;

//--- All sub-directories of 'swift-sources' directory

static const cDirectoryWrapper * gWrapperAllDirectories_validationStubExtension_3 [1] = {
  NULL
} ;

//--- Directory 'swift-sources'

const cDirectoryWrapper gWrapperDirectory_3_validationStubExtension (
  "swift-sources",
  0,
  gWrapperAllFiles_validationStubExtension_3,
  0,
  gWrapperAllDirectories_validationStubExtension_3
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_validationStubExtension_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_validationStubExtension_0 [4] = {
  & gWrapperDirectory_1_validationStubExtension,
  & gWrapperDirectory_2_validationStubExtension,
  & gWrapperDirectory_3_validationStubExtension,
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


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Filewrapper template 'validationStubExtension actionGeneration'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_validationStubExtension_actionGeneration (C_Compiler * /* inCompiler */,
                                                                            const GALGAS_string & in_OBJECT_5F_TYPE_5F_NAME,
                                                                            const GALGAS_string & in_MODEL_5F_NAME,
                                                                            const GALGAS_string & in_MODEL_5F_TYPE_5F_NAME
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "import Cocoa\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "extension " ;
  result << in_OBJECT_5F_TYPE_5F_NAME.stringValue () ;
  result << " {\n"
    "  func validate_" ;
  result << in_MODEL_5F_NAME.stringValue () ;
  result << " (proposedValue : " ;
  result << in_MODEL_5F_TYPE_5F_NAME.stringValue () ;
  result << ") -> PMValidationResult {\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'generateValidationRoutineStubs'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateValidationRoutineStubs (const GALGAS_string constinArgument_inOutputDirectory,
                                             const GALGAS_validationStubRoutineListForGeneration constinArgument_inValidationStubRoutineListForGeneration,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_defaultUserZone_32_ = GALGAS_string ("    var result = PMValidationResult.ok\n").add_operation (GALGAS_string ("    let validates = false // Add your validation condition here\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.galgas", 29)).add_operation (GALGAS_string ("    if !validates {\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.galgas", 30)).add_operation (GALGAS_string ("      result = PMValidationResult.rejectWithAlert (\"Rejected in \\(__FILE__), line \\(__LINE__)\")\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.galgas", 31)).add_operation (GALGAS_string ("    }\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.galgas", 32)).add_operation (GALGAS_string ("    return result\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.galgas", 33)) ;
  cEnumerator_validationStubRoutineListForGeneration enumerator_1749 (constinArgument_inValidationStubRoutineListForGeneration, kEnumeration_up) ;
  while (enumerator_1749.hasCurrentObject ()) {
    GALGAS_string var_s = GALGAS_string (filewrapperTemplate_validationStubExtension_actionGeneration (inCompiler, enumerator_1749.current_mObjectTypeName (HERE), enumerator_1749.current_mModelName (HERE), enumerator_1749.current_mModelTypeName (HERE) COMMA_SOURCE_FILE ("property-validation-stub-routine.galgas", 36))) ;
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, enumerator_1749.current_mObjectTypeName (HERE).add_operation (GALGAS_string ("+validation+"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.galgas", 43)).add_operation (enumerator_1749.current_mModelName (HERE), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.galgas", 43)).add_operation (GALGAS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.galgas", 43)), GALGAS_string ("//"), GALGAS_string ("\n"
      "\n"), var_s, var_defaultUserZone_32_, GALGAS_string ("  }\n"
      "}\n"
      "\n"
      "//---------------------------------------------------------------------------------------------------------------------*\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.galgas", 41)) ;
    }
    enumerator_1749.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_abstractBooleanMultipleBindingExpressionAST::objectCompare (const GALGAS_abstractBooleanMultipleBindingExpressionAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractBooleanMultipleBindingExpressionAST::GALGAS_abstractBooleanMultipleBindingExpressionAST (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractBooleanMultipleBindingExpressionAST::GALGAS_abstractBooleanMultipleBindingExpressionAST (const cPtr_abstractBooleanMultipleBindingExpressionAST * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractBooleanMultipleBindingExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                        Pointer class for @abstractBooleanMultipleBindingExpressionAST class                         *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_abstractBooleanMultipleBindingExpressionAST::cPtr_abstractBooleanMultipleBindingExpressionAST (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @abstractBooleanMultipleBindingExpressionAST type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST ("abstractBooleanMultipleBindingExpressionAST",
                                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_abstractBooleanMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_abstractBooleanMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractBooleanMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_abstractBooleanMultipleBindingExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_abstractBooleanMultipleBindingExpressionAST result ;
  const GALGAS_abstractBooleanMultipleBindingExpressionAST * p = (const GALGAS_abstractBooleanMultipleBindingExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractBooleanMultipleBindingExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractBooleanMultipleBindingExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_andBooleanMultipleBindingExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_andBooleanMultipleBindingExpressionAST * p = (const cPtr_andBooleanMultipleBindingExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLeftBinding.objectCompare (p->mAttribute_mLeftBinding) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightBinding.objectCompare (p->mAttribute_mRightBinding) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_andBooleanMultipleBindingExpressionAST::objectCompare (const GALGAS_andBooleanMultipleBindingExpressionAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_andBooleanMultipleBindingExpressionAST::GALGAS_andBooleanMultipleBindingExpressionAST (void) :
GALGAS_abstractBooleanMultipleBindingExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_andBooleanMultipleBindingExpressionAST::GALGAS_andBooleanMultipleBindingExpressionAST (const cPtr_andBooleanMultipleBindingExpressionAST * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_andBooleanMultipleBindingExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_andBooleanMultipleBindingExpressionAST GALGAS_andBooleanMultipleBindingExpressionAST::constructor_new (const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAttribute_mLeftBinding,
                                                                                                              const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAttribute_mRightBinding
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_andBooleanMultipleBindingExpressionAST result ;
  if (inAttribute_mLeftBinding.isValid () && inAttribute_mRightBinding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_andBooleanMultipleBindingExpressionAST (inAttribute_mLeftBinding, inAttribute_mRightBinding COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_andBooleanMultipleBindingExpressionAST::reader_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_andBooleanMultipleBindingExpressionAST * p = (const cPtr_andBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionAST) ;
    result = p->mAttribute_mLeftBinding ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractBooleanMultipleBindingExpressionAST cPtr_andBooleanMultipleBindingExpressionAST::reader_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftBinding ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_andBooleanMultipleBindingExpressionAST::reader_mRightBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_andBooleanMultipleBindingExpressionAST * p = (const cPtr_andBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionAST) ;
    result = p->mAttribute_mRightBinding ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractBooleanMultipleBindingExpressionAST cPtr_andBooleanMultipleBindingExpressionAST::reader_mRightBinding (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightBinding ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                           Pointer class for @andBooleanMultipleBindingExpressionAST class                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_andBooleanMultipleBindingExpressionAST::cPtr_andBooleanMultipleBindingExpressionAST (const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                                                          const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (THERE),
mAttribute_mLeftBinding (in_mLeftBinding),
mAttribute_mRightBinding (in_mRightBinding) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_andBooleanMultipleBindingExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionAST ;
}

void cPtr_andBooleanMultipleBindingExpressionAST::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "[@andBooleanMultipleBindingExpressionAST:" ;
  mAttribute_mLeftBinding.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightBinding.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_andBooleanMultipleBindingExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_andBooleanMultipleBindingExpressionAST (mAttribute_mLeftBinding, mAttribute_mRightBinding COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @andBooleanMultipleBindingExpressionAST type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionAST ("andBooleanMultipleBindingExpressionAST",
                                                               & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_andBooleanMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_andBooleanMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_andBooleanMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_andBooleanMultipleBindingExpressionAST GALGAS_andBooleanMultipleBindingExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_andBooleanMultipleBindingExpressionAST result ;
  const GALGAS_andBooleanMultipleBindingExpressionAST * p = (const GALGAS_andBooleanMultipleBindingExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_andBooleanMultipleBindingExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("andBooleanMultipleBindingExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_comparisonMultipleBindingExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_comparisonMultipleBindingExpressionAST * p = (const cPtr_comparisonMultipleBindingExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLeftBinding.objectCompare (p->mAttribute_mLeftBinding) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOperator.objectCompare (p->mAttribute_mOperator) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightBinding.objectCompare (p->mAttribute_mRightBinding) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_comparisonMultipleBindingExpressionAST::objectCompare (const GALGAS_comparisonMultipleBindingExpressionAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_comparisonMultipleBindingExpressionAST::GALGAS_comparisonMultipleBindingExpressionAST (void) :
GALGAS_abstractBooleanMultipleBindingExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_comparisonMultipleBindingExpressionAST::GALGAS_comparisonMultipleBindingExpressionAST (const cPtr_comparisonMultipleBindingExpressionAST * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_comparisonMultipleBindingExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_comparisonMultipleBindingExpressionAST GALGAS_comparisonMultipleBindingExpressionAST::constructor_new (const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAttribute_mLeftBinding,
                                                                                                              const GALGAS_multipleBindingComparisonAST & inAttribute_mOperator,
                                                                                                              const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAttribute_mRightBinding
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_comparisonMultipleBindingExpressionAST result ;
  if (inAttribute_mLeftBinding.isValid () && inAttribute_mOperator.isValid () && inAttribute_mRightBinding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_comparisonMultipleBindingExpressionAST (inAttribute_mLeftBinding, inAttribute_mOperator, inAttribute_mRightBinding COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_comparisonMultipleBindingExpressionAST::reader_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_comparisonMultipleBindingExpressionAST * p = (const cPtr_comparisonMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionAST) ;
    result = p->mAttribute_mLeftBinding ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractBooleanMultipleBindingExpressionAST cPtr_comparisonMultipleBindingExpressionAST::reader_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftBinding ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleBindingComparisonAST GALGAS_comparisonMultipleBindingExpressionAST::reader_mOperator (UNUSED_LOCATION_ARGS) const {
  GALGAS_multipleBindingComparisonAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_comparisonMultipleBindingExpressionAST * p = (const cPtr_comparisonMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionAST) ;
    result = p->mAttribute_mOperator ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleBindingComparisonAST cPtr_comparisonMultipleBindingExpressionAST::reader_mOperator (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_comparisonMultipleBindingExpressionAST::reader_mRightBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_comparisonMultipleBindingExpressionAST * p = (const cPtr_comparisonMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionAST) ;
    result = p->mAttribute_mRightBinding ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractBooleanMultipleBindingExpressionAST cPtr_comparisonMultipleBindingExpressionAST::reader_mRightBinding (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightBinding ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                           Pointer class for @comparisonMultipleBindingExpressionAST class                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_comparisonMultipleBindingExpressionAST::cPtr_comparisonMultipleBindingExpressionAST (const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                                                          const GALGAS_multipleBindingComparisonAST & in_mOperator,
                                                                                          const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (THERE),
mAttribute_mLeftBinding (in_mLeftBinding),
mAttribute_mOperator (in_mOperator),
mAttribute_mRightBinding (in_mRightBinding) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_comparisonMultipleBindingExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionAST ;
}

void cPtr_comparisonMultipleBindingExpressionAST::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "[@comparisonMultipleBindingExpressionAST:" ;
  mAttribute_mLeftBinding.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOperator.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightBinding.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_comparisonMultipleBindingExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_comparisonMultipleBindingExpressionAST (mAttribute_mLeftBinding, mAttribute_mOperator, mAttribute_mRightBinding COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @comparisonMultipleBindingExpressionAST type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionAST ("comparisonMultipleBindingExpressionAST",
                                                               & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_comparisonMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_comparisonMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_comparisonMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_comparisonMultipleBindingExpressionAST GALGAS_comparisonMultipleBindingExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_comparisonMultipleBindingExpressionAST result ;
  const GALGAS_comparisonMultipleBindingExpressionAST * p = (const GALGAS_comparisonMultipleBindingExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_comparisonMultipleBindingExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("comparisonMultipleBindingExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_literalIntMultipleBindingExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literalIntMultipleBindingExpressionAST * p = (const cPtr_literalIntMultipleBindingExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalIntMultipleBindingExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mValue.objectCompare (p->mAttribute_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalIntMultipleBindingExpressionAST::GALGAS_literalIntMultipleBindingExpressionAST (void) :
GALGAS_abstractBooleanMultipleBindingExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalIntMultipleBindingExpressionAST GALGAS_literalIntMultipleBindingExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_literalIntMultipleBindingExpressionAST::constructor_new (GALGAS_luint::constructor_default (HERE)
                                                                         COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalIntMultipleBindingExpressionAST::GALGAS_literalIntMultipleBindingExpressionAST (const cPtr_literalIntMultipleBindingExpressionAST * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalIntMultipleBindingExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_literalIntMultipleBindingExpressionAST GALGAS_literalIntMultipleBindingExpressionAST::constructor_new (const GALGAS_luint & inAttribute_mValue
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_literalIntMultipleBindingExpressionAST result ;
  if (inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literalIntMultipleBindingExpressionAST (inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_literalIntMultipleBindingExpressionAST::reader_mValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_luint result ;
  if (NULL != mObjectPtr) {
    const cPtr_literalIntMultipleBindingExpressionAST * p = (const cPtr_literalIntMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalIntMultipleBindingExpressionAST) ;
    result = p->mAttribute_mValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint cPtr_literalIntMultipleBindingExpressionAST::reader_mValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                           Pointer class for @literalIntMultipleBindingExpressionAST class                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_literalIntMultipleBindingExpressionAST::cPtr_literalIntMultipleBindingExpressionAST (const GALGAS_luint & in_mValue
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (THERE),
mAttribute_mValue (in_mValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_literalIntMultipleBindingExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalIntMultipleBindingExpressionAST ;
}

void cPtr_literalIntMultipleBindingExpressionAST::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "[@literalIntMultipleBindingExpressionAST:" ;
  mAttribute_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_literalIntMultipleBindingExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalIntMultipleBindingExpressionAST (mAttribute_mValue COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @literalIntMultipleBindingExpressionAST type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalIntMultipleBindingExpressionAST ("literalIntMultipleBindingExpressionAST",
                                                               & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_literalIntMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalIntMultipleBindingExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_literalIntMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalIntMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_negateBooleanMultipleBindingExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_negateBooleanMultipleBindingExpressionAST * p = (const cPtr_negateBooleanMultipleBindingExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_negateBooleanMultipleBindingExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mBinding.objectCompare (p->mAttribute_mBinding) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_negateBooleanMultipleBindingExpressionAST::objectCompare (const GALGAS_negateBooleanMultipleBindingExpressionAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_negateBooleanMultipleBindingExpressionAST::GALGAS_negateBooleanMultipleBindingExpressionAST (void) :
GALGAS_abstractBooleanMultipleBindingExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_negateBooleanMultipleBindingExpressionAST::GALGAS_negateBooleanMultipleBindingExpressionAST (const cPtr_negateBooleanMultipleBindingExpressionAST * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_negateBooleanMultipleBindingExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_negateBooleanMultipleBindingExpressionAST GALGAS_negateBooleanMultipleBindingExpressionAST::constructor_new (const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAttribute_mBinding
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_negateBooleanMultipleBindingExpressionAST result ;
  if (inAttribute_mBinding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_negateBooleanMultipleBindingExpressionAST (inAttribute_mBinding COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_negateBooleanMultipleBindingExpressionAST::reader_mBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_negateBooleanMultipleBindingExpressionAST * p = (const cPtr_negateBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_negateBooleanMultipleBindingExpressionAST) ;
    result = p->mAttribute_mBinding ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractBooleanMultipleBindingExpressionAST cPtr_negateBooleanMultipleBindingExpressionAST::reader_mBinding (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBinding ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                         Pointer class for @negateBooleanMultipleBindingExpressionAST class                          *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_negateBooleanMultipleBindingExpressionAST::cPtr_negateBooleanMultipleBindingExpressionAST (const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mBinding
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (THERE),
mAttribute_mBinding (in_mBinding) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_negateBooleanMultipleBindingExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionAST ;
}

void cPtr_negateBooleanMultipleBindingExpressionAST::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "[@negateBooleanMultipleBindingExpressionAST:" ;
  mAttribute_mBinding.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_negateBooleanMultipleBindingExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_negateBooleanMultipleBindingExpressionAST (mAttribute_mBinding COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @negateBooleanMultipleBindingExpressionAST type                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionAST ("negateBooleanMultipleBindingExpressionAST",
                                                                  & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_negateBooleanMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_negateBooleanMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_negateBooleanMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_negateBooleanMultipleBindingExpressionAST GALGAS_negateBooleanMultipleBindingExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_negateBooleanMultipleBindingExpressionAST result ;
  const GALGAS_negateBooleanMultipleBindingExpressionAST * p = (const GALGAS_negateBooleanMultipleBindingExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_negateBooleanMultipleBindingExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("negateBooleanMultipleBindingExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_observablePropertyInMultipleBindingExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_observablePropertyInMultipleBindingExpressionAST * p = (const cPtr_observablePropertyInMultipleBindingExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_observablePropertyInMultipleBindingExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mProperty.objectCompare (p->mAttribute_mProperty) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_observablePropertyInMultipleBindingExpressionAST::objectCompare (const GALGAS_observablePropertyInMultipleBindingExpressionAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyInMultipleBindingExpressionAST::GALGAS_observablePropertyInMultipleBindingExpressionAST (void) :
GALGAS_abstractBooleanMultipleBindingExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyInMultipleBindingExpressionAST::GALGAS_observablePropertyInMultipleBindingExpressionAST (const cPtr_observablePropertyInMultipleBindingExpressionAST * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_observablePropertyInMultipleBindingExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyInMultipleBindingExpressionAST GALGAS_observablePropertyInMultipleBindingExpressionAST::constructor_new (const GALGAS_observablePropertyAST & inAttribute_mProperty
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyInMultipleBindingExpressionAST result ;
  if (inAttribute_mProperty.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_observablePropertyInMultipleBindingExpressionAST (inAttribute_mProperty COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyAST GALGAS_observablePropertyInMultipleBindingExpressionAST::reader_mProperty (UNUSED_LOCATION_ARGS) const {
  GALGAS_observablePropertyAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_observablePropertyInMultipleBindingExpressionAST * p = (const cPtr_observablePropertyInMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_observablePropertyInMultipleBindingExpressionAST) ;
    result = p->mAttribute_mProperty ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyAST cPtr_observablePropertyInMultipleBindingExpressionAST::reader_mProperty (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProperty ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                      Pointer class for @observablePropertyInMultipleBindingExpressionAST class                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_observablePropertyInMultipleBindingExpressionAST::cPtr_observablePropertyInMultipleBindingExpressionAST (const GALGAS_observablePropertyAST & in_mProperty
                                                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (THERE),
mAttribute_mProperty (in_mProperty) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_observablePropertyInMultipleBindingExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyInMultipleBindingExpressionAST ;
}

void cPtr_observablePropertyInMultipleBindingExpressionAST::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "[@observablePropertyInMultipleBindingExpressionAST:" ;
  mAttribute_mProperty.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_observablePropertyInMultipleBindingExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_observablePropertyInMultipleBindingExpressionAST (mAttribute_mProperty COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @observablePropertyInMultipleBindingExpressionAST type                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_observablePropertyInMultipleBindingExpressionAST ("observablePropertyInMultipleBindingExpressionAST",
                                                                         & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_observablePropertyInMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyInMultipleBindingExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_observablePropertyInMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_observablePropertyInMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyInMultipleBindingExpressionAST GALGAS_observablePropertyInMultipleBindingExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyInMultipleBindingExpressionAST result ;
  const GALGAS_observablePropertyInMultipleBindingExpressionAST * p = (const GALGAS_observablePropertyInMultipleBindingExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_observablePropertyInMultipleBindingExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyInMultipleBindingExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_orBooleanMultipleBindingExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_orBooleanMultipleBindingExpressionAST * p = (const cPtr_orBooleanMultipleBindingExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLeftBinding.objectCompare (p->mAttribute_mLeftBinding) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightBinding.objectCompare (p->mAttribute_mRightBinding) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_orBooleanMultipleBindingExpressionAST::objectCompare (const GALGAS_orBooleanMultipleBindingExpressionAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_orBooleanMultipleBindingExpressionAST::GALGAS_orBooleanMultipleBindingExpressionAST (void) :
GALGAS_abstractBooleanMultipleBindingExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_orBooleanMultipleBindingExpressionAST::GALGAS_orBooleanMultipleBindingExpressionAST (const cPtr_orBooleanMultipleBindingExpressionAST * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_orBooleanMultipleBindingExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_orBooleanMultipleBindingExpressionAST GALGAS_orBooleanMultipleBindingExpressionAST::constructor_new (const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAttribute_mLeftBinding,
                                                                                                            const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAttribute_mRightBinding
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_orBooleanMultipleBindingExpressionAST result ;
  if (inAttribute_mLeftBinding.isValid () && inAttribute_mRightBinding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_orBooleanMultipleBindingExpressionAST (inAttribute_mLeftBinding, inAttribute_mRightBinding COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_orBooleanMultipleBindingExpressionAST::reader_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_orBooleanMultipleBindingExpressionAST * p = (const cPtr_orBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionAST) ;
    result = p->mAttribute_mLeftBinding ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractBooleanMultipleBindingExpressionAST cPtr_orBooleanMultipleBindingExpressionAST::reader_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftBinding ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_orBooleanMultipleBindingExpressionAST::reader_mRightBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_orBooleanMultipleBindingExpressionAST * p = (const cPtr_orBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionAST) ;
    result = p->mAttribute_mRightBinding ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractBooleanMultipleBindingExpressionAST cPtr_orBooleanMultipleBindingExpressionAST::reader_mRightBinding (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightBinding ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                           Pointer class for @orBooleanMultipleBindingExpressionAST class                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_orBooleanMultipleBindingExpressionAST::cPtr_orBooleanMultipleBindingExpressionAST (const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                                                        const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (THERE),
mAttribute_mLeftBinding (in_mLeftBinding),
mAttribute_mRightBinding (in_mRightBinding) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_orBooleanMultipleBindingExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionAST ;
}

void cPtr_orBooleanMultipleBindingExpressionAST::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "[@orBooleanMultipleBindingExpressionAST:" ;
  mAttribute_mLeftBinding.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightBinding.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_orBooleanMultipleBindingExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_orBooleanMultipleBindingExpressionAST (mAttribute_mLeftBinding, mAttribute_mRightBinding COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @orBooleanMultipleBindingExpressionAST type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionAST ("orBooleanMultipleBindingExpressionAST",
                                                              & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_orBooleanMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_orBooleanMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_orBooleanMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_orBooleanMultipleBindingExpressionAST GALGAS_orBooleanMultipleBindingExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_orBooleanMultipleBindingExpressionAST result ;
  const GALGAS_orBooleanMultipleBindingExpressionAST * p = (const GALGAS_orBooleanMultipleBindingExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_orBooleanMultipleBindingExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("orBooleanMultipleBindingExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_abstractBooleanMultipleBindingExpressionForGeneration::objectCompare (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration::GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration::GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractBooleanMultipleBindingExpressionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                   Pointer class for @abstractBooleanMultipleBindingExpressionForGeneration class                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_abstractBooleanMultipleBindingExpressionForGeneration::cPtr_abstractBooleanMultipleBindingExpressionForGeneration (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             @abstractBooleanMultipleBindingExpressionForGeneration type                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration ("abstractBooleanMultipleBindingExpressionForGeneration",
                                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_abstractBooleanMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_abstractBooleanMultipleBindingExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_abstractBooleanMultipleBindingExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                                          C_Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration result ;
  const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration * p = (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractBooleanMultipleBindingExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_andBooleanMultipleBindingExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_andBooleanMultipleBindingExpressionForGeneration * p = (const cPtr_andBooleanMultipleBindingExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLeftBinding.objectCompare (p->mAttribute_mLeftBinding) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightBinding.objectCompare (p->mAttribute_mRightBinding) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_andBooleanMultipleBindingExpressionForGeneration::objectCompare (const GALGAS_andBooleanMultipleBindingExpressionForGeneration & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_andBooleanMultipleBindingExpressionForGeneration::GALGAS_andBooleanMultipleBindingExpressionForGeneration (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_andBooleanMultipleBindingExpressionForGeneration::GALGAS_andBooleanMultipleBindingExpressionForGeneration (const cPtr_andBooleanMultipleBindingExpressionForGeneration * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_andBooleanMultipleBindingExpressionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_andBooleanMultipleBindingExpressionForGeneration GALGAS_andBooleanMultipleBindingExpressionForGeneration::constructor_new (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inAttribute_mLeftBinding,
                                                                                                                                  const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inAttribute_mRightBinding
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_andBooleanMultipleBindingExpressionForGeneration result ;
  if (inAttribute_mLeftBinding.isValid () && inAttribute_mRightBinding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_andBooleanMultipleBindingExpressionForGeneration (inAttribute_mLeftBinding, inAttribute_mRightBinding COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_andBooleanMultipleBindingExpressionForGeneration::reader_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_andBooleanMultipleBindingExpressionForGeneration * p = (const cPtr_andBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionForGeneration) ;
    result = p->mAttribute_mLeftBinding ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration cPtr_andBooleanMultipleBindingExpressionForGeneration::reader_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftBinding ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_andBooleanMultipleBindingExpressionForGeneration::reader_mRightBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_andBooleanMultipleBindingExpressionForGeneration * p = (const cPtr_andBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionForGeneration) ;
    result = p->mAttribute_mRightBinding ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration cPtr_andBooleanMultipleBindingExpressionForGeneration::reader_mRightBinding (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightBinding ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                      Pointer class for @andBooleanMultipleBindingExpressionForGeneration class                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_andBooleanMultipleBindingExpressionForGeneration::cPtr_andBooleanMultipleBindingExpressionForGeneration (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                                                                              const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding
                                                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (THERE),
mAttribute_mLeftBinding (in_mLeftBinding),
mAttribute_mRightBinding (in_mRightBinding) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_andBooleanMultipleBindingExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration ;
}

void cPtr_andBooleanMultipleBindingExpressionForGeneration::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "[@andBooleanMultipleBindingExpressionForGeneration:" ;
  mAttribute_mLeftBinding.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightBinding.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_andBooleanMultipleBindingExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_andBooleanMultipleBindingExpressionForGeneration (mAttribute_mLeftBinding, mAttribute_mRightBinding COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @andBooleanMultipleBindingExpressionForGeneration type                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration ("andBooleanMultipleBindingExpressionForGeneration",
                                                                         & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_andBooleanMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_andBooleanMultipleBindingExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_andBooleanMultipleBindingExpressionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_andBooleanMultipleBindingExpressionForGeneration GALGAS_andBooleanMultipleBindingExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_andBooleanMultipleBindingExpressionForGeneration result ;
  const GALGAS_andBooleanMultipleBindingExpressionForGeneration * p = (const GALGAS_andBooleanMultipleBindingExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_andBooleanMultipleBindingExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("andBooleanMultipleBindingExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_comparisonMultipleBindingExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_comparisonMultipleBindingExpressionForGeneration * p = (const cPtr_comparisonMultipleBindingExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLeftBinding.objectCompare (p->mAttribute_mLeftBinding) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOperator.objectCompare (p->mAttribute_mOperator) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightBinding.objectCompare (p->mAttribute_mRightBinding) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_comparisonMultipleBindingExpressionForGeneration::objectCompare (const GALGAS_comparisonMultipleBindingExpressionForGeneration & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_comparisonMultipleBindingExpressionForGeneration::GALGAS_comparisonMultipleBindingExpressionForGeneration (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_comparisonMultipleBindingExpressionForGeneration::GALGAS_comparisonMultipleBindingExpressionForGeneration (const cPtr_comparisonMultipleBindingExpressionForGeneration * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_comparisonMultipleBindingExpressionForGeneration GALGAS_comparisonMultipleBindingExpressionForGeneration::constructor_new (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inAttribute_mLeftBinding,
                                                                                                                                  const GALGAS_multipleBindingComparisonAST & inAttribute_mOperator,
                                                                                                                                  const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inAttribute_mRightBinding
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_comparisonMultipleBindingExpressionForGeneration result ;
  if (inAttribute_mLeftBinding.isValid () && inAttribute_mOperator.isValid () && inAttribute_mRightBinding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_comparisonMultipleBindingExpressionForGeneration (inAttribute_mLeftBinding, inAttribute_mOperator, inAttribute_mRightBinding COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_comparisonMultipleBindingExpressionForGeneration::reader_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_comparisonMultipleBindingExpressionForGeneration * p = (const cPtr_comparisonMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
    result = p->mAttribute_mLeftBinding ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration cPtr_comparisonMultipleBindingExpressionForGeneration::reader_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftBinding ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleBindingComparisonAST GALGAS_comparisonMultipleBindingExpressionForGeneration::reader_mOperator (UNUSED_LOCATION_ARGS) const {
  GALGAS_multipleBindingComparisonAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_comparisonMultipleBindingExpressionForGeneration * p = (const cPtr_comparisonMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
    result = p->mAttribute_mOperator ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleBindingComparisonAST cPtr_comparisonMultipleBindingExpressionForGeneration::reader_mOperator (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperator ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_comparisonMultipleBindingExpressionForGeneration::reader_mRightBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_comparisonMultipleBindingExpressionForGeneration * p = (const cPtr_comparisonMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
    result = p->mAttribute_mRightBinding ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration cPtr_comparisonMultipleBindingExpressionForGeneration::reader_mRightBinding (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightBinding ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                      Pointer class for @comparisonMultipleBindingExpressionForGeneration class                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_comparisonMultipleBindingExpressionForGeneration::cPtr_comparisonMultipleBindingExpressionForGeneration (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                                                                              const GALGAS_multipleBindingComparisonAST & in_mOperator,
                                                                                                              const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding
                                                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (THERE),
mAttribute_mLeftBinding (in_mLeftBinding),
mAttribute_mOperator (in_mOperator),
mAttribute_mRightBinding (in_mRightBinding) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_comparisonMultipleBindingExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionForGeneration ;
}

void cPtr_comparisonMultipleBindingExpressionForGeneration::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "[@comparisonMultipleBindingExpressionForGeneration:" ;
  mAttribute_mLeftBinding.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOperator.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightBinding.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_comparisonMultipleBindingExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_comparisonMultipleBindingExpressionForGeneration (mAttribute_mLeftBinding, mAttribute_mOperator, mAttribute_mRightBinding COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @comparisonMultipleBindingExpressionForGeneration type                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionForGeneration ("comparisonMultipleBindingExpressionForGeneration",
                                                                         & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_comparisonMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_comparisonMultipleBindingExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_comparisonMultipleBindingExpressionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_comparisonMultipleBindingExpressionForGeneration GALGAS_comparisonMultipleBindingExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_comparisonMultipleBindingExpressionForGeneration result ;
  const GALGAS_comparisonMultipleBindingExpressionForGeneration * p = (const GALGAS_comparisonMultipleBindingExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_comparisonMultipleBindingExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("comparisonMultipleBindingExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_negateBooleanMultipleBindingExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_negateBooleanMultipleBindingExpressionForGeneration * p = (const cPtr_negateBooleanMultipleBindingExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_negateBooleanMultipleBindingExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mBinding.objectCompare (p->mAttribute_mBinding) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_negateBooleanMultipleBindingExpressionForGeneration::objectCompare (const GALGAS_negateBooleanMultipleBindingExpressionForGeneration & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_negateBooleanMultipleBindingExpressionForGeneration::GALGAS_negateBooleanMultipleBindingExpressionForGeneration (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_negateBooleanMultipleBindingExpressionForGeneration::GALGAS_negateBooleanMultipleBindingExpressionForGeneration (const cPtr_negateBooleanMultipleBindingExpressionForGeneration * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_negateBooleanMultipleBindingExpressionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_negateBooleanMultipleBindingExpressionForGeneration GALGAS_negateBooleanMultipleBindingExpressionForGeneration::constructor_new (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inAttribute_mBinding
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_negateBooleanMultipleBindingExpressionForGeneration result ;
  if (inAttribute_mBinding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_negateBooleanMultipleBindingExpressionForGeneration (inAttribute_mBinding COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_negateBooleanMultipleBindingExpressionForGeneration::reader_mBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_negateBooleanMultipleBindingExpressionForGeneration * p = (const cPtr_negateBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_negateBooleanMultipleBindingExpressionForGeneration) ;
    result = p->mAttribute_mBinding ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration cPtr_negateBooleanMultipleBindingExpressionForGeneration::reader_mBinding (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBinding ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                    Pointer class for @negateBooleanMultipleBindingExpressionForGeneration class                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_negateBooleanMultipleBindingExpressionForGeneration::cPtr_negateBooleanMultipleBindingExpressionForGeneration (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBinding
                                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (THERE),
mAttribute_mBinding (in_mBinding) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_negateBooleanMultipleBindingExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration ;
}

void cPtr_negateBooleanMultipleBindingExpressionForGeneration::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "[@negateBooleanMultipleBindingExpressionForGeneration:" ;
  mAttribute_mBinding.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_negateBooleanMultipleBindingExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_negateBooleanMultipleBindingExpressionForGeneration (mAttribute_mBinding COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              @negateBooleanMultipleBindingExpressionForGeneration type                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration ("negateBooleanMultipleBindingExpressionForGeneration",
                                                                            & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_negateBooleanMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_negateBooleanMultipleBindingExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_negateBooleanMultipleBindingExpressionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_negateBooleanMultipleBindingExpressionForGeneration GALGAS_negateBooleanMultipleBindingExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_negateBooleanMultipleBindingExpressionForGeneration result ;
  const GALGAS_negateBooleanMultipleBindingExpressionForGeneration * p = (const GALGAS_negateBooleanMultipleBindingExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_negateBooleanMultipleBindingExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("negateBooleanMultipleBindingExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_negateBooleanMultipleBindingLiteralIntForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_negateBooleanMultipleBindingLiteralIntForGeneration * p = (const cPtr_negateBooleanMultipleBindingLiteralIntForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_negateBooleanMultipleBindingLiteralIntForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mValue.objectCompare (p->mAttribute_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_negateBooleanMultipleBindingLiteralIntForGeneration::objectCompare (const GALGAS_negateBooleanMultipleBindingLiteralIntForGeneration & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_negateBooleanMultipleBindingLiteralIntForGeneration::GALGAS_negateBooleanMultipleBindingLiteralIntForGeneration (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_negateBooleanMultipleBindingLiteralIntForGeneration GALGAS_negateBooleanMultipleBindingLiteralIntForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_negateBooleanMultipleBindingLiteralIntForGeneration::constructor_new (GALGAS_uint::constructor_default (HERE)
                                                                                      COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_negateBooleanMultipleBindingLiteralIntForGeneration::GALGAS_negateBooleanMultipleBindingLiteralIntForGeneration (const cPtr_negateBooleanMultipleBindingLiteralIntForGeneration * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_negateBooleanMultipleBindingLiteralIntForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_negateBooleanMultipleBindingLiteralIntForGeneration GALGAS_negateBooleanMultipleBindingLiteralIntForGeneration::constructor_new (const GALGAS_uint & inAttribute_mValue
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_negateBooleanMultipleBindingLiteralIntForGeneration result ;
  if (inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_negateBooleanMultipleBindingLiteralIntForGeneration (inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_negateBooleanMultipleBindingLiteralIntForGeneration::reader_mValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_negateBooleanMultipleBindingLiteralIntForGeneration * p = (const cPtr_negateBooleanMultipleBindingLiteralIntForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_negateBooleanMultipleBindingLiteralIntForGeneration) ;
    result = p->mAttribute_mValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_negateBooleanMultipleBindingLiteralIntForGeneration::reader_mValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                    Pointer class for @negateBooleanMultipleBindingLiteralIntForGeneration class                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_negateBooleanMultipleBindingLiteralIntForGeneration::cPtr_negateBooleanMultipleBindingLiteralIntForGeneration (const GALGAS_uint & in_mValue
                                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (THERE),
mAttribute_mValue (in_mValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_negateBooleanMultipleBindingLiteralIntForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_negateBooleanMultipleBindingLiteralIntForGeneration ;
}

void cPtr_negateBooleanMultipleBindingLiteralIntForGeneration::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "[@negateBooleanMultipleBindingLiteralIntForGeneration:" ;
  mAttribute_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_negateBooleanMultipleBindingLiteralIntForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_negateBooleanMultipleBindingLiteralIntForGeneration (mAttribute_mValue COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              @negateBooleanMultipleBindingLiteralIntForGeneration type                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_negateBooleanMultipleBindingLiteralIntForGeneration ("negateBooleanMultipleBindingLiteralIntForGeneration",
                                                                            & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_negateBooleanMultipleBindingLiteralIntForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_negateBooleanMultipleBindingLiteralIntForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_negateBooleanMultipleBindingLiteralIntForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_negateBooleanMultipleBindingLiteralIntForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_negateBooleanMultipleBindingLiteralIntForGeneration GALGAS_negateBooleanMultipleBindingLiteralIntForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_negateBooleanMultipleBindingLiteralIntForGeneration result ;
  const GALGAS_negateBooleanMultipleBindingLiteralIntForGeneration * p = (const GALGAS_negateBooleanMultipleBindingLiteralIntForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_negateBooleanMultipleBindingLiteralIntForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("negateBooleanMultipleBindingLiteralIntForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * p = (const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mObservedModel.objectCompare (p->mAttribute_mObservedModel) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::objectCompare (const GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::constructor_new (GALGAS_string::constructor_default (HERE)
                                                                                                    COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::constructor_new (const GALGAS_string & inAttribute_mObservedModel
                                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration result ;
  if (inAttribute_mObservedModel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (inAttribute_mObservedModel COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::reader_mObservedModel (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * p = (const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration) ;
    result = p->mAttribute_mObservedModel ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::reader_mObservedModel (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mObservedModel ;
}

//---------------------------------------------------------------------------------------------------------------------*
//             Pointer class for @observablePropertyAsBooleanMultipleBindingExpressionForGeneration class              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (const GALGAS_string & in_mObservedModel
                                                                                                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (THERE),
mAttribute_mObservedModel (in_mObservedModel) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration ;
}

void cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::description (C_String & ioString,
                                                                                          const int32_t inIndentation) const {
  ioString << "[@observablePropertyAsBooleanMultipleBindingExpressionForGeneration:" ;
  mAttribute_mObservedModel.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (mAttribute_mObservedModel COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       @observablePropertyAsBooleanMultipleBindingExpressionForGeneration type                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration ("observablePropertyAsBooleanMultipleBindingExpressionForGeneration",
                                                                                          & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration result ;
  const GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * p = (const GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAsBooleanMultipleBindingExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_orBooleanMultipleBindingExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_orBooleanMultipleBindingExpressionForGeneration * p = (const cPtr_orBooleanMultipleBindingExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLeftBinding.objectCompare (p->mAttribute_mLeftBinding) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightBinding.objectCompare (p->mAttribute_mRightBinding) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_orBooleanMultipleBindingExpressionForGeneration::objectCompare (const GALGAS_orBooleanMultipleBindingExpressionForGeneration & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_orBooleanMultipleBindingExpressionForGeneration::GALGAS_orBooleanMultipleBindingExpressionForGeneration (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_orBooleanMultipleBindingExpressionForGeneration::GALGAS_orBooleanMultipleBindingExpressionForGeneration (const cPtr_orBooleanMultipleBindingExpressionForGeneration * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_orBooleanMultipleBindingExpressionForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_orBooleanMultipleBindingExpressionForGeneration GALGAS_orBooleanMultipleBindingExpressionForGeneration::constructor_new (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inAttribute_mLeftBinding,
                                                                                                                                const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inAttribute_mRightBinding
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_orBooleanMultipleBindingExpressionForGeneration result ;
  if (inAttribute_mLeftBinding.isValid () && inAttribute_mRightBinding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_orBooleanMultipleBindingExpressionForGeneration (inAttribute_mLeftBinding, inAttribute_mRightBinding COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_orBooleanMultipleBindingExpressionForGeneration::reader_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_orBooleanMultipleBindingExpressionForGeneration * p = (const cPtr_orBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionForGeneration) ;
    result = p->mAttribute_mLeftBinding ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration cPtr_orBooleanMultipleBindingExpressionForGeneration::reader_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftBinding ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_orBooleanMultipleBindingExpressionForGeneration::reader_mRightBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_orBooleanMultipleBindingExpressionForGeneration * p = (const cPtr_orBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionForGeneration) ;
    result = p->mAttribute_mRightBinding ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration cPtr_orBooleanMultipleBindingExpressionForGeneration::reader_mRightBinding (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightBinding ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                      Pointer class for @orBooleanMultipleBindingExpressionForGeneration class                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_orBooleanMultipleBindingExpressionForGeneration::cPtr_orBooleanMultipleBindingExpressionForGeneration (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                                                                            const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding
                                                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (THERE),
mAttribute_mLeftBinding (in_mLeftBinding),
mAttribute_mRightBinding (in_mRightBinding) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_orBooleanMultipleBindingExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionForGeneration ;
}

void cPtr_orBooleanMultipleBindingExpressionForGeneration::description (C_String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString << "[@orBooleanMultipleBindingExpressionForGeneration:" ;
  mAttribute_mLeftBinding.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightBinding.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_orBooleanMultipleBindingExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_orBooleanMultipleBindingExpressionForGeneration (mAttribute_mLeftBinding, mAttribute_mRightBinding COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @orBooleanMultipleBindingExpressionForGeneration type                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionForGeneration ("orBooleanMultipleBindingExpressionForGeneration",
                                                                        & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_orBooleanMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_orBooleanMultipleBindingExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_orBooleanMultipleBindingExpressionForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_orBooleanMultipleBindingExpressionForGeneration GALGAS_orBooleanMultipleBindingExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_orBooleanMultipleBindingExpressionForGeneration result ;
  const GALGAS_orBooleanMultipleBindingExpressionForGeneration * p = (const GALGAS_orBooleanMultipleBindingExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_orBooleanMultipleBindingExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("orBooleanMultipleBindingExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_abstractDefaultValue::objectCompare (const GALGAS_abstractDefaultValue & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractDefaultValue::GALGAS_abstractDefaultValue (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractDefaultValue::GALGAS_abstractDefaultValue (const cPtr_abstractDefaultValue * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractDefaultValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @abstractDefaultValue class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_abstractDefaultValue::cPtr_abstractDefaultValue (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @abstractDefaultValue type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractDefaultValue ("abstractDefaultValue",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_abstractDefaultValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractDefaultValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_abstractDefaultValue::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractDefaultValue (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractDefaultValue GALGAS_abstractDefaultValue::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_abstractDefaultValue result ;
  const GALGAS_abstractDefaultValue * p = (const GALGAS_abstractDefaultValue *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractDefaultValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractDefaultValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_boolAsDefaultValue::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_boolAsDefaultValue * p = (const cPtr_boolAsDefaultValue *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_boolAsDefaultValue) ;
  if (kOperandEqual == result) {
    result = mAttribute_mValue.objectCompare (p->mAttribute_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_boolAsDefaultValue::GALGAS_boolAsDefaultValue (void) :
GALGAS_abstractDefaultValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_boolAsDefaultValue GALGAS_boolAsDefaultValue::constructor_default (LOCATION_ARGS) {
  return GALGAS_boolAsDefaultValue::constructor_new (GALGAS_lbool::constructor_default (HERE)
                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_boolAsDefaultValue::GALGAS_boolAsDefaultValue (const cPtr_boolAsDefaultValue * inSourcePtr) :
GALGAS_abstractDefaultValue (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_boolAsDefaultValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_boolAsDefaultValue GALGAS_boolAsDefaultValue::constructor_new (const GALGAS_lbool & inAttribute_mValue
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_boolAsDefaultValue result ;
  if (inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_boolAsDefaultValue (inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbool GALGAS_boolAsDefaultValue::reader_mValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_lbool result ;
  if (NULL != mObjectPtr) {
    const cPtr_boolAsDefaultValue * p = (const cPtr_boolAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolAsDefaultValue) ;
    result = p->mAttribute_mValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbool cPtr_boolAsDefaultValue::reader_mValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @boolAsDefaultValue class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_boolAsDefaultValue::cPtr_boolAsDefaultValue (const GALGAS_lbool & in_mValue
                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (THERE),
mAttribute_mValue (in_mValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_boolAsDefaultValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolAsDefaultValue ;
}

void cPtr_boolAsDefaultValue::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@boolAsDefaultValue:" ;
  mAttribute_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_boolAsDefaultValue::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_boolAsDefaultValue (mAttribute_mValue COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @boolAsDefaultValue type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_boolAsDefaultValue ("boolAsDefaultValue",
                                           & kTypeDescriptor_GALGAS_abstractDefaultValue) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_boolAsDefaultValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolAsDefaultValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_boolAsDefaultValue::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolAsDefaultValue (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_doubleAsDefaultValue::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_doubleAsDefaultValue * p = (const cPtr_doubleAsDefaultValue *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_doubleAsDefaultValue) ;
  if (kOperandEqual == result) {
    result = mAttribute_mValue.objectCompare (p->mAttribute_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_doubleAsDefaultValue::objectCompare (const GALGAS_doubleAsDefaultValue & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_doubleAsDefaultValue::GALGAS_doubleAsDefaultValue (void) :
GALGAS_abstractDefaultValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_doubleAsDefaultValue GALGAS_doubleAsDefaultValue::constructor_default (LOCATION_ARGS) {
  return GALGAS_doubleAsDefaultValue::constructor_new (GALGAS_ldouble::constructor_default (HERE)
                                                       COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_doubleAsDefaultValue::GALGAS_doubleAsDefaultValue (const cPtr_doubleAsDefaultValue * inSourcePtr) :
GALGAS_abstractDefaultValue (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_doubleAsDefaultValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_doubleAsDefaultValue GALGAS_doubleAsDefaultValue::constructor_new (const GALGAS_ldouble & inAttribute_mValue
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_doubleAsDefaultValue result ;
  if (inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_doubleAsDefaultValue (inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ldouble GALGAS_doubleAsDefaultValue::reader_mValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_ldouble result ;
  if (NULL != mObjectPtr) {
    const cPtr_doubleAsDefaultValue * p = (const cPtr_doubleAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_doubleAsDefaultValue) ;
    result = p->mAttribute_mValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ldouble cPtr_doubleAsDefaultValue::reader_mValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @doubleAsDefaultValue class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_doubleAsDefaultValue::cPtr_doubleAsDefaultValue (const GALGAS_ldouble & in_mValue
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (THERE),
mAttribute_mValue (in_mValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_doubleAsDefaultValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_doubleAsDefaultValue ;
}

void cPtr_doubleAsDefaultValue::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@doubleAsDefaultValue:" ;
  mAttribute_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_doubleAsDefaultValue::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_doubleAsDefaultValue (mAttribute_mValue COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @doubleAsDefaultValue type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_doubleAsDefaultValue ("doubleAsDefaultValue",
                                             & kTypeDescriptor_GALGAS_abstractDefaultValue) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_doubleAsDefaultValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_doubleAsDefaultValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_doubleAsDefaultValue::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_doubleAsDefaultValue (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_identifierAsDefaultValue::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_identifierAsDefaultValue * p = (const cPtr_identifierAsDefaultValue *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_identifierAsDefaultValue) ;
  if (kOperandEqual == result) {
    result = mAttribute_mValue.objectCompare (p->mAttribute_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_identifierAsDefaultValue::GALGAS_identifierAsDefaultValue (void) :
GALGAS_abstractDefaultValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_identifierAsDefaultValue GALGAS_identifierAsDefaultValue::constructor_default (LOCATION_ARGS) {
  return GALGAS_identifierAsDefaultValue::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                           COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_identifierAsDefaultValue::GALGAS_identifierAsDefaultValue (const cPtr_identifierAsDefaultValue * inSourcePtr) :
GALGAS_abstractDefaultValue (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_identifierAsDefaultValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_identifierAsDefaultValue GALGAS_identifierAsDefaultValue::constructor_new (const GALGAS_lstring & inAttribute_mValue
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_identifierAsDefaultValue result ;
  if (inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_identifierAsDefaultValue (inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_identifierAsDefaultValue::reader_mValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_identifierAsDefaultValue * p = (const cPtr_identifierAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_identifierAsDefaultValue) ;
    result = p->mAttribute_mValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_identifierAsDefaultValue::reader_mValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @identifierAsDefaultValue class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_identifierAsDefaultValue::cPtr_identifierAsDefaultValue (const GALGAS_lstring & in_mValue
                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (THERE),
mAttribute_mValue (in_mValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_identifierAsDefaultValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_identifierAsDefaultValue ;
}

void cPtr_identifierAsDefaultValue::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@identifierAsDefaultValue:" ;
  mAttribute_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_identifierAsDefaultValue::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_identifierAsDefaultValue (mAttribute_mValue COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @identifierAsDefaultValue type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_identifierAsDefaultValue ("identifierAsDefaultValue",
                                                 & kTypeDescriptor_GALGAS_abstractDefaultValue) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_identifierAsDefaultValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_identifierAsDefaultValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_identifierAsDefaultValue::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_identifierAsDefaultValue (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_integerAsDefaultValue::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_integerAsDefaultValue * p = (const cPtr_integerAsDefaultValue *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_integerAsDefaultValue) ;
  if (kOperandEqual == result) {
    result = mAttribute_mValue.objectCompare (p->mAttribute_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_integerAsDefaultValue::GALGAS_integerAsDefaultValue (void) :
GALGAS_abstractDefaultValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_integerAsDefaultValue GALGAS_integerAsDefaultValue::constructor_default (LOCATION_ARGS) {
  return GALGAS_integerAsDefaultValue::constructor_new (GALGAS_luint::constructor_default (HERE)
                                                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_integerAsDefaultValue::GALGAS_integerAsDefaultValue (const cPtr_integerAsDefaultValue * inSourcePtr) :
GALGAS_abstractDefaultValue (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_integerAsDefaultValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_integerAsDefaultValue GALGAS_integerAsDefaultValue::constructor_new (const GALGAS_luint & inAttribute_mValue
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_integerAsDefaultValue result ;
  if (inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_integerAsDefaultValue (inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_integerAsDefaultValue::reader_mValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_luint result ;
  if (NULL != mObjectPtr) {
    const cPtr_integerAsDefaultValue * p = (const cPtr_integerAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerAsDefaultValue) ;
    result = p->mAttribute_mValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint cPtr_integerAsDefaultValue::reader_mValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @integerAsDefaultValue class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_integerAsDefaultValue::cPtr_integerAsDefaultValue (const GALGAS_luint & in_mValue
                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (THERE),
mAttribute_mValue (in_mValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_integerAsDefaultValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerAsDefaultValue ;
}

void cPtr_integerAsDefaultValue::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@integerAsDefaultValue:" ;
  mAttribute_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_integerAsDefaultValue::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_integerAsDefaultValue (mAttribute_mValue COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @integerAsDefaultValue type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_integerAsDefaultValue ("integerAsDefaultValue",
                                              & kTypeDescriptor_GALGAS_abstractDefaultValue) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_integerAsDefaultValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerAsDefaultValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_integerAsDefaultValue::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_integerAsDefaultValue (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_listAsDefaultValue::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_listAsDefaultValue * p = (const cPtr_listAsDefaultValue *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_listAsDefaultValue) ;
  if (kOperandEqual == result) {
    result = mAttribute_mStartLocation.objectCompare (p->mAttribute_mStartLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mDefaultValueList.objectCompare (p->mAttribute_mDefaultValueList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_listAsDefaultValue::objectCompare (const GALGAS_listAsDefaultValue & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listAsDefaultValue::GALGAS_listAsDefaultValue (void) :
GALGAS_abstractDefaultValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listAsDefaultValue GALGAS_listAsDefaultValue::constructor_default (LOCATION_ARGS) {
  return GALGAS_listAsDefaultValue::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                     GALGAS_defaultValueList::constructor_emptyList (HERE)
                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listAsDefaultValue::GALGAS_listAsDefaultValue (const cPtr_listAsDefaultValue * inSourcePtr) :
GALGAS_abstractDefaultValue (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_listAsDefaultValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listAsDefaultValue GALGAS_listAsDefaultValue::constructor_new (const GALGAS_location & inAttribute_mStartLocation,
                                                                      const GALGAS_defaultValueList & inAttribute_mDefaultValueList
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_listAsDefaultValue result ;
  if (inAttribute_mStartLocation.isValid () && inAttribute_mDefaultValueList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_listAsDefaultValue (inAttribute_mStartLocation, inAttribute_mDefaultValueList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_listAsDefaultValue::reader_mStartLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_listAsDefaultValue * p = (const cPtr_listAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listAsDefaultValue) ;
    result = p->mAttribute_mStartLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_listAsDefaultValue::reader_mStartLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStartLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_defaultValueList GALGAS_listAsDefaultValue::reader_mDefaultValueList (UNUSED_LOCATION_ARGS) const {
  GALGAS_defaultValueList result ;
  if (NULL != mObjectPtr) {
    const cPtr_listAsDefaultValue * p = (const cPtr_listAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listAsDefaultValue) ;
    result = p->mAttribute_mDefaultValueList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_defaultValueList cPtr_listAsDefaultValue::reader_mDefaultValueList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDefaultValueList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @listAsDefaultValue class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_listAsDefaultValue::cPtr_listAsDefaultValue (const GALGAS_location & in_mStartLocation,
                                                  const GALGAS_defaultValueList & in_mDefaultValueList
                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (THERE),
mAttribute_mStartLocation (in_mStartLocation),
mAttribute_mDefaultValueList (in_mDefaultValueList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_listAsDefaultValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listAsDefaultValue ;
}

void cPtr_listAsDefaultValue::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@listAsDefaultValue:" ;
  mAttribute_mStartLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mDefaultValueList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_listAsDefaultValue::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_listAsDefaultValue (mAttribute_mStartLocation, mAttribute_mDefaultValueList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @listAsDefaultValue type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_listAsDefaultValue ("listAsDefaultValue",
                                           & kTypeDescriptor_GALGAS_abstractDefaultValue) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_listAsDefaultValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listAsDefaultValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_listAsDefaultValue::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_listAsDefaultValue (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listAsDefaultValue GALGAS_listAsDefaultValue::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_listAsDefaultValue result ;
  const GALGAS_listAsDefaultValue * p = (const GALGAS_listAsDefaultValue *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_listAsDefaultValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listAsDefaultValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_stringAsDefaultValue::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_stringAsDefaultValue * p = (const cPtr_stringAsDefaultValue *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_stringAsDefaultValue) ;
  if (kOperandEqual == result) {
    result = mAttribute_mValue.objectCompare (p->mAttribute_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringAsDefaultValue::GALGAS_stringAsDefaultValue (void) :
GALGAS_abstractDefaultValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringAsDefaultValue GALGAS_stringAsDefaultValue::constructor_default (LOCATION_ARGS) {
  return GALGAS_stringAsDefaultValue::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                       COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringAsDefaultValue::GALGAS_stringAsDefaultValue (const cPtr_stringAsDefaultValue * inSourcePtr) :
GALGAS_abstractDefaultValue (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_stringAsDefaultValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringAsDefaultValue GALGAS_stringAsDefaultValue::constructor_new (const GALGAS_lstring & inAttribute_mValue
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_stringAsDefaultValue result ;
  if (inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_stringAsDefaultValue (inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_stringAsDefaultValue::reader_mValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_stringAsDefaultValue * p = (const cPtr_stringAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_stringAsDefaultValue) ;
    result = p->mAttribute_mValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_stringAsDefaultValue::reader_mValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @stringAsDefaultValue class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_stringAsDefaultValue::cPtr_stringAsDefaultValue (const GALGAS_lstring & in_mValue
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (THERE),
mAttribute_mValue (in_mValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_stringAsDefaultValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringAsDefaultValue ;
}

void cPtr_stringAsDefaultValue::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@stringAsDefaultValue:" ;
  mAttribute_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_stringAsDefaultValue::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_stringAsDefaultValue (mAttribute_mValue COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @stringAsDefaultValue type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_stringAsDefaultValue ("stringAsDefaultValue",
                                             & kTypeDescriptor_GALGAS_abstractDefaultValue) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_stringAsDefaultValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringAsDefaultValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_stringAsDefaultValue::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_stringAsDefaultValue (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_astDeclaration::GALGAS_astDeclaration (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_astDeclaration::GALGAS_astDeclaration (const cPtr_astDeclaration * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_astDeclaration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_astDeclaration::reader_mUserDefined (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_astDeclaration * p = (const cPtr_astDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astDeclaration) ;
    result = p->mAttribute_mUserDefined ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_astDeclaration::reader_mUserDefined (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mUserDefined ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                       Pointer class for @astDeclaration class                                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_astDeclaration::cPtr_astDeclaration (const GALGAS_bool & in_mUserDefined
                                          COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mAttribute_mUserDefined (in_mUserDefined) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @astDeclaration type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_astDeclaration ("astDeclaration",
                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_astDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astDeclaration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_astDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astDeclaration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_documentDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_documentDeclaration * p = (const cPtr_documentDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_documentDeclaration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mUserDefined.objectCompare (p->mAttribute_mUserDefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mDocumentName.objectCompare (p->mAttribute_mDocumentName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRootEntityName.objectCompare (p->mAttribute_mRootEntityName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOutletDeclarationList.objectCompare (p->mAttribute_mOutletDeclarationList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSimpleStoredAttributeList.objectCompare (p->mAttribute_mSimpleStoredAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTransientList.objectCompare (p->mAttribute_mTransientList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mActionDeclarationList.objectCompare (p->mAttribute_mActionDeclarationList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mArrayControllerDeclarationList.objectCompare (p->mAttribute_mArrayControllerDeclarationList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_documentDeclaration::objectCompare (const GALGAS_documentDeclaration & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_documentDeclaration::GALGAS_documentDeclaration (void) :
GALGAS_astDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_documentDeclaration GALGAS_documentDeclaration::constructor_default (LOCATION_ARGS) {
  return GALGAS_documentDeclaration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                      GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_outletDeclarationList::constructor_emptyList (HERE),
                                                      GALGAS_simpleStoredPropertyList::constructor_emptyList (HERE),
                                                      GALGAS_transientList::constructor_emptyList (HERE),
                                                      GALGAS_lstringlist::constructor_emptyList (HERE),
                                                      GALGAS_arrayControllerDeclarationListAST::constructor_emptyList (HERE)
                                                      COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_documentDeclaration::GALGAS_documentDeclaration (const cPtr_documentDeclaration * inSourcePtr) :
GALGAS_astDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_documentDeclaration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_documentDeclaration GALGAS_documentDeclaration::constructor_new (const GALGAS_bool & inAttribute_mUserDefined,
                                                                        const GALGAS_lstring & inAttribute_mDocumentName,
                                                                        const GALGAS_lstring & inAttribute_mRootEntityName,
                                                                        const GALGAS_outletDeclarationList & inAttribute_mOutletDeclarationList,
                                                                        const GALGAS_simpleStoredPropertyList & inAttribute_mSimpleStoredAttributeList,
                                                                        const GALGAS_transientList & inAttribute_mTransientList,
                                                                        const GALGAS_lstringlist & inAttribute_mActionDeclarationList,
                                                                        const GALGAS_arrayControllerDeclarationListAST & inAttribute_mArrayControllerDeclarationList
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_documentDeclaration result ;
  if (inAttribute_mUserDefined.isValid () && inAttribute_mDocumentName.isValid () && inAttribute_mRootEntityName.isValid () && inAttribute_mOutletDeclarationList.isValid () && inAttribute_mSimpleStoredAttributeList.isValid () && inAttribute_mTransientList.isValid () && inAttribute_mActionDeclarationList.isValid () && inAttribute_mArrayControllerDeclarationList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_documentDeclaration (inAttribute_mUserDefined, inAttribute_mDocumentName, inAttribute_mRootEntityName, inAttribute_mOutletDeclarationList, inAttribute_mSimpleStoredAttributeList, inAttribute_mTransientList, inAttribute_mActionDeclarationList, inAttribute_mArrayControllerDeclarationList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_documentDeclaration::reader_mDocumentName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_documentDeclaration * p = (const cPtr_documentDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_documentDeclaration) ;
    result = p->mAttribute_mDocumentName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_documentDeclaration::reader_mDocumentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDocumentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_documentDeclaration::reader_mRootEntityName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_documentDeclaration * p = (const cPtr_documentDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_documentDeclaration) ;
    result = p->mAttribute_mRootEntityName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_documentDeclaration::reader_mRootEntityName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRootEntityName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletDeclarationList GALGAS_documentDeclaration::reader_mOutletDeclarationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_outletDeclarationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_documentDeclaration * p = (const cPtr_documentDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_documentDeclaration) ;
    result = p->mAttribute_mOutletDeclarationList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletDeclarationList cPtr_documentDeclaration::reader_mOutletDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutletDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_simpleStoredPropertyList GALGAS_documentDeclaration::reader_mSimpleStoredAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_simpleStoredPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_documentDeclaration * p = (const cPtr_documentDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_documentDeclaration) ;
    result = p->mAttribute_mSimpleStoredAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_simpleStoredPropertyList cPtr_documentDeclaration::reader_mSimpleStoredAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSimpleStoredAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientList GALGAS_documentDeclaration::reader_mTransientList (UNUSED_LOCATION_ARGS) const {
  GALGAS_transientList result ;
  if (NULL != mObjectPtr) {
    const cPtr_documentDeclaration * p = (const cPtr_documentDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_documentDeclaration) ;
    result = p->mAttribute_mTransientList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientList cPtr_documentDeclaration::reader_mTransientList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTransientList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_documentDeclaration::reader_mActionDeclarationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_documentDeclaration * p = (const cPtr_documentDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_documentDeclaration) ;
    result = p->mAttribute_mActionDeclarationList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_documentDeclaration::reader_mActionDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActionDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerDeclarationListAST GALGAS_documentDeclaration::reader_mArrayControllerDeclarationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_arrayControllerDeclarationListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_documentDeclaration * p = (const cPtr_documentDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_documentDeclaration) ;
    result = p->mAttribute_mArrayControllerDeclarationList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerDeclarationListAST cPtr_documentDeclaration::reader_mArrayControllerDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mArrayControllerDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @documentDeclaration class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_documentDeclaration::cPtr_documentDeclaration (const GALGAS_bool & in_mUserDefined,
                                                    const GALGAS_lstring & in_mDocumentName,
                                                    const GALGAS_lstring & in_mRootEntityName,
                                                    const GALGAS_outletDeclarationList & in_mOutletDeclarationList,
                                                    const GALGAS_simpleStoredPropertyList & in_mSimpleStoredAttributeList,
                                                    const GALGAS_transientList & in_mTransientList,
                                                    const GALGAS_lstringlist & in_mActionDeclarationList,
                                                    const GALGAS_arrayControllerDeclarationListAST & in_mArrayControllerDeclarationList
                                                    COMMA_LOCATION_ARGS) :
cPtr_astDeclaration (in_mUserDefined COMMA_THERE),
mAttribute_mDocumentName (in_mDocumentName),
mAttribute_mRootEntityName (in_mRootEntityName),
mAttribute_mOutletDeclarationList (in_mOutletDeclarationList),
mAttribute_mSimpleStoredAttributeList (in_mSimpleStoredAttributeList),
mAttribute_mTransientList (in_mTransientList),
mAttribute_mActionDeclarationList (in_mActionDeclarationList),
mAttribute_mArrayControllerDeclarationList (in_mArrayControllerDeclarationList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_documentDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_documentDeclaration ;
}

void cPtr_documentDeclaration::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@documentDeclaration:" ;
  mAttribute_mUserDefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mDocumentName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRootEntityName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOutletDeclarationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSimpleStoredAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTransientList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mActionDeclarationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mArrayControllerDeclarationList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_documentDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_documentDeclaration (mAttribute_mUserDefined, mAttribute_mDocumentName, mAttribute_mRootEntityName, mAttribute_mOutletDeclarationList, mAttribute_mSimpleStoredAttributeList, mAttribute_mTransientList, mAttribute_mActionDeclarationList, mAttribute_mArrayControllerDeclarationList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @documentDeclaration type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_documentDeclaration ("documentDeclaration",
                                            & kTypeDescriptor_GALGAS_astDeclaration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_documentDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_documentDeclaration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_documentDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_documentDeclaration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_documentDeclaration GALGAS_documentDeclaration::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_documentDeclaration result ;
  const GALGAS_documentDeclaration * p = (const GALGAS_documentDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_documentDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("documentDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_entityDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_entityDeclaration * p = (const cPtr_entityDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_entityDeclaration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mUserDefined.objectCompare (p->mAttribute_mUserDefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEntityName.objectCompare (p->mAttribute_mEntityName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSuperEntityName.objectCompare (p->mAttribute_mSuperEntityName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSimpleStoredAttributeList.objectCompare (p->mAttribute_mSimpleStoredAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTransientList.objectCompare (p->mAttribute_mTransientList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mToOneRelationshipList.objectCompare (p->mAttribute_mToOneRelationshipList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mToManyRelationshipList.objectCompare (p->mAttribute_mToManyRelationshipList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_entityDeclaration::objectCompare (const GALGAS_entityDeclaration & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityDeclaration::GALGAS_entityDeclaration (void) :
GALGAS_astDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityDeclaration GALGAS_entityDeclaration::constructor_default (LOCATION_ARGS) {
  return GALGAS_entityDeclaration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                    GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_simpleStoredPropertyList::constructor_emptyList (HERE),
                                                    GALGAS_transientList::constructor_emptyList (HERE),
                                                    GALGAS_toOneRelationshipList::constructor_emptyList (HERE),
                                                    GALGAS_toManyRelationshipList::constructor_emptyList (HERE)
                                                    COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityDeclaration::GALGAS_entityDeclaration (const cPtr_entityDeclaration * inSourcePtr) :
GALGAS_astDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_entityDeclaration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityDeclaration GALGAS_entityDeclaration::constructor_new (const GALGAS_bool & inAttribute_mUserDefined,
                                                                    const GALGAS_lstring & inAttribute_mEntityName,
                                                                    const GALGAS_lstring & inAttribute_mSuperEntityName,
                                                                    const GALGAS_simpleStoredPropertyList & inAttribute_mSimpleStoredAttributeList,
                                                                    const GALGAS_transientList & inAttribute_mTransientList,
                                                                    const GALGAS_toOneRelationshipList & inAttribute_mToOneRelationshipList,
                                                                    const GALGAS_toManyRelationshipList & inAttribute_mToManyRelationshipList
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_entityDeclaration result ;
  if (inAttribute_mUserDefined.isValid () && inAttribute_mEntityName.isValid () && inAttribute_mSuperEntityName.isValid () && inAttribute_mSimpleStoredAttributeList.isValid () && inAttribute_mTransientList.isValid () && inAttribute_mToOneRelationshipList.isValid () && inAttribute_mToManyRelationshipList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_entityDeclaration (inAttribute_mUserDefined, inAttribute_mEntityName, inAttribute_mSuperEntityName, inAttribute_mSimpleStoredAttributeList, inAttribute_mTransientList, inAttribute_mToOneRelationshipList, inAttribute_mToManyRelationshipList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_entityDeclaration::reader_mEntityName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclaration * p = (const cPtr_entityDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclaration) ;
    result = p->mAttribute_mEntityName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_entityDeclaration::reader_mEntityName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEntityName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_entityDeclaration::reader_mSuperEntityName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclaration * p = (const cPtr_entityDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclaration) ;
    result = p->mAttribute_mSuperEntityName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_entityDeclaration::reader_mSuperEntityName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSuperEntityName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_simpleStoredPropertyList GALGAS_entityDeclaration::reader_mSimpleStoredAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_simpleStoredPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclaration * p = (const cPtr_entityDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclaration) ;
    result = p->mAttribute_mSimpleStoredAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_simpleStoredPropertyList cPtr_entityDeclaration::reader_mSimpleStoredAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSimpleStoredAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientList GALGAS_entityDeclaration::reader_mTransientList (UNUSED_LOCATION_ARGS) const {
  GALGAS_transientList result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclaration * p = (const cPtr_entityDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclaration) ;
    result = p->mAttribute_mTransientList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientList cPtr_entityDeclaration::reader_mTransientList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTransientList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toOneRelationshipList GALGAS_entityDeclaration::reader_mToOneRelationshipList (UNUSED_LOCATION_ARGS) const {
  GALGAS_toOneRelationshipList result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclaration * p = (const cPtr_entityDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclaration) ;
    result = p->mAttribute_mToOneRelationshipList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toOneRelationshipList cPtr_entityDeclaration::reader_mToOneRelationshipList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mToOneRelationshipList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toManyRelationshipList GALGAS_entityDeclaration::reader_mToManyRelationshipList (UNUSED_LOCATION_ARGS) const {
  GALGAS_toManyRelationshipList result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclaration * p = (const cPtr_entityDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclaration) ;
    result = p->mAttribute_mToManyRelationshipList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toManyRelationshipList cPtr_entityDeclaration::reader_mToManyRelationshipList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mToManyRelationshipList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @entityDeclaration class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_entityDeclaration::cPtr_entityDeclaration (const GALGAS_bool & in_mUserDefined,
                                                const GALGAS_lstring & in_mEntityName,
                                                const GALGAS_lstring & in_mSuperEntityName,
                                                const GALGAS_simpleStoredPropertyList & in_mSimpleStoredAttributeList,
                                                const GALGAS_transientList & in_mTransientList,
                                                const GALGAS_toOneRelationshipList & in_mToOneRelationshipList,
                                                const GALGAS_toManyRelationshipList & in_mToManyRelationshipList
                                                COMMA_LOCATION_ARGS) :
cPtr_astDeclaration (in_mUserDefined COMMA_THERE),
mAttribute_mEntityName (in_mEntityName),
mAttribute_mSuperEntityName (in_mSuperEntityName),
mAttribute_mSimpleStoredAttributeList (in_mSimpleStoredAttributeList),
mAttribute_mTransientList (in_mTransientList),
mAttribute_mToOneRelationshipList (in_mToOneRelationshipList),
mAttribute_mToManyRelationshipList (in_mToManyRelationshipList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_entityDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityDeclaration ;
}

void cPtr_entityDeclaration::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@entityDeclaration:" ;
  mAttribute_mUserDefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEntityName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSuperEntityName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSimpleStoredAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTransientList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mToOneRelationshipList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mToManyRelationshipList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_entityDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_entityDeclaration (mAttribute_mUserDefined, mAttribute_mEntityName, mAttribute_mSuperEntityName, mAttribute_mSimpleStoredAttributeList, mAttribute_mTransientList, mAttribute_mToOneRelationshipList, mAttribute_mToManyRelationshipList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @entityDeclaration type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_entityDeclaration ("entityDeclaration",
                                          & kTypeDescriptor_GALGAS_astDeclaration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_entityDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityDeclaration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_entityDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_entityDeclaration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityDeclaration GALGAS_entityDeclaration::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_entityDeclaration result ;
  const GALGAS_entityDeclaration * p = (const GALGAS_entityDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_entityDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("entityDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_enumDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_enumDeclaration * p = (const cPtr_enumDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_enumDeclaration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mUserDefined.objectCompare (p->mAttribute_mUserDefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEnumTypeName.objectCompare (p->mAttribute_mEnumTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEnumConstantNameList.objectCompare (p->mAttribute_mEnumConstantNameList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_enumDeclaration::objectCompare (const GALGAS_enumDeclaration & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumDeclaration::GALGAS_enumDeclaration (void) :
GALGAS_astDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumDeclaration GALGAS_enumDeclaration::constructor_default (LOCATION_ARGS) {
  return GALGAS_enumDeclaration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                  GALGAS_lstring::constructor_default (HERE),
                                                  GALGAS_lstringlist::constructor_emptyList (HERE)
                                                  COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumDeclaration::GALGAS_enumDeclaration (const cPtr_enumDeclaration * inSourcePtr) :
GALGAS_astDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumDeclaration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumDeclaration GALGAS_enumDeclaration::constructor_new (const GALGAS_bool & inAttribute_mUserDefined,
                                                                const GALGAS_lstring & inAttribute_mEnumTypeName,
                                                                const GALGAS_lstringlist & inAttribute_mEnumConstantNameList
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_enumDeclaration result ;
  if (inAttribute_mUserDefined.isValid () && inAttribute_mEnumTypeName.isValid () && inAttribute_mEnumConstantNameList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_enumDeclaration (inAttribute_mUserDefined, inAttribute_mEnumTypeName, inAttribute_mEnumConstantNameList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_enumDeclaration::reader_mEnumTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumDeclaration * p = (const cPtr_enumDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumDeclaration) ;
    result = p->mAttribute_mEnumTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_enumDeclaration::reader_mEnumTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEnumTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_enumDeclaration::reader_mEnumConstantNameList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumDeclaration * p = (const cPtr_enumDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumDeclaration) ;
    result = p->mAttribute_mEnumConstantNameList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_enumDeclaration::reader_mEnumConstantNameList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEnumConstantNameList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @enumDeclaration class                                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_enumDeclaration::cPtr_enumDeclaration (const GALGAS_bool & in_mUserDefined,
                                            const GALGAS_lstring & in_mEnumTypeName,
                                            const GALGAS_lstringlist & in_mEnumConstantNameList
                                            COMMA_LOCATION_ARGS) :
cPtr_astDeclaration (in_mUserDefined COMMA_THERE),
mAttribute_mEnumTypeName (in_mEnumTypeName),
mAttribute_mEnumConstantNameList (in_mEnumConstantNameList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_enumDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumDeclaration ;
}

void cPtr_enumDeclaration::description (C_String & ioString,
                                        const int32_t inIndentation) const {
  ioString << "[@enumDeclaration:" ;
  mAttribute_mUserDefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEnumTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEnumConstantNameList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_enumDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_enumDeclaration (mAttribute_mUserDefined, mAttribute_mEnumTypeName, mAttribute_mEnumConstantNameList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @enumDeclaration type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumDeclaration ("enumDeclaration",
                                        & kTypeDescriptor_GALGAS_astDeclaration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_enumDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumDeclaration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_enumDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumDeclaration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumDeclaration GALGAS_enumDeclaration::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_enumDeclaration result ;
  const GALGAS_enumDeclaration * p = (const GALGAS_enumDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_prefDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_prefDeclaration * p = (const cPtr_prefDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_prefDeclaration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mUserDefined.objectCompare (p->mAttribute_mUserDefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPrefsName.objectCompare (p->mAttribute_mPrefsName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOutletDeclarationList.objectCompare (p->mAttribute_mOutletDeclarationList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSimpleStoredAttributeList.objectCompare (p->mAttribute_mSimpleStoredAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTransientList.objectCompare (p->mAttribute_mTransientList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mActionDeclarationList.objectCompare (p->mAttribute_mActionDeclarationList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_prefDeclaration::objectCompare (const GALGAS_prefDeclaration & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefDeclaration::GALGAS_prefDeclaration (void) :
GALGAS_astDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefDeclaration GALGAS_prefDeclaration::constructor_default (LOCATION_ARGS) {
  return GALGAS_prefDeclaration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                  GALGAS_lstring::constructor_default (HERE),
                                                  GALGAS_outletDeclarationList::constructor_emptyList (HERE),
                                                  GALGAS_simpleStoredPropertyList::constructor_emptyList (HERE),
                                                  GALGAS_transientList::constructor_emptyList (HERE),
                                                  GALGAS_lstringlist::constructor_emptyList (HERE)
                                                  COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefDeclaration::GALGAS_prefDeclaration (const cPtr_prefDeclaration * inSourcePtr) :
GALGAS_astDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_prefDeclaration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefDeclaration GALGAS_prefDeclaration::constructor_new (const GALGAS_bool & inAttribute_mUserDefined,
                                                                const GALGAS_lstring & inAttribute_mPrefsName,
                                                                const GALGAS_outletDeclarationList & inAttribute_mOutletDeclarationList,
                                                                const GALGAS_simpleStoredPropertyList & inAttribute_mSimpleStoredAttributeList,
                                                                const GALGAS_transientList & inAttribute_mTransientList,
                                                                const GALGAS_lstringlist & inAttribute_mActionDeclarationList
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_prefDeclaration result ;
  if (inAttribute_mUserDefined.isValid () && inAttribute_mPrefsName.isValid () && inAttribute_mOutletDeclarationList.isValid () && inAttribute_mSimpleStoredAttributeList.isValid () && inAttribute_mTransientList.isValid () && inAttribute_mActionDeclarationList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_prefDeclaration (inAttribute_mUserDefined, inAttribute_mPrefsName, inAttribute_mOutletDeclarationList, inAttribute_mSimpleStoredAttributeList, inAttribute_mTransientList, inAttribute_mActionDeclarationList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_prefDeclaration::reader_mPrefsName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_prefDeclaration * p = (const cPtr_prefDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefDeclaration) ;
    result = p->mAttribute_mPrefsName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_prefDeclaration::reader_mPrefsName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPrefsName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletDeclarationList GALGAS_prefDeclaration::reader_mOutletDeclarationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_outletDeclarationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_prefDeclaration * p = (const cPtr_prefDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefDeclaration) ;
    result = p->mAttribute_mOutletDeclarationList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletDeclarationList cPtr_prefDeclaration::reader_mOutletDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutletDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_simpleStoredPropertyList GALGAS_prefDeclaration::reader_mSimpleStoredAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_simpleStoredPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_prefDeclaration * p = (const cPtr_prefDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefDeclaration) ;
    result = p->mAttribute_mSimpleStoredAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_simpleStoredPropertyList cPtr_prefDeclaration::reader_mSimpleStoredAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSimpleStoredAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientList GALGAS_prefDeclaration::reader_mTransientList (UNUSED_LOCATION_ARGS) const {
  GALGAS_transientList result ;
  if (NULL != mObjectPtr) {
    const cPtr_prefDeclaration * p = (const cPtr_prefDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefDeclaration) ;
    result = p->mAttribute_mTransientList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientList cPtr_prefDeclaration::reader_mTransientList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTransientList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_prefDeclaration::reader_mActionDeclarationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_prefDeclaration * p = (const cPtr_prefDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefDeclaration) ;
    result = p->mAttribute_mActionDeclarationList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_prefDeclaration::reader_mActionDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActionDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @prefDeclaration class                                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_prefDeclaration::cPtr_prefDeclaration (const GALGAS_bool & in_mUserDefined,
                                            const GALGAS_lstring & in_mPrefsName,
                                            const GALGAS_outletDeclarationList & in_mOutletDeclarationList,
                                            const GALGAS_simpleStoredPropertyList & in_mSimpleStoredAttributeList,
                                            const GALGAS_transientList & in_mTransientList,
                                            const GALGAS_lstringlist & in_mActionDeclarationList
                                            COMMA_LOCATION_ARGS) :
cPtr_astDeclaration (in_mUserDefined COMMA_THERE),
mAttribute_mPrefsName (in_mPrefsName),
mAttribute_mOutletDeclarationList (in_mOutletDeclarationList),
mAttribute_mSimpleStoredAttributeList (in_mSimpleStoredAttributeList),
mAttribute_mTransientList (in_mTransientList),
mAttribute_mActionDeclarationList (in_mActionDeclarationList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_prefDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefDeclaration ;
}

void cPtr_prefDeclaration::description (C_String & ioString,
                                        const int32_t inIndentation) const {
  ioString << "[@prefDeclaration:" ;
  mAttribute_mUserDefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPrefsName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOutletDeclarationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSimpleStoredAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTransientList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mActionDeclarationList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_prefDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_prefDeclaration (mAttribute_mUserDefined, mAttribute_mPrefsName, mAttribute_mOutletDeclarationList, mAttribute_mSimpleStoredAttributeList, mAttribute_mTransientList, mAttribute_mActionDeclarationList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @prefDeclaration type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_prefDeclaration ("prefDeclaration",
                                        & kTypeDescriptor_GALGAS_astDeclaration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_prefDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefDeclaration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_prefDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefDeclaration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

#include "project_header.h"
#include "command_line_interface/F_mainForLIBPM.h"
#include "command_line_interface/F_Analyze_CLI_Options.h"
#include "utilities/F_DisplayException.h"
#include "galgas2/C_galgas_CLI_Options.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      print_tool_help_message                                                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void print_tool_help_message (void) {
  co << "Compiled with GALGAS revision NUMERO_REVISION_GALGAS\n" ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * kSourceFileExtensions [] = {
  "easyBindings",
  NULL
} ;    

//---------------------------------------------------------------------------------------------------------------------*

static const char * kSourceFileHelpMessages [] = {
  "a source text file with the .easyBindings extension",
  NULL
} ;    

//---------------------------------------------------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  static const char * kVersionString = "version " PROJECT_VERSION_STRING " [debug]" ;
#else
  static const char * kVersionString = "version " PROJECT_VERSION_STRING ;
#endif

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  Routine 'before'                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void routine_before (C_Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   Routine 'after'                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void routine_after (C_Compiler * /* inCompiler */
                           COMMA_UNUSED_LOCATION_ARGS) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Routine 'programRule_0'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void routine_programRule_5F__30_ (const GALGAS_lstring constinArgument_inSourceFile,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_astDeclarationStruct var_declarationStruct = GALGAS_astDeclarationStruct::constructor_default (SOURCE_FILE ("program.galgas", 10)) ;
  GALGAS_location joker_784 ; // Joker input parameter
  cGrammar_easyBindings_5F_grammar::_performSourceStringParsing_ (inCompiler, GALGAS_string (filewrapperTemplate_predefinedOutletClasses_sourceFile (inCompiler COMMA_SOURCE_FILE ("program.galgas", 12))), GALGAS_bool (false), var_declarationStruct, joker_784  COMMA_SOURCE_FILE ("program.galgas", 12)) ;
  GALGAS_location var_endOfSourceFile ;
  var_endOfSourceFile.drop () ;
  cGrammar_easyBindings_5F_grammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile, GALGAS_bool (true), var_declarationStruct, var_endOfSourceFile  COMMA_SOURCE_FILE ("program.galgas", 17)) ;
  GALGAS_unifiedTypeMap var_unifiedTypeMap ;
  {
  routine_typeInventory (constinArgument_inSourceFile, var_declarationStruct.mAttribute_mDeclarationList, var_unifiedTypeMap, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 22)) ;
  }
  GALGAS_lstringlist var_unsolvedProxyList = var_unifiedTypeMap.reader_unsolvedProxyList (SOURCE_FILE ("program.galgas", 24)) ;
  cEnumerator_lstringlist enumerator_1295 (var_unsolvedProxyList, kEnumeration_up) ;
  while (enumerator_1295.hasCurrentObject ()) {
    GALGAS_location location_0 (enumerator_1295.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_0, GALGAS_string ("type ").add_operation (enumerator_1295.current_mValue (HERE).reader_string (SOURCE_FILE ("program.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("program.galgas", 26)).add_operation (GALGAS_string (" is undefined"), inCompiler COMMA_SOURCE_FILE ("program.galgas", 26))  COMMA_SOURCE_FILE ("program.galgas", 26)) ;
    enumerator_1295.gotoNextObject () ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_unsolvedProxyList.reader_length (SOURCE_FILE ("program.galgas", 29)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_lstringlist var_sortedTypeNames ;
    GALGAS_lstringlist var_unsortedTypeNames ;
    var_unifiedTypeMap.method_topologicalSort (var_sortedTypeNames, var_unsortedTypeNames, inCompiler COMMA_SOURCE_FILE ("program.galgas", 30)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_unsortedTypeNames.reader_length (SOURCE_FILE ("program.galgas", 34)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_string var_s = GALGAS_string ("cannot sort types ; the following types are involved in circular dependence:") ;
      cEnumerator_lstringlist enumerator_1773 (var_unsortedTypeNames, kEnumeration_up) ;
      while (enumerator_1773.hasCurrentObject ()) {
        var_s.dotAssign_operation (GALGAS_string ("\n"
          "-- ").add_operation (enumerator_1773.current_mValue (HERE).reader_string (SOURCE_FILE ("program.galgas", 37)), inCompiler COMMA_SOURCE_FILE ("program.galgas", 37))  COMMA_SOURCE_FILE ("program.galgas", 37)) ;
        enumerator_1773.gotoNextObject () ;
      }
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("program.galgas", 39)), var_s  COMMA_SOURCE_FILE ("program.galgas", 39)) ;
    }else if (kBoolFalse == test_2) {
      GALGAS_structForGeneration var_generation ;
      {
      routine_semanticAnalysis (var_unifiedTypeMap, constinArgument_inSourceFile.mAttribute_string, var_declarationStruct, var_generation, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 41)) ;
      }
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 47)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_3) {
        {
        routine_generateCode (var_generation, constinArgument_inSourceFile.mAttribute_string, inCompiler  COMMA_SOURCE_FILE ("program.galgas", 48)) ;
        }
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      M A I N    F O R    L I B P M                                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int mainForLIBPM (int inArgc, const char * inArgv []) {
//--- Analyze Command Line Options
  TC_UniqueArray <C_String> sourceFilesArray ;
  F_Analyze_CLI_Options (inArgc, inArgv,
                         kVersionString,
                         sourceFilesArray,
                         kSourceFileExtensions,
                         kSourceFileHelpMessages,
                         print_tool_help_message) ;
//---
  bool verboseOptionOn = true ;
  int16_t returnCode = 0 ; // No error
//--- Set Execution mode
  C_String executionModeOptionErrorMessage ;
  setExecutionMode (executionModeOptionErrorMessage) ;
  if (executionModeOptionErrorMessage.length () > 0) {
    co << executionModeOptionErrorMessage ;
    returnCode = 1 ;
  }else{
  //--- Common lexique object
    C_Compiler * commonLexique = NULL ;
    macroMyNew (commonLexique, C_Compiler (NULL, "", "" COMMA_HERE)) ;
    try{
      routine_before (commonLexique COMMA_HERE) ;
      verboseOptionOn = gOption_galgas_5F_builtin_5F_options_verbose_5F_output.mValue ;
      for (int32_t i=0 ; i<sourceFilesArray.count () ; i++) {
        if (gOption_galgas_5F_builtin_5F_options_trace.mValue) {
          enableTraceWithPath (sourceFilesArray (i COMMA_HERE)) ;
        }
        const C_String fileExtension = sourceFilesArray (i COMMA_HERE).pathExtension () ;
        const GALGAS_string sfp = GALGAS_string (sourceFilesArray (i COMMA_HERE)) ;
        const GALGAS_location location = commonLexique->here () ;
        const GALGAS_lstring sourceFilePath (sfp, location) ;
        int16_t r = 0 ;
        if (fileExtension == "easyBindings") {
          switch (executionMode ()) {
          case kExecutionModeNormal :
            routine_programRule_5F__30_ (sourceFilePath, commonLexique COMMA_HERE) ;
            break ;
          case kExecutionModeLexicalAnalysisOnly :
            cGrammar_easyBindings_5F_grammar::performOnlyLexicalAnalysis (commonLexique, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeSyntaxAnalysisOnly :
            cGrammar_easyBindings_5F_grammar::performOnlySyntaxAnalysis (commonLexique, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeIndexing :
            cGrammar_easyBindings_5F_grammar::performIndexing (commonLexique, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeLatex :
            cGrammar_easyBindings_5F_grammar::performOnlyLexicalAnalysis (commonLexique, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          }
        }else{
          printf ("*** Error: unhandled extension for file '%s' ***\n", sourceFilesArray (i COMMA_HERE).cString (HERE)) ;
          r = 1 ;
        }
        if (r != 0) {
          returnCode = r ;
        }
        closeTrace () ;
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
      routine_after (commonLexique COMMA_HERE) ;
    //--- Display error and warnings count
      if (gOption_galgas_5F_builtin_5F_options_verbose_5F_output.mValue || (totalWarningCount () > 0) || (totalErrorCount () > 0)) {
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
    macroDetachSharedObject (commonLexique) ;
  }
  return returnCode ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Category Reader '@typeKind preferencesSwiftGetter'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_preferencesSwiftGetter (const GALGAS_typeKind & inObject,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_typeKind temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_boolType:
    {
      result_outResult = GALGAS_string ("(value as! NSNumber).boolValue") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_integerType:
    {
      result_outResult = GALGAS_string ("(value as! NSNumber).integerValue") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_doubleType:
    {
      result_outResult = GALGAS_string ("\xC3""\xA0"" compl\xC3""\xA9""ter preferencesSwiftGetter") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_stringType:
    {
      result_outResult = GALGAS_string ("value as! String") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_colorType:
    {
      result_outResult = GALGAS_string ("NSUnarchiver.unarchiveObjectWithData (value as! NSData) as! NSColor") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_dateType:
    {
      result_outResult = GALGAS_string ("value as! NSDate") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_enumType:
    {
      result_outResult = GALGAS_string ("\xC3""\xA0"" compl\xC3""\xA9""ter preferencesSwiftGetter") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_entityType:
    {
      result_outResult = GALGAS_string ("<invalid entity type>") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Category Reader '@typeKind preferencesSwiftSetter'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_preferencesSwiftSetter (const GALGAS_typeKind & inObject,
                                                     const GALGAS_string & constinArgument_inPropertyName,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_typeKind temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_boolType:
    {
      result_outResult = GALGAS_string ("NSNumber (bool:").add_operation (constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 190)).add_operation (GALGAS_string (".prop)"), inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 190)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_integerType:
    {
      result_outResult = GALGAS_string ("NSNumber (integer:").add_operation (constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 191)).add_operation (GALGAS_string (".prop)"), inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 191)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_doubleType:
    {
      result_outResult = GALGAS_string ("\xC3""\xA0"" compl\xC3""\xA9""ter preferencesSwiftSetter") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_colorType:
    {
      result_outResult = GALGAS_string ("NSArchiver.archivedDataWithRootObject (").add_operation (constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 193)).add_operation (GALGAS_string (".prop)"), inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 193)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_dateType:
  case GALGAS_typeKind::kEnum_stringType:
    {
      result_outResult = constinArgument_inPropertyName.add_operation (GALGAS_string (".prop"), inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 194)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_enumType:
    {
      result_outResult = GALGAS_string ("\xC3""\xA0"" compl\xC3""\xA9""ter preferencesSwiftSetter") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_entityType:
    {
      result_outResult = GALGAS_string ("<invalid entity type>") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Category method '@outletClassDeclarationList buildOutletClassMap'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_buildOutletClassMap (const GALGAS_outletClassDeclarationList inObject,
                                         GALGAS_outletClassMap & outArgument_outOutletClassMap,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outOutletClassMap.drop () ; // Release 'out' argument
  outArgument_outOutletClassMap = GALGAS_outletClassMap::constructor_emptyMap (SOURCE_FILE ("outlet-class.galgas", 65)) ;
  const GALGAS_outletClassDeclarationList temp_0 = inObject ;
  cEnumerator_outletClassDeclarationList enumerator_2714 (temp_0, kEnumeration_up) ;
  while (enumerator_2714.hasCurrentObject ()) {
    {
    outArgument_outOutletClassMap.modifier_insertKey (enumerator_2714.current_mOutletClassName (HERE), enumerator_2714.current_mHasRunAction (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-class.galgas", 67)) ;
    }
    enumerator_2714.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Abstract category method '@abstractDefaultValue analyzeDefaultValueType'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_abstractDefaultValue_analyzeDefaultValueType> gCategoryMethodTable_abstractDefaultValue_analyzeDefaultValueType ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_analyzeDefaultValueType (const int32_t inClassIndex,
                                                  categoryMethodSignature_abstractDefaultValue_analyzeDefaultValueType inMethod) {
  gCategoryMethodTable_abstractDefaultValue_analyzeDefaultValueType.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_abstractDefaultValue_analyzeDefaultValueType (void) {
  gCategoryMethodTable_abstractDefaultValue_analyzeDefaultValueType.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractDefaultValue_analyzeDefaultValueType (NULL,
                                                                         freeCategoryMethod_abstractDefaultValue_analyzeDefaultValueType) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_analyzeDefaultValueType (const cPtr_abstractDefaultValue * inObject,
                                                 const GALGAS_typeKindList constin_inAttributeActualTypeList,
                                                 GALGAS_string & out_outSwiftDefaultValueAsString,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outSwiftDefaultValueAsString.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDefaultValue) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_abstractDefaultValue_analyzeDefaultValueType f = NULL ;
    if (classIndex < gCategoryMethodTable_abstractDefaultValue_analyzeDefaultValueType.count ()) {
      f = gCategoryMethodTable_abstractDefaultValue_analyzeDefaultValueType (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_abstractDefaultValue_analyzeDefaultValueType.count ()) {
           f = gCategoryMethodTable_abstractDefaultValue_analyzeDefaultValueType (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_abstractDefaultValue_analyzeDefaultValueType.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inAttributeActualTypeList, out_outSwiftDefaultValueAsString, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//     Abstract category method '@abstractBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding> gCategoryMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_analyzeExpressionForMultipleBinding (const int32_t inClassIndex,
                                                              categoryMethodSignature_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding inMethod) {
  gCategoryMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (void) {
  gCategoryMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (NULL,
                                                                                                            freeCategoryMethod_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_analyzeExpressionForMultipleBinding (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                             const GALGAS_observablePropertyMap constin_inRootObservablePropertyMap,
                                                             const GALGAS_semanticContext constin_inSemanticContext,
                                                             const GALGAS_observablePropertyMap constin_inCurrentObservablePropertyMap,
                                                             GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & out_outEnableExpression,
                                                             GALGAS_typeKind & out_outType,
                                                             GALGAS_location & out_outErrorLocation,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outEnableExpression.drop () ;
  out_outType.drop () ;
  out_outErrorLocation.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractBooleanMultipleBindingExpressionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding f = NULL ;
    if (classIndex < gCategoryMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding.count ()) {
      f = gCategoryMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding.count ()) {
           f = gCategoryMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inRootObservablePropertyMap, constin_inSemanticContext, constin_inCurrentObservablePropertyMap, out_outEnableExpression, out_outType, out_outErrorLocation, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Abstract category reader '@abstractBooleanMultipleBindingExpressionForGeneration observedModelSet'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryReaderSignature_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet> gCategoryReaderTable_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_observedModelSet (const int32_t inClassIndex,
                                           categoryReaderSignature_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet inReader) {
  gCategoryReaderTable_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet.forceObjectAtIndex (inClassIndex, inReader, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryReader_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet (void) {
  gCategoryReaderTable_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet (NULL,
                                                                                                   freeCategoryReader_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset callCategoryReader_observedModelSet (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_stringset result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractBooleanMultipleBindingExpressionForGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryReaderSignature_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet f = NULL ;
    if (classIndex < gCategoryReaderTable_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet.count ()) {
      f = gCategoryReaderTable_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryReaderTable_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet.count ()) {
           f = gCategoryReaderTable_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryReaderTable_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Abstract category reader '@abstractBooleanMultipleBindingExpressionForGeneration expressionString'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryReaderSignature_abstractBooleanMultipleBindingExpressionForGeneration_expressionString> gCategoryReaderTable_abstractBooleanMultipleBindingExpressionForGeneration_expressionString ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_expressionString (const int32_t inClassIndex,
                                           categoryReaderSignature_abstractBooleanMultipleBindingExpressionForGeneration_expressionString inReader) {
  gCategoryReaderTable_abstractBooleanMultipleBindingExpressionForGeneration_expressionString.forceObjectAtIndex (inClassIndex, inReader, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryReader_abstractBooleanMultipleBindingExpressionForGeneration_expressionString (void) {
  gCategoryReaderTable_abstractBooleanMultipleBindingExpressionForGeneration_expressionString.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_abstractBooleanMultipleBindingExpressionForGeneration_expressionString (NULL,
                                                                                                   freeCategoryReader_abstractBooleanMultipleBindingExpressionForGeneration_expressionString) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callCategoryReader_expressionString (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractBooleanMultipleBindingExpressionForGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryReaderSignature_abstractBooleanMultipleBindingExpressionForGeneration_expressionString f = NULL ;
    if (classIndex < gCategoryReaderTable_abstractBooleanMultipleBindingExpressionForGeneration_expressionString.count ()) {
      f = gCategoryReaderTable_abstractBooleanMultipleBindingExpressionForGeneration_expressionString (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryReaderTable_abstractBooleanMultipleBindingExpressionForGeneration_expressionString.count ()) {
           f = gCategoryReaderTable_abstractBooleanMultipleBindingExpressionForGeneration_expressionString (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryReaderTable_abstractBooleanMultipleBindingExpressionForGeneration_expressionString.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Category method '@transientList typeInventory'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_typeInventory (const GALGAS_transientList inObject,
                                   GALGAS_string inArgument_inDependencyGraphPrefix,
                                   GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                   GALGAS_transientDependencyGraph & ioArgument_ioTransientDependencyGraph,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_transientList temp_0 = inObject ;
  cEnumerator_transientList enumerator_2212 (temp_0, kEnumeration_up) ;
  while (enumerator_2212.hasCurrentObject ()) {
    {
    GALGAS_unifiedTypeMap_2D_proxy joker_2311 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioUnifiedTypeMap, enumerator_2212.current_mTransientTypeName (HERE), joker_2311 COMMA_SOURCE_FILE ("transient-property.galgas", 50)) ;
    }
    GALGAS_lstring var_slaveProperty = GALGAS_lstring::constructor_new (inArgument_inDependencyGraphPrefix.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 56)).add_operation (enumerator_2212.current_mTransientName (HERE).reader_string (SOURCE_FILE ("transient-property.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 56)), enumerator_2212.current_mTransientName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("transient-property.galgas", 55)) ;
    {
    ioArgument_ioTransientDependencyGraph.modifier_addNode (var_slaveProperty, var_slaveProperty.mAttribute_string, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 59)) ;
    }
    cEnumerator_observablePropertyList enumerator_2603 (enumerator_2212.current_mDependencyList (HERE), kEnumeration_up) ;
    while (enumerator_2603.hasCurrentObject ()) {
      categoryMethod_enterInTransientDependencyGraph (enumerator_2603.current_mObservableProperty (HERE), inArgument_inDependencyGraphPrefix, var_slaveProperty, ioArgument_ioTransientDependencyGraph, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 65)) ;
      enumerator_2603.gotoNextObject () ;
    }
    enumerator_2212.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category method '@transientList buildObservablePropertyMap'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_buildObservablePropertyMap (const GALGAS_transientList inObject,
                                                const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                GALGAS_observablePropertyMap & ioArgument_ioObservableProperties,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_transientList temp_0 = inObject ;
  cEnumerator_transientList enumerator_3305 (temp_0, kEnumeration_up) ;
  while (enumerator_3305.hasCurrentObject ()) {
    GALGAS_typeKind var_type ;
    constinArgument_inUnifiedTypeMap.method_searchKey (enumerator_3305.current_mTransientTypeName (HERE), var_type, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 84)) ;
    switch (var_type.enumValue ()) {
    case GALGAS_typeKind::kNotBuilt:
      break ;
    case GALGAS_typeKind::kEnum_boolType:
    case GALGAS_typeKind::kEnum_integerType:
    case GALGAS_typeKind::kEnum_stringType:
    case GALGAS_typeKind::kEnum_colorType:
    case GALGAS_typeKind::kEnum_dateType:
    case GALGAS_typeKind::kEnum_doubleType:
      {
      }
      break ;
    case GALGAS_typeKind::kEnum_enumType:
      {
      }
      break ;
    case GALGAS_typeKind::kEnum_entityType:
      {
        GALGAS_location location_1 (enumerator_3305.current_mTransientName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_1, GALGAS_string ("an entity cannot be used as simple property type")  COMMA_SOURCE_FILE ("transient-property.galgas", 90)) ;
      }
      break ;
    }
    {
    ioArgument_ioObservableProperties.modifier_insertKey (enumerator_3305.current_mTransientName (HERE), var_type, GALGAS_propertyKind::constructor_stored (SOURCE_FILE ("transient-property.galgas", 96)), GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("transient-property.galgas", 97)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 93)) ;
    }
    enumerator_3305.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category method '@transientList transientSemanticAnalysis'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_transientSemanticAnalysis (const GALGAS_transientList inObject,
                                               const GALGAS_string constinArgument_inOwnerName,
                                               const GALGAS_observablePropertyMap constinArgument_inRootObservableProperties,
                                               const GALGAS_semanticContext constinArgument_inSemanticContext,
                                               const GALGAS_observablePropertyMap constinArgument_inObservableProperties,
                                               GALGAS_structForGeneration & ioArgument_ioGeneration,
                                               GALGAS_transientDefinitionListForGeneration & outArgument_outTransientDefinitionListForGeneration,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTransientDefinitionListForGeneration.drop () ; // Release 'out' argument
  outArgument_outTransientDefinitionListForGeneration = GALGAS_transientDefinitionListForGeneration::constructor_emptyList (SOURCE_FILE ("transient-property.galgas", 113)) ;
  const GALGAS_transientList temp_0 = inObject ;
  cEnumerator_transientList enumerator_4345 (temp_0, kEnumeration_up) ;
  while (enumerator_4345.hasCurrentObject ()) {
    GALGAS_typeKind var_type ;
    constinArgument_inSemanticContext.mAttribute_mUnifiedTypeMap.method_searchKey (enumerator_4345.current_mTransientTypeName (HERE), var_type, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 116)) ;
    GALGAS_typeKindList var_typeList ;
    switch (var_type.enumValue ()) {
    case GALGAS_typeKind::kNotBuilt:
      break ;
    case GALGAS_typeKind::kEnum_boolType:
    case GALGAS_typeKind::kEnum_integerType:
    case GALGAS_typeKind::kEnum_stringType:
    case GALGAS_typeKind::kEnum_colorType:
    case GALGAS_typeKind::kEnum_dateType:
    case GALGAS_typeKind::kEnum_doubleType:
      {
        GALGAS_typeKindList temp_1 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("transient-property.galgas", 121)) ;
        temp_1.addAssign_operation (var_type  COMMA_SOURCE_FILE ("transient-property.galgas", 121)) ;
        var_typeList = temp_1 ;
      }
      break ;
    case GALGAS_typeKind::kEnum_enumType:
      {
        GALGAS_typeKindList temp_2 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("transient-property.galgas", 123)) ;
        temp_2.addAssign_operation (var_type  COMMA_SOURCE_FILE ("transient-property.galgas", 123)) ;
        var_typeList = temp_2 ;
      }
      break ;
    case GALGAS_typeKind::kEnum_entityType:
      {
        GALGAS_location location_3 (enumerator_4345.current_mTransientName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_3, GALGAS_string ("an entity cannot be used as simple property type")  COMMA_SOURCE_FILE ("transient-property.galgas", 125)) ;
        var_typeList.drop () ; // Release error dropped variable
      }
      break ;
    }
    GALGAS_transientDependencyListForGeneration var_dependencies = GALGAS_transientDependencyListForGeneration::constructor_emptyList (SOURCE_FILE ("transient-property.galgas", 128)) ;
    cEnumerator_observablePropertyList enumerator_4921 (enumerator_4345.current_mDependencyList (HERE), kEnumeration_up) ;
    while (enumerator_4921.hasCurrentObject ()) {
      GALGAS_propertyMultiplicity var_outMultiplicity ;
      GALGAS_string var_swiftTypeStringForTransientFunctionArgument ;
      GALGAS_typeKind joker_5082 ; // Joker input parameter
      GALGAS_propertyKind joker_5124 ; // Joker input parameter
      categoryMethod_analyzeObservableProperty (enumerator_4921.current_mObservableProperty (HERE), constinArgument_inRootObservableProperties, constinArgument_inSemanticContext, constinArgument_inObservableProperties, joker_5082, joker_5124, var_outMultiplicity, var_swiftTypeStringForTransientFunctionArgument, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 130)) ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_outMultiplicity.objectCompare (GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("transient-property.galgas", 139)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        inCompiler->emitSemanticError (categoryReader_location (enumerator_4921.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 140)), GALGAS_string ("a collection cannot be observed")  COMMA_SOURCE_FILE ("transient-property.galgas", 140)) ;
      }
      var_dependencies.addAssign_operation (enumerator_4921.current_mObservableProperty (HERE), categoryReader_modelString (enumerator_4921.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 144)).reader_nameRepresentation (SOURCE_FILE ("transient-property.galgas", 144)), var_swiftTypeStringForTransientFunctionArgument  COMMA_SOURCE_FILE ("transient-property.galgas", 142)) ;
      enumerator_4921.gotoNextObject () ;
    }
    outArgument_outTransientDefinitionListForGeneration.addAssign_operation (constinArgument_inOwnerName, enumerator_4345.current_mTransientName (HERE).mAttribute_string, var_type, var_dependencies  COMMA_SOURCE_FILE ("transient-property.galgas", 148)) ;
    enumerator_4345.gotoNextObject () ;
  }
  ioArgument_ioGeneration.mAttribute_mTransientListForGeneration.dotAssign_operation (outArgument_outTransientDefinitionListForGeneration  COMMA_SOURCE_FILE ("transient-property.galgas", 154)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category method '@simpleStoredPropertyList typeInventory'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_typeInventory (const GALGAS_simpleStoredPropertyList inObject,
                                   GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                   C_Compiler * /* inCompiler */
                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_simpleStoredPropertyList temp_0 = inObject ;
  cEnumerator_simpleStoredPropertyList enumerator_2160 (temp_0, kEnumeration_up) ;
  while (enumerator_2160.hasCurrentObject ()) {
    {
    GALGAS_unifiedTypeMap_2D_proxy joker_2258 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioUnifiedTypeMap, enumerator_2160.current_mPropertyTypeName (HERE), joker_2258 COMMA_SOURCE_FILE ("simple-stored-property.galgas", 55)) ;
    }
    enumerator_2160.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Category method '@simpleStoredPropertyList buildObservablePropertyMap'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_buildObservablePropertyMap (const GALGAS_simpleStoredPropertyList inObject,
                                                const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                GALGAS_observablePropertyMap & ioArgument_ioObservableProperties,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_simpleStoredPropertyList temp_0 = inObject ;
  cEnumerator_simpleStoredPropertyList enumerator_2807 (temp_0, kEnumeration_up) ;
  while (enumerator_2807.hasCurrentObject ()) {
    GALGAS_typeKind var_type ;
    constinArgument_inUnifiedTypeMap.method_searchKey (enumerator_2807.current_mPropertyTypeName (HERE), var_type, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 73)) ;
    GALGAS_typeKindList var_typeList ;
    switch (var_type.enumValue ()) {
    case GALGAS_typeKind::kNotBuilt:
      break ;
    case GALGAS_typeKind::kEnum_boolType:
    case GALGAS_typeKind::kEnum_integerType:
    case GALGAS_typeKind::kEnum_stringType:
    case GALGAS_typeKind::kEnum_colorType:
    case GALGAS_typeKind::kEnum_dateType:
    case GALGAS_typeKind::kEnum_doubleType:
      {
        GALGAS_typeKindList temp_1 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("simple-stored-property.galgas", 78)) ;
        temp_1.addAssign_operation (var_type  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 78)) ;
        var_typeList = temp_1 ;
      }
      break ;
    case GALGAS_typeKind::kEnum_enumType:
      {
        GALGAS_typeKindList temp_2 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("simple-stored-property.galgas", 80)) ;
        temp_2.addAssign_operation (var_type  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 80)) ;
        var_typeList = temp_2 ;
      }
      break ;
    case GALGAS_typeKind::kEnum_entityType:
      {
        GALGAS_location location_3 (enumerator_2807.current_mPropertyName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_3, GALGAS_string ("an entity cannot be used as simple property type")  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 82)) ;
        var_typeList.drop () ; // Release error dropped variable
      }
      break ;
    }
    {
    ioArgument_ioObservableProperties.modifier_insertKey (enumerator_2807.current_mPropertyName (HERE), var_type, GALGAS_propertyKind::constructor_stored (SOURCE_FILE ("simple-stored-property.galgas", 88)), GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("simple-stored-property.galgas", 89)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 85)) ;
    }
    enumerator_2807.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category method '@simpleStoredPropertyList semanticAnalysis'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_semanticAnalysis (const GALGAS_simpleStoredPropertyList inObject,
                                      const GALGAS_string constinArgument_inSwiftClassName,
                                      const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                      GALGAS_validationStubRoutineListForGeneration & ioArgument_ioValidationStubRoutineListForGeneration,
                                      GALGAS_simpleStoredPropertyListForGeneration & outArgument_outSimpleStoredPropertyListForGeneration,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSimpleStoredPropertyListForGeneration.drop () ; // Release 'out' argument
  outArgument_outSimpleStoredPropertyListForGeneration = GALGAS_simpleStoredPropertyListForGeneration::constructor_emptyList (SOURCE_FILE ("simple-stored-property.galgas", 103)) ;
  const GALGAS_simpleStoredPropertyList temp_0 = inObject ;
  cEnumerator_simpleStoredPropertyList enumerator_3877 (temp_0, kEnumeration_up) ;
  while (enumerator_3877.hasCurrentObject ()) {
    GALGAS_typeKind var_type ;
    constinArgument_inUnifiedTypeMap.method_searchKey (enumerator_3877.current_mPropertyTypeName (HERE), var_type, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 106)) ;
    GALGAS_typeKindList var_typeList ;
    switch (var_type.enumValue ()) {
    case GALGAS_typeKind::kNotBuilt:
      break ;
    case GALGAS_typeKind::kEnum_boolType:
    case GALGAS_typeKind::kEnum_integerType:
    case GALGAS_typeKind::kEnum_stringType:
    case GALGAS_typeKind::kEnum_colorType:
    case GALGAS_typeKind::kEnum_dateType:
    case GALGAS_typeKind::kEnum_doubleType:
      {
        GALGAS_typeKindList temp_1 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("simple-stored-property.galgas", 111)) ;
        temp_1.addAssign_operation (var_type  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 111)) ;
        var_typeList = temp_1 ;
      }
      break ;
    case GALGAS_typeKind::kEnum_enumType:
      {
        GALGAS_typeKindList temp_2 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("simple-stored-property.galgas", 113)) ;
        temp_2.addAssign_operation (var_type  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 113)) ;
        var_typeList = temp_2 ;
      }
      break ;
    case GALGAS_typeKind::kEnum_entityType:
      {
        GALGAS_location location_3 (enumerator_3877.current_mPropertyName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_3, GALGAS_string ("an entity cannot be used as simple property type")  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 115)) ;
        var_typeList.drop () ; // Release error dropped variable
      }
      break ;
    }
    GALGAS_string var_swiftDefaultValueAsString ;
    callCategoryMethod_analyzeDefaultValueType ((const cPtr_abstractDefaultValue *) enumerator_3877.current_mDefaultValue (HERE).ptr (), var_typeList, var_swiftDefaultValueAsString, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 118)) ;
    outArgument_outSimpleStoredPropertyListForGeneration.addAssign_operation (var_type, enumerator_3877.current_mPropertyName (HERE).mAttribute_string, var_swiftDefaultValueAsString, enumerator_3877.current_mNeedsValidation (HERE)  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 120)) ;
    const enumGalgasBool test_4 = enumerator_3877.current_mNeedsValidation (HERE).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioValidationStubRoutineListForGeneration.addAssign_operation (constinArgument_inSwiftClassName, enumerator_3877.current_mPropertyName (HERE).mAttribute_string, categoryReader_swiftTypeName (var_type, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 129))  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 126)) ;
    }
    enumerator_3877.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Category method '@arrayControllerDeclarationListAST buildArrayControllerMap'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_buildArrayControllerMap (const GALGAS_arrayControllerDeclarationListAST inObject,
                                             GALGAS_arrayControllerMap & outArgument_outArrayControllerMap,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outArrayControllerMap.drop () ; // Release 'out' argument
  outArgument_outArrayControllerMap = GALGAS_arrayControllerMap::constructor_emptyMap (SOURCE_FILE ("array-controller-declaration.galgas", 95)) ;
  const GALGAS_arrayControllerDeclarationListAST temp_0 = inObject ;
  cEnumerator_arrayControllerDeclarationListAST enumerator_3819 (temp_0, kEnumeration_up) ;
  while (enumerator_3819.hasCurrentObject ()) {
    {
    outArgument_outArrayControllerMap.modifier_insertKey (enumerator_3819.current_mControllerName (HERE), inCompiler COMMA_SOURCE_FILE ("array-controller-declaration.galgas", 97)) ;
    }
    enumerator_3819.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Category method '@arrayControllerDeclarationListAST arrayControllerSemanticAnalysis'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_arrayControllerSemanticAnalysis (const GALGAS_arrayControllerDeclarationListAST inObject,
                                                     const GALGAS_string constinArgument_inOwnerName,
                                                     const GALGAS_observablePropertyMap constinArgument_inRootObservablePropertyMap,
                                                     const GALGAS_string constinArgument_inRootEntityName,
                                                     const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                     const GALGAS_decoratedOutletMap constinArgument_inOutletMap,
                                                     const GALGAS_observablePropertyMap /* constinArgument_inObservablePropertyMap */,
                                                     GALGAS_arrayControllerForGeneration & outArgument_outDocumentArrayControllerForGeneration,
                                                     GALGAS_arrayControllerForGeneration & ioArgument_ioArrayControllerForGeneration,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outDocumentArrayControllerForGeneration.drop () ; // Release 'out' argument
  outArgument_outDocumentArrayControllerForGeneration = GALGAS_arrayControllerForGeneration::constructor_emptyList (SOURCE_FILE ("array-controller-declaration.galgas", 113)) ;
  const GALGAS_arrayControllerDeclarationListAST temp_0 = inObject ;
  cEnumerator_arrayControllerDeclarationListAST enumerator_4547 (temp_0, kEnumeration_up) ;
  while (enumerator_4547.hasCurrentObject ()) {
    GALGAS_typeKind var_modelType ;
    GALGAS_propertyKind var_kind ;
    GALGAS_propertyMultiplicity var_multiplicity ;
    GALGAS_string joker_4781 ; // Joker input parameter
    constinArgument_inRootObservablePropertyMap.method_searchKey (enumerator_4547.current_mRootRelationshipName (HERE), var_modelType, var_kind, var_multiplicity, joker_4781, inCompiler COMMA_SOURCE_FILE ("array-controller-declaration.galgas", 116)) ;
    GALGAS_string var_entityName ;
    switch (var_modelType.enumValue ()) {
    case GALGAS_typeKind::kNotBuilt:
      break ;
    case GALGAS_typeKind::kEnum_boolType:
    case GALGAS_typeKind::kEnum_colorType:
    case GALGAS_typeKind::kEnum_dateType:
    case GALGAS_typeKind::kEnum_doubleType:
    case GALGAS_typeKind::kEnum_integerType:
    case GALGAS_typeKind::kEnum_stringType:
      {
        GALGAS_location location_1 (enumerator_4547.current_mRootRelationshipName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_1, GALGAS_string ("the model should be a tomany relationship")  COMMA_SOURCE_FILE ("array-controller-declaration.galgas", 127)) ;
        var_entityName.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_enumType:
      {
        GALGAS_location location_2 (enumerator_4547.current_mRootRelationshipName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_2, GALGAS_string ("the model should be a tomany relationship")  COMMA_SOURCE_FILE ("array-controller-declaration.galgas", 129)) ;
        var_entityName.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_entityType:
      {
        const cEnumAssociatedValues_typeKind_entityType * extractPtr_5240 = (const cEnumAssociatedValues_typeKind_entityType *) (var_modelType.unsafePointer ()) ;
        const GALGAS_string extractedValue_kEntityName = extractPtr_5240->mAssociatedValue0 ;
        var_entityName = extractedValue_kEntityName ;
      }
      break ;
    }
    const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_multiplicity.objectCompare (GALGAS_propertyMultiplicity::constructor_collection (SOURCE_FILE ("array-controller-declaration.galgas", 134)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_location location_4 (enumerator_4547.current_mRootRelationshipName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_4, GALGAS_string ("the bound property should be a collection")  COMMA_SOURCE_FILE ("array-controller-declaration.galgas", 135)) ;
    }
    const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_kind.objectCompare (GALGAS_propertyKind::constructor_transient (SOURCE_FILE ("array-controller-declaration.galgas", 138)))).boolEnum () ;
    if (kBoolTrue == test_5) {
      GALGAS_location location_6 (enumerator_4547.current_mRootRelationshipName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_6, GALGAS_string ("the bound property should be stored (not a transient)")  COMMA_SOURCE_FILE ("array-controller-declaration.galgas", 139)) ;
    }
    GALGAS_string var_outletTypeName ;
    constinArgument_inOutletMap.method_searchKey (enumerator_4547.current_mTableViewOutletName (HERE), var_outletTypeName, inCompiler COMMA_SOURCE_FILE ("array-controller-declaration.galgas", 142)) ;
    const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, var_outletTypeName.objectCompare (GALGAS_string ("PMTableView"))).boolEnum () ;
    if (kBoolTrue == test_7) {
      GALGAS_location location_8 (enumerator_4547.current_mTableViewOutletName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_8, GALGAS_string ("this outlet is not an instance of PMTableView")  COMMA_SOURCE_FILE ("array-controller-declaration.galgas", 144)) ;
    }
    GALGAS_observablePropertyMap var_boundModelObservablePropertyMap ;
    constinArgument_inSemanticContext.mAttribute_mEntityObservablePropertyMap.method_searchKey (var_entityName.reader_nowhere (SOURCE_FILE ("array-controller-declaration.galgas", 148)), var_boundModelObservablePropertyMap, inCompiler COMMA_SOURCE_FILE ("array-controller-declaration.galgas", 147)) ;
    GALGAS_arrayControllerBoundColumnListForGeneration var_arrayControllerBoundColumnListForGeneration = GALGAS_arrayControllerBoundColumnListForGeneration::constructor_emptyList (SOURCE_FILE ("array-controller-declaration.galgas", 151)) ;
    cEnumerator_arrayControllerBoundColumnListAST enumerator_6217 (enumerator_4547.current_mArrayControllerBoundColumnListAST (HERE), kEnumeration_up) ;
    while (enumerator_6217.hasCurrentObject ()) {
      GALGAS_typeKind var_columnType ;
      GALGAS_propertyMultiplicity var_columnMultiplicity ;
      GALGAS_propertyKind joker_6346 ; // Joker input parameter
      GALGAS_string joker_6442 ; // Joker input parameter
      var_boundModelObservablePropertyMap.method_searchKey (enumerator_6217.current_mObservablePropertyName (HERE), var_columnType, joker_6346, var_columnMultiplicity, joker_6442, inCompiler COMMA_SOURCE_FILE ("array-controller-declaration.galgas", 153)) ;
      switch (var_columnType.enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_boolType:
      case GALGAS_typeKind::kEnum_colorType:
      case GALGAS_typeKind::kEnum_dateType:
      case GALGAS_typeKind::kEnum_doubleType:
      case GALGAS_typeKind::kEnum_integerType:
      case GALGAS_typeKind::kEnum_stringType:
        {
        }
        break ;
      case GALGAS_typeKind::kEnum_enumType:
        {
        }
        break ;
      case GALGAS_typeKind::kEnum_entityType:
        {
          inCompiler->emitSemanticError (enumerator_6217.current_mObservablePropertyName (HERE).reader_location (SOURCE_FILE ("array-controller-declaration.galgas", 165)), GALGAS_string ("the model should not be a relationship")  COMMA_SOURCE_FILE ("array-controller-declaration.galgas", 165)) ;
        }
        break ;
      }
      const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, var_columnMultiplicity.objectCompare (GALGAS_propertyMultiplicity::constructor_collection (SOURCE_FILE ("array-controller-declaration.galgas", 167)))).boolEnum () ;
      if (kBoolTrue == test_9) {
        GALGAS_location location_10 (enumerator_6217.current_mObservablePropertyName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_10, GALGAS_string ("the bound column property should not be a collection")  COMMA_SOURCE_FILE ("array-controller-declaration.galgas", 168)) ;
      }
      var_arrayControllerBoundColumnListForGeneration.addAssign_operation (enumerator_6217.current_mColumnName (HERE).mAttribute_string, enumerator_6217.current_mColumnOutletTypeName (HERE).mAttribute_string, enumerator_6217.current_mObservablePropertyName (HERE).mAttribute_string, var_columnType, enumerator_6217.current_mBindingOptionList (HERE)  COMMA_SOURCE_FILE ("array-controller-declaration.galgas", 170)) ;
      enumerator_6217.gotoNextObject () ;
    }
    GALGAS_arrayControllerFilterListForGeneration var_arrayControllerFilterListForGeneration = GALGAS_arrayControllerFilterListForGeneration::constructor_emptyList (SOURCE_FILE ("array-controller-declaration.galgas", 178)) ;
    cEnumerator_lstringlist enumerator_7373 (enumerator_4547.current_mFilterProperties (HERE), kEnumeration_up) ;
    while (enumerator_7373.hasCurrentObject ()) {
      GALGAS_typeKind var_filterType ;
      GALGAS_propertyMultiplicity var_filterMultiplicity ;
      GALGAS_propertyKind joker_7497 ; // Joker input parameter
      GALGAS_string joker_7593 ; // Joker input parameter
      var_boundModelObservablePropertyMap.method_searchKey (enumerator_7373.current_mValue (HERE), var_filterType, joker_7497, var_filterMultiplicity, joker_7593, inCompiler COMMA_SOURCE_FILE ("array-controller-declaration.galgas", 180)) ;
      const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, var_filterMultiplicity.objectCompare (GALGAS_propertyMultiplicity::constructor_collection (SOURCE_FILE ("array-controller-declaration.galgas", 187)))).boolEnum () ;
      if (kBoolTrue == test_11) {
        GALGAS_location location_12 (enumerator_7373.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_12, GALGAS_string ("the filter property should not be a collection")  COMMA_SOURCE_FILE ("array-controller-declaration.galgas", 188)) ;
      }
      var_arrayControllerFilterListForGeneration.addAssign_operation (enumerator_7373.current_mValue (HERE).mAttribute_string, var_filterType  COMMA_SOURCE_FILE ("array-controller-declaration.galgas", 190)) ;
      enumerator_7373.gotoNextObject () ;
    }
    outArgument_outDocumentArrayControllerForGeneration.addAssign_operation (constinArgument_inOwnerName, enumerator_4547.current_mControllerName (HERE).mAttribute_string, constinArgument_inRootEntityName, enumerator_4547.current_mRootRelationshipName (HERE).mAttribute_string, categoryReader_swiftTypeName (var_modelType, inCompiler COMMA_SOURCE_FILE ("array-controller-declaration.galgas", 198)), enumerator_4547.current_mTableViewOutletName (HERE).mAttribute_string, var_arrayControllerFilterListForGeneration, var_arrayControllerBoundColumnListForGeneration  COMMA_SOURCE_FILE ("array-controller-declaration.galgas", 193)) ;
    enumerator_4547.gotoNextObject () ;
  }
  ioArgument_ioArrayControllerForGeneration.dotAssign_operation (outArgument_outDocumentArrayControllerForGeneration  COMMA_SOURCE_FILE ("array-controller-declaration.galgas", 203)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category Reader '@typeKind transformerForTableViewAction'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_transformerForTableViewAction (const GALGAS_typeKind & inObject,
                                                            const GALGAS_string & constinArgument_inSenderOutletName,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_typeKind temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_stringType:
    {
      result_outResult = constinArgument_inSenderOutletName.add_operation (GALGAS_string (".stringValue"), inCompiler COMMA_SOURCE_FILE ("array-controller-declaration.galgas", 242)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_integerType:
    {
      result_outResult = constinArgument_inSenderOutletName.add_operation (GALGAS_string (".integerValue"), inCompiler COMMA_SOURCE_FILE ("array-controller-declaration.galgas", 243)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_boolType:
    {
      result_outResult = GALGAS_string ("NSNumber (bool:").add_operation (constinArgument_inSenderOutletName, inCompiler COMMA_SOURCE_FILE ("array-controller-declaration.galgas", 245)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("array-controller-declaration.galgas", 245)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_doubleType:
    {
      result_outResult = GALGAS_string ("NSNumber (double:").add_operation (constinArgument_inSenderOutletName, inCompiler COMMA_SOURCE_FILE ("array-controller-declaration.galgas", 246)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("array-controller-declaration.galgas", 246)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_colorType:
    {
      result_outResult = constinArgument_inSenderOutletName.add_operation (GALGAS_string (".stringValue"), inCompiler COMMA_SOURCE_FILE ("array-controller-declaration.galgas", 247)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_dateType:
    {
      result_outResult = GALGAS_string ("NSDate") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_enumType:
    {
      result_outResult = GALGAS_string ("<unhandled enum for transformerForTableViewAction>") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_entityType:
    {
      result_outResult = GALGAS_string ("<unhandled entity for transformerForTableViewAction>") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category Reader '@typeKind formatterStringForFormatPrinting'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_formatterStringForFormatPrinting (const GALGAS_typeKind & inObject,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_typeKind temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_stringType:
    {
      result_outResult = GALGAS_string ("%@") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_integerType:
    {
      result_outResult = GALGAS_string ("%d") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_boolType:
    {
      result_outResult = GALGAS_string ("%d") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_doubleType:
    {
      result_outResult = GALGAS_string ("%g") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_colorType:
    {
      result_outResult = GALGAS_string ("%@") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_dateType:
    {
      result_outResult = GALGAS_string ("%@") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_enumType:
    {
      result_outResult = GALGAS_string ("<internal error enum, formatterStringForFormatPrinting' >") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_entityType:
    {
      result_outResult = GALGAS_string ("<internal error entity, formatterStringForFormatPrinting' >") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category method '@toOneRelationshipList typeInventory'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_typeInventory (const GALGAS_toOneRelationshipList inObject,
                                   GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                   C_Compiler * /* inCompiler */
                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_toOneRelationshipList temp_0 = inObject ;
  cEnumerator_toOneRelationshipList enumerator_3100 (temp_0, kEnumeration_up) ;
  while (enumerator_3100.hasCurrentObject ()) {
    {
    GALGAS_unifiedTypeMap_2D_proxy joker_3203 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioUnifiedTypeMap, enumerator_3100.current_mDestinationEntityName (HERE), joker_3203 COMMA_SOURCE_FILE ("relationships.galgas", 82)) ;
    }
    enumerator_3100.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category method '@toManyRelationshipList typeInventory'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_typeInventory (const GALGAS_toManyRelationshipList inObject,
                                   GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                   C_Compiler * /* inCompiler */
                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_toManyRelationshipList temp_0 = inObject ;
  cEnumerator_toManyRelationshipList enumerator_3442 (temp_0, kEnumeration_up) ;
  while (enumerator_3442.hasCurrentObject ()) {
    {
    GALGAS_unifiedTypeMap_2D_proxy joker_3545 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioUnifiedTypeMap, enumerator_3442.current_mDestinationEntityName (HERE), joker_3545 COMMA_SOURCE_FILE ("relationships.galgas", 96)) ;
    }
    enumerator_3442.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Category method '@toOneRelationshipList buildObservablePropertyMap'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_buildObservablePropertyMap (const GALGAS_toOneRelationshipList inObject,
                                                const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                GALGAS_observablePropertyMap & ioArgument_ioObservableProperties,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_toOneRelationshipList temp_0 = inObject ;
  cEnumerator_toOneRelationshipList enumerator_4091 (temp_0, kEnumeration_up) ;
  while (enumerator_4091.hasCurrentObject ()) {
    GALGAS_typeKind var_type ;
    constinArgument_inUnifiedTypeMap.method_searchKey (enumerator_4091.current_mDestinationEntityName (HERE), var_type, inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 114)) ;
    switch (var_type.enumValue ()) {
    case GALGAS_typeKind::kNotBuilt:
      break ;
    case GALGAS_typeKind::kEnum_boolType:
    case GALGAS_typeKind::kEnum_integerType:
    case GALGAS_typeKind::kEnum_stringType:
    case GALGAS_typeKind::kEnum_colorType:
    case GALGAS_typeKind::kEnum_dateType:
    case GALGAS_typeKind::kEnum_doubleType:
      {
        GALGAS_location location_1 (enumerator_4091.current_mDestinationEntityName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_1, GALGAS_string ("a simple type cannot be used as entitytype")  COMMA_SOURCE_FILE ("relationships.galgas", 118)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_enumType:
      {
        GALGAS_location location_2 (enumerator_4091.current_mDestinationEntityName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_2, GALGAS_string ("an enumeration type cannot be used as entitytype")  COMMA_SOURCE_FILE ("relationships.galgas", 120)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_entityType:
      {
      }
      break ;
    }
    {
    ioArgument_ioObservableProperties.modifier_insertKey (enumerator_4091.current_mToOneRelationshipName (HERE), var_type, GALGAS_propertyKind::constructor_stored (SOURCE_FILE ("relationships.galgas", 127)), GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("relationships.galgas", 128)), enumerator_4091.current_mInverseRelationshipName (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 124)) ;
    }
    enumerator_4091.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Category method '@toManyRelationshipList buildObservablePropertyMap'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_buildObservablePropertyMap (const GALGAS_toManyRelationshipList inObject,
                                                const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                GALGAS_observablePropertyMap & ioArgument_ioObservableProperties,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_toManyRelationshipList temp_0 = inObject ;
  cEnumerator_toManyRelationshipList enumerator_5011 (temp_0, kEnumeration_up) ;
  while (enumerator_5011.hasCurrentObject ()) {
    GALGAS_typeKind var_type ;
    constinArgument_inUnifiedTypeMap.method_searchKey (enumerator_5011.current_mDestinationEntityName (HERE), var_type, inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 142)) ;
    switch (var_type.enumValue ()) {
    case GALGAS_typeKind::kNotBuilt:
      break ;
    case GALGAS_typeKind::kEnum_boolType:
    case GALGAS_typeKind::kEnum_integerType:
    case GALGAS_typeKind::kEnum_stringType:
    case GALGAS_typeKind::kEnum_colorType:
    case GALGAS_typeKind::kEnum_dateType:
    case GALGAS_typeKind::kEnum_doubleType:
      {
        GALGAS_location location_1 (enumerator_5011.current_mDestinationEntityName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_1, GALGAS_string ("a simple type cannot be used as entitytype")  COMMA_SOURCE_FILE ("relationships.galgas", 146)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_enumType:
      {
        GALGAS_location location_2 (enumerator_5011.current_mDestinationEntityName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_2, GALGAS_string ("an enumeration type cannot be used as entitytype")  COMMA_SOURCE_FILE ("relationships.galgas", 148)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_entityType:
      {
      }
      break ;
    }
    {
    ioArgument_ioObservableProperties.modifier_insertKey (enumerator_5011.current_mToManyRelationshipName (HERE), var_type, GALGAS_propertyKind::constructor_stored (SOURCE_FILE ("relationships.galgas", 155)), GALGAS_propertyMultiplicity::constructor_collection (SOURCE_FILE ("relationships.galgas", 156)), enumerator_5011.current_mInverseRelationshipName (HERE).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 152)) ;
    }
    enumerator_5011.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category method '@toOneRelationshipList semanticAnalysis'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_semanticAnalysis (const GALGAS_toOneRelationshipList inObject,
                                      const GALGAS_semanticContext constinArgument_inSemanticContext,
                                      GALGAS_toOneEntityRelationshipListForGeneration & outArgument_outToOneEntityRelationshipListForGeneration,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outToOneEntityRelationshipListForGeneration.drop () ; // Release 'out' argument
  outArgument_outToOneEntityRelationshipListForGeneration = GALGAS_toOneEntityRelationshipListForGeneration::constructor_emptyList (SOURCE_FILE ("relationships.galgas", 170)) ;
  const GALGAS_toOneRelationshipList temp_0 = inObject ;
  cEnumerator_toOneRelationshipList enumerator_6259 (temp_0, kEnumeration_up) ;
  while (enumerator_6259.hasCurrentObject ()) {
    GALGAS_typeKind var_type ;
    constinArgument_inSemanticContext.mAttribute_mUnifiedTypeMap.method_searchKey (enumerator_6259.current_mDestinationEntityName (HERE), var_type, inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 172)) ;
    GALGAS_observablePropertyMap var_destinationEntityObservablePropertyMap ;
    constinArgument_inSemanticContext.mAttribute_mEntityObservablePropertyMap.method_searchKey (enumerator_6259.current_mDestinationEntityName (HERE), var_destinationEntityObservablePropertyMap, inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 173)) ;
    outArgument_outToOneEntityRelationshipListForGeneration.addAssign_operation (enumerator_6259.current_mToOneRelationshipName (HERE).mAttribute_string, var_type, enumerator_6259.current_mInverseRelationshipName (HERE).mAttribute_string, enumerator_6259.current_mInverseRelationMultiplicity (HERE), var_destinationEntityObservablePropertyMap  COMMA_SOURCE_FILE ("relationships.galgas", 177)) ;
    GALGAS_typeKind var_oppositeType ;
    GALGAS_propertyKind var_oppositeKind ;
    GALGAS_propertyMultiplicity var_oppositeMultiplicity ;
    GALGAS_string var_oppositeOfOpposite ;
    var_destinationEntityObservablePropertyMap.method_searchForInverseRelationship (enumerator_6259.current_mInverseRelationshipName (HERE), var_oppositeType, var_oppositeKind, var_oppositeMultiplicity, var_oppositeOfOpposite, inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 184)) ;
    switch (var_oppositeType.enumValue ()) {
    case GALGAS_typeKind::kNotBuilt:
      break ;
    case GALGAS_typeKind::kEnum_boolType:
    case GALGAS_typeKind::kEnum_integerType:
    case GALGAS_typeKind::kEnum_stringType:
    case GALGAS_typeKind::kEnum_colorType:
    case GALGAS_typeKind::kEnum_dateType:
    case GALGAS_typeKind::kEnum_doubleType:
      {
        GALGAS_location location_1 (enumerator_6259.current_mInverseRelationshipName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_1, GALGAS_string ("the opposite type cannot be used as entitytype")  COMMA_SOURCE_FILE ("relationships.galgas", 194)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_enumType:
      {
        GALGAS_location location_2 (enumerator_6259.current_mInverseRelationshipName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_2, GALGAS_string ("the opposite type cannot be used as entitytype")  COMMA_SOURCE_FILE ("relationships.galgas", 196)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_entityType:
      {
      }
      break ;
    }
    const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_oppositeKind.objectCompare (GALGAS_propertyKind::constructor_transient (SOURCE_FILE ("relationships.galgas", 199)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_location location_4 (enumerator_6259.current_mInverseRelationshipName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_4, GALGAS_string ("this relationship is transient, should be stored")  COMMA_SOURCE_FILE ("relationships.galgas", 200)) ;
    }
    const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, enumerator_6259.current_mInverseRelationMultiplicity (HERE).objectCompare (var_oppositeMultiplicity)).boolEnum () ;
    if (kBoolTrue == test_5) {
      GALGAS_location location_6 (enumerator_6259.current_mInverseRelationshipName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_6, GALGAS_string ("inverse relationship multiplicity error (toMany <-> toOne)")  COMMA_SOURCE_FILE ("relationships.galgas", 203)) ;
    }
    const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, var_oppositeOfOpposite.objectCompare (enumerator_6259.current_mToOneRelationshipName (HERE).mAttribute_string)).boolEnum () ;
    if (kBoolTrue == test_7) {
      GALGAS_location location_8 (enumerator_6259.current_mInverseRelationshipName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_8, GALGAS_string ("inverse relationship does not name '").add_operation (enumerator_6259.current_mToOneRelationshipName (HERE).reader_string (SOURCE_FILE ("relationships.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 206)).add_operation (GALGAS_string ("' as opposite"), inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 207))  COMMA_SOURCE_FILE ("relationships.galgas", 206)) ;
    }
    enumerator_6259.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category method '@toManyRelationshipList semanticAnalysis'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_semanticAnalysis (const GALGAS_toManyRelationshipList inObject,
                                      const GALGAS_semanticContext constinArgument_inSemanticContext,
                                      GALGAS_toManyEntityRelationshipListForGeneration & outArgument_outToManyEntityRelationshipListForGeneration,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outToManyEntityRelationshipListForGeneration.drop () ; // Release 'out' argument
  outArgument_outToManyEntityRelationshipListForGeneration = GALGAS_toManyEntityRelationshipListForGeneration::constructor_emptyList (SOURCE_FILE ("relationships.galgas", 218)) ;
  const GALGAS_toManyRelationshipList temp_0 = inObject ;
  cEnumerator_toManyRelationshipList enumerator_8329 (temp_0, kEnumeration_up) ;
  while (enumerator_8329.hasCurrentObject ()) {
    GALGAS_typeKind var_type ;
    constinArgument_inSemanticContext.mAttribute_mUnifiedTypeMap.method_searchKey (enumerator_8329.current_mDestinationEntityName (HERE), var_type, inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 220)) ;
    GALGAS_observablePropertyMap var_destinationEntityObservablePropertyMap ;
    constinArgument_inSemanticContext.mAttribute_mEntityObservablePropertyMap.method_searchKey (enumerator_8329.current_mDestinationEntityName (HERE), var_destinationEntityObservablePropertyMap, inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 221)) ;
    outArgument_outToManyEntityRelationshipListForGeneration.addAssign_operation (enumerator_8329.current_mToManyRelationshipName (HERE).mAttribute_string, var_type, enumerator_8329.current_mInverseRelationshipName (HERE).mAttribute_string, var_destinationEntityObservablePropertyMap  COMMA_SOURCE_FILE ("relationships.galgas", 225)) ;
    GALGAS_typeKind var_oppositeType ;
    GALGAS_propertyKind var_oppositeKind ;
    GALGAS_propertyMultiplicity var_oppositeMultiplicity ;
    GALGAS_string var_oppositeOfOpposite ;
    var_destinationEntityObservablePropertyMap.method_searchForInverseRelationship (enumerator_8329.current_mInverseRelationshipName (HERE), var_oppositeType, var_oppositeKind, var_oppositeMultiplicity, var_oppositeOfOpposite, inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 231)) ;
    switch (var_oppositeType.enumValue ()) {
    case GALGAS_typeKind::kNotBuilt:
      break ;
    case GALGAS_typeKind::kEnum_boolType:
    case GALGAS_typeKind::kEnum_integerType:
    case GALGAS_typeKind::kEnum_stringType:
    case GALGAS_typeKind::kEnum_colorType:
    case GALGAS_typeKind::kEnum_dateType:
    case GALGAS_typeKind::kEnum_doubleType:
      {
        GALGAS_location location_1 (enumerator_8329.current_mInverseRelationshipName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_1, GALGAS_string ("the opposite type cannot be used as entitytype")  COMMA_SOURCE_FILE ("relationships.galgas", 240)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_enumType:
      {
        GALGAS_location location_2 (enumerator_8329.current_mInverseRelationshipName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_2, GALGAS_string ("the opposite type cannot be used as entitytype")  COMMA_SOURCE_FILE ("relationships.galgas", 242)) ;
      }
      break ;
    case GALGAS_typeKind::kEnum_entityType:
      {
      }
      break ;
    }
    const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_oppositeKind.objectCompare (GALGAS_propertyKind::constructor_transient (SOURCE_FILE ("relationships.galgas", 245)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_location location_4 (enumerator_8329.current_mInverseRelationshipName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_4, GALGAS_string ("this relationship is transient, should be stored")  COMMA_SOURCE_FILE ("relationships.galgas", 246)) ;
    }
    const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, var_oppositeMultiplicity.objectCompare (GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("relationships.galgas", 248)))).boolEnum () ;
    if (kBoolTrue == test_5) {
      GALGAS_location location_6 (enumerator_8329.current_mInverseRelationshipName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_6, GALGAS_string ("the inverse relationship should be toOne")  COMMA_SOURCE_FILE ("relationships.galgas", 249)) ;
    }
    const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, var_oppositeOfOpposite.objectCompare (enumerator_8329.current_mToManyRelationshipName (HERE).mAttribute_string)).boolEnum () ;
    if (kBoolTrue == test_7) {
      GALGAS_location location_8 (enumerator_8329.current_mInverseRelationshipName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_8, GALGAS_string ("inverse relationship does not name '").add_operation (enumerator_8329.current_mToManyRelationshipName (HERE).reader_string (SOURCE_FILE ("relationships.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 252)).add_operation (GALGAS_string ("' as opposite"), inCompiler COMMA_SOURCE_FILE ("relationships.galgas", 253))  COMMA_SOURCE_FILE ("relationships.galgas", 252)) ;
    }
    enumerator_8329.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Category Reader '@typeKind swiftTypeName'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_swiftTypeName (const GALGAS_typeKind & inObject,
                                            C_Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_typeKind temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_stringType:
    {
      result_outResult = GALGAS_string ("String") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_boolType:
    {
      result_outResult = GALGAS_string ("Bool") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_colorType:
    {
      result_outResult = GALGAS_string ("NSColor") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_dateType:
    {
      result_outResult = GALGAS_string ("NSDate") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_doubleType:
    {
      result_outResult = GALGAS_string ("Double") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_entityType:
    {
      const cEnumAssociatedValues_typeKind_entityType * extractPtr_5308 = (const cEnumAssociatedValues_typeKind_entityType *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_entityName = extractPtr_5308->mAssociatedValue0 ;
      result_outResult = extractedValue_entityName ;
    }
    break ;
  case GALGAS_typeKind::kEnum_enumType:
    {
      const cEnumAssociatedValues_typeKind_enumType * extractPtr_5376 = (const cEnumAssociatedValues_typeKind_enumType *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_enumTypeName = extractPtr_5376->mAssociatedValue0 ;
      result_outResult = extractedValue_enumTypeName ;
    }
    break ;
  case GALGAS_typeKind::kEnum_integerType:
    {
      result_outResult = GALGAS_string ("Int") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext::GALGAS_semanticContext (void) :
mAttribute_mUnifiedTypeMap (),
mAttribute_mOutletClassMap (),
mAttribute_mBindingSpecificationMap (),
mAttribute_mPrefsObservablePropertyMap (),
mAttribute_mDocumentObservablePropertyMap (),
mAttribute_mEntityObservablePropertyMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext::~ GALGAS_semanticContext (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext::GALGAS_semanticContext (const GALGAS_unifiedTypeMap & inOperand0,
                                                const GALGAS_outletClassMap & inOperand1,
                                                const GALGAS_bindingSpecificationMap & inOperand2,
                                                const GALGAS_prefsObservablePropertyMap & inOperand3,
                                                const GALGAS_documentObservablePropertyMap & inOperand4,
                                                const GALGAS_entityObservablePropertyMap & inOperand5) :
mAttribute_mUnifiedTypeMap (inOperand0),
mAttribute_mOutletClassMap (inOperand1),
mAttribute_mBindingSpecificationMap (inOperand2),
mAttribute_mPrefsObservablePropertyMap (inOperand3),
mAttribute_mDocumentObservablePropertyMap (inOperand4),
mAttribute_mEntityObservablePropertyMap (inOperand5) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext GALGAS_semanticContext::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_semanticContext (GALGAS_unifiedTypeMap::constructor_emptyMap (HERE),
                                 GALGAS_outletClassMap::constructor_emptyMap (HERE),
                                 GALGAS_bindingSpecificationMap::constructor_emptyMap (HERE),
                                 GALGAS_prefsObservablePropertyMap::constructor_emptyMap (HERE),
                                 GALGAS_documentObservablePropertyMap::constructor_emptyMap (HERE),
                                 GALGAS_entityObservablePropertyMap::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticContext GALGAS_semanticContext::constructor_new (const GALGAS_unifiedTypeMap & inOperand0,
                                                                const GALGAS_outletClassMap & inOperand1,
                                                                const GALGAS_bindingSpecificationMap & inOperand2,
                                                                const GALGAS_prefsObservablePropertyMap & inOperand3,
                                                                const GALGAS_documentObservablePropertyMap & inOperand4,
                                                                const GALGAS_entityObservablePropertyMap & inOperand5 
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticContext result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_semanticContext (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_semanticContext::objectCompare (const GALGAS_semanticContext & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mUnifiedTypeMap.objectCompare (inOperand.mAttribute_mUnifiedTypeMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOutletClassMap.objectCompare (inOperand.mAttribute_mOutletClassMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBindingSpecificationMap.objectCompare (inOperand.mAttribute_mBindingSpecificationMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPrefsObservablePropertyMap.objectCompare (inOperand.mAttribute_mPrefsObservablePropertyMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDocumentObservablePropertyMap.objectCompare (inOperand.mAttribute_mDocumentObservablePropertyMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEntityObservablePropertyMap.objectCompare (inOperand.mAttribute_mEntityObservablePropertyMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_semanticContext::isValid (void) const {
  return mAttribute_mUnifiedTypeMap.isValid () && mAttribute_mOutletClassMap.isValid () && mAttribute_mBindingSpecificationMap.isValid () && mAttribute_mPrefsObservablePropertyMap.isValid () && mAttribute_mDocumentObservablePropertyMap.isValid () && mAttribute_mEntityObservablePropertyMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticContext::drop (void) {
  mAttribute_mUnifiedTypeMap.drop () ;
  mAttribute_mOutletClassMap.drop () ;
  mAttribute_mBindingSpecificationMap.drop () ;
  mAttribute_mPrefsObservablePropertyMap.drop () ;
  mAttribute_mDocumentObservablePropertyMap.drop () ;
  mAttribute_mEntityObservablePropertyMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticContext::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "<struct @semanticContext:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mUnifiedTypeMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOutletClassMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBindingSpecificationMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPrefsObservablePropertyMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDocumentObservablePropertyMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEntityObservablePropertyMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap GALGAS_semanticContext::reader_mUnifiedTypeMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mUnifiedTypeMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassMap GALGAS_semanticContext::reader_mOutletClassMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutletClassMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingSpecificationMap GALGAS_semanticContext::reader_mBindingSpecificationMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBindingSpecificationMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefsObservablePropertyMap GALGAS_semanticContext::reader_mPrefsObservablePropertyMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPrefsObservablePropertyMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_documentObservablePropertyMap GALGAS_semanticContext::reader_mDocumentObservablePropertyMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDocumentObservablePropertyMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityObservablePropertyMap GALGAS_semanticContext::reader_mEntityObservablePropertyMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEntityObservablePropertyMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @semanticContext type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticContext ("semanticContext",
                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_semanticContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticContext ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_semanticContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticContext (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumListForGeneration_2D_element::GALGAS_enumListForGeneration_2D_element (void) :
mAttribute_mEnumName (),
mAttribute_mEnumConstantList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumListForGeneration_2D_element::~ GALGAS_enumListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumListForGeneration_2D_element::GALGAS_enumListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                  const GALGAS_lstringlist & inOperand1) :
mAttribute_mEnumName (inOperand0),
mAttribute_mEnumConstantList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumListForGeneration_2D_element GALGAS_enumListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_enumListForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                  GALGAS_lstringlist::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumListForGeneration_2D_element GALGAS_enumListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                  const GALGAS_lstringlist & inOperand1 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_enumListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_enumListForGeneration_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_enumListForGeneration_2D_element::objectCompare (const GALGAS_enumListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mEnumName.objectCompare (inOperand.mAttribute_mEnumName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEnumConstantList.objectCompare (inOperand.mAttribute_mEnumConstantList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_enumListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mEnumName.isValid () && mAttribute_mEnumConstantList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumListForGeneration_2D_element::drop (void) {
  mAttribute_mEnumName.drop () ;
  mAttribute_mEnumConstantList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumListForGeneration_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @enumListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mEnumName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEnumConstantList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_enumListForGeneration_2D_element::reader_mEnumName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEnumName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_enumListForGeneration_2D_element::reader_mEnumConstantList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEnumConstantList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @enumListForGeneration-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumListForGeneration_2D_element ("enumListForGeneration-element",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_enumListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_enumListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumListForGeneration_2D_element GALGAS_enumListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_enumListForGeneration_2D_element result ;
  const GALGAS_enumListForGeneration_2D_element * p = (const GALGAS_enumListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_documentListForGeneration_2D_element::GALGAS_documentListForGeneration_2D_element (void) :
mAttribute_mDocumentName (),
mAttribute_mRootEntityName (),
mAttribute_mSimpleStoredPropertyListForGeneration (),
mAttribute_mTransientListForGeneration (),
mAttribute_mOutletMap (),
mAttribute_mTargetActionList (),
mAttribute_mRegularBindingsGenerationList (),
mAttribute_multipleBindingGenerationList (),
mAttribute_mDocumentArrayControllerForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_documentListForGeneration_2D_element::~ GALGAS_documentListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_documentListForGeneration_2D_element::GALGAS_documentListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                          const GALGAS_string & inOperand1,
                                                                                          const GALGAS_simpleStoredPropertyListForGeneration & inOperand2,
                                                                                          const GALGAS_transientDefinitionListForGeneration & inOperand3,
                                                                                          const GALGAS_decoratedOutletMap & inOperand4,
                                                                                          const GALGAS_actionBindingListForGeneration & inOperand5,
                                                                                          const GALGAS_regularBindingsGenerationList & inOperand6,
                                                                                          const GALGAS_multipleBindingGenerationList & inOperand7,
                                                                                          const GALGAS_arrayControllerForGeneration & inOperand8) :
mAttribute_mDocumentName (inOperand0),
mAttribute_mRootEntityName (inOperand1),
mAttribute_mSimpleStoredPropertyListForGeneration (inOperand2),
mAttribute_mTransientListForGeneration (inOperand3),
mAttribute_mOutletMap (inOperand4),
mAttribute_mTargetActionList (inOperand5),
mAttribute_mRegularBindingsGenerationList (inOperand6),
mAttribute_multipleBindingGenerationList (inOperand7),
mAttribute_mDocumentArrayControllerForGeneration (inOperand8) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_documentListForGeneration_2D_element GALGAS_documentListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_documentListForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                      GALGAS_string::constructor_default (HERE),
                                                      GALGAS_simpleStoredPropertyListForGeneration::constructor_emptyList (HERE),
                                                      GALGAS_transientDefinitionListForGeneration::constructor_emptyList (HERE),
                                                      GALGAS_decoratedOutletMap::constructor_emptyMap (HERE),
                                                      GALGAS_actionBindingListForGeneration::constructor_emptyList (HERE),
                                                      GALGAS_regularBindingsGenerationList::constructor_emptyList (HERE),
                                                      GALGAS_multipleBindingGenerationList::constructor_emptyList (HERE),
                                                      GALGAS_arrayControllerForGeneration::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_documentListForGeneration_2D_element GALGAS_documentListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                          const GALGAS_string & inOperand1,
                                                                                                          const GALGAS_simpleStoredPropertyListForGeneration & inOperand2,
                                                                                                          const GALGAS_transientDefinitionListForGeneration & inOperand3,
                                                                                                          const GALGAS_decoratedOutletMap & inOperand4,
                                                                                                          const GALGAS_actionBindingListForGeneration & inOperand5,
                                                                                                          const GALGAS_regularBindingsGenerationList & inOperand6,
                                                                                                          const GALGAS_multipleBindingGenerationList & inOperand7,
                                                                                                          const GALGAS_arrayControllerForGeneration & inOperand8 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_documentListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid ()) {
    result = GALGAS_documentListForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_documentListForGeneration_2D_element::objectCompare (const GALGAS_documentListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mDocumentName.objectCompare (inOperand.mAttribute_mDocumentName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRootEntityName.objectCompare (inOperand.mAttribute_mRootEntityName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSimpleStoredPropertyListForGeneration.objectCompare (inOperand.mAttribute_mSimpleStoredPropertyListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTransientListForGeneration.objectCompare (inOperand.mAttribute_mTransientListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOutletMap.objectCompare (inOperand.mAttribute_mOutletMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTargetActionList.objectCompare (inOperand.mAttribute_mTargetActionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRegularBindingsGenerationList.objectCompare (inOperand.mAttribute_mRegularBindingsGenerationList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_multipleBindingGenerationList.objectCompare (inOperand.mAttribute_multipleBindingGenerationList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDocumentArrayControllerForGeneration.objectCompare (inOperand.mAttribute_mDocumentArrayControllerForGeneration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_documentListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mDocumentName.isValid () && mAttribute_mRootEntityName.isValid () && mAttribute_mSimpleStoredPropertyListForGeneration.isValid () && mAttribute_mTransientListForGeneration.isValid () && mAttribute_mOutletMap.isValid () && mAttribute_mTargetActionList.isValid () && mAttribute_mRegularBindingsGenerationList.isValid () && mAttribute_multipleBindingGenerationList.isValid () && mAttribute_mDocumentArrayControllerForGeneration.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_documentListForGeneration_2D_element::drop (void) {
  mAttribute_mDocumentName.drop () ;
  mAttribute_mRootEntityName.drop () ;
  mAttribute_mSimpleStoredPropertyListForGeneration.drop () ;
  mAttribute_mTransientListForGeneration.drop () ;
  mAttribute_mOutletMap.drop () ;
  mAttribute_mTargetActionList.drop () ;
  mAttribute_mRegularBindingsGenerationList.drop () ;
  mAttribute_multipleBindingGenerationList.drop () ;
  mAttribute_mDocumentArrayControllerForGeneration.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_documentListForGeneration_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @documentListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mDocumentName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRootEntityName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSimpleStoredPropertyListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTransientListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOutletMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTargetActionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegularBindingsGenerationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_multipleBindingGenerationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDocumentArrayControllerForGeneration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_documentListForGeneration_2D_element::reader_mDocumentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDocumentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_documentListForGeneration_2D_element::reader_mRootEntityName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRootEntityName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_simpleStoredPropertyListForGeneration GALGAS_documentListForGeneration_2D_element::reader_mSimpleStoredPropertyListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSimpleStoredPropertyListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientDefinitionListForGeneration GALGAS_documentListForGeneration_2D_element::reader_mTransientListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTransientListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedOutletMap GALGAS_documentListForGeneration_2D_element::reader_mOutletMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutletMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionBindingListForGeneration GALGAS_documentListForGeneration_2D_element::reader_mTargetActionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetActionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_regularBindingsGenerationList GALGAS_documentListForGeneration_2D_element::reader_mRegularBindingsGenerationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegularBindingsGenerationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleBindingGenerationList GALGAS_documentListForGeneration_2D_element::reader_multipleBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_multipleBindingGenerationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerForGeneration GALGAS_documentListForGeneration_2D_element::reader_mDocumentArrayControllerForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDocumentArrayControllerForGeneration ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @documentListForGeneration-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_documentListForGeneration_2D_element ("documentListForGeneration-element",
                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_documentListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_documentListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_documentListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_documentListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_documentListForGeneration_2D_element GALGAS_documentListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_documentListForGeneration_2D_element result ;
  const GALGAS_documentListForGeneration_2D_element * p = (const GALGAS_documentListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_documentListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("documentListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityListForGeneration_2D_element::GALGAS_entityListForGeneration_2D_element (void) :
mAttribute_mEntityName (),
mAttribute_mSuperEntityName (),
mAttribute_mSimpleStoredPropertyListForGeneration (),
mAttribute_mDecoratedTransientListForGeneration (),
mAttribute_mToOneEntityRelationshipList (),
mAttribute_mToManyEntityRelationshipList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityListForGeneration_2D_element::~ GALGAS_entityListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityListForGeneration_2D_element::GALGAS_entityListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                      const GALGAS_string & inOperand1,
                                                                                      const GALGAS_simpleStoredPropertyListForGeneration & inOperand2,
                                                                                      const GALGAS_transientDefinitionListForGeneration & inOperand3,
                                                                                      const GALGAS_toOneEntityRelationshipListForGeneration & inOperand4,
                                                                                      const GALGAS_toManyEntityRelationshipListForGeneration & inOperand5) :
mAttribute_mEntityName (inOperand0),
mAttribute_mSuperEntityName (inOperand1),
mAttribute_mSimpleStoredPropertyListForGeneration (inOperand2),
mAttribute_mDecoratedTransientListForGeneration (inOperand3),
mAttribute_mToOneEntityRelationshipList (inOperand4),
mAttribute_mToManyEntityRelationshipList (inOperand5) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityListForGeneration_2D_element GALGAS_entityListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_entityListForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                    GALGAS_string::constructor_default (HERE),
                                                    GALGAS_simpleStoredPropertyListForGeneration::constructor_emptyList (HERE),
                                                    GALGAS_transientDefinitionListForGeneration::constructor_emptyList (HERE),
                                                    GALGAS_toOneEntityRelationshipListForGeneration::constructor_emptyList (HERE),
                                                    GALGAS_toManyEntityRelationshipListForGeneration::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityListForGeneration_2D_element GALGAS_entityListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                      const GALGAS_string & inOperand1,
                                                                                                      const GALGAS_simpleStoredPropertyListForGeneration & inOperand2,
                                                                                                      const GALGAS_transientDefinitionListForGeneration & inOperand3,
                                                                                                      const GALGAS_toOneEntityRelationshipListForGeneration & inOperand4,
                                                                                                      const GALGAS_toManyEntityRelationshipListForGeneration & inOperand5 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_entityListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_entityListForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_entityListForGeneration_2D_element::objectCompare (const GALGAS_entityListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mEntityName.objectCompare (inOperand.mAttribute_mEntityName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSuperEntityName.objectCompare (inOperand.mAttribute_mSuperEntityName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSimpleStoredPropertyListForGeneration.objectCompare (inOperand.mAttribute_mSimpleStoredPropertyListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDecoratedTransientListForGeneration.objectCompare (inOperand.mAttribute_mDecoratedTransientListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mToOneEntityRelationshipList.objectCompare (inOperand.mAttribute_mToOneEntityRelationshipList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mToManyEntityRelationshipList.objectCompare (inOperand.mAttribute_mToManyEntityRelationshipList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_entityListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mEntityName.isValid () && mAttribute_mSuperEntityName.isValid () && mAttribute_mSimpleStoredPropertyListForGeneration.isValid () && mAttribute_mDecoratedTransientListForGeneration.isValid () && mAttribute_mToOneEntityRelationshipList.isValid () && mAttribute_mToManyEntityRelationshipList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_entityListForGeneration_2D_element::drop (void) {
  mAttribute_mEntityName.drop () ;
  mAttribute_mSuperEntityName.drop () ;
  mAttribute_mSimpleStoredPropertyListForGeneration.drop () ;
  mAttribute_mDecoratedTransientListForGeneration.drop () ;
  mAttribute_mToOneEntityRelationshipList.drop () ;
  mAttribute_mToManyEntityRelationshipList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_entityListForGeneration_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @entityListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mEntityName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSuperEntityName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSimpleStoredPropertyListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDecoratedTransientListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mToOneEntityRelationshipList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mToManyEntityRelationshipList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_entityListForGeneration_2D_element::reader_mEntityName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEntityName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_entityListForGeneration_2D_element::reader_mSuperEntityName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSuperEntityName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_simpleStoredPropertyListForGeneration GALGAS_entityListForGeneration_2D_element::reader_mSimpleStoredPropertyListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSimpleStoredPropertyListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientDefinitionListForGeneration GALGAS_entityListForGeneration_2D_element::reader_mDecoratedTransientListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDecoratedTransientListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toOneEntityRelationshipListForGeneration GALGAS_entityListForGeneration_2D_element::reader_mToOneEntityRelationshipList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mToOneEntityRelationshipList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toManyEntityRelationshipListForGeneration GALGAS_entityListForGeneration_2D_element::reader_mToManyEntityRelationshipList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mToManyEntityRelationshipList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @entityListForGeneration-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_entityListForGeneration_2D_element ("entityListForGeneration-element",
                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_entityListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_entityListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_entityListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityListForGeneration_2D_element GALGAS_entityListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_entityListForGeneration_2D_element result ;
  const GALGAS_entityListForGeneration_2D_element * p = (const GALGAS_entityListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_entityListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("entityListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_preferenceListForGeneration_2D_element::GALGAS_preferenceListForGeneration_2D_element (void) :
mAttribute_mPreferenceName (),
mAttribute_mSimpleStoredPropertyListForGeneration (),
mAttribute_mTransientDefinitionListForGeneration (),
mAttribute_mRegularBindingsGenerationList (),
mAttribute_mMultipleBindingGenerationList (),
mAttribute_mActionBindingListForGeneration (),
mAttribute_mOutletMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_preferenceListForGeneration_2D_element::~ GALGAS_preferenceListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_preferenceListForGeneration_2D_element::GALGAS_preferenceListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                              const GALGAS_simpleStoredPropertyListForGeneration & inOperand1,
                                                                                              const GALGAS_transientDefinitionListForGeneration & inOperand2,
                                                                                              const GALGAS_regularBindingsGenerationList & inOperand3,
                                                                                              const GALGAS_multipleBindingGenerationList & inOperand4,
                                                                                              const GALGAS_actionBindingListForGeneration & inOperand5,
                                                                                              const GALGAS_decoratedOutletMap & inOperand6) :
mAttribute_mPreferenceName (inOperand0),
mAttribute_mSimpleStoredPropertyListForGeneration (inOperand1),
mAttribute_mTransientDefinitionListForGeneration (inOperand2),
mAttribute_mRegularBindingsGenerationList (inOperand3),
mAttribute_mMultipleBindingGenerationList (inOperand4),
mAttribute_mActionBindingListForGeneration (inOperand5),
mAttribute_mOutletMap (inOperand6) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_preferenceListForGeneration_2D_element GALGAS_preferenceListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_preferenceListForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                        GALGAS_simpleStoredPropertyListForGeneration::constructor_emptyList (HERE),
                                                        GALGAS_transientDefinitionListForGeneration::constructor_emptyList (HERE),
                                                        GALGAS_regularBindingsGenerationList::constructor_emptyList (HERE),
                                                        GALGAS_multipleBindingGenerationList::constructor_emptyList (HERE),
                                                        GALGAS_actionBindingListForGeneration::constructor_emptyList (HERE),
                                                        GALGAS_decoratedOutletMap::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_preferenceListForGeneration_2D_element GALGAS_preferenceListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                              const GALGAS_simpleStoredPropertyListForGeneration & inOperand1,
                                                                                                              const GALGAS_transientDefinitionListForGeneration & inOperand2,
                                                                                                              const GALGAS_regularBindingsGenerationList & inOperand3,
                                                                                                              const GALGAS_multipleBindingGenerationList & inOperand4,
                                                                                                              const GALGAS_actionBindingListForGeneration & inOperand5,
                                                                                                              const GALGAS_decoratedOutletMap & inOperand6 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_preferenceListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_preferenceListForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_preferenceListForGeneration_2D_element::objectCompare (const GALGAS_preferenceListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mPreferenceName.objectCompare (inOperand.mAttribute_mPreferenceName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSimpleStoredPropertyListForGeneration.objectCompare (inOperand.mAttribute_mSimpleStoredPropertyListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTransientDefinitionListForGeneration.objectCompare (inOperand.mAttribute_mTransientDefinitionListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRegularBindingsGenerationList.objectCompare (inOperand.mAttribute_mRegularBindingsGenerationList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMultipleBindingGenerationList.objectCompare (inOperand.mAttribute_mMultipleBindingGenerationList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mActionBindingListForGeneration.objectCompare (inOperand.mAttribute_mActionBindingListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOutletMap.objectCompare (inOperand.mAttribute_mOutletMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_preferenceListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mPreferenceName.isValid () && mAttribute_mSimpleStoredPropertyListForGeneration.isValid () && mAttribute_mTransientDefinitionListForGeneration.isValid () && mAttribute_mRegularBindingsGenerationList.isValid () && mAttribute_mMultipleBindingGenerationList.isValid () && mAttribute_mActionBindingListForGeneration.isValid () && mAttribute_mOutletMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_preferenceListForGeneration_2D_element::drop (void) {
  mAttribute_mPreferenceName.drop () ;
  mAttribute_mSimpleStoredPropertyListForGeneration.drop () ;
  mAttribute_mTransientDefinitionListForGeneration.drop () ;
  mAttribute_mRegularBindingsGenerationList.drop () ;
  mAttribute_mMultipleBindingGenerationList.drop () ;
  mAttribute_mActionBindingListForGeneration.drop () ;
  mAttribute_mOutletMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_preferenceListForGeneration_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @preferenceListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mPreferenceName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSimpleStoredPropertyListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTransientDefinitionListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegularBindingsGenerationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMultipleBindingGenerationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mActionBindingListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOutletMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_preferenceListForGeneration_2D_element::reader_mPreferenceName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPreferenceName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_simpleStoredPropertyListForGeneration GALGAS_preferenceListForGeneration_2D_element::reader_mSimpleStoredPropertyListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSimpleStoredPropertyListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientDefinitionListForGeneration GALGAS_preferenceListForGeneration_2D_element::reader_mTransientDefinitionListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTransientDefinitionListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_regularBindingsGenerationList GALGAS_preferenceListForGeneration_2D_element::reader_mRegularBindingsGenerationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegularBindingsGenerationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleBindingGenerationList GALGAS_preferenceListForGeneration_2D_element::reader_mMultipleBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMultipleBindingGenerationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionBindingListForGeneration GALGAS_preferenceListForGeneration_2D_element::reader_mActionBindingListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActionBindingListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedOutletMap GALGAS_preferenceListForGeneration_2D_element::reader_mOutletMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutletMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @preferenceListForGeneration-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_preferenceListForGeneration_2D_element ("preferenceListForGeneration-element",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_preferenceListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_preferenceListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_preferenceListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_preferenceListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_preferenceListForGeneration_2D_element GALGAS_preferenceListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_preferenceListForGeneration_2D_element result ;
  const GALGAS_preferenceListForGeneration_2D_element * p = (const GALGAS_preferenceListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_preferenceListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("preferenceListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingSpecificationListMap_2D_element::GALGAS_bindingSpecificationListMap_2D_element (void) :
mAttribute_key (),
mAttribute_mList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingSpecificationListMap_2D_element::~ GALGAS_bindingSpecificationListMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingSpecificationListMap_2D_element::GALGAS_bindingSpecificationListMap_2D_element (const GALGAS_string & inOperand0,
                                                                                              const GALGAS_outletClassBindingSpecificationList & inOperand1) :
mAttribute_key (inOperand0),
mAttribute_mList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingSpecificationListMap_2D_element GALGAS_bindingSpecificationListMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_bindingSpecificationListMap_2D_element (GALGAS_string::constructor_default (HERE),
                                                        GALGAS_outletClassBindingSpecificationList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingSpecificationListMap_2D_element GALGAS_bindingSpecificationListMap_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                              const GALGAS_outletClassBindingSpecificationList & inOperand1 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bindingSpecificationListMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_bindingSpecificationListMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_bindingSpecificationListMap_2D_element::objectCompare (const GALGAS_bindingSpecificationListMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_key.objectCompare (inOperand.mAttribute_key) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mList.objectCompare (inOperand.mAttribute_mList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_bindingSpecificationListMap_2D_element::isValid (void) const {
  return mAttribute_key.isValid () && mAttribute_mList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bindingSpecificationListMap_2D_element::drop (void) {
  mAttribute_key.drop () ;
  mAttribute_mList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bindingSpecificationListMap_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @bindingSpecificationListMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_key.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_bindingSpecificationListMap_2D_element::reader_key (UNUSED_LOCATION_ARGS) const {
  return mAttribute_key ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassBindingSpecificationList GALGAS_bindingSpecificationListMap_2D_element::reader_mList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @bindingSpecificationListMap-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bindingSpecificationListMap_2D_element ("bindingSpecificationListMap-element",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_bindingSpecificationListMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bindingSpecificationListMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_bindingSpecificationListMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bindingSpecificationListMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingSpecificationListMap_2D_element GALGAS_bindingSpecificationListMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_bindingSpecificationListMap_2D_element result ;
  const GALGAS_bindingSpecificationListMap_2D_element * p = (const GALGAS_bindingSpecificationListMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bindingSpecificationListMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bindingSpecificationListMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingSpecificationModelList_2D_element::GALGAS_outletBindingSpecificationModelList_2D_element (void) :
mAttribute_mModelType (),
mAttribute_mModelShouldBeWritableProperty () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingSpecificationModelList_2D_element::~ GALGAS_outletBindingSpecificationModelList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingSpecificationModelList_2D_element::GALGAS_outletBindingSpecificationModelList_2D_element (const GALGAS_typeKind & inOperand0,
                                                                                                              const GALGAS_bool & inOperand1) :
mAttribute_mModelType (inOperand0),
mAttribute_mModelShouldBeWritableProperty (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingSpecificationModelList_2D_element GALGAS_outletBindingSpecificationModelList_2D_element::constructor_new (const GALGAS_typeKind & inOperand0,
                                                                                                                              const GALGAS_bool & inOperand1 
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletBindingSpecificationModelList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_outletBindingSpecificationModelList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_outletBindingSpecificationModelList_2D_element::objectCompare (const GALGAS_outletBindingSpecificationModelList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mModelType.objectCompare (inOperand.mAttribute_mModelType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mModelShouldBeWritableProperty.objectCompare (inOperand.mAttribute_mModelShouldBeWritableProperty) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_outletBindingSpecificationModelList_2D_element::isValid (void) const {
  return mAttribute_mModelType.isValid () && mAttribute_mModelShouldBeWritableProperty.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletBindingSpecificationModelList_2D_element::drop (void) {
  mAttribute_mModelType.drop () ;
  mAttribute_mModelShouldBeWritableProperty.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletBindingSpecificationModelList_2D_element::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "<struct @outletBindingSpecificationModelList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mModelType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mModelShouldBeWritableProperty.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_outletBindingSpecificationModelList_2D_element::reader_mModelType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModelType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_outletBindingSpecificationModelList_2D_element::reader_mModelShouldBeWritableProperty (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModelShouldBeWritableProperty ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @outletBindingSpecificationModelList-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletBindingSpecificationModelList_2D_element ("outletBindingSpecificationModelList-element",
                                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_outletBindingSpecificationModelList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletBindingSpecificationModelList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_outletBindingSpecificationModelList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletBindingSpecificationModelList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingSpecificationModelList_2D_element GALGAS_outletBindingSpecificationModelList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_outletBindingSpecificationModelList_2D_element result ;
  const GALGAS_outletBindingSpecificationModelList_2D_element * p = (const GALGAS_outletBindingSpecificationModelList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outletBindingSpecificationModelList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletBindingSpecificationModelList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingModelList_2D_element::GALGAS_outletBindingModelList_2D_element (void) :
mAttribute_mModelType (),
mAttribute_mKind (),
mAttribute_mErrorLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingModelList_2D_element::~ GALGAS_outletBindingModelList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingModelList_2D_element::GALGAS_outletBindingModelList_2D_element (const GALGAS_typeKind & inOperand0,
                                                                                    const GALGAS_propertyKind & inOperand1,
                                                                                    const GALGAS_location & inOperand2) :
mAttribute_mModelType (inOperand0),
mAttribute_mKind (inOperand1),
mAttribute_mErrorLocation (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingModelList_2D_element GALGAS_outletBindingModelList_2D_element::constructor_new (const GALGAS_typeKind & inOperand0,
                                                                                                    const GALGAS_propertyKind & inOperand1,
                                                                                                    const GALGAS_location & inOperand2 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletBindingModelList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_outletBindingModelList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_outletBindingModelList_2D_element::objectCompare (const GALGAS_outletBindingModelList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mModelType.objectCompare (inOperand.mAttribute_mModelType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mKind.objectCompare (inOperand.mAttribute_mKind) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mErrorLocation.objectCompare (inOperand.mAttribute_mErrorLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_outletBindingModelList_2D_element::isValid (void) const {
  return mAttribute_mModelType.isValid () && mAttribute_mKind.isValid () && mAttribute_mErrorLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletBindingModelList_2D_element::drop (void) {
  mAttribute_mModelType.drop () ;
  mAttribute_mKind.drop () ;
  mAttribute_mErrorLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletBindingModelList_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @outletBindingModelList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mModelType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mErrorLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_outletBindingModelList_2D_element::reader_mModelType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModelType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyKind GALGAS_outletBindingModelList_2D_element::reader_mKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_outletBindingModelList_2D_element::reader_mErrorLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mErrorLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @outletBindingModelList-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletBindingModelList_2D_element ("outletBindingModelList-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_outletBindingModelList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletBindingModelList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_outletBindingModelList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletBindingModelList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingModelList_2D_element GALGAS_outletBindingModelList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_outletBindingModelList_2D_element result ;
  const GALGAS_outletBindingModelList_2D_element * p = (const GALGAS_outletBindingModelList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outletBindingModelList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletBindingModelList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_regularBindingsGenerationList_2D_element::GALGAS_regularBindingsGenerationList_2D_element (void) :
mAttribute_mOutletName (),
mAttribute_mBindingName (),
mAttribute_mBoundObjectStringList (),
mAttribute_mBindingOptionsString () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_regularBindingsGenerationList_2D_element::~ GALGAS_regularBindingsGenerationList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_regularBindingsGenerationList_2D_element::GALGAS_regularBindingsGenerationList_2D_element (const GALGAS_string & inOperand0,
                                                                                                  const GALGAS_string & inOperand1,
                                                                                                  const GALGAS_stringlist & inOperand2,
                                                                                                  const GALGAS_string & inOperand3) :
mAttribute_mOutletName (inOperand0),
mAttribute_mBindingName (inOperand1),
mAttribute_mBoundObjectStringList (inOperand2),
mAttribute_mBindingOptionsString (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_regularBindingsGenerationList_2D_element GALGAS_regularBindingsGenerationList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_regularBindingsGenerationList_2D_element (GALGAS_string::constructor_default (HERE),
                                                          GALGAS_string::constructor_default (HERE),
                                                          GALGAS_stringlist::constructor_emptyList (HERE),
                                                          GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_regularBindingsGenerationList_2D_element GALGAS_regularBindingsGenerationList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                  const GALGAS_string & inOperand1,
                                                                                                                  const GALGAS_stringlist & inOperand2,
                                                                                                                  const GALGAS_string & inOperand3 
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_regularBindingsGenerationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_regularBindingsGenerationList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_regularBindingsGenerationList_2D_element::objectCompare (const GALGAS_regularBindingsGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mOutletName.objectCompare (inOperand.mAttribute_mOutletName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBindingName.objectCompare (inOperand.mAttribute_mBindingName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBoundObjectStringList.objectCompare (inOperand.mAttribute_mBoundObjectStringList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBindingOptionsString.objectCompare (inOperand.mAttribute_mBindingOptionsString) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_regularBindingsGenerationList_2D_element::isValid (void) const {
  return mAttribute_mOutletName.isValid () && mAttribute_mBindingName.isValid () && mAttribute_mBoundObjectStringList.isValid () && mAttribute_mBindingOptionsString.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_regularBindingsGenerationList_2D_element::drop (void) {
  mAttribute_mOutletName.drop () ;
  mAttribute_mBindingName.drop () ;
  mAttribute_mBoundObjectStringList.drop () ;
  mAttribute_mBindingOptionsString.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_regularBindingsGenerationList_2D_element::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "<struct @regularBindingsGenerationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mOutletName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBindingName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBoundObjectStringList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBindingOptionsString.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_regularBindingsGenerationList_2D_element::reader_mOutletName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutletName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_regularBindingsGenerationList_2D_element::reader_mBindingName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBindingName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_regularBindingsGenerationList_2D_element::reader_mBoundObjectStringList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBoundObjectStringList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_regularBindingsGenerationList_2D_element::reader_mBindingOptionsString (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBindingOptionsString ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @regularBindingsGenerationList-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_regularBindingsGenerationList_2D_element ("regularBindingsGenerationList-element",
                                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_regularBindingsGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_regularBindingsGenerationList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_regularBindingsGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_regularBindingsGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_regularBindingsGenerationList_2D_element GALGAS_regularBindingsGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_regularBindingsGenerationList_2D_element result ;
  const GALGAS_regularBindingsGenerationList_2D_element * p = (const GALGAS_regularBindingsGenerationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_regularBindingsGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("regularBindingsGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionBindingListForGeneration_2D_element::GALGAS_actionBindingListForGeneration_2D_element (void) :
mAttribute_mOutletName (),
mAttribute_mTargetName (),
mAttribute_mActionName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionBindingListForGeneration_2D_element::~ GALGAS_actionBindingListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionBindingListForGeneration_2D_element::GALGAS_actionBindingListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                    const GALGAS_string & inOperand1,
                                                                                                    const GALGAS_string & inOperand2) :
mAttribute_mOutletName (inOperand0),
mAttribute_mTargetName (inOperand1),
mAttribute_mActionName (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionBindingListForGeneration_2D_element GALGAS_actionBindingListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_actionBindingListForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                           GALGAS_string::constructor_default (HERE),
                                                           GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionBindingListForGeneration_2D_element GALGAS_actionBindingListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                    const GALGAS_string & inOperand1,
                                                                                                                    const GALGAS_string & inOperand2 
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_actionBindingListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_actionBindingListForGeneration_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_actionBindingListForGeneration_2D_element::objectCompare (const GALGAS_actionBindingListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mOutletName.objectCompare (inOperand.mAttribute_mOutletName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTargetName.objectCompare (inOperand.mAttribute_mTargetName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mActionName.objectCompare (inOperand.mAttribute_mActionName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_actionBindingListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mOutletName.isValid () && mAttribute_mTargetName.isValid () && mAttribute_mActionName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actionBindingListForGeneration_2D_element::drop (void) {
  mAttribute_mOutletName.drop () ;
  mAttribute_mTargetName.drop () ;
  mAttribute_mActionName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actionBindingListForGeneration_2D_element::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "<struct @actionBindingListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mOutletName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTargetName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mActionName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_actionBindingListForGeneration_2D_element::reader_mOutletName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutletName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_actionBindingListForGeneration_2D_element::reader_mTargetName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_actionBindingListForGeneration_2D_element::reader_mActionName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActionName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @actionBindingListForGeneration-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actionBindingListForGeneration_2D_element ("actionBindingListForGeneration-element",
                                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_actionBindingListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actionBindingListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_actionBindingListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actionBindingListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionBindingListForGeneration_2D_element GALGAS_actionBindingListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_actionBindingListForGeneration_2D_element result ;
  const GALGAS_actionBindingListForGeneration_2D_element * p = (const GALGAS_actionBindingListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_actionBindingListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actionBindingListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_defaultValueList_2D_element::GALGAS_defaultValueList_2D_element (void) :
mAttribute_mDefaultValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_defaultValueList_2D_element::~ GALGAS_defaultValueList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_defaultValueList_2D_element::GALGAS_defaultValueList_2D_element (const GALGAS_abstractDefaultValue & inOperand0) :
mAttribute_mDefaultValue (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_defaultValueList_2D_element GALGAS_defaultValueList_2D_element::constructor_new (const GALGAS_abstractDefaultValue & inOperand0 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_defaultValueList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_defaultValueList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_defaultValueList_2D_element::objectCompare (const GALGAS_defaultValueList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mDefaultValue.objectCompare (inOperand.mAttribute_mDefaultValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_defaultValueList_2D_element::isValid (void) const {
  return mAttribute_mDefaultValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_defaultValueList_2D_element::drop (void) {
  mAttribute_mDefaultValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_defaultValueList_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @defaultValueList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mDefaultValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractDefaultValue GALGAS_defaultValueList_2D_element::reader_mDefaultValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDefaultValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @defaultValueList-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_defaultValueList_2D_element ("defaultValueList-element",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_defaultValueList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_defaultValueList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_defaultValueList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_defaultValueList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_defaultValueList_2D_element GALGAS_defaultValueList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_defaultValueList_2D_element result ;
  const GALGAS_defaultValueList_2D_element * p = (const GALGAS_defaultValueList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_defaultValueList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("defaultValueList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionListForGeneration_2D_element::GALGAS_actionListForGeneration_2D_element (void) :
mAttribute_mClassName (),
mAttribute_mActionName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionListForGeneration_2D_element::~ GALGAS_actionListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionListForGeneration_2D_element::GALGAS_actionListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                      const GALGAS_string & inOperand1) :
mAttribute_mClassName (inOperand0),
mAttribute_mActionName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionListForGeneration_2D_element GALGAS_actionListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_actionListForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                    GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionListForGeneration_2D_element GALGAS_actionListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                      const GALGAS_string & inOperand1 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_actionListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_actionListForGeneration_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_actionListForGeneration_2D_element::objectCompare (const GALGAS_actionListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mClassName.objectCompare (inOperand.mAttribute_mClassName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mActionName.objectCompare (inOperand.mAttribute_mActionName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_actionListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mClassName.isValid () && mAttribute_mActionName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actionListForGeneration_2D_element::drop (void) {
  mAttribute_mClassName.drop () ;
  mAttribute_mActionName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actionListForGeneration_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @actionListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mClassName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mActionName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_actionListForGeneration_2D_element::reader_mClassName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mClassName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_actionListForGeneration_2D_element::reader_mActionName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActionName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @actionListForGeneration-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actionListForGeneration_2D_element ("actionListForGeneration-element",
                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_actionListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actionListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_actionListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actionListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionListForGeneration_2D_element GALGAS_actionListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_actionListForGeneration_2D_element result ;
  const GALGAS_actionListForGeneration_2D_element * p = (const GALGAS_actionListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_actionListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actionListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleBindingGenerationList_2D_element::GALGAS_multipleBindingGenerationList_2D_element (void) :
mAttribute_mOutletName (),
mAttribute_mBindingName (),
mAttribute_mBoundObjectExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleBindingGenerationList_2D_element::~ GALGAS_multipleBindingGenerationList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleBindingGenerationList_2D_element::GALGAS_multipleBindingGenerationList_2D_element (const GALGAS_string & inOperand0,
                                                                                                  const GALGAS_string & inOperand1,
                                                                                                  const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand2) :
mAttribute_mOutletName (inOperand0),
mAttribute_mBindingName (inOperand1),
mAttribute_mBoundObjectExpression (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleBindingGenerationList_2D_element GALGAS_multipleBindingGenerationList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                  const GALGAS_string & inOperand1,
                                                                                                                  const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand2 
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_multipleBindingGenerationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_multipleBindingGenerationList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_multipleBindingGenerationList_2D_element::objectCompare (const GALGAS_multipleBindingGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mOutletName.objectCompare (inOperand.mAttribute_mOutletName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBindingName.objectCompare (inOperand.mAttribute_mBindingName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBoundObjectExpression.objectCompare (inOperand.mAttribute_mBoundObjectExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_multipleBindingGenerationList_2D_element::isValid (void) const {
  return mAttribute_mOutletName.isValid () && mAttribute_mBindingName.isValid () && mAttribute_mBoundObjectExpression.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_multipleBindingGenerationList_2D_element::drop (void) {
  mAttribute_mOutletName.drop () ;
  mAttribute_mBindingName.drop () ;
  mAttribute_mBoundObjectExpression.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_multipleBindingGenerationList_2D_element::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "<struct @multipleBindingGenerationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mOutletName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBindingName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBoundObjectExpression.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_multipleBindingGenerationList_2D_element::reader_mOutletName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutletName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_multipleBindingGenerationList_2D_element::reader_mBindingName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBindingName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_multipleBindingGenerationList_2D_element::reader_mBoundObjectExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBoundObjectExpression ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @multipleBindingGenerationList-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_multipleBindingGenerationList_2D_element ("multipleBindingGenerationList-element",
                                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_multipleBindingGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multipleBindingGenerationList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_multipleBindingGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_multipleBindingGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleBindingGenerationList_2D_element GALGAS_multipleBindingGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_multipleBindingGenerationList_2D_element result ;
  const GALGAS_multipleBindingGenerationList_2D_element * p = (const GALGAS_multipleBindingGenerationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_multipleBindingGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("multipleBindingGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientDefinitionListForGeneration_2D_element::GALGAS_transientDefinitionListForGeneration_2D_element (void) :
mAttribute_mOwnerName (),
mAttribute_mTransientName (),
mAttribute_mTransientType (),
mAttribute_mDependencyList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientDefinitionListForGeneration_2D_element::~ GALGAS_transientDefinitionListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientDefinitionListForGeneration_2D_element::GALGAS_transientDefinitionListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                const GALGAS_string & inOperand1,
                                                                                                                const GALGAS_typeKind & inOperand2,
                                                                                                                const GALGAS_transientDependencyListForGeneration & inOperand3) :
mAttribute_mOwnerName (inOperand0),
mAttribute_mTransientName (inOperand1),
mAttribute_mTransientType (inOperand2),
mAttribute_mDependencyList (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientDefinitionListForGeneration_2D_element GALGAS_transientDefinitionListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                const GALGAS_string & inOperand1,
                                                                                                                                const GALGAS_typeKind & inOperand2,
                                                                                                                                const GALGAS_transientDependencyListForGeneration & inOperand3 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_transientDefinitionListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_transientDefinitionListForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_transientDefinitionListForGeneration_2D_element::objectCompare (const GALGAS_transientDefinitionListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mOwnerName.objectCompare (inOperand.mAttribute_mOwnerName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTransientName.objectCompare (inOperand.mAttribute_mTransientName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTransientType.objectCompare (inOperand.mAttribute_mTransientType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDependencyList.objectCompare (inOperand.mAttribute_mDependencyList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_transientDefinitionListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mOwnerName.isValid () && mAttribute_mTransientName.isValid () && mAttribute_mTransientType.isValid () && mAttribute_mDependencyList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_transientDefinitionListForGeneration_2D_element::drop (void) {
  mAttribute_mOwnerName.drop () ;
  mAttribute_mTransientName.drop () ;
  mAttribute_mTransientType.drop () ;
  mAttribute_mDependencyList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_transientDefinitionListForGeneration_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @transientDefinitionListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mOwnerName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTransientName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTransientType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDependencyList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_transientDefinitionListForGeneration_2D_element::reader_mOwnerName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOwnerName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_transientDefinitionListForGeneration_2D_element::reader_mTransientName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTransientName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_transientDefinitionListForGeneration_2D_element::reader_mTransientType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTransientType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientDependencyListForGeneration GALGAS_transientDefinitionListForGeneration_2D_element::reader_mDependencyList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDependencyList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @transientDefinitionListForGeneration-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transientDefinitionListForGeneration_2D_element ("transientDefinitionListForGeneration-element",
                                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_transientDefinitionListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientDefinitionListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_transientDefinitionListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientDefinitionListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientDefinitionListForGeneration_2D_element GALGAS_transientDefinitionListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_transientDefinitionListForGeneration_2D_element result ;
  const GALGAS_transientDefinitionListForGeneration_2D_element * p = (const GALGAS_transientDefinitionListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_transientDefinitionListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientDefinitionListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_simpleStoredPropertyListForGeneration_2D_element::GALGAS_simpleStoredPropertyListForGeneration_2D_element (void) :
mAttribute_mType (),
mAttribute_mStoredPropertyName (),
mAttribute_mDefaultValueInSwift (),
mAttribute_mNeedsValidation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_simpleStoredPropertyListForGeneration_2D_element::~ GALGAS_simpleStoredPropertyListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_simpleStoredPropertyListForGeneration_2D_element::GALGAS_simpleStoredPropertyListForGeneration_2D_element (const GALGAS_typeKind & inOperand0,
                                                                                                                  const GALGAS_string & inOperand1,
                                                                                                                  const GALGAS_string & inOperand2,
                                                                                                                  const GALGAS_bool & inOperand3) :
mAttribute_mType (inOperand0),
mAttribute_mStoredPropertyName (inOperand1),
mAttribute_mDefaultValueInSwift (inOperand2),
mAttribute_mNeedsValidation (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_simpleStoredPropertyListForGeneration_2D_element GALGAS_simpleStoredPropertyListForGeneration_2D_element::constructor_new (const GALGAS_typeKind & inOperand0,
                                                                                                                                  const GALGAS_string & inOperand1,
                                                                                                                                  const GALGAS_string & inOperand2,
                                                                                                                                  const GALGAS_bool & inOperand3 
                                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_simpleStoredPropertyListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_simpleStoredPropertyListForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_simpleStoredPropertyListForGeneration_2D_element::objectCompare (const GALGAS_simpleStoredPropertyListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mType.objectCompare (inOperand.mAttribute_mType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mStoredPropertyName.objectCompare (inOperand.mAttribute_mStoredPropertyName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDefaultValueInSwift.objectCompare (inOperand.mAttribute_mDefaultValueInSwift) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mNeedsValidation.objectCompare (inOperand.mAttribute_mNeedsValidation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_simpleStoredPropertyListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mType.isValid () && mAttribute_mStoredPropertyName.isValid () && mAttribute_mDefaultValueInSwift.isValid () && mAttribute_mNeedsValidation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_simpleStoredPropertyListForGeneration_2D_element::drop (void) {
  mAttribute_mType.drop () ;
  mAttribute_mStoredPropertyName.drop () ;
  mAttribute_mDefaultValueInSwift.drop () ;
  mAttribute_mNeedsValidation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_simpleStoredPropertyListForGeneration_2D_element::description (C_String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString << "<struct @simpleStoredPropertyListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mStoredPropertyName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDefaultValueInSwift.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mNeedsValidation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_simpleStoredPropertyListForGeneration_2D_element::reader_mType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_simpleStoredPropertyListForGeneration_2D_element::reader_mStoredPropertyName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStoredPropertyName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_simpleStoredPropertyListForGeneration_2D_element::reader_mDefaultValueInSwift (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDefaultValueInSwift ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_simpleStoredPropertyListForGeneration_2D_element::reader_mNeedsValidation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNeedsValidation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @simpleStoredPropertyListForGeneration-element type                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_simpleStoredPropertyListForGeneration_2D_element ("simpleStoredPropertyListForGeneration-element",
                                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_simpleStoredPropertyListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_simpleStoredPropertyListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_simpleStoredPropertyListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_simpleStoredPropertyListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_simpleStoredPropertyListForGeneration_2D_element GALGAS_simpleStoredPropertyListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_simpleStoredPropertyListForGeneration_2D_element result ;
  const GALGAS_simpleStoredPropertyListForGeneration_2D_element * p = (const GALGAS_simpleStoredPropertyListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_simpleStoredPropertyListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("simpleStoredPropertyListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerForGeneration_2D_element::GALGAS_arrayControllerForGeneration_2D_element (void) :
mAttribute_mOwnerName (),
mAttribute_mControllerName (),
mAttribute_mRelationshipTypeName (),
mAttribute_mToManyRelationshipName (),
mAttribute_mElementTypeName (),
mAttribute_mTableViewOutletName (),
mAttribute_mArrayControllerFilterListForGeneration (),
mAttribute_mArrayControllerBoundColumnListForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerForGeneration_2D_element::~ GALGAS_arrayControllerForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerForGeneration_2D_element::GALGAS_arrayControllerForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                const GALGAS_string & inOperand1,
                                                                                                const GALGAS_string & inOperand2,
                                                                                                const GALGAS_string & inOperand3,
                                                                                                const GALGAS_string & inOperand4,
                                                                                                const GALGAS_string & inOperand5,
                                                                                                const GALGAS_arrayControllerFilterListForGeneration & inOperand6,
                                                                                                const GALGAS_arrayControllerBoundColumnListForGeneration & inOperand7) :
mAttribute_mOwnerName (inOperand0),
mAttribute_mControllerName (inOperand1),
mAttribute_mRelationshipTypeName (inOperand2),
mAttribute_mToManyRelationshipName (inOperand3),
mAttribute_mElementTypeName (inOperand4),
mAttribute_mTableViewOutletName (inOperand5),
mAttribute_mArrayControllerFilterListForGeneration (inOperand6),
mAttribute_mArrayControllerBoundColumnListForGeneration (inOperand7) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerForGeneration_2D_element GALGAS_arrayControllerForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_arrayControllerForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                         GALGAS_string::constructor_default (HERE),
                                                         GALGAS_string::constructor_default (HERE),
                                                         GALGAS_string::constructor_default (HERE),
                                                         GALGAS_string::constructor_default (HERE),
                                                         GALGAS_string::constructor_default (HERE),
                                                         GALGAS_arrayControllerFilterListForGeneration::constructor_emptyList (HERE),
                                                         GALGAS_arrayControllerBoundColumnListForGeneration::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerForGeneration_2D_element GALGAS_arrayControllerForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                const GALGAS_string & inOperand1,
                                                                                                                const GALGAS_string & inOperand2,
                                                                                                                const GALGAS_string & inOperand3,
                                                                                                                const GALGAS_string & inOperand4,
                                                                                                                const GALGAS_string & inOperand5,
                                                                                                                const GALGAS_arrayControllerFilterListForGeneration & inOperand6,
                                                                                                                const GALGAS_arrayControllerBoundColumnListForGeneration & inOperand7 
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_arrayControllerForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    result = GALGAS_arrayControllerForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_arrayControllerForGeneration_2D_element::objectCompare (const GALGAS_arrayControllerForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mOwnerName.objectCompare (inOperand.mAttribute_mOwnerName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mControllerName.objectCompare (inOperand.mAttribute_mControllerName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRelationshipTypeName.objectCompare (inOperand.mAttribute_mRelationshipTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mToManyRelationshipName.objectCompare (inOperand.mAttribute_mToManyRelationshipName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mElementTypeName.objectCompare (inOperand.mAttribute_mElementTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTableViewOutletName.objectCompare (inOperand.mAttribute_mTableViewOutletName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mArrayControllerFilterListForGeneration.objectCompare (inOperand.mAttribute_mArrayControllerFilterListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mArrayControllerBoundColumnListForGeneration.objectCompare (inOperand.mAttribute_mArrayControllerBoundColumnListForGeneration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_arrayControllerForGeneration_2D_element::isValid (void) const {
  return mAttribute_mOwnerName.isValid () && mAttribute_mControllerName.isValid () && mAttribute_mRelationshipTypeName.isValid () && mAttribute_mToManyRelationshipName.isValid () && mAttribute_mElementTypeName.isValid () && mAttribute_mTableViewOutletName.isValid () && mAttribute_mArrayControllerFilterListForGeneration.isValid () && mAttribute_mArrayControllerBoundColumnListForGeneration.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerForGeneration_2D_element::drop (void) {
  mAttribute_mOwnerName.drop () ;
  mAttribute_mControllerName.drop () ;
  mAttribute_mRelationshipTypeName.drop () ;
  mAttribute_mToManyRelationshipName.drop () ;
  mAttribute_mElementTypeName.drop () ;
  mAttribute_mTableViewOutletName.drop () ;
  mAttribute_mArrayControllerFilterListForGeneration.drop () ;
  mAttribute_mArrayControllerBoundColumnListForGeneration.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerForGeneration_2D_element::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "<struct @arrayControllerForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mOwnerName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mControllerName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRelationshipTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mToManyRelationshipName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mElementTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTableViewOutletName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mArrayControllerFilterListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mArrayControllerBoundColumnListForGeneration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_arrayControllerForGeneration_2D_element::reader_mOwnerName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOwnerName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_arrayControllerForGeneration_2D_element::reader_mControllerName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mControllerName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_arrayControllerForGeneration_2D_element::reader_mRelationshipTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRelationshipTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_arrayControllerForGeneration_2D_element::reader_mToManyRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mToManyRelationshipName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_arrayControllerForGeneration_2D_element::reader_mElementTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mElementTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_arrayControllerForGeneration_2D_element::reader_mTableViewOutletName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTableViewOutletName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerFilterListForGeneration GALGAS_arrayControllerForGeneration_2D_element::reader_mArrayControllerFilterListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mArrayControllerFilterListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListForGeneration GALGAS_arrayControllerForGeneration_2D_element::reader_mArrayControllerBoundColumnListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mArrayControllerBoundColumnListForGeneration ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @arrayControllerForGeneration-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerForGeneration_2D_element ("arrayControllerForGeneration-element",
                                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_arrayControllerForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_arrayControllerForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerForGeneration_2D_element GALGAS_arrayControllerForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerForGeneration_2D_element result ;
  const GALGAS_arrayControllerForGeneration_2D_element * p = (const GALGAS_arrayControllerForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayControllerForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerFilterListForGeneration_2D_element::GALGAS_arrayControllerFilterListForGeneration_2D_element (void) :
mAttribute_mFilterPropertyName (),
mAttribute_mFilterPropertyType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerFilterListForGeneration_2D_element::~ GALGAS_arrayControllerFilterListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerFilterListForGeneration_2D_element::GALGAS_arrayControllerFilterListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                    const GALGAS_typeKind & inOperand1) :
mAttribute_mFilterPropertyName (inOperand0),
mAttribute_mFilterPropertyType (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerFilterListForGeneration_2D_element GALGAS_arrayControllerFilterListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                    const GALGAS_typeKind & inOperand1 
                                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_arrayControllerFilterListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_arrayControllerFilterListForGeneration_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_arrayControllerFilterListForGeneration_2D_element::objectCompare (const GALGAS_arrayControllerFilterListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mFilterPropertyName.objectCompare (inOperand.mAttribute_mFilterPropertyName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFilterPropertyType.objectCompare (inOperand.mAttribute_mFilterPropertyType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_arrayControllerFilterListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mFilterPropertyName.isValid () && mAttribute_mFilterPropertyType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerFilterListForGeneration_2D_element::drop (void) {
  mAttribute_mFilterPropertyName.drop () ;
  mAttribute_mFilterPropertyType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerFilterListForGeneration_2D_element::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "<struct @arrayControllerFilterListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mFilterPropertyName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFilterPropertyType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_arrayControllerFilterListForGeneration_2D_element::reader_mFilterPropertyName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFilterPropertyName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_arrayControllerFilterListForGeneration_2D_element::reader_mFilterPropertyType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFilterPropertyType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @arrayControllerFilterListForGeneration-element type                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerFilterListForGeneration_2D_element ("arrayControllerFilterListForGeneration-element",
                                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_arrayControllerFilterListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerFilterListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_arrayControllerFilterListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerFilterListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerFilterListForGeneration_2D_element GALGAS_arrayControllerFilterListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerFilterListForGeneration_2D_element result ;
  const GALGAS_arrayControllerFilterListForGeneration_2D_element * p = (const GALGAS_arrayControllerFilterListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayControllerFilterListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerFilterListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::GALGAS_arrayControllerBoundColumnListForGeneration_2D_element (void) :
mAttribute_mColumnName (),
mAttribute_mColumnOutletTypeName (),
mAttribute_mObservablePropertyName (),
mAttribute_mPropertyType (),
mAttribute_mBindingOptionList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::~ GALGAS_arrayControllerBoundColumnListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::GALGAS_arrayControllerBoundColumnListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                              const GALGAS_string & inOperand1,
                                                                                                                              const GALGAS_string & inOperand2,
                                                                                                                              const GALGAS_typeKind & inOperand3,
                                                                                                                              const GALGAS_bindingOptionList & inOperand4) :
mAttribute_mColumnName (inOperand0),
mAttribute_mColumnOutletTypeName (inOperand1),
mAttribute_mObservablePropertyName (inOperand2),
mAttribute_mPropertyType (inOperand3),
mAttribute_mBindingOptionList (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListForGeneration_2D_element GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                              const GALGAS_string & inOperand1,
                                                                                                                                              const GALGAS_string & inOperand2,
                                                                                                                                              const GALGAS_typeKind & inOperand3,
                                                                                                                                              const GALGAS_bindingOptionList & inOperand4 
                                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_arrayControllerBoundColumnListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_arrayControllerBoundColumnListForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::objectCompare (const GALGAS_arrayControllerBoundColumnListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mColumnName.objectCompare (inOperand.mAttribute_mColumnName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mColumnOutletTypeName.objectCompare (inOperand.mAttribute_mColumnOutletTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mObservablePropertyName.objectCompare (inOperand.mAttribute_mObservablePropertyName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPropertyType.objectCompare (inOperand.mAttribute_mPropertyType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBindingOptionList.objectCompare (inOperand.mAttribute_mBindingOptionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mColumnName.isValid () && mAttribute_mColumnOutletTypeName.isValid () && mAttribute_mObservablePropertyName.isValid () && mAttribute_mPropertyType.isValid () && mAttribute_mBindingOptionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::drop (void) {
  mAttribute_mColumnName.drop () ;
  mAttribute_mColumnOutletTypeName.drop () ;
  mAttribute_mObservablePropertyName.drop () ;
  mAttribute_mPropertyType.drop () ;
  mAttribute_mBindingOptionList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::description (C_String & ioString,
                                                                                 const int32_t inIndentation) const {
  ioString << "<struct @arrayControllerBoundColumnListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mColumnName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mColumnOutletTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mObservablePropertyName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPropertyType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBindingOptionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::reader_mColumnName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mColumnName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::reader_mColumnOutletTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mColumnOutletTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::reader_mObservablePropertyName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mObservablePropertyName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::reader_mPropertyType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPropertyType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingOptionList GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::reader_mBindingOptionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBindingOptionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              @arrayControllerBoundColumnListForGeneration-element type                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerBoundColumnListForGeneration_2D_element ("arrayControllerBoundColumnListForGeneration-element",
                                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerBoundColumnListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerBoundColumnListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListForGeneration_2D_element GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                            C_Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerBoundColumnListForGeneration_2D_element result ;
  const GALGAS_arrayControllerBoundColumnListForGeneration_2D_element * p = (const GALGAS_arrayControllerBoundColumnListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayControllerBoundColumnListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerBoundColumnListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toOneEntityRelationshipListForGeneration_2D_element::GALGAS_toOneEntityRelationshipListForGeneration_2D_element (void) :
mAttribute_mToOneRelationshipName (),
mAttribute_mRelationshipType (),
mAttribute_mOppositeRelationshipName (),
mAttribute_mInverseRelationMultiplicity (),
mAttribute_mDestinationEntityObservablePropertyMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toOneEntityRelationshipListForGeneration_2D_element::~ GALGAS_toOneEntityRelationshipListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toOneEntityRelationshipListForGeneration_2D_element::GALGAS_toOneEntityRelationshipListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                        const GALGAS_typeKind & inOperand1,
                                                                                                                        const GALGAS_string & inOperand2,
                                                                                                                        const GALGAS_propertyMultiplicity & inOperand3,
                                                                                                                        const GALGAS_observablePropertyMap & inOperand4) :
mAttribute_mToOneRelationshipName (inOperand0),
mAttribute_mRelationshipType (inOperand1),
mAttribute_mOppositeRelationshipName (inOperand2),
mAttribute_mInverseRelationMultiplicity (inOperand3),
mAttribute_mDestinationEntityObservablePropertyMap (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toOneEntityRelationshipListForGeneration_2D_element GALGAS_toOneEntityRelationshipListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                        const GALGAS_typeKind & inOperand1,
                                                                                                                                        const GALGAS_string & inOperand2,
                                                                                                                                        const GALGAS_propertyMultiplicity & inOperand3,
                                                                                                                                        const GALGAS_observablePropertyMap & inOperand4 
                                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_toOneEntityRelationshipListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_toOneEntityRelationshipListForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_toOneEntityRelationshipListForGeneration_2D_element::objectCompare (const GALGAS_toOneEntityRelationshipListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mToOneRelationshipName.objectCompare (inOperand.mAttribute_mToOneRelationshipName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRelationshipType.objectCompare (inOperand.mAttribute_mRelationshipType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOppositeRelationshipName.objectCompare (inOperand.mAttribute_mOppositeRelationshipName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInverseRelationMultiplicity.objectCompare (inOperand.mAttribute_mInverseRelationMultiplicity) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDestinationEntityObservablePropertyMap.objectCompare (inOperand.mAttribute_mDestinationEntityObservablePropertyMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_toOneEntityRelationshipListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mToOneRelationshipName.isValid () && mAttribute_mRelationshipType.isValid () && mAttribute_mOppositeRelationshipName.isValid () && mAttribute_mInverseRelationMultiplicity.isValid () && mAttribute_mDestinationEntityObservablePropertyMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_toOneEntityRelationshipListForGeneration_2D_element::drop (void) {
  mAttribute_mToOneRelationshipName.drop () ;
  mAttribute_mRelationshipType.drop () ;
  mAttribute_mOppositeRelationshipName.drop () ;
  mAttribute_mInverseRelationMultiplicity.drop () ;
  mAttribute_mDestinationEntityObservablePropertyMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_toOneEntityRelationshipListForGeneration_2D_element::description (C_String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString << "<struct @toOneEntityRelationshipListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mToOneRelationshipName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRelationshipType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOppositeRelationshipName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInverseRelationMultiplicity.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDestinationEntityObservablePropertyMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_toOneEntityRelationshipListForGeneration_2D_element::reader_mToOneRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mToOneRelationshipName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_toOneEntityRelationshipListForGeneration_2D_element::reader_mRelationshipType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRelationshipType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_toOneEntityRelationshipListForGeneration_2D_element::reader_mOppositeRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOppositeRelationshipName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyMultiplicity GALGAS_toOneEntityRelationshipListForGeneration_2D_element::reader_mInverseRelationMultiplicity (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInverseRelationMultiplicity ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyMap GALGAS_toOneEntityRelationshipListForGeneration_2D_element::reader_mDestinationEntityObservablePropertyMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDestinationEntityObservablePropertyMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @toOneEntityRelationshipListForGeneration-element type                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toOneEntityRelationshipListForGeneration_2D_element ("toOneEntityRelationshipListForGeneration-element",
                                                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_toOneEntityRelationshipListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOneEntityRelationshipListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_toOneEntityRelationshipListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toOneEntityRelationshipListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toOneEntityRelationshipListForGeneration_2D_element GALGAS_toOneEntityRelationshipListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_toOneEntityRelationshipListForGeneration_2D_element result ;
  const GALGAS_toOneEntityRelationshipListForGeneration_2D_element * p = (const GALGAS_toOneEntityRelationshipListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toOneEntityRelationshipListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toOneEntityRelationshipListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toManyEntityRelationshipListForGeneration_2D_element::GALGAS_toManyEntityRelationshipListForGeneration_2D_element (void) :
mAttribute_mToManyRelationshipName (),
mAttribute_mRelationshipType (),
mAttribute_mOppositeRelationshipName (),
mAttribute_mDestinationEntityObservablePropertyMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toManyEntityRelationshipListForGeneration_2D_element::~ GALGAS_toManyEntityRelationshipListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toManyEntityRelationshipListForGeneration_2D_element::GALGAS_toManyEntityRelationshipListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                          const GALGAS_typeKind & inOperand1,
                                                                                                                          const GALGAS_string & inOperand2,
                                                                                                                          const GALGAS_observablePropertyMap & inOperand3) :
mAttribute_mToManyRelationshipName (inOperand0),
mAttribute_mRelationshipType (inOperand1),
mAttribute_mOppositeRelationshipName (inOperand2),
mAttribute_mDestinationEntityObservablePropertyMap (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toManyEntityRelationshipListForGeneration_2D_element GALGAS_toManyEntityRelationshipListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                          const GALGAS_typeKind & inOperand1,
                                                                                                                                          const GALGAS_string & inOperand2,
                                                                                                                                          const GALGAS_observablePropertyMap & inOperand3 
                                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_toManyEntityRelationshipListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_toManyEntityRelationshipListForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_toManyEntityRelationshipListForGeneration_2D_element::objectCompare (const GALGAS_toManyEntityRelationshipListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mToManyRelationshipName.objectCompare (inOperand.mAttribute_mToManyRelationshipName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRelationshipType.objectCompare (inOperand.mAttribute_mRelationshipType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOppositeRelationshipName.objectCompare (inOperand.mAttribute_mOppositeRelationshipName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDestinationEntityObservablePropertyMap.objectCompare (inOperand.mAttribute_mDestinationEntityObservablePropertyMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_toManyEntityRelationshipListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mToManyRelationshipName.isValid () && mAttribute_mRelationshipType.isValid () && mAttribute_mOppositeRelationshipName.isValid () && mAttribute_mDestinationEntityObservablePropertyMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_toManyEntityRelationshipListForGeneration_2D_element::drop (void) {
  mAttribute_mToManyRelationshipName.drop () ;
  mAttribute_mRelationshipType.drop () ;
  mAttribute_mOppositeRelationshipName.drop () ;
  mAttribute_mDestinationEntityObservablePropertyMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_toManyEntityRelationshipListForGeneration_2D_element::description (C_String & ioString,
                                                                               const int32_t inIndentation) const {
  ioString << "<struct @toManyEntityRelationshipListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mToManyRelationshipName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRelationshipType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOppositeRelationshipName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDestinationEntityObservablePropertyMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_toManyEntityRelationshipListForGeneration_2D_element::reader_mToManyRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mToManyRelationshipName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_toManyEntityRelationshipListForGeneration_2D_element::reader_mRelationshipType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRelationshipType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_toManyEntityRelationshipListForGeneration_2D_element::reader_mOppositeRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOppositeRelationshipName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyMap GALGAS_toManyEntityRelationshipListForGeneration_2D_element::reader_mDestinationEntityObservablePropertyMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDestinationEntityObservablePropertyMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @toManyEntityRelationshipListForGeneration-element type                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toManyEntityRelationshipListForGeneration_2D_element ("toManyEntityRelationshipListForGeneration-element",
                                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_toManyEntityRelationshipListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyEntityRelationshipListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_toManyEntityRelationshipListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toManyEntityRelationshipListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toManyEntityRelationshipListForGeneration_2D_element GALGAS_toManyEntityRelationshipListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                        C_Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_toManyEntityRelationshipListForGeneration_2D_element result ;
  const GALGAS_toManyEntityRelationshipListForGeneration_2D_element * p = (const GALGAS_toManyEntityRelationshipListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toManyEntityRelationshipListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyEntityRelationshipListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindList_2D_element::GALGAS_typeKindList_2D_element (void) :
mAttribute_mType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindList_2D_element::~ GALGAS_typeKindList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindList_2D_element::GALGAS_typeKindList_2D_element (const GALGAS_typeKind & inOperand0) :
mAttribute_mType (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindList_2D_element GALGAS_typeKindList_2D_element::constructor_new (const GALGAS_typeKind & inOperand0 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_typeKindList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_typeKindList_2D_element::objectCompare (const GALGAS_typeKindList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mType.objectCompare (inOperand.mAttribute_mType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_typeKindList_2D_element::isValid (void) const {
  return mAttribute_mType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeKindList_2D_element::drop (void) {
  mAttribute_mType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeKindList_2D_element::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<struct @typeKindList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_typeKindList_2D_element::reader_mType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @typeKindList-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeKindList_2D_element ("typeKindList-element",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_typeKindList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKindList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_typeKindList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeKindList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindList_2D_element GALGAS_typeKindList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_typeKindList_2D_element result ;
  const GALGAS_typeKindList_2D_element * p = (const GALGAS_typeKindList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeKindList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKindList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientDependencyGraphNodeInfoList_2D_element::GALGAS_transientDependencyGraphNodeInfoList_2D_element (void) :
mAttribute_mSignature (),
mAttribute_mIsTransient () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientDependencyGraphNodeInfoList_2D_element::~ GALGAS_transientDependencyGraphNodeInfoList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientDependencyGraphNodeInfoList_2D_element::GALGAS_transientDependencyGraphNodeInfoList_2D_element (const GALGAS_string & inOperand0,
                                                                                                                const GALGAS_bool & inOperand1) :
mAttribute_mSignature (inOperand0),
mAttribute_mIsTransient (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientDependencyGraphNodeInfoList_2D_element GALGAS_transientDependencyGraphNodeInfoList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_transientDependencyGraphNodeInfoList_2D_element (GALGAS_string::constructor_default (HERE),
                                                                 GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientDependencyGraphNodeInfoList_2D_element GALGAS_transientDependencyGraphNodeInfoList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                const GALGAS_bool & inOperand1 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_transientDependencyGraphNodeInfoList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_transientDependencyGraphNodeInfoList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_transientDependencyGraphNodeInfoList_2D_element::objectCompare (const GALGAS_transientDependencyGraphNodeInfoList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mSignature.objectCompare (inOperand.mAttribute_mSignature) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIsTransient.objectCompare (inOperand.mAttribute_mIsTransient) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_transientDependencyGraphNodeInfoList_2D_element::isValid (void) const {
  return mAttribute_mSignature.isValid () && mAttribute_mIsTransient.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_transientDependencyGraphNodeInfoList_2D_element::drop (void) {
  mAttribute_mSignature.drop () ;
  mAttribute_mIsTransient.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_transientDependencyGraphNodeInfoList_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @transientDependencyGraphNodeInfoList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mSignature.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIsTransient.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_transientDependencyGraphNodeInfoList_2D_element::reader_mSignature (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSignature ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_transientDependencyGraphNodeInfoList_2D_element::reader_mIsTransient (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsTransient ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @transientDependencyGraphNodeInfoList-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transientDependencyGraphNodeInfoList_2D_element ("transientDependencyGraphNodeInfoList-element",
                                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_transientDependencyGraphNodeInfoList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientDependencyGraphNodeInfoList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_transientDependencyGraphNodeInfoList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientDependencyGraphNodeInfoList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientDependencyGraphNodeInfoList_2D_element GALGAS_transientDependencyGraphNodeInfoList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_transientDependencyGraphNodeInfoList_2D_element result ;
  const GALGAS_transientDependencyGraphNodeInfoList_2D_element * p = (const GALGAS_transientDependencyGraphNodeInfoList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_transientDependencyGraphNodeInfoList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientDependencyGraphNodeInfoList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_validationStubRoutineListForGeneration_2D_element::GALGAS_validationStubRoutineListForGeneration_2D_element (void) :
mAttribute_mObjectTypeName (),
mAttribute_mModelName (),
mAttribute_mModelTypeName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_validationStubRoutineListForGeneration_2D_element::~ GALGAS_validationStubRoutineListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_validationStubRoutineListForGeneration_2D_element::GALGAS_validationStubRoutineListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                    const GALGAS_string & inOperand1,
                                                                                                                    const GALGAS_string & inOperand2) :
mAttribute_mObjectTypeName (inOperand0),
mAttribute_mModelName (inOperand1),
mAttribute_mModelTypeName (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_validationStubRoutineListForGeneration_2D_element GALGAS_validationStubRoutineListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_validationStubRoutineListForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                                   GALGAS_string::constructor_default (HERE),
                                                                   GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_validationStubRoutineListForGeneration_2D_element GALGAS_validationStubRoutineListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                    const GALGAS_string & inOperand1,
                                                                                                                                    const GALGAS_string & inOperand2 
                                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_validationStubRoutineListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_validationStubRoutineListForGeneration_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_validationStubRoutineListForGeneration_2D_element::objectCompare (const GALGAS_validationStubRoutineListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mObjectTypeName.objectCompare (inOperand.mAttribute_mObjectTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mModelName.objectCompare (inOperand.mAttribute_mModelName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mModelTypeName.objectCompare (inOperand.mAttribute_mModelTypeName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_validationStubRoutineListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mObjectTypeName.isValid () && mAttribute_mModelName.isValid () && mAttribute_mModelTypeName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_validationStubRoutineListForGeneration_2D_element::drop (void) {
  mAttribute_mObjectTypeName.drop () ;
  mAttribute_mModelName.drop () ;
  mAttribute_mModelTypeName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_validationStubRoutineListForGeneration_2D_element::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "<struct @validationStubRoutineListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mObjectTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mModelName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mModelTypeName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_validationStubRoutineListForGeneration_2D_element::reader_mObjectTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mObjectTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_validationStubRoutineListForGeneration_2D_element::reader_mModelName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModelName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_validationStubRoutineListForGeneration_2D_element::reader_mModelTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModelTypeName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @validationStubRoutineListForGeneration-element type                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_validationStubRoutineListForGeneration_2D_element ("validationStubRoutineListForGeneration-element",
                                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_validationStubRoutineListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_validationStubRoutineListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_validationStubRoutineListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_validationStubRoutineListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_validationStubRoutineListForGeneration_2D_element GALGAS_validationStubRoutineListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_validationStubRoutineListForGeneration_2D_element result ;
  const GALGAS_validationStubRoutineListForGeneration_2D_element * p = (const GALGAS_validationStubRoutineListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_validationStubRoutineListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("validationStubRoutineListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category Reader '@typeKind transformForSavingInDictionary'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_transformForSavingInDictionary (const GALGAS_typeKind & inObject,
                                                             const GALGAS_string & constinArgument_inPropertyName,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_typeKind temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_boolType:
    {
      result_outResult = GALGAS_string ("NSNumber (bool:").add_operation (constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 250)).add_operation (GALGAS_string (".prop)"), inCompiler COMMA_SOURCE_FILE ("entity.galgas", 250)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_integerType:
    {
      result_outResult = GALGAS_string ("NSNumber (integer:").add_operation (constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 251)).add_operation (GALGAS_string (".prop)"), inCompiler COMMA_SOURCE_FILE ("entity.galgas", 251)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_doubleType:
    {
      result_outResult = GALGAS_string ("NSNumber (double:").add_operation (constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 252)).add_operation (GALGAS_string (".prop)"), inCompiler COMMA_SOURCE_FILE ("entity.galgas", 252)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_stringType:
    {
      result_outResult = constinArgument_inPropertyName.add_operation (GALGAS_string (".prop"), inCompiler COMMA_SOURCE_FILE ("entity.galgas", 253)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_colorType:
    {
      result_outResult = GALGAS_string ("NSArchiver.archivedDataWithRootObject (").add_operation (constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 254)).add_operation (GALGAS_string (".prop)"), inCompiler COMMA_SOURCE_FILE ("entity.galgas", 254)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_dateType:
    {
      result_outResult = GALGAS_string ("NSDate") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_enumType:
    {
      result_outResult = GALGAS_string ("NSNumber (integer:").add_operation (constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 256)).add_operation (GALGAS_string (".prop.rawValue)"), inCompiler COMMA_SOURCE_FILE ("entity.galgas", 256)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_entityType:
    {
      result_outResult = GALGAS_string ("<entity is invalid for transformForSavingInDictionary>") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Category Reader '@observablePropertyAST modelString'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_modelString (const GALGAS_observablePropertyAST & inObject,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_observablePropertyAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_observablePropertyAST::kNotBuilt:
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_3706 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_3706->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("self.rootObject.").add_operation (extractedValue_propertyName.reader_string (SOURCE_FILE ("observable-property.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 90)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_3851 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_3851->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_3851->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.rootObject.").add_operation (extractedValue_propertyName.reader_string (SOURCE_FILE ("observable-property.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 92)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 92)).add_operation (extractedValue_optionName.reader_string (SOURCE_FILE ("observable-property.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 92)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_3969 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_relationshipName = extractPtr_3969->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("self.rootObject.").add_operation (extractedValue_relationshipName.reader_string (SOURCE_FILE ("observable-property.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 94)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_4154 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_4154->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_4154->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_propertyName.reader_string (SOURCE_FILE ("observable-property.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 96)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, extractedValue_optionName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        result_outResult.dotAssign_operation (GALGAS_string (".").add_operation (extractedValue_optionName.reader_string (SOURCE_FILE ("observable-property.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 98))  COMMA_SOURCE_FILE ("observable-property.galgas", 98)) ;
      }
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_4375 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_prefsName = extractPtr_4375->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_4375->mAssociatedValue1 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_4375->mAssociatedValue2 ;
      result_outResult = GALGAS_string ("g_").add_operation (extractedValue_prefsName.reader_string (SOURCE_FILE ("observable-property.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 101)).add_operation (GALGAS_string ("!."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 101)).add_operation (extractedValue_propertyName.reader_string (SOURCE_FILE ("observable-property.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 101)) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, extractedValue_optionName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_2) {
        result_outResult.dotAssign_operation (GALGAS_string (".").add_operation (extractedValue_optionName.reader_string (SOURCE_FILE ("observable-property.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 103))  COMMA_SOURCE_FILE ("observable-property.galgas", 103)) ;
      }
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_controllerProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_controllerProperty * extractPtr_4513 = (const cEnumAssociatedValues_observablePropertyAST_controllerProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_4513->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_4513->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_controllerName.reader_string (SOURCE_FILE ("observable-property.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 106)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 106)).add_operation (extractedValue_propertyName.reader_string (SOURCE_FILE ("observable-property.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 106)) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Category Reader '@observablePropertyAST location'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location categoryReader_location (const GALGAS_observablePropertyAST & inObject,
                                         C_Compiler * /* inCompiler */
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outResult ; // Returned variable
  const GALGAS_observablePropertyAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_observablePropertyAST::kNotBuilt:
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_4807 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_4807->mAssociatedValue0 ;
      result_outResult = extractedValue_propertyName.mAttribute_location ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_4899 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_4899->mAssociatedValue1 ;
      result_outResult = extractedValue_optionName.mAttribute_location ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_4997 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_4997->mAssociatedValue1 ;
      result_outResult = extractedValue_propertyName.mAttribute_location ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_5083 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_5083->mAssociatedValue0 ;
      result_outResult = extractedValue_propertyName.mAttribute_location ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_5172 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_5172->mAssociatedValue1 ;
      result_outResult = extractedValue_propertyName.mAttribute_location ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_controllerProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_controllerProperty * extractPtr_5264 = (const cEnumAssociatedValues_observablePropertyAST_controllerProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_5264->mAssociatedValue1 ;
      result_outResult = extractedValue_propertyName.mAttribute_location ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Category method '@observablePropertyAST enterInTransientDependencyGraph'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterInTransientDependencyGraph (const GALGAS_observablePropertyAST inObject,
                                                     GALGAS_string inArgument_inDependencyGraphPrefix,
                                                     GALGAS_lstring inArgument_inSlavePropertySignature,
                                                     GALGAS_transientDependencyGraph & ioArgument_ioTransientDependencyGraph,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_masterSignature ;
  const GALGAS_observablePropertyAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_observablePropertyAST::kNotBuilt:
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_6020 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_6020->mAssociatedValue0 ;
      var_masterSignature = inArgument_inDependencyGraphPrefix.add_operation (GALGAS_string (".root."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 140)).add_operation (extractedValue_propertyName.reader_string (SOURCE_FILE ("observable-property.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 140)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_6187 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_6187->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_6187->mAssociatedValue1 ;
      var_masterSignature = inArgument_inDependencyGraphPrefix.add_operation (GALGAS_string (".root."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 142)).add_operation (extractedValue_propertyName.reader_string (SOURCE_FILE ("observable-property.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 142)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 142)).add_operation (extractedValue_optionName.reader_string (SOURCE_FILE ("observable-property.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 142)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_6368 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_relationshipName = extractPtr_6368->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_6368->mAssociatedValue1 ;
      var_masterSignature = inArgument_inDependencyGraphPrefix.add_operation (GALGAS_string (".root."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 144)).add_operation (extractedValue_relationshipName.reader_string (SOURCE_FILE ("observable-property.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 144)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 144)).add_operation (extractedValue_propertyName.reader_string (SOURCE_FILE ("observable-property.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 144)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_6587 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_6587->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_6587->mAssociatedValue1 ;
      var_masterSignature = inArgument_inDependencyGraphPrefix.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 146)).add_operation (extractedValue_propertyName.reader_string (SOURCE_FILE ("observable-property.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 146)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, extractedValue_optionName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_masterSignature.dotAssign_operation (GALGAS_string (".").add_operation (extractedValue_optionName.reader_string (SOURCE_FILE ("observable-property.galgas", 148)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 148))  COMMA_SOURCE_FILE ("observable-property.galgas", 148)) ;
      }
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_6823 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_prefsName = extractPtr_6823->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_6823->mAssociatedValue1 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_6823->mAssociatedValue2 ;
      var_masterSignature = GALGAS_string ("prefs.").add_operation (extractedValue_prefsName.reader_string (SOURCE_FILE ("observable-property.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 151)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 151)).add_operation (extractedValue_propertyName.reader_string (SOURCE_FILE ("observable-property.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 151)) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, extractedValue_optionName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_2) {
        var_masterSignature.dotAssign_operation (GALGAS_string (".").add_operation (extractedValue_optionName.reader_string (SOURCE_FILE ("observable-property.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 153))  COMMA_SOURCE_FILE ("observable-property.galgas", 153)) ;
      }
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_controllerProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_controllerProperty * extractPtr_6967 = (const cEnumAssociatedValues_observablePropertyAST_controllerProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_6967->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_6967->mAssociatedValue1 ;
      var_masterSignature = GALGAS_string ("self.").add_operation (extractedValue_controllerName.reader_string (SOURCE_FILE ("observable-property.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 156)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 156)).add_operation (extractedValue_propertyName.reader_string (SOURCE_FILE ("observable-property.galgas", 156)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 156)) ;
    }
    break ;
  }
  {
  const GALGAS_observablePropertyAST temp_3 = inObject ;
  ioArgument_ioTransientDependencyGraph.modifier_addEdge (GALGAS_lstring::constructor_new (var_masterSignature, categoryReader_location (temp_3, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 159))  COMMA_SOURCE_FILE ("observable-property.galgas", 159)), inArgument_inSlavePropertySignature COMMA_SOURCE_FILE ("observable-property.galgas", 158)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Category method '@observablePropertyAST analyzeObservableProperty'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_analyzeObservableProperty (const GALGAS_observablePropertyAST inObject,
                                               const GALGAS_observablePropertyMap constinArgument_inRootObservablePropertyMap,
                                               const GALGAS_semanticContext constinArgument_inSemanticContext,
                                               const GALGAS_observablePropertyMap constinArgument_inObservablePropertyMap,
                                               GALGAS_typeKind & outArgument_outType,
                                               GALGAS_propertyKind & outArgument_outKind,
                                               GALGAS_propertyMultiplicity & outArgument_outMultiplicity,
                                               GALGAS_string & outArgument_outSwiftTypeStringForTransientFunctionArgument,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outType.drop () ; // Release 'out' argument
  outArgument_outKind.drop () ; // Release 'out' argument
  outArgument_outMultiplicity.drop () ; // Release 'out' argument
  outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release 'out' argument
  const GALGAS_observablePropertyAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_observablePropertyAST::kNotBuilt:
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_8085 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_8085->mAssociatedValue0 ;
      GALGAS_string joker_8001 ; // Joker input parameter
      constinArgument_inRootObservablePropertyMap.method_searchKey (extractedValue_propertyName, outArgument_outType, outArgument_outKind, outArgument_outMultiplicity, joker_8001, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 179)) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = categoryReader_swiftTypeName (outArgument_outType, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 186)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_8789 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_8789->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_8789->mAssociatedValue1 ;
      GALGAS_string joker_8285 ; // Joker input parameter
      constinArgument_inRootObservablePropertyMap.method_searchKey (extractedValue_propertyName, outArgument_outType, outArgument_outKind, outArgument_outMultiplicity, joker_8285, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 188)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, outArgument_outMultiplicity.objectCompare (GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("observable-property.galgas", 195)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_location location_2 (extractedValue_optionName.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_2, GALGAS_string ("a property cannot accept any option")  COMMA_SOURCE_FILE ("observable-property.galgas", 196)) ;
      }else if (kBoolFalse == test_1) {
        outArgument_outKind = GALGAS_propertyKind::constructor_transient (SOURCE_FILE ("observable-property.galgas", 198)) ;
        outArgument_outMultiplicity = GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("observable-property.galgas", 199)) ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, extractedValue_optionName.mAttribute_string.objectCompare (GALGAS_string ("count"))).boolEnum () ;
        if (kBoolTrue == test_3) {
          outArgument_outType = GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 201)) ;
        }else if (kBoolFalse == test_3) {
          const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, extractedValue_optionName.mAttribute_string.objectCompare (GALGAS_string ("empty"))).boolEnum () ;
          if (kBoolTrue == test_4) {
            outArgument_outType = GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("observable-property.galgas", 203)) ;
          }else if (kBoolFalse == test_4) {
            GALGAS_location location_5 (extractedValue_optionName.reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_5, GALGAS_string ("uknown option (accepted : 'count', 'empty')")  COMMA_SOURCE_FILE ("observable-property.galgas", 205)) ;
          }
        }
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = categoryReader_swiftTypeName (outArgument_outType, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 208)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_10038 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_relationshipName = extractPtr_10038->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_10038->mAssociatedValue1 ;
      GALGAS_typeKind var_relationshipType ;
      GALGAS_string joker_9028 ; // Joker input parameter
      constinArgument_inRootObservablePropertyMap.method_searchKey (extractedValue_relationshipName, var_relationshipType, outArgument_outKind, outArgument_outMultiplicity, joker_9028, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 210)) ;
      const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, outArgument_outMultiplicity.objectCompare (GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("observable-property.galgas", 217)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_location location_7 (extractedValue_relationshipName.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_7, GALGAS_string ("a property cannot accept 'all'")  COMMA_SOURCE_FILE ("observable-property.galgas", 218)) ;
      }
      switch (var_relationshipType.enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_stringType:
      case GALGAS_typeKind::kEnum_boolType:
      case GALGAS_typeKind::kEnum_colorType:
      case GALGAS_typeKind::kEnum_dateType:
      case GALGAS_typeKind::kEnum_doubleType:
      case GALGAS_typeKind::kEnum_integerType:
        {
          GALGAS_location location_8 (extractedValue_relationshipName.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_8, GALGAS_string ("a property cannot accept 'all'")  COMMA_SOURCE_FILE ("observable-property.galgas", 222)) ;
          outArgument_outType.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_enumType:
        {
          GALGAS_location location_9 (extractedValue_relationshipName.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_9, GALGAS_string ("a property cannot accept 'all'")  COMMA_SOURCE_FILE ("observable-property.galgas", 224)) ;
          outArgument_outType.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_entityType:
        {
          const cEnumAssociatedValues_typeKind_entityType * extractPtr_9911 = (const cEnumAssociatedValues_typeKind_entityType *) (var_relationshipType.unsafePointer ()) ;
          const GALGAS_string extractedValue_entityName = extractPtr_9911->mAssociatedValue0 ;
          GALGAS_observablePropertyMap var_entityObservablePropertyMap ;
          constinArgument_inSemanticContext.mAttribute_mEntityObservablePropertyMap.method_searchKey (extractedValue_entityName.reader_nowhere (SOURCE_FILE ("observable-property.galgas", 227)), var_entityObservablePropertyMap, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 226)) ;
          GALGAS_string joker_9771 ; // Joker input parameter
          var_entityObservablePropertyMap.method_searchKey (extractedValue_propertyName, outArgument_outType, outArgument_outKind, outArgument_outMultiplicity, joker_9771, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 230)) ;
          const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, outArgument_outMultiplicity.objectCompare (GALGAS_propertyMultiplicity::constructor_collection (SOURCE_FILE ("observable-property.galgas", 237)))).boolEnum () ;
          if (kBoolTrue == test_10) {
            GALGAS_location location_11 (extractedValue_propertyName.reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_11, GALGAS_string ("the observed property cannot be a collection")  COMMA_SOURCE_FILE ("observable-property.galgas", 238)) ;
          }
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = GALGAS_string ("[").add_operation (categoryReader_swiftTypeName (var_relationshipType, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 241)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 241)).add_operation (extractedValue_propertyName.reader_string (SOURCE_FILE ("observable-property.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 241)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 241)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_10753 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_10753->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_10753->mAssociatedValue1 ;
      GALGAS_string joker_10224 ; // Joker input parameter
      constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_propertyName, outArgument_outType, outArgument_outKind, outArgument_outMultiplicity, joker_10224, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 243)) ;
      GALGAS_bool test_12 = GALGAS_bool (kIsNotEqual, extractedValue_optionName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())) ;
      if (kBoolTrue == test_12.boolEnum ()) {
        test_12 = GALGAS_bool (kIsEqual, outArgument_outMultiplicity.objectCompare (GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("observable-property.galgas", 250)))) ;
      }
      const enumGalgasBool test_13 = test_12.boolEnum () ;
      if (kBoolTrue == test_13) {
        GALGAS_location location_14 (extractedValue_optionName.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_14, GALGAS_string ("a property cannot accept any option")  COMMA_SOURCE_FILE ("observable-property.galgas", 251)) ;
      }else if (kBoolFalse == test_13) {
        GALGAS_bool test_15 = GALGAS_bool (kIsEqual, outArgument_outMultiplicity.objectCompare (GALGAS_propertyMultiplicity::constructor_collection (SOURCE_FILE ("observable-property.galgas", 252)))) ;
        if (kBoolTrue == test_15.boolEnum ()) {
          test_15 = GALGAS_bool (kIsNotEqual, extractedValue_optionName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())) ;
        }
        const enumGalgasBool test_16 = test_15.boolEnum () ;
        if (kBoolTrue == test_16) {
          outArgument_outKind = GALGAS_propertyKind::constructor_transient (SOURCE_FILE ("observable-property.galgas", 253)) ;
          outArgument_outMultiplicity = GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("observable-property.galgas", 254)) ;
          const enumGalgasBool test_17 = GALGAS_bool (kIsEqual, extractedValue_optionName.mAttribute_string.objectCompare (GALGAS_string ("count"))).boolEnum () ;
          if (kBoolTrue == test_17) {
            outArgument_outType = GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 256)) ;
          }else if (kBoolFalse == test_17) {
            GALGAS_location location_18 (extractedValue_optionName.reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_18, GALGAS_string ("uknown option (accepted : 'count', 'empty')")  COMMA_SOURCE_FILE ("observable-property.galgas", 258)) ;
          }
        }
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = categoryReader_swiftTypeName (outArgument_outType, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 261)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_11625 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_prefsName = extractPtr_11625->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_11625->mAssociatedValue1 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_11625->mAssociatedValue2 ;
      GALGAS_observablePropertyMap var_observablePropertyMap ;
      constinArgument_inSemanticContext.mAttribute_mPrefsObservablePropertyMap.method_searchKey (extractedValue_prefsName, var_observablePropertyMap, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 263)) ;
      GALGAS_string joker_11097 ; // Joker input parameter
      var_observablePropertyMap.method_searchKey (extractedValue_propertyName, outArgument_outType, outArgument_outKind, outArgument_outMultiplicity, joker_11097, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 267)) ;
      GALGAS_bool test_19 = GALGAS_bool (kIsNotEqual, extractedValue_optionName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())) ;
      if (kBoolTrue == test_19.boolEnum ()) {
        test_19 = GALGAS_bool (kIsEqual, outArgument_outMultiplicity.objectCompare (GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("observable-property.galgas", 274)))) ;
      }
      const enumGalgasBool test_20 = test_19.boolEnum () ;
      if (kBoolTrue == test_20) {
        GALGAS_location location_21 (extractedValue_optionName.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_21, GALGAS_string ("a property cannot accet any option")  COMMA_SOURCE_FILE ("observable-property.galgas", 275)) ;
      }else if (kBoolFalse == test_20) {
        GALGAS_bool test_22 = GALGAS_bool (kIsEqual, outArgument_outMultiplicity.objectCompare (GALGAS_propertyMultiplicity::constructor_collection (SOURCE_FILE ("observable-property.galgas", 276)))) ;
        if (kBoolTrue == test_22.boolEnum ()) {
          test_22 = GALGAS_bool (kIsNotEqual, extractedValue_optionName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())) ;
        }
        const enumGalgasBool test_23 = test_22.boolEnum () ;
        if (kBoolTrue == test_23) {
          outArgument_outKind = GALGAS_propertyKind::constructor_transient (SOURCE_FILE ("observable-property.galgas", 277)) ;
          outArgument_outMultiplicity = GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("observable-property.galgas", 278)) ;
          const enumGalgasBool test_24 = GALGAS_bool (kIsEqual, extractedValue_optionName.mAttribute_string.objectCompare (GALGAS_string ("count"))).boolEnum () ;
          if (kBoolTrue == test_24) {
            outArgument_outType = GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 280)) ;
          }else if (kBoolFalse == test_24) {
            GALGAS_location location_25 (extractedValue_optionName.reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_25, GALGAS_string ("uknown option (accepted : 'count', 'empty')")  COMMA_SOURCE_FILE ("observable-property.galgas", 282)) ;
          }
        }
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = categoryReader_swiftTypeName (outArgument_outType, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 285)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_controllerProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_controllerProperty * extractPtr_12038 = (const cEnumAssociatedValues_observablePropertyAST_controllerProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_12038->mAssociatedValue1 ;
      const enumGalgasBool test_26 = GALGAS_bool (kIsEqual, extractedValue_propertyName.mAttribute_string.objectCompare (GALGAS_string ("selectionCount"))).boolEnum () ;
      if (kBoolTrue == test_26) {
        outArgument_outMultiplicity = GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("observable-property.galgas", 288)) ;
        outArgument_outKind = GALGAS_propertyKind::constructor_transient (SOURCE_FILE ("observable-property.galgas", 289)) ;
        outArgument_outType = GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 290)) ;
      }else if (kBoolFalse == test_26) {
        GALGAS_location location_27 (extractedValue_propertyName.reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_27, GALGAS_string ("uknown option (accepted : 'selectionCount')")  COMMA_SOURCE_FILE ("observable-property.galgas", 292)) ;
        outArgument_outMultiplicity.drop () ; // Release error dropped variable
        outArgument_outKind.drop () ; // Release error dropped variable
        outArgument_outType.drop () ; // Release error dropped variable
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = categoryReader_swiftTypeName (outArgument_outType, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 296)) ;
    }
    break ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Category Reader '@observablePropertyAST generateAddObserverCall'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_generateAddObserverCall (const GALGAS_observablePropertyAST & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_observablePropertyAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_observablePropertyAST::kNotBuilt:
    break ;
  case GALGAS_observablePropertyAST::kEnum_controllerProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_controllerProperty * extractPtr_7248 = (const cEnumAssociatedValues_observablePropertyAST_controllerProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_7248->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_7248->mAssociatedValue1 ;
      result_outResult = extractedValue_controllerName.mAttribute_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 183)).add_operation (extractedValue_propertyName.reader_string (SOURCE_FILE ("transient-property.galgas", 183)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 183)).add_operation (GALGAS_string (".addObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 183)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_7345 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_7345->mAssociatedValue0 ;
      result_outResult = extractedValue_masterName.mAttribute_string.add_operation (GALGAS_string (".addObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 185)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_7486 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_prefsName = extractPtr_7486->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_7486->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("g_").add_operation (extractedValue_prefsName.reader_string (SOURCE_FILE ("transient-property.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 187)).add_operation (GALGAS_string ("\?."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 187)).add_operation (extractedValue_propertyName.reader_string (SOURCE_FILE ("transient-property.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 187)).add_operation (GALGAS_string (".addObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 187)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_7590 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_7590->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("rootObject.").add_operation (extractedValue_masterName.reader_string (SOURCE_FILE ("transient-property.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 189)).add_operation (GALGAS_string (".addObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 189)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_7743 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_7743->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_7743->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("rootObject.").add_operation (extractedValue_masterName.reader_string (SOURCE_FILE ("transient-property.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 191)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 191)).add_operation (extractedValue_optionName.reader_string (SOURCE_FILE ("transient-property.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 191)).add_operation (GALGAS_string (".addObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 191)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_7916 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_relationshipName = extractPtr_7916->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_7916->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.rootObject.").add_operation (extractedValue_relationshipName.reader_string (SOURCE_FILE ("transient-property.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 193)).add_operation (GALGAS_string (".addObserverOf_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 193)).add_operation (extractedValue_propertyName.reader_string (SOURCE_FILE ("transient-property.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 193)) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Category Reader '@observablePropertyAST generateRemoveObserverCall'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_generateRemoveObserverCall (const GALGAS_observablePropertyAST & inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_observablePropertyAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_observablePropertyAST::kNotBuilt:
    break ;
  case GALGAS_observablePropertyAST::kEnum_controllerProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_controllerProperty * extractPtr_8297 = (const cEnumAssociatedValues_observablePropertyAST_controllerProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_8297->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_8297->mAssociatedValue1 ;
      result_outResult = extractedValue_controllerName.mAttribute_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 202)).add_operation (extractedValue_propertyName.reader_string (SOURCE_FILE ("transient-property.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 202)).add_operation (GALGAS_string (".removeObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 202)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_8397 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_8397->mAssociatedValue0 ;
      result_outResult = extractedValue_masterName.mAttribute_string.add_operation (GALGAS_string (".removeObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 204)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_8541 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_prefsName = extractPtr_8541->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_8541->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("g_").add_operation (extractedValue_prefsName.reader_string (SOURCE_FILE ("transient-property.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 206)).add_operation (GALGAS_string ("\?."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 206)).add_operation (extractedValue_propertyName.reader_string (SOURCE_FILE ("transient-property.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 206)).add_operation (GALGAS_string (".removeObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 206)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_8648 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_8648->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("rootObject.").add_operation (extractedValue_masterName.reader_string (SOURCE_FILE ("transient-property.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 208)).add_operation (GALGAS_string (".removeObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 208)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_8804 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_8804->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_8804->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("rootObject.").add_operation (extractedValue_masterName.reader_string (SOURCE_FILE ("transient-property.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 210)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 210)).add_operation (extractedValue_optionName.reader_string (SOURCE_FILE ("transient-property.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 210)).add_operation (GALGAS_string (".removeObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 210)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_8980 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_relationshipName = extractPtr_8980->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_8980->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.rootObject.").add_operation (extractedValue_relationshipName.reader_string (SOURCE_FILE ("transient-property.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 212)).add_operation (GALGAS_string (".removeObserverOf_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 212)).add_operation (extractedValue_propertyName.reader_string (SOURCE_FILE ("transient-property.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 212)) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Abstract category method '@astDeclaration typeInventory'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_astDeclaration_typeInventory> gCategoryMethodTable_astDeclaration_typeInventory ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_typeInventory (const int32_t inClassIndex,
                                        categoryMethodSignature_astDeclaration_typeInventory inMethod) {
  gCategoryMethodTable_astDeclaration_typeInventory.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_astDeclaration_typeInventory (void) {
  gCategoryMethodTable_astDeclaration_typeInventory.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_astDeclaration_typeInventory (NULL,
                                                         freeCategoryMethod_astDeclaration_typeInventory) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_typeInventory (const cPtr_astDeclaration * inObject,
                                       GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                       GALGAS_transientDependencyGraph & io_ioTransientDependencyGraph,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_astDeclaration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_astDeclaration_typeInventory f = NULL ;
    if (classIndex < gCategoryMethodTable_astDeclaration_typeInventory.count ()) {
      f = gCategoryMethodTable_astDeclaration_typeInventory (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_astDeclaration_typeInventory.count ()) {
           f = gCategoryMethodTable_astDeclaration_typeInventory (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_astDeclaration_typeInventory.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioUnifiedTypeMap, io_ioTransientDependencyGraph, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Abstract category method '@astDeclaration buildObservablePropertyMaps'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_astDeclaration_buildObservablePropertyMaps> gCategoryMethodTable_astDeclaration_buildObservablePropertyMaps ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_buildObservablePropertyMaps (const int32_t inClassIndex,
                                                      categoryMethodSignature_astDeclaration_buildObservablePropertyMaps inMethod) {
  gCategoryMethodTable_astDeclaration_buildObservablePropertyMaps.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_astDeclaration_buildObservablePropertyMaps (void) {
  gCategoryMethodTable_astDeclaration_buildObservablePropertyMaps.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_astDeclaration_buildObservablePropertyMaps (NULL,
                                                                       freeCategoryMethod_astDeclaration_buildObservablePropertyMaps) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_buildObservablePropertyMaps (const cPtr_astDeclaration * inObject,
                                                     const GALGAS_unifiedTypeMap constin_inUnifiedTypeMap,
                                                     GALGAS_semanticContext & io_ioSemanticContext,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_astDeclaration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_astDeclaration_buildObservablePropertyMaps f = NULL ;
    if (classIndex < gCategoryMethodTable_astDeclaration_buildObservablePropertyMaps.count ()) {
      f = gCategoryMethodTable_astDeclaration_buildObservablePropertyMaps (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_astDeclaration_buildObservablePropertyMaps.count ()) {
           f = gCategoryMethodTable_astDeclaration_buildObservablePropertyMaps (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_astDeclaration_buildObservablePropertyMaps.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inUnifiedTypeMap, io_ioSemanticContext, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Abstract category method '@astDeclaration semanticAnalysis'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_astDeclaration_semanticAnalysis> gCategoryMethodTable_astDeclaration_semanticAnalysis ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_semanticAnalysis (const int32_t inClassIndex,
                                           categoryMethodSignature_astDeclaration_semanticAnalysis inMethod) {
  gCategoryMethodTable_astDeclaration_semanticAnalysis.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_astDeclaration_semanticAnalysis (void) {
  gCategoryMethodTable_astDeclaration_semanticAnalysis.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_astDeclaration_semanticAnalysis (NULL,
                                                            freeCategoryMethod_astDeclaration_semanticAnalysis) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_semanticAnalysis (const cPtr_astDeclaration * inObject,
                                          const GALGAS_semanticContext constin_inSemanticContext,
                                          GALGAS_structForGeneration & io_ioGeneration,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_astDeclaration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_astDeclaration_semanticAnalysis f = NULL ;
    if (classIndex < gCategoryMethodTable_astDeclaration_semanticAnalysis.count ()) {
      f = gCategoryMethodTable_astDeclaration_semanticAnalysis (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_astDeclaration_semanticAnalysis.count ()) {
           f = gCategoryMethodTable_astDeclaration_semanticAnalysis (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_astDeclaration_semanticAnalysis.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inSemanticContext, io_ioGeneration, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structForGeneration::GALGAS_structForGeneration (void) :
mAttribute_mTransientListForGeneration (),
mAttribute_mActionListForGeneration (),
mAttribute_mPreferenceListForGeneration (),
mAttribute_mDocumentListForGeneration (),
mAttribute_mEntityListForGeneration (),
mAttribute_mEnumListForGeneration (),
mAttribute_mNeededOutletClasses (),
mAttribute_mAllArrayControllerForGeneration (),
mAttribute_mValidationStubRoutineListForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structForGeneration::~ GALGAS_structForGeneration (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structForGeneration::GALGAS_structForGeneration (const GALGAS_transientDefinitionListForGeneration & inOperand0,
                                                        const GALGAS_actionListForGeneration & inOperand1,
                                                        const GALGAS_preferenceListForGeneration & inOperand2,
                                                        const GALGAS_documentListForGeneration & inOperand3,
                                                        const GALGAS_entityListForGeneration & inOperand4,
                                                        const GALGAS_enumListForGeneration & inOperand5,
                                                        const GALGAS_stringset & inOperand6,
                                                        const GALGAS_arrayControllerForGeneration & inOperand7,
                                                        const GALGAS_validationStubRoutineListForGeneration & inOperand8) :
mAttribute_mTransientListForGeneration (inOperand0),
mAttribute_mActionListForGeneration (inOperand1),
mAttribute_mPreferenceListForGeneration (inOperand2),
mAttribute_mDocumentListForGeneration (inOperand3),
mAttribute_mEntityListForGeneration (inOperand4),
mAttribute_mEnumListForGeneration (inOperand5),
mAttribute_mNeededOutletClasses (inOperand6),
mAttribute_mAllArrayControllerForGeneration (inOperand7),
mAttribute_mValidationStubRoutineListForGeneration (inOperand8) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structForGeneration GALGAS_structForGeneration::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_structForGeneration (GALGAS_transientDefinitionListForGeneration::constructor_emptyList (HERE),
                                     GALGAS_actionListForGeneration::constructor_emptyList (HERE),
                                     GALGAS_preferenceListForGeneration::constructor_emptyList (HERE),
                                     GALGAS_documentListForGeneration::constructor_emptyList (HERE),
                                     GALGAS_entityListForGeneration::constructor_emptyList (HERE),
                                     GALGAS_enumListForGeneration::constructor_emptyList (HERE),
                                     GALGAS_stringset::constructor_emptySet (HERE),
                                     GALGAS_arrayControllerForGeneration::constructor_emptyList (HERE),
                                     GALGAS_validationStubRoutineListForGeneration::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structForGeneration GALGAS_structForGeneration::constructor_new (const GALGAS_transientDefinitionListForGeneration & inOperand0,
                                                                        const GALGAS_actionListForGeneration & inOperand1,
                                                                        const GALGAS_preferenceListForGeneration & inOperand2,
                                                                        const GALGAS_documentListForGeneration & inOperand3,
                                                                        const GALGAS_entityListForGeneration & inOperand4,
                                                                        const GALGAS_enumListForGeneration & inOperand5,
                                                                        const GALGAS_stringset & inOperand6,
                                                                        const GALGAS_arrayControllerForGeneration & inOperand7,
                                                                        const GALGAS_validationStubRoutineListForGeneration & inOperand8 
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_structForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid ()) {
    result = GALGAS_structForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_structForGeneration::objectCompare (const GALGAS_structForGeneration & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mTransientListForGeneration.objectCompare (inOperand.mAttribute_mTransientListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mActionListForGeneration.objectCompare (inOperand.mAttribute_mActionListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPreferenceListForGeneration.objectCompare (inOperand.mAttribute_mPreferenceListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDocumentListForGeneration.objectCompare (inOperand.mAttribute_mDocumentListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEntityListForGeneration.objectCompare (inOperand.mAttribute_mEntityListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEnumListForGeneration.objectCompare (inOperand.mAttribute_mEnumListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mNeededOutletClasses.objectCompare (inOperand.mAttribute_mNeededOutletClasses) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAllArrayControllerForGeneration.objectCompare (inOperand.mAttribute_mAllArrayControllerForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mValidationStubRoutineListForGeneration.objectCompare (inOperand.mAttribute_mValidationStubRoutineListForGeneration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_structForGeneration::isValid (void) const {
  return mAttribute_mTransientListForGeneration.isValid () && mAttribute_mActionListForGeneration.isValid () && mAttribute_mPreferenceListForGeneration.isValid () && mAttribute_mDocumentListForGeneration.isValid () && mAttribute_mEntityListForGeneration.isValid () && mAttribute_mEnumListForGeneration.isValid () && mAttribute_mNeededOutletClasses.isValid () && mAttribute_mAllArrayControllerForGeneration.isValid () && mAttribute_mValidationStubRoutineListForGeneration.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structForGeneration::drop (void) {
  mAttribute_mTransientListForGeneration.drop () ;
  mAttribute_mActionListForGeneration.drop () ;
  mAttribute_mPreferenceListForGeneration.drop () ;
  mAttribute_mDocumentListForGeneration.drop () ;
  mAttribute_mEntityListForGeneration.drop () ;
  mAttribute_mEnumListForGeneration.drop () ;
  mAttribute_mNeededOutletClasses.drop () ;
  mAttribute_mAllArrayControllerForGeneration.drop () ;
  mAttribute_mValidationStubRoutineListForGeneration.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structForGeneration::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "<struct @structForGeneration:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mTransientListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mActionListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPreferenceListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDocumentListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEntityListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEnumListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mNeededOutletClasses.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAllArrayControllerForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mValidationStubRoutineListForGeneration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientDefinitionListForGeneration GALGAS_structForGeneration::reader_mTransientListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTransientListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionListForGeneration GALGAS_structForGeneration::reader_mActionListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActionListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_preferenceListForGeneration GALGAS_structForGeneration::reader_mPreferenceListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPreferenceListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_documentListForGeneration GALGAS_structForGeneration::reader_mDocumentListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDocumentListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityListForGeneration GALGAS_structForGeneration::reader_mEntityListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEntityListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumListForGeneration GALGAS_structForGeneration::reader_mEnumListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEnumListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_structForGeneration::reader_mNeededOutletClasses (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNeededOutletClasses ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerForGeneration GALGAS_structForGeneration::reader_mAllArrayControllerForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAllArrayControllerForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_validationStubRoutineListForGeneration GALGAS_structForGeneration::reader_mValidationStubRoutineListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValidationStubRoutineListForGeneration ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @structForGeneration type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structForGeneration ("structForGeneration",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_structForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_structForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structForGeneration GALGAS_structForGeneration::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_structForGeneration result ;
  const GALGAS_structForGeneration * p = (const GALGAS_structForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_structForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_astDeclarationList_2D_element::GALGAS_astDeclarationList_2D_element (void) :
mAttribute_mDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_astDeclarationList_2D_element::~ GALGAS_astDeclarationList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_astDeclarationList_2D_element::GALGAS_astDeclarationList_2D_element (const GALGAS_astDeclaration & inOperand0) :
mAttribute_mDeclaration (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_astDeclarationList_2D_element GALGAS_astDeclarationList_2D_element::constructor_new (const GALGAS_astDeclaration & inOperand0 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_astDeclarationList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_astDeclarationList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_astDeclarationList_2D_element::objectCompare (const GALGAS_astDeclarationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mDeclaration.objectCompare (inOperand.mAttribute_mDeclaration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_astDeclarationList_2D_element::isValid (void) const {
  return mAttribute_mDeclaration.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_astDeclarationList_2D_element::drop (void) {
  mAttribute_mDeclaration.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_astDeclarationList_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @astDeclarationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_astDeclaration GALGAS_astDeclarationList_2D_element::reader_mDeclaration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDeclaration ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @astDeclarationList-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_astDeclarationList_2D_element ("astDeclarationList-element",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_astDeclarationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astDeclarationList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_astDeclarationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astDeclarationList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_astDeclarationList_2D_element GALGAS_astDeclarationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_astDeclarationList_2D_element result ;
  const GALGAS_astDeclarationList_2D_element * p = (const GALGAS_astDeclarationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_astDeclarationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astDeclarationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap_2D_element::GALGAS_enumConstantMap_2D_element (void) :
mAttribute_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap_2D_element::~ GALGAS_enumConstantMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap_2D_element::GALGAS_enumConstantMap_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap_2D_element GALGAS_enumConstantMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_enumConstantMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap_2D_element GALGAS_enumConstantMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_enumConstantMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_enumConstantMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_enumConstantMap_2D_element::objectCompare (const GALGAS_enumConstantMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_enumConstantMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumConstantMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumConstantMap_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @enumConstantMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_enumConstantMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @enumConstantMap-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumConstantMap_2D_element ("enumConstantMap-element",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_enumConstantMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumConstantMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_enumConstantMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumConstantMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_documentObservablePropertyMap_2D_element::GALGAS_documentObservablePropertyMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mObservablePropertyMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_documentObservablePropertyMap_2D_element::~ GALGAS_documentObservablePropertyMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_documentObservablePropertyMap_2D_element::GALGAS_documentObservablePropertyMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_observablePropertyMap & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mObservablePropertyMap (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_documentObservablePropertyMap_2D_element GALGAS_documentObservablePropertyMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_documentObservablePropertyMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_observablePropertyMap::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_documentObservablePropertyMap_2D_element GALGAS_documentObservablePropertyMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                  const GALGAS_observablePropertyMap & inOperand1 
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_documentObservablePropertyMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_documentObservablePropertyMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_documentObservablePropertyMap_2D_element::objectCompare (const GALGAS_documentObservablePropertyMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mObservablePropertyMap.objectCompare (inOperand.mAttribute_mObservablePropertyMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_documentObservablePropertyMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mObservablePropertyMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_documentObservablePropertyMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mObservablePropertyMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_documentObservablePropertyMap_2D_element::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "<struct @documentObservablePropertyMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mObservablePropertyMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_documentObservablePropertyMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyMap GALGAS_documentObservablePropertyMap_2D_element::reader_mObservablePropertyMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mObservablePropertyMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @documentObservablePropertyMap-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_documentObservablePropertyMap_2D_element ("documentObservablePropertyMap-element",
                                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_documentObservablePropertyMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_documentObservablePropertyMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_documentObservablePropertyMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_documentObservablePropertyMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityObservablePropertyMap_2D_element::GALGAS_entityObservablePropertyMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mObservablePropertyMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityObservablePropertyMap_2D_element::~ GALGAS_entityObservablePropertyMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityObservablePropertyMap_2D_element::GALGAS_entityObservablePropertyMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_observablePropertyMap & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mObservablePropertyMap (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityObservablePropertyMap_2D_element GALGAS_entityObservablePropertyMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_entityObservablePropertyMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_observablePropertyMap::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityObservablePropertyMap_2D_element GALGAS_entityObservablePropertyMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_observablePropertyMap & inOperand1 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_entityObservablePropertyMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_entityObservablePropertyMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_entityObservablePropertyMap_2D_element::objectCompare (const GALGAS_entityObservablePropertyMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mObservablePropertyMap.objectCompare (inOperand.mAttribute_mObservablePropertyMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_entityObservablePropertyMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mObservablePropertyMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_entityObservablePropertyMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mObservablePropertyMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_entityObservablePropertyMap_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @entityObservablePropertyMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mObservablePropertyMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_entityObservablePropertyMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyMap GALGAS_entityObservablePropertyMap_2D_element::reader_mObservablePropertyMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mObservablePropertyMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @entityObservablePropertyMap-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_entityObservablePropertyMap_2D_element ("entityObservablePropertyMap-element",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_entityObservablePropertyMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityObservablePropertyMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_entityObservablePropertyMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_entityObservablePropertyMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefsObservablePropertyMap_2D_element::GALGAS_prefsObservablePropertyMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mObservablePropertyMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefsObservablePropertyMap_2D_element::~ GALGAS_prefsObservablePropertyMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefsObservablePropertyMap_2D_element::GALGAS_prefsObservablePropertyMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_observablePropertyMap & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mObservablePropertyMap (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefsObservablePropertyMap_2D_element GALGAS_prefsObservablePropertyMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_prefsObservablePropertyMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_observablePropertyMap::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefsObservablePropertyMap_2D_element GALGAS_prefsObservablePropertyMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_observablePropertyMap & inOperand1 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_prefsObservablePropertyMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_prefsObservablePropertyMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_prefsObservablePropertyMap_2D_element::objectCompare (const GALGAS_prefsObservablePropertyMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mObservablePropertyMap.objectCompare (inOperand.mAttribute_mObservablePropertyMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_prefsObservablePropertyMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mObservablePropertyMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_prefsObservablePropertyMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mObservablePropertyMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_prefsObservablePropertyMap_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @prefsObservablePropertyMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mObservablePropertyMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_prefsObservablePropertyMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyMap GALGAS_prefsObservablePropertyMap_2D_element::reader_mObservablePropertyMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mObservablePropertyMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @prefsObservablePropertyMap-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_prefsObservablePropertyMap_2D_element ("prefsObservablePropertyMap-element",
                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_prefsObservablePropertyMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefsObservablePropertyMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_prefsObservablePropertyMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefsObservablePropertyMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefsObservablePropertyMap_2D_element GALGAS_prefsObservablePropertyMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_prefsObservablePropertyMap_2D_element result ;
  const GALGAS_prefsObservablePropertyMap_2D_element * p = (const GALGAS_prefsObservablePropertyMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_prefsObservablePropertyMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefsObservablePropertyMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassDeclarationList_2D_element::GALGAS_outletClassDeclarationList_2D_element (void) :
mAttribute_mUserDefined (),
mAttribute_mOutletClassName (),
mAttribute_mHasRunAction (),
mAttribute_mHasEnabled () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassDeclarationList_2D_element::~ GALGAS_outletClassDeclarationList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassDeclarationList_2D_element::GALGAS_outletClassDeclarationList_2D_element (const GALGAS_bool & inOperand0,
                                                                                            const GALGAS_lstring & inOperand1,
                                                                                            const GALGAS_bool & inOperand2,
                                                                                            const GALGAS_bool & inOperand3) :
mAttribute_mUserDefined (inOperand0),
mAttribute_mOutletClassName (inOperand1),
mAttribute_mHasRunAction (inOperand2),
mAttribute_mHasEnabled (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassDeclarationList_2D_element GALGAS_outletClassDeclarationList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_outletClassDeclarationList_2D_element (GALGAS_bool::constructor_default (HERE),
                                                       GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_bool::constructor_default (HERE),
                                                       GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassDeclarationList_2D_element GALGAS_outletClassDeclarationList_2D_element::constructor_new (const GALGAS_bool & inOperand0,
                                                                                                            const GALGAS_lstring & inOperand1,
                                                                                                            const GALGAS_bool & inOperand2,
                                                                                                            const GALGAS_bool & inOperand3 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletClassDeclarationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_outletClassDeclarationList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_outletClassDeclarationList_2D_element::objectCompare (const GALGAS_outletClassDeclarationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mUserDefined.objectCompare (inOperand.mAttribute_mUserDefined) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOutletClassName.objectCompare (inOperand.mAttribute_mOutletClassName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mHasRunAction.objectCompare (inOperand.mAttribute_mHasRunAction) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mHasEnabled.objectCompare (inOperand.mAttribute_mHasEnabled) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_outletClassDeclarationList_2D_element::isValid (void) const {
  return mAttribute_mUserDefined.isValid () && mAttribute_mOutletClassName.isValid () && mAttribute_mHasRunAction.isValid () && mAttribute_mHasEnabled.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletClassDeclarationList_2D_element::drop (void) {
  mAttribute_mUserDefined.drop () ;
  mAttribute_mOutletClassName.drop () ;
  mAttribute_mHasRunAction.drop () ;
  mAttribute_mHasEnabled.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletClassDeclarationList_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @outletClassDeclarationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mUserDefined.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOutletClassName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mHasRunAction.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mHasEnabled.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_outletClassDeclarationList_2D_element::reader_mUserDefined (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mUserDefined ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_outletClassDeclarationList_2D_element::reader_mOutletClassName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutletClassName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_outletClassDeclarationList_2D_element::reader_mHasRunAction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasRunAction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_outletClassDeclarationList_2D_element::reader_mHasEnabled (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasEnabled ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @outletClassDeclarationList-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletClassDeclarationList_2D_element ("outletClassDeclarationList-element",
                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_outletClassDeclarationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassDeclarationList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_outletClassDeclarationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletClassDeclarationList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassDeclarationList_2D_element GALGAS_outletClassDeclarationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_outletClassDeclarationList_2D_element result ;
  const GALGAS_outletClassDeclarationList_2D_element * p = (const GALGAS_outletClassDeclarationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outletClassDeclarationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletClassDeclarationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassMap_2D_element::GALGAS_outletClassMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mHandlesRunAction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassMap_2D_element::~ GALGAS_outletClassMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassMap_2D_element::GALGAS_outletClassMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_bool & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mHandlesRunAction (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassMap_2D_element GALGAS_outletClassMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_outletClassMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassMap_2D_element GALGAS_outletClassMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_bool & inOperand1 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletClassMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_outletClassMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_outletClassMap_2D_element::objectCompare (const GALGAS_outletClassMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mHandlesRunAction.objectCompare (inOperand.mAttribute_mHandlesRunAction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_outletClassMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mHandlesRunAction.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletClassMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mHandlesRunAction.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletClassMap_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @outletClassMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mHandlesRunAction.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_outletClassMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_outletClassMap_2D_element::reader_mHandlesRunAction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHandlesRunAction ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @outletClassMap-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletClassMap_2D_element ("outletClassMap-element",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_outletClassMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_outletClassMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletClassMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controllerBindingOptionList_2D_element::GALGAS_controllerBindingOptionList_2D_element (void) :
mAttribute_mOptionName (),
mAttribute_mOptionTypeName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controllerBindingOptionList_2D_element::~ GALGAS_controllerBindingOptionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controllerBindingOptionList_2D_element::GALGAS_controllerBindingOptionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_lstring & inOperand1) :
mAttribute_mOptionName (inOperand0),
mAttribute_mOptionTypeName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controllerBindingOptionList_2D_element GALGAS_controllerBindingOptionList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_controllerBindingOptionList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controllerBindingOptionList_2D_element GALGAS_controllerBindingOptionList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_lstring & inOperand1 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controllerBindingOptionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_controllerBindingOptionList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_controllerBindingOptionList_2D_element::objectCompare (const GALGAS_controllerBindingOptionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mOptionName.objectCompare (inOperand.mAttribute_mOptionName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOptionTypeName.objectCompare (inOperand.mAttribute_mOptionTypeName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_controllerBindingOptionList_2D_element::isValid (void) const {
  return mAttribute_mOptionName.isValid () && mAttribute_mOptionTypeName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controllerBindingOptionList_2D_element::drop (void) {
  mAttribute_mOptionName.drop () ;
  mAttribute_mOptionTypeName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controllerBindingOptionList_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @controllerBindingOptionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mOptionName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOptionTypeName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_controllerBindingOptionList_2D_element::reader_mOptionName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_controllerBindingOptionList_2D_element::reader_mOptionTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionTypeName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @controllerBindingOptionList-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controllerBindingOptionList_2D_element ("controllerBindingOptionList-element",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_controllerBindingOptionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controllerBindingOptionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_controllerBindingOptionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controllerBindingOptionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassBindingSpecificationModelList_2D_element::GALGAS_outletClassBindingSpecificationModelList_2D_element (void) :
mAttribute_mModelTypeName (),
mAttribute_mModelShouldBeWritableProperty () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassBindingSpecificationModelList_2D_element::~ GALGAS_outletClassBindingSpecificationModelList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassBindingSpecificationModelList_2D_element::GALGAS_outletClassBindingSpecificationModelList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                        const GALGAS_bool & inOperand1) :
mAttribute_mModelTypeName (inOperand0),
mAttribute_mModelShouldBeWritableProperty (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassBindingSpecificationModelList_2D_element GALGAS_outletClassBindingSpecificationModelList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_outletClassBindingSpecificationModelList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                     GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassBindingSpecificationModelList_2D_element GALGAS_outletClassBindingSpecificationModelList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                        const GALGAS_bool & inOperand1 
                                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletClassBindingSpecificationModelList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_outletClassBindingSpecificationModelList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_outletClassBindingSpecificationModelList_2D_element::objectCompare (const GALGAS_outletClassBindingSpecificationModelList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mModelTypeName.objectCompare (inOperand.mAttribute_mModelTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mModelShouldBeWritableProperty.objectCompare (inOperand.mAttribute_mModelShouldBeWritableProperty) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_outletClassBindingSpecificationModelList_2D_element::isValid (void) const {
  return mAttribute_mModelTypeName.isValid () && mAttribute_mModelShouldBeWritableProperty.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletClassBindingSpecificationModelList_2D_element::drop (void) {
  mAttribute_mModelTypeName.drop () ;
  mAttribute_mModelShouldBeWritableProperty.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletClassBindingSpecificationModelList_2D_element::description (C_String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString << "<struct @outletClassBindingSpecificationModelList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mModelTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mModelShouldBeWritableProperty.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_outletClassBindingSpecificationModelList_2D_element::reader_mModelTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModelTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_outletClassBindingSpecificationModelList_2D_element::reader_mModelShouldBeWritableProperty (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModelShouldBeWritableProperty ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @outletClassBindingSpecificationModelList-element type                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletClassBindingSpecificationModelList_2D_element ("outletClassBindingSpecificationModelList-element",
                                                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_outletClassBindingSpecificationModelList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassBindingSpecificationModelList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_outletClassBindingSpecificationModelList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletClassBindingSpecificationModelList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassBindingSpecificationList_2D_element::GALGAS_outletClassBindingSpecificationList_2D_element (void) :
mAttribute_mIsUserDefined (),
mAttribute_mBindingName (),
mAttribute_mOutletClassBindingSpecificationModelList (),
mAttribute_mBindingOptionList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassBindingSpecificationList_2D_element::~ GALGAS_outletClassBindingSpecificationList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassBindingSpecificationList_2D_element::GALGAS_outletClassBindingSpecificationList_2D_element (const GALGAS_bool & inOperand0,
                                                                                                              const GALGAS_lstring & inOperand1,
                                                                                                              const GALGAS_outletClassBindingSpecificationModelList & inOperand2,
                                                                                                              const GALGAS_controllerBindingOptionList & inOperand3) :
mAttribute_mIsUserDefined (inOperand0),
mAttribute_mBindingName (inOperand1),
mAttribute_mOutletClassBindingSpecificationModelList (inOperand2),
mAttribute_mBindingOptionList (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassBindingSpecificationList_2D_element GALGAS_outletClassBindingSpecificationList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_outletClassBindingSpecificationList_2D_element (GALGAS_bool::constructor_default (HERE),
                                                                GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_outletClassBindingSpecificationModelList::constructor_emptyList (HERE),
                                                                GALGAS_controllerBindingOptionList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassBindingSpecificationList_2D_element GALGAS_outletClassBindingSpecificationList_2D_element::constructor_new (const GALGAS_bool & inOperand0,
                                                                                                                              const GALGAS_lstring & inOperand1,
                                                                                                                              const GALGAS_outletClassBindingSpecificationModelList & inOperand2,
                                                                                                                              const GALGAS_controllerBindingOptionList & inOperand3 
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletClassBindingSpecificationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_outletClassBindingSpecificationList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_outletClassBindingSpecificationList_2D_element::objectCompare (const GALGAS_outletClassBindingSpecificationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mIsUserDefined.objectCompare (inOperand.mAttribute_mIsUserDefined) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBindingName.objectCompare (inOperand.mAttribute_mBindingName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOutletClassBindingSpecificationModelList.objectCompare (inOperand.mAttribute_mOutletClassBindingSpecificationModelList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBindingOptionList.objectCompare (inOperand.mAttribute_mBindingOptionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_outletClassBindingSpecificationList_2D_element::isValid (void) const {
  return mAttribute_mIsUserDefined.isValid () && mAttribute_mBindingName.isValid () && mAttribute_mOutletClassBindingSpecificationModelList.isValid () && mAttribute_mBindingOptionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletClassBindingSpecificationList_2D_element::drop (void) {
  mAttribute_mIsUserDefined.drop () ;
  mAttribute_mBindingName.drop () ;
  mAttribute_mOutletClassBindingSpecificationModelList.drop () ;
  mAttribute_mBindingOptionList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletClassBindingSpecificationList_2D_element::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "<struct @outletClassBindingSpecificationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mIsUserDefined.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBindingName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOutletClassBindingSpecificationModelList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBindingOptionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_outletClassBindingSpecificationList_2D_element::reader_mIsUserDefined (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsUserDefined ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_outletClassBindingSpecificationList_2D_element::reader_mBindingName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBindingName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassBindingSpecificationModelList GALGAS_outletClassBindingSpecificationList_2D_element::reader_mOutletClassBindingSpecificationModelList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutletClassBindingSpecificationModelList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controllerBindingOptionList GALGAS_outletClassBindingSpecificationList_2D_element::reader_mBindingOptionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBindingOptionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @outletClassBindingSpecificationList-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletClassBindingSpecificationList_2D_element ("outletClassBindingSpecificationList-element",
                                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_outletClassBindingSpecificationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassBindingSpecificationList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_outletClassBindingSpecificationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletClassBindingSpecificationList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingSpecificationMap_2D_element::GALGAS_bindingSpecificationMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mBindingMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingSpecificationMap_2D_element::~ GALGAS_bindingSpecificationMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingSpecificationMap_2D_element::GALGAS_bindingSpecificationMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_outletBindingSpecificationMap & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mBindingMap (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingSpecificationMap_2D_element GALGAS_bindingSpecificationMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_bindingSpecificationMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_outletBindingSpecificationMap::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingSpecificationMap_2D_element GALGAS_bindingSpecificationMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_outletBindingSpecificationMap & inOperand1 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bindingSpecificationMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_bindingSpecificationMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_bindingSpecificationMap_2D_element::objectCompare (const GALGAS_bindingSpecificationMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBindingMap.objectCompare (inOperand.mAttribute_mBindingMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_bindingSpecificationMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mBindingMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bindingSpecificationMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mBindingMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bindingSpecificationMap_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @bindingSpecificationMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBindingMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_bindingSpecificationMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingSpecificationMap GALGAS_bindingSpecificationMap_2D_element::reader_mBindingMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBindingMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @bindingSpecificationMap-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bindingSpecificationMap_2D_element ("bindingSpecificationMap-element",
                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_bindingSpecificationMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bindingSpecificationMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_bindingSpecificationMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bindingSpecificationMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controllerBindingOptionDecoratedList_2D_element::GALGAS_controllerBindingOptionDecoratedList_2D_element (void) :
mAttribute_mOptionType (),
mAttribute_mOptionName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controllerBindingOptionDecoratedList_2D_element::~ GALGAS_controllerBindingOptionDecoratedList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controllerBindingOptionDecoratedList_2D_element::GALGAS_controllerBindingOptionDecoratedList_2D_element (const GALGAS_typeKind & inOperand0,
                                                                                                                const GALGAS_lstring & inOperand1) :
mAttribute_mOptionType (inOperand0),
mAttribute_mOptionName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controllerBindingOptionDecoratedList_2D_element GALGAS_controllerBindingOptionDecoratedList_2D_element::constructor_new (const GALGAS_typeKind & inOperand0,
                                                                                                                                const GALGAS_lstring & inOperand1 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controllerBindingOptionDecoratedList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_controllerBindingOptionDecoratedList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_controllerBindingOptionDecoratedList_2D_element::objectCompare (const GALGAS_controllerBindingOptionDecoratedList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mOptionType.objectCompare (inOperand.mAttribute_mOptionType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOptionName.objectCompare (inOperand.mAttribute_mOptionName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_controllerBindingOptionDecoratedList_2D_element::isValid (void) const {
  return mAttribute_mOptionType.isValid () && mAttribute_mOptionName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controllerBindingOptionDecoratedList_2D_element::drop (void) {
  mAttribute_mOptionType.drop () ;
  mAttribute_mOptionName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controllerBindingOptionDecoratedList_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @controllerBindingOptionDecoratedList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mOptionType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOptionName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_controllerBindingOptionDecoratedList_2D_element::reader_mOptionType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_controllerBindingOptionDecoratedList_2D_element::reader_mOptionName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @controllerBindingOptionDecoratedList-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controllerBindingOptionDecoratedList_2D_element ("controllerBindingOptionDecoratedList-element",
                                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_controllerBindingOptionDecoratedList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controllerBindingOptionDecoratedList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_controllerBindingOptionDecoratedList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controllerBindingOptionDecoratedList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingSpecificationMap_2D_element::GALGAS_outletBindingSpecificationMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mOutletBindingSpecificationModelList (),
mAttribute_mControllerBindingOptionList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingSpecificationMap_2D_element::~ GALGAS_outletBindingSpecificationMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingSpecificationMap_2D_element::GALGAS_outletBindingSpecificationMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_outletBindingSpecificationModelList & inOperand1,
                                                                                                  const GALGAS_controllerBindingOptionDecoratedList & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mOutletBindingSpecificationModelList (inOperand1),
mAttribute_mControllerBindingOptionList (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingSpecificationMap_2D_element GALGAS_outletBindingSpecificationMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_outletBindingSpecificationMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_outletBindingSpecificationModelList::constructor_emptyList (HERE),
                                                          GALGAS_controllerBindingOptionDecoratedList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_outletBindingSpecificationMap_2D_element::objectCompare (const GALGAS_outletBindingSpecificationMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOutletBindingSpecificationModelList.objectCompare (inOperand.mAttribute_mOutletBindingSpecificationModelList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mControllerBindingOptionList.objectCompare (inOperand.mAttribute_mControllerBindingOptionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_outletBindingSpecificationMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mOutletBindingSpecificationModelList.isValid () && mAttribute_mControllerBindingOptionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletBindingSpecificationMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mOutletBindingSpecificationModelList.drop () ;
  mAttribute_mControllerBindingOptionList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletBindingSpecificationMap_2D_element::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "<struct @outletBindingSpecificationMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOutletBindingSpecificationModelList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mControllerBindingOptionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_outletBindingSpecificationMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingSpecificationModelList GALGAS_outletBindingSpecificationMap_2D_element::reader_mOutletBindingSpecificationModelList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutletBindingSpecificationModelList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controllerBindingOptionDecoratedList GALGAS_outletBindingSpecificationMap_2D_element::reader_mControllerBindingOptionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mControllerBindingOptionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @outletBindingSpecificationMap-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletBindingSpecificationMap_2D_element ("outletBindingSpecificationMap-element",
                                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_outletBindingSpecificationMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletBindingSpecificationMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_outletBindingSpecificationMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletBindingSpecificationMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingOptionList_2D_element::GALGAS_bindingOptionList_2D_element (void) :
mAttribute_mOptionName (),
mAttribute_mOptionValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingOptionList_2D_element::~ GALGAS_bindingOptionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingOptionList_2D_element::GALGAS_bindingOptionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_abstractDefaultValue & inOperand1) :
mAttribute_mOptionName (inOperand0),
mAttribute_mOptionValue (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingOptionList_2D_element GALGAS_bindingOptionList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_abstractDefaultValue & inOperand1 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bindingOptionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_bindingOptionList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_bindingOptionList_2D_element::objectCompare (const GALGAS_bindingOptionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mOptionName.objectCompare (inOperand.mAttribute_mOptionName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOptionValue.objectCompare (inOperand.mAttribute_mOptionValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_bindingOptionList_2D_element::isValid (void) const {
  return mAttribute_mOptionName.isValid () && mAttribute_mOptionValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bindingOptionList_2D_element::drop (void) {
  mAttribute_mOptionName.drop () ;
  mAttribute_mOptionValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bindingOptionList_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @bindingOptionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mOptionName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOptionValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_bindingOptionList_2D_element::reader_mOptionName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractDefaultValue GALGAS_bindingOptionList_2D_element::reader_mOptionValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @bindingOptionList-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bindingOptionList_2D_element ("bindingOptionList-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_bindingOptionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bindingOptionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_bindingOptionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bindingOptionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletDeclarationList_2D_element::GALGAS_outletDeclarationList_2D_element (void) :
mAttribute_mOutletTypeName (),
mAttribute_mOutletName (),
mAttribute_mRunDescriptor (),
mAttribute_mEnabledBindingDescriptor (),
mAttribute_mRegularBindingList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletDeclarationList_2D_element::~ GALGAS_outletDeclarationList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletDeclarationList_2D_element::GALGAS_outletDeclarationList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_lstring & inOperand1,
                                                                                  const GALGAS_runActionDescriptor & inOperand2,
                                                                                  const GALGAS_multipleBindingDescriptor & inOperand3,
                                                                                  const GALGAS_regularBindingList & inOperand4) :
mAttribute_mOutletTypeName (inOperand0),
mAttribute_mOutletName (inOperand1),
mAttribute_mRunDescriptor (inOperand2),
mAttribute_mEnabledBindingDescriptor (inOperand3),
mAttribute_mRegularBindingList (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletDeclarationList_2D_element GALGAS_outletDeclarationList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_lstring & inOperand1,
                                                                                                  const GALGAS_runActionDescriptor & inOperand2,
                                                                                                  const GALGAS_multipleBindingDescriptor & inOperand3,
                                                                                                  const GALGAS_regularBindingList & inOperand4 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletDeclarationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_outletDeclarationList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_outletDeclarationList_2D_element::objectCompare (const GALGAS_outletDeclarationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mOutletTypeName.objectCompare (inOperand.mAttribute_mOutletTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOutletName.objectCompare (inOperand.mAttribute_mOutletName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRunDescriptor.objectCompare (inOperand.mAttribute_mRunDescriptor) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEnabledBindingDescriptor.objectCompare (inOperand.mAttribute_mEnabledBindingDescriptor) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRegularBindingList.objectCompare (inOperand.mAttribute_mRegularBindingList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_outletDeclarationList_2D_element::isValid (void) const {
  return mAttribute_mOutletTypeName.isValid () && mAttribute_mOutletName.isValid () && mAttribute_mRunDescriptor.isValid () && mAttribute_mEnabledBindingDescriptor.isValid () && mAttribute_mRegularBindingList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletDeclarationList_2D_element::drop (void) {
  mAttribute_mOutletTypeName.drop () ;
  mAttribute_mOutletName.drop () ;
  mAttribute_mRunDescriptor.drop () ;
  mAttribute_mEnabledBindingDescriptor.drop () ;
  mAttribute_mRegularBindingList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletDeclarationList_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @outletDeclarationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mOutletTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOutletName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRunDescriptor.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEnabledBindingDescriptor.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegularBindingList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_outletDeclarationList_2D_element::reader_mOutletTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutletTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_outletDeclarationList_2D_element::reader_mOutletName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutletName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_runActionDescriptor GALGAS_outletDeclarationList_2D_element::reader_mRunDescriptor (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRunDescriptor ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleBindingDescriptor GALGAS_outletDeclarationList_2D_element::reader_mEnabledBindingDescriptor (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEnabledBindingDescriptor ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_regularBindingList GALGAS_outletDeclarationList_2D_element::reader_mRegularBindingList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegularBindingList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @outletDeclarationList-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletDeclarationList_2D_element ("outletDeclarationList-element",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_outletDeclarationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletDeclarationList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_outletDeclarationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletDeclarationList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedOutletMap_2D_element::GALGAS_decoratedOutletMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mOutletTypeName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedOutletMap_2D_element::~ GALGAS_decoratedOutletMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedOutletMap_2D_element::GALGAS_decoratedOutletMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_string & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mOutletTypeName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedOutletMap_2D_element GALGAS_decoratedOutletMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_decoratedOutletMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                               GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedOutletMap_2D_element GALGAS_decoratedOutletMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_string & inOperand1 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_decoratedOutletMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_decoratedOutletMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_decoratedOutletMap_2D_element::objectCompare (const GALGAS_decoratedOutletMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOutletTypeName.objectCompare (inOperand.mAttribute_mOutletTypeName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_decoratedOutletMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mOutletTypeName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_decoratedOutletMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mOutletTypeName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_decoratedOutletMap_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @decoratedOutletMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOutletTypeName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_decoratedOutletMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_decoratedOutletMap_2D_element::reader_mOutletTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutletTypeName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @decoratedOutletMap-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedOutletMap_2D_element ("decoratedOutletMap-element",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_decoratedOutletMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedOutletMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_decoratedOutletMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedOutletMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyList_2D_element::GALGAS_observablePropertyList_2D_element (void) :
mAttribute_mObservableProperty () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyList_2D_element::~ GALGAS_observablePropertyList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyList_2D_element::GALGAS_observablePropertyList_2D_element (const GALGAS_observablePropertyAST & inOperand0) :
mAttribute_mObservableProperty (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyList_2D_element GALGAS_observablePropertyList_2D_element::constructor_new (const GALGAS_observablePropertyAST & inOperand0 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_observablePropertyList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_observablePropertyList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_observablePropertyList_2D_element::objectCompare (const GALGAS_observablePropertyList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mObservableProperty.objectCompare (inOperand.mAttribute_mObservableProperty) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_observablePropertyList_2D_element::isValid (void) const {
  return mAttribute_mObservableProperty.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_observablePropertyList_2D_element::drop (void) {
  mAttribute_mObservableProperty.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_observablePropertyList_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @observablePropertyList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mObservableProperty.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyAST GALGAS_observablePropertyList_2D_element::reader_mObservableProperty (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mObservableProperty ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @observablePropertyList-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_observablePropertyList_2D_element ("observablePropertyList-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_observablePropertyList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_observablePropertyList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_observablePropertyList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyList_2D_element GALGAS_observablePropertyList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyList_2D_element result ;
  const GALGAS_observablePropertyList_2D_element * p = (const GALGAS_observablePropertyList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_observablePropertyList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionMap_2D_element::GALGAS_actionMap_2D_element (void) :
mAttribute_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionMap_2D_element::~ GALGAS_actionMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionMap_2D_element::GALGAS_actionMap_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionMap_2D_element GALGAS_actionMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_actionMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionMap_2D_element GALGAS_actionMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_actionMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_actionMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_actionMap_2D_element::objectCompare (const GALGAS_actionMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_actionMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actionMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actionMap_2D_element::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "<struct @actionMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_actionMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @actionMap-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actionMap_2D_element ("actionMap-element",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_actionMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actionMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_actionMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actionMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_regularBindingList_2D_element::GALGAS_regularBindingList_2D_element (void) :
mAttribute_mBindingName (),
mAttribute_mObservablePropertyList (),
mAttribute_mBindingOptionList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_regularBindingList_2D_element::~ GALGAS_regularBindingList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_regularBindingList_2D_element::GALGAS_regularBindingList_2D_element (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_observablePropertyList & inOperand1,
                                                                            const GALGAS_bindingOptionList & inOperand2) :
mAttribute_mBindingName (inOperand0),
mAttribute_mObservablePropertyList (inOperand1),
mAttribute_mBindingOptionList (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_regularBindingList_2D_element GALGAS_regularBindingList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_regularBindingList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                               GALGAS_observablePropertyList::constructor_emptyList (HERE),
                                               GALGAS_bindingOptionList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_regularBindingList_2D_element::objectCompare (const GALGAS_regularBindingList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mBindingName.objectCompare (inOperand.mAttribute_mBindingName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mObservablePropertyList.objectCompare (inOperand.mAttribute_mObservablePropertyList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBindingOptionList.objectCompare (inOperand.mAttribute_mBindingOptionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_regularBindingList_2D_element::isValid (void) const {
  return mAttribute_mBindingName.isValid () && mAttribute_mObservablePropertyList.isValid () && mAttribute_mBindingOptionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_regularBindingList_2D_element::drop (void) {
  mAttribute_mBindingName.drop () ;
  mAttribute_mObservablePropertyList.drop () ;
  mAttribute_mBindingOptionList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_regularBindingList_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @regularBindingList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mBindingName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mObservablePropertyList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBindingOptionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_regularBindingList_2D_element::reader_mBindingName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBindingName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyList GALGAS_regularBindingList_2D_element::reader_mObservablePropertyList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mObservablePropertyList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingOptionList GALGAS_regularBindingList_2D_element::reader_mBindingOptionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBindingOptionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @regularBindingList-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_regularBindingList_2D_element ("regularBindingList-element",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_regularBindingList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_regularBindingList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_regularBindingList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_regularBindingList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientList_2D_element::GALGAS_transientList_2D_element (void) :
mAttribute_mTransientTypeName (),
mAttribute_mTransientName (),
mAttribute_mDependencyList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientList_2D_element::~ GALGAS_transientList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientList_2D_element::GALGAS_transientList_2D_element (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_lstring & inOperand1,
                                                                  const GALGAS_observablePropertyList & inOperand2) :
mAttribute_mTransientTypeName (inOperand0),
mAttribute_mTransientName (inOperand1),
mAttribute_mDependencyList (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientList_2D_element GALGAS_transientList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_transientList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                          GALGAS_lstring::constructor_default (HERE),
                                          GALGAS_observablePropertyList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientList_2D_element GALGAS_transientList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_lstring & inOperand1,
                                                                                  const GALGAS_observablePropertyList & inOperand2 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_transientList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_transientList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_transientList_2D_element::objectCompare (const GALGAS_transientList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mTransientTypeName.objectCompare (inOperand.mAttribute_mTransientTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTransientName.objectCompare (inOperand.mAttribute_mTransientName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDependencyList.objectCompare (inOperand.mAttribute_mDependencyList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_transientList_2D_element::isValid (void) const {
  return mAttribute_mTransientTypeName.isValid () && mAttribute_mTransientName.isValid () && mAttribute_mDependencyList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_transientList_2D_element::drop (void) {
  mAttribute_mTransientTypeName.drop () ;
  mAttribute_mTransientName.drop () ;
  mAttribute_mDependencyList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_transientList_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @transientList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mTransientTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTransientName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDependencyList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_transientList_2D_element::reader_mTransientTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTransientTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_transientList_2D_element::reader_mTransientName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTransientName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyList GALGAS_transientList_2D_element::reader_mDependencyList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDependencyList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @transientList-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transientList_2D_element ("transientList-element",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_transientList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_transientList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientList_2D_element GALGAS_transientList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_transientList_2D_element result ;
  const GALGAS_transientList_2D_element * p = (const GALGAS_transientList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_transientList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientDependencyListForGeneration_2D_element::GALGAS_transientDependencyListForGeneration_2D_element (void) :
mAttribute_mDependency (),
mAttribute_mFunctionArgumentName (),
mAttribute_mFunctionArgumentTypeString () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientDependencyListForGeneration_2D_element::~ GALGAS_transientDependencyListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientDependencyListForGeneration_2D_element::GALGAS_transientDependencyListForGeneration_2D_element (const GALGAS_observablePropertyAST & inOperand0,
                                                                                                                const GALGAS_string & inOperand1,
                                                                                                                const GALGAS_string & inOperand2) :
mAttribute_mDependency (inOperand0),
mAttribute_mFunctionArgumentName (inOperand1),
mAttribute_mFunctionArgumentTypeString (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientDependencyListForGeneration_2D_element GALGAS_transientDependencyListForGeneration_2D_element::constructor_new (const GALGAS_observablePropertyAST & inOperand0,
                                                                                                                                const GALGAS_string & inOperand1,
                                                                                                                                const GALGAS_string & inOperand2 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_transientDependencyListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_transientDependencyListForGeneration_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_transientDependencyListForGeneration_2D_element::objectCompare (const GALGAS_transientDependencyListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mDependency.objectCompare (inOperand.mAttribute_mDependency) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFunctionArgumentName.objectCompare (inOperand.mAttribute_mFunctionArgumentName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFunctionArgumentTypeString.objectCompare (inOperand.mAttribute_mFunctionArgumentTypeString) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_transientDependencyListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mDependency.isValid () && mAttribute_mFunctionArgumentName.isValid () && mAttribute_mFunctionArgumentTypeString.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_transientDependencyListForGeneration_2D_element::drop (void) {
  mAttribute_mDependency.drop () ;
  mAttribute_mFunctionArgumentName.drop () ;
  mAttribute_mFunctionArgumentTypeString.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_transientDependencyListForGeneration_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @transientDependencyListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mDependency.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFunctionArgumentName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFunctionArgumentTypeString.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyAST GALGAS_transientDependencyListForGeneration_2D_element::reader_mDependency (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDependency ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_transientDependencyListForGeneration_2D_element::reader_mFunctionArgumentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionArgumentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_transientDependencyListForGeneration_2D_element::reader_mFunctionArgumentTypeString (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionArgumentTypeString ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @transientDependencyListForGeneration-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transientDependencyListForGeneration_2D_element ("transientDependencyListForGeneration-element",
                                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_transientDependencyListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientDependencyListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_transientDependencyListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientDependencyListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientDependencyListForGeneration_2D_element GALGAS_transientDependencyListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_transientDependencyListForGeneration_2D_element result ;
  const GALGAS_transientDependencyListForGeneration_2D_element * p = (const GALGAS_transientDependencyListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_transientDependencyListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientDependencyListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_simpleStoredPropertyList_2D_element::GALGAS_simpleStoredPropertyList_2D_element (void) :
mAttribute_mPropertyTypeName (),
mAttribute_mPropertyName (),
mAttribute_mDefaultValue (),
mAttribute_mNeedsValidation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_simpleStoredPropertyList_2D_element::~ GALGAS_simpleStoredPropertyList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_simpleStoredPropertyList_2D_element::GALGAS_simpleStoredPropertyList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_lstring & inOperand1,
                                                                                        const GALGAS_abstractDefaultValue & inOperand2,
                                                                                        const GALGAS_bool & inOperand3) :
mAttribute_mPropertyTypeName (inOperand0),
mAttribute_mPropertyName (inOperand1),
mAttribute_mDefaultValue (inOperand2),
mAttribute_mNeedsValidation (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_simpleStoredPropertyList_2D_element::objectCompare (const GALGAS_simpleStoredPropertyList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mPropertyTypeName.objectCompare (inOperand.mAttribute_mPropertyTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPropertyName.objectCompare (inOperand.mAttribute_mPropertyName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDefaultValue.objectCompare (inOperand.mAttribute_mDefaultValue) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mNeedsValidation.objectCompare (inOperand.mAttribute_mNeedsValidation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_simpleStoredPropertyList_2D_element::isValid (void) const {
  return mAttribute_mPropertyTypeName.isValid () && mAttribute_mPropertyName.isValid () && mAttribute_mDefaultValue.isValid () && mAttribute_mNeedsValidation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_simpleStoredPropertyList_2D_element::drop (void) {
  mAttribute_mPropertyTypeName.drop () ;
  mAttribute_mPropertyName.drop () ;
  mAttribute_mDefaultValue.drop () ;
  mAttribute_mNeedsValidation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_simpleStoredPropertyList_2D_element::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "<struct @simpleStoredPropertyList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mPropertyTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPropertyName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDefaultValue.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mNeedsValidation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_simpleStoredPropertyList_2D_element::reader_mPropertyTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPropertyTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_simpleStoredPropertyList_2D_element::reader_mPropertyName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPropertyName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractDefaultValue GALGAS_simpleStoredPropertyList_2D_element::reader_mDefaultValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDefaultValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_simpleStoredPropertyList_2D_element::reader_mNeedsValidation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNeedsValidation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @simpleStoredPropertyList-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_simpleStoredPropertyList_2D_element ("simpleStoredPropertyList-element",
                                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_simpleStoredPropertyList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_simpleStoredPropertyList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_simpleStoredPropertyList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_simpleStoredPropertyList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListAST_2D_element::GALGAS_arrayControllerBoundColumnListAST_2D_element (void) :
mAttribute_mColumnName (),
mAttribute_mColumnOutletTypeName (),
mAttribute_mObservablePropertyName (),
mAttribute_mBindingOptionList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListAST_2D_element::~ GALGAS_arrayControllerBoundColumnListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListAST_2D_element::GALGAS_arrayControllerBoundColumnListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                          const GALGAS_lstring & inOperand1,
                                                                                                          const GALGAS_lstring & inOperand2,
                                                                                                          const GALGAS_bindingOptionList & inOperand3) :
mAttribute_mColumnName (inOperand0),
mAttribute_mColumnOutletTypeName (inOperand1),
mAttribute_mObservablePropertyName (inOperand2),
mAttribute_mBindingOptionList (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListAST_2D_element GALGAS_arrayControllerBoundColumnListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_arrayControllerBoundColumnListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_bindingOptionList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListAST_2D_element GALGAS_arrayControllerBoundColumnListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                          const GALGAS_lstring & inOperand1,
                                                                                                                          const GALGAS_lstring & inOperand2,
                                                                                                                          const GALGAS_bindingOptionList & inOperand3 
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_arrayControllerBoundColumnListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_arrayControllerBoundColumnListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_arrayControllerBoundColumnListAST_2D_element::objectCompare (const GALGAS_arrayControllerBoundColumnListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mColumnName.objectCompare (inOperand.mAttribute_mColumnName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mColumnOutletTypeName.objectCompare (inOperand.mAttribute_mColumnOutletTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mObservablePropertyName.objectCompare (inOperand.mAttribute_mObservablePropertyName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBindingOptionList.objectCompare (inOperand.mAttribute_mBindingOptionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_arrayControllerBoundColumnListAST_2D_element::isValid (void) const {
  return mAttribute_mColumnName.isValid () && mAttribute_mColumnOutletTypeName.isValid () && mAttribute_mObservablePropertyName.isValid () && mAttribute_mBindingOptionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerBoundColumnListAST_2D_element::drop (void) {
  mAttribute_mColumnName.drop () ;
  mAttribute_mColumnOutletTypeName.drop () ;
  mAttribute_mObservablePropertyName.drop () ;
  mAttribute_mBindingOptionList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerBoundColumnListAST_2D_element::description (C_String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString << "<struct @arrayControllerBoundColumnListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mColumnName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mColumnOutletTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mObservablePropertyName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBindingOptionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_arrayControllerBoundColumnListAST_2D_element::reader_mColumnName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mColumnName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_arrayControllerBoundColumnListAST_2D_element::reader_mColumnOutletTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mColumnOutletTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_arrayControllerBoundColumnListAST_2D_element::reader_mObservablePropertyName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mObservablePropertyName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingOptionList GALGAS_arrayControllerBoundColumnListAST_2D_element::reader_mBindingOptionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBindingOptionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @arrayControllerBoundColumnListAST-element type                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerBoundColumnListAST_2D_element ("arrayControllerBoundColumnListAST-element",
                                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_arrayControllerBoundColumnListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerBoundColumnListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_arrayControllerBoundColumnListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerBoundColumnListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerDeclarationListAST_2D_element::GALGAS_arrayControllerDeclarationListAST_2D_element (void) :
mAttribute_mControllerName (),
mAttribute_mRootRelationshipName (),
mAttribute_mTableViewOutletName (),
mAttribute_mFilterProperties (),
mAttribute_mArrayControllerBoundColumnListAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerDeclarationListAST_2D_element::~ GALGAS_arrayControllerDeclarationListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerDeclarationListAST_2D_element::GALGAS_arrayControllerDeclarationListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                          const GALGAS_lstring & inOperand1,
                                                                                                          const GALGAS_lstring & inOperand2,
                                                                                                          const GALGAS_lstringlist & inOperand3,
                                                                                                          const GALGAS_arrayControllerBoundColumnListAST & inOperand4) :
mAttribute_mControllerName (inOperand0),
mAttribute_mRootRelationshipName (inOperand1),
mAttribute_mTableViewOutletName (inOperand2),
mAttribute_mFilterProperties (inOperand3),
mAttribute_mArrayControllerBoundColumnListAST (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerDeclarationListAST_2D_element GALGAS_arrayControllerDeclarationListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_arrayControllerDeclarationListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_lstringlist::constructor_emptyList (HERE),
                                                              GALGAS_arrayControllerBoundColumnListAST::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerDeclarationListAST_2D_element GALGAS_arrayControllerDeclarationListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                          const GALGAS_lstring & inOperand1,
                                                                                                                          const GALGAS_lstring & inOperand2,
                                                                                                                          const GALGAS_lstringlist & inOperand3,
                                                                                                                          const GALGAS_arrayControllerBoundColumnListAST & inOperand4 
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_arrayControllerDeclarationListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_arrayControllerDeclarationListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_arrayControllerDeclarationListAST_2D_element::objectCompare (const GALGAS_arrayControllerDeclarationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mControllerName.objectCompare (inOperand.mAttribute_mControllerName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRootRelationshipName.objectCompare (inOperand.mAttribute_mRootRelationshipName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTableViewOutletName.objectCompare (inOperand.mAttribute_mTableViewOutletName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFilterProperties.objectCompare (inOperand.mAttribute_mFilterProperties) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mArrayControllerBoundColumnListAST.objectCompare (inOperand.mAttribute_mArrayControllerBoundColumnListAST) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_arrayControllerDeclarationListAST_2D_element::isValid (void) const {
  return mAttribute_mControllerName.isValid () && mAttribute_mRootRelationshipName.isValid () && mAttribute_mTableViewOutletName.isValid () && mAttribute_mFilterProperties.isValid () && mAttribute_mArrayControllerBoundColumnListAST.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerDeclarationListAST_2D_element::drop (void) {
  mAttribute_mControllerName.drop () ;
  mAttribute_mRootRelationshipName.drop () ;
  mAttribute_mTableViewOutletName.drop () ;
  mAttribute_mFilterProperties.drop () ;
  mAttribute_mArrayControllerBoundColumnListAST.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerDeclarationListAST_2D_element::description (C_String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString << "<struct @arrayControllerDeclarationListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mControllerName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRootRelationshipName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTableViewOutletName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFilterProperties.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mArrayControllerBoundColumnListAST.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_arrayControllerDeclarationListAST_2D_element::reader_mControllerName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mControllerName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_arrayControllerDeclarationListAST_2D_element::reader_mRootRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRootRelationshipName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_arrayControllerDeclarationListAST_2D_element::reader_mTableViewOutletName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTableViewOutletName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_arrayControllerDeclarationListAST_2D_element::reader_mFilterProperties (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFilterProperties ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListAST GALGAS_arrayControllerDeclarationListAST_2D_element::reader_mArrayControllerBoundColumnListAST (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mArrayControllerBoundColumnListAST ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @arrayControllerDeclarationListAST-element type                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerDeclarationListAST_2D_element ("arrayControllerDeclarationListAST-element",
                                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_arrayControllerDeclarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerDeclarationListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_arrayControllerDeclarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerDeclarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerDeclarationListAST_2D_element GALGAS_arrayControllerDeclarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerDeclarationListAST_2D_element result ;
  const GALGAS_arrayControllerDeclarationListAST_2D_element * p = (const GALGAS_arrayControllerDeclarationListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayControllerDeclarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerDeclarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerMap_2D_element::GALGAS_arrayControllerMap_2D_element (void) :
mAttribute_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerMap_2D_element::~ GALGAS_arrayControllerMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerMap_2D_element::GALGAS_arrayControllerMap_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerMap_2D_element GALGAS_arrayControllerMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_arrayControllerMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerMap_2D_element GALGAS_arrayControllerMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_arrayControllerMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_arrayControllerMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_arrayControllerMap_2D_element::objectCompare (const GALGAS_arrayControllerMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_arrayControllerMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerMap_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @arrayControllerMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_arrayControllerMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @arrayControllerMap-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerMap_2D_element ("arrayControllerMap-element",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_arrayControllerMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_arrayControllerMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerMap_2D_element GALGAS_arrayControllerMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerMap_2D_element result ;
  const GALGAS_arrayControllerMap_2D_element * p = (const GALGAS_arrayControllerMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayControllerMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toOneRelationshipList_2D_element::GALGAS_toOneRelationshipList_2D_element (void) :
mAttribute_mDestinationEntityName (),
mAttribute_mToOneRelationshipName (),
mAttribute_mInverseRelationshipName (),
mAttribute_mInverseRelationMultiplicity () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toOneRelationshipList_2D_element::~ GALGAS_toOneRelationshipList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toOneRelationshipList_2D_element::GALGAS_toOneRelationshipList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_lstring & inOperand1,
                                                                                  const GALGAS_lstring & inOperand2,
                                                                                  const GALGAS_propertyMultiplicity & inOperand3) :
mAttribute_mDestinationEntityName (inOperand0),
mAttribute_mToOneRelationshipName (inOperand1),
mAttribute_mInverseRelationshipName (inOperand2),
mAttribute_mInverseRelationMultiplicity (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toOneRelationshipList_2D_element GALGAS_toOneRelationshipList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_lstring & inOperand1,
                                                                                                  const GALGAS_lstring & inOperand2,
                                                                                                  const GALGAS_propertyMultiplicity & inOperand3 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_toOneRelationshipList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_toOneRelationshipList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_toOneRelationshipList_2D_element::objectCompare (const GALGAS_toOneRelationshipList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mDestinationEntityName.objectCompare (inOperand.mAttribute_mDestinationEntityName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mToOneRelationshipName.objectCompare (inOperand.mAttribute_mToOneRelationshipName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInverseRelationshipName.objectCompare (inOperand.mAttribute_mInverseRelationshipName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInverseRelationMultiplicity.objectCompare (inOperand.mAttribute_mInverseRelationMultiplicity) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_toOneRelationshipList_2D_element::isValid (void) const {
  return mAttribute_mDestinationEntityName.isValid () && mAttribute_mToOneRelationshipName.isValid () && mAttribute_mInverseRelationshipName.isValid () && mAttribute_mInverseRelationMultiplicity.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_toOneRelationshipList_2D_element::drop (void) {
  mAttribute_mDestinationEntityName.drop () ;
  mAttribute_mToOneRelationshipName.drop () ;
  mAttribute_mInverseRelationshipName.drop () ;
  mAttribute_mInverseRelationMultiplicity.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_toOneRelationshipList_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @toOneRelationshipList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mDestinationEntityName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mToOneRelationshipName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInverseRelationshipName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInverseRelationMultiplicity.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_toOneRelationshipList_2D_element::reader_mDestinationEntityName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDestinationEntityName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_toOneRelationshipList_2D_element::reader_mToOneRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mToOneRelationshipName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_toOneRelationshipList_2D_element::reader_mInverseRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInverseRelationshipName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyMultiplicity GALGAS_toOneRelationshipList_2D_element::reader_mInverseRelationMultiplicity (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInverseRelationMultiplicity ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @toOneRelationshipList-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toOneRelationshipList_2D_element ("toOneRelationshipList-element",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_toOneRelationshipList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOneRelationshipList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_toOneRelationshipList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toOneRelationshipList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toOneRelationshipList_2D_element GALGAS_toOneRelationshipList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_toOneRelationshipList_2D_element result ;
  const GALGAS_toOneRelationshipList_2D_element * p = (const GALGAS_toOneRelationshipList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toOneRelationshipList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toOneRelationshipList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toManyRelationshipList_2D_element::GALGAS_toManyRelationshipList_2D_element (void) :
mAttribute_mDestinationEntityName (),
mAttribute_mToManyRelationshipName (),
mAttribute_mInverseRelationshipName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toManyRelationshipList_2D_element::~ GALGAS_toManyRelationshipList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toManyRelationshipList_2D_element::GALGAS_toManyRelationshipList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_lstring & inOperand1,
                                                                                    const GALGAS_lstring & inOperand2) :
mAttribute_mDestinationEntityName (inOperand0),
mAttribute_mToManyRelationshipName (inOperand1),
mAttribute_mInverseRelationshipName (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toManyRelationshipList_2D_element GALGAS_toManyRelationshipList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_toManyRelationshipList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toManyRelationshipList_2D_element GALGAS_toManyRelationshipList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_lstring & inOperand1,
                                                                                                    const GALGAS_lstring & inOperand2 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_toManyRelationshipList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_toManyRelationshipList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_toManyRelationshipList_2D_element::objectCompare (const GALGAS_toManyRelationshipList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mDestinationEntityName.objectCompare (inOperand.mAttribute_mDestinationEntityName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mToManyRelationshipName.objectCompare (inOperand.mAttribute_mToManyRelationshipName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInverseRelationshipName.objectCompare (inOperand.mAttribute_mInverseRelationshipName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_toManyRelationshipList_2D_element::isValid (void) const {
  return mAttribute_mDestinationEntityName.isValid () && mAttribute_mToManyRelationshipName.isValid () && mAttribute_mInverseRelationshipName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_toManyRelationshipList_2D_element::drop (void) {
  mAttribute_mDestinationEntityName.drop () ;
  mAttribute_mToManyRelationshipName.drop () ;
  mAttribute_mInverseRelationshipName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_toManyRelationshipList_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @toManyRelationshipList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mDestinationEntityName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mToManyRelationshipName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInverseRelationshipName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_toManyRelationshipList_2D_element::reader_mDestinationEntityName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDestinationEntityName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_toManyRelationshipList_2D_element::reader_mToManyRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mToManyRelationshipName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_toManyRelationshipList_2D_element::reader_mInverseRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInverseRelationshipName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @toManyRelationshipList-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toManyRelationshipList_2D_element ("toManyRelationshipList-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_toManyRelationshipList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyRelationshipList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_toManyRelationshipList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toManyRelationshipList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toManyRelationshipList_2D_element GALGAS_toManyRelationshipList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_toManyRelationshipList_2D_element result ;
  const GALGAS_toManyRelationshipList_2D_element * p = (const GALGAS_toManyRelationshipList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toManyRelationshipList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyRelationshipList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyMap_2D_element::GALGAS_observablePropertyMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mType (),
mAttribute_mKind (),
mAttribute_mMultiplicity (),
mAttribute_mInverseRelationshipName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyMap_2D_element::~ GALGAS_observablePropertyMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyMap_2D_element::GALGAS_observablePropertyMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_typeKind & inOperand1,
                                                                                  const GALGAS_propertyKind & inOperand2,
                                                                                  const GALGAS_propertyMultiplicity & inOperand3,
                                                                                  const GALGAS_string & inOperand4) :
mAttribute_lkey (inOperand0),
mAttribute_mType (inOperand1),
mAttribute_mKind (inOperand2),
mAttribute_mMultiplicity (inOperand3),
mAttribute_mInverseRelationshipName (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyMap_2D_element GALGAS_observablePropertyMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_typeKind & inOperand1,
                                                                                                  const GALGAS_propertyKind & inOperand2,
                                                                                                  const GALGAS_propertyMultiplicity & inOperand3,
                                                                                                  const GALGAS_string & inOperand4 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_observablePropertyMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_observablePropertyMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_observablePropertyMap_2D_element::objectCompare (const GALGAS_observablePropertyMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mType.objectCompare (inOperand.mAttribute_mType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mKind.objectCompare (inOperand.mAttribute_mKind) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMultiplicity.objectCompare (inOperand.mAttribute_mMultiplicity) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInverseRelationshipName.objectCompare (inOperand.mAttribute_mInverseRelationshipName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_observablePropertyMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mType.isValid () && mAttribute_mKind.isValid () && mAttribute_mMultiplicity.isValid () && mAttribute_mInverseRelationshipName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_observablePropertyMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mType.drop () ;
  mAttribute_mKind.drop () ;
  mAttribute_mMultiplicity.drop () ;
  mAttribute_mInverseRelationshipName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_observablePropertyMap_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @observablePropertyMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMultiplicity.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInverseRelationshipName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_observablePropertyMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_observablePropertyMap_2D_element::reader_mType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyKind GALGAS_observablePropertyMap_2D_element::reader_mKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyMultiplicity GALGAS_observablePropertyMap_2D_element::reader_mMultiplicity (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMultiplicity ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_observablePropertyMap_2D_element::reader_mInverseRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInverseRelationshipName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @observablePropertyMap-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_observablePropertyMap_2D_element ("observablePropertyMap-element",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_observablePropertyMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_observablePropertyMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_observablePropertyMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyMap_2D_element GALGAS_observablePropertyMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyMap_2D_element result ;
  const GALGAS_observablePropertyMap_2D_element * p = (const GALGAS_observablePropertyMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_observablePropertyMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_astDeclarationStruct::GALGAS_astDeclarationStruct (void) :
mAttribute_mDeclarationList (),
mAttribute_mOutletClassDeclarationList (),
mAttribute_mBindingSpecificationListMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_astDeclarationStruct::~ GALGAS_astDeclarationStruct (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_astDeclarationStruct::GALGAS_astDeclarationStruct (const GALGAS_astDeclarationList & inOperand0,
                                                          const GALGAS_outletClassDeclarationList & inOperand1,
                                                          const GALGAS_bindingSpecificationListMap & inOperand2) :
mAttribute_mDeclarationList (inOperand0),
mAttribute_mOutletClassDeclarationList (inOperand1),
mAttribute_mBindingSpecificationListMap (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_astDeclarationStruct GALGAS_astDeclarationStruct::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_astDeclarationStruct (GALGAS_astDeclarationList::constructor_emptyList (HERE),
                                      GALGAS_outletClassDeclarationList::constructor_emptyList (HERE),
                                      GALGAS_bindingSpecificationListMap::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_astDeclarationStruct GALGAS_astDeclarationStruct::constructor_new (const GALGAS_astDeclarationList & inOperand0,
                                                                          const GALGAS_outletClassDeclarationList & inOperand1,
                                                                          const GALGAS_bindingSpecificationListMap & inOperand2 
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_astDeclarationStruct result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_astDeclarationStruct (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_astDeclarationStruct::objectCompare (const GALGAS_astDeclarationStruct & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mDeclarationList.objectCompare (inOperand.mAttribute_mDeclarationList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOutletClassDeclarationList.objectCompare (inOperand.mAttribute_mOutletClassDeclarationList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBindingSpecificationListMap.objectCompare (inOperand.mAttribute_mBindingSpecificationListMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_astDeclarationStruct::isValid (void) const {
  return mAttribute_mDeclarationList.isValid () && mAttribute_mOutletClassDeclarationList.isValid () && mAttribute_mBindingSpecificationListMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_astDeclarationStruct::drop (void) {
  mAttribute_mDeclarationList.drop () ;
  mAttribute_mOutletClassDeclarationList.drop () ;
  mAttribute_mBindingSpecificationListMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_astDeclarationStruct::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "<struct @astDeclarationStruct:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mDeclarationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOutletClassDeclarationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBindingSpecificationListMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_astDeclarationList GALGAS_astDeclarationStruct::reader_mDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassDeclarationList GALGAS_astDeclarationStruct::reader_mOutletClassDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutletClassDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingSpecificationListMap GALGAS_astDeclarationStruct::reader_mBindingSpecificationListMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBindingSpecificationListMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @astDeclarationStruct type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_astDeclarationStruct ("astDeclarationStruct",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_astDeclarationStruct::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astDeclarationStruct ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_astDeclarationStruct::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astDeclarationStruct (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding category method '@enumDeclaration typeInventory'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_enumDeclaration_typeInventory (const cPtr_astDeclaration * inObject,
                                                          GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                          GALGAS_transientDependencyGraph & /* ioArgument_ioTransientDependencyGraph */,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumDeclaration * object = (const cPtr_enumDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_enumDeclaration) ;
  GALGAS_enumConstantMap var_enumConstantMap = GALGAS_enumConstantMap::constructor_emptyMap (SOURCE_FILE ("enumeration.galgas", 56)) ;
  cEnumerator_lstringlist enumerator_2693 (object->mAttribute_mEnumConstantNameList, kEnumeration_up) ;
  while (enumerator_2693.hasCurrentObject ()) {
    {
    var_enumConstantMap.modifier_insertKey (enumerator_2693.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("enumeration.galgas", 58)) ;
    }
    enumerator_2693.gotoNextObject () ;
  }
  {
  ioArgument_ioUnifiedTypeMap.modifier_insertKey (object->mAttribute_mEnumTypeName, GALGAS_typeKind::constructor_enumType (object->mAttribute_mEnumTypeName.mAttribute_string, var_enumConstantMap  COMMA_SOURCE_FILE ("enumeration.galgas", 62)), inCompiler COMMA_SOURCE_FILE ("enumeration.galgas", 60)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_enumDeclaration_typeInventory (void) {
  enterCategoryMethod_typeInventory (kTypeDescriptor_GALGAS_enumDeclaration.mSlotID,
                                     categoryMethod_enumDeclaration_typeInventory) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumDeclaration_typeInventory (defineCategoryMethod_enumDeclaration_typeInventory, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@enumDeclaration buildObservablePropertyMaps'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_enumDeclaration_buildObservablePropertyMaps (const cPtr_astDeclaration * /* inObject */,
                                                                        const GALGAS_unifiedTypeMap /* constinArgument_inUnifiedTypeMap */,
                                                                        GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_enumDeclaration_buildObservablePropertyMaps (void) {
  enterCategoryMethod_buildObservablePropertyMaps (kTypeDescriptor_GALGAS_enumDeclaration.mSlotID,
                                                   categoryMethod_enumDeclaration_buildObservablePropertyMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumDeclaration_buildObservablePropertyMaps (defineCategoryMethod_enumDeclaration_buildObservablePropertyMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category method '@enumDeclaration semanticAnalysis'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_enumDeclaration_semanticAnalysis (const cPtr_astDeclaration * inObject,
                                                             const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                             GALGAS_structForGeneration & ioArgument_ioGeneration,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumDeclaration * object = (const cPtr_enumDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_enumDeclaration) ;
  ioArgument_ioGeneration.mAttribute_mEnumListForGeneration.addAssign_operation (object->mAttribute_mEnumTypeName.mAttribute_string, object->mAttribute_mEnumConstantNameList  COMMA_SOURCE_FILE ("enumeration.galgas", 82)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_enumDeclaration_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_enumDeclaration.mSlotID,
                                        categoryMethod_enumDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumDeclaration_semanticAnalysis (defineCategoryMethod_enumDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category method '@documentDeclaration typeInventory'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_documentDeclaration_typeInventory (const cPtr_astDeclaration * inObject,
                                                              GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                              GALGAS_transientDependencyGraph & ioArgument_ioTransientDependencyGraph,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_documentDeclaration * object = (const cPtr_documentDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_documentDeclaration) ;
  categoryMethod_typeInventory (object->mAttribute_mSimpleStoredAttributeList, ioArgument_ioUnifiedTypeMap, inCompiler COMMA_SOURCE_FILE ("document.galgas", 75)) ;
  categoryMethod_typeInventory (object->mAttribute_mTransientList, GALGAS_string ("document.").add_operation (object->mAttribute_mDocumentName.reader_string (SOURCE_FILE ("document.galgas", 77)), inCompiler COMMA_SOURCE_FILE ("document.galgas", 77)), ioArgument_ioUnifiedTypeMap, ioArgument_ioTransientDependencyGraph, inCompiler COMMA_SOURCE_FILE ("document.galgas", 76)) ;
  {
  GALGAS_unifiedTypeMap_2D_proxy joker_3337 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioUnifiedTypeMap, object->mAttribute_mRootEntityName, joker_3337 COMMA_SOURCE_FILE ("document.galgas", 81)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_documentDeclaration_typeInventory (void) {
  enterCategoryMethod_typeInventory (kTypeDescriptor_GALGAS_documentDeclaration.mSlotID,
                                     categoryMethod_documentDeclaration_typeInventory) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_documentDeclaration_typeInventory (defineCategoryMethod_documentDeclaration_typeInventory, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@documentDeclaration buildObservablePropertyMaps'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_documentDeclaration_buildObservablePropertyMaps (const cPtr_astDeclaration * inObject,
                                                                            const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                            GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_documentDeclaration * object = (const cPtr_documentDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_documentDeclaration) ;
  GALGAS_observablePropertyMap var_observablePropertyMap = GALGAS_observablePropertyMap::constructor_emptyMap (SOURCE_FILE ("document.galgas", 102)) ;
  categoryMethod_buildObservablePropertyMap (object->mAttribute_mSimpleStoredAttributeList, constinArgument_inUnifiedTypeMap, var_observablePropertyMap, inCompiler COMMA_SOURCE_FILE ("document.galgas", 104)) ;
  categoryMethod_buildObservablePropertyMap (object->mAttribute_mTransientList, constinArgument_inUnifiedTypeMap, var_observablePropertyMap, inCompiler COMMA_SOURCE_FILE ("document.galgas", 109)) ;
  {
  ioArgument_ioSemanticContext.mAttribute_mDocumentObservablePropertyMap.modifier_insertKey (object->mAttribute_mDocumentName, var_observablePropertyMap, inCompiler COMMA_SOURCE_FILE ("document.galgas", 114)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_documentDeclaration_buildObservablePropertyMaps (void) {
  enterCategoryMethod_buildObservablePropertyMaps (kTypeDescriptor_GALGAS_documentDeclaration.mSlotID,
                                                   categoryMethod_documentDeclaration_buildObservablePropertyMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_documentDeclaration_buildObservablePropertyMaps (defineCategoryMethod_documentDeclaration_buildObservablePropertyMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@documentDeclaration semanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_documentDeclaration_semanticAnalysis (const cPtr_astDeclaration * inObject,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 GALGAS_structForGeneration & ioArgument_ioGeneration,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_documentDeclaration * object = (const cPtr_documentDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_documentDeclaration) ;
  GALGAS_observablePropertyMap var_observablePropertyMap ;
  constinArgument_inSemanticContext.mAttribute_mDocumentObservablePropertyMap.method_searchKey (object->mAttribute_mDocumentName, var_observablePropertyMap, inCompiler COMMA_SOURCE_FILE ("document.galgas", 126)) ;
  GALGAS_observablePropertyMap var_rootObservablePropertyMap ;
  constinArgument_inSemanticContext.mAttribute_mEntityObservablePropertyMap.method_searchKey (object->mAttribute_mRootEntityName, var_rootObservablePropertyMap, inCompiler COMMA_SOURCE_FILE ("document.galgas", 130)) ;
  GALGAS_simpleStoredPropertyListForGeneration var_simpleStoredPropertyListForGeneration ;
  categoryMethod_semanticAnalysis (object->mAttribute_mSimpleStoredAttributeList, object->mAttribute_mDocumentName.mAttribute_string, constinArgument_inSemanticContext.mAttribute_mUnifiedTypeMap, ioArgument_ioGeneration.mAttribute_mValidationStubRoutineListForGeneration, var_simpleStoredPropertyListForGeneration, inCompiler COMMA_SOURCE_FILE ("document.galgas", 135)) ;
  GALGAS_transientDefinitionListForGeneration var_transientDefinitionListForGeneration ;
  categoryMethod_transientSemanticAnalysis (object->mAttribute_mTransientList, object->mAttribute_mDocumentName.mAttribute_string, var_rootObservablePropertyMap, constinArgument_inSemanticContext, var_observablePropertyMap, ioArgument_ioGeneration, var_transientDefinitionListForGeneration, inCompiler COMMA_SOURCE_FILE ("document.galgas", 142)) ;
  GALGAS_actionMap var_actionMap ;
  {
  routine_buildActionMap (object->mAttribute_mActionDeclarationList, var_actionMap, inCompiler  COMMA_SOURCE_FILE ("document.galgas", 151)) ;
  }
  cEnumerator_actionMap enumerator_6153 (var_actionMap, kEnumeration_up) ;
  while (enumerator_6153.hasCurrentObject ()) {
    ioArgument_ioGeneration.mAttribute_mActionListForGeneration.addAssign_operation (object->mAttribute_mDocumentName.mAttribute_string, enumerator_6153.current_lkey (HERE).mAttribute_string  COMMA_SOURCE_FILE ("document.galgas", 153)) ;
    enumerator_6153.gotoNextObject () ;
  }
  GALGAS_arrayControllerMap var_arrayControllerMap ;
  categoryMethod_buildArrayControllerMap (object->mAttribute_mArrayControllerDeclarationList, var_arrayControllerMap, inCompiler COMMA_SOURCE_FILE ("document.galgas", 158)) ;
  GALGAS_regularBindingsGenerationList var_regularBindingsGenerationList ;
  GALGAS_multipleBindingGenerationList var_multipleBindingGenerationList ;
  GALGAS_actionBindingListForGeneration var_actionBindingListForGeneration ;
  GALGAS_decoratedOutletMap var_outletMap ;
  {
  routine_analyzeOutlets (var_rootObservablePropertyMap, constinArgument_inSemanticContext, object->mAttribute_mOutletDeclarationList, var_observablePropertyMap, var_actionMap, var_arrayControllerMap, ioArgument_ioGeneration, var_regularBindingsGenerationList, var_multipleBindingGenerationList, var_actionBindingListForGeneration, var_outletMap, inCompiler  COMMA_SOURCE_FILE ("document.galgas", 162)) ;
  }
  GALGAS_arrayControllerForGeneration var_documentArrayControllerForGeneration ;
  categoryMethod_arrayControllerSemanticAnalysis (object->mAttribute_mArrayControllerDeclarationList, object->mAttribute_mDocumentName.mAttribute_string, var_rootObservablePropertyMap, object->mAttribute_mRootEntityName.mAttribute_string, constinArgument_inSemanticContext, var_outletMap, var_observablePropertyMap, var_documentArrayControllerForGeneration, ioArgument_ioGeneration.mAttribute_mAllArrayControllerForGeneration, inCompiler COMMA_SOURCE_FILE ("document.galgas", 176)) ;
  ioArgument_ioGeneration.mAttribute_mDocumentListForGeneration.addAssign_operation (object->mAttribute_mDocumentName.mAttribute_string, object->mAttribute_mRootEntityName.mAttribute_string, var_simpleStoredPropertyListForGeneration, var_transientDefinitionListForGeneration, var_outletMap, var_actionBindingListForGeneration, var_regularBindingsGenerationList, var_multipleBindingGenerationList, var_documentArrayControllerForGeneration  COMMA_SOURCE_FILE ("document.galgas", 187)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_documentDeclaration_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_documentDeclaration.mSlotID,
                                        categoryMethod_documentDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_documentDeclaration_semanticAnalysis (defineCategoryMethod_documentDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding category method '@entityDeclaration typeInventory'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_entityDeclaration_typeInventory (const cPtr_astDeclaration * inObject,
                                                            GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                            GALGAS_transientDependencyGraph & ioArgument_ioTransientDependencyGraph,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_entityDeclaration * object = (const cPtr_entityDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_entityDeclaration) ;
  categoryMethod_typeInventory (object->mAttribute_mSimpleStoredAttributeList, ioArgument_ioUnifiedTypeMap, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 74)) ;
  categoryMethod_typeInventory (object->mAttribute_mTransientList, GALGAS_string ("entity.").add_operation (object->mAttribute_mEntityName.reader_string (SOURCE_FILE ("entity.galgas", 76)), inCompiler COMMA_SOURCE_FILE ("entity.galgas", 76)), ioArgument_ioUnifiedTypeMap, ioArgument_ioTransientDependencyGraph, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 75)) ;
  categoryMethod_typeInventory (object->mAttribute_mToOneRelationshipList, ioArgument_ioUnifiedTypeMap, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 80)) ;
  categoryMethod_typeInventory (object->mAttribute_mToManyRelationshipList, ioArgument_ioUnifiedTypeMap, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 81)) ;
  {
  ioArgument_ioUnifiedTypeMap.modifier_insertKey (object->mAttribute_mEntityName, GALGAS_typeKind::constructor_entityType (object->mAttribute_mEntityName.mAttribute_string  COMMA_SOURCE_FILE ("entity.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("entity.galgas", 82)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mSuperEntityName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    GALGAS_unifiedTypeMap_2D_proxy joker_3375 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioUnifiedTypeMap, object->mAttribute_mSuperEntityName, joker_3375 COMMA_SOURCE_FILE ("entity.galgas", 84)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_entityDeclaration_typeInventory (void) {
  enterCategoryMethod_typeInventory (kTypeDescriptor_GALGAS_entityDeclaration.mSlotID,
                                     categoryMethod_entityDeclaration_typeInventory) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_entityDeclaration_typeInventory (defineCategoryMethod_entityDeclaration_typeInventory, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@entityDeclaration buildObservablePropertyMaps'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_entityDeclaration_buildObservablePropertyMaps (const cPtr_astDeclaration * inObject,
                                                                          const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                          GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_entityDeclaration * object = (const cPtr_entityDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_entityDeclaration) ;
  GALGAS_observablePropertyMap var_observablePropertyMap = GALGAS_observablePropertyMap::constructor_emptyMap (SOURCE_FILE ("entity.galgas", 107)) ;
  categoryMethod_buildObservablePropertyMap (object->mAttribute_mSimpleStoredAttributeList, constinArgument_inUnifiedTypeMap, var_observablePropertyMap, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 109)) ;
  categoryMethod_buildObservablePropertyMap (object->mAttribute_mTransientList, constinArgument_inUnifiedTypeMap, var_observablePropertyMap, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 114)) ;
  categoryMethod_buildObservablePropertyMap (object->mAttribute_mToOneRelationshipList, constinArgument_inUnifiedTypeMap, var_observablePropertyMap, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 119)) ;
  categoryMethod_buildObservablePropertyMap (object->mAttribute_mToManyRelationshipList, constinArgument_inUnifiedTypeMap, var_observablePropertyMap, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 123)) ;
  {
  ioArgument_ioSemanticContext.mAttribute_mEntityObservablePropertyMap.modifier_insertKey (object->mAttribute_mEntityName, var_observablePropertyMap, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 128)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_entityDeclaration_buildObservablePropertyMaps (void) {
  enterCategoryMethod_buildObservablePropertyMaps (kTypeDescriptor_GALGAS_entityDeclaration.mSlotID,
                                                   categoryMethod_entityDeclaration_buildObservablePropertyMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_entityDeclaration_buildObservablePropertyMaps (defineCategoryMethod_entityDeclaration_buildObservablePropertyMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@entityDeclaration semanticAnalysis'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_entityDeclaration_semanticAnalysis (const cPtr_astDeclaration * inObject,
                                                               const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                               GALGAS_structForGeneration & ioArgument_ioGeneration,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_entityDeclaration * object = (const cPtr_entityDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_entityDeclaration) ;
  GALGAS_observablePropertyMap var_observablePropertyMap ;
  constinArgument_inSemanticContext.mAttribute_mEntityObservablePropertyMap.method_searchKey (object->mAttribute_mEntityName, var_observablePropertyMap, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 140)) ;
  GALGAS_simpleStoredPropertyListForGeneration var_simpleStoredPropertyListForGeneration ;
  categoryMethod_semanticAnalysis (object->mAttribute_mSimpleStoredAttributeList, object->mAttribute_mEntityName.mAttribute_string, constinArgument_inSemanticContext.mAttribute_mUnifiedTypeMap, ioArgument_ioGeneration.mAttribute_mValidationStubRoutineListForGeneration, var_simpleStoredPropertyListForGeneration, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 146)) ;
  GALGAS_transientDefinitionListForGeneration var_transientDefinitionListForGeneration ;
  categoryMethod_transientSemanticAnalysis (object->mAttribute_mTransientList, object->mAttribute_mEntityName.mAttribute_string, GALGAS_observablePropertyMap::constructor_emptyMap (SOURCE_FILE ("entity.galgas", 155)), constinArgument_inSemanticContext, var_observablePropertyMap, ioArgument_ioGeneration, var_transientDefinitionListForGeneration, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 153)) ;
  GALGAS_toOneEntityRelationshipListForGeneration var_toOneEntityRelationshipListForGeneration ;
  categoryMethod_semanticAnalysis (object->mAttribute_mToOneRelationshipList, constinArgument_inSemanticContext, var_toOneEntityRelationshipListForGeneration, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 162)) ;
  GALGAS_toManyEntityRelationshipListForGeneration var_toManyEntityRelationshipListForGeneration ;
  categoryMethod_semanticAnalysis (object->mAttribute_mToManyRelationshipList, constinArgument_inSemanticContext, var_toManyEntityRelationshipListForGeneration, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 167)) ;
  ioArgument_ioGeneration.mAttribute_mEntityListForGeneration.addAssign_operation (object->mAttribute_mEntityName.mAttribute_string, object->mAttribute_mSuperEntityName.mAttribute_string, var_simpleStoredPropertyListForGeneration, var_transientDefinitionListForGeneration, var_toOneEntityRelationshipListForGeneration, var_toManyEntityRelationshipListForGeneration  COMMA_SOURCE_FILE ("entity.galgas", 172)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_entityDeclaration_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_entityDeclaration.mSlotID,
                                        categoryMethod_entityDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_entityDeclaration_semanticAnalysis (defineCategoryMethod_entityDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding category method '@prefDeclaration typeInventory'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_prefDeclaration_typeInventory (const cPtr_astDeclaration * inObject,
                                                          GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                          GALGAS_transientDependencyGraph & ioArgument_ioTransientDependencyGraph,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_prefDeclaration * object = (const cPtr_prefDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_prefDeclaration) ;
  categoryMethod_typeInventory (object->mAttribute_mSimpleStoredAttributeList, ioArgument_ioUnifiedTypeMap, inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 65)) ;
  categoryMethod_typeInventory (object->mAttribute_mTransientList, GALGAS_string ("prefs.").add_operation (object->mAttribute_mPrefsName.reader_string (SOURCE_FILE ("preferences.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 67)), ioArgument_ioUnifiedTypeMap, ioArgument_ioTransientDependencyGraph, inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 66)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_prefDeclaration_typeInventory (void) {
  enterCategoryMethod_typeInventory (kTypeDescriptor_GALGAS_prefDeclaration.mSlotID,
                                     categoryMethod_prefDeclaration_typeInventory) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_prefDeclaration_typeInventory (defineCategoryMethod_prefDeclaration_typeInventory, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@prefDeclaration buildObservablePropertyMaps'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_prefDeclaration_buildObservablePropertyMaps (const cPtr_astDeclaration * inObject,
                                                                        const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_prefDeclaration * object = (const cPtr_prefDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_prefDeclaration) ;
  GALGAS_observablePropertyMap var_observablePropertyMap = GALGAS_observablePropertyMap::constructor_emptyMap (SOURCE_FILE ("preferences.galgas", 91)) ;
  categoryMethod_buildObservablePropertyMap (object->mAttribute_mSimpleStoredAttributeList, constinArgument_inUnifiedTypeMap, var_observablePropertyMap, inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 93)) ;
  categoryMethod_buildObservablePropertyMap (object->mAttribute_mTransientList, constinArgument_inUnifiedTypeMap, var_observablePropertyMap, inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 98)) ;
  {
  ioArgument_ioSemanticContext.mAttribute_mPrefsObservablePropertyMap.modifier_insertKey (object->mAttribute_mPrefsName, var_observablePropertyMap, inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 103)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_prefDeclaration_buildObservablePropertyMaps (void) {
  enterCategoryMethod_buildObservablePropertyMaps (kTypeDescriptor_GALGAS_prefDeclaration.mSlotID,
                                                   categoryMethod_prefDeclaration_buildObservablePropertyMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_prefDeclaration_buildObservablePropertyMaps (defineCategoryMethod_prefDeclaration_buildObservablePropertyMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category method '@prefDeclaration semanticAnalysis'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_prefDeclaration_semanticAnalysis (const cPtr_astDeclaration * inObject,
                                                             const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                             GALGAS_structForGeneration & ioArgument_ioGeneration,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_prefDeclaration * object = (const cPtr_prefDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_prefDeclaration) ;
  GALGAS_observablePropertyMap var_observablePropertyMap ;
  constinArgument_inSemanticContext.mAttribute_mPrefsObservablePropertyMap.method_searchKey (object->mAttribute_mPrefsName, var_observablePropertyMap, inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 115)) ;
  GALGAS_simpleStoredPropertyListForGeneration var_simpleStoredPropertyListForGeneration ;
  categoryMethod_semanticAnalysis (object->mAttribute_mSimpleStoredAttributeList, object->mAttribute_mPrefsName.mAttribute_string, constinArgument_inSemanticContext.mAttribute_mUnifiedTypeMap, ioArgument_ioGeneration.mAttribute_mValidationStubRoutineListForGeneration, var_simpleStoredPropertyListForGeneration, inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 120)) ;
  GALGAS_transientDefinitionListForGeneration var_transientDefinitionListForGeneration ;
  categoryMethod_transientSemanticAnalysis (object->mAttribute_mTransientList, object->mAttribute_mPrefsName.mAttribute_string, GALGAS_observablePropertyMap::constructor_emptyMap (SOURCE_FILE ("preferences.galgas", 129)), constinArgument_inSemanticContext, var_observablePropertyMap, ioArgument_ioGeneration, var_transientDefinitionListForGeneration, inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 127)) ;
  GALGAS_actionMap var_actionMap ;
  {
  routine_buildActionMap (object->mAttribute_mActionDeclarationList, var_actionMap, inCompiler  COMMA_SOURCE_FILE ("preferences.galgas", 136)) ;
  }
  cEnumerator_actionMap enumerator_5485 (var_actionMap, kEnumeration_up) ;
  while (enumerator_5485.hasCurrentObject ()) {
    ioArgument_ioGeneration.mAttribute_mActionListForGeneration.addAssign_operation (object->mAttribute_mPrefsName.mAttribute_string, enumerator_5485.current_lkey (HERE).mAttribute_string  COMMA_SOURCE_FILE ("preferences.galgas", 138)) ;
    enumerator_5485.gotoNextObject () ;
  }
  GALGAS_regularBindingsGenerationList var_regularBindingsGenerationList ;
  GALGAS_multipleBindingGenerationList var_multipleBindingGenerationList ;
  GALGAS_actionBindingListForGeneration var_actionBindingListForGeneration ;
  GALGAS_decoratedOutletMap var_outletMap ;
  {
  routine_analyzeOutlets (GALGAS_observablePropertyMap::constructor_emptyMap (SOURCE_FILE ("preferences.galgas", 144)), constinArgument_inSemanticContext, object->mAttribute_mOutletDeclarationList, var_observablePropertyMap, var_actionMap, GALGAS_arrayControllerMap::constructor_emptyMap (SOURCE_FILE ("preferences.galgas", 149)), ioArgument_ioGeneration, var_regularBindingsGenerationList, var_multipleBindingGenerationList, var_actionBindingListForGeneration, var_outletMap, inCompiler  COMMA_SOURCE_FILE ("preferences.galgas", 143)) ;
  }
  ioArgument_ioGeneration.mAttribute_mPreferenceListForGeneration.addAssign_operation (object->mAttribute_mPrefsName.mAttribute_string, var_simpleStoredPropertyListForGeneration, var_transientDefinitionListForGeneration, var_regularBindingsGenerationList, var_multipleBindingGenerationList, var_actionBindingListForGeneration, var_outletMap  COMMA_SOURCE_FILE ("preferences.galgas", 157)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_prefDeclaration_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_prefDeclaration.mSlotID,
                                        categoryMethod_prefDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_prefDeclaration_semanticAnalysis (defineCategoryMethod_prefDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@boolAsDefaultValue analyzeDefaultValueType'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_boolAsDefaultValue_analyzeDefaultValueType (const cPtr_abstractDefaultValue * inObject,
                                                                       const GALGAS_typeKindList constinArgument_inAttributeActualTypeList,
                                                                       GALGAS_string & outArgument_outSwiftDefaultValueAsString,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_boolAsDefaultValue * object = (const cPtr_boolAsDefaultValue *) inObject ;
  macroValidSharedObject (object, cPtr_boolAsDefaultValue) ;
  outArgument_outSwiftDefaultValueAsString = GALGAS_string::makeEmptyString () ;
  GALGAS_bool var_found = GALGAS_bool (false) ;
  cEnumerator_typeKindList enumerator_4536 (constinArgument_inAttributeActualTypeList, kEnumeration_up) ;
  bool bool_0 = var_found.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 114)).isValidAndTrue () ;
  if (enumerator_4536.hasCurrentObject () && bool_0) {
    while (enumerator_4536.hasCurrentObject () && bool_0) {
      switch (enumerator_4536.current_mType (HERE).enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_boolType:
        {
          GALGAS_string temp_1 ;
          const enumGalgasBool test_2 = object->mAttribute_mValue.mAttribute_bool.boolEnum () ;
          if (kBoolTrue == test_2) {
            temp_1 = GALGAS_string ("true") ;
          }else if (kBoolFalse == test_2) {
            temp_1 = GALGAS_string ("false") ;
          }
          outArgument_outSwiftDefaultValueAsString = temp_1 ;
          var_found = GALGAS_bool (true) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_integerType:
      case GALGAS_typeKind::kEnum_colorType:
      case GALGAS_typeKind::kEnum_dateType:
      case GALGAS_typeKind::kEnum_doubleType:
      case GALGAS_typeKind::kEnum_stringType:
        {
        }
        break ;
      case GALGAS_typeKind::kEnum_entityType:
        {
        }
        break ;
      case GALGAS_typeKind::kEnum_enumType:
        {
        }
        break ;
      }
      enumerator_4536.gotoNextObject () ;
      if (enumerator_4536.hasCurrentObject ()) {
        bool_0 = var_found.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 114)).isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_3 = var_found.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 124)).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_location location_4 (object->mAttribute_mValue.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_4, GALGAS_string ("only a boolean attribute can be initialized by YES or NO")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 125)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_boolAsDefaultValue_analyzeDefaultValueType (void) {
  enterCategoryMethod_analyzeDefaultValueType (kTypeDescriptor_GALGAS_boolAsDefaultValue.mSlotID,
                                               categoryMethod_boolAsDefaultValue_analyzeDefaultValueType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_boolAsDefaultValue_analyzeDefaultValueType (defineCategoryMethod_boolAsDefaultValue_analyzeDefaultValueType, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@integerAsDefaultValue analyzeDefaultValueType'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_integerAsDefaultValue_analyzeDefaultValueType (const cPtr_abstractDefaultValue * inObject,
                                                                          const GALGAS_typeKindList constinArgument_inAttributeActualTypeList,
                                                                          GALGAS_string & outArgument_outSwiftDefaultValueAsString,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerAsDefaultValue * object = (const cPtr_integerAsDefaultValue *) inObject ;
  macroValidSharedObject (object, cPtr_integerAsDefaultValue) ;
  outArgument_outSwiftDefaultValueAsString = GALGAS_string::makeEmptyString () ;
  GALGAS_bool var_found = GALGAS_bool (false) ;
  cEnumerator_typeKindList enumerator_5313 (constinArgument_inAttributeActualTypeList, kEnumeration_up) ;
  bool bool_0 = var_found.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 138)).isValidAndTrue () ;
  if (enumerator_5313.hasCurrentObject () && bool_0) {
    while (enumerator_5313.hasCurrentObject () && bool_0) {
      switch (enumerator_5313.current_mType (HERE).enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_integerType:
        {
          outArgument_outSwiftDefaultValueAsString = object->mAttribute_mValue.mAttribute_uint.reader_string (SOURCE_FILE ("explicit-default-value.galgas", 141)) ;
          var_found = GALGAS_bool (true) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_boolType:
      case GALGAS_typeKind::kEnum_colorType:
      case GALGAS_typeKind::kEnum_dateType:
      case GALGAS_typeKind::kEnum_doubleType:
      case GALGAS_typeKind::kEnum_stringType:
        {
        }
        break ;
      case GALGAS_typeKind::kEnum_entityType:
        {
        }
        break ;
      case GALGAS_typeKind::kEnum_enumType:
        {
        }
        break ;
      }
      enumerator_5313.gotoNextObject () ;
      if (enumerator_5313.hasCurrentObject ()) {
        bool_0 = var_found.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 138)).isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_1 = var_found.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 148)).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_location location_2 (object->mAttribute_mValue.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_2, GALGAS_string ("only an integer attribute can be initialized by an integer constant")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 149)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_integerAsDefaultValue_analyzeDefaultValueType (void) {
  enterCategoryMethod_analyzeDefaultValueType (kTypeDescriptor_GALGAS_integerAsDefaultValue.mSlotID,
                                               categoryMethod_integerAsDefaultValue_analyzeDefaultValueType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_integerAsDefaultValue_analyzeDefaultValueType (defineCategoryMethod_integerAsDefaultValue_analyzeDefaultValueType, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@doubleAsDefaultValue analyzeDefaultValueType'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_doubleAsDefaultValue_analyzeDefaultValueType (const cPtr_abstractDefaultValue * inObject,
                                                                         const GALGAS_typeKindList constinArgument_inAttributeActualTypeList,
                                                                         GALGAS_string & outArgument_outSwiftDefaultValueAsString,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_doubleAsDefaultValue * object = (const cPtr_doubleAsDefaultValue *) inObject ;
  macroValidSharedObject (object, cPtr_doubleAsDefaultValue) ;
  outArgument_outSwiftDefaultValueAsString = GALGAS_string::makeEmptyString () ;
  GALGAS_bool var_found = GALGAS_bool (false) ;
  cEnumerator_typeKindList enumerator_6077 (constinArgument_inAttributeActualTypeList, kEnumeration_up) ;
  bool bool_0 = var_found.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 162)).isValidAndTrue () ;
  if (enumerator_6077.hasCurrentObject () && bool_0) {
    while (enumerator_6077.hasCurrentObject () && bool_0) {
      switch (enumerator_6077.current_mType (HERE).enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_doubleType:
        {
          outArgument_outSwiftDefaultValueAsString = object->mAttribute_mValue.mAttribute_double.reader_string (SOURCE_FILE ("explicit-default-value.galgas", 165)) ;
          var_found = GALGAS_bool (true) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_boolType:
      case GALGAS_typeKind::kEnum_colorType:
      case GALGAS_typeKind::kEnum_dateType:
      case GALGAS_typeKind::kEnum_integerType:
      case GALGAS_typeKind::kEnum_stringType:
        {
        }
        break ;
      case GALGAS_typeKind::kEnum_entityType:
        {
        }
        break ;
      case GALGAS_typeKind::kEnum_enumType:
        {
        }
        break ;
      }
      enumerator_6077.gotoNextObject () ;
      if (enumerator_6077.hasCurrentObject ()) {
        bool_0 = var_found.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 162)).isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_1 = var_found.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 172)).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_location location_2 (object->mAttribute_mValue.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_2, GALGAS_string ("only a double attribute can be initialized by a floating point constant")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 173)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_doubleAsDefaultValue_analyzeDefaultValueType (void) {
  enterCategoryMethod_analyzeDefaultValueType (kTypeDescriptor_GALGAS_doubleAsDefaultValue.mSlotID,
                                               categoryMethod_doubleAsDefaultValue_analyzeDefaultValueType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_doubleAsDefaultValue_analyzeDefaultValueType (defineCategoryMethod_doubleAsDefaultValue_analyzeDefaultValueType, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@stringAsDefaultValue analyzeDefaultValueType'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_stringAsDefaultValue_analyzeDefaultValueType (const cPtr_abstractDefaultValue * inObject,
                                                                         const GALGAS_typeKindList constinArgument_inAttributeActualTypeList,
                                                                         GALGAS_string & outArgument_outSwiftDefaultValueAsString,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_stringAsDefaultValue * object = (const cPtr_stringAsDefaultValue *) inObject ;
  macroValidSharedObject (object, cPtr_stringAsDefaultValue) ;
  outArgument_outSwiftDefaultValueAsString = GALGAS_string::makeEmptyString () ;
  GALGAS_bool var_found = GALGAS_bool (false) ;
  cEnumerator_typeKindList enumerator_6847 (constinArgument_inAttributeActualTypeList, kEnumeration_up) ;
  bool bool_0 = var_found.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 186)).isValidAndTrue () ;
  if (enumerator_6847.hasCurrentObject () && bool_0) {
    while (enumerator_6847.hasCurrentObject () && bool_0) {
      switch (enumerator_6847.current_mType (HERE).enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_stringType:
        {
          outArgument_outSwiftDefaultValueAsString = GALGAS_string ("\"").add_operation (object->mAttribute_mValue.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 189)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 189)) ;
          var_found = GALGAS_bool (true) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_boolType:
      case GALGAS_typeKind::kEnum_colorType:
      case GALGAS_typeKind::kEnum_dateType:
      case GALGAS_typeKind::kEnum_integerType:
      case GALGAS_typeKind::kEnum_doubleType:
        {
        }
        break ;
      case GALGAS_typeKind::kEnum_entityType:
        {
        }
        break ;
      case GALGAS_typeKind::kEnum_enumType:
        {
        }
        break ;
      }
      enumerator_6847.gotoNextObject () ;
      if (enumerator_6847.hasCurrentObject ()) {
        bool_0 = var_found.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 186)).isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_1 = var_found.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 196)).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_location location_2 (object->mAttribute_mValue.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_2, GALGAS_string ("only a string attribute can be initialized by a string constant")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 197)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_stringAsDefaultValue_analyzeDefaultValueType (void) {
  enterCategoryMethod_analyzeDefaultValueType (kTypeDescriptor_GALGAS_stringAsDefaultValue.mSlotID,
                                               categoryMethod_stringAsDefaultValue_analyzeDefaultValueType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_stringAsDefaultValue_analyzeDefaultValueType (defineCategoryMethod_stringAsDefaultValue_analyzeDefaultValueType, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@identifierAsDefaultValue analyzeDefaultValueType'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_identifierAsDefaultValue_analyzeDefaultValueType (const cPtr_abstractDefaultValue * inObject,
                                                                             const GALGAS_typeKindList constinArgument_inAttributeActualTypeList,
                                                                             GALGAS_string & outArgument_outSwiftDefaultValueAsString,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_identifierAsDefaultValue * object = (const cPtr_identifierAsDefaultValue *) inObject ;
  macroValidSharedObject (object, cPtr_identifierAsDefaultValue) ;
  outArgument_outSwiftDefaultValueAsString = GALGAS_string::makeEmptyString () ;
  GALGAS_bool var_found = GALGAS_bool (false) ;
  cEnumerator_typeKindList enumerator_9507 (constinArgument_inAttributeActualTypeList, kEnumeration_up) ;
  bool bool_0 = var_found.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 265)).isValidAndTrue () ;
  if (enumerator_9507.hasCurrentObject () && bool_0) {
    while (enumerator_9507.hasCurrentObject () && bool_0) {
      switch (enumerator_9507.current_mType (HERE).enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_colorType:
        {
          var_found = GALGAS_bool (true) ;
          const enumGalgasBool test_1 = function_predefinedColors (inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 269)).reader_hasKey (object->mAttribute_mValue.mAttribute_string COMMA_SOURCE_FILE ("explicit-default-value.galgas", 269)).boolEnum () ;
          if (kBoolTrue == test_1) {
            outArgument_outSwiftDefaultValueAsString = GALGAS_string ("NSColor.").add_operation (object->mAttribute_mValue.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 270)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 270)) ;
          }else if (kBoolFalse == test_1) {
            GALGAS_location location_2 (object->mAttribute_mValue.reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_2, GALGAS_string ("unknown predefined color")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 272)) ;
          }
        }
        break ;
      case GALGAS_typeKind::kEnum_dateType:
        {
          var_found = GALGAS_bool (true) ;
          const enumGalgasBool test_3 = function_predefinedDates (inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 277)).reader_hasKey (object->mAttribute_mValue.mAttribute_string COMMA_SOURCE_FILE ("explicit-default-value.galgas", 277)).boolEnum () ;
          if (kBoolTrue == test_3) {
            outArgument_outSwiftDefaultValueAsString = GALGAS_string ("NSDate ()") ;
          }else if (kBoolFalse == test_3) {
            GALGAS_location location_4 (object->mAttribute_mValue.reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_4, GALGAS_string ("unknown predefined date")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 280)) ;
          }
        }
        break ;
      case GALGAS_typeKind::kEnum_enumType:
        {
          const cEnumAssociatedValues_typeKind_enumType * extractPtr_10407 = (const cEnumAssociatedValues_typeKind_enumType *) (enumerator_9507.current_mType (HERE).unsafePointer ()) ;
          const GALGAS_string extractedValue_enumTypeName = extractPtr_10407->mAssociatedValue0 ;
          const GALGAS_enumConstantMap extractedValue_constantMap = extractPtr_10407->mAssociatedValue1 ;
          var_found = GALGAS_bool (true) ;
          const enumGalgasBool test_5 = extractedValue_constantMap.reader_hasKey (object->mAttribute_mValue.mAttribute_string COMMA_SOURCE_FILE ("explicit-default-value.galgas", 284)).boolEnum () ;
          if (kBoolTrue == test_5) {
            outArgument_outSwiftDefaultValueAsString = extractedValue_enumTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 285)).add_operation (object->mAttribute_mValue.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 285)) ;
          }else if (kBoolFalse == test_5) {
            GALGAS_location location_6 (object->mAttribute_mValue.reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_6, GALGAS_string ("the '").add_operation (extractedValue_enumTypeName, inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 288)).add_operation (GALGAS_string ("' enumeration does not define '"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 288)).add_operation (object->mAttribute_mValue.reader_string (SOURCE_FILE ("explicit-default-value.galgas", 288)), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 288)).add_operation (GALGAS_string ("' constant"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 288))  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 287)) ;
            outArgument_outSwiftDefaultValueAsString.drop () ; // Release error dropped variable
          }
        }
        break ;
      case GALGAS_typeKind::kEnum_entityType:
        {
          GALGAS_location location_7 (object->mAttribute_mValue.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_7, GALGAS_string ("invalid entity type")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 292)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_boolType:
        {
          GALGAS_location location_8 (object->mAttribute_mValue.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_8, GALGAS_string ("invalid bool type")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 294)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_doubleType:
        {
          GALGAS_location location_9 (object->mAttribute_mValue.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_9, GALGAS_string ("invalid double type")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 296)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_integerType:
        {
          GALGAS_location location_10 (object->mAttribute_mValue.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_10, GALGAS_string ("invalid integer type")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 298)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_stringType:
        {
          GALGAS_location location_11 (object->mAttribute_mValue.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_11, GALGAS_string ("invalid string type")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 300)) ;
        }
        break ;
      }
      enumerator_9507.gotoNextObject () ;
      if (enumerator_9507.hasCurrentObject ()) {
        bool_0 = var_found.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 265)).isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_12 = var_found.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 303)).boolEnum () ;
  if (kBoolTrue == test_12) {
    GALGAS_location location_13 (object->mAttribute_mValue.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_13, GALGAS_string ("unknow type for this identifier")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 304)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_identifierAsDefaultValue_analyzeDefaultValueType (void) {
  enterCategoryMethod_analyzeDefaultValueType (kTypeDescriptor_GALGAS_identifierAsDefaultValue.mSlotID,
                                               categoryMethod_identifierAsDefaultValue_analyzeDefaultValueType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_identifierAsDefaultValue_analyzeDefaultValueType (defineCategoryMethod_identifierAsDefaultValue_analyzeDefaultValueType, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@listAsDefaultValue analyzeDefaultValueType'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_listAsDefaultValue_analyzeDefaultValueType (const cPtr_abstractDefaultValue * inObject,
                                                                       const GALGAS_typeKindList /* constinArgument_inAttributeActualTypeList */,
                                                                       GALGAS_string & outArgument_outSwiftDefaultValueAsString,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listAsDefaultValue * object = (const cPtr_listAsDefaultValue *) inObject ;
  macroValidSharedObject (object, cPtr_listAsDefaultValue) ;
  outArgument_outSwiftDefaultValueAsString = GALGAS_string::makeEmptyString () ;
  GALGAS_bool var_found = GALGAS_bool (false) ;
  const enumGalgasBool test_0 = var_found.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 392)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mStartLocation, GALGAS_string ("invalid initialization value")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 393)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_listAsDefaultValue_analyzeDefaultValueType (void) {
  enterCategoryMethod_analyzeDefaultValueType (kTypeDescriptor_GALGAS_listAsDefaultValue.mSlotID,
                                               categoryMethod_listAsDefaultValue_analyzeDefaultValueType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listAsDefaultValue_analyzeDefaultValueType (defineCategoryMethod_listAsDefaultValue_analyzeDefaultValueType, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//      Overriding category method '@literalIntMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalIntMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                                                                       const GALGAS_observablePropertyMap /* constinArgument_inRootObservablePropertyMap */,
                                                                                                       const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                                                                       const GALGAS_observablePropertyMap /* constinArgument_inCurrentObservablePropertyMap */,
                                                                                                       GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                                       GALGAS_typeKind & outArgument_outType,
                                                                                                       GALGAS_location & outArgument_outErrorLocation,
                                                                                                       C_Compiler * /* inCompiler */
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalIntMultipleBindingExpressionAST * object = (const cPtr_literalIntMultipleBindingExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalIntMultipleBindingExpressionAST) ;
  outArgument_outEnableExpression = GALGAS_negateBooleanMultipleBindingLiteralIntForGeneration::constructor_new (object->mAttribute_mValue.mAttribute_uint  COMMA_SOURCE_FILE ("multiple-binding.galgas", 221)) ;
  outArgument_outType = GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("multiple-binding.galgas", 222)) ;
  outArgument_outErrorLocation = object->mAttribute_mValue.mAttribute_location ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalIntMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (void) {
  enterCategoryMethod_analyzeExpressionForMultipleBinding (kTypeDescriptor_GALGAS_literalIntMultipleBindingExpressionAST.mSlotID,
                                                           categoryMethod_literalIntMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalIntMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (defineCategoryMethod_literalIntMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
// Overriding category method '@observablePropertyInMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_observablePropertyInMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                                                                                 const GALGAS_observablePropertyMap constinArgument_inRootObservablePropertyMap,
                                                                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                                                 const GALGAS_observablePropertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                                                 GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                                                 GALGAS_typeKind & outArgument_outType,
                                                                                                                 GALGAS_location & outArgument_outErrorLocation,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_observablePropertyInMultipleBindingExpressionAST * object = (const cPtr_observablePropertyInMultipleBindingExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_observablePropertyInMultipleBindingExpressionAST) ;
  GALGAS_propertyMultiplicity var_outMultiplicity ;
  GALGAS_propertyKind joker_10530 ; // Joker input parameter
  GALGAS_string joker_10611 ; // Joker input parameter
  categoryMethod_analyzeObservableProperty (object->mAttribute_mProperty, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, outArgument_outType, joker_10530, var_outMultiplicity, joker_10611, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 236)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_outMultiplicity.objectCompare (GALGAS_propertyMultiplicity::constructor_collection (SOURCE_FILE ("multiple-binding.galgas", 245)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (categoryReader_location (object->mAttribute_mProperty, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 246)), GALGAS_string ("a collection cannot be observed")  COMMA_SOURCE_FILE ("multiple-binding.galgas", 246)) ;
  }
  switch (outArgument_outType.enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_stringType:
  case GALGAS_typeKind::kEnum_boolType:
  case GALGAS_typeKind::kEnum_colorType:
  case GALGAS_typeKind::kEnum_dateType:
  case GALGAS_typeKind::kEnum_doubleType:
  case GALGAS_typeKind::kEnum_integerType:
    {
    }
    break ;
  case GALGAS_typeKind::kEnum_enumType:
    {
    }
    break ;
  case GALGAS_typeKind::kEnum_entityType:
    {
      inCompiler->emitSemanticError (categoryReader_location (object->mAttribute_mProperty, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 252)), GALGAS_string ("an entity cannot be observed")  COMMA_SOURCE_FILE ("multiple-binding.galgas", 252)) ;
    }
    break ;
  }
  outArgument_outEnableExpression = GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::constructor_new (categoryReader_modelString (object->mAttribute_mProperty, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 255))  COMMA_SOURCE_FILE ("multiple-binding.galgas", 254)) ;
  outArgument_outErrorLocation = categoryReader_location (object->mAttribute_mProperty, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 257)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_observablePropertyInMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (void) {
  enterCategoryMethod_analyzeExpressionForMultipleBinding (kTypeDescriptor_GALGAS_observablePropertyInMultipleBindingExpressionAST.mSlotID,
                                                           categoryMethod_observablePropertyInMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_observablePropertyInMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (defineCategoryMethod_observablePropertyInMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//     Overriding category method '@negateBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_negateBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                                                                          const GALGAS_observablePropertyMap constinArgument_inRootObservablePropertyMap,
                                                                                                          const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                                          const GALGAS_observablePropertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                                          GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                                          GALGAS_typeKind & outArgument_outType,
                                                                                                          GALGAS_location & outArgument_outErrorLocation,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_negateBooleanMultipleBindingExpressionAST * object = (const cPtr_negateBooleanMultipleBindingExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_negateBooleanMultipleBindingExpressionAST) ;
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_expression ;
  callCategoryMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mAttribute_mBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_expression, outArgument_outType, outArgument_outErrorLocation, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 270)) ;
  const enumGalgasBool test_0 = outArgument_outType.reader_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 278)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 278)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (outArgument_outErrorLocation, GALGAS_string ("cannot apply negation: operand is not boolean")  COMMA_SOURCE_FILE ("multiple-binding.galgas", 279)) ;
  }
  outArgument_outEnableExpression = GALGAS_negateBooleanMultipleBindingExpressionForGeneration::constructor_new (var_expression  COMMA_SOURCE_FILE ("multiple-binding.galgas", 281)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_negateBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (void) {
  enterCategoryMethod_analyzeExpressionForMultipleBinding (kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionAST.mSlotID,
                                                           categoryMethod_negateBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_negateBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (defineCategoryMethod_negateBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding category method '@orBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_orBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                                                                      const GALGAS_observablePropertyMap constinArgument_inRootObservablePropertyMap,
                                                                                                      const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                                      const GALGAS_observablePropertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                                      GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                                      GALGAS_typeKind & outArgument_outType,
                                                                                                      GALGAS_location & outArgument_outErrorLocation,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_orBooleanMultipleBindingExpressionAST * object = (const cPtr_orBooleanMultipleBindingExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_orBooleanMultipleBindingExpressionAST) ;
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression ;
  GALGAS_typeKind var_outLeftType ;
  GALGAS_location var_outLeftLocation ;
  callCategoryMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mAttribute_mLeftBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_leftExpression, var_outLeftType, var_outLeftLocation, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 294)) ;
  const enumGalgasBool test_0 = var_outLeftType.reader_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 302)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 302)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (var_outLeftLocation, GALGAS_string ("cannot apply 'or': left operand is not boolean")  COMMA_SOURCE_FILE ("multiple-binding.galgas", 303)) ;
  }
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression ;
  GALGAS_typeKind var_outRightType ;
  GALGAS_location var_outRightLocation ;
  callCategoryMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mAttribute_mRightBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_rightExpression, var_outRightType, var_outRightLocation, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 305)) ;
  const enumGalgasBool test_1 = var_outRightType.reader_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 313)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 313)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (var_outRightLocation, GALGAS_string ("cannot apply 'or': right operand is not boolean")  COMMA_SOURCE_FILE ("multiple-binding.galgas", 314)) ;
  }
  outArgument_outType = GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("multiple-binding.galgas", 316)) ;
  outArgument_outErrorLocation = var_outRightLocation ;
  outArgument_outEnableExpression = GALGAS_orBooleanMultipleBindingExpressionForGeneration::constructor_new (var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("multiple-binding.galgas", 318)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_orBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (void) {
  enterCategoryMethod_analyzeExpressionForMultipleBinding (kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionAST.mSlotID,
                                                           categoryMethod_orBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_orBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (defineCategoryMethod_orBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//      Overriding category method '@andBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_andBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                                                                       const GALGAS_observablePropertyMap constinArgument_inRootObservablePropertyMap,
                                                                                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                                       const GALGAS_observablePropertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                                       GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                                       GALGAS_typeKind & outArgument_outType,
                                                                                                       GALGAS_location & outArgument_outErrorLocation,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_andBooleanMultipleBindingExpressionAST * object = (const cPtr_andBooleanMultipleBindingExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_andBooleanMultipleBindingExpressionAST) ;
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression ;
  GALGAS_typeKind var_outLeftType ;
  GALGAS_location var_outLeftLocation ;
  callCategoryMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mAttribute_mLeftBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_leftExpression, var_outLeftType, var_outLeftLocation, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 331)) ;
  const enumGalgasBool test_0 = var_outLeftType.reader_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 339)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 339)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (var_outLeftLocation, GALGAS_string ("cannot apply 'and': left operand is not boolean")  COMMA_SOURCE_FILE ("multiple-binding.galgas", 340)) ;
  }
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression ;
  GALGAS_typeKind var_outRightType ;
  GALGAS_location var_outRightLocation ;
  callCategoryMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mAttribute_mRightBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_rightExpression, var_outRightType, var_outRightLocation, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 342)) ;
  const enumGalgasBool test_1 = var_outRightType.reader_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 350)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 350)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (var_outRightLocation, GALGAS_string ("cannot apply 'and': right operand is not boolean")  COMMA_SOURCE_FILE ("multiple-binding.galgas", 351)) ;
  }
  outArgument_outType = GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("multiple-binding.galgas", 353)) ;
  outArgument_outErrorLocation = var_outRightLocation ;
  outArgument_outEnableExpression = GALGAS_andBooleanMultipleBindingExpressionForGeneration::constructor_new (var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("multiple-binding.galgas", 355)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_andBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (void) {
  enterCategoryMethod_analyzeExpressionForMultipleBinding (kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionAST.mSlotID,
                                                           categoryMethod_andBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_andBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (defineCategoryMethod_andBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//      Overriding category method '@comparisonMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_comparisonMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                                                                       const GALGAS_observablePropertyMap constinArgument_inRootObservablePropertyMap,
                                                                                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                                       const GALGAS_observablePropertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                                       GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                                       GALGAS_typeKind & outArgument_outType,
                                                                                                       GALGAS_location & outArgument_outErrorLocation,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_comparisonMultipleBindingExpressionAST * object = (const cPtr_comparisonMultipleBindingExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_comparisonMultipleBindingExpressionAST) ;
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression ;
  GALGAS_typeKind var_outLeftType ;
  GALGAS_location var_outLeftLocation ;
  callCategoryMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mAttribute_mLeftBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_leftExpression, var_outLeftType, var_outLeftLocation, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 368)) ;
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression ;
  GALGAS_typeKind var_outRightType ;
  GALGAS_location var_outRightLocation ;
  callCategoryMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mAttribute_mRightBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_rightExpression, var_outRightType, var_outRightLocation, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 376)) ;
  GALGAS_bool test_0 = var_outLeftType.reader_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 384)) ;
  if (kBoolTrue != test_0.boolEnum ()) {
    test_0 = var_outLeftType.reader_isIntegerType (SOURCE_FILE ("multiple-binding.galgas", 384)) ;
  }
  const enumGalgasBool test_1 = test_0.operator_not (SOURCE_FILE ("multiple-binding.galgas", 384)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (var_outLeftLocation, GALGAS_string ("cannot compare: left operand is neither boolean nor integer")  COMMA_SOURCE_FILE ("multiple-binding.galgas", 385)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_outRightType.objectCompare (var_outLeftType)).boolEnum () ;
  if (kBoolTrue == test_2) {
    inCompiler->emitSemanticError (var_outRightLocation, GALGAS_string ("cannot compare: right operand type is different than left operand type")  COMMA_SOURCE_FILE ("multiple-binding.galgas", 388)) ;
  }
  outArgument_outType = GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("multiple-binding.galgas", 390)) ;
  outArgument_outErrorLocation = var_outRightLocation ;
  outArgument_outEnableExpression = GALGAS_comparisonMultipleBindingExpressionForGeneration::constructor_new (var_leftExpression, object->mAttribute_mOperator, var_rightExpression  COMMA_SOURCE_FILE ("multiple-binding.galgas", 392)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_comparisonMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (void) {
  enterCategoryMethod_analyzeExpressionForMultipleBinding (kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionAST.mSlotID,
                                                           categoryMethod_comparisonMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_comparisonMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (defineCategoryMethod_comparisonMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding category reader '@negateBooleanMultipleBindingLiteralIntForGeneration observedModelSet'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringset categoryReader_negateBooleanMultipleBindingLiteralIntForGeneration_observedModelSet (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * /* inObject */,
                                                                                                             C_Compiler * /* inCompiler */
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_outObservedModelSet ; // Returned variable
  result_outObservedModelSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("multiple-binding.galgas", 409)) ;
//---
  return result_outObservedModelSet ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_negateBooleanMultipleBindingLiteralIntForGeneration_observedModelSet (void) {
  enterCategoryReader_observedModelSet (kTypeDescriptor_GALGAS_negateBooleanMultipleBindingLiteralIntForGeneration.mSlotID,
                                        categoryReader_negateBooleanMultipleBindingLiteralIntForGeneration_observedModelSet) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_negateBooleanMultipleBindingLiteralIntForGeneration_observedModelSet (defineCategoryReader_negateBooleanMultipleBindingLiteralIntForGeneration_observedModelSet, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//  Overriding category reader '@observablePropertyAsBooleanMultipleBindingExpressionForGeneration observedModelSet'   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringset categoryReader_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_observedModelSet (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                                           C_Compiler * /* inCompiler */
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_outObservedModelSet ; // Returned variable
  const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration) ;
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("multiple-binding.galgas", 417)) ;
  temp_0.addAssign_operation (object->mAttribute_mObservedModel  COMMA_SOURCE_FILE ("multiple-binding.galgas", 417)) ;
  result_outObservedModelSet = temp_0 ;
//---
  return result_outObservedModelSet ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_observedModelSet (void) {
  enterCategoryReader_observedModelSet (kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                        categoryReader_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_observedModelSet) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_observedModelSet (defineCategoryReader_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_observedModelSet, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding category reader '@negateBooleanMultipleBindingExpressionForGeneration observedModelSet'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringset categoryReader_negateBooleanMultipleBindingExpressionForGeneration_observedModelSet (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_outObservedModelSet ; // Returned variable
  const cPtr_negateBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_negateBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_negateBooleanMultipleBindingExpressionForGeneration) ;
  result_outObservedModelSet = callCategoryReader_observedModelSet ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 425)) ;
//---
  return result_outObservedModelSet ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_negateBooleanMultipleBindingExpressionForGeneration_observedModelSet (void) {
  enterCategoryReader_observedModelSet (kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                        categoryReader_negateBooleanMultipleBindingExpressionForGeneration_observedModelSet) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_negateBooleanMultipleBindingExpressionForGeneration_observedModelSet (defineCategoryReader_negateBooleanMultipleBindingExpressionForGeneration_observedModelSet, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category reader '@orBooleanMultipleBindingExpressionForGeneration observedModelSet'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringset categoryReader_orBooleanMultipleBindingExpressionForGeneration_observedModelSet (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_outObservedModelSet ; // Returned variable
  const cPtr_orBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_orBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_orBooleanMultipleBindingExpressionForGeneration) ;
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("multiple-binding.galgas", 433)) ;
  temp_0.dotAssign_operation (callCategoryReader_observedModelSet ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 433))  COMMA_SOURCE_FILE ("multiple-binding.galgas", 433)) ;
  temp_0.dotAssign_operation (callCategoryReader_observedModelSet ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 433))  COMMA_SOURCE_FILE ("multiple-binding.galgas", 433)) ;
  result_outObservedModelSet = temp_0 ;
//---
  return result_outObservedModelSet ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_orBooleanMultipleBindingExpressionForGeneration_observedModelSet (void) {
  enterCategoryReader_observedModelSet (kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                        categoryReader_orBooleanMultipleBindingExpressionForGeneration_observedModelSet) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_orBooleanMultipleBindingExpressionForGeneration_observedModelSet (defineCategoryReader_orBooleanMultipleBindingExpressionForGeneration_observedModelSet, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category reader '@andBooleanMultipleBindingExpressionForGeneration observedModelSet'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringset categoryReader_andBooleanMultipleBindingExpressionForGeneration_observedModelSet (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_outObservedModelSet ; // Returned variable
  const cPtr_andBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_andBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_andBooleanMultipleBindingExpressionForGeneration) ;
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("multiple-binding.galgas", 441)) ;
  temp_0.dotAssign_operation (callCategoryReader_observedModelSet ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 441))  COMMA_SOURCE_FILE ("multiple-binding.galgas", 441)) ;
  temp_0.dotAssign_operation (callCategoryReader_observedModelSet ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 441))  COMMA_SOURCE_FILE ("multiple-binding.galgas", 441)) ;
  result_outObservedModelSet = temp_0 ;
//---
  return result_outObservedModelSet ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_andBooleanMultipleBindingExpressionForGeneration_observedModelSet (void) {
  enterCategoryReader_observedModelSet (kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                        categoryReader_andBooleanMultipleBindingExpressionForGeneration_observedModelSet) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_andBooleanMultipleBindingExpressionForGeneration_observedModelSet (defineCategoryReader_andBooleanMultipleBindingExpressionForGeneration_observedModelSet, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category reader '@comparisonMultipleBindingExpressionForGeneration observedModelSet'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringset categoryReader_comparisonMultipleBindingExpressionForGeneration_observedModelSet (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_outObservedModelSet ; // Returned variable
  const cPtr_comparisonMultipleBindingExpressionForGeneration * object = (const cPtr_comparisonMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("multiple-binding.galgas", 449)) ;
  temp_0.dotAssign_operation (callCategoryReader_observedModelSet ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 449))  COMMA_SOURCE_FILE ("multiple-binding.galgas", 449)) ;
  temp_0.dotAssign_operation (callCategoryReader_observedModelSet ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 449))  COMMA_SOURCE_FILE ("multiple-binding.galgas", 449)) ;
  result_outObservedModelSet = temp_0 ;
//---
  return result_outObservedModelSet ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_comparisonMultipleBindingExpressionForGeneration_observedModelSet (void) {
  enterCategoryReader_observedModelSet (kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionForGeneration.mSlotID,
                                        categoryReader_comparisonMultipleBindingExpressionForGeneration_observedModelSet) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_comparisonMultipleBindingExpressionForGeneration_observedModelSet (defineCategoryReader_comparisonMultipleBindingExpressionForGeneration_observedModelSet, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding category reader '@negateBooleanMultipleBindingLiteralIntForGeneration expressionString'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_negateBooleanMultipleBindingLiteralIntForGeneration_expressionString (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                          C_Compiler * /* inCompiler */
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outExpressionString ; // Returned variable
  const cPtr_negateBooleanMultipleBindingLiteralIntForGeneration * object = (const cPtr_negateBooleanMultipleBindingLiteralIntForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_negateBooleanMultipleBindingLiteralIntForGeneration) ;
  result_outExpressionString = object->mAttribute_mValue.reader_string (SOURCE_FILE ("multiple-binding.galgas", 461)) ;
//---
  return result_outExpressionString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_negateBooleanMultipleBindingLiteralIntForGeneration_expressionString (void) {
  enterCategoryReader_expressionString (kTypeDescriptor_GALGAS_negateBooleanMultipleBindingLiteralIntForGeneration.mSlotID,
                                        categoryReader_negateBooleanMultipleBindingLiteralIntForGeneration_expressionString) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_negateBooleanMultipleBindingLiteralIntForGeneration_expressionString (defineCategoryReader_negateBooleanMultipleBindingLiteralIntForGeneration_expressionString, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//  Overriding category reader '@observablePropertyAsBooleanMultipleBindingExpressionForGeneration expressionString'   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_expressionString (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outExpressionString ; // Returned variable
  const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration) ;
  result_outExpressionString = object->mAttribute_mObservedModel.add_operation (GALGAS_string (".prop"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 468)) ;
//---
  return result_outExpressionString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_expressionString (void) {
  enterCategoryReader_expressionString (kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                        categoryReader_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_expressionString) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_expressionString (defineCategoryReader_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_expressionString, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding category reader '@negateBooleanMultipleBindingExpressionForGeneration expressionString'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_negateBooleanMultipleBindingExpressionForGeneration_expressionString (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outExpressionString ; // Returned variable
  const cPtr_negateBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_negateBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_negateBooleanMultipleBindingExpressionForGeneration) ;
  result_outExpressionString = GALGAS_string ("!").add_operation (callCategoryReader_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 475)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 475)) ;
//---
  return result_outExpressionString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_negateBooleanMultipleBindingExpressionForGeneration_expressionString (void) {
  enterCategoryReader_expressionString (kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                        categoryReader_negateBooleanMultipleBindingExpressionForGeneration_expressionString) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_negateBooleanMultipleBindingExpressionForGeneration_expressionString (defineCategoryReader_negateBooleanMultipleBindingExpressionForGeneration_expressionString, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category reader '@orBooleanMultipleBindingExpressionForGeneration expressionString'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_orBooleanMultipleBindingExpressionForGeneration_expressionString (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outExpressionString ; // Returned variable
  const cPtr_orBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_orBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_orBooleanMultipleBindingExpressionForGeneration) ;
  result_outExpressionString = GALGAS_string ("(").add_operation (callCategoryReader_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 482)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 482)).add_operation (GALGAS_string (" || "), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 482)).add_operation (callCategoryReader_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 482)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 482)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 482)) ;
//---
  return result_outExpressionString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_orBooleanMultipleBindingExpressionForGeneration_expressionString (void) {
  enterCategoryReader_expressionString (kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                        categoryReader_orBooleanMultipleBindingExpressionForGeneration_expressionString) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_orBooleanMultipleBindingExpressionForGeneration_expressionString (defineCategoryReader_orBooleanMultipleBindingExpressionForGeneration_expressionString, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category reader '@andBooleanMultipleBindingExpressionForGeneration expressionString'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_andBooleanMultipleBindingExpressionForGeneration_expressionString (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outExpressionString ; // Returned variable
  const cPtr_andBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_andBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_andBooleanMultipleBindingExpressionForGeneration) ;
  result_outExpressionString = GALGAS_string ("(").add_operation (callCategoryReader_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 489)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 489)).add_operation (GALGAS_string (" && "), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 489)).add_operation (callCategoryReader_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 489)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 489)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 489)) ;
//---
  return result_outExpressionString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_andBooleanMultipleBindingExpressionForGeneration_expressionString (void) {
  enterCategoryReader_expressionString (kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                        categoryReader_andBooleanMultipleBindingExpressionForGeneration_expressionString) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_andBooleanMultipleBindingExpressionForGeneration_expressionString (defineCategoryReader_andBooleanMultipleBindingExpressionForGeneration_expressionString, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category reader '@comparisonMultipleBindingExpressionForGeneration expressionString'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_comparisonMultipleBindingExpressionForGeneration_expressionString (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outExpressionString ; // Returned variable
  const cPtr_comparisonMultipleBindingExpressionForGeneration * object = (const cPtr_comparisonMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
  result_outExpressionString = GALGAS_string ("(").add_operation (callCategoryReader_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 496)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 496)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 496)) ;
  switch (object->mAttribute_mOperator.enumValue ()) {
  case GALGAS_multipleBindingComparisonAST::kNotBuilt:
    break ;
  case GALGAS_multipleBindingComparisonAST::kEnum_equal:
    {
      result_outExpressionString.dotAssign_operation (GALGAS_string ("==")  COMMA_SOURCE_FILE ("multiple-binding.galgas", 498)) ;
    }
    break ;
  case GALGAS_multipleBindingComparisonAST::kEnum_notEqual:
    {
      result_outExpressionString.dotAssign_operation (GALGAS_string ("!=")  COMMA_SOURCE_FILE ("multiple-binding.galgas", 499)) ;
    }
    break ;
  case GALGAS_multipleBindingComparisonAST::kEnum_lower:
    {
      result_outExpressionString.dotAssign_operation (GALGAS_string ("<")  COMMA_SOURCE_FILE ("multiple-binding.galgas", 500)) ;
    }
    break ;
  case GALGAS_multipleBindingComparisonAST::kEnum_lowerOrEqual:
    {
      result_outExpressionString.dotAssign_operation (GALGAS_string ("<=")  COMMA_SOURCE_FILE ("multiple-binding.galgas", 501)) ;
    }
    break ;
  case GALGAS_multipleBindingComparisonAST::kEnum_greater:
    {
      result_outExpressionString.dotAssign_operation (GALGAS_string (">")  COMMA_SOURCE_FILE ("multiple-binding.galgas", 502)) ;
    }
    break ;
  case GALGAS_multipleBindingComparisonAST::kEnum_greaterOrEqual:
    {
      result_outExpressionString.dotAssign_operation (GALGAS_string (">=")  COMMA_SOURCE_FILE ("multiple-binding.galgas", 503)) ;
    }
    break ;
  }
  result_outExpressionString.dotAssign_operation (GALGAS_string (" ").add_operation (callCategoryReader_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 505)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 505)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 505))  COMMA_SOURCE_FILE ("multiple-binding.galgas", 505)) ;
//---
  return result_outExpressionString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_comparisonMultipleBindingExpressionForGeneration_expressionString (void) {
  enterCategoryReader_expressionString (kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionForGeneration.mSlotID,
                                        categoryReader_comparisonMultipleBindingExpressionForGeneration_expressionString) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_comparisonMultipleBindingExpressionForGeneration_expressionString (defineCategoryReader_comparisonMultipleBindingExpressionForGeneration_expressionString, NULL) ;


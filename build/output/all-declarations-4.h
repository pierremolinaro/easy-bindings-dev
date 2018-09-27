#pragma once

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-predefined-types.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-3.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @prefsDeclarationAST class                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_prefsDeclarationAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public : GALGAS_prefsDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_prefsDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_prefsDeclarationAST * ptr (void) const { return (const cPtr_prefsDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_prefsDeclarationAST (const cPtr_prefsDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_prefsDeclarationAST extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_prefsDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                    const class GALGAS_prefDeclaration & inOperand1
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_prefsDeclarationAST & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_prefDeclaration getter_mDeclaration (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_prefsDeclarationAST class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefsDeclarationAST ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Pointer class for @prefsDeclarationAST class                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_prefsDeclarationAST : public cPtr_abstractDeclarationAST {
//--- Attributes
  public : GALGAS_prefDeclaration mProperty_mDeclaration ;

//--- Constructor
  public : cPtr_prefsDeclarationAST (const GALGAS_lstring & in_mClassName,
                                     const GALGAS_prefDeclaration & in_mDeclaration
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_prefDeclaration getter_mDeclaration (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Extension method '@prefDeclaration typeInventory'                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_typeInventory (const class GALGAS_prefDeclaration inObject,
                                    class GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                    class C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Extension method '@prefDeclaration buildObservablePropertyMapsFromStoredProperties'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_buildObservablePropertyMapsFromStoredProperties (const class GALGAS_prefDeclaration inObject,
                                                                      const class GALGAS_unifiedTypeMap constin_inUnifiedTypeMap,
                                                                      class GALGAS_semanticContextEX & io_ioSemanticContext,
                                                                      class C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                @booleanMultipleBindingLiteralIntForGeneration class                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_booleanMultipleBindingLiteralIntForGeneration : public GALGAS_abstractBooleanMultipleBindingExpressionForGeneration {
//--- Constructor
  public : GALGAS_booleanMultipleBindingLiteralIntForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_booleanMultipleBindingLiteralIntForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_booleanMultipleBindingLiteralIntForGeneration * ptr (void) const { return (const cPtr_booleanMultipleBindingLiteralIntForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_booleanMultipleBindingLiteralIntForGeneration (const cPtr_booleanMultipleBindingLiteralIntForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_booleanMultipleBindingLiteralIntForGeneration extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_booleanMultipleBindingLiteralIntForGeneration constructor_new (const class GALGAS_uint & inOperand0
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_booleanMultipleBindingLiteralIntForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_booleanMultipleBindingLiteralIntForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_booleanMultipleBindingLiteralIntForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Pointer class for @booleanMultipleBindingLiteralIntForGeneration class                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_booleanMultipleBindingLiteralIntForGeneration : public cPtr_abstractBooleanMultipleBindingExpressionForGeneration {
//--- Attributes
  public : GALGAS_uint mProperty_mValue ;

//--- Constructor
  public : cPtr_booleanMultipleBindingLiteralIntForGeneration (const GALGAS_uint & in_mValue
                                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_uint getter_mValue (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @arrayControllerGeneration class                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_arrayControllerGeneration : public GALGAS_abstractFileGeneration {
//--- Constructor
  public : GALGAS_arrayControllerGeneration (void) ;

//---
  public : inline const class cPtr_arrayControllerGeneration * ptr (void) const { return (const cPtr_arrayControllerGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_arrayControllerGeneration (const cPtr_arrayControllerGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_arrayControllerGeneration extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_arrayControllerGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1,
                                                                          const class GALGAS_arrayControllerFilterListForGeneration & inOperand2,
                                                                          const class GALGAS_string & inOperand3,
                                                                          const class GALGAS_arrayControllerBoundColumnListForGeneration & inOperand4,
                                                                          const class GALGAS_arrayControllerSortedColumnListForGeneration & inOperand5,
                                                                          const class GALGAS_string & inOperand6,
                                                                          const class GALGAS_arrayControllerModelKind & inOperand7,
                                                                          const class GALGAS_string & inOperand8,
                                                                          const class GALGAS_bool & inOperand9,
                                                                          const class GALGAS__32_stringlist & inOperand10
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_arrayControllerGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerBoundColumnListForGeneration getter_mArrayControllerBoundColumnListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerFilterListForGeneration getter_mArrayControllerFilterListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerModelKind getter_mArrayControllerModelKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerSortedColumnListForGeneration getter_mArrayControllerSortedColumnListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS__32_stringlist getter_mAttributeListForGeneration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mControllerName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mElementTypeIsGraphic (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mElementTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mModelString (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mModelTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mOwnerName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_arrayControllerGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Pointer class for @arrayControllerGeneration class                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_arrayControllerGeneration : public cPtr_abstractFileGeneration {
//--- Attributes
  public : GALGAS_string mProperty_mOwnerName ;
  public : GALGAS_lstring mProperty_mControllerName ;
  public : GALGAS_arrayControllerFilterListForGeneration mProperty_mArrayControllerFilterListForGeneration ;
  public : GALGAS_string mProperty_mModelString ;
  public : GALGAS_arrayControllerBoundColumnListForGeneration mProperty_mArrayControllerBoundColumnListForGeneration ;
  public : GALGAS_arrayControllerSortedColumnListForGeneration mProperty_mArrayControllerSortedColumnListForGeneration ;
  public : GALGAS_string mProperty_mModelTypeName ;
  public : GALGAS_arrayControllerModelKind mProperty_mArrayControllerModelKind ;
  public : GALGAS_string mProperty_mElementTypeName ;
  public : GALGAS_bool mProperty_mElementTypeIsGraphic ;
  public : GALGAS__32_stringlist mProperty_mAttributeListForGeneration ;

//--- Constructor
  public : cPtr_arrayControllerGeneration (const GALGAS_string & in_mOwnerName,
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
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mOwnerName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mControllerName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_arrayControllerFilterListForGeneration getter_mArrayControllerFilterListForGeneration (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mModelString (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_arrayControllerBoundColumnListForGeneration getter_mArrayControllerBoundColumnListForGeneration (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_arrayControllerSortedColumnListForGeneration getter_mArrayControllerSortedColumnListForGeneration (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mModelTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_arrayControllerModelKind getter_mArrayControllerModelKind (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mElementTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mElementTypeIsGraphic (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS__32_stringlist getter_mAttributeListForGeneration (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Extension method '@astDeclaration typeInventory'                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef void (*extensionMethodSignature_astDeclaration_typeInventory) (const class cPtr_astDeclaration * inObject,
                                                                       class GALGAS_unifiedTypeMap & ioArgument0,
                                                                       class C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_typeInventory (const int32_t inClassIndex,
                                         extensionMethodSignature_astDeclaration_typeInventory inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_typeInventory (const class cPtr_astDeclaration * inObject,
                                        GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Bool options                                                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern C_BoolCommandLineOption gOption_easyBindings_5F_options_outputDeclarationDependencyGraph ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               UInt options                                                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              String options                                                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              String List options                                                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Filewrapper 'predefinedOutletClasses'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const cDirectoryWrapper gWrapperDirectory_0_predefinedOutletClasses ;
extern const cDirectoryWrapper gWrapperDirectory_1_predefinedOutletClasses ;
extern const cDirectoryWrapper gWrapperDirectory_2_predefinedOutletClasses ;
extern const cDirectoryWrapper gWrapperDirectory_3_predefinedOutletClasses ;
extern const cDirectoryWrapper gWrapperDirectory_4_predefinedOutletClasses ;
extern const cDirectoryWrapper gWrapperDirectory_5_predefinedOutletClasses ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Filewrapper template 'predefinedOutletClasses sourceFile'                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_predefinedOutletClasses_sourceFile (class C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              Routine 'sortProperties'                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_sortProperties (const class GALGAS_string constinArgument0,
                             const class GALGAS_declarationListAST constinArgument1,
                             class GALGAS_declarationListAST & outArgument2,
                             class C_Compiler * inCompiler
                             COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Filewrapper 'enumGenerationTemplate'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const cDirectoryWrapper gWrapperDirectory_0_enumGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_1_enumGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_2_enumGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_3_enumGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_4_enumGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_5_enumGenerationTemplate ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Filewrapper template 'enumGenerationTemplate enumGenerationInSwift'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_enumGenerationTemplate_enumGenerationInSwift (class C_Compiler * inCompiler,
                                                                                const class GALGAS_string & in_ENUM_5F_TYPE_5F_NAME,
                                                                                const class GALGAS_lstringlist & in_CONSTANT_5F_ORDERED_5F_LIST
                                                                                COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           Routine 'enterAtomicClassesIn'                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_enterAtomicClassesIn (class GALGAS_declarationListAST & ioArgument0,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              Routine 'buildActionMap'                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_buildActionMap (const class GALGAS_lstringlist constinArgument0,
                             class GALGAS_actionMap & outArgument1,
                             class C_Compiler * inCompiler
                             COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Function 'externSwiftFunctionCallerSet'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_stringset function_externSwiftFunctionCallerSet (class C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Filewrapper 'classGenerationTemplate'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const cDirectoryWrapper gWrapperDirectory_0_classGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_1_classGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_2_classGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_3_classGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_4_classGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_5_classGenerationTemplate ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Filewrapper template 'classGenerationTemplate classImplementationInSwift'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_classGenerationTemplate_classImplementationInSwift (class C_Compiler * inCompiler,
                                                                                      const class GALGAS_string & in_CLASS_5F_NAME,
                                                                                      const class GALGAS_propertyGenerationList & in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                      const class GALGAS_atomicPropertyGenerationList & in_ATOMIC_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                      const class GALGAS_externSwiftFunctionList & in_EXTERN_5F_FUNCTION_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                      const class GALGAS_externSwiftDelegateList & in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                      const class GALGAS_string & in_EXPLORER_5F_ACCESS
                                                                                      COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Filewrapper 'entityGenerationTemplate'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const cDirectoryWrapper gWrapperDirectory_0_entityGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_1_entityGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_2_entityGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_3_entityGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_4_entityGenerationTemplate ;
extern const cDirectoryWrapper gWrapperDirectory_5_entityGenerationTemplate ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Filewrapper template 'entityGenerationTemplate entityImplementationInSwift'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_entityGenerationTemplate_entityImplementationInSwift (class C_Compiler * inCompiler,
                                                                                        const class GALGAS_string & in_ENTITY_5F_NAME,
                                                                                        const class GALGAS_propertyGenerationList & in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                        const class GALGAS_atomicPropertyGenerationList & in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                        const class GALGAS_transientPropertyGenerationList & in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                        const class GALGAS_toOnePropertyGenerationList & in_TO_5F_ONE_5F_RELATIONSHIP_5F_LIST,
                                                                                        const class GALGAS_toManyEntityRelationshipListForGeneration & in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST,
                                                                                        const class GALGAS_stringset & in_SIGNATURE_5F_SET,
                                                                                        const class GALGAS_bool & in_IS_5F_GRAPHIC_5F_ENTITY,
                                                                                        const class GALGAS_stringset & in_TRANSIENTS_5F_DECLARED_5F_IN_5F_SUPER_5F_ENTITY
                                                                                        COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Filewrapper template 'entityGenerationTemplate managedObjectContext'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_entityGenerationTemplate_managedObjectContext (class C_Compiler * inCompiler,
                                                                                 const class GALGAS_entityListForGeneratingEBManagedObjectContext & in_ENTITY_5F_LIST
                                                                                 COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Routine 'generateEBManagedObjectContext'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_generateEBManagedObjectContext (const class GALGAS_entityListForGeneratingEBManagedObjectContext constinArgument0,
                                             const class GALGAS_string constinArgument1,
                                             class GALGAS_stringset & ioArgument2,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;


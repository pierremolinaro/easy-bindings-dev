#ifndef all_2D_declarations_2D__32__ENTITIES_DEFINED
#define all_2D_declarations_2D__32__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-1.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Filewrapper 'validationStubExtension'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

extern const cDirectoryWrapper gWrapperDirectory_0_validationStubExtension ;
extern const cDirectoryWrapper gWrapperDirectory_1_validationStubExtension ;
extern const cDirectoryWrapper gWrapperDirectory_2_validationStubExtension ;
extern const cDirectoryWrapper gWrapperDirectory_3_validationStubExtension ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Filewrapper template 'validationStubExtension actionGeneration'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_validationStubExtension_actionGeneration (class C_Compiler * inCompiler,
                                                                            const class GALGAS_string & in_OBJECT_5F_TYPE_5F_NAME,
                                                                            const class GALGAS_string & in_MODEL_5F_NAME,
                                                                            const class GALGAS_string & in_MODEL_5F_TYPE_5F_NAME
                                                                            COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @andBooleanMultipleBindingExpressionForGeneration class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_andBooleanMultipleBindingExpressionForGeneration : public GALGAS_abstractBooleanMultipleBindingExpressionForGeneration {
//--- Constructor
  public : GALGAS_andBooleanMultipleBindingExpressionForGeneration (void) ;

//---
  public : inline const class cPtr_andBooleanMultipleBindingExpressionForGeneration * ptr (void) const { return (const cPtr_andBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_andBooleanMultipleBindingExpressionForGeneration (const cPtr_andBooleanMultipleBindingExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_andBooleanMultipleBindingExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_andBooleanMultipleBindingExpressionForGeneration constructor_new (const class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand0,
                                                                                           const class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand1
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_andBooleanMultipleBindingExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration reader_mLeftBinding (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration reader_mRightBinding (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_andBooleanMultipleBindingExpressionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Pointer class for @andBooleanMultipleBindingExpressionForGeneration class                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_andBooleanMultipleBindingExpressionForGeneration : public cPtr_abstractBooleanMultipleBindingExpressionForGeneration {
//--- Attributes
  public : GALGAS_abstractBooleanMultipleBindingExpressionForGeneration mAttribute_mLeftBinding ;
  public : GALGAS_abstractBooleanMultipleBindingExpressionForGeneration mAttribute_mRightBinding ;

//--- Constructor
  public : cPtr_andBooleanMultipleBindingExpressionForGeneration (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                                  const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding
                                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_abstractBooleanMultipleBindingExpressionForGeneration reader_mLeftBinding (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_abstractBooleanMultipleBindingExpressionForGeneration reader_mRightBinding (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             @negateBooleanMultipleBindingExpressionForGeneration class                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_negateBooleanMultipleBindingExpressionForGeneration : public GALGAS_abstractBooleanMultipleBindingExpressionForGeneration {
//--- Constructor
  public : GALGAS_negateBooleanMultipleBindingExpressionForGeneration (void) ;

//---
  public : inline const class cPtr_negateBooleanMultipleBindingExpressionForGeneration * ptr (void) const { return (const cPtr_negateBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_negateBooleanMultipleBindingExpressionForGeneration (const cPtr_negateBooleanMultipleBindingExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_negateBooleanMultipleBindingExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_negateBooleanMultipleBindingExpressionForGeneration constructor_new (const class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand0
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_negateBooleanMultipleBindingExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration reader_mBinding (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_negateBooleanMultipleBindingExpressionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Pointer class for @negateBooleanMultipleBindingExpressionForGeneration class                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_negateBooleanMultipleBindingExpressionForGeneration : public cPtr_abstractBooleanMultipleBindingExpressionForGeneration {
//--- Attributes
  public : GALGAS_abstractBooleanMultipleBindingExpressionForGeneration mAttribute_mBinding ;

//--- Constructor
  public : cPtr_negateBooleanMultipleBindingExpressionForGeneration (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBinding
                                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_abstractBooleanMultipleBindingExpressionForGeneration reader_mBinding (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      @observablePropertyAsBooleanMultipleBindingExpressionForGeneration class                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration : public GALGAS_abstractBooleanMultipleBindingExpressionForGeneration {
//--- Constructor
  public : GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * ptr (void) const { return (const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration constructor_new (const class GALGAS_string & inOperand0
                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string reader_mObservedModel (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Pointer class for @observablePropertyAsBooleanMultipleBindingExpressionForGeneration class              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration : public cPtr_abstractBooleanMultipleBindingExpressionForGeneration {
//--- Attributes
  public : GALGAS_string mAttribute_mObservedModel ;

//--- Constructor
  public : cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (const GALGAS_string & in_mObservedModel
                                                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string reader_mObservedModel (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @orBooleanMultipleBindingExpressionForGeneration class                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_orBooleanMultipleBindingExpressionForGeneration : public GALGAS_abstractBooleanMultipleBindingExpressionForGeneration {
//--- Constructor
  public : GALGAS_orBooleanMultipleBindingExpressionForGeneration (void) ;

//---
  public : inline const class cPtr_orBooleanMultipleBindingExpressionForGeneration * ptr (void) const { return (const cPtr_orBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_orBooleanMultipleBindingExpressionForGeneration (const cPtr_orBooleanMultipleBindingExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_orBooleanMultipleBindingExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_orBooleanMultipleBindingExpressionForGeneration constructor_new (const class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand0,
                                                                                          const class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand1
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_orBooleanMultipleBindingExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration reader_mLeftBinding (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration reader_mRightBinding (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_orBooleanMultipleBindingExpressionForGeneration class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionForGeneration ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Pointer class for @orBooleanMultipleBindingExpressionForGeneration class                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_orBooleanMultipleBindingExpressionForGeneration : public cPtr_abstractBooleanMultipleBindingExpressionForGeneration {
//--- Attributes
  public : GALGAS_abstractBooleanMultipleBindingExpressionForGeneration mAttribute_mLeftBinding ;
  public : GALGAS_abstractBooleanMultipleBindingExpressionForGeneration mAttribute_mRightBinding ;

//--- Constructor
  public : cPtr_orBooleanMultipleBindingExpressionForGeneration (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                                 const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding
                                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_abstractBooleanMultipleBindingExpressionForGeneration reader_mLeftBinding (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_abstractBooleanMultipleBindingExpressionForGeneration reader_mRightBinding (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Category method '@transientList typeInventory'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_typeInventory (const class GALGAS_transientList inObject,
                                   class GALGAS_string in_inDependencyGraphPrefix,
                                   class GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                   class GALGAS_transientDependencyGraph & io_ioTransientDependencyGraph,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Category method '@observablePropertyAST enterInTransientDependencyGraph'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_enterInTransientDependencyGraph (const class GALGAS_observablePropertyAST inObject,
                                                     class GALGAS_string in_inDependencyGraphPrefix,
                                                     class GALGAS_lstring in_inSlavePropertySignature,
                                                     class GALGAS_transientDependencyGraph & io_ioTransientDependencyGraph,
                                                     class C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category method '@transientList buildObservablePropertyMap'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_buildObservablePropertyMap (const class GALGAS_transientList inObject,
                                                const class GALGAS_unifiedTypeMap constin_inUnifiedTypeMap,
                                                class GALGAS_observablePropertyMap & io_ioObservableProperties,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category method '@transientList transientSemanticAnalysis'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_transientSemanticAnalysis (const class GALGAS_transientList inObject,
                                               const class GALGAS_observablePropertyMap constin_inRootObservableProperties,
                                               const class GALGAS_semanticContext constin_inSemanticContext,
                                               const class GALGAS_observablePropertyMap constin_inObservableProperties,
                                               class GALGAS_transientDefinitionListForGeneration & out_outTransientDefinitionListForGeneration,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category method '@simpleStoredPropertyList typeInventory'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_typeInventory (const class GALGAS_simpleStoredPropertyList inObject,
                                   class GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Category method '@simpleStoredPropertyList buildObservablePropertyMap'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_buildObservablePropertyMap (const class GALGAS_simpleStoredPropertyList inObject,
                                                const class GALGAS_unifiedTypeMap constin_inUnifiedTypeMap,
                                                class GALGAS_observablePropertyMap & io_ioObservableProperties,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category method '@simpleStoredPropertyList semanticAnalysis'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_semanticAnalysis (const class GALGAS_simpleStoredPropertyList inObject,
                                      const class GALGAS_string constin_inSwiftClassName,
                                      const class GALGAS_unifiedTypeMap constin_inUnifiedTypeMap,
                                      class GALGAS_validationStubRoutineListForGeneration & io_ioValidationStubRoutineListForGeneration,
                                      class GALGAS_simpleStoredPropertyListForGeneration & out_outSimpleStoredPropertyListForGeneration,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Category method '@arrayControllerDeclarationListAST buildArrayControllerMap'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_buildArrayControllerMap (const class GALGAS_arrayControllerDeclarationListAST inObject,
                                             class GALGAS_arrayControllerMap & out_outArrayControllerMap,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Category method '@arrayControllerDeclarationListAST arrayControllerSemanticAnalysis'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_arrayControllerSemanticAnalysis (const class GALGAS_arrayControllerDeclarationListAST inObject,
                                                     const class GALGAS_observablePropertyMap constin_inRootObservablePropertyMap,
                                                     const class GALGAS_string constin_inRootEntityName,
                                                     const class GALGAS_semanticContext constin_inSemanticContext,
                                                     const class GALGAS_decoratedOutletMap constin_inOutletMap,
                                                     const class GALGAS_observablePropertyMap constin_inObservablePropertyMap,
                                                     class GALGAS_arrayControllerForGeneration & out_outDocumentArrayControllerForGeneration,
                                                     class GALGAS_arrayControllerForGeneration & io_ioArrayControllerForGeneration,
                                                     class C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category method '@toOneRelationshipList typeInventory'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_typeInventory (const class GALGAS_toOneRelationshipList inObject,
                                   class GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category method '@toManyRelationshipList typeInventory'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_typeInventory (const class GALGAS_toManyRelationshipList inObject,
                                   class GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                   class C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Category method '@toOneRelationshipList buildObservablePropertyMap'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_buildObservablePropertyMap (const class GALGAS_toOneRelationshipList inObject,
                                                const class GALGAS_unifiedTypeMap constin_inUnifiedTypeMap,
                                                class GALGAS_observablePropertyMap & io_ioObservableProperties,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Category method '@toManyRelationshipList buildObservablePropertyMap'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_buildObservablePropertyMap (const class GALGAS_toManyRelationshipList inObject,
                                                const class GALGAS_unifiedTypeMap constin_inUnifiedTypeMap,
                                                class GALGAS_observablePropertyMap & io_ioObservableProperties,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category method '@toOneRelationshipList semanticAnalysis'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_semanticAnalysis (const class GALGAS_toOneRelationshipList inObject,
                                      const class GALGAS_semanticContext constin_inSemanticContext,
                                      class GALGAS_toOneEntityRelationshipListForGeneration & out_outToOneEntityRelationshipListForGeneration,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category method '@toManyRelationshipList semanticAnalysis'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_semanticAnalysis (const class GALGAS_toManyRelationshipList inObject,
                                      const class GALGAS_semanticContext constin_inSemanticContext,
                                      class GALGAS_toManyEntityRelationshipListForGeneration & out_outToManyEntityRelationshipListForGeneration,
                                      class C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

#endif

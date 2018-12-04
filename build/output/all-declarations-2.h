#pragma once

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-predefined-types.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-1.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    @validationStubRoutineListForGeneration list                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_validationStubRoutineListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_validationStubRoutineListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_validationStubRoutineListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mObjectTypeName,
                                                  const class GALGAS_string & in_mModelName,
                                                  const class GALGAS_string & in_mModelTypeName
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_validationStubRoutineListForGeneration extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_validationStubRoutineListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_validationStubRoutineListForGeneration constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                                 const class GALGAS_string & inOperand1,
                                                                                                 const class GALGAS_string & inOperand2
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_validationStubRoutineListForGeneration inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_string & inOperand1,
                                                      const class GALGAS_string & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_validationStubRoutineListForGeneration add_operation (const GALGAS_validationStubRoutineListForGeneration & inOperand,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_validationStubRoutineListForGeneration_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                       class GALGAS_string constinArgument1,
                                                       class GALGAS_string constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                  class GALGAS_string & outArgument1,
                                                  class GALGAS_string & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                       class GALGAS_string & outArgument1,
                                                       class GALGAS_string & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_string & outArgument1,
                                               class GALGAS_string & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mModelNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mModelTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mObjectTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_validationStubRoutineListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_validationStubRoutineListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_validationStubRoutineListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_validationStubRoutineListForGeneration ;
 
} ; // End of GALGAS_validationStubRoutineListForGeneration class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_validationStubRoutineListForGeneration : public cGenericAbstractEnumerator {
  public : cEnumerator_validationStubRoutineListForGeneration (const GALGAS_validationStubRoutineListForGeneration & inEnumeratedObject,
                                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mObjectTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mModelName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mModelTypeName (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_validationStubRoutineListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_validationStubRoutineListForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              @validationStubRoutineListForGeneration_2D_element struct                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_validationStubRoutineListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_string mProperty_mObjectTypeName ;

  public : GALGAS_string mProperty_mModelName ;

  public : GALGAS_string mProperty_mModelTypeName ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_validationStubRoutineListForGeneration_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_validationStubRoutineListForGeneration_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_validationStubRoutineListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_validationStubRoutineListForGeneration_2D_element (const GALGAS_string & in_mObjectTypeName,
                                                                     const GALGAS_string & in_mModelName,
                                                                     const GALGAS_string & in_mModelTypeName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_validationStubRoutineListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_validationStubRoutineListForGeneration_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                                  const class GALGAS_string & inOperand1,
                                                                                                  const class GALGAS_string & inOperand2
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_validationStubRoutineListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mModelName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mModelTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mObjectTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_validationStubRoutineListForGeneration_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_validationStubRoutineListForGeneration_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @actionMap_2D_element struct                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_actionMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_actionMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_actionMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_actionMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_actionMap_2D_element (const GALGAS_lstring & in_lkey) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_actionMap_2D_element extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_actionMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_actionMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_actionMap_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actionMap_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @actionFileGeneration class                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_actionFileGeneration : public GALGAS_abstractFileGeneration {
//--- Constructor
  public : GALGAS_actionFileGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_actionFileGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_actionFileGeneration * ptr (void) const { return (const cPtr_actionFileGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_actionFileGeneration (const cPtr_actionFileGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_actionFileGeneration extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_actionFileGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                     const class GALGAS_string & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_actionFileGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mActionName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mClassName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_actionFileGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actionFileGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Pointer class for @actionFileGeneration class                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_actionFileGeneration : public cPtr_abstractFileGeneration {
//--- Attributes
  public : GALGAS_string mProperty_mClassName ;
  public : GALGAS_string mProperty_mActionName ;

//--- Constructor
  public : cPtr_actionFileGeneration (const GALGAS_string & in_mClassName,
                                      const GALGAS_string & in_mActionName
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mClassName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mActionName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      @observablePropertyAsBooleanMultipleBindingExpressionForGeneration class                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  public : static class GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration constructor_new (const class GALGAS_string & inOperand0
                                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mObservedModel (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Pointer class for @observablePropertyAsBooleanMultipleBindingExpressionForGeneration class              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration : public cPtr_abstractBooleanMultipleBindingExpressionForGeneration {
//--- Attributes
  public : GALGAS_string mProperty_mObservedModel ;

//--- Constructor
  public : cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (const GALGAS_string & in_mObservedModel
                                                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mObservedModel (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             @negateBooleanMultipleBindingExpressionForGeneration class                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  public : static class GALGAS_negateBooleanMultipleBindingExpressionForGeneration constructor_new (const class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand0
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_negateBooleanMultipleBindingExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration getter_mBinding (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_negateBooleanMultipleBindingExpressionForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Pointer class for @negateBooleanMultipleBindingExpressionForGeneration class                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_negateBooleanMultipleBindingExpressionForGeneration : public cPtr_abstractBooleanMultipleBindingExpressionForGeneration {
//--- Attributes
  public : GALGAS_abstractBooleanMultipleBindingExpressionForGeneration mProperty_mBinding ;

//--- Constructor
  public : cPtr_negateBooleanMultipleBindingExpressionForGeneration (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBinding
                                                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_abstractBooleanMultipleBindingExpressionForGeneration getter_mBinding (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               @orBooleanMultipleBindingExpressionForGeneration class                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  public : static class GALGAS_orBooleanMultipleBindingExpressionForGeneration constructor_new (const class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand0,
                                                                                                const class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand1
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_orBooleanMultipleBindingExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration getter_mLeftBinding (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration getter_mRightBinding (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_orBooleanMultipleBindingExpressionForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Pointer class for @orBooleanMultipleBindingExpressionForGeneration class                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_orBooleanMultipleBindingExpressionForGeneration : public cPtr_abstractBooleanMultipleBindingExpressionForGeneration {
//--- Attributes
  public : GALGAS_abstractBooleanMultipleBindingExpressionForGeneration mProperty_mLeftBinding ;
  public : GALGAS_abstractBooleanMultipleBindingExpressionForGeneration mProperty_mRightBinding ;

//--- Constructor
  public : cPtr_orBooleanMultipleBindingExpressionForGeneration (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                                 const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding
                                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_abstractBooleanMultipleBindingExpressionForGeneration getter_mLeftBinding (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_abstractBooleanMultipleBindingExpressionForGeneration getter_mRightBinding (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               @xorBooleanMultipleBindingExpressionForGeneration class                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_xorBooleanMultipleBindingExpressionForGeneration : public GALGAS_abstractBooleanMultipleBindingExpressionForGeneration {
//--- Constructor
  public : GALGAS_xorBooleanMultipleBindingExpressionForGeneration (void) ;

//---
  public : inline const class cPtr_xorBooleanMultipleBindingExpressionForGeneration * ptr (void) const { return (const cPtr_xorBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_xorBooleanMultipleBindingExpressionForGeneration (const cPtr_xorBooleanMultipleBindingExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_xorBooleanMultipleBindingExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_xorBooleanMultipleBindingExpressionForGeneration constructor_new (const class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand0,
                                                                                                 const class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand1
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_xorBooleanMultipleBindingExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration getter_mLeftBinding (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration getter_mRightBinding (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_xorBooleanMultipleBindingExpressionForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Pointer class for @xorBooleanMultipleBindingExpressionForGeneration class                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_xorBooleanMultipleBindingExpressionForGeneration : public cPtr_abstractBooleanMultipleBindingExpressionForGeneration {
//--- Attributes
  public : GALGAS_abstractBooleanMultipleBindingExpressionForGeneration mProperty_mLeftBinding ;
  public : GALGAS_abstractBooleanMultipleBindingExpressionForGeneration mProperty_mRightBinding ;

//--- Constructor
  public : cPtr_xorBooleanMultipleBindingExpressionForGeneration (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                                  const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding
                                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_abstractBooleanMultipleBindingExpressionForGeneration getter_mLeftBinding (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_abstractBooleanMultipleBindingExpressionForGeneration getter_mRightBinding (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               @andBooleanMultipleBindingExpressionForGeneration class                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  public : static class GALGAS_andBooleanMultipleBindingExpressionForGeneration constructor_new (const class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand0,
                                                                                                 const class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand1
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_andBooleanMultipleBindingExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration getter_mLeftBinding (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration getter_mRightBinding (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_andBooleanMultipleBindingExpressionForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Pointer class for @andBooleanMultipleBindingExpressionForGeneration class                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_andBooleanMultipleBindingExpressionForGeneration : public cPtr_abstractBooleanMultipleBindingExpressionForGeneration {
//--- Attributes
  public : GALGAS_abstractBooleanMultipleBindingExpressionForGeneration mProperty_mLeftBinding ;
  public : GALGAS_abstractBooleanMultipleBindingExpressionForGeneration mProperty_mRightBinding ;

//--- Constructor
  public : cPtr_andBooleanMultipleBindingExpressionForGeneration (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                                  const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding
                                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_abstractBooleanMultipleBindingExpressionForGeneration getter_mLeftBinding (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_abstractBooleanMultipleBindingExpressionForGeneration getter_mRightBinding (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               @comparisonMultipleBindingExpressionForGeneration class                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_comparisonMultipleBindingExpressionForGeneration : public GALGAS_abstractBooleanMultipleBindingExpressionForGeneration {
//--- Constructor
  public : GALGAS_comparisonMultipleBindingExpressionForGeneration (void) ;

//---
  public : inline const class cPtr_comparisonMultipleBindingExpressionForGeneration * ptr (void) const { return (const cPtr_comparisonMultipleBindingExpressionForGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_comparisonMultipleBindingExpressionForGeneration (const cPtr_comparisonMultipleBindingExpressionForGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_comparisonMultipleBindingExpressionForGeneration extractObject (const GALGAS_object & inObject,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_comparisonMultipleBindingExpressionForGeneration constructor_new (const class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand0,
                                                                                                 const class GALGAS_multipleBindingComparisonAST & inOperand1,
                                                                                                 const class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand2
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_comparisonMultipleBindingExpressionForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration getter_mLeftBinding (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_multipleBindingComparisonAST getter_mOperator (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration getter_mRightBinding (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_comparisonMultipleBindingExpressionForGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Pointer class for @comparisonMultipleBindingExpressionForGeneration class                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_comparisonMultipleBindingExpressionForGeneration : public cPtr_abstractBooleanMultipleBindingExpressionForGeneration {
//--- Attributes
  public : GALGAS_abstractBooleanMultipleBindingExpressionForGeneration mProperty_mLeftBinding ;
  public : GALGAS_multipleBindingComparisonAST mProperty_mOperator ;
  public : GALGAS_abstractBooleanMultipleBindingExpressionForGeneration mProperty_mRightBinding ;

//--- Constructor
  public : cPtr_comparisonMultipleBindingExpressionForGeneration (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                                  const GALGAS_multipleBindingComparisonAST & in_mOperator,
                                                                  const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding
                                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_abstractBooleanMultipleBindingExpressionForGeneration getter_mLeftBinding (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_multipleBindingComparisonAST getter_mOperator (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_abstractBooleanMultipleBindingExpressionForGeneration getter_mRightBinding (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//    Abstract extension method '@abstractBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef void (*extensionMethodSignature_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding) (const class cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                                                                                          const class GALGAS_propertyMap constinArgument0,
                                                                                                                          const class GALGAS_semanticContext constinArgument1,
                                                                                                                          const class GALGAS_propertyMap constinArgument2,
                                                                                                                          class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument3,
                                                                                                                          class GALGAS_typeKind & outArgument4,
                                                                                                                          class GALGAS_location & outArgument5,
                                                                                                                          class C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_analyzeExpressionForMultipleBinding (const int32_t inClassIndex,
                                                               extensionMethodSignature_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_analyzeExpressionForMultipleBinding (const class cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                              const GALGAS_propertyMap constin_inRootObservablePropertyMap,
                                                              const GALGAS_semanticContext constin_inSemanticContext,
                                                              const GALGAS_propertyMap constin_inCurrentObservablePropertyMap,
                                                              GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & out_outEnableExpression,
                                                              GALGAS_typeKind & out_outType,
                                                              GALGAS_location & out_outErrorLocation,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//         Abstract extension getter '@abstractBooleanMultipleBindingExpressionForGeneration observedModelSet'         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef class GALGAS_stringset (*enterExtensionGetter_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet) (const class cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                                               class C_Compiler * inCompiler
                                                                                                                               COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_observedModelSet (const int32_t inClassIndex,
                                            enterExtensionGetter_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_stringset callExtensionGetter_observedModelSet (const class cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//         Abstract extension getter '@abstractBooleanMultipleBindingExpressionForGeneration expressionString'         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef class GALGAS_string (*enterExtensionGetter_abstractBooleanMultipleBindingExpressionForGeneration_expressionString) (const class cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                                            class C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_expressionString (const int32_t inClassIndex,
                                            enterExtensionGetter_abstractBooleanMultipleBindingExpressionForGeneration_expressionString inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_string callExtensionGetter_expressionString (const class cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @arrayControllerPropertyGeneration class                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_arrayControllerPropertyGeneration : public GALGAS_propertyGeneration {
//--- Constructor
  public : GALGAS_arrayControllerPropertyGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_arrayControllerPropertyGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_arrayControllerPropertyGeneration * ptr (void) const { return (const cPtr_arrayControllerPropertyGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_arrayControllerPropertyGeneration (const cPtr_arrayControllerPropertyGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_arrayControllerPropertyGeneration extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_arrayControllerPropertyGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                                  const class GALGAS_string & inOperand1,
                                                                                  const class GALGAS_string & inOperand2
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_arrayControllerPropertyGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mModelString (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mOwnerName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_arrayControllerPropertyGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerPropertyGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Pointer class for @arrayControllerPropertyGeneration class                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_arrayControllerPropertyGeneration : public cPtr_propertyGeneration {
//--- Attributes
  public : GALGAS_string mProperty_mModelString ;
  public : GALGAS_string mProperty_mOwnerName ;

//--- Constructor
  public : cPtr_arrayControllerPropertyGeneration (const GALGAS_string & in_mPropertyName,
                                                   const GALGAS_string & in_mModelString,
                                                   const GALGAS_string & in_mOwnerName
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mModelString (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mOwnerName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @arrayControllerModelKind enum                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_arrayControllerModelKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_arrayControllerModelKind (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_entityArray,
    kEnum_classArray,
    kEnum_transientArray
  } enumeration ;
  
//--------------------------------- Private data member
  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_arrayControllerModelKind extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_arrayControllerModelKind constructor_classArray (LOCATION_ARGS) ;

  public : static class GALGAS_arrayControllerModelKind constructor_entityArray (LOCATION_ARGS) ;

  public : static class GALGAS_arrayControllerModelKind constructor_transientArray (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_arrayControllerModelKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isClassArray (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isEntityArray (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isTransientArray (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_arrayControllerModelKind class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerModelKind ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              @tableViewControllerBoundColumnListAST_2D_element struct                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_tableViewControllerBoundColumnListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mColumnName ;

  public : GALGAS_lstring mProperty_mColumnOutletTypeName ;

  public : GALGAS_tableViewColumnBindingAST mProperty_mColumnBindingAST ;

  public : GALGAS_lstring mProperty_mSortPropertyName ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_tableViewControllerBoundColumnListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_tableViewControllerBoundColumnListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_tableViewControllerBoundColumnListAST_2D_element (const GALGAS_lstring & in_mColumnName,
                                                                    const GALGAS_lstring & in_mColumnOutletTypeName,
                                                                    const GALGAS_tableViewColumnBindingAST & in_mColumnBindingAST,
                                                                    const GALGAS_lstring & in_mSortPropertyName) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_tableViewControllerBoundColumnListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_tableViewControllerBoundColumnListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                                 const class GALGAS_lstring & inOperand1,
                                                                                                 const class GALGAS_tableViewColumnBindingAST & inOperand2,
                                                                                                 const class GALGAS_lstring & inOperand3
                                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_tableViewControllerBoundColumnListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_tableViewColumnBindingAST getter_mColumnBindingAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mColumnName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mColumnOutletTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSortPropertyName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_tableViewControllerBoundColumnListAST_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tableViewControllerBoundColumnListAST_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                @tableViewControllerAttributListAST_2D_element struct                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_tableViewControllerAttributListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mAttributeName ;

  public : GALGAS_abstractDefaultValue mProperty_mAttributeValue ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_tableViewControllerAttributListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_tableViewControllerAttributListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_tableViewControllerAttributListAST_2D_element (const GALGAS_lstring & in_mAttributeName,
                                                                 const GALGAS_abstractDefaultValue & in_mAttributeValue) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_tableViewControllerAttributListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_tableViewControllerAttributListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                              const class GALGAS_abstractDefaultValue & inOperand1
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_tableViewControllerAttributListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mAttributeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractDefaultValue getter_mAttributeValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_tableViewControllerAttributListAST_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tableViewControllerAttributListAST_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    @tableViewControllerPropertyGeneration class                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_tableViewControllerPropertyGeneration : public GALGAS_propertyGeneration {
//--- Constructor
  public : GALGAS_tableViewControllerPropertyGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_tableViewControllerPropertyGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_tableViewControllerPropertyGeneration * ptr (void) const { return (const cPtr_tableViewControllerPropertyGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_tableViewControllerPropertyGeneration (const cPtr_tableViewControllerPropertyGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_tableViewControllerPropertyGeneration extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_tableViewControllerPropertyGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                                      const class GALGAS_string & inOperand1,
                                                                                      const class GALGAS_string & inOperand2
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_tableViewControllerPropertyGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mModelString (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mOwnerName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_tableViewControllerPropertyGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tableViewControllerPropertyGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Pointer class for @tableViewControllerPropertyGeneration class                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_tableViewControllerPropertyGeneration : public cPtr_propertyGeneration {
//--- Attributes
  public : GALGAS_string mProperty_mModelString ;
  public : GALGAS_string mProperty_mOwnerName ;

//--- Constructor
  public : cPtr_tableViewControllerPropertyGeneration (const GALGAS_string & in_mPropertyName,
                                                       const GALGAS_string & in_mModelString,
                                                       const GALGAS_string & in_mOwnerName
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mModelString (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mOwnerName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @tableViewControllerModelKind enum                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_tableViewControllerModelKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_tableViewControllerModelKind (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_entityArray,
    kEnum_classArray,
    kEnum_transientArray
  } enumeration ;
  
//--------------------------------- Private data member
  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_tableViewControllerModelKind extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_tableViewControllerModelKind constructor_classArray (LOCATION_ARGS) ;

  public : static class GALGAS_tableViewControllerModelKind constructor_entityArray (LOCATION_ARGS) ;

  public : static class GALGAS_tableViewControllerModelKind constructor_transientArray (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_tableViewControllerModelKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isClassArray (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isEntityArray (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isTransientArray (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_tableViewControllerModelKind class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tableViewControllerModelKind ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  @tableViewControllerFilterListForGeneration list                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_tableViewControllerFilterListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_tableViewControllerFilterListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_tableViewControllerFilterListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mFilterPropertyName,
                                                  const class GALGAS_propertyKind & in_mFilterPropertyKind
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_tableViewControllerFilterListForGeneration extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_tableViewControllerFilterListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_tableViewControllerFilterListForGeneration constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                                     const class GALGAS_propertyKind & inOperand1
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_tableViewControllerFilterListForGeneration inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_propertyKind & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_tableViewControllerFilterListForGeneration add_operation (const GALGAS_tableViewControllerFilterListForGeneration & inOperand,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_tableViewControllerFilterListForGeneration_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                       class GALGAS_propertyKind constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                  class GALGAS_propertyKind & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                 class GALGAS_propertyKind & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                       class GALGAS_propertyKind & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_propertyKind & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_propertyKind & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_propertyKind getter_mFilterPropertyKindAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mFilterPropertyNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_tableViewControllerFilterListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_tableViewControllerFilterListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_tableViewControllerFilterListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_tableViewControllerFilterListForGeneration ;
 
} ; // End of GALGAS_tableViewControllerFilterListForGeneration class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_tableViewControllerFilterListForGeneration : public cGenericAbstractEnumerator {
  public : cEnumerator_tableViewControllerFilterListForGeneration (const GALGAS_tableViewControllerFilterListForGeneration & inEnumeratedObject,
                                                                   const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mFilterPropertyName (LOCATION_ARGS) const ;
  public : class GALGAS_propertyKind current_mFilterPropertyKind (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_tableViewControllerFilterListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tableViewControllerFilterListForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            @tableViewControllerFilterListForGeneration_2D_element struct                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_tableViewControllerFilterListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_string mProperty_mFilterPropertyName ;

  public : GALGAS_propertyKind mProperty_mFilterPropertyKind ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_tableViewControllerFilterListForGeneration_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_tableViewControllerFilterListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_tableViewControllerFilterListForGeneration_2D_element (const GALGAS_string & in_mFilterPropertyName,
                                                                         const GALGAS_propertyKind & in_mFilterPropertyKind) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_tableViewControllerFilterListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_tableViewControllerFilterListForGeneration_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                                      const class GALGAS_propertyKind & inOperand1
                                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_tableViewControllerFilterListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_propertyKind getter_mFilterPropertyKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mFilterPropertyName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_tableViewControllerFilterListForGeneration_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tableViewControllerFilterListForGeneration_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                @tableViewControllerBoundColumnListForGeneration list                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_tableViewControllerBoundColumnListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_tableViewControllerBoundColumnListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_tableViewControllerBoundColumnListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mColumnName,
                                                  const class GALGAS_string & in_mColumnOutletTypeName,
                                                  const class GALGAS_string & in_mRunAction,
                                                  const class GALGAS_regularBindingsGenerationList & in_mRegularBindingsGenerationList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_tableViewControllerBoundColumnListForGeneration extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_tableViewControllerBoundColumnListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_tableViewControllerBoundColumnListForGeneration constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                                          const class GALGAS_string & inOperand1,
                                                                                                          const class GALGAS_string & inOperand2,
                                                                                                          const class GALGAS_regularBindingsGenerationList & inOperand3
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_tableViewControllerBoundColumnListForGeneration inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_string & inOperand1,
                                                      const class GALGAS_string & inOperand2,
                                                      const class GALGAS_regularBindingsGenerationList & inOperand3
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_tableViewControllerBoundColumnListForGeneration add_operation (const GALGAS_tableViewControllerBoundColumnListForGeneration & inOperand,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                       class GALGAS_string constinArgument1,
                                                       class GALGAS_string constinArgument2,
                                                       class GALGAS_regularBindingsGenerationList constinArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                  class GALGAS_string & outArgument1,
                                                  class GALGAS_string & outArgument2,
                                                  class GALGAS_regularBindingsGenerationList & outArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 class GALGAS_regularBindingsGenerationList & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                       class GALGAS_string & outArgument1,
                                                       class GALGAS_string & outArgument2,
                                                       class GALGAS_regularBindingsGenerationList & outArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_string & outArgument1,
                                               class GALGAS_string & outArgument2,
                                               class GALGAS_regularBindingsGenerationList & outArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              class GALGAS_regularBindingsGenerationList & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mColumnNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mColumnOutletTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_regularBindingsGenerationList getter_mRegularBindingsGenerationListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                     C_Compiler * inCompiler
                                                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mRunActionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_tableViewControllerBoundColumnListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_tableViewControllerBoundColumnListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_tableViewControllerBoundColumnListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_tableViewControllerBoundColumnListForGeneration ;
 
} ; // End of GALGAS_tableViewControllerBoundColumnListForGeneration class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_tableViewControllerBoundColumnListForGeneration : public cGenericAbstractEnumerator {
  public : cEnumerator_tableViewControllerBoundColumnListForGeneration (const GALGAS_tableViewControllerBoundColumnListForGeneration & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mColumnName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mColumnOutletTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mRunAction (LOCATION_ARGS) const ;
  public : class GALGAS_regularBindingsGenerationList current_mRegularBindingsGenerationList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tableViewControllerBoundColumnListForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         @tableViewControllerBoundColumnListForGeneration_2D_element struct                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_string mProperty_mColumnName ;

  public : GALGAS_string mProperty_mColumnOutletTypeName ;

  public : GALGAS_string mProperty_mRunAction ;

  public : GALGAS_regularBindingsGenerationList mProperty_mRegularBindingsGenerationList ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element (const GALGAS_string & in_mColumnName,
                                                                              const GALGAS_string & in_mColumnOutletTypeName,
                                                                              const GALGAS_string & in_mRunAction,
                                                                              const GALGAS_regularBindingsGenerationList & in_mRegularBindingsGenerationList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                                           const class GALGAS_string & inOperand1,
                                                                                                           const class GALGAS_string & inOperand2,
                                                                                                           const class GALGAS_regularBindingsGenerationList & inOperand3
                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mColumnName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mColumnOutletTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_regularBindingsGenerationList getter_mRegularBindingsGenerationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mRunAction (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               @tableViewControllerSortedColumnListForGeneration list                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_tableViewControllerSortedColumnListForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_tableViewControllerSortedColumnListForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_tableViewControllerSortedColumnListForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mColumnName,
                                                  const class GALGAS_propertyKind & in_mSortPropertyKind,
                                                  const class GALGAS_string & in_mObservablePropertyForSorting
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_tableViewControllerSortedColumnListForGeneration extractObject (const GALGAS_object & inObject,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_tableViewControllerSortedColumnListForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_tableViewControllerSortedColumnListForGeneration constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                                           const class GALGAS_propertyKind & inOperand1,
                                                                                                           const class GALGAS_string & inOperand2
                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_tableViewControllerSortedColumnListForGeneration inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_propertyKind & inOperand1,
                                                      const class GALGAS_string & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_tableViewControllerSortedColumnListForGeneration add_operation (const GALGAS_tableViewControllerSortedColumnListForGeneration & inOperand,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                       class GALGAS_propertyKind constinArgument1,
                                                       class GALGAS_string constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                  class GALGAS_propertyKind & outArgument1,
                                                  class GALGAS_string & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                 class GALGAS_propertyKind & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                       class GALGAS_propertyKind & outArgument1,
                                                       class GALGAS_string & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_propertyKind & outArgument1,
                                               class GALGAS_string & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_propertyKind & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mColumnNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mObservablePropertyForSortingAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyKind getter_mSortPropertyKindAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_tableViewControllerSortedColumnListForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                   C_Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_tableViewControllerSortedColumnListForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_tableViewControllerSortedColumnListForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                                   C_Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_tableViewControllerSortedColumnListForGeneration ;
 
} ; // End of GALGAS_tableViewControllerSortedColumnListForGeneration class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_tableViewControllerSortedColumnListForGeneration : public cGenericAbstractEnumerator {
  public : cEnumerator_tableViewControllerSortedColumnListForGeneration (const GALGAS_tableViewControllerSortedColumnListForGeneration & inEnumeratedObject,
                                                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mColumnName (LOCATION_ARGS) const ;
  public : class GALGAS_propertyKind current_mSortPropertyKind (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mObservablePropertyForSorting (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tableViewControllerSortedColumnListForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         @tableViewControllerSortedColumnListForGeneration_2D_element struct                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_string mProperty_mColumnName ;

  public : GALGAS_propertyKind mProperty_mSortPropertyKind ;

  public : GALGAS_string mProperty_mObservablePropertyForSorting ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element (const GALGAS_string & in_mColumnName,
                                                                               const GALGAS_propertyKind & in_mSortPropertyKind,
                                                                               const GALGAS_string & in_mObservablePropertyForSorting) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                                            const class GALGAS_propertyKind & inOperand1,
                                                                                                            const class GALGAS_string & inOperand2
                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mColumnName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mObservablePropertyForSorting (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyKind getter_mSortPropertyKind (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Extension getter '@tableViewControllerFilterListForGeneration filterCode' (as function)               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_string extensionGetter_filterCode (const class GALGAS_tableViewControllerFilterListForGeneration & inObject,
                                                const class GALGAS_string & constinArgument0,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    @selectionControllerPropertyGeneration class                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_selectionControllerPropertyGeneration : public GALGAS_propertyGeneration {
//--- Constructor
  public : GALGAS_selectionControllerPropertyGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_selectionControllerPropertyGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_selectionControllerPropertyGeneration * ptr (void) const { return (const cPtr_selectionControllerPropertyGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_selectionControllerPropertyGeneration (const cPtr_selectionControllerPropertyGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_selectionControllerPropertyGeneration extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_selectionControllerPropertyGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                                      const class GALGAS_string & inOperand1,
                                                                                      const class GALGAS_string & inOperand2,
                                                                                      const class GALGAS_string & inOperand3
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_selectionControllerPropertyGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mModelControllerName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mModelControllerPropertyName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mOwnerName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selectionControllerPropertyGeneration class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectionControllerPropertyGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Pointer class for @selectionControllerPropertyGeneration class                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cPtr_selectionControllerPropertyGeneration : public cPtr_propertyGeneration {
//--- Attributes
  public : GALGAS_string mProperty_mOwnerName ;
  public : GALGAS_string mProperty_mModelControllerName ;
  public : GALGAS_string mProperty_mModelControllerPropertyName ;

//--- Constructor
  public : cPtr_selectionControllerPropertyGeneration (const GALGAS_string & in_mPropertyName,
                                                       const GALGAS_string & in_mOwnerName,
                                                       const GALGAS_string & in_mModelControllerName,
                                                       const GALGAS_string & in_mModelControllerPropertyName
                                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mOwnerName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mModelControllerName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mModelControllerPropertyName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @selectionControllerForGeneration list                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_selectionControllerForGeneration : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_selectionControllerForGeneration (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_selectionControllerForGeneration (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mOwnerName,
                                                  const class GALGAS_string & in_mSelectionControllerName,
                                                  const class GALGAS_string & in_mBoundControllerName,
                                                  const class GALGAS_string & in_mBoundControllerPropertyName,
                                                  const class GALGAS_string & in_mBaseTypeName,
                                                  const class GALGAS_string & in_mSelectionTypeName,
                                                  const class GALGAS_propertyMap & in_mSelectionObservablePropertyMap
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_selectionControllerForGeneration extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_selectionControllerForGeneration constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_selectionControllerForGeneration constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                           const class GALGAS_string & inOperand1,
                                                                                           const class GALGAS_string & inOperand2,
                                                                                           const class GALGAS_string & inOperand3,
                                                                                           const class GALGAS_string & inOperand4,
                                                                                           const class GALGAS_string & inOperand5,
                                                                                           const class GALGAS_propertyMap & inOperand6
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_selectionControllerForGeneration inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_string & inOperand1,
                                                      const class GALGAS_string & inOperand2,
                                                      const class GALGAS_string & inOperand3,
                                                      const class GALGAS_string & inOperand4,
                                                      const class GALGAS_string & inOperand5,
                                                      const class GALGAS_propertyMap & inOperand6
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_selectionControllerForGeneration add_operation (const GALGAS_selectionControllerForGeneration & inOperand,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_selectionControllerForGeneration_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                       class GALGAS_string constinArgument1,
                                                       class GALGAS_string constinArgument2,
                                                       class GALGAS_string constinArgument3,
                                                       class GALGAS_string constinArgument4,
                                                       class GALGAS_string constinArgument5,
                                                       class GALGAS_propertyMap constinArgument6,
                                                       class GALGAS_uint constinArgument7,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                  class GALGAS_string & outArgument1,
                                                  class GALGAS_string & outArgument2,
                                                  class GALGAS_string & outArgument3,
                                                  class GALGAS_string & outArgument4,
                                                  class GALGAS_string & outArgument5,
                                                  class GALGAS_propertyMap & outArgument6,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 class GALGAS_string & outArgument3,
                                                 class GALGAS_string & outArgument4,
                                                 class GALGAS_string & outArgument5,
                                                 class GALGAS_propertyMap & outArgument6,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                       class GALGAS_string & outArgument1,
                                                       class GALGAS_string & outArgument2,
                                                       class GALGAS_string & outArgument3,
                                                       class GALGAS_string & outArgument4,
                                                       class GALGAS_string & outArgument5,
                                                       class GALGAS_propertyMap & outArgument6,
                                                       class GALGAS_uint constinArgument7,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_string & outArgument1,
                                               class GALGAS_string & outArgument2,
                                               class GALGAS_string & outArgument3,
                                               class GALGAS_string & outArgument4,
                                               class GALGAS_string & outArgument5,
                                               class GALGAS_propertyMap & outArgument6,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              class GALGAS_string & outArgument3,
                                              class GALGAS_string & outArgument4,
                                              class GALGAS_string & outArgument5,
                                              class GALGAS_propertyMap & outArgument6,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mBaseTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mBoundControllerNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mBoundControllerPropertyNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mOwnerNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mSelectionControllerNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyMap getter_mSelectionObservablePropertyMapAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mSelectionTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_selectionControllerForGeneration getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_selectionControllerForGeneration getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_selectionControllerForGeneration getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_selectionControllerForGeneration ;
 
} ; // End of GALGAS_selectionControllerForGeneration class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_selectionControllerForGeneration : public cGenericAbstractEnumerator {
  public : cEnumerator_selectionControllerForGeneration (const GALGAS_selectionControllerForGeneration & inEnumeratedObject,
                                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mOwnerName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mSelectionControllerName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mBoundControllerName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mBoundControllerPropertyName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mBaseTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mSelectionTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_propertyMap current_mSelectionObservablePropertyMap (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_selectionControllerForGeneration_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectionControllerForGeneration ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 @selectionControllerForGeneration_2D_element struct                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_selectionControllerForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_string mProperty_mOwnerName ;

  public : GALGAS_string mProperty_mSelectionControllerName ;

  public : GALGAS_string mProperty_mBoundControllerName ;

  public : GALGAS_string mProperty_mBoundControllerPropertyName ;

  public : GALGAS_string mProperty_mBaseTypeName ;

  public : GALGAS_string mProperty_mSelectionTypeName ;

  public : GALGAS_propertyMap mProperty_mSelectionObservablePropertyMap ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_selectionControllerForGeneration_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_selectionControllerForGeneration_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_selectionControllerForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_selectionControllerForGeneration_2D_element (const GALGAS_string & in_mOwnerName,
                                                               const GALGAS_string & in_mSelectionControllerName,
                                                               const GALGAS_string & in_mBoundControllerName,
                                                               const GALGAS_string & in_mBoundControllerPropertyName,
                                                               const GALGAS_string & in_mBaseTypeName,
                                                               const GALGAS_string & in_mSelectionTypeName,
                                                               const GALGAS_propertyMap & in_mSelectionObservablePropertyMap) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_selectionControllerForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_selectionControllerForGeneration_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                            const class GALGAS_string & inOperand1,
                                                                                            const class GALGAS_string & inOperand2,
                                                                                            const class GALGAS_string & inOperand3,
                                                                                            const class GALGAS_string & inOperand4,
                                                                                            const class GALGAS_string & inOperand5,
                                                                                            const class GALGAS_propertyMap & inOperand6
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_selectionControllerForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mBaseTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mBoundControllerName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mBoundControllerPropertyName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mOwnerName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mSelectionControllerName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyMap getter_mSelectionObservablePropertyMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mSelectionTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selectionControllerForGeneration_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectionControllerForGeneration_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @defaultValueList_2D_element struct                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_defaultValueList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_abstractDefaultValue mProperty_mDefaultValue ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_defaultValueList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_defaultValueList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_defaultValueList_2D_element (const GALGAS_abstractDefaultValue & in_mDefaultValue) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_defaultValueList_2D_element extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_defaultValueList_2D_element constructor_new (const class GALGAS_abstractDefaultValue & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_defaultValueList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractDefaultValue getter_mDefaultValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_defaultValueList_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_defaultValueList_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Abstract extension method '@abstractDefaultValue analyzeDefaultValueType'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef void (*extensionMethodSignature_abstractDefaultValue_analyzeDefaultValueType) (const class cPtr_abstractDefaultValue * inObject,
                                                                                       const class GALGAS_typeKindList constinArgument0,
                                                                                       class GALGAS_string & outArgument1,
                                                                                       class C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_analyzeDefaultValueType (const int32_t inClassIndex,
                                                   extensionMethodSignature_abstractDefaultValue_analyzeDefaultValueType inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_analyzeDefaultValueType (const class cPtr_abstractDefaultValue * inObject,
                                                  const GALGAS_typeKindList constin_inAttributeActualTypeList,
                                                  GALGAS_string & out_outSwiftDefaultValueAsString,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                 @typeKindList list                                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_typeKindList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_typeKindList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_typeKindList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_typeKind & in_mType
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_typeKindList extractObject (const GALGAS_object & inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_typeKindList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_typeKindList constructor_listWithValue (const class GALGAS_typeKind & inOperand0
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_typeKindList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_typeKind & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_typeKindList add_operation (const GALGAS_typeKindList & inOperand,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_typeKindList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_typeKind constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_typeKind & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_typeKind & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_typeKind & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_typeKind & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_typeKind & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_typeKind getter_mTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typeKindList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typeKindList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typeKindList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_typeKindList ;
 
} ; // End of GALGAS_typeKindList class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_typeKindList : public cGenericAbstractEnumerator {
  public : cEnumerator_typeKindList (const GALGAS_typeKindList & inEnumeratedObject,
                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_typeKind current_mType (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_typeKindList_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKindList ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Extension getter '@typeKind typeName' (as function)                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_string extensionGetter_typeName (const class GALGAS_typeKind & inObject,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Extension getter '@typeKind isComparable' (as function)                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_bool extensionGetter_isComparable (const class GALGAS_typeKind & inObject,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Extension getter '@typeKind isGraphic' (as function)                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_bool extensionGetter_isGraphic (const class GALGAS_typeKind & inObject,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @typeKindList_2D_element struct                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_typeKindList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_typeKind mProperty_mType ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_typeKindList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_typeKindList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_typeKindList_2D_element (const GALGAS_typeKind & in_mType) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_typeKindList_2D_element extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_typeKindList_2D_element constructor_new (const class GALGAS_typeKind & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_typeKindList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_typeKind getter_mType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_typeKindList_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKindList_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Extension getter '@propertyKind typeName' (as function)                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_string extensionGetter_typeName (const class GALGAS_propertyKind & inObject,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Extension getter '@propertyKind isTransient' (as function)                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_bool extensionGetter_isTransient (const class GALGAS_propertyKind & inObject,
                                               class C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Extension getter '@propertyKind isComparable' (as function)                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_bool extensionGetter_isComparable (const class GALGAS_propertyKind & inObject,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Extension getter '@propertyKind isEntityType' (as function)                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_bool extensionGetter_isEntityType (const class GALGAS_propertyKind & inObject,
                                                class C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Extension getter '@propertyKind isEnumType' (as function)                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_bool extensionGetter_isEnumType (const class GALGAS_propertyKind & inObject,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Extension getter '@propertyGeneration prefKeyDefinitionCode'                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef class GALGAS_string (*enterExtensionGetter_propertyGeneration_prefKeyDefinitionCode) (const class cPtr_propertyGeneration * inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_prefKeyDefinitionCode (const int32_t inClassIndex,
                                                 enterExtensionGetter_propertyGeneration_prefKeyDefinitionCode inGetter) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_string callExtensionGetter_prefKeyDefinitionCode (const cPtr_propertyGeneration * inObject,
                                                               class C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Abstract extension getter '@propertyGeneration declarationCode'                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef class GALGAS_string (*enterExtensionGetter_propertyGeneration_declarationCode) (const class cPtr_propertyGeneration * inObject,
                                                                                        const class GALGAS_stringset constinArgument0,
                                                                                        class C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_declarationCode (const int32_t inClassIndex,
                                           enterExtensionGetter_propertyGeneration_declarationCode inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_string callExtensionGetter_declarationCode (const class cPtr_propertyGeneration * inObject,
                                                         const GALGAS_stringset constin_inOverriddenTransients,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Abstract extension getter '@propertyGeneration configurationCode'                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef class GALGAS_string (*enterExtensionGetter_propertyGeneration_configurationCode) (const class cPtr_propertyGeneration * inObject,
                                                                                          class C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_configurationCode (const int32_t inClassIndex,
                                             enterExtensionGetter_propertyGeneration_configurationCode inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_string callExtensionGetter_configurationCode (const class cPtr_propertyGeneration * inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Extension getter '@propertyGeneration terminationCode'                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef class GALGAS_string (*enterExtensionGetter_propertyGeneration_terminationCode) (const class cPtr_propertyGeneration * inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_terminationCode (const int32_t inClassIndex,
                                           enterExtensionGetter_propertyGeneration_terminationCode inGetter) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_string callExtensionGetter_terminationCode (const cPtr_propertyGeneration * inObject,
                                                         class C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Extension getter '@propertyGeneration setupAtomicPropertyFromDictionaryCode'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef class GALGAS_string (*enterExtensionGetter_propertyGeneration_setupAtomicPropertyFromDictionaryCode) (const class cPtr_propertyGeneration * inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_setupAtomicPropertyFromDictionaryCode (const int32_t inClassIndex,
                                                                 enterExtensionGetter_propertyGeneration_setupAtomicPropertyFromDictionaryCode inGetter) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_string callExtensionGetter_setupAtomicPropertyFromDictionaryCode (const cPtr_propertyGeneration * inObject,
                                                                               class C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Extension getter '@propertyGeneration setupRelationshipFromDictionaryCode'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef class GALGAS_string (*enterExtensionGetter_propertyGeneration_setupRelationshipFromDictionaryCode) (const class cPtr_propertyGeneration * inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_setupRelationshipFromDictionaryCode (const int32_t inClassIndex,
                                                               enterExtensionGetter_propertyGeneration_setupRelationshipFromDictionaryCode inGetter) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_string callExtensionGetter_setupRelationshipFromDictionaryCode (const cPtr_propertyGeneration * inObject,
                                                                             class C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Extension getter '@propertyGeneration saveIntoDictionaryCode'                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef class GALGAS_string (*enterExtensionGetter_propertyGeneration_saveIntoDictionaryCode) (const class cPtr_propertyGeneration * inObject,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_saveIntoDictionaryCode (const int32_t inClassIndex,
                                                  enterExtensionGetter_propertyGeneration_saveIntoDictionaryCode inGetter) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_string callExtensionGetter_saveIntoDictionaryCode (const cPtr_propertyGeneration * inObject,
                                                                class C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Extension getter '@propertyGeneration objectAccessibilityCode'                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef class GALGAS_string (*enterExtensionGetter_propertyGeneration_objectAccessibilityCode) (const class cPtr_propertyGeneration * inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_objectAccessibilityCode (const int32_t inClassIndex,
                                                   enterExtensionGetter_propertyGeneration_objectAccessibilityCode inGetter) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_string callExtensionGetter_objectAccessibilityCode (const cPtr_propertyGeneration * inObject,
                                                                 class C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Extension getter '@propertyGeneration populateExplorerWindowCode'                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef class GALGAS_string (*enterExtensionGetter_propertyGeneration_populateExplorerWindowCode) (const class cPtr_propertyGeneration * inObject,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_populateExplorerWindowCode (const int32_t inClassIndex,
                                                      enterExtensionGetter_propertyGeneration_populateExplorerWindowCode inGetter) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_string callExtensionGetter_populateExplorerWindowCode (const cPtr_propertyGeneration * inObject,
                                                                    class C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Extension getter '@propertyGeneration clearObjectExplorerCode'                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef class GALGAS_string (*enterExtensionGetter_propertyGeneration_clearObjectExplorerCode) (const class cPtr_propertyGeneration * inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_clearObjectExplorerCode (const int32_t inClassIndex,
                                                   enterExtensionGetter_propertyGeneration_clearObjectExplorerCode inGetter) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_string callExtensionGetter_clearObjectExplorerCode (const cPtr_propertyGeneration * inObject,
                                                                 class C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Extension getter '@propertyGeneration resetToManyRelationships'                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef class GALGAS_string (*enterExtensionGetter_propertyGeneration_resetToManyRelationships) (const class cPtr_propertyGeneration * inObject,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_resetToManyRelationships (const int32_t inClassIndex,
                                                    enterExtensionGetter_propertyGeneration_resetToManyRelationships inGetter) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_string callExtensionGetter_resetToManyRelationships (const cPtr_propertyGeneration * inObject,
                                                                  class C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @transientExternTypeList list                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_transientExternTypeList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_transientExternTypeList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_transientExternTypeList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mTypeName,
                                                  const class GALGAS_bool & in_mIsClass
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_transientExternTypeList extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_transientExternTypeList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_transientExternTypeList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                  const class GALGAS_bool & inOperand1
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_transientExternTypeList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_bool & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_transientExternTypeList add_operation (const GALGAS_transientExternTypeList & inOperand,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_transientExternTypeList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                       class GALGAS_bool constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                  class GALGAS_bool & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                 class GALGAS_bool & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                       class GALGAS_bool & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_bool & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_bool & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsClassAtIndex (const class GALGAS_uint & constinOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mTypeNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_transientExternTypeList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_transientExternTypeList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_transientExternTypeList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_transientExternTypeList ;
 
} ; // End of GALGAS_transientExternTypeList class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_transientExternTypeList : public cGenericAbstractEnumerator {
  public : cEnumerator_transientExternTypeList (const GALGAS_transientExternTypeList & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mIsClass (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_transientExternTypeList_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientExternTypeList ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @transientExternTypeList_2D_element struct                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_transientExternTypeList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_string mProperty_mTypeName ;

  public : GALGAS_bool mProperty_mIsClass ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_transientExternTypeList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_transientExternTypeList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_transientExternTypeList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_transientExternTypeList_2D_element (const GALGAS_string & in_mTypeName,
                                                      const GALGAS_bool & in_mIsClass) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_transientExternTypeList_2D_element extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_transientExternTypeList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                   const class GALGAS_bool & inOperand1
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_transientExternTypeList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsClass (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mTypeName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_transientExternTypeList_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientExternTypeList_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Abstract extension method '@abstractFileGeneration generateCode'                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typedef void (*extensionMethodSignature_abstractFileGeneration_generateCode) (const class cPtr_abstractFileGeneration * inObject,
                                                                              const class GALGAS_string constinArgument0,
                                                                              class GALGAS_stringset & ioArgument1,
                                                                              class C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_generateCode (const int32_t inClassIndex,
                                        extensionMethodSignature_abstractFileGeneration_generateCode inMethod) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_generateCode (const class cPtr_abstractFileGeneration * inObject,
                                       const GALGAS_string constin_inOutputDirectory,
                                       GALGAS_stringset & io_ioGeneratedFileSet,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @fileGenerationList list                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_fileGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_fileGenerationList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_fileGenerationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_abstractFileGeneration & in_mFileGeneration
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_fileGenerationList extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_fileGenerationList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_fileGenerationList constructor_listWithValue (const class GALGAS_abstractFileGeneration & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_fileGenerationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_abstractFileGeneration & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_fileGenerationList add_operation (const GALGAS_fileGenerationList & inOperand,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_fileGenerationList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_abstractFileGeneration constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_abstractFileGeneration & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_abstractFileGeneration & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_abstractFileGeneration & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_abstractFileGeneration & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_abstractFileGeneration & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractFileGeneration getter_mFileGenerationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_fileGenerationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_fileGenerationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_fileGenerationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_fileGenerationList ;
 
} ; // End of GALGAS_fileGenerationList class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_fileGenerationList : public cGenericAbstractEnumerator {
  public : cEnumerator_fileGenerationList (const GALGAS_fileGenerationList & inEnumeratedObject,
                                           const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_abstractFileGeneration current_mFileGeneration (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_fileGenerationList_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fileGenerationList ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @fileGenerationList_2D_element struct                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_fileGenerationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_abstractFileGeneration mProperty_mFileGeneration ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_fileGenerationList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_fileGenerationList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_fileGenerationList_2D_element (const GALGAS_abstractFileGeneration & in_mFileGeneration) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_fileGenerationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_fileGenerationList_2D_element constructor_new (const class GALGAS_abstractFileGeneration & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_fileGenerationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractFileGeneration getter_mFileGeneration (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_fileGenerationList_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fileGenerationList_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @XCodeGroupList list                                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_XCodeGroupList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_XCodeGroupList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_XCodeGroupList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mGroupReference,
                                                  const class GALGAS_string & in_mGroupName,
                                                  const class GALGAS_string & in_mGroupPath,
                                                  const class GALGAS_stringlist & in_mChildrenRefs
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_XCodeGroupList extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_XCodeGroupList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_XCodeGroupList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                         const class GALGAS_string & inOperand1,
                                                                         const class GALGAS_string & inOperand2,
                                                                         const class GALGAS_stringlist & inOperand3
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_XCodeGroupList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_string & inOperand1,
                                                      const class GALGAS_string & inOperand2,
                                                      const class GALGAS_stringlist & inOperand3
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_XCodeGroupList add_operation (const GALGAS_XCodeGroupList & inOperand,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_XCodeGroupList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                       class GALGAS_string constinArgument1,
                                                       class GALGAS_string constinArgument2,
                                                       class GALGAS_stringlist constinArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                  class GALGAS_string & outArgument1,
                                                  class GALGAS_string & outArgument2,
                                                  class GALGAS_stringlist & outArgument3,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 class GALGAS_stringlist & outArgument3,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                       class GALGAS_string & outArgument1,
                                                       class GALGAS_string & outArgument2,
                                                       class GALGAS_stringlist & outArgument3,
                                                       class GALGAS_uint constinArgument4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_string & outArgument1,
                                               class GALGAS_string & outArgument2,
                                               class GALGAS_stringlist & outArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              class GALGAS_stringlist & outArgument3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mChildrenRefsAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mGroupNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mGroupPathAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mGroupReferenceAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_XCodeGroupList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_XCodeGroupList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_XCodeGroupList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_XCodeGroupList ;
 
} ; // End of GALGAS_XCodeGroupList class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_XCodeGroupList : public cGenericAbstractEnumerator {
  public : cEnumerator_XCodeGroupList (const GALGAS_XCodeGroupList & inEnumeratedObject,
                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mGroupReference (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mGroupName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mGroupPath (LOCATION_ARGS) const ;
  public : class GALGAS_stringlist current_mChildrenRefs (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_XCodeGroupList_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeGroupList ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @XCodeGroupList_2D_element struct                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_XCodeGroupList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_string mProperty_mGroupReference ;

  public : GALGAS_string mProperty_mGroupName ;

  public : GALGAS_string mProperty_mGroupPath ;

  public : GALGAS_stringlist mProperty_mChildrenRefs ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_XCodeGroupList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_XCodeGroupList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_XCodeGroupList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_XCodeGroupList_2D_element (const GALGAS_string & in_mGroupReference,
                                             const GALGAS_string & in_mGroupName,
                                             const GALGAS_string & in_mGroupPath,
                                             const GALGAS_stringlist & in_mChildrenRefs) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_XCodeGroupList_2D_element extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_XCodeGroupList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                          const class GALGAS_string & inOperand1,
                                                                          const class GALGAS_string & inOperand2,
                                                                          const class GALGAS_stringlist & inOperand3
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_XCodeGroupList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mChildrenRefs (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mGroupName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mGroupPath (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mGroupReference (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_XCodeGroupList_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeGroupList_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @XCodeToolTargetList list                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_XCodeToolTargetList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_XCodeToolTargetList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_XCodeToolTargetList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mTargetRef,
                                                  const class GALGAS_string & in_mTargetName,
                                                  const class GALGAS_string & in_mProductFileReference,
                                                  const class GALGAS_string & in_mProductFileName,
                                                  const class GALGAS_stringlist & in_mBuildPhaseRefList,
                                                  const class GALGAS_string & in_mBuildPhaseRef,
                                                  const class GALGAS_string & in_mBuildConfigurationListRef,
                                                  const class GALGAS_stringlist & in_mBuildConfigurationSettingList,
                                                  const class GALGAS_string & in_mBuildConfigurationRef,
                                                  const class GALGAS_stringlist & in_mFrameworksFileRefList,
                                                  const class GALGAS_string & in_mFrameworkBuildPhaseRef
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_XCodeToolTargetList extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_XCodeToolTargetList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_XCodeToolTargetList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                              const class GALGAS_string & inOperand1,
                                                                              const class GALGAS_string & inOperand2,
                                                                              const class GALGAS_string & inOperand3,
                                                                              const class GALGAS_stringlist & inOperand4,
                                                                              const class GALGAS_string & inOperand5,
                                                                              const class GALGAS_string & inOperand6,
                                                                              const class GALGAS_stringlist & inOperand7,
                                                                              const class GALGAS_string & inOperand8,
                                                                              const class GALGAS_stringlist & inOperand9,
                                                                              const class GALGAS_string & inOperand10
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_XCodeToolTargetList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_string & inOperand1,
                                                      const class GALGAS_string & inOperand2,
                                                      const class GALGAS_string & inOperand3,
                                                      const class GALGAS_stringlist & inOperand4,
                                                      const class GALGAS_string & inOperand5,
                                                      const class GALGAS_string & inOperand6,
                                                      const class GALGAS_stringlist & inOperand7,
                                                      const class GALGAS_string & inOperand8,
                                                      const class GALGAS_stringlist & inOperand9,
                                                      const class GALGAS_string & inOperand10
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_XCodeToolTargetList add_operation (const GALGAS_XCodeToolTargetList & inOperand,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_XCodeToolTargetList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                       class GALGAS_string constinArgument1,
                                                       class GALGAS_string constinArgument2,
                                                       class GALGAS_string constinArgument3,
                                                       class GALGAS_stringlist constinArgument4,
                                                       class GALGAS_string constinArgument5,
                                                       class GALGAS_string constinArgument6,
                                                       class GALGAS_stringlist constinArgument7,
                                                       class GALGAS_string constinArgument8,
                                                       class GALGAS_stringlist constinArgument9,
                                                       class GALGAS_string constinArgument10,
                                                       class GALGAS_uint constinArgument11,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                  class GALGAS_string & outArgument1,
                                                  class GALGAS_string & outArgument2,
                                                  class GALGAS_string & outArgument3,
                                                  class GALGAS_stringlist & outArgument4,
                                                  class GALGAS_string & outArgument5,
                                                  class GALGAS_string & outArgument6,
                                                  class GALGAS_stringlist & outArgument7,
                                                  class GALGAS_string & outArgument8,
                                                  class GALGAS_stringlist & outArgument9,
                                                  class GALGAS_string & outArgument10,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 class GALGAS_string & outArgument3,
                                                 class GALGAS_stringlist & outArgument4,
                                                 class GALGAS_string & outArgument5,
                                                 class GALGAS_string & outArgument6,
                                                 class GALGAS_stringlist & outArgument7,
                                                 class GALGAS_string & outArgument8,
                                                 class GALGAS_stringlist & outArgument9,
                                                 class GALGAS_string & outArgument10,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                       class GALGAS_string & outArgument1,
                                                       class GALGAS_string & outArgument2,
                                                       class GALGAS_string & outArgument3,
                                                       class GALGAS_stringlist & outArgument4,
                                                       class GALGAS_string & outArgument5,
                                                       class GALGAS_string & outArgument6,
                                                       class GALGAS_stringlist & outArgument7,
                                                       class GALGAS_string & outArgument8,
                                                       class GALGAS_stringlist & outArgument9,
                                                       class GALGAS_string & outArgument10,
                                                       class GALGAS_uint constinArgument11,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_string & outArgument1,
                                               class GALGAS_string & outArgument2,
                                               class GALGAS_string & outArgument3,
                                               class GALGAS_stringlist & outArgument4,
                                               class GALGAS_string & outArgument5,
                                               class GALGAS_string & outArgument6,
                                               class GALGAS_stringlist & outArgument7,
                                               class GALGAS_string & outArgument8,
                                               class GALGAS_stringlist & outArgument9,
                                               class GALGAS_string & outArgument10,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              class GALGAS_string & outArgument3,
                                              class GALGAS_stringlist & outArgument4,
                                              class GALGAS_string & outArgument5,
                                              class GALGAS_string & outArgument6,
                                              class GALGAS_stringlist & outArgument7,
                                              class GALGAS_string & outArgument8,
                                              class GALGAS_stringlist & outArgument9,
                                              class GALGAS_string & outArgument10,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mBuildConfigurationListRefAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mBuildConfigurationRefAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mBuildConfigurationSettingListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mBuildPhaseRefAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mBuildPhaseRefListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mFrameworkBuildPhaseRefAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mFrameworksFileRefListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mProductFileNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mProductFileReferenceAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mTargetNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mTargetRefAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_XCodeToolTargetList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_XCodeToolTargetList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_XCodeToolTargetList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_XCodeToolTargetList ;
 
} ; // End of GALGAS_XCodeToolTargetList class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_XCodeToolTargetList : public cGenericAbstractEnumerator {
  public : cEnumerator_XCodeToolTargetList (const GALGAS_XCodeToolTargetList & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mTargetRef (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mTargetName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mProductFileReference (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mProductFileName (LOCATION_ARGS) const ;
  public : class GALGAS_stringlist current_mBuildPhaseRefList (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mBuildPhaseRef (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mBuildConfigurationListRef (LOCATION_ARGS) const ;
  public : class GALGAS_stringlist current_mBuildConfigurationSettingList (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mBuildConfigurationRef (LOCATION_ARGS) const ;
  public : class GALGAS_stringlist current_mFrameworksFileRefList (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_XCodeToolTargetList_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeToolTargetList ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @XCodeToolTargetList_2D_element struct                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_XCodeToolTargetList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_string mProperty_mTargetRef ;

  public : GALGAS_string mProperty_mTargetName ;

  public : GALGAS_string mProperty_mProductFileReference ;

  public : GALGAS_string mProperty_mProductFileName ;

  public : GALGAS_stringlist mProperty_mBuildPhaseRefList ;

  public : GALGAS_string mProperty_mBuildPhaseRef ;

  public : GALGAS_string mProperty_mBuildConfigurationListRef ;

  public : GALGAS_stringlist mProperty_mBuildConfigurationSettingList ;

  public : GALGAS_string mProperty_mBuildConfigurationRef ;

  public : GALGAS_stringlist mProperty_mFrameworksFileRefList ;

  public : GALGAS_string mProperty_mFrameworkBuildPhaseRef ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_XCodeToolTargetList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_XCodeToolTargetList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_XCodeToolTargetList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_XCodeToolTargetList_2D_element (const GALGAS_string & in_mTargetRef,
                                                  const GALGAS_string & in_mTargetName,
                                                  const GALGAS_string & in_mProductFileReference,
                                                  const GALGAS_string & in_mProductFileName,
                                                  const GALGAS_stringlist & in_mBuildPhaseRefList,
                                                  const GALGAS_string & in_mBuildPhaseRef,
                                                  const GALGAS_string & in_mBuildConfigurationListRef,
                                                  const GALGAS_stringlist & in_mBuildConfigurationSettingList,
                                                  const GALGAS_string & in_mBuildConfigurationRef,
                                                  const GALGAS_stringlist & in_mFrameworksFileRefList,
                                                  const GALGAS_string & in_mFrameworkBuildPhaseRef) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_XCodeToolTargetList_2D_element extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_XCodeToolTargetList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                               const class GALGAS_string & inOperand1,
                                                                               const class GALGAS_string & inOperand2,
                                                                               const class GALGAS_string & inOperand3,
                                                                               const class GALGAS_stringlist & inOperand4,
                                                                               const class GALGAS_string & inOperand5,
                                                                               const class GALGAS_string & inOperand6,
                                                                               const class GALGAS_stringlist & inOperand7,
                                                                               const class GALGAS_string & inOperand8,
                                                                               const class GALGAS_stringlist & inOperand9,
                                                                               const class GALGAS_string & inOperand10
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_XCodeToolTargetList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mBuildConfigurationListRef (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mBuildConfigurationRef (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mBuildConfigurationSettingList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mBuildPhaseRef (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mBuildPhaseRefList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mFrameworkBuildPhaseRef (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mFrameworksFileRefList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mProductFileName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mProductFileReference (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mTargetName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mTargetRef (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_XCodeToolTargetList_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeToolTargetList_2D_element ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @XCodeAppTargetList list                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_XCodeAppTargetList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_XCodeAppTargetList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_XCodeAppTargetList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mTargetRef,
                                                  const class GALGAS_string & in_mTargetName,
                                                  const class GALGAS_string & in_mProductFileReference,
                                                  const class GALGAS_string & in_mProductFileName,
                                                  const class GALGAS_stringlist & in_mBuildPhaseRefList,
                                                  const class GALGAS_string & in_mBuildPhaseRef,
                                                  const class GALGAS_string & in_mBuildConfigurationListRef,
                                                  const class GALGAS_stringlist & in_mBuildConfigurationSettingList,
                                                  const class GALGAS_string & in_mBuildConfigurationRef,
                                                  const class GALGAS_stringlist & in_mFrameworksFileRefList,
                                                  const class GALGAS_string & in_mFrameworkBuildPhaseRef,
                                                  const class GALGAS__32_stringlist & in_mDependentTargets,
                                                  const class GALGAS_string & in_mResourceBuildRef,
                                                  const class GALGAS_stringlist & in_mResourceFileBuildRefs,
                                                  const class GALGAS_string & in_mInfoPListFile
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_XCodeAppTargetList extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_XCodeAppTargetList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_XCodeAppTargetList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                             const class GALGAS_string & inOperand1,
                                                                             const class GALGAS_string & inOperand2,
                                                                             const class GALGAS_string & inOperand3,
                                                                             const class GALGAS_stringlist & inOperand4,
                                                                             const class GALGAS_string & inOperand5,
                                                                             const class GALGAS_string & inOperand6,
                                                                             const class GALGAS_stringlist & inOperand7,
                                                                             const class GALGAS_string & inOperand8,
                                                                             const class GALGAS_stringlist & inOperand9,
                                                                             const class GALGAS_string & inOperand10,
                                                                             const class GALGAS__32_stringlist & inOperand11,
                                                                             const class GALGAS_string & inOperand12,
                                                                             const class GALGAS_stringlist & inOperand13,
                                                                             const class GALGAS_string & inOperand14
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_XCodeAppTargetList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_string & inOperand1,
                                                      const class GALGAS_string & inOperand2,
                                                      const class GALGAS_string & inOperand3,
                                                      const class GALGAS_stringlist & inOperand4,
                                                      const class GALGAS_string & inOperand5,
                                                      const class GALGAS_string & inOperand6,
                                                      const class GALGAS_stringlist & inOperand7,
                                                      const class GALGAS_string & inOperand8,
                                                      const class GALGAS_stringlist & inOperand9,
                                                      const class GALGAS_string & inOperand10,
                                                      const class GALGAS__32_stringlist & inOperand11,
                                                      const class GALGAS_string & inOperand12,
                                                      const class GALGAS_stringlist & inOperand13,
                                                      const class GALGAS_string & inOperand14
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_XCodeAppTargetList add_operation (const GALGAS_XCodeAppTargetList & inOperand,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_XCodeAppTargetList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                       class GALGAS_string constinArgument1,
                                                       class GALGAS_string constinArgument2,
                                                       class GALGAS_string constinArgument3,
                                                       class GALGAS_stringlist constinArgument4,
                                                       class GALGAS_string constinArgument5,
                                                       class GALGAS_string constinArgument6,
                                                       class GALGAS_stringlist constinArgument7,
                                                       class GALGAS_string constinArgument8,
                                                       class GALGAS_stringlist constinArgument9,
                                                       class GALGAS_string constinArgument10,
                                                       class GALGAS__32_stringlist constinArgument11,
                                                       class GALGAS_string constinArgument12,
                                                       class GALGAS_stringlist constinArgument13,
                                                       class GALGAS_string constinArgument14,
                                                       class GALGAS_uint constinArgument15,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                  class GALGAS_string & outArgument1,
                                                  class GALGAS_string & outArgument2,
                                                  class GALGAS_string & outArgument3,
                                                  class GALGAS_stringlist & outArgument4,
                                                  class GALGAS_string & outArgument5,
                                                  class GALGAS_string & outArgument6,
                                                  class GALGAS_stringlist & outArgument7,
                                                  class GALGAS_string & outArgument8,
                                                  class GALGAS_stringlist & outArgument9,
                                                  class GALGAS_string & outArgument10,
                                                  class GALGAS__32_stringlist & outArgument11,
                                                  class GALGAS_string & outArgument12,
                                                  class GALGAS_stringlist & outArgument13,
                                                  class GALGAS_string & outArgument14,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 class GALGAS_string & outArgument3,
                                                 class GALGAS_stringlist & outArgument4,
                                                 class GALGAS_string & outArgument5,
                                                 class GALGAS_string & outArgument6,
                                                 class GALGAS_stringlist & outArgument7,
                                                 class GALGAS_string & outArgument8,
                                                 class GALGAS_stringlist & outArgument9,
                                                 class GALGAS_string & outArgument10,
                                                 class GALGAS__32_stringlist & outArgument11,
                                                 class GALGAS_string & outArgument12,
                                                 class GALGAS_stringlist & outArgument13,
                                                 class GALGAS_string & outArgument14,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                       class GALGAS_string & outArgument1,
                                                       class GALGAS_string & outArgument2,
                                                       class GALGAS_string & outArgument3,
                                                       class GALGAS_stringlist & outArgument4,
                                                       class GALGAS_string & outArgument5,
                                                       class GALGAS_string & outArgument6,
                                                       class GALGAS_stringlist & outArgument7,
                                                       class GALGAS_string & outArgument8,
                                                       class GALGAS_stringlist & outArgument9,
                                                       class GALGAS_string & outArgument10,
                                                       class GALGAS__32_stringlist & outArgument11,
                                                       class GALGAS_string & outArgument12,
                                                       class GALGAS_stringlist & outArgument13,
                                                       class GALGAS_string & outArgument14,
                                                       class GALGAS_uint constinArgument15,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_string & outArgument1,
                                               class GALGAS_string & outArgument2,
                                               class GALGAS_string & outArgument3,
                                               class GALGAS_stringlist & outArgument4,
                                               class GALGAS_string & outArgument5,
                                               class GALGAS_string & outArgument6,
                                               class GALGAS_stringlist & outArgument7,
                                               class GALGAS_string & outArgument8,
                                               class GALGAS_stringlist & outArgument9,
                                               class GALGAS_string & outArgument10,
                                               class GALGAS__32_stringlist & outArgument11,
                                               class GALGAS_string & outArgument12,
                                               class GALGAS_stringlist & outArgument13,
                                               class GALGAS_string & outArgument14,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              class GALGAS_string & outArgument3,
                                              class GALGAS_stringlist & outArgument4,
                                              class GALGAS_string & outArgument5,
                                              class GALGAS_string & outArgument6,
                                              class GALGAS_stringlist & outArgument7,
                                              class GALGAS_string & outArgument8,
                                              class GALGAS_stringlist & outArgument9,
                                              class GALGAS_string & outArgument10,
                                              class GALGAS__32_stringlist & outArgument11,
                                              class GALGAS_string & outArgument12,
                                              class GALGAS_stringlist & outArgument13,
                                              class GALGAS_string & outArgument14,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mBuildConfigurationListRefAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mBuildConfigurationRefAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mBuildConfigurationSettingListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mBuildPhaseRefAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mBuildPhaseRefListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS__32_stringlist getter_mDependentTargetsAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mFrameworkBuildPhaseRefAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mFrameworksFileRefListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mInfoPListFileAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mProductFileNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mProductFileReferenceAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mResourceBuildRefAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mResourceFileBuildRefsAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mTargetNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mTargetRefAtIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_XCodeAppTargetList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_XCodeAppTargetList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_XCodeAppTargetList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_XCodeAppTargetList ;
 
} ; // End of GALGAS_XCodeAppTargetList class

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Enumerator declaration                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cEnumerator_XCodeAppTargetList : public cGenericAbstractEnumerator {
  public : cEnumerator_XCodeAppTargetList (const GALGAS_XCodeAppTargetList & inEnumeratedObject,
                                           const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mTargetRef (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mTargetName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mProductFileReference (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mProductFileName (LOCATION_ARGS) const ;
  public : class GALGAS_stringlist current_mBuildPhaseRefList (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mBuildPhaseRef (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mBuildConfigurationListRef (LOCATION_ARGS) const ;
  public : class GALGAS_stringlist current_mBuildConfigurationSettingList (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mBuildConfigurationRef (LOCATION_ARGS) const ;
  public : class GALGAS_stringlist current_mFrameworksFileRefList (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const ;
  public : class GALGAS__32_stringlist current_mDependentTargets (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mResourceBuildRef (LOCATION_ARGS) const ;
  public : class GALGAS_stringlist current_mResourceFileBuildRefs (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mInfoPListFile (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_XCodeAppTargetList_2D_element current (LOCATION_ARGS) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeAppTargetList ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @XCodeAppTargetList_2D_element struct                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class GALGAS_XCodeAppTargetList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_string mProperty_mTargetRef ;

  public : GALGAS_string mProperty_mTargetName ;

  public : GALGAS_string mProperty_mProductFileReference ;

  public : GALGAS_string mProperty_mProductFileName ;

  public : GALGAS_stringlist mProperty_mBuildPhaseRefList ;

  public : GALGAS_string mProperty_mBuildPhaseRef ;

  public : GALGAS_string mProperty_mBuildConfigurationListRef ;

  public : GALGAS_stringlist mProperty_mBuildConfigurationSettingList ;

  public : GALGAS_string mProperty_mBuildConfigurationRef ;

  public : GALGAS_stringlist mProperty_mFrameworksFileRefList ;

  public : GALGAS_string mProperty_mFrameworkBuildPhaseRef ;

  public : GALGAS__32_stringlist mProperty_mDependentTargets ;

  public : GALGAS_string mProperty_mResourceBuildRef ;

  public : GALGAS_stringlist mProperty_mResourceFileBuildRefs ;

  public : GALGAS_string mProperty_mInfoPListFile ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_XCodeAppTargetList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_XCodeAppTargetList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_XCodeAppTargetList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_XCodeAppTargetList_2D_element (const GALGAS_string & in_mTargetRef,
                                                 const GALGAS_string & in_mTargetName,
                                                 const GALGAS_string & in_mProductFileReference,
                                                 const GALGAS_string & in_mProductFileName,
                                                 const GALGAS_stringlist & in_mBuildPhaseRefList,
                                                 const GALGAS_string & in_mBuildPhaseRef,
                                                 const GALGAS_string & in_mBuildConfigurationListRef,
                                                 const GALGAS_stringlist & in_mBuildConfigurationSettingList,
                                                 const GALGAS_string & in_mBuildConfigurationRef,
                                                 const GALGAS_stringlist & in_mFrameworksFileRefList,
                                                 const GALGAS_string & in_mFrameworkBuildPhaseRef,
                                                 const GALGAS__32_stringlist & in_mDependentTargets,
                                                 const GALGAS_string & in_mResourceBuildRef,
                                                 const GALGAS_stringlist & in_mResourceFileBuildRefs,
                                                 const GALGAS_string & in_mInfoPListFile) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_XCodeAppTargetList_2D_element extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_XCodeAppTargetList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                              const class GALGAS_string & inOperand1,
                                                                              const class GALGAS_string & inOperand2,
                                                                              const class GALGAS_string & inOperand3,
                                                                              const class GALGAS_stringlist & inOperand4,
                                                                              const class GALGAS_string & inOperand5,
                                                                              const class GALGAS_string & inOperand6,
                                                                              const class GALGAS_stringlist & inOperand7,
                                                                              const class GALGAS_string & inOperand8,
                                                                              const class GALGAS_stringlist & inOperand9,
                                                                              const class GALGAS_string & inOperand10,
                                                                              const class GALGAS__32_stringlist & inOperand11,
                                                                              const class GALGAS_string & inOperand12,
                                                                              const class GALGAS_stringlist & inOperand13,
                                                                              const class GALGAS_string & inOperand14
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_XCodeAppTargetList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mBuildConfigurationListRef (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mBuildConfigurationRef (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mBuildConfigurationSettingList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mBuildPhaseRef (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mBuildPhaseRefList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS__32_stringlist getter_mDependentTargets (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mFrameworkBuildPhaseRef (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mFrameworksFileRefList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mInfoPListFile (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mProductFileName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mProductFileReference (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mResourceBuildRef (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringlist getter_mResourceFileBuildRefs (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mTargetName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mTargetRef (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_XCodeAppTargetList_2D_element class


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeAppTargetList_2D_element ;


#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-2.h"

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @computedPropertyGenerationList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_computedPropertyGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_computedPropertyGenerationList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_computedPropertyGenerationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_computedPropertyGeneration & in_mProperty
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_computedPropertyGenerationList extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_computedPropertyGenerationList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_computedPropertyGenerationList constructor_listWithValue (const class GALGAS_computedPropertyGeneration & inOperand0
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_computedPropertyGenerationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_computedPropertyGeneration & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_computedPropertyGenerationList add_operation (const GALGAS_computedPropertyGenerationList & inOperand,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_computedPropertyGenerationList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_computedPropertyGeneration constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_computedPropertyGeneration & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_computedPropertyGeneration & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_computedPropertyGeneration & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMPropertyAtIndex (class GALGAS_computedPropertyGeneration constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_computedPropertyGeneration & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_computedPropertyGeneration & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_computedPropertyGeneration getter_mPropertyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_computedPropertyGenerationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_computedPropertyGenerationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_computedPropertyGenerationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_computedPropertyGenerationList ;
 
} ; // End of GALGAS_computedPropertyGenerationList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_computedPropertyGenerationList : public cGenericAbstractEnumerator {
  public : cEnumerator_computedPropertyGenerationList (const GALGAS_computedPropertyGenerationList & inEnumeratedObject,
                                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_computedPropertyGeneration current_mProperty (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_computedPropertyGenerationList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedPropertyGenerationList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @computedPropertyGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_computedPropertyGeneration : public GALGAS_propertyGeneration {
//--- Constructor
  public : GALGAS_computedPropertyGeneration (void) ;

//---
  public : inline const class cPtr_computedPropertyGeneration * ptr (void) const { return (const cPtr_computedPropertyGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_computedPropertyGeneration (const cPtr_computedPropertyGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_computedPropertyGeneration extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_computedPropertyGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                           const class GALGAS_string & inOperand1,
                                                                           const class GALGAS_typeKind & inOperand2,
                                                                           const class GALGAS_transientDependencyListForGeneration & inOperand3,
                                                                           const class GALGAS_bool & inOperand4
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_computedPropertyGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMClassName (class GALGAS_string inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMDependencyList (class GALGAS_transientDependencyListForGeneration inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMGenerate (class GALGAS_bool inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMType (class GALGAS_typeKind inArgument0
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mClassName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_transientDependencyListForGeneration getter_mDependencyList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mGenerate (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typeKind getter_mType (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_computedPropertyGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedPropertyGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @computedPropertyGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_computedPropertyGeneration : public cPtr_propertyGeneration {
//--- Attributes
  public : GALGAS_string mProperty_mClassName ;
  public : GALGAS_typeKind mProperty_mType ;
  public : GALGAS_transientDependencyListForGeneration mProperty_mDependencyList ;
  public : GALGAS_bool mProperty_mGenerate ;

//--- Constructor
  public : cPtr_computedPropertyGeneration (const GALGAS_string & in_mPropertyName,
                                            const GALGAS_string & in_mClassName,
                                            const GALGAS_typeKind & in_mType,
                                            const GALGAS_transientDependencyListForGeneration & in_mDependencyList,
                                            const GALGAS_bool & in_mGenerate
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mClassName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMClassName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_typeKind getter_mType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMType (GALGAS_typeKind inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_transientDependencyListForGeneration getter_mDependencyList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMDependencyList (GALGAS_transientDependencyListForGeneration inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mGenerate (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMGenerate (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @computedPropertyGenerationList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_computedPropertyGenerationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_computedPropertyGeneration mProperty_mProperty ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_computedPropertyGenerationList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_computedPropertyGenerationList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_computedPropertyGenerationList_2D_element (const GALGAS_computedPropertyGeneration & in_mProperty) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_computedPropertyGenerationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_computedPropertyGenerationList_2D_element constructor_new (const class GALGAS_computedPropertyGeneration & inOperand0
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_computedPropertyGenerationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_computedPropertyGeneration getter_mProperty (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_computedPropertyGenerationList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedPropertyGenerationList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @computeRoutineGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_computeRoutineGeneration : public GALGAS_abstractFileGeneration {
//--- Constructor
  public : GALGAS_computeRoutineGeneration (void) ;

//---
  public : inline const class cPtr_computeRoutineGeneration * ptr (void) const { return (const cPtr_computeRoutineGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_computeRoutineGeneration (const cPtr_computeRoutineGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_computeRoutineGeneration extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_computeRoutineGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                         const class GALGAS_string & inOperand1,
                                                                         const class GALGAS_typeKind & inOperand2,
                                                                         const class GALGAS_transientDependencyListForGeneration & inOperand3
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_computeRoutineGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMDependencyList (class GALGAS_transientDependencyListForGeneration inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOwnerName (class GALGAS_string inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTransientName (class GALGAS_string inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTransientType (class GALGAS_typeKind inArgument0
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_transientDependencyListForGeneration getter_mDependencyList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mOwnerName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mTransientName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typeKind getter_mTransientType (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_computeRoutineGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computeRoutineGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @computeRoutineGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_computeRoutineGeneration : public cPtr_abstractFileGeneration {
//--- Attributes
  public : GALGAS_string mProperty_mOwnerName ;
  public : GALGAS_string mProperty_mTransientName ;
  public : GALGAS_typeKind mProperty_mTransientType ;
  public : GALGAS_transientDependencyListForGeneration mProperty_mDependencyList ;

//--- Constructor
  public : cPtr_computeRoutineGeneration (const GALGAS_string & in_mOwnerName,
                                          const GALGAS_string & in_mTransientName,
                                          const GALGAS_typeKind & in_mTransientType,
                                          const GALGAS_transientDependencyListForGeneration & in_mDependencyList
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mOwnerName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOwnerName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mTransientName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTransientName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_typeKind getter_mTransientType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTransientType (GALGAS_typeKind inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_transientDependencyListForGeneration getter_mDependencyList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMDependencyList (GALGAS_transientDependencyListForGeneration inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @transientPropertyGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_transientPropertyGeneration : public GALGAS_propertyGeneration {
//--- Constructor
  public : GALGAS_transientPropertyGeneration (void) ;

//---
  public : inline const class cPtr_transientPropertyGeneration * ptr (void) const { return (const cPtr_transientPropertyGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_transientPropertyGeneration (const cPtr_transientPropertyGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_transientPropertyGeneration extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_transientPropertyGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                            const class GALGAS_string & inOperand1,
                                                                            const class GALGAS_typeKind & inOperand2,
                                                                            const class GALGAS_transientDependencyListForGeneration & inOperand3,
                                                                            const class GALGAS_bool & inOperand4
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_transientPropertyGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMClassName (class GALGAS_string inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMDependencyList (class GALGAS_transientDependencyListForGeneration inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMGenerate (class GALGAS_bool inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMType (class GALGAS_typeKind inArgument0
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mClassName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_transientDependencyListForGeneration getter_mDependencyList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mGenerate (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typeKind getter_mType (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_transientPropertyGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientPropertyGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @transientPropertyGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_transientPropertyGeneration : public cPtr_propertyGeneration {
//--- Attributes
  public : GALGAS_string mProperty_mClassName ;
  public : GALGAS_typeKind mProperty_mType ;
  public : GALGAS_transientDependencyListForGeneration mProperty_mDependencyList ;
  public : GALGAS_bool mProperty_mGenerate ;

//--- Constructor
  public : cPtr_transientPropertyGeneration (const GALGAS_string & in_mPropertyName,
                                             const GALGAS_string & in_mClassName,
                                             const GALGAS_typeKind & in_mType,
                                             const GALGAS_transientDependencyListForGeneration & in_mDependencyList,
                                             const GALGAS_bool & in_mGenerate
                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mClassName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMClassName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_typeKind getter_mType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMType (GALGAS_typeKind inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_transientDependencyListForGeneration getter_mDependencyList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMDependencyList (GALGAS_transientDependencyListForGeneration inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mGenerate (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMGenerate (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @transientPropertyGenerationList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_transientPropertyGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_transientPropertyGenerationList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_transientPropertyGenerationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_transientPropertyGeneration & in_mProperty
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_transientPropertyGenerationList extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_transientPropertyGenerationList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_transientPropertyGenerationList constructor_listWithValue (const class GALGAS_transientPropertyGeneration & inOperand0
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_transientPropertyGenerationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_transientPropertyGeneration & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_transientPropertyGenerationList add_operation (const GALGAS_transientPropertyGenerationList & inOperand,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_transientPropertyGenerationList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_transientPropertyGeneration constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_transientPropertyGeneration & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_transientPropertyGeneration & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_transientPropertyGeneration & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMPropertyAtIndex (class GALGAS_transientPropertyGeneration constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_transientPropertyGeneration & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_transientPropertyGeneration & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_transientPropertyGeneration getter_mPropertyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_transientPropertyGenerationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_transientPropertyGenerationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_transientPropertyGenerationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_transientPropertyGenerationList ;
 
} ; // End of GALGAS_transientPropertyGenerationList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_transientPropertyGenerationList : public cGenericAbstractEnumerator {
  public : cEnumerator_transientPropertyGenerationList (const GALGAS_transientPropertyGenerationList & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_transientPropertyGeneration current_mProperty (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_transientPropertyGenerationList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientPropertyGenerationList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @transientPropertyGenerationList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_transientPropertyGenerationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_transientPropertyGeneration mProperty_mProperty ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_transientPropertyGenerationList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_transientPropertyGenerationList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_transientPropertyGenerationList_2D_element (const GALGAS_transientPropertyGeneration & in_mProperty) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_transientPropertyGenerationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_transientPropertyGenerationList_2D_element constructor_new (const class GALGAS_transientPropertyGeneration & inOperand0
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_transientPropertyGenerationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_transientPropertyGeneration getter_mProperty (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_transientPropertyGenerationList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientPropertyGenerationList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@transientDependencyListForGeneration transientComputeFunctionCall' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_transientComputeFunctionCall (const class GALGAS_transientDependencyListForGeneration & inObject,
                                                                  const class GALGAS_bool & constinArgument0,
                                                                  const class GALGAS_string & constinArgument1,
                                                                  const class GALGAS_string & constinArgument2,
                                                                  const class GALGAS_string & constinArgument3,
                                                                  class C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@transientDependencyListForGeneration needs_unwSelf' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bool extensionGetter_needs_5F_unwSelf (const class GALGAS_transientDependencyListForGeneration & inObject,
                                                    const class GALGAS_bool & constinArgument0,
                                                    class C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@observablePropertyAST generateGetProperty' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_generateGetProperty (const class GALGAS_observablePropertyAST & inObject,
                                                         class C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@observablePropertyAST generateAddObserverCall' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_generateAddObserverCall (const class GALGAS_observablePropertyAST & inObject,
                                                             const class GALGAS_bool & constinArgument0,
                                                             class C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@observablePropertyAST generateRemoveObserverCall' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_generateRemoveObserverCall (const class GALGAS_observablePropertyAST & inObject,
                                                                class C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @transientRoutineGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_transientRoutineGeneration : public GALGAS_abstractFileGeneration {
//--- Constructor
  public : GALGAS_transientRoutineGeneration (void) ;

//---
  public : inline const class cPtr_transientRoutineGeneration * ptr (void) const { return (const cPtr_transientRoutineGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_transientRoutineGeneration (const cPtr_transientRoutineGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_transientRoutineGeneration extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_transientRoutineGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                           const class GALGAS_string & inOperand1,
                                                                           const class GALGAS_typeKind & inOperand2,
                                                                           const class GALGAS_string & inOperand3,
                                                                           const class GALGAS_transientDependencyListForGeneration & inOperand4
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_transientRoutineGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMDependencyList (class GALGAS_transientDependencyListForGeneration inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMGeneratedFunctionNamePrefix (class GALGAS_string inArgument0
                                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOwnerName (class GALGAS_string inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTransientName (class GALGAS_string inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTransientType (class GALGAS_typeKind inArgument0
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_transientDependencyListForGeneration getter_mDependencyList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mGeneratedFunctionNamePrefix (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mOwnerName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mTransientName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typeKind getter_mTransientType (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_transientRoutineGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientRoutineGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @transientRoutineGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_transientRoutineGeneration : public cPtr_abstractFileGeneration {
//--- Attributes
  public : GALGAS_string mProperty_mOwnerName ;
  public : GALGAS_string mProperty_mTransientName ;
  public : GALGAS_typeKind mProperty_mTransientType ;
  public : GALGAS_string mProperty_mGeneratedFunctionNamePrefix ;
  public : GALGAS_transientDependencyListForGeneration mProperty_mDependencyList ;

//--- Constructor
  public : cPtr_transientRoutineGeneration (const GALGAS_string & in_mOwnerName,
                                            const GALGAS_string & in_mTransientName,
                                            const GALGAS_typeKind & in_mTransientType,
                                            const GALGAS_string & in_mGeneratedFunctionNamePrefix,
                                            const GALGAS_transientDependencyListForGeneration & in_mDependencyList
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mOwnerName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOwnerName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mTransientName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTransientName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_typeKind getter_mTransientType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTransientType (GALGAS_typeKind inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mGeneratedFunctionNamePrefix (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMGeneratedFunctionNamePrefix (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_transientDependencyListForGeneration getter_mDependencyList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMDependencyList (GALGAS_transientDependencyListForGeneration inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @toManyProxyGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_toManyProxyGeneration : public GALGAS_propertyGeneration {
//--- Constructor
  public : GALGAS_toManyProxyGeneration (void) ;

//---
  public : inline const class cPtr_toManyProxyGeneration * ptr (void) const { return (const cPtr_toManyProxyGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_toManyProxyGeneration (const cPtr_toManyProxyGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_toManyProxyGeneration extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_toManyProxyGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                      const class GALGAS_proxyKind & inOperand1,
                                                                      const class GALGAS_string & inOperand2,
                                                                      const class GALGAS_string & inOperand3,
                                                                      const class GALGAS_string & inOperand4
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_toManyProxyGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMObservedPropertyName (class GALGAS_string inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMObservedRelationshipName (class GALGAS_string inArgument0
                                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMProxyKind (class GALGAS_proxyKind inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMToManyTypeName (class GALGAS_string inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mObservedPropertyName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mObservedRelationshipName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_proxyKind getter_mProxyKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mToManyTypeName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_toManyProxyGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyProxyGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @toManyProxyGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_toManyProxyGeneration : public cPtr_propertyGeneration {
//--- Attributes
  public : GALGAS_proxyKind mProperty_mProxyKind ;
  public : GALGAS_string mProperty_mToManyTypeName ;
  public : GALGAS_string mProperty_mObservedRelationshipName ;
  public : GALGAS_string mProperty_mObservedPropertyName ;

//--- Constructor
  public : cPtr_toManyProxyGeneration (const GALGAS_string & in_mPropertyName,
                                       const GALGAS_proxyKind & in_mProxyKind,
                                       const GALGAS_string & in_mToManyTypeName,
                                       const GALGAS_string & in_mObservedRelationshipName,
                                       const GALGAS_string & in_mObservedPropertyName
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_proxyKind getter_mProxyKind (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMProxyKind (GALGAS_proxyKind inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mToManyTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMToManyTypeName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mObservedRelationshipName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMObservedRelationshipName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mObservedPropertyName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMObservedPropertyName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @toManyProxyGenerationList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_toManyProxyGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_toManyProxyGenerationList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_toManyProxyGenerationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_toManyProxyGeneration & in_mProperty
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_toManyProxyGenerationList extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_toManyProxyGenerationList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_toManyProxyGenerationList constructor_listWithValue (const class GALGAS_toManyProxyGeneration & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_toManyProxyGenerationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_toManyProxyGeneration & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_toManyProxyGenerationList add_operation (const GALGAS_toManyProxyGenerationList & inOperand,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_toManyProxyGenerationList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_toManyProxyGeneration constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_toManyProxyGeneration & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_toManyProxyGeneration & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_toManyProxyGeneration & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMPropertyAtIndex (class GALGAS_toManyProxyGeneration constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_toManyProxyGeneration & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_toManyProxyGeneration & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_toManyProxyGeneration getter_mPropertyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_toManyProxyGenerationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_toManyProxyGenerationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_toManyProxyGenerationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_toManyProxyGenerationList ;
 
} ; // End of GALGAS_toManyProxyGenerationList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_toManyProxyGenerationList : public cGenericAbstractEnumerator {
  public : cEnumerator_toManyProxyGenerationList (const GALGAS_toManyProxyGenerationList & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_toManyProxyGeneration current_mProperty (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_toManyProxyGenerationList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyProxyGenerationList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @toManyProxyGenerationList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_toManyProxyGenerationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_toManyProxyGeneration mProperty_mProperty ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_toManyProxyGenerationList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_toManyProxyGenerationList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_toManyProxyGenerationList_2D_element (const GALGAS_toManyProxyGeneration & in_mProperty) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_toManyProxyGenerationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_toManyProxyGenerationList_2D_element constructor_new (const class GALGAS_toManyProxyGeneration & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_toManyProxyGenerationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_toManyProxyGeneration getter_mProperty (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_toManyProxyGenerationList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyProxyGenerationList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @atomicProxyGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_atomicProxyGeneration : public GALGAS_propertyGeneration {
//--- Constructor
  public : GALGAS_atomicProxyGeneration (void) ;

//---
  public : inline const class cPtr_atomicProxyGeneration * ptr (void) const { return (const cPtr_atomicProxyGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_atomicProxyGeneration (const cPtr_atomicProxyGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_atomicProxyGeneration extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_atomicProxyGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                      const class GALGAS_proxyKind & inOperand1,
                                                                      const class GALGAS_typeKind & inOperand2,
                                                                      const class GALGAS_string & inOperand3,
                                                                      const class GALGAS_string & inOperand4
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_atomicProxyGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMObservedPropertyName (class GALGAS_string inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMObservedRelationshipName (class GALGAS_string inArgument0
                                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMProxyKind (class GALGAS_proxyKind inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMType (class GALGAS_typeKind inArgument0
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mObservedPropertyName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mObservedRelationshipName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_proxyKind getter_mProxyKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typeKind getter_mType (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_atomicProxyGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicProxyGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @atomicProxyGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_atomicProxyGeneration : public cPtr_propertyGeneration {
//--- Attributes
  public : GALGAS_proxyKind mProperty_mProxyKind ;
  public : GALGAS_typeKind mProperty_mType ;
  public : GALGAS_string mProperty_mObservedRelationshipName ;
  public : GALGAS_string mProperty_mObservedPropertyName ;

//--- Constructor
  public : cPtr_atomicProxyGeneration (const GALGAS_string & in_mPropertyName,
                                       const GALGAS_proxyKind & in_mProxyKind,
                                       const GALGAS_typeKind & in_mType,
                                       const GALGAS_string & in_mObservedRelationshipName,
                                       const GALGAS_string & in_mObservedPropertyName
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_proxyKind getter_mProxyKind (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMProxyKind (GALGAS_proxyKind inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_typeKind getter_mType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMType (GALGAS_typeKind inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mObservedRelationshipName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMObservedRelationshipName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mObservedPropertyName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMObservedPropertyName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @atomicProxyGenerationList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_atomicProxyGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_atomicProxyGenerationList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_atomicProxyGenerationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_atomicProxyGeneration & in_mProperty
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_atomicProxyGenerationList extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_atomicProxyGenerationList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_atomicProxyGenerationList constructor_listWithValue (const class GALGAS_atomicProxyGeneration & inOperand0
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_atomicProxyGenerationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_atomicProxyGeneration & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_atomicProxyGenerationList add_operation (const GALGAS_atomicProxyGenerationList & inOperand,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_atomicProxyGenerationList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_atomicProxyGeneration constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_atomicProxyGeneration & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_atomicProxyGeneration & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_atomicProxyGeneration & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMPropertyAtIndex (class GALGAS_atomicProxyGeneration constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_atomicProxyGeneration & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_atomicProxyGeneration & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_atomicProxyGeneration getter_mPropertyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_atomicProxyGenerationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_atomicProxyGenerationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_atomicProxyGenerationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_atomicProxyGenerationList ;
 
} ; // End of GALGAS_atomicProxyGenerationList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_atomicProxyGenerationList : public cGenericAbstractEnumerator {
  public : cEnumerator_atomicProxyGenerationList (const GALGAS_atomicProxyGenerationList & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_atomicProxyGeneration current_mProperty (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_atomicProxyGenerationList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicProxyGenerationList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @atomicProxyGenerationList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_atomicProxyGenerationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_atomicProxyGeneration mProperty_mProperty ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_atomicProxyGenerationList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_atomicProxyGenerationList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_atomicProxyGenerationList_2D_element (const GALGAS_atomicProxyGeneration & in_mProperty) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_atomicProxyGenerationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_atomicProxyGenerationList_2D_element constructor_new (const class GALGAS_atomicProxyGeneration & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_atomicProxyGenerationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_atomicProxyGeneration getter_mProperty (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_atomicProxyGenerationList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicProxyGenerationList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @atomicPropertyGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_atomicPropertyGeneration : public GALGAS_propertyGeneration {
//--- Constructor
  public : GALGAS_atomicPropertyGeneration (void) ;

//---
  public : inline const class cPtr_atomicPropertyGeneration * ptr (void) const { return (const cPtr_atomicPropertyGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_atomicPropertyGeneration (const cPtr_atomicPropertyGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_atomicPropertyGeneration extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_atomicPropertyGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                         const class GALGAS_bool & inOperand1,
                                                                         const class GALGAS_typeKind & inOperand2,
                                                                         const class GALGAS_bool & inOperand3,
                                                                         const class GALGAS_string & inOperand4,
                                                                         const class GALGAS_bool & inOperand5
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_atomicPropertyGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMDefaultValueInSwift (class GALGAS_string inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInPreferences (class GALGAS_bool inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIsProxy (class GALGAS_bool inArgument0
                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMNeedsValidation (class GALGAS_bool inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMType (class GALGAS_typeKind inArgument0
                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mDefaultValueInSwift (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mInPreferences (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsProxy (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mNeedsValidation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typeKind getter_mType (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_atomicPropertyGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicPropertyGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @atomicPropertyGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_atomicPropertyGeneration : public cPtr_propertyGeneration {
//--- Attributes
  public : GALGAS_bool mProperty_mNeedsValidation ;
  public : GALGAS_typeKind mProperty_mType ;
  public : GALGAS_bool mProperty_mIsProxy ;
  public : GALGAS_string mProperty_mDefaultValueInSwift ;
  public : GALGAS_bool mProperty_mInPreferences ;

//--- Constructor
  public : cPtr_atomicPropertyGeneration (const GALGAS_string & in_mPropertyName,
                                          const GALGAS_bool & in_mNeedsValidation,
                                          const GALGAS_typeKind & in_mType,
                                          const GALGAS_bool & in_mIsProxy,
                                          const GALGAS_string & in_mDefaultValueInSwift,
                                          const GALGAS_bool & in_mInPreferences
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mNeedsValidation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMNeedsValidation (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_typeKind getter_mType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMType (GALGAS_typeKind inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mIsProxy (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMIsProxy (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mDefaultValueInSwift (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMDefaultValueInSwift (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mInPreferences (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMInPreferences (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @atomicPropertyGenerationList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_atomicPropertyGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_atomicPropertyGenerationList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_atomicPropertyGenerationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_atomicPropertyGeneration & in_mProperty
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_atomicPropertyGenerationList extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_atomicPropertyGenerationList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_atomicPropertyGenerationList constructor_listWithValue (const class GALGAS_atomicPropertyGeneration & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_atomicPropertyGenerationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_atomicPropertyGeneration & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_atomicPropertyGenerationList add_operation (const GALGAS_atomicPropertyGenerationList & inOperand,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_atomicPropertyGenerationList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_atomicPropertyGeneration constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_atomicPropertyGeneration & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_atomicPropertyGeneration & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_atomicPropertyGeneration & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMPropertyAtIndex (class GALGAS_atomicPropertyGeneration constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_atomicPropertyGeneration & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_atomicPropertyGeneration & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_atomicPropertyGeneration getter_mPropertyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_atomicPropertyGenerationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_atomicPropertyGenerationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_atomicPropertyGenerationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_atomicPropertyGenerationList ;
 
} ; // End of GALGAS_atomicPropertyGenerationList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_atomicPropertyGenerationList : public cGenericAbstractEnumerator {
  public : cEnumerator_atomicPropertyGenerationList (const GALGAS_atomicPropertyGenerationList & inEnumeratedObject,
                                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_atomicPropertyGeneration current_mProperty (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_atomicPropertyGenerationList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicPropertyGenerationList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @atomicPropertyGenerationList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_atomicPropertyGenerationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_atomicPropertyGeneration mProperty_mProperty ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_atomicPropertyGenerationList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_atomicPropertyGenerationList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_atomicPropertyGenerationList_2D_element (const GALGAS_atomicPropertyGeneration & in_mProperty) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_atomicPropertyGenerationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_atomicPropertyGenerationList_2D_element constructor_new (const class GALGAS_atomicPropertyGeneration & inOperand0
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_atomicPropertyGenerationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_atomicPropertyGeneration getter_mProperty (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_atomicPropertyGenerationList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicPropertyGenerationList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @propertyMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_propertyMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_propertyKind mProperty_mKind ;

  public : GALGAS_actionMap mProperty_mActionMap ;

  public : GALGAS_bool mProperty_mIsOverriding ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_propertyMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_propertyMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_propertyMap_2D_element (const GALGAS_lstring & in_lkey,
                                          const GALGAS_propertyKind & in_mKind,
                                          const GALGAS_actionMap & in_mActionMap,
                                          const GALGAS_bool & in_mIsOverriding) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_propertyMap_2D_element extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_propertyMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                       const class GALGAS_propertyKind & inOperand1,
                                                                       const class GALGAS_actionMap & inOperand2,
                                                                       const class GALGAS_bool & inOperand3
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_propertyMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_actionMap getter_mActionMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsOverriding (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyKind getter_mKind (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_propertyMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @toOnePropertyGenerationList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_toOnePropertyGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_toOnePropertyGenerationList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_toOnePropertyGenerationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_toOnePropertyGeneration & in_mProperty
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_toOnePropertyGenerationList extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_toOnePropertyGenerationList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_toOnePropertyGenerationList constructor_listWithValue (const class GALGAS_toOnePropertyGeneration & inOperand0
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_toOnePropertyGenerationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_toOnePropertyGeneration & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_toOnePropertyGenerationList add_operation (const GALGAS_toOnePropertyGenerationList & inOperand,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_toOnePropertyGenerationList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_toOnePropertyGeneration constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_toOnePropertyGeneration & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_toOnePropertyGeneration & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_toOnePropertyGeneration & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMPropertyAtIndex (class GALGAS_toOnePropertyGeneration constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_toOnePropertyGeneration & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_toOnePropertyGeneration & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_toOnePropertyGeneration getter_mPropertyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_toOnePropertyGenerationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_toOnePropertyGenerationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_toOnePropertyGenerationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_toOnePropertyGenerationList ;
 
} ; // End of GALGAS_toOnePropertyGenerationList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_toOnePropertyGenerationList : public cGenericAbstractEnumerator {
  public : cEnumerator_toOnePropertyGenerationList (const GALGAS_toOnePropertyGenerationList & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_toOnePropertyGeneration current_mProperty (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_toOnePropertyGenerationList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toOnePropertyGenerationList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @toOnePropertyGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_toOnePropertyGeneration : public GALGAS_propertyGeneration {
//--- Constructor
  public : GALGAS_toOnePropertyGeneration (void) ;

//---
  public : inline const class cPtr_toOnePropertyGeneration * ptr (void) const { return (const cPtr_toOnePropertyGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_toOnePropertyGeneration (const cPtr_toOnePropertyGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_toOnePropertyGeneration extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_toOnePropertyGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                        const class GALGAS_string & inOperand1,
                                                                        const class GALGAS_propertyKind & inOperand2,
                                                                        const class GALGAS_toOneOppositeRelationship & inOperand3,
                                                                        const class GALGAS_propertyMap & inOperand4,
                                                                        const class GALGAS_bool & inOperand5
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_toOnePropertyGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMClassName (class GALGAS_string inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMDestinationEntityObservablePropertyMap (class GALGAS_propertyMap inArgument0
                                                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOpposite (class GALGAS_toOneOppositeRelationship inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRelationshipType (class GALGAS_propertyKind inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMUsedForSignature (class GALGAS_bool inArgument0
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mClassName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyMap getter_mDestinationEntityObservablePropertyMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_toOneOppositeRelationship getter_mOpposite (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyKind getter_mRelationshipType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mUsedForSignature (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_toOnePropertyGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toOnePropertyGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @toOnePropertyGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_toOnePropertyGeneration : public cPtr_propertyGeneration {
//--- Attributes
  public : GALGAS_string mProperty_mClassName ;
  public : GALGAS_propertyKind mProperty_mRelationshipType ;
  public : GALGAS_toOneOppositeRelationship mProperty_mOpposite ;
  public : GALGAS_propertyMap mProperty_mDestinationEntityObservablePropertyMap ;
  public : GALGAS_bool mProperty_mUsedForSignature ;

//--- Constructor
  public : cPtr_toOnePropertyGeneration (const GALGAS_string & in_mPropertyName,
                                         const GALGAS_string & in_mClassName,
                                         const GALGAS_propertyKind & in_mRelationshipType,
                                         const GALGAS_toOneOppositeRelationship & in_mOpposite,
                                         const GALGAS_propertyMap & in_mDestinationEntityObservablePropertyMap,
                                         const GALGAS_bool & in_mUsedForSignature
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mClassName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMClassName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_propertyKind getter_mRelationshipType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRelationshipType (GALGAS_propertyKind inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_toOneOppositeRelationship getter_mOpposite (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOpposite (GALGAS_toOneOppositeRelationship inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_propertyMap getter_mDestinationEntityObservablePropertyMap (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMDestinationEntityObservablePropertyMap (GALGAS_propertyMap inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mUsedForSignature (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMUsedForSignature (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @toOnePropertyGenerationList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_toOnePropertyGenerationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_toOnePropertyGeneration mProperty_mProperty ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_toOnePropertyGenerationList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_toOnePropertyGenerationList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_toOnePropertyGenerationList_2D_element (const GALGAS_toOnePropertyGeneration & in_mProperty) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_toOnePropertyGenerationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_toOnePropertyGenerationList_2D_element constructor_new (const class GALGAS_toOnePropertyGeneration & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_toOnePropertyGenerationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_toOnePropertyGeneration getter_mProperty (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_toOnePropertyGenerationList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toOnePropertyGenerationList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                  Phase 1: @toManyRelationshipOptionGeneration enum                                  *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_toManyRelationshipOptionGeneration : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_toManyRelationshipOptionGeneration (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_none,
    kEnum_hasOpposite,
    kEnum_hasDependance
  } enumeration ;
  
//--------------------------------- Private data member
  private : AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public : VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_toManyRelationshipOptionGeneration extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_toManyRelationshipOptionGeneration constructor_hasDependance (const class GALGAS_string & inOperand0,
                                                                                             const class GALGAS_string & inOperand1
                                                                                             COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_toManyRelationshipOptionGeneration constructor_hasOpposite (const class GALGAS_string & inOperand0
                                                                                           COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_toManyRelationshipOptionGeneration constructor_none (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_toManyRelationshipOptionGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_hasDependance (class GALGAS_string & outArgument0,
                                                       class GALGAS_string & outArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_hasOpposite (class GALGAS_string & outArgument0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isHasDependance (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isHasOpposite (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNone (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_toManyRelationshipOptionGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @toManyRelationshipOptionGeneration enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasOpposite : public cEnumAssociatedValues {
  public : const GALGAS_string mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasOpposite (const GALGAS_string & inAssociatedValue0
                                                                                 COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasOpposite (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasDependance : public cEnumAssociatedValues {
  public : const GALGAS_string mAssociatedValue0 ;
  public : const GALGAS_string mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasDependance (const GALGAS_string & inAssociatedValue0,
                                                                                   const GALGAS_string & inAssociatedValue1
                                                                                   COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasDependance (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @toManyPropertyGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_toManyPropertyGeneration : public GALGAS_propertyGeneration {
//--- Constructor
  public : GALGAS_toManyPropertyGeneration (void) ;

//---
  public : inline const class cPtr_toManyPropertyGeneration * ptr (void) const { return (const cPtr_toManyPropertyGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_toManyPropertyGeneration (const cPtr_toManyPropertyGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_toManyPropertyGeneration extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_toManyPropertyGeneration constructor_new (const class GALGAS_string & inOperand0,
                                                                         const class GALGAS_propertyKind & inOperand1,
                                                                         const class GALGAS_toManyRelationshipOptionGeneration & inOperand2,
                                                                         const class GALGAS_bool & inOperand3,
                                                                         const class GALGAS_bool & inOperand4,
                                                                         const class GALGAS_bool & inOperand5
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_toManyPropertyGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMCustomStore (class GALGAS_bool inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInPreferences (class GALGAS_bool inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOption (class GALGAS_toManyRelationshipOptionGeneration inArgument0
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRelationshipType (class GALGAS_propertyKind inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMUsedForSignature (class GALGAS_bool inArgument0
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mCustomStore (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mInPreferences (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_toManyRelationshipOptionGeneration getter_mOption (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyKind getter_mRelationshipType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mUsedForSignature (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_toManyPropertyGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyPropertyGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @toManyPropertyGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_toManyPropertyGeneration : public cPtr_propertyGeneration {
//--- Attributes
  public : GALGAS_propertyKind mProperty_mRelationshipType ;
  public : GALGAS_toManyRelationshipOptionGeneration mProperty_mOption ;
  public : GALGAS_bool mProperty_mInPreferences ;
  public : GALGAS_bool mProperty_mCustomStore ;
  public : GALGAS_bool mProperty_mUsedForSignature ;

//--- Constructor
  public : cPtr_toManyPropertyGeneration (const GALGAS_string & in_mPropertyName,
                                          const GALGAS_propertyKind & in_mRelationshipType,
                                          const GALGAS_toManyRelationshipOptionGeneration & in_mOption,
                                          const GALGAS_bool & in_mInPreferences,
                                          const GALGAS_bool & in_mCustomStore,
                                          const GALGAS_bool & in_mUsedForSignature
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_propertyKind getter_mRelationshipType (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRelationshipType (GALGAS_propertyKind inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_toManyRelationshipOptionGeneration getter_mOption (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOption (GALGAS_toManyRelationshipOptionGeneration inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mInPreferences (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMInPreferences (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mCustomStore (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMCustomStore (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mUsedForSignature (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMUsedForSignature (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @toManyPropertyGenerationList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_toManyPropertyGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_toManyPropertyGenerationList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_toManyPropertyGenerationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_toManyPropertyGeneration & in_mProperty
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_toManyPropertyGenerationList extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_toManyPropertyGenerationList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_toManyPropertyGenerationList constructor_listWithValue (const class GALGAS_toManyPropertyGeneration & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_toManyPropertyGenerationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_toManyPropertyGeneration & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_toManyPropertyGenerationList add_operation (const GALGAS_toManyPropertyGenerationList & inOperand,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_toManyPropertyGenerationList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_toManyPropertyGeneration constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_toManyPropertyGeneration & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_toManyPropertyGeneration & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_toManyPropertyGeneration & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMPropertyAtIndex (class GALGAS_toManyPropertyGeneration constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_toManyPropertyGeneration & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_toManyPropertyGeneration & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_toManyPropertyGeneration getter_mPropertyAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_toManyPropertyGenerationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_toManyPropertyGenerationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_toManyPropertyGenerationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_toManyPropertyGenerationList ;
 
} ; // End of GALGAS_toManyPropertyGenerationList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_toManyPropertyGenerationList : public cGenericAbstractEnumerator {
  public : cEnumerator_toManyPropertyGenerationList (const GALGAS_toManyPropertyGenerationList & inEnumeratedObject,
                                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_toManyPropertyGeneration current_mProperty (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_toManyPropertyGenerationList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyPropertyGenerationList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @toManyPropertyGenerationList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_toManyPropertyGenerationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_toManyPropertyGeneration mProperty_mProperty ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_toManyPropertyGenerationList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_toManyPropertyGenerationList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_toManyPropertyGenerationList_2D_element (const GALGAS_toManyPropertyGeneration & in_mProperty) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_toManyPropertyGenerationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_toManyPropertyGenerationList_2D_element constructor_new (const class GALGAS_toManyPropertyGeneration & inOperand0
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_toManyPropertyGenerationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_toManyPropertyGeneration getter_mProperty (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_toManyPropertyGenerationList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyPropertyGenerationList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @validationStubRoutineListForGeneration list
//
//----------------------------------------------------------------------------------------------------------------------

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

  public : VIRTUAL_IN_DEBUG void setter_setMModelNameAtIndex (class GALGAS_string constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMModelTypeNameAtIndex (class GALGAS_string constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMObjectTypeNameAtIndex (class GALGAS_string constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
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


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_validationStubRoutineListForGeneration ;
 
} ; // End of GALGAS_validationStubRoutineListForGeneration class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_validationStubRoutineListForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @validationStubRoutineListForGeneration_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

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


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_validationStubRoutineListForGeneration_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_validationStubRoutineListForGeneration_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @actionMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

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


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_actionMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actionMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @actionFileGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

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
  public : VIRTUAL_IN_DEBUG void setter_setMActionName (class GALGAS_string inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMClassName (class GALGAS_string inArgument0
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mActionName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mClassName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_actionFileGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actionFileGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @actionFileGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

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
  public : VIRTUAL_IN_DEBUG void setter_setMClassName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mActionName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMActionName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @observablePropertyAsBooleanMultipleBindingExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

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
  public : VIRTUAL_IN_DEBUG void setter_setMObservedModelString (class GALGAS_string inArgument0
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mObservedModelString (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @observablePropertyAsBooleanMultipleBindingExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration : public cPtr_abstractBooleanMultipleBindingExpressionForGeneration {
//--- Attributes
  public : GALGAS_string mProperty_mObservedModelString ;

//--- Constructor
  public : cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (const GALGAS_string & in_mObservedModelString
                                                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mObservedModelString (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMObservedModelString (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @booleanMultipleBindingLiteralIntForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

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
  public : VIRTUAL_IN_DEBUG void setter_setMValue (class GALGAS_uint inArgument0
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mValue (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_booleanMultipleBindingLiteralIntForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_booleanMultipleBindingLiteralIntForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @booleanMultipleBindingLiteralIntForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

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
  public : VIRTUAL_IN_DEBUG void setter_setMValue (GALGAS_uint inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @negateBooleanMultipleBindingExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

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
  public : VIRTUAL_IN_DEBUG void setter_setMBinding (class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inArgument0
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration getter_mBinding (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_negateBooleanMultipleBindingExpressionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @negateBooleanMultipleBindingExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

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
  public : VIRTUAL_IN_DEBUG void setter_setMBinding (GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @orBooleanMultipleBindingExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

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
  public : VIRTUAL_IN_DEBUG void setter_setMLeftBinding (class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightBinding (class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inArgument0
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration getter_mLeftBinding (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration getter_mRightBinding (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_orBooleanMultipleBindingExpressionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @orBooleanMultipleBindingExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

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
  public : VIRTUAL_IN_DEBUG void setter_setMLeftBinding (GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_abstractBooleanMultipleBindingExpressionForGeneration getter_mRightBinding (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightBinding (GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @xorBooleanMultipleBindingExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

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
  public : VIRTUAL_IN_DEBUG void setter_setMLeftBinding (class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightBinding (class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inArgument0
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration getter_mLeftBinding (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration getter_mRightBinding (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_xorBooleanMultipleBindingExpressionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @xorBooleanMultipleBindingExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

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
  public : VIRTUAL_IN_DEBUG void setter_setMLeftBinding (GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_abstractBooleanMultipleBindingExpressionForGeneration getter_mRightBinding (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightBinding (GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @andBooleanMultipleBindingExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

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
  public : VIRTUAL_IN_DEBUG void setter_setMLeftBinding (class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightBinding (class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inArgument0
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration getter_mLeftBinding (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration getter_mRightBinding (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_andBooleanMultipleBindingExpressionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @andBooleanMultipleBindingExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

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
  public : VIRTUAL_IN_DEBUG void setter_setMLeftBinding (GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_abstractBooleanMultipleBindingExpressionForGeneration getter_mRightBinding (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightBinding (GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @comparisonMultipleBindingExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

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
  public : VIRTUAL_IN_DEBUG void setter_setMLeftBinding (class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOperator (class GALGAS_multipleBindingComparisonAST inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRightBinding (class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inArgument0
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration getter_mLeftBinding (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_multipleBindingComparisonAST getter_mOperator (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration getter_mRightBinding (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_comparisonMultipleBindingExpressionForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @comparisonMultipleBindingExpressionForGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

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
  public : VIRTUAL_IN_DEBUG void setter_setMLeftBinding (GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_multipleBindingComparisonAST getter_mOperator (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOperator (GALGAS_multipleBindingComparisonAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_abstractBooleanMultipleBindingExpressionForGeneration getter_mRightBinding (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRightBinding (GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding) (const class cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                                                                                          const class GALGAS_bool constinArgument0,
                                                                                                                          const class GALGAS_propertyMap constinArgument1,
                                                                                                                          const class GALGAS_semanticContext constinArgument2,
                                                                                                                          const class GALGAS_propertyMap constinArgument3,
                                                                                                                          class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument4,
                                                                                                                          class GALGAS_typeKind & outArgument5,
                                                                                                                          class GALGAS_location & outArgument6,
                                                                                                                          class C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_analyzeExpressionForMultipleBinding (const int32_t inClassIndex,
                                                               extensionMethodSignature_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeExpressionForMultipleBinding (const class cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                              const GALGAS_bool constin_inPreferences,
                                                              const GALGAS_propertyMap constin_inRootObservablePropertyMap,
                                                              const GALGAS_semanticContext constin_inSemanticContext,
                                                              const GALGAS_propertyMap constin_inCurrentObservablePropertyMap,
                                                              GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & out_outEnableExpression,
                                                              GALGAS_typeKind & out_outType,
                                                              GALGAS_location & out_outErrorLocation,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @arrayControllerPropertyGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

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
  public : VIRTUAL_IN_DEBUG void setter_setMModelString (class GALGAS_string inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOwnerName (class GALGAS_string inArgument0
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mModelString (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mOwnerName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_arrayControllerPropertyGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerPropertyGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @arrayControllerPropertyGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

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
  public : VIRTUAL_IN_DEBUG void setter_setMModelString (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mOwnerName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOwnerName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                       Phase 1: @arrayControllerModelKind enum                                       *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_arrayControllerModelKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_arrayControllerModelKind (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_entityArray,
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
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isEntityArray (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isTransientArray (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_arrayControllerModelKind class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerModelKind ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @tableViewControllerBoundColumnListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

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


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_tableViewControllerBoundColumnListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tableViewControllerBoundColumnListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @tableViewControllerAttributListAST_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

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


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_tableViewControllerAttributListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tableViewControllerAttributListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @tableViewControllerPropertyGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

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
  public : VIRTUAL_IN_DEBUG void setter_setMModelString (class GALGAS_string inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOwnerName (class GALGAS_string inArgument0
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mModelString (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mOwnerName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_tableViewControllerPropertyGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tableViewControllerPropertyGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @tableViewControllerPropertyGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

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
  public : VIRTUAL_IN_DEBUG void setter_setMModelString (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mOwnerName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOwnerName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                     Phase 1: @tableViewControllerModelKind enum                                     *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_tableViewControllerModelKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_tableViewControllerModelKind (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_entityArray,
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
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isEntityArray (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isTransientArray (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_tableViewControllerModelKind class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tableViewControllerModelKind ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @tableViewControllerBoundColumnListForGeneration list
//
//----------------------------------------------------------------------------------------------------------------------

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

  public : VIRTUAL_IN_DEBUG void setter_setMColumnNameAtIndex (class GALGAS_string constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMColumnOutletTypeNameAtIndex (class GALGAS_string constinArgument0,
                                                                         class GALGAS_uint constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRegularBindingsGenerationListAtIndex (class GALGAS_regularBindingsGenerationList constinArgument0,
                                                                                  class GALGAS_uint constinArgument1,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRunActionAtIndex (class GALGAS_string constinArgument0,
                                                              class GALGAS_uint constinArgument1,
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


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_tableViewControllerBoundColumnListForGeneration ;
 
} ; // End of GALGAS_tableViewControllerBoundColumnListForGeneration class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tableViewControllerBoundColumnListForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @tableViewControllerBoundColumnListForGeneration_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

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


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @tableViewControllerSortedColumnListForGeneration list
//
//----------------------------------------------------------------------------------------------------------------------

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

  public : VIRTUAL_IN_DEBUG void setter_setMColumnNameAtIndex (class GALGAS_string constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMObservablePropertyForSortingAtIndex (class GALGAS_string constinArgument0,
                                                                                 class GALGAS_uint constinArgument1,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMSortPropertyKindAtIndex (class GALGAS_propertyKind constinArgument0,
                                                                     class GALGAS_uint constinArgument1,
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


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_tableViewControllerSortedColumnListForGeneration ;
 
} ; // End of GALGAS_tableViewControllerSortedColumnListForGeneration class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tableViewControllerSortedColumnListForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @tableViewControllerSortedColumnListForGeneration_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

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


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @selectionControllerPropertyGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

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
  public : VIRTUAL_IN_DEBUG void setter_setMModelControllerName (class GALGAS_string inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMModelControllerPropertyName (class GALGAS_string inArgument0
                                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOwnerName (class GALGAS_string inArgument0
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mModelControllerName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mModelControllerPropertyName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mOwnerName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selectionControllerPropertyGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectionControllerPropertyGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @selectionControllerPropertyGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

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
  public : VIRTUAL_IN_DEBUG void setter_setMOwnerName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mModelControllerName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMModelControllerName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mModelControllerPropertyName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMModelControllerPropertyName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;


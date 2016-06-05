#ifndef all_2D_declarations_2D__32__ENTITIES_DEFINED
#define all_2D_declarations_2D__32__ENTITIES_DEFINED

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-1.h"

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                  @arrayControllerAttributListAST_2D_element struct                                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_arrayControllerAttributListAST_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mAttributeName ;
  public : GALGAS_abstractDefaultValue mAttribute_mAttributeValue ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_arrayControllerAttributListAST_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_arrayControllerAttributListAST_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_arrayControllerAttributListAST_2D_element (const GALGAS_lstring & in_mAttributeName,
                                                             const GALGAS_abstractDefaultValue & in_mAttributeValue) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_arrayControllerAttributListAST_2D_element extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_arrayControllerAttributListAST_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                          const class GALGAS_abstractDefaultValue & inOperand1
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_arrayControllerAttributListAST_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mAttributeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractDefaultValue getter_mAttributeValue (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_arrayControllerAttributListAST_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerAttributListAST_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                              @arrayControllerFilterListForGeneration_2D_element struct                              *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_arrayControllerFilterListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_mFilterPropertyName ;
  public : GALGAS_typeKind mAttribute_mFilterPropertyType ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_arrayControllerFilterListForGeneration_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_arrayControllerFilterListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_arrayControllerFilterListForGeneration_2D_element (const GALGAS_string & in_mFilterPropertyName,
                                                                     const GALGAS_typeKind & in_mFilterPropertyType) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_arrayControllerFilterListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_arrayControllerFilterListForGeneration_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                                  const class GALGAS_typeKind & inOperand1
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_arrayControllerFilterListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mFilterPropertyName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typeKind getter_mFilterPropertyType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_arrayControllerFilterListForGeneration_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerFilterListForGeneration_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                           @arrayControllerBoundColumnListForGeneration_2D_element struct                            *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_arrayControllerBoundColumnListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_mColumnName ;
  public : GALGAS_string mAttribute_mColumnOutletTypeName ;
  public : GALGAS_string mAttribute_mRunAction ;
  public : GALGAS_regularBindingsGenerationList mAttribute_mRegularBindingsGenerationList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_arrayControllerBoundColumnListForGeneration_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_arrayControllerBoundColumnListForGeneration_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_arrayControllerBoundColumnListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_arrayControllerBoundColumnListForGeneration_2D_element (const GALGAS_string & in_mColumnName,
                                                                          const GALGAS_string & in_mColumnOutletTypeName,
                                                                          const GALGAS_string & in_mRunAction,
                                                                          const GALGAS_regularBindingsGenerationList & in_mRegularBindingsGenerationList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_arrayControllerBoundColumnListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_arrayControllerBoundColumnListForGeneration_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                                       const class GALGAS_string & inOperand1,
                                                                                                       const class GALGAS_string & inOperand2,
                                                                                                       const class GALGAS_regularBindingsGenerationList & inOperand3
                                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_arrayControllerBoundColumnListForGeneration_2D_element & inOperand) const ;

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
 
} ; // End of GALGAS_arrayControllerBoundColumnListForGeneration_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerBoundColumnListForGeneration_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                           @arrayControllerSortedColumnListForGeneration_2D_element struct                           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_arrayControllerSortedColumnListForGeneration_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_mColumnName ;
  public : GALGAS_typeKind mAttribute_mSortPropertyType ;
  public : GALGAS_string mAttribute_mObservablePropertyForSorting ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_arrayControllerSortedColumnListForGeneration_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_arrayControllerSortedColumnListForGeneration_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_arrayControllerSortedColumnListForGeneration_2D_element (const GALGAS_string & in_mColumnName,
                                                                           const GALGAS_typeKind & in_mSortPropertyType,
                                                                           const GALGAS_string & in_mObservablePropertyForSorting) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_arrayControllerSortedColumnListForGeneration_2D_element extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_arrayControllerSortedColumnListForGeneration_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                                        const class GALGAS_typeKind & inOperand1,
                                                                                                        const class GALGAS_string & inOperand2
                                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_arrayControllerSortedColumnListForGeneration_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mColumnName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mObservablePropertyForSorting (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typeKind getter_mSortPropertyType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_arrayControllerSortedColumnListForGeneration_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerSortedColumnListForGeneration_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                         @defaultValueList_2D_element struct                                         *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_defaultValueList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_abstractDefaultValue mAttribute_mDefaultValue ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_defaultValueList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_defaultValueList_2D_element (void) ;

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


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_defaultValueList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                             @unifiedTypeMap unique map                                              *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_unifiedTypeMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_unifiedTypeMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_unifiedTypeMap : public AC_GALGAS_uniqueMap {
//--------------------------------- Default constructor
  public : GALGAS_unifiedTypeMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_unifiedTypeMap (const GALGAS_unifiedTypeMap & inSource) ;
  public : GALGAS_unifiedTypeMap & operator = (const GALGAS_unifiedTypeMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_unifiedTypeMap extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_unifiedTypeMap constructor_emptyMap (LOCATION_ARGS) ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_typeKind constinArgument1,
                                                   class GALGAS_actionMap constinArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMActionMapForKey (class GALGAS_actionMap constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTypeKindForKey (class GALGAS_typeKind constinArgument0,
                                                            class GALGAS_string constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_typeKind & outArgument1,
                                                   class GALGAS_actionMap & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_actionMap getter_mActionMapForKey (const class GALGAS_string & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typeKind getter_mTypeKindForKey (const class GALGAS_string & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_unifiedTypeMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                            const GALGAS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_unifiedTypeMap ;
 
} ; // End of GALGAS_unifiedTypeMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                                            *
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_unifiedTypeMap : public cGenericAbstractEnumerator {
  public : cEnumerator_unifiedTypeMap (const GALGAS_unifiedTypeMap & inEnumeratedObject,
                                       const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_typeKind current_mTypeKind (LOCATION_ARGS) const ;
  public : class GALGAS_actionMap current_mActionMap (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMap ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                     Class for element of '@unifiedTypeMap' map                                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_unifiedTypeMap : public cMapElement {
//--- Map attributes
  public : GALGAS_typeKind mAttribute_mTypeKind ;
  public : GALGAS_actionMap mAttribute_mActionMap ;

//--- Constructor
  public : cMapElement_unifiedTypeMap (const GALGAS_lstring & inKey,
                                       const GALGAS_typeKind & in_mTypeKind,
                                       const GALGAS_actionMap & in_mActionMap
                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                         @unifiedTypeMap_2D_proxy map proxy                                          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_unifiedTypeMap_2D_proxy : public AC_GALGAS_uniqueMapProxy {
//--------------------------------- Default constructor
  public : GALGAS_unifiedTypeMap_2D_proxy (void) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_unifiedTypeMap_2D_proxy extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_unifiedTypeMap_2D_proxy constructor_null (LOCATION_ARGS) ;

  public : static class GALGAS_unifiedTypeMap_2D_proxy constructor_searchKey (const class GALGAS_unifiedTypeMap & inOperand0,
                                                                              const class GALGAS_lstring & inOperand1,
                                                                              class C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods
  public : static void class_method_makeProxy (class GALGAS_unifiedTypeMap & ioArgument0,
                                               class GALGAS_lstring constinArgument1,
                                               class GALGAS_unifiedTypeMap_2D_proxy & outArgument2
                                               COMMA_LOCATION_ARGS) ;

  public : static void class_method_makeProxyFromString (class GALGAS_unifiedTypeMap & ioArgument0,
                                                         class GALGAS_string constinArgument1,
                                                         class GALGAS_unifiedTypeMap_2D_proxy & outArgument2
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_actionMap getter_mActionMap (C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_typeKind getter_mTypeKind (C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_unifiedTypeMap_2D_proxy class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMap_2D_proxy ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                                 @typeKindList list                                                  *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_typeKindList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_typeKindList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_typeKindList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
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

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                                            *
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_typeKindList : public cGenericAbstractEnumerator {
  public : cEnumerator_typeKindList (const GALGAS_typeKindList & inEnumeratedObject,
                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_typeKind current_mType (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_typeKindList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKindList ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                           @typeKindList_2D_element struct                                           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_typeKindList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_typeKind mAttribute_mType ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_typeKindList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_typeKindList_2D_element (void) ;

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


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKindList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                      @secondaryDeclarationListWorkingList list                                      *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_secondaryDeclarationListWorkingList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_secondaryDeclarationListWorkingList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_secondaryDeclarationListWorkingList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_astDeclaration & in_mDeclaration,
                                                  const class GALGAS_secondaryPropertyList & in_mSecondaryPropertyList
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_secondaryDeclarationListWorkingList extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_secondaryDeclarationListWorkingList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_secondaryDeclarationListWorkingList constructor_listWithValue (const class GALGAS_astDeclaration & inOperand0,
                                                                                              const class GALGAS_secondaryPropertyList & inOperand1
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_secondaryDeclarationListWorkingList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_astDeclaration & inOperand0,
                                                      const class GALGAS_secondaryPropertyList & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_secondaryDeclarationListWorkingList add_operation (const GALGAS_secondaryDeclarationListWorkingList & inOperand,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_astDeclaration constinArgument0,
                                                       class GALGAS_secondaryPropertyList constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_astDeclaration & outArgument0,
                                                  class GALGAS_secondaryPropertyList & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_astDeclaration & outArgument0,
                                                 class GALGAS_secondaryPropertyList & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_astDeclaration & outArgument0,
                                                       class GALGAS_secondaryPropertyList & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_astDeclaration & outArgument0,
                                               class GALGAS_secondaryPropertyList & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_astDeclaration & outArgument0,
                                              class GALGAS_secondaryPropertyList & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_astDeclaration getter_mDeclarationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_secondaryPropertyList getter_mSecondaryPropertyListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_secondaryDeclarationListWorkingList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_secondaryDeclarationListWorkingList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_secondaryDeclarationListWorkingList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_secondaryDeclarationListWorkingList ;
 
} ; // End of GALGAS_secondaryDeclarationListWorkingList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                                            *
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_secondaryDeclarationListWorkingList : public cGenericAbstractEnumerator {
  public : cEnumerator_secondaryDeclarationListWorkingList (const GALGAS_secondaryDeclarationListWorkingList & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_astDeclaration current_mDeclaration (LOCATION_ARGS) const ;
  public : class GALGAS_secondaryPropertyList current_mSecondaryPropertyList (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_secondaryDeclarationListWorkingList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_secondaryDeclarationListWorkingList ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                               @secondaryDeclarationListWorkingList_2D_element struct                                *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_secondaryDeclarationListWorkingList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_astDeclaration mAttribute_mDeclaration ;
  public : GALGAS_secondaryPropertyList mAttribute_mSecondaryPropertyList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_secondaryDeclarationListWorkingList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_secondaryDeclarationListWorkingList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_secondaryDeclarationListWorkingList_2D_element (const GALGAS_astDeclaration & in_mDeclaration,
                                                                  const GALGAS_secondaryPropertyList & in_mSecondaryPropertyList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_secondaryDeclarationListWorkingList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_secondaryDeclarationListWorkingList_2D_element constructor_new (const class GALGAS_astDeclaration & inOperand0,
                                                                                               const class GALGAS_secondaryPropertyList & inOperand1
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_secondaryDeclarationListWorkingList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_astDeclaration getter_mDeclaration (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_secondaryPropertyList getter_mSecondaryPropertyList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_secondaryDeclarationListWorkingList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_secondaryDeclarationListWorkingList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                                @XCodeGroupList list                                                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_XCodeGroupList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_XCodeGroupList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_XCodeGroupList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
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

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                                            *
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeGroupList ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                          @XCodeGroupList_2D_element struct                                          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_XCodeGroupList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_mGroupReference ;
  public : GALGAS_string mAttribute_mGroupName ;
  public : GALGAS_string mAttribute_mGroupPath ;
  public : GALGAS_stringlist mAttribute_mChildrenRefs ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_XCodeGroupList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_XCodeGroupList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_XCodeGroupList_2D_element (void) ;

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


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeGroupList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                              @XCodeToolTargetList list                                              *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_XCodeToolTargetList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_XCodeToolTargetList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_XCodeToolTargetList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
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

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                                            *
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeToolTargetList ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                       @XCodeToolTargetList_2D_element struct                                        *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_XCodeToolTargetList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_mTargetRef ;
  public : GALGAS_string mAttribute_mTargetName ;
  public : GALGAS_string mAttribute_mProductFileReference ;
  public : GALGAS_string mAttribute_mProductFileName ;
  public : GALGAS_stringlist mAttribute_mBuildPhaseRefList ;
  public : GALGAS_string mAttribute_mBuildPhaseRef ;
  public : GALGAS_string mAttribute_mBuildConfigurationListRef ;
  public : GALGAS_stringlist mAttribute_mBuildConfigurationSettingList ;
  public : GALGAS_string mAttribute_mBuildConfigurationRef ;
  public : GALGAS_stringlist mAttribute_mFrameworksFileRefList ;
  public : GALGAS_string mAttribute_mFrameworkBuildPhaseRef ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_XCodeToolTargetList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_XCodeToolTargetList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_XCodeToolTargetList_2D_element (void) ;

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


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeToolTargetList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                              @XCodeAppTargetList list                                               *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_XCodeAppTargetList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_XCodeAppTargetList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_XCodeAppTargetList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
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

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                                            *
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeAppTargetList ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                        @XCodeAppTargetList_2D_element struct                                        *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_XCodeAppTargetList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_mTargetRef ;
  public : GALGAS_string mAttribute_mTargetName ;
  public : GALGAS_string mAttribute_mProductFileReference ;
  public : GALGAS_string mAttribute_mProductFileName ;
  public : GALGAS_stringlist mAttribute_mBuildPhaseRefList ;
  public : GALGAS_string mAttribute_mBuildPhaseRef ;
  public : GALGAS_string mAttribute_mBuildConfigurationListRef ;
  public : GALGAS_stringlist mAttribute_mBuildConfigurationSettingList ;
  public : GALGAS_string mAttribute_mBuildConfigurationRef ;
  public : GALGAS_stringlist mAttribute_mFrameworksFileRefList ;
  public : GALGAS_string mAttribute_mFrameworkBuildPhaseRef ;
  public : GALGAS__32_stringlist mAttribute_mDependentTargets ;
  public : GALGAS_string mAttribute_mResourceBuildRef ;
  public : GALGAS_stringlist mAttribute_mResourceFileBuildRefs ;
  public : GALGAS_string mAttribute_mInfoPListFile ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_XCodeAppTargetList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_XCodeAppTargetList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_XCodeAppTargetList_2D_element (void) ;

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


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeAppTargetList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                                 @BuildFileList list                                                 *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_BuildFileList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_BuildFileList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_BuildFileList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mFileReference,
                                                  const class GALGAS_string & in_mFileName,
                                                  const class GALGAS_string & in_mBuildReference
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_BuildFileList extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_BuildFileList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_BuildFileList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                        const class GALGAS_string & inOperand1,
                                                                        const class GALGAS_string & inOperand2
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_BuildFileList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_string & inOperand1,
                                                      const class GALGAS_string & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_BuildFileList add_operation (const GALGAS_BuildFileList & inOperand,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
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
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mBuildReferenceAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mFileNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mFileReferenceAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_BuildFileList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_BuildFileList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_BuildFileList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_BuildFileList ;
 
} ; // End of GALGAS_BuildFileList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                                            *
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_BuildFileList : public cGenericAbstractEnumerator {
  public : cEnumerator_BuildFileList (const GALGAS_BuildFileList & inEnumeratedObject,
                                      const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mFileReference (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mFileName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mBuildReference (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_BuildFileList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_BuildFileList ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                          @BuildFileList_2D_element struct                                           *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_BuildFileList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_mFileReference ;
  public : GALGAS_string mAttribute_mFileName ;
  public : GALGAS_string mAttribute_mBuildReference ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_BuildFileList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_BuildFileList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_BuildFileList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_BuildFileList_2D_element (const GALGAS_string & in_mFileReference,
                                            const GALGAS_string & in_mFileName,
                                            const GALGAS_string & in_mBuildReference) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_BuildFileList_2D_element extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_BuildFileList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                         const class GALGAS_string & inOperand1,
                                                                         const class GALGAS_string & inOperand2
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_BuildFileList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mBuildReference (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mFileName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mFileReference (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_BuildFileList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_BuildFileList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                    @mainXibLineDescriptorList_2D_element struct                                     *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_mainXibLineDescriptorList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_mainXibElement mAttribute_mElement ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_mainXibLineDescriptorList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_mainXibLineDescriptorList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_mainXibLineDescriptorList_2D_element (const GALGAS_mainXibElement & in_mElement) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_mainXibLineDescriptorList_2D_element extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_mainXibLineDescriptorList_2D_element constructor_new (const class GALGAS_mainXibElement & inOperand0
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_mainXibLineDescriptorList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_mainXibElement getter_mElement (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_mainXibLineDescriptorList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mainXibLineDescriptorList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                                   @bindingSpecificationListMap_2D_element struct                                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bindingSpecificationListMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_key ;
  public : GALGAS_outletClassBindingSpecificationList mAttribute_mList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_bindingSpecificationListMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_bindingSpecificationListMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_bindingSpecificationListMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_bindingSpecificationListMap_2D_element (const GALGAS_string & in_key,
                                                          const GALGAS_outletClassBindingSpecificationList & in_mList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_bindingSpecificationListMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_bindingSpecificationListMap_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                       const class GALGAS_outletClassBindingSpecificationList & inOperand1
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_bindingSpecificationListMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_key (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletClassBindingSpecificationList getter_mList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_bindingSpecificationListMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bindingSpecificationListMap_2D_element ;


//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                               Bool options                                                                          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

extern C_BoolCommandLineOption gOption_easyBindings_5F_options_latexBindingDescription ;

extern C_BoolCommandLineOption gOption_easyBindings_5F_options_outputClassDependencyGraph ;

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                               UInt options                                                                          *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                              String options                                                                         *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
//                                                                                                                     *
//                              String List options                                                                    *
//                                                                                                                     *
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------

#endif

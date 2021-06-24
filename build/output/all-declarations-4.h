#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-3.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@propertyGeneration configurationCode'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_string (*enterExtensionGetter_propertyGeneration_configurationCode) (const class cPtr_propertyGeneration * inObject,
                                                                                          const class GALGAS_bool constinArgument0,
                                                                                          class C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_configurationCode (const int32_t inClassIndex,
                                             enterExtensionGetter_propertyGeneration_configurationCode inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_configurationCode (const class cPtr_propertyGeneration * inObject,
                                                           const GALGAS_bool constin_inPreferences,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@propertyGeneration initCode'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_string (*enterExtensionGetter_propertyGeneration_initCode) (const class cPtr_propertyGeneration * inObject,
                                                                                 class C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_initCode (const int32_t inClassIndex,
                                    enterExtensionGetter_propertyGeneration_initCode inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_initCode (const class cPtr_propertyGeneration * inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration terminationCode'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_string (*enterExtensionGetter_propertyGeneration_terminationCode) (const class cPtr_propertyGeneration * inObject,
                                                                                        const class GALGAS_bool constinArgument0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;
 
//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_terminationCode (const int32_t inClassIndex,
                                           enterExtensionGetter_propertyGeneration_terminationCode inGetter) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_terminationCode (const cPtr_propertyGeneration * inObject,
                                                         const GALGAS_bool constin_inPreferences,
                                                         class C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration setupAtomicPropertyFromDictionaryCode'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_string (*enterExtensionGetter_propertyGeneration_setupAtomicPropertyFromDictionaryCode) (const class cPtr_propertyGeneration * inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) ;
 
//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_setupAtomicPropertyFromDictionaryCode (const int32_t inClassIndex,
                                                                 enterExtensionGetter_propertyGeneration_setupAtomicPropertyFromDictionaryCode inGetter) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_setupAtomicPropertyFromDictionaryCode (const cPtr_propertyGeneration * inObject,
                                                                               class C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration setupRelationshipFromDictionaryCode'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_string (*enterExtensionGetter_propertyGeneration_setupRelationshipFromDictionaryCode) (const class cPtr_propertyGeneration * inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) ;
 
//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_setupRelationshipFromDictionaryCode (const int32_t inClassIndex,
                                                               enterExtensionGetter_propertyGeneration_setupRelationshipFromDictionaryCode inGetter) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_setupRelationshipFromDictionaryCode (const cPtr_propertyGeneration * inObject,
                                                                             class C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration saveIntoDictionaryCode'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_string (*enterExtensionGetter_propertyGeneration_saveIntoDictionaryCode) (const class cPtr_propertyGeneration * inObject,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) ;
 
//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_saveIntoDictionaryCode (const int32_t inClassIndex,
                                                  enterExtensionGetter_propertyGeneration_saveIntoDictionaryCode inGetter) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_saveIntoDictionaryCode (const cPtr_propertyGeneration * inObject,
                                                                class C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration objectAccessibilityCode'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_string (*enterExtensionGetter_propertyGeneration_objectAccessibilityCode) (const class cPtr_propertyGeneration * inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;
 
//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_objectAccessibilityCode (const int32_t inClassIndex,
                                                   enterExtensionGetter_propertyGeneration_objectAccessibilityCode inGetter) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_objectAccessibilityCode (const cPtr_propertyGeneration * inObject,
                                                                 class C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration objectAccessibilityCodeForSaveOperation'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_string (*enterExtensionGetter_propertyGeneration_objectAccessibilityCodeForSaveOperation) (const class cPtr_propertyGeneration * inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) ;
 
//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_objectAccessibilityCodeForSaveOperation (const int32_t inClassIndex,
                                                                   enterExtensionGetter_propertyGeneration_objectAccessibilityCodeForSaveOperation inGetter) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_objectAccessibilityCodeForSaveOperation (const cPtr_propertyGeneration * inObject,
                                                                                 class C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration populateExplorerWindowCode'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_string (*enterExtensionGetter_propertyGeneration_populateExplorerWindowCode) (const class cPtr_propertyGeneration * inObject,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;
 
//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_populateExplorerWindowCode (const int32_t inClassIndex,
                                                      enterExtensionGetter_propertyGeneration_populateExplorerWindowCode inGetter) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_populateExplorerWindowCode (const cPtr_propertyGeneration * inObject,
                                                                    class C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration clearObjectExplorerCode'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_string (*enterExtensionGetter_propertyGeneration_clearObjectExplorerCode) (const class cPtr_propertyGeneration * inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;
 
//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_clearObjectExplorerCode (const int32_t inClassIndex,
                                                   enterExtensionGetter_propertyGeneration_clearObjectExplorerCode inGetter) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_clearObjectExplorerCode (const cPtr_propertyGeneration * inObject,
                                                                 class C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration resetToManyRelationships'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_string (*enterExtensionGetter_propertyGeneration_resetToManyRelationships) (const class cPtr_propertyGeneration * inObject,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) ;
 
//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_resetToManyRelationships (const int32_t inClassIndex,
                                                    enterExtensionGetter_propertyGeneration_resetToManyRelationships inGetter) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_resetToManyRelationships (const cPtr_propertyGeneration * inObject,
                                                                  class C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @transientExternTypeList list
//
//----------------------------------------------------------------------------------------------------------------------

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

  public : VIRTUAL_IN_DEBUG void setter_setMIsClassAtIndex (class GALGAS_bool constinArgument0,
                                                            class GALGAS_uint constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTypeNameAtIndex (class GALGAS_string constinArgument0,
                                                             class GALGAS_uint constinArgument1,
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


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_transientExternTypeList ;
 
} ; // End of GALGAS_transientExternTypeList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_transientExternTypeList : public cGenericAbstractEnumerator {
  public : cEnumerator_transientExternTypeList (const GALGAS_transientExternTypeList & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mTypeName (LOCATION_ARGS) const ;
  public : class GALGAS_bool current_mIsClass (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_transientExternTypeList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientExternTypeList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @transientExternTypeList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

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


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_transientExternTypeList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientExternTypeList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractFileGeneration generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_abstractFileGeneration_generateCode) (const class cPtr_abstractFileGeneration * inObject,
                                                                              const class GALGAS_string constinArgument0,
                                                                              class GALGAS_stringset & ioArgument1,
                                                                              class C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_generateCode (const int32_t inClassIndex,
                                        extensionMethodSignature_abstractFileGeneration_generateCode inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_generateCode (const class cPtr_abstractFileGeneration * inObject,
                                       const GALGAS_string constin_inOutputDirectory,
                                       GALGAS_stringset & io_ioGeneratedFileSet,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @fileGenerationList list
//
//----------------------------------------------------------------------------------------------------------------------

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

  public : VIRTUAL_IN_DEBUG void setter_setMFileGenerationAtIndex (class GALGAS_abstractFileGeneration constinArgument0,
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


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_fileGenerationList ;
 
} ; // End of GALGAS_fileGenerationList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_fileGenerationList : public cGenericAbstractEnumerator {
  public : cEnumerator_fileGenerationList (const GALGAS_fileGenerationList & inEnumeratedObject,
                                           const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_abstractFileGeneration current_mFileGeneration (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_fileGenerationList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fileGenerationList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @fileGenerationList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

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


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_fileGenerationList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fileGenerationList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @XCodeGroupList list
//
//----------------------------------------------------------------------------------------------------------------------

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

  public : VIRTUAL_IN_DEBUG void setter_setMChildrenRefsAtIndex (class GALGAS_stringlist constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMGroupNameAtIndex (class GALGAS_string constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMGroupPathAtIndex (class GALGAS_string constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMGroupReferenceAtIndex (class GALGAS_string constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
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


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_XCodeGroupList ;
 
} ; // End of GALGAS_XCodeGroupList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
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
//
// Phase 1: @XCodeGroupList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

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


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_XCodeGroupList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeGroupList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @XCodeToolTargetList list
//
//----------------------------------------------------------------------------------------------------------------------

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

  public : VIRTUAL_IN_DEBUG void setter_setMBuildConfigurationListRefAtIndex (class GALGAS_string constinArgument0,
                                                                              class GALGAS_uint constinArgument1,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMBuildConfigurationRefAtIndex (class GALGAS_string constinArgument0,
                                                                          class GALGAS_uint constinArgument1,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMBuildConfigurationSettingListAtIndex (class GALGAS_stringlist constinArgument0,
                                                                                  class GALGAS_uint constinArgument1,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMBuildPhaseRefAtIndex (class GALGAS_string constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMBuildPhaseRefListAtIndex (class GALGAS_stringlist constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMFrameworkBuildPhaseRefAtIndex (class GALGAS_string constinArgument0,
                                                                           class GALGAS_uint constinArgument1,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMFrameworksFileRefListAtIndex (class GALGAS_stringlist constinArgument0,
                                                                          class GALGAS_uint constinArgument1,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMProductFileNameAtIndex (class GALGAS_string constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMProductFileReferenceAtIndex (class GALGAS_string constinArgument0,
                                                                         class GALGAS_uint constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTargetNameAtIndex (class GALGAS_string constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTargetRefAtIndex (class GALGAS_string constinArgument0,
                                                              class GALGAS_uint constinArgument1,
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


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_XCodeToolTargetList ;
 
} ; // End of GALGAS_XCodeToolTargetList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
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
//
// Phase 1: @XCodeToolTargetList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

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


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_XCodeToolTargetList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeToolTargetList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @XCodeAppTargetList list
//
//----------------------------------------------------------------------------------------------------------------------

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

  public : VIRTUAL_IN_DEBUG void setter_setMBuildConfigurationListRefAtIndex (class GALGAS_string constinArgument0,
                                                                              class GALGAS_uint constinArgument1,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMBuildConfigurationRefAtIndex (class GALGAS_string constinArgument0,
                                                                          class GALGAS_uint constinArgument1,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMBuildConfigurationSettingListAtIndex (class GALGAS_stringlist constinArgument0,
                                                                                  class GALGAS_uint constinArgument1,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMBuildPhaseRefAtIndex (class GALGAS_string constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMBuildPhaseRefListAtIndex (class GALGAS_stringlist constinArgument0,
                                                                      class GALGAS_uint constinArgument1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMDependentTargetsAtIndex (class GALGAS__32_stringlist constinArgument0,
                                                                     class GALGAS_uint constinArgument1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMFrameworkBuildPhaseRefAtIndex (class GALGAS_string constinArgument0,
                                                                           class GALGAS_uint constinArgument1,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMFrameworksFileRefListAtIndex (class GALGAS_stringlist constinArgument0,
                                                                          class GALGAS_uint constinArgument1,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInfoPListFileAtIndex (class GALGAS_string constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMProductFileNameAtIndex (class GALGAS_string constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMProductFileReferenceAtIndex (class GALGAS_string constinArgument0,
                                                                         class GALGAS_uint constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMResourceBuildRefAtIndex (class GALGAS_string constinArgument0,
                                                                     class GALGAS_uint constinArgument1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMResourceFileBuildRefsAtIndex (class GALGAS_stringlist constinArgument0,
                                                                          class GALGAS_uint constinArgument1,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTargetNameAtIndex (class GALGAS_string constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTargetRefAtIndex (class GALGAS_string constinArgument0,
                                                              class GALGAS_uint constinArgument1,
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


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_XCodeAppTargetList ;
 
} ; // End of GALGAS_XCodeAppTargetList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
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
//
// Phase 1: @XCodeAppTargetList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

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


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_XCodeAppTargetList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeAppTargetList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @BuildFileList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_BuildFileList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_BuildFileList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_BuildFileList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
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
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_BuildFileList_2D_element inArgument0,
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

  public : VIRTUAL_IN_DEBUG void setter_setMBuildReferenceAtIndex (class GALGAS_string constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMFileNameAtIndex (class GALGAS_string constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMFileReferenceAtIndex (class GALGAS_string constinArgument0,
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


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_BuildFileList ;
 
} ; // End of GALGAS_BuildFileList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
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
//
// Phase 1: @BuildFileList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_BuildFileList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_string mProperty_mFileReference ;

  public : GALGAS_string mProperty_mFileName ;

  public : GALGAS_string mProperty_mBuildReference ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_BuildFileList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_BuildFileList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_BuildFileList_2D_element (void) ;

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


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_BuildFileList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_BuildFileList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                            Phase 1: @mainXibElement enum                                            *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_mainXibElement : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_mainXibElement (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_text,
    kEnum_outlet
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
  public : static GALGAS_mainXibElement extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_mainXibElement constructor_outlet (const class GALGAS_lstring & inOperand0,
                                                                  const class GALGAS_lstring & inOperand1
                                                                  COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_mainXibElement constructor_text (const class GALGAS_lstring & inOperand0
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_mainXibElement & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_outlet (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_text (class GALGAS_lstring & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isOutlet (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isText (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public : VIRTUAL_IN_DEBUG bool optional_outlet (class GALGAS_lstring & outOperand0,
                                                  class GALGAS_lstring & outOperand1) const ;

  public : VIRTUAL_IN_DEBUG bool optional_text (class GALGAS_lstring & outOperand0) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_mainXibElement class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mainXibElement ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @mainXibElement enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_mainXibElement_text : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_mainXibElement_text (const GALGAS_lstring & inAssociatedValue0
                                                      COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_mainXibElement_text (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_mainXibElement_outlet : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;
  public : const GALGAS_lstring mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_mainXibElement_outlet (const GALGAS_lstring & inAssociatedValue0,
                                                        const GALGAS_lstring & inAssociatedValue1
                                                        COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_mainXibElement_outlet (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @mainXibLineDescriptorList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_mainXibLineDescriptorList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_mainXibElement mProperty_mElement ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_mainXibLineDescriptorList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_mainXibLineDescriptorList_2D_element (void) ;

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


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_mainXibLineDescriptorList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mainXibLineDescriptorList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@mainXibDescriptorList generateCode' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_generateCode (const class GALGAS_mainXibDescriptorList & inObject,
                                                  class C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Parser class 'easyBindings_syntax' declaration
//
//----------------------------------------------------------------------------------------------------------------------

class cParser_easyBindings_5F_syntax {
//--- Virtual destructor
  public : virtual ~ cParser_easyBindings_5F_syntax (void) {}

//--- Non terminal declarations
  protected : virtual void nt_action_5F_declaration_ (class GALGAS_lstringlist & ioArgument0,
                                                      class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_action_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_auto_5F_layout_5F_func_5F_call_5F_list_ (class GALGAS_astAutoLayoutViewFunctionCallList & outArgument0,
                                                                       class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_auto_5F_layout_5F_func_5F_call_5F_list_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_auto_5F_layout_5F_view_5F_binding_5F_specification_ (const class GALGAS_lstring constinArgument0,
                                                                                   class GALGAS_autoLayoutViewClassBindingSpecificationList & ioArgument1,
                                                                                   class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_auto_5F_layout_5F_view_5F_binding_5F_specification_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_autolayout_5F_class_5F_declaration_ (class GALGAS_astDeclarationStruct & ioArgument0,
                                                                   class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_autolayout_5F_class_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_autolayout_5F_formal_5F_parameter_5F_list_ (const class GALGAS_lstring constinArgument0,
                                                                          class GALGAS_autoLayoutClassParameterList & outArgument1,
                                                                          class GALGAS_lstring & outArgument2,
                                                                          class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_autolayout_5F_formal_5F_parameter_5F_list_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_binding_5F_option_5F_list_ (class GALGAS_bindingOptionList & outArgument0,
                                                          class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_binding_5F_option_5F_list_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_booleanMultipleBindingComparison_ (class GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                 class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_booleanMultipleBindingComparison_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_booleanMultipleBindingExpression_ (class GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                 class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_booleanMultipleBindingExpression_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_booleanMultipleBindingOperand_ (class GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                              class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_booleanMultipleBindingOperand_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_booleanMultipleBindingTerm_ (class GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                           class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_booleanMultipleBindingTerm_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_class_5F_declaration_ (class GALGAS_astDeclarationStruct & ioArgument0,
                                                     class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_class_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_column_5F_bindings_ (class GALGAS_tableViewColumnBindingAST & outArgument0,
                                                   class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_column_5F_bindings_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_computed_5F_view_5F_instruction_ (class GALGAS_astComputedViewInstruction & outArgument0,
                                                                class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_computed_5F_view_5F_instruction_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_controller_5F_declaration_ (const class GALGAS_lstring constinArgument0,
                                                          const class GALGAS_lstring constinArgument1,
                                                          class GALGAS_arrayControllerBindingListAST & ioArgument2,
                                                          class GALGAS_astDeclarationStruct & ioArgument3,
                                                          class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_controller_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_document_5F_declaration_ (class GALGAS_astDeclarationStruct & ioArgument0,
                                                        class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_document_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_entity_5F_declaration_ (class GALGAS_astDeclarationStruct & ioArgument0,
                                                      class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_entity_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_enum_5F_declaration_ (class GALGAS_astDeclarationStruct & ioArgument0,
                                                    class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_enum_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_enum_5F_function_5F_declaration_ (class GALGAS_astDeclarationStruct & ioArgument0,
                                                                class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_enum_5F_function_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_explicit_5F_value_ (class GALGAS_abstractDefaultValue & outArgument0,
                                                  class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_explicit_5F_value_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_extern_5F_swift_5F_delegate_ (class GALGAS_externSwiftDelegateList & ioArgument0,
                                                            class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_extern_5F_swift_5F_delegate_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_extern_5F_swift_5F_func_ (class GALGAS_externSwiftFunctionList & ioArgument0,
                                                        class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_extern_5F_swift_5F_func_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_graphviz_5F_declaration_ (class GALGAS_astDeclarationStruct & ioArgument0,
                                                        class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_graphviz_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_main_5F_xib_ (class GALGAS_mainXibDescriptorList & ioArgument0,
                                            class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_main_5F_xib_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_main_5F_xib_5F_line_ (class GALGAS_mainXibLineDescriptorList & outArgument0,
                                                    class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_main_5F_xib_5F_line_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_observable_5F_property_ (class GALGAS_observablePropertyAST & outArgument0,
                                                       class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_observable_5F_property_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_outlet_5F_binding_ (class GALGAS_tableValueBinding & outArgument0,
                                                  class GALGAS_runActionDescriptor & outArgument1,
                                                  class GALGAS_multipleBindingDescriptor & outArgument2,
                                                  class GALGAS_multipleBindingDescriptor & outArgument3,
                                                  class GALGAS_graphicController & outArgument4,
                                                  class GALGAS_regularBindingList & outArgument5,
                                                  class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_outlet_5F_binding_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_outlet_5F_binding_5F_specification_ (class GALGAS_outletClassBindingSpecificationList & ioArgument0,
                                                                   class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_outlet_5F_binding_5F_specification_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_outlet_5F_class_5F_declaration_ (class GALGAS_astDeclarationStruct & ioArgument0,
                                                               class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_outlet_5F_class_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_outlet_5F_declaration_ (class GALGAS_outletDeclarationList & ioArgument0,
                                                      class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_outlet_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_preferences_5F_declaration_ (class GALGAS_astDeclarationStruct & ioArgument0,
                                                           class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_preferences_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_simple_5F_stored_5F_declaration_ (const class GALGAS_lstring constinArgument0,
                                                                class GALGAS_simpleStoredPropertyList & ioArgument1,
                                                                class GALGAS_stringset & ioArgument2,
                                                                class GALGAS_astDeclarationStruct & ioArgument3,
                                                                class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_simple_5F_stored_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_stack_5F_view_5F_declaration_ (class GALGAS_astViewDeclarationList & ioArgument0,
                                                             class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_stack_5F_view_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_ (class GALGAS_astDeclarationStruct & ioArgument0,
                                                class GALGAS_location & outArgument1,
                                                class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_toMany_5F_relationship_ (const class GALGAS_lstring constinArgument0,
                                                       class GALGAS_stringset & ioArgument1,
                                                       class GALGAS_astDeclarationStruct & ioArgument2,
                                                       class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_toMany_5F_relationship_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_toOne_5F_relationship_ (const class GALGAS_lstring constinArgument0,
                                                      class GALGAS_astDeclarationStruct & ioArgument1,
                                                      class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_toOne_5F_relationship_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_transient_5F_declaration_ (const class GALGAS_lstring constinArgument0,
                                                         const class GALGAS_lstring constinArgument1,
                                                         class GALGAS_astDeclarationStruct & ioArgument2,
                                                         class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_transient_5F_declaration_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_view_5F_actual_5F_parameter_5F_list_ (class GALGAS_astAutoLayoutViewInstructionParameterList & outArgument0,
                                                                    class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_view_5F_actual_5F_parameter_5F_list_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_view_5F_instruction_ (class GALGAS_astAbstractViewInstructionDeclaration & outArgument0,
                                                    class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_view_5F_instruction_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_view_5F_instruction_5F_list_ (class GALGAS_bool inArgument0,
                                                            class GALGAS_astViewInstructionList & ioArgument1,
                                                            class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_view_5F_instruction_5F_list_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_xcode_5F_project_ (class GALGAS_lstring & ioArgument0,
                                                 class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_xcode_5F_project_parse (class C_Lexique_easyBindings_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_easyBindings_5F_syntax_start_5F_symbol_i0_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                    GALGAS_location & outArgument1,
                                                                    C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_start_5F_symbol_i0_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_extern_5F_swift_5F_delegate_i1_ (GALGAS_externSwiftDelegateList & ioArgument0,
                                                                                C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_extern_5F_swift_5F_delegate_i1_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_extern_5F_swift_5F_func_i2_ (GALGAS_externSwiftFunctionList & ioArgument0,
                                                                            C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_extern_5F_swift_5F_func_i2_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_class_5F_declaration_i3_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                         C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_class_5F_declaration_i3_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_enum_5F_declaration_i4_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                        C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_enum_5F_declaration_i4_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_enum_5F_function_5F_declaration_i5_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                                    C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_enum_5F_function_5F_declaration_i5_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_entity_5F_declaration_i6_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                          C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_entity_5F_declaration_i6_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_document_5F_declaration_i7_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                            C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_document_5F_declaration_i7_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_document_5F_declaration_i8_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                            C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_document_5F_declaration_i8_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_preferences_5F_declaration_i9_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                               C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_preferences_5F_declaration_i9_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_graphviz_5F_declaration_i10_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                             C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_graphviz_5F_declaration_i10_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i11_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                                        C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i11_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i12_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                                        C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i12_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i13_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                                        C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i13_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_autolayout_5F_formal_5F_parameter_5F_list_i14_ (const GALGAS_lstring constinArgument0,
                                                                                               GALGAS_autoLayoutClassParameterList & outArgument1,
                                                                                               GALGAS_lstring & outArgument2,
                                                                                               C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_autolayout_5F_formal_5F_parameter_5F_list_i14_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_auto_5F_layout_5F_view_5F_binding_5F_specification_i15_ (const GALGAS_lstring constinArgument0,
                                                                                                        GALGAS_autoLayoutViewClassBindingSpecificationList & ioArgument1,
                                                                                                        C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_auto_5F_layout_5F_view_5F_binding_5F_specification_i15_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i16_ (GALGAS_astViewDeclarationList & ioArgument0,
                                                                                  C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i16_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i17_ (GALGAS_astViewDeclarationList & ioArgument0,
                                                                                  C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i17_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_auto_5F_layout_5F_func_5F_call_5F_list_i18_ (GALGAS_astAutoLayoutViewFunctionCallList & outArgument0,
                                                                                            C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_auto_5F_layout_5F_func_5F_call_5F_list_i18_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i19_ (GALGAS_astViewDeclarationList & ioArgument0,
                                                                                  C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i19_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_view_5F_instruction_5F_list_i20_ (GALGAS_bool inArgument0,
                                                                                 GALGAS_astViewInstructionList & ioArgument1,
                                                                                 C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_view_5F_instruction_5F_list_i20_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_view_5F_instruction_i21_ (GALGAS_astAbstractViewInstructionDeclaration & outArgument0,
                                                                         C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_view_5F_instruction_i21_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_view_5F_instruction_i22_ (GALGAS_astAbstractViewInstructionDeclaration & outArgument0,
                                                                         C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_view_5F_instruction_i22_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_view_5F_instruction_i23_ (GALGAS_astAbstractViewInstructionDeclaration & outArgument0,
                                                                         C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_view_5F_instruction_i23_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_computed_5F_view_5F_instruction_i24_ (GALGAS_astComputedViewInstruction & outArgument0,
                                                                                     C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_computed_5F_view_5F_instruction_i24_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_view_5F_actual_5F_parameter_5F_list_i25_ (GALGAS_astAutoLayoutViewInstructionParameterList & outArgument0,
                                                                                         C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_view_5F_actual_5F_parameter_5F_list_i25_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_view_5F_instruction_i26_ (GALGAS_astAbstractViewInstructionDeclaration & outArgument0,
                                                                         C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_view_5F_instruction_i26_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_view_5F_instruction_i27_ (GALGAS_astAbstractViewInstructionDeclaration & outArgument0,
                                                                         C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_view_5F_instruction_i27_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_view_5F_instruction_i28_ (GALGAS_astAbstractViewInstructionDeclaration & outArgument0,
                                                                         C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_view_5F_instruction_i28_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i29_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                                    C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i29_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_outlet_5F_binding_5F_specification_i30_ (GALGAS_outletClassBindingSpecificationList & ioArgument0,
                                                                                        C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_outlet_5F_binding_5F_specification_i30_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_outlet_5F_declaration_i31_ (GALGAS_outletDeclarationList & ioArgument0,
                                                                           C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_outlet_5F_declaration_i31_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_outlet_5F_binding_i32_ (GALGAS_tableValueBinding & outArgument0,
                                                                       GALGAS_runActionDescriptor & outArgument1,
                                                                       GALGAS_multipleBindingDescriptor & outArgument2,
                                                                       GALGAS_multipleBindingDescriptor & outArgument3,
                                                                       GALGAS_graphicController & outArgument4,
                                                                       GALGAS_regularBindingList & outArgument5,
                                                                       C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_outlet_5F_binding_i32_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_observable_5F_property_i33_ (GALGAS_observablePropertyAST & outArgument0,
                                                                            C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_observable_5F_property_i33_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_transient_5F_declaration_i34_ (const GALGAS_lstring constinArgument0,
                                                                              const GALGAS_lstring constinArgument1,
                                                                              GALGAS_astDeclarationStruct & ioArgument2,
                                                                              C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_transient_5F_declaration_i34_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_transient_5F_declaration_i35_ (const GALGAS_lstring constinArgument0,
                                                                              const GALGAS_lstring constinArgument1,
                                                                              GALGAS_astDeclarationStruct & ioArgument2,
                                                                              C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_transient_5F_declaration_i35_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_transient_5F_declaration_i36_ (const GALGAS_lstring constinArgument0,
                                                                              const GALGAS_lstring constinArgument1,
                                                                              GALGAS_astDeclarationStruct & ioArgument2,
                                                                              C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_transient_5F_declaration_i36_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_controller_5F_declaration_i37_ (const GALGAS_lstring constinArgument0,
                                                                               const GALGAS_lstring constinArgument1,
                                                                               GALGAS_arrayControllerBindingListAST & ioArgument2,
                                                                               GALGAS_astDeclarationStruct & ioArgument3,
                                                                               C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_controller_5F_declaration_i37_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i38_ (const GALGAS_lstring constinArgument0,
                                                                                     GALGAS_simpleStoredPropertyList & ioArgument1,
                                                                                     GALGAS_stringset & ioArgument2,
                                                                                     GALGAS_astDeclarationStruct & ioArgument3,
                                                                                     C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i38_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_toOne_5F_relationship_i39_ (const GALGAS_lstring constinArgument0,
                                                                           GALGAS_astDeclarationStruct & ioArgument1,
                                                                           C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_toOne_5F_relationship_i39_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_toMany_5F_relationship_i40_ (const GALGAS_lstring constinArgument0,
                                                                            GALGAS_stringset & ioArgument1,
                                                                            GALGAS_astDeclarationStruct & ioArgument2,
                                                                            C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_toMany_5F_relationship_i40_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_action_5F_declaration_i41_ (GALGAS_lstringlist & ioArgument0,
                                                                           C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_action_5F_declaration_i41_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i42_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                      C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i42_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i43_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                      C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i43_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i44_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i44_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i45_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                   C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i45_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i46_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                   C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i46_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i47_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                   C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i47_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i48_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                                                   C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i48_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i49_ (GALGAS_bindingOptionList & outArgument0,
                                                                               C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i49_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_controller_5F_declaration_i50_ (const GALGAS_lstring constinArgument0,
                                                                               const GALGAS_lstring constinArgument1,
                                                                               GALGAS_arrayControllerBindingListAST & ioArgument2,
                                                                               GALGAS_astDeclarationStruct & ioArgument3,
                                                                               C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_controller_5F_declaration_i50_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_controller_5F_declaration_i51_ (const GALGAS_lstring constinArgument0,
                                                                               const GALGAS_lstring constinArgument1,
                                                                               GALGAS_arrayControllerBindingListAST & ioArgument2,
                                                                               GALGAS_astDeclarationStruct & ioArgument3,
                                                                               C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_controller_5F_declaration_i51_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_column_5F_bindings_i52_ (GALGAS_tableViewColumnBindingAST & outArgument0,
                                                                        C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_column_5F_bindings_i52_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_controller_5F_declaration_i53_ (const GALGAS_lstring constinArgument0,
                                                                               const GALGAS_lstring constinArgument1,
                                                                               GALGAS_arrayControllerBindingListAST & ioArgument2,
                                                                               GALGAS_astDeclarationStruct & ioArgument3,
                                                                               C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_controller_5F_declaration_i53_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_explicit_5F_value_i54_ (GALGAS_abstractDefaultValue & outArgument0,
                                                                       C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_explicit_5F_value_i54_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_xcode_5F_project_i55_ (GALGAS_lstring & ioArgument0,
                                                                      C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_xcode_5F_project_i55_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_main_5F_xib_i56_ (GALGAS_mainXibDescriptorList & ioArgument0,
                                                                 C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_main_5F_xib_i56_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i57_ (GALGAS_mainXibLineDescriptorList & outArgument0,
                                                                         C_Lexique_easyBindings_5F_lexique * inLexique) ;

  protected : void rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i57_parse (C_Lexique_easyBindings_5F_lexique * inLexique) ;



//--- Select methods
  protected : virtual int32_t select_easyBindings_5F_syntax_0 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_1 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_2 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_3 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_4 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_5 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_6 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_7 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_8 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_9 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_10 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_11 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_12 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_13 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_14 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_15 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_16 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_17 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_18 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_19 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_20 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_21 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_22 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_23 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_24 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_25 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_26 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_27 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_28 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_29 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_30 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_31 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_32 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_33 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_34 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_35 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_36 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_37 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_38 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_39 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_40 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_41 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_42 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_43 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_44 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_45 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_46 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_47 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_48 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_49 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_50 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_51 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_52 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_53 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_54 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_55 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_56 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_57 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_58 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_59 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_60 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_61 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_62 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_63 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_64 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_65 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_66 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_67 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_68 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_69 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_70 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_71 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_72 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_73 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_74 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_75 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_76 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_77 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_78 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_79 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_80 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_81 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_82 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_83 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_84 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_85 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_86 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_87 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_88 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_89 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_90 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_91 (C_Lexique_easyBindings_5F_lexique *) = 0 ;

  protected : virtual int32_t select_easyBindings_5F_syntax_92 (C_Lexique_easyBindings_5F_lexique *) = 0 ;


} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @arrayControllerDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_arrayControllerDeclarationAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public : GALGAS_arrayControllerDeclarationAST (void) ;

//---
  public : inline const class cPtr_arrayControllerDeclarationAST * ptr (void) const { return (const cPtr_arrayControllerDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_arrayControllerDeclarationAST (const cPtr_arrayControllerDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_arrayControllerDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_arrayControllerDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_lstring & inOperand1,
                                                                              const class GALGAS_arrayControllerBoundModelAST & inOperand2,
                                                                              const class GALGAS_lstring & inOperand3
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_arrayControllerDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMControllerName (class GALGAS_lstring inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMModel (class GALGAS_arrayControllerBoundModelAST inArgument0
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMToManyPropertyName (class GALGAS_lstring inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mControllerName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerBoundModelAST getter_mModel (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mToManyPropertyName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_arrayControllerDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @arrayControllerDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_arrayControllerDeclarationAST : public cPtr_abstractDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mControllerName ;
  public : GALGAS_arrayControllerBoundModelAST mProperty_mModel ;
  public : GALGAS_lstring mProperty_mToManyPropertyName ;

//--- Constructor
  public : cPtr_arrayControllerDeclarationAST (const GALGAS_lstring & in_mClassName,
                                               const GALGAS_lstring & in_mControllerName,
                                               const GALGAS_arrayControllerBoundModelAST & in_mModel,
                                               const GALGAS_lstring & in_mToManyPropertyName
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mControllerName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMControllerName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_arrayControllerBoundModelAST getter_mModel (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMModel (GALGAS_arrayControllerBoundModelAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mToManyPropertyName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMToManyPropertyName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astComputedHorizontalViewDeclaration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astComputedHorizontalViewDeclaration : public GALGAS_astAbstractViewDeclaration {
//--- Constructor
  public : GALGAS_astComputedHorizontalViewDeclaration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_astComputedHorizontalViewDeclaration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_astComputedHorizontalViewDeclaration * ptr (void) const { return (const cPtr_astComputedHorizontalViewDeclaration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_astComputedHorizontalViewDeclaration (const cPtr_astComputedHorizontalViewDeclaration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_astComputedHorizontalViewDeclaration extractObject (const GALGAS_object & inObject,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_astComputedHorizontalViewDeclaration constructor_new (const class GALGAS_astAutoLayoutViewFunctionCallList & inOperand0,
                                                                                     const class GALGAS_astViewInstructionList & inOperand1
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_astComputedHorizontalViewDeclaration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMFunctionCallList (class GALGAS_astAutoLayoutViewFunctionCallList inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInstructionList (class GALGAS_astViewInstructionList inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutViewFunctionCallList getter_mFunctionCallList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_astViewInstructionList getter_mInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astComputedHorizontalViewDeclaration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astComputedHorizontalViewDeclaration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @astComputedHorizontalViewDeclaration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_astComputedHorizontalViewDeclaration : public cPtr_astAbstractViewDeclaration {
//--- Attributes
  public : GALGAS_astAutoLayoutViewFunctionCallList mProperty_mFunctionCallList ;
  public : GALGAS_astViewInstructionList mProperty_mInstructionList ;

//--- Constructor
  public : cPtr_astComputedHorizontalViewDeclaration (const GALGAS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                      const GALGAS_astViewInstructionList & in_mInstructionList
                                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_astAutoLayoutViewFunctionCallList getter_mFunctionCallList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMFunctionCallList (GALGAS_astAutoLayoutViewFunctionCallList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_astViewInstructionList getter_mInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMInstructionList (GALGAS_astViewInstructionList inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @astComputedViewInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_astComputedViewInstruction : public cPtr_astAbstractViewInstructionDeclaration {
//--- Attributes
  public : GALGAS_lstring mProperty_mAutoLayoutViewClassName ;
  public : GALGAS_astAutoLayoutViewInstructionParameterList mProperty_mParameterList ;
  public : GALGAS_astAutoLayoutViewFunctionCallList mProperty_mFunctionCallList ;
  public : GALGAS_tableValueBinding mProperty_mTableValueBinding ;
  public : GALGAS_runActionDescriptor mProperty_mRunActionDescriptor ;
  public : GALGAS_multipleBindingDescriptor mProperty_mEnabledBindingDescriptor ;
  public : GALGAS_multipleBindingDescriptor mProperty_mHiddenBindingDescriptor ;
  public : GALGAS_graphicController mProperty_mGraphicController ;
  public : GALGAS_regularBindingList mProperty_mRegularBindingList ;
  public : GALGAS_lstring mProperty_mConfiguratorName ;
  public : GALGAS_lstring mProperty_mOutletName ;

//--- Constructor
  public : cPtr_astComputedViewInstruction (const GALGAS_lstring & in_mAutoLayoutViewClassName,
                                            const GALGAS_astAutoLayoutViewInstructionParameterList & in_mParameterList,
                                            const GALGAS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                            const GALGAS_tableValueBinding & in_mTableValueBinding,
                                            const GALGAS_runActionDescriptor & in_mRunActionDescriptor,
                                            const GALGAS_multipleBindingDescriptor & in_mEnabledBindingDescriptor,
                                            const GALGAS_multipleBindingDescriptor & in_mHiddenBindingDescriptor,
                                            const GALGAS_graphicController & in_mGraphicController,
                                            const GALGAS_regularBindingList & in_mRegularBindingList,
                                            const GALGAS_lstring & in_mConfiguratorName,
                                            const GALGAS_lstring & in_mOutletName
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mAutoLayoutViewClassName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMAutoLayoutViewClassName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_astAutoLayoutViewInstructionParameterList getter_mParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMParameterList (GALGAS_astAutoLayoutViewInstructionParameterList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_astAutoLayoutViewFunctionCallList getter_mFunctionCallList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMFunctionCallList (GALGAS_astAutoLayoutViewFunctionCallList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_tableValueBinding getter_mTableValueBinding (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTableValueBinding (GALGAS_tableValueBinding inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_runActionDescriptor getter_mRunActionDescriptor (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRunActionDescriptor (GALGAS_runActionDescriptor inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_multipleBindingDescriptor getter_mEnabledBindingDescriptor (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMEnabledBindingDescriptor (GALGAS_multipleBindingDescriptor inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_multipleBindingDescriptor getter_mHiddenBindingDescriptor (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMHiddenBindingDescriptor (GALGAS_multipleBindingDescriptor inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_graphicController getter_mGraphicController (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMGraphicController (GALGAS_graphicController inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_regularBindingList getter_mRegularBindingList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRegularBindingList (GALGAS_regularBindingList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mConfiguratorName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMConfiguratorName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mOutletName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOutletName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astHorizontalStackViewDeclaration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astHorizontalStackViewDeclaration : public GALGAS_astAbstractViewDeclaration {
//--- Constructor
  public : GALGAS_astHorizontalStackViewDeclaration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_astHorizontalStackViewDeclaration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_astHorizontalStackViewDeclaration * ptr (void) const { return (const cPtr_astHorizontalStackViewDeclaration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_astHorizontalStackViewDeclaration (const cPtr_astHorizontalStackViewDeclaration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_astHorizontalStackViewDeclaration extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_astHorizontalStackViewDeclaration constructor_new (const class GALGAS_astAutoLayoutViewFunctionCallList & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_astHorizontalStackViewDeclaration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMFunctionCallList (class GALGAS_astAutoLayoutViewFunctionCallList inArgument0
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutViewFunctionCallList getter_mFunctionCallList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astHorizontalStackViewDeclaration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astHorizontalStackViewDeclaration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @astHorizontalStackViewDeclaration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_astHorizontalStackViewDeclaration : public cPtr_astAbstractViewDeclaration {
//--- Attributes
  public : GALGAS_astAutoLayoutViewFunctionCallList mProperty_mFunctionCallList ;

//--- Constructor
  public : cPtr_astHorizontalStackViewDeclaration (const GALGAS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_astAutoLayoutViewFunctionCallList getter_mFunctionCallList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMFunctionCallList (GALGAS_astAutoLayoutViewFunctionCallList inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astLocalViewInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astLocalViewInstruction : public GALGAS_astAbstractViewInstructionDeclaration {
//--- Constructor
  public : GALGAS_astLocalViewInstruction (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_astLocalViewInstruction constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_astLocalViewInstruction * ptr (void) const { return (const cPtr_astLocalViewInstruction *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_astLocalViewInstruction (const cPtr_astLocalViewInstruction * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_astLocalViewInstruction extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_astLocalViewInstruction constructor_new (const class GALGAS_lstring & inOperand0
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_astLocalViewInstruction & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLocalView (class GALGAS_lstring inArgument0
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLocalView (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astLocalViewInstruction class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astLocalViewInstruction ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @astLocalViewInstruction class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_astLocalViewInstruction : public cPtr_astAbstractViewInstructionDeclaration {
//--- Attributes
  public : GALGAS_lstring mProperty_mLocalView ;

//--- Constructor
  public : cPtr_astLocalViewInstruction (const GALGAS_lstring & in_mLocalView
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mLocalView (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLocalView (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astStackViewReferenceInstructionDeclaration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astStackViewReferenceInstructionDeclaration : public GALGAS_astAbstractViewInstructionDeclaration {
//--- Constructor
  public : GALGAS_astStackViewReferenceInstructionDeclaration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_astStackViewReferenceInstructionDeclaration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_astStackViewReferenceInstructionDeclaration * ptr (void) const { return (const cPtr_astStackViewReferenceInstructionDeclaration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_astStackViewReferenceInstructionDeclaration (const cPtr_astStackViewReferenceInstructionDeclaration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_astStackViewReferenceInstructionDeclaration extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_astStackViewReferenceInstructionDeclaration constructor_new (const class GALGAS_lstring & inOperand0
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_astStackViewReferenceInstructionDeclaration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMStackViewName (class GALGAS_lstring inArgument0
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mStackViewName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astStackViewReferenceInstructionDeclaration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astStackViewReferenceInstructionDeclaration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @astStackViewReferenceInstructionDeclaration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_astStackViewReferenceInstructionDeclaration : public cPtr_astAbstractViewInstructionDeclaration {
//--- Attributes
  public : GALGAS_lstring mProperty_mStackViewName ;

//--- Constructor
  public : cPtr_astStackViewReferenceInstructionDeclaration (const GALGAS_lstring & in_mStackViewName
                                                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mStackViewName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMStackViewName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @atomicPropertyDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_atomicPropertyDeclarationAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public : GALGAS_atomicPropertyDeclarationAST (void) ;

//---
  public : inline const class cPtr_atomicPropertyDeclarationAST * ptr (void) const { return (const cPtr_atomicPropertyDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_atomicPropertyDeclarationAST (const cPtr_atomicPropertyDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_atomicPropertyDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_atomicPropertyDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_lstring & inOperand1,
                                                                             const class GALGAS_lstring & inOperand2,
                                                                             const class GALGAS_abstractDefaultValue & inOperand3,
                                                                             const class GALGAS_bool & inOperand4
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_atomicPropertyDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMDefaultValue (class GALGAS_abstractDefaultValue inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMNeedsValidation (class GALGAS_bool inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMPropertyName (class GALGAS_lstring inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMPropertyTypeName (class GALGAS_lstring inArgument0
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractDefaultValue getter_mDefaultValue (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mNeedsValidation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mPropertyName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mPropertyTypeName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_atomicPropertyDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicPropertyDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @atomicPropertyDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_atomicPropertyDeclarationAST : public cPtr_abstractDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mPropertyTypeName ;
  public : GALGAS_lstring mProperty_mPropertyName ;
  public : GALGAS_abstractDefaultValue mProperty_mDefaultValue ;
  public : GALGAS_bool mProperty_mNeedsValidation ;

//--- Constructor
  public : cPtr_atomicPropertyDeclarationAST (const GALGAS_lstring & in_mClassName,
                                              const GALGAS_lstring & in_mPropertyTypeName,
                                              const GALGAS_lstring & in_mPropertyName,
                                              const GALGAS_abstractDefaultValue & in_mDefaultValue,
                                              const GALGAS_bool & in_mNeedsValidation
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mPropertyTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMPropertyTypeName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mPropertyName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMPropertyName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_abstractDefaultValue getter_mDefaultValue (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMDefaultValue (GALGAS_abstractDefaultValue inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mNeedsValidation (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMNeedsValidation (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutDocumentDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutDocumentDeclarationAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public : GALGAS_autoLayoutDocumentDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_autoLayoutDocumentDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_autoLayoutDocumentDeclarationAST * ptr (void) const { return (const cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_autoLayoutDocumentDeclarationAST (const cPtr_autoLayoutDocumentDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_autoLayoutDocumentDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_autoLayoutDocumentDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_lstring & inOperand1,
                                                                                 const class GALGAS_lstring & inOperand2,
                                                                                 const class GALGAS_outletDeclarationList & inOperand3,
                                                                                 const class GALGAS_lstringlist & inOperand4,
                                                                                 const class GALGAS_arrayControllerBindingListAST & inOperand5,
                                                                                 const class GALGAS_astViewDeclarationList & inOperand6,
                                                                                 const class GALGAS_astAutoLayoutToolbarItemList & inOperand7,
                                                                                 const class GALGAS_string & inOperand8,
                                                                                 const class GALGAS_astAutoLayoutOutletLinkerList & inOperand9
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_autoLayoutDocumentDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMActionDeclarationList (class GALGAS_lstringlist inArgument0
                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMArrayControllerBindingListAST (class GALGAS_arrayControllerBindingListAST inArgument0
                                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMAutoLayoutToolbarItemList (class GALGAS_astAutoLayoutToolbarItemList inArgument0
                                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMCustomSuperClassName (class GALGAS_string inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMMainViewName (class GALGAS_lstring inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOutletDeclarationList (class GALGAS_outletDeclarationList inArgument0
                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOutletLinkerList (class GALGAS_astAutoLayoutOutletLinkerList inArgument0
                                                              COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRootEntityName (class GALGAS_lstring inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMViewDeclarationList (class GALGAS_astViewDeclarationList inArgument0
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mActionDeclarationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerBindingListAST getter_mArrayControllerBindingListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutToolbarItemList getter_mAutoLayoutToolbarItemList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mCustomSuperClassName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mMainViewName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletDeclarationList getter_mOutletDeclarationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutOutletLinkerList getter_mOutletLinkerList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRootEntityName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_astViewDeclarationList getter_mViewDeclarationList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutDocumentDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutDocumentDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @autoLayoutDocumentDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_autoLayoutDocumentDeclarationAST : public cPtr_abstractDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mRootEntityName ;
  public : GALGAS_lstring mProperty_mMainViewName ;
  public : GALGAS_outletDeclarationList mProperty_mOutletDeclarationList ;
  public : GALGAS_lstringlist mProperty_mActionDeclarationList ;
  public : GALGAS_arrayControllerBindingListAST mProperty_mArrayControllerBindingListAST ;
  public : GALGAS_astViewDeclarationList mProperty_mViewDeclarationList ;
  public : GALGAS_astAutoLayoutToolbarItemList mProperty_mAutoLayoutToolbarItemList ;
  public : GALGAS_string mProperty_mCustomSuperClassName ;
  public : GALGAS_astAutoLayoutOutletLinkerList mProperty_mOutletLinkerList ;

//--- Constructor
  public : cPtr_autoLayoutDocumentDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                  const GALGAS_lstring & in_mRootEntityName,
                                                  const GALGAS_lstring & in_mMainViewName,
                                                  const GALGAS_outletDeclarationList & in_mOutletDeclarationList,
                                                  const GALGAS_lstringlist & in_mActionDeclarationList,
                                                  const GALGAS_arrayControllerBindingListAST & in_mArrayControllerBindingListAST,
                                                  const GALGAS_astViewDeclarationList & in_mViewDeclarationList,
                                                  const GALGAS_astAutoLayoutToolbarItemList & in_mAutoLayoutToolbarItemList,
                                                  const GALGAS_string & in_mCustomSuperClassName,
                                                  const GALGAS_astAutoLayoutOutletLinkerList & in_mOutletLinkerList
                                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mRootEntityName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRootEntityName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mMainViewName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMMainViewName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_outletDeclarationList getter_mOutletDeclarationList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOutletDeclarationList (GALGAS_outletDeclarationList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mActionDeclarationList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMActionDeclarationList (GALGAS_lstringlist inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_arrayControllerBindingListAST getter_mArrayControllerBindingListAST (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMArrayControllerBindingListAST (GALGAS_arrayControllerBindingListAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_astViewDeclarationList getter_mViewDeclarationList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMViewDeclarationList (GALGAS_astViewDeclarationList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_astAutoLayoutToolbarItemList getter_mAutoLayoutToolbarItemList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMAutoLayoutToolbarItemList (GALGAS_astAutoLayoutToolbarItemList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mCustomSuperClassName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMCustomSuperClassName (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_astAutoLayoutOutletLinkerList getter_mOutletLinkerList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOutletLinkerList (GALGAS_astAutoLayoutOutletLinkerList inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutViewClassDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutViewClassDeclarationAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public : GALGAS_autoLayoutViewClassDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_autoLayoutViewClassDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_autoLayoutViewClassDeclarationAST * ptr (void) const { return (const cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_autoLayoutViewClassDeclarationAST (const cPtr_autoLayoutViewClassDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_autoLayoutViewClassDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_autoLayoutViewClassDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_bool & inOperand1,
                                                                                  const class GALGAS_lstring & inOperand2,
                                                                                  const class GALGAS_bool & inOperand3,
                                                                                  const class GALGAS_bool & inOperand4,
                                                                                  const class GALGAS_bool & inOperand5,
                                                                                  const class GALGAS_bool & inOperand6,
                                                                                  const class GALGAS_bool & inOperand7,
                                                                                  const class GALGAS_autoLayoutClassParameterList & inOperand8,
                                                                                  const class GALGAS_astAutoLayoutViewFunctionMap & inOperand9
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_autoLayoutViewClassDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMAutoLayoutViewFunctionMap (class GALGAS_astAutoLayoutViewFunctionMap inArgument0
                                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMHandlesGraphicControllerBinding (class GALGAS_bool inArgument0
                                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMHandlesTableValueBinding (class GALGAS_bool inArgument0
                                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMHasEnabled (class GALGAS_bool inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMHasHidden (class GALGAS_bool inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMHasRunAction (class GALGAS_bool inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMParameterList (class GALGAS_autoLayoutClassParameterList inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMSuperClassName (class GALGAS_lstring inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMUserDefined (class GALGAS_bool inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutViewFunctionMap getter_mAutoLayoutViewFunctionMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHandlesGraphicControllerBinding (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHandlesTableValueBinding (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasEnabled (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasHidden (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasRunAction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutClassParameterList getter_mParameterList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSuperClassName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mUserDefined (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutViewClassDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewClassDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @autoLayoutViewClassDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_autoLayoutViewClassDeclarationAST : public cPtr_abstractDeclarationAST {
//--- Attributes
  public : GALGAS_bool mProperty_mUserDefined ;
  public : GALGAS_lstring mProperty_mSuperClassName ;
  public : GALGAS_bool mProperty_mHasRunAction ;
  public : GALGAS_bool mProperty_mHasEnabled ;
  public : GALGAS_bool mProperty_mHandlesTableValueBinding ;
  public : GALGAS_bool mProperty_mHandlesGraphicControllerBinding ;
  public : GALGAS_bool mProperty_mHasHidden ;
  public : GALGAS_autoLayoutClassParameterList mProperty_mParameterList ;
  public : GALGAS_astAutoLayoutViewFunctionMap mProperty_mAutoLayoutViewFunctionMap ;

//--- Constructor
  public : cPtr_autoLayoutViewClassDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                   const GALGAS_bool & in_mUserDefined,
                                                   const GALGAS_lstring & in_mSuperClassName,
                                                   const GALGAS_bool & in_mHasRunAction,
                                                   const GALGAS_bool & in_mHasEnabled,
                                                   const GALGAS_bool & in_mHandlesTableValueBinding,
                                                   const GALGAS_bool & in_mHandlesGraphicControllerBinding,
                                                   const GALGAS_bool & in_mHasHidden,
                                                   const GALGAS_autoLayoutClassParameterList & in_mParameterList,
                                                   const GALGAS_astAutoLayoutViewFunctionMap & in_mAutoLayoutViewFunctionMap
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mUserDefined (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMUserDefined (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mSuperClassName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMSuperClassName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mHasRunAction (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMHasRunAction (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mHasEnabled (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMHasEnabled (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mHandlesTableValueBinding (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMHandlesTableValueBinding (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mHandlesGraphicControllerBinding (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMHandlesGraphicControllerBinding (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mHasHidden (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMHasHidden (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_autoLayoutClassParameterList getter_mParameterList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMParameterList (GALGAS_autoLayoutClassParameterList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_astAutoLayoutViewFunctionMap getter_mAutoLayoutViewFunctionMap (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMAutoLayoutViewFunctionMap (GALGAS_astAutoLayoutViewFunctionMap inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @boolAsDefaultValue class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_boolAsDefaultValue : public GALGAS_abstractDefaultValue {
//--- Constructor
  public : GALGAS_boolAsDefaultValue (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_boolAsDefaultValue constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_boolAsDefaultValue * ptr (void) const { return (const cPtr_boolAsDefaultValue *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_boolAsDefaultValue (const cPtr_boolAsDefaultValue * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_boolAsDefaultValue extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_boolAsDefaultValue constructor_new (const class GALGAS_lbool & inOperand0
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_boolAsDefaultValue & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMValue (class GALGAS_lbool inArgument0
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lbool getter_mValue (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_boolAsDefaultValue class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolAsDefaultValue ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @boolAsDefaultValue class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_boolAsDefaultValue : public cPtr_abstractDefaultValue {
//--- Attributes
  public : GALGAS_lbool mProperty_mValue ;

//--- Constructor
  public : cPtr_boolAsDefaultValue (const GALGAS_lbool & in_mValue
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lbool getter_mValue (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMValue (GALGAS_lbool inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @computedPropertyDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_computedPropertyDeclarationAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public : GALGAS_computedPropertyDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_computedPropertyDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_computedPropertyDeclarationAST * ptr (void) const { return (const cPtr_computedPropertyDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_computedPropertyDeclarationAST (const cPtr_computedPropertyDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_computedPropertyDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_computedPropertyDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_lstring & inOperand1,
                                                                               const class GALGAS_lstring & inOperand2,
                                                                               const class GALGAS_lstring & inOperand3,
                                                                               const class GALGAS_observablePropertyList & inOperand4
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_computedPropertyDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMComputedPropertyName (class GALGAS_lstring inArgument0
                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMComputedPropertyTypeName (class GALGAS_lstring inArgument0
                                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMDependencyList (class GALGAS_observablePropertyList inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRootEntityName (class GALGAS_lstring inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mComputedPropertyName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mComputedPropertyTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_observablePropertyList getter_mDependencyList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRootEntityName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_computedPropertyDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedPropertyDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @computedPropertyDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_computedPropertyDeclarationAST : public cPtr_abstractDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mRootEntityName ;
  public : GALGAS_lstring mProperty_mComputedPropertyTypeName ;
  public : GALGAS_lstring mProperty_mComputedPropertyName ;
  public : GALGAS_observablePropertyList mProperty_mDependencyList ;

//--- Constructor
  public : cPtr_computedPropertyDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                const GALGAS_lstring & in_mRootEntityName,
                                                const GALGAS_lstring & in_mComputedPropertyTypeName,
                                                const GALGAS_lstring & in_mComputedPropertyName,
                                                const GALGAS_observablePropertyList & in_mDependencyList
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mRootEntityName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRootEntityName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mComputedPropertyTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMComputedPropertyTypeName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mComputedPropertyName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMComputedPropertyName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_observablePropertyList getter_mDependencyList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMDependencyList (GALGAS_observablePropertyList inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @doubleAsDefaultValue class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_doubleAsDefaultValue : public GALGAS_abstractDefaultValue {
//--- Constructor
  public : GALGAS_doubleAsDefaultValue (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_doubleAsDefaultValue constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_doubleAsDefaultValue * ptr (void) const { return (const cPtr_doubleAsDefaultValue *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_doubleAsDefaultValue (const cPtr_doubleAsDefaultValue * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_doubleAsDefaultValue extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_doubleAsDefaultValue constructor_new (const class GALGAS_ldouble & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_doubleAsDefaultValue & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMValue (class GALGAS_ldouble inArgument0
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_ldouble getter_mValue (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_doubleAsDefaultValue class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_doubleAsDefaultValue ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @doubleAsDefaultValue class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_doubleAsDefaultValue : public cPtr_abstractDefaultValue {
//--- Attributes
  public : GALGAS_ldouble mProperty_mValue ;

//--- Constructor
  public : cPtr_doubleAsDefaultValue (const GALGAS_ldouble & in_mValue
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_ldouble getter_mValue (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMValue (GALGAS_ldouble inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @entityDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_entityDeclarationAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public : GALGAS_entityDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_entityDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_entityDeclarationAST * ptr (void) const { return (const cPtr_entityDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_entityDeclarationAST (const cPtr_entityDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_entityDeclarationAST extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_entityDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                     const class GALGAS_bool & inOperand1,
                                                                     const class GALGAS_lstring & inOperand2,
                                                                     const class GALGAS_simpleStoredPropertyList & inOperand3,
                                                                     const class GALGAS_stringset & inOperand4,
                                                                     const class GALGAS_lstringlist & inOperand5,
                                                                     const class GALGAS_lstringlist & inOperand6,
                                                                     const class GALGAS_bool & inOperand7,
                                                                     const class GALGAS_externSwiftDelegateList & inOperand8
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_entityDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMActionDeclarationList (class GALGAS_lstringlist inArgument0
                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMExternSwiftDelegateList (class GALGAS_externSwiftDelegateList inArgument0
                                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIsAbstract (class GALGAS_bool inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIsGraphicEntity (class GALGAS_bool inArgument0
                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMObsoleteEntityNames (class GALGAS_lstringlist inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMSignatureList (class GALGAS_stringset inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMSimpleStoredPropertyList (class GALGAS_simpleStoredPropertyList inArgument0
                                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMSuperEntityName (class GALGAS_lstring inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mActionDeclarationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externSwiftDelegateList getter_mExternSwiftDelegateList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsAbstract (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsGraphicEntity (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mObsoleteEntityNames (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mSignatureList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_simpleStoredPropertyList getter_mSimpleStoredPropertyList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSuperEntityName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_entityDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_entityDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @entityDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_entityDeclarationAST : public cPtr_abstractDeclarationAST {
//--- Attributes
  public : GALGAS_bool mProperty_mIsAbstract ;
  public : GALGAS_lstring mProperty_mSuperEntityName ;
  public : GALGAS_simpleStoredPropertyList mProperty_mSimpleStoredPropertyList ;
  public : GALGAS_stringset mProperty_mSignatureList ;
  public : GALGAS_lstringlist mProperty_mActionDeclarationList ;
  public : GALGAS_lstringlist mProperty_mObsoleteEntityNames ;
  public : GALGAS_bool mProperty_mIsGraphicEntity ;
  public : GALGAS_externSwiftDelegateList mProperty_mExternSwiftDelegateList ;

//--- Constructor
  public : cPtr_entityDeclarationAST (const GALGAS_lstring & in_mClassName,
                                      const GALGAS_bool & in_mIsAbstract,
                                      const GALGAS_lstring & in_mSuperEntityName,
                                      const GALGAS_simpleStoredPropertyList & in_mSimpleStoredPropertyList,
                                      const GALGAS_stringset & in_mSignatureList,
                                      const GALGAS_lstringlist & in_mActionDeclarationList,
                                      const GALGAS_lstringlist & in_mObsoleteEntityNames,
                                      const GALGAS_bool & in_mIsGraphicEntity,
                                      const GALGAS_externSwiftDelegateList & in_mExternSwiftDelegateList
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mIsAbstract (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMIsAbstract (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mSuperEntityName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMSuperEntityName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_simpleStoredPropertyList getter_mSimpleStoredPropertyList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMSimpleStoredPropertyList (GALGAS_simpleStoredPropertyList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_stringset getter_mSignatureList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMSignatureList (GALGAS_stringset inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mActionDeclarationList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMActionDeclarationList (GALGAS_lstringlist inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mObsoleteEntityNames (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMObsoleteEntityNames (GALGAS_lstringlist inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mIsGraphicEntity (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMIsGraphicEntity (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_externSwiftDelegateList getter_mExternSwiftDelegateList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMExternSwiftDelegateList (GALGAS_externSwiftDelegateList inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @enumerationDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_enumerationDeclarationAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public : GALGAS_enumerationDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_enumerationDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_enumerationDeclarationAST * ptr (void) const { return (const cPtr_enumerationDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_enumerationDeclarationAST (const cPtr_enumerationDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_enumerationDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_enumerationDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_lstringlist & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_enumerationDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMEnumConstantNameList (class GALGAS_lstringlist inArgument0
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mEnumConstantNameList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_enumerationDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumerationDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @enumerationDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_enumerationDeclarationAST : public cPtr_abstractDeclarationAST {
//--- Attributes
  public : GALGAS_lstringlist mProperty_mEnumConstantNameList ;

//--- Constructor
  public : cPtr_enumerationDeclarationAST (const GALGAS_lstring & in_mClassName,
                                           const GALGAS_lstringlist & in_mEnumConstantNameList
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mEnumConstantNameList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMEnumConstantNameList (GALGAS_lstringlist inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @identifierAsDefaultValue class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_identifierAsDefaultValue : public GALGAS_abstractDefaultValue {
//--- Constructor
  public : GALGAS_identifierAsDefaultValue (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_identifierAsDefaultValue constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_identifierAsDefaultValue * ptr (void) const { return (const cPtr_identifierAsDefaultValue *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_identifierAsDefaultValue (const cPtr_identifierAsDefaultValue * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_identifierAsDefaultValue extractObject (const GALGAS_object & inObject,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_identifierAsDefaultValue constructor_new (const class GALGAS_lstring & inOperand0
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_identifierAsDefaultValue & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMValue (class GALGAS_lstring inArgument0
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mValue (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_identifierAsDefaultValue class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_identifierAsDefaultValue ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @identifierAsDefaultValue class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_identifierAsDefaultValue : public cPtr_abstractDefaultValue {
//--- Attributes
  public : GALGAS_lstring mProperty_mValue ;

//--- Constructor
  public : cPtr_identifierAsDefaultValue (const GALGAS_lstring & in_mValue
                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mValue (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMValue (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @literalIntMultipleBindingExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_literalIntMultipleBindingExpressionAST : public GALGAS_abstractBooleanMultipleBindingExpressionAST {
//--- Constructor
  public : GALGAS_literalIntMultipleBindingExpressionAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_literalIntMultipleBindingExpressionAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_literalIntMultipleBindingExpressionAST * ptr (void) const { return (const cPtr_literalIntMultipleBindingExpressionAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_literalIntMultipleBindingExpressionAST (const cPtr_literalIntMultipleBindingExpressionAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_literalIntMultipleBindingExpressionAST extractObject (const GALGAS_object & inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_literalIntMultipleBindingExpressionAST constructor_new (const class GALGAS_luint & inOperand0
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_literalIntMultipleBindingExpressionAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMValue (class GALGAS_luint inArgument0
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mValue (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_literalIntMultipleBindingExpressionAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalIntMultipleBindingExpressionAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @literalIntMultipleBindingExpressionAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_literalIntMultipleBindingExpressionAST : public cPtr_abstractBooleanMultipleBindingExpressionAST {
//--- Attributes
  public : GALGAS_luint mProperty_mValue ;

//--- Constructor
  public : cPtr_literalIntMultipleBindingExpressionAST (const GALGAS_luint & in_mValue
                                                        COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_luint getter_mValue (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMValue (GALGAS_luint inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @outletClassDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_outletClassDeclarationAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public : GALGAS_outletClassDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_outletClassDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_outletClassDeclarationAST * ptr (void) const { return (const cPtr_outletClassDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_outletClassDeclarationAST (const cPtr_outletClassDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_outletClassDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_outletClassDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_bool & inOperand1,
                                                                          const class GALGAS_lstring & inOperand2,
                                                                          const class GALGAS_bool & inOperand3,
                                                                          const class GALGAS_bool & inOperand4,
                                                                          const class GALGAS_bool & inOperand5,
                                                                          const class GALGAS_bool & inOperand6,
                                                                          const class GALGAS_bool & inOperand7
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_outletClassDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMHandlesGraphicControllerBinding (class GALGAS_bool inArgument0
                                                                             COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMHandlesTableValueBinding (class GALGAS_bool inArgument0
                                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMHasEnabled (class GALGAS_bool inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMHasHidden (class GALGAS_bool inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMHasRunAction (class GALGAS_bool inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMSuperClassName (class GALGAS_lstring inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMUserDefined (class GALGAS_bool inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHandlesGraphicControllerBinding (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHandlesTableValueBinding (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasEnabled (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasHidden (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mHasRunAction (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSuperClassName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mUserDefined (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_outletClassDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletClassDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @outletClassDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_outletClassDeclarationAST : public cPtr_abstractDeclarationAST {
//--- Attributes
  public : GALGAS_bool mProperty_mUserDefined ;
  public : GALGAS_lstring mProperty_mSuperClassName ;
  public : GALGAS_bool mProperty_mHasRunAction ;
  public : GALGAS_bool mProperty_mHasEnabled ;
  public : GALGAS_bool mProperty_mHandlesTableValueBinding ;
  public : GALGAS_bool mProperty_mHandlesGraphicControllerBinding ;
  public : GALGAS_bool mProperty_mHasHidden ;

//--- Constructor
  public : cPtr_outletClassDeclarationAST (const GALGAS_lstring & in_mClassName,
                                           const GALGAS_bool & in_mUserDefined,
                                           const GALGAS_lstring & in_mSuperClassName,
                                           const GALGAS_bool & in_mHasRunAction,
                                           const GALGAS_bool & in_mHasEnabled,
                                           const GALGAS_bool & in_mHandlesTableValueBinding,
                                           const GALGAS_bool & in_mHandlesGraphicControllerBinding,
                                           const GALGAS_bool & in_mHasHidden
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mUserDefined (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMUserDefined (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mSuperClassName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMSuperClassName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mHasRunAction (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMHasRunAction (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mHasEnabled (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMHasEnabled (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mHandlesTableValueBinding (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMHandlesTableValueBinding (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mHandlesGraphicControllerBinding (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMHandlesGraphicControllerBinding (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mHasHidden (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMHasHidden (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @prefsAsDefaultValue class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_prefsAsDefaultValue : public GALGAS_abstractDefaultValue {
//--- Constructor
  public : GALGAS_prefsAsDefaultValue (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_prefsAsDefaultValue constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_prefsAsDefaultValue * ptr (void) const { return (const cPtr_prefsAsDefaultValue *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_prefsAsDefaultValue (const cPtr_prefsAsDefaultValue * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_prefsAsDefaultValue extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_prefsAsDefaultValue constructor_new (const class GALGAS_lstring & inOperand0
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_prefsAsDefaultValue & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMPrefPropertyName (class GALGAS_lstring inArgument0
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mPrefPropertyName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_prefsAsDefaultValue class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefsAsDefaultValue ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @prefsAsDefaultValue class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_prefsAsDefaultValue : public cPtr_abstractDefaultValue {
//--- Attributes
  public : GALGAS_lstring mProperty_mPrefPropertyName ;

//--- Constructor
  public : cPtr_prefsAsDefaultValue (const GALGAS_lstring & in_mPrefPropertyName
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mPrefPropertyName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMPrefPropertyName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @proxyDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_proxyDeclarationAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public : GALGAS_proxyDeclarationAST (void) ;

//---
  public : inline const class cPtr_proxyDeclarationAST * ptr (void) const { return (const cPtr_proxyDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_proxyDeclarationAST (const cPtr_proxyDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_proxyDeclarationAST extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_proxyDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                    const class GALGAS_proxyKind & inOperand1,
                                                                    const class GALGAS_lstring & inOperand2,
                                                                    const class GALGAS_lstring & inOperand3,
                                                                    const class GALGAS_lstring & inOperand4,
                                                                    const class GALGAS_lstring & inOperand5
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_proxyDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMPropertyName (class GALGAS_lstring inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMProxyKind (class GALGAS_proxyKind inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMProxyName (class GALGAS_lstring inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMProxyTypeName (class GALGAS_lstring inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMToOneRelationshipName (class GALGAS_lstring inArgument0
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mPropertyName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_proxyKind getter_mProxyKind (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mProxyName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mProxyTypeName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mToOneRelationshipName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_proxyDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_proxyDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @proxyDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_proxyDeclarationAST : public cPtr_abstractDeclarationAST {
//--- Attributes
  public : GALGAS_proxyKind mProperty_mProxyKind ;
  public : GALGAS_lstring mProperty_mProxyTypeName ;
  public : GALGAS_lstring mProperty_mProxyName ;
  public : GALGAS_lstring mProperty_mToOneRelationshipName ;
  public : GALGAS_lstring mProperty_mPropertyName ;

//--- Constructor
  public : cPtr_proxyDeclarationAST (const GALGAS_lstring & in_mClassName,
                                     const GALGAS_proxyKind & in_mProxyKind,
                                     const GALGAS_lstring & in_mProxyTypeName,
                                     const GALGAS_lstring & in_mProxyName,
                                     const GALGAS_lstring & in_mToOneRelationshipName,
                                     const GALGAS_lstring & in_mPropertyName
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_proxyKind getter_mProxyKind (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMProxyKind (GALGAS_proxyKind inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mProxyTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMProxyTypeName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mProxyName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMProxyName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mToOneRelationshipName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMToOneRelationshipName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mPropertyName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMPropertyName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @selectionControllerDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_selectionControllerDeclarationAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public : GALGAS_selectionControllerDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_selectionControllerDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_selectionControllerDeclarationAST * ptr (void) const { return (const cPtr_selectionControllerDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_selectionControllerDeclarationAST (const cPtr_selectionControllerDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_selectionControllerDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_selectionControllerDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_lstring & inOperand1,
                                                                                  const class GALGAS_lstring & inOperand2,
                                                                                  const class GALGAS_lstring & inOperand3,
                                                                                  const class GALGAS_lstring & inOperand4
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_selectionControllerDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMModelControllerName (class GALGAS_lstring inArgument0
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMModelControllerPropertyName (class GALGAS_lstring inArgument0
                                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMSelectionControllerName (class GALGAS_lstring inArgument0
                                                                     COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMSelectionEntityName (class GALGAS_lstring inArgument0
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mModelControllerName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mModelControllerPropertyName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSelectionControllerName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mSelectionEntityName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_selectionControllerDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectionControllerDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @selectionControllerDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_selectionControllerDeclarationAST : public cPtr_abstractDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mSelectionControllerName ;
  public : GALGAS_lstring mProperty_mModelControllerName ;
  public : GALGAS_lstring mProperty_mModelControllerPropertyName ;
  public : GALGAS_lstring mProperty_mSelectionEntityName ;

//--- Constructor
  public : cPtr_selectionControllerDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                   const GALGAS_lstring & in_mSelectionControllerName,
                                                   const GALGAS_lstring & in_mModelControllerName,
                                                   const GALGAS_lstring & in_mModelControllerPropertyName,
                                                   const GALGAS_lstring & in_mSelectionEntityName
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mSelectionControllerName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMSelectionControllerName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mModelControllerName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMModelControllerName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mModelControllerPropertyName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMModelControllerPropertyName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mSelectionEntityName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMSelectionEntityName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @stringAsDefaultValue class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_stringAsDefaultValue : public GALGAS_abstractDefaultValue {
//--- Constructor
  public : GALGAS_stringAsDefaultValue (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_stringAsDefaultValue constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_stringAsDefaultValue * ptr (void) const { return (const cPtr_stringAsDefaultValue *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_stringAsDefaultValue (const cPtr_stringAsDefaultValue * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_stringAsDefaultValue extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_stringAsDefaultValue constructor_new (const class GALGAS_lstring & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_stringAsDefaultValue & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMValue (class GALGAS_lstring inArgument0
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mValue (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_stringAsDefaultValue class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_stringAsDefaultValue ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @stringAsDefaultValue class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_stringAsDefaultValue : public cPtr_abstractDefaultValue {
//--- Attributes
  public : GALGAS_lstring mProperty_mValue ;

//--- Constructor
  public : cPtr_stringAsDefaultValue (const GALGAS_lstring & in_mValue
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mValue (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMValue (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @tableViewControllerDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_tableViewControllerDeclarationAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public : GALGAS_tableViewControllerDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_tableViewControllerDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_tableViewControllerDeclarationAST * ptr (void) const { return (const cPtr_tableViewControllerDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_tableViewControllerDeclarationAST (const cPtr_tableViewControllerDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_tableViewControllerDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_tableViewControllerDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                  const class GALGAS_lstring & inOperand1,
                                                                                  const class GALGAS_bool & inOperand2,
                                                                                  const class GALGAS_lstring & inOperand3,
                                                                                  const class GALGAS_lstring & inOperand4,
                                                                                  const class GALGAS_tableViewControllerBoundColumnListAST & inOperand5,
                                                                                  const class GALGAS_tableViewControllerAttributListAST & inOperand6
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_tableViewControllerDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMControllerName (class GALGAS_lstring inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIsRoot (class GALGAS_bool inArgument0
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRootEntityName (class GALGAS_lstring inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTableViewControllerAttributListAST (class GALGAS_tableViewControllerAttributListAST inArgument0
                                                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTableViewControllerBoundColumnListAST (class GALGAS_tableViewControllerBoundColumnListAST inArgument0
                                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMToManyPropertyName (class GALGAS_lstring inArgument0
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mControllerName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsRoot (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRootEntityName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_tableViewControllerAttributListAST getter_mTableViewControllerAttributListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_tableViewControllerBoundColumnListAST getter_mTableViewControllerBoundColumnListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mToManyPropertyName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_tableViewControllerDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tableViewControllerDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @tableViewControllerDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_tableViewControllerDeclarationAST : public cPtr_abstractDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mControllerName ;
  public : GALGAS_bool mProperty_mIsRoot ;
  public : GALGAS_lstring mProperty_mRootEntityName ;
  public : GALGAS_lstring mProperty_mToManyPropertyName ;
  public : GALGAS_tableViewControllerBoundColumnListAST mProperty_mTableViewControllerBoundColumnListAST ;
  public : GALGAS_tableViewControllerAttributListAST mProperty_mTableViewControllerAttributListAST ;

//--- Constructor
  public : cPtr_tableViewControllerDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                   const GALGAS_lstring & in_mControllerName,
                                                   const GALGAS_bool & in_mIsRoot,
                                                   const GALGAS_lstring & in_mRootEntityName,
                                                   const GALGAS_lstring & in_mToManyPropertyName,
                                                   const GALGAS_tableViewControllerBoundColumnListAST & in_mTableViewControllerBoundColumnListAST,
                                                   const GALGAS_tableViewControllerAttributListAST & in_mTableViewControllerAttributListAST
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mControllerName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMControllerName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mIsRoot (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMIsRoot (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mRootEntityName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRootEntityName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mToManyPropertyName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMToManyPropertyName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_tableViewControllerBoundColumnListAST getter_mTableViewControllerBoundColumnListAST (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTableViewControllerBoundColumnListAST (GALGAS_tableViewControllerBoundColumnListAST inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_tableViewControllerAttributListAST getter_mTableViewControllerAttributListAST (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTableViewControllerAttributListAST (GALGAS_tableViewControllerAttributListAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @toManyRelationshipAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_toManyRelationshipAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public : GALGAS_toManyRelationshipAST (void) ;

//---
  public : inline const class cPtr_toManyRelationshipAST * ptr (void) const { return (const cPtr_toManyRelationshipAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_toManyRelationshipAST (const cPtr_toManyRelationshipAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_toManyRelationshipAST extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_toManyRelationshipAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                      const class GALGAS_lstring & inOperand1,
                                                                      const class GALGAS_lstring & inOperand2,
                                                                      const class GALGAS_toManyRelationshipOptionAST & inOperand3,
                                                                      const class GALGAS_bool & inOperand4,
                                                                      const class GALGAS_bool & inOperand5
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_toManyRelationshipAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMCustomStore (class GALGAS_bool inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMDestinationEntityName (class GALGAS_lstring inArgument0
                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOption (class GALGAS_toManyRelationshipOptionAST inArgument0
                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMToManyRelationshipName (class GALGAS_lstring inArgument0
                                                                    COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMUsedForSignature (class GALGAS_bool inArgument0
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mCustomStore (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mDestinationEntityName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_toManyRelationshipOptionAST getter_mOption (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mToManyRelationshipName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mUsedForSignature (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_toManyRelationshipAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyRelationshipAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @toManyRelationshipAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_toManyRelationshipAST : public cPtr_abstractDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mDestinationEntityName ;
  public : GALGAS_lstring mProperty_mToManyRelationshipName ;
  public : GALGAS_toManyRelationshipOptionAST mProperty_mOption ;
  public : GALGAS_bool mProperty_mCustomStore ;
  public : GALGAS_bool mProperty_mUsedForSignature ;

//--- Constructor
  public : cPtr_toManyRelationshipAST (const GALGAS_lstring & in_mClassName,
                                       const GALGAS_lstring & in_mDestinationEntityName,
                                       const GALGAS_lstring & in_mToManyRelationshipName,
                                       const GALGAS_toManyRelationshipOptionAST & in_mOption,
                                       const GALGAS_bool & in_mCustomStore,
                                       const GALGAS_bool & in_mUsedForSignature
                                       COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mDestinationEntityName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMDestinationEntityName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mToManyRelationshipName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMToManyRelationshipName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_toManyRelationshipOptionAST getter_mOption (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOption (GALGAS_toManyRelationshipOptionAST inValue COMMA_LOCATION_ARGS) ;
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
// Phase 1: @toOneRelationshipAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_toOneRelationshipAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public : GALGAS_toOneRelationshipAST (void) ;

//---
  public : inline const class cPtr_toOneRelationshipAST * ptr (void) const { return (const cPtr_toOneRelationshipAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_toOneRelationshipAST (const cPtr_toOneRelationshipAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_toOneRelationshipAST extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_toOneRelationshipAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                     const class GALGAS_lstring & inOperand1,
                                                                     const class GALGAS_lstring & inOperand2,
                                                                     const class GALGAS_toOneOppositeRelationship & inOperand3,
                                                                     const class GALGAS_bool & inOperand4
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_toOneRelationshipAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMDestinationEntityName (class GALGAS_lstring inArgument0
                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOpposite (class GALGAS_toOneOppositeRelationship inArgument0
                                                      COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMToOneRelationshipName (class GALGAS_lstring inArgument0
                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMUsedForSignature (class GALGAS_bool inArgument0
                                                              COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mDestinationEntityName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_toOneOppositeRelationship getter_mOpposite (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mToOneRelationshipName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mUsedForSignature (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_toOneRelationshipAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toOneRelationshipAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @toOneRelationshipAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_toOneRelationshipAST : public cPtr_abstractDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mDestinationEntityName ;
  public : GALGAS_lstring mProperty_mToOneRelationshipName ;
  public : GALGAS_toOneOppositeRelationship mProperty_mOpposite ;
  public : GALGAS_bool mProperty_mUsedForSignature ;

//--- Constructor
  public : cPtr_toOneRelationshipAST (const GALGAS_lstring & in_mClassName,
                                      const GALGAS_lstring & in_mDestinationEntityName,
                                      const GALGAS_lstring & in_mToOneRelationshipName,
                                      const GALGAS_toOneOppositeRelationship & in_mOpposite,
                                      const GALGAS_bool & in_mUsedForSignature
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mDestinationEntityName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMDestinationEntityName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mToOneRelationshipName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMToOneRelationshipName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_toOneOppositeRelationship getter_mOpposite (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOpposite (GALGAS_toOneOppositeRelationship inValue COMMA_LOCATION_ARGS) ;
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
// Phase 1: @transientClassDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_transientClassDeclarationAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public : GALGAS_transientClassDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_transientClassDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_transientClassDeclarationAST * ptr (void) const { return (const cPtr_transientClassDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_transientClassDeclarationAST (const cPtr_transientClassDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_transientClassDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_transientClassDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_bool & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_transientClassDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMIsClass (class GALGAS_bool inArgument0
                                                     COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsClass (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_transientClassDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientClassDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @transientClassDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_transientClassDeclarationAST : public cPtr_abstractDeclarationAST {
//--- Attributes
  public : GALGAS_bool mProperty_mIsClass ;

//--- Constructor
  public : cPtr_transientClassDeclarationAST (const GALGAS_lstring & in_mClassName,
                                              const GALGAS_bool & in_mIsClass
                                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mIsClass (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMIsClass (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @transientDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_transientDeclarationAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public : GALGAS_transientDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_transientDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_transientDeclarationAST * ptr (void) const { return (const cPtr_transientDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_transientDeclarationAST (const cPtr_transientDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_transientDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_transientDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_lstring & inOperand1,
                                                                        const class GALGAS_lstring & inOperand2,
                                                                        const class GALGAS_lstring & inOperand3,
                                                                        const class GALGAS_observablePropertyList & inOperand4,
                                                                        const class GALGAS_bool & inOperand5
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_transientDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMDependencyList (class GALGAS_observablePropertyList inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIsOverriding (class GALGAS_bool inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRootEntityName (class GALGAS_lstring inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTransientName (class GALGAS_lstring inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMTransientTypeName (class GALGAS_lstring inArgument0
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_observablePropertyList getter_mDependencyList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_mIsOverriding (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRootEntityName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTransientName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mTransientTypeName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_transientDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @transientDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_transientDeclarationAST : public cPtr_abstractDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mRootEntityName ;
  public : GALGAS_lstring mProperty_mTransientTypeName ;
  public : GALGAS_lstring mProperty_mTransientName ;
  public : GALGAS_observablePropertyList mProperty_mDependencyList ;
  public : GALGAS_bool mProperty_mIsOverriding ;

//--- Constructor
  public : cPtr_transientDeclarationAST (const GALGAS_lstring & in_mClassName,
                                         const GALGAS_lstring & in_mRootEntityName,
                                         const GALGAS_lstring & in_mTransientTypeName,
                                         const GALGAS_lstring & in_mTransientName,
                                         const GALGAS_observablePropertyList & in_mDependencyList,
                                         const GALGAS_bool & in_mIsOverriding
                                         COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mRootEntityName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRootEntityName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTransientTypeName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTransientTypeName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mTransientName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMTransientName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_observablePropertyList getter_mDependencyList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMDependencyList (GALGAS_observablePropertyList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_bool getter_mIsOverriding (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMIsOverriding (GALGAS_bool inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @xibDocumentDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_xibDocumentDeclarationAST : public GALGAS_abstractDeclarationAST {
//--- Constructor
  public : GALGAS_xibDocumentDeclarationAST (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_xibDocumentDeclarationAST constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_xibDocumentDeclarationAST * ptr (void) const { return (const cPtr_xibDocumentDeclarationAST *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_xibDocumentDeclarationAST (const cPtr_xibDocumentDeclarationAST * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_xibDocumentDeclarationAST extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_xibDocumentDeclarationAST constructor_new (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_lstring & inOperand1,
                                                                          const class GALGAS_outletDeclarationList & inOperand2,
                                                                          const class GALGAS_lstringlist & inOperand3,
                                                                          const class GALGAS_arrayControllerBindingListAST & inOperand4
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_xibDocumentDeclarationAST & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMActionDeclarationList (class GALGAS_lstringlist inArgument0
                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMArrayControllerBindingListAST (class GALGAS_arrayControllerBindingListAST inArgument0
                                                                           COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMOutletDeclarationList (class GALGAS_outletDeclarationList inArgument0
                                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRootEntityName (class GALGAS_lstring inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mActionDeclarationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_arrayControllerBindingListAST getter_mArrayControllerBindingListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletDeclarationList getter_mOutletDeclarationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRootEntityName (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_xibDocumentDeclarationAST class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_xibDocumentDeclarationAST ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @xibDocumentDeclarationAST class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_xibDocumentDeclarationAST : public cPtr_abstractDeclarationAST {
//--- Attributes
  public : GALGAS_lstring mProperty_mRootEntityName ;
  public : GALGAS_outletDeclarationList mProperty_mOutletDeclarationList ;
  public : GALGAS_lstringlist mProperty_mActionDeclarationList ;
  public : GALGAS_arrayControllerBindingListAST mProperty_mArrayControllerBindingListAST ;

//--- Constructor
  public : cPtr_xibDocumentDeclarationAST (const GALGAS_lstring & in_mClassName,
                                           const GALGAS_lstring & in_mRootEntityName,
                                           const GALGAS_outletDeclarationList & in_mOutletDeclarationList,
                                           const GALGAS_lstringlist & in_mActionDeclarationList,
                                           const GALGAS_arrayControllerBindingListAST & in_mArrayControllerBindingListAST
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mRootEntityName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMRootEntityName (GALGAS_lstring inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_outletDeclarationList getter_mOutletDeclarationList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMOutletDeclarationList (GALGAS_outletDeclarationList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mActionDeclarationList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMActionDeclarationList (GALGAS_lstringlist inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_arrayControllerBindingListAST getter_mArrayControllerBindingListAST (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMArrayControllerBindingListAST (GALGAS_arrayControllerBindingListAST inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//  GRAMMAR easyBindings_grammar
//----------------------------------------------------------------------------------------------------------------------

class cGrammar_easyBindings_5F_grammar : public cParser_easyBindings_5F_syntax {
//------------------------------------- 'action_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_action_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_action_5F_declaration_ (GALGAS_lstringlist & ioArgument0,
                                                   C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'auto_layout_func_call_list' non terminal
//--- 'parse' label
  public : virtual void nt_auto_5F_layout_5F_func_5F_call_5F_list_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_auto_5F_layout_5F_func_5F_call_5F_list_ (GALGAS_astAutoLayoutViewFunctionCallList & outArgument0,
                                                                    C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'auto_layout_view_binding_specification' non terminal
//--- 'parse' label
  public : virtual void nt_auto_5F_layout_5F_view_5F_binding_5F_specification_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_auto_5F_layout_5F_view_5F_binding_5F_specification_ (const GALGAS_lstring inArgument0,
                                                                                GALGAS_autoLayoutViewClassBindingSpecificationList & ioArgument1,
                                                                                C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'autolayout_class_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_autolayout_5F_class_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_autolayout_5F_class_5F_declaration_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                                C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'autolayout_formal_parameter_list' non terminal
//--- 'parse' label
  public : virtual void nt_autolayout_5F_formal_5F_parameter_5F_list_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_autolayout_5F_formal_5F_parameter_5F_list_ (const GALGAS_lstring inArgument0,
                                                                       GALGAS_autoLayoutClassParameterList & outArgument1,
                                                                       GALGAS_lstring & outArgument2,
                                                                       C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'binding_option_list' non terminal
//--- 'parse' label
  public : virtual void nt_binding_5F_option_5F_list_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_binding_5F_option_5F_list_ (GALGAS_bindingOptionList & outArgument0,
                                                       C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'booleanMultipleBindingComparison' non terminal
//--- 'parse' label
  public : virtual void nt_booleanMultipleBindingComparison_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_booleanMultipleBindingComparison_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                              C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'booleanMultipleBindingExpression' non terminal
//--- 'parse' label
  public : virtual void nt_booleanMultipleBindingExpression_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_booleanMultipleBindingExpression_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                              C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'booleanMultipleBindingOperand' non terminal
//--- 'parse' label
  public : virtual void nt_booleanMultipleBindingOperand_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_booleanMultipleBindingOperand_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                           C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'booleanMultipleBindingTerm' non terminal
//--- 'parse' label
  public : virtual void nt_booleanMultipleBindingTerm_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_booleanMultipleBindingTerm_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument0,
                                                        C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'class_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_class_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_class_5F_declaration_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                  C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'column_bindings' non terminal
//--- 'parse' label
  public : virtual void nt_column_5F_bindings_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_column_5F_bindings_ (GALGAS_tableViewColumnBindingAST & outArgument0,
                                                C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'computed_view_instruction' non terminal
//--- 'parse' label
  public : virtual void nt_computed_5F_view_5F_instruction_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_computed_5F_view_5F_instruction_ (GALGAS_astComputedViewInstruction & outArgument0,
                                                             C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'controller_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_controller_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_controller_5F_declaration_ (const GALGAS_lstring inArgument0,
                                                       const GALGAS_lstring inArgument1,
                                                       GALGAS_arrayControllerBindingListAST & ioArgument2,
                                                       GALGAS_astDeclarationStruct & ioArgument3,
                                                       C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'document_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_document_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_document_5F_declaration_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                     C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'entity_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_entity_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_entity_5F_declaration_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                   C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'enum_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_enum_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_enum_5F_declaration_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                 C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'enum_function_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_enum_5F_function_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_enum_5F_function_5F_declaration_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                             C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'explicit_value' non terminal
//--- 'parse' label
  public : virtual void nt_explicit_5F_value_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_explicit_5F_value_ (GALGAS_abstractDefaultValue & outArgument0,
                                               C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'extern_swift_delegate' non terminal
//--- 'parse' label
  public : virtual void nt_extern_5F_swift_5F_delegate_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_extern_5F_swift_5F_delegate_ (GALGAS_externSwiftDelegateList & ioArgument0,
                                                         C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'extern_swift_func' non terminal
//--- 'parse' label
  public : virtual void nt_extern_5F_swift_5F_func_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_extern_5F_swift_5F_func_ (GALGAS_externSwiftFunctionList & ioArgument0,
                                                     C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'graphviz_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_graphviz_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_graphviz_5F_declaration_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                     C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'main_xib' non terminal
//--- 'parse' label
  public : virtual void nt_main_5F_xib_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_main_5F_xib_ (GALGAS_mainXibDescriptorList & ioArgument0,
                                         C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'main_xib_line' non terminal
//--- 'parse' label
  public : virtual void nt_main_5F_xib_5F_line_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_main_5F_xib_5F_line_ (GALGAS_mainXibLineDescriptorList & outArgument0,
                                                 C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'observable_property' non terminal
//--- 'parse' label
  public : virtual void nt_observable_5F_property_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_observable_5F_property_ (GALGAS_observablePropertyAST & outArgument0,
                                                    C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'outlet_binding' non terminal
//--- 'parse' label
  public : virtual void nt_outlet_5F_binding_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_outlet_5F_binding_ (GALGAS_tableValueBinding & outArgument0,
                                               GALGAS_runActionDescriptor & outArgument1,
                                               GALGAS_multipleBindingDescriptor & outArgument2,
                                               GALGAS_multipleBindingDescriptor & outArgument3,
                                               GALGAS_graphicController & outArgument4,
                                               GALGAS_regularBindingList & outArgument5,
                                               C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'outlet_binding_specification' non terminal
//--- 'parse' label
  public : virtual void nt_outlet_5F_binding_5F_specification_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_outlet_5F_binding_5F_specification_ (GALGAS_outletClassBindingSpecificationList & ioArgument0,
                                                                C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'outlet_class_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_outlet_5F_class_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_outlet_5F_class_5F_declaration_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                            C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'outlet_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_outlet_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_outlet_5F_declaration_ (GALGAS_outletDeclarationList & ioArgument0,
                                                   C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'preferences_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_preferences_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_preferences_5F_declaration_ (GALGAS_astDeclarationStruct & ioArgument0,
                                                        C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'simple_stored_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_simple_5F_stored_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_simple_5F_stored_5F_declaration_ (const GALGAS_lstring inArgument0,
                                                             GALGAS_simpleStoredPropertyList & ioArgument1,
                                                             GALGAS_stringset & ioArgument2,
                                                             GALGAS_astDeclarationStruct & ioArgument3,
                                                             C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'stack_view_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_stack_5F_view_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_stack_5F_view_5F_declaration_ (GALGAS_astViewDeclarationList & ioArgument0,
                                                          C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'start_symbol' non terminal
//--- 'parse' label
  public : virtual void nt_start_5F_symbol_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_start_5F_symbol_ (GALGAS_astDeclarationStruct & ioArgument0,
                                             GALGAS_location & outArgument1,
                                             C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//--- Start symbol
  public : static void _performSourceFileParsing_ (C_Compiler * inCompiler,
                                                   GALGAS_lstring inFileName,
                                                   GALGAS_astDeclarationStruct & ioArgument0,
                                                   GALGAS_location & outArgument1
                                                   COMMA_LOCATION_ARGS) ;

  public : static void _performSourceStringParsing_ (C_Compiler * inCompiler,
                                                     GALGAS_string inSourceString,
                                                     GALGAS_string inNameString,
                                                     GALGAS_astDeclarationStruct & ioArgument0,
                                                     GALGAS_location & outArgument1
                                                     COMMA_LOCATION_ARGS) ;

//--- Indexing
  public : static void performIndexing (C_Compiler * inCompiler,
                                        const C_String & inSourceFilePath) ;

//--- Only lexical analysis
  public : static void performOnlyLexicalAnalysis (C_Compiler * inCompiler,
                                                   const C_String & inSourceFilePath) ;

//--- Only syntax analysis
  public : static void performOnlySyntaxAnalysis (C_Compiler * inCompiler,
                                                  const C_String & inSourceFilePath) ;

//------------------------------------- 'toMany_relationship' non terminal
//--- 'parse' label
  public : virtual void nt_toMany_5F_relationship_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_toMany_5F_relationship_ (const GALGAS_lstring inArgument0,
                                                    GALGAS_stringset & ioArgument1,
                                                    GALGAS_astDeclarationStruct & ioArgument2,
                                                    C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'toOne_relationship' non terminal
//--- 'parse' label
  public : virtual void nt_toOne_5F_relationship_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_toOne_5F_relationship_ (const GALGAS_lstring inArgument0,
                                                   GALGAS_astDeclarationStruct & ioArgument1,
                                                   C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'transient_declaration' non terminal
//--- 'parse' label
  public : virtual void nt_transient_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_transient_5F_declaration_ (const GALGAS_lstring inArgument0,
                                                      const GALGAS_lstring inArgument1,
                                                      GALGAS_astDeclarationStruct & ioArgument2,
                                                      C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'view_actual_parameter_list' non terminal
//--- 'parse' label
  public : virtual void nt_view_5F_actual_5F_parameter_5F_list_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_view_5F_actual_5F_parameter_5F_list_ (GALGAS_astAutoLayoutViewInstructionParameterList & outArgument0,
                                                                 C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'view_instruction' non terminal
//--- 'parse' label
  public : virtual void nt_view_5F_instruction_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_view_5F_instruction_ (GALGAS_astAbstractViewInstructionDeclaration & outArgument0,
                                                 C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'view_instruction_list' non terminal
//--- 'parse' label
  public : virtual void nt_view_5F_instruction_5F_list_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_view_5F_instruction_5F_list_ (GALGAS_bool inArgument0,
                                                         GALGAS_astViewInstructionList & ioArgument1,
                                                         C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//------------------------------------- 'xcode_project' non terminal
//--- 'parse' label
  public : virtual void nt_xcode_5F_project_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_xcode_5F_project_ (GALGAS_lstring & ioArgument0,
                                              C_Lexique_easyBindings_5F_lexique * inCompiler) ;

  public : virtual int32_t select_easyBindings_5F_syntax_0 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_1 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_2 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_3 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_4 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_5 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_6 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_7 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_8 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_9 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_10 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_11 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_12 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_13 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_14 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_15 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_16 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_17 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_18 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_19 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_20 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_21 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_22 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_23 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_24 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_25 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_26 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_27 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_28 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_29 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_30 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_31 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_32 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_33 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_34 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_35 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_36 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_37 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_38 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_39 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_40 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_41 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_42 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_43 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_44 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_45 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_46 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_47 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_48 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_49 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_50 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_51 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_52 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_53 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_54 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_55 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_56 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_57 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_58 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_59 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_60 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_61 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_62 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_63 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_64 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_65 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_66 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_67 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_68 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_69 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_70 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_71 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_72 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_73 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_74 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_75 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_76 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_77 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_78 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_79 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_80 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_81 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_82 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_83 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_84 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_85 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_86 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_87 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_88 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_89 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_90 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_91 (C_Lexique_easyBindings_5F_lexique *) ;

  public : virtual int32_t select_easyBindings_5F_syntax_92 (C_Lexique_easyBindings_5F_lexique *) ;
} ;

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @prefDeclaration struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_prefDeclaration : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_outletDeclarationList mProperty_mOutletDeclarationList ;

  public : GALGAS_simpleStoredPropertyList mProperty_mSimpleStoredAttributeList ;

  public : GALGAS_lstringlist mProperty_mActionDeclarationList ;

  public : GALGAS_externSwiftFunctionList mProperty_mExternSwiftFunctionList ;

  public : GALGAS_stringset mProperty_mSignatureList ;

  public : GALGAS_mainXibDescriptorList mProperty_mMainXibDescriptorList ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_prefDeclaration constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_prefDeclaration (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_prefDeclaration (void) ;

//--------------------------------- Native constructor
  public : GALGAS_prefDeclaration (const GALGAS_outletDeclarationList & in_mOutletDeclarationList,
                                   const GALGAS_simpleStoredPropertyList & in_mSimpleStoredAttributeList,
                                   const GALGAS_lstringlist & in_mActionDeclarationList,
                                   const GALGAS_externSwiftFunctionList & in_mExternSwiftFunctionList,
                                   const GALGAS_stringset & in_mSignatureList,
                                   const GALGAS_mainXibDescriptorList & in_mMainXibDescriptorList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_prefDeclaration extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_prefDeclaration constructor_new (const class GALGAS_outletDeclarationList & inOperand0,
                                                                const class GALGAS_simpleStoredPropertyList & inOperand1,
                                                                const class GALGAS_lstringlist & inOperand2,
                                                                const class GALGAS_externSwiftFunctionList & inOperand3,
                                                                const class GALGAS_stringset & inOperand4,
                                                                const class GALGAS_mainXibDescriptorList & inOperand5
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_prefDeclaration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mActionDeclarationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_externSwiftFunctionList getter_mExternSwiftFunctionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_mainXibDescriptorList getter_mMainXibDescriptorList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletDeclarationList getter_mOutletDeclarationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_stringset getter_mSignatureList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_simpleStoredPropertyList getter_mSimpleStoredAttributeList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_prefDeclaration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefDeclaration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astDeclarationStruct struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astDeclarationStruct : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_declarationListAST mProperty_mUnifiedDeclarationList ;

  public : GALGAS_outletClassBindingSpecificationList mProperty_mBindingSpecificationListMap ;

  public : GALGAS_autoLayoutViewClassBindingSpecificationList mProperty_mAutoLayoutBindingSpecificationList ;

  public : GALGAS_prefDeclaration mProperty_mPreferences ;

  public : GALGAS_lstring mProperty_mXcodeProject ;

  public : GALGAS_lstringlist mProperty_mGraphvizList ;

  public : GALGAS_astAutoLayoutViewFunctionMap mProperty_mAutoLayoutVStackFunctionMap ;

  public : GALGAS_astAutoLayoutViewFunctionMap mProperty_mAutoLayoutHStackFunctionMap ;

  public : GALGAS_enumerationFunctionListAST mProperty_mEnumerationFunctionListAST ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_astDeclarationStruct constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_astDeclarationStruct (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_astDeclarationStruct (void) ;

//--------------------------------- Native constructor
  public : GALGAS_astDeclarationStruct (const GALGAS_declarationListAST & in_mUnifiedDeclarationList,
                                        const GALGAS_outletClassBindingSpecificationList & in_mBindingSpecificationListMap,
                                        const GALGAS_autoLayoutViewClassBindingSpecificationList & in_mAutoLayoutBindingSpecificationList,
                                        const GALGAS_prefDeclaration & in_mPreferences,
                                        const GALGAS_lstring & in_mXcodeProject,
                                        const GALGAS_lstringlist & in_mGraphvizList,
                                        const GALGAS_astAutoLayoutViewFunctionMap & in_mAutoLayoutVStackFunctionMap,
                                        const GALGAS_astAutoLayoutViewFunctionMap & in_mAutoLayoutHStackFunctionMap,
                                        const GALGAS_enumerationFunctionListAST & in_mEnumerationFunctionListAST) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_astDeclarationStruct extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_astDeclarationStruct constructor_new (const class GALGAS_declarationListAST & inOperand0,
                                                                     const class GALGAS_outletClassBindingSpecificationList & inOperand1,
                                                                     const class GALGAS_autoLayoutViewClassBindingSpecificationList & inOperand2,
                                                                     const class GALGAS_prefDeclaration & inOperand3,
                                                                     const class GALGAS_lstring & inOperand4,
                                                                     const class GALGAS_lstringlist & inOperand5,
                                                                     const class GALGAS_astAutoLayoutViewFunctionMap & inOperand6,
                                                                     const class GALGAS_astAutoLayoutViewFunctionMap & inOperand7,
                                                                     const class GALGAS_enumerationFunctionListAST & inOperand8
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_astDeclarationStruct & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewClassBindingSpecificationList getter_mAutoLayoutBindingSpecificationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutViewFunctionMap getter_mAutoLayoutHStackFunctionMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutViewFunctionMap getter_mAutoLayoutVStackFunctionMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletClassBindingSpecificationList getter_mBindingSpecificationListMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_enumerationFunctionListAST getter_mEnumerationFunctionListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mGraphvizList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_prefDeclaration getter_mPreferences (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_declarationListAST getter_mUnifiedDeclarationList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mXcodeProject (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astDeclarationStruct class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astDeclarationStruct ;


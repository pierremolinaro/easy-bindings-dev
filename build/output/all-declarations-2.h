#pragma once

//----------------------------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-1.h"

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astAutoLayoutViewFunctionCallList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astAutoLayoutViewFunctionCallList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mFunctionName ;

  public : GALGAS_astAutoLayoutViewInstructionParameterList mProperty_mParameterList ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_astAutoLayoutViewFunctionCallList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_astAutoLayoutViewFunctionCallList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_astAutoLayoutViewFunctionCallList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_astAutoLayoutViewFunctionCallList_2D_element (const GALGAS_lstring & in_mFunctionName,
                                                                const GALGAS_astAutoLayoutViewInstructionParameterList & in_mParameterList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_astAutoLayoutViewFunctionCallList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_astAutoLayoutViewFunctionCallList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                             const class GALGAS_astAutoLayoutViewInstructionParameterList & inOperand1
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_astAutoLayoutViewFunctionCallList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFunctionName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutViewInstructionParameterList getter_mParameterList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astAutoLayoutViewFunctionCallList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astAutoLayoutViewFunctionCallList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astViewInstructionList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astViewInstructionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_astAbstractViewInstructionDeclaration mProperty_mInstruction ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_astViewInstructionList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_astViewInstructionList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_astViewInstructionList_2D_element (const GALGAS_astAbstractViewInstructionDeclaration & in_mInstruction) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_astViewInstructionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_astViewInstructionList_2D_element constructor_new (const class GALGAS_astAbstractViewInstructionDeclaration & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_astViewInstructionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_astAbstractViewInstructionDeclaration getter_mInstruction (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astViewInstructionList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astViewInstructionList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @astAutoLayoutViewInstructionParameterList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_astAutoLayoutViewInstructionParameterList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mParameterName ;

  public : GALGAS_autoLayoutClassParameterType mProperty_mParameterType ;

  public : GALGAS_astAutoLayoutViewInstructionParameterValue mProperty_mParameter ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_astAutoLayoutViewInstructionParameterList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_astAutoLayoutViewInstructionParameterList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_astAutoLayoutViewInstructionParameterList_2D_element (const GALGAS_lstring & in_mParameterName,
                                                                        const GALGAS_autoLayoutClassParameterType & in_mParameterType,
                                                                        const GALGAS_astAutoLayoutViewInstructionParameterValue & in_mParameter) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_astAutoLayoutViewInstructionParameterList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_astAutoLayoutViewInstructionParameterList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                                     const class GALGAS_autoLayoutClassParameterType & inOperand1,
                                                                                                     const class GALGAS_astAutoLayoutViewInstructionParameterValue & inOperand2
                                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_astAutoLayoutViewInstructionParameterList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutViewInstructionParameterValue getter_mParameter (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mParameterName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutClassParameterType getter_mParameterType (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_astAutoLayoutViewInstructionParameterList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @regularBindingList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_regularBindingList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mBindingName ;

  public : GALGAS_observablePropertyList mProperty_mObservablePropertyList ;

  public : GALGAS_bindingOptionList mProperty_mBindingOptionList ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_regularBindingList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_regularBindingList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_regularBindingList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_regularBindingList_2D_element (const GALGAS_lstring & in_mBindingName,
                                                 const GALGAS_observablePropertyList & in_mObservablePropertyList,
                                                 const GALGAS_bindingOptionList & in_mBindingOptionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_regularBindingList_2D_element extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_regularBindingList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_observablePropertyList & inOperand1,
                                                                              const class GALGAS_bindingOptionList & inOperand2
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_regularBindingList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mBindingName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bindingOptionList getter_mBindingOptionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_observablePropertyList getter_mObservablePropertyList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_regularBindingList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_regularBindingList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutViewDeclarationMap map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_autoLayoutViewDeclarationMap ;

//----------------------------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_autoLayoutViewDeclarationMap_searchKey ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutViewDeclarationMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_autoLayoutViewDeclarationMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_autoLayoutViewDeclarationMap (const GALGAS_autoLayoutViewDeclarationMap & inSource) ;
  public : GALGAS_autoLayoutViewDeclarationMap & operator = (const GALGAS_autoLayoutViewDeclarationMap & inSource) ;
  
//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_autoLayoutViewDeclarationMap extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_autoLayoutViewDeclarationMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static class GALGAS_autoLayoutViewDeclarationMap constructor_mapWithMapToOverride (const class GALGAS_autoLayoutViewDeclarationMap & inOperand0
                                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewDeclarationMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public : VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_autoLayoutViewDeclarationMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                          const GALGAS_string & inKey
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_autoLayoutViewDeclarationMap ;
 
} ; // End of GALGAS_autoLayoutViewDeclarationMap class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_autoLayoutViewDeclarationMap : public cGenericAbstractEnumerator {
  public : cEnumerator_autoLayoutViewDeclarationMap (const GALGAS_autoLayoutViewDeclarationMap & inEnumeratedObject,
                                                     const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_autoLayoutViewDeclarationMap_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewDeclarationMap ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@autoLayoutViewDeclarationMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_autoLayoutViewDeclarationMap : public cMapElement {
//--- Map attributes

//--- Constructor
  public : cMapElement_autoLayoutViewDeclarationMap (const GALGAS_lstring & inKey
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
//
// Phase 1: @autoLayoutViewDeclarationMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutViewDeclarationMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_autoLayoutViewDeclarationMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_autoLayoutViewDeclarationMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_autoLayoutViewDeclarationMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_autoLayoutViewDeclarationMap_2D_element (const GALGAS_lstring & in_lkey) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_autoLayoutViewDeclarationMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_autoLayoutViewDeclarationMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_autoLayoutViewDeclarationMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutViewDeclarationMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewDeclarationMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@astAbstractViewDeclaration check'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_astAbstractViewDeclaration_check) (const class cPtr_astAbstractViewDeclaration * inObject,
                                                                           const class GALGAS_string constinArgument0,
                                                                           const class GALGAS_autoLayoutViewDeclarationMap constinArgument1,
                                                                           const class GALGAS_bool constinArgument2,
                                                                           const class GALGAS_propertyMap constinArgument3,
                                                                           const class GALGAS_propertyMap constinArgument4,
                                                                           const class GALGAS_semanticContext constinArgument5,
                                                                           const class GALGAS_propertyMap constinArgument6,
                                                                           const class GALGAS_actionMap constinArgument7,
                                                                           const class GALGAS_string constinArgument8,
                                                                           const class GALGAS_classMap constinArgument9,
                                                                           class GALGAS_implicitViewFunctionGenerationList & ioArgument10,
                                                                           class GALGAS_autoLayoutConfiguratorMap & ioArgument11,
                                                                           class GALGAS_autoLayoutOutletMap & ioArgument12,
                                                                           class GALGAS_abstractViewGeneration & outArgument13,
                                                                           class C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_check (const int32_t inClassIndex,
                                 extensionMethodSignature_astAbstractViewDeclaration_check inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_check (const class cPtr_astAbstractViewDeclaration * inObject,
                                const GALGAS_string constin_inViewName,
                                const GALGAS_autoLayoutViewDeclarationMap constin_inViewDeclarationMap,
                                const GALGAS_bool constin_inPreferences,
                                const GALGAS_propertyMap constin_inRootObservablePropertyMap,
                                const GALGAS_propertyMap constin_inPreferencesPropertyMap,
                                const GALGAS_semanticContext constin_inSemanticContext,
                                const GALGAS_propertyMap constin_inObservablePropertyMap,
                                const GALGAS_actionMap constin_inActionMap,
                                const GALGAS_string constin_inReceiverSwiftTypeName,
                                const GALGAS_classMap constin_inClassMap,
                                GALGAS_implicitViewFunctionGenerationList & io_ioImplicitViewFunctionGenerationList,
                                GALGAS_autoLayoutConfiguratorMap & io_ioConfiguratorMap,
                                GALGAS_autoLayoutOutletMap & io_ioOutletMap,
                                GALGAS_abstractViewGeneration & out_outGeneration,
                                C_Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@actionMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_actionMap : public cMapElement {
//--- Map attributes

//--- Constructor
  public : cMapElement_actionMap (const GALGAS_lstring & inKey
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
//
//                                             Phase 1: @propertyKind enum                                             *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_propertyKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_propertyKind (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_property,
    kEnum_toMany,
    kEnum_toOne,
    kEnum_arrayController,
    kEnum_selectionController
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
  public : static GALGAS_propertyKind extractObject (const GALGAS_object & inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_propertyKind constructor_arrayController (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_bool & inOperand1
                                                                         COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_propertyKind constructor_property (const class GALGAS_typeKind & inOperand0,
                                                                  const class GALGAS_propertyAccessibility & inOperand1
                                                                  COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_propertyKind constructor_selectionController (const class GALGAS_string & inOperand0
                                                                             COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_propertyKind constructor_toMany (const class GALGAS_lstring & inOperand0,
                                                                const class GALGAS_propertyAccessibility & inOperand1,
                                                                const class GALGAS_bool & inOperand2,
                                                                const class GALGAS_toManyRelationshipOptionAST & inOperand3
                                                                COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_propertyKind constructor_toOne (const class GALGAS_lstring & inOperand0,
                                                               const class GALGAS_propertyAccessibility & inOperand1,
                                                               const class GALGAS_bool & inOperand2,
                                                               const class GALGAS_toOneOppositeRelationship & inOperand3
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_propertyKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_arrayController (class GALGAS_lstring & outArgument0,
                                                         class GALGAS_bool & outArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_property (class GALGAS_typeKind & outArgument0,
                                                  class GALGAS_propertyAccessibility & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_selectionController (class GALGAS_string & outArgument0,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_toMany (class GALGAS_lstring & outArgument0,
                                                class GALGAS_propertyAccessibility & outArgument1,
                                                class GALGAS_bool & outArgument2,
                                                class GALGAS_toManyRelationshipOptionAST & outArgument3,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_toOne (class GALGAS_lstring & outArgument0,
                                               class GALGAS_propertyAccessibility & outArgument1,
                                               class GALGAS_bool & outArgument2,
                                               class GALGAS_toOneOppositeRelationship & outArgument3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isArrayController (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isProperty (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isSelectionController (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isToMany (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isToOne (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public : VIRTUAL_IN_DEBUG bool optional_arrayController (class GALGAS_lstring & outOperand0,
                                                           class GALGAS_bool & outOperand1) const ;

  public : VIRTUAL_IN_DEBUG bool optional_property (class GALGAS_typeKind & outOperand0,
                                                    class GALGAS_propertyAccessibility & outOperand1) const ;

  public : VIRTUAL_IN_DEBUG bool optional_selectionController (class GALGAS_string & outOperand0) const ;

  public : VIRTUAL_IN_DEBUG bool optional_toMany (class GALGAS_lstring & outOperand0,
                                                  class GALGAS_propertyAccessibility & outOperand1,
                                                  class GALGAS_bool & outOperand2,
                                                  class GALGAS_toManyRelationshipOptionAST & outOperand3) const ;

  public : VIRTUAL_IN_DEBUG bool optional_toOne (class GALGAS_lstring & outOperand0,
                                                 class GALGAS_propertyAccessibility & outOperand1,
                                                 class GALGAS_bool & outOperand2,
                                                 class GALGAS_toOneOppositeRelationship & outOperand3) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_propertyKind class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyKind ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@propertyMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_propertyMap : public cMapElement {
//--- Map attributes
  public : GALGAS_propertyKind mProperty_mKind ;
  public : GALGAS_actionMap mProperty_mActionMap ;
  public : GALGAS_bool mProperty_mIsOverriding ;

//--- Constructor
  public : cMapElement_propertyMap (const GALGAS_lstring & inKey,
                                    const GALGAS_propertyKind & in_mKind,
                                    const GALGAS_actionMap & in_mActionMap,
                                    const GALGAS_bool & in_mIsOverriding
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
//
// Phase 1: @semanticContext struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_semanticContext : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_classMap mProperty_mClassMap ;

  public : GALGAS_outletClassMap mProperty_mOutletClassMap ;

  public : GALGAS_bindingSpecificationMap mProperty_mBindingSpecificationMap ;

  public : GALGAS_autolayoutViewClassMap mProperty_mAutolayoutViewClassMap ;

  public : GALGAS_autoLayoutBindingSpecificationMap mProperty_mAutoLayoutBindingSpecificationMap ;

  public : GALGAS_astAutoLayoutViewFunctionMap mProperty_mAutoLayoutVStackFunctionMap ;

  public : GALGAS_astAutoLayoutViewFunctionMap mProperty_mAutoLayoutHStackFunctionMap ;

  public : GALGAS_enumerationFunctionListAST mProperty_mEnumerationFunctionListAST ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_semanticContext constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_semanticContext (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_semanticContext (void) ;

//--------------------------------- Native constructor
  public : GALGAS_semanticContext (const GALGAS_classMap & in_mClassMap,
                                   const GALGAS_outletClassMap & in_mOutletClassMap,
                                   const GALGAS_bindingSpecificationMap & in_mBindingSpecificationMap,
                                   const GALGAS_autolayoutViewClassMap & in_mAutolayoutViewClassMap,
                                   const GALGAS_autoLayoutBindingSpecificationMap & in_mAutoLayoutBindingSpecificationMap,
                                   const GALGAS_astAutoLayoutViewFunctionMap & in_mAutoLayoutVStackFunctionMap,
                                   const GALGAS_astAutoLayoutViewFunctionMap & in_mAutoLayoutHStackFunctionMap,
                                   const GALGAS_enumerationFunctionListAST & in_mEnumerationFunctionListAST) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_semanticContext extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_semanticContext constructor_new (const class GALGAS_classMap & inOperand0,
                                                                const class GALGAS_outletClassMap & inOperand1,
                                                                const class GALGAS_bindingSpecificationMap & inOperand2,
                                                                const class GALGAS_autolayoutViewClassMap & inOperand3,
                                                                const class GALGAS_autoLayoutBindingSpecificationMap & inOperand4,
                                                                const class GALGAS_astAutoLayoutViewFunctionMap & inOperand5,
                                                                const class GALGAS_astAutoLayoutViewFunctionMap & inOperand6,
                                                                const class GALGAS_enumerationFunctionListAST & inOperand7
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_semanticContext & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutBindingSpecificationMap getter_mAutoLayoutBindingSpecificationMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutViewFunctionMap getter_mAutoLayoutHStackFunctionMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_astAutoLayoutViewFunctionMap getter_mAutoLayoutVStackFunctionMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_autolayoutViewClassMap getter_mAutolayoutViewClassMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bindingSpecificationMap getter_mBindingSpecificationMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_classMap getter_mClassMap (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_enumerationFunctionListAST getter_mEnumerationFunctionListAST (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletClassMap getter_mOutletClassMap (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_semanticContext class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticContext ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@astAutoLayoutViewFunctionCallList check'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_check (const class GALGAS_astAutoLayoutViewFunctionCallList inObject,
                            const class GALGAS_astAutoLayoutViewFunctionMap constin_inFunctionMap,
                            const class GALGAS_autoLayoutViewDeclarationMap constin_inViewDeclarationMap,
                            const class GALGAS_bool constin_inPreferences,
                            const class GALGAS_propertyMap constin_inRootObservablePropertyMap,
                            const class GALGAS_propertyMap constin_inPreferencesPropertyMap,
                            const class GALGAS_semanticContext constin_inSemanticContext,
                            const class GALGAS_propertyMap constin_inObservablePropertyMap,
                            const class GALGAS_actionMap constin_inActionMap,
                            const class GALGAS_string constin_inReceiverSwiftTypeName,
                            const class GALGAS_classMap constin_inClassMap,
                            class GALGAS_implicitViewFunctionGenerationList & io_ioImplicitViewFunctionGenerationList,
                            class GALGAS_autoLayoutConfiguratorMap & io_ioConfiguratorMap,
                            class GALGAS_autoLayoutOutletMap & io_ioOutletMap,
                            class GALGAS_autoLayoutViewInstructionGenerationFuncCallList & out_outFuncCallList,
                            class C_Compiler * inCompiler
                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                 Phase 1: @autolayoutEnabledBindingForGeneration enum                                *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autolayoutEnabledBindingForGeneration : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_autolayoutEnabledBindingForGeneration (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_none,
    kEnum_enabled
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
  public : static GALGAS_autolayoutEnabledBindingForGeneration extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_autolayoutEnabledBindingForGeneration constructor_enabled (const class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand0
                                                                                          COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_autolayoutEnabledBindingForGeneration constructor_none (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_autolayoutEnabledBindingForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_enabled (class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isEnabled (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNone (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public : VIRTUAL_IN_DEBUG bool optional_enabled (class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outOperand0) const ;

  public : VIRTUAL_IN_DEBUG bool optional_none () const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autolayoutEnabledBindingForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autolayoutEnabledBindingForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @autolayoutEnabledBindingForGeneration enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_autolayoutEnabledBindingForGeneration_enabled : public cEnumAssociatedValues {
  public : const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_autolayoutEnabledBindingForGeneration_enabled (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inAssociatedValue0
                                                                                COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_autolayoutEnabledBindingForGeneration_enabled (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                   Phase 1: @autolayoutRunBindingForGeneration enum                                  *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autolayoutRunBindingForGeneration : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_autolayoutRunBindingForGeneration (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_none,
    kEnum_run
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
  public : static GALGAS_autolayoutRunBindingForGeneration extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_autolayoutRunBindingForGeneration constructor_none (LOCATION_ARGS) ;

  public : static class GALGAS_autolayoutRunBindingForGeneration constructor_run (const class GALGAS_string & inOperand0,
                                                                                  const class GALGAS_string & inOperand1,
                                                                                  const class GALGAS_string & inOperand2
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_autolayoutRunBindingForGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_run (class GALGAS_string & outArgument0,
                                             class GALGAS_string & outArgument1,
                                             class GALGAS_string & outArgument2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNone (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRun (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public : VIRTUAL_IN_DEBUG bool optional_none () const ;

  public : VIRTUAL_IN_DEBUG bool optional_run (class GALGAS_string & outOperand0,
                                               class GALGAS_string & outOperand1,
                                               class GALGAS_string & outOperand2) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autolayoutRunBindingForGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autolayoutRunBindingForGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @autolayoutRunBindingForGeneration enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_autolayoutRunBindingForGeneration_run : public cEnumAssociatedValues {
  public : const GALGAS_string mAssociatedValue0 ;
  public : const GALGAS_string mAssociatedValue1 ;
  public : const GALGAS_string mAssociatedValue2 ;

//--- Constructor
  public : cEnumAssociatedValues_autolayoutRunBindingForGeneration_run (const GALGAS_string & inAssociatedValue0,
                                                                        const GALGAS_string & inAssociatedValue1,
                                                                        const GALGAS_string & inAssociatedValue2
                                                                        COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_autolayoutRunBindingForGeneration_run (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @classKind enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_classKind_atomic : public cEnumAssociatedValues {
  public : const GALGAS_typeKind mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_classKind_atomic (const GALGAS_typeKind & inAssociatedValue0
                                                   COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_classKind_atomic (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_classKind_document : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_classKind_document (const GALGAS_lstring & inAssociatedValue0
                                                     COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_classKind_document (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_classKind_entity : public cEnumAssociatedValues {
  public : const GALGAS_string mAssociatedValue0 ;
  public : const GALGAS_bool mAssociatedValue1 ;
  public : const GALGAS_bool mAssociatedValue2 ;

//--- Constructor
  public : cEnumAssociatedValues_classKind_entity (const GALGAS_string & inAssociatedValue0,
                                                   const GALGAS_bool & inAssociatedValue1,
                                                   const GALGAS_bool & inAssociatedValue2
                                                   COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_classKind_entity (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractBooleanMultipleBindingExpressionForGeneration expressionString'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_string (*enterExtensionGetter_abstractBooleanMultipleBindingExpressionForGeneration_expressionString) (const class cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                                            class C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_expressionString (const int32_t inClassIndex,
                                            enterExtensionGetter_abstractBooleanMultipleBindingExpressionForGeneration_expressionString inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_expressionString (const class cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractBooleanMultipleBindingExpressionForGeneration observedModelSet'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_stringset (*enterExtensionGetter_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet) (const class cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                                               class C_Compiler * inCompiler
                                                                                                                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_observedModelSet (const int32_t inClassIndex,
                                            enterExtensionGetter_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_stringset callExtensionGetter_observedModelSet (const class cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutViewInstructionGenerationFuncCallList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutViewInstructionGenerationFuncCallList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_autoLayoutViewInstructionGenerationFuncCallList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_autoLayoutViewInstructionGenerationFuncCallList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mFunctionName,
                                                  const class GALGAS_autoLayoutViewInstructionGenerationParameterList & in_mParameters
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_autoLayoutViewInstructionGenerationFuncCallList extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_autoLayoutViewInstructionGenerationFuncCallList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_autoLayoutViewInstructionGenerationFuncCallList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                                          const class GALGAS_autoLayoutViewInstructionGenerationParameterList & inOperand1
                                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_autoLayoutViewInstructionGenerationParameterList & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_autoLayoutViewInstructionGenerationFuncCallList add_operation (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & inOperand,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                       class GALGAS_autoLayoutViewInstructionGenerationParameterList constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                  class GALGAS_autoLayoutViewInstructionGenerationParameterList & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                 class GALGAS_autoLayoutViewInstructionGenerationParameterList & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                       class GALGAS_autoLayoutViewInstructionGenerationParameterList & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMFunctionNameAtIndex (class GALGAS_string constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMParametersAtIndex (class GALGAS_autoLayoutViewInstructionGenerationParameterList constinArgument0,
                                                               class GALGAS_uint constinArgument1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_autoLayoutViewInstructionGenerationParameterList & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_autoLayoutViewInstructionGenerationParameterList & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mFunctionNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewInstructionGenerationParameterList getter_mParametersAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                     C_Compiler * inCompiler
                                                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewInstructionGenerationFuncCallList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewInstructionGenerationFuncCallList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewInstructionGenerationFuncCallList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_autoLayoutViewInstructionGenerationFuncCallList ;
 
} ; // End of GALGAS_autoLayoutViewInstructionGenerationFuncCallList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_autoLayoutViewInstructionGenerationFuncCallList : public cGenericAbstractEnumerator {
  public : cEnumerator_autoLayoutViewInstructionGenerationFuncCallList (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mFunctionName (LOCATION_ARGS) const ;
  public : class GALGAS_autoLayoutViewInstructionGenerationParameterList current_mParameters (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationFuncCallList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutViewInstructionGenerationParameterList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutViewInstructionGenerationParameterList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_autoLayoutViewInstructionGenerationParameterList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_autoLayoutViewInstructionGenerationParameterList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mParameterName,
                                                  const class GALGAS_string & in_mParameterValue
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_autoLayoutViewInstructionGenerationParameterList extractObject (const GALGAS_object & inObject,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_autoLayoutViewInstructionGenerationParameterList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_autoLayoutViewInstructionGenerationParameterList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                                           const class GALGAS_string & inOperand1
                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_autoLayoutViewInstructionGenerationParameterList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_string & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_autoLayoutViewInstructionGenerationParameterList add_operation (const GALGAS_autoLayoutViewInstructionGenerationParameterList & inOperand,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                       class GALGAS_string constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                  class GALGAS_string & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                 class GALGAS_string & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                       class GALGAS_string & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMParameterNameAtIndex (class GALGAS_string constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMParameterValueAtIndex (class GALGAS_string constinArgument0,
                                                                   class GALGAS_uint constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_string & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_string & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mParameterNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mParameterValueAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewInstructionGenerationParameterList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                   C_Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewInstructionGenerationParameterList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewInstructionGenerationParameterList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                                   C_Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_autoLayoutViewInstructionGenerationParameterList ;
 
} ; // End of GALGAS_autoLayoutViewInstructionGenerationParameterList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_autoLayoutViewInstructionGenerationParameterList : public cGenericAbstractEnumerator {
  public : cEnumerator_autoLayoutViewInstructionGenerationParameterList (const GALGAS_autoLayoutViewInstructionGenerationParameterList & inEnumeratedObject,
                                                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mParameterName (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mParameterValue (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationParameterList ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@astAbstractViewInstructionDeclaration generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

typedef void (*extensionMethodSignature_astAbstractViewInstructionDeclaration_generateCode) (const class cPtr_astAbstractViewInstructionDeclaration * inObject,
                                                                                             const class GALGAS_autoLayoutViewDeclarationMap constinArgument0,
                                                                                             const class GALGAS_bool constinArgument1,
                                                                                             const class GALGAS_propertyMap constinArgument2,
                                                                                             const class GALGAS_propertyMap constinArgument3,
                                                                                             const class GALGAS_semanticContext constinArgument4,
                                                                                             const class GALGAS_propertyMap constinArgument5,
                                                                                             const class GALGAS_actionMap constinArgument6,
                                                                                             const class GALGAS_string constinArgument7,
                                                                                             const class GALGAS_classMap constinArgument8,
                                                                                             class GALGAS_implicitViewFunctionGenerationList & ioArgument9,
                                                                                             class GALGAS_autoLayoutConfiguratorMap & ioArgument10,
                                                                                             class GALGAS_autoLayoutOutletMap & ioArgument11,
                                                                                             class GALGAS_abstractViewInstructionGeneration & outArgument12,
                                                                                             class C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_generateCode (const int32_t inClassIndex,
                                        extensionMethodSignature_astAbstractViewInstructionDeclaration_generateCode inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_generateCode (const class cPtr_astAbstractViewInstructionDeclaration * inObject,
                                       const GALGAS_autoLayoutViewDeclarationMap constin_inViewDeclarationMap,
                                       const GALGAS_bool constin_inPreferences,
                                       const GALGAS_propertyMap constin_inRootObservablePropertyMap,
                                       const GALGAS_propertyMap constin_inPreferencesPropertyMap,
                                       const GALGAS_semanticContext constin_inSemanticContext,
                                       const GALGAS_propertyMap constin_inObservablePropertyMap,
                                       const GALGAS_actionMap constin_inActionMap,
                                       const GALGAS_string constin_inReceiverSwiftTypeName,
                                       const GALGAS_classMap constin_inClassMap,
                                       GALGAS_implicitViewFunctionGenerationList & io_ioImplicitViewFunctionGenerationList,
                                       GALGAS_autoLayoutConfiguratorMap & io_ioConfiguratorMap,
                                       GALGAS_autoLayoutOutletMap & io_ioOutletMap,
                                       GALGAS_abstractViewInstructionGeneration & out_outInstruction,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeAutoLayoutEnableBinding'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeAutoLayoutEnableBinding (const class GALGAS_multipleBindingDescriptor constinArgument0,
                                             const class GALGAS_bool constinArgument1,
                                             const class GALGAS_bool constinArgument2,
                                             const class GALGAS_propertyMap constinArgument3,
                                             const class GALGAS_semanticContext constinArgument4,
                                             const class GALGAS_propertyMap constinArgument5,
                                             class GALGAS_autolayoutEnabledBindingForGeneration & outArgument6,
                                             class C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeAutoLayoutRunBinding'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeAutoLayoutRunBinding (const class GALGAS_runActionDescriptor constinArgument0,
                                          const class GALGAS_bool constinArgument1,
                                          const class GALGAS_bool constinArgument2,
                                          const class GALGAS_lstring constinArgument3,
                                          const class GALGAS_actionMap constinArgument4,
                                          const class GALGAS_propertyMap constinArgument5,
                                          const class GALGAS_string constinArgument6,
                                          class GALGAS_autolayoutRunBindingForGeneration & outArgument7,
                                          class C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutViewInstructionGenerationFuncCallList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_string mProperty_mFunctionName ;

  public : GALGAS_autoLayoutViewInstructionGenerationParameterList mProperty_mParameters ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element (const GALGAS_string & in_mFunctionName,
                                                                              const GALGAS_autoLayoutViewInstructionGenerationParameterList & in_mParameters) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                                           const class GALGAS_autoLayoutViewInstructionGenerationParameterList & inOperand1
                                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mFunctionName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewInstructionGenerationParameterList getter_mParameters (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @newVerticalStackViewGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_newVerticalStackViewGeneration : public GALGAS_abstractViewGeneration {
//--- Constructor
  public : GALGAS_newVerticalStackViewGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_newVerticalStackViewGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_newVerticalStackViewGeneration * ptr (void) const { return (const cPtr_newVerticalStackViewGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_newVerticalStackViewGeneration (const cPtr_newVerticalStackViewGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_newVerticalStackViewGeneration extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_newVerticalStackViewGeneration constructor_new (const class GALGAS_autoLayoutViewInstructionGenerationFuncCallList & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_newVerticalStackViewGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMFuncCallList (class GALGAS_autoLayoutViewInstructionGenerationFuncCallList inArgument0
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewInstructionGenerationFuncCallList getter_mFuncCallList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_newVerticalStackViewGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_newVerticalStackViewGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @newVerticalStackViewGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_newVerticalStackViewGeneration : public cPtr_abstractViewGeneration {
//--- Attributes
  public : GALGAS_autoLayoutViewInstructionGenerationFuncCallList mProperty_mFuncCallList ;

//--- Constructor
  public : cPtr_newVerticalStackViewGeneration (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_autoLayoutViewInstructionGenerationFuncCallList getter_mFuncCallList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMFuncCallList (GALGAS_autoLayoutViewInstructionGenerationFuncCallList inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutViewInstructionGenerationList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutViewInstructionGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_autoLayoutViewInstructionGenerationList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_autoLayoutViewInstructionGenerationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_abstractViewInstructionGeneration & in_mInstruction
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_autoLayoutViewInstructionGenerationList extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_autoLayoutViewInstructionGenerationList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_autoLayoutViewInstructionGenerationList constructor_listWithValue (const class GALGAS_abstractViewInstructionGeneration & inOperand0
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_autoLayoutViewInstructionGenerationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_abstractViewInstructionGeneration & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_autoLayoutViewInstructionGenerationList add_operation (const GALGAS_autoLayoutViewInstructionGenerationList & inOperand,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_autoLayoutViewInstructionGenerationList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_abstractViewInstructionGeneration constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_abstractViewInstructionGeneration & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_abstractViewInstructionGeneration & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_abstractViewInstructionGeneration & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInstructionAtIndex (class GALGAS_abstractViewInstructionGeneration constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_abstractViewInstructionGeneration & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_abstractViewInstructionGeneration & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractViewInstructionGeneration getter_mInstructionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewInstructionGenerationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewInstructionGenerationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewInstructionGenerationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_autoLayoutViewInstructionGenerationList ;
 
} ; // End of GALGAS_autoLayoutViewInstructionGenerationList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_autoLayoutViewInstructionGenerationList : public cGenericAbstractEnumerator {
  public : cEnumerator_autoLayoutViewInstructionGenerationList (const GALGAS_autoLayoutViewInstructionGenerationList & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_abstractViewInstructionGeneration current_mInstruction (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_autoLayoutViewInstructionGenerationList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutViewInstructionGenerationList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutViewInstructionGenerationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_abstractViewInstructionGeneration mProperty_mInstruction ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_autoLayoutViewInstructionGenerationList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_autoLayoutViewInstructionGenerationList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_autoLayoutViewInstructionGenerationList_2D_element (const GALGAS_abstractViewInstructionGeneration & in_mInstruction) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_autoLayoutViewInstructionGenerationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_autoLayoutViewInstructionGenerationList_2D_element constructor_new (const class GALGAS_abstractViewInstructionGeneration & inOperand0
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_autoLayoutViewInstructionGenerationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractViewInstructionGeneration getter_mInstruction (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutViewInstructionGenerationList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @computedVerticalViewGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_computedVerticalViewGeneration : public GALGAS_abstractViewGeneration {
//--- Constructor
  public : GALGAS_computedVerticalViewGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_computedVerticalViewGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_computedVerticalViewGeneration * ptr (void) const { return (const cPtr_computedVerticalViewGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_computedVerticalViewGeneration (const cPtr_computedVerticalViewGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_computedVerticalViewGeneration extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_computedVerticalViewGeneration constructor_new (const class GALGAS_autoLayoutViewInstructionGenerationFuncCallList & inOperand0,
                                                                               const class GALGAS_autoLayoutViewInstructionGenerationList & inOperand1
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_computedVerticalViewGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMFuncCallList (class GALGAS_autoLayoutViewInstructionGenerationFuncCallList inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInstructionList (class GALGAS_autoLayoutViewInstructionGenerationList inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewInstructionGenerationFuncCallList getter_mFuncCallList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewInstructionGenerationList getter_mInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_computedVerticalViewGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedVerticalViewGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @computedVerticalViewGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_computedVerticalViewGeneration : public cPtr_abstractViewGeneration {
//--- Attributes
  public : GALGAS_autoLayoutViewInstructionGenerationFuncCallList mProperty_mFuncCallList ;
  public : GALGAS_autoLayoutViewInstructionGenerationList mProperty_mInstructionList ;

//--- Constructor
  public : cPtr_computedVerticalViewGeneration (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                                                const GALGAS_autoLayoutViewInstructionGenerationList & in_mInstructionList
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_autoLayoutViewInstructionGenerationFuncCallList getter_mFuncCallList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMFuncCallList (GALGAS_autoLayoutViewInstructionGenerationFuncCallList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_autoLayoutViewInstructionGenerationList getter_mInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMInstructionList (GALGAS_autoLayoutViewInstructionGenerationList inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @hStackViewInstructionGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_hStackViewInstructionGeneration : public GALGAS_abstractViewInstructionGeneration {
//--- Constructor
  public : GALGAS_hStackViewInstructionGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_hStackViewInstructionGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_hStackViewInstructionGeneration * ptr (void) const { return (const cPtr_hStackViewInstructionGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_hStackViewInstructionGeneration (const cPtr_hStackViewInstructionGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_hStackViewInstructionGeneration extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_hStackViewInstructionGeneration constructor_new (const class GALGAS_autoLayoutViewInstructionGenerationFuncCallList & inOperand0,
                                                                                const class GALGAS_autoLayoutViewInstructionGenerationList & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_hStackViewInstructionGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMFuncCallList (class GALGAS_autoLayoutViewInstructionGenerationFuncCallList inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInstructionList (class GALGAS_autoLayoutViewInstructionGenerationList inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewInstructionGenerationFuncCallList getter_mFuncCallList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewInstructionGenerationList getter_mInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_hStackViewInstructionGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_hStackViewInstructionGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @hStackViewInstructionGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_hStackViewInstructionGeneration : public cPtr_abstractViewInstructionGeneration {
//--- Attributes
  public : GALGAS_autoLayoutViewInstructionGenerationFuncCallList mProperty_mFuncCallList ;
  public : GALGAS_autoLayoutViewInstructionGenerationList mProperty_mInstructionList ;

//--- Constructor
  public : cPtr_hStackViewInstructionGeneration (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                                                 const GALGAS_autoLayoutViewInstructionGenerationList & in_mInstructionList
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_autoLayoutViewInstructionGenerationFuncCallList getter_mFuncCallList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMFuncCallList (GALGAS_autoLayoutViewInstructionGenerationFuncCallList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_autoLayoutViewInstructionGenerationList getter_mInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMInstructionList (GALGAS_autoLayoutViewInstructionGenerationList inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @vStackViewInstructionGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_vStackViewInstructionGeneration : public GALGAS_abstractViewInstructionGeneration {
//--- Constructor
  public : GALGAS_vStackViewInstructionGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_vStackViewInstructionGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_vStackViewInstructionGeneration * ptr (void) const { return (const cPtr_vStackViewInstructionGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_vStackViewInstructionGeneration (const cPtr_vStackViewInstructionGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_vStackViewInstructionGeneration extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_vStackViewInstructionGeneration constructor_new (const class GALGAS_autoLayoutViewInstructionGenerationFuncCallList & inOperand0,
                                                                                const class GALGAS_autoLayoutViewInstructionGenerationList & inOperand1
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_vStackViewInstructionGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMFuncCallList (class GALGAS_autoLayoutViewInstructionGenerationFuncCallList inArgument0
                                                          COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMInstructionList (class GALGAS_autoLayoutViewInstructionGenerationList inArgument0
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewInstructionGenerationFuncCallList getter_mFuncCallList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutViewInstructionGenerationList getter_mInstructionList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_vStackViewInstructionGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_vStackViewInstructionGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @vStackViewInstructionGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_vStackViewInstructionGeneration : public cPtr_abstractViewInstructionGeneration {
//--- Attributes
  public : GALGAS_autoLayoutViewInstructionGenerationFuncCallList mProperty_mFuncCallList ;
  public : GALGAS_autoLayoutViewInstructionGenerationList mProperty_mInstructionList ;

//--- Constructor
  public : cPtr_vStackViewInstructionGeneration (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                                                 const GALGAS_autoLayoutViewInstructionGenerationList & in_mInstructionList
                                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_autoLayoutViewInstructionGenerationFuncCallList getter_mFuncCallList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMFuncCallList (GALGAS_autoLayoutViewInstructionGenerationFuncCallList inValue COMMA_LOCATION_ARGS) ;
  public : VIRTUAL_IN_DEBUG GALGAS_autoLayoutViewInstructionGenerationList getter_mInstructionList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMInstructionList (GALGAS_autoLayoutViewInstructionGenerationList inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutSpaceViewInstructionGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutSpaceViewInstructionGeneration : public GALGAS_abstractViewInstructionGeneration {
//--- Constructor
  public : GALGAS_autoLayoutSpaceViewInstructionGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_autoLayoutSpaceViewInstructionGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_autoLayoutSpaceViewInstructionGeneration * ptr (void) const { return (const cPtr_autoLayoutSpaceViewInstructionGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_autoLayoutSpaceViewInstructionGeneration (const cPtr_autoLayoutSpaceViewInstructionGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_autoLayoutSpaceViewInstructionGeneration extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_autoLayoutSpaceViewInstructionGeneration constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_autoLayoutSpaceViewInstructionGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutSpaceViewInstructionGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutSpaceViewInstructionGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @autoLayoutSpaceViewInstructionGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_autoLayoutSpaceViewInstructionGeneration : public cPtr_abstractViewInstructionGeneration {
//--- Attributes

//--- Constructor
  public : cPtr_autoLayoutSpaceViewInstructionGeneration (LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutLocalViewInstructionGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutLocalViewInstructionGeneration : public GALGAS_abstractViewInstructionGeneration {
//--- Constructor
  public : GALGAS_autoLayoutLocalViewInstructionGeneration (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_autoLayoutLocalViewInstructionGeneration constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_autoLayoutLocalViewInstructionGeneration * ptr (void) const { return (const cPtr_autoLayoutLocalViewInstructionGeneration *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_autoLayoutLocalViewInstructionGeneration (const cPtr_autoLayoutLocalViewInstructionGeneration * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_autoLayoutLocalViewInstructionGeneration extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_autoLayoutLocalViewInstructionGeneration constructor_new (const class GALGAS_string & inOperand0
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_autoLayoutLocalViewInstructionGeneration & inOperand) const ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_setMLocalView (class GALGAS_string inArgument0
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mLocalView (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutLocalViewInstructionGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutLocalViewInstructionGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @autoLayoutLocalViewInstructionGeneration class
//
//----------------------------------------------------------------------------------------------------------------------

class cPtr_autoLayoutLocalViewInstructionGeneration : public cPtr_abstractViewInstructionGeneration {
//--- Attributes
  public : GALGAS_string mProperty_mLocalView ;

//--- Constructor
  public : cPtr_autoLayoutLocalViewInstructionGeneration (const GALGAS_string & in_mLocalView
                                                          COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_string getter_mLocalView (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG void setter_setMLocalView (GALGAS_string inValue COMMA_LOCATION_ARGS) ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutRegularBindingsGenerationList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutRegularBindingsGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_autoLayoutRegularBindingsGenerationList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_autoLayoutRegularBindingsGenerationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mBindingName,
                                                  const class GALGAS_boundObjectList & in_mBoundObjectList,
                                                  const class GALGAS_string & in_mBindingOptionsString
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_autoLayoutRegularBindingsGenerationList extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_autoLayoutRegularBindingsGenerationList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_autoLayoutRegularBindingsGenerationList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                                  const class GALGAS_boundObjectList & inOperand1,
                                                                                                  const class GALGAS_string & inOperand2
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_autoLayoutRegularBindingsGenerationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_boundObjectList & inOperand1,
                                                      const class GALGAS_string & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_autoLayoutRegularBindingsGenerationList add_operation (const GALGAS_autoLayoutRegularBindingsGenerationList & inOperand,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_autoLayoutRegularBindingsGenerationList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                       class GALGAS_boundObjectList constinArgument1,
                                                       class GALGAS_string constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                  class GALGAS_boundObjectList & outArgument1,
                                                  class GALGAS_string & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                 class GALGAS_boundObjectList & outArgument1,
                                                 class GALGAS_string & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                       class GALGAS_boundObjectList & outArgument1,
                                                       class GALGAS_string & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMBindingNameAtIndex (class GALGAS_string constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMBindingOptionsStringAtIndex (class GALGAS_string constinArgument0,
                                                                         class GALGAS_uint constinArgument1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMBoundObjectListAtIndex (class GALGAS_boundObjectList constinArgument0,
                                                                    class GALGAS_uint constinArgument1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_boundObjectList & outArgument1,
                                               class GALGAS_string & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_boundObjectList & outArgument1,
                                              class GALGAS_string & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mBindingNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mBindingOptionsStringAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_boundObjectList getter_mBoundObjectListAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutRegularBindingsGenerationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutRegularBindingsGenerationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutRegularBindingsGenerationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_autoLayoutRegularBindingsGenerationList ;
 
} ; // End of GALGAS_autoLayoutRegularBindingsGenerationList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_autoLayoutRegularBindingsGenerationList : public cGenericAbstractEnumerator {
  public : cEnumerator_autoLayoutRegularBindingsGenerationList (const GALGAS_autoLayoutRegularBindingsGenerationList & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mBindingName (LOCATION_ARGS) const ;
  public : class GALGAS_boundObjectList current_mBoundObjectList (LOCATION_ARGS) const ;
  public : class GALGAS_string current_mBindingOptionsString (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_autoLayoutRegularBindingsGenerationList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutRegularBindingsGenerationList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutRegularBindingsGenerationList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutRegularBindingsGenerationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_string mProperty_mBindingName ;

  public : GALGAS_boundObjectList mProperty_mBoundObjectList ;

  public : GALGAS_string mProperty_mBindingOptionsString ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_autoLayoutRegularBindingsGenerationList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_autoLayoutRegularBindingsGenerationList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_autoLayoutRegularBindingsGenerationList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_autoLayoutRegularBindingsGenerationList_2D_element (const GALGAS_string & in_mBindingName,
                                                                      const GALGAS_boundObjectList & in_mBoundObjectList,
                                                                      const GALGAS_string & in_mBindingOptionsString) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_autoLayoutRegularBindingsGenerationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_autoLayoutRegularBindingsGenerationList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                                   const class GALGAS_boundObjectList & inOperand1,
                                                                                                   const class GALGAS_string & inOperand2
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_autoLayoutRegularBindingsGenerationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mBindingName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mBindingOptionsString (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_boundObjectList getter_mBoundObjectList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutRegularBindingsGenerationList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutRegularBindingsGenerationList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//                                         Phase 1: @propertyAccessibility enum                                        *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_propertyAccessibility : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_propertyAccessibility (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_stored,
    kEnum_computed,
    kEnum_transient
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
  public : static GALGAS_propertyAccessibility extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_propertyAccessibility constructor_computed (LOCATION_ARGS) ;

  public : static class GALGAS_propertyAccessibility constructor_stored (LOCATION_ARGS) ;

  public : static class GALGAS_propertyAccessibility constructor_transient (const class GALGAS_bool & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_propertyAccessibility & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_transient (class GALGAS_bool & outArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isComputed (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isStored (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isTransient (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public : VIRTUAL_IN_DEBUG bool optional_computed () const ;

  public : VIRTUAL_IN_DEBUG bool optional_stored () const ;

  public : VIRTUAL_IN_DEBUG bool optional_transient (class GALGAS_bool & outOperand0) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_propertyAccessibility class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyAccessibility ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @propertyKind enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_propertyKind_property : public cEnumAssociatedValues {
  public : const GALGAS_typeKind mAssociatedValue0 ;
  public : const GALGAS_propertyAccessibility mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_propertyKind_property (const GALGAS_typeKind & inAssociatedValue0,
                                                        const GALGAS_propertyAccessibility & inAssociatedValue1
                                                        COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_propertyKind_property (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_propertyKind_toMany : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;
  public : const GALGAS_propertyAccessibility mAssociatedValue1 ;
  public : const GALGAS_bool mAssociatedValue2 ;
  public : const GALGAS_toManyRelationshipOptionAST mAssociatedValue3 ;

//--- Constructor
  public : cEnumAssociatedValues_propertyKind_toMany (const GALGAS_lstring & inAssociatedValue0,
                                                      const GALGAS_propertyAccessibility & inAssociatedValue1,
                                                      const GALGAS_bool & inAssociatedValue2,
                                                      const GALGAS_toManyRelationshipOptionAST & inAssociatedValue3
                                                      COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_propertyKind_toMany (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_propertyKind_toOne : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;
  public : const GALGAS_propertyAccessibility mAssociatedValue1 ;
  public : const GALGAS_bool mAssociatedValue2 ;
  public : const GALGAS_toOneOppositeRelationship mAssociatedValue3 ;

//--- Constructor
  public : cEnumAssociatedValues_propertyKind_toOne (const GALGAS_lstring & inAssociatedValue0,
                                                     const GALGAS_propertyAccessibility & inAssociatedValue1,
                                                     const GALGAS_bool & inAssociatedValue2,
                                                     const GALGAS_toOneOppositeRelationship & inAssociatedValue3
                                                     COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_propertyKind_toOne (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_propertyKind_arrayController : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;
  public : const GALGAS_bool mAssociatedValue1 ;

//--- Constructor
  public : cEnumAssociatedValues_propertyKind_arrayController (const GALGAS_lstring & inAssociatedValue0,
                                                               const GALGAS_bool & inAssociatedValue1
                                                               COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_propertyKind_arrayController (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_propertyKind_selectionController : public cEnumAssociatedValues {
  public : const GALGAS_string mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_propertyKind_selectionController (const GALGAS_string & inAssociatedValue0
                                                                   COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_propertyKind_selectionController (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @boundObjectList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_boundObjectList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_string mProperty_mBoundObjectString ;

  public : GALGAS_propertyKind mProperty_mKind ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_boundObjectList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_boundObjectList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_boundObjectList_2D_element (const GALGAS_string & in_mBoundObjectString,
                                              const GALGAS_propertyKind & in_mKind) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_boundObjectList_2D_element extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_boundObjectList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                           const class GALGAS_propertyKind & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_boundObjectList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mBoundObjectString (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyKind getter_mKind (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_boundObjectList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boundObjectList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutMultipleBindingGenerationList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutMultipleBindingGenerationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_autoLayoutMultipleBindingGenerationList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_autoLayoutMultipleBindingGenerationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mBindingName,
                                                  const class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBoundObjectExpression
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_autoLayoutMultipleBindingGenerationList extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_autoLayoutMultipleBindingGenerationList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_autoLayoutMultipleBindingGenerationList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                                                                  const class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand1
                                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_autoLayoutMultipleBindingGenerationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_autoLayoutMultipleBindingGenerationList add_operation (const GALGAS_autoLayoutMultipleBindingGenerationList & inOperand,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_autoLayoutMultipleBindingGenerationList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                       class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                  class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                 class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                       class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMBindingNameAtIndex (class GALGAS_string constinArgument0,
                                                                class GALGAS_uint constinArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMBoundObjectExpressionAtIndex (class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration constinArgument0,
                                                                          class GALGAS_uint constinArgument1,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mBindingNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration getter_mBoundObjectExpressionAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                                                                     C_Compiler * inCompiler
                                                                                                                                     COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutMultipleBindingGenerationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutMultipleBindingGenerationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_autoLayoutMultipleBindingGenerationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_autoLayoutMultipleBindingGenerationList ;
 
} ; // End of GALGAS_autoLayoutMultipleBindingGenerationList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_autoLayoutMultipleBindingGenerationList : public cGenericAbstractEnumerator {
  public : cEnumerator_autoLayoutMultipleBindingGenerationList (const GALGAS_autoLayoutMultipleBindingGenerationList & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mBindingName (LOCATION_ARGS) const ;
  public : class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration current_mBoundObjectExpression (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_autoLayoutMultipleBindingGenerationList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutMultipleBindingGenerationList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutMultipleBindingGenerationList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutMultipleBindingGenerationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_string mProperty_mBindingName ;

  public : GALGAS_abstractBooleanMultipleBindingExpressionForGeneration mProperty_mBoundObjectExpression ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_autoLayoutMultipleBindingGenerationList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_autoLayoutMultipleBindingGenerationList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_autoLayoutMultipleBindingGenerationList_2D_element (const GALGAS_string & in_mBindingName,
                                                                      const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBoundObjectExpression) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_autoLayoutMultipleBindingGenerationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_autoLayoutMultipleBindingGenerationList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                                   const class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand1
                                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_autoLayoutMultipleBindingGenerationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mBindingName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractBooleanMultipleBindingExpressionForGeneration getter_mBoundObjectExpression (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutMultipleBindingGenerationList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutMultipleBindingGenerationList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//                           Phase 1: @autoLayoutViewGraphicControllerBindingGeneration enum                           *
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutViewGraphicControllerBindingGeneration : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_autoLayoutViewGraphicControllerBindingGeneration (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_none,
    kEnum_binding
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
  public : static GALGAS_autoLayoutViewGraphicControllerBindingGeneration extractObject (const GALGAS_object & inObject,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_autoLayoutViewGraphicControllerBindingGeneration constructor_binding (const class GALGAS_string & inOperand0
                                                                                                     COMMA_LOCATION_ARGS) ;

  public : static class GALGAS_autoLayoutViewGraphicControllerBindingGeneration constructor_none (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_autoLayoutViewGraphicControllerBindingGeneration & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_binding (class GALGAS_string & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBinding (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNone (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public : VIRTUAL_IN_DEBUG bool optional_binding (class GALGAS_string & outOperand0) const ;

  public : VIRTUAL_IN_DEBUG bool optional_none () const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutViewGraphicControllerBindingGeneration class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewGraphicControllerBindingGeneration ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: @autoLayoutViewGraphicControllerBindingGeneration enum, associated values
//
//----------------------------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_autoLayoutViewGraphicControllerBindingGeneration_binding : public cEnumAssociatedValues {
  public : const GALGAS_string mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_autoLayoutViewGraphicControllerBindingGeneration_binding (const GALGAS_string & inAssociatedValue0
                                                                                           COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_autoLayoutViewGraphicControllerBindingGeneration_binding (void) {}
} ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @autoLayoutViewInstructionGenerationParameterList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_string mProperty_mParameterName ;

  public : GALGAS_string mProperty_mParameterValue ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element (const GALGAS_string & in_mParameterName,
                                                                               const GALGAS_string & in_mParameterValue) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                                                                            const class GALGAS_string & inOperand1
                                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mParameterName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mParameterValue (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@autoLayoutViewInstructionGenerationFuncCallList generate'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_generate (const class GALGAS_autoLayoutViewInstructionGenerationFuncCallList inObject,
                               const class GALGAS_string constin_inIndentation,
                               class GALGAS_string & io_ioStr,
                               class C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractViewGeneration generate'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_string (*enterExtensionGetter_abstractViewGeneration_generate) (const class cPtr_abstractViewGeneration * inObject,
                                                                                     const class GALGAS_string constinArgument0,
                                                                                     class C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_generate (const int32_t inClassIndex,
                                    enterExtensionGetter_abstractViewGeneration_generate inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_generate (const class cPtr_abstractViewGeneration * inObject,
                                                  const GALGAS_string constin_inViewName,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractViewInstructionGeneration generate'
//
//----------------------------------------------------------------------------------------------------------------------

typedef class GALGAS_string (*enterExtensionGetter_abstractViewInstructionGeneration_generate) (const class cPtr_abstractViewInstructionGeneration * inObject,
                                                                                                const class GALGAS_string constinArgument0,
                                                                                                const class GALGAS_string constinArgument1,
                                                                                                class C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_generate (const int32_t inClassIndex,
                                    enterExtensionGetter_abstractViewInstructionGeneration_generate inMethod) ;

//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string callExtensionGetter_generate (const class cPtr_abstractViewInstructionGeneration * inObject,
                                                  const GALGAS_string constin_inName,
                                                  const GALGAS_string constin_inIndentation,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@outletBindingSpecificationMap' map
//
//----------------------------------------------------------------------------------------------------------------------

class cMapElement_outletBindingSpecificationMap : public cMapElement {
//--- Map attributes
  public : GALGAS_outletBindingSpecificationModelList mProperty_mOutletBindingSpecificationModelList ;
  public : GALGAS_controllerBindingOptionDecoratedList mProperty_mControllerBindingOptionList ;

//--- Constructor
  public : cMapElement_outletBindingSpecificationMap (const GALGAS_lstring & inKey,
                                                      const GALGAS_outletBindingSpecificationModelList & in_mOutletBindingSpecificationModelList,
                                                      const GALGAS_controllerBindingOptionDecoratedList & in_mControllerBindingOptionList
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
//
// Phase 1: @outletBindingSpecificationMap_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_outletBindingSpecificationMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_lkey ;

  public : GALGAS_outletBindingSpecificationModelList mProperty_mOutletBindingSpecificationModelList ;

  public : GALGAS_controllerBindingOptionDecoratedList mProperty_mControllerBindingOptionList ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_outletBindingSpecificationMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_outletBindingSpecificationMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_outletBindingSpecificationMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_outletBindingSpecificationMap_2D_element (const GALGAS_lstring & in_lkey,
                                                            const GALGAS_outletBindingSpecificationModelList & in_mOutletBindingSpecificationModelList,
                                                            const GALGAS_controllerBindingOptionDecoratedList & in_mControllerBindingOptionList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_outletBindingSpecificationMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_outletBindingSpecificationMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                         const class GALGAS_outletBindingSpecificationModelList & inOperand1,
                                                                                         const class GALGAS_controllerBindingOptionDecoratedList & inOperand2
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_outletBindingSpecificationMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_controllerBindingOptionDecoratedList getter_mControllerBindingOptionList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletBindingSpecificationModelList getter_mOutletBindingSpecificationModelList (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_outletBindingSpecificationMap_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletBindingSpecificationMap_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @bindingOptionList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_bindingOptionList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_lstring mProperty_mOptionName ;

  public : GALGAS_abstractDefaultValue mProperty_mOptionValue ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_bindingOptionList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_bindingOptionList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_bindingOptionList_2D_element (const GALGAS_lstring & in_mOptionName,
                                                const GALGAS_abstractDefaultValue & in_mOptionValue) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_bindingOptionList_2D_element extractObject (const GALGAS_object & inObject,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_bindingOptionList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_abstractDefaultValue & inOperand1
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_bindingOptionList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mOptionName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_abstractDefaultValue getter_mOptionValue (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_bindingOptionList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bindingOptionList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @outletBindingModelList list
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_outletBindingModelList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_outletBindingModelList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_outletBindingModelList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_propertyKind & in_mKind,
                                                  const class GALGAS_location & in_mErrorLocation
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_outletBindingModelList extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_outletBindingModelList constructor_emptyList (LOCATION_ARGS) ;

  public : static class GALGAS_outletBindingModelList constructor_listWithValue (const class GALGAS_propertyKind & inOperand0,
                                                                                 const class GALGAS_location & inOperand1
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_outletBindingModelList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_propertyKind & inOperand0,
                                                      const class GALGAS_location & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_outletBindingModelList add_operation (const GALGAS_outletBindingModelList & inOperand,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_append (class GALGAS_outletBindingModelList_2D_element inArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_propertyKind constinArgument0,
                                                       class GALGAS_location constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_propertyKind & outArgument0,
                                                  class GALGAS_location & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_propertyKind & outArgument0,
                                                 class GALGAS_location & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_propertyKind & outArgument0,
                                                       class GALGAS_location & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMErrorLocationAtIndex (class GALGAS_location constinArgument0,
                                                                  class GALGAS_uint constinArgument1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMKindAtIndex (class GALGAS_propertyKind constinArgument0,
                                                         class GALGAS_uint constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_propertyKind & outArgument0,
                                               class GALGAS_location & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_propertyKind & outArgument0,
                                              class GALGAS_location & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mErrorLocationAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyKind getter_mKindAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletBindingModelList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletBindingModelList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_outletBindingModelList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_outletBindingModelList ;
 
} ; // End of GALGAS_outletBindingModelList class

//----------------------------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//----------------------------------------------------------------------------------------------------------------------

class cEnumerator_outletBindingModelList : public cGenericAbstractEnumerator {
  public : cEnumerator_outletBindingModelList (const GALGAS_outletBindingModelList & inEnumeratedObject,
                                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_propertyKind current_mKind (LOCATION_ARGS) const ;
  public : class GALGAS_location current_mErrorLocation (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_outletBindingModelList_2D_element current (LOCATION_ARGS) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletBindingModelList ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @outletBindingModelList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_outletBindingModelList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_propertyKind mProperty_mKind ;

  public : GALGAS_location mProperty_mErrorLocation ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_outletBindingModelList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_outletBindingModelList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_outletBindingModelList_2D_element (const GALGAS_propertyKind & in_mKind,
                                                     const GALGAS_location & in_mErrorLocation) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_outletBindingModelList_2D_element extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_outletBindingModelList_2D_element constructor_new (const class GALGAS_propertyKind & inOperand0,
                                                                                  const class GALGAS_location & inOperand1
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_outletBindingModelList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_location getter_mErrorLocation (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_propertyKind getter_mKind (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_outletBindingModelList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletBindingModelList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
// Phase 1: @observablePropertyList_2D_element struct
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_observablePropertyList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public : GALGAS_observablePropertyAST mProperty_mObservableProperty ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_observablePropertyList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : virtual ~ GALGAS_observablePropertyList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_observablePropertyList_2D_element (const GALGAS_observablePropertyAST & in_mObservableProperty) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_observablePropertyList_2D_element extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static class GALGAS_observablePropertyList_2D_element constructor_new (const class GALGAS_observablePropertyAST & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_observablePropertyList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_observablePropertyAST getter_mObservableProperty (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_observablePropertyList_2D_element class


//----------------------------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyList_2D_element ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@observablePropertyAST modelStringForSelf' (as function)
//
//----------------------------------------------------------------------------------------------------------------------

class GALGAS_string extensionGetter_modelStringForSelf (const class GALGAS_observablePropertyAST & inObject,
                                                        const class GALGAS_string & constinArgument0,
                                                        class C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

